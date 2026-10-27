#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80063A44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80063A44: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80063A48: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x80063A4C: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x80063A50: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80063A54: addiu       $t6, $zero, 0x7C4
    ctx->r14 = ADD32(0, 0X7C4);
    // 0x80063A58: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x80063A5C: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x80063A60: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x80063A64: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x80063A68: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x80063A6C: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x80063A70: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80063A74: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x80063A78: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x80063A7C: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80063A80: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x80063A84: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80063A88: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80063A8C: sw          $t6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r14;
    // 0x80063A90: addiu       $s0, $zero, 0x2
    ctx->r16 = ADD32(0, 0X2);
    // 0x80063A94: jal         0x8005E454
    // 0x80063A98: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    func_8005E454(rdram, ctx);
        goto after_0;
    // 0x80063A98: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    after_0:
    // 0x80063A9C: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x80063AA0: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80063AA4: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80063AA8: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80063AAC: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80063AB0: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x80063AB4: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80063AB8: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80063ABC: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80063AC0: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x80063AC4: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x80063AC8: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x80063ACC: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x80063AD0: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x80063AD4: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x80063AD8: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x80063ADC: jr          $ra
    // 0x80063AE0: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x80063AE0: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_80063AE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80063AE4: addiu       $sp, $sp, -0x128
    ctx->r29 = ADD32(ctx->r29, -0X128);
    // 0x80063AE8: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x80063AEC: sw          $s7, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r23;
    // 0x80063AF0: sw          $s6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r22;
    // 0x80063AF4: sw          $s5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r21;
    // 0x80063AF8: sw          $s4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r20;
    // 0x80063AFC: sw          $s3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r19;
    // 0x80063B00: sw          $s2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r18;
    // 0x80063B04: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x80063B08: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x80063B0C: swc1        $f25, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x80063B10: swc1        $f24, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f24.u32l;
    // 0x80063B14: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80063B18: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x80063B1C: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80063B20: jal         0x80007774
    // 0x80063B24: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x80063B24: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x80063B28: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80063B2C: addiu       $t6, $t6, 0x22A4
    ctx->r14 = ADD32(ctx->r14, 0X22A4);
    // 0x80063B30: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x80063B34: addiu       $s6, $sp, 0x100
    ctx->r22 = ADD32(ctx->r29, 0X100);
    // 0x80063B38: lw          $s7, 0x1C($v0)
    ctx->r23 = MEM_W(ctx->r2, 0X1C);
    // 0x80063B3C: sw          $at, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r1;
    // 0x80063B40: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x80063B44: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x80063B48: sw          $t9, 0x4($s6)
    MEM_W(0X4, ctx->r22) = ctx->r25;
    // 0x80063B4C: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x80063B50: addiu       $t7, $t7, 0x22B0
    ctx->r15 = ADD32(ctx->r15, 0X22B0);
    // 0x80063B54: sw          $at, 0x8($s6)
    MEM_W(0X8, ctx->r22) = ctx->r1;
    // 0x80063B58: lw          $t9, 0x4($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X4);
    // 0x80063B5C: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x80063B60: addiu       $t8, $sp, 0xE8
    ctx->r24 = ADD32(ctx->r29, 0XE8);
    // 0x80063B64: sw          $t9, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r25;
    // 0x80063B68: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x80063B6C: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x80063B70: lw          $t9, 0xC($t7)
    ctx->r25 = MEM_W(ctx->r15, 0XC);
    // 0x80063B74: sw          $at, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r1;
    // 0x80063B78: sw          $t9, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->r25;
    // 0x80063B7C: lw          $t9, 0x14($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X14);
    // 0x80063B80: lw          $at, 0x10($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X10);
    // 0x80063B84: sw          $t9, 0x14($t8)
    MEM_W(0X14, ctx->r24) = ctx->r25;
    // 0x80063B88: sw          $at, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->r1;
    // 0x80063B8C: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x80063B90: addiu       $t8, $t8, 0x22C8
    ctx->r24 = ADD32(ctx->r24, 0X22C8);
    // 0x80063B94: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x80063B98: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x80063B9C: addiu       $t6, $sp, 0xD0
    ctx->r14 = ADD32(ctx->r29, 0XD0);
    // 0x80063BA0: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x80063BA4: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    // 0x80063BA8: lw          $t9, 0xC($t8)
    ctx->r25 = MEM_W(ctx->r24, 0XC);
    // 0x80063BAC: lw          $at, 0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X8);
    // 0x80063BB0: sw          $t9, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->r25;
    // 0x80063BB4: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x80063BB8: lw          $at, 0x10($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X10);
    // 0x80063BBC: lw          $t9, 0x14($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X14);
    // 0x80063BC0: sw          $at, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->r1;
    // 0x80063BC4: sw          $t9, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->r25;
    // 0x80063BC8: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80063BCC: addiu       $t6, $t6, 0x22E0
    ctx->r14 = ADD32(ctx->r14, 0X22E0);
    // 0x80063BD0: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x80063BD4: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x80063BD8: addiu       $t7, $sp, 0x84
    ctx->r15 = ADD32(ctx->r29, 0X84);
    // 0x80063BDC: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x80063BE0: addiu       $s1, $sp, 0x118
    ctx->r17 = ADD32(ctx->r29, 0X118);
    // 0x80063BE4: addiu       $s2, $sp, 0xE8
    ctx->r18 = ADD32(ctx->r29, 0XE8);
    // 0x80063BE8: addiu       $s3, $sp, 0x100
    ctx->r19 = ADD32(ctx->r29, 0X100);
    // 0x80063BEC: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x80063BF0: sw          $t9, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r25;
L_80063BF4:
    // 0x80063BF4: addiu       $a0, $zero, 0x772
    ctx->r4 = ADD32(0, 0X772);
    // 0x80063BF8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80063BFC: jal         0x8001D138
    // 0x80063C00: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x80063C00: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80063C04: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80063C08: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80063C0C: jal         0x80019164
    // 0x80063C10: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x80063C10: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    after_2:
    // 0x80063C14: sw          $s0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r16;
    // 0x80063C18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80063C1C: jal         0x8001913C
    // 0x80063C20: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_8001913C(rdram, ctx);
        goto after_3;
    // 0x80063C20: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_3:
    // 0x80063C24: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80063C28: jal         0x80019114
    // 0x80063C2C: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    func_80019114(rdram, ctx);
        goto after_4;
    // 0x80063C2C: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    after_4:
    // 0x80063C30: addiu       $s2, $s2, 0xC
    ctx->r18 = ADD32(ctx->r18, 0XC);
    // 0x80063C34: sltu        $at, $s2, $s3
    ctx->r1 = ctx->r18 < ctx->r19 ? 1 : 0;
    // 0x80063C38: bne         $at, $zero, L_80063BF4
    if (ctx->r1 != 0) {
        // 0x80063C3C: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_80063BF4;
    }
    // 0x80063C3C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80063C40: lwc1        $f4, 0x0($s7)
    ctx->f4.u32l = MEM_W(ctx->r23, 0X0);
    // 0x80063C44: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80063C48: swc1        $f4, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f4.u32l;
    // 0x80063C4C: lwc1        $f6, 0x4($s7)
    ctx->f6.u32l = MEM_W(ctx->r23, 0X4);
    // 0x80063C50: lwc1        $f12, 0xC4($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x80063C54: swc1        $f6, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f6.u32l;
    // 0x80063C58: lwc1        $f8, 0x8($s7)
    ctx->f8.u32l = MEM_W(ctx->r23, 0X8);
    // 0x80063C5C: lwc1        $f14, 0xC8($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x80063C60: swc1        $f8, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f8.u32l;
    // 0x80063C64: lwc1        $f16, 0xCC($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x80063C68: lwc1        $f0, 0x6360($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6360);
    // 0x80063C6C: addiu       $v0, $sp, 0xAC
    ctx->r2 = ADD32(ctx->r29, 0XAC);
    // 0x80063C70: addiu       $v1, $sp, 0x9C
    ctx->r3 = ADD32(ctx->r29, 0X9C);
    // 0x80063C74: addiu       $s2, $sp, 0xC4
    ctx->r18 = ADD32(ctx->r29, 0XC4);
    // 0x80063C78: addiu       $a1, $sp, 0xAC
    ctx->r5 = ADD32(ctx->r29, 0XAC);
    // 0x80063C7C: addiu       $a0, $sp, 0x9C
    ctx->r4 = ADD32(ctx->r29, 0X9C);
L_80063C80:
    // 0x80063C80: bne         $v1, $a0, L_80063C94
    if (ctx->r3 != ctx->r4) {
        // 0x80063C84: nop
    
            goto L_80063C94;
    }
    // 0x80063C84: nop

    // 0x80063C88: add.s       $f10, $f12, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f12.fl + ctx->f0.fl;
    // 0x80063C8C: b           L_80063C9C
    // 0x80063C90: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
        goto L_80063C9C;
    // 0x80063C90: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
L_80063C94:
    // 0x80063C94: sub.s       $f4, $f12, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x80063C98: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
L_80063C9C:
    // 0x80063C9C: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x80063CA0: sw          $v0, -0x8($v1)
    MEM_W(-0X8, ctx->r3) = ctx->r2;
    // 0x80063CA4: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
    // 0x80063CA8: swc1        $f14, -0x8($v0)
    MEM_W(-0X8, ctx->r2) = ctx->f14.u32l;
    // 0x80063CAC: swc1        $f16, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->f16.u32l;
    // 0x80063CB0: bne         $v1, $a1, L_80063C80
    if (ctx->r3 != ctx->r5) {
        // 0x80063CB4: sw          $s2, -0x4($v1)
        MEM_W(-0X4, ctx->r3) = ctx->r18;
            goto L_80063C80;
    }
    // 0x80063CB4: sw          $s2, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r18;
    // 0x80063CB8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80063CBC: lwc1        $f24, 0x6364($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X6364);
    // 0x80063CC0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80063CC4: lwc1        $f22, 0x6368($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X6368);
    // 0x80063CC8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80063CCC: lwc1        $f20, 0x636C($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X636C);
    // 0x80063CD0: addiu       $s4, $sp, 0xC4
    ctx->r20 = ADD32(ctx->r29, 0XC4);
    // 0x80063CD4: addiu       $s3, $sp, 0x120
    ctx->r19 = ADD32(ctx->r29, 0X120);
L_80063CD8:
    // 0x80063CD8: lw          $v0, 0x24($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X24);
    // 0x80063CDC: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x80063CE0: andi        $t8, $v0, 0x4000
    ctx->r24 = ctx->r2 & 0X4000;
    // 0x80063CE4: bne         $t8, $zero, L_80063F30
    if (ctx->r24 != 0) {
        // 0x80063CE8: andi        $t7, $v0, 0x800
        ctx->r15 = ctx->r2 & 0X800;
            goto L_80063F30;
    }
    // 0x80063CE8: andi        $t7, $v0, 0x800
    ctx->r15 = ctx->r2 & 0X800;
    // 0x80063CEC: beq         $t7, $zero, L_80063D2C
    if (ctx->r15 == 0) {
        // 0x80063CF0: slti        $at, $s5, 0x8
        ctx->r1 = SIGNED(ctx->r21) < 0X8 ? 1 : 0;
            goto L_80063D2C;
    }
    // 0x80063CF0: slti        $at, $s5, 0x8
    ctx->r1 = SIGNED(ctx->r21) < 0X8 ? 1 : 0;
    // 0x80063CF4: lwc1        $f6, 0x0($s7)
    ctx->f6.u32l = MEM_W(ctx->r23, 0X0);
    // 0x80063CF8: addiu       $at, $zero, -0x801
    ctx->r1 = ADD32(0, -0X801);
    // 0x80063CFC: swc1        $f6, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f6.u32l;
    // 0x80063D00: lwc1        $f8, 0x4($s7)
    ctx->f8.u32l = MEM_W(ctx->r23, 0X4);
    // 0x80063D04: nop

    // 0x80063D08: swc1        $f8, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f8.u32l;
    // 0x80063D0C: lwc1        $f10, 0x8($s7)
    ctx->f10.u32l = MEM_W(ctx->r23, 0X8);
    // 0x80063D10: nop

    // 0x80063D14: swc1        $f10, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f10.u32l;
    // 0x80063D18: lw          $t6, 0x24($s7)
    ctx->r14 = MEM_W(ctx->r23, 0X24);
    // 0x80063D1C: nop

    // 0x80063D20: and         $t9, $t6, $at
    ctx->r25 = ctx->r14 & ctx->r1;
    // 0x80063D24: sw          $t9, 0x24($s7)
    MEM_W(0X24, ctx->r23) = ctx->r25;
    // 0x80063D28: slti        $at, $s5, 0x8
    ctx->r1 = SIGNED(ctx->r21) < 0X8 ? 1 : 0;
L_80063D2C:
    // 0x80063D2C: beq         $at, $zero, L_80063D60
    if (ctx->r1 == 0) {
        // 0x80063D30: lui         $at, 0x3E00
        ctx->r1 = S32(0X3E00 << 16);
            goto L_80063D60;
    }
    // 0x80063D30: lui         $at, 0x3E00
    ctx->r1 = S32(0X3E00 << 16);
    // 0x80063D34: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80063D38: lwc1        $f4, 0x100($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X100);
    // 0x80063D3C: lw          $a0, 0x118($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X118);
    // 0x80063D40: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80063D44: jal         0x80019114
    // 0x80063D48: swc1        $f8, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f8.u32l;
    func_80019114(rdram, ctx);
        goto after_5;
    // 0x80063D48: swc1        $f8, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f8.u32l;
    after_5:
    // 0x80063D4C: lw          $a0, 0x11C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X11C);
    // 0x80063D50: jal         0x80019114
    // 0x80063D54: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    func_80019114(rdram, ctx);
        goto after_6;
    // 0x80063D54: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    after_6:
    // 0x80063D58: b           L_80063DDC
    // 0x80063D5C: addiu       $s0, $sp, 0xE8
    ctx->r16 = ADD32(ctx->r29, 0XE8);
        goto L_80063DDC;
    // 0x80063D5C: addiu       $s0, $sp, 0xE8
    ctx->r16 = ADD32(ctx->r29, 0XE8);
L_80063D60:
    // 0x80063D60: slti        $at, $s5, 0xB
    ctx->r1 = SIGNED(ctx->r21) < 0XB ? 1 : 0;
    // 0x80063D64: beq         $at, $zero, L_80063DA0
    if (ctx->r1 == 0) {
        // 0x80063D68: or          $a1, $s6, $zero
        ctx->r5 = ctx->r22 | 0;
            goto L_80063DA0;
    }
    // 0x80063D68: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x80063D6C: lwc1        $f10, 0x104($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X104);
    // 0x80063D70: lwc1        $f6, 0x108($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X108);
    // 0x80063D74: add.s       $f4, $f10, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f24.fl;
    // 0x80063D78: lw          $a0, 0x118($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X118);
    // 0x80063D7C: add.s       $f8, $f6, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f24.fl;
    // 0x80063D80: swc1        $f4, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f4.u32l;
    // 0x80063D84: jal         0x80019114
    // 0x80063D88: swc1        $f8, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f8.u32l;
    func_80019114(rdram, ctx);
        goto after_7;
    // 0x80063D88: swc1        $f8, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f8.u32l;
    after_7:
    // 0x80063D8C: lw          $a0, 0x11C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X11C);
    // 0x80063D90: jal         0x80019114
    // 0x80063D94: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    func_80019114(rdram, ctx);
        goto after_8;
    // 0x80063D94: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    after_8:
    // 0x80063D98: b           L_80063DDC
    // 0x80063D9C: addiu       $s0, $sp, 0xE8
    ctx->r16 = ADD32(ctx->r29, 0XE8);
        goto L_80063DDC;
    // 0x80063D9C: addiu       $s0, $sp, 0xE8
    ctx->r16 = ADD32(ctx->r29, 0XE8);
L_80063DA0:
    // 0x80063DA0: slti        $at, $s5, 0xD
    ctx->r1 = SIGNED(ctx->r21) < 0XD ? 1 : 0;
    // 0x80063DA4: beq         $at, $zero, L_80063DD8
    if (ctx->r1 == 0) {
        // 0x80063DA8: or          $a1, $s6, $zero
        ctx->r5 = ctx->r22 | 0;
            goto L_80063DD8;
    }
    // 0x80063DA8: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x80063DAC: lwc1        $f10, 0x104($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X104);
    // 0x80063DB0: lwc1        $f6, 0x108($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X108);
    // 0x80063DB4: sub.s       $f4, $f10, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f24.fl;
    // 0x80063DB8: lw          $a0, 0x118($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X118);
    // 0x80063DBC: sub.s       $f8, $f6, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f24.fl;
    // 0x80063DC0: swc1        $f4, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f4.u32l;
    // 0x80063DC4: jal         0x80019114
    // 0x80063DC8: swc1        $f8, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f8.u32l;
    func_80019114(rdram, ctx);
        goto after_9;
    // 0x80063DC8: swc1        $f8, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f8.u32l;
    after_9:
    // 0x80063DCC: lw          $a0, 0x11C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X11C);
    // 0x80063DD0: jal         0x80019114
    // 0x80063DD4: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    func_80019114(rdram, ctx);
        goto after_10;
    // 0x80063DD4: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    after_10:
L_80063DD8:
    // 0x80063DD8: addiu       $s0, $sp, 0xE8
    ctx->r16 = ADD32(ctx->r29, 0XE8);
L_80063DDC:
    // 0x80063DDC: addiu       $s1, $sp, 0x118
    ctx->r17 = ADD32(ctx->r29, 0X118);
L_80063DE0:
    // 0x80063DE0: lwc1        $f10, 0x4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4);
    // 0x80063DE4: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80063DE8: add.s       $f4, $f10, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f20.fl;
    // 0x80063DEC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80063DF0: jal         0x8001913C
    // 0x80063DF4: swc1        $f4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f4.u32l;
    func_8001913C(rdram, ctx);
        goto after_11;
    // 0x80063DF4: swc1        $f4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f4.u32l;
    after_11:
    // 0x80063DF8: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80063DFC: jal         0x80019164
    // 0x80063E00: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_80019164(rdram, ctx);
        goto after_12;
    // 0x80063E00: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_12:
    // 0x80063E04: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80063E08: bne         $s1, $s3, L_80063DE0
    if (ctx->r17 != ctx->r19) {
        // 0x80063E0C: addiu       $s0, $s0, 0xC
        ctx->r16 = ADD32(ctx->r16, 0XC);
            goto L_80063DE0;
    }
    // 0x80063E0C: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x80063E10: lwc1        $f12, 0xEC($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x80063E14: jal         0x8007A800
    // 0x80063E18: nop

    __cosf_recomp(rdram, ctx);
        goto after_13;
    // 0x80063E18: nop

    after_13:
    // 0x80063E1C: neg.s       $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = -ctx->f0.fl;
    // 0x80063E20: lwc1        $f12, 0xEC($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XEC);
    // 0x80063E24: jal         0x8007A640
    // 0x80063E28: swc1        $f6, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f6.u32l;
    __sinf_recomp(rdram, ctx);
        goto after_14;
    // 0x80063E28: swc1        $f6, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f6.u32l;
    after_14:
    // 0x80063E2C: lwc1        $f8, 0xD0($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XD0);
    // 0x80063E30: neg.s       $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = -ctx->f0.fl;
    // 0x80063E34: mul.s       $f4, $f8, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f22.fl);
    // 0x80063E38: swc1        $f10, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f10.u32l;
    // 0x80063E3C: lwc1        $f12, 0xC4($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x80063E40: lwc1        $f16, 0xCC($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XCC);
    // 0x80063E44: mul.s       $f10, $f0, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x80063E48: neg.s       $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = -ctx->f8.fl;
    // 0x80063E4C: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80063E50: addiu       $t6, $t6, 0x2284
    ctx->r14 = ADD32(ctx->r14, 0X2284);
    // 0x80063E54: add.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f12.fl;
    // 0x80063E58: lwc1        $f14, 0xC8($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XC8);
    // 0x80063E5C: add.s       $f8, $f10, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80063E60: lwc1        $f10, 0xE4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x80063E64: mul.s       $f4, $f18, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f22.fl);
    // 0x80063E68: swc1        $f8, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f8.u32l;
    // 0x80063E6C: swc1        $f6, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f6.u32l;
    // 0x80063E70: swc1        $f18, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f18.u32l;
    // 0x80063E74: mul.s       $f8, $f10, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x80063E78: add.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f12.fl;
    // 0x80063E7C: addiu       $v1, $sp, 0x9C
    ctx->r3 = ADD32(ctx->r29, 0X9C);
    // 0x80063E80: swc1        $f6, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f6.u32l;
    // 0x80063E84: add.s       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x80063E88: addiu       $v0, $sp, 0xAC
    ctx->r2 = ADD32(ctx->r29, 0XAC);
    // 0x80063E8C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x80063E90: swc1        $f4, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f4.u32l;
    // 0x80063E94: swc1        $f2, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f2.u32l;
    // 0x80063E98: swc1        $f14, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f14.u32l;
    // 0x80063E9C: bgez        $s5, L_80063EB0
    if (SIGNED(ctx->r21) >= 0) {
        // 0x80063EA0: andi        $t8, $s5, 0x3
        ctx->r24 = ctx->r21 & 0X3;
            goto L_80063EB0;
    }
    // 0x80063EA0: andi        $t8, $s5, 0x3
    ctx->r24 = ctx->r21 & 0X3;
    // 0x80063EA4: beq         $t8, $zero, L_80063EB0
    if (ctx->r24 == 0) {
        // 0x80063EA8: nop
    
            goto L_80063EB0;
    }
    // 0x80063EA8: nop

    // 0x80063EAC: addiu       $t8, $t8, -0x4
    ctx->r24 = ADD32(ctx->r24, -0X4);
L_80063EB0:
    // 0x80063EB0: sll         $t7, $t8, 3
    ctx->r15 = S32(ctx->r24 << 3);
    // 0x80063EB4: addu        $a0, $t7, $t6
    ctx->r4 = ADD32(ctx->r15, ctx->r14);
    // 0x80063EB8: lw          $a1, 0x0($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X0);
    // 0x80063EBC: lw          $a2, 0x4($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X4);
    // 0x80063EC0: swc1        $f14, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f14.u32l;
    // 0x80063EC4: sw          $a1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r5;
    // 0x80063EC8: sw          $a1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r5;
    // 0x80063ECC: sw          $a2, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r6;
    // 0x80063ED0: sw          $a2, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r6;
L_80063ED4:
    // 0x80063ED4: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x80063ED8: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
    // 0x80063EDC: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x80063EE0: bne         $v0, $s4, L_80063ED4
    if (ctx->r2 != ctx->r20) {
        // 0x80063EE4: sw          $s2, -0x4($v1)
        MEM_W(-0X4, ctx->r3) = ctx->r18;
            goto L_80063ED4;
    }
    // 0x80063EE4: sw          $s2, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r18;
    // 0x80063EE8: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x80063EEC: bne         $s5, $at, L_80063F20
    if (ctx->r21 != ctx->r1) {
        // 0x80063EF0: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_80063F20;
    }
    // 0x80063EF0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80063EF4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80063EF8: addiu       $a2, $sp, 0x9C
    ctx->r6 = ADD32(ctx->r29, 0X9C);
    // 0x80063EFC: jal         0x8001B61C
    // 0x80063F00: addiu       $a3, $sp, 0x8C
    ctx->r7 = ADD32(ctx->r29, 0X8C);
    func_8001B61C(rdram, ctx);
        goto after_15;
    // 0x80063F00: addiu       $a3, $sp, 0x8C
    ctx->r7 = ADD32(ctx->r29, 0X8C);
    after_15:
    // 0x80063F04: sw          $v0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r2;
    // 0x80063F08: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80063F0C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80063F10: addiu       $a2, $sp, 0xA4
    ctx->r6 = ADD32(ctx->r29, 0XA4);
    // 0x80063F14: jal         0x8001B61C
    // 0x80063F18: addiu       $a3, $sp, 0x94
    ctx->r7 = ADD32(ctx->r29, 0X94);
    func_8001B61C(rdram, ctx);
        goto after_16;
    // 0x80063F18: addiu       $a3, $sp, 0x94
    ctx->r7 = ADD32(ctx->r29, 0X94);
    after_16:
    // 0x80063F1C: sw          $v0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r2;
L_80063F20:
    // 0x80063F20: jal         0x80007AB0
    // 0x80063F24: nop

    func_80007AB0(rdram, ctx);
        goto after_17;
    // 0x80063F24: nop

    after_17:
    // 0x80063F28: b           L_80063CD8
    // 0x80063F2C: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
        goto L_80063CD8;
    // 0x80063F2C: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
L_80063F30:
    // 0x80063F30: addiu       $s0, $sp, 0x84
    ctx->r16 = ADD32(ctx->r29, 0X84);
    // 0x80063F34: addiu       $s1, $sp, 0x8C
    ctx->r17 = ADD32(ctx->r29, 0X8C);
L_80063F38:
    // 0x80063F38: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80063F3C: nop

    // 0x80063F40: bltz        $a0, L_80063F50
    if (SIGNED(ctx->r4) < 0) {
        // 0x80063F44: nop
    
            goto L_80063F50;
    }
    // 0x80063F44: nop

    // 0x80063F48: jal         0x8001B5C4
    // 0x80063F4C: nop

    func_8001B5C4(rdram, ctx);
        goto after_18;
    // 0x80063F4C: nop

    after_18:
L_80063F50:
    // 0x80063F50: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80063F54: bne         $s0, $s1, L_80063F38
    if (ctx->r16 != ctx->r17) {
        // 0x80063F58: nop
    
            goto L_80063F38;
    }
    // 0x80063F58: nop

    // 0x80063F5C: addiu       $s0, $sp, 0x118
    ctx->r16 = ADD32(ctx->r29, 0X118);
    // 0x80063F60: addiu       $s2, $s0, 0x8
    ctx->r18 = ADD32(ctx->r16, 0X8);
L_80063F64:
    // 0x80063F64: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80063F68: jal         0x8001C568
    // 0x80063F6C: nop

    func_8001C568(rdram, ctx);
        goto after_19;
    // 0x80063F6C: nop

    after_19:
    // 0x80063F70: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80063F74: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x80063F78: bne         $at, $zero, L_80063F64
    if (ctx->r1 != 0) {
        // 0x80063F7C: nop
    
            goto L_80063F64;
    }
    // 0x80063F7C: nop

    // 0x80063F80: jal         0x8005CD50
    // 0x80063F84: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    func_8005CD50(rdram, ctx);
        goto after_20;
    // 0x80063F84: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    after_20:
    // 0x80063F88: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80063F8C: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x80063F90: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x80063F94: nop

    // 0x80063F98: addiu       $t7, $t8, -0x1
    ctx->r15 = ADD32(ctx->r24, -0X1);
    // 0x80063F9C: jal         0x80007AE0
    // 0x80063FA0: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    func_80007AE0(rdram, ctx);
        goto after_21;
    // 0x80063FA0: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    after_21:
    // 0x80063FA4: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80063FA8: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x80063FAC: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80063FB0: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80063FB4: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80063FB8: lwc1        $f25, 0x20($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80063FBC: lwc1        $f24, 0x24($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80063FC0: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x80063FC4: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x80063FC8: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x80063FCC: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x80063FD0: lw          $s4, 0x3C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X3C);
    // 0x80063FD4: lw          $s5, 0x40($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X40);
    // 0x80063FD8: lw          $s6, 0x44($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X44);
    // 0x80063FDC: lw          $s7, 0x48($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X48);
    // 0x80063FE0: jr          $ra
    // 0x80063FE4: addiu       $sp, $sp, 0x128
    ctx->r29 = ADD32(ctx->r29, 0X128);
    return;
    // 0x80063FE4: addiu       $sp, $sp, 0x128
    ctx->r29 = ADD32(ctx->r29, 0X128);
;}
RECOMP_FUNC void func_80063FE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80063FE8: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x80063FEC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80063FF0: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x80063FF4: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x80063FF8: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x80063FFC: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x80064000: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80064004: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80064008: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8006400C: jal         0x80007774
    // 0x80064010: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x80064010: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x80064014: lw          $s1, 0x1C($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X1C);
    // 0x80064018: addiu       $a0, $zero, 0x773
    ctx->r4 = ADD32(0, 0X773);
    // 0x8006401C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80064020: jal         0x8001D138
    // 0x80064024: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x80064024: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80064028: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8006402C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80064030: jal         0x80019164
    // 0x80064034: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x80064034: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_2:
    // 0x80064038: sw          $s0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r16;
    // 0x8006403C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80064040: addiu       $s7, $zero, 0x4
    ctx->r23 = ADD32(0, 0X4);
    // 0x80064044: addiu       $s6, $zero, -0x801
    ctx->r22 = ADD32(0, -0X801);
    // 0x80064048: addiu       $s5, $zero, -0x401
    ctx->r21 = ADD32(0, -0X401);
    // 0x8006404C: addiu       $s4, $zero, 0x8
    ctx->r20 = ADD32(0, 0X8);
L_80064050:
    // 0x80064050: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x80064054: lw          $a0, 0x7C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X7C);
    // 0x80064058: andi        $t6, $v0, 0x4000
    ctx->r14 = ctx->r2 & 0X4000;
    // 0x8006405C: bne         $t6, $zero, L_80064118
    if (ctx->r14 != 0) {
        // 0x80064060: andi        $t7, $v0, 0x400
        ctx->r15 = ctx->r2 & 0X400;
            goto L_80064118;
    }
    // 0x80064060: andi        $t7, $v0, 0x400
    ctx->r15 = ctx->r2 & 0X400;
    // 0x80064064: beq         $t7, $zero, L_80064088
    if (ctx->r15 == 0) {
        // 0x80064068: andi        $t6, $v0, 0x800
        ctx->r14 = ctx->r2 & 0X800;
            goto L_80064088;
    }
    // 0x80064068: andi        $t6, $v0, 0x800
    ctx->r14 = ctx->r2 & 0X800;
    // 0x8006406C: jal         0x8001913C
    // 0x80064070: addiu       $a1, $s1, 0xC
    ctx->r5 = ADD32(ctx->r17, 0XC);
    func_8001913C(rdram, ctx);
        goto after_3;
    // 0x80064070: addiu       $a1, $s1, 0xC
    ctx->r5 = ADD32(ctx->r17, 0XC);
    after_3:
    // 0x80064074: lw          $t8, 0x24($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X24);
    // 0x80064078: nop

    // 0x8006407C: and         $v0, $t8, $s5
    ctx->r2 = ctx->r24 & ctx->r21;
    // 0x80064080: sw          $v0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r2;
    // 0x80064084: andi        $t6, $v0, 0x800
    ctx->r14 = ctx->r2 & 0X800;
L_80064088:
    // 0x80064088: beq         $t6, $zero, L_800640B0
    if (ctx->r14 == 0) {
        // 0x8006408C: slti        $at, $s2, 0x4
        ctx->r1 = SIGNED(ctx->r18) < 0X4 ? 1 : 0;
            goto L_800640B0;
    }
    // 0x8006408C: slti        $at, $s2, 0x4
    ctx->r1 = SIGNED(ctx->r18) < 0X4 ? 1 : 0;
    // 0x80064090: lw          $a0, 0x7C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X7C);
    // 0x80064094: jal         0x80019164
    // 0x80064098: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80019164(rdram, ctx);
        goto after_4;
    // 0x80064098: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_4:
    // 0x8006409C: lw          $t7, 0x24($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X24);
    // 0x800640A0: nop

    // 0x800640A4: and         $t8, $t7, $s6
    ctx->r24 = ctx->r15 & ctx->r22;
    // 0x800640A8: sw          $t8, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r24;
    // 0x800640AC: slti        $at, $s2, 0x4
    ctx->r1 = SIGNED(ctx->r18) < 0X4 ? 1 : 0;
L_800640B0:
    // 0x800640B0: bne         $at, $zero, L_80064104
    if (ctx->r1 != 0) {
        // 0x800640B4: subu        $v0, $s4, $s2
        ctx->r2 = SUB32(ctx->r20, ctx->r18);
            goto L_80064104;
    }
    // 0x800640B4: subu        $v0, $s4, $s2
    ctx->r2 = SUB32(ctx->r20, ctx->r18);
    // 0x800640B8: sll         $s3, $v0, 2
    ctx->r19 = S32(ctx->r2 << 2);
    // 0x800640BC: addu        $s3, $s3, $v0
    ctx->r19 = ADD32(ctx->r19, ctx->r2);
    // 0x800640C0: sll         $s3, $s3, 2
    ctx->r19 = S32(ctx->r19 << 2);
    // 0x800640C4: addu        $s3, $s3, $v0
    ctx->r19 = ADD32(ctx->r19, ctx->r2);
    // 0x800640C8: lw          $s0, 0x7C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X7C);
    // 0x800640CC: bne         $s7, $v0, L_800640E4
    if (ctx->r23 != ctx->r2) {
        // 0x800640D0: sll         $s3, $s3, 2
        ctx->r19 = S32(ctx->r19 << 2);
            goto L_800640E4;
    }
    // 0x800640D0: sll         $s3, $s3, 2
    ctx->r19 = S32(ctx->r19 << 2);
    // 0x800640D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800640D8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800640DC: jal         0x80018658
    // 0x800640E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80018658(rdram, ctx);
        goto after_5;
    // 0x800640E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
L_800640E4:
    // 0x800640E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800640E8: bgez        $s3, L_800640F8
    if (SIGNED(ctx->r19) >= 0) {
        // 0x800640EC: sra         $a1, $s3, 2
        ctx->r5 = S32(SIGNED(ctx->r19) >> 2);
            goto L_800640F8;
    }
    // 0x800640EC: sra         $a1, $s3, 2
    ctx->r5 = S32(SIGNED(ctx->r19) >> 2);
    // 0x800640F0: addiu       $at, $s3, 0x3
    ctx->r1 = ADD32(ctx->r19, 0X3);
    // 0x800640F4: sra         $a1, $at, 2
    ctx->r5 = S32(SIGNED(ctx->r1) >> 2);
L_800640F8:
    // 0x800640F8: andi        $t9, $a1, 0xFF
    ctx->r25 = ctx->r5 & 0XFF;
    // 0x800640FC: jal         0x80018604
    // 0x80064100: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    func_80018604(rdram, ctx);
        goto after_6;
    // 0x80064100: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    after_6:
L_80064104:
    // 0x80064104: jal         0x80007AB0
    // 0x80064108: nop

    func_80007AB0(rdram, ctx);
        goto after_7;
    // 0x80064108: nop

    after_7:
    // 0x8006410C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80064110: bne         $s2, $s4, L_80064050
    if (ctx->r18 != ctx->r20) {
        // 0x80064114: nop
    
            goto L_80064050;
    }
    // 0x80064114: nop

L_80064118:
    // 0x80064118: addiu       $s0, $sp, 0x7C
    ctx->r16 = ADD32(ctx->r29, 0X7C);
    // 0x8006411C: addiu       $s3, $s0, 0x4
    ctx->r19 = ADD32(ctx->r16, 0X4);
L_80064120:
    // 0x80064120: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80064124: jal         0x8001C568
    // 0x80064128: nop

    func_8001C568(rdram, ctx);
        goto after_8;
    // 0x80064128: nop

    after_8:
    // 0x8006412C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80064130: sltu        $at, $s0, $s3
    ctx->r1 = ctx->r16 < ctx->r19 ? 1 : 0;
    // 0x80064134: bne         $at, $zero, L_80064120
    if (ctx->r1 != 0) {
        // 0x80064138: nop
    
            goto L_80064120;
    }
    // 0x80064138: nop

    // 0x8006413C: jal         0x8005CD50
    // 0x80064140: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8005CD50(rdram, ctx);
        goto after_9;
    // 0x80064140: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_9:
    // 0x80064144: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80064148: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x8006414C: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x80064150: nop

    // 0x80064154: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x80064158: jal         0x80007AE0
    // 0x8006415C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    func_80007AE0(rdram, ctx);
        goto after_10;
    // 0x8006415C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    after_10:
    // 0x80064160: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80064164: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80064168: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8006416C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80064170: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80064174: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x80064178: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x8006417C: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x80064180: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x80064184: jr          $ra
    // 0x80064188: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    return;
    // 0x80064188: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void func_8006418C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006418C: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x80064190: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80064194: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x80064198: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x8006419C: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x800641A0: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x800641A4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x800641A8: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x800641AC: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x800641B0: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800641B4: jal         0x80007774
    // 0x800641B8: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x800641B8: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x800641BC: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x800641C0: addiu       $t6, $t6, 0x22E8
    ctx->r14 = ADD32(ctx->r14, 0X22E8);
    // 0x800641C4: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x800641C8: addiu       $s4, $sp, 0x6C
    ctx->r20 = ADD32(ctx->r29, 0X6C);
    // 0x800641CC: lw          $s1, 0x1C($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X1C);
    // 0x800641D0: sw          $at, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r1;
    // 0x800641D4: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x800641D8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800641DC: sw          $t9, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r25;
    // 0x800641E0: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x800641E4: addiu       $a0, $zero, 0x774
    ctx->r4 = ADD32(0, 0X774);
    // 0x800641E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800641EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800641F0: jal         0x8001D138
    // 0x800641F4: sw          $at, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r1;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x800641F4: sw          $at, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r1;
    after_1:
    // 0x800641F8: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x800641FC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80064200: jal         0x80019164
    // 0x80064204: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x80064204: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_2:
    // 0x80064208: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8006420C: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x80064210: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80064214: sw          $s2, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r18;
    // 0x80064218: lwc1        $f20, 0x6370($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X6370);
    // 0x8006421C: addiu       $s2, $zero, -0x401
    ctx->r18 = ADD32(0, -0X401);
    // 0x80064220: addiu       $s3, $zero, -0x801
    ctx->r19 = ADD32(0, -0X801);
L_80064224:
    // 0x80064224: lw          $t8, 0x24($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X24);
    // 0x80064228: andi        $t6, $s0, 0x1
    ctx->r14 = ctx->r16 & 0X1;
    // 0x8006422C: andi        $t7, $t8, 0x4000
    ctx->r15 = ctx->r24 & 0X4000;
    // 0x80064230: bne         $t7, $zero, L_800642BC
    if (ctx->r15 != 0) {
        // 0x80064234: nop
    
            goto L_800642BC;
    }
    // 0x80064234: nop

    // 0x80064238: beq         $t6, $zero, L_80064248
    if (ctx->r14 == 0) {
        // 0x8006423C: nop
    
            goto L_80064248;
    }
    // 0x8006423C: nop

    // 0x80064240: b           L_8006424C
    // 0x80064244: swc1        $f20, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f20.u32l;
        goto L_8006424C;
    // 0x80064244: swc1        $f20, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f20.u32l;
L_80064248:
    // 0x80064248: swc1        $f22, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f22.u32l;
L_8006424C:
    // 0x8006424C: lw          $a0, 0x7C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X7C);
    // 0x80064250: jal         0x80019114
    // 0x80064254: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    func_80019114(rdram, ctx);
        goto after_3;
    // 0x80064254: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_3:
    // 0x80064258: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x8006425C: lw          $a0, 0x7C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X7C);
    // 0x80064260: andi        $t9, $v0, 0x400
    ctx->r25 = ctx->r2 & 0X400;
    // 0x80064264: beq         $t9, $zero, L_80064288
    if (ctx->r25 == 0) {
        // 0x80064268: andi        $t6, $v0, 0x800
        ctx->r14 = ctx->r2 & 0X800;
            goto L_80064288;
    }
    // 0x80064268: andi        $t6, $v0, 0x800
    ctx->r14 = ctx->r2 & 0X800;
    // 0x8006426C: jal         0x8001913C
    // 0x80064270: addiu       $a1, $s1, 0xC
    ctx->r5 = ADD32(ctx->r17, 0XC);
    func_8001913C(rdram, ctx);
        goto after_4;
    // 0x80064270: addiu       $a1, $s1, 0xC
    ctx->r5 = ADD32(ctx->r17, 0XC);
    after_4:
    // 0x80064274: lw          $t8, 0x24($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X24);
    // 0x80064278: nop

    // 0x8006427C: and         $v0, $t8, $s2
    ctx->r2 = ctx->r24 & ctx->r18;
    // 0x80064280: sw          $v0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r2;
    // 0x80064284: andi        $t6, $v0, 0x800
    ctx->r14 = ctx->r2 & 0X800;
L_80064288:
    // 0x80064288: beq         $t6, $zero, L_800642AC
    if (ctx->r14 == 0) {
        // 0x8006428C: nop
    
            goto L_800642AC;
    }
    // 0x8006428C: nop

    // 0x80064290: lw          $a0, 0x7C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X7C);
    // 0x80064294: jal         0x80019164
    // 0x80064298: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80019164(rdram, ctx);
        goto after_5;
    // 0x80064298: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_5:
    // 0x8006429C: lw          $t9, 0x24($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X24);
    // 0x800642A0: nop

    // 0x800642A4: and         $t8, $t9, $s3
    ctx->r24 = ctx->r25 & ctx->r19;
    // 0x800642A8: sw          $t8, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r24;
L_800642AC:
    // 0x800642AC: jal         0x80007AB0
    // 0x800642B0: nop

    func_80007AB0(rdram, ctx);
        goto after_6;
    // 0x800642B0: nop

    after_6:
    // 0x800642B4: b           L_80064224
    // 0x800642B8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
        goto L_80064224;
    // 0x800642B8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_800642BC:
    // 0x800642BC: addiu       $s0, $sp, 0x7C
    ctx->r16 = ADD32(ctx->r29, 0X7C);
    // 0x800642C0: addiu       $s3, $s0, 0x4
    ctx->r19 = ADD32(ctx->r16, 0X4);
L_800642C4:
    // 0x800642C4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x800642C8: jal         0x8001C568
    // 0x800642CC: nop

    func_8001C568(rdram, ctx);
        goto after_7;
    // 0x800642CC: nop

    after_7:
    // 0x800642D0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x800642D4: sltu        $at, $s0, $s3
    ctx->r1 = ctx->r16 < ctx->r19 ? 1 : 0;
    // 0x800642D8: bne         $at, $zero, L_800642C4
    if (ctx->r1 != 0) {
        // 0x800642DC: nop
    
            goto L_800642C4;
    }
    // 0x800642DC: nop

    // 0x800642E0: jal         0x8005CD50
    // 0x800642E4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8005CD50(rdram, ctx);
        goto after_8;
    // 0x800642E4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_8:
    // 0x800642E8: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x800642EC: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x800642F0: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x800642F4: nop

    // 0x800642F8: addiu       $t9, $t6, -0x1
    ctx->r25 = ADD32(ctx->r14, -0X1);
    // 0x800642FC: jal         0x80007AE0
    // 0x80064300: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    func_80007AE0(rdram, ctx);
        goto after_9;
    // 0x80064300: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    after_9:
    // 0x80064304: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80064308: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8006430C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80064310: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80064314: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80064318: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8006431C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80064320: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80064324: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x80064328: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x8006432C: jr          $ra
    // 0x80064330: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    return;
    // 0x80064330: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void func_80064334(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80064334: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x80064338: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006433C: jal         0x80007774
    // 0x80064340: nop

    func_80007774(rdram, ctx);
        goto after_0;
    // 0x80064340: nop

    after_0:
    // 0x80064344: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80064348: addiu       $t6, $t6, 0x22F4
    ctx->r14 = ADD32(ctx->r14, 0X22F4);
    // 0x8006434C: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x80064350: addiu       $s2, $sp, 0x5C
    ctx->r18 = ADD32(ctx->r29, 0X5C);
    // 0x80064354: lw          $s1, 0x1C($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X1C);
    // 0x80064358: sw          $at, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r1;
    // 0x8006435C: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x80064360: addiu       $a0, $zero, 0x775
    ctx->r4 = ADD32(0, 0X775);
    // 0x80064364: sw          $t9, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r25;
    // 0x80064368: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x8006436C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80064370: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80064374: jal         0x8001D138
    // 0x80064378: sw          $at, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r1;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x80064378: sw          $at, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r1;
    after_1:
    // 0x8006437C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80064380: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80064384: jal         0x80019164
    // 0x80064388: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x80064388: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_2:
    // 0x8006438C: sw          $s0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r16;
    // 0x80064390: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80064394: jal         0x8001C468
    // 0x80064398: addiu       $a1, $zero, 0x775
    ctx->r5 = ADD32(0, 0X775);
    func_8001C468(rdram, ctx);
        goto after_3;
    // 0x80064398: addiu       $a1, $zero, 0x775
    ctx->r5 = ADD32(0, 0X775);
    after_3:
    // 0x8006439C: jal         0x80027F1C
    // 0x800643A0: nop

    func_80027F1C(rdram, ctx);
        goto after_4;
    // 0x800643A0: nop

    after_4:
    // 0x800643A4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800643A8: lwc1        $f5, 0x6378($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X6378);
    // 0x800643AC: lwc1        $f4, 0x637C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X637C);
    // 0x800643B0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800643B4: mul.d       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f0.d, ctx->f4.d);
    // 0x800643B8: lwc1        $f9, 0x6380($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X6380);
    // 0x800643BC: lwc1        $f8, 0x6384($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X6384);
    // 0x800643C0: lw          $a0, 0x6C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X6C);
    // 0x800643C4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x800643C8: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x800643CC: cvt.s.d     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f4.fl = CVT_S_D(ctx->f10.d);
    // 0x800643D0: jal         0x8001913C
    // 0x800643D4: swc1        $f4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f4.u32l;
    func_8001913C(rdram, ctx);
        goto after_5;
    // 0x800643D4: swc1        $f4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f4.u32l;
    after_5:
    // 0x800643D8: lw          $a0, 0x6C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X6C);
    // 0x800643DC: swc1        $f20, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f20.u32l;
    // 0x800643E0: swc1        $f20, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f20.u32l;
    // 0x800643E4: swc1        $f20, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f20.u32l;
    // 0x800643E8: jal         0x80019114
    // 0x800643EC: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    func_80019114(rdram, ctx);
        goto after_6;
    // 0x800643EC: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_6:
    // 0x800643F0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800643F4: addiu       $s3, $zero, 0x19
    ctx->r19 = ADD32(0, 0X19);
    // 0x800643F8: addiu       $s2, $zero, -0x801
    ctx->r18 = ADD32(0, -0X801);
L_800643FC:
    // 0x800643FC: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x80064400: lw          $a0, 0x6C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X6C);
    // 0x80064404: andi        $t8, $v0, 0x4000
    ctx->r24 = ctx->r2 & 0X4000;
    // 0x80064408: bne         $t8, $zero, L_80064444
    if (ctx->r24 != 0) {
        // 0x8006440C: andi        $t7, $v0, 0x800
        ctx->r15 = ctx->r2 & 0X800;
            goto L_80064444;
    }
    // 0x8006440C: andi        $t7, $v0, 0x800
    ctx->r15 = ctx->r2 & 0X800;
    // 0x80064410: beq         $t7, $zero, L_80064430
    if (ctx->r15 == 0) {
        // 0x80064414: nop
    
            goto L_80064430;
    }
    // 0x80064414: nop

    // 0x80064418: jal         0x80019164
    // 0x8006441C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80019164(rdram, ctx);
        goto after_7;
    // 0x8006441C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_7:
    // 0x80064420: lw          $t6, 0x24($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X24);
    // 0x80064424: nop

    // 0x80064428: and         $t9, $t6, $s2
    ctx->r25 = ctx->r14 & ctx->r18;
    // 0x8006442C: sw          $t9, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r25;
L_80064430:
    // 0x80064430: jal         0x80007AB0
    // 0x80064434: nop

    func_80007AB0(rdram, ctx);
        goto after_8;
    // 0x80064434: nop

    after_8:
    // 0x80064438: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8006443C: bne         $s0, $s3, L_800643FC
    if (ctx->r16 != ctx->r19) {
        // 0x80064440: nop
    
            goto L_800643FC;
    }
    // 0x80064440: nop

L_80064444:
    // 0x80064444: addiu       $s0, $sp, 0x6C
    ctx->r16 = ADD32(ctx->r29, 0X6C);
    // 0x80064448: addiu       $s3, $s0, 0x4
    ctx->r19 = ADD32(ctx->r16, 0X4);
    // 0x8006444C: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
L_80064450:
    // 0x80064450: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80064454: jal         0x8001C568
    // 0x80064458: nop

    func_8001C568(rdram, ctx);
        goto after_9;
    // 0x80064458: nop

    after_9:
    // 0x8006445C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80064460: sltu        $at, $s0, $s3
    ctx->r1 = ctx->r16 < ctx->r19 ? 1 : 0;
    // 0x80064464: bne         $at, $zero, L_80064450
    if (ctx->r1 != 0) {
        // 0x80064468: nop
    
            goto L_80064450;
    }
    // 0x80064468: nop

    // 0x8006446C: jal         0x8005CD50
    // 0x80064470: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8005CD50(rdram, ctx);
        goto after_10;
    // 0x80064470: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_10:
    // 0x80064474: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80064478: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x8006447C: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x80064480: nop

    // 0x80064484: addiu       $t6, $t7, -0x1
    ctx->r14 = ADD32(ctx->r15, -0X1);
    // 0x80064488: jal         0x80007AE0
    // 0x8006448C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    func_80007AE0(rdram, ctx);
        goto after_11;
    // 0x8006448C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    after_11:
    // 0x80064490: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80064494: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x80064498: jr          $ra
    // 0x8006449C: nop

    return;
    // 0x8006449C: nop

;}
RECOMP_FUNC void func_800644A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800644A0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800644A4: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x800644A8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800644AC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800644B0: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x800644B4: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x800644B8: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x800644BC: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x800644C0: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x800644C4: jal         0x80064334
    // 0x800644C8: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    func_80064334(rdram, ctx);
        goto after_0;
    // 0x800644C8: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    after_0:
    // 0x800644CC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800644D0: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x800644D4: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x800644D8: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x800644DC: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x800644E0: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x800644E4: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x800644E8: jr          $ra
    // 0x800644EC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800644EC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800644F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800644F0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800644F4: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x800644F8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x800644FC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80064500: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80064504: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x80064508: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x8006450C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80064510: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x80064514: jal         0x80064334
    // 0x80064518: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    func_80064334(rdram, ctx);
        goto after_0;
    // 0x80064518: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    after_0:
    // 0x8006451C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80064520: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x80064524: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80064528: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x8006452C: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80064530: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x80064534: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x80064538: jr          $ra
    // 0x8006453C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8006453C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80064540(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80064540: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80064544: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80064548: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8006454C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80064550: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80064554: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x80064558: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x8006455C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80064560: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x80064564: jal         0x80064334
    // 0x80064568: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    func_80064334(rdram, ctx);
        goto after_0;
    // 0x80064568: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    after_0:
    // 0x8006456C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80064570: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x80064574: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80064578: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x8006457C: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80064580: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x80064584: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x80064588: jr          $ra
    // 0x8006458C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8006458C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80064590(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80064590: addiu       $sp, $sp, -0x100
    ctx->r29 = ADD32(ctx->r29, -0X100);
    // 0x80064594: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80064598: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x8006459C: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x800645A0: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x800645A4: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x800645A8: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x800645AC: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x800645B0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800645B4: jal         0x80007774
    // 0x800645B8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x800645B8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x800645BC: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x800645C0: addiu       $t7, $t7, 0x2300
    ctx->r15 = ADD32(ctx->r15, 0X2300);
    // 0x800645C4: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x800645C8: lw          $s7, 0x1C($v0)
    ctx->r23 = MEM_W(ctx->r2, 0X1C);
    // 0x800645CC: addiu       $t6, $sp, 0xE0
    ctx->r14 = ADD32(ctx->r29, 0XE0);
    // 0x800645D0: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x800645D4: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x800645D8: lw          $t9, 0x4($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X4);
    // 0x800645DC: addiu       $a0, $zero, 0x781
    ctx->r4 = ADD32(0, 0X781);
    // 0x800645E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800645E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800645E8: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x800645EC: jal         0x8001D138
    // 0x800645F0: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x800645F0: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    after_1:
    // 0x800645F4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800645F8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800645FC: jal         0x80019164
    // 0x80064600: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x80064600: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    after_2:
    // 0x80064604: sw          $s0, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->r16;
    // 0x80064608: addiu       $a0, $zero, 0x7C2
    ctx->r4 = ADD32(0, 0X7C2);
    // 0x8006460C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80064610: jal         0x8001D138
    // 0x80064614: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_3;
    // 0x80064614: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x80064618: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8006461C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80064620: jal         0x80019164
    // 0x80064624: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    func_80019164(rdram, ctx);
        goto after_4;
    // 0x80064624: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    after_4:
    // 0x80064628: lw          $a0, 0xF0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XF0);
    // 0x8006462C: sw          $s0, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r16;
    // 0x80064630: jal         0x80019114
    // 0x80064634: addiu       $a1, $sp, 0xE0
    ctx->r5 = ADD32(ctx->r29, 0XE0);
    func_80019114(rdram, ctx);
        goto after_5;
    // 0x80064634: addiu       $a1, $sp, 0xE0
    ctx->r5 = ADD32(ctx->r29, 0XE0);
    after_5:
    // 0x80064638: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8006463C: lw          $a0, 0xF4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XF4);
    // 0x80064640: addiu       $a1, $sp, 0xA4
    ctx->r5 = ADD32(ctx->r29, 0XA4);
    // 0x80064644: swc1        $f0, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f0.u32l;
    // 0x80064648: swc1        $f0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f0.u32l;
    // 0x8006464C: jal         0x80019114
    // 0x80064650: swc1        $f0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f0.u32l;
    func_80019114(rdram, ctx);
        goto after_6;
    // 0x80064650: swc1        $f0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f0.u32l;
    after_6:
    // 0x80064654: lw          $s0, 0xF4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XF4);
    // 0x80064658: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8006465C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80064660: jal         0x80018658
    // 0x80064664: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80018658(rdram, ctx);
        goto after_7;
    // 0x80064664: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80064668: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006466C: jal         0x80018604
    // 0x80064670: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_80018604(rdram, ctx);
        goto after_8;
    // 0x80064670: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_8:
    // 0x80064674: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80064678: addiu       $s6, $zero, 0xF
    ctx->r22 = ADD32(0, 0XF);
    // 0x8006467C: addiu       $s4, $zero, 0xA
    ctx->r20 = ADD32(0, 0XA);
L_80064680:
    // 0x80064680: lw          $t8, 0x24($s7)
    ctx->r24 = MEM_W(ctx->r23, 0X24);
    // 0x80064684: lwc1        $f0, 0xE8($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x80064688: andi        $t6, $t8, 0x4000
    ctx->r14 = ctx->r24 & 0X4000;
    // 0x8006468C: bne         $t6, $zero, L_80064820
    if (ctx->r14 != 0) {
        // 0x80064690: slti        $at, $s1, 0x5
        ctx->r1 = SIGNED(ctx->r17) < 0X5 ? 1 : 0;
            goto L_80064820;
    }
    // 0x80064690: slti        $at, $s1, 0x5
    ctx->r1 = SIGNED(ctx->r17) < 0X5 ? 1 : 0;
    // 0x80064694: beq         $at, $zero, L_800646BC
    if (ctx->r1 == 0) {
        // 0x80064698: addiu       $t7, $s1, -0x5
        ctx->r15 = ADD32(ctx->r17, -0X5);
            goto L_800646BC;
    }
    // 0x80064698: addiu       $t7, $s1, -0x5
    ctx->r15 = ADD32(ctx->r17, -0X5);
    // 0x8006469C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800646A0: lwc1        $f0, 0xE8($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x800646A4: lwc1        $f4, 0x6388($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6388);
    // 0x800646A8: nop

    // 0x800646AC: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x800646B0: swc1        $f0, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f0.u32l;
    // 0x800646B4: b           L_800646F0
    // 0x800646B8: swc1        $f0, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f0.u32l;
        goto L_800646F0;
    // 0x800646B8: swc1        $f0, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f0.u32l;
L_800646BC:
    // 0x800646BC: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x800646C0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800646C4: lwc1        $f6, 0x638C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X638C);
    // 0x800646C8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800646CC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800646D0: lwc1        $f4, 0x6390($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6390);
    // 0x800646D4: sub.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x800646D8: lwc1        $f8, 0xE4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x800646DC: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x800646E0: swc1        $f0, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f0.u32l;
    // 0x800646E4: swc1        $f0, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f0.u32l;
    // 0x800646E8: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x800646EC: swc1        $f10, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f10.u32l;
L_800646F0:
    // 0x800646F0: lw          $a0, 0xF0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XF0);
    // 0x800646F4: jal         0x80019114
    // 0x800646F8: addiu       $a1, $sp, 0xE0
    ctx->r5 = ADD32(ctx->r29, 0XE0);
    func_80019114(rdram, ctx);
        goto after_9;
    // 0x800646F8: addiu       $a1, $sp, 0xE0
    ctx->r5 = ADD32(ctx->r29, 0XE0);
    after_9:
    // 0x800646FC: addiu       $s5, $s1, 0x1
    ctx->r21 = ADD32(ctx->r17, 0X1);
    // 0x80064700: mtc1        $s5, $f4
    ctx->f4.u32l = ctx->r21;
    // 0x80064704: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x80064708: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8006470C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80064710: nop

    // 0x80064714: mul.s       $f12, $f8, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x80064718: jal         0x80028C2C
    // 0x8006471C: nop

    func_80028C2C(rdram, ctx);
        goto after_10;
    // 0x8006471C: nop

    after_10:
    // 0x80064720: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x80064724: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80064728: lw          $a0, 0xF4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XF4);
    // 0x8006472C: mul.s       $f2, $f0, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x80064730: addiu       $a1, $sp, 0x7C
    ctx->r5 = ADD32(ctx->r29, 0X7C);
    // 0x80064734: swc1        $f2, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f2.u32l;
    // 0x80064738: swc1        $f2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f2.u32l;
    // 0x8006473C: jal         0x80019114
    // 0x80064740: swc1        $f2, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f2.u32l;
    func_80019114(rdram, ctx);
        goto after_11;
    // 0x80064740: swc1        $f2, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f2.u32l;
    after_11:
    // 0x80064744: slti        $at, $s1, 0x5
    ctx->r1 = SIGNED(ctx->r17) < 0X5 ? 1 : 0;
    // 0x80064748: bne         $at, $zero, L_80064810
    if (ctx->r1 != 0) {
        // 0x8006474C: subu        $s0, $s6, $s1
        ctx->r16 = SUB32(ctx->r22, ctx->r17);
            goto L_80064810;
    }
    // 0x8006474C: subu        $s0, $s6, $s1
    ctx->r16 = SUB32(ctx->r22, ctx->r17);
    // 0x80064750: lw          $s2, 0xF0($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XF0);
    // 0x80064754: sll         $v0, $s0, 8
    ctx->r2 = S32(ctx->r16 << 8);
    // 0x80064758: subu        $v0, $v0, $s0
    ctx->r2 = SUB32(ctx->r2, ctx->r16);
    // 0x8006475C: bne         $s4, $s0, L_80064780
    if (ctx->r20 != ctx->r16) {
        // 0x80064760: sll         $s3, $s0, 7
        ctx->r19 = S32(ctx->r16 << 7);
            goto L_80064780;
    }
    // 0x80064760: sll         $s3, $s0, 7
    ctx->r19 = S32(ctx->r16 << 7);
    // 0x80064764: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80064768: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8006476C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80064770: jal         0x80018658
    // 0x80064774: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    func_80018658(rdram, ctx);
        goto after_12;
    // 0x80064774: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    after_12:
    // 0x80064778: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x8006477C: nop

L_80064780:
    // 0x80064780: div         $zero, $v0, $s4
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r20))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r20)));
    // 0x80064784: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80064788: bne         $s4, $zero, L_80064794
    if (ctx->r20 != 0) {
        // 0x8006478C: nop
    
            goto L_80064794;
    }
    // 0x8006478C: nop

    // 0x80064790: break       7
    do_break(2147895184);
L_80064794:
    // 0x80064794: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80064798: bne         $s4, $at, L_800647AC
    if (ctx->r20 != ctx->r1) {
        // 0x8006479C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800647AC;
    }
    // 0x8006479C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800647A0: bne         $v0, $at, L_800647AC
    if (ctx->r2 != ctx->r1) {
        // 0x800647A4: nop
    
            goto L_800647AC;
    }
    // 0x800647A4: nop

    // 0x800647A8: break       6
    do_break(2147895208);
L_800647AC:
    // 0x800647AC: mflo        $a1
    ctx->r5 = lo;
    // 0x800647B0: andi        $t9, $a1, 0xFF
    ctx->r25 = ctx->r5 & 0XFF;
    // 0x800647B4: jal         0x80018604
    // 0x800647B8: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    func_80018604(rdram, ctx);
        goto after_13;
    // 0x800647B8: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    after_13:
    // 0x800647BC: lw          $s1, 0xF4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XF4);
    // 0x800647C0: bne         $s4, $s0, L_800647D4
    if (ctx->r20 != ctx->r16) {
        // 0x800647C4: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_800647D4;
    }
    // 0x800647C4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800647C8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800647CC: jal         0x80018658
    // 0x800647D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80018658(rdram, ctx);
        goto after_14;
    // 0x800647D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_14:
L_800647D4:
    // 0x800647D4: div         $zero, $s3, $s4
    lo = S32(S64(S32(ctx->r19)) / S64(S32(ctx->r20))); hi = S32(S64(S32(ctx->r19)) % S64(S32(ctx->r20)));
    // 0x800647D8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800647DC: bne         $s4, $zero, L_800647E8
    if (ctx->r20 != 0) {
        // 0x800647E0: nop
    
            goto L_800647E8;
    }
    // 0x800647E0: nop

    // 0x800647E4: break       7
    do_break(2147895268);
L_800647E8:
    // 0x800647E8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800647EC: bne         $s4, $at, L_80064800
    if (ctx->r20 != ctx->r1) {
        // 0x800647F0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80064800;
    }
    // 0x800647F0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800647F4: bne         $s3, $at, L_80064800
    if (ctx->r19 != ctx->r1) {
        // 0x800647F8: nop
    
            goto L_80064800;
    }
    // 0x800647F8: nop

    // 0x800647FC: break       6
    do_break(2147895292);
L_80064800:
    // 0x80064800: mflo        $a1
    ctx->r5 = lo;
    // 0x80064804: andi        $t8, $a1, 0xFF
    ctx->r24 = ctx->r5 & 0XFF;
    // 0x80064808: jal         0x80018604
    // 0x8006480C: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    func_80018604(rdram, ctx);
        goto after_15;
    // 0x8006480C: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    after_15:
L_80064810:
    // 0x80064810: jal         0x80007AB0
    // 0x80064814: nop

    func_80007AB0(rdram, ctx);
        goto after_16;
    // 0x80064814: nop

    after_16:
    // 0x80064818: bne         $s5, $s6, L_80064680
    if (ctx->r21 != ctx->r22) {
        // 0x8006481C: or          $s1, $s5, $zero
        ctx->r17 = ctx->r21 | 0;
            goto L_80064680;
    }
    // 0x8006481C: or          $s1, $s5, $zero
    ctx->r17 = ctx->r21 | 0;
L_80064820:
    // 0x80064820: addiu       $s0, $sp, 0xF0
    ctx->r16 = ADD32(ctx->r29, 0XF0);
    // 0x80064824: addiu       $s2, $s0, 0x8
    ctx->r18 = ADD32(ctx->r16, 0X8);
L_80064828:
    // 0x80064828: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8006482C: jal         0x8001C568
    // 0x80064830: nop

    func_8001C568(rdram, ctx);
        goto after_17;
    // 0x80064830: nop

    after_17:
    // 0x80064834: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80064838: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x8006483C: bne         $at, $zero, L_80064828
    if (ctx->r1 != 0) {
        // 0x80064840: nop
    
            goto L_80064828;
    }
    // 0x80064840: nop

    // 0x80064844: jal         0x8005CD50
    // 0x80064848: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    func_8005CD50(rdram, ctx);
        goto after_18;
    // 0x80064848: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    after_18:
    // 0x8006484C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80064850: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x80064854: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x80064858: nop

    // 0x8006485C: addiu       $t9, $t7, -0x1
    ctx->r25 = ADD32(ctx->r15, -0X1);
    // 0x80064860: jal         0x80007AE0
    // 0x80064864: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    func_80007AE0(rdram, ctx);
        goto after_19;
    // 0x80064864: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    after_19:
    // 0x80064868: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8006486C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80064870: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80064874: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80064878: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8006487C: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x80064880: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x80064884: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x80064888: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x8006488C: jr          $ra
    // 0x80064890: addiu       $sp, $sp, 0x100
    ctx->r29 = ADD32(ctx->r29, 0X100);
    return;
    // 0x80064890: addiu       $sp, $sp, 0x100
    ctx->r29 = ADD32(ctx->r29, 0X100);
;}
RECOMP_FUNC void func_80064894(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80064894: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x80064898: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8006489C: sw          $s5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r21;
    // 0x800648A0: sw          $s4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r20;
    // 0x800648A4: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x800648A8: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x800648AC: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x800648B0: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x800648B4: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x800648B8: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x800648BC: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800648C0: jal         0x80007774
    // 0x800648C4: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x800648C4: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x800648C8: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x800648CC: addiu       $t6, $t6, 0x230C
    ctx->r14 = ADD32(ctx->r14, 0X230C);
    // 0x800648D0: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x800648D4: addiu       $s5, $sp, 0x6C
    ctx->r21 = ADD32(ctx->r29, 0X6C);
    // 0x800648D8: lw          $s2, 0x1C($v0)
    ctx->r18 = MEM_W(ctx->r2, 0X1C);
    // 0x800648DC: sw          $at, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r1;
    // 0x800648E0: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x800648E4: addiu       $s1, $zero, 0x33
    ctx->r17 = ADD32(0, 0X33);
    // 0x800648E8: sw          $t9, 0x4($s5)
    MEM_W(0X4, ctx->r21) = ctx->r25;
    // 0x800648EC: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x800648F0: addiu       $a0, $zero, 0x780
    ctx->r4 = ADD32(0, 0X780);
    // 0x800648F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800648F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800648FC: jal         0x8001D138
    // 0x80064900: sw          $at, 0x8($s5)
    MEM_W(0X8, ctx->r21) = ctx->r1;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x80064900: sw          $at, 0x8($s5)
    MEM_W(0X8, ctx->r21) = ctx->r1;
    after_1:
    // 0x80064904: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80064908: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8006490C: jal         0x80019164
    // 0x80064910: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x80064910: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_2:
    // 0x80064914: sw          $s0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r16;
    // 0x80064918: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006491C: jal         0x80019114
    // 0x80064920: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    func_80019114(rdram, ctx);
        goto after_3;
    // 0x80064920: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_3:
    // 0x80064924: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80064928: lwc1        $f22, 0x6394($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X6394);
    // 0x8006492C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80064930: lwc1        $f20, 0x6398($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X6398);
    // 0x80064934: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80064938: addiu       $s4, $zero, 0x5A
    ctx->r20 = ADD32(0, 0X5A);
    // 0x8006493C: addiu       $s3, $zero, -0x801
    ctx->r19 = ADD32(0, -0X801);
L_80064940:
    // 0x80064940: lw          $t8, 0x24($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X24);
    // 0x80064944: lw          $a0, 0x7C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X7C);
    // 0x80064948: andi        $t7, $t8, 0x4000
    ctx->r15 = ctx->r24 & 0X4000;
    // 0x8006494C: bne         $t7, $zero, L_80064A0C
    if (ctx->r15 != 0) {
        // 0x80064950: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_80064A0C;
    }
    // 0x80064950: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80064954: bne         $s0, $zero, L_80064968
    if (ctx->r16 != 0) {
        // 0x80064958: slti        $at, $s0, 0x1E
        ctx->r1 = SIGNED(ctx->r16) < 0X1E ? 1 : 0;
            goto L_80064968;
    }
    // 0x80064958: slti        $at, $s0, 0x1E
    ctx->r1 = SIGNED(ctx->r16) < 0X1E ? 1 : 0;
    // 0x8006495C: jal         0x80018658
    // 0x80064960: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80018658(rdram, ctx);
        goto after_4;
    // 0x80064960: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x80064964: slti        $at, $s0, 0x1E
    ctx->r1 = SIGNED(ctx->r16) < 0X1E ? 1 : 0;
L_80064968:
    // 0x80064968: beq         $at, $zero, L_80064994
    if (ctx->r1 == 0) {
        // 0x8006496C: nop
    
            goto L_80064994;
    }
    // 0x8006496C: nop

    // 0x80064970: lwc1        $f0, 0x74($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X74);
    // 0x80064974: addiu       $s1, $s1, 0x5
    ctx->r17 = ADD32(ctx->r17, 0X5);
    // 0x80064978: add.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f20.fl;
    // 0x8006497C: andi        $t6, $s1, 0xFF
    ctx->r14 = ctx->r17 & 0XFF;
    // 0x80064980: swc1        $f0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f0.u32l;
    // 0x80064984: swc1        $f0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f0.u32l;
    // 0x80064988: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
    // 0x8006498C: b           L_800649B4
    // 0x80064990: swc1        $f0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f0.u32l;
        goto L_800649B4;
    // 0x80064990: swc1        $f0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f0.u32l;
L_80064994:
    // 0x80064994: lwc1        $f0, 0x74($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X74);
    // 0x80064998: addiu       $s1, $s1, -0x3
    ctx->r17 = ADD32(ctx->r17, -0X3);
    // 0x8006499C: sub.s       $f0, $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f22.fl;
    // 0x800649A0: andi        $t9, $s1, 0xFF
    ctx->r25 = ctx->r17 & 0XFF;
    // 0x800649A4: swc1        $f0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f0.u32l;
    // 0x800649A8: swc1        $f0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f0.u32l;
    // 0x800649AC: or          $s1, $t9, $zero
    ctx->r17 = ctx->r25 | 0;
    // 0x800649B0: swc1        $f0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f0.u32l;
L_800649B4:
    // 0x800649B4: lw          $a0, 0x7C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X7C);
    // 0x800649B8: jal         0x80018604
    // 0x800649BC: andi        $a1, $s1, 0xFF
    ctx->r5 = ctx->r17 & 0XFF;
    func_80018604(rdram, ctx);
        goto after_5;
    // 0x800649BC: andi        $a1, $s1, 0xFF
    ctx->r5 = ctx->r17 & 0XFF;
    after_5:
    // 0x800649C0: lw          $a0, 0x7C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X7C);
    // 0x800649C4: jal         0x80019114
    // 0x800649C8: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    func_80019114(rdram, ctx);
        goto after_6;
    // 0x800649C8: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_6:
    // 0x800649CC: lw          $t8, 0x24($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X24);
    // 0x800649D0: lw          $a0, 0x7C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X7C);
    // 0x800649D4: andi        $t7, $t8, 0x800
    ctx->r15 = ctx->r24 & 0X800;
    // 0x800649D8: beq         $t7, $zero, L_800649F8
    if (ctx->r15 == 0) {
        // 0x800649DC: nop
    
            goto L_800649F8;
    }
    // 0x800649DC: nop

    // 0x800649E0: jal         0x80019164
    // 0x800649E4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_80019164(rdram, ctx);
        goto after_7;
    // 0x800649E4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_7:
    // 0x800649E8: lw          $t6, 0x24($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X24);
    // 0x800649EC: nop

    // 0x800649F0: and         $t9, $t6, $s3
    ctx->r25 = ctx->r14 & ctx->r19;
    // 0x800649F4: sw          $t9, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r25;
L_800649F8:
    // 0x800649F8: jal         0x80007AB0
    // 0x800649FC: nop

    func_80007AB0(rdram, ctx);
        goto after_8;
    // 0x800649FC: nop

    after_8:
    // 0x80064A00: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80064A04: bne         $s0, $s4, L_80064940
    if (ctx->r16 != ctx->r20) {
        // 0x80064A08: nop
    
            goto L_80064940;
    }
    // 0x80064A08: nop

L_80064A0C:
    // 0x80064A0C: addiu       $s0, $sp, 0x7C
    ctx->r16 = ADD32(ctx->r29, 0X7C);
    // 0x80064A10: addiu       $s3, $s0, 0x4
    ctx->r19 = ADD32(ctx->r16, 0X4);
L_80064A14:
    // 0x80064A14: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80064A18: jal         0x8001C568
    // 0x80064A1C: nop

    func_8001C568(rdram, ctx);
        goto after_9;
    // 0x80064A1C: nop

    after_9:
    // 0x80064A20: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80064A24: sltu        $at, $s0, $s3
    ctx->r1 = ctx->r16 < ctx->r19 ? 1 : 0;
    // 0x80064A28: bne         $at, $zero, L_80064A14
    if (ctx->r1 != 0) {
        // 0x80064A2C: nop
    
            goto L_80064A14;
    }
    // 0x80064A2C: nop

    // 0x80064A30: jal         0x8005CD50
    // 0x80064A34: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_8005CD50(rdram, ctx);
        goto after_10;
    // 0x80064A34: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_10:
    // 0x80064A38: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80064A3C: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x80064A40: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x80064A44: nop

    // 0x80064A48: addiu       $t6, $t7, -0x1
    ctx->r14 = ADD32(ctx->r15, -0X1);
    // 0x80064A4C: jal         0x80007AE0
    // 0x80064A50: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    func_80007AE0(rdram, ctx);
        goto after_11;
    // 0x80064A50: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    after_11:
    // 0x80064A54: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80064A58: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x80064A5C: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80064A60: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80064A64: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80064A68: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x80064A6C: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x80064A70: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x80064A74: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x80064A78: lw          $s4, 0x34($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X34);
    // 0x80064A7C: lw          $s5, 0x38($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X38);
    // 0x80064A80: jr          $ra
    // 0x80064A84: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    return;
    // 0x80064A84: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void func_80064A88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80064A88: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x80064A8C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80064A90: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x80064A94: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x80064A98: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80064A9C: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80064AA0: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80064AA4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80064AA8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80064AAC: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80064AB0: jal         0x80007774
    // 0x80064AB4: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x80064AB4: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x80064AB8: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x80064ABC: addiu       $t7, $t7, 0x2318
    ctx->r15 = ADD32(ctx->r15, 0X2318);
    // 0x80064AC0: lw          $s4, 0x1C($v0)
    ctx->r20 = MEM_W(ctx->r2, 0X1C);
    // 0x80064AC4: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x80064AC8: lw          $t9, 0x4($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X4);
    // 0x80064ACC: addiu       $t6, $sp, 0x88
    ctx->r14 = ADD32(ctx->r29, 0X88);
    // 0x80064AD0: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x80064AD4: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    // 0x80064AD8: lw          $t9, 0xC($t7)
    ctx->r25 = MEM_W(ctx->r15, 0XC);
    // 0x80064ADC: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x80064AE0: sw          $t9, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->r25;
    // 0x80064AE4: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x80064AE8: lw          $at, 0x10($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X10);
    // 0x80064AEC: lw          $t9, 0x14($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X14);
    // 0x80064AF0: sw          $at, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->r1;
    // 0x80064AF4: sw          $t9, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->r25;
    // 0x80064AF8: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80064AFC: addiu       $t6, $t6, 0x2330
    ctx->r14 = ADD32(ctx->r14, 0X2330);
    // 0x80064B00: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x80064B04: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x80064B08: addiu       $t8, $sp, 0x70
    ctx->r24 = ADD32(ctx->r29, 0X70);
    // 0x80064B0C: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x80064B10: sw          $t9, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r25;
    // 0x80064B14: lw          $t9, 0xC($t6)
    ctx->r25 = MEM_W(ctx->r14, 0XC);
    // 0x80064B18: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x80064B1C: sw          $t9, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->r25;
    // 0x80064B20: sw          $at, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r1;
    // 0x80064B24: lw          $at, 0x10($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X10);
    // 0x80064B28: lw          $t9, 0x14($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X14);
    // 0x80064B2C: addiu       $s0, $sp, 0x88
    ctx->r16 = ADD32(ctx->r29, 0X88);
    // 0x80064B30: addiu       $s2, $sp, 0xA8
    ctx->r18 = ADD32(ctx->r29, 0XA8);
    // 0x80064B34: addiu       $s3, $sp, 0x70
    ctx->r19 = ADD32(ctx->r29, 0X70);
    // 0x80064B38: addiu       $s6, $sp, 0x88
    ctx->r22 = ADD32(ctx->r29, 0X88);
    // 0x80064B3C: addiu       $s5, $s4, 0xC
    ctx->r21 = ADD32(ctx->r20, 0XC);
    // 0x80064B40: sw          $at, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->r1;
    // 0x80064B44: sw          $t9, 0x14($t8)
    MEM_W(0X14, ctx->r24) = ctx->r25;
L_80064B48:
    // 0x80064B48: lwc1        $f12, 0x10($s4)
    ctx->f12.u32l = MEM_W(ctx->r20, 0X10);
    // 0x80064B4C: jal         0x8007A640
    // 0x80064B50: nop

    __sinf_recomp(rdram, ctx);
        goto after_1;
    // 0x80064B50: nop

    after_1:
    // 0x80064B54: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x80064B58: lwc1        $f8, 0x0($s4)
    ctx->f8.u32l = MEM_W(ctx->r20, 0X0);
    // 0x80064B5C: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x80064B60: lwc1        $f4, 0x4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4);
    // 0x80064B64: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80064B68: swc1        $f10, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f10.u32l;
    // 0x80064B6C: lwc1        $f6, 0x4($s4)
    ctx->f6.u32l = MEM_W(ctx->r20, 0X4);
    // 0x80064B70: nop

    // 0x80064B74: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80064B78: swc1        $f8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f8.u32l;
    // 0x80064B7C: lwc1        $f12, 0x10($s4)
    ctx->f12.u32l = MEM_W(ctx->r20, 0X10);
    // 0x80064B80: jal         0x8007A800
    // 0x80064B84: nop

    __cosf_recomp(rdram, ctx);
        goto after_2;
    // 0x80064B84: nop

    after_2:
    // 0x80064B88: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x80064B8C: lwc1        $f6, 0x8($s4)
    ctx->f6.u32l = MEM_W(ctx->r20, 0X8);
    // 0x80064B90: mul.s       $f4, $f0, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x80064B94: addiu       $a0, $zero, 0x77E
    ctx->r4 = ADD32(0, 0X77E);
    // 0x80064B98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80064B9C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80064BA0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80064BA4: jal         0x8001D138
    // 0x80064BA8: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
    func_8001D138(rdram, ctx);
        goto after_3;
    // 0x80064BA8: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
    after_3:
    // 0x80064BAC: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80064BB0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80064BB4: jal         0x80019164
    // 0x80064BB8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80019164(rdram, ctx);
        goto after_4;
    // 0x80064BB8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_4:
    // 0x80064BBC: sw          $s1, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r17;
    // 0x80064BC0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80064BC4: jal         0x80019114
    // 0x80064BC8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_80019114(rdram, ctx);
        goto after_5;
    // 0x80064BC8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_5:
    // 0x80064BCC: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x80064BD0: jal         0x8001913C
    // 0x80064BD4: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    func_8001913C(rdram, ctx);
        goto after_6;
    // 0x80064BD4: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_6:
    // 0x80064BD8: addiu       $s3, $s3, 0xC
    ctx->r19 = ADD32(ctx->r19, 0XC);
    // 0x80064BDC: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x80064BE0: bne         $s3, $s6, L_80064B48
    if (ctx->r19 != ctx->r22) {
        // 0x80064BE4: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_80064B48;
    }
    // 0x80064BE4: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x80064BE8: lw          $a0, 0xAC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XAC);
    // 0x80064BEC: jal         0x800191C0
    // 0x80064BF0: nop

    func_800191C0(rdram, ctx);
        goto after_7;
    // 0x80064BF0: nop

    after_7:
    // 0x80064BF4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80064BF8: lwc1        $f20, 0x639C($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X639C);
    // 0x80064BFC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80064C00: addiu       $s5, $zero, 0x7
    ctx->r21 = ADD32(0, 0X7);
    // 0x80064C04: addiu       $s3, $zero, 0xE
    ctx->r19 = ADD32(0, 0XE);
    // 0x80064C08: addiu       $s2, $sp, 0x7C
    ctx->r18 = ADD32(ctx->r29, 0X7C);
    // 0x80064C0C: addiu       $s1, $zero, 0x5
    ctx->r17 = ADD32(0, 0X5);
L_80064C10:
    // 0x80064C10: lw          $t7, 0x24($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X24);
    // 0x80064C14: lw          $a0, 0xAC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XAC);
    // 0x80064C18: andi        $t8, $t7, 0x4000
    ctx->r24 = ctx->r15 & 0X4000;
    // 0x80064C1C: bne         $t8, $zero, L_80064CAC
    if (ctx->r24 != 0) {
        // 0x80064C20: nop
    
            goto L_80064CAC;
    }
    // 0x80064C20: nop

    // 0x80064C24: bne         $s0, $s1, L_80064C3C
    if (ctx->r16 != ctx->r17) {
        // 0x80064C28: nop
    
            goto L_80064C3C;
    }
    // 0x80064C28: nop

    // 0x80064C2C: jal         0x800191D4
    // 0x80064C30: nop

    func_800191D4(rdram, ctx);
        goto after_8;
    // 0x80064C30: nop

    after_8:
    // 0x80064C34: b           L_80064C54
    // 0x80064C38: slti        $at, $s0, 0xC
    ctx->r1 = SIGNED(ctx->r16) < 0XC ? 1 : 0;
        goto L_80064C54;
    // 0x80064C38: slti        $at, $s0, 0xC
    ctx->r1 = SIGNED(ctx->r16) < 0XC ? 1 : 0;
L_80064C3C:
    // 0x80064C3C: bne         $s0, $s5, L_80064C54
    if (ctx->r16 != ctx->r21) {
        // 0x80064C40: slti        $at, $s0, 0xC
        ctx->r1 = SIGNED(ctx->r16) < 0XC ? 1 : 0;
            goto L_80064C54;
    }
    // 0x80064C40: slti        $at, $s0, 0xC
    ctx->r1 = SIGNED(ctx->r16) < 0XC ? 1 : 0;
    // 0x80064C44: lw          $a0, 0xA8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA8);
    // 0x80064C48: jal         0x800191C0
    // 0x80064C4C: nop

    func_800191C0(rdram, ctx);
        goto after_9;
    // 0x80064C4C: nop

    after_9:
    // 0x80064C50: slti        $at, $s0, 0xC
    ctx->r1 = SIGNED(ctx->r16) < 0XC ? 1 : 0;
L_80064C54:
    // 0x80064C54: bne         $at, $zero, L_80064C78
    if (ctx->r1 != 0) {
        // 0x80064C58: or          $a1, $s2, $zero
        ctx->r5 = ctx->r18 | 0;
            goto L_80064C78;
    }
    // 0x80064C58: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80064C5C: lwc1        $f10, 0x80($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X80);
    // 0x80064C60: lw          $a0, 0xAC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XAC);
    // 0x80064C64: sub.s       $f4, $f10, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f20.fl;
    // 0x80064C68: jal         0x80019114
    // 0x80064C6C: swc1        $f4, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f4.u32l;
    func_80019114(rdram, ctx);
        goto after_10;
    // 0x80064C6C: swc1        $f4, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f4.u32l;
    after_10:
    // 0x80064C70: b           L_80064C98
    // 0x80064C74: nop

        goto L_80064C98;
    // 0x80064C74: nop

L_80064C78:
    // 0x80064C78: slti        $at, $s0, 0x5
    ctx->r1 = SIGNED(ctx->r16) < 0X5 ? 1 : 0;
    // 0x80064C7C: bne         $at, $zero, L_80064C98
    if (ctx->r1 != 0) {
        // 0x80064C80: addiu       $a1, $sp, 0x70
        ctx->r5 = ADD32(ctx->r29, 0X70);
            goto L_80064C98;
    }
    // 0x80064C80: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x80064C84: lwc1        $f6, 0x74($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X74);
    // 0x80064C88: lw          $a0, 0xA8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA8);
    // 0x80064C8C: add.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f20.fl;
    // 0x80064C90: jal         0x80019114
    // 0x80064C94: swc1        $f8, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f8.u32l;
    func_80019114(rdram, ctx);
        goto after_11;
    // 0x80064C94: swc1        $f8, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f8.u32l;
    after_11:
L_80064C98:
    // 0x80064C98: jal         0x80007AB0
    // 0x80064C9C: nop

    func_80007AB0(rdram, ctx);
        goto after_12;
    // 0x80064C9C: nop

    after_12:
    // 0x80064CA0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80064CA4: bne         $s0, $s3, L_80064C10
    if (ctx->r16 != ctx->r19) {
        // 0x80064CA8: nop
    
            goto L_80064C10;
    }
    // 0x80064CA8: nop

L_80064CAC:
    // 0x80064CAC: addiu       $s0, $sp, 0xA8
    ctx->r16 = ADD32(ctx->r29, 0XA8);
    // 0x80064CB0: addiu       $s2, $s0, 0x8
    ctx->r18 = ADD32(ctx->r16, 0X8);
L_80064CB4:
    // 0x80064CB4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80064CB8: jal         0x8001C568
    // 0x80064CBC: nop

    func_8001C568(rdram, ctx);
        goto after_13;
    // 0x80064CBC: nop

    after_13:
    // 0x80064CC0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80064CC4: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x80064CC8: bne         $at, $zero, L_80064CB4
    if (ctx->r1 != 0) {
        // 0x80064CCC: nop
    
            goto L_80064CB4;
    }
    // 0x80064CCC: nop

    // 0x80064CD0: jal         0x8005CD50
    // 0x80064CD4: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    func_8005CD50(rdram, ctx);
        goto after_14;
    // 0x80064CD4: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_14:
    // 0x80064CD8: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80064CDC: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x80064CE0: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x80064CE4: nop

    // 0x80064CE8: addiu       $t7, $t9, -0x1
    ctx->r15 = ADD32(ctx->r25, -0X1);
    // 0x80064CEC: jal         0x80007AE0
    // 0x80064CF0: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    func_80007AE0(rdram, ctx);
        goto after_15;
    // 0x80064CF0: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    after_15:
    // 0x80064CF4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80064CF8: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80064CFC: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80064D00: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80064D04: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80064D08: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80064D0C: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80064D10: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80064D14: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x80064D18: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x80064D1C: jr          $ra
    // 0x80064D20: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    // 0x80064D20: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void func_80064D24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80064D24: addiu       $sp, $sp, -0xD8
    ctx->r29 = ADD32(ctx->r29, -0XD8);
    // 0x80064D28: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80064D2C: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x80064D30: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x80064D34: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x80064D38: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x80064D3C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80064D40: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x80064D44: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80064D48: jal         0x80007774
    // 0x80064D4C: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x80064D4C: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x80064D50: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x80064D54: addiu       $t7, $t7, 0x2348
    ctx->r15 = ADD32(ctx->r15, 0X2348);
    // 0x80064D58: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x80064D5C: lw          $t9, 0x4($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X4);
    // 0x80064D60: lw          $s5, 0x1C($v0)
    ctx->r21 = MEM_W(ctx->r2, 0X1C);
    // 0x80064D64: addiu       $t6, $sp, 0xA8
    ctx->r14 = ADD32(ctx->r29, 0XA8);
    // 0x80064D68: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x80064D6C: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    // 0x80064D70: lw          $t9, 0xC($t7)
    ctx->r25 = MEM_W(ctx->r15, 0XC);
    // 0x80064D74: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x80064D78: sw          $t9, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->r25;
    // 0x80064D7C: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x80064D80: lw          $at, 0x10($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X10);
    // 0x80064D84: lw          $t9, 0x14($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X14);
    // 0x80064D88: addiu       $s1, $sp, 0xC8
    ctx->r17 = ADD32(ctx->r29, 0XC8);
    // 0x80064D8C: addiu       $s0, $sp, 0xA8
    ctx->r16 = ADD32(ctx->r29, 0XA8);
    // 0x80064D90: addiu       $s3, $sp, 0xC0
    ctx->r19 = ADD32(ctx->r29, 0XC0);
    // 0x80064D94: sw          $at, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->r1;
    // 0x80064D98: sw          $t9, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->r25;
L_80064D9C:
    // 0x80064D9C: addiu       $a0, $zero, 0x776
    ctx->r4 = ADD32(0, 0X776);
    // 0x80064DA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80064DA4: jal         0x8001D138
    // 0x80064DA8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x80064DA8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80064DAC: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x80064DB0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80064DB4: jal         0x80019164
    // 0x80064DB8: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x80064DB8: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_2:
    // 0x80064DBC: sw          $s2, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r18;
    // 0x80064DC0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80064DC4: jal         0x8001C468
    // 0x80064DC8: addiu       $a1, $zero, 0x776
    ctx->r5 = ADD32(0, 0X776);
    func_8001C468(rdram, ctx);
        goto after_3;
    // 0x80064DC8: addiu       $a1, $zero, 0x776
    ctx->r5 = ADD32(0, 0X776);
    after_3:
    // 0x80064DCC: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80064DD0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80064DD4: jal         0x800192E8
    // 0x80064DD8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800192E8(rdram, ctx);
        goto after_4;
    // 0x80064DD8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x80064DDC: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80064DE0: jal         0x80019114
    // 0x80064DE4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80019114(rdram, ctx);
        goto after_5;
    // 0x80064DE4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_5:
    // 0x80064DE8: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x80064DEC: bne         $s0, $s3, L_80064D9C
    if (ctx->r16 != ctx->r19) {
        // 0x80064DF0: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_80064D9C;
    }
    // 0x80064DF0: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80064DF4: lw          $s0, 0xCC($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XCC);
    // 0x80064DF8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80064DFC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80064E00: jal         0x80018658
    // 0x80064E04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80018658(rdram, ctx);
        goto after_6;
    // 0x80064E04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80064E08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80064E0C: jal         0x80018604
    // 0x80064E10: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    func_80018604(rdram, ctx);
        goto after_7;
    // 0x80064E10: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    after_7:
    // 0x80064E14: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80064E18: addiu       $s4, $zero, 0x5
    ctx->r20 = ADD32(0, 0X5);
    // 0x80064E1C: addiu       $s2, $sp, 0xC0
    ctx->r18 = ADD32(ctx->r29, 0XC0);
L_80064E20:
    // 0x80064E20: lw          $t8, 0x24($s5)
    ctx->r24 = MEM_W(ctx->r21, 0X24);
    // 0x80064E24: slti        $at, $s0, 0x3
    ctx->r1 = SIGNED(ctx->r16) < 0X3 ? 1 : 0;
    // 0x80064E28: andi        $t6, $t8, 0x4000
    ctx->r14 = ctx->r24 & 0X4000;
    // 0x80064E2C: bne         $t6, $zero, L_80065010
    if (ctx->r14 != 0) {
        // 0x80064E30: nop
    
            goto L_80065010;
    }
    // 0x80064E30: nop

    // 0x80064E34: beq         $at, $zero, L_80064E74
    if (ctx->r1 == 0) {
        // 0x80064E38: slti        $at, $s0, 0x28
        ctx->r1 = SIGNED(ctx->r16) < 0X28 ? 1 : 0;
            goto L_80064E74;
    }
    // 0x80064E38: slti        $at, $s0, 0x28
    ctx->r1 = SIGNED(ctx->r16) < 0X28 ? 1 : 0;
    // 0x80064E3C: addiu       $t7, $s0, 0x1
    ctx->r15 = ADD32(ctx->r16, 0X1);
    // 0x80064E40: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80064E44: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80064E48: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80064E4C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80064E50: nop

    // 0x80064E54: mul.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80064E58: jal         0x80028C2C
    // 0x80064E5C: nop

    func_80028C2C(rdram, ctx);
        goto after_8;
    // 0x80064E5C: nop

    after_8:
    // 0x80064E60: swc1        $f0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f0.u32l;
    // 0x80064E64: swc1        $f0, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f0.u32l;
    // 0x80064E68: b           L_80064EF4
    // 0x80064E6C: swc1        $f0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f0.u32l;
        goto L_80064EF4;
    // 0x80064E6C: swc1        $f0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f0.u32l;
    // 0x80064E70: slti        $at, $s0, 0x28
    ctx->r1 = SIGNED(ctx->r16) < 0X28 ? 1 : 0;
L_80064E74:
    // 0x80064E74: bne         $at, $zero, L_80064EF4
    if (ctx->r1 != 0) {
        // 0x80064E78: slti        $at, $s0, 0x2D
        ctx->r1 = SIGNED(ctx->r16) < 0X2D ? 1 : 0;
            goto L_80064EF4;
    }
    // 0x80064E78: slti        $at, $s0, 0x2D
    ctx->r1 = SIGNED(ctx->r16) < 0X2D ? 1 : 0;
    // 0x80064E7C: beq         $at, $zero, L_80064EF4
    if (ctx->r1 == 0) {
        // 0x80064E80: nop
    
            goto L_80064EF4;
    }
    // 0x80064E80: nop

    // 0x80064E84: addiu       $t9, $zero, 0x2D
    ctx->r25 = ADD32(0, 0X2D);
    // 0x80064E88: subu        $v0, $t9, $s0
    ctx->r2 = SUB32(ctx->r25, ctx->r16);
    // 0x80064E8C: sll         $v1, $v0, 8
    ctx->r3 = S32(ctx->r2 << 8);
    // 0x80064E90: lw          $s1, 0xC8($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XC8);
    // 0x80064E94: bne         $s4, $v0, L_80064EB8
    if (ctx->r20 != ctx->r2) {
        // 0x80064E98: subu        $v1, $v1, $v0
        ctx->r3 = SUB32(ctx->r3, ctx->r2);
            goto L_80064EB8;
    }
    // 0x80064E98: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80064E9C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80064EA0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80064EA4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80064EA8: jal         0x80018658
    // 0x80064EAC: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    func_80018658(rdram, ctx);
        goto after_9;
    // 0x80064EAC: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    after_9:
    // 0x80064EB0: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x80064EB4: nop

L_80064EB8:
    // 0x80064EB8: div         $zero, $v1, $s4
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r20))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r20)));
    // 0x80064EBC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80064EC0: bne         $s4, $zero, L_80064ECC
    if (ctx->r20 != 0) {
        // 0x80064EC4: nop
    
            goto L_80064ECC;
    }
    // 0x80064EC4: nop

    // 0x80064EC8: break       7
    do_break(2147897032);
L_80064ECC:
    // 0x80064ECC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80064ED0: bne         $s4, $at, L_80064EE4
    if (ctx->r20 != ctx->r1) {
        // 0x80064ED4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80064EE4;
    }
    // 0x80064ED4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80064ED8: bne         $v1, $at, L_80064EE4
    if (ctx->r3 != ctx->r1) {
        // 0x80064EDC: nop
    
            goto L_80064EE4;
    }
    // 0x80064EDC: nop

    // 0x80064EE0: break       6
    do_break(2147897056);
L_80064EE4:
    // 0x80064EE4: mflo        $a1
    ctx->r5 = lo;
    // 0x80064EE8: andi        $t8, $a1, 0xFF
    ctx->r24 = ctx->r5 & 0XFF;
    // 0x80064EEC: jal         0x80018604
    // 0x80064EF0: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    func_80018604(rdram, ctx);
        goto after_10;
    // 0x80064EF0: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    after_10:
L_80064EF4:
    // 0x80064EF4: slti        $at, $s0, 0x5
    ctx->r1 = SIGNED(ctx->r16) < 0X5 ? 1 : 0;
    // 0x80064EF8: beq         $at, $zero, L_80064F44
    if (ctx->r1 == 0) {
        // 0x80064EFC: addiu       $s3, $s0, 0x1
        ctx->r19 = ADD32(ctx->r16, 0X1);
            goto L_80064F44;
    }
    // 0x80064EFC: addiu       $s3, $s0, 0x1
    ctx->r19 = ADD32(ctx->r16, 0X1);
    // 0x80064F00: mtc1        $s3, $f10
    ctx->f10.u32l = ctx->r19;
    // 0x80064F04: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x80064F08: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80064F0C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80064F10: nop

    // 0x80064F14: mul.s       $f20, $f4, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f20.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80064F18: jal         0x80028C2C
    // 0x80064F1C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_80028C2C(rdram, ctx);
        goto after_11;
    // 0x80064F1C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_11:
    // 0x80064F20: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80064F24: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80064F28: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x80064F2C: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x80064F30: jal         0x80028C2C
    // 0x80064F34: swc1        $f10, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f10.u32l;
    func_80028C2C(rdram, ctx);
        goto after_12;
    // 0x80064F34: swc1        $f10, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f10.u32l;
    after_12:
    // 0x80064F38: swc1        $f0, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f0.u32l;
    // 0x80064F3C: b           L_80064FDC
    // 0x80064F40: swc1        $f0, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f0.u32l;
        goto L_80064FDC;
    // 0x80064F40: swc1        $f0, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f0.u32l;
L_80064F44:
    // 0x80064F44: slti        $at, $s0, 0xA
    ctx->r1 = SIGNED(ctx->r16) < 0XA ? 1 : 0;
    // 0x80064F48: beq         $at, $zero, L_80064FC4
    if (ctx->r1 == 0) {
        // 0x80064F4C: addiu       $t6, $zero, 0x9
        ctx->r14 = ADD32(0, 0X9);
            goto L_80064FC4;
    }
    // 0x80064F4C: addiu       $t6, $zero, 0x9
    ctx->r14 = ADD32(0, 0X9);
    // 0x80064F50: subu        $v0, $t6, $s0
    ctx->r2 = SUB32(ctx->r14, ctx->r16);
    // 0x80064F54: sll         $v1, $v0, 8
    ctx->r3 = S32(ctx->r2 << 8);
    // 0x80064F58: lw          $s1, 0xCC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XCC);
    // 0x80064F5C: bne         $s4, $v0, L_80064F80
    if (ctx->r20 != ctx->r2) {
        // 0x80064F60: subu        $v1, $v1, $v0
        ctx->r3 = SUB32(ctx->r3, ctx->r2);
            goto L_80064F80;
    }
    // 0x80064F60: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80064F64: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80064F68: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80064F6C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80064F70: jal         0x80018658
    // 0x80064F74: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    func_80018658(rdram, ctx);
        goto after_13;
    // 0x80064F74: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    after_13:
    // 0x80064F78: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x80064F7C: nop

L_80064F80:
    // 0x80064F80: div         $zero, $v1, $s4
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r20))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r20)));
    // 0x80064F84: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80064F88: bne         $s4, $zero, L_80064F94
    if (ctx->r20 != 0) {
        // 0x80064F8C: nop
    
            goto L_80064F94;
    }
    // 0x80064F8C: nop

    // 0x80064F90: break       7
    do_break(2147897232);
L_80064F94:
    // 0x80064F94: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80064F98: bne         $s4, $at, L_80064FAC
    if (ctx->r20 != ctx->r1) {
        // 0x80064F9C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80064FAC;
    }
    // 0x80064F9C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80064FA0: bne         $v1, $at, L_80064FAC
    if (ctx->r3 != ctx->r1) {
        // 0x80064FA4: nop
    
            goto L_80064FAC;
    }
    // 0x80064FA4: nop

    // 0x80064FA8: break       6
    do_break(2147897256);
L_80064FAC:
    // 0x80064FAC: mflo        $a1
    ctx->r5 = lo;
    // 0x80064FB0: andi        $t7, $a1, 0xFF
    ctx->r15 = ctx->r5 & 0XFF;
    // 0x80064FB4: jal         0x80018604
    // 0x80064FB8: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    func_80018604(rdram, ctx);
        goto after_14;
    // 0x80064FB8: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    after_14:
    // 0x80064FBC: b           L_80064FE0
    // 0x80064FC0: addiu       $s1, $sp, 0xC8
    ctx->r17 = ADD32(ctx->r29, 0XC8);
        goto L_80064FE0;
    // 0x80064FC0: addiu       $s1, $sp, 0xC8
    ctx->r17 = ADD32(ctx->r29, 0XC8);
L_80064FC4:
    // 0x80064FC4: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80064FC8: bne         $s0, $at, L_80064FE0
    if (ctx->r16 != ctx->r1) {
        // 0x80064FCC: addiu       $s1, $sp, 0xC8
        ctx->r17 = ADD32(ctx->r29, 0XC8);
            goto L_80064FE0;
    }
    // 0x80064FCC: addiu       $s1, $sp, 0xC8
    ctx->r17 = ADD32(ctx->r29, 0XC8);
    // 0x80064FD0: lw          $a0, 0xCC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XCC);
    // 0x80064FD4: jal         0x800191C0
    // 0x80064FD8: nop

    func_800191C0(rdram, ctx);
        goto after_15;
    // 0x80064FD8: nop

    after_15:
L_80064FDC:
    // 0x80064FDC: addiu       $s1, $sp, 0xC8
    ctx->r17 = ADD32(ctx->r29, 0XC8);
L_80064FE0:
    // 0x80064FE0: addiu       $s0, $sp, 0xA8
    ctx->r16 = ADD32(ctx->r29, 0XA8);
L_80064FE4:
    // 0x80064FE4: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80064FE8: jal         0x80019114
    // 0x80064FEC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80019114(rdram, ctx);
        goto after_16;
    // 0x80064FEC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_16:
    // 0x80064FF0: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x80064FF4: bne         $s0, $s2, L_80064FE4
    if (ctx->r16 != ctx->r18) {
        // 0x80064FF8: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_80064FE4;
    }
    // 0x80064FF8: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80064FFC: jal         0x80007AB0
    // 0x80065000: nop

    func_80007AB0(rdram, ctx);
        goto after_17;
    // 0x80065000: nop

    after_17:
    // 0x80065004: slti        $at, $s3, 0x2D
    ctx->r1 = SIGNED(ctx->r19) < 0X2D ? 1 : 0;
    // 0x80065008: bne         $at, $zero, L_80064E20
    if (ctx->r1 != 0) {
        // 0x8006500C: or          $s0, $s3, $zero
        ctx->r16 = ctx->r19 | 0;
            goto L_80064E20;
    }
    // 0x8006500C: or          $s0, $s3, $zero
    ctx->r16 = ctx->r19 | 0;
L_80065010:
    // 0x80065010: addiu       $s0, $sp, 0xC8
    ctx->r16 = ADD32(ctx->r29, 0XC8);
    // 0x80065014: addiu       $s2, $s0, 0x8
    ctx->r18 = ADD32(ctx->r16, 0X8);
L_80065018:
    // 0x80065018: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8006501C: jal         0x8001C568
    // 0x80065020: nop

    func_8001C568(rdram, ctx);
        goto after_18;
    // 0x80065020: nop

    after_18:
    // 0x80065024: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80065028: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x8006502C: bne         $at, $zero, L_80065018
    if (ctx->r1 != 0) {
        // 0x80065030: nop
    
            goto L_80065018;
    }
    // 0x80065030: nop

    // 0x80065034: jal         0x8005CD50
    // 0x80065038: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_8005CD50(rdram, ctx);
        goto after_19;
    // 0x80065038: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_19:
    // 0x8006503C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80065040: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x80065044: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x80065048: nop

    // 0x8006504C: addiu       $t6, $t8, -0x1
    ctx->r14 = ADD32(ctx->r24, -0X1);
    // 0x80065050: jal         0x80007AE0
    // 0x80065054: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    func_80007AE0(rdram, ctx);
        goto after_20;
    // 0x80065054: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    after_20:
    // 0x80065058: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8006505C: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x80065060: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80065064: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80065068: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x8006506C: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x80065070: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x80065074: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x80065078: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x8006507C: jr          $ra
    // 0x80065080: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
    return;
    // 0x80065080: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
;}
RECOMP_FUNC void func_80065084(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80065084: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x80065088: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x8006508C: sw          $s7, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r23;
    // 0x80065090: sw          $s6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r22;
    // 0x80065094: sw          $s5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r21;
    // 0x80065098: sw          $s4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r20;
    // 0x8006509C: sw          $s3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r19;
    // 0x800650A0: sw          $s2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r18;
    // 0x800650A4: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x800650A8: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x800650AC: swc1        $f25, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x800650B0: swc1        $f24, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f24.u32l;
    // 0x800650B4: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x800650B8: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x800650BC: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800650C0: jal         0x80007774
    // 0x800650C4: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x800650C4: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x800650C8: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x800650CC: addiu       $t6, $t6, 0x2360
    ctx->r14 = ADD32(ctx->r14, 0X2360);
    // 0x800650D0: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x800650D4: addiu       $s7, $sp, 0x90
    ctx->r23 = ADD32(ctx->r29, 0X90);
    // 0x800650D8: lw          $s3, 0x1C($v0)
    ctx->r19 = MEM_W(ctx->r2, 0X1C);
    // 0x800650DC: sw          $at, 0x0($s7)
    MEM_W(0X0, ctx->r23) = ctx->r1;
    // 0x800650E0: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x800650E4: addiu       $a0, $zero, 0x779
    ctx->r4 = ADD32(0, 0X779);
    // 0x800650E8: sw          $t9, 0x4($s7)
    MEM_W(0X4, ctx->r23) = ctx->r25;
    // 0x800650EC: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x800650F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800650F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800650F8: jal         0x8001D138
    // 0x800650FC: sw          $at, 0x8($s7)
    MEM_W(0X8, ctx->r23) = ctx->r1;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x800650FC: sw          $at, 0x8($s7)
    MEM_W(0X8, ctx->r23) = ctx->r1;
    after_1:
    // 0x80065100: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80065104: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80065108: jal         0x80019164
    // 0x8006510C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x8006510C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_2:
    // 0x80065110: sw          $s0, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r16;
    // 0x80065114: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80065118: jal         0x8001C468
    // 0x8006511C: addiu       $a1, $zero, 0x7CA
    ctx->r5 = ADD32(0, 0X7CA);
    func_8001C468(rdram, ctx);
        goto after_3;
    // 0x8006511C: addiu       $a1, $zero, 0x7CA
    ctx->r5 = ADD32(0, 0X7CA);
    after_3:
    // 0x80065120: lw          $a0, 0xAC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XAC);
    // 0x80065124: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80065128: jal         0x800192E8
    // 0x8006512C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800192E8(rdram, ctx);
        goto after_4;
    // 0x8006512C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x80065130: lw          $a0, 0xAC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XAC);
    // 0x80065134: jal         0x80019114
    // 0x80065138: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    func_80019114(rdram, ctx);
        goto after_5;
    // 0x80065138: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    after_5:
    // 0x8006513C: lwc1        $f4, 0x0($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X0);
    // 0x80065140: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80065144: swc1        $f4, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f4.u32l;
    // 0x80065148: lwc1        $f6, 0x4($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0X4);
    // 0x8006514C: lwc1        $f24, 0x63A0($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X63A0);
    // 0x80065150: lui         $at, 0x4014
    ctx->r1 = S32(0X4014 << 16);
    // 0x80065154: mtc1        $at, $f23
    ctx->f_odd[(23 - 1) * 2] = ctx->r1;
    // 0x80065158: swc1        $f6, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f6.u32l;
    // 0x8006515C: lwc1        $f8, 0x8($s3)
    ctx->f8.u32l = MEM_W(ctx->r19, 0X8);
    // 0x80065160: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x80065164: mtc1        $at, $f21
    ctx->f_odd[(21 - 1) * 2] = ctx->r1;
    // 0x80065168: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x8006516C: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x80065170: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80065174: addiu       $s6, $sp, 0x9C
    ctx->r22 = ADD32(ctx->r29, 0X9C);
    // 0x80065178: addiu       $s5, $zero, 0x3C
    ctx->r21 = ADD32(0, 0X3C);
    // 0x8006517C: addiu       $s4, $zero, 0xA
    ctx->r20 = ADD32(0, 0XA);
    // 0x80065180: swc1        $f8, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f8.u32l;
L_80065184:
    // 0x80065184: lw          $t8, 0x24($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X24);
    // 0x80065188: lwc1        $f0, 0x98($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X98);
    // 0x8006518C: andi        $t7, $t8, 0x4000
    ctx->r15 = ctx->r24 & 0X4000;
    // 0x80065190: bne         $t7, $zero, L_80065288
    if (ctx->r15 != 0) {
        // 0x80065194: slti        $at, $s1, 0x14
        ctx->r1 = SIGNED(ctx->r17) < 0X14 ? 1 : 0;
            goto L_80065288;
    }
    // 0x80065194: slti        $at, $s1, 0x14
    ctx->r1 = SIGNED(ctx->r17) < 0X14 ? 1 : 0;
    // 0x80065198: beq         $at, $zero, L_800651AC
    if (ctx->r1 == 0) {
        // 0x8006519C: nop
    
            goto L_800651AC;
    }
    // 0x8006519C: nop

    // 0x800651A0: add.s       $f0, $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f24.fl;
    // 0x800651A4: swc1        $f0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f0.u32l;
    // 0x800651A8: swc1        $f0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f0.u32l;
L_800651AC:
    // 0x800651AC: jal         0x80027F1C
    // 0x800651B0: nop

    func_80027F1C(rdram, ctx);
        goto after_6;
    // 0x800651B0: nop

    after_6:
    // 0x800651B4: mul.d       $f10, $f0, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f20.d); 
    ctx->f10.d = MUL_D(ctx->f0.d, ctx->f20.d);
    // 0x800651B8: lwc1        $f4, 0x0($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X0);
    // 0x800651BC: nop

    // 0x800651C0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x800651C4: add.d       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f10.d + ctx->f6.d;
    // 0x800651C8: sub.d       $f4, $f8, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f22.d); 
    ctx->f4.d = ctx->f8.d - ctx->f22.d;
    // 0x800651CC: cvt.s.d     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f10.fl = CVT_S_D(ctx->f4.d);
    // 0x800651D0: jal         0x80027F1C
    // 0x800651D4: swc1        $f10, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f10.u32l;
    func_80027F1C(rdram, ctx);
        goto after_7;
    // 0x800651D4: swc1        $f10, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f10.u32l;
    after_7:
    // 0x800651D8: mul.d       $f6, $f0, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f20.d); 
    ctx->f6.d = MUL_D(ctx->f0.d, ctx->f20.d);
    // 0x800651DC: lwc1        $f8, 0x8($s3)
    ctx->f8.u32l = MEM_W(ctx->r19, 0X8);
    // 0x800651E0: lw          $a0, 0xAC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XAC);
    // 0x800651E4: cvt.d.s     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f4.d = CVT_D_S(ctx->f8.fl);
    // 0x800651E8: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x800651EC: add.d       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f4.d); 
    ctx->f10.d = ctx->f6.d + ctx->f4.d;
    // 0x800651F0: sub.d       $f8, $f10, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f22.d); 
    ctx->f8.d = ctx->f10.d - ctx->f22.d;
    // 0x800651F4: cvt.s.d     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f6.fl = CVT_S_D(ctx->f8.d);
    // 0x800651F8: jal         0x80019164
    // 0x800651FC: swc1        $f6, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f6.u32l;
    func_80019164(rdram, ctx);
        goto after_8;
    // 0x800651FC: swc1        $f6, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f6.u32l;
    after_8:
    // 0x80065200: lw          $a0, 0xAC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XAC);
    // 0x80065204: jal         0x80019114
    // 0x80065208: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    func_80019114(rdram, ctx);
        goto after_9;
    // 0x80065208: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    after_9:
    // 0x8006520C: slti        $at, $s1, 0x32
    ctx->r1 = SIGNED(ctx->r17) < 0X32 ? 1 : 0;
    // 0x80065210: bne         $at, $zero, L_80065274
    if (ctx->r1 != 0) {
        // 0x80065214: subu        $v0, $s5, $s1
        ctx->r2 = SUB32(ctx->r21, ctx->r17);
            goto L_80065274;
    }
    // 0x80065214: subu        $v0, $s5, $s1
    ctx->r2 = SUB32(ctx->r21, ctx->r17);
    // 0x80065218: lw          $s0, 0xAC($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XAC);
    // 0x8006521C: sll         $s2, $v0, 8
    ctx->r18 = S32(ctx->r2 << 8);
    // 0x80065220: bne         $s4, $v0, L_80065238
    if (ctx->r20 != ctx->r2) {
        // 0x80065224: subu        $s2, $s2, $v0
        ctx->r18 = SUB32(ctx->r18, ctx->r2);
            goto L_80065238;
    }
    // 0x80065224: subu        $s2, $s2, $v0
    ctx->r18 = SUB32(ctx->r18, ctx->r2);
    // 0x80065228: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006522C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80065230: jal         0x80018658
    // 0x80065234: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80018658(rdram, ctx);
        goto after_10;
    // 0x80065234: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_10:
L_80065238:
    // 0x80065238: div         $zero, $s2, $s4
    lo = S32(S64(S32(ctx->r18)) / S64(S32(ctx->r20))); hi = S32(S64(S32(ctx->r18)) % S64(S32(ctx->r20)));
    // 0x8006523C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80065240: bne         $s4, $zero, L_8006524C
    if (ctx->r20 != 0) {
        // 0x80065244: nop
    
            goto L_8006524C;
    }
    // 0x80065244: nop

    // 0x80065248: break       7
    do_break(2147897928);
L_8006524C:
    // 0x8006524C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80065250: bne         $s4, $at, L_80065264
    if (ctx->r20 != ctx->r1) {
        // 0x80065254: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80065264;
    }
    // 0x80065254: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80065258: bne         $s2, $at, L_80065264
    if (ctx->r18 != ctx->r1) {
        // 0x8006525C: nop
    
            goto L_80065264;
    }
    // 0x8006525C: nop

    // 0x80065260: break       6
    do_break(2147897952);
L_80065264:
    // 0x80065264: mflo        $a1
    ctx->r5 = lo;
    // 0x80065268: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x8006526C: jal         0x80018604
    // 0x80065270: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    func_80018604(rdram, ctx);
        goto after_11;
    // 0x80065270: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    after_11:
L_80065274:
    // 0x80065274: jal         0x80007AB0
    // 0x80065278: nop

    func_80007AB0(rdram, ctx);
        goto after_12;
    // 0x80065278: nop

    after_12:
    // 0x8006527C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80065280: bne         $s1, $s5, L_80065184
    if (ctx->r17 != ctx->r21) {
        // 0x80065284: nop
    
            goto L_80065184;
    }
    // 0x80065284: nop

L_80065288:
    // 0x80065288: addiu       $s0, $sp, 0xAC
    ctx->r16 = ADD32(ctx->r29, 0XAC);
    // 0x8006528C: addiu       $s2, $s0, 0x4
    ctx->r18 = ADD32(ctx->r16, 0X4);
L_80065290:
    // 0x80065290: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80065294: jal         0x8001C568
    // 0x80065298: nop

    func_8001C568(rdram, ctx);
        goto after_13;
    // 0x80065298: nop

    after_13:
    // 0x8006529C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x800652A0: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x800652A4: bne         $at, $zero, L_80065290
    if (ctx->r1 != 0) {
        // 0x800652A8: nop
    
            goto L_80065290;
    }
    // 0x800652A8: nop

    // 0x800652AC: jal         0x8005CD50
    // 0x800652B0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_8005CD50(rdram, ctx);
        goto after_14;
    // 0x800652B0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_14:
    // 0x800652B4: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x800652B8: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x800652BC: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x800652C0: nop

    // 0x800652C4: addiu       $t7, $t8, -0x1
    ctx->r15 = ADD32(ctx->r24, -0X1);
    // 0x800652C8: jal         0x80007AE0
    // 0x800652CC: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    func_80007AE0(rdram, ctx);
        goto after_15;
    // 0x800652CC: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    after_15:
    // 0x800652D0: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x800652D4: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x800652D8: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x800652DC: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800652E0: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800652E4: lwc1        $f25, 0x20($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x800652E8: lwc1        $f24, 0x24($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800652EC: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x800652F0: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x800652F4: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x800652F8: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x800652FC: lw          $s4, 0x3C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X3C);
    // 0x80065300: lw          $s5, 0x40($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X40);
    // 0x80065304: lw          $s6, 0x44($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X44);
    // 0x80065308: lw          $s7, 0x48($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X48);
    // 0x8006530C: jr          $ra
    // 0x80065310: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    // 0x80065310: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void func_80065314(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80065314: addiu       $sp, $sp, -0x110
    ctx->r29 = ADD32(ctx->r29, -0X110);
    // 0x80065318: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x8006531C: sw          $fp, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r30;
    // 0x80065320: sw          $s7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r23;
    // 0x80065324: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x80065328: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x8006532C: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x80065330: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x80065334: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x80065338: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x8006533C: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x80065340: swc1        $f31, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x80065344: swc1        $f30, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f30.u32l;
    // 0x80065348: swc1        $f29, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x8006534C: swc1        $f28, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f28.u32l;
    // 0x80065350: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x80065354: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x80065358: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x8006535C: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x80065360: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80065364: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x80065368: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8006536C: jal         0x80007774
    // 0x80065370: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x80065370: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x80065374: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x80065378: addiu       $t7, $t7, 0x236C
    ctx->r15 = ADD32(ctx->r15, 0X236C);
    // 0x8006537C: lw          $s5, 0x1C($v0)
    ctx->r21 = MEM_W(ctx->r2, 0X1C);
    // 0x80065380: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x80065384: lw          $t9, 0x4($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X4);
    // 0x80065388: addiu       $t6, $sp, 0xC8
    ctx->r14 = ADD32(ctx->r29, 0XC8);
    // 0x8006538C: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x80065390: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    // 0x80065394: lw          $t9, 0xC($t7)
    ctx->r25 = MEM_W(ctx->r15, 0XC);
    // 0x80065398: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x8006539C: sw          $t9, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->r25;
    // 0x800653A0: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x800653A4: lw          $at, 0x10($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X10);
    // 0x800653A8: lw          $t9, 0x14($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X14);
    // 0x800653AC: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x800653B0: addiu       $t8, $t8, 0x2384
    ctx->r24 = ADD32(ctx->r24, 0X2384);
    // 0x800653B4: sw          $at, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->r1;
    // 0x800653B8: sw          $t9, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->r25;
    // 0x800653BC: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x800653C0: addiu       $fp, $sp, 0xB0
    ctx->r30 = ADD32(ctx->r29, 0XB0);
    // 0x800653C4: sw          $at, 0x0($fp)
    MEM_W(0X0, ctx->r30) = ctx->r1;
    // 0x800653C8: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x800653CC: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x800653D0: sw          $t9, 0x4($fp)
    MEM_W(0X4, ctx->r30) = ctx->r25;
    // 0x800653D4: lw          $at, 0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X8);
    // 0x800653D8: addiu       $s2, $sp, 0xE0
    ctx->r18 = ADD32(ctx->r29, 0XE0);
    // 0x800653DC: sw          $at, 0x8($fp)
    MEM_W(0X8, ctx->r30) = ctx->r1;
    // 0x800653E0: lw          $t9, 0xC($t8)
    ctx->r25 = MEM_W(ctx->r24, 0XC);
    // 0x800653E4: addiu       $s1, $sp, 0xC8
    ctx->r17 = ADD32(ctx->r29, 0XC8);
    // 0x800653E8: sw          $t9, 0xC($fp)
    MEM_W(0XC, ctx->r30) = ctx->r25;
    // 0x800653EC: lw          $at, 0x10($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X10);
    // 0x800653F0: addiu       $s3, $sp, 0x100
    ctx->r19 = ADD32(ctx->r29, 0X100);
    // 0x800653F4: sw          $at, 0x10($fp)
    MEM_W(0X10, ctx->r30) = ctx->r1;
    // 0x800653F8: lw          $t9, 0x14($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X14);
    // 0x800653FC: addiu       $s4, $sp, 0xB0
    ctx->r20 = ADD32(ctx->r29, 0XB0);
    // 0x80065400: addiu       $s7, $s5, 0xC
    ctx->r23 = ADD32(ctx->r21, 0XC);
    // 0x80065404: sw          $t9, 0x14($fp)
    MEM_W(0X14, ctx->r30) = ctx->r25;
L_80065408:
    // 0x80065408: lwc1        $f4, 0x4($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X4);
    // 0x8006540C: lwc1        $f6, 0x4($s5)
    ctx->f6.u32l = MEM_W(ctx->r21, 0X4);
    // 0x80065410: nop

    // 0x80065414: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80065418: swc1        $f8, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->f8.u32l;
    // 0x8006541C: lwc1        $f12, 0x10($s5)
    ctx->f12.u32l = MEM_W(ctx->r21, 0X10);
    // 0x80065420: jal         0x8007A800
    // 0x80065424: nop

    __cosf_recomp(rdram, ctx);
        goto after_1;
    // 0x80065424: nop

    after_1:
    // 0x80065428: lwc1        $f12, 0x10($s5)
    ctx->f12.u32l = MEM_W(ctx->r21, 0X10);
    // 0x8006542C: jal         0x8007A640
    // 0x80065430: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    __sinf_recomp(rdram, ctx);
        goto after_2;
    // 0x80065430: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_2:
    // 0x80065434: lwc1        $f10, 0x8($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X8);
    // 0x80065438: lwc1        $f6, 0x0($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X0);
    // 0x8006543C: mul.s       $f4, $f10, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x80065440: nop

    // 0x80065444: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x80065448: lwc1        $f6, 0x8($s5)
    ctx->f6.u32l = MEM_W(ctx->r21, 0X8);
    // 0x8006544C: sub.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x80065450: add.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x80065454: swc1        $f4, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f4.u32l;
    // 0x80065458: lwc1        $f12, 0x10($s5)
    ctx->f12.u32l = MEM_W(ctx->r21, 0X10);
    // 0x8006545C: jal         0x8007A640
    // 0x80065460: nop

    __sinf_recomp(rdram, ctx);
        goto after_3;
    // 0x80065460: nop

    after_3:
    // 0x80065464: lwc1        $f12, 0x10($s5)
    ctx->f12.u32l = MEM_W(ctx->r21, 0X10);
    // 0x80065468: jal         0x8007A800
    // 0x8006546C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    __cosf_recomp(rdram, ctx);
        goto after_4;
    // 0x8006546C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_4:
    // 0x80065470: lwc1        $f8, 0x0($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X0);
    // 0x80065474: lwc1        $f6, 0x8($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X8);
    // 0x80065478: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x8006547C: addiu       $a0, $zero, 0x778
    ctx->r4 = ADD32(0, 0X778);
    // 0x80065480: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80065484: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80065488: mul.s       $f4, $f6, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x8006548C: lwc1        $f6, 0x0($s5)
    ctx->f6.u32l = MEM_W(ctx->r21, 0X0);
    // 0x80065490: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80065494: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x80065498: jal         0x8001D138
    // 0x8006549C: swc1        $f10, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->f10.u32l;
    func_8001D138(rdram, ctx);
        goto after_5;
    // 0x8006549C: swc1        $f10, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->f10.u32l;
    after_5:
    // 0x800654A0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800654A4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800654A8: jal         0x80019164
    // 0x800654AC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_80019164(rdram, ctx);
        goto after_6;
    // 0x800654AC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_6:
    // 0x800654B0: sw          $s0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r16;
    // 0x800654B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800654B8: jal         0x80019114
    // 0x800654BC: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    func_80019114(rdram, ctx);
        goto after_7;
    // 0x800654BC: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_7:
    // 0x800654C0: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x800654C4: jal         0x8001913C
    // 0x800654C8: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    func_8001913C(rdram, ctx);
        goto after_8;
    // 0x800654C8: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    after_8:
    // 0x800654CC: addiu       $s4, $s4, 0xC
    ctx->r20 = ADD32(ctx->r20, 0XC);
    // 0x800654D0: addiu       $t7, $sp, 0xC8
    ctx->r15 = ADD32(ctx->r29, 0XC8);
    // 0x800654D4: addiu       $s2, $s2, 0xC
    ctx->r18 = ADD32(ctx->r18, 0XC);
    // 0x800654D8: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x800654DC: bne         $s4, $t7, L_80065408
    if (ctx->r20 != ctx->r15) {
        // 0x800654E0: addiu       $s3, $s3, 0x4
        ctx->r19 = ADD32(ctx->r19, 0X4);
            goto L_80065408;
    }
    // 0x800654E0: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x800654E4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800654E8: lwc1        $f30, 0x63A4($at)
    ctx->f30.u32l = MEM_W(ctx->r1, 0X63A4);
    // 0x800654EC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800654F0: lwc1        $f29, 0x63A8($at)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r1, 0X63A8);
    // 0x800654F4: lwc1        $f28, 0x63AC($at)
    ctx->f28.u32l = MEM_W(ctx->r1, 0X63AC);
    // 0x800654F8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800654FC: lwc1        $f27, 0x63B0($at)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r1, 0X63B0);
    // 0x80065500: lwc1        $f26, 0x63B4($at)
    ctx->f26.u32l = MEM_W(ctx->r1, 0X63B4);
    // 0x80065504: lui         $at, 0x4006
    ctx->r1 = S32(0X4006 << 16);
    // 0x80065508: mtc1        $at, $f25
    ctx->f_odd[(25 - 1) * 2] = ctx->r1;
    // 0x8006550C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80065510: lwc1        $f23, 0x63B8($at)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r1, 0X63B8);
    // 0x80065514: lwc1        $f22, 0x63BC($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X63BC);
    // 0x80065518: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x8006551C: addiu       $s0, $sp, 0xBC
    ctx->r16 = ADD32(ctx->r29, 0XBC);
L_80065520:
    // 0x80065520: lw          $t6, 0x24($s5)
    ctx->r14 = MEM_W(ctx->r21, 0X24);
    // 0x80065524: lwc1        $f2, 0xC0($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x80065528: andi        $t8, $t6, 0x4000
    ctx->r24 = ctx->r14 & 0X4000;
    // 0x8006552C: bne         $t8, $zero, L_80065610
    if (ctx->r24 != 0) {
        // 0x80065530: slti        $at, $s6, 0x5
        ctx->r1 = SIGNED(ctx->r22) < 0X5 ? 1 : 0;
            goto L_80065610;
    }
    // 0x80065530: slti        $at, $s6, 0x5
    ctx->r1 = SIGNED(ctx->r22) < 0X5 ? 1 : 0;
    // 0x80065534: beq         $at, $zero, L_8006558C
    if (ctx->r1 == 0) {
        // 0x80065538: or          $a1, $fp, $zero
        ctx->r5 = ctx->r30 | 0;
            goto L_8006558C;
    }
    // 0x80065538: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    // 0x8006553C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80065540: lwc1        $f12, 0xBC($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x80065544: lwc1        $f14, 0xC4($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x80065548: lwc1        $f4, 0x63C0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X63C0);
    // 0x8006554C: sub.s       $f12, $f12, $f30
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f30.fl;
    // 0x80065550: lw          $a0, 0x100($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X100);
    // 0x80065554: sub.s       $f14, $f14, $f30
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f14.fl = ctx->f14.fl - ctx->f30.fl;
    // 0x80065558: swc1        $f12, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f12.u32l;
    // 0x8006555C: add.s       $f2, $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f4.fl;
    // 0x80065560: swc1        $f14, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f14.u32l;
    // 0x80065564: swc1        $f2, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f2.u32l;
    // 0x80065568: swc1        $f2, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f2.u32l;
    // 0x8006556C: swc1        $f14, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f14.u32l;
    // 0x80065570: jal         0x80019114
    // 0x80065574: swc1        $f12, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f12.u32l;
    func_80019114(rdram, ctx);
        goto after_9;
    // 0x80065574: swc1        $f12, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f12.u32l;
    after_9:
    // 0x80065578: lw          $a0, 0x104($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X104);
    // 0x8006557C: jal         0x80019114
    // 0x80065580: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80019114(rdram, ctx);
        goto after_10;
    // 0x80065580: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_10:
    // 0x80065584: b           L_80065600
    // 0x80065588: nop

        goto L_80065600;
    // 0x80065588: nop

L_8006558C:
    // 0x8006558C: jal         0x80027F1C
    // 0x80065590: nop

    func_80027F1C(rdram, ctx);
        goto after_11;
    // 0x80065590: nop

    after_11:
    // 0x80065594: mul.d       $f8, $f0, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f22.d); 
    ctx->f8.d = MUL_D(ctx->f0.d, ctx->f22.d);
    // 0x80065598: add.d       $f6, $f8, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f24.d); 
    ctx->f6.d = ctx->f8.d + ctx->f24.d;
    // 0x8006559C: cvt.s.d     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f10.fl = CVT_S_D(ctx->f6.d);
    // 0x800655A0: jal         0x80027F1C
    // 0x800655A4: swc1        $f10, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f10.u32l;
    func_80027F1C(rdram, ctx);
        goto after_12;
    // 0x800655A4: swc1        $f10, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f10.u32l;
    after_12:
    // 0x800655A8: mul.d       $f4, $f0, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f22.d); 
    ctx->f4.d = MUL_D(ctx->f0.d, ctx->f22.d);
    // 0x800655AC: add.d       $f8, $f4, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f24.d); 
    ctx->f8.d = ctx->f4.d + ctx->f24.d;
    // 0x800655B0: cvt.s.d     $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f2.fl = CVT_S_D(ctx->f8.d);
    // 0x800655B4: jal         0x80027F1C
    // 0x800655B8: swc1        $f2, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f2.u32l;
    func_80027F1C(rdram, ctx);
        goto after_13;
    // 0x800655B8: swc1        $f2, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f2.u32l;
    after_13:
    // 0x800655BC: mul.d       $f6, $f0, $f26
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f26.d); 
    ctx->f6.d = MUL_D(ctx->f0.d, ctx->f26.d);
    // 0x800655C0: add.d       $f10, $f6, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f28.d); 
    ctx->f10.d = ctx->f6.d + ctx->f28.d;
    // 0x800655C4: cvt.s.d     $f20, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f20.fl = CVT_S_D(ctx->f10.d);
    // 0x800655C8: swc1        $f20, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f20.u32l;
    // 0x800655CC: jal         0x80027F1C
    // 0x800655D0: swc1        $f20, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f20.u32l;
    func_80027F1C(rdram, ctx);
        goto after_14;
    // 0x800655D0: swc1        $f20, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f20.u32l;
    after_14:
    // 0x800655D4: mul.d       $f4, $f0, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f26.d); 
    ctx->f4.d = MUL_D(ctx->f0.d, ctx->f26.d);
    // 0x800655D8: lw          $a0, 0x100($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X100);
    // 0x800655DC: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    // 0x800655E0: add.d       $f8, $f4, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f28.d); 
    ctx->f8.d = ctx->f4.d + ctx->f28.d;
    // 0x800655E4: cvt.s.d     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f14.fl = CVT_S_D(ctx->f8.d);
    // 0x800655E8: swc1        $f14, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f14.u32l;
    // 0x800655EC: jal         0x80019114
    // 0x800655F0: swc1        $f14, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f14.u32l;
    func_80019114(rdram, ctx);
        goto after_15;
    // 0x800655F0: swc1        $f14, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f14.u32l;
    after_15:
    // 0x800655F4: lw          $a0, 0x104($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X104);
    // 0x800655F8: jal         0x80019114
    // 0x800655FC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80019114(rdram, ctx);
        goto after_16;
    // 0x800655FC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_16:
L_80065600:
    // 0x80065600: jal         0x80007AB0
    // 0x80065604: nop

    func_80007AB0(rdram, ctx);
        goto after_17;
    // 0x80065604: nop

    after_17:
    // 0x80065608: b           L_80065520
    // 0x8006560C: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
        goto L_80065520;
    // 0x8006560C: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
L_80065610:
    // 0x80065610: addiu       $s0, $sp, 0x100
    ctx->r16 = ADD32(ctx->r29, 0X100);
    // 0x80065614: addiu       $s2, $s0, 0x8
    ctx->r18 = ADD32(ctx->r16, 0X8);
L_80065618:
    // 0x80065618: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8006561C: jal         0x8001C568
    // 0x80065620: nop

    func_8001C568(rdram, ctx);
        goto after_18;
    // 0x80065620: nop

    after_18:
    // 0x80065624: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80065628: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x8006562C: bne         $at, $zero, L_80065618
    if (ctx->r1 != 0) {
        // 0x80065630: nop
    
            goto L_80065618;
    }
    // 0x80065630: nop

    // 0x80065634: jal         0x8005CD50
    // 0x80065638: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_8005CD50(rdram, ctx);
        goto after_19;
    // 0x80065638: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_19:
    // 0x8006563C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80065640: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x80065644: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x80065648: nop

    // 0x8006564C: addiu       $t6, $t7, -0x1
    ctx->r14 = ADD32(ctx->r15, -0X1);
    // 0x80065650: jal         0x80007AE0
    // 0x80065654: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    func_80007AE0(rdram, ctx);
        goto after_20;
    // 0x80065654: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    after_20:
    // 0x80065658: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x8006565C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80065660: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80065664: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80065668: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8006566C: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x80065670: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80065674: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x80065678: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8006567C: lwc1        $f29, 0x38($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x80065680: lwc1        $f28, 0x3C($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80065684: lwc1        $f31, 0x40($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x80065688: lwc1        $f30, 0x44($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8006568C: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x80065690: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x80065694: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x80065698: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x8006569C: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x800656A0: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x800656A4: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x800656A8: lw          $s7, 0x64($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X64);
    // 0x800656AC: lw          $fp, 0x68($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X68);
    // 0x800656B0: jr          $ra
    // 0x800656B4: addiu       $sp, $sp, 0x110
    ctx->r29 = ADD32(ctx->r29, 0X110);
    return;
    // 0x800656B4: addiu       $sp, $sp, 0x110
    ctx->r29 = ADD32(ctx->r29, 0X110);
;}
RECOMP_FUNC void func_800656B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800656B8: addiu       $sp, $sp, -0xC0
    ctx->r29 = ADD32(ctx->r29, -0XC0);
    // 0x800656BC: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x800656C0: sw          $s7, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r23;
    // 0x800656C4: sw          $s6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r22;
    // 0x800656C8: sw          $s5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r21;
    // 0x800656CC: sw          $s4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r20;
    // 0x800656D0: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x800656D4: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x800656D8: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x800656DC: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x800656E0: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x800656E4: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x800656E8: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800656EC: jal         0x80007774
    // 0x800656F0: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x800656F0: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x800656F4: lw          $s5, 0x1C($v0)
    ctx->r21 = MEM_W(ctx->r2, 0X1C);
    // 0x800656F8: addiu       $a0, $zero, 0x77A
    ctx->r4 = ADD32(0, 0X77A);
    // 0x800656FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80065700: jal         0x8001D138
    // 0x80065704: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x80065704: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80065708: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8006570C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80065710: jal         0x80019164
    // 0x80065714: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x80065714: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_2:
    // 0x80065718: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006571C: jal         0x800191C0
    // 0x80065720: sw          $s0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r16;
    func_800191C0(rdram, ctx);
        goto after_3;
    // 0x80065720: sw          $s0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r16;
    after_3:
    // 0x80065724: addiu       $a0, $zero, 0x77C
    ctx->r4 = ADD32(0, 0X77C);
    // 0x80065728: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8006572C: jal         0x8001D138
    // 0x80065730: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_4;
    // 0x80065730: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x80065734: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80065738: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8006573C: jal         0x80019164
    // 0x80065740: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    func_80019164(rdram, ctx);
        goto after_5;
    // 0x80065740: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_5:
    // 0x80065744: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80065748: addiu       $a1, $zero, 0x7CC
    ctx->r5 = ADD32(0, 0X7CC);
    // 0x8006574C: jal         0x8001C468
    // 0x80065750: sw          $s0, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r16;
    func_8001C468(rdram, ctx);
        goto after_6;
    // 0x80065750: sw          $s0, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r16;
    after_6:
    // 0x80065754: lw          $a0, 0xB4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XB4);
    // 0x80065758: or          $s6, $v0, $zero
    ctx->r22 = ctx->r2 | 0;
    // 0x8006575C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80065760: jal         0x800192E8
    // 0x80065764: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800192E8(rdram, ctx);
        goto after_7;
    // 0x80065764: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_7:
    // 0x80065768: lui         $at, 0x4008
    ctx->r1 = S32(0X4008 << 16);
    // 0x8006576C: mtc1        $at, $f23
    ctx->f_odd[(23 - 1) * 2] = ctx->r1;
    // 0x80065770: lui         $at, 0x3FF8
    ctx->r1 = S32(0X3FF8 << 16);
    // 0x80065774: mtc1        $at, $f21
    ctx->f_odd[(21 - 1) * 2] = ctx->r1;
    // 0x80065778: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x8006577C: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x80065780: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80065784: addiu       $s7, $zero, 0x14
    ctx->r23 = ADD32(0, 0X14);
    // 0x80065788: addiu       $s4, $zero, 0x64
    ctx->r20 = ADD32(0, 0X64);
    // 0x8006578C: addiu       $s3, $zero, 0x78
    ctx->r19 = ADD32(0, 0X78);
L_80065790:
    // 0x80065790: lw          $t6, 0x24($s5)
    ctx->r14 = MEM_W(ctx->r21, 0X24);
    // 0x80065794: lw          $a0, 0xB4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XB4);
    // 0x80065798: andi        $t7, $t6, 0x4000
    ctx->r15 = ctx->r14 & 0X4000;
    // 0x8006579C: bne         $t7, $zero, L_80065894
    if (ctx->r15 != 0) {
        // 0x800657A0: addiu       $s0, $sp, 0xB0
        ctx->r16 = ADD32(ctx->r29, 0XB0);
            goto L_80065894;
    }
    // 0x800657A0: addiu       $s0, $sp, 0xB0
    ctx->r16 = ADD32(ctx->r29, 0XB0);
    // 0x800657A4: bne         $s1, $s7, L_800657DC
    if (ctx->r17 != ctx->r23) {
        // 0x800657A8: slti        $at, $s1, 0x14
        ctx->r1 = SIGNED(ctx->r17) < 0X14 ? 1 : 0;
            goto L_800657DC;
    }
    // 0x800657A8: slti        $at, $s1, 0x14
    ctx->r1 = SIGNED(ctx->r17) < 0X14 ? 1 : 0;
    // 0x800657AC: jal         0x80019774
    // 0x800657B0: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    func_80019774(rdram, ctx);
        goto after_8;
    // 0x800657B0: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    after_8:
    // 0x800657B4: lw          $a0, 0xB0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XB0);
    // 0x800657B8: jal         0x800191D4
    // 0x800657BC: nop

    func_800191D4(rdram, ctx);
        goto after_9;
    // 0x800657BC: nop

    after_9:
    // 0x800657C0: lw          $a0, 0xB4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XB4);
    // 0x800657C4: jal         0x800191C0
    // 0x800657C8: nop

    func_800191C0(rdram, ctx);
        goto after_10;
    // 0x800657C8: nop

    after_10:
    // 0x800657CC: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    // 0x800657D0: jal         0x8005D1B4
    // 0x800657D4: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    func_8005D1B4(rdram, ctx);
        goto after_11;
    // 0x800657D4: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_11:
    // 0x800657D8: slti        $at, $s1, 0x14
    ctx->r1 = SIGNED(ctx->r17) < 0X14 ? 1 : 0;
L_800657DC:
    // 0x800657DC: beq         $at, $zero, L_80065820
    if (ctx->r1 == 0) {
        // 0x800657E0: subu        $v0, $s3, $s1
        ctx->r2 = SUB32(ctx->r19, ctx->r17);
            goto L_80065820;
    }
    // 0x800657E0: subu        $v0, $s3, $s1
    ctx->r2 = SUB32(ctx->r19, ctx->r17);
    // 0x800657E4: jal         0x80027F1C
    // 0x800657E8: nop

    func_80027F1C(rdram, ctx);
        goto after_12;
    // 0x800657E8: nop

    after_12:
    // 0x800657EC: mul.d       $f4, $f0, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f20.d); 
    ctx->f4.d = MUL_D(ctx->f0.d, ctx->f20.d);
    // 0x800657F0: cvt.s.d     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f2.fl = CVT_S_D(ctx->f4.d);
    // 0x800657F4: swc1        $f2, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f2.u32l;
    // 0x800657F8: jal         0x80027F1C
    // 0x800657FC: swc1        $f2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f2.u32l;
    func_80027F1C(rdram, ctx);
        goto after_13;
    // 0x800657FC: swc1        $f2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f2.u32l;
    after_13:
    // 0x80065800: mul.d       $f6, $f0, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f22.d); 
    ctx->f6.d = MUL_D(ctx->f0.d, ctx->f22.d);
    // 0x80065804: lw          $a0, 0xB4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XB4);
    // 0x80065808: addiu       $a1, $sp, 0xA0
    ctx->r5 = ADD32(ctx->r29, 0XA0);
    // 0x8006580C: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x80065810: jal         0x80019114
    // 0x80065814: swc1        $f8, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f8.u32l;
    func_80019114(rdram, ctx);
        goto after_14;
    // 0x80065814: swc1        $f8, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f8.u32l;
    after_14:
    // 0x80065818: b           L_8006587C
    // 0x8006581C: nop

        goto L_8006587C;
    // 0x8006581C: nop

L_80065820:
    // 0x80065820: lw          $a0, 0xB0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XB0);
    // 0x80065824: sll         $s2, $v0, 8
    ctx->r18 = S32(ctx->r2 << 8);
    // 0x80065828: subu        $s2, $s2, $v0
    ctx->r18 = SUB32(ctx->r18, ctx->r2);
    // 0x8006582C: bne         $s4, $v0, L_80065840
    if (ctx->r20 != ctx->r2) {
        // 0x80065830: or          $s0, $a0, $zero
        ctx->r16 = ctx->r4 | 0;
            goto L_80065840;
    }
    // 0x80065830: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80065834: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80065838: jal         0x80018658
    // 0x8006583C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80018658(rdram, ctx);
        goto after_15;
    // 0x8006583C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_15:
L_80065840:
    // 0x80065840: div         $zero, $s2, $s4
    lo = S32(S64(S32(ctx->r18)) / S64(S32(ctx->r20))); hi = S32(S64(S32(ctx->r18)) % S64(S32(ctx->r20)));
    // 0x80065844: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80065848: bne         $s4, $zero, L_80065854
    if (ctx->r20 != 0) {
        // 0x8006584C: nop
    
            goto L_80065854;
    }
    // 0x8006584C: nop

    // 0x80065850: break       7
    do_break(2147899472);
L_80065854:
    // 0x80065854: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80065858: bne         $s4, $at, L_8006586C
    if (ctx->r20 != ctx->r1) {
        // 0x8006585C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8006586C;
    }
    // 0x8006585C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80065860: bne         $s2, $at, L_8006586C
    if (ctx->r18 != ctx->r1) {
        // 0x80065864: nop
    
            goto L_8006586C;
    }
    // 0x80065864: nop

    // 0x80065868: break       6
    do_break(2147899496);
L_8006586C:
    // 0x8006586C: mflo        $a1
    ctx->r5 = lo;
    // 0x80065870: andi        $t8, $a1, 0xFF
    ctx->r24 = ctx->r5 & 0XFF;
    // 0x80065874: jal         0x80018604
    // 0x80065878: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    func_80018604(rdram, ctx);
        goto after_16;
    // 0x80065878: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    after_16:
L_8006587C:
    // 0x8006587C: jal         0x80007AB0
    // 0x80065880: nop

    func_80007AB0(rdram, ctx);
        goto after_17;
    // 0x80065880: nop

    after_17:
    // 0x80065884: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80065888: bne         $s1, $s3, L_80065790
    if (ctx->r17 != ctx->r19) {
        // 0x8006588C: nop
    
            goto L_80065790;
    }
    // 0x8006588C: nop

    // 0x80065890: addiu       $s0, $sp, 0xB0
    ctx->r16 = ADD32(ctx->r29, 0XB0);
L_80065894:
    // 0x80065894: addiu       $s2, $s0, 0x8
    ctx->r18 = ADD32(ctx->r16, 0X8);
L_80065898:
    // 0x80065898: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8006589C: jal         0x8001C568
    // 0x800658A0: nop

    func_8001C568(rdram, ctx);
        goto after_18;
    // 0x800658A0: nop

    after_18:
    // 0x800658A4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x800658A8: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x800658AC: bne         $at, $zero, L_80065898
    if (ctx->r1 != 0) {
        // 0x800658B0: nop
    
            goto L_80065898;
    }
    // 0x800658B0: nop

    // 0x800658B4: jal         0x8005CD50
    // 0x800658B8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_8005CD50(rdram, ctx);
        goto after_19;
    // 0x800658B8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_19:
    // 0x800658BC: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x800658C0: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x800658C4: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x800658C8: nop

    // 0x800658CC: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x800658D0: jal         0x80007AE0
    // 0x800658D4: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    func_80007AE0(rdram, ctx);
        goto after_20;
    // 0x800658D4: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    after_20:
    // 0x800658D8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x800658DC: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x800658E0: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x800658E4: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800658E8: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800658EC: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x800658F0: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x800658F4: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x800658F8: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x800658FC: lw          $s4, 0x34($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X34);
    // 0x80065900: lw          $s5, 0x38($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X38);
    // 0x80065904: lw          $s6, 0x3C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X3C);
    // 0x80065908: lw          $s7, 0x40($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X40);
    // 0x8006590C: jr          $ra
    // 0x80065910: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
    return;
    // 0x80065910: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
;}
RECOMP_FUNC void func_80065914(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80065914: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x80065918: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8006591C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80065920: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80065924: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80065928: jal         0x80007774
    // 0x8006592C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x8006592C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x80065930: lw          $s2, 0x1C($v0)
    ctx->r18 = MEM_W(ctx->r2, 0X1C);
    // 0x80065934: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80065938: jal         0x80028AB8
    // 0x8006593C: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    func_80028AB8(rdram, ctx);
        goto after_1;
    // 0x8006593C: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    after_1:
    // 0x80065940: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x80065944: addiu       $t7, $t7, 0x239C
    ctx->r15 = ADD32(ctx->r15, 0X239C);
    // 0x80065948: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x8006594C: addiu       $t6, $sp, 0x68
    ctx->r14 = ADD32(ctx->r29, 0X68);
    // 0x80065950: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x80065954: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x80065958: lw          $t9, 0x4($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X4);
    // 0x8006595C: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x80065960: addiu       $a0, $zero, 0x77B
    ctx->r4 = ADD32(0, 0X77B);
    // 0x80065964: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80065968: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8006596C: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x80065970: jal         0x8001D138
    // 0x80065974: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    func_8001D138(rdram, ctx);
        goto after_2;
    // 0x80065974: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    after_2:
    // 0x80065978: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8006597C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80065980: jal         0x80019164
    // 0x80065984: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_80019164(rdram, ctx);
        goto after_3;
    // 0x80065984: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_3:
    // 0x80065988: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006598C: jal         0x800191C0
    // 0x80065990: sw          $s0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r16;
    func_800191C0(rdram, ctx);
        goto after_4;
    // 0x80065990: sw          $s0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r16;
    after_4:
    // 0x80065994: addiu       $a0, $zero, 0x77D
    ctx->r4 = ADD32(0, 0X77D);
    // 0x80065998: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8006599C: jal         0x8001D138
    // 0x800659A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_5;
    // 0x800659A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x800659A4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800659A8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800659AC: jal         0x80019164
    // 0x800659B0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_80019164(rdram, ctx);
        goto after_6;
    // 0x800659B0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_6:
    // 0x800659B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800659B8: addiu       $a1, $zero, 0x7CD
    ctx->r5 = ADD32(0, 0X7CD);
    // 0x800659BC: jal         0x8001C468
    // 0x800659C0: sw          $s0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r16;
    func_8001C468(rdram, ctx);
        goto after_7;
    // 0x800659C0: sw          $s0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r16;
    after_7:
    // 0x800659C4: lw          $a0, 0x84($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X84);
    // 0x800659C8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800659CC: jal         0x800192E8
    // 0x800659D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800192E8(rdram, ctx);
        goto after_8;
    // 0x800659D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_8:
    // 0x800659D4: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x800659D8: jal         0x80018894
    // 0x800659DC: ori         $a1, $zero, 0x8001
    ctx->r5 = 0 | 0X8001;
    func_80018894(rdram, ctx);
        goto after_9;
    // 0x800659DC: ori         $a1, $zero, 0x8001
    ctx->r5 = 0 | 0X8001;
    after_9:
    // 0x800659E0: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x800659E4: jal         0x800187D8
    // 0x800659E8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_800187D8(rdram, ctx);
        goto after_10;
    // 0x800659E8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_10:
    // 0x800659EC: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x800659F0: jal         0x80018794
    // 0x800659F4: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    func_80018794(rdram, ctx);
        goto after_11;
    // 0x800659F4: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_11:
    // 0x800659F8: lw          $v0, 0x24($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X24);
L_800659FC:
    // 0x800659FC: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x80065A00: andi        $t8, $v0, 0x4000
    ctx->r24 = ctx->r2 & 0X4000;
    // 0x80065A04: bne         $t8, $zero, L_80065B18
    if (ctx->r24 != 0) {
        // 0x80065A08: andi        $t6, $v0, 0x100
        ctx->r14 = ctx->r2 & 0X100;
            goto L_80065B18;
    }
    // 0x80065A08: andi        $t6, $v0, 0x100
    ctx->r14 = ctx->r2 & 0X100;
    // 0x80065A0C: beq         $t6, $zero, L_80065A30
    if (ctx->r14 == 0) {
        // 0x80065A10: addiu       $at, $zero, 0x14
        ctx->r1 = ADD32(0, 0X14);
            goto L_80065A30;
    }
    // 0x80065A10: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x80065A14: jal         0x80019114
    // 0x80065A18: addiu       $a1, $s2, 0x18
    ctx->r5 = ADD32(ctx->r18, 0X18);
    func_80019114(rdram, ctx);
        goto after_12;
    // 0x80065A18: addiu       $a1, $s2, 0x18
    ctx->r5 = ADD32(ctx->r18, 0X18);
    after_12:
    // 0x80065A1C: lw          $t7, 0x24($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X24);
    // 0x80065A20: addiu       $at, $zero, -0x101
    ctx->r1 = ADD32(0, -0X101);
    // 0x80065A24: and         $t9, $t7, $at
    ctx->r25 = ctx->r15 & ctx->r1;
    // 0x80065A28: sw          $t9, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r25;
    // 0x80065A2C: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
L_80065A30:
    // 0x80065A30: bne         $s1, $at, L_80065A64
    if (ctx->r17 != ctx->r1) {
        // 0x80065A34: andi        $s0, $s1, 0x3
        ctx->r16 = ctx->r17 & 0X3;
            goto L_80065A64;
    }
    // 0x80065A34: andi        $s0, $s1, 0x3
    ctx->r16 = ctx->r17 & 0X3;
    // 0x80065A38: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x80065A3C: jal         0x8001C468
    // 0x80065A40: addiu       $a1, $zero, 0x7CB
    ctx->r5 = ADD32(0, 0X7CB);
    func_8001C468(rdram, ctx);
        goto after_13;
    // 0x80065A40: addiu       $a1, $zero, 0x7CB
    ctx->r5 = ADD32(0, 0X7CB);
    after_13:
    // 0x80065A44: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x80065A48: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80065A4C: jal         0x800192E8
    // 0x80065A50: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800192E8(rdram, ctx);
        goto after_14;
    // 0x80065A50: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_14:
    // 0x80065A54: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x80065A58: jal         0x800191D4
    // 0x80065A5C: nop

    func_800191D4(rdram, ctx);
        goto after_15;
    // 0x80065A5C: nop

    after_15:
    // 0x80065A60: andi        $s0, $s1, 0x3
    ctx->r16 = ctx->r17 & 0X3;
L_80065A64:
    // 0x80065A64: bne         $s0, $zero, L_80065A78
    if (ctx->r16 != 0) {
        // 0x80065A68: addiu       $a0, $zero, 0x6
        ctx->r4 = ADD32(0, 0X6);
            goto L_80065A78;
    }
    // 0x80065A68: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x80065A6C: lui         $a1, 0x7F7F
    ctx->r5 = S32(0X7F7F << 16);
    // 0x80065A70: jal         0x80018794
    // 0x80065A74: ori         $a1, $a1, 0x7FFF
    ctx->r5 = ctx->r5 | 0X7FFF;
    func_80018794(rdram, ctx);
        goto after_16;
    // 0x80065A74: ori         $a1, $a1, 0x7FFF
    ctx->r5 = ctx->r5 | 0X7FFF;
    after_16:
L_80065A78:
    // 0x80065A78: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80065A7C: bne         $s0, $at, L_80065A90
    if (ctx->r16 != ctx->r1) {
        // 0x80065A80: addiu       $a0, $zero, 0x6
        ctx->r4 = ADD32(0, 0X6);
            goto L_80065A90;
    }
    // 0x80065A80: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x80065A84: lui         $a1, 0x3F3F
    ctx->r5 = S32(0X3F3F << 16);
    // 0x80065A88: jal         0x80018794
    // 0x80065A8C: ori         $a1, $a1, 0x3FFF
    ctx->r5 = ctx->r5 | 0X3FFF;
    func_80018794(rdram, ctx);
        goto after_17;
    // 0x80065A8C: ori         $a1, $a1, 0x3FFF
    ctx->r5 = ctx->r5 | 0X3FFF;
    after_17:
L_80065A90:
    // 0x80065A90: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80065A94: bne         $s0, $at, L_80065AB4
    if (ctx->r16 != ctx->r1) {
        // 0x80065A98: addiu       $a0, $zero, 0x6
        ctx->r4 = ADD32(0, 0X6);
            goto L_80065AB4;
    }
    // 0x80065A98: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x80065A9C: lui         $a1, 0xAFAF
    ctx->r5 = S32(0XAFAF << 16);
    // 0x80065AA0: ori         $a1, $a1, 0xAFFF
    ctx->r5 = ctx->r5 | 0XAFFF;
    // 0x80065AA4: jal         0x80018794
    // 0x80065AA8: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_80018794(rdram, ctx);
        goto after_18;
    // 0x80065AA8: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_18:
    // 0x80065AAC: b           L_80065AC0
    // 0x80065AB0: nop

        goto L_80065AC0;
    // 0x80065AB0: nop

L_80065AB4:
    // 0x80065AB4: lui         $a1, 0x3F3F
    ctx->r5 = S32(0X3F3F << 16);
    // 0x80065AB8: jal         0x80018794
    // 0x80065ABC: ori         $a1, $a1, 0xFFFF
    ctx->r5 = ctx->r5 | 0XFFFF;
    func_80018794(rdram, ctx);
        goto after_19;
    // 0x80065ABC: ori         $a1, $a1, 0xFFFF
    ctx->r5 = ctx->r5 | 0XFFFF;
    after_19:
L_80065AC0:
    // 0x80065AC0: bgez        $s1, L_80065AD4
    if (SIGNED(ctx->r17) >= 0) {
        // 0x80065AC4: andi        $t8, $s1, 0x1F
        ctx->r24 = ctx->r17 & 0X1F;
            goto L_80065AD4;
    }
    // 0x80065AC4: andi        $t8, $s1, 0x1F
    ctx->r24 = ctx->r17 & 0X1F;
    // 0x80065AC8: beq         $t8, $zero, L_80065AD4
    if (ctx->r24 == 0) {
        // 0x80065ACC: nop
    
            goto L_80065AD4;
    }
    // 0x80065ACC: nop

    // 0x80065AD0: addiu       $t8, $t8, -0x20
    ctx->r24 = ADD32(ctx->r24, -0X20);
L_80065AD4:
    // 0x80065AD4: bne         $s3, $t8, L_80065AF0
    if (ctx->r19 != ctx->r24) {
        // 0x80065AD8: addiu       $a0, $zero, 0x6
        ctx->r4 = ADD32(0, 0X6);
            goto L_80065AF0;
    }
    // 0x80065AD8: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x80065ADC: jal         0x80018794
    // 0x80065AE0: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    func_80018794(rdram, ctx);
        goto after_20;
    // 0x80065AE0: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_20:
    // 0x80065AE4: jal         0x80028AB8
    // 0x80065AE8: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    func_80028AB8(rdram, ctx);
        goto after_21;
    // 0x80065AE8: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    after_21:
    // 0x80065AEC: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
L_80065AF0:
    // 0x80065AF0: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x80065AF4: jal         0x80018894
    // 0x80065AF8: ori         $a1, $zero, 0x8001
    ctx->r5 = 0 | 0X8001;
    func_80018894(rdram, ctx);
        goto after_22;
    // 0x80065AF8: ori         $a1, $zero, 0x8001
    ctx->r5 = 0 | 0X8001;
    after_22:
    // 0x80065AFC: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x80065B00: jal         0x80018848
    // 0x80065B04: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80018848(rdram, ctx);
        goto after_23;
    // 0x80065B04: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_23:
    // 0x80065B08: jal         0x80007AB0
    // 0x80065B0C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    func_80007AB0(rdram, ctx);
        goto after_24;
    // 0x80065B0C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    after_24:
    // 0x80065B10: b           L_800659FC
    // 0x80065B14: lw          $v0, 0x24($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X24);
        goto L_800659FC;
    // 0x80065B14: lw          $v0, 0x24($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X24);
L_80065B18:
    // 0x80065B18: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x80065B1C: jal         0x80018894
    // 0x80065B20: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80018894(rdram, ctx);
        goto after_25;
    // 0x80065B20: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_25:
    // 0x80065B24: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x80065B28: jal         0x80018848
    // 0x80065B2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80018848(rdram, ctx);
        goto after_26;
    // 0x80065B2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_26:
    // 0x80065B30: addiu       $s0, $sp, 0x80
    ctx->r16 = ADD32(ctx->r29, 0X80);
    // 0x80065B34: addiu       $v1, $s0, 0x8
    ctx->r3 = ADD32(ctx->r16, 0X8);
    // 0x80065B38: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80065B3C:
    // 0x80065B3C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80065B40: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x80065B44: jal         0x8001C568
    // 0x80065B48: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    func_8001C568(rdram, ctx);
        goto after_27;
    // 0x80065B48: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    after_27:
    // 0x80065B4C: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x80065B50: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80065B54: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
    // 0x80065B58: sltu        $at, $s0, $v1
    ctx->r1 = ctx->r16 < ctx->r3 ? 1 : 0;
    // 0x80065B5C: bne         $at, $zero, L_80065B3C
    if (ctx->r1 != 0) {
        // 0x80065B60: nop
    
            goto L_80065B3C;
    }
    // 0x80065B60: nop

    // 0x80065B64: jal         0x8005CD50
    // 0x80065B68: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_8005CD50(rdram, ctx);
        goto after_28;
    // 0x80065B68: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_28:
    // 0x80065B6C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80065B70: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x80065B74: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x80065B78: nop

    // 0x80065B7C: addiu       $t9, $t7, -0x1
    ctx->r25 = ADD32(ctx->r15, -0X1);
    // 0x80065B80: jal         0x80007AE0
    // 0x80065B84: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    func_80007AE0(rdram, ctx);
        goto after_29;
    // 0x80065B84: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    after_29:
    // 0x80065B88: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80065B8C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80065B90: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80065B94: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80065B98: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80065B9C: jr          $ra
    // 0x80065BA0: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    return;
    // 0x80065BA0: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void func_80065BA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80065BA4: addiu       $sp, $sp, -0x168
    ctx->r29 = ADD32(ctx->r29, -0X168);
    // 0x80065BA8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80065BAC: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x80065BB0: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x80065BB4: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x80065BB8: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x80065BBC: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80065BC0: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x80065BC4: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80065BC8: jal         0x80007774
    // 0x80065BCC: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x80065BCC: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x80065BD0: lw          $s3, 0x1C($v0)
    ctx->r19 = MEM_W(ctx->r2, 0X1C);
    // 0x80065BD4: jal         0x80028AB8
    // 0x80065BD8: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    func_80028AB8(rdram, ctx);
        goto after_1;
    // 0x80065BD8: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    after_1:
    // 0x80065BDC: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x80065BE0: addiu       $t7, $t7, 0x23A8
    ctx->r15 = ADD32(ctx->r15, 0X23A8);
    // 0x80065BE4: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x80065BE8: lw          $t9, 0x4($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X4);
    // 0x80065BEC: addiu       $t6, $sp, 0x140
    ctx->r14 = ADD32(ctx->r29, 0X140);
    // 0x80065BF0: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x80065BF4: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    // 0x80065BF8: lw          $t9, 0xC($t7)
    ctx->r25 = MEM_W(ctx->r15, 0XC);
    // 0x80065BFC: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x80065C00: sw          $t9, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->r25;
    // 0x80065C04: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x80065C08: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80065C0C: addiu       $t6, $t6, 0x23B8
    ctx->r14 = ADD32(ctx->r14, 0X23B8);
    // 0x80065C10: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x80065C14: addiu       $t8, $sp, 0x134
    ctx->r24 = ADD32(ctx->r29, 0X134);
    // 0x80065C18: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x80065C1C: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x80065C20: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x80065C24: sw          $at, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r1;
    // 0x80065C28: sw          $t9, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r25;
    // 0x80065C2C: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x80065C30: addiu       $t8, $t8, 0x23C4
    ctx->r24 = ADD32(ctx->r24, 0X23C4);
    // 0x80065C34: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x80065C38: addiu       $t7, $sp, 0x128
    ctx->r15 = ADD32(ctx->r29, 0X128);
    // 0x80065C3C: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x80065C40: lw          $at, 0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X8);
    // 0x80065C44: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x80065C48: sw          $at, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r1;
    // 0x80065C4C: sw          $t9, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r25;
    // 0x80065C50: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x80065C54: addiu       $t7, $t7, 0x23D0
    ctx->r15 = ADD32(ctx->r15, 0X23D0);
    // 0x80065C58: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x80065C5C: addiu       $t6, $sp, 0x11C
    ctx->r14 = ADD32(ctx->r29, 0X11C);
    // 0x80065C60: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x80065C64: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x80065C68: lw          $t9, 0x4($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X4);
    // 0x80065C6C: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x80065C70: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    // 0x80065C74: lwc1        $f4, 0x134($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X134);
    // 0x80065C78: lwc1        $f6, 0x0($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0X0);
    // 0x80065C7C: lwc1        $f10, 0x138($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X138);
    // 0x80065C80: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80065C84: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x80065C88: swc1        $f8, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->f8.u32l;
    // 0x80065C8C: lwc1        $f4, 0x4($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X4);
    // 0x80065C90: lwc1        $f8, 0x13C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X13C);
    // 0x80065C94: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80065C98: addiu       $a0, $zero, 0x7AA
    ctx->r4 = ADD32(0, 0X7AA);
    // 0x80065C9C: swc1        $f6, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->f6.u32l;
    // 0x80065CA0: lwc1        $f10, 0x8($s3)
    ctx->f10.u32l = MEM_W(ctx->r19, 0X8);
    // 0x80065CA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80065CA8: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80065CAC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80065CB0: jal         0x8001D138
    // 0x80065CB4: swc1        $f4, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->f4.u32l;
    func_8001D138(rdram, ctx);
        goto after_2;
    // 0x80065CB4: swc1        $f4, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x80065CB8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80065CBC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80065CC0: jal         0x80019164
    // 0x80065CC4: addiu       $a1, $sp, 0x134
    ctx->r5 = ADD32(ctx->r29, 0X134);
    func_80019164(rdram, ctx);
        goto after_3;
    // 0x80065CC4: addiu       $a1, $sp, 0x134
    ctx->r5 = ADD32(ctx->r29, 0X134);
    after_3:
    // 0x80065CC8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80065CCC: sw          $s0, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->r16;
    // 0x80065CD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80065CD4: addiu       $a1, $sp, 0xEC
    ctx->r5 = ADD32(ctx->r29, 0XEC);
    // 0x80065CD8: swc1        $f0, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f0.u32l;
    // 0x80065CDC: swc1        $f0, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f0.u32l;
    // 0x80065CE0: jal         0x80019114
    // 0x80065CE4: swc1        $f0, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f0.u32l;
    func_80019114(rdram, ctx);
        goto after_4;
    // 0x80065CE4: swc1        $f0, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f0.u32l;
    after_4:
    // 0x80065CE8: addiu       $a0, $zero, 0x77D
    ctx->r4 = ADD32(0, 0X77D);
    // 0x80065CEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80065CF0: jal         0x8001D138
    // 0x80065CF4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_5;
    // 0x80065CF4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x80065CF8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80065CFC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80065D00: jal         0x80019164
    // 0x80065D04: addiu       $a1, $sp, 0x134
    ctx->r5 = ADD32(ctx->r29, 0X134);
    func_80019164(rdram, ctx);
        goto after_6;
    // 0x80065D04: addiu       $a1, $sp, 0x134
    ctx->r5 = ADD32(ctx->r29, 0X134);
    after_6:
    // 0x80065D08: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80065D0C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80065D10: sw          $s0, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->r16;
    // 0x80065D14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80065D18: addiu       $a1, $sp, 0xC4
    ctx->r5 = ADD32(ctx->r29, 0XC4);
    // 0x80065D1C: swc1        $f0, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f0.u32l;
    // 0x80065D20: swc1        $f0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f0.u32l;
    // 0x80065D24: jal         0x80019114
    // 0x80065D28: swc1        $f0, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f0.u32l;
    func_80019114(rdram, ctx);
        goto after_7;
    // 0x80065D28: swc1        $f0, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f0.u32l;
    after_7:
    // 0x80065D2C: lw          $a0, 0x158($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X158);
    // 0x80065D30: jal         0x8001C468
    // 0x80065D34: addiu       $a1, $zero, 0x7CD
    ctx->r5 = ADD32(0, 0X7CD);
    func_8001C468(rdram, ctx);
        goto after_8;
    // 0x80065D34: addiu       $a1, $zero, 0x7CD
    ctx->r5 = ADD32(0, 0X7CD);
    after_8:
    // 0x80065D38: lw          $a0, 0x158($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X158);
    // 0x80065D3C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80065D40: jal         0x800192E8
    // 0x80065D44: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800192E8(rdram, ctx);
        goto after_9;
    // 0x80065D44: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_9:
    // 0x80065D48: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x80065D4C: jal         0x80018894
    // 0x80065D50: ori         $a1, $zero, 0x8001
    ctx->r5 = 0 | 0X8001;
    func_80018894(rdram, ctx);
        goto after_10;
    // 0x80065D50: ori         $a1, $zero, 0x8001
    ctx->r5 = 0 | 0X8001;
    after_10:
    // 0x80065D54: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x80065D58: jal         0x800187D8
    // 0x80065D5C: addiu       $a1, $sp, 0x134
    ctx->r5 = ADD32(ctx->r29, 0X134);
    func_800187D8(rdram, ctx);
        goto after_11;
    // 0x80065D5C: addiu       $a1, $sp, 0x134
    ctx->r5 = ADD32(ctx->r29, 0X134);
    after_11:
    // 0x80065D60: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x80065D64: jal         0x80018794
    // 0x80065D68: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    func_80018794(rdram, ctx);
        goto after_12;
    // 0x80065D68: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_12:
    // 0x80065D6C: lui         $at, 0x41B4
    ctx->r1 = S32(0X41B4 << 16);
    // 0x80065D70: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80065D74: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80065D78:
    // 0x80065D78: lw          $t8, 0x24($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X24);
    // 0x80065D7C: slti        $at, $s1, 0x2
    ctx->r1 = SIGNED(ctx->r17) < 0X2 ? 1 : 0;
    // 0x80065D80: andi        $t6, $t8, 0x4000
    ctx->r14 = ctx->r24 & 0X4000;
    // 0x80065D84: bne         $t6, $zero, L_80065E90
    if (ctx->r14 != 0) {
        // 0x80065D88: addiu       $a0, $zero, 0x6
        ctx->r4 = ADD32(0, 0X6);
            goto L_80065E90;
    }
    // 0x80065D88: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x80065D8C: bne         $at, $zero, L_80065DCC
    if (ctx->r1 != 0) {
        // 0x80065D90: slti        $at, $s1, 0x6
        ctx->r1 = SIGNED(ctx->r17) < 0X6 ? 1 : 0;
            goto L_80065DCC;
    }
    // 0x80065D90: slti        $at, $s1, 0x6
    ctx->r1 = SIGNED(ctx->r17) < 0X6 ? 1 : 0;
    // 0x80065D94: beq         $at, $zero, L_80065DCC
    if (ctx->r1 == 0) {
        // 0x80065D98: addiu       $t7, $s1, -0x1
        ctx->r15 = ADD32(ctx->r17, -0X1);
            goto L_80065DCC;
    }
    // 0x80065D98: addiu       $t7, $s1, -0x1
    ctx->r15 = ADD32(ctx->r17, -0X1);
    // 0x80065D9C: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x80065DA0: nop

    // 0x80065DA4: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80065DA8: mul.s       $f12, $f8, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x80065DAC: jal         0x80028C2C
    // 0x80065DB0: nop

    func_80028C2C(rdram, ctx);
        goto after_13;
    // 0x80065DB0: nop

    after_13:
    // 0x80065DB4: lw          $a0, 0x15C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X15C);
    // 0x80065DB8: swc1        $f0, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f0.u32l;
    // 0x80065DBC: swc1        $f0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f0.u32l;
    // 0x80065DC0: swc1        $f0, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f0.u32l;
    // 0x80065DC4: jal         0x80019114
    // 0x80065DC8: addiu       $a1, $sp, 0xAC
    ctx->r5 = ADD32(ctx->r29, 0XAC);
    func_80019114(rdram, ctx);
        goto after_14;
    // 0x80065DC8: addiu       $a1, $sp, 0xAC
    ctx->r5 = ADD32(ctx->r29, 0XAC);
    after_14:
L_80065DCC:
    // 0x80065DCC: andi        $s0, $s1, 0x3
    ctx->r16 = ctx->r17 & 0X3;
    // 0x80065DD0: bne         $s0, $zero, L_80065DE4
    if (ctx->r16 != 0) {
        // 0x80065DD4: addiu       $a0, $zero, 0x6
        ctx->r4 = ADD32(0, 0X6);
            goto L_80065DE4;
    }
    // 0x80065DD4: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x80065DD8: lui         $a1, 0x7F7F
    ctx->r5 = S32(0X7F7F << 16);
    // 0x80065DDC: jal         0x80018794
    // 0x80065DE0: ori         $a1, $a1, 0x7FFF
    ctx->r5 = ctx->r5 | 0X7FFF;
    func_80018794(rdram, ctx);
        goto after_15;
    // 0x80065DE0: ori         $a1, $a1, 0x7FFF
    ctx->r5 = ctx->r5 | 0X7FFF;
    after_15:
L_80065DE4:
    // 0x80065DE4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80065DE8: bne         $s0, $at, L_80065DFC
    if (ctx->r16 != ctx->r1) {
        // 0x80065DEC: addiu       $a0, $zero, 0x6
        ctx->r4 = ADD32(0, 0X6);
            goto L_80065DFC;
    }
    // 0x80065DEC: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x80065DF0: lui         $a1, 0x3F3F
    ctx->r5 = S32(0X3F3F << 16);
    // 0x80065DF4: jal         0x80018794
    // 0x80065DF8: ori         $a1, $a1, 0x3FFF
    ctx->r5 = ctx->r5 | 0X3FFF;
    func_80018794(rdram, ctx);
        goto after_16;
    // 0x80065DF8: ori         $a1, $a1, 0x3FFF
    ctx->r5 = ctx->r5 | 0X3FFF;
    after_16:
L_80065DFC:
    // 0x80065DFC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80065E00: bne         $s0, $at, L_80065E20
    if (ctx->r16 != ctx->r1) {
        // 0x80065E04: addiu       $a0, $zero, 0x6
        ctx->r4 = ADD32(0, 0X6);
            goto L_80065E20;
    }
    // 0x80065E04: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x80065E08: lui         $a1, 0xAFAF
    ctx->r5 = S32(0XAFAF << 16);
    // 0x80065E0C: ori         $a1, $a1, 0xAFFF
    ctx->r5 = ctx->r5 | 0XAFFF;
    // 0x80065E10: jal         0x80018794
    // 0x80065E14: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_80018794(rdram, ctx);
        goto after_17;
    // 0x80065E14: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_17:
    // 0x80065E18: b           L_80065E2C
    // 0x80065E1C: nop

        goto L_80065E2C;
    // 0x80065E1C: nop

L_80065E20:
    // 0x80065E20: lui         $a1, 0x3F3F
    ctx->r5 = S32(0X3F3F << 16);
    // 0x80065E24: jal         0x80018794
    // 0x80065E28: ori         $a1, $a1, 0xFFFF
    ctx->r5 = ctx->r5 | 0XFFFF;
    func_80018794(rdram, ctx);
        goto after_18;
    // 0x80065E28: ori         $a1, $a1, 0xFFFF
    ctx->r5 = ctx->r5 | 0XFFFF;
    after_18:
L_80065E2C:
    // 0x80065E2C: bgez        $s1, L_80065E40
    if (SIGNED(ctx->r17) >= 0) {
        // 0x80065E30: andi        $t9, $s1, 0x1F
        ctx->r25 = ctx->r17 & 0X1F;
            goto L_80065E40;
    }
    // 0x80065E30: andi        $t9, $s1, 0x1F
    ctx->r25 = ctx->r17 & 0X1F;
    // 0x80065E34: beq         $t9, $zero, L_80065E40
    if (ctx->r25 == 0) {
        // 0x80065E38: nop
    
            goto L_80065E40;
    }
    // 0x80065E38: nop

    // 0x80065E3C: addiu       $t9, $t9, -0x20
    ctx->r25 = ADD32(ctx->r25, -0X20);
L_80065E40:
    // 0x80065E40: bne         $s2, $t9, L_80065E5C
    if (ctx->r18 != ctx->r25) {
        // 0x80065E44: addiu       $a0, $zero, 0x6
        ctx->r4 = ADD32(0, 0X6);
            goto L_80065E5C;
    }
    // 0x80065E44: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x80065E48: jal         0x80018794
    // 0x80065E4C: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    func_80018794(rdram, ctx);
        goto after_19;
    // 0x80065E4C: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_19:
    // 0x80065E50: jal         0x80028AB8
    // 0x80065E54: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    func_80028AB8(rdram, ctx);
        goto after_20;
    // 0x80065E54: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    after_20:
    // 0x80065E58: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
L_80065E5C:
    // 0x80065E5C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x80065E60: jal         0x80018894
    // 0x80065E64: ori         $a1, $zero, 0x8001
    ctx->r5 = 0 | 0X8001;
    func_80018894(rdram, ctx);
        goto after_21;
    // 0x80065E64: ori         $a1, $zero, 0x8001
    ctx->r5 = 0 | 0X8001;
    after_21:
    // 0x80065E68: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x80065E6C: jal         0x80018848
    // 0x80065E70: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80018848(rdram, ctx);
        goto after_22;
    // 0x80065E70: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_22:
    // 0x80065E74: jal         0x80007AB0
    // 0x80065E78: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    func_80007AB0(rdram, ctx);
        goto after_23;
    // 0x80065E78: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    after_23:
    // 0x80065E7C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80065E80: slti        $at, $s1, 0x7
    ctx->r1 = SIGNED(ctx->r17) < 0X7 ? 1 : 0;
    // 0x80065E84: bne         $at, $zero, L_80065D78
    if (ctx->r1 != 0) {
        // 0x80065E88: nop
    
            goto L_80065D78;
    }
    // 0x80065E88: nop

    // 0x80065E8C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
L_80065E90:
    // 0x80065E90: jal         0x80018894
    // 0x80065E94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80018894(rdram, ctx);
        goto after_24;
    // 0x80065E94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_24:
    // 0x80065E98: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x80065E9C: jal         0x80018848
    // 0x80065EA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80018848(rdram, ctx);
        goto after_25;
    // 0x80065EA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_25:
    // 0x80065EA4: lw          $a0, 0x15C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X15C);
    // 0x80065EA8: jal         0x8001C568
    // 0x80065EAC: nop

    func_8001C568(rdram, ctx);
        goto after_26;
    // 0x80065EAC: nop

    after_26:
    // 0x80065EB0: lw          $a0, 0x158($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X158);
    // 0x80065EB4: jal         0x8001C568
    // 0x80065EB8: nop

    func_8001C568(rdram, ctx);
        goto after_27;
    // 0x80065EB8: nop

    after_27:
    // 0x80065EBC: addiu       $a0, $zero, 0x77C
    ctx->r4 = ADD32(0, 0X77C);
    // 0x80065EC0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80065EC4: jal         0x8001D138
    // 0x80065EC8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_28;
    // 0x80065EC8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_28:
    // 0x80065ECC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80065ED0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80065ED4: jal         0x80019164
    // 0x80065ED8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_80019164(rdram, ctx);
        goto after_29;
    // 0x80065ED8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_29:
    // 0x80065EDC: sw          $s0, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->r16;
    // 0x80065EE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80065EE4: jal         0x8001C468
    // 0x80065EE8: addiu       $a1, $zero, 0x7CC
    ctx->r5 = ADD32(0, 0X7CC);
    func_8001C468(rdram, ctx);
        goto after_30;
    // 0x80065EE8: addiu       $a1, $zero, 0x7CC
    ctx->r5 = ADD32(0, 0X7CC);
    after_30:
    // 0x80065EEC: lw          $a0, 0x15C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X15C);
    // 0x80065EF0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80065EF4: jal         0x800192E8
    // 0x80065EF8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800192E8(rdram, ctx);
        goto after_31;
    // 0x80065EF8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_31:
    // 0x80065EFC: addiu       $a0, $zero, 0x77C
    ctx->r4 = ADD32(0, 0X77C);
    // 0x80065F00: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80065F04: jal         0x8001D138
    // 0x80065F08: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_32;
    // 0x80065F08: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_32:
    // 0x80065F0C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80065F10: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80065F14: jal         0x80019164
    // 0x80065F18: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_80019164(rdram, ctx);
        goto after_33;
    // 0x80065F18: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_33:
    // 0x80065F1C: sw          $s0, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->r16;
    // 0x80065F20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80065F24: jal         0x8001C468
    // 0x80065F28: addiu       $a1, $zero, 0x7CC
    ctx->r5 = ADD32(0, 0X7CC);
    func_8001C468(rdram, ctx);
        goto after_34;
    // 0x80065F28: addiu       $a1, $zero, 0x7CC
    ctx->r5 = ADD32(0, 0X7CC);
    after_34:
    // 0x80065F2C: lw          $a0, 0x158($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X158);
    // 0x80065F30: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80065F34: jal         0x800192E8
    // 0x80065F38: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800192E8(rdram, ctx);
        goto after_35;
    // 0x80065F38: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_35:
    // 0x80065F3C: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80065F40: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x80065F44: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80065F48: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80065F4C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80065F50: addiu       $s0, $sp, 0x140
    ctx->r16 = ADD32(ctx->r29, 0X140);
L_80065F54:
    // 0x80065F54: mtc1        $s2, $f10
    ctx->f10.u32l = ctx->r18;
    // 0x80065F58: nop

    // 0x80065F5C: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80065F60: mul.s       $f12, $f4, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f12.fl = MUL_S(ctx->f4.fl, ctx->f22.fl);
    // 0x80065F64: jal         0x80028C2C
    // 0x80065F68: swc1        $f12, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f12.u32l;
    func_80028C2C(rdram, ctx);
        goto after_36;
    // 0x80065F68: swc1        $f12, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f12.u32l;
    after_36:
    // 0x80065F6C: mul.s       $f6, $f0, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x80065F70: lwc1        $f8, 0x0($s3)
    ctx->f8.u32l = MEM_W(ctx->r19, 0X0);
    // 0x80065F74: lwc1        $f12, 0x3C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80065F78: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80065F7C: jal         0x80028C00
    // 0x80065F80: swc1        $f10, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->f10.u32l;
    func_80028C00(rdram, ctx);
        goto after_37;
    // 0x80065F80: swc1        $f10, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->f10.u32l;
    after_37:
    // 0x80065F84: mul.s       $f4, $f0, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x80065F88: lwc1        $f6, 0x8($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0X8);
    // 0x80065F8C: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x80065F90: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    // 0x80065F94: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80065F98: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80065F9C: swc1        $f8, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->f8.u32l;
    // 0x80065FA0: lwc1        $f10, 0x4($s3)
    ctx->f10.u32l = MEM_W(ctx->r19, 0X4);
    // 0x80065FA4: addiu       $a1, $sp, 0x134
    ctx->r5 = ADD32(ctx->r29, 0X134);
    // 0x80065FA8: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80065FAC: jal         0x8005D1B4
    // 0x80065FB0: swc1        $f6, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->f6.u32l;
    func_8005D1B4(rdram, ctx);
        goto after_38;
    // 0x80065FB0: swc1        $f6, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->f6.u32l;
    after_38:
    // 0x80065FB4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80065FB8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80065FBC: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80065FC0: bne         $s2, $at, L_80065F54
    if (ctx->r18 != ctx->r1) {
        // 0x80065FC4: sw          $v0, -0x4($s0)
        MEM_W(-0X4, ctx->r16) = ctx->r2;
            goto L_80065F54;
    }
    // 0x80065FC4: sw          $v0, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = ctx->r2;
    // 0x80065FC8: slti        $at, $s1, 0x25
    ctx->r1 = SIGNED(ctx->r17) < 0X25 ? 1 : 0;
    // 0x80065FCC: beq         $at, $zero, L_8006609C
    if (ctx->r1 == 0) {
        // 0x80065FD0: lui         $at, 0x4024
        ctx->r1 = S32(0X4024 << 16);
            goto L_8006609C;
    }
    // 0x80065FD0: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x80065FD4: mtc1        $at, $f23
    ctx->f_odd[(23 - 1) * 2] = ctx->r1;
    // 0x80065FD8: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80065FDC: mtc1        $at, $f21
    ctx->f_odd[(21 - 1) * 2] = ctx->r1;
    // 0x80065FE0: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x80065FE4: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x80065FE8: nop

L_80065FEC:
    // 0x80065FEC: lw          $t8, 0x24($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X24);
    // 0x80065FF0: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    // 0x80065FF4: andi        $t6, $t8, 0x4000
    ctx->r14 = ctx->r24 & 0X4000;
    // 0x80065FF8: bne         $t6, $zero, L_800660A0
    if (ctx->r14 != 0) {
        // 0x80065FFC: lw          $a0, 0x15C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X15C);
            goto L_800660A0;
    }
    // 0x80065FFC: lw          $a0, 0x15C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X15C);
    // 0x80066000: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80066004: nop

    // 0x80066008: swc1        $f0, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->f0.u32l;
    // 0x8006600C: jal         0x80027F1C
    // 0x80066010: swc1        $f0, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->f0.u32l;
    func_80027F1C(rdram, ctx);
        goto after_39;
    // 0x80066010: swc1        $f0, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->f0.u32l;
    after_39:
    // 0x80066014: mul.d       $f8, $f0, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f20.d); 
    ctx->f8.d = MUL_D(ctx->f0.d, ctx->f20.d);
    // 0x80066018: lw          $a0, 0x15C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X15C);
    // 0x8006601C: addiu       $a1, $sp, 0x128
    ctx->r5 = ADD32(ctx->r29, 0X128);
    // 0x80066020: add.d       $f10, $f8, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f22.d); 
    ctx->f10.d = ctx->f8.d + ctx->f22.d;
    // 0x80066024: cvt.s.d     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f4.fl = CVT_S_D(ctx->f10.d);
    // 0x80066028: jal         0x80019114
    // 0x8006602C: swc1        $f4, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->f4.u32l;
    func_80019114(rdram, ctx);
        goto after_40;
    // 0x8006602C: swc1        $f4, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->f4.u32l;
    after_40:
    // 0x80066030: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80066034: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80066038: lwc1        $f6, 0x120($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X120);
    // 0x8006603C: lw          $a0, 0x15C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X15C);
    // 0x80066040: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80066044: addiu       $a1, $sp, 0x11C
    ctx->r5 = ADD32(ctx->r29, 0X11C);
    // 0x80066048: jal         0x8001913C
    // 0x8006604C: swc1        $f10, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->f10.u32l;
    func_8001913C(rdram, ctx);
        goto after_41;
    // 0x8006604C: swc1        $f10, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->f10.u32l;
    after_41:
    // 0x80066050: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80066054: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80066058: nop

    // 0x8006605C: swc1        $f0, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->f0.u32l;
    // 0x80066060: jal         0x80027F1C
    // 0x80066064: swc1        $f0, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->f0.u32l;
    func_80027F1C(rdram, ctx);
        goto after_42;
    // 0x80066064: swc1        $f0, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->f0.u32l;
    after_42:
    // 0x80066068: mul.d       $f4, $f0, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f20.d); 
    ctx->f4.d = MUL_D(ctx->f0.d, ctx->f20.d);
    // 0x8006606C: lw          $a0, 0x158($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X158);
    // 0x80066070: addiu       $a1, $sp, 0x128
    ctx->r5 = ADD32(ctx->r29, 0X128);
    // 0x80066074: add.d       $f6, $f4, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f22.d); 
    ctx->f6.d = ctx->f4.d + ctx->f22.d;
    // 0x80066078: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x8006607C: jal         0x80019114
    // 0x80066080: swc1        $f8, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->f8.u32l;
    func_80019114(rdram, ctx);
        goto after_43;
    // 0x80066080: swc1        $f8, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->f8.u32l;
    after_43:
    // 0x80066084: jal         0x80007AB0
    // 0x80066088: nop

    func_80007AB0(rdram, ctx);
        goto after_44;
    // 0x80066088: nop

    after_44:
    // 0x8006608C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80066090: slti        $at, $s1, 0x25
    ctx->r1 = SIGNED(ctx->r17) < 0X25 ? 1 : 0;
    // 0x80066094: bne         $at, $zero, L_80065FEC
    if (ctx->r1 != 0) {
        // 0x80066098: nop
    
            goto L_80065FEC;
    }
    // 0x80066098: nop

L_8006609C:
    // 0x8006609C: lw          $a0, 0x15C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X15C);
L_800660A0:
    // 0x800660A0: jal         0x8001C568
    // 0x800660A4: nop

    func_8001C568(rdram, ctx);
        goto after_45;
    // 0x800660A4: nop

    after_45:
    // 0x800660A8: lw          $a0, 0x158($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X158);
    // 0x800660AC: jal         0x8001C568
    // 0x800660B0: nop

    func_8001C568(rdram, ctx);
        goto after_46;
    // 0x800660B0: nop

    after_46:
    // 0x800660B4: addiu       $s0, $sp, 0x140
    ctx->r16 = ADD32(ctx->r29, 0X140);
    // 0x800660B8: addiu       $s2, $sp, 0x150
    ctx->r18 = ADD32(ctx->r29, 0X150);
L_800660BC:
    // 0x800660BC: jal         0x8005D128
    // 0x800660C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8005D128(rdram, ctx);
        goto after_47;
    // 0x800660C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_47:
    // 0x800660C4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x800660C8: bne         $s0, $s2, L_800660BC
    if (ctx->r16 != ctx->r18) {
        // 0x800660CC: nop
    
            goto L_800660BC;
    }
    // 0x800660CC: nop

    // 0x800660D0: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    // 0x800660D4: jal         0x8005D1B4
    // 0x800660D8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_8005D1B4(rdram, ctx);
        goto after_48;
    // 0x800660D8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_48:
    // 0x800660DC: sw          $v0, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->r2;
    // 0x800660E0: addiu       $a0, $zero, 0x77A
    ctx->r4 = ADD32(0, 0X77A);
    // 0x800660E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800660E8: jal         0x8001D138
    // 0x800660EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_49;
    // 0x800660EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_49:
    // 0x800660F0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800660F4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800660F8: jal         0x80019164
    // 0x800660FC: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_80019164(rdram, ctx);
        goto after_50;
    // 0x800660FC: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_50:
    // 0x80066100: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    // 0x80066104: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80066108: sw          $s0, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->r16;
    // 0x8006610C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80066110: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    // 0x80066114: swc1        $f0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f0.u32l;
    // 0x80066118: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
    // 0x8006611C: jal         0x80019114
    // 0x80066120: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    func_80019114(rdram, ctx);
        goto after_51;
    // 0x80066120: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    after_51:
    // 0x80066124: slti        $at, $s1, 0x43
    ctx->r1 = SIGNED(ctx->r17) < 0X43 ? 1 : 0;
    // 0x80066128: beq         $at, $zero, L_800661A4
    if (ctx->r1 == 0) {
        // 0x8006612C: addiu       $s2, $zero, 0x43
        ctx->r18 = ADD32(0, 0X43);
            goto L_800661A4;
    }
    // 0x8006612C: addiu       $s2, $zero, 0x43
    ctx->r18 = ADD32(0, 0X43);
L_80066130:
    // 0x80066130: lw          $t7, 0x24($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X24);
    // 0x80066134: lw          $s0, 0x15C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X15C);
    // 0x80066138: andi        $t9, $t7, 0x4000
    ctx->r25 = ctx->r15 & 0X4000;
    // 0x8006613C: bne         $t9, $zero, L_800661A4
    if (ctx->r25 != 0) {
        // 0x80066140: subu        $v0, $s2, $s1
        ctx->r2 = SUB32(ctx->r18, ctx->r17);
            goto L_800661A4;
    }
    // 0x80066140: subu        $v0, $s2, $s1
    ctx->r2 = SUB32(ctx->r18, ctx->r17);
    // 0x80066144: sll         $v1, $v0, 8
    ctx->r3 = S32(ctx->r2 << 8);
    // 0x80066148: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x8006614C: bne         $v0, $at, L_80066170
    if (ctx->r2 != ctx->r1) {
        // 0x80066150: subu        $v1, $v1, $v0
        ctx->r3 = SUB32(ctx->r3, ctx->r2);
            goto L_80066170;
    }
    // 0x80066150: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80066154: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80066158: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8006615C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80066160: jal         0x80018658
    // 0x80066164: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    func_80018658(rdram, ctx);
        goto after_52;
    // 0x80066164: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    after_52:
    // 0x80066168: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x8006616C: nop

L_80066170:
    // 0x80066170: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x80066174: div         $zero, $v1, $at
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r1)));
    // 0x80066178: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006617C: mflo        $a1
    ctx->r5 = lo;
    // 0x80066180: andi        $t8, $a1, 0xFF
    ctx->r24 = ctx->r5 & 0XFF;
    // 0x80066184: jal         0x80018604
    // 0x80066188: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    func_80018604(rdram, ctx);
        goto after_53;
    // 0x80066188: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    after_53:
    // 0x8006618C: jal         0x80007AB0
    // 0x80066190: nop

    func_80007AB0(rdram, ctx);
        goto after_54;
    // 0x80066190: nop

    after_54:
    // 0x80066194: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80066198: slti        $at, $s1, 0x43
    ctx->r1 = SIGNED(ctx->r17) < 0X43 ? 1 : 0;
    // 0x8006619C: bne         $at, $zero, L_80066130
    if (ctx->r1 != 0) {
        // 0x800661A0: nop
    
            goto L_80066130;
    }
    // 0x800661A0: nop

L_800661A4:
    // 0x800661A4: addiu       $s0, $sp, 0x15C
    ctx->r16 = ADD32(ctx->r29, 0X15C);
    // 0x800661A8: addiu       $v0, $s0, 0x4
    ctx->r2 = ADD32(ctx->r16, 0X4);
L_800661AC:
    // 0x800661AC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x800661B0: jal         0x8001C568
    // 0x800661B4: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    func_8001C568(rdram, ctx);
        goto after_55;
    // 0x800661B4: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    after_55:
    // 0x800661B8: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x800661BC: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x800661C0: sltu        $at, $s0, $v0
    ctx->r1 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x800661C4: bne         $at, $zero, L_800661AC
    if (ctx->r1 != 0) {
        // 0x800661C8: nop
    
            goto L_800661AC;
    }
    // 0x800661C8: nop

    // 0x800661CC: jal         0x8005CD50
    // 0x800661D0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_8005CD50(rdram, ctx);
        goto after_56;
    // 0x800661D0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_56:
    // 0x800661D4: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x800661D8: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x800661DC: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x800661E0: nop

    // 0x800661E4: addiu       $t9, $t7, -0x1
    ctx->r25 = ADD32(ctx->r15, -0X1);
    // 0x800661E8: jal         0x80007AE0
    // 0x800661EC: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    func_80007AE0(rdram, ctx);
        goto after_57;
    // 0x800661EC: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    after_57:
    // 0x800661F0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x800661F4: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x800661F8: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x800661FC: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80066200: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80066204: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x80066208: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x8006620C: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x80066210: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x80066214: jr          $ra
    // 0x80066218: addiu       $sp, $sp, 0x168
    ctx->r29 = ADD32(ctx->r29, 0X168);
    return;
    // 0x80066218: addiu       $sp, $sp, 0x168
    ctx->r29 = ADD32(ctx->r29, 0X168);
;}
RECOMP_FUNC void func_8006621C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006621C: addiu       $sp, $sp, -0x160
    ctx->r29 = ADD32(ctx->r29, -0X160);
    // 0x80066220: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80066224: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x80066228: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x8006622C: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80066230: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80066234: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80066238: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8006623C: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x80066240: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80066244: jal         0x80007774
    // 0x80066248: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x80066248: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x8006624C: lw          $s3, 0x1C($v0)
    ctx->r19 = MEM_W(ctx->r2, 0X1C);
    // 0x80066250: jal         0x80028AB8
    // 0x80066254: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    func_80028AB8(rdram, ctx);
        goto after_1;
    // 0x80066254: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    after_1:
    // 0x80066258: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x8006625C: addiu       $t7, $t7, 0x23DC
    ctx->r15 = ADD32(ctx->r15, 0X23DC);
    // 0x80066260: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x80066264: lw          $t9, 0x4($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X4);
    // 0x80066268: addiu       $t6, $sp, 0x138
    ctx->r14 = ADD32(ctx->r29, 0X138);
    // 0x8006626C: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x80066270: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    // 0x80066274: lw          $t9, 0xC($t7)
    ctx->r25 = MEM_W(ctx->r15, 0XC);
    // 0x80066278: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x8006627C: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x80066280: addiu       $t8, $t8, 0x23EC
    ctx->r24 = ADD32(ctx->r24, 0X23EC);
    // 0x80066284: sw          $t9, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->r25;
    // 0x80066288: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x8006628C: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x80066290: addiu       $s4, $sp, 0x12C
    ctx->r20 = ADD32(ctx->r29, 0X12C);
    // 0x80066294: sw          $at, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r1;
    // 0x80066298: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x8006629C: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x800662A0: sw          $t9, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r25;
    // 0x800662A4: lw          $at, 0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X8);
    // 0x800662A8: addiu       $t6, $t6, 0x23F8
    ctx->r14 = ADD32(ctx->r14, 0X23F8);
    // 0x800662AC: sw          $at, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r1;
    // 0x800662B0: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x800662B4: addiu       $t7, $sp, 0x120
    ctx->r15 = ADD32(ctx->r29, 0X120);
    // 0x800662B8: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x800662BC: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x800662C0: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x800662C4: sw          $at, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r1;
    // 0x800662C8: sw          $t9, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r25;
    // 0x800662CC: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x800662D0: addiu       $t7, $t7, 0x2404
    ctx->r15 = ADD32(ctx->r15, 0X2404);
    // 0x800662D4: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x800662D8: addiu       $t8, $sp, 0x114
    ctx->r24 = ADD32(ctx->r29, 0X114);
    // 0x800662DC: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x800662E0: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x800662E4: lw          $t9, 0x4($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X4);
    // 0x800662E8: sw          $at, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r1;
    // 0x800662EC: sw          $t9, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r25;
    // 0x800662F0: lwc1        $f4, 0x12C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X12C);
    // 0x800662F4: lwc1        $f6, 0x0($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0X0);
    // 0x800662F8: lwc1        $f10, 0x130($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X130);
    // 0x800662FC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80066300: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x80066304: swc1        $f8, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->f8.u32l;
    // 0x80066308: lwc1        $f4, 0x4($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X4);
    // 0x8006630C: lwc1        $f8, 0x134($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X134);
    // 0x80066310: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80066314: addiu       $a0, $zero, 0x77D
    ctx->r4 = ADD32(0, 0X77D);
    // 0x80066318: swc1        $f6, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->f6.u32l;
    // 0x8006631C: lwc1        $f10, 0x8($s3)
    ctx->f10.u32l = MEM_W(ctx->r19, 0X8);
    // 0x80066320: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80066324: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80066328: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8006632C: jal         0x8001D138
    // 0x80066330: swc1        $f4, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->f4.u32l;
    func_8001D138(rdram, ctx);
        goto after_2;
    // 0x80066330: swc1        $f4, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x80066334: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80066338: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8006633C: jal         0x80019164
    // 0x80066340: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    func_80019164(rdram, ctx);
        goto after_3;
    // 0x80066340: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_3:
    // 0x80066344: sw          $s0, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->r16;
    // 0x80066348: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006634C: jal         0x8001C468
    // 0x80066350: addiu       $a1, $zero, 0x7CD
    ctx->r5 = ADD32(0, 0X7CD);
    func_8001C468(rdram, ctx);
        goto after_4;
    // 0x80066350: addiu       $a1, $zero, 0x7CD
    ctx->r5 = ADD32(0, 0X7CD);
    after_4:
    // 0x80066354: lw          $a0, 0x154($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X154);
    // 0x80066358: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8006635C: jal         0x800192E8
    // 0x80066360: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800192E8(rdram, ctx);
        goto after_5;
    // 0x80066360: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x80066364: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x80066368: lw          $a0, 0x154($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X154);
    // 0x8006636C: addiu       $a1, $sp, 0xE4
    ctx->r5 = ADD32(ctx->r29, 0XE4);
    // 0x80066370: swc1        $f20, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f20.u32l;
    // 0x80066374: swc1        $f20, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f20.u32l;
    // 0x80066378: jal         0x80019114
    // 0x8006637C: swc1        $f20, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f20.u32l;
    func_80019114(rdram, ctx);
        goto after_6;
    // 0x8006637C: swc1        $f20, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f20.u32l;
    after_6:
    // 0x80066380: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x80066384: jal         0x80018894
    // 0x80066388: ori         $a1, $zero, 0x8001
    ctx->r5 = 0 | 0X8001;
    func_80018894(rdram, ctx);
        goto after_7;
    // 0x80066388: ori         $a1, $zero, 0x8001
    ctx->r5 = 0 | 0X8001;
    after_7:
    // 0x8006638C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x80066390: jal         0x800187D8
    // 0x80066394: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    func_800187D8(rdram, ctx);
        goto after_8;
    // 0x80066394: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_8:
    // 0x80066398: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x8006639C: jal         0x80018794
    // 0x800663A0: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    func_80018794(rdram, ctx);
        goto after_9;
    // 0x800663A0: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_9:
    // 0x800663A4: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x800663A8: jal         0x80018848
    // 0x800663AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80018848(rdram, ctx);
        goto after_10;
    // 0x800663AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_10:
    // 0x800663B0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800663B4: lwc1        $f22, 0x63C4($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X63C4);
    // 0x800663B8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_800663BC:
    // 0x800663BC: lw          $t6, 0x24($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X24);
    // 0x800663C0: andi        $s0, $s1, 0x3
    ctx->r16 = ctx->r17 & 0X3;
    // 0x800663C4: andi        $t8, $t6, 0x4000
    ctx->r24 = ctx->r14 & 0X4000;
    // 0x800663C8: bne         $t8, $zero, L_8006652C
    if (ctx->r24 != 0) {
        // 0x800663CC: addiu       $a0, $zero, 0x6
        ctx->r4 = ADD32(0, 0X6);
            goto L_8006652C;
    }
    // 0x800663CC: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x800663D0: bne         $s0, $zero, L_800663E0
    if (ctx->r16 != 0) {
        // 0x800663D4: lui         $a1, 0x7F7F
        ctx->r5 = S32(0X7F7F << 16);
            goto L_800663E0;
    }
    // 0x800663D4: lui         $a1, 0x7F7F
    ctx->r5 = S32(0X7F7F << 16);
    // 0x800663D8: jal         0x80018794
    // 0x800663DC: ori         $a1, $a1, 0x7FFF
    ctx->r5 = ctx->r5 | 0X7FFF;
    func_80018794(rdram, ctx);
        goto after_11;
    // 0x800663DC: ori         $a1, $a1, 0x7FFF
    ctx->r5 = ctx->r5 | 0X7FFF;
    after_11:
L_800663E0:
    // 0x800663E0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800663E4: bne         $s0, $at, L_800663F8
    if (ctx->r16 != ctx->r1) {
        // 0x800663E8: addiu       $a0, $zero, 0x6
        ctx->r4 = ADD32(0, 0X6);
            goto L_800663F8;
    }
    // 0x800663E8: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x800663EC: lui         $a1, 0x3F3F
    ctx->r5 = S32(0X3F3F << 16);
    // 0x800663F0: jal         0x80018794
    // 0x800663F4: ori         $a1, $a1, 0x3FFF
    ctx->r5 = ctx->r5 | 0X3FFF;
    func_80018794(rdram, ctx);
        goto after_12;
    // 0x800663F4: ori         $a1, $a1, 0x3FFF
    ctx->r5 = ctx->r5 | 0X3FFF;
    after_12:
L_800663F8:
    // 0x800663F8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800663FC: bne         $s0, $at, L_8006641C
    if (ctx->r16 != ctx->r1) {
        // 0x80066400: addiu       $a0, $zero, 0x6
        ctx->r4 = ADD32(0, 0X6);
            goto L_8006641C;
    }
    // 0x80066400: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x80066404: lui         $a1, 0xAFAF
    ctx->r5 = S32(0XAFAF << 16);
    // 0x80066408: ori         $a1, $a1, 0xAFFF
    ctx->r5 = ctx->r5 | 0XAFFF;
    // 0x8006640C: jal         0x80018794
    // 0x80066410: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_80018794(rdram, ctx);
        goto after_13;
    // 0x80066410: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_13:
    // 0x80066414: b           L_80066428
    // 0x80066418: nop

        goto L_80066428;
    // 0x80066418: nop

L_8006641C:
    // 0x8006641C: lui         $a1, 0x3F3F
    ctx->r5 = S32(0X3F3F << 16);
    // 0x80066420: jal         0x80018794
    // 0x80066424: ori         $a1, $a1, 0xFFFF
    ctx->r5 = ctx->r5 | 0XFFFF;
    func_80018794(rdram, ctx);
        goto after_14;
    // 0x80066424: ori         $a1, $a1, 0xFFFF
    ctx->r5 = ctx->r5 | 0XFFFF;
    after_14:
L_80066428:
    // 0x80066428: bgez        $s1, L_8006643C
    if (SIGNED(ctx->r17) >= 0) {
        // 0x8006642C: andi        $t7, $s1, 0x1F
        ctx->r15 = ctx->r17 & 0X1F;
            goto L_8006643C;
    }
    // 0x8006642C: andi        $t7, $s1, 0x1F
    ctx->r15 = ctx->r17 & 0X1F;
    // 0x80066430: beq         $t7, $zero, L_8006643C
    if (ctx->r15 == 0) {
        // 0x80066434: nop
    
            goto L_8006643C;
    }
    // 0x80066434: nop

    // 0x80066438: addiu       $t7, $t7, -0x20
    ctx->r15 = ADD32(ctx->r15, -0X20);
L_8006643C:
    // 0x8006643C: bne         $s2, $t7, L_80066458
    if (ctx->r18 != ctx->r15) {
        // 0x80066440: addiu       $a0, $zero, 0x6
        ctx->r4 = ADD32(0, 0X6);
            goto L_80066458;
    }
    // 0x80066440: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x80066444: jal         0x80018794
    // 0x80066448: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    func_80018794(rdram, ctx);
        goto after_15;
    // 0x80066448: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_15:
    // 0x8006644C: jal         0x80028AB8
    // 0x80066450: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    func_80028AB8(rdram, ctx);
        goto after_16;
    // 0x80066450: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    after_16:
    // 0x80066454: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
L_80066458:
    // 0x80066458: slti        $at, $s1, 0x14
    ctx->r1 = SIGNED(ctx->r17) < 0X14 ? 1 : 0;
    // 0x8006645C: beq         $at, $zero, L_80066484
    if (ctx->r1 == 0) {
        // 0x80066460: addiu       $a1, $sp, 0xCC
        ctx->r5 = ADD32(ctx->r29, 0XCC);
            goto L_80066484;
    }
    // 0x80066460: addiu       $a1, $sp, 0xCC
    ctx->r5 = ADD32(ctx->r29, 0XCC);
    // 0x80066464: add.s       $f20, $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f22.fl;
    // 0x80066468: lw          $a0, 0x154($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X154);
    // 0x8006646C: swc1        $f20, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f20.u32l;
    // 0x80066470: swc1        $f20, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f20.u32l;
    // 0x80066474: jal         0x80019114
    // 0x80066478: swc1        $f20, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f20.u32l;
    func_80019114(rdram, ctx);
        goto after_17;
    // 0x80066478: swc1        $f20, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f20.u32l;
    after_17:
    // 0x8006647C: b           L_8006650C
    // 0x80066480: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
        goto L_8006650C;
    // 0x80066480: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
L_80066484:
    // 0x80066484: slti        $at, $s1, 0x23
    ctx->r1 = SIGNED(ctx->r17) < 0X23 ? 1 : 0;
    // 0x80066488: bne         $at, $zero, L_80066508
    if (ctx->r1 != 0) {
        // 0x8006648C: slti        $at, $s1, 0x37
        ctx->r1 = SIGNED(ctx->r17) < 0X37 ? 1 : 0;
            goto L_80066508;
    }
    // 0x8006648C: slti        $at, $s1, 0x37
    ctx->r1 = SIGNED(ctx->r17) < 0X37 ? 1 : 0;
    // 0x80066490: beq         $at, $zero, L_800664C4
    if (ctx->r1 == 0) {
        // 0x80066494: addiu       $t9, $s1, -0x37
        ctx->r25 = ADD32(ctx->r17, -0X37);
            goto L_800664C4;
    }
    // 0x80066494: addiu       $t9, $s1, -0x37
    ctx->r25 = ADD32(ctx->r17, -0X37);
    // 0x80066498: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8006649C: lwc1        $f6, 0x63C8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X63C8);
    // 0x800664A0: lw          $a0, 0x154($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X154);
    // 0x800664A4: sub.s       $f20, $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f6.fl;
    // 0x800664A8: addiu       $a1, $sp, 0xB4
    ctx->r5 = ADD32(ctx->r29, 0XB4);
    // 0x800664AC: swc1        $f20, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f20.u32l;
    // 0x800664B0: swc1        $f20, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f20.u32l;
    // 0x800664B4: jal         0x80019114
    // 0x800664B8: swc1        $f20, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f20.u32l;
    func_80019114(rdram, ctx);
        goto after_18;
    // 0x800664B8: swc1        $f20, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f20.u32l;
    after_18:
    // 0x800664BC: b           L_8006650C
    // 0x800664C0: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
        goto L_8006650C;
    // 0x800664C0: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
L_800664C4:
    // 0x800664C4: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800664C8: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x800664CC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800664D0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800664D4: nop

    // 0x800664D8: mul.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x800664DC: jal         0x80028C00
    // 0x800664E0: nop

    func_80028C00(rdram, ctx);
        goto after_19;
    // 0x800664E0: nop

    after_19:
    // 0x800664E4: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x800664E8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800664EC: lwc1        $f10, 0x4($s3)
    ctx->f10.u32l = MEM_W(ctx->r19, 0X4);
    // 0x800664F0: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x800664F4: lw          $a0, 0x154($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X154);
    // 0x800664F8: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x800664FC: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80066500: jal         0x80019164
    // 0x80066504: swc1        $f4, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->f4.u32l;
    func_80019164(rdram, ctx);
        goto after_20;
    // 0x80066504: swc1        $f4, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->f4.u32l;
    after_20:
L_80066508:
    // 0x80066508: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
L_8006650C:
    // 0x8006650C: jal         0x800187D8
    // 0x80066510: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    func_800187D8(rdram, ctx);
        goto after_21;
    // 0x80066510: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_21:
    // 0x80066514: jal         0x80007AB0
    // 0x80066518: nop

    func_80007AB0(rdram, ctx);
        goto after_22;
    // 0x80066518: nop

    after_22:
    // 0x8006651C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80066520: addiu       $at, $zero, 0x46
    ctx->r1 = ADD32(0, 0X46);
    // 0x80066524: bne         $s1, $at, L_800663BC
    if (ctx->r17 != ctx->r1) {
        // 0x80066528: nop
    
            goto L_800663BC;
    }
    // 0x80066528: nop

L_8006652C:
    // 0x8006652C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x80066530: jal         0x80018894
    // 0x80066534: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80018894(rdram, ctx);
        goto after_23;
    // 0x80066534: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_23:
    // 0x80066538: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x8006653C: jal         0x80018848
    // 0x80066540: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80018848(rdram, ctx);
        goto after_24;
    // 0x80066540: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_24:
    // 0x80066544: lw          $a0, 0x154($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X154);
    // 0x80066548: jal         0x8001C568
    // 0x8006654C: nop

    func_8001C568(rdram, ctx);
        goto after_25;
    // 0x8006654C: nop

    after_25:
    // 0x80066550: addiu       $a0, $zero, 0x77C
    ctx->r4 = ADD32(0, 0X77C);
    // 0x80066554: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80066558: jal         0x8001D138
    // 0x8006655C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_26;
    // 0x8006655C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_26:
    // 0x80066560: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80066564: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80066568: jal         0x80019164
    // 0x8006656C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_80019164(rdram, ctx);
        goto after_27;
    // 0x8006656C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_27:
    // 0x80066570: sw          $s0, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->r16;
    // 0x80066574: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80066578: jal         0x8001C468
    // 0x8006657C: addiu       $a1, $zero, 0x7CC
    ctx->r5 = ADD32(0, 0X7CC);
    func_8001C468(rdram, ctx);
        goto after_28;
    // 0x8006657C: addiu       $a1, $zero, 0x7CC
    ctx->r5 = ADD32(0, 0X7CC);
    after_28:
    // 0x80066580: lw          $a0, 0x154($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X154);
    // 0x80066584: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80066588: jal         0x800192E8
    // 0x8006658C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800192E8(rdram, ctx);
        goto after_29;
    // 0x8006658C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_29:
    // 0x80066590: addiu       $a0, $zero, 0x77C
    ctx->r4 = ADD32(0, 0X77C);
    // 0x80066594: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80066598: jal         0x8001D138
    // 0x8006659C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_30;
    // 0x8006659C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_30:
    // 0x800665A0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800665A4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800665A8: jal         0x80019164
    // 0x800665AC: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_80019164(rdram, ctx);
        goto after_31;
    // 0x800665AC: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_31:
    // 0x800665B0: sw          $s0, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->r16;
    // 0x800665B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800665B8: jal         0x8001C468
    // 0x800665BC: addiu       $a1, $zero, 0x7CC
    ctx->r5 = ADD32(0, 0X7CC);
    func_8001C468(rdram, ctx);
        goto after_32;
    // 0x800665BC: addiu       $a1, $zero, 0x7CC
    ctx->r5 = ADD32(0, 0X7CC);
    after_32:
    // 0x800665C0: lw          $a0, 0x150($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X150);
    // 0x800665C4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800665C8: jal         0x800192E8
    // 0x800665CC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800192E8(rdram, ctx);
        goto after_33;
    // 0x800665CC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_33:
    // 0x800665D0: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x800665D4: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x800665D8: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x800665DC: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x800665E0: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x800665E4: addiu       $s0, $sp, 0x138
    ctx->r16 = ADD32(ctx->r29, 0X138);
L_800665E8:
    // 0x800665E8: mtc1        $s2, $f6
    ctx->f6.u32l = ctx->r18;
    // 0x800665EC: nop

    // 0x800665F0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800665F4: mul.s       $f12, $f8, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f22.fl);
    // 0x800665F8: jal         0x80028C2C
    // 0x800665FC: swc1        $f12, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f12.u32l;
    func_80028C2C(rdram, ctx);
        goto after_34;
    // 0x800665FC: swc1        $f12, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f12.u32l;
    after_34:
    // 0x80066600: mul.s       $f10, $f0, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x80066604: lwc1        $f4, 0x0($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X0);
    // 0x80066608: lwc1        $f12, 0x44($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8006660C: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80066610: jal         0x80028C00
    // 0x80066614: swc1        $f6, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->f6.u32l;
    func_80028C00(rdram, ctx);
        goto after_35;
    // 0x80066614: swc1        $f6, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->f6.u32l;
    after_35:
    // 0x80066618: mul.s       $f8, $f0, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x8006661C: lwc1        $f10, 0x8($s3)
    ctx->f10.u32l = MEM_W(ctx->r19, 0X8);
    // 0x80066620: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x80066624: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    // 0x80066628: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8006662C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80066630: swc1        $f4, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->f4.u32l;
    // 0x80066634: lwc1        $f6, 0x4($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0X4);
    // 0x80066638: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x8006663C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80066640: jal         0x8005D1B4
    // 0x80066644: swc1        $f10, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->f10.u32l;
    func_8005D1B4(rdram, ctx);
        goto after_36;
    // 0x80066644: swc1        $f10, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->f10.u32l;
    after_36:
    // 0x80066648: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8006664C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80066650: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80066654: bne         $s2, $at, L_800665E8
    if (ctx->r18 != ctx->r1) {
        // 0x80066658: sw          $v0, -0x4($s0)
        MEM_W(-0X4, ctx->r16) = ctx->r2;
            goto L_800665E8;
    }
    // 0x80066658: sw          $v0, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = ctx->r2;
    // 0x8006665C: slti        $at, $s1, 0x64
    ctx->r1 = SIGNED(ctx->r17) < 0X64 ? 1 : 0;
    // 0x80066660: beq         $at, $zero, L_80066730
    if (ctx->r1 == 0) {
        // 0x80066664: lui         $at, 0x4024
        ctx->r1 = S32(0X4024 << 16);
            goto L_80066730;
    }
    // 0x80066664: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x80066668: mtc1        $at, $f23
    ctx->f_odd[(23 - 1) * 2] = ctx->r1;
    // 0x8006666C: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80066670: mtc1        $at, $f21
    ctx->f_odd[(21 - 1) * 2] = ctx->r1;
    // 0x80066674: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x80066678: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x8006667C: nop

L_80066680:
    // 0x80066680: lw          $t6, 0x24($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X24);
    // 0x80066684: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    // 0x80066688: andi        $t8, $t6, 0x4000
    ctx->r24 = ctx->r14 & 0X4000;
    // 0x8006668C: bne         $t8, $zero, L_80066734
    if (ctx->r24 != 0) {
        // 0x80066690: lw          $a0, 0x154($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X154);
            goto L_80066734;
    }
    // 0x80066690: lw          $a0, 0x154($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X154);
    // 0x80066694: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80066698: nop

    // 0x8006669C: swc1        $f0, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->f0.u32l;
    // 0x800666A0: jal         0x80027F1C
    // 0x800666A4: swc1        $f0, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->f0.u32l;
    func_80027F1C(rdram, ctx);
        goto after_37;
    // 0x800666A4: swc1        $f0, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->f0.u32l;
    after_37:
    // 0x800666A8: mul.d       $f4, $f0, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f20.d); 
    ctx->f4.d = MUL_D(ctx->f0.d, ctx->f20.d);
    // 0x800666AC: lw          $a0, 0x154($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X154);
    // 0x800666B0: addiu       $a1, $sp, 0x120
    ctx->r5 = ADD32(ctx->r29, 0X120);
    // 0x800666B4: add.d       $f6, $f4, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f22.d); 
    ctx->f6.d = ctx->f4.d + ctx->f22.d;
    // 0x800666B8: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x800666BC: jal         0x80019114
    // 0x800666C0: swc1        $f8, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f8.u32l;
    func_80019114(rdram, ctx);
        goto after_38;
    // 0x800666C0: swc1        $f8, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f8.u32l;
    after_38:
    // 0x800666C4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x800666C8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800666CC: lwc1        $f10, 0x118($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X118);
    // 0x800666D0: lw          $a0, 0x154($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X154);
    // 0x800666D4: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x800666D8: addiu       $a1, $sp, 0x114
    ctx->r5 = ADD32(ctx->r29, 0X114);
    // 0x800666DC: jal         0x8001913C
    // 0x800666E0: swc1        $f6, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f6.u32l;
    func_8001913C(rdram, ctx);
        goto after_39;
    // 0x800666E0: swc1        $f6, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f6.u32l;
    after_39:
    // 0x800666E4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x800666E8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800666EC: nop

    // 0x800666F0: swc1        $f0, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->f0.u32l;
    // 0x800666F4: jal         0x80027F1C
    // 0x800666F8: swc1        $f0, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->f0.u32l;
    func_80027F1C(rdram, ctx);
        goto after_40;
    // 0x800666F8: swc1        $f0, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->f0.u32l;
    after_40:
    // 0x800666FC: mul.d       $f8, $f0, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f20.d); 
    ctx->f8.d = MUL_D(ctx->f0.d, ctx->f20.d);
    // 0x80066700: lw          $a0, 0x150($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X150);
    // 0x80066704: addiu       $a1, $sp, 0x120
    ctx->r5 = ADD32(ctx->r29, 0X120);
    // 0x80066708: add.d       $f10, $f8, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f22.d); 
    ctx->f10.d = ctx->f8.d + ctx->f22.d;
    // 0x8006670C: cvt.s.d     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f4.fl = CVT_S_D(ctx->f10.d);
    // 0x80066710: jal         0x80019114
    // 0x80066714: swc1        $f4, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f4.u32l;
    func_80019114(rdram, ctx);
        goto after_41;
    // 0x80066714: swc1        $f4, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f4.u32l;
    after_41:
    // 0x80066718: jal         0x80007AB0
    // 0x8006671C: nop

    func_80007AB0(rdram, ctx);
        goto after_42;
    // 0x8006671C: nop

    after_42:
    // 0x80066720: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80066724: slti        $at, $s1, 0x64
    ctx->r1 = SIGNED(ctx->r17) < 0X64 ? 1 : 0;
    // 0x80066728: bne         $at, $zero, L_80066680
    if (ctx->r1 != 0) {
        // 0x8006672C: nop
    
            goto L_80066680;
    }
    // 0x8006672C: nop

L_80066730:
    // 0x80066730: lw          $a0, 0x154($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X154);
L_80066734:
    // 0x80066734: jal         0x8001C568
    // 0x80066738: nop

    func_8001C568(rdram, ctx);
        goto after_43;
    // 0x80066738: nop

    after_43:
    // 0x8006673C: lw          $a0, 0x150($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X150);
    // 0x80066740: jal         0x8001C568
    // 0x80066744: nop

    func_8001C568(rdram, ctx);
        goto after_44;
    // 0x80066744: nop

    after_44:
    // 0x80066748: addiu       $s0, $sp, 0x138
    ctx->r16 = ADD32(ctx->r29, 0X138);
    // 0x8006674C: addiu       $s2, $sp, 0x148
    ctx->r18 = ADD32(ctx->r29, 0X148);
L_80066750:
    // 0x80066750: jal         0x8005D128
    // 0x80066754: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8005D128(rdram, ctx);
        goto after_45;
    // 0x80066754: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_45:
    // 0x80066758: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8006675C: bne         $s0, $s2, L_80066750
    if (ctx->r16 != ctx->r18) {
        // 0x80066760: nop
    
            goto L_80066750;
    }
    // 0x80066760: nop

    // 0x80066764: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    // 0x80066768: jal         0x8005D1B4
    // 0x8006676C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_8005D1B4(rdram, ctx);
        goto after_46;
    // 0x8006676C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_46:
    // 0x80066770: sw          $v0, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->r2;
    // 0x80066774: addiu       $a0, $zero, 0x77A
    ctx->r4 = ADD32(0, 0X77A);
    // 0x80066778: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8006677C: jal         0x8001D138
    // 0x80066780: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_47;
    // 0x80066780: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_47:
    // 0x80066784: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80066788: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8006678C: jal         0x80019164
    // 0x80066790: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_80019164(rdram, ctx);
        goto after_48;
    // 0x80066790: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_48:
    // 0x80066794: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    // 0x80066798: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8006679C: sw          $s0, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->r16;
    // 0x800667A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800667A4: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    // 0x800667A8: swc1        $f0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f0.u32l;
    // 0x800667AC: swc1        $f0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f0.u32l;
    // 0x800667B0: jal         0x80019114
    // 0x800667B4: swc1        $f0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f0.u32l;
    func_80019114(rdram, ctx);
        goto after_49;
    // 0x800667B4: swc1        $f0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f0.u32l;
    after_49:
    // 0x800667B8: slti        $at, $s1, 0x82
    ctx->r1 = SIGNED(ctx->r17) < 0X82 ? 1 : 0;
    // 0x800667BC: beq         $at, $zero, L_80066838
    if (ctx->r1 == 0) {
        // 0x800667C0: addiu       $s2, $zero, 0x82
        ctx->r18 = ADD32(0, 0X82);
            goto L_80066838;
    }
    // 0x800667C0: addiu       $s2, $zero, 0x82
    ctx->r18 = ADD32(0, 0X82);
L_800667C4:
    // 0x800667C4: lw          $t7, 0x24($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X24);
    // 0x800667C8: lw          $s0, 0x154($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X154);
    // 0x800667CC: andi        $t9, $t7, 0x4000
    ctx->r25 = ctx->r15 & 0X4000;
    // 0x800667D0: bne         $t9, $zero, L_80066838
    if (ctx->r25 != 0) {
        // 0x800667D4: subu        $v0, $s2, $s1
        ctx->r2 = SUB32(ctx->r18, ctx->r17);
            goto L_80066838;
    }
    // 0x800667D4: subu        $v0, $s2, $s1
    ctx->r2 = SUB32(ctx->r18, ctx->r17);
    // 0x800667D8: sll         $v1, $v0, 8
    ctx->r3 = S32(ctx->r2 << 8);
    // 0x800667DC: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x800667E0: bne         $v0, $at, L_80066804
    if (ctx->r2 != ctx->r1) {
        // 0x800667E4: subu        $v1, $v1, $v0
        ctx->r3 = SUB32(ctx->r3, ctx->r2);
            goto L_80066804;
    }
    // 0x800667E4: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x800667E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800667EC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800667F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800667F4: jal         0x80018658
    // 0x800667F8: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    func_80018658(rdram, ctx);
        goto after_50;
    // 0x800667F8: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    after_50:
    // 0x800667FC: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x80066800: nop

L_80066804:
    // 0x80066804: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x80066808: div         $zero, $v1, $at
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r1)));
    // 0x8006680C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80066810: mflo        $a1
    ctx->r5 = lo;
    // 0x80066814: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x80066818: jal         0x80018604
    // 0x8006681C: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    func_80018604(rdram, ctx);
        goto after_51;
    // 0x8006681C: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    after_51:
    // 0x80066820: jal         0x80007AB0
    // 0x80066824: nop

    func_80007AB0(rdram, ctx);
        goto after_52;
    // 0x80066824: nop

    after_52:
    // 0x80066828: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8006682C: slti        $at, $s1, 0x82
    ctx->r1 = SIGNED(ctx->r17) < 0X82 ? 1 : 0;
    // 0x80066830: bne         $at, $zero, L_800667C4
    if (ctx->r1 != 0) {
        // 0x80066834: nop
    
            goto L_800667C4;
    }
    // 0x80066834: nop

L_80066838:
    // 0x80066838: addiu       $s0, $sp, 0x154
    ctx->r16 = ADD32(ctx->r29, 0X154);
    // 0x8006683C: addiu       $v0, $s0, 0x4
    ctx->r2 = ADD32(ctx->r16, 0X4);
L_80066840:
    // 0x80066840: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80066844: jal         0x8001C568
    // 0x80066848: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    func_8001C568(rdram, ctx);
        goto after_53;
    // 0x80066848: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    after_53:
    // 0x8006684C: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
    // 0x80066850: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80066854: sltu        $at, $s0, $v0
    ctx->r1 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x80066858: bne         $at, $zero, L_80066840
    if (ctx->r1 != 0) {
        // 0x8006685C: nop
    
            goto L_80066840;
    }
    // 0x8006685C: nop

    // 0x80066860: jal         0x8005CD50
    // 0x80066864: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_8005CD50(rdram, ctx);
        goto after_54;
    // 0x80066864: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_54:
    // 0x80066868: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8006686C: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x80066870: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x80066874: nop

    // 0x80066878: addiu       $t9, $t7, -0x1
    ctx->r25 = ADD32(ctx->r15, -0X1);
    // 0x8006687C: jal         0x80007AE0
    // 0x80066880: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    func_80007AE0(rdram, ctx);
        goto after_55;
    // 0x80066880: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    after_55:
    // 0x80066884: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80066888: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8006688C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80066890: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80066894: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80066898: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8006689C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x800668A0: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x800668A4: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x800668A8: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x800668AC: jr          $ra
    // 0x800668B0: addiu       $sp, $sp, 0x160
    ctx->r29 = ADD32(ctx->r29, 0X160);
    return;
    // 0x800668B0: addiu       $sp, $sp, 0x160
    ctx->r29 = ADD32(ctx->r29, 0X160);
;}
RECOMP_FUNC void func_800668B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800668B4: addiu       $sp, $sp, -0xF8
    ctx->r29 = ADD32(ctx->r29, -0XF8);
    // 0x800668B8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x800668BC: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x800668C0: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x800668C4: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x800668C8: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x800668CC: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x800668D0: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x800668D4: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800668D8: jal         0x80007774
    // 0x800668DC: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x800668DC: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x800668E0: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x800668E4: addiu       $t7, $t7, 0x2410
    ctx->r15 = ADD32(ctx->r15, 0X2410);
    // 0x800668E8: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x800668EC: lw          $s1, 0x1C($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X1C);
    // 0x800668F0: addiu       $t6, $sp, 0xD8
    ctx->r14 = ADD32(ctx->r29, 0XD8);
    // 0x800668F4: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x800668F8: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x800668FC: lw          $t9, 0x4($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X4);
    // 0x80066900: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x80066904: addiu       $t8, $t8, 0x241C
    ctx->r24 = ADD32(ctx->r24, 0X241C);
    // 0x80066908: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x8006690C: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    // 0x80066910: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x80066914: addiu       $s4, $sp, 0xCC
    ctx->r20 = ADD32(ctx->r29, 0XCC);
    // 0x80066918: sw          $at, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r1;
    // 0x8006691C: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x80066920: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80066924: sw          $t9, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r25;
    // 0x80066928: lw          $at, 0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X8);
    // 0x8006692C: addiu       $t6, $t6, 0x2428
    ctx->r14 = ADD32(ctx->r14, 0X2428);
    // 0x80066930: sw          $at, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r1;
    // 0x80066934: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x80066938: addiu       $t7, $sp, 0xC0
    ctx->r15 = ADD32(ctx->r29, 0XC0);
    // 0x8006693C: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x80066940: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x80066944: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x80066948: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x8006694C: addiu       $t8, $t8, 0x2434
    ctx->r24 = ADD32(ctx->r24, 0X2434);
    // 0x80066950: sw          $at, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r1;
    // 0x80066954: sw          $t9, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r25;
    // 0x80066958: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x8006695C: addiu       $s5, $sp, 0x80
    ctx->r21 = ADD32(ctx->r29, 0X80);
    // 0x80066960: sw          $at, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r1;
    // 0x80066964: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x80066968: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8006696C: sw          $t9, 0x4($s5)
    MEM_W(0X4, ctx->r21) = ctx->r25;
    // 0x80066970: lw          $at, 0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X8);
    // 0x80066974: addiu       $a0, $zero, 0x787
    ctx->r4 = ADD32(0, 0X787);
    // 0x80066978: sw          $at, 0x8($s5)
    MEM_W(0X8, ctx->r21) = ctx->r1;
    // 0x8006697C: lw          $t9, 0xC($t8)
    ctx->r25 = MEM_W(ctx->r24, 0XC);
    // 0x80066980: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80066984: sw          $t9, 0xC($s5)
    MEM_W(0XC, ctx->r21) = ctx->r25;
    // 0x80066988: lw          $at, 0x10($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X10);
    // 0x8006698C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80066990: sw          $at, 0x10($s5)
    MEM_W(0X10, ctx->r21) = ctx->r1;
    // 0x80066994: lw          $t9, 0x14($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X14);
    // 0x80066998: nop

    // 0x8006699C: sw          $t9, 0x14($s5)
    MEM_W(0X14, ctx->r21) = ctx->r25;
    // 0x800669A0: lw          $at, 0x18($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X18);
    // 0x800669A4: nop

    // 0x800669A8: sw          $at, 0x18($s5)
    MEM_W(0X18, ctx->r21) = ctx->r1;
    // 0x800669AC: lw          $t9, 0x1C($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X1C);
    // 0x800669B0: jal         0x8001D138
    // 0x800669B4: sw          $t9, 0x1C($s5)
    MEM_W(0X1C, ctx->r21) = ctx->r25;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x800669B4: sw          $t9, 0x1C($s5)
    MEM_W(0X1C, ctx->r21) = ctx->r25;
    after_1:
    // 0x800669B8: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x800669BC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800669C0: jal         0x80019164
    // 0x800669C4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x800669C4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_2:
    // 0x800669C8: sw          $s2, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r18;
    // 0x800669CC: addiu       $a0, $zero, 0x771
    ctx->r4 = ADD32(0, 0X771);
    // 0x800669D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800669D4: jal         0x8001D138
    // 0x800669D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_3;
    // 0x800669D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x800669DC: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x800669E0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800669E4: jal         0x80019164
    // 0x800669E8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80019164(rdram, ctx);
        goto after_4;
    // 0x800669E8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_4:
    // 0x800669EC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800669F0: lwc1        $f0, 0x63CC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X63CC);
    // 0x800669F4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800669F8: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x800669FC: sw          $s2, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r18;
    // 0x80066A00: swc1        $f0, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f0.u32l;
    // 0x80066A04: swc1        $f0, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f0.u32l;
    // 0x80066A08: jal         0x80019114
    // 0x80066A0C: swc1        $f0, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f0.u32l;
    func_80019114(rdram, ctx);
        goto after_5;
    // 0x80066A0C: swc1        $f0, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f0.u32l;
    after_5:
    // 0x80066A10: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80066A14: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80066A18: nop

    // 0x80066A1C: swc1        $f0, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f0.u32l;
    // 0x80066A20: swc1        $f0, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f0.u32l;
    // 0x80066A24: swc1        $f0, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f0.u32l;
    // 0x80066A28: lwc1        $f4, 0x0($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X0);
    // 0x80066A2C: nop

    // 0x80066A30: swc1        $f4, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f4.u32l;
    // 0x80066A34: lwc1        $f6, 0x4($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X4);
    // 0x80066A38: nop

    // 0x80066A3C: swc1        $f6, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f6.u32l;
    // 0x80066A40: lwc1        $f8, 0x8($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X8);
    // 0x80066A44: nop

    // 0x80066A48: swc1        $f8, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f8.u32l;
    // 0x80066A4C: lwc1        $f12, 0x10($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X10);
    // 0x80066A50: jal         0x8007A640
    // 0x80066A54: nop

    __sinf_recomp(rdram, ctx);
        goto after_6;
    // 0x80066A54: nop

    after_6:
    // 0x80066A58: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80066A5C: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80066A60: lwc1        $f4, 0x20($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X20);
    // 0x80066A64: mul.s       $f10, $f0, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x80066A68: lwc1        $f8, 0xB4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x80066A6C: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x80066A70: lwc1        $f4, 0xB8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x80066A74: nop

    // 0x80066A78: swc1        $f4, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f4.u32l;
    // 0x80066A7C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80066A80: swc1        $f10, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f10.u32l;
    // 0x80066A84: lwc1        $f12, 0x10($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X10);
    // 0x80066A88: jal         0x8007A800
    // 0x80066A8C: nop

    __cosf_recomp(rdram, ctx);
        goto after_7;
    // 0x80066A8C: nop

    after_7:
    // 0x80066A90: mul.s       $f6, $f0, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x80066A94: lwc1        $f8, 0x20($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X20);
    // 0x80066A98: lwc1        $f4, 0xBC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x80066A9C: addiu       $s4, $sp, 0xA8
    ctx->r20 = ADD32(ctx->r29, 0XA8);
    // 0x80066AA0: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80066AA4: addiu       $t6, $sp, 0xB4
    ctx->r14 = ADD32(ctx->r29, 0XB4);
    // 0x80066AA8: sw          $s4, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r20;
    // 0x80066AAC: sw          $t6, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r14;
    // 0x80066AB0: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80066AB4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80066AB8: swc1        $f6, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f6.u32l;
    // 0x80066ABC: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x80066AC0: addiu       $a2, $sp, 0xA0
    ctx->r6 = ADD32(ctx->r29, 0XA0);
    // 0x80066AC4: jal         0x8001B61C
    // 0x80066AC8: addiu       $a3, $sp, 0x78
    ctx->r7 = ADD32(ctx->r29, 0X78);
    func_8001B61C(rdram, ctx);
        goto after_8;
    // 0x80066AC8: addiu       $a3, $sp, 0x78
    ctx->r7 = ADD32(ctx->r29, 0X78);
    after_8:
    // 0x80066ACC: lw          $a0, 0xEC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XEC);
    // 0x80066AD0: sw          $v0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r2;
    // 0x80066AD4: jal         0x80019164
    // 0x80066AD8: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    func_80019164(rdram, ctx);
        goto after_9;
    // 0x80066AD8: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_9:
    // 0x80066ADC: lw          $a0, 0xEC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XEC);
    // 0x80066AE0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80066AE4: jal         0x80018658
    // 0x80066AE8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80018658(rdram, ctx);
        goto after_10;
    // 0x80066AE8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_10:
    // 0x80066AEC: lw          $a0, 0xEC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XEC);
    // 0x80066AF0: jal         0x80018604
    // 0x80066AF4: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_80018604(rdram, ctx);
        goto after_11;
    // 0x80066AF4: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_11:
    // 0x80066AF8: addiu       $s3, $zero, -0x101
    ctx->r19 = ADD32(0, -0X101);
    // 0x80066AFC: addiu       $s2, $zero, -0x401
    ctx->r18 = ADD32(0, -0X401);
L_80066B00:
    // 0x80066B00: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x80066B04: lw          $a0, 0xE8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XE8);
    // 0x80066B08: andi        $t7, $v0, 0x4000
    ctx->r15 = ctx->r2 & 0X4000;
    // 0x80066B0C: bne         $t7, $zero, L_80066BFC
    if (ctx->r15 != 0) {
        // 0x80066B10: andi        $t8, $v0, 0x400
        ctx->r24 = ctx->r2 & 0X400;
            goto L_80066BFC;
    }
    // 0x80066B10: andi        $t8, $v0, 0x400
    ctx->r24 = ctx->r2 & 0X400;
    // 0x80066B14: beq         $t8, $zero, L_80066B38
    if (ctx->r24 == 0) {
        // 0x80066B18: andi        $t7, $v0, 0x100
        ctx->r15 = ctx->r2 & 0X100;
            goto L_80066B38;
    }
    // 0x80066B18: andi        $t7, $v0, 0x100
    ctx->r15 = ctx->r2 & 0X100;
    // 0x80066B1C: jal         0x8001913C
    // 0x80066B20: addiu       $a1, $s1, 0xC
    ctx->r5 = ADD32(ctx->r17, 0XC);
    func_8001913C(rdram, ctx);
        goto after_12;
    // 0x80066B20: addiu       $a1, $s1, 0xC
    ctx->r5 = ADD32(ctx->r17, 0XC);
    after_12:
    // 0x80066B24: lw          $t9, 0x24($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X24);
    // 0x80066B28: nop

    // 0x80066B2C: and         $v0, $t9, $s2
    ctx->r2 = ctx->r25 & ctx->r18;
    // 0x80066B30: sw          $v0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r2;
    // 0x80066B34: andi        $t7, $v0, 0x100
    ctx->r15 = ctx->r2 & 0X100;
L_80066B38:
    // 0x80066B38: beq         $t7, $zero, L_80066B5C
    if (ctx->r15 == 0) {
        // 0x80066B3C: nop
    
            goto L_80066B5C;
    }
    // 0x80066B3C: nop

    // 0x80066B40: lw          $a0, 0xE8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XE8);
    // 0x80066B44: jal         0x80019114
    // 0x80066B48: addiu       $a1, $s1, 0x18
    ctx->r5 = ADD32(ctx->r17, 0X18);
    func_80019114(rdram, ctx);
        goto after_13;
    // 0x80066B48: addiu       $a1, $s1, 0x18
    ctx->r5 = ADD32(ctx->r17, 0X18);
    after_13:
    // 0x80066B4C: lw          $t8, 0x24($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X24);
    // 0x80066B50: nop

    // 0x80066B54: and         $t9, $t8, $s3
    ctx->r25 = ctx->r24 & ctx->r19;
    // 0x80066B58: sw          $t9, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r25;
L_80066B5C:
    // 0x80066B5C: lwc1        $f12, 0x10($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X10);
    // 0x80066B60: jal         0x8007A640
    // 0x80066B64: nop

    __sinf_recomp(rdram, ctx);
        goto after_14;
    // 0x80066B64: nop

    after_14:
    // 0x80066B68: mul.s       $f8, $f0, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x80066B6C: lwc1        $f10, 0x20($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X20);
    // 0x80066B70: lwc1        $f6, 0xB4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x80066B74: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80066B78: lwc1        $f10, 0xB8($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x80066B7C: nop

    // 0x80066B80: swc1        $f10, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f10.u32l;
    // 0x80066B84: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80066B88: swc1        $f8, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f8.u32l;
    // 0x80066B8C: lwc1        $f12, 0x10($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X10);
    // 0x80066B90: jal         0x8007A800
    // 0x80066B94: nop

    __cosf_recomp(rdram, ctx);
        goto after_15;
    // 0x80066B94: nop

    after_15:
    // 0x80066B98: mul.s       $f4, $f0, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x80066B9C: lwc1        $f6, 0x20($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X20);
    // 0x80066BA0: lwc1        $f10, 0xBC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x80066BA4: lw          $a0, 0xEC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XEC);
    // 0x80066BA8: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80066BAC: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x80066BB0: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80066BB4: swc1        $f4, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f4.u32l;
    // 0x80066BB8: bgez        $s0, L_80066BCC
    if (SIGNED(ctx->r16) >= 0) {
        // 0x80066BBC: andi        $t6, $s0, 0x3
        ctx->r14 = ctx->r16 & 0X3;
            goto L_80066BCC;
    }
    // 0x80066BBC: andi        $t6, $s0, 0x3
    ctx->r14 = ctx->r16 & 0X3;
    // 0x80066BC0: beq         $t6, $zero, L_80066BCC
    if (ctx->r14 == 0) {
        // 0x80066BC4: nop
    
            goto L_80066BCC;
    }
    // 0x80066BC4: nop

    // 0x80066BC8: addiu       $t6, $t6, -0x4
    ctx->r14 = ADD32(ctx->r14, -0X4);
L_80066BCC:
    // 0x80066BCC: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x80066BD0: addu        $v0, $s5, $t7
    ctx->r2 = ADD32(ctx->r21, ctx->r15);
    // 0x80066BD4: lw          $t8, 0x4($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X4);
    // 0x80066BD8: nop

    // 0x80066BDC: sw          $t8, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r24;
    // 0x80066BE0: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x80066BE4: jal         0x80019164
    // 0x80066BE8: sw          $t9, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r25;
    func_80019164(rdram, ctx);
        goto after_16;
    // 0x80066BE8: sw          $t9, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r25;
    after_16:
    // 0x80066BEC: jal         0x80007AB0
    // 0x80066BF0: nop

    func_80007AB0(rdram, ctx);
        goto after_17;
    // 0x80066BF0: nop

    after_17:
    // 0x80066BF4: b           L_80066B00
    // 0x80066BF8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
        goto L_80066B00;
    // 0x80066BF8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_80066BFC:
    // 0x80066BFC: lw          $a0, 0x74($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X74);
    // 0x80066C00: jal         0x8001B5C4
    // 0x80066C04: nop

    func_8001B5C4(rdram, ctx);
        goto after_18;
    // 0x80066C04: nop

    after_18:
    // 0x80066C08: addiu       $s0, $sp, 0xE8
    ctx->r16 = ADD32(ctx->r29, 0XE8);
    // 0x80066C0C: addiu       $s3, $s0, 0x8
    ctx->r19 = ADD32(ctx->r16, 0X8);
L_80066C10:
    // 0x80066C10: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80066C14: jal         0x8001C568
    // 0x80066C18: nop

    func_8001C568(rdram, ctx);
        goto after_19;
    // 0x80066C18: nop

    after_19:
    // 0x80066C1C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80066C20: sltu        $at, $s0, $s3
    ctx->r1 = ctx->r16 < ctx->r19 ? 1 : 0;
    // 0x80066C24: bne         $at, $zero, L_80066C10
    if (ctx->r1 != 0) {
        // 0x80066C28: nop
    
            goto L_80066C10;
    }
    // 0x80066C28: nop

    // 0x80066C2C: jal         0x8005CD50
    // 0x80066C30: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8005CD50(rdram, ctx);
        goto after_20;
    // 0x80066C30: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_20:
    // 0x80066C34: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80066C38: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x80066C3C: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x80066C40: nop

    // 0x80066C44: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x80066C48: jal         0x80007AE0
    // 0x80066C4C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    func_80007AE0(rdram, ctx);
        goto after_21;
    // 0x80066C4C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    after_21:
    // 0x80066C50: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80066C54: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x80066C58: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80066C5C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80066C60: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80066C64: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x80066C68: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x80066C6C: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x80066C70: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x80066C74: jr          $ra
    // 0x80066C78: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
    return;
    // 0x80066C78: addiu       $sp, $sp, 0xF8
    ctx->r29 = ADD32(ctx->r29, 0XF8);
;}
RECOMP_FUNC void func_80066C7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80066C7C: addiu       $sp, $sp, -0xE8
    ctx->r29 = ADD32(ctx->r29, -0XE8);
    // 0x80066C80: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80066C84: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x80066C88: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x80066C8C: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x80066C90: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x80066C94: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80066C98: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80066C9C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80066CA0: jal         0x80007774
    // 0x80066CA4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x80066CA4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x80066CA8: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x80066CAC: addiu       $t7, $t7, 0x2454
    ctx->r15 = ADD32(ctx->r15, 0X2454);
    // 0x80066CB0: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x80066CB4: lw          $s3, 0x1C($v0)
    ctx->r19 = MEM_W(ctx->r2, 0X1C);
    // 0x80066CB8: addiu       $t6, $sp, 0xC8
    ctx->r14 = ADD32(ctx->r29, 0XC8);
    // 0x80066CBC: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x80066CC0: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x80066CC4: lw          $t9, 0x4($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X4);
    // 0x80066CC8: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x80066CCC: addiu       $t8, $t8, 0x2460
    ctx->r24 = ADD32(ctx->r24, 0X2460);
    // 0x80066CD0: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x80066CD4: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    // 0x80066CD8: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x80066CDC: addiu       $s7, $sp, 0xBC
    ctx->r23 = ADD32(ctx->r29, 0XBC);
    // 0x80066CE0: sw          $at, 0x0($s7)
    MEM_W(0X0, ctx->r23) = ctx->r1;
    // 0x80066CE4: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x80066CE8: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80066CEC: sw          $t9, 0x4($s7)
    MEM_W(0X4, ctx->r23) = ctx->r25;
    // 0x80066CF0: lw          $at, 0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X8);
    // 0x80066CF4: addiu       $t6, $t6, 0x246C
    ctx->r14 = ADD32(ctx->r14, 0X246C);
    // 0x80066CF8: sw          $at, 0x8($s7)
    MEM_W(0X8, ctx->r23) = ctx->r1;
    // 0x80066CFC: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x80066D00: addiu       $t7, $sp, 0xB0
    ctx->r15 = ADD32(ctx->r29, 0XB0);
    // 0x80066D04: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x80066D08: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x80066D0C: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x80066D10: addiu       $a0, $zero, 0x787
    ctx->r4 = ADD32(0, 0X787);
    // 0x80066D14: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80066D18: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80066D1C: sw          $at, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r1;
    // 0x80066D20: jal         0x8001D138
    // 0x80066D24: sw          $t9, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r25;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x80066D24: sw          $t9, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r25;
    after_1:
    // 0x80066D28: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80066D2C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80066D30: jal         0x80019164
    // 0x80066D34: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x80066D34: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_2:
    // 0x80066D38: sw          $s0, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r16;
    // 0x80066D3C: addiu       $a0, $zero, 0x771
    ctx->r4 = ADD32(0, 0X771);
    // 0x80066D40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80066D44: jal         0x8001D138
    // 0x80066D48: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_3;
    // 0x80066D48: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x80066D4C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80066D50: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80066D54: jal         0x80019164
    // 0x80066D58: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_80019164(rdram, ctx);
        goto after_4;
    // 0x80066D58: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_4:
    // 0x80066D5C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80066D60: lwc1        $f0, 0x63D0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X63D0);
    // 0x80066D64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80066D68: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x80066D6C: sw          $s0, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r16;
    // 0x80066D70: swc1        $f0, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f0.u32l;
    // 0x80066D74: swc1        $f0, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f0.u32l;
    // 0x80066D78: jal         0x80019114
    // 0x80066D7C: swc1        $f0, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f0.u32l;
    func_80019114(rdram, ctx);
        goto after_5;
    // 0x80066D7C: swc1        $f0, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f0.u32l;
    after_5:
    // 0x80066D80: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80066D84: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80066D88: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80066D8C: lw          $a0, 0xD8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XD8);
    // 0x80066D90: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x80066D94: swc1        $f0, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f0.u32l;
    // 0x80066D98: swc1        $f0, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f0.u32l;
    // 0x80066D9C: jal         0x80019114
    // 0x80066DA0: swc1        $f4, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f4.u32l;
    func_80019114(rdram, ctx);
        goto after_6;
    // 0x80066DA0: swc1        $f4, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f4.u32l;
    after_6:
    // 0x80066DA4: lw          $a0, 0xDC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XDC);
    // 0x80066DA8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80066DAC: jal         0x80018658
    // 0x80066DB0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80018658(rdram, ctx);
        goto after_7;
    // 0x80066DB0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x80066DB4: lw          $a0, 0xDC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XDC);
    // 0x80066DB8: jal         0x80018604
    // 0x80066DBC: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_80018604(rdram, ctx);
        goto after_8;
    // 0x80066DBC: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_8:
    // 0x80066DC0: addiu       $s2, $zero, -0x101
    ctx->r18 = ADD32(0, -0X101);
    // 0x80066DC4: addiu       $s1, $zero, -0x401
    ctx->r17 = ADD32(0, -0X401);
    // 0x80066DC8: addiu       $s0, $zero, -0x801
    ctx->r16 = ADD32(0, -0X801);
    // 0x80066DCC: lw          $v0, 0x24($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X24);
L_80066DD0:
    // 0x80066DD0: lw          $a0, 0xD8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XD8);
    // 0x80066DD4: andi        $t8, $v0, 0x4200
    ctx->r24 = ctx->r2 & 0X4200;
    // 0x80066DD8: beq         $t8, $zero, L_80066DE8
    if (ctx->r24 == 0) {
        // 0x80066DDC: andi        $t7, $v0, 0x800
        ctx->r15 = ctx->r2 & 0X800;
            goto L_80066DE8;
    }
    // 0x80066DDC: andi        $t7, $v0, 0x800
    ctx->r15 = ctx->r2 & 0X800;
    // 0x80066DE0: b           L_80066E94
    // 0x80066DE4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80066E94;
    // 0x80066DE4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80066DE8:
    // 0x80066DE8: beq         $t7, $zero, L_80066E18
    if (ctx->r15 == 0) {
        // 0x80066DEC: andi        $t8, $v0, 0x400
        ctx->r24 = ctx->r2 & 0X400;
            goto L_80066E18;
    }
    // 0x80066DEC: andi        $t8, $v0, 0x400
    ctx->r24 = ctx->r2 & 0X400;
    // 0x80066DF0: jal         0x80019164
    // 0x80066DF4: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_80019164(rdram, ctx);
        goto after_9;
    // 0x80066DF4: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_9:
    // 0x80066DF8: lw          $a0, 0xDC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XDC);
    // 0x80066DFC: jal         0x80019164
    // 0x80066E00: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_80019164(rdram, ctx);
        goto after_10;
    // 0x80066E00: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_10:
    // 0x80066E04: lw          $t6, 0x24($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X24);
    // 0x80066E08: nop

    // 0x80066E0C: and         $v0, $t6, $s0
    ctx->r2 = ctx->r14 & ctx->r16;
    // 0x80066E10: sw          $v0, 0x24($s3)
    MEM_W(0X24, ctx->r19) = ctx->r2;
    // 0x80066E14: andi        $t8, $v0, 0x400
    ctx->r24 = ctx->r2 & 0X400;
L_80066E18:
    // 0x80066E18: beq         $t8, $zero, L_80066E40
    if (ctx->r24 == 0) {
        // 0x80066E1C: andi        $t9, $v0, 0x100
        ctx->r25 = ctx->r2 & 0X100;
            goto L_80066E40;
    }
    // 0x80066E1C: andi        $t9, $v0, 0x100
    ctx->r25 = ctx->r2 & 0X100;
    // 0x80066E20: lw          $a0, 0xD8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XD8);
    // 0x80066E24: jal         0x8001913C
    // 0x80066E28: addiu       $a1, $s3, 0xC
    ctx->r5 = ADD32(ctx->r19, 0XC);
    func_8001913C(rdram, ctx);
        goto after_11;
    // 0x80066E28: addiu       $a1, $s3, 0xC
    ctx->r5 = ADD32(ctx->r19, 0XC);
    after_11:
    // 0x80066E2C: lw          $t7, 0x24($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X24);
    // 0x80066E30: nop

    // 0x80066E34: and         $v0, $t7, $s1
    ctx->r2 = ctx->r15 & ctx->r17;
    // 0x80066E38: sw          $v0, 0x24($s3)
    MEM_W(0X24, ctx->r19) = ctx->r2;
    // 0x80066E3C: andi        $t9, $v0, 0x100
    ctx->r25 = ctx->r2 & 0X100;
L_80066E40:
    // 0x80066E40: beq         $t9, $zero, L_80066E84
    if (ctx->r25 == 0) {
        // 0x80066E44: nop
    
            goto L_80066E84;
    }
    // 0x80066E44: nop

    // 0x80066E48: lwc1        $f6, 0x18($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0X18);
    // 0x80066E4C: lw          $a0, 0xD8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XD8);
    // 0x80066E50: swc1        $f6, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f6.u32l;
    // 0x80066E54: lwc1        $f8, 0x1C($s3)
    ctx->f8.u32l = MEM_W(ctx->r19, 0X1C);
    // 0x80066E58: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x80066E5C: swc1        $f8, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f8.u32l;
    // 0x80066E60: lwc1        $f10, 0x20($s3)
    ctx->f10.u32l = MEM_W(ctx->r19, 0X20);
    // 0x80066E64: nop

    // 0x80066E68: neg.s       $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = -ctx->f10.fl;
    // 0x80066E6C: jal         0x80019114
    // 0x80066E70: swc1        $f4, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f4.u32l;
    func_80019114(rdram, ctx);
        goto after_12;
    // 0x80066E70: swc1        $f4, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f4.u32l;
    after_12:
    // 0x80066E74: lw          $t8, 0x24($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X24);
    // 0x80066E78: nop

    // 0x80066E7C: and         $t7, $t8, $s2
    ctx->r15 = ctx->r24 & ctx->r18;
    // 0x80066E80: sw          $t7, 0x24($s3)
    MEM_W(0X24, ctx->r19) = ctx->r15;
L_80066E84:
    // 0x80066E84: jal         0x80007AB0
    // 0x80066E88: nop

    func_80007AB0(rdram, ctx);
        goto after_13;
    // 0x80066E88: nop

    after_13:
    // 0x80066E8C: b           L_80066DD0
    // 0x80066E90: lw          $v0, 0x24($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X24);
        goto L_80066DD0;
    // 0x80066E90: lw          $v0, 0x24($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X24);
L_80066E94:
    // 0x80066E94: lwc1        $f6, 0xC4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC4);
    // 0x80066E98: addiu       $s4, $zero, 0xA
    ctx->r20 = ADD32(0, 0XA);
    // 0x80066E9C: swc1        $f6, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f6.u32l;
L_80066EA0:
    // 0x80066EA0: lw          $t6, 0x24($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X24);
    // 0x80066EA4: addiu       $s5, $v0, 0x1
    ctx->r21 = ADD32(ctx->r2, 0X1);
    // 0x80066EA8: andi        $t9, $t6, 0x4000
    ctx->r25 = ctx->r14 & 0X4000;
    // 0x80066EAC: bne         $t9, $zero, L_80066F78
    if (ctx->r25 != 0) {
        // 0x80066EB0: lui         $at, 0x4110
        ctx->r1 = S32(0X4110 << 16);
            goto L_80066F78;
    }
    // 0x80066EB0: lui         $at, 0x4110
    ctx->r1 = S32(0X4110 << 16);
    // 0x80066EB4: mtc1        $s5, $f8
    ctx->f8.u32l = ctx->r21;
    // 0x80066EB8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80066EBC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80066EC0: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x80066EC4: subu        $s2, $t8, $v0
    ctx->r18 = SUB32(ctx->r24, ctx->r2);
    // 0x80066EC8: mul.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x80066ECC: jal         0x80028C00
    // 0x80066ED0: sll         $s6, $s2, 7
    ctx->r22 = S32(ctx->r18 << 7);
    func_80028C00(rdram, ctx);
        goto after_14;
    // 0x80066ED0: sll         $s6, $s2, 7
    ctx->r22 = S32(ctx->r18 << 7);
    after_14:
    // 0x80066ED4: lwc1        $f6, 0xAC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x80066ED8: lw          $a0, 0xD8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XD8);
    // 0x80066EDC: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x80066EE0: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x80066EE4: jal         0x80019114
    // 0x80066EE8: swc1        $f8, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f8.u32l;
    func_80019114(rdram, ctx);
        goto after_15;
    // 0x80066EE8: swc1        $f8, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f8.u32l;
    after_15:
    // 0x80066EEC: lw          $s0, 0xD8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XD8);
    // 0x80066EF0: bne         $s4, $s2, L_80066F04
    if (ctx->r20 != ctx->r18) {
        // 0x80066EF4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80066F04;
    }
    // 0x80066EF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80066EF8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80066EFC: jal         0x80018658
    // 0x80066F00: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80018658(rdram, ctx);
        goto after_16;
    // 0x80066F00: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_16:
L_80066F04:
    // 0x80066F04: div         $zero, $s6, $s4
    lo = S32(S64(S32(ctx->r22)) / S64(S32(ctx->r20))); hi = S32(S64(S32(ctx->r22)) % S64(S32(ctx->r20)));
    // 0x80066F08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80066F0C: bne         $s4, $zero, L_80066F18
    if (ctx->r20 != 0) {
        // 0x80066F10: nop
    
            goto L_80066F18;
    }
    // 0x80066F10: nop

    // 0x80066F14: break       7
    do_break(2147905300);
L_80066F18:
    // 0x80066F18: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80066F1C: bne         $s4, $at, L_80066F30
    if (ctx->r20 != ctx->r1) {
        // 0x80066F20: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80066F30;
    }
    // 0x80066F20: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80066F24: bne         $s6, $at, L_80066F30
    if (ctx->r22 != ctx->r1) {
        // 0x80066F28: nop
    
            goto L_80066F30;
    }
    // 0x80066F28: nop

    // 0x80066F2C: break       6
    do_break(2147905324);
L_80066F30:
    // 0x80066F30: mflo        $s1
    ctx->r17 = lo;
    // 0x80066F34: andi        $t7, $s1, 0xFF
    ctx->r15 = ctx->r17 & 0XFF;
    // 0x80066F38: or          $s1, $t7, $zero
    ctx->r17 = ctx->r15 | 0;
    // 0x80066F3C: jal         0x80018604
    // 0x80066F40: andi        $a1, $t7, 0xFF
    ctx->r5 = ctx->r15 & 0XFF;
    func_80018604(rdram, ctx);
        goto after_17;
    // 0x80066F40: andi        $a1, $t7, 0xFF
    ctx->r5 = ctx->r15 & 0XFF;
    after_17:
    // 0x80066F44: lw          $s0, 0xDC($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XDC);
    // 0x80066F48: bne         $s4, $s2, L_80066F5C
    if (ctx->r20 != ctx->r18) {
        // 0x80066F4C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80066F5C;
    }
    // 0x80066F4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80066F50: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80066F54: jal         0x80018658
    // 0x80066F58: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80018658(rdram, ctx);
        goto after_18;
    // 0x80066F58: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_18:
L_80066F5C:
    // 0x80066F5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80066F60: jal         0x80018604
    // 0x80066F64: andi        $a1, $s1, 0xFF
    ctx->r5 = ctx->r17 & 0XFF;
    func_80018604(rdram, ctx);
        goto after_19;
    // 0x80066F64: andi        $a1, $s1, 0xFF
    ctx->r5 = ctx->r17 & 0XFF;
    after_19:
    // 0x80066F68: jal         0x80007AB0
    // 0x80066F6C: nop

    func_80007AB0(rdram, ctx);
        goto after_20;
    // 0x80066F6C: nop

    after_20:
    // 0x80066F70: bne         $s5, $s4, L_80066EA0
    if (ctx->r21 != ctx->r20) {
        // 0x80066F74: or          $v0, $s5, $zero
        ctx->r2 = ctx->r21 | 0;
            goto L_80066EA0;
    }
    // 0x80066F74: or          $v0, $s5, $zero
    ctx->r2 = ctx->r21 | 0;
L_80066F78:
    // 0x80066F78: addiu       $s0, $sp, 0xD8
    ctx->r16 = ADD32(ctx->r29, 0XD8);
    // 0x80066F7C: addiu       $s2, $s0, 0x8
    ctx->r18 = ADD32(ctx->r16, 0X8);
L_80066F80:
    // 0x80066F80: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80066F84: jal         0x8001C568
    // 0x80066F88: nop

    func_8001C568(rdram, ctx);
        goto after_21;
    // 0x80066F88: nop

    after_21:
    // 0x80066F8C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80066F90: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x80066F94: bne         $at, $zero, L_80066F80
    if (ctx->r1 != 0) {
        // 0x80066F98: nop
    
            goto L_80066F80;
    }
    // 0x80066F98: nop

    // 0x80066F9C: jal         0x8005CD50
    // 0x80066FA0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_8005CD50(rdram, ctx);
        goto after_22;
    // 0x80066FA0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_22:
    // 0x80066FA4: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80066FA8: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x80066FAC: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x80066FB0: nop

    // 0x80066FB4: addiu       $t8, $t9, -0x1
    ctx->r24 = ADD32(ctx->r25, -0X1);
    // 0x80066FB8: jal         0x80007AE0
    // 0x80066FBC: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    func_80007AE0(rdram, ctx);
        goto after_23;
    // 0x80066FBC: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    after_23:
    // 0x80066FC0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80066FC4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80066FC8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80066FCC: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80066FD0: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80066FD4: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x80066FD8: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x80066FDC: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x80066FE0: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x80066FE4: jr          $ra
    // 0x80066FE8: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
    return;
    // 0x80066FE8: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
;}
RECOMP_FUNC void func_80066FEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80066FEC: addiu       $sp, $sp, -0xF0
    ctx->r29 = ADD32(ctx->r29, -0XF0);
    // 0x80066FF0: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80066FF4: sw          $s7, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r23;
    // 0x80066FF8: sw          $s6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r22;
    // 0x80066FFC: sw          $s5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r21;
    // 0x80067000: sw          $s4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r20;
    // 0x80067004: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x80067008: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x8006700C: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x80067010: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x80067014: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80067018: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x8006701C: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80067020: jal         0x80007774
    // 0x80067024: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x80067024: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x80067028: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x8006702C: addiu       $t7, $t7, 0x2478
    ctx->r15 = ADD32(ctx->r15, 0X2478);
    // 0x80067030: lw          $s7, 0x1C($v0)
    ctx->r23 = MEM_W(ctx->r2, 0X1C);
    // 0x80067034: addiu       $t9, $t7, 0x24
    ctx->r25 = ADD32(ctx->r15, 0X24);
    // 0x80067038: addiu       $t6, $sp, 0x8C
    ctx->r14 = ADD32(ctx->r29, 0X8C);
L_8006703C:
    // 0x8006703C: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x80067040: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x80067044: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x80067048: lw          $at, -0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X8);
    // 0x8006704C: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x80067050: sw          $at, -0x8($t6)
    MEM_W(-0X8, ctx->r14) = ctx->r1;
    // 0x80067054: lw          $at, -0x4($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X4);
    // 0x80067058: bne         $t7, $t9, L_8006703C
    if (ctx->r15 != ctx->r25) {
        // 0x8006705C: sw          $at, -0x4($t6)
        MEM_W(-0X4, ctx->r14) = ctx->r1;
            goto L_8006703C;
    }
    // 0x8006705C: sw          $at, -0x4($t6)
    MEM_W(-0X4, ctx->r14) = ctx->r1;
    // 0x80067060: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x80067064: addiu       $t9, $t9, 0x249C
    ctx->r25 = ADD32(ctx->r25, 0X249C);
    // 0x80067068: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x8006706C: addiu       $t8, $sp, 0x80
    ctx->r24 = ADD32(ctx->r29, 0X80);
    // 0x80067070: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x80067074: lw          $at, 0x8($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X8);
    // 0x80067078: lw          $t6, 0x4($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X4);
    // 0x8006707C: sw          $at, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r1;
    // 0x80067080: lui         $at, 0x4014
    ctx->r1 = S32(0X4014 << 16);
    // 0x80067084: mtc1        $at, $f23
    ctx->f_odd[(23 - 1) * 2] = ctx->r1;
    // 0x80067088: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x8006708C: mtc1        $at, $f21
    ctx->f_odd[(21 - 1) * 2] = ctx->r1;
    // 0x80067090: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x80067094: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x80067098: addiu       $s3, $sp, 0xDC
    ctx->r19 = ADD32(ctx->r29, 0XDC);
    // 0x8006709C: addiu       $s0, $sp, 0xB0
    ctx->r16 = ADD32(ctx->r29, 0XB0);
    // 0x800670A0: addiu       $s2, $sp, 0x8C
    ctx->r18 = ADD32(ctx->r29, 0X8C);
    // 0x800670A4: addiu       $s4, $sp, 0xB0
    ctx->r20 = ADD32(ctx->r29, 0XB0);
    // 0x800670A8: sw          $t6, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r14;
L_800670AC:
    // 0x800670AC: addiu       $a0, $zero, 0x709
    ctx->r4 = ADD32(0, 0X709);
    // 0x800670B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800670B4: jal         0x8001D138
    // 0x800670B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x800670B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800670BC: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x800670C0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800670C4: jal         0x80019164
    // 0x800670C8: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x800670C8: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    after_2:
    // 0x800670CC: sw          $s1, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r17;
    // 0x800670D0: lwc1        $f4, 0x0($s7)
    ctx->f4.u32l = MEM_W(ctx->r23, 0X0);
    // 0x800670D4: nop

    // 0x800670D8: swc1        $f4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f4.u32l;
    // 0x800670DC: lwc1        $f6, 0x4($s7)
    ctx->f6.u32l = MEM_W(ctx->r23, 0X4);
    // 0x800670E0: nop

    // 0x800670E4: swc1        $f6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f6.u32l;
    // 0x800670E8: lwc1        $f8, 0x8($s7)
    ctx->f8.u32l = MEM_W(ctx->r23, 0X8);
    // 0x800670EC: jal         0x80027F1C
    // 0x800670F0: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
    func_80027F1C(rdram, ctx);
        goto after_3;
    // 0x800670F0: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
    after_3:
    // 0x800670F4: mul.d       $f10, $f0, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f20.d); 
    ctx->f10.d = MUL_D(ctx->f0.d, ctx->f20.d);
    // 0x800670F8: sub.d       $f4, $f10, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f22.d); 
    ctx->f4.d = ctx->f10.d - ctx->f22.d;
    // 0x800670FC: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x80067100: jal         0x80027F1C
    // 0x80067104: swc1        $f6, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->f6.u32l;
    func_80027F1C(rdram, ctx);
        goto after_4;
    // 0x80067104: swc1        $f6, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->f6.u32l;
    after_4:
    // 0x80067108: mul.d       $f8, $f0, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f20.d); 
    ctx->f8.d = MUL_D(ctx->f0.d, ctx->f20.d);
    // 0x8006710C: addiu       $s2, $s2, 0xC
    ctx->r18 = ADD32(ctx->r18, 0XC);
    // 0x80067110: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x80067114: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x80067118: sub.d       $f10, $f8, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f22.d); 
    ctx->f10.d = ctx->f8.d - ctx->f22.d;
    // 0x8006711C: cvt.s.d     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f4.fl = CVT_S_D(ctx->f10.d);
    // 0x80067120: bne         $s2, $s4, L_800670AC
    if (ctx->r18 != ctx->r20) {
        // 0x80067124: swc1        $f4, -0x4($s2)
        MEM_W(-0X4, ctx->r18) = ctx->f4.u32l;
            goto L_800670AC;
    }
    // 0x80067124: swc1        $f4, -0x4($s2)
    MEM_W(-0X4, ctx->r18) = ctx->f4.u32l;
    // 0x80067128: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x8006712C: addiu       $s6, $zero, 0x3
    ctx->r22 = ADD32(0, 0X3);
    // 0x80067130: addiu       $s5, $sp, 0xDC
    ctx->r21 = ADD32(ctx->r29, 0XDC);
L_80067134:
    // 0x80067134: lw          $t7, 0x24($s7)
    ctx->r15 = MEM_W(ctx->r23, 0X24);
    // 0x80067138: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8006713C: andi        $t8, $t7, 0x4000
    ctx->r24 = ctx->r15 & 0X4000;
    // 0x80067140: bne         $t8, $zero, L_80067228
    if (ctx->r24 != 0) {
        // 0x80067144: sll         $t9, $s1, 1
        ctx->r25 = S32(ctx->r17 << 1);
            goto L_80067228;
    }
    // 0x80067144: sll         $t9, $s1, 1
    ctx->r25 = S32(ctx->r17 << 1);
L_80067148:
    // 0x80067148: addiu       $t6, $t9, 0x14
    ctx->r14 = ADD32(ctx->r25, 0X14);
    // 0x8006714C: slt         $at, $s4, $t6
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80067150: beq         $at, $zero, L_800671D0
    if (ctx->r1 == 0) {
        // 0x80067154: sll         $t7, $s1, 2
        ctx->r15 = S32(ctx->r17 << 2);
            goto L_800671D0;
    }
    // 0x80067154: sll         $t7, $s1, 2
    ctx->r15 = S32(ctx->r17 << 2);
    // 0x80067158: sll         $v0, $s1, 2
    ctx->r2 = S32(ctx->r17 << 2);
    // 0x8006715C: sll         $t6, $s4, 1
    ctx->r14 = S32(ctx->r20 << 1);
    // 0x80067160: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x80067164: subu        $v0, $v0, $s1
    ctx->r2 = SUB32(ctx->r2, ctx->r17);
    // 0x80067168: addu        $s3, $s5, $t7
    ctx->r19 = ADD32(ctx->r21, ctx->r15);
    // 0x8006716C: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x80067170: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80067174: addiu       $t8, $sp, 0xB0
    ctx->r24 = ADD32(ctx->r29, 0XB0);
    // 0x80067178: addiu       $t9, $sp, 0x8C
    ctx->r25 = ADD32(ctx->r29, 0X8C);
    // 0x8006717C: addu        $s2, $v0, $t9
    ctx->r18 = ADD32(ctx->r2, ctx->r25);
    // 0x80067180: addu        $s0, $v0, $t8
    ctx->r16 = ADD32(ctx->r2, ctx->r24);
    // 0x80067184: andi        $a1, $s4, 0x1
    ctx->r5 = ctx->r20 & 0X1;
    // 0x80067188: jal         0x800191E8
    // 0x8006718C: cvt.s.w     $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    ctx->f20.fl = CVT_S_W(ctx->f6.u32l);
    func_800191E8(rdram, ctx);
        goto after_5;
    // 0x8006718C: cvt.s.w     $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    ctx->f20.fl = CVT_S_W(ctx->f6.u32l);
    after_5:
    // 0x80067190: lwc1        $f8, 0x0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X0);
    // 0x80067194: lwc1        $f10, 0x0($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X0);
    // 0x80067198: lwc1        $f6, 0x4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4);
    // 0x8006719C: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x800671A0: lwc1        $f8, 0x4($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X4);
    // 0x800671A4: swc1        $f4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f4.u32l;
    // 0x800671A8: sub.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f20.fl;
    // 0x800671AC: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x800671B0: add.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x800671B4: lwc1        $f6, 0x8($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X8);
    // 0x800671B8: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x800671BC: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x800671C0: swc1        $f4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f4.u32l;
    // 0x800671C4: swc1        $f10, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f10.u32l;
    // 0x800671C8: jal         0x80019164
    // 0x800671CC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80019164(rdram, ctx);
        goto after_6;
    // 0x800671CC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_6:
L_800671D0:
    // 0x800671D0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x800671D4: slti        $at, $s1, 0x3
    ctx->r1 = SIGNED(ctx->r17) < 0X3 ? 1 : 0;
    // 0x800671D8: bne         $at, $zero, L_80067148
    if (ctx->r1 != 0) {
        // 0x800671DC: sll         $t9, $s1, 1
        ctx->r25 = S32(ctx->r17 << 1);
            goto L_80067148;
    }
    // 0x800671DC: sll         $t9, $s1, 1
    ctx->r25 = S32(ctx->r17 << 1);
    // 0x800671E0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x800671E4: sll         $t7, $s1, 1
    ctx->r15 = S32(ctx->r17 << 1);
L_800671E8:
    // 0x800671E8: addiu       $t8, $t7, 0x14
    ctx->r24 = ADD32(ctx->r15, 0X14);
    // 0x800671EC: bne         $s4, $t8, L_80067204
    if (ctx->r20 != ctx->r24) {
        // 0x800671F0: sll         $t9, $s1, 2
        ctx->r25 = S32(ctx->r17 << 2);
            goto L_80067204;
    }
    // 0x800671F0: sll         $t9, $s1, 2
    ctx->r25 = S32(ctx->r17 << 2);
    // 0x800671F4: addu        $t6, $s5, $t9
    ctx->r14 = ADD32(ctx->r21, ctx->r25);
    // 0x800671F8: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    // 0x800671FC: jal         0x800191C0
    // 0x80067200: nop

    func_800191C0(rdram, ctx);
        goto after_7;
    // 0x80067200: nop

    after_7:
L_80067204:
    // 0x80067204: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80067208: bne         $s1, $s6, L_800671E8
    if (ctx->r17 != ctx->r22) {
        // 0x8006720C: sll         $t7, $s1, 1
        ctx->r15 = S32(ctx->r17 << 1);
            goto L_800671E8;
    }
    // 0x8006720C: sll         $t7, $s1, 1
    ctx->r15 = S32(ctx->r17 << 1);
    // 0x80067210: jal         0x80007AB0
    // 0x80067214: nop

    func_80007AB0(rdram, ctx);
        goto after_8;
    // 0x80067214: nop

    after_8:
    // 0x80067218: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x8006721C: slti        $at, $s4, 0x32
    ctx->r1 = SIGNED(ctx->r20) < 0X32 ? 1 : 0;
    // 0x80067220: bne         $at, $zero, L_80067134
    if (ctx->r1 != 0) {
        // 0x80067224: nop
    
            goto L_80067134;
    }
    // 0x80067224: nop

L_80067228:
    // 0x80067228: addiu       $s0, $sp, 0xDC
    ctx->r16 = ADD32(ctx->r29, 0XDC);
    // 0x8006722C: addiu       $s2, $s0, 0xC
    ctx->r18 = ADD32(ctx->r16, 0XC);
L_80067230:
    // 0x80067230: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80067234: jal         0x8001C568
    // 0x80067238: nop

    func_8001C568(rdram, ctx);
        goto after_9;
    // 0x80067238: nop

    after_9:
    // 0x8006723C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80067240: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x80067244: bne         $at, $zero, L_80067230
    if (ctx->r1 != 0) {
        // 0x80067248: nop
    
            goto L_80067230;
    }
    // 0x80067248: nop

    // 0x8006724C: jal         0x8005CD50
    // 0x80067250: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    func_8005CD50(rdram, ctx);
        goto after_10;
    // 0x80067250: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    after_10:
    // 0x80067254: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80067258: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x8006725C: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x80067260: nop

    // 0x80067264: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80067268: jal         0x80007AE0
    // 0x8006726C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    func_80007AE0(rdram, ctx);
        goto after_11;
    // 0x8006726C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    after_11:
    // 0x80067270: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80067274: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x80067278: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8006727C: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80067280: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80067284: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x80067288: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x8006728C: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x80067290: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x80067294: lw          $s4, 0x34($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X34);
    // 0x80067298: lw          $s5, 0x38($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X38);
    // 0x8006729C: lw          $s6, 0x3C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X3C);
    // 0x800672A0: lw          $s7, 0x40($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X40);
    // 0x800672A4: jr          $ra
    // 0x800672A8: addiu       $sp, $sp, 0xF0
    ctx->r29 = ADD32(ctx->r29, 0XF0);
    return;
    // 0x800672A8: addiu       $sp, $sp, 0xF0
    ctx->r29 = ADD32(ctx->r29, 0XF0);
;}
RECOMP_FUNC void func_800672AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800672AC: addiu       $sp, $sp, -0xF0
    ctx->r29 = ADD32(ctx->r29, -0XF0);
    // 0x800672B0: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x800672B4: sw          $s7, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r23;
    // 0x800672B8: sw          $s6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r22;
    // 0x800672BC: sw          $s5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r21;
    // 0x800672C0: sw          $s4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r20;
    // 0x800672C4: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x800672C8: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x800672CC: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x800672D0: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x800672D4: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x800672D8: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x800672DC: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800672E0: jal         0x80007774
    // 0x800672E4: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x800672E4: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x800672E8: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x800672EC: addiu       $t7, $t7, 0x24A8
    ctx->r15 = ADD32(ctx->r15, 0X24A8);
    // 0x800672F0: lw          $s7, 0x1C($v0)
    ctx->r23 = MEM_W(ctx->r2, 0X1C);
    // 0x800672F4: addiu       $t9, $t7, 0x24
    ctx->r25 = ADD32(ctx->r15, 0X24);
    // 0x800672F8: addiu       $t6, $sp, 0x8C
    ctx->r14 = ADD32(ctx->r29, 0X8C);
L_800672FC:
    // 0x800672FC: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x80067300: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x80067304: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x80067308: lw          $at, -0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X8);
    // 0x8006730C: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x80067310: sw          $at, -0x8($t6)
    MEM_W(-0X8, ctx->r14) = ctx->r1;
    // 0x80067314: lw          $at, -0x4($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X4);
    // 0x80067318: bne         $t7, $t9, L_800672FC
    if (ctx->r15 != ctx->r25) {
        // 0x8006731C: sw          $at, -0x4($t6)
        MEM_W(-0X4, ctx->r14) = ctx->r1;
            goto L_800672FC;
    }
    // 0x8006731C: sw          $at, -0x4($t6)
    MEM_W(-0X4, ctx->r14) = ctx->r1;
    // 0x80067320: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x80067324: addiu       $t9, $t9, 0x24CC
    ctx->r25 = ADD32(ctx->r25, 0X24CC);
    // 0x80067328: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x8006732C: addiu       $t8, $sp, 0x80
    ctx->r24 = ADD32(ctx->r29, 0X80);
    // 0x80067330: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x80067334: lw          $at, 0x8($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X8);
    // 0x80067338: lw          $t6, 0x4($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X4);
    // 0x8006733C: sw          $at, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r1;
    // 0x80067340: lui         $at, 0x4014
    ctx->r1 = S32(0X4014 << 16);
    // 0x80067344: mtc1        $at, $f23
    ctx->f_odd[(23 - 1) * 2] = ctx->r1;
    // 0x80067348: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x8006734C: mtc1        $at, $f21
    ctx->f_odd[(21 - 1) * 2] = ctx->r1;
    // 0x80067350: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x80067354: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x80067358: addiu       $s3, $sp, 0xDC
    ctx->r19 = ADD32(ctx->r29, 0XDC);
    // 0x8006735C: addiu       $s0, $sp, 0xB0
    ctx->r16 = ADD32(ctx->r29, 0XB0);
    // 0x80067360: addiu       $s2, $sp, 0x8C
    ctx->r18 = ADD32(ctx->r29, 0X8C);
    // 0x80067364: addiu       $s4, $sp, 0xB0
    ctx->r20 = ADD32(ctx->r29, 0XB0);
    // 0x80067368: sw          $t6, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r14;
L_8006736C:
    // 0x8006736C: addiu       $a0, $zero, 0x70A
    ctx->r4 = ADD32(0, 0X70A);
    // 0x80067370: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80067374: jal         0x8001D138
    // 0x80067378: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x80067378: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8006737C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80067380: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80067384: jal         0x80019164
    // 0x80067388: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x80067388: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    after_2:
    // 0x8006738C: sw          $s1, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r17;
    // 0x80067390: lwc1        $f4, 0x0($s7)
    ctx->f4.u32l = MEM_W(ctx->r23, 0X0);
    // 0x80067394: nop

    // 0x80067398: swc1        $f4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f4.u32l;
    // 0x8006739C: lwc1        $f6, 0x4($s7)
    ctx->f6.u32l = MEM_W(ctx->r23, 0X4);
    // 0x800673A0: nop

    // 0x800673A4: swc1        $f6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f6.u32l;
    // 0x800673A8: lwc1        $f8, 0x8($s7)
    ctx->f8.u32l = MEM_W(ctx->r23, 0X8);
    // 0x800673AC: jal         0x80027F1C
    // 0x800673B0: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
    func_80027F1C(rdram, ctx);
        goto after_3;
    // 0x800673B0: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
    after_3:
    // 0x800673B4: mul.d       $f10, $f0, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f20.d); 
    ctx->f10.d = MUL_D(ctx->f0.d, ctx->f20.d);
    // 0x800673B8: sub.d       $f4, $f10, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f22.d); 
    ctx->f4.d = ctx->f10.d - ctx->f22.d;
    // 0x800673BC: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x800673C0: jal         0x80027F1C
    // 0x800673C4: swc1        $f6, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->f6.u32l;
    func_80027F1C(rdram, ctx);
        goto after_4;
    // 0x800673C4: swc1        $f6, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->f6.u32l;
    after_4:
    // 0x800673C8: mul.d       $f8, $f0, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f20.d); 
    ctx->f8.d = MUL_D(ctx->f0.d, ctx->f20.d);
    // 0x800673CC: addiu       $s2, $s2, 0xC
    ctx->r18 = ADD32(ctx->r18, 0XC);
    // 0x800673D0: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x800673D4: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x800673D8: sub.d       $f10, $f8, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f22.d); 
    ctx->f10.d = ctx->f8.d - ctx->f22.d;
    // 0x800673DC: cvt.s.d     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f4.fl = CVT_S_D(ctx->f10.d);
    // 0x800673E0: bne         $s2, $s4, L_8006736C
    if (ctx->r18 != ctx->r20) {
        // 0x800673E4: swc1        $f4, -0x4($s2)
        MEM_W(-0X4, ctx->r18) = ctx->f4.u32l;
            goto L_8006736C;
    }
    // 0x800673E4: swc1        $f4, -0x4($s2)
    MEM_W(-0X4, ctx->r18) = ctx->f4.u32l;
    // 0x800673E8: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x800673EC: addiu       $s6, $zero, 0x3
    ctx->r22 = ADD32(0, 0X3);
    // 0x800673F0: addiu       $s5, $sp, 0xDC
    ctx->r21 = ADD32(ctx->r29, 0XDC);
L_800673F4:
    // 0x800673F4: lw          $t7, 0x24($s7)
    ctx->r15 = MEM_W(ctx->r23, 0X24);
    // 0x800673F8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x800673FC: andi        $t8, $t7, 0x4000
    ctx->r24 = ctx->r15 & 0X4000;
    // 0x80067400: bne         $t8, $zero, L_800674E8
    if (ctx->r24 != 0) {
        // 0x80067404: sll         $t9, $s1, 1
        ctx->r25 = S32(ctx->r17 << 1);
            goto L_800674E8;
    }
    // 0x80067404: sll         $t9, $s1, 1
    ctx->r25 = S32(ctx->r17 << 1);
L_80067408:
    // 0x80067408: addiu       $t6, $t9, 0x14
    ctx->r14 = ADD32(ctx->r25, 0X14);
    // 0x8006740C: slt         $at, $s4, $t6
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80067410: beq         $at, $zero, L_80067490
    if (ctx->r1 == 0) {
        // 0x80067414: sll         $t7, $s1, 2
        ctx->r15 = S32(ctx->r17 << 2);
            goto L_80067490;
    }
    // 0x80067414: sll         $t7, $s1, 2
    ctx->r15 = S32(ctx->r17 << 2);
    // 0x80067418: sll         $v0, $s1, 2
    ctx->r2 = S32(ctx->r17 << 2);
    // 0x8006741C: sll         $t6, $s4, 1
    ctx->r14 = S32(ctx->r20 << 1);
    // 0x80067420: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x80067424: subu        $v0, $v0, $s1
    ctx->r2 = SUB32(ctx->r2, ctx->r17);
    // 0x80067428: addu        $s3, $s5, $t7
    ctx->r19 = ADD32(ctx->r21, ctx->r15);
    // 0x8006742C: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x80067430: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80067434: addiu       $t8, $sp, 0xB0
    ctx->r24 = ADD32(ctx->r29, 0XB0);
    // 0x80067438: addiu       $t9, $sp, 0x8C
    ctx->r25 = ADD32(ctx->r29, 0X8C);
    // 0x8006743C: addu        $s2, $v0, $t9
    ctx->r18 = ADD32(ctx->r2, ctx->r25);
    // 0x80067440: addu        $s0, $v0, $t8
    ctx->r16 = ADD32(ctx->r2, ctx->r24);
    // 0x80067444: andi        $a1, $s4, 0x1
    ctx->r5 = ctx->r20 & 0X1;
    // 0x80067448: jal         0x800191E8
    // 0x8006744C: cvt.s.w     $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    ctx->f20.fl = CVT_S_W(ctx->f6.u32l);
    func_800191E8(rdram, ctx);
        goto after_5;
    // 0x8006744C: cvt.s.w     $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    ctx->f20.fl = CVT_S_W(ctx->f6.u32l);
    after_5:
    // 0x80067450: lwc1        $f8, 0x0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X0);
    // 0x80067454: lwc1        $f10, 0x0($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X0);
    // 0x80067458: lwc1        $f6, 0x4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4);
    // 0x8006745C: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80067460: lwc1        $f8, 0x4($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X4);
    // 0x80067464: swc1        $f4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f4.u32l;
    // 0x80067468: sub.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f20.fl;
    // 0x8006746C: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x80067470: add.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x80067474: lwc1        $f6, 0x8($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X8);
    // 0x80067478: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x8006747C: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x80067480: swc1        $f4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f4.u32l;
    // 0x80067484: swc1        $f10, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f10.u32l;
    // 0x80067488: jal         0x80019164
    // 0x8006748C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80019164(rdram, ctx);
        goto after_6;
    // 0x8006748C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_6:
L_80067490:
    // 0x80067490: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80067494: slti        $at, $s1, 0x3
    ctx->r1 = SIGNED(ctx->r17) < 0X3 ? 1 : 0;
    // 0x80067498: bne         $at, $zero, L_80067408
    if (ctx->r1 != 0) {
        // 0x8006749C: sll         $t9, $s1, 1
        ctx->r25 = S32(ctx->r17 << 1);
            goto L_80067408;
    }
    // 0x8006749C: sll         $t9, $s1, 1
    ctx->r25 = S32(ctx->r17 << 1);
    // 0x800674A0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x800674A4: sll         $t7, $s1, 1
    ctx->r15 = S32(ctx->r17 << 1);
L_800674A8:
    // 0x800674A8: addiu       $t8, $t7, 0x14
    ctx->r24 = ADD32(ctx->r15, 0X14);
    // 0x800674AC: bne         $s4, $t8, L_800674C4
    if (ctx->r20 != ctx->r24) {
        // 0x800674B0: sll         $t9, $s1, 2
        ctx->r25 = S32(ctx->r17 << 2);
            goto L_800674C4;
    }
    // 0x800674B0: sll         $t9, $s1, 2
    ctx->r25 = S32(ctx->r17 << 2);
    // 0x800674B4: addu        $t6, $s5, $t9
    ctx->r14 = ADD32(ctx->r21, ctx->r25);
    // 0x800674B8: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    // 0x800674BC: jal         0x800191C0
    // 0x800674C0: nop

    func_800191C0(rdram, ctx);
        goto after_7;
    // 0x800674C0: nop

    after_7:
L_800674C4:
    // 0x800674C4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x800674C8: bne         $s1, $s6, L_800674A8
    if (ctx->r17 != ctx->r22) {
        // 0x800674CC: sll         $t7, $s1, 1
        ctx->r15 = S32(ctx->r17 << 1);
            goto L_800674A8;
    }
    // 0x800674CC: sll         $t7, $s1, 1
    ctx->r15 = S32(ctx->r17 << 1);
    // 0x800674D0: jal         0x80007AB0
    // 0x800674D4: nop

    func_80007AB0(rdram, ctx);
        goto after_8;
    // 0x800674D4: nop

    after_8:
    // 0x800674D8: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x800674DC: slti        $at, $s4, 0x32
    ctx->r1 = SIGNED(ctx->r20) < 0X32 ? 1 : 0;
    // 0x800674E0: bne         $at, $zero, L_800673F4
    if (ctx->r1 != 0) {
        // 0x800674E4: nop
    
            goto L_800673F4;
    }
    // 0x800674E4: nop

L_800674E8:
    // 0x800674E8: addiu       $s0, $sp, 0xDC
    ctx->r16 = ADD32(ctx->r29, 0XDC);
    // 0x800674EC: addiu       $s2, $s0, 0xC
    ctx->r18 = ADD32(ctx->r16, 0XC);
L_800674F0:
    // 0x800674F0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x800674F4: jal         0x8001C568
    // 0x800674F8: nop

    func_8001C568(rdram, ctx);
        goto after_9;
    // 0x800674F8: nop

    after_9:
    // 0x800674FC: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80067500: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x80067504: bne         $at, $zero, L_800674F0
    if (ctx->r1 != 0) {
        // 0x80067508: nop
    
            goto L_800674F0;
    }
    // 0x80067508: nop

    // 0x8006750C: jal         0x8005CD50
    // 0x80067510: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    func_8005CD50(rdram, ctx);
        goto after_10;
    // 0x80067510: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    after_10:
    // 0x80067514: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80067518: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x8006751C: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x80067520: nop

    // 0x80067524: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80067528: jal         0x80007AE0
    // 0x8006752C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    func_80007AE0(rdram, ctx);
        goto after_11;
    // 0x8006752C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    after_11:
    // 0x80067530: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80067534: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x80067538: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8006753C: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80067540: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80067544: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x80067548: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x8006754C: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x80067550: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x80067554: lw          $s4, 0x34($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X34);
    // 0x80067558: lw          $s5, 0x38($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X38);
    // 0x8006755C: lw          $s6, 0x3C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X3C);
    // 0x80067560: lw          $s7, 0x40($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X40);
    // 0x80067564: jr          $ra
    // 0x80067568: addiu       $sp, $sp, 0xF0
    ctx->r29 = ADD32(ctx->r29, 0XF0);
    return;
    // 0x80067568: addiu       $sp, $sp, 0xF0
    ctx->r29 = ADD32(ctx->r29, 0XF0);
;}
RECOMP_FUNC void func_8006756C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006756C: addiu       $sp, $sp, -0xF0
    ctx->r29 = ADD32(ctx->r29, -0XF0);
    // 0x80067570: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80067574: sw          $s7, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r23;
    // 0x80067578: sw          $s6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r22;
    // 0x8006757C: sw          $s5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r21;
    // 0x80067580: sw          $s4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r20;
    // 0x80067584: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x80067588: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x8006758C: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x80067590: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x80067594: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80067598: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x8006759C: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800675A0: jal         0x80007774
    // 0x800675A4: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x800675A4: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x800675A8: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x800675AC: addiu       $t7, $t7, 0x24D8
    ctx->r15 = ADD32(ctx->r15, 0X24D8);
    // 0x800675B0: lw          $s7, 0x1C($v0)
    ctx->r23 = MEM_W(ctx->r2, 0X1C);
    // 0x800675B4: addiu       $t9, $t7, 0x24
    ctx->r25 = ADD32(ctx->r15, 0X24);
    // 0x800675B8: addiu       $t6, $sp, 0x8C
    ctx->r14 = ADD32(ctx->r29, 0X8C);
L_800675BC:
    // 0x800675BC: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x800675C0: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x800675C4: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x800675C8: lw          $at, -0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X8);
    // 0x800675CC: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x800675D0: sw          $at, -0x8($t6)
    MEM_W(-0X8, ctx->r14) = ctx->r1;
    // 0x800675D4: lw          $at, -0x4($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X4);
    // 0x800675D8: bne         $t7, $t9, L_800675BC
    if (ctx->r15 != ctx->r25) {
        // 0x800675DC: sw          $at, -0x4($t6)
        MEM_W(-0X4, ctx->r14) = ctx->r1;
            goto L_800675BC;
    }
    // 0x800675DC: sw          $at, -0x4($t6)
    MEM_W(-0X4, ctx->r14) = ctx->r1;
    // 0x800675E0: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x800675E4: addiu       $t9, $t9, 0x24FC
    ctx->r25 = ADD32(ctx->r25, 0X24FC);
    // 0x800675E8: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x800675EC: addiu       $t8, $sp, 0x80
    ctx->r24 = ADD32(ctx->r29, 0X80);
    // 0x800675F0: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x800675F4: lw          $at, 0x8($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X8);
    // 0x800675F8: lw          $t6, 0x4($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X4);
    // 0x800675FC: sw          $at, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r1;
    // 0x80067600: lui         $at, 0x4014
    ctx->r1 = S32(0X4014 << 16);
    // 0x80067604: mtc1        $at, $f23
    ctx->f_odd[(23 - 1) * 2] = ctx->r1;
    // 0x80067608: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x8006760C: mtc1        $at, $f21
    ctx->f_odd[(21 - 1) * 2] = ctx->r1;
    // 0x80067610: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x80067614: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x80067618: addiu       $s3, $sp, 0xDC
    ctx->r19 = ADD32(ctx->r29, 0XDC);
    // 0x8006761C: addiu       $s0, $sp, 0xB0
    ctx->r16 = ADD32(ctx->r29, 0XB0);
    // 0x80067620: addiu       $s2, $sp, 0x8C
    ctx->r18 = ADD32(ctx->r29, 0X8C);
    // 0x80067624: addiu       $s4, $sp, 0xB0
    ctx->r20 = ADD32(ctx->r29, 0XB0);
    // 0x80067628: sw          $t6, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r14;
L_8006762C:
    // 0x8006762C: addiu       $a0, $zero, 0x70B
    ctx->r4 = ADD32(0, 0X70B);
    // 0x80067630: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80067634: jal         0x8001D138
    // 0x80067638: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x80067638: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8006763C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80067640: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80067644: jal         0x80019164
    // 0x80067648: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x80067648: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    after_2:
    // 0x8006764C: sw          $s1, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r17;
    // 0x80067650: lwc1        $f4, 0x0($s7)
    ctx->f4.u32l = MEM_W(ctx->r23, 0X0);
    // 0x80067654: nop

    // 0x80067658: swc1        $f4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f4.u32l;
    // 0x8006765C: lwc1        $f6, 0x4($s7)
    ctx->f6.u32l = MEM_W(ctx->r23, 0X4);
    // 0x80067660: nop

    // 0x80067664: swc1        $f6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f6.u32l;
    // 0x80067668: lwc1        $f8, 0x8($s7)
    ctx->f8.u32l = MEM_W(ctx->r23, 0X8);
    // 0x8006766C: jal         0x80027F1C
    // 0x80067670: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
    func_80027F1C(rdram, ctx);
        goto after_3;
    // 0x80067670: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
    after_3:
    // 0x80067674: mul.d       $f10, $f0, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f20.d); 
    ctx->f10.d = MUL_D(ctx->f0.d, ctx->f20.d);
    // 0x80067678: sub.d       $f4, $f10, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f22.d); 
    ctx->f4.d = ctx->f10.d - ctx->f22.d;
    // 0x8006767C: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x80067680: jal         0x80027F1C
    // 0x80067684: swc1        $f6, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->f6.u32l;
    func_80027F1C(rdram, ctx);
        goto after_4;
    // 0x80067684: swc1        $f6, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->f6.u32l;
    after_4:
    // 0x80067688: mul.d       $f8, $f0, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f20.d); 
    ctx->f8.d = MUL_D(ctx->f0.d, ctx->f20.d);
    // 0x8006768C: addiu       $s2, $s2, 0xC
    ctx->r18 = ADD32(ctx->r18, 0XC);
    // 0x80067690: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x80067694: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x80067698: sub.d       $f10, $f8, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f22.d); 
    ctx->f10.d = ctx->f8.d - ctx->f22.d;
    // 0x8006769C: cvt.s.d     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f4.fl = CVT_S_D(ctx->f10.d);
    // 0x800676A0: bne         $s2, $s4, L_8006762C
    if (ctx->r18 != ctx->r20) {
        // 0x800676A4: swc1        $f4, -0x4($s2)
        MEM_W(-0X4, ctx->r18) = ctx->f4.u32l;
            goto L_8006762C;
    }
    // 0x800676A4: swc1        $f4, -0x4($s2)
    MEM_W(-0X4, ctx->r18) = ctx->f4.u32l;
    // 0x800676A8: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x800676AC: addiu       $s6, $zero, 0x3
    ctx->r22 = ADD32(0, 0X3);
    // 0x800676B0: addiu       $s5, $sp, 0xDC
    ctx->r21 = ADD32(ctx->r29, 0XDC);
L_800676B4:
    // 0x800676B4: lw          $t7, 0x24($s7)
    ctx->r15 = MEM_W(ctx->r23, 0X24);
    // 0x800676B8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x800676BC: andi        $t8, $t7, 0x4000
    ctx->r24 = ctx->r15 & 0X4000;
    // 0x800676C0: bne         $t8, $zero, L_800677A8
    if (ctx->r24 != 0) {
        // 0x800676C4: sll         $t9, $s1, 1
        ctx->r25 = S32(ctx->r17 << 1);
            goto L_800677A8;
    }
    // 0x800676C4: sll         $t9, $s1, 1
    ctx->r25 = S32(ctx->r17 << 1);
L_800676C8:
    // 0x800676C8: addiu       $t6, $t9, 0x14
    ctx->r14 = ADD32(ctx->r25, 0X14);
    // 0x800676CC: slt         $at, $s4, $t6
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x800676D0: beq         $at, $zero, L_80067750
    if (ctx->r1 == 0) {
        // 0x800676D4: sll         $t7, $s1, 2
        ctx->r15 = S32(ctx->r17 << 2);
            goto L_80067750;
    }
    // 0x800676D4: sll         $t7, $s1, 2
    ctx->r15 = S32(ctx->r17 << 2);
    // 0x800676D8: sll         $v0, $s1, 2
    ctx->r2 = S32(ctx->r17 << 2);
    // 0x800676DC: sll         $t6, $s4, 1
    ctx->r14 = S32(ctx->r20 << 1);
    // 0x800676E0: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x800676E4: subu        $v0, $v0, $s1
    ctx->r2 = SUB32(ctx->r2, ctx->r17);
    // 0x800676E8: addu        $s3, $s5, $t7
    ctx->r19 = ADD32(ctx->r21, ctx->r15);
    // 0x800676EC: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x800676F0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800676F4: addiu       $t8, $sp, 0xB0
    ctx->r24 = ADD32(ctx->r29, 0XB0);
    // 0x800676F8: addiu       $t9, $sp, 0x8C
    ctx->r25 = ADD32(ctx->r29, 0X8C);
    // 0x800676FC: addu        $s2, $v0, $t9
    ctx->r18 = ADD32(ctx->r2, ctx->r25);
    // 0x80067700: addu        $s0, $v0, $t8
    ctx->r16 = ADD32(ctx->r2, ctx->r24);
    // 0x80067704: andi        $a1, $s4, 0x1
    ctx->r5 = ctx->r20 & 0X1;
    // 0x80067708: jal         0x800191E8
    // 0x8006770C: cvt.s.w     $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    ctx->f20.fl = CVT_S_W(ctx->f6.u32l);
    func_800191E8(rdram, ctx);
        goto after_5;
    // 0x8006770C: cvt.s.w     $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    ctx->f20.fl = CVT_S_W(ctx->f6.u32l);
    after_5:
    // 0x80067710: lwc1        $f8, 0x0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X0);
    // 0x80067714: lwc1        $f10, 0x0($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X0);
    // 0x80067718: lwc1        $f6, 0x4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4);
    // 0x8006771C: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80067720: lwc1        $f8, 0x4($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X4);
    // 0x80067724: swc1        $f4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f4.u32l;
    // 0x80067728: sub.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f20.fl;
    // 0x8006772C: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x80067730: add.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x80067734: lwc1        $f6, 0x8($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X8);
    // 0x80067738: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x8006773C: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x80067740: swc1        $f4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f4.u32l;
    // 0x80067744: swc1        $f10, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f10.u32l;
    // 0x80067748: jal         0x80019164
    // 0x8006774C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80019164(rdram, ctx);
        goto after_6;
    // 0x8006774C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_6:
L_80067750:
    // 0x80067750: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80067754: slti        $at, $s1, 0x3
    ctx->r1 = SIGNED(ctx->r17) < 0X3 ? 1 : 0;
    // 0x80067758: bne         $at, $zero, L_800676C8
    if (ctx->r1 != 0) {
        // 0x8006775C: sll         $t9, $s1, 1
        ctx->r25 = S32(ctx->r17 << 1);
            goto L_800676C8;
    }
    // 0x8006775C: sll         $t9, $s1, 1
    ctx->r25 = S32(ctx->r17 << 1);
    // 0x80067760: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80067764: sll         $t7, $s1, 1
    ctx->r15 = S32(ctx->r17 << 1);
L_80067768:
    // 0x80067768: addiu       $t8, $t7, 0x14
    ctx->r24 = ADD32(ctx->r15, 0X14);
    // 0x8006776C: bne         $s4, $t8, L_80067784
    if (ctx->r20 != ctx->r24) {
        // 0x80067770: sll         $t9, $s1, 2
        ctx->r25 = S32(ctx->r17 << 2);
            goto L_80067784;
    }
    // 0x80067770: sll         $t9, $s1, 2
    ctx->r25 = S32(ctx->r17 << 2);
    // 0x80067774: addu        $t6, $s5, $t9
    ctx->r14 = ADD32(ctx->r21, ctx->r25);
    // 0x80067778: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    // 0x8006777C: jal         0x800191C0
    // 0x80067780: nop

    func_800191C0(rdram, ctx);
        goto after_7;
    // 0x80067780: nop

    after_7:
L_80067784:
    // 0x80067784: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80067788: bne         $s1, $s6, L_80067768
    if (ctx->r17 != ctx->r22) {
        // 0x8006778C: sll         $t7, $s1, 1
        ctx->r15 = S32(ctx->r17 << 1);
            goto L_80067768;
    }
    // 0x8006778C: sll         $t7, $s1, 1
    ctx->r15 = S32(ctx->r17 << 1);
    // 0x80067790: jal         0x80007AB0
    // 0x80067794: nop

    func_80007AB0(rdram, ctx);
        goto after_8;
    // 0x80067794: nop

    after_8:
    // 0x80067798: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x8006779C: slti        $at, $s4, 0x32
    ctx->r1 = SIGNED(ctx->r20) < 0X32 ? 1 : 0;
    // 0x800677A0: bne         $at, $zero, L_800676B4
    if (ctx->r1 != 0) {
        // 0x800677A4: nop
    
            goto L_800676B4;
    }
    // 0x800677A4: nop

L_800677A8:
    // 0x800677A8: addiu       $s0, $sp, 0xDC
    ctx->r16 = ADD32(ctx->r29, 0XDC);
    // 0x800677AC: addiu       $s2, $s0, 0xC
    ctx->r18 = ADD32(ctx->r16, 0XC);
L_800677B0:
    // 0x800677B0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x800677B4: jal         0x8001C568
    // 0x800677B8: nop

    func_8001C568(rdram, ctx);
        goto after_9;
    // 0x800677B8: nop

    after_9:
    // 0x800677BC: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x800677C0: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x800677C4: bne         $at, $zero, L_800677B0
    if (ctx->r1 != 0) {
        // 0x800677C8: nop
    
            goto L_800677B0;
    }
    // 0x800677C8: nop

    // 0x800677CC: jal         0x8005CD50
    // 0x800677D0: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    func_8005CD50(rdram, ctx);
        goto after_10;
    // 0x800677D0: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    after_10:
    // 0x800677D4: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x800677D8: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x800677DC: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x800677E0: nop

    // 0x800677E4: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x800677E8: jal         0x80007AE0
    // 0x800677EC: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    func_80007AE0(rdram, ctx);
        goto after_11;
    // 0x800677EC: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    after_11:
    // 0x800677F0: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x800677F4: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x800677F8: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x800677FC: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80067800: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80067804: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x80067808: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x8006780C: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x80067810: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x80067814: lw          $s4, 0x34($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X34);
    // 0x80067818: lw          $s5, 0x38($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X38);
    // 0x8006781C: lw          $s6, 0x3C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X3C);
    // 0x80067820: lw          $s7, 0x40($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X40);
    // 0x80067824: jr          $ra
    // 0x80067828: addiu       $sp, $sp, 0xF0
    ctx->r29 = ADD32(ctx->r29, 0XF0);
    return;
    // 0x80067828: addiu       $sp, $sp, 0xF0
    ctx->r29 = ADD32(ctx->r29, 0XF0);
;}
RECOMP_FUNC void func_8006782C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006782C: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80067830: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80067834: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80067838: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8006783C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80067840: jal         0x80007774
    // 0x80067844: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x80067844: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x80067848: lw          $s1, 0x1C($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X1C);
    // 0x8006784C: addiu       $a0, $zero, 0x788
    ctx->r4 = ADD32(0, 0X788);
    // 0x80067850: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80067854: jal         0x8001D138
    // 0x80067858: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x80067858: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8006785C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80067860: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80067864: jal         0x80019164
    // 0x80067868: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x80067868: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_2:
    // 0x8006786C: sw          $s0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r16;
    // 0x80067870: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80067874: jal         0x8001C468
    // 0x80067878: addiu       $a1, $zero, 0x7D2
    ctx->r5 = ADD32(0, 0X7D2);
    func_8001C468(rdram, ctx);
        goto after_3;
    // 0x80067878: addiu       $a1, $zero, 0x7D2
    ctx->r5 = ADD32(0, 0X7D2);
    after_3:
    // 0x8006787C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80067880: addiu       $s3, $zero, 0x16
    ctx->r19 = ADD32(0, 0X16);
    // 0x80067884: addiu       $s2, $zero, -0x401
    ctx->r18 = ADD32(0, -0X401);
L_80067888:
    // 0x80067888: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x8006788C: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x80067890: andi        $t6, $v0, 0x4000
    ctx->r14 = ctx->r2 & 0X4000;
    // 0x80067894: bne         $t6, $zero, L_800678D0
    if (ctx->r14 != 0) {
        // 0x80067898: andi        $t7, $v0, 0x400
        ctx->r15 = ctx->r2 & 0X400;
            goto L_800678D0;
    }
    // 0x80067898: andi        $t7, $v0, 0x400
    ctx->r15 = ctx->r2 & 0X400;
    // 0x8006789C: beq         $t7, $zero, L_800678BC
    if (ctx->r15 == 0) {
        // 0x800678A0: nop
    
            goto L_800678BC;
    }
    // 0x800678A0: nop

    // 0x800678A4: jal         0x8001913C
    // 0x800678A8: addiu       $a1, $s1, 0xC
    ctx->r5 = ADD32(ctx->r17, 0XC);
    func_8001913C(rdram, ctx);
        goto after_4;
    // 0x800678A8: addiu       $a1, $s1, 0xC
    ctx->r5 = ADD32(ctx->r17, 0XC);
    after_4:
    // 0x800678AC: lw          $t8, 0x24($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X24);
    // 0x800678B0: nop

    // 0x800678B4: and         $t9, $t8, $s2
    ctx->r25 = ctx->r24 & ctx->r18;
    // 0x800678B8: sw          $t9, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r25;
L_800678BC:
    // 0x800678BC: jal         0x80007AB0
    // 0x800678C0: nop

    func_80007AB0(rdram, ctx);
        goto after_5;
    // 0x800678C0: nop

    after_5:
    // 0x800678C4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800678C8: bne         $s0, $s3, L_80067888
    if (ctx->r16 != ctx->r19) {
        // 0x800678CC: nop
    
            goto L_80067888;
    }
    // 0x800678CC: nop

L_800678D0:
    // 0x800678D0: addiu       $s0, $sp, 0x54
    ctx->r16 = ADD32(ctx->r29, 0X54);
    // 0x800678D4: addiu       $s3, $s0, 0x4
    ctx->r19 = ADD32(ctx->r16, 0X4);
L_800678D8:
    // 0x800678D8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x800678DC: jal         0x8001C568
    // 0x800678E0: nop

    func_8001C568(rdram, ctx);
        goto after_6;
    // 0x800678E0: nop

    after_6:
    // 0x800678E4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x800678E8: sltu        $at, $s0, $s3
    ctx->r1 = ctx->r16 < ctx->r19 ? 1 : 0;
    // 0x800678EC: bne         $at, $zero, L_800678D8
    if (ctx->r1 != 0) {
        // 0x800678F0: nop
    
            goto L_800678D8;
    }
    // 0x800678F0: nop

    // 0x800678F4: jal         0x8005CD50
    // 0x800678F8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8005CD50(rdram, ctx);
        goto after_7;
    // 0x800678F8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_7:
    // 0x800678FC: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80067900: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x80067904: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x80067908: nop

    // 0x8006790C: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x80067910: jal         0x80007AE0
    // 0x80067914: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    func_80007AE0(rdram, ctx);
        goto after_8;
    // 0x80067914: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    after_8:
    // 0x80067918: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8006791C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80067920: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80067924: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80067928: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8006792C: jr          $ra
    // 0x80067930: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x80067930: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_80067934(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80067934: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x80067938: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8006793C: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x80067940: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x80067944: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80067948: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8006794C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80067950: jal         0x80007774
    // 0x80067954: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x80067954: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x80067958: lw          $s5, 0x1C($v0)
    ctx->r21 = MEM_W(ctx->r2, 0X1C);
    // 0x8006795C: addiu       $a0, $zero, 0x784
    ctx->r4 = ADD32(0, 0X784);
    // 0x80067960: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80067964: jal         0x8001D138
    // 0x80067968: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x80067968: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8006796C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80067970: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80067974: jal         0x80019164
    // 0x80067978: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x80067978: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_2:
    // 0x8006797C: sw          $s0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r16;
    // 0x80067980: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80067984: jal         0x8001C468
    // 0x80067988: addiu       $a1, $zero, 0x7D0
    ctx->r5 = ADD32(0, 0X7D0);
    func_8001C468(rdram, ctx);
        goto after_3;
    // 0x80067988: addiu       $a1, $zero, 0x7D0
    ctx->r5 = ADD32(0, 0X7D0);
    after_3:
    // 0x8006798C: lw          $a0, 0x74($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X74);
    // 0x80067990: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80067994: jal         0x800192E8
    // 0x80067998: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800192E8(rdram, ctx);
        goto after_4;
    // 0x80067998: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x8006799C: lw          $a0, 0x74($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X74);
    // 0x800679A0: jal         0x8001913C
    // 0x800679A4: addiu       $a1, $s5, 0xC
    ctx->r5 = ADD32(ctx->r21, 0XC);
    func_8001913C(rdram, ctx);
        goto after_5;
    // 0x800679A4: addiu       $a1, $s5, 0xC
    ctx->r5 = ADD32(ctx->r21, 0XC);
    after_5:
    // 0x800679A8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x800679AC: addiu       $s4, $zero, 0x16
    ctx->r20 = ADD32(0, 0X16);
    // 0x800679B0: addiu       $s3, $zero, 0xC
    ctx->r19 = ADD32(0, 0XC);
L_800679B4:
    // 0x800679B4: lw          $t6, 0x24($s5)
    ctx->r14 = MEM_W(ctx->r21, 0X24);
    // 0x800679B8: lw          $s0, 0x74($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X74);
    // 0x800679BC: andi        $t7, $t6, 0x4000
    ctx->r15 = ctx->r14 & 0X4000;
    // 0x800679C0: bne         $t7, $zero, L_80067A3C
    if (ctx->r15 != 0) {
        // 0x800679C4: slti        $at, $s1, 0xA
        ctx->r1 = SIGNED(ctx->r17) < 0XA ? 1 : 0;
            goto L_80067A3C;
    }
    // 0x800679C4: slti        $at, $s1, 0xA
    ctx->r1 = SIGNED(ctx->r17) < 0XA ? 1 : 0;
    // 0x800679C8: bne         $at, $zero, L_80067A28
    if (ctx->r1 != 0) {
        // 0x800679CC: subu        $v0, $s4, $s1
        ctx->r2 = SUB32(ctx->r20, ctx->r17);
            goto L_80067A28;
    }
    // 0x800679CC: subu        $v0, $s4, $s1
    ctx->r2 = SUB32(ctx->r20, ctx->r17);
    // 0x800679D0: sll         $s2, $v0, 8
    ctx->r18 = S32(ctx->r2 << 8);
    // 0x800679D4: bne         $s3, $v0, L_800679EC
    if (ctx->r19 != ctx->r2) {
        // 0x800679D8: subu        $s2, $s2, $v0
        ctx->r18 = SUB32(ctx->r18, ctx->r2);
            goto L_800679EC;
    }
    // 0x800679D8: subu        $s2, $s2, $v0
    ctx->r18 = SUB32(ctx->r18, ctx->r2);
    // 0x800679DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800679E0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800679E4: jal         0x80018658
    // 0x800679E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80018658(rdram, ctx);
        goto after_6;
    // 0x800679E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
L_800679EC:
    // 0x800679EC: div         $zero, $s2, $s3
    lo = S32(S64(S32(ctx->r18)) / S64(S32(ctx->r19))); hi = S32(S64(S32(ctx->r18)) % S64(S32(ctx->r19)));
    // 0x800679F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800679F4: bne         $s3, $zero, L_80067A00
    if (ctx->r19 != 0) {
        // 0x800679F8: nop
    
            goto L_80067A00;
    }
    // 0x800679F8: nop

    // 0x800679FC: break       7
    do_break(2147908092);
L_80067A00:
    // 0x80067A00: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80067A04: bne         $s3, $at, L_80067A18
    if (ctx->r19 != ctx->r1) {
        // 0x80067A08: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80067A18;
    }
    // 0x80067A08: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80067A0C: bne         $s2, $at, L_80067A18
    if (ctx->r18 != ctx->r1) {
        // 0x80067A10: nop
    
            goto L_80067A18;
    }
    // 0x80067A10: nop

    // 0x80067A14: break       6
    do_break(2147908116);
L_80067A18:
    // 0x80067A18: mflo        $a1
    ctx->r5 = lo;
    // 0x80067A1C: andi        $t8, $a1, 0xFF
    ctx->r24 = ctx->r5 & 0XFF;
    // 0x80067A20: jal         0x80018604
    // 0x80067A24: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    func_80018604(rdram, ctx);
        goto after_7;
    // 0x80067A24: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    after_7:
L_80067A28:
    // 0x80067A28: jal         0x80007AB0
    // 0x80067A2C: nop

    func_80007AB0(rdram, ctx);
        goto after_8;
    // 0x80067A2C: nop

    after_8:
    // 0x80067A30: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80067A34: bne         $s1, $s4, L_800679B4
    if (ctx->r17 != ctx->r20) {
        // 0x80067A38: nop
    
            goto L_800679B4;
    }
    // 0x80067A38: nop

L_80067A3C:
    // 0x80067A3C: addiu       $s0, $sp, 0x74
    ctx->r16 = ADD32(ctx->r29, 0X74);
    // 0x80067A40: addiu       $s2, $s0, 0x4
    ctx->r18 = ADD32(ctx->r16, 0X4);
L_80067A44:
    // 0x80067A44: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80067A48: jal         0x8001C568
    // 0x80067A4C: nop

    func_8001C568(rdram, ctx);
        goto after_9;
    // 0x80067A4C: nop

    after_9:
    // 0x80067A50: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80067A54: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x80067A58: bne         $at, $zero, L_80067A44
    if (ctx->r1 != 0) {
        // 0x80067A5C: nop
    
            goto L_80067A44;
    }
    // 0x80067A5C: nop

    // 0x80067A60: jal         0x8005CD50
    // 0x80067A64: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_8005CD50(rdram, ctx);
        goto after_10;
    // 0x80067A64: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_10:
    // 0x80067A68: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80067A6C: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x80067A70: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80067A74: nop

    // 0x80067A78: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80067A7C: jal         0x80007AE0
    // 0x80067A80: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    func_80007AE0(rdram, ctx);
        goto after_11;
    // 0x80067A80: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    after_11:
    // 0x80067A84: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80067A88: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80067A8C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80067A90: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80067A94: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80067A98: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x80067A9C: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x80067AA0: jr          $ra
    // 0x80067AA4: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x80067AA4: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_80067AA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80067AA8: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x80067AAC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80067AB0: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x80067AB4: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x80067AB8: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80067ABC: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80067AC0: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80067AC4: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80067AC8: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x80067ACC: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80067AD0: jal         0x80007774
    // 0x80067AD4: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x80067AD4: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x80067AD8: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x80067ADC: addiu       $t7, $t7, 0x2508
    ctx->r15 = ADD32(ctx->r15, 0X2508);
    // 0x80067AE0: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x80067AE4: lw          $s1, 0x1C($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X1C);
    // 0x80067AE8: addiu       $t6, $sp, 0x94
    ctx->r14 = ADD32(ctx->r29, 0X94);
    // 0x80067AEC: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x80067AF0: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x80067AF4: lw          $t9, 0x4($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X4);
    // 0x80067AF8: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x80067AFC: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    // 0x80067B00: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80067B04: addiu       $t6, $t6, 0x2514
    ctx->r14 = ADD32(ctx->r14, 0X2514);
    // 0x80067B08: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x80067B0C: addiu       $t8, $sp, 0x88
    ctx->r24 = ADD32(ctx->r29, 0X88);
    // 0x80067B10: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x80067B14: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x80067B18: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x80067B1C: sw          $at, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r1;
    // 0x80067B20: sw          $t9, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r25;
    // 0x80067B24: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x80067B28: addiu       $t8, $t8, 0x2520
    ctx->r24 = ADD32(ctx->r24, 0X2520);
    // 0x80067B2C: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x80067B30: addiu       $t7, $sp, 0x7C
    ctx->r15 = ADD32(ctx->r29, 0X7C);
    // 0x80067B34: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x80067B38: lw          $at, 0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X8);
    // 0x80067B3C: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x80067B40: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80067B44: addiu       $a0, $zero, 0x783
    ctx->r4 = ADD32(0, 0X783);
    // 0x80067B48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80067B4C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80067B50: sw          $at, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r1;
    // 0x80067B54: jal         0x8001D138
    // 0x80067B58: sw          $t9, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r25;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x80067B58: sw          $t9, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r25;
    after_1:
    // 0x80067B5C: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x80067B60: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80067B64: jal         0x80019164
    // 0x80067B68: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x80067B68: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_2:
    // 0x80067B6C: sw          $s2, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r18;
    // 0x80067B70: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80067B74: jal         0x8001C468
    // 0x80067B78: addiu       $a1, $zero, 0x7CF
    ctx->r5 = ADD32(0, 0X7CF);
    func_8001C468(rdram, ctx);
        goto after_3;
    // 0x80067B78: addiu       $a1, $zero, 0x7CF
    ctx->r5 = ADD32(0, 0X7CF);
    after_3:
    // 0x80067B7C: lw          $a0, 0xA4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA4);
    // 0x80067B80: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80067B84: jal         0x800192E8
    // 0x80067B88: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800192E8(rdram, ctx);
        goto after_4;
    // 0x80067B88: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x80067B8C: lw          $a0, 0xA4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA4);
    // 0x80067B90: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80067B94: jal         0x80018658
    // 0x80067B98: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80018658(rdram, ctx);
        goto after_5;
    // 0x80067B98: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x80067B9C: lw          $a0, 0xA4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA4);
    // 0x80067BA0: jal         0x80018604
    // 0x80067BA4: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    func_80018604(rdram, ctx);
        goto after_6;
    // 0x80067BA4: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    after_6:
    // 0x80067BA8: lui         $at, 0x424C
    ctx->r1 = S32(0X424C << 16);
    // 0x80067BAC: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x80067BB0: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x80067BB4: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80067BB8: addiu       $s4, $zero, -0x101
    ctx->r20 = ADD32(0, -0X101);
    // 0x80067BBC: addiu       $s3, $zero, -0x401
    ctx->r19 = ADD32(0, -0X401);
    // 0x80067BC0: addiu       $s2, $zero, -0x801
    ctx->r18 = ADD32(0, -0X801);
L_80067BC4:
    // 0x80067BC4: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x80067BC8: lw          $a0, 0xA4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA4);
    // 0x80067BCC: andi        $t6, $v0, 0x4000
    ctx->r14 = ctx->r2 & 0X4000;
    // 0x80067BD0: bne         $t6, $zero, L_80067D04
    if (ctx->r14 != 0) {
        // 0x80067BD4: andi        $t7, $v0, 0x800
        ctx->r15 = ctx->r2 & 0X800;
            goto L_80067D04;
    }
    // 0x80067BD4: andi        $t7, $v0, 0x800
    ctx->r15 = ctx->r2 & 0X800;
    // 0x80067BD8: beq         $t7, $zero, L_80067BFC
    if (ctx->r15 == 0) {
        // 0x80067BDC: andi        $t6, $v0, 0x400
        ctx->r14 = ctx->r2 & 0X400;
            goto L_80067BFC;
    }
    // 0x80067BDC: andi        $t6, $v0, 0x400
    ctx->r14 = ctx->r2 & 0X400;
    // 0x80067BE0: jal         0x80019164
    // 0x80067BE4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80019164(rdram, ctx);
        goto after_7;
    // 0x80067BE4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_7:
    // 0x80067BE8: lw          $t8, 0x24($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X24);
    // 0x80067BEC: nop

    // 0x80067BF0: and         $v0, $t8, $s2
    ctx->r2 = ctx->r24 & ctx->r18;
    // 0x80067BF4: sw          $v0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r2;
    // 0x80067BF8: andi        $t6, $v0, 0x400
    ctx->r14 = ctx->r2 & 0X400;
L_80067BFC:
    // 0x80067BFC: beq         $t6, $zero, L_80067C24
    if (ctx->r14 == 0) {
        // 0x80067C00: andi        $t9, $v0, 0x100
        ctx->r25 = ctx->r2 & 0X100;
            goto L_80067C24;
    }
    // 0x80067C00: andi        $t9, $v0, 0x100
    ctx->r25 = ctx->r2 & 0X100;
    // 0x80067C04: lw          $a0, 0xA4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA4);
    // 0x80067C08: jal         0x8001913C
    // 0x80067C0C: addiu       $a1, $s1, 0xC
    ctx->r5 = ADD32(ctx->r17, 0XC);
    func_8001913C(rdram, ctx);
        goto after_8;
    // 0x80067C0C: addiu       $a1, $s1, 0xC
    ctx->r5 = ADD32(ctx->r17, 0XC);
    after_8:
    // 0x80067C10: lw          $t7, 0x24($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X24);
    // 0x80067C14: nop

    // 0x80067C18: and         $v0, $t7, $s3
    ctx->r2 = ctx->r15 & ctx->r19;
    // 0x80067C1C: sw          $v0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r2;
    // 0x80067C20: andi        $t9, $v0, 0x100
    ctx->r25 = ctx->r2 & 0X100;
L_80067C24:
    // 0x80067C24: beq         $t9, $zero, L_80067C4C
    if (ctx->r25 == 0) {
        // 0x80067C28: sll         $t8, $s0, 2
        ctx->r24 = S32(ctx->r16 << 2);
            goto L_80067C4C;
    }
    // 0x80067C28: sll         $t8, $s0, 2
    ctx->r24 = S32(ctx->r16 << 2);
    // 0x80067C2C: lw          $a0, 0xA4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA4);
    // 0x80067C30: jal         0x80019114
    // 0x80067C34: addiu       $a1, $s1, 0x18
    ctx->r5 = ADD32(ctx->r17, 0X18);
    func_80019114(rdram, ctx);
        goto after_9;
    // 0x80067C34: addiu       $a1, $s1, 0x18
    ctx->r5 = ADD32(ctx->r17, 0X18);
    after_9:
    // 0x80067C38: lw          $t6, 0x24($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X24);
    // 0x80067C3C: nop

    // 0x80067C40: and         $t7, $t6, $s4
    ctx->r15 = ctx->r14 & ctx->r20;
    // 0x80067C44: sw          $t7, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r15;
    // 0x80067C48: sll         $t8, $s0, 2
    ctx->r24 = S32(ctx->r16 << 2);
L_80067C4C:
    // 0x80067C4C: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x80067C50: jal         0x80028C2C
    // 0x80067C54: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    func_80028C2C(rdram, ctx);
        goto after_10;
    // 0x80067C54: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    after_10:
    // 0x80067C58: mul.s       $f6, $f0, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x80067C5C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80067C60: lw          $a0, 0xA4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA4);
    // 0x80067C64: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80067C68: add.s       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f22.fl;
    // 0x80067C6C: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80067C70: ctc1        $a1, $FpcCsr
    set_cop1_cs(ctx->r5);
    // 0x80067C74: nop

    // 0x80067C78: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80067C7C: cfc1        $a1, $FpcCsr
    ctx->r5 = get_cop1_cs();
    // 0x80067C80: nop

    // 0x80067C84: andi        $a1, $a1, 0x78
    ctx->r5 = ctx->r5 & 0X78;
    // 0x80067C88: beq         $a1, $zero, L_80067CD4
    if (ctx->r5 == 0) {
        // 0x80067C8C: nop
    
            goto L_80067CD4;
    }
    // 0x80067C8C: nop

    // 0x80067C90: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80067C94: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80067C98: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80067C9C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80067CA0: ctc1        $a1, $FpcCsr
    set_cop1_cs(ctx->r5);
    // 0x80067CA4: nop

    // 0x80067CA8: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80067CAC: cfc1        $a1, $FpcCsr
    ctx->r5 = get_cop1_cs();
    // 0x80067CB0: nop

    // 0x80067CB4: andi        $a1, $a1, 0x78
    ctx->r5 = ctx->r5 & 0X78;
    // 0x80067CB8: bne         $a1, $zero, L_80067CCC
    if (ctx->r5 != 0) {
        // 0x80067CBC: nop
    
            goto L_80067CCC;
    }
    // 0x80067CBC: nop

    // 0x80067CC0: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x80067CC4: b           L_80067CE4
    // 0x80067CC8: or          $a1, $a1, $at
    ctx->r5 = ctx->r5 | ctx->r1;
        goto L_80067CE4;
    // 0x80067CC8: or          $a1, $a1, $at
    ctx->r5 = ctx->r5 | ctx->r1;
L_80067CCC:
    // 0x80067CCC: b           L_80067CE4
    // 0x80067CD0: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
        goto L_80067CE4;
    // 0x80067CD0: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
L_80067CD4:
    // 0x80067CD4: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x80067CD8: nop

    // 0x80067CDC: bltz        $a1, L_80067CCC
    if (SIGNED(ctx->r5) < 0) {
        // 0x80067CE0: nop
    
            goto L_80067CCC;
    }
    // 0x80067CE0: nop

L_80067CE4:
    // 0x80067CE4: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80067CE8: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x80067CEC: jal         0x80018604
    // 0x80067CF0: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    func_80018604(rdram, ctx);
        goto after_11;
    // 0x80067CF0: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    after_11:
    // 0x80067CF4: jal         0x80007AB0
    // 0x80067CF8: nop

    func_80007AB0(rdram, ctx);
        goto after_12;
    // 0x80067CF8: nop

    after_12:
    // 0x80067CFC: b           L_80067BC4
    // 0x80067D00: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
        goto L_80067BC4;
    // 0x80067D00: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_80067D04:
    // 0x80067D04: addiu       $s0, $sp, 0xA4
    ctx->r16 = ADD32(ctx->r29, 0XA4);
    // 0x80067D08: addiu       $s3, $s0, 0x4
    ctx->r19 = ADD32(ctx->r16, 0X4);
L_80067D0C:
    // 0x80067D0C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80067D10: jal         0x8001C568
    // 0x80067D14: nop

    func_8001C568(rdram, ctx);
        goto after_13;
    // 0x80067D14: nop

    after_13:
    // 0x80067D18: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80067D1C: sltu        $at, $s0, $s3
    ctx->r1 = ctx->r16 < ctx->r19 ? 1 : 0;
    // 0x80067D20: bne         $at, $zero, L_80067D0C
    if (ctx->r1 != 0) {
        // 0x80067D24: nop
    
            goto L_80067D0C;
    }
    // 0x80067D24: nop

    // 0x80067D28: jal         0x8005CD50
    // 0x80067D2C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8005CD50(rdram, ctx);
        goto after_14;
    // 0x80067D2C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_14:
    // 0x80067D30: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80067D34: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x80067D38: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x80067D3C: nop

    // 0x80067D40: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80067D44: jal         0x80007AE0
    // 0x80067D48: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    func_80007AE0(rdram, ctx);
        goto after_15;
    // 0x80067D48: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    after_15:
    // 0x80067D4C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80067D50: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80067D54: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80067D58: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80067D5C: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80067D60: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80067D64: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80067D68: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80067D6C: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x80067D70: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x80067D74: jr          $ra
    // 0x80067D78: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x80067D78: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_80067D7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80067D7C: addiu       $sp, $sp, -0x1D8
    ctx->r29 = ADD32(ctx->r29, -0X1D8);
    // 0x80067D80: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x80067D84: sw          $fp, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r30;
    // 0x80067D88: sw          $s7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r23;
    // 0x80067D8C: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x80067D90: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x80067D94: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x80067D98: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x80067D9C: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x80067DA0: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x80067DA4: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x80067DA8: swc1        $f31, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x80067DAC: swc1        $f30, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f30.u32l;
    // 0x80067DB0: swc1        $f29, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x80067DB4: swc1        $f28, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f28.u32l;
    // 0x80067DB8: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x80067DBC: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x80067DC0: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x80067DC4: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x80067DC8: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80067DCC: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x80067DD0: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80067DD4: jal         0x80007774
    // 0x80067DD8: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x80067DD8: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x80067DDC: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x80067DE0: addiu       $t7, $t7, 0x252C
    ctx->r15 = ADD32(ctx->r15, 0X252C);
    // 0x80067DE4: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x80067DE8: lw          $s5, 0x1C($v0)
    ctx->r21 = MEM_W(ctx->r2, 0X1C);
    // 0x80067DEC: addiu       $t6, $sp, 0x170
    ctx->r14 = ADD32(ctx->r29, 0X170);
    // 0x80067DF0: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x80067DF4: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x80067DF8: lw          $t9, 0x4($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X4);
    // 0x80067DFC: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x80067E00: addiu       $t8, $t8, 0x2538
    ctx->r24 = ADD32(ctx->r24, 0X2538);
    // 0x80067E04: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x80067E08: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    // 0x80067E0C: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x80067E10: addiu       $s4, $sp, 0x164
    ctx->r20 = ADD32(ctx->r29, 0X164);
    // 0x80067E14: sw          $at, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r1;
    // 0x80067E18: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x80067E1C: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80067E20: sw          $t9, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r25;
    // 0x80067E24: lw          $at, 0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X8);
    // 0x80067E28: addiu       $t6, $t6, 0x2544
    ctx->r14 = ADD32(ctx->r14, 0X2544);
    // 0x80067E2C: or          $fp, $zero, $zero
    ctx->r30 = 0 | 0;
    // 0x80067E30: addiu       $t9, $t6, 0x30
    ctx->r25 = ADD32(ctx->r14, 0X30);
    // 0x80067E34: addiu       $t7, $sp, 0x134
    ctx->r15 = ADD32(ctx->r29, 0X134);
    // 0x80067E38: sw          $at, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r1;
L_80067E3C:
    // 0x80067E3C: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x80067E40: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x80067E44: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x80067E48: lw          $at, -0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X8);
    // 0x80067E4C: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x80067E50: sw          $at, -0x8($t7)
    MEM_W(-0X8, ctx->r15) = ctx->r1;
    // 0x80067E54: lw          $at, -0x4($t6)
    ctx->r1 = MEM_W(ctx->r14, -0X4);
    // 0x80067E58: bne         $t6, $t9, L_80067E3C
    if (ctx->r14 != ctx->r25) {
        // 0x80067E5C: sw          $at, -0x4($t7)
        MEM_W(-0X4, ctx->r15) = ctx->r1;
            goto L_80067E3C;
    }
    // 0x80067E5C: sw          $at, -0x4($t7)
    MEM_W(-0X4, ctx->r15) = ctx->r1;
    // 0x80067E60: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80067E64: lwc1        $f29, 0x63D8($at)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r1, 0X63D8);
    // 0x80067E68: lwc1        $f28, 0x63DC($at)
    ctx->f28.u32l = MEM_W(ctx->r1, 0X63DC);
    // 0x80067E6C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80067E70: lwc1        $f25, 0x63E0($at)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r1, 0X63E0);
    // 0x80067E74: lwc1        $f24, 0x63E4($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X63E4);
    // 0x80067E78: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80067E7C: lwc1        $f23, 0x63E8($at)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r1, 0X63E8);
    // 0x80067E80: lwc1        $f22, 0x63EC($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X63EC);
    // 0x80067E84: addiu       $s3, $sp, 0x1C0
    ctx->r19 = ADD32(ctx->r29, 0X1C0);
    // 0x80067E88: addiu       $s0, $sp, 0x134
    ctx->r16 = ADD32(ctx->r29, 0X134);
    // 0x80067E8C: addiu       $s2, $sp, 0x124
    ctx->r18 = ADD32(ctx->r29, 0X124);
    // 0x80067E90: addiu       $s6, $sp, 0x134
    ctx->r22 = ADD32(ctx->r29, 0X134);
L_80067E94:
    // 0x80067E94: addiu       $a0, $zero, 0x1FD
    ctx->r4 = ADD32(0, 0X1FD);
    // 0x80067E98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80067E9C: jal         0x8001D138
    // 0x80067EA0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x80067EA0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80067EA4: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80067EA8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80067EAC: jal         0x80019164
    // 0x80067EB0: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x80067EB0: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_2:
    // 0x80067EB4: jal         0x80027F1C
    // 0x80067EB8: sw          $s1, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r17;
    func_80027F1C(rdram, ctx);
        goto after_3;
    // 0x80067EB8: sw          $s1, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r17;
    after_3:
    // 0x80067EBC: mul.d       $f4, $f0, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f22.d); 
    ctx->f4.d = MUL_D(ctx->f0.d, ctx->f22.d);
    // 0x80067EC0: nop

    // 0x80067EC4: mul.d       $f6, $f4, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f24.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f24.d);
    // 0x80067EC8: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x80067ECC: jal         0x80027F1C
    // 0x80067ED0: swc1        $f8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f8.u32l;
    func_80027F1C(rdram, ctx);
        goto after_4;
    // 0x80067ED0: swc1        $f8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f8.u32l;
    after_4:
    // 0x80067ED4: mul.d       $f10, $f0, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f22.d); 
    ctx->f10.d = MUL_D(ctx->f0.d, ctx->f22.d);
    // 0x80067ED8: nop

    // 0x80067EDC: mul.d       $f4, $f10, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f24.d); 
    ctx->f4.d = MUL_D(ctx->f10.d, ctx->f24.d);
    // 0x80067EE0: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x80067EE4: jal         0x80027F1C
    // 0x80067EE8: swc1        $f6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f6.u32l;
    func_80027F1C(rdram, ctx);
        goto after_5;
    // 0x80067EE8: swc1        $f6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f6.u32l;
    after_5:
    // 0x80067EEC: mul.d       $f8, $f0, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f22.d); 
    ctx->f8.d = MUL_D(ctx->f0.d, ctx->f22.d);
    // 0x80067EF0: nop

    // 0x80067EF4: mul.d       $f10, $f8, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f24.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f24.d);
    // 0x80067EF8: cvt.s.d     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f4.fl = CVT_S_D(ctx->f10.d);
    // 0x80067EFC: jal         0x80027F1C
    // 0x80067F00: swc1        $f4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f4.u32l;
    func_80027F1C(rdram, ctx);
        goto after_6;
    // 0x80067F00: swc1        $f4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f4.u32l;
    after_6:
    // 0x80067F04: mul.d       $f6, $f0, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f28.d); 
    ctx->f6.d = MUL_D(ctx->f0.d, ctx->f28.d);
    // 0x80067F08: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x80067F0C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80067F10: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x80067F14: jal         0x8001913C
    // 0x80067F18: swc1        $f8, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->f8.u32l;
    func_8001913C(rdram, ctx);
        goto after_7;
    // 0x80067F18: swc1        $f8, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->f8.u32l;
    after_7:
    // 0x80067F1C: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x80067F20: jal         0x80019114
    // 0x80067F24: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    func_80019114(rdram, ctx);
        goto after_8;
    // 0x80067F24: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_8:
    // 0x80067F28: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x80067F2C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80067F30: jal         0x80018658
    // 0x80067F34: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80018658(rdram, ctx);
        goto after_9;
    // 0x80067F34: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_9:
    // 0x80067F38: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x80067F3C: sltu        $at, $s2, $s6
    ctx->r1 = ctx->r18 < ctx->r22 ? 1 : 0;
    // 0x80067F40: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x80067F44: bne         $at, $zero, L_80067E94
    if (ctx->r1 != 0) {
        // 0x80067F48: addiu       $s0, $s0, 0xC
        ctx->r16 = ADD32(ctx->r16, 0XC);
            goto L_80067E94;
    }
    // 0x80067F48: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x80067F4C: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    // 0x80067F50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80067F54: jal         0x8001D138
    // 0x80067F58: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_10;
    // 0x80067F58: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_10:
    // 0x80067F5C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80067F60: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80067F64: jal         0x80019164
    // 0x80067F68: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    func_80019164(rdram, ctx);
        goto after_11;
    // 0x80067F68: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_11:
    // 0x80067F6C: sw          $s0, 0x1BC($sp)
    MEM_W(0X1BC, ctx->r29) = ctx->r16;
    // 0x80067F70: addiu       $a0, $zero, 0x785
    ctx->r4 = ADD32(0, 0X785);
    // 0x80067F74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80067F78: jal         0x8001D138
    // 0x80067F7C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_12;
    // 0x80067F7C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_12:
    // 0x80067F80: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80067F84: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80067F88: jal         0x80019164
    // 0x80067F8C: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    func_80019164(rdram, ctx);
        goto after_13;
    // 0x80067F8C: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_13:
    // 0x80067F90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80067F94: addiu       $a1, $zero, 0x7D1
    ctx->r5 = ADD32(0, 0X7D1);
    // 0x80067F98: jal         0x8001C468
    // 0x80067F9C: sw          $s0, 0x1B8($sp)
    MEM_W(0X1B8, ctx->r29) = ctx->r16;
    func_8001C468(rdram, ctx);
        goto after_14;
    // 0x80067F9C: sw          $s0, 0x1B8($sp)
    MEM_W(0X1B8, ctx->r29) = ctx->r16;
    after_14:
    // 0x80067FA0: lw          $a0, 0x1B8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1B8);
    // 0x80067FA4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80067FA8: jal         0x800192E8
    // 0x80067FAC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800192E8(rdram, ctx);
        goto after_15;
    // 0x80067FAC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_15:
    // 0x80067FB0: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x80067FB4: addiu       $s0, $sp, 0x1B8
    ctx->r16 = ADD32(ctx->r29, 0X1B8);
    // 0x80067FB8: addiu       $s2, $sp, 0x1C0
    ctx->r18 = ADD32(ctx->r29, 0X1C0);
    // 0x80067FBC: addiu       $s1, $sp, 0xD4
    ctx->r17 = ADD32(ctx->r29, 0XD4);
L_80067FC0:
    // 0x80067FC0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80067FC4: swc1        $f20, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f20.u32l;
    // 0x80067FC8: swc1        $f20, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f20.u32l;
    // 0x80067FCC: swc1        $f20, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f20.u32l;
    // 0x80067FD0: jal         0x80019114
    // 0x80067FD4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80019114(rdram, ctx);
        goto after_16;
    // 0x80067FD4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_16:
    // 0x80067FD8: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80067FDC: bne         $s0, $s2, L_80067FC0
    if (ctx->r16 != ctx->r18) {
        // 0x80067FE0: nop
    
            goto L_80067FC0;
    }
    // 0x80067FE0: nop

    // 0x80067FE4: lw          $a0, 0x1B8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1B8);
    // 0x80067FE8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80067FEC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80067FF0: jal         0x80018658
    // 0x80067FF4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_80018658(rdram, ctx);
        goto after_17;
    // 0x80067FF4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_17:
    // 0x80067FF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80067FFC: jal         0x80018604
    // 0x80068000: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_80018604(rdram, ctx);
        goto after_18;
    // 0x80068000: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_18:
    // 0x80068004: addiu       $a0, $zero, 0x7A8
    ctx->r4 = ADD32(0, 0X7A8);
    // 0x80068008: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8006800C: jal         0x8001D138
    // 0x80068010: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_19;
    // 0x80068010: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_19:
    // 0x80068014: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80068018: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8006801C: jal         0x80019164
    // 0x80068020: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    func_80019164(rdram, ctx);
        goto after_20;
    // 0x80068020: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_20:
    // 0x80068024: sw          $s0, 0x1B4($sp)
    MEM_W(0X1B4, ctx->r29) = ctx->r16;
    // 0x80068028: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006802C: jal         0x8001C468
    // 0x80068030: addiu       $a1, $zero, 0x7A8
    ctx->r5 = ADD32(0, 0X7A8);
    func_8001C468(rdram, ctx);
        goto after_21;
    // 0x80068030: addiu       $a1, $zero, 0x7A8
    ctx->r5 = ADD32(0, 0X7A8);
    after_21:
    // 0x80068034: lw          $a0, 0x1B4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1B4);
    // 0x80068038: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8006803C: jal         0x800192E8
    // 0x80068040: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800192E8(rdram, ctx);
        goto after_22;
    // 0x80068040: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_22:
    // 0x80068044: lw          $a0, 0x1B4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1B4);
    // 0x80068048: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8006804C: jal         0x80018658
    // 0x80068050: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80018658(rdram, ctx);
        goto after_23;
    // 0x80068050: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_23:
    // 0x80068054: lw          $a0, 0x1B4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1B4);
    // 0x80068058: jal         0x80018604
    // 0x8006805C: addiu       $a1, $zero, 0xCC
    ctx->r5 = ADD32(0, 0XCC);
    func_80018604(rdram, ctx);
        goto after_24;
    // 0x8006805C: addiu       $a1, $zero, 0xCC
    ctx->r5 = ADD32(0, 0XCC);
    after_24:
    // 0x80068060: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80068064: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x80068068: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8006806C: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x80068070: addiu       $s7, $sp, 0x1D0
    ctx->r23 = ADD32(ctx->r29, 0X1D0);
    // 0x80068074: addiu       $s6, $sp, 0x1AC
    ctx->r22 = ADD32(ctx->r29, 0X1AC);
    // 0x80068078: lw          $t8, 0x24($s5)
    ctx->r24 = MEM_W(ctx->r21, 0X24);
L_8006807C:
    // 0x8006807C: lw          $a0, 0x1B4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1B4);
    // 0x80068080: andi        $t9, $t8, 0x4000
    ctx->r25 = ctx->r24 & 0X4000;
    // 0x80068084: bne         $t9, $zero, L_80068464
    if (ctx->r25 != 0) {
        // 0x80068088: addiu       $at, $zero, 0xF
        ctx->r1 = ADD32(0, 0XF);
            goto L_80068464;
    }
    // 0x80068088: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x8006808C: bne         $fp, $at, L_800680A0
    if (ctx->r30 != ctx->r1) {
        // 0x80068090: slti        $at, $fp, 0x14
        ctx->r1 = SIGNED(ctx->r30) < 0X14 ? 1 : 0;
            goto L_800680A0;
    }
    // 0x80068090: slti        $at, $fp, 0x14
    ctx->r1 = SIGNED(ctx->r30) < 0X14 ? 1 : 0;
    // 0x80068094: jal         0x800191C0
    // 0x80068098: nop

    func_800191C0(rdram, ctx);
        goto after_25;
    // 0x80068098: nop

    after_25:
    // 0x8006809C: slti        $at, $fp, 0x14
    ctx->r1 = SIGNED(ctx->r30) < 0X14 ? 1 : 0;
L_800680A0:
    // 0x800680A0: beq         $at, $zero, L_80068224
    if (ctx->r1 == 0) {
        // 0x800680A4: negu        $s4, $fp
        ctx->r20 = SUB32(0, ctx->r30);
            goto L_80068224;
    }
    // 0x800680A4: negu        $s4, $fp
    ctx->r20 = SUB32(0, ctx->r30);
    // 0x800680A8: sll         $t6, $s4, 8
    ctx->r14 = S32(ctx->r20 << 8);
    // 0x800680AC: subu        $t6, $t6, $s4
    ctx->r14 = SUB32(ctx->r14, ctx->r20);
    // 0x800680B0: addiu       $s4, $t6, 0x13EC
    ctx->r20 = ADD32(ctx->r14, 0X13EC);
    // 0x800680B4: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x800680B8: div         $zero, $s4, $at
    lo = S32(S64(S32(ctx->r20)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r20)) % S64(S32(ctx->r1)));
    // 0x800680BC: addiu       $s3, $sp, 0x1C0
    ctx->r19 = ADD32(ctx->r29, 0X1C0);
    // 0x800680C0: addiu       $s0, $sp, 0x134
    ctx->r16 = ADD32(ctx->r29, 0X134);
    // 0x800680C4: addiu       $s2, $sp, 0x124
    ctx->r18 = ADD32(ctx->r29, 0X124);
    // 0x800680C8: addiu       $s1, $sp, 0x17C
    ctx->r17 = ADD32(ctx->r29, 0X17C);
    // 0x800680CC: mflo        $t7
    ctx->r15 = lo;
    // 0x800680D0: andi        $s4, $t7, 0xFF
    ctx->r20 = ctx->r15 & 0XFF;
    // 0x800680D4: nop

L_800680D8:
    // 0x800680D8: lwc1        $f10, 0x0($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X0);
    // 0x800680DC: nop

    // 0x800680E0: c.lt.s      $f10, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    c1cs = ctx->f10.fl < ctx->f30.fl;
    // 0x800680E4: nop

    // 0x800680E8: bc1f        L_8006814C
    if (!c1cs) {
        // 0x800680EC: nop
    
            goto L_8006814C;
    }
    // 0x800680EC: nop

    // 0x800680F0: jal         0x80027F1C
    // 0x800680F4: nop

    func_80027F1C(rdram, ctx);
        goto after_26;
    // 0x800680F4: nop

    after_26:
    // 0x800680F8: mul.d       $f4, $f0, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f22.d); 
    ctx->f4.d = MUL_D(ctx->f0.d, ctx->f22.d);
    // 0x800680FC: nop

    // 0x80068100: mul.d       $f6, $f4, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f24.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f24.d);
    // 0x80068104: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x80068108: jal         0x80027F1C
    // 0x8006810C: swc1        $f8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f8.u32l;
    func_80027F1C(rdram, ctx);
        goto after_27;
    // 0x8006810C: swc1        $f8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f8.u32l;
    after_27:
    // 0x80068110: mul.d       $f10, $f0, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f22.d); 
    ctx->f10.d = MUL_D(ctx->f0.d, ctx->f22.d);
    // 0x80068114: nop

    // 0x80068118: mul.d       $f4, $f10, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f24.d); 
    ctx->f4.d = MUL_D(ctx->f10.d, ctx->f24.d);
    // 0x8006811C: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x80068120: jal         0x80027F1C
    // 0x80068124: swc1        $f6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f6.u32l;
    func_80027F1C(rdram, ctx);
        goto after_28;
    // 0x80068124: swc1        $f6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f6.u32l;
    after_28:
    // 0x80068128: mul.d       $f8, $f0, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f22.d); 
    ctx->f8.d = MUL_D(ctx->f0.d, ctx->f22.d);
    // 0x8006812C: nop

    // 0x80068130: mul.d       $f10, $f8, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f24.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f24.d);
    // 0x80068134: cvt.s.d     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f4.fl = CVT_S_D(ctx->f10.d);
    // 0x80068138: jal         0x80027F1C
    // 0x8006813C: swc1        $f4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f4.u32l;
    func_80027F1C(rdram, ctx);
        goto after_29;
    // 0x8006813C: swc1        $f4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f4.u32l;
    after_29:
    // 0x80068140: mul.d       $f6, $f0, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f28.d); 
    ctx->f6.d = MUL_D(ctx->f0.d, ctx->f28.d);
    // 0x80068144: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x80068148: swc1        $f8, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->f8.u32l;
L_8006814C:
    // 0x8006814C: lwc1        $f12, 0x0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X0);
    // 0x80068150: jal         0x8007A800
    // 0x80068154: nop

    __cosf_recomp(rdram, ctx);
        goto after_30;
    // 0x80068154: nop

    after_30:
    // 0x80068158: lwc1        $f12, 0x4($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X4);
    // 0x8006815C: jal         0x8007A640
    // 0x80068160: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    __sinf_recomp(rdram, ctx);
        goto after_31;
    // 0x80068160: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_31:
    // 0x80068164: mul.s       $f4, $f0, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x80068168: lwc1        $f10, 0x0($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X0);
    // 0x8006816C: lwc1        $f12, 0x0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X0);
    // 0x80068170: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x80068174: lwc1        $f10, 0x0($s5)
    ctx->f10.u32l = MEM_W(ctx->r21, 0X0);
    // 0x80068178: mul.s       $f8, $f6, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f26.fl);
    // 0x8006817C: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80068180: jal         0x8007A640
    // 0x80068184: swc1        $f4, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f4.u32l;
    __sinf_recomp(rdram, ctx);
        goto after_32;
    // 0x80068184: swc1        $f4, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f4.u32l;
    after_32:
    // 0x80068188: lwc1        $f8, 0x0($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X0);
    // 0x8006818C: lwc1        $f6, 0x4($s5)
    ctx->f6.u32l = MEM_W(ctx->r21, 0X4);
    // 0x80068190: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x80068194: lwc1        $f12, 0x0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X0);
    // 0x80068198: mul.s       $f4, $f10, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f26.fl);
    // 0x8006819C: sub.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x800681A0: jal         0x8007A800
    // 0x800681A4: swc1        $f8, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f8.u32l;
    __cosf_recomp(rdram, ctx);
        goto after_33;
    // 0x800681A4: swc1        $f8, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f8.u32l;
    after_33:
    // 0x800681A8: lwc1        $f12, 0x4($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X4);
    // 0x800681AC: jal         0x8007A800
    // 0x800681B0: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    __cosf_recomp(rdram, ctx);
        goto after_34;
    // 0x800681B0: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_34:
    // 0x800681B4: mul.s       $f6, $f0, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x800681B8: lwc1        $f10, 0x0($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X0);
    // 0x800681BC: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x800681C0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x800681C4: mul.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x800681C8: lwc1        $f10, 0x8($s5)
    ctx->f10.u32l = MEM_W(ctx->r21, 0X8);
    // 0x800681CC: mul.s       $f8, $f4, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f26.fl);
    // 0x800681D0: add.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x800681D4: jal         0x80019164
    // 0x800681D8: swc1        $f6, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f6.u32l;
    func_80019164(rdram, ctx);
        goto after_35;
    // 0x800681D8: swc1        $f6, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f6.u32l;
    after_35:
    // 0x800681DC: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x800681E0: jal         0x8001913C
    // 0x800681E4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001913C(rdram, ctx);
        goto after_36;
    // 0x800681E4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_36:
    // 0x800681E8: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x800681EC: jal         0x80018604
    // 0x800681F0: andi        $a1, $s4, 0xFF
    ctx->r5 = ctx->r20 & 0XFF;
    func_80018604(rdram, ctx);
        goto after_37;
    // 0x800681F0: andi        $a1, $s4, 0xFF
    ctx->r5 = ctx->r20 & 0XFF;
    after_37:
    // 0x800681F4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800681F8: lwc1        $f8, 0x63F0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X63F0);
    // 0x800681FC: lwc1        $f4, 0x0($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X0);
    // 0x80068200: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x80068204: mul.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x80068208: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x8006820C: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x80068210: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x80068214: bne         $s1, $s6, L_800680D8
    if (ctx->r17 != ctx->r22) {
        // 0x80068218: swc1        $f10, -0x4($s2)
        MEM_W(-0X4, ctx->r18) = ctx->f10.u32l;
            goto L_800680D8;
    }
    // 0x80068218: swc1        $f10, -0x4($s2)
    MEM_W(-0X4, ctx->r18) = ctx->f10.u32l;
    // 0x8006821C: b           L_8006824C
    // 0x80068220: slti        $at, $fp, 0xF
    ctx->r1 = SIGNED(ctx->r30) < 0XF ? 1 : 0;
        goto L_8006824C;
    // 0x80068220: slti        $at, $fp, 0xF
    ctx->r1 = SIGNED(ctx->r30) < 0XF ? 1 : 0;
L_80068224:
    // 0x80068224: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x80068228: bne         $fp, $at, L_80068248
    if (ctx->r30 != ctx->r1) {
        // 0x8006822C: addiu       $s3, $sp, 0x1C0
        ctx->r19 = ADD32(ctx->r29, 0X1C0);
            goto L_80068248;
    }
    // 0x8006822C: addiu       $s3, $sp, 0x1C0
    ctx->r19 = ADD32(ctx->r29, 0X1C0);
L_80068230:
    // 0x80068230: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x80068234: jal         0x800191C0
    // 0x80068238: nop

    func_800191C0(rdram, ctx);
        goto after_38;
    // 0x80068238: nop

    after_38:
    // 0x8006823C: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x80068240: bne         $s3, $s7, L_80068230
    if (ctx->r19 != ctx->r23) {
        // 0x80068244: nop
    
            goto L_80068230;
    }
    // 0x80068244: nop

L_80068248:
    // 0x80068248: slti        $at, $fp, 0xF
    ctx->r1 = SIGNED(ctx->r30) < 0XF ? 1 : 0;
L_8006824C:
    // 0x8006824C: beq         $at, $zero, L_8006828C
    if (ctx->r1 == 0) {
        // 0x80068250: slti        $at, $fp, 0x12
        ctx->r1 = SIGNED(ctx->r30) < 0X12 ? 1 : 0;
            goto L_8006828C;
    }
    // 0x80068250: slti        $at, $fp, 0x12
    ctx->r1 = SIGNED(ctx->r30) < 0X12 ? 1 : 0;
    // 0x80068254: mtc1        $fp, $f6
    ctx->f6.u32l = ctx->r30;
    // 0x80068258: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x8006825C: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80068260: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80068264: nop

    // 0x80068268: mul.s       $f12, $f4, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x8006826C: jal         0x80028C2C
    // 0x80068270: nop

    func_80028C2C(rdram, ctx);
        goto after_39;
    // 0x80068270: nop

    after_39:
    // 0x80068274: add.s       $f2, $f0, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x80068278: swc1        $f2, 0x174($sp)
    MEM_W(0X174, ctx->r29) = ctx->f2.u32l;
    // 0x8006827C: swc1        $f2, 0x170($sp)
    MEM_W(0X170, ctx->r29) = ctx->f2.u32l;
    // 0x80068280: b           L_80068430
    // 0x80068284: swc1        $f2, 0x178($sp)
    MEM_W(0X178, ctx->r29) = ctx->f2.u32l;
        goto L_80068430;
    // 0x80068284: swc1        $f2, 0x178($sp)
    MEM_W(0X178, ctx->r29) = ctx->f2.u32l;
    // 0x80068288: slti        $at, $fp, 0x12
    ctx->r1 = SIGNED(ctx->r30) < 0X12 ? 1 : 0;
L_8006828C:
    // 0x8006828C: beq         $at, $zero, L_800682B4
    if (ctx->r1 == 0) {
        // 0x80068290: lui         $at, 0x8009
        ctx->r1 = S32(0X8009 << 16);
            goto L_800682B4;
    }
    // 0x80068290: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80068294: lwc1        $f2, 0x178($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X178);
    // 0x80068298: lwc1        $f10, 0x63F4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X63F4);
    // 0x8006829C: nop

    // 0x800682A0: add.s       $f2, $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f10.fl;
    // 0x800682A4: swc1        $f2, 0x174($sp)
    MEM_W(0X174, ctx->r29) = ctx->f2.u32l;
    // 0x800682A8: swc1        $f2, 0x170($sp)
    MEM_W(0X170, ctx->r29) = ctx->f2.u32l;
    // 0x800682AC: b           L_80068430
    // 0x800682B0: swc1        $f2, 0x178($sp)
    MEM_W(0X178, ctx->r29) = ctx->f2.u32l;
        goto L_80068430;
    // 0x800682B0: swc1        $f2, 0x178($sp)
    MEM_W(0X178, ctx->r29) = ctx->f2.u32l;
L_800682B4:
    // 0x800682B4: slti        $at, $fp, 0x14
    ctx->r1 = SIGNED(ctx->r30) < 0X14 ? 1 : 0;
    // 0x800682B8: beq         $at, $zero, L_800682E0
    if (ctx->r1 == 0) {
        // 0x800682BC: lui         $at, 0x8009
        ctx->r1 = S32(0X8009 << 16);
            goto L_800682E0;
    }
    // 0x800682BC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800682C0: lwc1        $f2, 0x178($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X178);
    // 0x800682C4: lwc1        $f6, 0x63F8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X63F8);
    // 0x800682C8: nop

    // 0x800682CC: sub.s       $f2, $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f6.fl;
    // 0x800682D0: swc1        $f2, 0x174($sp)
    MEM_W(0X174, ctx->r29) = ctx->f2.u32l;
    // 0x800682D4: swc1        $f2, 0x170($sp)
    MEM_W(0X170, ctx->r29) = ctx->f2.u32l;
    // 0x800682D8: b           L_80068430
    // 0x800682DC: swc1        $f2, 0x178($sp)
    MEM_W(0X178, ctx->r29) = ctx->f2.u32l;
        goto L_80068430;
    // 0x800682DC: swc1        $f2, 0x178($sp)
    MEM_W(0X178, ctx->r29) = ctx->f2.u32l;
L_800682E0:
    // 0x800682E0: slti        $at, $fp, 0x19
    ctx->r1 = SIGNED(ctx->r30) < 0X19 ? 1 : 0;
    // 0x800682E4: beq         $at, $zero, L_80068358
    if (ctx->r1 == 0) {
        // 0x800682E8: addiu       $t9, $fp, -0x13
        ctx->r25 = ADD32(ctx->r30, -0X13);
            goto L_80068358;
    }
    // 0x800682E8: addiu       $t9, $fp, -0x13
    ctx->r25 = ADD32(ctx->r30, -0X13);
    // 0x800682EC: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x800682F0: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x800682F4: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800682F8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800682FC: nop

    // 0x80068300: mul.s       $f20, $f8, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80068304: jal         0x80028C2C
    // 0x80068308: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_80028C2C(rdram, ctx);
        goto after_40;
    // 0x80068308: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_40:
    // 0x8006830C: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x80068310: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80068314: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80068318: mul.s       $f4, $f0, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x8006831C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80068320: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x80068324: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x80068328: jal         0x80028C00
    // 0x8006832C: swc1        $f10, 0x170($sp)
    MEM_W(0X170, ctx->r29) = ctx->f10.u32l;
    func_80028C00(rdram, ctx);
        goto after_41;
    // 0x8006832C: swc1        $f10, 0x170($sp)
    MEM_W(0X170, ctx->r29) = ctx->f10.u32l;
    after_41:
    // 0x80068330: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80068334: lwc1        $f6, 0x63FC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X63FC);
    // 0x80068338: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8006833C: mul.s       $f4, $f0, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x80068340: lwc1        $f8, 0x6400($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X6400);
    // 0x80068344: nop

    // 0x80068348: add.s       $f2, $f4, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x8006834C: swc1        $f2, 0x174($sp)
    MEM_W(0X174, ctx->r29) = ctx->f2.u32l;
    // 0x80068350: b           L_80068430
    // 0x80068354: swc1        $f2, 0x178($sp)
    MEM_W(0X178, ctx->r29) = ctx->f2.u32l;
        goto L_80068430;
    // 0x80068354: swc1        $f2, 0x178($sp)
    MEM_W(0X178, ctx->r29) = ctx->f2.u32l;
L_80068358:
    // 0x80068358: slti        $at, $fp, 0x1C
    ctx->r1 = SIGNED(ctx->r30) < 0X1C ? 1 : 0;
    // 0x8006835C: bne         $at, $zero, L_80068430
    if (ctx->r1 != 0) {
        // 0x80068360: slti        $at, $fp, 0x1F
        ctx->r1 = SIGNED(ctx->r30) < 0X1F ? 1 : 0;
            goto L_80068430;
    }
    // 0x80068360: slti        $at, $fp, 0x1F
    ctx->r1 = SIGNED(ctx->r30) < 0X1F ? 1 : 0;
    // 0x80068364: beq         $at, $zero, L_800683DC
    if (ctx->r1 == 0) {
        // 0x80068368: addiu       $t7, $fp, -0x1E
        ctx->r15 = ADD32(ctx->r30, -0X1E);
            goto L_800683DC;
    }
    // 0x80068368: addiu       $t7, $fp, -0x1E
    ctx->r15 = ADD32(ctx->r30, -0X1E);
    // 0x8006836C: addiu       $t6, $fp, -0x1B
    ctx->r14 = ADD32(ctx->r30, -0X1B);
    // 0x80068370: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x80068374: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80068378: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8006837C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80068380: nop

    // 0x80068384: mul.s       $f20, $f6, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x80068388: jal         0x80028C00
    // 0x8006838C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_80028C00(rdram, ctx);
        goto after_42;
    // 0x8006838C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_42:
    // 0x80068390: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x80068394: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80068398: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8006839C: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x800683A0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800683A4: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x800683A8: add.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x800683AC: jal         0x80028C2C
    // 0x800683B0: swc1        $f4, 0x170($sp)
    MEM_W(0X170, ctx->r29) = ctx->f4.u32l;
    func_80028C2C(rdram, ctx);
        goto after_43;
    // 0x800683B0: swc1        $f4, 0x170($sp)
    MEM_W(0X170, ctx->r29) = ctx->f4.u32l;
    after_43:
    // 0x800683B4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800683B8: lwc1        $f8, 0x6404($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X6404);
    // 0x800683BC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800683C0: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x800683C4: lwc1        $f6, 0x6408($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6408);
    // 0x800683C8: nop

    // 0x800683CC: add.s       $f2, $f10, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x800683D0: swc1        $f2, 0x174($sp)
    MEM_W(0X174, ctx->r29) = ctx->f2.u32l;
    // 0x800683D4: b           L_80068430
    // 0x800683D8: swc1        $f2, 0x178($sp)
    MEM_W(0X178, ctx->r29) = ctx->f2.u32l;
        goto L_80068430;
    // 0x800683D8: swc1        $f2, 0x178($sp)
    MEM_W(0X178, ctx->r29) = ctx->f2.u32l;
L_800683DC:
    // 0x800683DC: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800683E0: lui         $at, 0x41B4
    ctx->r1 = S32(0X41B4 << 16);
    // 0x800683E4: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800683E8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800683EC: nop

    // 0x800683F0: mul.s       $f20, $f8, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x800683F4: jal         0x80028C00
    // 0x800683F8: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_80028C00(rdram, ctx);
        goto after_44;
    // 0x800683F8: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_44:
    // 0x800683FC: add.s       $f2, $f0, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x80068400: swc1        $f2, 0x170($sp)
    MEM_W(0X170, ctx->r29) = ctx->f2.u32l;
    // 0x80068404: swc1        $f2, 0x178($sp)
    MEM_W(0X178, ctx->r29) = ctx->f2.u32l;
    // 0x80068408: jal         0x80028C2C
    // 0x8006840C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_80028C2C(rdram, ctx);
        goto after_45;
    // 0x8006840C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_45:
    // 0x80068410: lui         $at, 0x4110
    ctx->r1 = S32(0X4110 << 16);
    // 0x80068414: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80068418: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8006841C: mul.s       $f4, $f0, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x80068420: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80068424: nop

    // 0x80068428: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x8006842C: swc1        $f10, 0x174($sp)
    MEM_W(0X174, ctx->r29) = ctx->f10.u32l;
L_80068430:
    // 0x80068430: lw          $a0, 0x1B8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1B8);
    // 0x80068434: jal         0x80019114
    // 0x80068438: addiu       $a1, $sp, 0x170
    ctx->r5 = ADD32(ctx->r29, 0X170);
    func_80019114(rdram, ctx);
        goto after_46;
    // 0x80068438: addiu       $a1, $sp, 0x170
    ctx->r5 = ADD32(ctx->r29, 0X170);
    after_46:
    // 0x8006843C: lw          $a0, 0x1BC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1BC);
    // 0x80068440: jal         0x80019114
    // 0x80068444: addiu       $a1, $sp, 0x170
    ctx->r5 = ADD32(ctx->r29, 0X170);
    func_80019114(rdram, ctx);
        goto after_47;
    // 0x80068444: addiu       $a1, $sp, 0x170
    ctx->r5 = ADD32(ctx->r29, 0X170);
    after_47:
    // 0x80068448: slti        $v0, $fp, 0x24
    ctx->r2 = SIGNED(ctx->r30) < 0X24 ? 1 : 0;
    // 0x8006844C: beq         $v0, $zero, L_80068464
    if (ctx->r2 == 0) {
        // 0x80068450: addiu       $fp, $fp, 0x1
        ctx->r30 = ADD32(ctx->r30, 0X1);
            goto L_80068464;
    }
    // 0x80068450: addiu       $fp, $fp, 0x1
    ctx->r30 = ADD32(ctx->r30, 0X1);
    // 0x80068454: jal         0x80007AB0
    // 0x80068458: nop

    func_80007AB0(rdram, ctx);
        goto after_48;
    // 0x80068458: nop

    after_48:
    // 0x8006845C: b           L_8006807C
    // 0x80068460: lw          $t8, 0x24($s5)
    ctx->r24 = MEM_W(ctx->r21, 0X24);
        goto L_8006807C;
    // 0x80068460: lw          $t8, 0x24($s5)
    ctx->r24 = MEM_W(ctx->r21, 0X24);
L_80068464:
    // 0x80068464: lw          $a0, 0x1B8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1B8);
    // 0x80068468: jal         0x8001C568
    // 0x8006846C: nop

    func_8001C568(rdram, ctx);
        goto after_49;
    // 0x8006846C: nop

    after_49:
    // 0x80068470: lw          $a0, 0x1BC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1BC);
    // 0x80068474: jal         0x8001C568
    // 0x80068478: nop

    func_8001C568(rdram, ctx);
        goto after_50;
    // 0x80068478: nop

    after_50:
    // 0x8006847C: lw          $a0, 0x1B4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1B4);
    // 0x80068480: jal         0x8001C568
    // 0x80068484: nop

    func_8001C568(rdram, ctx);
        goto after_51;
    // 0x80068484: nop

    after_51:
    // 0x80068488: addiu       $s0, $sp, 0x1C0
    ctx->r16 = ADD32(ctx->r29, 0X1C0);
    // 0x8006848C: addiu       $s2, $s0, 0x10
    ctx->r18 = ADD32(ctx->r16, 0X10);
L_80068490:
    // 0x80068490: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80068494: jal         0x8001C568
    // 0x80068498: nop

    func_8001C568(rdram, ctx);
        goto after_52;
    // 0x80068498: nop

    after_52:
    // 0x8006849C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x800684A0: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x800684A4: bne         $at, $zero, L_80068490
    if (ctx->r1 != 0) {
        // 0x800684A8: nop
    
            goto L_80068490;
    }
    // 0x800684A8: nop

    // 0x800684AC: jal         0x8005CD50
    // 0x800684B0: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_8005CD50(rdram, ctx);
        goto after_53;
    // 0x800684B0: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_53:
    // 0x800684B4: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x800684B8: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x800684BC: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x800684C0: nop

    // 0x800684C4: addiu       $t6, $t9, -0x1
    ctx->r14 = ADD32(ctx->r25, -0X1);
    // 0x800684C8: jal         0x80007AE0
    // 0x800684CC: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    func_80007AE0(rdram, ctx);
        goto after_54;
    // 0x800684CC: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    after_54:
    // 0x800684D0: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x800684D4: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800684D8: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800684DC: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x800684E0: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800684E4: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x800684E8: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800684EC: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x800684F0: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800684F4: lwc1        $f29, 0x38($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x800684F8: lwc1        $f28, 0x3C($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x800684FC: lwc1        $f31, 0x40($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x80068500: lwc1        $f30, 0x44($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80068504: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x80068508: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x8006850C: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x80068510: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x80068514: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x80068518: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x8006851C: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x80068520: lw          $s7, 0x64($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X64);
    // 0x80068524: lw          $fp, 0x68($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X68);
    // 0x80068528: jr          $ra
    // 0x8006852C: addiu       $sp, $sp, 0x1D8
    ctx->r29 = ADD32(ctx->r29, 0X1D8);
    return;
    // 0x8006852C: addiu       $sp, $sp, 0x1D8
    ctx->r29 = ADD32(ctx->r29, 0X1D8);
;}
RECOMP_FUNC void func_80068530(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80068530: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80068534: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80068538: jal         0x80028AB8
    // 0x8006853C: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    func_80028AB8(rdram, ctx);
        goto after_0;
    // 0x8006853C: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    after_0:
    // 0x80068540: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80068544: jal         0x80028C2C
    // 0x80068548: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    func_80028C2C(rdram, ctx);
        goto after_1;
    // 0x80068548: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    after_1:
    // 0x8006854C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80068550: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x80068554: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80068558: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
    // 0x8006855C: lwc1        $f7, 0x6410($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X6410);
    // 0x80068560: lwc1        $f6, 0x6414($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6414);
    // 0x80068564: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80068568: mul.d       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = MUL_D(ctx->f6.d, ctx->f10.d);
    // 0x8006856C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80068570: mul.s       $f8, $f0, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f24.fl);
    // 0x80068574: lwc1        $f9, 0x6418($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X6418);
    // 0x80068578: cvt.d.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f6.d = CVT_D_S(ctx->f8.fl);
    // 0x8006857C: add.d       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f4.d); 
    ctx->f10.d = ctx->f6.d + ctx->f4.d;
    // 0x80068580: lwc1        $f8, 0x641C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X641C);
    // 0x80068584: nop

    // 0x80068588: sub.d       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = ctx->f10.d - ctx->f8.d;
    // 0x8006858C: jal         0x80027ECC
    // 0x80068590: cvt.s.d     $f22, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f22.fl = CVT_S_D(ctx->f6.d);
    func_80027ECC(rdram, ctx);
        goto after_2;
    // 0x80068590: cvt.s.d     $f22, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f22.fl = CVT_S_D(ctx->f6.d);
    after_2:
    // 0x80068594: andi        $t6, $v0, 0xFF
    ctx->r14 = ctx->r2 & 0XFF;
    // 0x80068598: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8006859C: lui         $at, 0x3FB0
    ctx->r1 = S32(0X3FB0 << 16);
    // 0x800685A0: cvt.s.w     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800685A4: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x800685A8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800685AC: cvt.d.s     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f8.d = CVT_D_S(ctx->f10.fl);
    // 0x800685B0: mul.d       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f6.d); 
    ctx->f4.d = MUL_D(ctx->f8.d, ctx->f6.d);
    // 0x800685B4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x800685B8: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x800685BC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800685C0: nop

    // 0x800685C4: add.d       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f10.d); 
    ctx->f8.d = ctx->f4.d + ctx->f10.d;
    // 0x800685C8: cvt.s.d     $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f20.fl = CVT_S_D(ctx->f8.d);
    // 0x800685CC: jal         0x80028C2C
    // 0x800685D0: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    func_80028C2C(rdram, ctx);
        goto after_3;
    // 0x800685D0: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    after_3:
    // 0x800685D4: mul.s       $f6, $f0, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x800685D8: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    // 0x800685DC: jal         0x80028AB8
    // 0x800685E0: swc1        $f6, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f6.u32l;
    func_80028AB8(rdram, ctx);
        goto after_4;
    // 0x800685E0: swc1        $f6, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f6.u32l;
    after_4:
    // 0x800685E4: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x800685E8: jal         0x80028C2C
    // 0x800685EC: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    func_80028C2C(rdram, ctx);
        goto after_5;
    // 0x800685EC: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    after_5:
    // 0x800685F0: mul.s       $f10, $f0, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f24.fl);
    // 0x800685F4: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x800685F8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800685FC: jal         0x80028C2C
    // 0x80068600: add.s       $f12, $f10, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f8.fl;
    func_80028C2C(rdram, ctx);
        goto after_6;
    // 0x80068600: add.s       $f12, $f10, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f8.fl;
    after_6:
    // 0x80068604: mul.s       $f6, $f0, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x80068608: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    // 0x8006860C: jal         0x80028C00
    // 0x80068610: swc1        $f6, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f6.u32l;
    func_80028C00(rdram, ctx);
        goto after_7;
    // 0x80068610: swc1        $f6, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f6.u32l;
    after_7:
    // 0x80068614: mul.s       $f4, $f0, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x80068618: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x8006861C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80068620: swc1        $f4, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f4.u32l;
    // 0x80068624: lwc1        $f10, 0x0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X0);
    // 0x80068628: nop

    // 0x8006862C: swc1        $f10, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->f10.u32l;
    // 0x80068630: lwc1        $f8, 0x4($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X4);
    // 0x80068634: lwc1        $f10, 0x4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4);
    // 0x80068638: mul.s       $f4, $f8, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f6.fl);
    // 0x8006863C: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80068640: swc1        $f8, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->f8.u32l;
    // 0x80068644: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    // 0x80068648: nop

    // 0x8006864C: swc1        $f6, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f6.u32l;
    // 0x80068650: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80068654: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80068658: jr          $ra
    // 0x8006865C: nop

    return;
    // 0x8006865C: nop

;}
RECOMP_FUNC void func_80068660(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80068660: addiu       $sp, $sp, -0x310
    ctx->r29 = ADD32(ctx->r29, -0X310);
    // 0x80068664: sw          $ra, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r31;
    // 0x80068668: sw          $fp, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r30;
    // 0x8006866C: sw          $s7, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r23;
    // 0x80068670: sw          $s6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r22;
    // 0x80068674: sw          $s5, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r21;
    // 0x80068678: sw          $s4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r20;
    // 0x8006867C: sw          $s3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r19;
    // 0x80068680: sw          $s2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r18;
    // 0x80068684: sw          $s1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r17;
    // 0x80068688: sw          $s0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r16;
    // 0x8006868C: swc1        $f31, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x80068690: swc1        $f30, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f30.u32l;
    // 0x80068694: swc1        $f29, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x80068698: swc1        $f28, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f28.u32l;
    // 0x8006869C: swc1        $f27, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x800686A0: swc1        $f26, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f26.u32l;
    // 0x800686A4: swc1        $f25, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x800686A8: swc1        $f24, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f24.u32l;
    // 0x800686AC: swc1        $f23, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x800686B0: swc1        $f22, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f22.u32l;
    // 0x800686B4: swc1        $f21, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800686B8: jal         0x80007774
    // 0x800686BC: swc1        $f20, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x800686BC: swc1        $f20, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x800686C0: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x800686C4: addiu       $t7, $t7, 0x2574
    ctx->r15 = ADD32(ctx->r15, 0X2574);
    // 0x800686C8: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x800686CC: lw          $s7, 0x1C($v0)
    ctx->r23 = MEM_W(ctx->r2, 0X1C);
    // 0x800686D0: addiu       $t6, $sp, 0xD0
    ctx->r14 = ADD32(ctx->r29, 0XD0);
    // 0x800686D4: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x800686D8: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x800686DC: lw          $t9, 0x4($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X4);
    // 0x800686E0: addiu       $a0, $zero, 0x764
    ctx->r4 = ADD32(0, 0X764);
    // 0x800686E4: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x800686E8: jal         0x8001BD98
    // 0x800686EC: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    func_8001BD98(rdram, ctx);
        goto after_1;
    // 0x800686EC: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    after_1:
    // 0x800686F0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800686F4: lwc1        $f0, 0x6420($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6420);
    // 0x800686F8: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
    // 0x800686FC: addiu       $v0, $sp, 0xEC
    ctx->r2 = ADD32(ctx->r29, 0XEC);
    // 0x80068700: addiu       $v1, $sp, 0xF8
    ctx->r3 = ADD32(ctx->r29, 0XF8);
    // 0x80068704: addiu       $a0, $sp, 0x138
    ctx->r4 = ADD32(ctx->r29, 0X138);
    // 0x80068708: swc1        $f0, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f0.u32l;
    // 0x8006870C: swc1        $f0, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f0.u32l;
    // 0x80068710: swc1        $f0, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f0.u32l;
L_80068714:
    // 0x80068714: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80068718: sltu        $at, $v1, $a0
    ctx->r1 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x8006871C: bne         $at, $zero, L_80068714
    if (ctx->r1 != 0) {
        // 0x80068720: sw          $v0, -0x4($v1)
        MEM_W(-0X4, ctx->r3) = ctx->r2;
            goto L_80068714;
    }
    // 0x80068720: sw          $v0, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r2;
    // 0x80068724: addiu       $fp, $sp, 0x138
    ctx->r30 = ADD32(ctx->r29, 0X138);
    // 0x80068728: addiu       $t8, $sp, 0xF8
    ctx->r24 = ADD32(ctx->r29, 0XF8);
    // 0x8006872C: addiu       $t6, $zero, 0x10
    ctx->r14 = ADD32(0, 0X10);
    // 0x80068730: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x80068734: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x80068738: sw          $fp, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r30;
    // 0x8006873C: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x80068740: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x80068744: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x80068748: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8006874C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80068750: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80068754: jal         0x80019F10
    // 0x80068758: sw          $t0, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r8;
    func_80019F10(rdram, ctx);
        goto after_2;
    // 0x80068758: sw          $t0, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r8;
    after_2:
    // 0x8006875C: sw          $v0, 0x304($sp)
    MEM_W(0X304, ctx->r29) = ctx->r2;
    // 0x80068760: addiu       $a0, $zero, 0x3AA
    ctx->r4 = ADD32(0, 0X3AA);
    // 0x80068764: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80068768: jal         0x8001D138
    // 0x8006876C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_3;
    // 0x8006876C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x80068770: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x80068774: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80068778: jal         0x80019164
    // 0x8006877C: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    func_80019164(rdram, ctx);
        goto after_4;
    // 0x8006877C: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    after_4:
    // 0x80068780: sw          $s3, 0x300($sp)
    MEM_W(0X300, ctx->r29) = ctx->r19;
    // 0x80068784: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80068788: jal         0x8001C468
    // 0x8006878C: addiu       $a1, $zero, 0x3AA
    ctx->r5 = ADD32(0, 0X3AA);
    func_8001C468(rdram, ctx);
        goto after_5;
    // 0x8006878C: addiu       $a1, $zero, 0x3AA
    ctx->r5 = ADD32(0, 0X3AA);
    after_5:
    // 0x80068790: lw          $a0, 0x300($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X300);
    // 0x80068794: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80068798: jal         0x800192E8
    // 0x8006879C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800192E8(rdram, ctx);
        goto after_6;
    // 0x8006879C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
    // 0x800687A0: lw          $a0, 0x300($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X300);
    // 0x800687A4: addiu       $a1, $s7, 0xC
    ctx->r5 = ADD32(ctx->r23, 0XC);
    // 0x800687A8: jal         0x8001913C
    // 0x800687AC: sw          $a1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r5;
    func_8001913C(rdram, ctx);
        goto after_7;
    // 0x800687AC: sw          $a1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r5;
    after_7:
    // 0x800687B0: lwc1        $f4, 0x0($s7)
    ctx->f4.u32l = MEM_W(ctx->r23, 0X0);
    // 0x800687B4: addiu       $s6, $sp, 0x138
    ctx->r22 = ADD32(ctx->r29, 0X138);
    // 0x800687B8: swc1        $f4, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f4.u32l;
    // 0x800687BC: lwc1        $f6, 0x4($s7)
    ctx->f6.u32l = MEM_W(ctx->r23, 0X4);
    // 0x800687C0: addiu       $s3, $sp, 0x238
    ctx->r19 = ADD32(ctx->r29, 0X238);
    // 0x800687C4: swc1        $f6, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f6.u32l;
    // 0x800687C8: lwc1        $f8, 0x8($s7)
    ctx->f8.u32l = MEM_W(ctx->r23, 0X8);
    // 0x800687CC: addiu       $s4, $sp, 0x178
    ctx->r20 = ADD32(ctx->r29, 0X178);
    // 0x800687D0: addiu       $s5, $sp, 0x238
    ctx->r21 = ADD32(ctx->r29, 0X238);
    // 0x800687D4: swc1        $f8, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f8.u32l;
L_800687D8:
    // 0x800687D8: sw          $s3, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r19;
    // 0x800687DC: or          $s0, $s7, $zero
    ctx->r16 = ctx->r23 | 0;
    // 0x800687E0: or          $s2, $s3, $zero
    ctx->r18 = ctx->r19 | 0;
    // 0x800687E4: jal         0x80068530
    // 0x800687E8: or          $s1, $s4, $zero
    ctx->r17 = ctx->r20 | 0;
    func_80068530(rdram, ctx);
        goto after_8;
    // 0x800687E8: or          $s1, $s4, $zero
    ctx->r17 = ctx->r20 | 0;
    after_8:
    // 0x800687EC: addiu       $s4, $s4, 0xC
    ctx->r20 = ADD32(ctx->r20, 0XC);
    // 0x800687F0: addiu       $s6, $s6, 0x4
    ctx->r22 = ADD32(ctx->r22, 0X4);
    // 0x800687F4: bne         $s4, $s5, L_800687D8
    if (ctx->r20 != ctx->r21) {
        // 0x800687F8: addiu       $s3, $s3, 0xC
        ctx->r19 = ADD32(ctx->r19, 0XC);
            goto L_800687D8;
    }
    // 0x800687F8: addiu       $s3, $s3, 0xC
    ctx->r19 = ADD32(ctx->r19, 0XC);
    // 0x800687FC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80068800: lwc1        $f30, 0x6424($at)
    ctx->f30.u32l = MEM_W(ctx->r1, 0X6424);
    // 0x80068804: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80068808: lwc1        $f28, 0x6428($at)
    ctx->f28.u32l = MEM_W(ctx->r1, 0X6428);
    // 0x8006880C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80068810: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x80068814: addiu       $s6, $zero, 0x10
    ctx->r22 = ADD32(0, 0X10);
    // 0x80068818: lw          $v0, 0x24($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X24);
L_8006881C:
    // 0x8006881C: nop

    // 0x80068820: andi        $t7, $v0, 0x4000
    ctx->r15 = ctx->r2 & 0X4000;
    // 0x80068824: bne         $t7, $zero, L_800689E8
    if (ctx->r15 != 0) {
        // 0x80068828: andi        $t9, $v0, 0x800
        ctx->r25 = ctx->r2 & 0X800;
            goto L_800689E8;
    }
    // 0x80068828: andi        $t9, $v0, 0x800
    ctx->r25 = ctx->r2 & 0X800;
    // 0x8006882C: beq         $t9, $zero, L_80068880
    if (ctx->r25 == 0) {
        // 0x80068830: andi        $t7, $v0, 0x400
        ctx->r15 = ctx->r2 & 0X400;
            goto L_80068880;
    }
    // 0x80068830: andi        $t7, $v0, 0x400
    ctx->r15 = ctx->r2 & 0X400;
    // 0x80068834: lwc1        $f10, 0x0($s7)
    ctx->f10.u32l = MEM_W(ctx->r23, 0X0);
    // 0x80068838: addiu       $at, $zero, -0x801
    ctx->r1 = ADD32(0, -0X801);
    // 0x8006883C: swc1        $f10, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f10.u32l;
    // 0x80068840: lwc1        $f4, 0x4($s7)
    ctx->f4.u32l = MEM_W(ctx->r23, 0X4);
    // 0x80068844: addiu       $a1, $sp, 0xE0
    ctx->r5 = ADD32(ctx->r29, 0XE0);
    // 0x80068848: swc1        $f4, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f4.u32l;
    // 0x8006884C: lwc1        $f6, 0x8($s7)
    ctx->f6.u32l = MEM_W(ctx->r23, 0X8);
    // 0x80068850: nop

    // 0x80068854: swc1        $f6, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f6.u32l;
    // 0x80068858: lw          $t8, 0x24($s7)
    ctx->r24 = MEM_W(ctx->r23, 0X24);
    // 0x8006885C: nop

    // 0x80068860: and         $t6, $t8, $at
    ctx->r14 = ctx->r24 & ctx->r1;
    // 0x80068864: sw          $t6, 0x24($s7)
    MEM_W(0X24, ctx->r23) = ctx->r14;
    // 0x80068868: lw          $a0, 0x300($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X300);
    // 0x8006886C: jal         0x80019164
    // 0x80068870: nop

    func_80019164(rdram, ctx);
        goto after_9;
    // 0x80068870: nop

    after_9:
    // 0x80068874: lw          $v0, 0x24($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X24);
    // 0x80068878: nop

    // 0x8006887C: andi        $t7, $v0, 0x400
    ctx->r15 = ctx->r2 & 0X400;
L_80068880:
    // 0x80068880: beq         $t7, $zero, L_800688A8
    if (ctx->r15 == 0) {
        // 0x80068884: nop
    
            goto L_800688A8;
    }
    // 0x80068884: nop

    // 0x80068888: lw          $a0, 0x300($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X300);
    // 0x8006888C: lw          $a1, 0x9C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X9C);
    // 0x80068890: jal         0x8001913C
    // 0x80068894: nop

    func_8001913C(rdram, ctx);
        goto after_10;
    // 0x80068894: nop

    after_10:
    // 0x80068898: lw          $t9, 0x24($s7)
    ctx->r25 = MEM_W(ctx->r23, 0X24);
    // 0x8006889C: addiu       $at, $zero, -0x401
    ctx->r1 = ADD32(0, -0X401);
    // 0x800688A0: and         $t8, $t9, $at
    ctx->r24 = ctx->r25 & ctx->r1;
    // 0x800688A4: sw          $t8, 0x24($s7)
    MEM_W(0X24, ctx->r23) = ctx->r24;
L_800688A8:
    // 0x800688A8: lwc1        $f20, 0xE8($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x800688AC: lwc1        $f18, 0xE4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x800688B0: lwc1        $f16, 0xE0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x800688B4: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x800688B8: addiu       $s3, $sp, 0x238
    ctx->r19 = ADD32(ctx->r29, 0X238);
    // 0x800688BC: addiu       $s4, $sp, 0x178
    ctx->r20 = ADD32(ctx->r29, 0X178);
L_800688C0:
    // 0x800688C0: lwc1        $f14, 0x0($s3)
    ctx->f14.u32l = MEM_W(ctx->r19, 0X0);
    // 0x800688C4: sll         $t6, $s5, 2
    ctx->r14 = S32(ctx->r21 << 2);
    // 0x800688C8: c.lt.s      $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.fl < ctx->f14.fl;
    // 0x800688CC: addu        $t7, $fp, $t6
    ctx->r15 = ADD32(ctx->r30, ctx->r14);
    // 0x800688D0: bc1f        L_800688E4
    if (!c1cs) {
        // 0x800688D4: or          $s0, $s7, $zero
        ctx->r16 = ctx->r23 | 0;
            goto L_800688E4;
    }
    // 0x800688D4: or          $s0, $s7, $zero
    ctx->r16 = ctx->r23 | 0;
    // 0x800688D8: sub.s       $f0, $f16, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f16.fl - ctx->f14.fl;
    // 0x800688DC: b           L_800688E8
    // 0x800688E0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_800688E8;
    // 0x800688E0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_800688E4:
    // 0x800688E4: sub.s       $f0, $f16, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f16.fl - ctx->f14.fl;
L_800688E8:
    // 0x800688E8: c.lt.s      $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f26.fl < ctx->f0.fl;
    // 0x800688EC: or          $s2, $s3, $zero
    ctx->r18 = ctx->r19 | 0;
    // 0x800688F0: bc1t        L_80068968
    if (c1cs) {
        // 0x800688F4: or          $s1, $s4, $zero
        ctx->r17 = ctx->r20 | 0;
            goto L_80068968;
    }
    // 0x800688F4: or          $s1, $s4, $zero
    ctx->r17 = ctx->r20 | 0;
    // 0x800688F8: lwc1        $f12, 0x4($s3)
    ctx->f12.u32l = MEM_W(ctx->r19, 0X4);
    // 0x800688FC: nop

    // 0x80068900: c.lt.s      $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f18.fl < ctx->f12.fl;
    // 0x80068904: nop

    // 0x80068908: bc1f        L_8006891C
    if (!c1cs) {
        // 0x8006890C: nop
    
            goto L_8006891C;
    }
    // 0x8006890C: nop

    // 0x80068910: sub.s       $f0, $f18, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f18.fl - ctx->f12.fl;
    // 0x80068914: b           L_80068920
    // 0x80068918: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80068920;
    // 0x80068918: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_8006891C:
    // 0x8006891C: sub.s       $f0, $f18, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f18.fl - ctx->f12.fl;
L_80068920:
    // 0x80068920: c.lt.s      $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f26.fl < ctx->f0.fl;
    // 0x80068924: nop

    // 0x80068928: bc1t        L_80068968
    if (c1cs) {
        // 0x8006892C: nop
    
            goto L_80068968;
    }
    // 0x8006892C: nop

    // 0x80068930: lwc1        $f2, 0x8($s3)
    ctx->f2.u32l = MEM_W(ctx->r19, 0X8);
    // 0x80068934: nop

    // 0x80068938: c.lt.s      $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f20.fl < ctx->f2.fl;
    // 0x8006893C: nop

    // 0x80068940: bc1f        L_80068954
    if (!c1cs) {
        // 0x80068944: nop
    
            goto L_80068954;
    }
    // 0x80068944: nop

    // 0x80068948: sub.s       $f0, $f20, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f20.fl - ctx->f2.fl;
    // 0x8006894C: b           L_80068958
    // 0x80068950: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80068958;
    // 0x80068950: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_80068954:
    // 0x80068954: sub.s       $f0, $f20, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f20.fl - ctx->f2.fl;
L_80068958:
    // 0x80068958: c.lt.s      $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f26.fl < ctx->f0.fl;
    // 0x8006895C: nop

    // 0x80068960: bc1f        L_8006898C
    if (!c1cs) {
        // 0x80068964: nop
    
            goto L_8006898C;
    }
    // 0x80068964: nop

L_80068968:
    // 0x80068968: jal         0x80068530
    // 0x8006896C: sw          $s3, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r19;
    func_80068530(rdram, ctx);
        goto after_11;
    // 0x8006896C: sw          $s3, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r19;
    after_11:
    // 0x80068970: lwc1        $f14, 0x0($s3)
    ctx->f14.u32l = MEM_W(ctx->r19, 0X0);
    // 0x80068974: lwc1        $f12, 0x4($s3)
    ctx->f12.u32l = MEM_W(ctx->r19, 0X4);
    // 0x80068978: lwc1        $f2, 0x8($s3)
    ctx->f2.u32l = MEM_W(ctx->r19, 0X8);
    // 0x8006897C: lwc1        $f20, 0xE8($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x80068980: lwc1        $f18, 0xE4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x80068984: lwc1        $f16, 0xE0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x80068988: nop

L_8006898C:
    // 0x8006898C: lwc1        $f24, 0x0($s4)
    ctx->f24.u32l = MEM_W(ctx->r20, 0X0);
    // 0x80068990: lwc1        $f22, 0x4($s4)
    ctx->f22.u32l = MEM_W(ctx->r20, 0X4);
    // 0x80068994: mul.s       $f24, $f24, $f28
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f24.fl = MUL_S(ctx->f24.fl, ctx->f28.fl);
    // 0x80068998: sub.s       $f22, $f22, $f30
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f22.fl = ctx->f22.fl - ctx->f30.fl;
    // 0x8006899C: lwc1        $f10, 0x8($s4)
    ctx->f10.u32l = MEM_W(ctx->r20, 0X8);
    // 0x800689A0: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x800689A4: mul.s       $f10, $f10, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f28.fl);
    // 0x800689A8: add.s       $f8, $f14, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = ctx->f14.fl + ctx->f24.fl;
    // 0x800689AC: swc1        $f24, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->f24.u32l;
    // 0x800689B0: swc1        $f8, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->f8.u32l;
    // 0x800689B4: add.s       $f8, $f12, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = ctx->f12.fl + ctx->f22.fl;
    // 0x800689B8: swc1        $f22, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->f22.u32l;
    // 0x800689BC: add.s       $f22, $f2, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f22.fl = ctx->f2.fl + ctx->f10.fl;
    // 0x800689C0: swc1        $f8, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->f8.u32l;
    // 0x800689C4: swc1        $f10, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->f10.u32l;
    // 0x800689C8: swc1        $f22, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->f22.u32l;
    // 0x800689CC: addiu       $s3, $s3, 0xC
    ctx->r19 = ADD32(ctx->r19, 0XC);
    // 0x800689D0: bne         $s5, $s6, L_800688C0
    if (ctx->r21 != ctx->r22) {
        // 0x800689D4: addiu       $s4, $s4, 0xC
        ctx->r20 = ADD32(ctx->r20, 0XC);
            goto L_800688C0;
    }
    // 0x800689D4: addiu       $s4, $s4, 0xC
    ctx->r20 = ADD32(ctx->r20, 0XC);
    // 0x800689D8: jal         0x80007AB0
    // 0x800689DC: nop

    func_80007AB0(rdram, ctx);
        goto after_12;
    // 0x800689DC: nop

    after_12:
    // 0x800689E0: b           L_8006881C
    // 0x800689E4: lw          $v0, 0x24($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X24);
        goto L_8006881C;
    // 0x800689E4: lw          $v0, 0x24($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X24);
L_800689E8:
    // 0x800689E8: addiu       $s6, $sp, 0x138
    ctx->r22 = ADD32(ctx->r29, 0X138);
    // 0x800689EC: addiu       $v0, $sp, 0x178
    ctx->r2 = ADD32(ctx->r29, 0X178);
L_800689F0:
    // 0x800689F0: addiu       $s6, $s6, 0x10
    ctx->r22 = ADD32(ctx->r22, 0X10);
    // 0x800689F4: sw          $zero, -0x10($s6)
    MEM_W(-0X10, ctx->r22) = 0;
    // 0x800689F8: sw          $zero, -0xC($s6)
    MEM_W(-0XC, ctx->r22) = 0;
    // 0x800689FC: sw          $zero, -0x8($s6)
    MEM_W(-0X8, ctx->r22) = 0;
    // 0x80068A00: bne         $s6, $v0, L_800689F0
    if (ctx->r22 != ctx->r2) {
        // 0x80068A04: sw          $zero, -0x4($s6)
        MEM_W(-0X4, ctx->r22) = 0;
            goto L_800689F0;
    }
    // 0x80068A04: sw          $zero, -0x4($s6)
    MEM_W(-0X4, ctx->r22) = 0;
    // 0x80068A08: lw          $a0, 0x304($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X304);
    // 0x80068A0C: jal         0x800195C4
    // 0x80068A10: nop

    func_800195C4(rdram, ctx);
        goto after_13;
    // 0x80068A10: nop

    after_13:
    // 0x80068A14: lw          $a0, 0xDC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XDC);
    // 0x80068A18: jal         0x8001B7B8
    // 0x80068A1C: nop

    func_8001B7B8(rdram, ctx);
        goto after_14;
    // 0x80068A1C: nop

    after_14:
    // 0x80068A20: addiu       $s3, $sp, 0x300
    ctx->r19 = ADD32(ctx->r29, 0X300);
    // 0x80068A24: addiu       $s5, $s3, 0x4
    ctx->r21 = ADD32(ctx->r19, 0X4);
L_80068A28:
    // 0x80068A28: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x80068A2C: jal         0x8001C568
    // 0x80068A30: nop

    func_8001C568(rdram, ctx);
        goto after_15;
    // 0x80068A30: nop

    after_15:
    // 0x80068A34: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x80068A38: sltu        $at, $s3, $s5
    ctx->r1 = ctx->r19 < ctx->r21 ? 1 : 0;
    // 0x80068A3C: bne         $at, $zero, L_80068A28
    if (ctx->r1 != 0) {
        // 0x80068A40: nop
    
            goto L_80068A28;
    }
    // 0x80068A40: nop

    // 0x80068A44: jal         0x8005CD50
    // 0x80068A48: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    func_8005CD50(rdram, ctx);
        goto after_16;
    // 0x80068A48: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    after_16:
    // 0x80068A4C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80068A50: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x80068A54: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x80068A58: nop

    // 0x80068A5C: addiu       $t6, $t8, -0x1
    ctx->r14 = ADD32(ctx->r24, -0X1);
    // 0x80068A60: jal         0x80007AE0
    // 0x80068A64: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    func_80007AE0(rdram, ctx);
        goto after_17;
    // 0x80068A64: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    after_17:
    // 0x80068A68: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
    // 0x80068A6C: lwc1        $f21, 0x30($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x80068A70: lwc1        $f20, 0x34($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80068A74: lwc1        $f23, 0x38($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x80068A78: lwc1        $f22, 0x3C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80068A7C: lwc1        $f25, 0x40($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x80068A80: lwc1        $f24, 0x44($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80068A84: lwc1        $f27, 0x48($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X48);
    // 0x80068A88: lwc1        $f26, 0x4C($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80068A8C: lwc1        $f29, 0x50($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X50);
    // 0x80068A90: lwc1        $f28, 0x54($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80068A94: lwc1        $f31, 0x58($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X58);
    // 0x80068A98: lwc1        $f30, 0x5C($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80068A9C: lw          $s0, 0x60($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X60);
    // 0x80068AA0: lw          $s1, 0x64($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X64);
    // 0x80068AA4: lw          $s2, 0x68($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X68);
    // 0x80068AA8: lw          $s3, 0x6C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X6C);
    // 0x80068AAC: lw          $s4, 0x70($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X70);
    // 0x80068AB0: lw          $s5, 0x74($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X74);
    // 0x80068AB4: lw          $s6, 0x78($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X78);
    // 0x80068AB8: lw          $s7, 0x7C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X7C);
    // 0x80068ABC: lw          $fp, 0x80($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X80);
    // 0x80068AC0: jr          $ra
    // 0x80068AC4: addiu       $sp, $sp, 0x310
    ctx->r29 = ADD32(ctx->r29, 0X310);
    return;
    // 0x80068AC4: addiu       $sp, $sp, 0x310
    ctx->r29 = ADD32(ctx->r29, 0X310);
;}
RECOMP_FUNC void func_80068AC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80068AC8: addiu       $sp, $sp, -0x2D8
    ctx->r29 = ADD32(ctx->r29, -0X2D8);
    // 0x80068ACC: sw          $ra, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r31;
    // 0x80068AD0: sw          $fp, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r30;
    // 0x80068AD4: sw          $s7, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r23;
    // 0x80068AD8: sw          $s6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r22;
    // 0x80068ADC: sw          $s5, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r21;
    // 0x80068AE0: sw          $s4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r20;
    // 0x80068AE4: sw          $s3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r19;
    // 0x80068AE8: sw          $s2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r18;
    // 0x80068AEC: sw          $s1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r17;
    // 0x80068AF0: sw          $s0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r16;
    // 0x80068AF4: swc1        $f31, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x80068AF8: swc1        $f30, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f30.u32l;
    // 0x80068AFC: swc1        $f29, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x80068B00: swc1        $f28, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f28.u32l;
    // 0x80068B04: swc1        $f27, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x80068B08: swc1        $f26, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f26.u32l;
    // 0x80068B0C: swc1        $f25, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x80068B10: swc1        $f24, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f24.u32l;
    // 0x80068B14: swc1        $f23, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80068B18: swc1        $f22, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f22.u32l;
    // 0x80068B1C: swc1        $f21, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80068B20: jal         0x80007774
    // 0x80068B24: swc1        $f20, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x80068B24: swc1        $f20, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x80068B28: lw          $s7, 0x1C($v0)
    ctx->r23 = MEM_W(ctx->r2, 0X1C);
    // 0x80068B2C: jal         0x8001BD98
    // 0x80068B30: addiu       $a0, $zero, 0x764
    ctx->r4 = ADD32(0, 0X764);
    func_8001BD98(rdram, ctx);
        goto after_1;
    // 0x80068B30: addiu       $a0, $zero, 0x764
    ctx->r4 = ADD32(0, 0X764);
    after_1:
    // 0x80068B34: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80068B38: lwc1        $f0, 0x642C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X642C);
    // 0x80068B3C: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
    // 0x80068B40: addiu       $v0, $sp, 0xB8
    ctx->r2 = ADD32(ctx->r29, 0XB8);
    // 0x80068B44: addiu       $v1, $sp, 0xC4
    ctx->r3 = ADD32(ctx->r29, 0XC4);
    // 0x80068B48: addiu       $a0, $sp, 0x104
    ctx->r4 = ADD32(ctx->r29, 0X104);
    // 0x80068B4C: swc1        $f0, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f0.u32l;
    // 0x80068B50: swc1        $f0, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f0.u32l;
    // 0x80068B54: swc1        $f0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f0.u32l;
L_80068B58:
    // 0x80068B58: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80068B5C: sltu        $at, $v1, $a0
    ctx->r1 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x80068B60: bne         $at, $zero, L_80068B58
    if (ctx->r1 != 0) {
        // 0x80068B64: sw          $v0, -0x4($v1)
        MEM_W(-0X4, ctx->r3) = ctx->r2;
            goto L_80068B58;
    }
    // 0x80068B64: sw          $v0, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r2;
    // 0x80068B68: addiu       $s5, $sp, 0x104
    ctx->r21 = ADD32(ctx->r29, 0X104);
    // 0x80068B6C: addiu       $t6, $sp, 0xC4
    ctx->r14 = ADD32(ctx->r29, 0XC4);
    // 0x80068B70: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x80068B74: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x80068B78: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x80068B7C: sw          $s5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r21;
    // 0x80068B80: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x80068B84: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x80068B88: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x80068B8C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80068B90: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80068B94: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80068B98: jal         0x80019F10
    // 0x80068B9C: sw          $t0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r8;
    func_80019F10(rdram, ctx);
        goto after_2;
    // 0x80068B9C: sw          $t0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r8;
    after_2:
    // 0x80068BA0: sw          $v0, 0x2CC($sp)
    MEM_W(0X2CC, ctx->r29) = ctx->r2;
    // 0x80068BA4: lwc1        $f4, 0x0($s7)
    ctx->f4.u32l = MEM_W(ctx->r23, 0X0);
    // 0x80068BA8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80068BAC: swc1        $f4, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f4.u32l;
    // 0x80068BB0: lwc1        $f30, 0x4($s7)
    ctx->f30.u32l = MEM_W(ctx->r23, 0X4);
    // 0x80068BB4: lwc1        $f6, 0x8($s7)
    ctx->f6.u32l = MEM_W(ctx->r23, 0X8);
    // 0x80068BB8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80068BBC: addiu       $v0, $sp, 0x2E8
    ctx->r2 = ADD32(ctx->r29, 0X2E8);
    // 0x80068BC0: addiu       $v1, $sp, 0x104
    ctx->r3 = ADD32(ctx->r29, 0X104);
    // 0x80068BC4: addiu       $s0, $sp, 0x204
    ctx->r16 = ADD32(ctx->r29, 0X204);
    // 0x80068BC8: addiu       $a1, $sp, 0x210
    ctx->r5 = ADD32(ctx->r29, 0X210);
    // 0x80068BCC: addiu       $a2, $sp, 0x21C
    ctx->r6 = ADD32(ctx->r29, 0X21C);
    // 0x80068BD0: addiu       $a0, $sp, 0x228
    ctx->r4 = ADD32(ctx->r29, 0X228);
    // 0x80068BD4: swc1        $f6, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f6.u32l;
    // 0x80068BD8: sub.s       $f0, $f30, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f30.fl - ctx->f8.fl;
L_80068BDC:
    // 0x80068BDC: sw          $s0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r16;
    // 0x80068BE0: lwc1        $f10, 0xAC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x80068BE4: swc1        $f0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f0.u32l;
    // 0x80068BE8: swc1        $f10, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f10.u32l;
    // 0x80068BEC: lwc1        $f4, 0xB4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x80068BF0: sw          $a1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r5;
    // 0x80068BF4: swc1        $f4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f4.u32l;
    // 0x80068BF8: lwc1        $f6, 0xAC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x80068BFC: swc1        $f0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f0.u32l;
    // 0x80068C00: swc1        $f6, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f6.u32l;
    // 0x80068C04: lwc1        $f8, 0xB4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x80068C08: sw          $a2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r6;
    // 0x80068C0C: swc1        $f8, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f8.u32l;
    // 0x80068C10: lwc1        $f10, 0xAC($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x80068C14: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x80068C18: swc1        $f10, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f10.u32l;
    // 0x80068C1C: lwc1        $f4, 0xB4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x80068C20: sw          $a0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r4;
    // 0x80068C24: swc1        $f4, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f4.u32l;
    // 0x80068C28: lwc1        $f6, 0xAC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x80068C2C: swc1        $f0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f0.u32l;
    // 0x80068C30: swc1        $f6, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f6.u32l;
    // 0x80068C34: lwc1        $f8, 0xB4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x80068C38: addiu       $a0, $a0, 0x30
    ctx->r4 = ADD32(ctx->r4, 0X30);
    // 0x80068C3C: addiu       $a2, $a2, 0x30
    ctx->r6 = ADD32(ctx->r6, 0X30);
    // 0x80068C40: addiu       $a1, $a1, 0x30
    ctx->r5 = ADD32(ctx->r5, 0X30);
    // 0x80068C44: addiu       $s0, $s0, 0x30
    ctx->r16 = ADD32(ctx->r16, 0X30);
    // 0x80068C48: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x80068C4C: bne         $a0, $v0, L_80068BDC
    if (ctx->r4 != ctx->r2) {
        // 0x80068C50: swc1        $f8, -0x4($s0)
        MEM_W(-0X4, ctx->r16) = ctx->f8.u32l;
            goto L_80068BDC;
    }
    // 0x80068C50: swc1        $f8, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = ctx->f8.u32l;
    // 0x80068C54: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80068C58: lwc1        $f29, 0x6430($at)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r1, 0X6430);
    // 0x80068C5C: lwc1        $f28, 0x6434($at)
    ctx->f28.u32l = MEM_W(ctx->r1, 0X6434);
    // 0x80068C60: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80068C64: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x80068C68: lui         $at, 0x3D80
    ctx->r1 = S32(0X3D80 << 16);
    // 0x80068C6C: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x80068C70: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x80068C74: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x80068C78: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80068C7C: lwc1        $f21, 0x6438($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X6438);
    // 0x80068C80: lwc1        $f20, 0x643C($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X643C);
    // 0x80068C84: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x80068C88: addiu       $fp, $zero, -0x801
    ctx->r30 = ADD32(0, -0X801);
    // 0x80068C8C: addiu       $s4, $zero, 0x10
    ctx->r20 = ADD32(0, 0X10);
    // 0x80068C90: addiu       $s3, $sp, 0x204
    ctx->r19 = ADD32(ctx->r29, 0X204);
L_80068C94:
    // 0x80068C94: lw          $v0, 0x24($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X24);
    // 0x80068C98: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80068C9C: andi        $t8, $v0, 0x4000
    ctx->r24 = ctx->r2 & 0X4000;
    // 0x80068CA0: bne         $t8, $zero, L_80068E0C
    if (ctx->r24 != 0) {
        // 0x80068CA4: andi        $t9, $v0, 0x800
        ctx->r25 = ctx->r2 & 0X800;
            goto L_80068E0C;
    }
    // 0x80068CA4: andi        $t9, $v0, 0x800
    ctx->r25 = ctx->r2 & 0X800;
    // 0x80068CA8: beq         $t9, $zero, L_80068CCC
    if (ctx->r25 == 0) {
        // 0x80068CAC: addiu       $s0, $sp, 0x204
        ctx->r16 = ADD32(ctx->r29, 0X204);
            goto L_80068CCC;
    }
    // 0x80068CAC: addiu       $s0, $sp, 0x204
    ctx->r16 = ADD32(ctx->r29, 0X204);
    // 0x80068CB0: lwc1        $f10, 0x0($s7)
    ctx->f10.u32l = MEM_W(ctx->r23, 0X0);
    // 0x80068CB4: and         $t6, $v0, $fp
    ctx->r14 = ctx->r2 & ctx->r30;
    // 0x80068CB8: swc1        $f10, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f10.u32l;
    // 0x80068CBC: lwc1        $f4, 0x8($s7)
    ctx->f4.u32l = MEM_W(ctx->r23, 0X8);
    // 0x80068CC0: lwc1        $f30, 0x4($s7)
    ctx->f30.u32l = MEM_W(ctx->r23, 0X4);
    // 0x80068CC4: swc1        $f4, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f4.u32l;
    // 0x80068CC8: sw          $t6, 0x24($s7)
    MEM_W(0X24, ctx->r23) = ctx->r14;
L_80068CCC:
    // 0x80068CCC: addiu       $s1, $sp, 0x144
    ctx->r17 = ADD32(ctx->r29, 0X144);
L_80068CD0:
    // 0x80068CD0: lwc1        $f2, 0x4($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X4);
    // 0x80068CD4: sll         $t7, $s2, 2
    ctx->r15 = S32(ctx->r18 << 2);
    // 0x80068CD8: c.lt.s      $f2, $f30
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 30);
    c1cs = ctx->f2.fl < ctx->f30.fl;
    // 0x80068CDC: subu        $t7, $t7, $s2
    ctx->r15 = SUB32(ctx->r15, ctx->r18);
    // 0x80068CE0: bc1f        L_80068D88
    if (!c1cs) {
        // 0x80068CE4: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_80068D88;
    }
    // 0x80068CE4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80068CE8: sll         $t9, $s2, 2
    ctx->r25 = S32(ctx->r18 << 2);
    // 0x80068CEC: addu        $t6, $s5, $t9
    ctx->r14 = ADD32(ctx->r21, ctx->r25);
    // 0x80068CF0: addu        $t8, $s3, $t7
    ctx->r24 = ADD32(ctx->r19, ctx->r15);
    // 0x80068CF4: jal         0x80027ECC
    // 0x80068CF8: sw          $t8, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r24;
    func_80027ECC(rdram, ctx);
        goto after_3;
    // 0x80068CF8: sw          $t8, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r24;
    after_3:
    // 0x80068CFC: andi        $t7, $v0, 0x40
    ctx->r15 = ctx->r2 & 0X40;
    // 0x80068D00: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x80068D04: nop

    // 0x80068D08: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80068D0C: sub.s       $f10, $f8, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f22.fl;
    // 0x80068D10: mul.s       $f4, $f10, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f24.fl);
    // 0x80068D14: jal         0x80027ECC
    // 0x80068D18: swc1        $f4, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f4.u32l;
    func_80027ECC(rdram, ctx);
        goto after_4;
    // 0x80068D18: swc1        $f4, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f4.u32l;
    after_4:
    // 0x80068D1C: andi        $t9, $v0, 0x1F
    ctx->r25 = ctx->r2 & 0X1F;
    // 0x80068D20: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x80068D24: lui         $at, 0x3E00
    ctx->r1 = S32(0X3E00 << 16);
    // 0x80068D28: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80068D2C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80068D30: nop

    // 0x80068D34: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80068D38: jal         0x80027ECC
    // 0x80068D3C: swc1        $f4, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f4.u32l;
    func_80027ECC(rdram, ctx);
        goto after_5;
    // 0x80068D3C: swc1        $f4, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f4.u32l;
    after_5:
    // 0x80068D40: andi        $t8, $v0, 0x40
    ctx->r24 = ctx->r2 & 0X40;
    // 0x80068D44: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80068D48: lwc1        $f4, 0x0($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X0);
    // 0x80068D4C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80068D50: sub.s       $f10, $f8, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f22.fl;
    // 0x80068D54: mul.s       $f0, $f10, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f0.fl = MUL_S(ctx->f10.fl, ctx->f24.fl);
    // 0x80068D58: swc1        $f0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f0.u32l;
    // 0x80068D5C: mul.s       $f6, $f4, $f26
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f26.fl);
    // 0x80068D60: lwc1        $f8, 0xAC($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x80068D64: swc1        $f30, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f30.u32l;
    // 0x80068D68: lwc1        $f2, 0x4($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X4);
    // 0x80068D6C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80068D70: mul.s       $f4, $f0, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f26.fl);
    // 0x80068D74: swc1        $f10, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f10.u32l;
    // 0x80068D78: lwc1        $f6, 0xB4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x80068D7C: nop

    // 0x80068D80: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80068D84: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
L_80068D88:
    // 0x80068D88: lwc1        $f10, 0x0($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X0);
    // 0x80068D8C: lwc1        $f8, 0x0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X0);
    // 0x80068D90: cvt.d.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.d = CVT_D_S(ctx->f10.fl);
    // 0x80068D94: mul.d       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f20.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f20.d);
    // 0x80068D98: lwc1        $f4, 0x4($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X4);
    // 0x80068D9C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80068DA0: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x80068DA4: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x80068DA8: cvt.s.d     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f0.fl = CVT_S_D(ctx->f6.d);
    // 0x80068DAC: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80068DB0: add.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x80068DB4: lwc1        $f4, -0x4($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, -0X4);
    // 0x80068DB8: sub.d       $f8, $f6, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f28.d); 
    ctx->f8.d = ctx->f6.d - ctx->f28.d;
    // 0x80068DBC: swc1        $f0, -0xC($s1)
    MEM_W(-0XC, ctx->r17) = ctx->f0.u32l;
    // 0x80068DC0: cvt.s.d     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f0.fl = CVT_S_D(ctx->f8.d);
    // 0x80068DC4: swc1        $f10, -0xC($s0)
    MEM_W(-0XC, ctx->r16) = ctx->f10.u32l;
    // 0x80068DC8: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80068DCC: mul.d       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f20.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f20.d);
    // 0x80068DD0: add.s       $f10, $f2, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x80068DD4: swc1        $f0, -0x8($s1)
    MEM_W(-0X8, ctx->r17) = ctx->f0.u32l;
    // 0x80068DD8: swc1        $f10, -0x8($s0)
    MEM_W(-0X8, ctx->r16) = ctx->f10.u32l;
    // 0x80068DDC: lwc1        $f10, -0x4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, -0X4);
    // 0x80068DE0: cvt.s.d     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f0.fl = CVT_S_D(ctx->f8.d);
    // 0x80068DE4: add.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f0.fl;
    // 0x80068DE8: swc1        $f0, -0x4($s1)
    MEM_W(-0X4, ctx->r17) = ctx->f0.u32l;
    // 0x80068DEC: bne         $s2, $s4, L_80068CD0
    if (ctx->r18 != ctx->r20) {
        // 0x80068DF0: swc1        $f4, -0x4($s0)
        MEM_W(-0X4, ctx->r16) = ctx->f4.u32l;
            goto L_80068CD0;
    }
    // 0x80068DF0: swc1        $f4, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = ctx->f4.u32l;
    // 0x80068DF4: jal         0x80007AB0
    // 0x80068DF8: nop

    func_80007AB0(rdram, ctx);
        goto after_6;
    // 0x80068DF8: nop

    after_6:
    // 0x80068DFC: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x80068E00: slti        $at, $s6, 0xA
    ctx->r1 = SIGNED(ctx->r22) < 0XA ? 1 : 0;
    // 0x80068E04: bne         $at, $zero, L_80068C94
    if (ctx->r1 != 0) {
        // 0x80068E08: nop
    
            goto L_80068C94;
    }
    // 0x80068E08: nop

L_80068E0C:
    // 0x80068E0C: addiu       $v1, $sp, 0x104
    ctx->r3 = ADD32(ctx->r29, 0X104);
    // 0x80068E10: addiu       $v0, $sp, 0x144
    ctx->r2 = ADD32(ctx->r29, 0X144);
L_80068E14:
    // 0x80068E14: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x80068E18: sw          $zero, -0x10($v1)
    MEM_W(-0X10, ctx->r3) = 0;
    // 0x80068E1C: sw          $zero, -0xC($v1)
    MEM_W(-0XC, ctx->r3) = 0;
    // 0x80068E20: sw          $zero, -0x8($v1)
    MEM_W(-0X8, ctx->r3) = 0;
    // 0x80068E24: bne         $v1, $v0, L_80068E14
    if (ctx->r3 != ctx->r2) {
        // 0x80068E28: sw          $zero, -0x4($v1)
        MEM_W(-0X4, ctx->r3) = 0;
            goto L_80068E14;
    }
    // 0x80068E28: sw          $zero, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = 0;
    // 0x80068E2C: lw          $a0, 0x2CC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2CC);
    // 0x80068E30: jal         0x800195C4
    // 0x80068E34: nop

    func_800195C4(rdram, ctx);
        goto after_7;
    // 0x80068E34: nop

    after_7:
    // 0x80068E38: lw          $a0, 0xA8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA8);
    // 0x80068E3C: jal         0x8001B7B8
    // 0x80068E40: nop

    func_8001B7B8(rdram, ctx);
        goto after_8;
    // 0x80068E40: nop

    after_8:
    // 0x80068E44: jal         0x8005CD50
    // 0x80068E48: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    func_8005CD50(rdram, ctx);
        goto after_9;
    // 0x80068E48: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    after_9:
    // 0x80068E4C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80068E50: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x80068E54: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80068E58: nop

    // 0x80068E5C: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80068E60: jal         0x80007AE0
    // 0x80068E64: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    func_80007AE0(rdram, ctx);
        goto after_10;
    // 0x80068E64: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    after_10:
    // 0x80068E68: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
    // 0x80068E6C: lwc1        $f21, 0x30($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x80068E70: lwc1        $f20, 0x34($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80068E74: lwc1        $f23, 0x38($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x80068E78: lwc1        $f22, 0x3C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80068E7C: lwc1        $f25, 0x40($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x80068E80: lwc1        $f24, 0x44($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80068E84: lwc1        $f27, 0x48($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X48);
    // 0x80068E88: lwc1        $f26, 0x4C($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80068E8C: lwc1        $f29, 0x50($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X50);
    // 0x80068E90: lwc1        $f28, 0x54($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80068E94: lwc1        $f31, 0x58($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X58);
    // 0x80068E98: lwc1        $f30, 0x5C($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80068E9C: lw          $s0, 0x60($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X60);
    // 0x80068EA0: lw          $s1, 0x64($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X64);
    // 0x80068EA4: lw          $s2, 0x68($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X68);
    // 0x80068EA8: lw          $s3, 0x6C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X6C);
    // 0x80068EAC: lw          $s4, 0x70($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X70);
    // 0x80068EB0: lw          $s5, 0x74($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X74);
    // 0x80068EB4: lw          $s6, 0x78($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X78);
    // 0x80068EB8: lw          $s7, 0x7C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X7C);
    // 0x80068EBC: lw          $fp, 0x80($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X80);
    // 0x80068EC0: jr          $ra
    // 0x80068EC4: addiu       $sp, $sp, 0x2D8
    ctx->r29 = ADD32(ctx->r29, 0X2D8);
    return;
    // 0x80068EC4: addiu       $sp, $sp, 0x2D8
    ctx->r29 = ADD32(ctx->r29, 0X2D8);
;}
RECOMP_FUNC void func_80068EC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80068EC8: addiu       $sp, $sp, -0x110
    ctx->r29 = ADD32(ctx->r29, -0X110);
    // 0x80068ECC: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80068ED0: sw          $s7, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r23;
    // 0x80068ED4: sw          $s6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r22;
    // 0x80068ED8: sw          $s5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r21;
    // 0x80068EDC: sw          $s4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r20;
    // 0x80068EE0: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x80068EE4: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x80068EE8: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x80068EEC: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x80068EF0: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80068EF4: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x80068EF8: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80068EFC: jal         0x80007774
    // 0x80068F00: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x80068F00: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x80068F04: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x80068F08: addiu       $t7, $t7, 0x2580
    ctx->r15 = ADD32(ctx->r15, 0X2580);
    // 0x80068F0C: lw          $s7, 0x1C($v0)
    ctx->r23 = MEM_W(ctx->r2, 0X1C);
    // 0x80068F10: addiu       $t9, $t7, 0x24
    ctx->r25 = ADD32(ctx->r15, 0X24);
    // 0x80068F14: addiu       $t6, $sp, 0xAC
    ctx->r14 = ADD32(ctx->r29, 0XAC);
L_80068F18:
    // 0x80068F18: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x80068F1C: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x80068F20: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x80068F24: lw          $at, -0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X8);
    // 0x80068F28: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x80068F2C: sw          $at, -0x8($t6)
    MEM_W(-0X8, ctx->r14) = ctx->r1;
    // 0x80068F30: lw          $at, -0x4($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X4);
    // 0x80068F34: bne         $t7, $t9, L_80068F18
    if (ctx->r15 != ctx->r25) {
        // 0x80068F38: sw          $at, -0x4($t6)
        MEM_W(-0X4, ctx->r14) = ctx->r1;
            goto L_80068F18;
    }
    // 0x80068F38: sw          $at, -0x4($t6)
    MEM_W(-0X4, ctx->r14) = ctx->r1;
    // 0x80068F3C: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x80068F40: addiu       $t9, $t9, 0x25A4
    ctx->r25 = ADD32(ctx->r25, 0X25A4);
    // 0x80068F44: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x80068F48: addiu       $t8, $sp, 0xA0
    ctx->r24 = ADD32(ctx->r29, 0XA0);
    // 0x80068F4C: sw          $at, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r1;
    // 0x80068F50: lw          $at, 0x8($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X8);
    // 0x80068F54: lw          $t6, 0x4($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X4);
    // 0x80068F58: sw          $at, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r1;
    // 0x80068F5C: lui         $at, 0x4014
    ctx->r1 = S32(0X4014 << 16);
    // 0x80068F60: mtc1        $at, $f23
    ctx->f_odd[(23 - 1) * 2] = ctx->r1;
    // 0x80068F64: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x80068F68: mtc1        $at, $f21
    ctx->f_odd[(21 - 1) * 2] = ctx->r1;
    // 0x80068F6C: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x80068F70: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x80068F74: addiu       $s4, $sp, 0xFC
    ctx->r20 = ADD32(ctx->r29, 0XFC);
    // 0x80068F78: addiu       $s1, $sp, 0xD0
    ctx->r17 = ADD32(ctx->r29, 0XD0);
    // 0x80068F7C: addiu       $s3, $sp, 0xAC
    ctx->r19 = ADD32(ctx->r29, 0XAC);
    // 0x80068F80: addiu       $s6, $sp, 0xB8
    ctx->r22 = ADD32(ctx->r29, 0XB8);
    // 0x80068F84: addiu       $s5, $sp, 0xD0
    ctx->r21 = ADD32(ctx->r29, 0XD0);
    // 0x80068F88: addiu       $s2, $sp, 0xAC
    ctx->r18 = ADD32(ctx->r29, 0XAC);
    // 0x80068F8C: sw          $t6, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r14;
L_80068F90:
    // 0x80068F90: bne         $s3, $s2, L_80068FBC
    if (ctx->r19 != ctx->r18) {
        // 0x80068F94: addiu       $a0, $zero, 0x712
        ctx->r4 = ADD32(0, 0X712);
            goto L_80068FBC;
    }
    // 0x80068F94: addiu       $a0, $zero, 0x712
    ctx->r4 = ADD32(0, 0X712);
    // 0x80068F98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80068F9C: jal         0x8001D138
    // 0x80068FA0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x80068FA0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80068FA4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80068FA8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80068FAC: jal         0x80019164
    // 0x80068FB0: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x80068FB0: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    after_2:
    // 0x80068FB4: b           L_8006900C
    // 0x80068FB8: sw          $s0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r16;
        goto L_8006900C;
    // 0x80068FB8: sw          $s0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r16;
L_80068FBC:
    // 0x80068FBC: bne         $s3, $s6, L_80068FEC
    if (ctx->r19 != ctx->r22) {
        // 0x80068FC0: addiu       $a0, $zero, 0x714
        ctx->r4 = ADD32(0, 0X714);
            goto L_80068FEC;
    }
    // 0x80068FC0: addiu       $a0, $zero, 0x714
    ctx->r4 = ADD32(0, 0X714);
    // 0x80068FC4: addiu       $a0, $zero, 0x713
    ctx->r4 = ADD32(0, 0X713);
    // 0x80068FC8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80068FCC: jal         0x8001D138
    // 0x80068FD0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_3;
    // 0x80068FD0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x80068FD4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80068FD8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80068FDC: jal         0x80019164
    // 0x80068FE0: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    func_80019164(rdram, ctx);
        goto after_4;
    // 0x80068FE0: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    after_4:
    // 0x80068FE4: b           L_8006900C
    // 0x80068FE8: sw          $s0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r16;
        goto L_8006900C;
    // 0x80068FE8: sw          $s0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r16;
L_80068FEC:
    // 0x80068FEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80068FF0: jal         0x8001D138
    // 0x80068FF4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_5;
    // 0x80068FF4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x80068FF8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80068FFC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80069000: jal         0x80019164
    // 0x80069004: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    func_80019164(rdram, ctx);
        goto after_6;
    // 0x80069004: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    after_6:
    // 0x80069008: sw          $s0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r16;
L_8006900C:
    // 0x8006900C: lwc1        $f4, 0x0($s7)
    ctx->f4.u32l = MEM_W(ctx->r23, 0X0);
    // 0x80069010: nop

    // 0x80069014: swc1        $f4, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f4.u32l;
    // 0x80069018: lwc1        $f6, 0x4($s7)
    ctx->f6.u32l = MEM_W(ctx->r23, 0X4);
    // 0x8006901C: nop

    // 0x80069020: swc1        $f6, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f6.u32l;
    // 0x80069024: lwc1        $f8, 0x8($s7)
    ctx->f8.u32l = MEM_W(ctx->r23, 0X8);
    // 0x80069028: jal         0x80027F1C
    // 0x8006902C: swc1        $f8, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f8.u32l;
    func_80027F1C(rdram, ctx);
        goto after_7;
    // 0x8006902C: swc1        $f8, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f8.u32l;
    after_7:
    // 0x80069030: mul.d       $f10, $f0, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f20.d); 
    ctx->f10.d = MUL_D(ctx->f0.d, ctx->f20.d);
    // 0x80069034: sub.d       $f4, $f10, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f22.d); 
    ctx->f4.d = ctx->f10.d - ctx->f22.d;
    // 0x80069038: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x8006903C: jal         0x80027F1C
    // 0x80069040: swc1        $f6, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->f6.u32l;
    func_80027F1C(rdram, ctx);
        goto after_8;
    // 0x80069040: swc1        $f6, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->f6.u32l;
    after_8:
    // 0x80069044: mul.d       $f8, $f0, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f20.d); 
    ctx->f8.d = MUL_D(ctx->f0.d, ctx->f20.d);
    // 0x80069048: addiu       $s3, $s3, 0xC
    ctx->r19 = ADD32(ctx->r19, 0XC);
    // 0x8006904C: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
    // 0x80069050: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x80069054: sub.d       $f10, $f8, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f22.d); 
    ctx->f10.d = ctx->f8.d - ctx->f22.d;
    // 0x80069058: cvt.s.d     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f4.fl = CVT_S_D(ctx->f10.d);
    // 0x8006905C: bne         $s3, $s5, L_80068F90
    if (ctx->r19 != ctx->r21) {
        // 0x80069060: swc1        $f4, -0x4($s3)
        MEM_W(-0X4, ctx->r19) = ctx->f4.u32l;
            goto L_80068F90;
    }
    // 0x80069060: swc1        $f4, -0x4($s3)
    MEM_W(-0X4, ctx->r19) = ctx->f4.u32l;
    // 0x80069064: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80069068: addiu       $s6, $zero, 0x3
    ctx->r22 = ADD32(0, 0X3);
    // 0x8006906C: addiu       $s5, $sp, 0xFC
    ctx->r21 = ADD32(ctx->r29, 0XFC);
L_80069070:
    // 0x80069070: lw          $t7, 0x24($s7)
    ctx->r15 = MEM_W(ctx->r23, 0X24);
    // 0x80069074: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80069078: andi        $t8, $t7, 0x4000
    ctx->r24 = ctx->r15 & 0X4000;
    // 0x8006907C: bne         $t8, $zero, L_80069164
    if (ctx->r24 != 0) {
        // 0x80069080: sll         $t9, $s0, 1
        ctx->r25 = S32(ctx->r16 << 1);
            goto L_80069164;
    }
    // 0x80069080: sll         $t9, $s0, 1
    ctx->r25 = S32(ctx->r16 << 1);
L_80069084:
    // 0x80069084: addiu       $t6, $t9, 0x14
    ctx->r14 = ADD32(ctx->r25, 0X14);
    // 0x80069088: slt         $at, $s2, $t6
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8006908C: beq         $at, $zero, L_8006910C
    if (ctx->r1 == 0) {
        // 0x80069090: sll         $t7, $s0, 2
        ctx->r15 = S32(ctx->r16 << 2);
            goto L_8006910C;
    }
    // 0x80069090: sll         $t7, $s0, 2
    ctx->r15 = S32(ctx->r16 << 2);
    // 0x80069094: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
    // 0x80069098: sll         $t6, $s2, 1
    ctx->r14 = S32(ctx->r18 << 1);
    // 0x8006909C: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x800690A0: subu        $v0, $v0, $s0
    ctx->r2 = SUB32(ctx->r2, ctx->r16);
    // 0x800690A4: addu        $s4, $s5, $t7
    ctx->r20 = ADD32(ctx->r21, ctx->r15);
    // 0x800690A8: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    // 0x800690AC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800690B0: addiu       $t8, $sp, 0xD0
    ctx->r24 = ADD32(ctx->r29, 0XD0);
    // 0x800690B4: addiu       $t9, $sp, 0xAC
    ctx->r25 = ADD32(ctx->r29, 0XAC);
    // 0x800690B8: addu        $s3, $v0, $t9
    ctx->r19 = ADD32(ctx->r2, ctx->r25);
    // 0x800690BC: addu        $s1, $v0, $t8
    ctx->r17 = ADD32(ctx->r2, ctx->r24);
    // 0x800690C0: andi        $a1, $s2, 0x1
    ctx->r5 = ctx->r18 & 0X1;
    // 0x800690C4: jal         0x800191E8
    // 0x800690C8: cvt.s.w     $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    ctx->f20.fl = CVT_S_W(ctx->f6.u32l);
    func_800191E8(rdram, ctx);
        goto after_9;
    // 0x800690C8: cvt.s.w     $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    ctx->f20.fl = CVT_S_W(ctx->f6.u32l);
    after_9:
    // 0x800690CC: lwc1        $f8, 0x0($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X0);
    // 0x800690D0: lwc1        $f10, 0x0($s3)
    ctx->f10.u32l = MEM_W(ctx->r19, 0X0);
    // 0x800690D4: lwc1        $f6, 0x4($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X4);
    // 0x800690D8: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x800690DC: lwc1        $f8, 0x4($s3)
    ctx->f8.u32l = MEM_W(ctx->r19, 0X4);
    // 0x800690E0: swc1        $f4, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f4.u32l;
    // 0x800690E4: sub.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f20.fl;
    // 0x800690E8: lwc1        $f8, 0x8($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X8);
    // 0x800690EC: add.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x800690F0: lwc1        $f6, 0x8($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0X8);
    // 0x800690F4: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    // 0x800690F8: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x800690FC: swc1        $f4, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f4.u32l;
    // 0x80069100: swc1        $f10, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f10.u32l;
    // 0x80069104: jal         0x80019164
    // 0x80069108: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80019164(rdram, ctx);
        goto after_10;
    // 0x80069108: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_10:
L_8006910C:
    // 0x8006910C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80069110: slti        $at, $s0, 0x3
    ctx->r1 = SIGNED(ctx->r16) < 0X3 ? 1 : 0;
    // 0x80069114: bne         $at, $zero, L_80069084
    if (ctx->r1 != 0) {
        // 0x80069118: sll         $t9, $s0, 1
        ctx->r25 = S32(ctx->r16 << 1);
            goto L_80069084;
    }
    // 0x80069118: sll         $t9, $s0, 1
    ctx->r25 = S32(ctx->r16 << 1);
    // 0x8006911C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80069120: sll         $t7, $s0, 1
    ctx->r15 = S32(ctx->r16 << 1);
L_80069124:
    // 0x80069124: addiu       $t8, $t7, 0x14
    ctx->r24 = ADD32(ctx->r15, 0X14);
    // 0x80069128: bne         $s2, $t8, L_80069140
    if (ctx->r18 != ctx->r24) {
        // 0x8006912C: sll         $t9, $s0, 2
        ctx->r25 = S32(ctx->r16 << 2);
            goto L_80069140;
    }
    // 0x8006912C: sll         $t9, $s0, 2
    ctx->r25 = S32(ctx->r16 << 2);
    // 0x80069130: addu        $t6, $s5, $t9
    ctx->r14 = ADD32(ctx->r21, ctx->r25);
    // 0x80069134: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    // 0x80069138: jal         0x800191C0
    // 0x8006913C: nop

    func_800191C0(rdram, ctx);
        goto after_11;
    // 0x8006913C: nop

    after_11:
L_80069140:
    // 0x80069140: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80069144: bne         $s0, $s6, L_80069124
    if (ctx->r16 != ctx->r22) {
        // 0x80069148: sll         $t7, $s0, 1
        ctx->r15 = S32(ctx->r16 << 1);
            goto L_80069124;
    }
    // 0x80069148: sll         $t7, $s0, 1
    ctx->r15 = S32(ctx->r16 << 1);
    // 0x8006914C: jal         0x80007AB0
    // 0x80069150: nop

    func_80007AB0(rdram, ctx);
        goto after_12;
    // 0x80069150: nop

    after_12:
    // 0x80069154: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80069158: slti        $at, $s2, 0x32
    ctx->r1 = SIGNED(ctx->r18) < 0X32 ? 1 : 0;
    // 0x8006915C: bne         $at, $zero, L_80069070
    if (ctx->r1 != 0) {
        // 0x80069160: nop
    
            goto L_80069070;
    }
    // 0x80069160: nop

L_80069164:
    // 0x80069164: addiu       $s0, $sp, 0xFC
    ctx->r16 = ADD32(ctx->r29, 0XFC);
    // 0x80069168: addiu       $s2, $s0, 0xC
    ctx->r18 = ADD32(ctx->r16, 0XC);
L_8006916C:
    // 0x8006916C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80069170: jal         0x8001C568
    // 0x80069174: nop

    func_8001C568(rdram, ctx);
        goto after_13;
    // 0x80069174: nop

    after_13:
    // 0x80069178: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8006917C: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x80069180: bne         $at, $zero, L_8006916C
    if (ctx->r1 != 0) {
        // 0x80069184: nop
    
            goto L_8006916C;
    }
    // 0x80069184: nop

    // 0x80069188: jal         0x8005CD50
    // 0x8006918C: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    func_8005CD50(rdram, ctx);
        goto after_14;
    // 0x8006918C: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    after_14:
    // 0x80069190: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80069194: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x80069198: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x8006919C: nop

    // 0x800691A0: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x800691A4: jal         0x80007AE0
    // 0x800691A8: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    func_80007AE0(rdram, ctx);
        goto after_15;
    // 0x800691A8: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    after_15:
    // 0x800691AC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x800691B0: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x800691B4: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x800691B8: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800691BC: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800691C0: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x800691C4: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x800691C8: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x800691CC: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x800691D0: lw          $s4, 0x34($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X34);
    // 0x800691D4: lw          $s5, 0x38($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X38);
    // 0x800691D8: lw          $s6, 0x3C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X3C);
    // 0x800691DC: lw          $s7, 0x40($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X40);
    // 0x800691E0: jr          $ra
    // 0x800691E4: addiu       $sp, $sp, 0x110
    ctx->r29 = ADD32(ctx->r29, 0X110);
    return;
    // 0x800691E4: addiu       $sp, $sp, 0x110
    ctx->r29 = ADD32(ctx->r29, 0X110);
;}
RECOMP_FUNC void func_800691E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800691E8: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x800691EC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800691F0: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x800691F4: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x800691F8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800691FC: jal         0x80007774
    // 0x80069200: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x80069200: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x80069204: lw          $s1, 0x1C($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X1C);
    // 0x80069208: addiu       $a0, $zero, 0x3C0
    ctx->r4 = ADD32(0, 0X3C0);
    // 0x8006920C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80069210: jal         0x8001D138
    // 0x80069214: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x80069214: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80069218: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8006921C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80069220: jal         0x80019164
    // 0x80069224: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x80069224: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_2:
    // 0x80069228: sw          $s0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r16;
    // 0x8006922C: addiu       $s0, $zero, -0x801
    ctx->r16 = ADD32(0, -0X801);
    // 0x80069230: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
L_80069234:
    // 0x80069234: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x80069238: andi        $t6, $v0, 0x4000
    ctx->r14 = ctx->r2 & 0X4000;
    // 0x8006923C: bne         $t6, $zero, L_80069274
    if (ctx->r14 != 0) {
        // 0x80069240: andi        $t7, $v0, 0x800
        ctx->r15 = ctx->r2 & 0X800;
            goto L_80069274;
    }
    // 0x80069240: andi        $t7, $v0, 0x800
    ctx->r15 = ctx->r2 & 0X800;
    // 0x80069244: beq         $t7, $zero, L_80069264
    if (ctx->r15 == 0) {
        // 0x80069248: nop
    
            goto L_80069264;
    }
    // 0x80069248: nop

    // 0x8006924C: jal         0x80019164
    // 0x80069250: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80019164(rdram, ctx);
        goto after_3;
    // 0x80069250: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_3:
    // 0x80069254: lw          $t8, 0x24($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X24);
    // 0x80069258: nop

    // 0x8006925C: and         $t9, $t8, $s0
    ctx->r25 = ctx->r24 & ctx->r16;
    // 0x80069260: sw          $t9, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r25;
L_80069264:
    // 0x80069264: jal         0x80007AB0
    // 0x80069268: nop

    func_80007AB0(rdram, ctx);
        goto after_4;
    // 0x80069268: nop

    after_4:
    // 0x8006926C: b           L_80069234
    // 0x80069270: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
        goto L_80069234;
    // 0x80069270: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
L_80069274:
    // 0x80069274: addiu       $s0, $sp, 0x54
    ctx->r16 = ADD32(ctx->r29, 0X54);
    // 0x80069278: addiu       $s3, $s0, 0x4
    ctx->r19 = ADD32(ctx->r16, 0X4);
L_8006927C:
    // 0x8006927C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80069280: jal         0x8001C568
    // 0x80069284: nop

    func_8001C568(rdram, ctx);
        goto after_5;
    // 0x80069284: nop

    after_5:
    // 0x80069288: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8006928C: sltu        $at, $s0, $s3
    ctx->r1 = ctx->r16 < ctx->r19 ? 1 : 0;
    // 0x80069290: bne         $at, $zero, L_8006927C
    if (ctx->r1 != 0) {
        // 0x80069294: nop
    
            goto L_8006927C;
    }
    // 0x80069294: nop

    // 0x80069298: jal         0x8005CD50
    // 0x8006929C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8005CD50(rdram, ctx);
        goto after_6;
    // 0x8006929C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_6:
    // 0x800692A0: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x800692A4: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x800692A8: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x800692AC: nop

    // 0x800692B0: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x800692B4: jal         0x80007AE0
    // 0x800692B8: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    func_80007AE0(rdram, ctx);
        goto after_7;
    // 0x800692B8: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    after_7:
    // 0x800692BC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800692C0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800692C4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800692C8: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800692CC: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800692D0: jr          $ra
    // 0x800692D4: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x800692D4: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_800692D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800692D8: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x800692DC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800692E0: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x800692E4: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x800692E8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800692EC: jal         0x80007774
    // 0x800692F0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x800692F0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x800692F4: lw          $s1, 0x1C($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X1C);
    // 0x800692F8: addiu       $a0, $zero, 0x789
    ctx->r4 = ADD32(0, 0X789);
    // 0x800692FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80069300: jal         0x8001D138
    // 0x80069304: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x80069304: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80069308: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8006930C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80069310: jal         0x80019164
    // 0x80069314: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x80069314: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_2:
    // 0x80069318: sw          $s0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r16;
    // 0x8006931C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80069320: jal         0x8001C468
    // 0x80069324: addiu       $a1, $zero, 0x7D3
    ctx->r5 = ADD32(0, 0X7D3);
    func_8001C468(rdram, ctx);
        goto after_3;
    // 0x80069324: addiu       $a1, $zero, 0x7D3
    ctx->r5 = ADD32(0, 0X7D3);
    after_3:
    // 0x80069328: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x8006932C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80069330: jal         0x800192E8
    // 0x80069334: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800192E8(rdram, ctx);
        goto after_4;
    // 0x80069334: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x80069338: addiu       $s0, $zero, -0x801
    ctx->r16 = ADD32(0, -0X801);
    // 0x8006933C: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
L_80069340:
    // 0x80069340: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x80069344: andi        $t6, $v0, 0x4000
    ctx->r14 = ctx->r2 & 0X4000;
    // 0x80069348: bne         $t6, $zero, L_80069380
    if (ctx->r14 != 0) {
        // 0x8006934C: andi        $t7, $v0, 0x800
        ctx->r15 = ctx->r2 & 0X800;
            goto L_80069380;
    }
    // 0x8006934C: andi        $t7, $v0, 0x800
    ctx->r15 = ctx->r2 & 0X800;
    // 0x80069350: beq         $t7, $zero, L_80069370
    if (ctx->r15 == 0) {
        // 0x80069354: nop
    
            goto L_80069370;
    }
    // 0x80069354: nop

    // 0x80069358: jal         0x80019164
    // 0x8006935C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80019164(rdram, ctx);
        goto after_5;
    // 0x8006935C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_5:
    // 0x80069360: lw          $t8, 0x24($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X24);
    // 0x80069364: nop

    // 0x80069368: and         $t9, $t8, $s0
    ctx->r25 = ctx->r24 & ctx->r16;
    // 0x8006936C: sw          $t9, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r25;
L_80069370:
    // 0x80069370: jal         0x80007AB0
    // 0x80069374: nop

    func_80007AB0(rdram, ctx);
        goto after_6;
    // 0x80069374: nop

    after_6:
    // 0x80069378: b           L_80069340
    // 0x8006937C: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
        goto L_80069340;
    // 0x8006937C: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
L_80069380:
    // 0x80069380: addiu       $s0, $sp, 0x5C
    ctx->r16 = ADD32(ctx->r29, 0X5C);
    // 0x80069384: addiu       $s3, $s0, 0x4
    ctx->r19 = ADD32(ctx->r16, 0X4);
L_80069388:
    // 0x80069388: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8006938C: jal         0x8001C568
    // 0x80069390: nop

    func_8001C568(rdram, ctx);
        goto after_7;
    // 0x80069390: nop

    after_7:
    // 0x80069394: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80069398: sltu        $at, $s0, $s3
    ctx->r1 = ctx->r16 < ctx->r19 ? 1 : 0;
    // 0x8006939C: bne         $at, $zero, L_80069388
    if (ctx->r1 != 0) {
        // 0x800693A0: nop
    
            goto L_80069388;
    }
    // 0x800693A0: nop

    // 0x800693A4: jal         0x8005CD50
    // 0x800693A8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8005CD50(rdram, ctx);
        goto after_8;
    // 0x800693A8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_8:
    // 0x800693AC: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x800693B0: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x800693B4: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x800693B8: nop

    // 0x800693BC: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x800693C0: jal         0x80007AE0
    // 0x800693C4: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    func_80007AE0(rdram, ctx);
        goto after_9;
    // 0x800693C4: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    after_9:
    // 0x800693C8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800693CC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800693D0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800693D4: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800693D8: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800693DC: jr          $ra
    // 0x800693E0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x800693E0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_800693E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800693E4: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x800693E8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800693EC: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x800693F0: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x800693F4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800693F8: jal         0x80007774
    // 0x800693FC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x800693FC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x80069400: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80069404: addiu       $t6, $t6, 0x25B0
    ctx->r14 = ADD32(ctx->r14, 0X25B0);
    // 0x80069408: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x8006940C: addiu       $s2, $sp, 0x54
    ctx->r18 = ADD32(ctx->r29, 0X54);
    // 0x80069410: lw          $s1, 0x1C($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X1C);
    // 0x80069414: sw          $at, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r1;
    // 0x80069418: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x8006941C: addiu       $a0, $zero, 0x78A
    ctx->r4 = ADD32(0, 0X78A);
    // 0x80069420: sw          $t9, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r25;
    // 0x80069424: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x80069428: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8006942C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80069430: jal         0x8001D138
    // 0x80069434: sw          $at, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r1;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x80069434: sw          $at, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r1;
    after_1:
    // 0x80069438: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8006943C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80069440: jal         0x80019164
    // 0x80069444: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x80069444: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_2:
    // 0x80069448: sw          $s0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r16;
    // 0x8006944C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80069450: jal         0x8001C468
    // 0x80069454: addiu       $a1, $zero, 0x7D4
    ctx->r5 = ADD32(0, 0X7D4);
    func_8001C468(rdram, ctx);
        goto after_3;
    // 0x80069454: addiu       $a1, $zero, 0x7D4
    ctx->r5 = ADD32(0, 0X7D4);
    after_3:
    // 0x80069458: jal         0x80027F1C
    // 0x8006945C: nop

    func_80027F1C(rdram, ctx);
        goto after_4;
    // 0x8006945C: nop

    after_4:
    // 0x80069460: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80069464: lwc1        $f5, 0x6440($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X6440);
    // 0x80069468: lwc1        $f4, 0x6444($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6444);
    // 0x8006946C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80069470: mul.d       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f0.d, ctx->f4.d);
    // 0x80069474: lwc1        $f9, 0x6448($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X6448);
    // 0x80069478: lwc1        $f8, 0x644C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X644C);
    // 0x8006947C: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x80069480: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80069484: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x80069488: cvt.s.d     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f4.fl = CVT_S_D(ctx->f10.d);
    // 0x8006948C: jal         0x8001913C
    // 0x80069490: swc1        $f4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f4.u32l;
    func_8001913C(rdram, ctx);
        goto after_5;
    // 0x80069490: swc1        $f4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f4.u32l;
    after_5:
    // 0x80069494: jal         0x80027F1C
    // 0x80069498: nop

    func_80027F1C(rdram, ctx);
        goto after_6;
    // 0x80069498: nop

    after_6:
    // 0x8006949C: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x800694A0: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x800694A4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800694A8: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x800694AC: add.d       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f0.d + ctx->f6.d;
    // 0x800694B0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x800694B4: cvt.s.d     $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f2.fl = CVT_S_D(ctx->f8.d);
    // 0x800694B8: swc1        $f2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f2.u32l;
    // 0x800694BC: swc1        $f2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f2.u32l;
    // 0x800694C0: jal         0x80019114
    // 0x800694C4: swc1        $f2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f2.u32l;
    func_80019114(rdram, ctx);
        goto after_7;
    // 0x800694C4: swc1        $f2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f2.u32l;
    after_7:
    // 0x800694C8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800694CC: addiu       $s3, $zero, 0x14
    ctx->r19 = ADD32(0, 0X14);
    // 0x800694D0: addiu       $s2, $zero, -0x801
    ctx->r18 = ADD32(0, -0X801);
L_800694D4:
    // 0x800694D4: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x800694D8: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x800694DC: andi        $t8, $v0, 0x4000
    ctx->r24 = ctx->r2 & 0X4000;
    // 0x800694E0: bne         $t8, $zero, L_8006951C
    if (ctx->r24 != 0) {
        // 0x800694E4: andi        $t7, $v0, 0x800
        ctx->r15 = ctx->r2 & 0X800;
            goto L_8006951C;
    }
    // 0x800694E4: andi        $t7, $v0, 0x800
    ctx->r15 = ctx->r2 & 0X800;
    // 0x800694E8: beq         $t7, $zero, L_80069508
    if (ctx->r15 == 0) {
        // 0x800694EC: nop
    
            goto L_80069508;
    }
    // 0x800694EC: nop

    // 0x800694F0: jal         0x80019164
    // 0x800694F4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80019164(rdram, ctx);
        goto after_8;
    // 0x800694F4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_8:
    // 0x800694F8: lw          $t6, 0x24($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X24);
    // 0x800694FC: nop

    // 0x80069500: and         $t9, $t6, $s2
    ctx->r25 = ctx->r14 & ctx->r18;
    // 0x80069504: sw          $t9, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r25;
L_80069508:
    // 0x80069508: jal         0x80007AB0
    // 0x8006950C: nop

    func_80007AB0(rdram, ctx);
        goto after_9;
    // 0x8006950C: nop

    after_9:
    // 0x80069510: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80069514: bne         $s0, $s3, L_800694D4
    if (ctx->r16 != ctx->r19) {
        // 0x80069518: nop
    
            goto L_800694D4;
    }
    // 0x80069518: nop

L_8006951C:
    // 0x8006951C: addiu       $s0, $sp, 0x64
    ctx->r16 = ADD32(ctx->r29, 0X64);
    // 0x80069520: addiu       $s3, $s0, 0x4
    ctx->r19 = ADD32(ctx->r16, 0X4);
L_80069524:
    // 0x80069524: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80069528: jal         0x8001C568
    // 0x8006952C: nop

    func_8001C568(rdram, ctx);
        goto after_10;
    // 0x8006952C: nop

    after_10:
    // 0x80069530: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80069534: sltu        $at, $s0, $s3
    ctx->r1 = ctx->r16 < ctx->r19 ? 1 : 0;
    // 0x80069538: bne         $at, $zero, L_80069524
    if (ctx->r1 != 0) {
        // 0x8006953C: nop
    
            goto L_80069524;
    }
    // 0x8006953C: nop

    // 0x80069540: jal         0x8005CD50
    // 0x80069544: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8005CD50(rdram, ctx);
        goto after_11;
    // 0x80069544: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_11:
    // 0x80069548: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8006954C: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x80069550: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x80069554: nop

    // 0x80069558: addiu       $t6, $t7, -0x1
    ctx->r14 = ADD32(ctx->r15, -0X1);
    // 0x8006955C: jal         0x80007AE0
    // 0x80069560: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    func_80007AE0(rdram, ctx);
        goto after_12;
    // 0x80069560: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    after_12:
    // 0x80069564: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80069568: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8006956C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80069570: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80069574: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80069578: jr          $ra
    // 0x8006957C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x8006957C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_80069580(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80069580: addiu       $sp, $sp, -0xD8
    ctx->r29 = ADD32(ctx->r29, -0XD8);
    // 0x80069584: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80069588: sw          $s5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r21;
    // 0x8006958C: sw          $s4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r20;
    // 0x80069590: sw          $s3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r19;
    // 0x80069594: sw          $s2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r18;
    // 0x80069598: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x8006959C: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x800695A0: swc1        $f25, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x800695A4: swc1        $f24, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f24.u32l;
    // 0x800695A8: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x800695AC: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x800695B0: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800695B4: jal         0x80007774
    // 0x800695B8: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x800695B8: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x800695BC: lw          $s3, 0x1C($v0)
    ctx->r19 = MEM_W(ctx->r2, 0X1C);
    // 0x800695C0: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x800695C4: sw          $t6, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r14;
    // 0x800695C8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800695CC: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x800695D0: lwc1        $f12, 0x10($s3)
    ctx->f12.u32l = MEM_W(ctx->r19, 0X10);
    // 0x800695D4: jal         0x8007A640
    // 0x800695D8: nop

    __sinf_recomp(rdram, ctx);
        goto after_1;
    // 0x800695D8: nop

    after_1:
    // 0x800695DC: lui         $at, 0xC2C8
    ctx->r1 = S32(0XC2C8 << 16);
    // 0x800695E0: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x800695E4: lwc1        $f6, 0x0($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0X0);
    // 0x800695E8: mul.s       $f4, $f0, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f24.fl);
    // 0x800695EC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800695F0: swc1        $f8, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f8.u32l;
    // 0x800695F4: lwc1        $f10, 0x4($s3)
    ctx->f10.u32l = MEM_W(ctx->r19, 0X4);
    // 0x800695F8: nop

    // 0x800695FC: swc1        $f10, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f10.u32l;
    // 0x80069600: lwc1        $f12, 0x10($s3)
    ctx->f12.u32l = MEM_W(ctx->r19, 0X10);
    // 0x80069604: jal         0x8007A800
    // 0x80069608: nop

    __cosf_recomp(rdram, ctx);
        goto after_2;
    // 0x80069608: nop

    after_2:
    // 0x8006960C: mul.s       $f4, $f0, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f24.fl);
    // 0x80069610: lwc1        $f6, 0x8($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0X8);
    // 0x80069614: addiu       $a0, $zero, 0x77F
    ctx->r4 = ADD32(0, 0X77F);
    // 0x80069618: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8006961C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80069620: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80069624: jal         0x8001D138
    // 0x80069628: swc1        $f8, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f8.u32l;
    func_8001D138(rdram, ctx);
        goto after_3;
    // 0x80069628: swc1        $f8, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x8006962C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80069630: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80069634: jal         0x80019164
    // 0x80069638: addiu       $a1, $sp, 0xBC
    ctx->r5 = ADD32(ctx->r29, 0XBC);
    func_80019164(rdram, ctx);
        goto after_4;
    // 0x80069638: addiu       $a1, $sp, 0xBC
    ctx->r5 = ADD32(ctx->r29, 0XBC);
    after_4:
    // 0x8006963C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80069640: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80069644: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80069648: lwc1        $f4, 0x6450($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6450);
    // 0x8006964C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80069650: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x80069654: lwc1        $f8, 0x6454($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X6454);
    // 0x80069658: sw          $s0, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r16;
    // 0x8006965C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80069660: add.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80069664: addiu       $a1, $s3, 0xC
    ctx->r5 = ADD32(ctx->r19, 0XC);
    // 0x80069668: swc1        $f0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f0.u32l;
    // 0x8006966C: swc1        $f0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f0.u32l;
    // 0x80069670: jal         0x8001913C
    // 0x80069674: swc1        $f0, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f0.u32l;
    func_8001913C(rdram, ctx);
        goto after_5;
    // 0x80069674: swc1        $f0, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f0.u32l;
    after_5:
    // 0x80069678: lw          $a0, 0xCC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XCC);
    // 0x8006967C: jal         0x80019114
    // 0x80069680: addiu       $a1, $sp, 0xA4
    ctx->r5 = ADD32(ctx->r29, 0XA4);
    func_80019114(rdram, ctx);
        goto after_6;
    // 0x80069680: addiu       $a1, $sp, 0xA4
    ctx->r5 = ADD32(ctx->r29, 0XA4);
    after_6:
    // 0x80069684: lw          $a0, 0xCC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XCC);
    // 0x80069688: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8006968C: jal         0x80018658
    // 0x80069690: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80018658(rdram, ctx);
        goto after_7;
    // 0x80069690: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x80069694: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    // 0x80069698: jal         0x8005D1B4
    // 0x8006969C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_8005D1B4(rdram, ctx);
        goto after_8;
    // 0x8006969C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_8:
    // 0x800696A0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800696A4: lwc1        $f22, 0x6458($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X6458);
    // 0x800696A8: sw          $v0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r2;
    // 0x800696AC: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x800696B0: addiu       $s5, $zero, 0x1E
    ctx->r21 = ADD32(0, 0X1E);
L_800696B4:
    // 0x800696B4: lw          $t7, 0x24($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X24);
    // 0x800696B8: slti        $at, $s2, 0x1E
    ctx->r1 = SIGNED(ctx->r18) < 0X1E ? 1 : 0;
    // 0x800696BC: andi        $t8, $t7, 0x4000
    ctx->r24 = ctx->r15 & 0X4000;
    // 0x800696C0: bne         $t8, $zero, L_80069900
    if (ctx->r24 != 0) {
        // 0x800696C4: addiu       $t7, $s2, -0x1D
        ctx->r15 = ADD32(ctx->r18, -0X1D);
            goto L_80069900;
    }
    // 0x800696C4: addiu       $t7, $s2, -0x1D
    ctx->r15 = ADD32(ctx->r18, -0X1D);
    // 0x800696C8: beq         $at, $zero, L_80069830
    if (ctx->r1 == 0) {
        // 0x800696CC: addiu       $t8, $zero, 0x28
        ctx->r24 = ADD32(0, 0X28);
            goto L_80069830;
    }
    // 0x800696CC: addiu       $t8, $zero, 0x28
    ctx->r24 = ADD32(0, 0X28);
    // 0x800696D0: c.lt.s      $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f20.fl < ctx->f22.fl;
    // 0x800696D4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800696D8: bc1f        L_800696E8
    if (!c1cs) {
        // 0x800696DC: nop
    
            goto L_800696E8;
    }
    // 0x800696DC: nop

    // 0x800696E0: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x800696E4: nop

L_800696E8:
    // 0x800696E8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800696EC: lwc1        $f10, 0x645C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X645C);
    // 0x800696F0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800696F4: mul.s       $f4, $f20, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f10.fl);
    // 0x800696F8: lwc1        $f6, 0x6460($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6460);
    // 0x800696FC: nop

    // 0x80069700: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80069704: swc1        $f8, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f8.u32l;
    // 0x80069708: swc1        $f8, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f8.u32l;
    // 0x8006970C: swc1        $f8, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f8.u32l;
    // 0x80069710: lwc1        $f12, 0x10($s3)
    ctx->f12.u32l = MEM_W(ctx->r19, 0X10);
    // 0x80069714: jal         0x8007A640
    // 0x80069718: nop

    __sinf_recomp(rdram, ctx);
        goto after_9;
    // 0x80069718: nop

    after_9:
    // 0x8006971C: mul.s       $f10, $f0, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f24.fl);
    // 0x80069720: lwc1        $f6, 0x0($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0X0);
    // 0x80069724: mul.s       $f4, $f10, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x80069728: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8006972C: swc1        $f8, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f8.u32l;
    // 0x80069730: lwc1        $f10, 0x4($s3)
    ctx->f10.u32l = MEM_W(ctx->r19, 0X4);
    // 0x80069734: nop

    // 0x80069738: swc1        $f10, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f10.u32l;
    // 0x8006973C: lwc1        $f12, 0x10($s3)
    ctx->f12.u32l = MEM_W(ctx->r19, 0X10);
    // 0x80069740: jal         0x8007A800
    // 0x80069744: nop

    __cosf_recomp(rdram, ctx);
        goto after_10;
    // 0x80069744: nop

    after_10:
    // 0x80069748: mul.s       $f4, $f0, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f24.fl);
    // 0x8006974C: lwc1        $f8, 0x8($s3)
    ctx->f8.u32l = MEM_W(ctx->r19, 0X8);
    // 0x80069750: lw          $a0, 0xCC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XCC);
    // 0x80069754: addiu       $a1, $sp, 0xBC
    ctx->r5 = ADD32(ctx->r29, 0XBC);
    // 0x80069758: mul.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x8006975C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80069760: jal         0x80019164
    // 0x80069764: swc1        $f10, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f10.u32l;
    func_80019164(rdram, ctx);
        goto after_11;
    // 0x80069764: swc1        $f10, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f10.u32l;
    after_11:
    // 0x80069768: lw          $a0, 0xCC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XCC);
    // 0x8006976C: jal         0x80019114
    // 0x80069770: addiu       $a1, $sp, 0xA4
    ctx->r5 = ADD32(ctx->r29, 0XA4);
    func_80019114(rdram, ctx);
        goto after_12;
    // 0x80069770: addiu       $a1, $sp, 0xA4
    ctx->r5 = ADD32(ctx->r29, 0XA4);
    after_12:
    // 0x80069774: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x80069778: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8006977C: sub.s       $f4, $f20, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = ctx->f20.fl - ctx->f22.fl;
    // 0x80069780: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80069784: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80069788: lw          $a0, 0xCC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XCC);
    // 0x8006978C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80069790: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80069794: ctc1        $a1, $FpcCsr
    set_cop1_cs(ctx->r5);
    // 0x80069798: nop

    // 0x8006979C: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x800697A0: cfc1        $a1, $FpcCsr
    ctx->r5 = get_cop1_cs();
    // 0x800697A4: nop

    // 0x800697A8: andi        $a1, $a1, 0x78
    ctx->r5 = ctx->r5 & 0X78;
    // 0x800697AC: beq         $a1, $zero, L_800697F8
    if (ctx->r5 == 0) {
        // 0x800697B0: nop
    
            goto L_800697F8;
    }
    // 0x800697B0: nop

    // 0x800697B4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800697B8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800697BC: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x800697C0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800697C4: ctc1        $a1, $FpcCsr
    set_cop1_cs(ctx->r5);
    // 0x800697C8: nop

    // 0x800697CC: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x800697D0: cfc1        $a1, $FpcCsr
    ctx->r5 = get_cop1_cs();
    // 0x800697D4: nop

    // 0x800697D8: andi        $a1, $a1, 0x78
    ctx->r5 = ctx->r5 & 0X78;
    // 0x800697DC: bne         $a1, $zero, L_800697F0
    if (ctx->r5 != 0) {
        // 0x800697E0: nop
    
            goto L_800697F0;
    }
    // 0x800697E0: nop

    // 0x800697E4: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x800697E8: b           L_80069808
    // 0x800697EC: or          $a1, $a1, $at
    ctx->r5 = ctx->r5 | ctx->r1;
        goto L_80069808;
    // 0x800697EC: or          $a1, $a1, $at
    ctx->r5 = ctx->r5 | ctx->r1;
L_800697F0:
    // 0x800697F0: b           L_80069808
    // 0x800697F4: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
        goto L_80069808;
    // 0x800697F4: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
L_800697F8:
    // 0x800697F8: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x800697FC: nop

    // 0x80069800: bltz        $a1, L_800697F0
    if (SIGNED(ctx->r5) < 0) {
        // 0x80069804: nop
    
            goto L_800697F0;
    }
    // 0x80069804: nop

L_80069808:
    // 0x80069808: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8006980C: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x80069810: jal         0x80018604
    // 0x80069814: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    func_80018604(rdram, ctx);
        goto after_13;
    // 0x80069814: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    after_13:
    // 0x80069818: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8006981C: lwc1        $f4, 0x6464($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6464);
    // 0x80069820: nop

    // 0x80069824: mul.s       $f20, $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f4.fl);
    // 0x80069828: b           L_800698CC
    // 0x8006982C: nop

        goto L_800698CC;
    // 0x8006982C: nop

L_80069830:
    // 0x80069830: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x80069834: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x80069838: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8006983C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80069840: subu        $s1, $t8, $s2
    ctx->r17 = SUB32(ctx->r24, ctx->r18);
    // 0x80069844: sll         $s4, $s1, 8
    ctx->r20 = S32(ctx->r17 << 8);
    // 0x80069848: mul.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8006984C: jal         0x80028C2C
    // 0x80069850: subu        $s4, $s4, $s1
    ctx->r20 = SUB32(ctx->r20, ctx->r17);
    func_80028C2C(rdram, ctx);
        goto after_14;
    // 0x80069850: subu        $s4, $s4, $s1
    ctx->r20 = SUB32(ctx->r20, ctx->r17);
    after_14:
    // 0x80069854: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80069858: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8006985C: lw          $a0, 0xCC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XCC);
    // 0x80069860: mul.s       $f2, $f0, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x80069864: addiu       $a1, $sp, 0x7C
    ctx->r5 = ADD32(ctx->r29, 0X7C);
    // 0x80069868: swc1        $f2, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f2.u32l;
    // 0x8006986C: swc1        $f2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f2.u32l;
    // 0x80069870: jal         0x80019114
    // 0x80069874: swc1        $f2, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f2.u32l;
    func_80019114(rdram, ctx);
        goto after_15;
    // 0x80069874: swc1        $f2, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f2.u32l;
    after_15:
    // 0x80069878: lw          $s0, 0xCC($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XCC);
    // 0x8006987C: bne         $s5, $s1, L_80069890
    if (ctx->r21 != ctx->r17) {
        // 0x80069880: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80069890;
    }
    // 0x80069880: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80069884: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80069888: jal         0x80018658
    // 0x8006988C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80018658(rdram, ctx);
        goto after_16;
    // 0x8006988C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_16:
L_80069890:
    // 0x80069890: div         $zero, $s4, $s5
    lo = S32(S64(S32(ctx->r20)) / S64(S32(ctx->r21))); hi = S32(S64(S32(ctx->r20)) % S64(S32(ctx->r21)));
    // 0x80069894: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80069898: bne         $s5, $zero, L_800698A4
    if (ctx->r21 != 0) {
        // 0x8006989C: nop
    
            goto L_800698A4;
    }
    // 0x8006989C: nop

    // 0x800698A0: break       7
    do_break(2147915936);
L_800698A4:
    // 0x800698A4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800698A8: bne         $s5, $at, L_800698BC
    if (ctx->r21 != ctx->r1) {
        // 0x800698AC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800698BC;
    }
    // 0x800698AC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800698B0: bne         $s4, $at, L_800698BC
    if (ctx->r20 != ctx->r1) {
        // 0x800698B4: nop
    
            goto L_800698BC;
    }
    // 0x800698B4: nop

    // 0x800698B8: break       6
    do_break(2147915960);
L_800698BC:
    // 0x800698BC: mflo        $a1
    ctx->r5 = lo;
    // 0x800698C0: andi        $t9, $a1, 0xFF
    ctx->r25 = ctx->r5 & 0XFF;
    // 0x800698C4: jal         0x80018604
    // 0x800698C8: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    func_80018604(rdram, ctx);
        goto after_17;
    // 0x800698C8: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    after_17:
L_800698CC:
    // 0x800698CC: bne         $s2, $s5, L_800698E8
    if (ctx->r18 != ctx->r21) {
        // 0x800698D0: nop
    
            goto L_800698E8;
    }
    // 0x800698D0: nop

    // 0x800698D4: lw          $a0, 0xCC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XCC);
    // 0x800698D8: jal         0x80019164
    // 0x800698DC: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_80019164(rdram, ctx);
        goto after_18;
    // 0x800698DC: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_18:
    // 0x800698E0: jal         0x8005D128
    // 0x800698E4: addiu       $a0, $sp, 0xB8
    ctx->r4 = ADD32(ctx->r29, 0XB8);
    func_8005D128(rdram, ctx);
        goto after_19;
    // 0x800698E4: addiu       $a0, $sp, 0xB8
    ctx->r4 = ADD32(ctx->r29, 0XB8);
    after_19:
L_800698E8:
    // 0x800698E8: jal         0x80007AB0
    // 0x800698EC: nop

    func_80007AB0(rdram, ctx);
        goto after_20;
    // 0x800698EC: nop

    after_20:
    // 0x800698F0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x800698F4: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x800698F8: bne         $s2, $at, L_800696B4
    if (ctx->r18 != ctx->r1) {
        // 0x800698FC: nop
    
            goto L_800696B4;
    }
    // 0x800698FC: nop

L_80069900:
    // 0x80069900: jal         0x8005D128
    // 0x80069904: addiu       $a0, $sp, 0xB8
    ctx->r4 = ADD32(ctx->r29, 0XB8);
    func_8005D128(rdram, ctx);
        goto after_21;
    // 0x80069904: addiu       $a0, $sp, 0xB8
    ctx->r4 = ADD32(ctx->r29, 0XB8);
    after_21:
    // 0x80069908: addiu       $s0, $sp, 0xCC
    ctx->r16 = ADD32(ctx->r29, 0XCC);
    // 0x8006990C: addiu       $s2, $s0, 0x4
    ctx->r18 = ADD32(ctx->r16, 0X4);
L_80069910:
    // 0x80069910: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80069914: jal         0x8001C568
    // 0x80069918: nop

    func_8001C568(rdram, ctx);
        goto after_22;
    // 0x80069918: nop

    after_22:
    // 0x8006991C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80069920: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x80069924: bne         $at, $zero, L_80069910
    if (ctx->r1 != 0) {
        // 0x80069928: nop
    
            goto L_80069910;
    }
    // 0x80069928: nop

    // 0x8006992C: jal         0x8005CD50
    // 0x80069930: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_8005CD50(rdram, ctx);
        goto after_23;
    // 0x80069930: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_23:
    // 0x80069934: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80069938: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x8006993C: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x80069940: nop

    // 0x80069944: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x80069948: jal         0x80007AE0
    // 0x8006994C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    func_80007AE0(rdram, ctx);
        goto after_24;
    // 0x8006994C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    after_24:
    // 0x80069950: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80069954: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x80069958: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8006995C: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80069960: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80069964: lwc1        $f25, 0x20($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80069968: lwc1        $f24, 0x24($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8006996C: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x80069970: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x80069974: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x80069978: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x8006997C: lw          $s4, 0x3C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X3C);
    // 0x80069980: lw          $s5, 0x40($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X40);
    // 0x80069984: jr          $ra
    // 0x80069988: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
    return;
    // 0x80069988: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
;}
RECOMP_FUNC void func_8006998C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006998C: addiu       $sp, $sp, -0xE8
    ctx->r29 = ADD32(ctx->r29, -0XE8);
    // 0x80069990: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80069994: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x80069998: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x8006999C: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x800699A0: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x800699A4: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x800699A8: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x800699AC: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x800699B0: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x800699B4: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x800699B8: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800699BC: jal         0x80007774
    // 0x800699C0: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x800699C0: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x800699C4: lw          $s1, 0x1C($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X1C);
    // 0x800699C8: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x800699CC: sw          $t6, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r14;
    // 0x800699D0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800699D4: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x800699D8: lwc1        $f12, 0x10($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X10);
    // 0x800699DC: jal         0x8007A640
    // 0x800699E0: nop

    __sinf_recomp(rdram, ctx);
        goto after_1;
    // 0x800699E0: nop

    after_1:
    // 0x800699E4: lui         $at, 0xC2C8
    ctx->r1 = S32(0XC2C8 << 16);
    // 0x800699E8: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x800699EC: lwc1        $f6, 0x0($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X0);
    // 0x800699F0: mul.s       $f4, $f0, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f26.fl);
    // 0x800699F4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800699F8: swc1        $f8, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f8.u32l;
    // 0x800699FC: lwc1        $f10, 0x4($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X4);
    // 0x80069A00: nop

    // 0x80069A04: swc1        $f10, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f10.u32l;
    // 0x80069A08: lwc1        $f12, 0x10($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X10);
    // 0x80069A0C: jal         0x8007A800
    // 0x80069A10: nop

    __cosf_recomp(rdram, ctx);
        goto after_2;
    // 0x80069A10: nop

    after_2:
    // 0x80069A14: mul.s       $f4, $f0, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f26.fl);
    // 0x80069A18: lwc1        $f6, 0x8($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X8);
    // 0x80069A1C: addiu       $a0, $zero, 0x77F
    ctx->r4 = ADD32(0, 0X77F);
    // 0x80069A20: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80069A24: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80069A28: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80069A2C: jal         0x8001D138
    // 0x80069A30: swc1        $f8, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f8.u32l;
    func_8001D138(rdram, ctx);
        goto after_3;
    // 0x80069A30: swc1        $f8, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x80069A34: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80069A38: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80069A3C: jal         0x80019164
    // 0x80069A40: addiu       $a1, $sp, 0xC8
    ctx->r5 = ADD32(ctx->r29, 0XC8);
    func_80019164(rdram, ctx);
        goto after_4;
    // 0x80069A40: addiu       $a1, $sp, 0xC8
    ctx->r5 = ADD32(ctx->r29, 0XC8);
    after_4:
    // 0x80069A44: sw          $s0, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r16;
    // 0x80069A48: addiu       $a0, $zero, 0x7A7
    ctx->r4 = ADD32(0, 0X7A7);
    // 0x80069A4C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80069A50: jal         0x8001D138
    // 0x80069A54: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_5;
    // 0x80069A54: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x80069A58: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80069A5C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80069A60: jal         0x80019164
    // 0x80069A64: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80019164(rdram, ctx);
        goto after_6;
    // 0x80069A64: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_6:
    // 0x80069A68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80069A6C: addiu       $a1, $zero, 0x7A7
    ctx->r5 = ADD32(0, 0X7A7);
    // 0x80069A70: jal         0x8001C468
    // 0x80069A74: sw          $s0, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r16;
    func_8001C468(rdram, ctx);
        goto after_7;
    // 0x80069A74: sw          $s0, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r16;
    after_7:
    // 0x80069A78: lw          $a0, 0xD8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XD8);
    // 0x80069A7C: addiu       $s2, $s1, 0xC
    ctx->r18 = ADD32(ctx->r17, 0XC);
    // 0x80069A80: jal         0x8001913C
    // 0x80069A84: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_8001913C(rdram, ctx);
        goto after_8;
    // 0x80069A84: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_8:
    // 0x80069A88: lw          $a0, 0xDC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XDC);
    // 0x80069A8C: jal         0x8001913C
    // 0x80069A90: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_8001913C(rdram, ctx);
        goto after_9;
    // 0x80069A90: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_9:
    // 0x80069A94: lw          $a0, 0xD8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XD8);
    // 0x80069A98: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80069A9C: jal         0x80018658
    // 0x80069AA0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80018658(rdram, ctx);
        goto after_10;
    // 0x80069AA0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_10:
    // 0x80069AA4: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    // 0x80069AA8: jal         0x8005D1B4
    // 0x80069AAC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_8005D1B4(rdram, ctx);
        goto after_11;
    // 0x80069AAC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_11:
    // 0x80069AB0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80069AB4: lwc1        $f24, 0x6468($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X6468);
    // 0x80069AB8: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x80069ABC: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x80069AC0: sw          $v0, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r2;
    // 0x80069AC4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80069AC8:
    // 0x80069AC8: lw          $t7, 0x24($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X24);
    // 0x80069ACC: slti        $at, $s0, 0xD
    ctx->r1 = SIGNED(ctx->r16) < 0XD ? 1 : 0;
    // 0x80069AD0: andi        $t8, $t7, 0x4000
    ctx->r24 = ctx->r15 & 0X4000;
    // 0x80069AD4: bne         $t8, $zero, L_80069CD0
    if (ctx->r24 != 0) {
        // 0x80069AD8: nop
    
            goto L_80069CD0;
    }
    // 0x80069AD8: nop

    // 0x80069ADC: beq         $at, $zero, L_80069C40
    if (ctx->r1 == 0) {
        // 0x80069AE0: addiu       $at, $zero, 0xD
        ctx->r1 = ADD32(0, 0XD);
            goto L_80069C40;
    }
    // 0x80069AE0: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x80069AE4: lwc1        $f12, 0x10($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X10);
    // 0x80069AE8: jal         0x8007A640
    // 0x80069AEC: nop

    __sinf_recomp(rdram, ctx);
        goto after_12;
    // 0x80069AEC: nop

    after_12:
    // 0x80069AF0: mul.s       $f10, $f0, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f26.fl);
    // 0x80069AF4: lwc1        $f6, 0x0($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X0);
    // 0x80069AF8: mul.s       $f4, $f10, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x80069AFC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80069B00: swc1        $f8, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f8.u32l;
    // 0x80069B04: lwc1        $f10, 0x4($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X4);
    // 0x80069B08: nop

    // 0x80069B0C: swc1        $f10, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f10.u32l;
    // 0x80069B10: lwc1        $f12, 0x10($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X10);
    // 0x80069B14: jal         0x8007A800
    // 0x80069B18: nop

    __cosf_recomp(rdram, ctx);
        goto after_13;
    // 0x80069B18: nop

    after_13:
    // 0x80069B1C: mul.s       $f4, $f0, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f26.fl);
    // 0x80069B20: lwc1        $f8, 0x8($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X8);
    // 0x80069B24: lw          $a0, 0xD8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XD8);
    // 0x80069B28: addiu       $a1, $sp, 0xC8
    ctx->r5 = ADD32(ctx->r29, 0XC8);
    // 0x80069B2C: mul.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x80069B30: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80069B34: jal         0x80019164
    // 0x80069B38: swc1        $f10, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f10.u32l;
    func_80019164(rdram, ctx);
        goto after_14;
    // 0x80069B38: swc1        $f10, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f10.u32l;
    after_14:
    // 0x80069B3C: lw          $a0, 0xD8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XD8);
    // 0x80069B40: jal         0x80019114
    // 0x80069B44: addiu       $a1, $sp, 0xB0
    ctx->r5 = ADD32(ctx->r29, 0XB0);
    func_80019114(rdram, ctx);
        goto after_15;
    // 0x80069B44: addiu       $a1, $sp, 0xB0
    ctx->r5 = ADD32(ctx->r29, 0XB0);
    after_15:
    // 0x80069B48: lw          $a0, 0xD8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XD8);
    // 0x80069B4C: swc1        $f20, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f20.u32l;
    // 0x80069B50: swc1        $f20, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f20.u32l;
    // 0x80069B54: swc1        $f20, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f20.u32l;
    // 0x80069B58: jal         0x80019114
    // 0x80069B5C: addiu       $a1, $sp, 0x7C
    ctx->r5 = ADD32(ctx->r29, 0X7C);
    func_80019114(rdram, ctx);
        goto after_16;
    // 0x80069B5C: addiu       $a1, $sp, 0x7C
    ctx->r5 = ADD32(ctx->r29, 0X7C);
    after_16:
    // 0x80069B60: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x80069B64: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80069B68: sub.s       $f4, $f20, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = ctx->f20.fl - ctx->f24.fl;
    // 0x80069B6C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80069B70: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80069B74: lw          $a0, 0xD8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XD8);
    // 0x80069B78: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80069B7C: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80069B80: ctc1        $a1, $FpcCsr
    set_cop1_cs(ctx->r5);
    // 0x80069B84: nop

    // 0x80069B88: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80069B8C: cfc1        $a1, $FpcCsr
    ctx->r5 = get_cop1_cs();
    // 0x80069B90: nop

    // 0x80069B94: andi        $a1, $a1, 0x78
    ctx->r5 = ctx->r5 & 0X78;
    // 0x80069B98: beq         $a1, $zero, L_80069BE4
    if (ctx->r5 == 0) {
        // 0x80069B9C: nop
    
            goto L_80069BE4;
    }
    // 0x80069B9C: nop

    // 0x80069BA0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80069BA4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80069BA8: sub.s       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80069BAC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80069BB0: ctc1        $a1, $FpcCsr
    set_cop1_cs(ctx->r5);
    // 0x80069BB4: nop

    // 0x80069BB8: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80069BBC: cfc1        $a1, $FpcCsr
    ctx->r5 = get_cop1_cs();
    // 0x80069BC0: nop

    // 0x80069BC4: andi        $a1, $a1, 0x78
    ctx->r5 = ctx->r5 & 0X78;
    // 0x80069BC8: bne         $a1, $zero, L_80069BDC
    if (ctx->r5 != 0) {
        // 0x80069BCC: nop
    
            goto L_80069BDC;
    }
    // 0x80069BCC: nop

    // 0x80069BD0: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x80069BD4: b           L_80069BF4
    // 0x80069BD8: or          $a1, $a1, $at
    ctx->r5 = ctx->r5 | ctx->r1;
        goto L_80069BF4;
    // 0x80069BD8: or          $a1, $a1, $at
    ctx->r5 = ctx->r5 | ctx->r1;
L_80069BDC:
    // 0x80069BDC: b           L_80069BF4
    // 0x80069BE0: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
        goto L_80069BF4;
    // 0x80069BE0: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
L_80069BE4:
    // 0x80069BE4: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x80069BE8: nop

    // 0x80069BEC: bltz        $a1, L_80069BDC
    if (SIGNED(ctx->r5) < 0) {
        // 0x80069BF0: nop
    
            goto L_80069BDC;
    }
    // 0x80069BF0: nop

L_80069BF4:
    // 0x80069BF4: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80069BF8: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x80069BFC: jal         0x80018604
    // 0x80069C00: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    func_80018604(rdram, ctx);
        goto after_17;
    // 0x80069C00: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    after_17:
    // 0x80069C04: mtc1        $s0, $f4
    ctx->f4.u32l = ctx->r16;
    // 0x80069C08: lui         $at, 0x40F0
    ctx->r1 = S32(0X40F0 << 16);
    // 0x80069C0C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80069C10: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80069C14: nop

    // 0x80069C18: mul.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80069C1C: jal         0x80028C00
    // 0x80069C20: nop

    func_80028C00(rdram, ctx);
        goto after_18;
    // 0x80069C20: nop

    after_18:
    // 0x80069C24: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80069C28: lwc1        $f10, 0x646C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X646C);
    // 0x80069C2C: nop

    // 0x80069C30: mul.s       $f4, $f0, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x80069C34: b           L_80069CB8
    // 0x80069C38: add.s       $f20, $f4, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f20.fl = ctx->f4.fl + ctx->f24.fl;
        goto L_80069CB8;
    // 0x80069C38: add.s       $f20, $f4, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f20.fl = ctx->f4.fl + ctx->f24.fl;
    // 0x80069C3C: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
L_80069C40:
    // 0x80069C40: bne         $s0, $at, L_80069CB8
    if (ctx->r16 != ctx->r1) {
        // 0x80069C44: nop
    
            goto L_80069CB8;
    }
    // 0x80069C44: nop

    // 0x80069C48: lw          $a0, 0xDC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XDC);
    // 0x80069C4C: jal         0x800191C0
    // 0x80069C50: nop

    func_800191C0(rdram, ctx);
        goto after_19;
    // 0x80069C50: nop

    after_19:
    // 0x80069C54: lw          $a0, 0xD8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XD8);
    // 0x80069C58: jal         0x8001C568
    // 0x80069C5C: nop

    func_8001C568(rdram, ctx);
        goto after_20;
    // 0x80069C5C: nop

    after_20:
    // 0x80069C60: jal         0x8005D128
    // 0x80069C64: addiu       $a0, $sp, 0xC4
    ctx->r4 = ADD32(ctx->r29, 0XC4);
    func_8005D128(rdram, ctx);
        goto after_21;
    // 0x80069C64: addiu       $a0, $sp, 0xC4
    ctx->r4 = ADD32(ctx->r29, 0XC4);
    after_21:
    // 0x80069C68: addiu       $a0, $zero, 0x782
    ctx->r4 = ADD32(0, 0X782);
    // 0x80069C6C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80069C70: jal         0x8001D138
    // 0x80069C74: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_22;
    // 0x80069C74: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_22:
    // 0x80069C78: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80069C7C: addiu       $a1, $zero, 0x7CE
    ctx->r5 = ADD32(0, 0X7CE);
    // 0x80069C80: jal         0x8001C468
    // 0x80069C84: sw          $v0, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r2;
    func_8001C468(rdram, ctx);
        goto after_23;
    // 0x80069C84: sw          $v0, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r2;
    after_23:
    // 0x80069C88: lw          $a0, 0xD8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XD8);
    // 0x80069C8C: jal         0x80019164
    // 0x80069C90: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80019164(rdram, ctx);
        goto after_24;
    // 0x80069C90: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_24:
    // 0x80069C94: lw          $a0, 0xD8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XD8);
    // 0x80069C98: jal         0x8001913C
    // 0x80069C9C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_8001913C(rdram, ctx);
        goto after_25;
    // 0x80069C9C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_25:
    // 0x80069CA0: lw          $a0, 0xD8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XD8);
    // 0x80069CA4: swc1        $f22, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f22.u32l;
    // 0x80069CA8: swc1        $f22, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f22.u32l;
    // 0x80069CAC: swc1        $f22, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f22.u32l;
    // 0x80069CB0: jal         0x80019114
    // 0x80069CB4: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    func_80019114(rdram, ctx);
        goto after_26;
    // 0x80069CB4: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    after_26:
L_80069CB8:
    // 0x80069CB8: jal         0x80007AB0
    // 0x80069CBC: nop

    func_80007AB0(rdram, ctx);
        goto after_27;
    // 0x80069CBC: nop

    after_27:
    // 0x80069CC0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80069CC4: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x80069CC8: bne         $s0, $at, L_80069AC8
    if (ctx->r16 != ctx->r1) {
        // 0x80069CCC: nop
    
            goto L_80069AC8;
    }
    // 0x80069CCC: nop

L_80069CD0:
    // 0x80069CD0: jal         0x8005D128
    // 0x80069CD4: addiu       $a0, $sp, 0xC4
    ctx->r4 = ADD32(ctx->r29, 0XC4);
    func_8005D128(rdram, ctx);
        goto after_28;
    // 0x80069CD4: addiu       $a0, $sp, 0xC4
    ctx->r4 = ADD32(ctx->r29, 0XC4);
    after_28:
    // 0x80069CD8: addiu       $s0, $sp, 0xD8
    ctx->r16 = ADD32(ctx->r29, 0XD8);
    // 0x80069CDC: addiu       $v1, $s0, 0x8
    ctx->r3 = ADD32(ctx->r16, 0X8);
    // 0x80069CE0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80069CE4:
    // 0x80069CE4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80069CE8: sw          $v1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r3;
    // 0x80069CEC: jal         0x8001C568
    // 0x80069CF0: sw          $v0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r2;
    func_8001C568(rdram, ctx);
        goto after_29;
    // 0x80069CF0: sw          $v0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r2;
    after_29:
    // 0x80069CF4: lw          $v1, 0x4C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4C);
    // 0x80069CF8: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80069CFC: lw          $v0, 0x60($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X60);
    // 0x80069D00: sltu        $at, $s0, $v1
    ctx->r1 = ctx->r16 < ctx->r3 ? 1 : 0;
    // 0x80069D04: bne         $at, $zero, L_80069CE4
    if (ctx->r1 != 0) {
        // 0x80069D08: nop
    
            goto L_80069CE4;
    }
    // 0x80069D08: nop

    // 0x80069D0C: jal         0x8005CD50
    // 0x80069D10: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8005CD50(rdram, ctx);
        goto after_30;
    // 0x80069D10: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_30:
    // 0x80069D14: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80069D18: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x80069D1C: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x80069D20: nop

    // 0x80069D24: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80069D28: jal         0x80007AE0
    // 0x80069D2C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    func_80007AE0(rdram, ctx);
        goto after_31;
    // 0x80069D2C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    after_31:
    // 0x80069D30: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80069D34: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80069D38: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80069D3C: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80069D40: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80069D44: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x80069D48: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80069D4C: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x80069D50: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80069D54: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x80069D58: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x80069D5C: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x80069D60: jr          $ra
    // 0x80069D64: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
    return;
    // 0x80069D64: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
;}
RECOMP_FUNC void func_80069D68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80069D68: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x80069D6C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80069D70: sw          $s3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r19;
    // 0x80069D74: sw          $s2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r18;
    // 0x80069D78: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x80069D7C: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x80069D80: swc1        $f25, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x80069D84: swc1        $f24, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f24.u32l;
    // 0x80069D88: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80069D8C: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x80069D90: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80069D94: jal         0x80007774
    // 0x80069D98: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x80069D98: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x80069D9C: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80069DA0: addiu       $t6, $t6, 0x25BC
    ctx->r14 = ADD32(ctx->r14, 0X25BC);
    // 0x80069DA4: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x80069DA8: addiu       $s2, $sp, 0x74
    ctx->r18 = ADD32(ctx->r29, 0X74);
    // 0x80069DAC: lw          $s3, 0x1C($v0)
    ctx->r19 = MEM_W(ctx->r2, 0X1C);
    // 0x80069DB0: sw          $at, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r1;
    // 0x80069DB4: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x80069DB8: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x80069DBC: sw          $t9, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r25;
    // 0x80069DC0: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x80069DC4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80069DC8: sw          $at, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r1;
    // 0x80069DCC: sw          $t8, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r24;
    // 0x80069DD0: addiu       $a0, $zero, 0x7A1
    ctx->r4 = ADD32(0, 0X7A1);
    // 0x80069DD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80069DD8: jal         0x8001D138
    // 0x80069DDC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x80069DDC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80069DE0: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80069DE4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80069DE8: jal         0x80019164
    // 0x80069DEC: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x80069DEC: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_2:
    // 0x80069DF0: sw          $s1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r17;
    // 0x80069DF4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80069DF8: jal         0x8001C468
    // 0x80069DFC: addiu       $a1, $zero, 0x7DE
    ctx->r5 = ADD32(0, 0X7DE);
    func_8001C468(rdram, ctx);
        goto after_3;
    // 0x80069DFC: addiu       $a1, $zero, 0x7DE
    ctx->r5 = ADD32(0, 0X7DE);
    after_3:
    // 0x80069E00: lw          $a0, 0x8C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X8C);
    // 0x80069E04: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80069E08: jal         0x800192E8
    // 0x80069E0C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800192E8(rdram, ctx);
        goto after_4;
    // 0x80069E0C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x80069E10: lw          $a0, 0x8C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X8C);
    // 0x80069E14: jal         0x80019114
    // 0x80069E18: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_80019114(rdram, ctx);
        goto after_5;
    // 0x80069E18: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_5:
    // 0x80069E1C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80069E20: lwc1        $f24, 0x6470($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X6470);
    // 0x80069E24: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80069E28: lwc1        $f22, 0x6474($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X6474);
    // 0x80069E2C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80069E30: lwc1        $f20, 0x6478($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X6478);
    // 0x80069E34: addiu       $s1, $zero, 0x3C
    ctx->r17 = ADD32(0, 0X3C);
L_80069E38:
    // 0x80069E38: lw          $t7, 0x24($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X24);
    // 0x80069E3C: lwc1        $f0, 0x7C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x80069E40: andi        $t6, $t7, 0x4000
    ctx->r14 = ctx->r15 & 0X4000;
    // 0x80069E44: bne         $t6, $zero, L_80069ED8
    if (ctx->r14 != 0) {
        // 0x80069E48: nop
    
            goto L_80069ED8;
    }
    // 0x80069E48: nop

    // 0x80069E4C: bne         $s0, $s1, L_80069E5C
    if (ctx->r16 != ctx->r17) {
        // 0x80069E50: slti        $at, $s0, 0x1E
        ctx->r1 = SIGNED(ctx->r16) < 0X1E ? 1 : 0;
            goto L_80069E5C;
    }
    // 0x80069E50: slti        $at, $s0, 0x1E
    ctx->r1 = SIGNED(ctx->r16) < 0X1E ? 1 : 0;
    // 0x80069E54: addiu       $s0, $zero, 0x1E
    ctx->r16 = ADD32(0, 0X1E);
    // 0x80069E58: slti        $at, $s0, 0x1E
    ctx->r1 = SIGNED(ctx->r16) < 0X1E ? 1 : 0;
L_80069E5C:
    // 0x80069E5C: beq         $at, $zero, L_80069E84
    if (ctx->r1 == 0) {
        // 0x80069E60: slti        $at, $s0, 0x2D
        ctx->r1 = SIGNED(ctx->r16) < 0X2D ? 1 : 0;
            goto L_80069E84;
    }
    // 0x80069E60: slti        $at, $s0, 0x2D
    ctx->r1 = SIGNED(ctx->r16) < 0X2D ? 1 : 0;
    // 0x80069E64: lwc1        $f4, 0x78($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X78);
    // 0x80069E68: add.s       $f0, $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f22.fl;
    // 0x80069E6C: sub.s       $f6, $f4, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f24.fl;
    // 0x80069E70: swc1        $f0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f0.u32l;
    // 0x80069E74: swc1        $f6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f6.u32l;
    // 0x80069E78: b           L_80069EBC
    // 0x80069E7C: swc1        $f0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f0.u32l;
        goto L_80069EBC;
    // 0x80069E7C: swc1        $f0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f0.u32l;
    // 0x80069E80: slti        $at, $s0, 0x2D
    ctx->r1 = SIGNED(ctx->r16) < 0X2D ? 1 : 0;
L_80069E84:
    // 0x80069E84: beq         $at, $zero, L_80069EA4
    if (ctx->r1 == 0) {
        // 0x80069E88: slti        $at, $s0, 0x3C
        ctx->r1 = SIGNED(ctx->r16) < 0X3C ? 1 : 0;
            goto L_80069EA4;
    }
    // 0x80069E88: slti        $at, $s0, 0x3C
    ctx->r1 = SIGNED(ctx->r16) < 0X3C ? 1 : 0;
    // 0x80069E8C: lwc1        $f8, 0x78($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X78);
    // 0x80069E90: nop

    // 0x80069E94: add.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f20.fl;
    // 0x80069E98: b           L_80069EBC
    // 0x80069E9C: swc1        $f10, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f10.u32l;
        goto L_80069EBC;
    // 0x80069E9C: swc1        $f10, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f10.u32l;
    // 0x80069EA0: slti        $at, $s0, 0x3C
    ctx->r1 = SIGNED(ctx->r16) < 0X3C ? 1 : 0;
L_80069EA4:
    // 0x80069EA4: beq         $at, $zero, L_80069EC0
    if (ctx->r1 == 0) {
        // 0x80069EA8: lw          $a0, 0x8C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X8C);
            goto L_80069EC0;
    }
    // 0x80069EA8: lw          $a0, 0x8C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X8C);
    // 0x80069EAC: lwc1        $f4, 0x78($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X78);
    // 0x80069EB0: nop

    // 0x80069EB4: sub.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f20.fl;
    // 0x80069EB8: swc1        $f6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f6.u32l;
L_80069EBC:
    // 0x80069EBC: lw          $a0, 0x8C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X8C);
L_80069EC0:
    // 0x80069EC0: jal         0x80019114
    // 0x80069EC4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_80019114(rdram, ctx);
        goto after_6;
    // 0x80069EC4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_6:
    // 0x80069EC8: jal         0x80007AB0
    // 0x80069ECC: nop

    func_80007AB0(rdram, ctx);
        goto after_7;
    // 0x80069ECC: nop

    after_7:
    // 0x80069ED0: b           L_80069E38
    // 0x80069ED4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
        goto L_80069E38;
    // 0x80069ED4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_80069ED8:
    // 0x80069ED8: jal         0x8005D128
    // 0x80069EDC: addiu       $a0, $sp, 0x6C
    ctx->r4 = ADD32(ctx->r29, 0X6C);
    func_8005D128(rdram, ctx);
        goto after_8;
    // 0x80069EDC: addiu       $a0, $sp, 0x6C
    ctx->r4 = ADD32(ctx->r29, 0X6C);
    after_8:
    // 0x80069EE0: addiu       $s0, $sp, 0x8C
    ctx->r16 = ADD32(ctx->r29, 0X8C);
    // 0x80069EE4: addiu       $s2, $s0, 0x4
    ctx->r18 = ADD32(ctx->r16, 0X4);
L_80069EE8:
    // 0x80069EE8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80069EEC: jal         0x8001C568
    // 0x80069EF0: nop

    func_8001C568(rdram, ctx);
        goto after_9;
    // 0x80069EF0: nop

    after_9:
    // 0x80069EF4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80069EF8: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x80069EFC: bne         $at, $zero, L_80069EE8
    if (ctx->r1 != 0) {
        // 0x80069F00: nop
    
            goto L_80069EE8;
    }
    // 0x80069F00: nop

    // 0x80069F04: jal         0x8005CD50
    // 0x80069F08: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_8005CD50(rdram, ctx);
        goto after_10;
    // 0x80069F08: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_10:
    // 0x80069F0C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80069F10: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x80069F14: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x80069F18: nop

    // 0x80069F1C: addiu       $t7, $t8, -0x1
    ctx->r15 = ADD32(ctx->r24, -0X1);
    // 0x80069F20: jal         0x80007AE0
    // 0x80069F24: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    func_80007AE0(rdram, ctx);
        goto after_11;
    // 0x80069F24: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    after_11:
    // 0x80069F28: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80069F2C: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x80069F30: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80069F34: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80069F38: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80069F3C: lwc1        $f25, 0x20($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80069F40: lwc1        $f24, 0x24($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80069F44: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x80069F48: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x80069F4C: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x80069F50: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x80069F54: jr          $ra
    // 0x80069F58: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    // 0x80069F58: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void func_80069F5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80069F5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80069F60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80069F64: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x80069F68: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80069F6C: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x80069F70: lwc1        $f6, 0x4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4);
    // 0x80069F74: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80069F78: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    // 0x80069F7C: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80069F80: swc1        $f10, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f10.u32l;
    // 0x80069F84: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x80069F88: jal         0x80028AB8
    // 0x80069F8C: swc1        $f4, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f4.u32l;
    func_80028AB8(rdram, ctx);
        goto after_0;
    // 0x80069F8C: swc1        $f4, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f4.u32l;
    after_0:
    // 0x80069F90: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x80069F94: jal         0x80028C2C
    // 0x80069F98: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    func_80028C2C(rdram, ctx);
        goto after_1;
    // 0x80069F98: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    after_1:
    // 0x80069F9C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80069FA0: lwc1        $f10, 0x10($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X10);
    // 0x80069FA4: lwc1        $f9, 0x6480($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X6480);
    // 0x80069FA8: lwc1        $f8, 0x6484($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X6484);
    // 0x80069FAC: cvt.d.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.d = CVT_D_S(ctx->f10.fl);
    // 0x80069FB0: mul.d       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f8.d, ctx->f4.d);
    // 0x80069FB4: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80069FB8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80069FBC: nop

    // 0x80069FC0: mul.s       $f8, $f0, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x80069FC4: cvt.d.s     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f4.d = CVT_D_S(ctx->f8.fl);
    // 0x80069FC8: add.d       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = ctx->f4.d + ctx->f6.d;
    // 0x80069FCC: jal         0x80027F1C
    // 0x80069FD0: cvt.s.d     $f22, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f22.fl = CVT_S_D(ctx->f10.d);
    func_80027F1C(rdram, ctx);
        goto after_2;
    // 0x80069FD0: cvt.s.d     $f22, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f22.fl = CVT_S_D(ctx->f10.d);
    after_2:
    // 0x80069FD4: lui         $at, 0x4010
    ctx->r1 = S32(0X4010 << 16);
    // 0x80069FD8: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80069FDC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80069FE0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80069FE4: mul.d       $f4, $f0, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f8.d); 
    ctx->f4.d = MUL_D(ctx->f0.d, ctx->f8.d);
    // 0x80069FE8: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80069FEC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80069FF0: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    // 0x80069FF4: add.d       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = ctx->f4.d + ctx->f6.d;
    // 0x80069FF8: jal         0x80028C2C
    // 0x80069FFC: cvt.s.d     $f20, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f20.fl = CVT_S_D(ctx->f10.d);
    func_80028C2C(rdram, ctx);
        goto after_3;
    // 0x80069FFC: cvt.s.d     $f20, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f20.fl = CVT_S_D(ctx->f10.d);
    after_3:
    // 0x8006A000: mul.s       $f8, $f0, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x8006A004: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    // 0x8006A008: jal         0x80028AB8
    // 0x8006A00C: swc1        $f8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f8.u32l;
    func_80028AB8(rdram, ctx);
        goto after_4;
    // 0x8006A00C: swc1        $f8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f8.u32l;
    after_4:
    // 0x8006A010: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x8006A014: jal         0x80028C2C
    // 0x8006A018: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    func_80028C2C(rdram, ctx);
        goto after_5;
    // 0x8006A018: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    after_5:
    // 0x8006A01C: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x8006A020: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8006A024: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x8006A028: mul.s       $f10, $f0, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x8006A02C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8006A030: jal         0x80028C2C
    // 0x8006A034: add.s       $f12, $f10, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f8.fl;
    func_80028C2C(rdram, ctx);
        goto after_6;
    // 0x8006A034: add.s       $f12, $f10, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f8.fl;
    after_6:
    // 0x8006A038: mul.s       $f4, $f0, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x8006A03C: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    // 0x8006A040: jal         0x80028C00
    // 0x8006A044: swc1        $f4, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f4.u32l;
    func_80028C00(rdram, ctx);
        goto after_7;
    // 0x8006A044: swc1        $f4, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f4.u32l;
    after_7:
    // 0x8006A048: mul.s       $f6, $f0, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x8006A04C: swc1        $f6, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f6.u32l;
    // 0x8006A050: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006A054: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006A058: jr          $ra
    // 0x8006A05C: nop

    return;
    // 0x8006A05C: nop

;}
RECOMP_FUNC void func_8006A060(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006A060: addiu       $sp, $sp, -0x198
    ctx->r29 = ADD32(ctx->r29, -0X198);
    // 0x8006A064: sw          $ra, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r31;
    // 0x8006A068: sw          $fp, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r30;
    // 0x8006A06C: sw          $s7, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r23;
    // 0x8006A070: sw          $s6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r22;
    // 0x8006A074: sw          $s5, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r21;
    // 0x8006A078: sw          $s4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r20;
    // 0x8006A07C: sw          $s3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r19;
    // 0x8006A080: sw          $s2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r18;
    // 0x8006A084: sw          $s1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r17;
    // 0x8006A088: sw          $s0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r16;
    // 0x8006A08C: swc1        $f31, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x8006A090: swc1        $f30, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f30.u32l;
    // 0x8006A094: swc1        $f29, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x8006A098: swc1        $f28, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f28.u32l;
    // 0x8006A09C: swc1        $f27, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x8006A0A0: swc1        $f26, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f26.u32l;
    // 0x8006A0A4: swc1        $f25, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x8006A0A8: swc1        $f24, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f24.u32l;
    // 0x8006A0AC: swc1        $f23, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8006A0B0: swc1        $f22, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f22.u32l;
    // 0x8006A0B4: swc1        $f21, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8006A0B8: jal         0x80007774
    // 0x8006A0BC: swc1        $f20, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x8006A0BC: swc1        $f20, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x8006A0C0: lw          $t6, 0x1C($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X1C);
    // 0x8006A0C4: addiu       $a0, $zero, 0x795
    ctx->r4 = ADD32(0, 0X795);
    // 0x8006A0C8: jal         0x8001BD98
    // 0x8006A0CC: sw          $t6, 0x190($sp)
    MEM_W(0X190, ctx->r29) = ctx->r14;
    func_8001BD98(rdram, ctx);
        goto after_1;
    // 0x8006A0CC: sw          $t6, 0x190($sp)
    MEM_W(0X190, ctx->r29) = ctx->r14;
    after_1:
    // 0x8006A0D0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8006A0D4: lwc1        $f0, 0x6488($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6488);
    // 0x8006A0D8: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
    // 0x8006A0DC: addiu       $v0, $sp, 0xD8
    ctx->r2 = ADD32(ctx->r29, 0XD8);
    // 0x8006A0E0: addiu       $v1, $sp, 0xE4
    ctx->r3 = ADD32(ctx->r29, 0XE4);
    // 0x8006A0E4: addiu       $a0, $sp, 0xF8
    ctx->r4 = ADD32(ctx->r29, 0XF8);
    // 0x8006A0E8: swc1        $f0, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f0.u32l;
    // 0x8006A0EC: swc1        $f0, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f0.u32l;
    // 0x8006A0F0: swc1        $f0, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f0.u32l;
L_8006A0F4:
    // 0x8006A0F4: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8006A0F8: sltu        $at, $v1, $a0
    ctx->r1 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x8006A0FC: bne         $at, $zero, L_8006A0F4
    if (ctx->r1 != 0) {
        // 0x8006A100: sw          $v0, -0x4($v1)
        MEM_W(-0X4, ctx->r3) = ctx->r2;
            goto L_8006A0F4;
    }
    // 0x8006A100: sw          $v0, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r2;
    // 0x8006A104: addiu       $t7, $sp, 0xF8
    ctx->r15 = ADD32(ctx->r29, 0XF8);
    // 0x8006A108: addiu       $t8, $sp, 0xE4
    ctx->r24 = ADD32(ctx->r29, 0XE4);
    // 0x8006A10C: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x8006A110: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x8006A114: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x8006A118: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x8006A11C: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x8006A120: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x8006A124: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x8006A128: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8006A12C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8006A130: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8006A134: jal         0x80019F10
    // 0x8006A138: sw          $t0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r8;
    func_80019F10(rdram, ctx);
        goto after_2;
    // 0x8006A138: sw          $t0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r8;
    after_2:
    // 0x8006A13C: lw          $v1, 0x190($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X190);
    // 0x8006A140: or          $s6, $v0, $zero
    ctx->r22 = ctx->r2 | 0;
    // 0x8006A144: lwc1        $f28, 0x0($v1)
    ctx->f28.u32l = MEM_W(ctx->r3, 0X0);
    // 0x8006A148: lwc1        $f30, 0x4($v1)
    ctx->f30.u32l = MEM_W(ctx->r3, 0X4);
    // 0x8006A14C: lwc1        $f20, 0x8($v1)
    ctx->f20.u32l = MEM_W(ctx->r3, 0X8);
    // 0x8006A150: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8006A154: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8006A158: jal         0x80018658
    // 0x8006A15C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80018658(rdram, ctx);
        goto after_3;
    // 0x8006A15C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x8006A160: addiu       $s5, $sp, 0xF8
    ctx->r21 = ADD32(ctx->r29, 0XF8);
    // 0x8006A164: addiu       $s2, $sp, 0x148
    ctx->r18 = ADD32(ctx->r29, 0X148);
    // 0x8006A168: addiu       $s3, $sp, 0x10C
    ctx->r19 = ADD32(ctx->r29, 0X10C);
    // 0x8006A16C: addiu       $s4, $sp, 0x148
    ctx->r20 = ADD32(ctx->r29, 0X148);
L_8006A170:
    // 0x8006A170: sw          $s2, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r18;
    // 0x8006A174: lw          $s0, 0x190($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X190);
    // 0x8006A178: swc1        $f20, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f20.u32l;
    // 0x8006A17C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x8006A180: jal         0x80069F5C
    // 0x8006A184: or          $s1, $s3, $zero
    ctx->r17 = ctx->r19 | 0;
    func_80069F5C(rdram, ctx);
        goto after_4;
    // 0x8006A184: or          $s1, $s3, $zero
    ctx->r17 = ctx->r19 | 0;
    after_4:
    // 0x8006A188: addiu       $s3, $s3, 0xC
    ctx->r19 = ADD32(ctx->r19, 0XC);
    // 0x8006A18C: lwc1        $f20, 0xD4($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x8006A190: addiu       $s5, $s5, 0x4
    ctx->r21 = ADD32(ctx->r21, 0X4);
    // 0x8006A194: bne         $s3, $s4, L_8006A170
    if (ctx->r19 != ctx->r20) {
        // 0x8006A198: addiu       $s2, $s2, 0xC
        ctx->r18 = ADD32(ctx->r18, 0XC);
            goto L_8006A170;
    }
    // 0x8006A198: addiu       $s2, $s2, 0xC
    ctx->r18 = ADD32(ctx->r18, 0XC);
    // 0x8006A19C: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x8006A1A0: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x8006A1A4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8006A1A8: lwc1        $f25, 0x6490($at)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r1, 0X6490);
    // 0x8006A1AC: lwc1        $f24, 0x6494($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X6494);
    // 0x8006A1B0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8006A1B4: lwc1        $f23, 0x6498($at)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r1, 0X6498);
    // 0x8006A1B8: lwc1        $f22, 0x649C($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X649C);
    // 0x8006A1BC: sw          $zero, 0x188($sp)
    MEM_W(0X188, ctx->r29) = 0;
    // 0x8006A1C0: addiu       $fp, $zero, 0x14
    ctx->r30 = ADD32(0, 0X14);
L_8006A1C4:
    // 0x8006A1C4: lw          $t6, 0x190($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X190);
    // 0x8006A1C8: lw          $t9, 0x188($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X188);
    // 0x8006A1CC: lw          $t7, 0x24($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X24);
    // 0x8006A1D0: addiu       $t6, $zero, 0x14
    ctx->r14 = ADD32(0, 0X14);
    // 0x8006A1D4: andi        $t8, $t7, 0x4000
    ctx->r24 = ctx->r15 & 0X4000;
    // 0x8006A1D8: bne         $t8, $zero, L_8006A388
    if (ctx->r24 != 0) {
        // 0x8006A1DC: subu        $s5, $t6, $t9
        ctx->r21 = SUB32(ctx->r14, ctx->r25);
            goto L_8006A388;
    }
    // 0x8006A1DC: subu        $s5, $t6, $t9
    ctx->r21 = SUB32(ctx->r14, ctx->r25);
    // 0x8006A1E0: sll         $s7, $s5, 8
    ctx->r23 = S32(ctx->r21 << 8);
    // 0x8006A1E4: subu        $s7, $s7, $s5
    ctx->r23 = SUB32(ctx->r23, ctx->r21);
    // 0x8006A1E8: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x8006A1EC: div         $zero, $s7, $at
    lo = S32(S64(S32(ctx->r23)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r23)) % S64(S32(ctx->r1)));
    // 0x8006A1F0: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x8006A1F4: addiu       $s2, $sp, 0x148
    ctx->r18 = ADD32(ctx->r29, 0X148);
    // 0x8006A1F8: addiu       $s3, $sp, 0x10C
    ctx->r19 = ADD32(ctx->r29, 0X10C);
    // 0x8006A1FC: mflo        $t7
    ctx->r15 = lo;
    // 0x8006A200: andi        $s7, $t7, 0xFF
    ctx->r23 = ctx->r15 & 0XFF;
    // 0x8006A204: nop

L_8006A208:
    // 0x8006A208: lwc1        $f14, 0x0($s2)
    ctx->f14.u32l = MEM_W(ctx->r18, 0X0);
    // 0x8006A20C: sll         $t6, $s4, 2
    ctx->r14 = S32(ctx->r20 << 2);
    // 0x8006A210: c.lt.s      $f28, $f14
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f28.fl < ctx->f14.fl;
    // 0x8006A214: addu        $t9, $sp, $t6
    ctx->r25 = ADD32(ctx->r29, ctx->r14);
    // 0x8006A218: bc1f        L_8006A22C
    if (!c1cs) {
        // 0x8006A21C: or          $a1, $s2, $zero
        ctx->r5 = ctx->r18 | 0;
            goto L_8006A22C;
    }
    // 0x8006A21C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x8006A220: sub.s       $f0, $f28, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f28.fl - ctx->f14.fl;
    // 0x8006A224: b           L_8006A230
    // 0x8006A228: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8006A230;
    // 0x8006A228: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_8006A22C:
    // 0x8006A22C: sub.s       $f0, $f28, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f28.fl - ctx->f14.fl;
L_8006A230:
    // 0x8006A230: c.lt.s      $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f26.fl < ctx->f0.fl;
    // 0x8006A234: or          $s1, $s3, $zero
    ctx->r17 = ctx->r19 | 0;
    // 0x8006A238: bc1t        L_8006A2B0
    if (c1cs) {
        // 0x8006A23C: nop
    
            goto L_8006A2B0;
    }
    // 0x8006A23C: nop

    // 0x8006A240: lwc1        $f12, 0x4($s2)
    ctx->f12.u32l = MEM_W(ctx->r18, 0X4);
    // 0x8006A244: nop

    // 0x8006A248: c.lt.s      $f30, $f12
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f30.fl < ctx->f12.fl;
    // 0x8006A24C: nop

    // 0x8006A250: bc1f        L_8006A264
    if (!c1cs) {
        // 0x8006A254: nop
    
            goto L_8006A264;
    }
    // 0x8006A254: nop

    // 0x8006A258: sub.s       $f0, $f30, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f30.fl - ctx->f12.fl;
    // 0x8006A25C: b           L_8006A268
    // 0x8006A260: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8006A268;
    // 0x8006A260: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_8006A264:
    // 0x8006A264: sub.s       $f0, $f30, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f30.fl - ctx->f12.fl;
L_8006A268:
    // 0x8006A268: c.lt.s      $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f26.fl < ctx->f0.fl;
    // 0x8006A26C: nop

    // 0x8006A270: bc1t        L_8006A2B0
    if (c1cs) {
        // 0x8006A274: nop
    
            goto L_8006A2B0;
    }
    // 0x8006A274: nop

    // 0x8006A278: lwc1        $f2, 0x8($s2)
    ctx->f2.u32l = MEM_W(ctx->r18, 0X8);
    // 0x8006A27C: nop

    // 0x8006A280: c.lt.s      $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f20.fl < ctx->f2.fl;
    // 0x8006A284: nop

    // 0x8006A288: bc1f        L_8006A29C
    if (!c1cs) {
        // 0x8006A28C: nop
    
            goto L_8006A29C;
    }
    // 0x8006A28C: nop

    // 0x8006A290: sub.s       $f0, $f20, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f20.fl - ctx->f2.fl;
    // 0x8006A294: b           L_8006A2A0
    // 0x8006A298: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8006A2A0;
    // 0x8006A298: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_8006A29C:
    // 0x8006A29C: sub.s       $f0, $f20, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f20.fl - ctx->f2.fl;
L_8006A2A0:
    // 0x8006A2A0: c.lt.s      $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f26.fl < ctx->f0.fl;
    // 0x8006A2A4: nop

    // 0x8006A2A8: bc1f        L_8006A2E0
    if (!c1cs) {
        // 0x8006A2AC: nop
    
            goto L_8006A2E0;
    }
    // 0x8006A2AC: nop

L_8006A2B0:
    // 0x8006A2B0: sw          $s2, 0xF8($t9)
    MEM_W(0XF8, ctx->r25) = ctx->r18;
    // 0x8006A2B4: lw          $s0, 0x190($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X190);
    // 0x8006A2B8: jal         0x80069F5C
    // 0x8006A2BC: swc1        $f20, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f20.u32l;
    func_80069F5C(rdram, ctx);
        goto after_5;
    // 0x8006A2BC: swc1        $f20, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f20.u32l;
    after_5:
    // 0x8006A2C0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8006A2C4: lwc1        $f23, 0x64A0($at)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r1, 0X64A0);
    // 0x8006A2C8: lwc1        $f22, 0x64A4($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X64A4);
    // 0x8006A2CC: lwc1        $f20, 0xD4($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XD4);
    // 0x8006A2D0: lwc1        $f14, 0x0($s2)
    ctx->f14.u32l = MEM_W(ctx->r18, 0X0);
    // 0x8006A2D4: lwc1        $f12, 0x4($s2)
    ctx->f12.u32l = MEM_W(ctx->r18, 0X4);
    // 0x8006A2D8: lwc1        $f2, 0x8($s2)
    ctx->f2.u32l = MEM_W(ctx->r18, 0X8);
    // 0x8006A2DC: nop

L_8006A2E0:
    // 0x8006A2E0: lwc1        $f4, 0x0($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X0);
    // 0x8006A2E4: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x8006A2E8: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8006A2EC: mul.d       $f8, $f6, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f24.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f24.d);
    // 0x8006A2F0: lwc1        $f4, 0x4($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X4);
    // 0x8006A2F4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8006A2F8: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8006A2FC: lwc1        $f4, 0x8($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X8);
    // 0x8006A300: cvt.s.d     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f0.fl = CVT_S_D(ctx->f8.d);
    // 0x8006A304: sub.d       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f22.d); 
    ctx->f8.d = ctx->f6.d - ctx->f22.d;
    // 0x8006A308: swc1        $f0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->f0.u32l;
    // 0x8006A30C: add.s       $f10, $f14, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f14.fl + ctx->f0.fl;
    // 0x8006A310: cvt.s.d     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f0.fl = CVT_S_D(ctx->f8.d);
    // 0x8006A314: swc1        $f10, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->f10.u32l;
    // 0x8006A318: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8006A31C: mul.d       $f8, $f6, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f24.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f24.d);
    // 0x8006A320: add.s       $f10, $f12, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f12.fl + ctx->f0.fl;
    // 0x8006A324: swc1        $f0, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->f0.u32l;
    // 0x8006A328: swc1        $f10, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->f10.u32l;
    // 0x8006A32C: cvt.s.d     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f0.fl = CVT_S_D(ctx->f8.d);
    // 0x8006A330: add.s       $f10, $f2, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x8006A334: swc1        $f0, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->f0.u32l;
    // 0x8006A338: bne         $s5, $fp, L_8006A348
    if (ctx->r21 != ctx->r30) {
        // 0x8006A33C: swc1        $f10, 0x8($s2)
        MEM_W(0X8, ctx->r18) = ctx->f10.u32l;
            goto L_8006A348;
    }
    // 0x8006A33C: swc1        $f10, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f10.u32l;
    // 0x8006A340: jal         0x80018658
    // 0x8006A344: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80018658(rdram, ctx);
        goto after_6;
    // 0x8006A344: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
L_8006A348:
    // 0x8006A348: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x8006A34C: jal         0x80018604
    // 0x8006A350: andi        $a1, $s7, 0xFF
    ctx->r5 = ctx->r23 & 0XFF;
    func_80018604(rdram, ctx);
        goto after_7;
    // 0x8006A350: andi        $a1, $s7, 0xFF
    ctx->r5 = ctx->r23 & 0XFF;
    after_7:
    // 0x8006A354: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x8006A358: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8006A35C: addiu       $s2, $s2, 0xC
    ctx->r18 = ADD32(ctx->r18, 0XC);
    // 0x8006A360: bne         $s4, $at, L_8006A208
    if (ctx->r20 != ctx->r1) {
        // 0x8006A364: addiu       $s3, $s3, 0xC
        ctx->r19 = ADD32(ctx->r19, 0XC);
            goto L_8006A208;
    }
    // 0x8006A364: addiu       $s3, $s3, 0xC
    ctx->r19 = ADD32(ctx->r19, 0XC);
    // 0x8006A368: jal         0x80007AB0
    // 0x8006A36C: nop

    func_80007AB0(rdram, ctx);
        goto after_8;
    // 0x8006A36C: nop

    after_8:
    // 0x8006A370: lw          $t7, 0x188($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X188);
    // 0x8006A374: nop

    // 0x8006A378: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8006A37C: slti        $at, $t8, 0x14
    ctx->r1 = SIGNED(ctx->r24) < 0X14 ? 1 : 0;
    // 0x8006A380: bne         $at, $zero, L_8006A1C4
    if (ctx->r1 != 0) {
        // 0x8006A384: sw          $t8, 0x188($sp)
        MEM_W(0X188, ctx->r29) = ctx->r24;
            goto L_8006A1C4;
    }
    // 0x8006A384: sw          $t8, 0x188($sp)
    MEM_W(0X188, ctx->r29) = ctx->r24;
L_8006A388:
    // 0x8006A388: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    // 0x8006A38C: sll         $t6, $s4, 2
    ctx->r14 = S32(ctx->r20 << 2);
    // 0x8006A390: addiu       $t9, $sp, 0xF8
    ctx->r25 = ADD32(ctx->r29, 0XF8);
    // 0x8006A394: addu        $s5, $t6, $t9
    ctx->r21 = ADD32(ctx->r14, ctx->r25);
    // 0x8006A398: sw          $zero, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = 0;
    // 0x8006A39C: sw          $zero, 0xC($s5)
    MEM_W(0XC, ctx->r21) = 0;
    // 0x8006A3A0: sw          $zero, 0x8($s5)
    MEM_W(0X8, ctx->r21) = 0;
    // 0x8006A3A4: sw          $zero, 0x4($s5)
    MEM_W(0X4, ctx->r21) = 0;
    // 0x8006A3A8: sw          $zero, 0x0($s5)
    MEM_W(0X0, ctx->r21) = 0;
    // 0x8006A3AC: jal         0x800195C4
    // 0x8006A3B0: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    func_800195C4(rdram, ctx);
        goto after_9;
    // 0x8006A3B0: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_9:
    // 0x8006A3B4: lw          $a0, 0xC8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC8);
    // 0x8006A3B8: jal         0x8001B7B8
    // 0x8006A3BC: nop

    func_8001B7B8(rdram, ctx);
        goto after_10;
    // 0x8006A3BC: nop

    after_10:
    // 0x8006A3C0: lw          $a0, 0x190($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X190);
    // 0x8006A3C4: jal         0x8005CD50
    // 0x8006A3C8: nop

    func_8005CD50(rdram, ctx);
        goto after_11;
    // 0x8006A3C8: nop

    after_11:
    // 0x8006A3CC: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8006A3D0: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x8006A3D4: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x8006A3D8: nop

    // 0x8006A3DC: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x8006A3E0: jal         0x80007AE0
    // 0x8006A3E4: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    func_80007AE0(rdram, ctx);
        goto after_12;
    // 0x8006A3E4: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    after_12:
    // 0x8006A3E8: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
    // 0x8006A3EC: lwc1        $f21, 0x30($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x8006A3F0: lwc1        $f20, 0x34($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8006A3F4: lwc1        $f23, 0x38($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x8006A3F8: lwc1        $f22, 0x3C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8006A3FC: lwc1        $f25, 0x40($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x8006A400: lwc1        $f24, 0x44($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8006A404: lwc1        $f27, 0x48($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X48);
    // 0x8006A408: lwc1        $f26, 0x4C($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8006A40C: lwc1        $f29, 0x50($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X50);
    // 0x8006A410: lwc1        $f28, 0x54($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8006A414: lwc1        $f31, 0x58($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X58);
    // 0x8006A418: lwc1        $f30, 0x5C($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8006A41C: lw          $s0, 0x60($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X60);
    // 0x8006A420: lw          $s1, 0x64($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X64);
    // 0x8006A424: lw          $s2, 0x68($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X68);
    // 0x8006A428: lw          $s3, 0x6C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X6C);
    // 0x8006A42C: lw          $s4, 0x70($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X70);
    // 0x8006A430: lw          $s5, 0x74($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X74);
    // 0x8006A434: lw          $s6, 0x78($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X78);
    // 0x8006A438: lw          $s7, 0x7C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X7C);
    // 0x8006A43C: lw          $fp, 0x80($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X80);
    // 0x8006A440: jr          $ra
    // 0x8006A444: addiu       $sp, $sp, 0x198
    ctx->r29 = ADD32(ctx->r29, 0X198);
    return;
    // 0x8006A444: addiu       $sp, $sp, 0x198
    ctx->r29 = ADD32(ctx->r29, 0X198);
;}
RECOMP_FUNC void func_8006A448(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006A448: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006A44C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006A450: jal         0x80028AB8
    // 0x8006A454: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    func_80028AB8(rdram, ctx);
        goto after_0;
    // 0x8006A454: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    after_0:
    // 0x8006A458: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x8006A45C: jal         0x80028C2C
    // 0x8006A460: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    func_80028C2C(rdram, ctx);
        goto after_1;
    // 0x8006A460: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    after_1:
    // 0x8006A464: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8006A468: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x8006A46C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8006A470: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
    // 0x8006A474: lwc1        $f7, 0x64A8($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X64A8);
    // 0x8006A478: lwc1        $f6, 0x64AC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X64AC);
    // 0x8006A47C: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x8006A480: mul.d       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = MUL_D(ctx->f6.d, ctx->f10.d);
    // 0x8006A484: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8006A488: mul.s       $f8, $f0, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f24.fl);
    // 0x8006A48C: lwc1        $f9, 0x64B0($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X64B0);
    // 0x8006A490: cvt.d.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f6.d = CVT_D_S(ctx->f8.fl);
    // 0x8006A494: add.d       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f4.d); 
    ctx->f10.d = ctx->f6.d + ctx->f4.d;
    // 0x8006A498: lwc1        $f8, 0x64B4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X64B4);
    // 0x8006A49C: nop

    // 0x8006A4A0: sub.d       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = ctx->f10.d - ctx->f8.d;
    // 0x8006A4A4: jal         0x80027F1C
    // 0x8006A4A8: cvt.s.d     $f22, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f22.fl = CVT_S_D(ctx->f6.d);
    func_80027F1C(rdram, ctx);
        goto after_2;
    // 0x8006A4A8: cvt.s.d     $f22, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f22.fl = CVT_S_D(ctx->f6.d);
    after_2:
    // 0x8006A4AC: lui         $at, 0x402C
    ctx->r1 = S32(0X402C << 16);
    // 0x8006A4B0: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x8006A4B4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8006A4B8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8006A4BC: mul.d       $f10, $f0, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f4.d); 
    ctx->f10.d = MUL_D(ctx->f0.d, ctx->f4.d);
    // 0x8006A4C0: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x8006A4C4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8006A4C8: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    // 0x8006A4CC: add.d       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = ctx->f10.d + ctx->f8.d;
    // 0x8006A4D0: jal         0x80028C2C
    // 0x8006A4D4: cvt.s.d     $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f20.fl = CVT_S_D(ctx->f6.d);
    func_80028C2C(rdram, ctx);
        goto after_3;
    // 0x8006A4D4: cvt.s.d     $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f20.fl = CVT_S_D(ctx->f6.d);
    after_3:
    // 0x8006A4D8: mul.s       $f4, $f0, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x8006A4DC: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    // 0x8006A4E0: jal         0x80028AB8
    // 0x8006A4E4: swc1        $f4, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f4.u32l;
    func_80028AB8(rdram, ctx);
        goto after_4;
    // 0x8006A4E4: swc1        $f4, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f4.u32l;
    after_4:
    // 0x8006A4E8: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x8006A4EC: jal         0x80028C2C
    // 0x8006A4F0: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    func_80028C2C(rdram, ctx);
        goto after_5;
    // 0x8006A4F0: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    after_5:
    // 0x8006A4F4: mul.s       $f8, $f0, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f24.fl);
    // 0x8006A4F8: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x8006A4FC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8006A500: jal         0x80028C2C
    // 0x8006A504: add.s       $f12, $f8, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f6.fl;
    func_80028C2C(rdram, ctx);
        goto after_6;
    // 0x8006A504: add.s       $f12, $f8, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f6.fl;
    after_6:
    // 0x8006A508: mul.s       $f4, $f0, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x8006A50C: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    // 0x8006A510: jal         0x80028C00
    // 0x8006A514: swc1        $f4, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f4.u32l;
    func_80028C00(rdram, ctx);
        goto after_7;
    // 0x8006A514: swc1        $f4, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f4.u32l;
    after_7:
    // 0x8006A518: mul.s       $f10, $f0, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x8006A51C: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x8006A520: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8006A524: swc1        $f10, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f10.u32l;
    // 0x8006A528: lwc1        $f8, 0x0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X0);
    // 0x8006A52C: nop

    // 0x8006A530: swc1        $f8, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->f8.u32l;
    // 0x8006A534: lwc1        $f6, 0x4($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X4);
    // 0x8006A538: lwc1        $f8, 0x4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X4);
    // 0x8006A53C: mul.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x8006A540: add.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8006A544: swc1        $f6, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->f6.u32l;
    // 0x8006A548: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x8006A54C: nop

    // 0x8006A550: swc1        $f4, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->f4.u32l;
    // 0x8006A554: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006A558: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8006A55C: jr          $ra
    // 0x8006A560: nop

    return;
    // 0x8006A560: nop

;}
RECOMP_FUNC void func_8006A564(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006A564: addiu       $sp, $sp, -0x1B0
    ctx->r29 = ADD32(ctx->r29, -0X1B0);
    // 0x8006A568: sw          $ra, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r31;
    // 0x8006A56C: sw          $fp, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r30;
    // 0x8006A570: sw          $s7, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r23;
    // 0x8006A574: sw          $s6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r22;
    // 0x8006A578: sw          $s5, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r21;
    // 0x8006A57C: sw          $s4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r20;
    // 0x8006A580: sw          $s3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r19;
    // 0x8006A584: sw          $s2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r18;
    // 0x8006A588: sw          $s1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r17;
    // 0x8006A58C: sw          $s0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r16;
    // 0x8006A590: swc1        $f31, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x8006A594: swc1        $f30, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f30.u32l;
    // 0x8006A598: swc1        $f29, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x8006A59C: swc1        $f28, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f28.u32l;
    // 0x8006A5A0: swc1        $f27, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x8006A5A4: swc1        $f26, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f26.u32l;
    // 0x8006A5A8: swc1        $f25, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x8006A5AC: swc1        $f24, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f24.u32l;
    // 0x8006A5B0: swc1        $f23, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8006A5B4: swc1        $f22, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f22.u32l;
    // 0x8006A5B8: swc1        $f21, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8006A5BC: jal         0x80007774
    // 0x8006A5C0: swc1        $f20, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x8006A5C0: swc1        $f20, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x8006A5C4: lw          $s7, 0x1C($v0)
    ctx->r23 = MEM_W(ctx->r2, 0X1C);
    // 0x8006A5C8: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x8006A5CC: sw          $zero, 0x19C($sp)
    MEM_W(0X19C, ctx->r29) = 0;
    // 0x8006A5D0: addiu       $t7, $t7, 0x25C8
    ctx->r15 = ADD32(ctx->r15, 0X25C8);
    // 0x8006A5D4: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x8006A5D8: addiu       $t6, $sp, 0xD0
    ctx->r14 = ADD32(ctx->r29, 0XD0);
    // 0x8006A5DC: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x8006A5E0: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x8006A5E4: lw          $t9, 0x4($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X4);
    // 0x8006A5E8: addiu       $a0, $zero, 0x795
    ctx->r4 = ADD32(0, 0X795);
    // 0x8006A5EC: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x8006A5F0: jal         0x8001BD98
    // 0x8006A5F4: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    func_8001BD98(rdram, ctx);
        goto after_1;
    // 0x8006A5F4: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    after_1:
    // 0x8006A5F8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8006A5FC: lwc1        $f0, 0x64B8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X64B8);
    // 0x8006A600: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
    // 0x8006A604: addiu       $v0, $sp, 0xEC
    ctx->r2 = ADD32(ctx->r29, 0XEC);
    // 0x8006A608: addiu       $v1, $sp, 0xF8
    ctx->r3 = ADD32(ctx->r29, 0XF8);
    // 0x8006A60C: addiu       $a0, $sp, 0x10C
    ctx->r4 = ADD32(ctx->r29, 0X10C);
    // 0x8006A610: swc1        $f0, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f0.u32l;
    // 0x8006A614: swc1        $f0, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f0.u32l;
    // 0x8006A618: swc1        $f0, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f0.u32l;
L_8006A61C:
    // 0x8006A61C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8006A620: sltu        $at, $v1, $a0
    ctx->r1 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x8006A624: bne         $at, $zero, L_8006A61C
    if (ctx->r1 != 0) {
        // 0x8006A628: sw          $v0, -0x4($v1)
        MEM_W(-0X4, ctx->r3) = ctx->r2;
            goto L_8006A61C;
    }
    // 0x8006A628: sw          $v0, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r2;
    // 0x8006A62C: addiu       $fp, $sp, 0x10C
    ctx->r30 = ADD32(ctx->r29, 0X10C);
    // 0x8006A630: addiu       $t8, $sp, 0xF8
    ctx->r24 = ADD32(ctx->r29, 0XF8);
    // 0x8006A634: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x8006A638: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x8006A63C: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x8006A640: sw          $fp, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r30;
    // 0x8006A644: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x8006A648: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x8006A64C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x8006A650: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8006A654: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8006A658: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8006A65C: jal         0x80019F10
    // 0x8006A660: sw          $t0, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r8;
    func_80019F10(rdram, ctx);
        goto after_2;
    // 0x8006A660: sw          $t0, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r8;
    after_2:
    // 0x8006A664: sw          $v0, 0x1A4($sp)
    MEM_W(0X1A4, ctx->r29) = ctx->r2;
    // 0x8006A668: addiu       $a0, $zero, 0x793
    ctx->r4 = ADD32(0, 0X793);
    // 0x8006A66C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8006A670: jal         0x8001D138
    // 0x8006A674: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_3;
    // 0x8006A674: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x8006A678: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x8006A67C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8006A680: jal         0x80019164
    // 0x8006A684: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    func_80019164(rdram, ctx);
        goto after_4;
    // 0x8006A684: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    after_4:
    // 0x8006A688: sw          $s3, 0x1A0($sp)
    MEM_W(0X1A0, ctx->r29) = ctx->r19;
    // 0x8006A68C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8006A690: jal         0x8001913C
    // 0x8006A694: addiu       $a1, $s7, 0xC
    ctx->r5 = ADD32(ctx->r23, 0XC);
    func_8001913C(rdram, ctx);
        goto after_5;
    // 0x8006A694: addiu       $a1, $s7, 0xC
    ctx->r5 = ADD32(ctx->r23, 0XC);
    after_5:
    // 0x8006A698: lwc1        $f4, 0x0($s7)
    ctx->f4.u32l = MEM_W(ctx->r23, 0X0);
    // 0x8006A69C: addiu       $s6, $sp, 0x10C
    ctx->r22 = ADD32(ctx->r29, 0X10C);
    // 0x8006A6A0: swc1        $f4, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f4.u32l;
    // 0x8006A6A4: lwc1        $f6, 0x4($s7)
    ctx->f6.u32l = MEM_W(ctx->r23, 0X4);
    // 0x8006A6A8: addiu       $s3, $sp, 0x15C
    ctx->r19 = ADD32(ctx->r29, 0X15C);
    // 0x8006A6AC: swc1        $f6, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f6.u32l;
    // 0x8006A6B0: lwc1        $f8, 0x8($s7)
    ctx->f8.u32l = MEM_W(ctx->r23, 0X8);
    // 0x8006A6B4: addiu       $s4, $sp, 0x120
    ctx->r20 = ADD32(ctx->r29, 0X120);
    // 0x8006A6B8: addiu       $s5, $sp, 0x15C
    ctx->r21 = ADD32(ctx->r29, 0X15C);
    // 0x8006A6BC: swc1        $f8, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f8.u32l;
L_8006A6C0:
    // 0x8006A6C0: sw          $s3, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r19;
    // 0x8006A6C4: or          $s0, $s7, $zero
    ctx->r16 = ctx->r23 | 0;
    // 0x8006A6C8: or          $s2, $s3, $zero
    ctx->r18 = ctx->r19 | 0;
    // 0x8006A6CC: jal         0x8006A448
    // 0x8006A6D0: or          $s1, $s4, $zero
    ctx->r17 = ctx->r20 | 0;
    func_8006A448(rdram, ctx);
        goto after_6;
    // 0x8006A6D0: or          $s1, $s4, $zero
    ctx->r17 = ctx->r20 | 0;
    after_6:
    // 0x8006A6D4: addiu       $s4, $s4, 0xC
    ctx->r20 = ADD32(ctx->r20, 0XC);
    // 0x8006A6D8: addiu       $s6, $s6, 0x4
    ctx->r22 = ADD32(ctx->r22, 0X4);
    // 0x8006A6DC: bne         $s4, $s5, L_8006A6C0
    if (ctx->r20 != ctx->r21) {
        // 0x8006A6E0: addiu       $s3, $s3, 0xC
        ctx->r19 = ADD32(ctx->r19, 0XC);
            goto L_8006A6C0;
    }
    // 0x8006A6E0: addiu       $s3, $s3, 0xC
    ctx->r19 = ADD32(ctx->r19, 0XC);
    // 0x8006A6E4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8006A6E8: lwc1        $f30, 0x64BC($at)
    ctx->f30.u32l = MEM_W(ctx->r1, 0X64BC);
    // 0x8006A6EC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8006A6F0: lwc1        $f28, 0x64C0($at)
    ctx->f28.u32l = MEM_W(ctx->r1, 0X64C0);
    // 0x8006A6F4: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x8006A6F8: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x8006A6FC: addiu       $s6, $zero, 0x5
    ctx->r22 = ADD32(0, 0X5);
    // 0x8006A700: lw          $v0, 0x24($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X24);
L_8006A704:
    // 0x8006A704: nop

    // 0x8006A708: andi        $t7, $v0, 0x4000
    ctx->r15 = ctx->r2 & 0X4000;
    // 0x8006A70C: bne         $t7, $zero, L_8006A8E4
    if (ctx->r15 != 0) {
        // 0x8006A710: andi        $t9, $v0, 0x800
        ctx->r25 = ctx->r2 & 0X800;
            goto L_8006A8E4;
    }
    // 0x8006A710: andi        $t9, $v0, 0x800
    ctx->r25 = ctx->r2 & 0X800;
    // 0x8006A714: beq         $t9, $zero, L_8006A768
    if (ctx->r25 == 0) {
        // 0x8006A718: andi        $t7, $v0, 0x400
        ctx->r15 = ctx->r2 & 0X400;
            goto L_8006A768;
    }
    // 0x8006A718: andi        $t7, $v0, 0x400
    ctx->r15 = ctx->r2 & 0X400;
    // 0x8006A71C: lwc1        $f10, 0x0($s7)
    ctx->f10.u32l = MEM_W(ctx->r23, 0X0);
    // 0x8006A720: addiu       $at, $zero, -0x801
    ctx->r1 = ADD32(0, -0X801);
    // 0x8006A724: swc1        $f10, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f10.u32l;
    // 0x8006A728: lwc1        $f4, 0x4($s7)
    ctx->f4.u32l = MEM_W(ctx->r23, 0X4);
    // 0x8006A72C: addiu       $a1, $sp, 0xE0
    ctx->r5 = ADD32(ctx->r29, 0XE0);
    // 0x8006A730: swc1        $f4, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f4.u32l;
    // 0x8006A734: lwc1        $f6, 0x8($s7)
    ctx->f6.u32l = MEM_W(ctx->r23, 0X8);
    // 0x8006A738: nop

    // 0x8006A73C: swc1        $f6, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->f6.u32l;
    // 0x8006A740: lw          $t8, 0x24($s7)
    ctx->r24 = MEM_W(ctx->r23, 0X24);
    // 0x8006A744: nop

    // 0x8006A748: and         $t6, $t8, $at
    ctx->r14 = ctx->r24 & ctx->r1;
    // 0x8006A74C: sw          $t6, 0x24($s7)
    MEM_W(0X24, ctx->r23) = ctx->r14;
    // 0x8006A750: lw          $a0, 0x1A0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1A0);
    // 0x8006A754: jal         0x80019164
    // 0x8006A758: nop

    func_80019164(rdram, ctx);
        goto after_7;
    // 0x8006A758: nop

    after_7:
    // 0x8006A75C: lw          $v0, 0x24($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X24);
    // 0x8006A760: nop

    // 0x8006A764: andi        $t7, $v0, 0x400
    ctx->r15 = ctx->r2 & 0X400;
L_8006A768:
    // 0x8006A768: beq         $t7, $zero, L_8006A778
    if (ctx->r15 == 0) {
        // 0x8006A76C: addiu       $at, $zero, -0x401
        ctx->r1 = ADD32(0, -0X401);
            goto L_8006A778;
    }
    // 0x8006A76C: addiu       $at, $zero, -0x401
    ctx->r1 = ADD32(0, -0X401);
    // 0x8006A770: and         $t9, $v0, $at
    ctx->r25 = ctx->r2 & ctx->r1;
    // 0x8006A774: sw          $t9, 0x24($s7)
    MEM_W(0X24, ctx->r23) = ctx->r25;
L_8006A778:
    // 0x8006A778: lw          $t8, 0x19C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X19C);
    // 0x8006A77C: lw          $a0, 0x1A0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1A0);
    // 0x8006A780: sll         $t6, $t8, 2
    ctx->r14 = S32(ctx->r24 << 2);
    // 0x8006A784: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x8006A788: addiu       $a1, $sp, 0xD0
    ctx->r5 = ADD32(ctx->r29, 0XD0);
    // 0x8006A78C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8006A790: jal         0x8001913C
    // 0x8006A794: swc1        $f10, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f10.u32l;
    func_8001913C(rdram, ctx);
        goto after_8;
    // 0x8006A794: swc1        $f10, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f10.u32l;
    after_8:
    // 0x8006A798: lwc1        $f20, 0xE8($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x8006A79C: lwc1        $f18, 0xE4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x8006A7A0: lwc1        $f16, 0xE0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x8006A7A4: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x8006A7A8: addiu       $s3, $sp, 0x15C
    ctx->r19 = ADD32(ctx->r29, 0X15C);
    // 0x8006A7AC: addiu       $s4, $sp, 0x120
    ctx->r20 = ADD32(ctx->r29, 0X120);
L_8006A7B0:
    // 0x8006A7B0: lwc1        $f14, 0x0($s3)
    ctx->f14.u32l = MEM_W(ctx->r19, 0X0);
    // 0x8006A7B4: sll         $t7, $s5, 2
    ctx->r15 = S32(ctx->r21 << 2);
    // 0x8006A7B8: c.lt.s      $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.fl < ctx->f14.fl;
    // 0x8006A7BC: addu        $t9, $fp, $t7
    ctx->r25 = ADD32(ctx->r30, ctx->r15);
    // 0x8006A7C0: bc1f        L_8006A7D4
    if (!c1cs) {
        // 0x8006A7C4: or          $s0, $s7, $zero
        ctx->r16 = ctx->r23 | 0;
            goto L_8006A7D4;
    }
    // 0x8006A7C4: or          $s0, $s7, $zero
    ctx->r16 = ctx->r23 | 0;
    // 0x8006A7C8: sub.s       $f0, $f16, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f16.fl - ctx->f14.fl;
    // 0x8006A7CC: b           L_8006A7D8
    // 0x8006A7D0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8006A7D8;
    // 0x8006A7D0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_8006A7D4:
    // 0x8006A7D4: sub.s       $f0, $f16, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f16.fl - ctx->f14.fl;
L_8006A7D8:
    // 0x8006A7D8: c.lt.s      $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f26.fl < ctx->f0.fl;
    // 0x8006A7DC: or          $s2, $s3, $zero
    ctx->r18 = ctx->r19 | 0;
    // 0x8006A7E0: bc1t        L_8006A858
    if (c1cs) {
        // 0x8006A7E4: or          $s1, $s4, $zero
        ctx->r17 = ctx->r20 | 0;
            goto L_8006A858;
    }
    // 0x8006A7E4: or          $s1, $s4, $zero
    ctx->r17 = ctx->r20 | 0;
    // 0x8006A7E8: lwc1        $f12, 0x4($s3)
    ctx->f12.u32l = MEM_W(ctx->r19, 0X4);
    // 0x8006A7EC: nop

    // 0x8006A7F0: c.lt.s      $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f18.fl < ctx->f12.fl;
    // 0x8006A7F4: nop

    // 0x8006A7F8: bc1f        L_8006A80C
    if (!c1cs) {
        // 0x8006A7FC: nop
    
            goto L_8006A80C;
    }
    // 0x8006A7FC: nop

    // 0x8006A800: sub.s       $f0, $f18, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f18.fl - ctx->f12.fl;
    // 0x8006A804: b           L_8006A810
    // 0x8006A808: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8006A810;
    // 0x8006A808: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_8006A80C:
    // 0x8006A80C: sub.s       $f0, $f18, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f18.fl - ctx->f12.fl;
L_8006A810:
    // 0x8006A810: c.lt.s      $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f26.fl < ctx->f0.fl;
    // 0x8006A814: nop

    // 0x8006A818: bc1t        L_8006A858
    if (c1cs) {
        // 0x8006A81C: nop
    
            goto L_8006A858;
    }
    // 0x8006A81C: nop

    // 0x8006A820: lwc1        $f2, 0x8($s3)
    ctx->f2.u32l = MEM_W(ctx->r19, 0X8);
    // 0x8006A824: nop

    // 0x8006A828: c.lt.s      $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f20.fl < ctx->f2.fl;
    // 0x8006A82C: nop

    // 0x8006A830: bc1f        L_8006A844
    if (!c1cs) {
        // 0x8006A834: nop
    
            goto L_8006A844;
    }
    // 0x8006A834: nop

    // 0x8006A838: sub.s       $f0, $f20, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f20.fl - ctx->f2.fl;
    // 0x8006A83C: b           L_8006A848
    // 0x8006A840: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_8006A848;
    // 0x8006A840: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_8006A844:
    // 0x8006A844: sub.s       $f0, $f20, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f20.fl - ctx->f2.fl;
L_8006A848:
    // 0x8006A848: c.lt.s      $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f26.fl < ctx->f0.fl;
    // 0x8006A84C: nop

    // 0x8006A850: bc1f        L_8006A87C
    if (!c1cs) {
        // 0x8006A854: nop
    
            goto L_8006A87C;
    }
    // 0x8006A854: nop

L_8006A858:
    // 0x8006A858: jal         0x8006A448
    // 0x8006A85C: sw          $s3, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r19;
    func_8006A448(rdram, ctx);
        goto after_9;
    // 0x8006A85C: sw          $s3, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r19;
    after_9:
    // 0x8006A860: lwc1        $f14, 0x0($s3)
    ctx->f14.u32l = MEM_W(ctx->r19, 0X0);
    // 0x8006A864: lwc1        $f12, 0x4($s3)
    ctx->f12.u32l = MEM_W(ctx->r19, 0X4);
    // 0x8006A868: lwc1        $f2, 0x8($s3)
    ctx->f2.u32l = MEM_W(ctx->r19, 0X8);
    // 0x8006A86C: lwc1        $f20, 0xE8($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XE8);
    // 0x8006A870: lwc1        $f18, 0xE4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x8006A874: lwc1        $f16, 0xE0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x8006A878: nop

L_8006A87C:
    // 0x8006A87C: lwc1        $f24, 0x0($s4)
    ctx->f24.u32l = MEM_W(ctx->r20, 0X0);
    // 0x8006A880: lwc1        $f22, 0x4($s4)
    ctx->f22.u32l = MEM_W(ctx->r20, 0X4);
    // 0x8006A884: mul.s       $f24, $f24, $f28
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f24.fl = MUL_S(ctx->f24.fl, ctx->f28.fl);
    // 0x8006A888: sub.s       $f22, $f22, $f30
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f22.fl = ctx->f22.fl - ctx->f30.fl;
    // 0x8006A88C: lwc1        $f10, 0x8($s4)
    ctx->f10.u32l = MEM_W(ctx->r20, 0X8);
    // 0x8006A890: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x8006A894: mul.s       $f10, $f10, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f10.fl = MUL_S(ctx->f10.fl, ctx->f28.fl);
    // 0x8006A898: add.s       $f8, $f14, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = ctx->f14.fl + ctx->f24.fl;
    // 0x8006A89C: swc1        $f24, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->f24.u32l;
    // 0x8006A8A0: swc1        $f8, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->f8.u32l;
    // 0x8006A8A4: add.s       $f8, $f12, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = ctx->f12.fl + ctx->f22.fl;
    // 0x8006A8A8: swc1        $f22, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->f22.u32l;
    // 0x8006A8AC: add.s       $f22, $f2, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f22.fl = ctx->f2.fl + ctx->f10.fl;
    // 0x8006A8B0: swc1        $f8, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->f8.u32l;
    // 0x8006A8B4: swc1        $f10, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->f10.u32l;
    // 0x8006A8B8: swc1        $f22, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->f22.u32l;
    // 0x8006A8BC: addiu       $s3, $s3, 0xC
    ctx->r19 = ADD32(ctx->r19, 0XC);
    // 0x8006A8C0: bne         $s5, $s6, L_8006A7B0
    if (ctx->r21 != ctx->r22) {
        // 0x8006A8C4: addiu       $s4, $s4, 0xC
        ctx->r20 = ADD32(ctx->r20, 0XC);
            goto L_8006A7B0;
    }
    // 0x8006A8C4: addiu       $s4, $s4, 0xC
    ctx->r20 = ADD32(ctx->r20, 0XC);
    // 0x8006A8C8: lw          $t8, 0x19C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X19C);
    // 0x8006A8CC: nop

    // 0x8006A8D0: addiu       $t6, $t8, 0x1
    ctx->r14 = ADD32(ctx->r24, 0X1);
    // 0x8006A8D4: jal         0x80007AB0
    // 0x8006A8D8: sw          $t6, 0x19C($sp)
    MEM_W(0X19C, ctx->r29) = ctx->r14;
    func_80007AB0(rdram, ctx);
        goto after_10;
    // 0x8006A8D8: sw          $t6, 0x19C($sp)
    MEM_W(0X19C, ctx->r29) = ctx->r14;
    after_10:
    // 0x8006A8DC: b           L_8006A704
    // 0x8006A8E0: lw          $v0, 0x24($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X24);
        goto L_8006A704;
    // 0x8006A8E0: lw          $v0, 0x24($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X24);
L_8006A8E4:
    // 0x8006A8E4: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x8006A8E8: sll         $t7, $s5, 2
    ctx->r15 = S32(ctx->r21 << 2);
    // 0x8006A8EC: addu        $s6, $fp, $t7
    ctx->r22 = ADD32(ctx->r30, ctx->r15);
    // 0x8006A8F0: sw          $zero, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = 0;
    // 0x8006A8F4: sw          $zero, 0xC($s6)
    MEM_W(0XC, ctx->r22) = 0;
    // 0x8006A8F8: sw          $zero, 0x8($s6)
    MEM_W(0X8, ctx->r22) = 0;
    // 0x8006A8FC: sw          $zero, 0x4($s6)
    MEM_W(0X4, ctx->r22) = 0;
    // 0x8006A900: sw          $zero, 0x0($s6)
    MEM_W(0X0, ctx->r22) = 0;
    // 0x8006A904: lw          $a0, 0x1A4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1A4);
    // 0x8006A908: jal         0x800195C4
    // 0x8006A90C: nop

    func_800195C4(rdram, ctx);
        goto after_11;
    // 0x8006A90C: nop

    after_11:
    // 0x8006A910: lw          $a0, 0xDC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XDC);
    // 0x8006A914: jal         0x8001B7B8
    // 0x8006A918: nop

    func_8001B7B8(rdram, ctx);
        goto after_12;
    // 0x8006A918: nop

    after_12:
    // 0x8006A91C: addiu       $s3, $sp, 0x1A0
    ctx->r19 = ADD32(ctx->r29, 0X1A0);
    // 0x8006A920: addiu       $s5, $s3, 0x4
    ctx->r21 = ADD32(ctx->r19, 0X4);
L_8006A924:
    // 0x8006A924: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x8006A928: jal         0x8001C568
    // 0x8006A92C: nop

    func_8001C568(rdram, ctx);
        goto after_13;
    // 0x8006A92C: nop

    after_13:
    // 0x8006A930: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x8006A934: sltu        $at, $s3, $s5
    ctx->r1 = ctx->r19 < ctx->r21 ? 1 : 0;
    // 0x8006A938: bne         $at, $zero, L_8006A924
    if (ctx->r1 != 0) {
        // 0x8006A93C: nop
    
            goto L_8006A924;
    }
    // 0x8006A93C: nop

    // 0x8006A940: jal         0x8005CD50
    // 0x8006A944: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    func_8005CD50(rdram, ctx);
        goto after_14;
    // 0x8006A944: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    after_14:
    // 0x8006A948: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8006A94C: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x8006A950: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x8006A954: nop

    // 0x8006A958: addiu       $t6, $t8, -0x1
    ctx->r14 = ADD32(ctx->r24, -0X1);
    // 0x8006A95C: jal         0x80007AE0
    // 0x8006A960: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    func_80007AE0(rdram, ctx);
        goto after_15;
    // 0x8006A960: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    after_15:
    // 0x8006A964: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
    // 0x8006A968: lwc1        $f21, 0x30($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x8006A96C: lwc1        $f20, 0x34($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8006A970: lwc1        $f23, 0x38($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x8006A974: lwc1        $f22, 0x3C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8006A978: lwc1        $f25, 0x40($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x8006A97C: lwc1        $f24, 0x44($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8006A980: lwc1        $f27, 0x48($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X48);
    // 0x8006A984: lwc1        $f26, 0x4C($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8006A988: lwc1        $f29, 0x50($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X50);
    // 0x8006A98C: lwc1        $f28, 0x54($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8006A990: lwc1        $f31, 0x58($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X58);
    // 0x8006A994: lwc1        $f30, 0x5C($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8006A998: lw          $s0, 0x60($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X60);
    // 0x8006A99C: lw          $s1, 0x64($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X64);
    // 0x8006A9A0: lw          $s2, 0x68($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X68);
    // 0x8006A9A4: lw          $s3, 0x6C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X6C);
    // 0x8006A9A8: lw          $s4, 0x70($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X70);
    // 0x8006A9AC: lw          $s5, 0x74($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X74);
    // 0x8006A9B0: lw          $s6, 0x78($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X78);
    // 0x8006A9B4: lw          $s7, 0x7C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X7C);
    // 0x8006A9B8: lw          $fp, 0x80($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X80);
    // 0x8006A9BC: jr          $ra
    // 0x8006A9C0: addiu       $sp, $sp, 0x1B0
    ctx->r29 = ADD32(ctx->r29, 0X1B0);
    return;
    // 0x8006A9C0: addiu       $sp, $sp, 0x1B0
    ctx->r29 = ADD32(ctx->r29, 0X1B0);
;}
RECOMP_FUNC void func_8006A9C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006A9C4: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x8006A9C8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8006A9CC: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x8006A9D0: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x8006A9D4: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x8006A9D8: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x8006A9DC: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8006A9E0: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x8006A9E4: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8006A9E8: jal         0x80007774
    // 0x8006A9EC: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x8006A9EC: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x8006A9F0: lw          $s3, 0x1C($v0)
    ctx->r19 = MEM_W(ctx->r2, 0X1C);
    // 0x8006A9F4: addiu       $a0, $zero, 0x794
    ctx->r4 = ADD32(0, 0X794);
    // 0x8006A9F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8006A9FC: jal         0x8001D138
    // 0x8006AA00: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x8006AA00: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8006AA04: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8006AA08: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8006AA0C: jal         0x80019164
    // 0x8006AA10: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x8006AA10: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_2:
    // 0x8006AA14: sw          $s0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r16;
    // 0x8006AA18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006AA1C: jal         0x8001C468
    // 0x8006AA20: addiu       $a1, $zero, 0x794
    ctx->r5 = ADD32(0, 0X794);
    func_8001C468(rdram, ctx);
        goto after_3;
    // 0x8006AA20: addiu       $a1, $zero, 0x794
    ctx->r5 = ADD32(0, 0X794);
    after_3:
    // 0x8006AA24: lw          $a0, 0x8C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X8C);
    // 0x8006AA28: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8006AA2C: jal         0x800192E8
    // 0x8006AA30: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800192E8(rdram, ctx);
        goto after_4;
    // 0x8006AA30: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x8006AA34: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8006AA38: lw          $a0, 0x8C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X8C);
    // 0x8006AA3C: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    // 0x8006AA40: swc1        $f0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f0.u32l;
    // 0x8006AA44: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
    // 0x8006AA48: jal         0x80019114
    // 0x8006AA4C: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    func_80019114(rdram, ctx);
        goto after_5;
    // 0x8006AA4C: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    after_5:
    // 0x8006AA50: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8006AA54: lwc1        $f22, 0x64C4($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X64C4);
    // 0x8006AA58: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8006AA5C: lwc1        $f20, 0x64C8($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X64C8);
    // 0x8006AA60: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8006AA64: addiu       $s2, $zero, 0xF
    ctx->r18 = ADD32(0, 0XF);
    // 0x8006AA68: addiu       $s1, $sp, 0x80
    ctx->r17 = ADD32(ctx->r29, 0X80);
L_8006AA6C:
    // 0x8006AA6C: lw          $t6, 0x24($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X24);
    // 0x8006AA70: lw          $a0, 0x8C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X8C);
    // 0x8006AA74: andi        $t7, $t6, 0x4000
    ctx->r15 = ctx->r14 & 0X4000;
    // 0x8006AA78: bne         $t7, $zero, L_8006AAE8
    if (ctx->r15 != 0) {
        // 0x8006AA7C: nop
    
            goto L_8006AAE8;
    }
    // 0x8006AA7C: nop

    // 0x8006AA80: jal         0x800190A8
    // 0x8006AA84: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800190A8(rdram, ctx);
        goto after_6;
    // 0x8006AA84: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_6:
    // 0x8006AA88: slti        $at, $s0, 0x5
    ctx->r1 = SIGNED(ctx->r16) < 0X5 ? 1 : 0;
    // 0x8006AA8C: beq         $at, $zero, L_8006AAB0
    if (ctx->r1 == 0) {
        // 0x8006AA90: nop
    
            goto L_8006AAB0;
    }
    // 0x8006AA90: nop

    // 0x8006AA94: lwc1        $f0, 0x88($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X88);
    // 0x8006AA98: nop

    // 0x8006AA9C: add.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f20.fl;
    // 0x8006AAA0: swc1        $f0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f0.u32l;
    // 0x8006AAA4: swc1        $f0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f0.u32l;
    // 0x8006AAA8: b           L_8006AAC8
    // 0x8006AAAC: swc1        $f0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f0.u32l;
        goto L_8006AAC8;
    // 0x8006AAAC: swc1        $f0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f0.u32l;
L_8006AAB0:
    // 0x8006AAB0: lwc1        $f0, 0x88($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X88);
    // 0x8006AAB4: nop

    // 0x8006AAB8: add.s       $f0, $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f22.fl;
    // 0x8006AABC: swc1        $f0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f0.u32l;
    // 0x8006AAC0: swc1        $f0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f0.u32l;
    // 0x8006AAC4: swc1        $f0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f0.u32l;
L_8006AAC8:
    // 0x8006AAC8: lw          $a0, 0x8C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X8C);
    // 0x8006AACC: jal         0x80019114
    // 0x8006AAD0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80019114(rdram, ctx);
        goto after_7;
    // 0x8006AAD0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_7:
    // 0x8006AAD4: jal         0x80007AB0
    // 0x8006AAD8: nop

    func_80007AB0(rdram, ctx);
        goto after_8;
    // 0x8006AAD8: nop

    after_8:
    // 0x8006AADC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8006AAE0: bne         $s0, $s2, L_8006AA6C
    if (ctx->r16 != ctx->r18) {
        // 0x8006AAE4: nop
    
            goto L_8006AA6C;
    }
    // 0x8006AAE4: nop

L_8006AAE8:
    // 0x8006AAE8: addiu       $s0, $sp, 0x8C
    ctx->r16 = ADD32(ctx->r29, 0X8C);
    // 0x8006AAEC: addiu       $s2, $s0, 0x4
    ctx->r18 = ADD32(ctx->r16, 0X4);
L_8006AAF0:
    // 0x8006AAF0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8006AAF4: jal         0x8001C568
    // 0x8006AAF8: nop

    func_8001C568(rdram, ctx);
        goto after_9;
    // 0x8006AAF8: nop

    after_9:
    // 0x8006AAFC: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8006AB00: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x8006AB04: bne         $at, $zero, L_8006AAF0
    if (ctx->r1 != 0) {
        // 0x8006AB08: nop
    
            goto L_8006AAF0;
    }
    // 0x8006AB08: nop

    // 0x8006AB0C: jal         0x8005CD50
    // 0x8006AB10: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_8005CD50(rdram, ctx);
        goto after_10;
    // 0x8006AB10: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_10:
    // 0x8006AB14: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8006AB18: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x8006AB1C: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x8006AB20: nop

    // 0x8006AB24: addiu       $t6, $t9, -0x1
    ctx->r14 = ADD32(ctx->r25, -0X1);
    // 0x8006AB28: jal         0x80007AE0
    // 0x8006AB2C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    func_80007AE0(rdram, ctx);
        goto after_11;
    // 0x8006AB2C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    after_11:
    // 0x8006AB30: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8006AB34: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x8006AB38: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8006AB3C: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8006AB40: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8006AB44: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x8006AB48: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x8006AB4C: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x8006AB50: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x8006AB54: jr          $ra
    // 0x8006AB58: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    // 0x8006AB58: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void func_8006AB5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006AB5C: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x8006AB60: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8006AB64: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8006AB68: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8006AB6C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8006AB70: jal         0x80007774
    // 0x8006AB74: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x8006AB74: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x8006AB78: lw          $s1, 0x1C($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X1C);
    // 0x8006AB7C: addiu       $a0, $zero, 0x792
    ctx->r4 = ADD32(0, 0X792);
    // 0x8006AB80: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8006AB84: jal         0x8001D138
    // 0x8006AB88: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x8006AB88: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8006AB8C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8006AB90: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8006AB94: jal         0x80019164
    // 0x8006AB98: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x8006AB98: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_2:
    // 0x8006AB9C: sw          $s0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r16;
    // 0x8006ABA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006ABA4: jal         0x8001C468
    // 0x8006ABA8: addiu       $a1, $zero, 0x7D6
    ctx->r5 = ADD32(0, 0X7D6);
    func_8001C468(rdram, ctx);
        goto after_3;
    // 0x8006ABA8: addiu       $a1, $zero, 0x7D6
    ctx->r5 = ADD32(0, 0X7D6);
    after_3:
    // 0x8006ABAC: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x8006ABB0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8006ABB4: jal         0x800192E8
    // 0x8006ABB8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800192E8(rdram, ctx);
        goto after_4;
    // 0x8006ABB8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x8006ABBC: addiu       $s2, $zero, -0x401
    ctx->r18 = ADD32(0, -0X401);
    // 0x8006ABC0: addiu       $s0, $zero, -0x801
    ctx->r16 = ADD32(0, -0X801);
    // 0x8006ABC4: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
L_8006ABC8:
    // 0x8006ABC8: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x8006ABCC: andi        $t6, $v0, 0x4000
    ctx->r14 = ctx->r2 & 0X4000;
    // 0x8006ABD0: bne         $t6, $zero, L_8006AC30
    if (ctx->r14 != 0) {
        // 0x8006ABD4: andi        $t7, $v0, 0x800
        ctx->r15 = ctx->r2 & 0X800;
            goto L_8006AC30;
    }
    // 0x8006ABD4: andi        $t7, $v0, 0x800
    ctx->r15 = ctx->r2 & 0X800;
    // 0x8006ABD8: beq         $t7, $zero, L_8006ABFC
    if (ctx->r15 == 0) {
        // 0x8006ABDC: andi        $t6, $v0, 0x400
        ctx->r14 = ctx->r2 & 0X400;
            goto L_8006ABFC;
    }
    // 0x8006ABDC: andi        $t6, $v0, 0x400
    ctx->r14 = ctx->r2 & 0X400;
    // 0x8006ABE0: jal         0x80019164
    // 0x8006ABE4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80019164(rdram, ctx);
        goto after_5;
    // 0x8006ABE4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_5:
    // 0x8006ABE8: lw          $t8, 0x24($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X24);
    // 0x8006ABEC: nop

    // 0x8006ABF0: and         $v0, $t8, $s0
    ctx->r2 = ctx->r24 & ctx->r16;
    // 0x8006ABF4: sw          $v0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r2;
    // 0x8006ABF8: andi        $t6, $v0, 0x400
    ctx->r14 = ctx->r2 & 0X400;
L_8006ABFC:
    // 0x8006ABFC: beq         $t6, $zero, L_8006AC20
    if (ctx->r14 == 0) {
        // 0x8006AC00: nop
    
            goto L_8006AC20;
    }
    // 0x8006AC00: nop

    // 0x8006AC04: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x8006AC08: jal         0x8001913C
    // 0x8006AC0C: addiu       $a1, $s1, 0xC
    ctx->r5 = ADD32(ctx->r17, 0XC);
    func_8001913C(rdram, ctx);
        goto after_6;
    // 0x8006AC0C: addiu       $a1, $s1, 0xC
    ctx->r5 = ADD32(ctx->r17, 0XC);
    after_6:
    // 0x8006AC10: lw          $t7, 0x24($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X24);
    // 0x8006AC14: nop

    // 0x8006AC18: and         $t8, $t7, $s2
    ctx->r24 = ctx->r15 & ctx->r18;
    // 0x8006AC1C: sw          $t8, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r24;
L_8006AC20:
    // 0x8006AC20: jal         0x80007AB0
    // 0x8006AC24: nop

    func_80007AB0(rdram, ctx);
        goto after_7;
    // 0x8006AC24: nop

    after_7:
    // 0x8006AC28: b           L_8006ABC8
    // 0x8006AC2C: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
        goto L_8006ABC8;
    // 0x8006AC2C: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
L_8006AC30:
    // 0x8006AC30: addiu       $s0, $sp, 0x5C
    ctx->r16 = ADD32(ctx->r29, 0X5C);
    // 0x8006AC34: addiu       $s3, $s0, 0x4
    ctx->r19 = ADD32(ctx->r16, 0X4);
L_8006AC38:
    // 0x8006AC38: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8006AC3C: jal         0x8001C568
    // 0x8006AC40: nop

    func_8001C568(rdram, ctx);
        goto after_8;
    // 0x8006AC40: nop

    after_8:
    // 0x8006AC44: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8006AC48: sltu        $at, $s0, $s3
    ctx->r1 = ctx->r16 < ctx->r19 ? 1 : 0;
    // 0x8006AC4C: bne         $at, $zero, L_8006AC38
    if (ctx->r1 != 0) {
        // 0x8006AC50: nop
    
            goto L_8006AC38;
    }
    // 0x8006AC50: nop

    // 0x8006AC54: jal         0x8005CD50
    // 0x8006AC58: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8005CD50(rdram, ctx);
        goto after_9;
    // 0x8006AC58: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_9:
    // 0x8006AC5C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8006AC60: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x8006AC64: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8006AC68: nop

    // 0x8006AC6C: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8006AC70: jal         0x80007AE0
    // 0x8006AC74: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    func_80007AE0(rdram, ctx);
        goto after_10;
    // 0x8006AC74: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    after_10:
    // 0x8006AC78: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8006AC7C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8006AC80: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8006AC84: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8006AC88: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8006AC8C: jr          $ra
    // 0x8006AC90: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x8006AC90: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_8006AC94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006AC94: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x8006AC98: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8006AC9C: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x8006ACA0: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x8006ACA4: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x8006ACA8: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x8006ACAC: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x8006ACB0: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x8006ACB4: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8006ACB8: jal         0x80007774
    // 0x8006ACBC: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x8006ACBC: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x8006ACC0: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8006ACC4: lui         $s3, 0x8009
    ctx->r19 = S32(0X8009 << 16);
    // 0x8006ACC8: lw          $s4, 0x1C($v0)
    ctx->r20 = MEM_W(ctx->r2, 0X1C);
    // 0x8006ACCC: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x8006ACD0: addiu       $s3, $s3, 0x25D4
    ctx->r19 = ADD32(ctx->r19, 0X25D4);
    // 0x8006ACD4: addiu       $s0, $sp, 0x8C
    ctx->r16 = ADD32(ctx->r29, 0X8C);
    // 0x8006ACD8: addiu       $s2, $sp, 0xA4
    ctx->r18 = ADD32(ctx->r29, 0XA4);
    // 0x8006ACDC: addiu       $s5, $sp, 0xAC
    ctx->r21 = ADD32(ctx->r29, 0XAC);
L_8006ACE0:
    // 0x8006ACE0: lwc1        $f12, 0x10($s4)
    ctx->f12.u32l = MEM_W(ctx->r20, 0X10);
    // 0x8006ACE4: jal         0x8007A640
    // 0x8006ACE8: nop

    __sinf_recomp(rdram, ctx);
        goto after_1;
    // 0x8006ACE8: nop

    after_1:
    // 0x8006ACEC: lwc1        $f4, 0x0($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X0);
    // 0x8006ACF0: lwc1        $f8, 0x0($s4)
    ctx->f8.u32l = MEM_W(ctx->r20, 0X0);
    // 0x8006ACF4: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8006ACF8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8006ACFC: swc1        $f10, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f10.u32l;
    // 0x8006AD00: lwc1        $f4, 0x4($s4)
    ctx->f4.u32l = MEM_W(ctx->r20, 0X4);
    // 0x8006AD04: nop

    // 0x8006AD08: add.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f20.fl;
    // 0x8006AD0C: swc1        $f6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f6.u32l;
    // 0x8006AD10: lwc1        $f12, 0x10($s4)
    ctx->f12.u32l = MEM_W(ctx->r20, 0X10);
    // 0x8006AD14: jal         0x8007A800
    // 0x8006AD18: nop

    __cosf_recomp(rdram, ctx);
        goto after_2;
    // 0x8006AD18: nop

    after_2:
    // 0x8006AD1C: lwc1        $f8, 0x0($s3)
    ctx->f8.u32l = MEM_W(ctx->r19, 0X0);
    // 0x8006AD20: lwc1        $f4, 0x8($s4)
    ctx->f4.u32l = MEM_W(ctx->r20, 0X8);
    // 0x8006AD24: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x8006AD28: addiu       $a0, $zero, 0x797
    ctx->r4 = ADD32(0, 0X797);
    // 0x8006AD2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8006AD30: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8006AD34: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x8006AD38: jal         0x8001D138
    // 0x8006AD3C: swc1        $f6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f6.u32l;
    func_8001D138(rdram, ctx);
        goto after_3;
    // 0x8006AD3C: swc1        $f6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f6.u32l;
    after_3:
    // 0x8006AD40: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x8006AD44: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8006AD48: jal         0x80019164
    // 0x8006AD4C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80019164(rdram, ctx);
        goto after_4;
    // 0x8006AD4C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_4:
    // 0x8006AD50: sw          $s1, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r17;
    // 0x8006AD54: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8006AD58: jal         0x8001C468
    // 0x8006AD5C: addiu       $a1, $zero, 0x7D8
    ctx->r5 = ADD32(0, 0X7D8);
    func_8001C468(rdram, ctx);
        goto after_5;
    // 0x8006AD5C: addiu       $a1, $zero, 0x7D8
    ctx->r5 = ADD32(0, 0X7D8);
    after_5:
    // 0x8006AD60: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x8006AD64: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8006AD68: jal         0x800192E8
    // 0x8006AD6C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800192E8(rdram, ctx);
        goto after_6;
    // 0x8006AD6C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
    // 0x8006AD70: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x8006AD74: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x8006AD78: bne         $s2, $s5, L_8006ACE0
    if (ctx->r18 != ctx->r21) {
        // 0x8006AD7C: addiu       $s3, $s3, 0x4
        ctx->r19 = ADD32(ctx->r19, 0X4);
            goto L_8006ACE0;
    }
    // 0x8006AD7C: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x8006AD80: addiu       $a0, $zero, 0x796
    ctx->r4 = ADD32(0, 0X796);
    // 0x8006AD84: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8006AD88: jal         0x8001D138
    // 0x8006AD8C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_7;
    // 0x8006AD8C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x8006AD90: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8006AD94: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8006AD98: jal         0x80019164
    // 0x8006AD9C: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    func_80019164(rdram, ctx);
        goto after_8;
    // 0x8006AD9C: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_8:
    // 0x8006ADA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006ADA4: addiu       $a1, $zero, 0x7D7
    ctx->r5 = ADD32(0, 0X7D7);
    // 0x8006ADA8: jal         0x8001C468
    // 0x8006ADAC: sw          $s0, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r16;
    func_8001C468(rdram, ctx);
        goto after_9;
    // 0x8006ADAC: sw          $s0, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r16;
    after_9:
    // 0x8006ADB0: lw          $a0, 0xAC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XAC);
    // 0x8006ADB4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8006ADB8: jal         0x800192E8
    // 0x8006ADBC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800192E8(rdram, ctx);
        goto after_10;
    // 0x8006ADBC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_10:
    // 0x8006ADC0: lw          $a0, 0xAC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XAC);
    // 0x8006ADC4: jal         0x8001913C
    // 0x8006ADC8: addiu       $a1, $s4, 0xC
    ctx->r5 = ADD32(ctx->r20, 0XC);
    func_8001913C(rdram, ctx);
        goto after_11;
    // 0x8006ADC8: addiu       $a1, $s4, 0xC
    ctx->r5 = ADD32(ctx->r20, 0XC);
    after_11:
    // 0x8006ADCC: lw          $t6, 0x24($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X24);
L_8006ADD0:
    // 0x8006ADD0: nop

    // 0x8006ADD4: andi        $t7, $t6, 0x4000
    ctx->r15 = ctx->r14 & 0X4000;
    // 0x8006ADD8: bne         $t7, $zero, L_8006ADF4
    if (ctx->r15 != 0) {
        // 0x8006ADDC: addiu       $s0, $sp, 0xA4
        ctx->r16 = ADD32(ctx->r29, 0XA4);
            goto L_8006ADF4;
    }
    // 0x8006ADDC: addiu       $s0, $sp, 0xA4
    ctx->r16 = ADD32(ctx->r29, 0XA4);
    // 0x8006ADE0: jal         0x80007AB0
    // 0x8006ADE4: nop

    func_80007AB0(rdram, ctx);
        goto after_12;
    // 0x8006ADE4: nop

    after_12:
    // 0x8006ADE8: b           L_8006ADD0
    // 0x8006ADEC: lw          $t6, 0x24($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X24);
        goto L_8006ADD0;
    // 0x8006ADEC: lw          $t6, 0x24($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X24);
    // 0x8006ADF0: addiu       $s0, $sp, 0xA4
    ctx->r16 = ADD32(ctx->r29, 0XA4);
L_8006ADF4:
    // 0x8006ADF4: addiu       $s2, $s0, 0xC
    ctx->r18 = ADD32(ctx->r16, 0XC);
L_8006ADF8:
    // 0x8006ADF8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8006ADFC: jal         0x8001C568
    // 0x8006AE00: nop

    func_8001C568(rdram, ctx);
        goto after_13;
    // 0x8006AE00: nop

    after_13:
    // 0x8006AE04: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8006AE08: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x8006AE0C: bne         $at, $zero, L_8006ADF8
    if (ctx->r1 != 0) {
        // 0x8006AE10: nop
    
            goto L_8006ADF8;
    }
    // 0x8006AE10: nop

    // 0x8006AE14: jal         0x8005CD50
    // 0x8006AE18: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    func_8005CD50(rdram, ctx);
        goto after_14;
    // 0x8006AE18: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_14:
    // 0x8006AE1C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8006AE20: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x8006AE24: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x8006AE28: nop

    // 0x8006AE2C: addiu       $t6, $t9, -0x1
    ctx->r14 = ADD32(ctx->r25, -0X1);
    // 0x8006AE30: jal         0x80007AE0
    // 0x8006AE34: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    func_80007AE0(rdram, ctx);
        goto after_15;
    // 0x8006AE34: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    after_15:
    // 0x8006AE38: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8006AE3C: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x8006AE40: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8006AE44: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x8006AE48: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x8006AE4C: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x8006AE50: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x8006AE54: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x8006AE58: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x8006AE5C: jr          $ra
    // 0x8006AE60: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    // 0x8006AE60: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void func_8006AE64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006AE64: addiu       $sp, $sp, -0xE0
    ctx->r29 = ADD32(ctx->r29, -0XE0);
    // 0x8006AE68: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8006AE6C: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x8006AE70: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x8006AE74: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x8006AE78: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8006AE7C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8006AE80: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x8006AE84: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x8006AE88: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8006AE8C: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x8006AE90: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8006AE94: jal         0x80007774
    // 0x8006AE98: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x8006AE98: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x8006AE9C: lw          $s3, 0x1C($v0)
    ctx->r19 = MEM_W(ctx->r2, 0X1C);
    // 0x8006AEA0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8006AEA4: addiu       $a0, $zero, 0x76A
    ctx->r4 = ADD32(0, 0X76A);
    // 0x8006AEA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8006AEAC: jal         0x8001D138
    // 0x8006AEB0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x8006AEB0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8006AEB4: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x8006AEB8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8006AEBC: jal         0x80019164
    // 0x8006AEC0: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x8006AEC0: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_2:
    // 0x8006AEC4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8006AEC8: sw          $s1, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r17;
    // 0x8006AECC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8006AED0: addiu       $a1, $sp, 0xA4
    ctx->r5 = ADD32(ctx->r29, 0XA4);
    // 0x8006AED4: swc1        $f0, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f0.u32l;
    // 0x8006AED8: swc1        $f0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f0.u32l;
    // 0x8006AEDC: jal         0x80019114
    // 0x8006AEE0: swc1        $f0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f0.u32l;
    func_80019114(rdram, ctx);
        goto after_3;
    // 0x8006AEE0: swc1        $f0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f0.u32l;
    after_3:
    // 0x8006AEE4: lw          $s1, 0xD4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XD4);
    // 0x8006AEE8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8006AEEC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8006AEF0: jal         0x80018658
    // 0x8006AEF4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80018658(rdram, ctx);
        goto after_4;
    // 0x8006AEF4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_4:
    // 0x8006AEF8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8006AEFC: jal         0x80018604
    // 0x8006AF00: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_80018604(rdram, ctx);
        goto after_5;
    // 0x8006AF00: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_5:
    // 0x8006AF04: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8006AF08: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x8006AF0C: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x8006AF10: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x8006AF14: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8006AF18: lwc1        $f20, 0x64CC($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X64CC);
    // 0x8006AF1C: addiu       $s4, $sp, 0x64
    ctx->r20 = ADD32(ctx->r29, 0X64);
    // 0x8006AF20: addiu       $s2, $sp, 0x7C
    ctx->r18 = ADD32(ctx->r29, 0X7C);
    // 0x8006AF24: addiu       $s1, $zero, -0x801
    ctx->r17 = ADD32(0, -0X801);
L_8006AF28:
    // 0x8006AF28: lw          $v0, 0x24($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X24);
    // 0x8006AF2C: lw          $a0, 0xD4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XD4);
    // 0x8006AF30: andi        $t6, $v0, 0x4000
    ctx->r14 = ctx->r2 & 0X4000;
    // 0x8006AF34: bne         $t6, $zero, L_8006AFDC
    if (ctx->r14 != 0) {
        // 0x8006AF38: andi        $t7, $v0, 0x800
        ctx->r15 = ctx->r2 & 0X800;
            goto L_8006AFDC;
    }
    // 0x8006AF38: andi        $t7, $v0, 0x800
    ctx->r15 = ctx->r2 & 0X800;
    // 0x8006AF3C: beq         $t7, $zero, L_8006AF60
    if (ctx->r15 == 0) {
        // 0x8006AF40: slti        $at, $s0, 0x14
        ctx->r1 = SIGNED(ctx->r16) < 0X14 ? 1 : 0;
            goto L_8006AF60;
    }
    // 0x8006AF40: slti        $at, $s0, 0x14
    ctx->r1 = SIGNED(ctx->r16) < 0X14 ? 1 : 0;
    // 0x8006AF44: jal         0x80019164
    // 0x8006AF48: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_80019164(rdram, ctx);
        goto after_6;
    // 0x8006AF48: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_6:
    // 0x8006AF4C: lw          $t8, 0x24($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X24);
    // 0x8006AF50: nop

    // 0x8006AF54: and         $t9, $t8, $s1
    ctx->r25 = ctx->r24 & ctx->r17;
    // 0x8006AF58: sw          $t9, 0x24($s3)
    MEM_W(0X24, ctx->r19) = ctx->r25;
    // 0x8006AF5C: slti        $at, $s0, 0x14
    ctx->r1 = SIGNED(ctx->r16) < 0X14 ? 1 : 0;
L_8006AF60:
    // 0x8006AF60: beq         $at, $zero, L_8006AF94
    if (ctx->r1 == 0) {
        // 0x8006AF64: addiu       $t6, $s0, -0x14
        ctx->r14 = ADD32(ctx->r16, -0X14);
            goto L_8006AF94;
    }
    // 0x8006AF64: addiu       $t6, $s0, -0x14
    ctx->r14 = ADD32(ctx->r16, -0X14);
    // 0x8006AF68: mtc1        $s0, $f4
    ctx->f4.u32l = ctx->r16;
    // 0x8006AF6C: lw          $a0, 0xD4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XD4);
    // 0x8006AF70: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8006AF74: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x8006AF78: mul.s       $f0, $f6, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x8006AF7C: swc1        $f0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f0.u32l;
    // 0x8006AF80: swc1        $f0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f0.u32l;
    // 0x8006AF84: jal         0x80019114
    // 0x8006AF88: swc1        $f0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f0.u32l;
    func_80019114(rdram, ctx);
        goto after_7;
    // 0x8006AF88: swc1        $f0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f0.u32l;
    after_7:
    // 0x8006AF8C: b           L_8006AFCC
    // 0x8006AF90: nop

        goto L_8006AFCC;
    // 0x8006AF90: nop

L_8006AF94:
    // 0x8006AF94: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x8006AF98: nop

    // 0x8006AF9C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8006AFA0: mul.s       $f12, $f10, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f12.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x8006AFA4: jal         0x80028C2C
    // 0x8006AFA8: nop

    func_80028C2C(rdram, ctx);
        goto after_8;
    // 0x8006AFA8: nop

    after_8:
    // 0x8006AFAC: mul.s       $f4, $f0, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x8006AFB0: lw          $a0, 0xD4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XD4);
    // 0x8006AFB4: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x8006AFB8: add.s       $f2, $f4, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f2.fl = ctx->f4.fl + ctx->f24.fl;
    // 0x8006AFBC: swc1        $f2, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f2.u32l;
    // 0x8006AFC0: swc1        $f2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f2.u32l;
    // 0x8006AFC4: jal         0x80019114
    // 0x8006AFC8: swc1        $f2, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f2.u32l;
    func_80019114(rdram, ctx);
        goto after_9;
    // 0x8006AFC8: swc1        $f2, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f2.u32l;
    after_9:
L_8006AFCC:
    // 0x8006AFCC: jal         0x80007AB0
    // 0x8006AFD0: nop

    func_80007AB0(rdram, ctx);
        goto after_10;
    // 0x8006AFD0: nop

    after_10:
    // 0x8006AFD4: b           L_8006AF28
    // 0x8006AFD8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
        goto L_8006AF28;
    // 0x8006AFD8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8006AFDC:
    // 0x8006AFDC: addiu       $s0, $sp, 0xD4
    ctx->r16 = ADD32(ctx->r29, 0XD4);
    // 0x8006AFE0: addiu       $s2, $s0, 0x4
    ctx->r18 = ADD32(ctx->r16, 0X4);
L_8006AFE4:
    // 0x8006AFE4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8006AFE8: jal         0x8001C568
    // 0x8006AFEC: nop

    func_8001C568(rdram, ctx);
        goto after_11;
    // 0x8006AFEC: nop

    after_11:
    // 0x8006AFF0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8006AFF4: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x8006AFF8: bne         $at, $zero, L_8006AFE4
    if (ctx->r1 != 0) {
        // 0x8006AFFC: nop
    
            goto L_8006AFE4;
    }
    // 0x8006AFFC: nop

    // 0x8006B000: jal         0x8005CD50
    // 0x8006B004: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_8005CD50(rdram, ctx);
        goto after_12;
    // 0x8006B004: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_12:
    // 0x8006B008: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8006B00C: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x8006B010: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x8006B014: nop

    // 0x8006B018: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x8006B01C: jal         0x80007AE0
    // 0x8006B020: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    func_80007AE0(rdram, ctx);
        goto after_13;
    // 0x8006B020: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    after_13:
    // 0x8006B024: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8006B028: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8006B02C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8006B030: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8006B034: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8006B038: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x8006B03C: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8006B040: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8006B044: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8006B048: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x8006B04C: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x8006B050: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x8006B054: jr          $ra
    // 0x8006B058: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
    return;
    // 0x8006B058: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
;}
RECOMP_FUNC void func_8006B05C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006B05C: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x8006B060: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8006B064: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8006B068: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8006B06C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8006B070: jal         0x80007774
    // 0x8006B074: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x8006B074: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x8006B078: lw          $s1, 0x1C($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X1C);
    // 0x8006B07C: addiu       $a0, $zero, 0x78B
    ctx->r4 = ADD32(0, 0X78B);
    // 0x8006B080: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8006B084: jal         0x8001D138
    // 0x8006B088: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x8006B088: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8006B08C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8006B090: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8006B094: jal         0x80019164
    // 0x8006B098: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x8006B098: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_2:
    // 0x8006B09C: sw          $s0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r16;
    // 0x8006B0A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006B0A4: jal         0x8001C468
    // 0x8006B0A8: addiu       $a1, $zero, 0x7D5
    ctx->r5 = ADD32(0, 0X7D5);
    func_8001C468(rdram, ctx);
        goto after_3;
    // 0x8006B0A8: addiu       $a1, $zero, 0x7D5
    ctx->r5 = ADD32(0, 0X7D5);
    after_3:
    // 0x8006B0AC: lw          $a0, 0x74($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X74);
    // 0x8006B0B0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8006B0B4: jal         0x800192E8
    // 0x8006B0B8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800192E8(rdram, ctx);
        goto after_4;
    // 0x8006B0B8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x8006B0BC: lw          $s0, 0x74($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X74);
    // 0x8006B0C0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8006B0C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8006B0C8: jal         0x80018658
    // 0x8006B0CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80018658(rdram, ctx);
        goto after_5;
    // 0x8006B0CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x8006B0D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006B0D4: jal         0x80018604
    // 0x8006B0D8: addiu       $a1, $zero, 0xC0
    ctx->r5 = ADD32(0, 0XC0);
    func_80018604(rdram, ctx);
        goto after_6;
    // 0x8006B0D8: addiu       $a1, $zero, 0xC0
    ctx->r5 = ADD32(0, 0XC0);
    after_6:
    // 0x8006B0DC: addiu       $s2, $zero, -0x401
    ctx->r18 = ADD32(0, -0X401);
    // 0x8006B0E0: addiu       $s0, $zero, -0x801
    ctx->r16 = ADD32(0, -0X801);
    // 0x8006B0E4: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
L_8006B0E8:
    // 0x8006B0E8: lw          $a0, 0x74($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X74);
    // 0x8006B0EC: andi        $t6, $v0, 0x4000
    ctx->r14 = ctx->r2 & 0X4000;
    // 0x8006B0F0: bne         $t6, $zero, L_8006B150
    if (ctx->r14 != 0) {
        // 0x8006B0F4: andi        $t7, $v0, 0x800
        ctx->r15 = ctx->r2 & 0X800;
            goto L_8006B150;
    }
    // 0x8006B0F4: andi        $t7, $v0, 0x800
    ctx->r15 = ctx->r2 & 0X800;
    // 0x8006B0F8: beq         $t7, $zero, L_8006B11C
    if (ctx->r15 == 0) {
        // 0x8006B0FC: andi        $t6, $v0, 0x400
        ctx->r14 = ctx->r2 & 0X400;
            goto L_8006B11C;
    }
    // 0x8006B0FC: andi        $t6, $v0, 0x400
    ctx->r14 = ctx->r2 & 0X400;
    // 0x8006B100: jal         0x80019164
    // 0x8006B104: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80019164(rdram, ctx);
        goto after_7;
    // 0x8006B104: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_7:
    // 0x8006B108: lw          $t8, 0x24($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X24);
    // 0x8006B10C: nop

    // 0x8006B110: and         $v0, $t8, $s0
    ctx->r2 = ctx->r24 & ctx->r16;
    // 0x8006B114: sw          $v0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r2;
    // 0x8006B118: andi        $t6, $v0, 0x400
    ctx->r14 = ctx->r2 & 0X400;
L_8006B11C:
    // 0x8006B11C: beq         $t6, $zero, L_8006B140
    if (ctx->r14 == 0) {
        // 0x8006B120: nop
    
            goto L_8006B140;
    }
    // 0x8006B120: nop

    // 0x8006B124: lw          $a0, 0x74($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X74);
    // 0x8006B128: jal         0x8001913C
    // 0x8006B12C: addiu       $a1, $s1, 0xC
    ctx->r5 = ADD32(ctx->r17, 0XC);
    func_8001913C(rdram, ctx);
        goto after_8;
    // 0x8006B12C: addiu       $a1, $s1, 0xC
    ctx->r5 = ADD32(ctx->r17, 0XC);
    after_8:
    // 0x8006B130: lw          $t7, 0x24($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X24);
    // 0x8006B134: nop

    // 0x8006B138: and         $t8, $t7, $s2
    ctx->r24 = ctx->r15 & ctx->r18;
    // 0x8006B13C: sw          $t8, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r24;
L_8006B140:
    // 0x8006B140: jal         0x80007AB0
    // 0x8006B144: nop

    func_80007AB0(rdram, ctx);
        goto after_9;
    // 0x8006B144: nop

    after_9:
    // 0x8006B148: b           L_8006B0E8
    // 0x8006B14C: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
        goto L_8006B0E8;
    // 0x8006B14C: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
L_8006B150:
    // 0x8006B150: addiu       $s0, $sp, 0x74
    ctx->r16 = ADD32(ctx->r29, 0X74);
    // 0x8006B154: addiu       $s3, $s0, 0x4
    ctx->r19 = ADD32(ctx->r16, 0X4);
L_8006B158:
    // 0x8006B158: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8006B15C: jal         0x8001C568
    // 0x8006B160: nop

    func_8001C568(rdram, ctx);
        goto after_10;
    // 0x8006B160: nop

    after_10:
    // 0x8006B164: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8006B168: sltu        $at, $s0, $s3
    ctx->r1 = ctx->r16 < ctx->r19 ? 1 : 0;
    // 0x8006B16C: bne         $at, $zero, L_8006B158
    if (ctx->r1 != 0) {
        // 0x8006B170: nop
    
            goto L_8006B158;
    }
    // 0x8006B170: nop

    // 0x8006B174: jal         0x8005CD50
    // 0x8006B178: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8005CD50(rdram, ctx);
        goto after_11;
    // 0x8006B178: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_11:
    // 0x8006B17C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8006B180: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x8006B184: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8006B188: nop

    // 0x8006B18C: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8006B190: jal         0x80007AE0
    // 0x8006B194: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    func_80007AE0(rdram, ctx);
        goto after_12;
    // 0x8006B194: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    after_12:
    // 0x8006B198: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8006B19C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8006B1A0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8006B1A4: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8006B1A8: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8006B1AC: jr          $ra
    // 0x8006B1B0: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x8006B1B0: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_8006B1B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006B1B4: addiu       $sp, $sp, -0x100
    ctx->r29 = ADD32(ctx->r29, -0X100);
    // 0x8006B1B8: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x8006B1BC: sw          $fp, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r30;
    // 0x8006B1C0: sw          $s7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r23;
    // 0x8006B1C4: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x8006B1C8: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x8006B1CC: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x8006B1D0: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x8006B1D4: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x8006B1D8: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x8006B1DC: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x8006B1E0: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x8006B1E4: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x8006B1E8: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x8006B1EC: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x8006B1F0: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8006B1F4: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x8006B1F8: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8006B1FC: jal         0x80007774
    // 0x8006B200: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x8006B200: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x8006B204: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x8006B208: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x8006B20C: lw          $t6, 0x1C($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X1C);
    // 0x8006B210: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x8006B214: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x8006B218: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x8006B21C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8006B220: addiu       $s1, $sp, 0xD4
    ctx->r17 = ADD32(ctx->r29, 0XD4);
    // 0x8006B224: addiu       $fp, $sp, 0xBC
    ctx->r30 = ADD32(ctx->r29, 0XBC);
    // 0x8006B228: addiu       $s3, $sp, 0x84
    ctx->r19 = ADD32(ctx->r29, 0X84);
    // 0x8006B22C: sw          $t6, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r14;
L_8006B230:
    // 0x8006B230: bne         $s2, $zero, L_8006B264
    if (ctx->r18 != 0) {
        // 0x8006B234: slti        $at, $s2, 0x5
        ctx->r1 = SIGNED(ctx->r18) < 0X5 ? 1 : 0;
            goto L_8006B264;
    }
    // 0x8006B234: slti        $at, $s2, 0x5
    ctx->r1 = SIGNED(ctx->r18) < 0X5 ? 1 : 0;
    // 0x8006B238: lw          $t7, 0xF8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XF8);
    // 0x8006B23C: nop

    // 0x8006B240: lwc1        $f4, 0x0($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X0);
    // 0x8006B244: nop

    // 0x8006B248: swc1        $f4, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f4.u32l;
    // 0x8006B24C: lwc1        $f6, 0x4($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X4);
    // 0x8006B250: nop

    // 0x8006B254: swc1        $f6, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f6.u32l;
    // 0x8006B258: lwc1        $f8, 0x8($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X8);
    // 0x8006B25C: b           L_8006B334
    // 0x8006B260: swc1        $f8, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f8.u32l;
        goto L_8006B334;
    // 0x8006B260: swc1        $f8, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f8.u32l;
L_8006B264:
    // 0x8006B264: beq         $at, $zero, L_8006B2D0
    if (ctx->r1 == 0) {
        // 0x8006B268: addiu       $t7, $s2, -0x5
        ctx->r15 = ADD32(ctx->r18, -0X5);
            goto L_8006B2D0;
    }
    // 0x8006B268: addiu       $t7, $s2, -0x5
    ctx->r15 = ADD32(ctx->r18, -0X5);
    // 0x8006B26C: addiu       $t8, $s2, -0x1
    ctx->r24 = ADD32(ctx->r18, -0X1);
    // 0x8006B270: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x8006B274: nop

    // 0x8006B278: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8006B27C: mul.s       $f20, $f4, $f26
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f20.fl = MUL_S(ctx->f4.fl, ctx->f26.fl);
    // 0x8006B280: jal         0x80028C2C
    // 0x8006B284: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_80028C2C(rdram, ctx);
        goto after_1;
    // 0x8006B284: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_1:
    // 0x8006B288: mul.s       $f6, $f0, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x8006B28C: lw          $t9, 0xF8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XF8);
    // 0x8006B290: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x8006B294: lwc1        $f8, 0x0($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X0);
    // 0x8006B298: nop

    // 0x8006B29C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8006B2A0: swc1        $f10, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f10.u32l;
    // 0x8006B2A4: lwc1        $f4, 0x4($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X4);
    // 0x8006B2A8: jal         0x80028C00
    // 0x8006B2AC: swc1        $f4, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f4.u32l;
    func_80028C00(rdram, ctx);
        goto after_2;
    // 0x8006B2AC: swc1        $f4, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x8006B2B0: mul.s       $f6, $f0, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x8006B2B4: lw          $t6, 0xF8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XF8);
    // 0x8006B2B8: nop

    // 0x8006B2BC: lwc1        $f8, 0x8($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X8);
    // 0x8006B2C0: nop

    // 0x8006B2C4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8006B2C8: b           L_8006B334
    // 0x8006B2CC: swc1        $f10, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f10.u32l;
        goto L_8006B334;
    // 0x8006B2CC: swc1        $f10, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f10.u32l;
L_8006B2D0:
    // 0x8006B2D0: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8006B2D4: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x8006B2D8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8006B2DC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8006B2E0: mul.s       $f8, $f6, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f26.fl);
    // 0x8006B2E4: add.s       $f20, $f8, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8006B2E8: jal         0x80028C2C
    // 0x8006B2EC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_80028C2C(rdram, ctx);
        goto after_3;
    // 0x8006B2EC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_3:
    // 0x8006B2F0: mul.s       $f4, $f0, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x8006B2F4: lw          $t8, 0xF8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XF8);
    // 0x8006B2F8: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x8006B2FC: lwc1        $f6, 0x0($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X0);
    // 0x8006B300: nop

    // 0x8006B304: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8006B308: swc1        $f8, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f8.u32l;
    // 0x8006B30C: lwc1        $f10, 0x4($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X4);
    // 0x8006B310: jal         0x80028C00
    // 0x8006B314: swc1        $f10, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f10.u32l;
    func_80028C00(rdram, ctx);
        goto after_4;
    // 0x8006B314: swc1        $f10, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f10.u32l;
    after_4:
    // 0x8006B318: mul.s       $f4, $f0, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x8006B31C: lw          $t9, 0xF8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XF8);
    // 0x8006B320: nop

    // 0x8006B324: lwc1        $f6, 0x8($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X8);
    // 0x8006B328: nop

    // 0x8006B32C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8006B330: swc1        $f8, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f8.u32l;
L_8006B334:
    // 0x8006B334: addiu       $a0, $zero, 0x1DB
    ctx->r4 = ADD32(0, 0X1DB);
    // 0x8006B338: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8006B33C: jal         0x8001D138
    // 0x8006B340: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_5;
    // 0x8006B340: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x8006B344: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8006B348: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8006B34C: jal         0x80019164
    // 0x8006B350: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    func_80019164(rdram, ctx);
        goto after_6;
    // 0x8006B350: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    after_6:
    // 0x8006B354: sw          $s0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r16;
    // 0x8006B358: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006B35C: jal         0x8001C468
    // 0x8006B360: addiu       $a1, $zero, 0x1DC
    ctx->r5 = ADD32(0, 0X1DC);
    func_8001C468(rdram, ctx);
        goto after_7;
    // 0x8006B360: addiu       $a1, $zero, 0x1DC
    ctx->r5 = ADD32(0, 0X1DC);
    after_7:
    // 0x8006B364: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8006B368: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8006B36C: jal         0x800192E8
    // 0x8006B370: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800192E8(rdram, ctx);
        goto after_8;
    // 0x8006B370: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_8:
    // 0x8006B374: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8006B378: swc1        $f24, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f24.u32l;
    // 0x8006B37C: swc1        $f24, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f24.u32l;
    // 0x8006B380: swc1        $f24, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f24.u32l;
    // 0x8006B384: jal         0x80019114
    // 0x8006B388: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_80019114(rdram, ctx);
        goto after_9;
    // 0x8006B388: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_9:
    // 0x8006B38C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8006B390: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x8006B394: bne         $s2, $at, L_8006B230
    if (ctx->r18 != ctx->r1) {
        // 0x8006B398: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_8006B230;
    }
    // 0x8006B398: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8006B39C: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8006B3A0: lw          $t6, 0x25E4($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X25E4);
    // 0x8006B3A4: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x8006B3A8: addiu       $t7, $t6, 0x4B
    ctx->r15 = ADD32(ctx->r14, 0X4B);
    // 0x8006B3AC: blez        $t7, L_8006B570
    if (SIGNED(ctx->r15) <= 0) {
        // 0x8006B3B0: lui         $at, 0x4270
        ctx->r1 = S32(0X4270 << 16);
            goto L_8006B570;
    }
    // 0x8006B3B0: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x8006B3B4: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x8006B3B8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8006B3BC: lwc1        $f24, 0x64D0($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X64D0);
    // 0x8006B3C0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8006B3C4: lwc1        $f22, 0x64D4($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X64D4);
    // 0x8006B3C8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8006B3CC: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x8006B3D0: addiu       $s6, $sp, 0xD4
    ctx->r22 = ADD32(ctx->r29, 0XD4);
    // 0x8006B3D4: addiu       $s4, $sp, 0xB0
    ctx->r20 = ADD32(ctx->r29, 0XB0);
    // 0x8006B3D8: lw          $t8, 0xF8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XF8);
L_8006B3DC:
    // 0x8006B3DC: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8006B3E0: lw          $t9, 0x24($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X24);
    // 0x8006B3E4: nop

    // 0x8006B3E8: andi        $t6, $t9, 0x4000
    ctx->r14 = ctx->r25 & 0X4000;
    // 0x8006B3EC: bne         $t6, $zero, L_8006B570
    if (ctx->r14 != 0) {
        // 0x8006B3F0: addiu       $t7, $s2, 0x3
        ctx->r15 = ADD32(ctx->r18, 0X3);
            goto L_8006B570;
    }
    // 0x8006B3F0: addiu       $t7, $s2, 0x3
    ctx->r15 = ADD32(ctx->r18, 0X3);
L_8006B3F4:
    // 0x8006B3F4: bgez        $t7, L_8006B404
    if (SIGNED(ctx->r15) >= 0) {
        // 0x8006B3F8: sra         $t8, $t7, 2
        ctx->r24 = S32(SIGNED(ctx->r15) >> 2);
            goto L_8006B404;
    }
    // 0x8006B3F8: sra         $t8, $t7, 2
    ctx->r24 = S32(SIGNED(ctx->r15) >> 2);
    // 0x8006B3FC: addiu       $at, $t7, 0x3
    ctx->r1 = ADD32(ctx->r15, 0X3);
    // 0x8006B400: sra         $t8, $at, 2
    ctx->r24 = S32(SIGNED(ctx->r1) >> 2);
L_8006B404:
    // 0x8006B404: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8006B408: lui         $s0, 0x8009
    ctx->r16 = S32(0X8009 << 16);
    // 0x8006B40C: addu        $s0, $s0, $t9
    ctx->r16 = ADD32(ctx->r16, ctx->r25);
    // 0x8006B410: lw          $s0, 0x25DC($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X25DC);
    // 0x8006B414: nop

    // 0x8006B418: slt         $at, $s3, $s0
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x8006B41C: bne         $at, $zero, L_8006B53C
    if (ctx->r1 != 0) {
        // 0x8006B420: addiu       $s5, $s0, 0x5
        ctx->r21 = ADD32(ctx->r16, 0X5);
            goto L_8006B53C;
    }
    // 0x8006B420: addiu       $s5, $s0, 0x5
    ctx->r21 = ADD32(ctx->r16, 0X5);
    // 0x8006B424: slt         $at, $s5, $s3
    ctx->r1 = SIGNED(ctx->r21) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x8006B428: bne         $at, $zero, L_8006B46C
    if (ctx->r1 != 0) {
        // 0x8006B42C: addiu       $s7, $s3, -0x46
        ctx->r23 = ADD32(ctx->r19, -0X46);
            goto L_8006B46C;
    }
    // 0x8006B42C: addiu       $s7, $s3, -0x46
    ctx->r23 = ADD32(ctx->r19, -0X46);
    // 0x8006B430: sll         $t6, $s2, 2
    ctx->r14 = S32(ctx->r18 << 2);
    // 0x8006B434: addu        $s1, $s6, $t6
    ctx->r17 = ADD32(ctx->r22, ctx->r14);
    // 0x8006B438: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8006B43C: jal         0x800190A8
    // 0x8006B440: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    func_800190A8(rdram, ctx);
        goto after_10;
    // 0x8006B440: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_10:
    // 0x8006B444: lwc1        $f0, 0xB8($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x8006B448: swc1        $f20, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f20.u32l;
    // 0x8006B44C: add.s       $f0, $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f22.fl;
    // 0x8006B450: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x8006B454: swc1        $f0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f0.u32l;
    // 0x8006B458: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8006B45C: jal         0x80019114
    // 0x8006B460: swc1        $f0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f0.u32l;
    func_80019114(rdram, ctx);
        goto after_11;
    // 0x8006B460: swc1        $f0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f0.u32l;
    after_11:
    // 0x8006B464: b           L_8006B524
    // 0x8006B468: nop

        goto L_8006B524;
    // 0x8006B468: nop

L_8006B46C:
    // 0x8006B46C: addiu       $t7, $s0, 0x24
    ctx->r15 = ADD32(ctx->r16, 0X24);
    // 0x8006B470: slt         $at, $t7, $s3
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x8006B474: bne         $at, $zero, L_8006B4C0
    if (ctx->r1 != 0) {
        // 0x8006B478: addiu       $t6, $s0, 0x33
        ctx->r14 = ADD32(ctx->r16, 0X33);
            goto L_8006B4C0;
    }
    // 0x8006B478: addiu       $t6, $s0, 0x33
    ctx->r14 = ADD32(ctx->r16, 0X33);
    // 0x8006B47C: sll         $t8, $s2, 2
    ctx->r24 = S32(ctx->r18 << 2);
    // 0x8006B480: addu        $s1, $s6, $t8
    ctx->r17 = ADD32(ctx->r22, ctx->r24);
    // 0x8006B484: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8006B488: jal         0x800190A8
    // 0x8006B48C: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    func_800190A8(rdram, ctx);
        goto after_12;
    // 0x8006B48C: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_12:
    // 0x8006B490: subu        $t9, $s3, $s0
    ctx->r25 = SUB32(ctx->r19, ctx->r16);
    // 0x8006B494: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x8006B498: swc1        $f20, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f20.u32l;
    // 0x8006B49C: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8006B4A0: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x8006B4A4: mul.s       $f6, $f4, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f22.fl);
    // 0x8006B4A8: swc1        $f6, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f6.u32l;
    // 0x8006B4AC: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8006B4B0: jal         0x80019114
    // 0x8006B4B4: swc1        $f20, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f20.u32l;
    func_80019114(rdram, ctx);
        goto after_13;
    // 0x8006B4B4: swc1        $f20, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f20.u32l;
    after_13:
    // 0x8006B4B8: b           L_8006B524
    // 0x8006B4BC: nop

        goto L_8006B524;
    // 0x8006B4BC: nop

L_8006B4C0:
    // 0x8006B4C0: slt         $at, $s3, $t6
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8006B4C4: bne         $at, $zero, L_8006B524
    if (ctx->r1 != 0) {
        // 0x8006B4C8: sll         $t7, $s2, 2
        ctx->r15 = S32(ctx->r18 << 2);
            goto L_8006B524;
    }
    // 0x8006B4C8: sll         $t7, $s2, 2
    ctx->r15 = S32(ctx->r18 << 2);
    // 0x8006B4CC: addu        $s1, $s6, $t7
    ctx->r17 = ADD32(ctx->r22, ctx->r15);
    // 0x8006B4D0: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8006B4D4: jal         0x800190A8
    // 0x8006B4D8: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    func_800190A8(rdram, ctx);
        goto after_14;
    // 0x8006B4D8: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_14:
    // 0x8006B4DC: lwc1        $f8, 0xB4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x8006B4E0: swc1        $f20, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f20.u32l;
    // 0x8006B4E4: sub.s       $f10, $f8, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f24.fl;
    // 0x8006B4E8: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x8006B4EC: swc1        $f10, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f10.u32l;
    // 0x8006B4F0: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8006B4F4: jal         0x80019114
    // 0x8006B4F8: swc1        $f20, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f20.u32l;
    func_80019114(rdram, ctx);
        goto after_15;
    // 0x8006B4F8: swc1        $f20, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f20.u32l;
    after_15:
    // 0x8006B4FC: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8006B500: jal         0x800190F0
    // 0x8006B504: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    func_800190F0(rdram, ctx);
        goto after_16;
    // 0x8006B504: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    after_16:
    // 0x8006B508: lwc1        $f4, 0xC0($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x8006B50C: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    // 0x8006B510: add.s       $f6, $f4, $f26
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f26.fl;
    // 0x8006B514: swc1        $f6, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f6.u32l;
    // 0x8006B518: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8006B51C: jal         0x80019164
    // 0x8006B520: nop

    func_80019164(rdram, ctx);
        goto after_17;
    // 0x8006B520: nop

    after_17:
L_8006B524:
    // 0x8006B524: bne         $s5, $s7, L_8006B53C
    if (ctx->r21 != ctx->r23) {
        // 0x8006B528: sll         $t8, $s2, 2
        ctx->r24 = S32(ctx->r18 << 2);
            goto L_8006B53C;
    }
    // 0x8006B528: sll         $t8, $s2, 2
    ctx->r24 = S32(ctx->r18 << 2);
    // 0x8006B52C: addu        $t9, $s6, $t8
    ctx->r25 = ADD32(ctx->r22, ctx->r24);
    // 0x8006B530: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    // 0x8006B534: jal         0x800191C0
    // 0x8006B538: nop

    func_800191C0(rdram, ctx);
        goto after_18;
    // 0x8006B538: nop

    after_18:
L_8006B53C:
    // 0x8006B53C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8006B540: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x8006B544: bne         $s2, $at, L_8006B3F4
    if (ctx->r18 != ctx->r1) {
        // 0x8006B548: addiu       $t7, $s2, 0x3
        ctx->r15 = ADD32(ctx->r18, 0X3);
            goto L_8006B3F4;
    }
    // 0x8006B548: addiu       $t7, $s2, 0x3
    ctx->r15 = ADD32(ctx->r18, 0X3);
    // 0x8006B54C: jal         0x80007AB0
    // 0x8006B550: nop

    func_80007AB0(rdram, ctx);
        goto after_19;
    // 0x8006B550: nop

    after_19:
    // 0x8006B554: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8006B558: lw          $t6, 0x25E4($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X25E4);
    // 0x8006B55C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x8006B560: addiu       $t7, $t6, 0x4B
    ctx->r15 = ADD32(ctx->r14, 0X4B);
    // 0x8006B564: slt         $at, $s3, $t7
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x8006B568: bne         $at, $zero, L_8006B3DC
    if (ctx->r1 != 0) {
        // 0x8006B56C: lw          $t8, 0xF8($sp)
        ctx->r24 = MEM_W(ctx->r29, 0XF8);
            goto L_8006B3DC;
    }
    // 0x8006B56C: lw          $t8, 0xF8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XF8);
L_8006B570:
    // 0x8006B570: addiu       $s0, $sp, 0xD4
    ctx->r16 = ADD32(ctx->r29, 0XD4);
    // 0x8006B574: addiu       $s2, $s0, 0x24
    ctx->r18 = ADD32(ctx->r16, 0X24);
L_8006B578:
    // 0x8006B578: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8006B57C: jal         0x8001C568
    // 0x8006B580: nop

    func_8001C568(rdram, ctx);
        goto after_20;
    // 0x8006B580: nop

    after_20:
    // 0x8006B584: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8006B588: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x8006B58C: bne         $at, $zero, L_8006B578
    if (ctx->r1 != 0) {
        // 0x8006B590: nop
    
            goto L_8006B578;
    }
    // 0x8006B590: nop

    // 0x8006B594: lw          $a0, 0xF8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XF8);
    // 0x8006B598: jal         0x8005CD50
    // 0x8006B59C: nop

    func_8005CD50(rdram, ctx);
        goto after_21;
    // 0x8006B59C: nop

    after_21:
    // 0x8006B5A0: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8006B5A4: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x8006B5A8: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x8006B5AC: nop

    // 0x8006B5B0: addiu       $t6, $t9, -0x1
    ctx->r14 = ADD32(ctx->r25, -0X1);
    // 0x8006B5B4: jal         0x80007AE0
    // 0x8006B5B8: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    func_80007AE0(rdram, ctx);
        goto after_22;
    // 0x8006B5B8: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    after_22:
    // 0x8006B5BC: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x8006B5C0: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8006B5C4: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8006B5C8: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8006B5CC: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8006B5D0: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x8006B5D4: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8006B5D8: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x8006B5DC: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8006B5E0: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x8006B5E4: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x8006B5E8: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x8006B5EC: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x8006B5F0: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x8006B5F4: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x8006B5F8: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x8006B5FC: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x8006B600: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x8006B604: jr          $ra
    // 0x8006B608: addiu       $sp, $sp, 0x100
    ctx->r29 = ADD32(ctx->r29, 0X100);
    return;
    // 0x8006B608: addiu       $sp, $sp, 0x100
    ctx->r29 = ADD32(ctx->r29, 0X100);
;}
RECOMP_FUNC void func_8006B60C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006B60C: jr          $ra
    // 0x8006B610: nop

    return;
    // 0x8006B610: nop

;}
RECOMP_FUNC void func_8006B624(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006B624: addiu       $sp, $sp, -0x130
    ctx->r29 = ADD32(ctx->r29, -0X130);
    // 0x8006B628: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006B62C: jal         0x80007774
    // 0x8006B630: nop

    func_80007774(rdram, ctx);
        goto after_0;
    // 0x8006B630: nop

    after_0:
    // 0x8006B634: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x8006B638: addiu       $t7, $t7, 0x25E8
    ctx->r15 = ADD32(ctx->r15, 0X25E8);
    // 0x8006B63C: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x8006B640: lw          $t9, 0x4($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X4);
    // 0x8006B644: lw          $s4, 0x1C($v0)
    ctx->r20 = MEM_W(ctx->r2, 0X1C);
    // 0x8006B648: addiu       $t6, $sp, 0x118
    ctx->r14 = ADD32(ctx->r29, 0X118);
    // 0x8006B64C: addiu       $a0, $zero, 0x760
    ctx->r4 = ADD32(0, 0X760);
    // 0x8006B650: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8006B654: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8006B658: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x8006B65C: jal         0x8001D138
    // 0x8006B660: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x8006B660: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    after_1:
    // 0x8006B664: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8006B668: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8006B66C: jal         0x80019164
    // 0x8006B670: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x8006B670: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_2:
    // 0x8006B674: sw          $s0, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->r16;
    // 0x8006B678: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006B67C: jal         0x8001C468
    // 0x8006B680: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_8001C468(rdram, ctx);
        goto after_3;
    // 0x8006B680: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_3:
    // 0x8006B684: lw          $a0, 0x120($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X120);
    // 0x8006B688: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8006B68C: jal         0x800192E8
    // 0x8006B690: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800192E8(rdram, ctx);
        goto after_4;
    // 0x8006B690: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x8006B694: lwc1        $f0, 0x118($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X118);
    // 0x8006B698: lw          $a0, 0x120($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X120);
    // 0x8006B69C: addiu       $a1, $sp, 0xDC
    ctx->r5 = ADD32(ctx->r29, 0XDC);
    // 0x8006B6A0: swc1        $f0, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f0.u32l;
    // 0x8006B6A4: swc1        $f0, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->f0.u32l;
    // 0x8006B6A8: jal         0x80019114
    // 0x8006B6AC: swc1        $f0, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f0.u32l;
    func_80019114(rdram, ctx);
        goto after_5;
    // 0x8006B6AC: swc1        $f0, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f0.u32l;
    after_5:
    // 0x8006B6B0: addiu       $a0, $zero, 0x7A0
    ctx->r4 = ADD32(0, 0X7A0);
    // 0x8006B6B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8006B6B8: jal         0x8001D138
    // 0x8006B6BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_6;
    // 0x8006B6BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x8006B6C0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8006B6C4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8006B6C8: jal         0x80019164
    // 0x8006B6CC: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    func_80019164(rdram, ctx);
        goto after_7;
    // 0x8006B6CC: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_7:
    // 0x8006B6D0: sw          $s0, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->r16;
    // 0x8006B6D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006B6D8: jal         0x8001C468
    // 0x8006B6DC: addiu       $a1, $zero, 0x7A0
    ctx->r5 = ADD32(0, 0X7A0);
    func_8001C468(rdram, ctx);
        goto after_8;
    // 0x8006B6DC: addiu       $a1, $zero, 0x7A0
    ctx->r5 = ADD32(0, 0X7A0);
    after_8:
    // 0x8006B6E0: lw          $a0, 0x124($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X124);
    // 0x8006B6E4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8006B6E8: jal         0x800192E8
    // 0x8006B6EC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800192E8(rdram, ctx);
        goto after_9;
    // 0x8006B6EC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_9:
    // 0x8006B6F0: lwc1        $f0, 0x11C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X11C);
    // 0x8006B6F4: lw          $a0, 0x124($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X124);
    // 0x8006B6F8: addiu       $a1, $sp, 0xB4
    ctx->r5 = ADD32(ctx->r29, 0XB4);
    // 0x8006B6FC: swc1        $f0, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f0.u32l;
    // 0x8006B700: swc1        $f0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f0.u32l;
    // 0x8006B704: jal         0x80019114
    // 0x8006B708: swc1        $f0, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f0.u32l;
    func_80019114(rdram, ctx);
        goto after_10;
    // 0x8006B708: swc1        $f0, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f0.u32l;
    after_10:
    // 0x8006B70C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8006B710: lwc1        $f26, 0x64D8($at)
    ctx->f26.u32l = MEM_W(ctx->r1, 0X64D8);
    // 0x8006B714: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8006B718: lwc1        $f24, 0x64DC($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X64DC);
    // 0x8006B71C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8006B720: lwc1        $f22, 0x64E0($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X64E0);
    // 0x8006B724: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8006B728: lwc1        $f20, 0x64E4($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X64E4);
    // 0x8006B72C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8006B730: addiu       $s3, $sp, 0x74
    ctx->r19 = ADD32(ctx->r29, 0X74);
    // 0x8006B734: addiu       $s2, $sp, 0x8C
    ctx->r18 = ADD32(ctx->r29, 0X8C);
    // 0x8006B738: addiu       $s1, $zero, 0x3C
    ctx->r17 = ADD32(0, 0X3C);
L_8006B73C:
    // 0x8006B73C: lw          $v0, 0x24($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X24);
    // 0x8006B740: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x8006B744: andi        $t8, $v0, 0x200
    ctx->r24 = ctx->r2 & 0X200;
    // 0x8006B748: bne         $t8, $zero, L_8006B84C
    if (ctx->r24 != 0) {
        // 0x8006B74C: andi        $t6, $v0, 0x4000
        ctx->r14 = ctx->r2 & 0X4000;
            goto L_8006B84C;
    }
    // 0x8006B74C: andi        $t6, $v0, 0x4000
    ctx->r14 = ctx->r2 & 0X4000;
    // 0x8006B750: bne         $t6, $zero, L_8006B850
    if (ctx->r14 != 0) {
        // 0x8006B754: lui         $at, 0x41F0
        ctx->r1 = S32(0X41F0 << 16);
            goto L_8006B850;
    }
    // 0x8006B754: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8006B758: bne         $s0, $s1, L_8006B768
    if (ctx->r16 != ctx->r17) {
        // 0x8006B75C: slti        $at, $s0, 0xA
        ctx->r1 = SIGNED(ctx->r16) < 0XA ? 1 : 0;
            goto L_8006B768;
    }
    // 0x8006B75C: slti        $at, $s0, 0xA
    ctx->r1 = SIGNED(ctx->r16) < 0XA ? 1 : 0;
    // 0x8006B760: addiu       $s0, $zero, 0x1E
    ctx->r16 = ADD32(0, 0X1E);
    // 0x8006B764: slti        $at, $s0, 0xA
    ctx->r1 = SIGNED(ctx->r16) < 0XA ? 1 : 0;
L_8006B768:
    // 0x8006B768: beq         $at, $zero, L_8006B790
    if (ctx->r1 == 0) {
        // 0x8006B76C: slti        $at, $s0, 0xF
        ctx->r1 = SIGNED(ctx->r16) < 0XF ? 1 : 0;
            goto L_8006B790;
    }
    // 0x8006B76C: slti        $at, $s0, 0xF
    ctx->r1 = SIGNED(ctx->r16) < 0XF ? 1 : 0;
    // 0x8006B770: lwc1        $f2, 0x118($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X118);
    // 0x8006B774: lwc1        $f4, 0x11C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X11C);
    // 0x8006B778: add.s       $f2, $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f20.fl;
    // 0x8006B77C: add.s       $f6, $f4, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f24.fl;
    // 0x8006B780: swc1        $f2, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f2.u32l;
    // 0x8006B784: b           L_8006B808
    // 0x8006B788: swc1        $f6, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->f6.u32l;
        goto L_8006B808;
    // 0x8006B788: swc1        $f6, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->f6.u32l;
    // 0x8006B78C: slti        $at, $s0, 0xF
    ctx->r1 = SIGNED(ctx->r16) < 0XF ? 1 : 0;
L_8006B790:
    // 0x8006B790: beq         $at, $zero, L_8006B7B0
    if (ctx->r1 == 0) {
        // 0x8006B794: slti        $at, $s0, 0x1E
        ctx->r1 = SIGNED(ctx->r16) < 0X1E ? 1 : 0;
            goto L_8006B7B0;
    }
    // 0x8006B794: slti        $at, $s0, 0x1E
    ctx->r1 = SIGNED(ctx->r16) < 0X1E ? 1 : 0;
    // 0x8006B798: lwc1        $f2, 0x118($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X118);
    // 0x8006B79C: nop

    // 0x8006B7A0: add.s       $f2, $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f20.fl;
    // 0x8006B7A4: b           L_8006B808
    // 0x8006B7A8: swc1        $f2, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f2.u32l;
        goto L_8006B808;
    // 0x8006B7A8: swc1        $f2, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f2.u32l;
    // 0x8006B7AC: slti        $at, $s0, 0x1E
    ctx->r1 = SIGNED(ctx->r16) < 0X1E ? 1 : 0;
L_8006B7B0:
    // 0x8006B7B0: beq         $at, $zero, L_8006B7D0
    if (ctx->r1 == 0) {
        // 0x8006B7B4: slti        $at, $s0, 0x2D
        ctx->r1 = SIGNED(ctx->r16) < 0X2D ? 1 : 0;
            goto L_8006B7D0;
    }
    // 0x8006B7B4: slti        $at, $s0, 0x2D
    ctx->r1 = SIGNED(ctx->r16) < 0X2D ? 1 : 0;
    // 0x8006B7B8: lwc1        $f2, 0x118($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X118);
    // 0x8006B7BC: nop

    // 0x8006B7C0: add.s       $f2, $f2, $f26
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f26.fl;
    // 0x8006B7C4: b           L_8006B808
    // 0x8006B7C8: swc1        $f2, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f2.u32l;
        goto L_8006B808;
    // 0x8006B7C8: swc1        $f2, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f2.u32l;
    // 0x8006B7CC: slti        $at, $s0, 0x2D
    ctx->r1 = SIGNED(ctx->r16) < 0X2D ? 1 : 0;
L_8006B7D0:
    // 0x8006B7D0: beq         $at, $zero, L_8006B7F0
    if (ctx->r1 == 0) {
        // 0x8006B7D4: slti        $at, $s0, 0x3C
        ctx->r1 = SIGNED(ctx->r16) < 0X3C ? 1 : 0;
            goto L_8006B7F0;
    }
    // 0x8006B7D4: slti        $at, $s0, 0x3C
    ctx->r1 = SIGNED(ctx->r16) < 0X3C ? 1 : 0;
    // 0x8006B7D8: lwc1        $f2, 0x118($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X118);
    // 0x8006B7DC: nop

    // 0x8006B7E0: sub.s       $f2, $f2, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f22.fl;
    // 0x8006B7E4: b           L_8006B808
    // 0x8006B7E8: swc1        $f2, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f2.u32l;
        goto L_8006B808;
    // 0x8006B7E8: swc1        $f2, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f2.u32l;
    // 0x8006B7EC: slti        $at, $s0, 0x3C
    ctx->r1 = SIGNED(ctx->r16) < 0X3C ? 1 : 0;
L_8006B7F0:
    // 0x8006B7F0: beq         $at, $zero, L_8006B808
    if (ctx->r1 == 0) {
        // 0x8006B7F4: nop
    
            goto L_8006B808;
    }
    // 0x8006B7F4: nop

    // 0x8006B7F8: lwc1        $f2, 0x118($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X118);
    // 0x8006B7FC: nop

    // 0x8006B800: add.s       $f2, $f2, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f22.fl;
    // 0x8006B804: swc1        $f2, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f2.u32l;
L_8006B808:
    // 0x8006B808: lwc1        $f0, 0x118($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X118);
    // 0x8006B80C: lw          $a0, 0x120($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X120);
    // 0x8006B810: swc1        $f0, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f0.u32l;
    // 0x8006B814: swc1        $f0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f0.u32l;
    // 0x8006B818: jal         0x80019114
    // 0x8006B81C: swc1        $f0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f0.u32l;
    func_80019114(rdram, ctx);
        goto after_11;
    // 0x8006B81C: swc1        $f0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f0.u32l;
    after_11:
    // 0x8006B820: lwc1        $f0, 0x11C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X11C);
    // 0x8006B824: lw          $a0, 0x124($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X124);
    // 0x8006B828: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8006B82C: swc1        $f0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f0.u32l;
    // 0x8006B830: swc1        $f0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f0.u32l;
    // 0x8006B834: jal         0x80019114
    // 0x8006B838: swc1        $f0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f0.u32l;
    func_80019114(rdram, ctx);
        goto after_12;
    // 0x8006B838: swc1        $f0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f0.u32l;
    after_12:
    // 0x8006B83C: jal         0x80007AB0
    // 0x8006B840: nop

    func_80007AB0(rdram, ctx);
        goto after_13;
    // 0x8006B840: nop

    after_13:
    // 0x8006B844: b           L_8006B73C
    // 0x8006B848: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
        goto L_8006B73C;
    // 0x8006B848: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8006B84C:
    // 0x8006B84C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
L_8006B850:
    // 0x8006B850: lwc1        $f2, 0x118($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X118);
    // 0x8006B854: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8006B858: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8006B85C: addiu       $s3, $zero, 0x1E
    ctx->r19 = ADD32(0, 0X1E);
    // 0x8006B860: addiu       $s2, $sp, 0x34
    ctx->r18 = ADD32(ctx->r29, 0X34);
    // 0x8006B864: addiu       $s1, $sp, 0x4C
    ctx->r17 = ADD32(ctx->r29, 0X4C);
    // 0x8006B868: div.s       $f20, $f2, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f20.fl = DIV_S(ctx->f2.fl, ctx->f8.fl);
L_8006B86C:
    // 0x8006B86C: lw          $t7, 0x24($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X24);
    // 0x8006B870: lwc1        $f2, 0x118($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X118);
    // 0x8006B874: andi        $t9, $t7, 0x4000
    ctx->r25 = ctx->r15 & 0X4000;
    // 0x8006B878: bne         $t9, $zero, L_8006B8E4
    if (ctx->r25 != 0) {
        // 0x8006B87C: slti        $at, $s0, 0x14
        ctx->r1 = SIGNED(ctx->r16) < 0X14 ? 1 : 0;
            goto L_8006B8E4;
    }
    // 0x8006B87C: slti        $at, $s0, 0x14
    ctx->r1 = SIGNED(ctx->r16) < 0X14 ? 1 : 0;
    // 0x8006B880: bne         $at, $zero, L_8006B898
    if (ctx->r1 != 0) {
        // 0x8006B884: sub.s       $f2, $f2, $f20
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f20.fl;
            goto L_8006B898;
    }
    // 0x8006B884: sub.s       $f2, $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f20.fl;
    // 0x8006B888: lwc1        $f10, 0x11C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X11C);
    // 0x8006B88C: nop

    // 0x8006B890: sub.s       $f4, $f10, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f24.fl;
    // 0x8006B894: swc1        $f4, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->f4.u32l;
L_8006B898:
    // 0x8006B898: lw          $a0, 0x120($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X120);
    // 0x8006B89C: swc1        $f2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f2.u32l;
    // 0x8006B8A0: swc1        $f2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f2.u32l;
    // 0x8006B8A4: swc1        $f2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f2.u32l;
    // 0x8006B8A8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8006B8AC: jal         0x80019114
    // 0x8006B8B0: swc1        $f2, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f2.u32l;
    func_80019114(rdram, ctx);
        goto after_14;
    // 0x8006B8B0: swc1        $f2, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f2.u32l;
    after_14:
    // 0x8006B8B4: lwc1        $f0, 0x11C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X11C);
    // 0x8006B8B8: lw          $a0, 0x124($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X124);
    // 0x8006B8BC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x8006B8C0: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x8006B8C4: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x8006B8C8: jal         0x80019114
    // 0x8006B8CC: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    func_80019114(rdram, ctx);
        goto after_15;
    // 0x8006B8CC: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    after_15:
    // 0x8006B8D0: jal         0x80007AB0
    // 0x8006B8D4: nop

    func_80007AB0(rdram, ctx);
        goto after_16;
    // 0x8006B8D4: nop

    after_16:
    // 0x8006B8D8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8006B8DC: bne         $s0, $s3, L_8006B86C
    if (ctx->r16 != ctx->r19) {
        // 0x8006B8E0: nop
    
            goto L_8006B86C;
    }
    // 0x8006B8E0: nop

L_8006B8E4:
    // 0x8006B8E4: addiu       $s0, $sp, 0x120
    ctx->r16 = ADD32(ctx->r29, 0X120);
    // 0x8006B8E8: addiu       $s2, $s0, 0x8
    ctx->r18 = ADD32(ctx->r16, 0X8);
    // 0x8006B8EC: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_8006B8F0:
    // 0x8006B8F0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8006B8F4: jal         0x8001C568
    // 0x8006B8F8: nop

    func_8001C568(rdram, ctx);
        goto after_17;
    // 0x8006B8F8: nop

    after_17:
    // 0x8006B8FC: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8006B900: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x8006B904: bne         $at, $zero, L_8006B8F0
    if (ctx->r1 != 0) {
        // 0x8006B908: nop
    
            goto L_8006B8F0;
    }
    // 0x8006B908: nop

    // 0x8006B90C: jal         0x8005CD50
    // 0x8006B910: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    func_8005CD50(rdram, ctx);
        goto after_18;
    // 0x8006B910: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_18:
    // 0x8006B914: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8006B918: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x8006B91C: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8006B920: nop

    // 0x8006B924: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8006B928: jal         0x80007AE0
    // 0x8006B92C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    func_80007AE0(rdram, ctx);
        goto after_19;
    // 0x8006B92C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    after_19:
    // 0x8006B930: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006B934: addiu       $sp, $sp, 0x130
    ctx->r29 = ADD32(ctx->r29, 0X130);
    // 0x8006B938: jr          $ra
    // 0x8006B93C: nop

    return;
    // 0x8006B93C: nop

;}
RECOMP_FUNC void func_8006B940(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006B940: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8006B944: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x8006B948: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x8006B94C: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x8006B950: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x8006B954: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x8006B958: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x8006B95C: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x8006B960: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x8006B964: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x8006B968: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x8006B96C: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8006B970: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x8006B974: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8006B978: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8006B97C: jal         0x8006B624
    // 0x8006B980: addiu       $s1, $zero, 0x7DB
    ctx->r17 = ADD32(0, 0X7DB);
    func_8006B624(rdram, ctx);
        goto after_0;
    // 0x8006B980: addiu       $s1, $zero, 0x7DB
    ctx->r17 = ADD32(0, 0X7DB);
    after_0:
    // 0x8006B984: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x8006B988: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8006B98C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8006B990: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8006B994: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8006B998: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x8006B99C: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8006B9A0: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x8006B9A4: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8006B9A8: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x8006B9AC: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x8006B9B0: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x8006B9B4: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x8006B9B8: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x8006B9BC: jr          $ra
    // 0x8006B9C0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x8006B9C0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
