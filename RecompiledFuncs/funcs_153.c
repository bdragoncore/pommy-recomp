#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_boss_angel_1D00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001D00: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x43001D04: addiu       $v1, $v1, -0x3CBC
    ctx->r3 = ADD32(ctx->r3, -0X3CBC);
    // 0x43001D08: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x43001D0C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x43001D10: bne         $v0, $zero, L_43001D4C
    if (ctx->r2 != 0) {
        // 0x43001D14: addiu       $t6, $v0, 0x1
        ctx->r14 = ADD32(ctx->r2, 0X1);
            goto L_43001D4C;
    }
    // 0x43001D14: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x43001D18: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x43001D1C: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43001D20: sw          $a1, -0x3CAC($at)
    MEM_W(-0X3CAC, ctx->r1) = ctx->r5;
    // 0x43001D24: lw          $at, 0x0($a2)
    ctx->r1 = MEM_W(ctx->r6, 0X0);
    // 0x43001D28: lui         $t7, 0x4301
    ctx->r15 = S32(0X4301 << 16);
    // 0x43001D2C: addiu       $t7, $t7, -0x3CB8
    ctx->r15 = ADD32(ctx->r15, -0X3CB8);
    // 0x43001D30: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x43001D34: lw          $t0, 0x4($a2)
    ctx->r8 = MEM_W(ctx->r6, 0X4);
    // 0x43001D38: nop

    // 0x43001D3C: sw          $t0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r8;
    // 0x43001D40: lw          $at, 0x8($a2)
    ctx->r1 = MEM_W(ctx->r6, 0X8);
    // 0x43001D44: nop

    // 0x43001D48: sw          $at, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r1;
L_43001D4C:
    // 0x43001D4C: jr          $ra
    // 0x43001D50: nop

    return;
    // 0x43001D50: nop

    // 0x43001D54: jr          $ra
    // 0x43001D58: nop

    return;
    // 0x43001D58: nop

    // 0x43001D5C: jr          $ra
    // 0x43001D60: nop

    return;
    // 0x43001D60: nop

;}
RECOMP_FUNC void ovl_boss_angel_1D64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001D64: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x43001D68: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x43001D6C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x43001D70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43001D74: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x43001D78: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x43001D7C: jal         0x4300A438
    // 0x43001D80: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    ovl_boss_angel_A438(rdram, ctx);
        goto after_0;
    // 0x43001D80: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    after_0:
    // 0x43001D84: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x43001D88: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x43001D8C: beq         $a3, $zero, L_43001DC4
    if (ctx->r7 == 0) {
        // 0x43001D90: nop
    
            goto L_43001DC4;
    }
    // 0x43001D90: nop

    // 0x43001D94: swc1        $f4, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f4.u32l;
    // 0x43001D98: lwc1        $f8, 0x0($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X0);
    // 0x43001D9C: mtc1        $zero, $f7
    ctx->f_odd[(7 - 1) * 2] = 0;
    // 0x43001DA0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x43001DA4: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x43001DA8: c.eq.d      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.d == ctx->f10.d;
    // 0x43001DAC: nop

    // 0x43001DB0: bc1f        L_43001DC4
    if (!c1cs) {
        // 0x43001DB4: nop
    
            goto L_43001DC4;
    }
    // 0x43001DB4: nop

    // 0x43001DB8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43001DBC: b           L_43001DE0
    // 0x43001DC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43001DE0;
    // 0x43001DC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43001DC4:
    // 0x43001DC4: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    // 0x43001DC8: lwc1        $f14, 0x24($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
    // 0x43001DCC: jal         0x4300A504
    // 0x43001DD0: nop

    ovl_boss_angel_A504(rdram, ctx);
        goto after_1;
    // 0x43001DD0: nop

    after_1:
    // 0x43001DD4: jal         0x4300A8B4
    // 0x43001DD8: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    ovl_boss_angel_A8B4(rdram, ctx);
        goto after_2;
    // 0x43001DD8: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_2:
    // 0x43001DDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43001DE0:
    // 0x43001DE0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x43001DE4: jr          $ra
    // 0x43001DE8: nop

    return;
    // 0x43001DE8: nop

;}
RECOMP_FUNC void ovl_boss_angel_1DEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001DEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43001DF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43001DF4: jal         0x43001D64
    // 0x43001DF8: nop

    ovl_boss_angel_1D64(rdram, ctx);
        goto after_0;
    // 0x43001DF8: nop

    after_0:
    // 0x43001DFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43001E00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43001E04: jr          $ra
    // 0x43001E08: nop

    return;
    // 0x43001E08: nop

;}
RECOMP_FUNC void ovl_boss_angel_1E0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001E0C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x43001E10: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43001E14: lwc1        $f4, -0x42B0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X42B0);
    // 0x43001E18: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x43001E1C: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x43001E20: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x43001E24: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x43001E28: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x43001E2C: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x43001E30: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x43001E34: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x43001E38: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x43001E3C: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43001E40: swc1        $f4, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f4.u32l;
    // 0x43001E44: lwc1        $f6, -0x42AC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X42AC);
    // 0x43001E48: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43001E4C: swc1        $f6, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f6.u32l;
    // 0x43001E50: lui         $s1, 0x4301
    ctx->r17 = S32(0X4301 << 16);
    // 0x43001E54: lwc1        $f22, -0x42A4($at)
    ctx->f22.u32l = MEM_W(ctx->r1, -0X42A4);
    // 0x43001E58: lwc1        $f23, -0x42A8($at)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r1, -0X42A8);
    // 0x43001E5C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43001E60: or          $s2, $a2, $zero
    ctx->r18 = ctx->r6 | 0;
    // 0x43001E64: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x43001E68: addiu       $s1, $s1, -0x3CBC
    ctx->r17 = ADD32(ctx->r17, -0X3CBC);
L_43001E6C:
    // 0x43001E6C: beq         $s2, $zero, L_43001E8C
    if (ctx->r18 == 0) {
        // 0x43001E70: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43001E8C;
    }
    // 0x43001E70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43001E74: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x43001E78: nop

    // 0x43001E7C: beq         $t6, $zero, L_43001E90
    if (ctx->r14 == 0) {
        // 0x43001E80: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_43001E90;
    }
    // 0x43001E80: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x43001E84: b           L_43001EF8
    // 0x43001E88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_43001EF8;
    // 0x43001E88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_43001E8C:
    // 0x43001E8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_43001E90:
    // 0x43001E90: jal         0x43001DEC
    // 0x43001E94: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    ovl_boss_angel_1DEC(rdram, ctx);
        goto after_0;
    // 0x43001E94: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_0:
    // 0x43001E98: lwc1        $f8, 0xC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XC);
    // 0x43001E9C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x43001EA0: jal         0x4300A8B4
    // 0x43001EA4: sub.s       $f12, $f0, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f8.fl;
    ovl_boss_angel_A8B4(rdram, ctx);
        goto after_1;
    // 0x43001EA4: sub.s       $f12, $f0, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f8.fl;
    after_1:
    // 0x43001EA8: jal         0x4300B468
    // 0x43001EAC: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    ovl_boss_angel_B468(rdram, ctx);
        goto after_2;
    // 0x43001EAC: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_2:
    // 0x43001EB0: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x43001EB4: c.lt.d      $f10, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f10.d < ctx->f22.d;
    // 0x43001EB8: nop

    // 0x43001EBC: bc1t        L_43001EE4
    if (c1cs) {
        // 0x43001EC0: nop
    
            goto L_43001EE4;
    }
    // 0x43001EC0: nop

    // 0x43001EC4: lw          $t9, 0x9C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X9C);
    // 0x43001EC8: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x43001ECC: jalr        $t9
    // 0x43001ED0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x43001ED0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x43001ED4: jal         0x4300A1D8
    // 0x43001ED8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_boss_angel_A1D8(rdram, ctx);
        goto after_4;
    // 0x43001ED8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_4:
    // 0x43001EDC: b           L_43001E6C
    // 0x43001EE0: nop

        goto L_43001E6C;
    // 0x43001EE0: nop

L_43001EE4:
    // 0x43001EE4: lw          $t9, 0x94($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X94);
    // 0x43001EE8: swc1        $f20, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f20.u32l;
    // 0x43001EEC: jalr        $t9
    // 0x43001EF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x43001EF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x43001EF4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_43001EF8:
    // 0x43001EF8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x43001EFC: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x43001F00: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x43001F04: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x43001F08: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x43001F0C: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x43001F10: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x43001F14: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x43001F18: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x43001F1C: jr          $ra
    // 0x43001F20: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x43001F20: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_boss_angel_1F24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001F24: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x43001F28: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x43001F2C: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x43001F30: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x43001F34: addiu       $s2, $sp, 0x60
    ctx->r18 = ADD32(ctx->r29, 0X60);
    // 0x43001F38: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x43001F3C: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x43001F40: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43001F44: swc1        $f31, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x43001F48: swc1        $f30, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f30.u32l;
    // 0x43001F4C: swc1        $f29, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x43001F50: swc1        $f28, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f28.u32l;
    // 0x43001F54: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x43001F58: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x43001F5C: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x43001F60: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x43001F64: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x43001F68: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x43001F6C: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x43001F70: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x43001F74: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x43001F78: jal         0x43001DEC
    // 0x43001F7C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_boss_angel_1DEC(rdram, ctx);
        goto after_0;
    // 0x43001F7C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_0:
    // 0x43001F80: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x43001F84: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x43001F88: lwc1        $f2, 0x60($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X60);
    // 0x43001F8C: nop

    // 0x43001F90: c.lt.s      $f2, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f2.fl < ctx->f24.fl;
    // 0x43001F94: nop

    // 0x43001F98: bc1f        L_43001FC0
    if (!c1cs) {
        // 0x43001F9C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43001FC0;
    }
    // 0x43001F9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43001FA0: lwc1        $f4, 0x4($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X4);
    // 0x43001FA4: lwc1        $f6, 0x4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4);
    // 0x43001FA8: jal         0x4300B468
    // 0x43001FAC: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    ovl_boss_angel_B468(rdram, ctx);
        goto after_1;
    // 0x43001FAC: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    after_1:
    // 0x43001FB0: c.lt.s      $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f0.fl < ctx->f24.fl;
    // 0x43001FB4: nop

    // 0x43001FB8: bc1t        L_430020D0
    if (c1cs) {
        // 0x43001FBC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_430020D0;
    }
    // 0x43001FBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43001FC0:
    // 0x43001FC0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x43001FC4: jal         0x43001E0C
    // 0x43001FC8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_boss_angel_1E0C(rdram, ctx);
        goto after_2;
    // 0x43001FC8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x43001FCC: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43001FD0: lwc1        $f31, -0x42A0($at)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r1, -0X42A0);
    // 0x43001FD4: lwc1        $f30, -0x429C($at)
    ctx->f30.u32l = MEM_W(ctx->r1, -0X429C);
    // 0x43001FD8: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x43001FDC: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x43001FE0: nop

    // 0x43001FE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43001FE8:
    // 0x43001FE8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x43001FEC: jal         0x43001DEC
    // 0x43001FF0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_boss_angel_1DEC(rdram, ctx);
        goto after_3;
    // 0x43001FF0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_3:
    // 0x43001FF4: lwc1        $f16, 0x60($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X60);
    // 0x43001FF8: lwc1        $f8, 0x4($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X4);
    // 0x43001FFC: lwc1        $f10, 0x4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4);
    // 0x43002000: c.lt.s      $f16, $f24
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f16.fl < ctx->f24.fl;
    // 0x43002004: mov.s       $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    ctx->f26.fl = ctx->f0.fl;
    // 0x43002008: bc1f        L_43002028
    if (!c1cs) {
        // 0x4300200C: sub.s       $f22, $f8, $f10
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f22.fl = ctx->f8.fl - ctx->f10.fl;
            goto L_43002028;
    }
    // 0x4300200C: sub.s       $f22, $f8, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f22.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x43002010: jal         0x4300B468
    // 0x43002014: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    ovl_boss_angel_B468(rdram, ctx);
        goto after_4;
    // 0x43002014: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    after_4:
    // 0x43002018: c.lt.s      $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f0.fl < ctx->f24.fl;
    // 0x4300201C: nop

    // 0x43002020: bc1t        L_430020D0
    if (c1cs) {
        // 0x43002024: nop
    
            goto L_430020D0;
    }
    // 0x43002024: nop

L_43002028:
    // 0x43002028: lwc1        $f2, 0x60($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X60);
    // 0x4300202C: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43002030: c.le.s      $f24, $f2
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f24.fl <= ctx->f2.fl;
    // 0x43002034: nop

    // 0x43002038: bc1f        L_43002080
    if (!c1cs) {
        // 0x4300203C: nop
    
            goto L_43002080;
    }
    // 0x4300203C: nop

    // 0x43002040: lwc1        $f18, -0x4298($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X4298);
    // 0x43002044: nop

    // 0x43002048: mul.s       $f20, $f2, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f20.fl = MUL_S(ctx->f2.fl, ctx->f18.fl);
    // 0x4300204C: c.lt.s      $f20, $f28
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f20.fl < ctx->f28.fl;
    // 0x43002050: nop

    // 0x43002054: bc1f        L_43002060
    if (!c1cs) {
        // 0x43002058: nop
    
            goto L_43002060;
    }
    // 0x43002058: nop

    // 0x4300205C: mov.s       $f20, $f28
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 28);
    ctx->f20.fl = ctx->f28.fl;
L_43002060:
    // 0x43002060: lw          $t9, 0x9C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X9C);
    // 0x43002064: mfc1        $a1, $f26
    ctx->r5 = (int32_t)ctx->f26.u32l;
    // 0x43002068: jalr        $t9
    // 0x4300206C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x4300206C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x43002070: lw          $t9, 0xA8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XA8);
    // 0x43002074: swc1        $f20, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f20.u32l;
    // 0x43002078: jalr        $t9
    // 0x4300207C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x4300207C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
L_43002080:
    // 0x43002080: jal         0x4300B468
    // 0x43002084: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    ovl_boss_angel_B468(rdram, ctx);
        goto after_7;
    // 0x43002084: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    after_7:
    // 0x43002088: c.le.s      $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f24.fl <= ctx->f0.fl;
    // 0x4300208C: nop

    // 0x43002090: bc1f        L_430020C0
    if (!c1cs) {
        // 0x43002094: nop
    
            goto L_430020C0;
    }
    // 0x43002094: nop

    // 0x43002098: cvt.d.s     $f8, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f8.d = CVT_D_S(ctx->f22.fl);
    // 0x4300209C: mul.d       $f10, $f8, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f30.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f30.d);
    // 0x430020A0: lwc1        $f4, 0x4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4);
    // 0x430020A4: lw          $t9, 0x98($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X98);
    // 0x430020A8: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x430020AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430020B0: add.d       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f6.d + ctx->f10.d;
    // 0x430020B4: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x430020B8: jalr        $t9
    // 0x430020BC: swc1        $f18, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f18.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x430020BC: swc1        $f18, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f18.u32l;
    after_8:
L_430020C0:
    // 0x430020C0: jal         0x4300A1D8
    // 0x430020C4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_boss_angel_A1D8(rdram, ctx);
        goto after_9;
    // 0x430020C4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_9:
    // 0x430020C8: b           L_43001FE8
    // 0x430020CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_43001FE8;
    // 0x430020CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_430020D0:
    // 0x430020D0: lwc1        $f4, 0x0($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X0);
    // 0x430020D4: lw          $t9, 0x98($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X98);
    // 0x430020D8: swc1        $f4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f4.u32l;
    // 0x430020DC: lwc1        $f8, 0x4($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X4);
    // 0x430020E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430020E4: swc1        $f8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f8.u32l;
    // 0x430020E8: lwc1        $f6, 0x8($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X8);
    // 0x430020EC: jalr        $t9
    // 0x430020F0: swc1        $f6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f6.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x430020F0: swc1        $f6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f6.u32l;
    after_10:
    // 0x430020F4: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x430020F8: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430020FC: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x43002100: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x43002104: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x43002108: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x4300210C: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x43002110: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x43002114: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x43002118: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x4300211C: lwc1        $f29, 0x38($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x43002120: lwc1        $f28, 0x3C($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x43002124: lwc1        $f31, 0x40($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x43002128: lwc1        $f30, 0x44($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X44);
    // 0x4300212C: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x43002130: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x43002134: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x43002138: sw          $zero, -0x3CBC($at)
    MEM_W(-0X3CBC, ctx->r1) = 0;
    // 0x4300213C: jr          $ra
    // 0x43002140: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x43002140: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void ovl_boss_angel_2144(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43002144: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x43002148: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4300214C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x43002150: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x43002154: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    // 0x43002158: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x4300215C: lwc1        $f6, 0x8($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X8);
    // 0x43002160: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x43002164: jal         0x43001F24
    // 0x43002168: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    ovl_boss_angel_1F24(rdram, ctx);
        goto after_0;
    // 0x43002168: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x4300216C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43002170: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x43002174: jr          $ra
    // 0x43002178: nop

    return;
    // 0x43002178: nop

;}
RECOMP_FUNC void ovl_boss_angel_217C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300217C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x43002180: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x43002184: lui         $s1, 0x4301
    ctx->r17 = S32(0X4301 << 16);
    // 0x43002188: addiu       $s1, $s1, -0x3CD0
    ctx->r17 = ADD32(ctx->r17, -0X3CD0);
    // 0x4300218C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x43002190: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x43002194: swc1        $f25, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x43002198: swc1        $f24, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f24.u32l;
    // 0x4300219C: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x430021A0: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x430021A4: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x430021A8: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x430021AC: lwc1        $f6, 0x4($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X4);
    // 0x430021B0: lwc1        $f4, 0x0($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X0);
    // 0x430021B4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x430021B8: sub.s       $f20, $f4, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f20.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x430021BC: jal         0x4300B468
    // 0x430021C0: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    ovl_boss_angel_B468(rdram, ctx);
        goto after_0;
    // 0x430021C0: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_0:
    // 0x430021C4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x430021C8: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x430021CC: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430021D0: c.lt.s      $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f24.fl < ctx->f0.fl;
    // 0x430021D4: nop

    // 0x430021D8: bc1f        L_43002234
    if (!c1cs) {
        // 0x430021DC: nop
    
            goto L_43002234;
    }
    // 0x430021DC: nop

    // 0x430021E0: lwc1        $f22, -0x4294($at)
    ctx->f22.u32l = MEM_W(ctx->r1, -0X4294);
    // 0x430021E4: nop

L_430021E8:
    // 0x430021E8: mul.s       $f10, $f20, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x430021EC: lwc1        $f8, 0x4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X4);
    // 0x430021F0: lw          $t9, 0x98($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X98);
    // 0x430021F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430021F8: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x430021FC: jalr        $t9
    // 0x43002200: swc1        $f16, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f16.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x43002200: swc1        $f16, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f16.u32l;
    after_1:
    // 0x43002204: jal         0x4300A1D8
    // 0x43002208: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_boss_angel_A1D8(rdram, ctx);
        goto after_2;
    // 0x43002208: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x4300220C: lwc1        $f18, 0x0($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X0);
    // 0x43002210: lwc1        $f4, 0x4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4);
    // 0x43002214: nop

    // 0x43002218: sub.s       $f20, $f18, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x4300221C: jal         0x4300B468
    // 0x43002220: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    ovl_boss_angel_B468(rdram, ctx);
        goto after_3;
    // 0x43002220: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_3:
    // 0x43002224: c.lt.s      $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f24.fl < ctx->f0.fl;
    // 0x43002228: nop

    // 0x4300222C: bc1t        L_430021E8
    if (c1cs) {
        // 0x43002230: nop
    
            goto L_430021E8;
    }
    // 0x43002230: nop

L_43002234:
    // 0x43002234: lwc1        $f6, 0x0($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X0);
    // 0x43002238: nop

    // 0x4300223C: swc1        $f6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f6.u32l;
    // 0x43002240: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x43002244: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x43002248: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x4300224C: lwc1        $f24, 0x24($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X24);
    // 0x43002250: lwc1        $f25, 0x20($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x43002254: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x43002258: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x4300225C: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x43002260: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x43002264: jr          $ra
    // 0x43002268: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x43002268: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_boss_angel_226C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300226C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x43002270: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x43002274: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x43002278: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x4300227C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x43002280: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x43002284: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x43002288: blez        $a1, L_430022D4
    if (SIGNED(ctx->r5) <= 0) {
        // 0x4300228C: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_430022D4;
    }
    // 0x4300228C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_43002290:
    // 0x43002290: lw          $a0, 0x58($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X58);
    // 0x43002294: nop

    // 0x43002298: lw          $t9, 0x8C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8C);
    // 0x4300229C: nop

    // 0x430022A0: jalr        $t9
    // 0x430022A4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x430022A4: nop

    after_0:
    // 0x430022A8: beq         $v0, $zero, L_430022D8
    if (ctx->r2 == 0) {
        // 0x430022AC: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_430022D8;
    }
    // 0x430022AC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x430022B0: lw          $t9, 0x98($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X98);
    // 0x430022B4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x430022B8: jalr        $t9
    // 0x430022BC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x430022BC: nop

    after_1:
    // 0x430022C0: jal         0x4300A1D8
    // 0x430022C4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_boss_angel_A1D8(rdram, ctx);
        goto after_2;
    // 0x430022C4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x430022C8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x430022CC: bne         $s0, $s2, L_43002290
    if (ctx->r16 != ctx->r18) {
        // 0x430022D0: nop
    
            goto L_43002290;
    }
    // 0x430022D0: nop

L_430022D4:
    // 0x430022D4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_430022D8:
    // 0x430022D8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x430022DC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x430022E0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x430022E4: jr          $ra
    // 0x430022E8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x430022E8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_boss_angel_22EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430022EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x430022F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430022F4: jal         0x4300226C
    // 0x430022F8: addiu       $a1, $zero, 0x2710
    ctx->r5 = ADD32(0, 0X2710);
    ovl_boss_angel_226C(rdram, ctx);
        goto after_0;
    // 0x430022F8: addiu       $a1, $zero, 0x2710
    ctx->r5 = ADD32(0, 0X2710);
    after_0:
    // 0x430022FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43002300: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43002304: jr          $ra
    // 0x43002308: nop

    return;
    // 0x43002308: nop

    // 0x4300230C: jr          $ra
    // 0x43002310: nop

    return;
    // 0x43002310: nop

;}
RECOMP_FUNC void ovl_boss_angel_2314(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43002314: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x43002318: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x4300231C: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x43002320: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43002324: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x43002328: lw          $a0, -0x4010($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4010);
    // 0x4300232C: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x43002330: jal         0x430006C4
    // 0x43002334: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    ovl_boss_angel_6C4(rdram, ctx);
        goto after_0;
    // 0x43002334: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x43002338: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x4300233C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x43002340: bne         $v0, $zero, L_4300237C
    if (ctx->r2 != 0) {
        // 0x43002344: nop
    
            goto L_4300237C;
    }
    // 0x43002344: nop

    // 0x43002348: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x4300234C: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43002350: lwc1        $f4, 0xC($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0XC);
    // 0x43002354: nop

    // 0x43002358: swc1        $f4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f4.u32l;
    // 0x4300235C: lwc1        $f6, 0x10($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X10);
    // 0x43002360: lwc1        $f10, -0x428C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X428C);
    // 0x43002364: lwc1        $f11, -0x4290($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X4290);
    // 0x43002368: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x4300236C: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x43002370: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x43002374: b           L_4300238C
    // 0x43002378: swc1        $f18, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f18.u32l;
        goto L_4300238C;
    // 0x43002378: swc1        $f18, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f18.u32l;
L_4300237C:
    // 0x4300237C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43002380: nop

    // 0x43002384: swc1        $f0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f0.u32l;
    // 0x43002388: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
L_4300238C:
    // 0x4300238C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43002390: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x43002394: jr          $ra
    // 0x43002398: nop

    return;
    // 0x43002398: nop

;}
RECOMP_FUNC void ovl_boss_angel_239C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300239C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x430023A0: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x430023A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430023A8: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    // 0x430023AC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x430023B0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x430023B4: jal         0x4300B4B0
    // 0x430023B8: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    ovl_boss_angel_B4B0(rdram, ctx);
        goto after_0;
    // 0x430023B8: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_0:
    // 0x430023BC: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x430023C0: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x430023C4: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x430023C8: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x430023CC: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x430023D0: lwc1        $f16, 0x0($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X0);
    // 0x430023D4: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x430023D8: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x430023DC: swc1        $f18, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f18.u32l;
    // 0x430023E0: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x430023E4: nop

    // 0x430023E8: swc1        $f4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f4.u32l;
    // 0x430023EC: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    // 0x430023F0: jal         0x4300B670
    // 0x430023F4: nop

    ovl_boss_angel_B670(rdram, ctx);
        goto after_1;
    // 0x430023F4: nop

    after_1:
    // 0x430023F8: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x430023FC: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x43002400: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x43002404: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x43002408: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x4300240C: lwc1        $f18, 0x8($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X8);
    // 0x43002410: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x43002414: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x43002418: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
    // 0x4300241C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43002420: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43002424: jr          $ra
    // 0x43002428: nop

    return;
    // 0x43002428: nop

;}
RECOMP_FUNC void ovl_boss_angel_242C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300242C: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43002430: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x43002434: jr          $ra
    // 0x43002438: sw          $zero, -0x3C70($at)
    MEM_W(-0X3C70, ctx->r1) = 0;
    return;
    // 0x43002438: sw          $zero, -0x3C70($at)
    MEM_W(-0X3C70, ctx->r1) = 0;
;}
RECOMP_FUNC void ovl_boss_angel_243C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300243C: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x43002440: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x43002444: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x43002448: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x4300244C: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x43002450: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x43002454: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x43002458: swc1        $f31, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x4300245C: swc1        $f30, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f30.u32l;
    // 0x43002460: swc1        $f29, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x43002464: swc1        $f28, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f28.u32l;
    // 0x43002468: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x4300246C: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x43002470: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x43002474: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x43002478: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x4300247C: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x43002480: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x43002484: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x43002488: lw          $t6, 0x58($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X58);
    // 0x4300248C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43002490: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x43002494: jal         0x43001BDC
    // 0x43002498: sw          $t6, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r14;
    ovl_boss_angel_1BDC(rdram, ctx);
        goto after_0;
    // 0x43002498: sw          $t6, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r14;
    after_0:
    // 0x4300249C: lw          $a0, 0x94($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X94);
    // 0x430024A0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x430024A4: lw          $t9, 0xA4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XA4);
    // 0x430024A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x430024AC: jalr        $t9
    // 0x430024B0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x430024B0: nop

    after_1:
    // 0x430024B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430024B8: jal         0x43002144
    // 0x430024BC: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    ovl_boss_angel_2144(rdram, ctx);
        goto after_2;
    // 0x430024BC: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    after_2:
    // 0x430024C0: jal         0x43004774
    // 0x430024C4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    ovl_boss_angel_4774(rdram, ctx);
        goto after_3;
    // 0x430024C4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_3:
    // 0x430024C8: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430024CC: lwc1        $f4, -0x4288($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X4288);
    // 0x430024D0: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430024D4: swc1        $f4, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f4.u32l;
    // 0x430024D8: lwc1        $f6, -0x4284($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X4284);
    // 0x430024DC: lw          $t7, 0x94($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X94);
    // 0x430024E0: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430024E4: swc1        $f6, -0x3CD4($at)
    MEM_W(-0X3CD4, ctx->r1) = ctx->f6.u32l;
    // 0x430024E8: lw          $a0, 0x4($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X4);
    // 0x430024EC: jal         0x4300AA90
    // 0x430024F0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_boss_angel_AA90(rdram, ctx);
        goto after_4;
    // 0x430024F0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_4:
    // 0x430024F4: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x430024F8: lw          $a0, 0x58($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X58);
L_430024FC:
    // 0x430024FC: nop

    // 0x43002500: lw          $t9, 0x8C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8C);
    // 0x43002504: nop

    // 0x43002508: jalr        $t9
    // 0x4300250C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x4300250C: nop

    after_5:
    // 0x43002510: beq         $v0, $zero, L_43002538
    if (ctx->r2 == 0) {
        // 0x43002514: nop
    
            goto L_43002538;
    }
    // 0x43002514: nop

    // 0x43002518: lw          $t9, 0x98($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X98);
    // 0x4300251C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43002520: jalr        $t9
    // 0x43002524: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x43002524: nop

    after_6:
    // 0x43002528: jal         0x4300A1D8
    // 0x4300252C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_boss_angel_A1D8(rdram, ctx);
        goto after_7;
    // 0x4300252C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_7:
    // 0x43002530: b           L_430024FC
    // 0x43002534: lw          $a0, 0x58($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X58);
        goto L_430024FC;
    // 0x43002534: lw          $a0, 0x58($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X58);
L_43002538:
    // 0x43002538: lui         $s3, 0x4301
    ctx->r19 = S32(0X4301 << 16);
    // 0x4300253C: addiu       $s3, $s3, -0x3C70
    ctx->r19 = ADD32(ctx->r19, -0X3C70);
    // 0x43002540: lw          $t8, 0x0($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X0);
    // 0x43002544: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x43002548: bne         $t8, $zero, L_4300256C
    if (ctx->r24 != 0) {
        // 0x4300254C: addiu       $a0, $zero, 0x202
        ctx->r4 = ADD32(0, 0X202);
            goto L_4300256C;
    }
    // 0x4300254C: addiu       $a0, $zero, 0x202
    ctx->r4 = ADD32(0, 0X202);
    // 0x43002550: addiu       $a1, $zero, 0xA37
    ctx->r5 = ADD32(0, 0XA37);
    // 0x43002554: jal         0x43008714
    // 0x43002558: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    ovl_boss_angel_8714(rdram, ctx);
        goto after_8;
    // 0x43002558: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    after_8:
    // 0x4300255C: lui         $t0, 0x4300
    ctx->r8 = S32(0X4300 << 16);
    // 0x43002560: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    // 0x43002564: addiu       $t0, $t0, 0x242C
    ctx->r8 = ADD32(ctx->r8, 0X242C);
    // 0x43002568: sw          $t0, 0x108($v0)
    MEM_W(0X108, ctx->r2) = ctx->r8;
L_4300256C:
    // 0x4300256C: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43002570: lwc1        $f8, -0x4280($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X4280);
    // 0x43002574: lui         $t2, 0x4301
    ctx->r10 = S32(0X4301 << 16);
    // 0x43002578: swc1        $f8, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f8.u32l;
    // 0x4300257C: lw          $t2, -0x3CC4($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X3CC4);
    // 0x43002580: lui         $t4, 0x4301
    ctx->r12 = S32(0X4301 << 16);
    // 0x43002584: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x43002588: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x4300258C: lw          $t4, -0x4728($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X4728);
    // 0x43002590: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43002594: blez        $t4, L_43002750
    if (SIGNED(ctx->r12) <= 0) {
        // 0x43002598: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_43002750;
    }
    // 0x43002598: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x4300259C: lwc1        $f31, -0x4278($at)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r1, -0X4278);
    // 0x430025A0: lwc1        $f30, -0x4274($at)
    ctx->f30.u32l = MEM_W(ctx->r1, -0X4274);
    // 0x430025A4: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430025A8: lwc1        $f29, -0x4270($at)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r1, -0X4270);
    // 0x430025AC: lwc1        $f28, -0x426C($at)
    ctx->f28.u32l = MEM_W(ctx->r1, -0X426C);
    // 0x430025B0: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430025B4: lwc1        $f27, -0x4268($at)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r1, -0X4268);
    // 0x430025B8: lwc1        $f26, -0x4264($at)
    ctx->f26.u32l = MEM_W(ctx->r1, -0X4264);
    // 0x430025BC: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430025C0: lwc1        $f24, -0x4260($at)
    ctx->f24.u32l = MEM_W(ctx->r1, -0X4260);
    // 0x430025C4: addiu       $s2, $sp, 0x88
    ctx->r18 = ADD32(ctx->r29, 0X88);
L_430025C8:
    // 0x430025C8: lui         $a2, 0x4301
    ctx->r6 = S32(0X4301 << 16);
    // 0x430025CC: addiu       $a2, $a2, -0x4008
    ctx->r6 = ADD32(ctx->r6, -0X4008);
    // 0x430025D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430025D4: addiu       $a1, $sp, 0x7C
    ctx->r5 = ADD32(ctx->r29, 0X7C);
    // 0x430025D8: jal         0x43001DEC
    // 0x430025DC: cvt.d.s     $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f20.d = CVT_D_S(ctx->f22.fl);
    ovl_boss_angel_1DEC(rdram, ctx);
        goto after_9;
    // 0x430025DC: cvt.d.s     $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f20.d = CVT_D_S(ctx->f22.fl);
    after_9:
    // 0x430025E0: lwc1        $f10, 0xC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XC);
    // 0x430025E4: jal         0x4300A8B4
    // 0x430025E8: sub.s       $f12, $f0, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f10.fl;
    ovl_boss_angel_A8B4(rdram, ctx);
        goto after_10;
    // 0x430025E8: sub.s       $f12, $f0, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f10.fl;
    after_10:
    // 0x430025EC: lui         $at, 0x44FA
    ctx->r1 = S32(0X44FA << 16);
    // 0x430025F0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x430025F4: lwc1        $f16, 0x7C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x430025F8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x430025FC: div.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f16.fl, ctx->f18.fl);
    // 0x43002600: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x43002604: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x43002608: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x4300260C: sub.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x43002610: swc1        $f8, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f8.u32l;
    // 0x43002614: lwc1        $f10, 0x30($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X30);
    // 0x43002618: nop

    // 0x4300261C: c.lt.s      $f10, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f10.fl < ctx->f24.fl;
    // 0x43002620: nop

    // 0x43002624: bc1f        L_43002630
    if (!c1cs) {
        // 0x43002628: nop
    
            goto L_43002630;
    }
    // 0x43002628: nop

    // 0x4300262C: swc1        $f24, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f24.u32l;
L_43002630:
    // 0x43002630: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x43002634: nop

    // 0x43002638: bc1f        L_43002648
    if (!c1cs) {
        // 0x4300263C: nop
    
            goto L_43002648;
    }
    // 0x4300263C: nop

    // 0x43002640: b           L_43002654
    // 0x43002644: mov.d       $f0, $f26
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    ctx->f0.d = ctx->f26.d;
        goto L_43002654;
    // 0x43002644: mov.d       $f0, $f26
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    ctx->f0.d = ctx->f26.d;
L_43002648:
    // 0x43002648: lwc1        $f1, -0x4258($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X4258);
    // 0x4300264C: lwc1        $f0, -0x4254($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X4254);
    // 0x43002650: nop

L_43002654:
    // 0x43002654: add.d       $f18, $f20, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.d); NAN_CHECK(ctx->f0.d); 
    ctx->f18.d = ctx->f20.d + ctx->f0.d;
    // 0x43002658: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x4300265C: cvt.s.d     $f22, $f18
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f22.fl = CVT_S_D(ctx->f18.d);
    // 0x43002660: cvt.d.s     $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f20.d = CVT_D_S(ctx->f22.fl);
    // 0x43002664: c.lt.d      $f28, $f20
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f28.d < ctx->f20.d;
    // 0x43002668: nop

    // 0x4300266C: bc1f        L_43002680
    if (!c1cs) {
        // 0x43002670: nop
    
            goto L_43002680;
    }
    // 0x43002670: nop

    // 0x43002674: lwc1        $f22, -0x4250($at)
    ctx->f22.u32l = MEM_W(ctx->r1, -0X4250);
    // 0x43002678: nop

    // 0x4300267C: cvt.d.s     $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f20.d = CVT_D_S(ctx->f22.fl);
L_43002680:
    // 0x43002680: c.lt.d      $f20, $f30
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 30);
    c1cs = ctx->f20.d < ctx->f30.d;
    // 0x43002684: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43002688: bc1f        L_43002698
    if (!c1cs) {
        // 0x4300268C: nop
    
            goto L_43002698;
    }
    // 0x4300268C: nop

    // 0x43002690: lwc1        $f22, -0x424C($at)
    ctx->f22.u32l = MEM_W(ctx->r1, -0X424C);
    // 0x43002694: nop

L_43002698:
    // 0x43002698: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x4300269C: div         $zero, $s1, $at
    lo = S32(S64(S32(ctx->r17)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r17)) % S64(S32(ctx->r1)));
    // 0x430026A0: mfhi        $t5
    ctx->r13 = hi;
    // 0x430026A4: slti        $at, $t5, 0x15
    ctx->r1 = SIGNED(ctx->r13) < 0X15 ? 1 : 0;
    // 0x430026A8: bne         $at, $zero, L_43002704
    if (ctx->r1 != 0) {
        // 0x430026AC: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_43002704;
    }
    // 0x430026AC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x430026B0: div         $zero, $s1, $at
    lo = S32(S64(S32(ctx->r17)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r17)) % S64(S32(ctx->r1)));
    // 0x430026B4: addiu       $a0, $zero, 0x333
    ctx->r4 = ADD32(0, 0X333);
    // 0x430026B8: mfhi        $t6
    ctx->r14 = hi;
    // 0x430026BC: bne         $t6, $zero, L_43002704
    if (ctx->r14 != 0) {
        // 0x430026C0: nop
    
            goto L_43002704;
    }
    // 0x430026C0: nop

    // 0x430026C4: jal         0x43000280
    // 0x430026C8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_boss_angel_280(rdram, ctx);
        goto after_11;
    // 0x430026C8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_11:
    // 0x430026CC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x430026D0: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x430026D4: jal         0x4300AAF4
    // 0x430026D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_boss_angel_AAF4(rdram, ctx);
        goto after_12;
    // 0x430026D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_12:
    // 0x430026DC: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x430026E0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x430026E4: lwc1        $f6, 0x7C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x430026E8: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x430026EC: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x430026F0: lw          $t9, 0x10C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X10C);
    // 0x430026F4: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x430026F8: lw          $a2, 0xC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XC);
    // 0x430026FC: jalr        $t9
    // 0x43002700: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x43002700: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_13:
L_43002704:
    // 0x43002704: lwc1        $f10, 0xC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XC);
    // 0x43002708: lw          $t9, 0x9C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X9C);
    // 0x4300270C: add.s       $f16, $f10, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f22.fl;
    // 0x43002710: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43002714: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x43002718: jalr        $t9
    // 0x4300271C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x4300271C: nop

    after_14:
    // 0x43002720: jal         0x4300A1D8
    // 0x43002724: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_boss_angel_A1D8(rdram, ctx);
        goto after_15;
    // 0x43002724: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_15:
    // 0x43002728: lui         $t7, 0x4301
    ctx->r15 = S32(0X4301 << 16);
    // 0x4300272C: lw          $t7, -0x3CC4($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3CC4);
    // 0x43002730: lui         $t0, 0x4301
    ctx->r8 = S32(0X4301 << 16);
    // 0x43002734: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x43002738: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x4300273C: lw          $t0, -0x4728($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X4728);
    // 0x43002740: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x43002744: slt         $at, $s1, $t0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x43002748: bne         $at, $zero, L_430025C8
    if (ctx->r1 != 0) {
        // 0x4300274C: nop
    
            goto L_430025C8;
    }
    // 0x4300274C: nop

L_43002750:
    // 0x43002750: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x43002754: nop

    // 0x43002758: lw          $t9, 0x110($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X110);
    // 0x4300275C: nop

    // 0x43002760: jalr        $t9
    // 0x43002764: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x43002764: nop

    after_16:
    // 0x43002768: jal         0x4300AACC
    // 0x4300276C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    ovl_boss_angel_AACC(rdram, ctx);
        goto after_17;
    // 0x4300276C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_17:
    // 0x43002770: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x43002774: lw          $a0, 0x94($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X94);
    // 0x43002778: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x4300277C: swc1        $f18, -0x3CD4($at)
    MEM_W(-0X3CD4, ctx->r1) = ctx->f18.u32l;
    // 0x43002780: lw          $t9, 0xA4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XA4);
    // 0x43002784: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x43002788: jalr        $t9
    // 0x4300278C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_18;
    // 0x4300278C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_18:
    // 0x43002790: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x43002794: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x43002798: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x4300279C: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x430027A0: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x430027A4: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x430027A8: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x430027AC: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x430027B0: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x430027B4: lwc1        $f29, 0x38($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x430027B8: lwc1        $f28, 0x3C($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x430027BC: lwc1        $f31, 0x40($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x430027C0: lwc1        $f30, 0x44($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X44);
    // 0x430027C4: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x430027C8: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x430027CC: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x430027D0: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x430027D4: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x430027D8: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    // 0x430027DC: jr          $ra
    // 0x430027E0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    return;
    // 0x430027E0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
;}
RECOMP_FUNC void ovl_boss_angel_27E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430027E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x430027E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430027EC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x430027F0: lw          $t9, 0x3C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X3C);
    // 0x430027F4: nop

    // 0x430027F8: jalr        $t9
    // 0x430027FC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x430027FC: nop

    after_0:
    // 0x43002800: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43002804: lui         $t6, 0x4301
    ctx->r14 = S32(0X4301 << 16);
    // 0x43002808: lw          $t6, -0x3C5C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3C5C);
    // 0x4300280C: lw          $t9, 0x40($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X40);
    // 0x43002810: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x43002814: jalr        $t9
    // 0x43002818: sw          $t6, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r14;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x43002818: sw          $t6, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r14;
    after_1:
    // 0x4300281C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43002820: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43002824: jr          $ra
    // 0x43002828: nop

    return;
    // 0x43002828: nop

;}
RECOMP_FUNC void ovl_boss_angel_282C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300282C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43002830: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43002834: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x43002838: jal         0x430027E4
    // 0x4300283C: addiu       $a1, $zero, 0x9FA
    ctx->r5 = ADD32(0, 0X9FA);
    ovl_boss_angel_27E4(rdram, ctx);
        goto after_0;
    // 0x4300283C: addiu       $a1, $zero, 0x9FA
    ctx->r5 = ADD32(0, 0X9FA);
    after_0:
    // 0x43002840: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43002844: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x43002848: lw          $t9, 0x44($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X44);
    // 0x4300284C: nop

    // 0x43002850: jalr        $t9
    // 0x43002854: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x43002854: nop

    after_1:
    // 0x43002858: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4300285C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43002860: jr          $ra
    // 0x43002864: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x43002864: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void ovl_boss_angel_2868(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43002868: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4300286C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43002870: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x43002874: jal         0x430027E4
    // 0x43002878: addiu       $a1, $zero, 0xA01
    ctx->r5 = ADD32(0, 0XA01);
    ovl_boss_angel_27E4(rdram, ctx);
        goto after_0;
    // 0x43002878: addiu       $a1, $zero, 0xA01
    ctx->r5 = ADD32(0, 0XA01);
    after_0:
    // 0x4300287C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43002880: addiu       $a1, $zero, 0x9FE
    ctx->r5 = ADD32(0, 0X9FE);
    // 0x43002884: lw          $t9, 0x38($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X38);
    // 0x43002888: nop

    // 0x4300288C: jalr        $t9
    // 0x43002890: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x43002890: nop

    after_1:
    // 0x43002894: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43002898: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x4300289C: lw          $t9, 0x44($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X44);
    // 0x430028A0: nop

    // 0x430028A4: jalr        $t9
    // 0x430028A8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x430028A8: nop

    after_2:
    // 0x430028AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430028B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x430028B4: jr          $ra
    // 0x430028B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x430028B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void ovl_boss_angel_28BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430028BC: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x430028C0: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x430028C4: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x430028C8: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x430028CC: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x430028D0: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x430028D4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x430028D8: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x430028DC: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x430028E0: lw          $t6, 0x58($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X58);
    // 0x430028E4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x430028E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x430028EC: jal         0x43001BDC
    // 0x430028F0: sw          $t6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r14;
    ovl_boss_angel_1BDC(rdram, ctx);
        goto after_0;
    // 0x430028F0: sw          $t6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r14;
    after_0:
    // 0x430028F4: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x430028F8: addiu       $v0, $v0, -0x4008
    ctx->r2 = ADD32(ctx->r2, -0X4008);
    // 0x430028FC: lwc1        $f12, 0x0($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X0);
    // 0x43002900: lwc1        $f14, 0x8($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X8);
    // 0x43002904: jal         0x4300A504
    // 0x43002908: nop

    ovl_boss_angel_A504(rdram, ctx);
        goto after_1;
    // 0x43002908: nop

    after_1:
    // 0x4300290C: jal         0x4300A8B4
    // 0x43002910: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    ovl_boss_angel_A8B4(rdram, ctx);
        goto after_2;
    // 0x43002910: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_2:
    // 0x43002914: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x43002918: jal         0x4300B4B0
    // 0x4300291C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    ovl_boss_angel_B4B0(rdram, ctx);
        goto after_3;
    // 0x4300291C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_3:
    // 0x43002920: lui         $at, 0x4089
    ctx->r1 = S32(0X4089 << 16);
    // 0x43002924: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x43002928: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x4300292C: neg.s       $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = -ctx->f0.fl;
    // 0x43002930: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x43002934: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x43002938: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x4300293C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x43002940: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x43002944: swc1        $f18, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f18.u32l;
    // 0x43002948: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x4300294C: jal         0x4300B670
    // 0x43002950: swc1        $f16, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f16.u32l;
    ovl_boss_angel_B670(rdram, ctx);
        goto after_4;
    // 0x43002950: swc1        $f16, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f16.u32l;
    after_4:
    // 0x43002954: lui         $at, 0x4089
    ctx->r1 = S32(0X4089 << 16);
    // 0x43002958: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x4300295C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x43002960: neg.s       $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = -ctx->f0.fl;
    // 0x43002964: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x43002968: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x4300296C: addiu       $s2, $sp, 0x7C
    ctx->r18 = ADD32(ctx->r29, 0X7C);
    // 0x43002970: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x43002974: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43002978: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x4300297C: jal         0x43001F24
    // 0x43002980: swc1        $f16, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f16.u32l;
    ovl_boss_angel_1F24(rdram, ctx);
        goto after_5;
    // 0x43002980: swc1        $f16, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f16.u32l;
    after_5:
    // 0x43002984: lui         $a1, 0x4301
    ctx->r5 = S32(0X4301 << 16);
    // 0x43002988: addiu       $a1, $a1, -0x4008
    ctx->r5 = ADD32(ctx->r5, -0X4008);
    // 0x4300298C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43002990: jal         0x43001E0C
    // 0x43002994: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_boss_angel_1E0C(rdram, ctx);
        goto after_6;
    // 0x43002994: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x43002998: jal         0x43004774
    // 0x4300299C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    ovl_boss_angel_4774(rdram, ctx);
        goto after_7;
    // 0x4300299C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_7:
    // 0x430029A0: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x430029A4: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x430029A8: lw          $t9, 0xA4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XA4);
    // 0x430029AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x430029B0: jalr        $t9
    // 0x430029B4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x430029B4: nop

    after_8:
    // 0x430029B8: jal         0x430022EC
    // 0x430029BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_boss_angel_22EC(rdram, ctx);
        goto after_9;
    // 0x430029BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x430029C0: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x430029C4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x430029C8: lw          $a1, 0x4($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X4);
    // 0x430029CC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x430029D0: jal         0x4300ABC8
    // 0x430029D4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_boss_angel_ABC8(rdram, ctx);
        goto after_10;
    // 0x430029D4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_10:
    // 0x430029D8: addiu       $a0, $zero, 0x337
    ctx->r4 = ADD32(0, 0X337);
    // 0x430029DC: jal         0x43000280
    // 0x430029E0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_boss_angel_280(rdram, ctx);
        goto after_11;
    // 0x430029E0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_11:
    // 0x430029E4: lui         $s4, 0x4301
    ctx->r20 = S32(0X4301 << 16);
    // 0x430029E8: addiu       $s4, $s4, -0x3CC4
    ctx->r20 = ADD32(ctx->r20, -0X3CC4);
    // 0x430029EC: lw          $t8, 0x0($s4)
    ctx->r24 = MEM_W(ctx->r20, 0X0);
    // 0x430029F0: lui         $t1, 0x4301
    ctx->r9 = S32(0X4301 << 16);
    // 0x430029F4: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x430029F8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x430029FC: lw          $t1, -0x4710($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X4710);
    // 0x43002A00: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43002A04: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x43002A08: addiu       $a1, $zero, 0x9F9
    ctx->r5 = ADD32(0, 0X9F9);
    // 0x43002A0C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x43002A10: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    // 0x43002A14: jal         0x43008000
    // 0x43002A18: sw          $t1, -0x3C5C($at)
    MEM_W(-0X3C5C, ctx->r1) = ctx->r9;
    ovl_boss_angel_8000(rdram, ctx);
        goto after_12;
    // 0x43002A18: sw          $t1, -0x3C5C($at)
    MEM_W(-0X3C5C, ctx->r1) = ctx->r9;
    after_12:
    // 0x43002A1C: lui         $t2, 0x4300
    ctx->r10 = S32(0X4300 << 16);
    // 0x43002A20: addiu       $t2, $t2, 0x282C
    ctx->r10 = ADD32(ctx->r10, 0X282C);
    // 0x43002A24: sw          $t2, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->r10;
    // 0x43002A28: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x43002A2C: addiu       $a1, $zero, 0xA00
    ctx->r5 = ADD32(0, 0XA00);
    // 0x43002A30: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x43002A34: jal         0x43008000
    // 0x43002A38: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    ovl_boss_angel_8000(rdram, ctx);
        goto after_13;
    // 0x43002A38: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    after_13:
    // 0x43002A3C: lw          $t9, 0x38($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X38);
    // 0x43002A40: lui         $t3, 0x4300
    ctx->r11 = S32(0X4300 << 16);
    // 0x43002A44: addiu       $t3, $t3, 0x2868
    ctx->r11 = ADD32(ctx->r11, 0X2868);
    // 0x43002A48: sw          $t3, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->r11;
    // 0x43002A4C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x43002A50: jalr        $t9
    // 0x43002A54: addiu       $a1, $zero, 0x9FE
    ctx->r5 = ADD32(0, 0X9FE);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x43002A54: addiu       $a1, $zero, 0x9FE
    ctx->r5 = ADD32(0, 0X9FE);
    after_14:
    // 0x43002A58: lw          $t4, 0x0($s4)
    ctx->r12 = MEM_W(ctx->r20, 0X0);
    // 0x43002A5C: lui         $t6, 0x4301
    ctx->r14 = S32(0X4301 << 16);
    // 0x43002A60: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x43002A64: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x43002A68: lw          $t6, -0x4704($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4704);
    // 0x43002A6C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x43002A70: blez        $t6, L_43002C0C
    if (SIGNED(ctx->r14) <= 0) {
        // 0x43002A74: lui         $at, 0x40A0
        ctx->r1 = S32(0X40A0 << 16);
            goto L_43002C0C;
    }
    // 0x43002A74: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x43002A78: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x43002A7C: addiu       $s1, $sp, 0x48
    ctx->r17 = ADD32(ctx->r29, 0X48);
    // 0x43002A80: addiu       $s0, $sp, 0x70
    ctx->r16 = ADD32(ctx->r29, 0X70);
L_43002A84:
    // 0x43002A84: jal         0x4300A1D8
    // 0x43002A88: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    ovl_boss_angel_A1D8(rdram, ctx);
        goto after_15;
    // 0x43002A88: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_15:
    // 0x43002A8C: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    // 0x43002A90: jal         0x43002314
    // 0x43002A94: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    ovl_boss_angel_2314(rdram, ctx);
        goto after_16;
    // 0x43002A94: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    after_16:
    // 0x43002A98: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x43002A9C: lw          $a0, -0x3CDC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3CDC);
    // 0x43002AA0: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x43002AA4: jal         0x43006F68
    // 0x43002AA8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    ovl_boss_angel_6F68(rdram, ctx);
        goto after_17;
    // 0x43002AA8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_17:
    // 0x43002AAC: lui         $t7, 0x4301
    ctx->r15 = S32(0X4301 << 16);
    // 0x43002AB0: addiu       $t7, $t7, -0x4008
    ctx->r15 = ADD32(ctx->r15, -0X4008);
    // 0x43002AB4: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x43002AB8: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x43002ABC: sw          $at, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r1;
    // 0x43002AC0: lw          $t0, 0x4($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X4);
    // 0x43002AC4: nop

    // 0x43002AC8: sw          $t0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r8;
    // 0x43002ACC: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x43002AD0: jal         0x4300A1D8
    // 0x43002AD4: sw          $at, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r1;
    ovl_boss_angel_A1D8(rdram, ctx);
        goto after_18;
    // 0x43002AD4: sw          $at, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r1;
    after_18:
    // 0x43002AD8: lw          $t1, 0x0($s4)
    ctx->r9 = MEM_W(ctx->r20, 0X0);
    // 0x43002ADC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x43002AE0: beq         $t1, $zero, L_43002BCC
    if (ctx->r9 == 0) {
        // 0x43002AE4: or          $a1, $s0, $zero
        ctx->r5 = ctx->r16 | 0;
            goto L_43002BCC;
    }
    // 0x43002AE4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x43002AE8: lwc1        $f0, 0x54($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X54);
    // 0x43002AEC: lw          $a2, 0x58($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X58);
    // 0x43002AF0: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x43002AF4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x43002AF8: bc1f        L_43002B30
    if (!c1cs) {
        // 0x43002AFC: or          $a1, $s0, $zero
        ctx->r5 = ctx->r16 | 0;
            goto L_43002B30;
    }
    // 0x43002AFC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x43002B00: lui         $at, 0xC1A0
    ctx->r1 = S32(0XC1A0 << 16);
    // 0x43002B04: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x43002B08: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x43002B0C: jal         0x4300239C
    // 0x43002B10: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    ovl_boss_angel_239C(rdram, ctx);
        goto after_19;
    // 0x43002B10: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_19:
    // 0x43002B14: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x43002B18: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x43002B1C: jal         0x43009198
    // 0x43002B20: addiu       $a2, $zero, 0x1A
    ctx->r6 = ADD32(0, 0X1A);
    ovl_boss_angel_9198(rdram, ctx);
        goto after_20;
    // 0x43002B20: addiu       $a2, $zero, 0x1A
    ctx->r6 = ADD32(0, 0X1A);
    after_20:
    // 0x43002B24: addiu       $a0, $zero, 0x351
    ctx->r4 = ADD32(0, 0X351);
    // 0x43002B28: jal         0x43000280
    // 0x43002B2C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    ovl_boss_angel_280(rdram, ctx);
        goto after_21;
    // 0x43002B2C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_21:
L_43002B30:
    // 0x43002B30: jal         0x4300A1D8
    // 0x43002B34: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_boss_angel_A1D8(rdram, ctx);
        goto after_22;
    // 0x43002B34: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_22:
    // 0x43002B38: lwc1        $f0, 0x54($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X54);
    // 0x43002B3C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x43002B40: lw          $a2, 0x58($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X58);
    // 0x43002B44: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x43002B48: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x43002B4C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x43002B50: jal         0x4300239C
    // 0x43002B54: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_boss_angel_239C(rdram, ctx);
        goto after_23;
    // 0x43002B54: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_23:
    // 0x43002B58: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x43002B5C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x43002B60: jal         0x43009198
    // 0x43002B64: addiu       $a2, $zero, 0x1A
    ctx->r6 = ADD32(0, 0X1A);
    ovl_boss_angel_9198(rdram, ctx);
        goto after_24;
    // 0x43002B64: addiu       $a2, $zero, 0x1A
    ctx->r6 = ADD32(0, 0X1A);
    after_24:
    // 0x43002B68: addiu       $a0, $zero, 0x351
    ctx->r4 = ADD32(0, 0X351);
    // 0x43002B6C: jal         0x43000280
    // 0x43002B70: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    ovl_boss_angel_280(rdram, ctx);
        goto after_25;
    // 0x43002B70: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_25:
    // 0x43002B74: jal         0x4300A1D8
    // 0x43002B78: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_boss_angel_A1D8(rdram, ctx);
        goto after_26;
    // 0x43002B78: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_26:
    // 0x43002B7C: lwc1        $f0, 0x54($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X54);
    // 0x43002B80: lw          $a2, 0x58($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X58);
    // 0x43002B84: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x43002B88: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x43002B8C: bc1f        L_43002BE0
    if (!c1cs) {
        // 0x43002B90: or          $a1, $s0, $zero
        ctx->r5 = ctx->r16 | 0;
            goto L_43002BE0;
    }
    // 0x43002B90: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x43002B94: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x43002B98: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x43002B9C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x43002BA0: jal         0x4300239C
    // 0x43002BA4: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    ovl_boss_angel_239C(rdram, ctx);
        goto after_27;
    // 0x43002BA4: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_27:
    // 0x43002BA8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x43002BAC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x43002BB0: jal         0x43009198
    // 0x43002BB4: addiu       $a2, $zero, 0x1A
    ctx->r6 = ADD32(0, 0X1A);
    ovl_boss_angel_9198(rdram, ctx);
        goto after_28;
    // 0x43002BB4: addiu       $a2, $zero, 0x1A
    ctx->r6 = ADD32(0, 0X1A);
    after_28:
    // 0x43002BB8: addiu       $a0, $zero, 0x351
    ctx->r4 = ADD32(0, 0X351);
    // 0x43002BBC: jal         0x43000280
    // 0x43002BC0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    ovl_boss_angel_280(rdram, ctx);
        goto after_29;
    // 0x43002BC0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_29:
    // 0x43002BC4: b           L_43002BE0
    // 0x43002BC8: nop

        goto L_43002BE0;
    // 0x43002BC8: nop

L_43002BCC:
    // 0x43002BCC: jal         0x43009198
    // 0x43002BD0: addiu       $a2, $zero, 0x1A
    ctx->r6 = ADD32(0, 0X1A);
    ovl_boss_angel_9198(rdram, ctx);
        goto after_30;
    // 0x43002BD0: addiu       $a2, $zero, 0x1A
    ctx->r6 = ADD32(0, 0X1A);
    after_30:
    // 0x43002BD4: addiu       $a0, $zero, 0x351
    ctx->r4 = ADD32(0, 0X351);
    // 0x43002BD8: jal         0x43000280
    // 0x43002BDC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_boss_angel_280(rdram, ctx);
        goto after_31;
    // 0x43002BDC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_31:
L_43002BE0:
    // 0x43002BE0: jal         0x4300A1D8
    // 0x43002BE4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    ovl_boss_angel_A1D8(rdram, ctx);
        goto after_32;
    // 0x43002BE4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_32:
    // 0x43002BE8: lw          $t2, 0x0($s4)
    ctx->r10 = MEM_W(ctx->r20, 0X0);
    // 0x43002BEC: lui         $t9, 0x4301
    ctx->r25 = S32(0X4301 << 16);
    // 0x43002BF0: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x43002BF4: addu        $t9, $t9, $t3
    ctx->r25 = ADD32(ctx->r25, ctx->r11);
    // 0x43002BF8: lw          $t9, -0x4704($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X4704);
    // 0x43002BFC: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x43002C00: slt         $at, $s3, $t9
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x43002C04: bne         $at, $zero, L_43002A84
    if (ctx->r1 != 0) {
        // 0x43002C08: nop
    
            goto L_43002A84;
    }
    // 0x43002C08: nop

L_43002C0C:
    // 0x43002C0C: jal         0x4300A1D8
    // 0x43002C10: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    ovl_boss_angel_A1D8(rdram, ctx);
        goto after_33;
    // 0x43002C10: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_33:
    // 0x43002C14: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x43002C18: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x43002C1C: lw          $t9, 0xA4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XA4);
    // 0x43002C20: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x43002C24: jalr        $t9
    // 0x43002C28: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_34;
    // 0x43002C28: nop

    after_34:
    // 0x43002C2C: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x43002C30: nop

    // 0x43002C34: lw          $t9, 0xBC($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XBC);
    // 0x43002C38: nop

    // 0x43002C3C: jalr        $t9
    // 0x43002C40: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_35;
    // 0x43002C40: nop

    after_35:
    // 0x43002C44: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x43002C48: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x43002C4C: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x43002C50: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x43002C54: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x43002C58: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x43002C5C: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x43002C60: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x43002C64: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    // 0x43002C68: jr          $ra
    // 0x43002C6C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    return;
    // 0x43002C6C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
;}
RECOMP_FUNC void ovl_boss_angel_2C70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43002C70: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x43002C74: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x43002C78: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x43002C7C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x43002C80: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x43002C84: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x43002C88: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x43002C8C: jal         0x43001BDC
    // 0x43002C90: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_boss_angel_1BDC(rdram, ctx);
        goto after_0;
    // 0x43002C90: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x43002C94: lui         $s0, 0x4301
    ctx->r16 = S32(0X4301 << 16);
    // 0x43002C98: addiu       $s0, $s0, -0x3CDC
    ctx->r16 = ADD32(ctx->r16, -0X3CDC);
    // 0x43002C9C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x43002CA0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x43002CA4: lw          $t9, 0xA4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XA4);
    // 0x43002CA8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x43002CAC: jalr        $t9
    // 0x43002CB0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x43002CB0: nop

    after_1:
    // 0x43002CB4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x43002CB8: jal         0x43002144
    // 0x43002CBC: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    ovl_boss_angel_2144(rdram, ctx);
        goto after_2;
    // 0x43002CBC: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    after_2:
    // 0x43002CC0: jal         0x43004774
    // 0x43002CC4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    ovl_boss_angel_4774(rdram, ctx);
        goto after_3;
    // 0x43002CC4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_3:
    // 0x43002CC8: lui         $s3, 0x4301
    ctx->r19 = S32(0X4301 << 16);
    // 0x43002CCC: addiu       $s3, $s3, -0x4008
    ctx->r19 = ADD32(ctx->r19, -0X4008);
    // 0x43002CD0: lw          $a0, 0x58($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X58);
L_43002CD4:
    // 0x43002CD4: nop

    // 0x43002CD8: lw          $t9, 0x8C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8C);
    // 0x43002CDC: nop

    // 0x43002CE0: jalr        $t9
    // 0x43002CE4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x43002CE4: nop

    after_4:
    // 0x43002CE8: beq         $v0, $zero, L_43002D1C
    if (ctx->r2 == 0) {
        // 0x43002CEC: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_43002D1C;
    }
    // 0x43002CEC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x43002CF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x43002CF4: jal         0x43001DEC
    // 0x43002CF8: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    ovl_boss_angel_1DEC(rdram, ctx);
        goto after_5;
    // 0x43002CF8: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_5:
    // 0x43002CFC: lw          $t9, 0x9C($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X9C);
    // 0x43002D00: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x43002D04: jalr        $t9
    // 0x43002D08: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x43002D08: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_6:
    // 0x43002D0C: jal         0x4300A1D8
    // 0x43002D10: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_boss_angel_A1D8(rdram, ctx);
        goto after_7;
    // 0x43002D10: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_7:
    // 0x43002D14: b           L_43002CD4
    // 0x43002D18: lw          $a0, 0x58($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X58);
        goto L_43002CD4;
    // 0x43002D18: lw          $a0, 0x58($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X58);
L_43002D1C:
    // 0x43002D1C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x43002D20: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x43002D24: lw          $t9, 0xA4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XA4);
    // 0x43002D28: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x43002D2C: jalr        $t9
    // 0x43002D30: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x43002D30: nop

    after_8:
    // 0x43002D34: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43002D38: lwc1        $f4, -0x4248($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X4248);
    // 0x43002D3C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x43002D40: swc1        $f4, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->f4.u32l;
    // 0x43002D44: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_43002D48:
    // 0x43002D48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x43002D4C: jal         0x43001DEC
    // 0x43002D50: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    ovl_boss_angel_1DEC(rdram, ctx);
        goto after_9;
    // 0x43002D50: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_9:
    // 0x43002D54: lw          $t9, 0x9C($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X9C);
    // 0x43002D58: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x43002D5C: jalr        $t9
    // 0x43002D60: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x43002D60: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_10:
    // 0x43002D64: jal         0x4300A1D8
    // 0x43002D68: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_boss_angel_A1D8(rdram, ctx);
        goto after_11;
    // 0x43002D68: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_11:
    // 0x43002D6C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x43002D70: slti        $at, $s0, 0x7
    ctx->r1 = SIGNED(ctx->r16) < 0X7 ? 1 : 0;
    // 0x43002D74: bne         $at, $zero, L_43002D48
    if (ctx->r1 != 0) {
        // 0x43002D78: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_43002D48;
    }
    // 0x43002D78: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x43002D7C: lw          $at, 0x0($s1)
    ctx->r1 = MEM_W(ctx->r17, 0X0);
    // 0x43002D80: addiu       $s0, $sp, 0x3C
    ctx->r16 = ADD32(ctx->r29, 0X3C);
    // 0x43002D84: sw          $at, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r1;
    // 0x43002D88: lw          $t7, 0x4($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X4);
    // 0x43002D8C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x43002D90: sw          $t7, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r15;
    // 0x43002D94: lw          $at, 0x8($s1)
    ctx->r1 = MEM_W(ctx->r17, 0X8);
    // 0x43002D98: lui         $a2, 0x4301
    ctx->r6 = S32(0X4301 << 16);
    // 0x43002D9C: sw          $at, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r1;
    // 0x43002DA0: swc1        $f6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f6.u32l;
    // 0x43002DA4: lw          $a1, 0xC($s1)
    ctx->r5 = MEM_W(ctx->r17, 0XC);
    // 0x43002DA8: addiu       $a2, $a2, -0x46B8
    ctx->r6 = ADD32(ctx->r6, -0X46B8);
    // 0x43002DAC: jal         0x43007A14
    // 0x43002DB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_boss_angel_7A14(rdram, ctx);
        goto after_12;
    // 0x43002DB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x43002DB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43002DB8: addiu       $a1, $zero, 0xA36
    ctx->r5 = ADD32(0, 0XA36);
    // 0x43002DBC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x43002DC0: jal         0x43008000
    // 0x43002DC4: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    ovl_boss_angel_8000(rdram, ctx);
        goto after_13;
    // 0x43002DC4: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    after_13:
    // 0x43002DC8: addiu       $a0, $zero, 0x33B
    ctx->r4 = ADD32(0, 0X33B);
    // 0x43002DCC: jal         0x43000280
    // 0x43002DD0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    ovl_boss_angel_280(rdram, ctx);
        goto after_14;
    // 0x43002DD0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_14:
    // 0x43002DD4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x43002DD8: addiu       $a1, $zero, 0x42
    ctx->r5 = ADD32(0, 0X42);
    // 0x43002DDC: jal         0x43000CA0
    // 0x43002DE0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_boss_angel_CA0(rdram, ctx);
        goto after_15;
    // 0x43002DE0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_15:
    // 0x43002DE4: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43002DE8: lwc1        $f8, -0x4244($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X4244);
    // 0x43002DEC: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43002DF0: swc1        $f8, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->f8.u32l;
    // 0x43002DF4: sw          $zero, -0x3CBC($at)
    MEM_W(-0X3CBC, ctx->r1) = 0;
    // 0x43002DF8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x43002DFC: addiu       $s2, $zero, 0x15
    ctx->r18 = ADD32(0, 0X15);
    // 0x43002E00: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_43002E04:
    // 0x43002E04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x43002E08: jal         0x43001DEC
    // 0x43002E0C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    ovl_boss_angel_1DEC(rdram, ctx);
        goto after_16;
    // 0x43002E0C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_16:
    // 0x43002E10: lw          $t9, 0x9C($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X9C);
    // 0x43002E14: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x43002E18: jalr        $t9
    // 0x43002E1C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_17;
    // 0x43002E1C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_17:
    // 0x43002E20: jal         0x4300A1D8
    // 0x43002E24: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_boss_angel_A1D8(rdram, ctx);
        goto after_18;
    // 0x43002E24: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_18:
    // 0x43002E28: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x43002E2C: bne         $s0, $s2, L_43002E04
    if (ctx->r16 != ctx->r18) {
        // 0x43002E30: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_43002E04;
    }
    // 0x43002E30: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x43002E34: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43002E38: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x43002E3C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x43002E40: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x43002E44: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x43002E48: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x43002E4C: jr          $ra
    // 0x43002E50: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    return;
    // 0x43002E50: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
;}
RECOMP_FUNC void ovl_boss_angel_2E54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43002E54: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x43002E58: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x43002E5C: sw          $fp, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r30;
    // 0x43002E60: sw          $s7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r23;
    // 0x43002E64: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x43002E68: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x43002E6C: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x43002E70: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x43002E74: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x43002E78: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x43002E7C: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x43002E80: swc1        $f31, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x43002E84: swc1        $f30, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f30.u32l;
    // 0x43002E88: swc1        $f29, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x43002E8C: swc1        $f28, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f28.u32l;
    // 0x43002E90: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x43002E94: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x43002E98: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x43002E9C: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x43002EA0: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x43002EA4: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x43002EA8: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x43002EAC: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x43002EB0: lw          $t6, 0x58($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X58);
    // 0x43002EB4: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x43002EB8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x43002EBC: jal         0x43001BDC
    // 0x43002EC0: sw          $t6, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r14;
    ovl_boss_angel_1BDC(rdram, ctx);
        goto after_0;
    // 0x43002EC0: sw          $t6, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r14;
    after_0:
    // 0x43002EC4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x43002EC8: jal         0x43002144
    // 0x43002ECC: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    ovl_boss_angel_2144(rdram, ctx);
        goto after_1;
    // 0x43002ECC: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    after_1:
    // 0x43002ED0: jal         0x43004774
    // 0x43002ED4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    ovl_boss_angel_4774(rdram, ctx);
        goto after_2;
    // 0x43002ED4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_2:
    // 0x43002ED8: lui         $s7, 0x4301
    ctx->r23 = S32(0X4301 << 16);
    // 0x43002EDC: addiu       $s7, $s7, -0x4130
    ctx->r23 = ADD32(ctx->r23, -0X4130);
    // 0x43002EE0: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x43002EE4: jal         0x4300A3F8
    // 0x43002EE8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    ovl_boss_angel_A3F8(rdram, ctx);
        goto after_3;
    // 0x43002EE8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_3:
    // 0x43002EEC: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43002EF0: lwc1        $f4, -0x4240($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X4240);
    // 0x43002EF4: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x43002EF8: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x43002EFC: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x43002F00: bc1f        L_43002F10
    if (!c1cs) {
        // 0x43002F04: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_43002F10;
    }
    // 0x43002F04: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x43002F08: b           L_43002F14
    // 0x43002F0C: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
        goto L_43002F14;
    // 0x43002F0C: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
L_43002F10:
    // 0x43002F10: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
L_43002F14:
    // 0x43002F14: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x43002F18: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x43002F1C: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43002F20: lwc1        $f26, -0x423C($at)
    ctx->f26.u32l = MEM_W(ctx->r1, -0X423C);
    // 0x43002F24: lui         $at, 0x43B9
    ctx->r1 = S32(0X43B9 << 16);
    // 0x43002F28: lui         $s6, 0x4301
    ctx->r22 = S32(0X4301 << 16);
    // 0x43002F2C: lui         $s5, 0x4301
    ctx->r21 = S32(0X4301 << 16);
    // 0x43002F30: lui         $s3, 0x4301
    ctx->r19 = S32(0X4301 << 16);
    // 0x43002F34: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x43002F38: addiu       $s3, $s3, -0x3CDC
    ctx->r19 = ADD32(ctx->r19, -0X3CDC);
    // 0x43002F3C: addiu       $s5, $s5, -0x4008
    ctx->r21 = ADD32(ctx->r21, -0X4008);
    // 0x43002F40: addiu       $s6, $s6, -0x47F0
    ctx->r22 = ADD32(ctx->r22, -0X47F0);
    // 0x43002F44: sw          $zero, 0x88($sp)
    MEM_W(0X88, ctx->r29) = 0;
    // 0x43002F48: addiu       $fp, $sp, 0x74
    ctx->r30 = ADD32(ctx->r29, 0X74);
L_43002F4C:
    // 0x43002F4C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x43002F50: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x43002F54: jal         0x43001E0C
    // 0x43002F58: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_boss_angel_1E0C(rdram, ctx);
        goto after_4;
    // 0x43002F58: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x43002F5C: lw          $a0, 0x9C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X9C);
    // 0x43002F60: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x43002F64: lw          $t9, 0xA4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XA4);
    // 0x43002F68: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x43002F6C: jalr        $t9
    // 0x43002F70: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x43002F70: nop

    after_5:
    // 0x43002F74: lw          $a0, 0x9C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X9C);
    // 0x43002F78: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x43002F7C: lw          $t9, 0x98($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X98);
    // 0x43002F80: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x43002F84: jalr        $t9
    // 0x43002F88: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x43002F88: nop

    after_6:
    // 0x43002F8C: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x43002F90: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x43002F94: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43002F98: swc1        $f6, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->f6.u32l;
    // 0x43002F9C: lwc1        $f8, -0x4238($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X4238);
    // 0x43002FA0: lw          $at, 0x0($s1)
    ctx->r1 = MEM_W(ctx->r17, 0X0);
    // 0x43002FA4: addiu       $t7, $sp, 0x90
    ctx->r15 = ADD32(ctx->r29, 0X90);
    // 0x43002FA8: swc1        $f8, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->f8.u32l;
    // 0x43002FAC: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x43002FB0: lw          $t0, 0x4($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X4);
    // 0x43002FB4: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x43002FB8: sw          $t0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r8;
    // 0x43002FBC: lw          $at, 0x8($s1)
    ctx->r1 = MEM_W(ctx->r17, 0X8);
    // 0x43002FC0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x43002FC4: jal         0x4300A3F8
    // 0x43002FC8: sw          $at, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r1;
    ovl_boss_angel_A3F8(rdram, ctx);
        goto after_7;
    // 0x43002FC8: sw          $at, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r1;
    after_7:
    // 0x43002FCC: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x43002FD0: addiu       $a0, $zero, 0x335
    ctx->r4 = ADD32(0, 0X335);
    // 0x43002FD4: jal         0x43000280
    // 0x43002FD8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    ovl_boss_angel_280(rdram, ctx);
        goto after_8;
    // 0x43002FD8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_8:
    // 0x43002FDC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x43002FE0: nop

    // 0x43002FE4: swc1        $f10, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f10.u32l;
    // 0x43002FE8: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
L_43002FEC:
    // 0x43002FEC: jal         0x4300A3F8
    // 0x43002FF0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    ovl_boss_angel_A3F8(rdram, ctx);
        goto after_9;
    // 0x43002FF0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_9:
    // 0x43002FF4: c.eq.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl == ctx->f22.fl;
    // 0x43002FF8: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43002FFC: bc1t        L_43003010
    if (c1cs) {
        // 0x43003000: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_43003010;
    }
    // 0x43003000: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x43003004: beq         $s4, $zero, L_43003010
    if (ctx->r20 == 0) {
        // 0x43003008: nop
    
            goto L_43003010;
    }
    // 0x43003008: nop

    // 0x4300300C: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
L_43003010:
    // 0x43003010: lwc1        $f16, -0x4234($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X4234);
    // 0x43003014: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    // 0x43003018: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x4300301C: nop

    // 0x43003020: bc1f        L_43003038
    if (!c1cs) {
        // 0x43003024: nop
    
            goto L_43003038;
    }
    // 0x43003024: nop

    // 0x43003028: bne         $s4, $zero, L_43003038
    if (ctx->r20 != 0) {
        // 0x4300302C: nop
    
            goto L_43003038;
    }
    // 0x4300302C: nop

    // 0x43003030: b           L_43003170
    // 0x43003034: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
        goto L_43003170;
    // 0x43003034: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_43003038:
    // 0x43003038: jal         0x43001DEC
    // 0x4300303C: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    ovl_boss_angel_1DEC(rdram, ctx);
        goto after_10;
    // 0x4300303C: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    after_10:
    // 0x43003040: bne         $s2, $zero, L_43003104
    if (ctx->r18 != 0) {
        // 0x43003044: mov.s       $f20, $f0
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
            goto L_43003104;
    }
    // 0x43003044: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x43003048: lwc1        $f18, 0x74($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X74);
    // 0x4300304C: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43003050: c.lt.s      $f18, $f24
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f18.fl < ctx->f24.fl;
    // 0x43003054: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x43003058: bc1f        L_43003104
    if (!c1cs) {
        // 0x4300305C: nop
    
            goto L_43003104;
    }
    // 0x4300305C: nop

    // 0x43003060: swc1        $f26, -0x3CD4($at)
    MEM_W(-0X3CD4, ctx->r1) = ctx->f26.u32l;
    // 0x43003064: lw          $s0, 0x0($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X0);
    // 0x43003068: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x4300306C: lw          $t9, 0xA4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XA4);
    // 0x43003070: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x43003074: jalr        $t9
    // 0x43003078: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x43003078: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x4300307C: lw          $s0, 0x0($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X0);
    // 0x43003080: mfc1        $a1, $f28
    ctx->r5 = (int32_t)ctx->f28.u32l;
    // 0x43003084: lw          $t9, 0x84($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X84);
    // 0x43003088: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4300308C: jalr        $t9
    // 0x43003090: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x43003090: nop

    after_12:
    // 0x43003094: lw          $t9, 0x6C($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X6C);
    // 0x43003098: mfc1        $a3, $f30
    ctx->r7 = (int32_t)ctx->f30.u32l;
    // 0x4300309C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x430030A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x430030A4: jalr        $t9
    // 0x430030A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x430030A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_13:
    // 0x430030AC: lw          $t9, 0x80($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X80);
    // 0x430030B0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x430030B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x430030B8: jalr        $t9
    // 0x430030BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x430030BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_14:
    // 0x430030C0: lw          $t1, 0x0($s6)
    ctx->r9 = MEM_W(ctx->r22, 0X0);
    // 0x430030C4: nop

    // 0x430030C8: lw          $v0, 0x40($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X40);
    // 0x430030CC: nop

    // 0x430030D0: sw          $zero, 0x28($v0)
    MEM_W(0X28, ctx->r2) = 0;
    // 0x430030D4: lw          $s0, 0x0($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X0);
    // 0x430030D8: nop

    // 0x430030DC: lw          $t9, 0x9C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X9C);
    // 0x430030E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430030E4: jalr        $t9
    // 0x430030E8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_15;
    // 0x430030E8: nop

    after_15:
    // 0x430030EC: lwc1        $f4, 0x18($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X18);
    // 0x430030F0: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430030F4: lwc1        $f8, -0x4230($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X4230);
    // 0x430030F8: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x430030FC: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x43003100: swc1        $f10, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f10.u32l;
L_43003104:
    // 0x43003104: beq         $s2, $zero, L_43003140
    if (ctx->r18 == 0) {
        // 0x43003108: addiu       $at, $zero, 0xE
        ctx->r1 = ADD32(0, 0XE);
            goto L_43003140;
    }
    // 0x43003108: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x4300310C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x43003110: bne         $s2, $at, L_43003120
    if (ctx->r18 != ctx->r1) {
        // 0x43003114: addiu       $a0, $zero, 0x359
        ctx->r4 = ADD32(0, 0X359);
            goto L_43003120;
    }
    // 0x43003114: addiu       $a0, $zero, 0x359
    ctx->r4 = ADD32(0, 0X359);
    // 0x43003118: jal         0x43000280
    // 0x4300311C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    ovl_boss_angel_280(rdram, ctx);
        goto after_16;
    // 0x4300311C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_16:
L_43003120:
    // 0x43003120: lw          $s0, 0x0($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X0);
    // 0x43003124: nop

    // 0x43003128: lw          $t9, 0x8C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X8C);
    // 0x4300312C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43003130: jalr        $t9
    // 0x43003134: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_17;
    // 0x43003134: nop

    after_17:
    // 0x43003138: beq         $v0, $zero, L_43003170
    if (ctx->r2 == 0) {
        // 0x4300313C: nop
    
            goto L_43003170;
    }
    // 0x4300313C: nop

L_43003140:
    // 0x43003140: lw          $t9, 0x9C($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X9C);
    // 0x43003144: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x43003148: jalr        $t9
    // 0x4300314C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_18;
    // 0x4300314C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_18:
    // 0x43003150: lw          $t9, 0xA8($s1)
    ctx->r25 = MEM_W(ctx->r17, 0XA8);
    // 0x43003154: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x43003158: jalr        $t9
    // 0x4300315C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_19;
    // 0x4300315C: nop

    after_19:
    // 0x43003160: jal         0x4300A1D8
    // 0x43003164: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_boss_angel_A1D8(rdram, ctx);
        goto after_20;
    // 0x43003164: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_20:
    // 0x43003168: b           L_43002FEC
    // 0x4300316C: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
        goto L_43002FEC;
    // 0x4300316C: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
L_43003170:
    // 0x43003170: bne         $s2, $zero, L_430031B8
    if (ctx->r18 != 0) {
        // 0x43003174: nop
    
            goto L_430031B8;
    }
    // 0x43003174: nop

    // 0x43003178: lw          $a0, 0x9C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X9C);
    // 0x4300317C: nop

    // 0x43003180: lw          $t9, 0x9C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X9C);
    // 0x43003184: nop

    // 0x43003188: jalr        $t9
    // 0x4300318C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_21;
    // 0x4300318C: nop

    after_21:
    // 0x43003190: lw          $a0, 0x9C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X9C);
    // 0x43003194: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x43003198: lw          $t9, 0xA4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XA4);
    // 0x4300319C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x430031A0: jalr        $t9
    // 0x430031A4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_22;
    // 0x430031A4: nop

    after_22:
    // 0x430031A8: jal         0x430022EC
    // 0x430031AC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_boss_angel_22EC(rdram, ctx);
        goto after_23;
    // 0x430031AC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_23:
    // 0x430031B0: b           L_430031FC
    // 0x430031B4: lw          $v0, 0x88($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X88);
        goto L_430031FC;
    // 0x430031B4: lw          $v0, 0x88($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X88);
L_430031B8:
    // 0x430031B8: lw          $s0, 0x0($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X0);
    // 0x430031BC: nop

    // 0x430031C0: lw          $t9, 0xBC($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XBC);
    // 0x430031C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430031C8: jalr        $t9
    // 0x430031CC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_24;
    // 0x430031CC: nop

    after_24:
    // 0x430031D0: lw          $t3, 0x0($s6)
    ctx->r11 = MEM_W(ctx->r22, 0X0);
    // 0x430031D4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x430031D8: lw          $t9, 0x70($t3)
    ctx->r25 = MEM_W(ctx->r11, 0X70);
    // 0x430031DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x430031E0: jalr        $t9
    // 0x430031E4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_25;
    // 0x430031E4: nop

    after_25:
    // 0x430031E8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x430031EC: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430031F0: b           L_4300320C
    // 0x430031F4: swc1        $f16, -0x3CD4($at)
    MEM_W(-0X3CD4, ctx->r1) = ctx->f16.u32l;
        goto L_4300320C;
    // 0x430031F4: swc1        $f16, -0x3CD4($at)
    MEM_W(-0X3CD4, ctx->r1) = ctx->f16.u32l;
    // 0x430031F8: lw          $v0, 0x88($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X88);
L_430031FC:
    // 0x430031FC: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x43003200: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x43003204: bne         $v0, $at, L_43002F4C
    if (ctx->r2 != ctx->r1) {
        // 0x43003208: sw          $v0, 0x88($sp)
        MEM_W(0X88, ctx->r29) = ctx->r2;
            goto L_43002F4C;
    }
    // 0x43003208: sw          $v0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r2;
L_4300320C:
    // 0x4300320C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x43003210: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x43003214: swc1        $f18, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f18.u32l;
    // 0x43003218: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x4300321C: lw          $fp, 0x68($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X68);
    // 0x43003220: lw          $s7, 0x64($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X64);
    // 0x43003224: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x43003228: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x4300322C: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x43003230: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x43003234: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x43003238: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x4300323C: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x43003240: lwc1        $f30, 0x44($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X44);
    // 0x43003244: lwc1        $f31, 0x40($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x43003248: lwc1        $f28, 0x3C($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x4300324C: lwc1        $f29, 0x38($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x43003250: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x43003254: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x43003258: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x4300325C: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x43003260: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x43003264: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x43003268: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x4300326C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x43003270: jr          $ra
    // 0x43003274: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    // 0x43003274: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void ovl_boss_angel_3278(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43003278: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x4300327C: sw          $ra, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r31;
    // 0x43003280: sw          $s7, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r23;
    // 0x43003284: or          $s7, $a0, $zero
    ctx->r23 = ctx->r4 | 0;
    // 0x43003288: sw          $fp, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r30;
    // 0x4300328C: sw          $s6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r22;
    // 0x43003290: sw          $s5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r21;
    // 0x43003294: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x43003298: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x4300329C: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x430032A0: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x430032A4: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x430032A8: swc1        $f31, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x430032AC: swc1        $f30, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f30.u32l;
    // 0x430032B0: swc1        $f29, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x430032B4: swc1        $f28, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f28.u32l;
    // 0x430032B8: swc1        $f27, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x430032BC: swc1        $f26, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f26.u32l;
    // 0x430032C0: swc1        $f25, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x430032C4: swc1        $f24, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f24.u32l;
    // 0x430032C8: swc1        $f23, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x430032CC: swc1        $f22, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f22.u32l;
    // 0x430032D0: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x430032D4: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x430032D8: jal         0x43001BDC
    // 0x430032DC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_boss_angel_1BDC(rdram, ctx);
        goto after_0;
    // 0x430032DC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x430032E0: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x430032E4: jal         0x43002144
    // 0x430032E8: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    ovl_boss_angel_2144(rdram, ctx);
        goto after_1;
    // 0x430032E8: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    after_1:
    // 0x430032EC: lui         $s2, 0x4301
    ctx->r18 = S32(0X4301 << 16);
    // 0x430032F0: addiu       $s2, $s2, -0x4008
    ctx->r18 = ADD32(ctx->r18, -0X4008);
    // 0x430032F4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x430032F8: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x430032FC: jal         0x43001E0C
    // 0x43003300: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_boss_angel_1E0C(rdram, ctx);
        goto after_2;
    // 0x43003300: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x43003304: jal         0x43004774
    // 0x43003308: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    ovl_boss_angel_4774(rdram, ctx);
        goto after_3;
    // 0x43003308: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_3:
    // 0x4300330C: lui         $fp, 0x4301
    ctx->r30 = S32(0X4301 << 16);
    // 0x43003310: addiu       $fp, $fp, -0x3CDC
    ctx->r30 = ADD32(ctx->r30, -0X3CDC);
    // 0x43003314: lw          $a0, 0x0($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X0);
    // 0x43003318: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x4300331C: lw          $t9, 0xA4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XA4);
    // 0x43003320: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x43003324: jalr        $t9
    // 0x43003328: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x43003328: nop

    after_4:
    // 0x4300332C: lui         $t6, 0x4301
    ctx->r14 = S32(0X4301 << 16);
    // 0x43003330: lw          $t6, -0x3CC4($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3CC4);
    // 0x43003334: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x43003338: bltz        $t6, L_43003530
    if (SIGNED(ctx->r14) < 0) {
        // 0x4300333C: lui         $at, 0x4301
        ctx->r1 = S32(0X4301 << 16);
            goto L_43003530;
    }
    // 0x4300333C: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43003340: lwc1        $f28, -0x422C($at)
    ctx->f28.u32l = MEM_W(ctx->r1, -0X422C);
    // 0x43003344: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43003348: lwc1        $f27, -0x4228($at)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r1, -0X4228);
    // 0x4300334C: lwc1        $f26, -0x4224($at)
    ctx->f26.u32l = MEM_W(ctx->r1, -0X4224);
    // 0x43003350: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43003354: lui         $s4, 0x4301
    ctx->r20 = S32(0X4301 << 16);
    // 0x43003358: lwc1        $f25, -0x4220($at)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r1, -0X4220);
    // 0x4300335C: lwc1        $f24, -0x421C($at)
    ctx->f24.u32l = MEM_W(ctx->r1, -0X421C);
    // 0x43003360: mtc1        $zero, $f30
    ctx->f30.u32l = 0;
    // 0x43003364: addiu       $s4, $s4, -0x4130
    ctx->r20 = ADD32(ctx->r20, -0X4130);
    // 0x43003368: addiu       $s5, $zero, 0xA
    ctx->r21 = ADD32(0, 0XA);
    // 0x4300336C: addiu       $s3, $sp, 0x84
    ctx->r19 = ADD32(ctx->r29, 0X84);
    // 0x43003370: addiu       $s1, $sp, 0x94
    ctx->r17 = ADD32(ctx->r29, 0X94);
L_43003374:
    // 0x43003374: beq         $s6, $zero, L_430033A4
    if (ctx->r22 == 0) {
        // 0x43003378: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_430033A4;
    }
    // 0x43003378: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x4300337C: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x43003380: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x43003384: jal         0x43001E0C
    // 0x43003388: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_boss_angel_1E0C(rdram, ctx);
        goto after_5;
    // 0x43003388: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x4300338C: lw          $a0, 0x0($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X0);
    // 0x43003390: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x43003394: lw          $t9, 0xA4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XA4);
    // 0x43003398: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x4300339C: jalr        $t9
    // 0x430033A0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x430033A0: nop

    after_6:
L_430033A4:
    // 0x430033A4: jal         0x4300A1D8
    // 0x430033A8: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_boss_angel_A1D8(rdram, ctx);
        goto after_7;
    // 0x430033A8: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_7:
    // 0x430033AC: lw          $at, 0x0($s7)
    ctx->r1 = MEM_W(ctx->r23, 0X0);
    // 0x430033B0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x430033B4: sw          $at, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r1;
    // 0x430033B8: lw          $t8, 0x4($s7)
    ctx->r24 = MEM_W(ctx->r23, 0X4);
    // 0x430033BC: addiu       $a1, $sp, 0x90
    ctx->r5 = ADD32(ctx->r29, 0X90);
    // 0x430033C0: sw          $t8, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r24;
    // 0x430033C4: lw          $at, 0x8($s7)
    ctx->r1 = MEM_W(ctx->r23, 0X8);
    // 0x430033C8: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x430033CC: jal         0x43001D64
    // 0x430033D0: sw          $at, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r1;
    ovl_boss_angel_1D64(rdram, ctx);
        goto after_8;
    // 0x430033D0: sw          $at, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r1;
    after_8:
    // 0x430033D4: lui         $at, 0x435C
    ctx->r1 = S32(0X435C << 16);
    // 0x430033D8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x430033DC: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430033E0: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x430033E4: sw          $zero, -0x3CBC($at)
    MEM_W(-0X3CBC, ctx->r1) = 0;
    // 0x430033E8: swc1        $f4, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f4.u32l;
    // 0x430033EC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_430033F0:
    // 0x430033F0: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x430033F4: jal         0x43001D64
    // 0x430033F8: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    ovl_boss_angel_1D64(rdram, ctx);
        goto after_9;
    // 0x430033F8: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_9:
    // 0x430033FC: slti        $at, $s0, 0x1E
    ctx->r1 = SIGNED(ctx->r16) < 0X1E ? 1 : 0;
    // 0x43003400: beq         $at, $zero, L_43003428
    if (ctx->r1 == 0) {
        // 0x43003404: lui         $at, 0x4301
        ctx->r1 = S32(0X4301 << 16);
            goto L_43003428;
    }
    // 0x43003404: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43003408: lwc1        $f6, -0x4218($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X4218);
    // 0x4300340C: mfc1        $a2, $f28
    ctx->r6 = (int32_t)ctx->f28.u32l;
    // 0x43003410: mfc1        $a3, $f30
    ctx->r7 = (int32_t)ctx->f30.u32l;
    // 0x43003414: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    // 0x43003418: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    // 0x4300341C: jal         0x4300A908
    // 0x43003420: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    ovl_boss_angel_A908(rdram, ctx);
        goto after_10;
    // 0x43003420: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_10:
    // 0x43003424: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
L_43003428:
    // 0x43003428: lwc1        $f8, 0x84($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X84);
    // 0x4300342C: nop

    // 0x43003430: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x43003434: mul.d       $f16, $f10, $f24
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f24.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f24.d);
    // 0x43003438: nop

    // 0x4300343C: mul.d       $f18, $f16, $f26
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f26.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f26.d);
    // 0x43003440: jal         0x4300A6C8
    // 0x43003444: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    ovl_boss_angel_A6C8(rdram, ctx);
        goto after_11;
    // 0x43003444: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_11:
    // 0x43003448: add.s       $f12, $f0, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f22.fl;
    // 0x4300344C: jal         0x4300B4B0
    // 0x43003450: mov.s       $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    ctx->f20.fl = ctx->f12.fl;
    ovl_boss_angel_B4B0(rdram, ctx);
        goto after_12;
    // 0x43003450: mov.s       $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    ctx->f20.fl = ctx->f12.fl;
    after_12:
    // 0x43003454: lwc1        $f6, 0x90($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X90);
    // 0x43003458: lwc1        $f4, 0x94($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X94);
    // 0x4300345C: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x43003460: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x43003464: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x43003468: jal         0x4300B670
    // 0x4300346C: swc1        $f10, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f10.u32l;
    ovl_boss_angel_B670(rdram, ctx);
        goto after_13;
    // 0x4300346C: swc1        $f10, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f10.u32l;
    after_13:
    // 0x43003470: lwc1        $f18, 0x90($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X90);
    // 0x43003474: lwc1        $f16, 0x9C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x43003478: mul.s       $f6, $f0, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x4300347C: addiu       $a0, $zero, 0x339
    ctx->r4 = ADD32(0, 0X339);
    // 0x43003480: add.s       $f4, $f16, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x43003484: bne         $s0, $zero, L_43003494
    if (ctx->r16 != 0) {
        // 0x43003488: swc1        $f4, 0x9C($sp)
        MEM_W(0X9C, ctx->r29) = ctx->f4.u32l;
            goto L_43003494;
    }
    // 0x43003488: swc1        $f4, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f4.u32l;
    // 0x4300348C: jal         0x43000280
    // 0x43003490: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    ovl_boss_angel_280(rdram, ctx);
        goto after_14;
    // 0x43003490: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_14:
L_43003494:
    // 0x43003494: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x43003498: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x4300349C: jal         0x4300A670
    // 0x430034A0: nop

    ovl_boss_angel_A670(rdram, ctx);
        goto after_15;
    // 0x430034A0: nop

    after_15:
    // 0x430034A4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x430034A8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x430034AC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x430034B0: add.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x430034B4: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x430034B8: jal         0x43008B3C
    // 0x430034BC: nop

    ovl_boss_angel_8B3C(rdram, ctx);
        goto after_16;
    // 0x430034BC: nop

    after_16:
    // 0x430034C0: jal         0x4300A1D8
    // 0x430034C4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_boss_angel_A1D8(rdram, ctx);
        goto after_17;
    // 0x430034C4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_17:
    // 0x430034C8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x430034CC: jal         0x4300A3F8
    // 0x430034D0: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    ovl_boss_angel_A3F8(rdram, ctx);
        goto after_18;
    // 0x430034D0: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_18:
    // 0x430034D4: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x430034D8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x430034DC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x430034E0: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x430034E4: nop

    // 0x430034E8: bc1t        L_430034F8
    if (c1cs) {
        // 0x430034EC: nop
    
            goto L_430034F8;
    }
    // 0x430034EC: nop

    // 0x430034F0: bne         $s0, $s5, L_430033F0
    if (ctx->r16 != ctx->r21) {
        // 0x430034F4: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_430033F0;
    }
    // 0x430034F4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_430034F8:
    // 0x430034F8: jal         0x430022EC
    // 0x430034FC: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    ovl_boss_angel_22EC(rdram, ctx);
        goto after_19;
    // 0x430034FC: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    after_19:
    // 0x43003500: lw          $a0, 0x0($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X0);
    // 0x43003504: nop

    // 0x43003508: lw          $t9, 0xBC($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XBC);
    // 0x4300350C: nop

    // 0x43003510: jalr        $t9
    // 0x43003514: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_20;
    // 0x43003514: nop

    after_20:
    // 0x43003518: lui         $t0, 0x4301
    ctx->r8 = S32(0X4301 << 16);
    // 0x4300351C: lw          $t0, -0x3CC4($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X3CC4);
    // 0x43003520: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x43003524: slt         $at, $t0, $s6
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r22) ? 1 : 0;
    // 0x43003528: beq         $at, $zero, L_43003374
    if (ctx->r1 == 0) {
        // 0x4300352C: nop
    
            goto L_43003374;
    }
    // 0x4300352C: nop

L_43003530:
    // 0x43003530: jal         0x4300A1D8
    // 0x43003534: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    ovl_boss_angel_A1D8(rdram, ctx);
        goto after_21;
    // 0x43003534: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_21:
    // 0x43003538: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    // 0x4300353C: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x43003540: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x43003544: lwc1        $f23, 0x28($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x43003548: lwc1        $f22, 0x2C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x4300354C: lwc1        $f25, 0x30($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x43003550: lwc1        $f24, 0x34($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X34);
    // 0x43003554: lwc1        $f27, 0x38($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x43003558: lwc1        $f26, 0x3C($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x4300355C: lwc1        $f29, 0x40($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x43003560: lwc1        $f28, 0x44($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X44);
    // 0x43003564: lwc1        $f31, 0x48($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X48);
    // 0x43003568: lwc1        $f30, 0x4C($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x4300356C: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x43003570: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x43003574: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x43003578: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x4300357C: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x43003580: lw          $s5, 0x64($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X64);
    // 0x43003584: lw          $s6, 0x68($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X68);
    // 0x43003588: lw          $s7, 0x6C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X6C);
    // 0x4300358C: lw          $fp, 0x70($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X70);
    // 0x43003590: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    // 0x43003594: jr          $ra
    // 0x43003598: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    return;
    // 0x43003598: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
;}
RECOMP_FUNC void ovl_boss_angel_359C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300359C: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x430035A0: addiu       $v0, $v0, -0x4008
    ctx->r2 = ADD32(ctx->r2, -0X4008);
    // 0x430035A4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x430035A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430035AC: lwc1        $f12, 0x0($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X0);
    // 0x430035B0: lwc1        $f14, 0x8($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X8);
    // 0x430035B4: jal         0x4300A504
    // 0x430035B8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    ovl_boss_angel_A504(rdram, ctx);
        goto after_0;
    // 0x430035B8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    after_0:
    // 0x430035BC: jal         0x4300A8B4
    // 0x430035C0: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    ovl_boss_angel_A8B4(rdram, ctx);
        goto after_1;
    // 0x430035C0: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_1:
    // 0x430035C4: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x430035C8: jal         0x4300B4B0
    // 0x430035CC: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    ovl_boss_angel_B4B0(rdram, ctx);
        goto after_2;
    // 0x430035CC: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_2:
    // 0x430035D0: lui         $at, 0x4089
    ctx->r1 = S32(0X4089 << 16);
    // 0x430035D4: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x430035D8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x430035DC: neg.s       $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = -ctx->f0.fl;
    // 0x430035E0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x430035E4: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x430035E8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x430035EC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x430035F0: lwc1        $f12, 0x2C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x430035F4: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    // 0x430035F8: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x430035FC: jal         0x4300B670
    // 0x43003600: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    ovl_boss_angel_B670(rdram, ctx);
        goto after_3;
    // 0x43003600: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    after_3:
    // 0x43003604: lui         $at, 0x4089
    ctx->r1 = S32(0X4089 << 16);
    // 0x43003608: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x4300360C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x43003610: neg.s       $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = -ctx->f0.fl;
    // 0x43003614: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x43003618: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x4300361C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x43003620: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x43003624: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x43003628: jal         0x43001F24
    // 0x4300362C: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
    ovl_boss_angel_1F24(rdram, ctx);
        goto after_4;
    // 0x4300362C: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
    after_4:
    // 0x43003630: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x43003634: lui         $a1, 0x4301
    ctx->r5 = S32(0X4301 << 16);
    // 0x43003638: addiu       $a1, $a1, -0x4008
    ctx->r5 = ADD32(ctx->r5, -0X4008);
    // 0x4300363C: jal         0x43001E0C
    // 0x43003640: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_boss_angel_1E0C(rdram, ctx);
        goto after_5;
    // 0x43003640: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x43003644: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43003648: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x4300364C: jr          $ra
    // 0x43003650: nop

    return;
    // 0x43003650: nop

;}
RECOMP_FUNC void ovl_boss_angel_3654(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43003654: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43003658: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4300365C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x43003660: jal         0x43000244
    // 0x43003664: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_boss_angel_244(rdram, ctx);
        goto after_0;
    // 0x43003664: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_0:
    // 0x43003668: lui         $t7, 0x4301
    ctx->r15 = S32(0X4301 << 16);
    // 0x4300366C: lw          $t7, -0x3FE8($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3FE8);
    // 0x43003670: lui         $t6, 0x4301
    ctx->r14 = S32(0X4301 << 16);
    // 0x43003674: addiu       $t6, $t6, -0x3FF8
    ctx->r14 = ADD32(ctx->r14, -0X3FF8);
    // 0x43003678: sw          $t6, 0x30($t7)
    MEM_W(0X30, ctx->r15) = ctx->r14;
    // 0x4300367C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43003680: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x43003684: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43003688: sw          $t8, -0x3C58($at)
    MEM_W(-0X3C58, ctx->r1) = ctx->r24;
    // 0x4300368C: jr          $ra
    // 0x43003690: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x43003690: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void ovl_boss_angel_3694(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43003694: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43003698: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4300369C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x430036A0: jal         0x43004774
    // 0x430036A4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_boss_angel_4774(rdram, ctx);
        goto after_0;
    // 0x430036A4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x430036A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430036AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x430036B0: jr          $ra
    // 0x430036B4: nop

    return;
    // 0x430036B4: nop

;}
RECOMP_FUNC void ovl_boss_angel_36B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430036B8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x430036BC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x430036C0: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x430036C4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x430036C8: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x430036CC: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x430036D0: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x430036D4: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x430036D8: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x430036DC: jal         0x43001BDC
    // 0x430036E0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    ovl_boss_angel_1BDC(rdram, ctx);
        goto after_0;
    // 0x430036E0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_0:
    // 0x430036E4: jal         0x4300359C
    // 0x430036E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_boss_angel_359C(rdram, ctx);
        goto after_1;
    // 0x430036E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x430036EC: jal         0x43004774
    // 0x430036F0: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    ovl_boss_angel_4774(rdram, ctx);
        goto after_2;
    // 0x430036F0: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_2:
    // 0x430036F4: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x430036F8: lw          $a0, -0x3CDC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3CDC);
    // 0x430036FC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x43003700: lw          $t9, 0xA4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XA4);
    // 0x43003704: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x43003708: jalr        $t9
    // 0x4300370C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x4300370C: nop

    after_3:
    // 0x43003710: lui         $s2, 0x4301
    ctx->r18 = S32(0X4301 << 16);
    // 0x43003714: addiu       $s2, $s2, -0x4008
    ctx->r18 = ADD32(ctx->r18, -0X4008);
    // 0x43003718: addiu       $s1, $sp, 0x34
    ctx->r17 = ADD32(ctx->r29, 0X34);
    // 0x4300371C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x43003720: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x43003724: jal         0x43001DEC
    // 0x43003728: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_boss_angel_1DEC(rdram, ctx);
        goto after_4;
    // 0x43003728: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x4300372C: lui         $s3, 0x4301
    ctx->r19 = S32(0X4301 << 16);
    // 0x43003730: addiu       $s3, $s3, -0x3C58
    ctx->r19 = ADD32(ctx->r19, -0X3C58);
    // 0x43003734: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x43003738: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x4300373C: sw          $zero, 0x0($s3)
    MEM_W(0X0, ctx->r19) = 0;
    // 0x43003740: addiu       $a0, $a0, -0x3FF8
    ctx->r4 = ADD32(ctx->r4, -0X3FF8);
    // 0x43003744: jal         0x4300985C
    // 0x43003748: lui         $a2, 0x4188
    ctx->r6 = S32(0X4188 << 16);
    ovl_boss_angel_985C(rdram, ctx);
        goto after_5;
    // 0x43003748: lui         $a2, 0x4188
    ctx->r6 = S32(0X4188 << 16);
    after_5:
    // 0x4300374C: lui         $t6, 0x4300
    ctx->r14 = S32(0X4300 << 16);
    // 0x43003750: lui         $t7, 0x4300
    ctx->r15 = S32(0X4300 << 16);
    // 0x43003754: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x43003758: addiu       $t6, $t6, 0x3654
    ctx->r14 = ADD32(ctx->r14, 0X3654);
    // 0x4300375C: addiu       $t7, $t7, 0x3694
    ctx->r15 = ADD32(ctx->r15, 0X3694);
    // 0x43003760: sw          $t6, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r14;
    // 0x43003764: sw          $t7, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r15;
    // 0x43003768: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    // 0x4300376C: jal         0x43000280
    // 0x43003770: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_boss_angel_280(rdram, ctx);
        goto after_6;
    // 0x43003770: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_6:
    // 0x43003774: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x43003778: lw          $a0, -0x3FE8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3FE8);
    // 0x4300377C: lui         $a1, 0x41A0
    ctx->r5 = S32(0X41A0 << 16);
    // 0x43003780: lw          $t9, 0x5C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X5C);
    // 0x43003784: addiu       $a2, $zero, 0x46
    ctx->r6 = ADD32(0, 0X46);
    // 0x43003788: jalr        $t9
    // 0x4300378C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x4300378C: nop

    after_7:
    // 0x43003790: lui         $t0, 0x4301
    ctx->r8 = S32(0X4301 << 16);
    // 0x43003794: lw          $t0, -0x3FE8($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X3FE8);
    // 0x43003798: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x4300379C: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x430037A0: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x430037A4: sw          $t8, 0x30($t0)
    MEM_W(0X30, ctx->r8) = ctx->r24;
    // 0x430037A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_430037AC:
    // 0x430037AC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x430037B0: jal         0x43001DEC
    // 0x430037B4: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    ovl_boss_angel_1DEC(rdram, ctx);
        goto after_8;
    // 0x430037B4: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_8:
    // 0x430037B8: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x430037BC: nop

    // 0x430037C0: c.lt.s      $f4, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f4.fl < ctx->f20.fl;
    // 0x430037C4: nop

    // 0x430037C8: bc1f        L_430037D8
    if (!c1cs) {
        // 0x430037CC: nop
    
            goto L_430037D8;
    }
    // 0x430037CC: nop

    // 0x430037D0: jal         0x4300359C
    // 0x430037D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_boss_angel_359C(rdram, ctx);
        goto after_9;
    // 0x430037D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
L_430037D8:
    // 0x430037D8: lw          $t1, 0x0($s3)
    ctx->r9 = MEM_W(ctx->r19, 0X0);
    // 0x430037DC: nop

    // 0x430037E0: bne         $t1, $zero, L_430037F8
    if (ctx->r9 != 0) {
        // 0x430037E4: nop
    
            goto L_430037F8;
    }
    // 0x430037E4: nop

    // 0x430037E8: jal         0x4300A1D8
    // 0x430037EC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_boss_angel_A1D8(rdram, ctx);
        goto after_10;
    // 0x430037EC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_10:
    // 0x430037F0: b           L_430037AC
    // 0x430037F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_430037AC;
    // 0x430037F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_430037F8:
    // 0x430037F8: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x430037FC: lw          $a0, -0x3CDC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3CDC);
    // 0x43003800: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x43003804: lw          $t9, 0xA4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XA4);
    // 0x43003808: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x4300380C: jalr        $t9
    // 0x43003810: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x43003810: nop

    after_11:
    // 0x43003814: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x43003818: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x4300381C: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x43003820: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x43003824: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x43003828: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x4300382C: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x43003830: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x43003834: jr          $ra
    // 0x43003838: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    return;
    // 0x43003838: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
;}
RECOMP_FUNC void ovl_boss_angel_383C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300383C: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x43003840: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x43003844: sw          $s1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r17;
    // 0x43003848: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x4300384C: sw          $s3, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r19;
    // 0x43003850: sw          $s2, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r18;
    // 0x43003854: sw          $s0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r16;
    // 0x43003858: swc1        $f31, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x4300385C: swc1        $f30, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f30.u32l;
    // 0x43003860: swc1        $f29, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x43003864: swc1        $f28, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f28.u32l;
    // 0x43003868: swc1        $f27, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x4300386C: swc1        $f26, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f26.u32l;
    // 0x43003870: swc1        $f25, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x43003874: swc1        $f24, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f24.u32l;
    // 0x43003878: swc1        $f23, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x4300387C: swc1        $f22, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f22.u32l;
    // 0x43003880: swc1        $f21, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x43003884: swc1        $f20, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f20.u32l;
    // 0x43003888: jal         0x43001BDC
    // 0x4300388C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    ovl_boss_angel_1BDC(rdram, ctx);
        goto after_0;
    // 0x4300388C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_0:
    // 0x43003890: lui         $s3, 0x4301
    ctx->r19 = S32(0X4301 << 16);
    // 0x43003894: addiu       $s3, $s3, -0x4008
    ctx->r19 = ADD32(ctx->r19, -0X4008);
    // 0x43003898: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x4300389C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x430038A0: jal         0x43001E0C
    // 0x430038A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_boss_angel_1E0C(rdram, ctx);
        goto after_1;
    // 0x430038A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x430038A8: lui         $s2, 0x4301
    ctx->r18 = S32(0X4301 << 16);
    // 0x430038AC: addiu       $s2, $s2, -0x3CDC
    ctx->r18 = ADD32(ctx->r18, -0X3CDC);
    // 0x430038B0: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x430038B4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x430038B8: lw          $t9, 0xA4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XA4);
    // 0x430038BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x430038C0: jalr        $t9
    // 0x430038C4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x430038C4: nop

    after_2:
    // 0x430038C8: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430038CC: lwc1        $f4, -0x4214($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X4214);
    // 0x430038D0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x430038D4: swc1        $f4, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->f4.u32l;
    // 0x430038D8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_430038DC:
    // 0x430038DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x430038E0: jal         0x43001DEC
    // 0x430038E4: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    ovl_boss_angel_1DEC(rdram, ctx);
        goto after_3;
    // 0x430038E4: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_3:
    // 0x430038E8: lw          $t9, 0x9C($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X9C);
    // 0x430038EC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x430038F0: jalr        $t9
    // 0x430038F4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x430038F4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_4:
    // 0x430038F8: jal         0x4300A1D8
    // 0x430038FC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_boss_angel_A1D8(rdram, ctx);
        goto after_5;
    // 0x430038FC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_5:
    // 0x43003900: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x43003904: slti        $at, $s0, 0x11
    ctx->r1 = SIGNED(ctx->r16) < 0X11 ? 1 : 0;
    // 0x43003908: bne         $at, $zero, L_430038DC
    if (ctx->r1 != 0) {
        // 0x4300390C: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_430038DC;
    }
    // 0x4300390C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x43003910: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x43003914: ori         $a1, $zero, 0xA0FF
    ctx->r5 = 0 | 0XA0FF;
    // 0x43003918: jal         0x43006D90
    // 0x4300391C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    ovl_boss_angel_6D90(rdram, ctx);
        goto after_6;
    // 0x4300391C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_6:
    // 0x43003920: addiu       $a0, $zero, 0x355
    ctx->r4 = ADD32(0, 0X355);
    // 0x43003924: jal         0x43000280
    // 0x43003928: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    ovl_boss_angel_280(rdram, ctx);
        goto after_7;
    // 0x43003928: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_7:
    // 0x4300392C: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x43003930: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x43003934: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x43003938: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x4300393C: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43003940: lwc1        $f27, -0x4210($at)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r1, -0X4210);
    // 0x43003944: lwc1        $f26, -0x420C($at)
    ctx->f26.u32l = MEM_W(ctx->r1, -0X420C);
    // 0x43003948: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x4300394C: lwc1        $f25, -0x4208($at)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r1, -0X4208);
    // 0x43003950: lwc1        $f24, -0x4204($at)
    ctx->f24.u32l = MEM_W(ctx->r1, -0X4204);
    // 0x43003954: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_43003958:
    // 0x43003958: mtc1        $s0, $f6
    ctx->f6.u32l = ctx->r16;
    // 0x4300395C: nop

    // 0x43003960: cvt.d.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.d = CVT_D_W(ctx->f6.u32l);
    // 0x43003964: mul.d       $f10, $f8, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f26.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f26.d);
    // 0x43003968: cvt.s.d     $f20, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f20.fl = CVT_S_D(ctx->f10.d);
    // 0x4300396C: cvt.d.s     $f16, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f16.d = CVT_D_S(ctx->f20.fl);
    // 0x43003970: add.d       $f18, $f16, $f24
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f24.d); 
    ctx->f18.d = ctx->f16.d + ctx->f24.d;
    // 0x43003974: jal         0x4300B4B0
    // 0x43003978: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    ovl_boss_angel_B4B0(rdram, ctx);
        goto after_8;
    // 0x43003978: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    after_8:
    // 0x4300397C: mul.s       $f4, $f0, $f30
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f30.fl);
    // 0x43003980: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x43003984: jal         0x4300B4B0
    // 0x43003988: sub.s       $f22, $f28, $f4
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f22.fl = ctx->f28.fl - ctx->f4.fl;
    ovl_boss_angel_B4B0(rdram, ctx);
        goto after_9;
    // 0x43003988: sub.s       $f22, $f28, $f4
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f22.fl = ctx->f28.fl - ctx->f4.fl;
    after_9:
    // 0x4300398C: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    // 0x43003990: sub.s       $f6, $f28, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f28.fl - ctx->f0.fl;
    // 0x43003994: lw          $a1, 0x4($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X4);
    // 0x43003998: cvt.d.s     $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f2.d = CVT_D_S(ctx->f6.fl);
    // 0x4300399C: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x430039A0: mfc1        $a2, $f3
    ctx->r6 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x430039A4: cvt.d.s     $f8, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f8.d = CVT_D_S(ctx->f22.fl);
    // 0x430039A8: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x430039AC: swc1        $f9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(9 - 1) * 2];
    // 0x430039B0: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    // 0x430039B4: swc1        $f3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
    // 0x430039B8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x430039BC: jal         0x43000DC0
    // 0x430039C0: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    ovl_boss_angel_DC0(rdram, ctx);
        goto after_10;
    // 0x430039C0: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_10:
    // 0x430039C4: jal         0x4300A1D8
    // 0x430039C8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_boss_angel_A1D8(rdram, ctx);
        goto after_11;
    // 0x430039C8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_11:
    // 0x430039CC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x430039D0: slti        $at, $s0, 0xA
    ctx->r1 = SIGNED(ctx->r16) < 0XA ? 1 : 0;
    // 0x430039D4: bne         $at, $zero, L_43003958
    if (ctx->r1 != 0) {
        // 0x430039D8: nop
    
            goto L_43003958;
    }
    // 0x430039D8: nop

    // 0x430039DC: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x430039E0: jal         0x43006EB0
    // 0x430039E4: nop

    ovl_boss_angel_6EB0(rdram, ctx);
        goto after_12;
    // 0x430039E4: nop

    after_12:
    // 0x430039E8: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
    // 0x430039EC: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x430039F0: lw          $a1, 0x4($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X4);
    // 0x430039F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x430039F8: jal         0x43000DC0
    // 0x430039FC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_boss_angel_DC0(rdram, ctx);
        goto after_13;
    // 0x430039FC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_13:
    // 0x43003A00: jal         0x4300A1D8
    // 0x43003A04: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_boss_angel_A1D8(rdram, ctx);
        goto after_14;
    // 0x43003A04: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_14:
    // 0x43003A08: addiu       $a0, $sp, 0xB0
    ctx->r4 = ADD32(ctx->r29, 0XB0);
    // 0x43003A0C: jal         0x43002314
    // 0x43003A10: addiu       $a1, $sp, 0xAC
    ctx->r5 = ADD32(ctx->r29, 0XAC);
    ovl_boss_angel_2314(rdram, ctx);
        goto after_15;
    // 0x43003A10: addiu       $a1, $sp, 0xAC
    ctx->r5 = ADD32(ctx->r29, 0XAC);
    after_15:
    // 0x43003A14: lwc1        $f2, 0xAC($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XAC);
    // 0x43003A18: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x43003A1C: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x43003A20: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x43003A24: cvt.d.s     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
    // 0x43003A28: c.lt.d      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.d < ctx->f16.d;
    // 0x43003A2C: addiu       $a0, $sp, 0x8C
    ctx->r4 = ADD32(ctx->r29, 0X8C);
    // 0x43003A30: bc1f        L_43003A68
    if (!c1cs) {
        // 0x43003A34: or          $a1, $s3, $zero
        ctx->r5 = ctx->r19 | 0;
            goto L_43003A68;
    }
    // 0x43003A34: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x43003A38: lui         $a2, 0x4301
    ctx->r6 = S32(0X4301 << 16);
    // 0x43003A3C: jal         0x4300A438
    // 0x43003A40: addiu       $a2, $a2, -0x4130
    ctx->r6 = ADD32(ctx->r6, -0X4130);
    ovl_boss_angel_A438(rdram, ctx);
        goto after_16;
    // 0x43003A40: addiu       $a2, $a2, -0x4130
    ctx->r6 = ADD32(ctx->r6, -0X4130);
    after_16:
    // 0x43003A44: lwc1        $f12, 0x8C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x43003A48: lwc1        $f14, 0x90($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X90);
    // 0x43003A4C: jal         0x4300A504
    // 0x43003A50: nop

    ovl_boss_angel_A504(rdram, ctx);
        goto after_17;
    // 0x43003A50: nop

    after_17:
    // 0x43003A54: jal         0x4300A8B4
    // 0x43003A58: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    ovl_boss_angel_A8B4(rdram, ctx);
        goto after_18;
    // 0x43003A58: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_18:
    // 0x43003A5C: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x43003A60: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x43003A64: swc1        $f0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f0.u32l;
L_43003A68:
    // 0x43003A68: lui         $at, 0xC200
    ctx->r1 = S32(0XC200 << 16);
    // 0x43003A6C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x43003A70: lw          $a2, 0xB0($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XB0);
    // 0x43003A74: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x43003A78: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x43003A7C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x43003A80: swc1        $f2, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f2.u32l;
    // 0x43003A84: jal         0x4300239C
    // 0x43003A88: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    ovl_boss_angel_239C(rdram, ctx);
        goto after_19;
    // 0x43003A88: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_19:
    // 0x43003A8C: lw          $t9, 0x98($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X98);
    // 0x43003A90: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x43003A94: jalr        $t9
    // 0x43003A98: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_20;
    // 0x43003A98: nop

    after_20:
    // 0x43003A9C: lw          $t8, 0x0($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X0);
    // 0x43003AA0: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x43003AA4: lw          $a1, 0x4($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X4);
    // 0x43003AA8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x43003AAC: jal         0x43000DC0
    // 0x43003AB0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_boss_angel_DC0(rdram, ctx);
        goto after_21;
    // 0x43003AB0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_21:
    // 0x43003AB4: addiu       $a0, $zero, 0x357
    ctx->r4 = ADD32(0, 0X357);
    // 0x43003AB8: jal         0x43000280
    // 0x43003ABC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    ovl_boss_angel_280(rdram, ctx);
        goto after_22;
    // 0x43003ABC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_22:
    // 0x43003AC0: jal         0x43004774
    // 0x43003AC4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    ovl_boss_angel_4774(rdram, ctx);
        goto after_23;
    // 0x43003AC4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_23:
    // 0x43003AC8: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43003ACC: lwc1        $f24, -0x4200($at)
    ctx->f24.u32l = MEM_W(ctx->r1, -0X4200);
    // 0x43003AD0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_43003AD4:
    // 0x43003AD4: mtc1        $s0, $f4
    ctx->f4.u32l = ctx->r16;
    // 0x43003AD8: nop

    // 0x43003ADC: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x43003AE0: mul.d       $f8, $f6, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f26.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f26.d);
    // 0x43003AE4: cvt.s.d     $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f20.fl = CVT_S_D(ctx->f8.d);
    // 0x43003AE8: jal         0x4300B4B0
    // 0x43003AEC: sub.s       $f12, $f24, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f24.fl - ctx->f20.fl;
    ovl_boss_angel_B4B0(rdram, ctx);
        goto after_24;
    // 0x43003AEC: sub.s       $f12, $f24, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f24.fl - ctx->f20.fl;
    after_24:
    // 0x43003AF0: mul.s       $f10, $f0, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f30.fl);
    // 0x43003AF4: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x43003AF8: sub.s       $f16, $f30, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f30.fl - ctx->f10.fl;
    // 0x43003AFC: jal         0x4300B4B0
    // 0x43003B00: add.s       $f22, $f16, $f28
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f22.fl = ctx->f16.fl + ctx->f28.fl;
    ovl_boss_angel_B4B0(rdram, ctx);
        goto after_25;
    // 0x43003B00: add.s       $f22, $f16, $f28
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f22.fl = ctx->f16.fl + ctx->f28.fl;
    after_25:
    // 0x43003B04: lw          $t0, 0x0($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X0);
    // 0x43003B08: cvt.d.s     $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.d = CVT_D_S(ctx->f0.fl);
    // 0x43003B0C: lw          $a1, 0x4($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X4);
    // 0x43003B10: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x43003B14: mfc1        $a2, $f3
    ctx->r6 = (int32_t)ctx->f_odd[(3 - 1) * 2];
    // 0x43003B18: cvt.d.s     $f18, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f18.d = CVT_D_S(ctx->f22.fl);
    // 0x43003B1C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x43003B20: swc1        $f19, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(19 - 1) * 2];
    // 0x43003B24: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x43003B28: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    // 0x43003B2C: swc1        $f3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
    // 0x43003B30: jal         0x43000DC0
    // 0x43003B34: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    ovl_boss_angel_DC0(rdram, ctx);
        goto after_26;
    // 0x43003B34: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_26:
    // 0x43003B38: jal         0x4300A1D8
    // 0x43003B3C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_boss_angel_A1D8(rdram, ctx);
        goto after_27;
    // 0x43003B3C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_27:
    // 0x43003B40: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x43003B44: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x43003B48: bne         $s0, $at, L_43003AD4
    if (ctx->r16 != ctx->r1) {
        // 0x43003B4C: nop
    
            goto L_43003AD4;
    }
    // 0x43003B4C: nop

    // 0x43003B50: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x43003B54: lwc1        $f21, 0x28($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x43003B58: lwc1        $f20, 0x2C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x43003B5C: lwc1        $f23, 0x30($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x43003B60: lwc1        $f22, 0x34($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X34);
    // 0x43003B64: lwc1        $f25, 0x38($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x43003B68: lwc1        $f24, 0x3C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x43003B6C: lwc1        $f27, 0x40($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x43003B70: lwc1        $f26, 0x44($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X44);
    // 0x43003B74: lwc1        $f29, 0x48($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X48);
    // 0x43003B78: lwc1        $f28, 0x4C($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x43003B7C: lwc1        $f31, 0x50($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X50);
    // 0x43003B80: lwc1        $f30, 0x54($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X54);
    // 0x43003B84: lw          $s0, 0x5C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X5C);
    // 0x43003B88: lw          $s1, 0x60($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X60);
    // 0x43003B8C: lw          $s2, 0x64($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X64);
    // 0x43003B90: lw          $s3, 0x68($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X68);
    // 0x43003B94: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    // 0x43003B98: jr          $ra
    // 0x43003B9C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    return;
    // 0x43003B9C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
;}
RECOMP_FUNC void ovl_boss_angel_3BA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43003BA0: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x43003BA4: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x43003BA8: sw          $s0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r16;
    // 0x43003BAC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43003BB0: sw          $s5, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r21;
    // 0x43003BB4: sw          $s4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r20;
    // 0x43003BB8: sw          $s3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r19;
    // 0x43003BBC: sw          $s2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r18;
    // 0x43003BC0: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x43003BC4: swc1        $f31, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x43003BC8: swc1        $f30, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f30.u32l;
    // 0x43003BCC: swc1        $f29, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x43003BD0: swc1        $f28, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f28.u32l;
    // 0x43003BD4: swc1        $f27, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x43003BD8: swc1        $f26, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f26.u32l;
    // 0x43003BDC: swc1        $f25, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x43003BE0: swc1        $f24, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f24.u32l;
    // 0x43003BE4: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x43003BE8: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x43003BEC: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x43003BF0: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x43003BF4: jal         0x43001BDC
    // 0x43003BF8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    ovl_boss_angel_1BDC(rdram, ctx);
        goto after_0;
    // 0x43003BF8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_0:
    // 0x43003BFC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x43003C00: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43003C04: sw          $t6, -0x3CD8($at)
    MEM_W(-0X3CD8, ctx->r1) = ctx->r14;
    // 0x43003C08: lw          $s5, 0x58($s0)
    ctx->r21 = MEM_W(ctx->r16, 0X58);
    // 0x43003C0C: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43003C10: jal         0x4300A608
    // 0x43003C14: sw          $zero, -0x3C9C($at)
    MEM_W(-0X3C9C, ctx->r1) = 0;
    ovl_boss_angel_A608(rdram, ctx);
        goto after_1;
    // 0x43003C14: sw          $zero, -0x3C9C($at)
    MEM_W(-0X3C9C, ctx->r1) = 0;
    after_1:
    // 0x43003C18: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43003C1C: lwc1        $f30, -0x41FC($at)
    ctx->f30.u32l = MEM_W(ctx->r1, -0X41FC);
    // 0x43003C20: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x43003C24: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x43003C28: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43003C2C: lwc1        $f27, -0x41F8($at)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r1, -0X41F8);
    // 0x43003C30: lwc1        $f26, -0x41F4($at)
    ctx->f26.u32l = MEM_W(ctx->r1, -0X41F4);
    // 0x43003C34: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43003C38: lwc1        $f25, -0x41F0($at)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r1, -0X41F0);
    // 0x43003C3C: lwc1        $f24, -0x41EC($at)
    ctx->f24.u32l = MEM_W(ctx->r1, -0X41EC);
    // 0x43003C40: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43003C44: andi        $s1, $v0, 0x3F
    ctx->r17 = ctx->r2 & 0X3F;
    // 0x43003C48: lui         $s4, 0x4301
    ctx->r20 = S32(0X4301 << 16);
    // 0x43003C4C: lwc1        $f23, -0x41E8($at)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r1, -0X41E8);
    // 0x43003C50: lwc1        $f22, -0x41E4($at)
    ctx->f22.u32l = MEM_W(ctx->r1, -0X41E4);
    // 0x43003C54: addiu       $s1, $s1, 0x1E
    ctx->r17 = ADD32(ctx->r17, 0X1E);
    // 0x43003C58: addiu       $s4, $s4, -0x4130
    ctx->r20 = ADD32(ctx->r20, -0X4130);
    // 0x43003C5C: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x43003C60: addiu       $s3, $sp, 0x6C
    ctx->r19 = ADD32(ctx->r29, 0X6C);
L_43003C64:
    // 0x43003C64: jal         0x4300A670
    // 0x43003C68: mov.s       $f12, $f30
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 30);
    ctx->f12.fl = ctx->f30.fl;
    ovl_boss_angel_A670(rdram, ctx);
        goto after_2;
    // 0x43003C68: mov.s       $f12, $f30
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 30);
    ctx->f12.fl = ctx->f30.fl;
    after_2:
    // 0x43003C6C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x43003C70: jal         0x4300B4B0
    // 0x43003C74: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    ovl_boss_angel_B4B0(rdram, ctx);
        goto after_3;
    // 0x43003C74: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_3:
    // 0x43003C78: mul.s       $f4, $f0, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f28.fl);
    // 0x43003C7C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x43003C80: swc1        $f4, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f4.u32l;
    // 0x43003C84: lwc1        $f6, 0x4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4);
    // 0x43003C88: jal         0x4300B670
    // 0x43003C8C: swc1        $f6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f6.u32l;
    ovl_boss_angel_B670(rdram, ctx);
        goto after_4;
    // 0x43003C8C: swc1        $f6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f6.u32l;
    after_4:
    // 0x43003C90: mul.s       $f8, $f0, $f28
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f28.fl);
    // 0x43003C94: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x43003C98: swc1        $f8, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f8.u32l;
    // 0x43003C9C: lw          $t9, 0xA8($s5)
    ctx->r25 = MEM_W(ctx->r21, 0XA8);
    // 0x43003CA0: nop

    // 0x43003CA4: jalr        $t9
    // 0x43003CA8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x43003CA8: nop

    after_5:
    // 0x43003CAC: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43003CB0: lwc1        $f10, -0x41E0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X41E0);
    // 0x43003CB4: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43003CB8: swc1        $f10, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f10.u32l;
    // 0x43003CBC: lwc1        $f16, -0x41DC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X41DC);
    // 0x43003CC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43003CC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x43003CC8: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x43003CCC: jal         0x43001DEC
    // 0x43003CD0: swc1        $f16, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f16.u32l;
    ovl_boss_angel_1DEC(rdram, ctx);
        goto after_6;
    // 0x43003CD0: swc1        $f16, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f16.u32l;
    after_6:
    // 0x43003CD4: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x43003CD8: lwc1        $f18, 0xC($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XC);
L_43003CDC:
    // 0x43003CDC: jal         0x4300A8B4
    // 0x43003CE0: sub.s       $f12, $f20, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f20.fl - ctx->f18.fl;
    ovl_boss_angel_A8B4(rdram, ctx);
        goto after_7;
    // 0x43003CE0: sub.s       $f12, $f20, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f20.fl - ctx->f18.fl;
    after_7:
    // 0x43003CE4: jal         0x4300B468
    // 0x43003CE8: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    ovl_boss_angel_B468(rdram, ctx);
        goto after_8;
    // 0x43003CE8: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_8:
    // 0x43003CEC: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x43003CF0: c.lt.d      $f4, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f4.d < ctx->f22.d;
    // 0x43003CF4: nop

    // 0x43003CF8: bc1t        L_43003D24
    if (c1cs) {
        // 0x43003CFC: lui         $at, 0x41E0
        ctx->r1 = S32(0X41E0 << 16);
            goto L_43003D24;
    }
    // 0x43003CFC: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x43003D00: lw          $t9, 0x9C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X9C);
    // 0x43003D04: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x43003D08: jalr        $t9
    // 0x43003D0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x43003D0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x43003D10: jal         0x4300A1D8
    // 0x43003D14: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_boss_angel_A1D8(rdram, ctx);
        goto after_10;
    // 0x43003D14: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_10:
    // 0x43003D18: b           L_43003CDC
    // 0x43003D1C: lwc1        $f18, 0xC($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XC);
        goto L_43003CDC;
    // 0x43003D1C: lwc1        $f18, 0xC($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XC);
    // 0x43003D20: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
L_43003D24:
    // 0x43003D24: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x43003D28: nop

    // 0x43003D2C: swc1        $f6, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f6.u32l;
    // 0x43003D30: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
L_43003D34:
    // 0x43003D34: bltz        $s1, L_43003DC0
    if (SIGNED(ctx->r17) < 0) {
        // 0x43003D38: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43003DC0;
    }
    // 0x43003D38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43003D3C: jal         0x4300A3F8
    // 0x43003D40: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    ovl_boss_angel_A3F8(rdram, ctx);
        goto after_11;
    // 0x43003D40: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_11:
    // 0x43003D44: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x43003D48: c.lt.d      $f8, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f8.d < ctx->f24.d;
    // 0x43003D4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43003D50: bc1f        L_43003D60
    if (!c1cs) {
        // 0x43003D54: nop
    
            goto L_43003D60;
    }
    // 0x43003D54: nop

    // 0x43003D58: b           L_43003DB0
    // 0x43003D5C: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
        goto L_43003DB0;
    // 0x43003D5C: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
L_43003D60:
    // 0x43003D60: jal         0x4300A3F8
    // 0x43003D64: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    ovl_boss_angel_A3F8(rdram, ctx);
        goto after_12;
    // 0x43003D64: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_12:
    // 0x43003D68: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x43003D6C: c.lt.d      $f26, $f10
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f26.d < ctx->f10.d;
    // 0x43003D70: nop

    // 0x43003D74: bc1f        L_43003D8C
    if (!c1cs) {
        // 0x43003D78: nop
    
            goto L_43003D8C;
    }
    // 0x43003D78: nop

    // 0x43003D7C: bne         $s2, $zero, L_43003D90
    if (ctx->r18 != 0) {
        // 0x43003D80: nop
    
            goto L_43003D90;
    }
    // 0x43003D80: nop

    // 0x43003D84: b           L_43003DB0
    // 0x43003D88: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
        goto L_43003DB0;
    // 0x43003D88: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
L_43003D8C:
    // 0x43003D8C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_43003D90:
    // 0x43003D90: lw          $t9, 0xA8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XA8);
    // 0x43003D94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43003D98: jalr        $t9
    // 0x43003D9C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x43003D9C: nop

    after_13:
    // 0x43003DA0: jal         0x4300A1D8
    // 0x43003DA4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_boss_angel_A1D8(rdram, ctx);
        goto after_14;
    // 0x43003DA4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_14:
    // 0x43003DA8: b           L_43003D34
    // 0x43003DAC: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
        goto L_43003D34;
    // 0x43003DAC: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
L_43003DB0:
    // 0x43003DB0: jal         0x4300A1D8
    // 0x43003DB4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_boss_angel_A1D8(rdram, ctx);
        goto after_15;
    // 0x43003DB4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_15:
    // 0x43003DB8: b           L_43003C64
    // 0x43003DBC: nop

        goto L_43003C64;
    // 0x43003DBC: nop

L_43003DC0:
    // 0x43003DC0: lwc1        $f16, 0x4($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X4);
    // 0x43003DC4: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43003DC8: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x43003DCC: swc1        $f16, -0x3CD0($at)
    MEM_W(-0X3CD0, ctx->r1) = ctx->f16.u32l;
    // 0x43003DD0: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43003DD4: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
    // 0x43003DD8: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x43003DDC: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x43003DE0: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x43003DE4: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x43003DE8: lwc1        $f25, 0x20($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x43003DEC: lwc1        $f24, 0x24($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X24);
    // 0x43003DF0: lwc1        $f27, 0x28($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x43003DF4: lwc1        $f26, 0x2C($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x43003DF8: lwc1        $f29, 0x30($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x43003DFC: lwc1        $f28, 0x34($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X34);
    // 0x43003E00: lwc1        $f31, 0x38($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x43003E04: lwc1        $f30, 0x3C($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x43003E08: lw          $s1, 0x48($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X48);
    // 0x43003E0C: lw          $s2, 0x4C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X4C);
    // 0x43003E10: lw          $s3, 0x50($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X50);
    // 0x43003E14: lw          $s4, 0x54($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X54);
    // 0x43003E18: lw          $s5, 0x58($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X58);
    // 0x43003E1C: sw          $zero, -0x3CD8($at)
    MEM_W(-0X3CD8, ctx->r1) = 0;
    // 0x43003E20: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    // 0x43003E24: jr          $ra
    // 0x43003E28: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    return;
    // 0x43003E28: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
;}
RECOMP_FUNC void ovl_boss_angel_3E2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43003E2C: lw          $t6, 0x30($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X30);
    // 0x43003E30: nop

    // 0x43003E34: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x43003E38: nop

    // 0x43003E3C: sw          $at, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r1;
    // 0x43003E40: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x43003E44: lwc1        $f8, 0x0($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X0);
    // 0x43003E48: sw          $t9, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r25;
    // 0x43003E4C: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x43003E50: nop

    // 0x43003E54: sw          $at, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r1;
    // 0x43003E58: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43003E5C: lwc1        $f6, -0x41D8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X41D8);
    // 0x43003E60: lwc1        $f4, 0x28($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X28);
    // 0x43003E64: lwc1        $f10, 0x20($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X20);
    // 0x43003E68: mul.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x43003E6C: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43003E70: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x43003E74: sub.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x43003E78: lwc1        $f16, 0x8($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X8);
    // 0x43003E7C: swc1        $f18, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f18.u32l;
    // 0x43003E80: lwc1        $f2, -0x3C54($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X3C54);
    // 0x43003E84: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x43003E88: mul.s       $f4, $f2, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x43003E8C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x43003E90: nop

    // 0x43003E94: mul.s       $f10, $f2, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x43003E98: add.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x43003E9C: swc1        $f8, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f8.u32l;
    // 0x43003EA0: lwc1        $f18, 0x24($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X24);
    // 0x43003EA4: nop

    // 0x43003EA8: mul.s       $f6, $f18, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x43003EAC: sub.s       $f4, $f16, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f6.fl;
    // 0x43003EB0: jr          $ra
    // 0x43003EB4: swc1        $f4, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f4.u32l;
    return;
    // 0x43003EB4: swc1        $f4, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f4.u32l;
;}
RECOMP_FUNC void ovl_boss_angel_3EB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43003EB8: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x43003EBC: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x43003EC0: lui         $s0, 0x4301
    ctx->r16 = S32(0X4301 << 16);
    // 0x43003EC4: addiu       $s0, $s0, -0x3CC8
    ctx->r16 = ADD32(ctx->r16, -0X3CC8);
    // 0x43003EC8: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x43003ECC: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x43003ED0: slti        $at, $t6, 0xD
    ctx->r1 = SIGNED(ctx->r14) < 0XD ? 1 : 0;
    // 0x43003ED4: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x43003ED8: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x43003EDC: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x43003EE0: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x43003EE4: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x43003EE8: swc1        $f23, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x43003EEC: swc1        $f22, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f22.u32l;
    // 0x43003EF0: swc1        $f21, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x43003EF4: bne         $at, $zero, L_43003F0C
    if (ctx->r1 != 0) {
        // 0x43003EF8: swc1        $f20, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->f20.u32l;
            goto L_43003F0C;
    }
    // 0x43003EF8: swc1        $f20, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f20.u32l;
    // 0x43003EFC: addiu       $a0, $zero, 0x8B2
    ctx->r4 = ADD32(0, 0X8B2);
    // 0x43003F00: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x43003F04: jal         0x43000C10
    // 0x43003F08: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_boss_angel_C10(rdram, ctx);
        goto after_0;
    // 0x43003F08: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
L_43003F0C:
    // 0x43003F0C: lw          $a0, 0x58($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X58);
    // 0x43003F10: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x43003F14: sw          $a0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r4;
    // 0x43003F18: lw          $t9, 0xA4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XA4);
    // 0x43003F1C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x43003F20: jalr        $t9
    // 0x43003F24: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x43003F24: nop

    after_1:
    // 0x43003F28: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x43003F2C: lui         $a1, 0xFF00
    ctx->r5 = S32(0XFF00 << 16);
    // 0x43003F30: jal         0x43006DB0
    // 0x43003F34: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    ovl_boss_angel_6DB0(rdram, ctx);
        goto after_2;
    // 0x43003F34: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    after_2:
    // 0x43003F38: addiu       $a0, $zero, 0x34F
    ctx->r4 = ADD32(0, 0X34F);
    // 0x43003F3C: jal         0x43000280
    // 0x43003F40: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    ovl_boss_angel_280(rdram, ctx);
        goto after_3;
    // 0x43003F40: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_3:
    // 0x43003F44: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x43003F48: lui         $s1, 0x4301
    ctx->r17 = S32(0X4301 << 16);
    // 0x43003F4C: addiu       $s1, $s1, -0x3CC4
    ctx->r17 = ADD32(ctx->r17, -0X3CC4);
    // 0x43003F50: addiu       $v1, $t7, 0x1
    ctx->r3 = ADD32(ctx->r15, 0X1);
    // 0x43003F54: lw          $s3, 0x0($s1)
    ctx->r19 = MEM_W(ctx->r17, 0X0);
    // 0x43003F58: slti        $at, $v1, 0x8
    ctx->r1 = SIGNED(ctx->r3) < 0X8 ? 1 : 0;
    // 0x43003F5C: bne         $at, $zero, L_43003F70
    if (ctx->r1 != 0) {
        // 0x43003F60: sw          $v1, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r3;
            goto L_43003F70;
    }
    // 0x43003F60: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    // 0x43003F64: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x43003F68: b           L_43003F80
    // 0x43003F6C: sw          $t0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r8;
        goto L_43003F80;
    // 0x43003F6C: sw          $t0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r8;
L_43003F70:
    // 0x43003F70: slti        $at, $v1, 0x4
    ctx->r1 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x43003F74: bne         $at, $zero, L_43003F80
    if (ctx->r1 != 0) {
        // 0x43003F78: addiu       $t1, $zero, 0x1
        ctx->r9 = ADD32(0, 0X1);
            goto L_43003F80;
    }
    // 0x43003F78: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x43003F7C: sw          $t1, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r9;
L_43003F80:
    // 0x43003F80: jal         0x4300217C
    // 0x43003F84: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    ovl_boss_angel_217C(rdram, ctx);
        goto after_4;
    // 0x43003F84: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_4:
    // 0x43003F88: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x43003F8C: nop

    // 0x43003F90: lw          $t9, 0xBC($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XBC);
    // 0x43003F94: nop

    // 0x43003F98: jalr        $t9
    // 0x43003F9C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x43003F9C: nop

    after_5:
    // 0x43003FA0: lw          $t2, 0x0($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X0);
    // 0x43003FA4: lui         $s4, 0x4301
    ctx->r20 = S32(0X4301 << 16);
    // 0x43003FA8: beq         $s3, $t2, L_430042C0
    if (ctx->r19 == ctx->r10) {
        // 0x43003FAC: addiu       $s4, $s4, -0x3C54
        ctx->r20 = ADD32(ctx->r20, -0X3C54);
            goto L_430042C0;
    }
    // 0x43003FAC: addiu       $s4, $s4, -0x3C54
    ctx->r20 = ADD32(ctx->r20, -0X3C54);
    // 0x43003FB0: lui         $s3, 0x4301
    ctx->r19 = S32(0X4301 << 16);
    // 0x43003FB4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x43003FB8: addiu       $s3, $s3, -0x3FE8
    ctx->r19 = ADD32(ctx->r19, -0X3FE8);
    // 0x43003FBC: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x43003FC0: swc1        $f4, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->f4.u32l;
    // 0x43003FC4: lw          $t3, 0x4C($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X4C);
    // 0x43003FC8: lui         $t4, 0x4300
    ctx->r12 = S32(0X4300 << 16);
    // 0x43003FCC: addiu       $t4, $t4, 0x3E2C
    ctx->r12 = ADD32(ctx->r12, 0X3E2C);
    // 0x43003FD0: sw          $t3, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r11;
    // 0x43003FD4: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43003FD8: sw          $t4, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->r12;
    // 0x43003FDC: lwc1        $f22, -0x41D4($at)
    ctx->f22.u32l = MEM_W(ctx->r1, -0X41D4);
    // 0x43003FE0: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x43003FE4: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x43003FE8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_43003FEC:
    // 0x43003FEC: mtc1        $s0, $f6
    ctx->f6.u32l = ctx->r16;
    // 0x43003FF0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x43003FF4: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x43003FF8: nop

    // 0x43003FFC: div.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f20.fl);
    // 0x43004000: mul.s       $f16, $f10, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x43004004: jal         0x4300A1D8
    // 0x43004008: swc1        $f16, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->f16.u32l;
    ovl_boss_angel_A1D8(rdram, ctx);
        goto after_6;
    // 0x43004008: swc1        $f16, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->f16.u32l;
    after_6:
    // 0x4300400C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x43004010: slti        $at, $s0, 0x6
    ctx->r1 = SIGNED(ctx->r16) < 0X6 ? 1 : 0;
    // 0x43004014: bne         $at, $zero, L_43003FEC
    if (ctx->r1 != 0) {
        // 0x43004018: nop
    
            goto L_43003FEC;
    }
    // 0x43004018: nop

    // 0x4300401C: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x43004020: lw          $a0, -0x3CDC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3CDC);
    // 0x43004024: jal         0x43006ED0
    // 0x43004028: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    ovl_boss_angel_6ED0(rdram, ctx);
        goto after_7;
    // 0x43004028: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    after_7:
    // 0x4300402C: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x43004030: lw          $a0, -0x3CDC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3CDC);
    // 0x43004034: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x43004038: lw          $t9, 0xA4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XA4);
    // 0x4300403C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x43004040: jalr        $t9
    // 0x43004044: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x43004044: nop

    after_8:
    // 0x43004048: lui         $s1, 0x4301
    ctx->r17 = S32(0X4301 << 16);
    // 0x4300404C: lui         $t7, 0x4301
    ctx->r15 = S32(0X4301 << 16);
    // 0x43004050: addiu       $s1, $s1, -0x3C6C
    ctx->r17 = ADD32(ctx->r17, -0X3C6C);
    // 0x43004054: addiu       $t7, $t7, -0x4670
    ctx->r15 = ADD32(ctx->r15, -0X4670);
    // 0x43004058: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x4300405C: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x43004060: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x43004064: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x43004068: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x4300406C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x43004070: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x43004074: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x43004078: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x4300407C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x43004080: addiu       $a3, $zero, 0x13
    ctx->r7 = ADD32(0, 0X13);
    // 0x43004084: jal         0x43000DC0
    // 0x43004088: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    ovl_boss_angel_DC0(rdram, ctx);
        goto after_9;
    // 0x43004088: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    after_9:
    // 0x4300408C: jal         0x43000244
    // 0x43004090: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    ovl_boss_angel_244(rdram, ctx);
        goto after_10;
    // 0x43004090: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    after_10:
    // 0x43004094: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_43004098:
    // 0x43004098: lw          $a0, 0x58($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X58);
    // 0x4300409C: nop

    // 0x430040A0: lw          $t9, 0x8C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8C);
    // 0x430040A4: nop

    // 0x430040A8: jalr        $t9
    // 0x430040AC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x430040AC: nop

    after_11:
    // 0x430040B0: beq         $v0, $zero, L_43004244
    if (ctx->r2 == 0) {
        // 0x430040B4: addiu       $at, $zero, 0x1E
        ctx->r1 = ADD32(0, 0X1E);
            goto L_43004244;
    }
    // 0x430040B4: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x430040B8: bne         $s0, $at, L_430040DC
    if (ctx->r16 != ctx->r1) {
        // 0x430040BC: addiu       $at, $zero, 0x3C
        ctx->r1 = ADD32(0, 0X3C);
            goto L_430040DC;
    }
    // 0x430040BC: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x430040C0: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x430040C4: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    // 0x430040C8: lw          $t9, 0x5C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X5C);
    // 0x430040CC: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    // 0x430040D0: jalr        $t9
    // 0x430040D4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x430040D4: nop

    after_12:
    // 0x430040D8: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
L_430040DC:
    // 0x430040DC: bne         $s0, $at, L_430040FC
    if (ctx->r16 != ctx->r1) {
        // 0x430040E0: nop
    
            goto L_430040FC;
    }
    // 0x430040E0: nop

    // 0x430040E4: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x430040E8: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    // 0x430040EC: lw          $t9, 0x5C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X5C);
    // 0x430040F0: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    // 0x430040F4: jalr        $t9
    // 0x430040F8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x430040F8: nop

    after_13:
L_430040FC:
    // 0x430040FC: mtc1        $s0, $f18
    ctx->f18.u32l = ctx->r16;
    // 0x43004100: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x43004104: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x43004108: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x4300410C: lui         $at, 0x4200
    ctx->r1 = S32(0X4200 << 16);
    // 0x43004110: div.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x43004114: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x43004118: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x4300411C: lw          $t2, 0x0($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X0);
    // 0x43004120: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x43004124: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x43004128: sub.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x4300412C: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x43004130: nop

    // 0x43004134: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x43004138: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x4300413C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x43004140: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
    // 0x43004144: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x43004148: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x4300414C: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x43004150: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x43004154: addiu       $t1, $v0, 0x140
    ctx->r9 = ADD32(ctx->r2, 0X140);
    // 0x43004158: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x4300415C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x43004160: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x43004164: negu        $t3, $v0
    ctx->r11 = SUB32(0, ctx->r2);
    // 0x43004168: sra         $t4, $t3, 1
    ctx->r12 = S32(SIGNED(ctx->r11) >> 1);
    // 0x4300416C: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x43004170: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x43004174: swc1        $f10, 0x14($t2)
    MEM_W(0X14, ctx->r10) = ctx->f10.u32l;
    // 0x43004178: lw          $t5, 0x0($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X0);
    // 0x4300417C: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x43004180: lui         $t3, 0xFB00
    ctx->r11 = S32(0XFB00 << 16);
    // 0x43004184: sub.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x43004188: swc1        $f16, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->f16.u32l;
    // 0x4300418C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x43004190: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x43004194: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x43004198: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x4300419C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x430041A0: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x430041A4: cvt.w.s     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.u32l = CVT_W_S(ctx->f10.fl);
    // 0x430041A8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x430041AC: mfc1        $v1, $f8
    ctx->r3 = (int32_t)ctx->f8.u32l;
    // 0x430041B0: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x430041B4: addiu       $t7, $v1, 0xF0
    ctx->r15 = ADD32(ctx->r3, 0XF0);
    // 0x430041B8: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x430041BC: lui         $at, 0x4320
    ctx->r1 = S32(0X4320 << 16);
    // 0x430041C0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x430041C4: cvt.s.w     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
    // 0x430041C8: negu        $t9, $v1
    ctx->r25 = SUB32(0, ctx->r3);
    // 0x430041CC: sra         $t0, $t9, 1
    ctx->r8 = S32(SIGNED(ctx->r25) >> 1);
    // 0x430041D0: mul.s       $f16, $f8, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x430041D4: mtc1        $t0, $f18
    ctx->f18.u32l = ctx->r8;
    // 0x430041D8: swc1        $f4, 0x18($t8)
    MEM_W(0X18, ctx->r24) = ctx->f4.u32l;
    // 0x430041DC: lw          $t1, 0x0($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X0);
    // 0x430041E0: cvt.s.w     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.fl = CVT_S_W(ctx->f18.u32l);
    // 0x430041E4: sub.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x430041E8: swc1        $f6, 0xC($t1)
    MEM_W(0XC, ctx->r9) = ctx->f6.u32l;
    // 0x430041EC: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x430041F0: lw          $t2, 0x0($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X0);
    // 0x430041F4: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x430041F8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x430041FC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x43004200: lw          $a1, 0xA8($t2)
    ctx->r5 = MEM_W(ctx->r10, 0XA8);
    // 0x43004204: cvt.w.s     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.u32l = CVT_W_S(ctx->f4.fl);
    // 0x43004208: sw          $t3, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r11;
    // 0x4300420C: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
    // 0x43004210: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x43004214: andi        $t6, $t5, 0xFF
    ctx->r14 = ctx->r13 & 0XFF;
    // 0x43004218: sw          $t6, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r14;
    // 0x4300421C: lw          $t9, 0x98($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X98);
    // 0x43004220: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x43004224: jalr        $t9
    // 0x43004228: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x43004228: nop

    after_14:
    // 0x4300422C: jal         0x4300A1D8
    // 0x43004230: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_boss_angel_A1D8(rdram, ctx);
        goto after_15;
    // 0x43004230: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_15:
    // 0x43004234: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x43004238: slti        $at, $s0, 0x3C
    ctx->r1 = SIGNED(ctx->r16) < 0X3C ? 1 : 0;
    // 0x4300423C: bne         $at, $zero, L_43004098
    if (ctx->r1 != 0) {
        // 0x43004240: nop
    
            goto L_43004098;
    }
    // 0x43004240: nop

L_43004244:
    // 0x43004244: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x43004248: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x4300424C: jal         0x43000DC0
    // 0x43004250: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_boss_angel_DC0(rdram, ctx);
        goto after_16;
    // 0x43004250: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_16:
    // 0x43004254: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
    // 0x43004258: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x4300425C: lw          $a0, -0x3CDC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3CDC);
    // 0x43004260: jal         0x43006F34
    // 0x43004264: nop

    ovl_boss_angel_6F34(rdram, ctx);
        goto after_17;
    // 0x43004264: nop

    after_17:
    // 0x43004268: addiu       $s0, $zero, 0x5
    ctx->r16 = ADD32(0, 0X5);
L_4300426C:
    // 0x4300426C: mtc1        $s0, $f6
    ctx->f6.u32l = ctx->r16;
    // 0x43004270: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x43004274: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x43004278: nop

    // 0x4300427C: div.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f20.fl);
    // 0x43004280: mul.s       $f16, $f10, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x43004284: jal         0x4300A1D8
    // 0x43004288: swc1        $f16, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->f16.u32l;
    ovl_boss_angel_A1D8(rdram, ctx);
        goto after_18;
    // 0x43004288: swc1        $f16, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->f16.u32l;
    after_18:
    // 0x4300428C: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x43004290: bgez        $s0, L_4300426C
    if (SIGNED(ctx->r16) >= 0) {
        // 0x43004294: nop
    
            goto L_4300426C;
    }
    // 0x43004294: nop

    // 0x43004298: lw          $t7, 0x58($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X58);
    // 0x4300429C: lw          $t8, 0x0($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X0);
    // 0x430042A0: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x430042A4: sw          $t7, 0x4C($t8)
    MEM_W(0X4C, ctx->r24) = ctx->r15;
    // 0x430042A8: lw          $a0, -0x3CDC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3CDC);
    // 0x430042AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x430042B0: lw          $t9, 0xA4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XA4);
    // 0x430042B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x430042B8: jalr        $t9
    // 0x430042BC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_19;
    // 0x430042BC: nop

    after_19:
L_430042C0:
    // 0x430042C0: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x430042C4: jal         0x43006EB0
    // 0x430042C8: nop

    ovl_boss_angel_6EB0(rdram, ctx);
        goto after_20;
    // 0x430042C8: nop

    after_20:
    // 0x430042CC: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x430042D0: lwc1        $f21, 0x30($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x430042D4: lwc1        $f20, 0x34($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X34);
    // 0x430042D8: lwc1        $f23, 0x38($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x430042DC: lwc1        $f22, 0x3C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x430042E0: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x430042E4: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x430042E8: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x430042EC: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x430042F0: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x430042F4: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x430042F8: jr          $ra
    // 0x430042FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x430042FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void ovl_boss_angel_4300(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004300: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x43004304: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x43004308: lui         $s7, 0x4301
    ctx->r23 = S32(0X4301 << 16);
    // 0x4300430C: addiu       $s7, $s7, -0x3CC4
    ctx->r23 = ADD32(ctx->r23, -0X3CC4);
    // 0x43004310: lw          $t6, 0x0($s7)
    ctx->r14 = MEM_W(ctx->r23, 0X0);
    // 0x43004314: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x43004318: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x4300431C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x43004320: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x43004324: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x43004328: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x4300432C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x43004330: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x43004334: bne         $t6, $zero, L_43004384
    if (ctx->r14 != 0) {
        // 0x43004338: sw          $s0, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r16;
            goto L_43004384;
    }
    // 0x43004338: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x4300433C: jal         0x4300A608
    // 0x43004340: nop

    ovl_boss_angel_A608(rdram, ctx);
        goto after_0;
    // 0x43004340: nop

    after_0:
    // 0x43004344: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x43004348: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x4300434C: lui         $t8, 0x4301
    ctx->r24 = S32(0X4301 << 16);
    // 0x43004350: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x43004354: addiu       $a0, $a0, -0x3C88
    ctx->r4 = ADD32(ctx->r4, -0X3C88);
    // 0x43004358: lui         $t9, 0x4301
    ctx->r25 = S32(0X4301 << 16);
    // 0x4300435C: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43004360: mfhi        $v1
    ctx->r3 = hi;
    // 0x43004364: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
    // 0x43004368: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x4300436C: lw          $t8, -0x4618($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X4618);
    // 0x43004370: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x43004374: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x43004378: lw          $t9, -0x460C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X460C);
    // 0x4300437C: b           L_4300447C
    // 0x43004380: sw          $t9, -0x3C74($at)
    MEM_W(-0X3C74, ctx->r1) = ctx->r25;
        goto L_4300447C;
    // 0x43004380: sw          $t9, -0x3C74($at)
    MEM_W(-0X3C74, ctx->r1) = ctx->r25;
L_43004384:
    // 0x43004384: lui         $s2, 0x4301
    ctx->r18 = S32(0X4301 << 16);
    // 0x43004388: addiu       $s2, $s2, -0x3C68
    ctx->r18 = ADD32(ctx->r18, -0X3C68);
    // 0x4300438C: addiu       $s1, $zero, 0xA
    ctx->r17 = ADD32(0, 0XA);
L_43004390:
    // 0x43004390: jal         0x4300B4A0
    // 0x43004394: nop

    ovl_boss_angel_B4A0(rdram, ctx);
        goto after_1;
    // 0x43004394: nop

    after_1:
    // 0x43004398: jal         0x4300A608
    // 0x4300439C: andi        $s0, $v0, 0x3
    ctx->r16 = ctx->r2 & 0X3;
    ovl_boss_angel_A608(rdram, ctx);
        goto after_2;
    // 0x4300439C: andi        $s0, $v0, 0x3
    ctx->r16 = ctx->r2 & 0X3;
    after_2:
    // 0x430043A0: divu        $zero, $v0, $s1
    lo = S32(U32(ctx->r2) / U32(ctx->r17)); hi = S32(U32(ctx->r2) % U32(ctx->r17));
    // 0x430043A4: bne         $s1, $zero, L_430043B0
    if (ctx->r17 != 0) {
        // 0x430043A8: nop
    
            goto L_430043B0;
    }
    // 0x430043A8: nop

    // 0x430043AC: break       7
    do_break(1124090796);
L_430043B0:
    // 0x430043B0: mfhi        $t0
    ctx->r8 = hi;
    // 0x430043B4: sltiu       $at, $t0, 0x4
    ctx->r1 = ctx->r8 < 0X4 ? 1 : 0;
    // 0x430043B8: beq         $at, $zero, L_430043C4
    if (ctx->r1 == 0) {
        // 0x430043BC: nop
    
            goto L_430043C4;
    }
    // 0x430043BC: nop

    // 0x430043C0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_430043C4:
    // 0x430043C4: lw          $t1, 0x0($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X0);
    // 0x430043C8: nop

    // 0x430043CC: bne         $s0, $t1, L_43004408
    if (ctx->r16 != ctx->r9) {
        // 0x430043D0: sll         $v0, $s0, 2
        ctx->r2 = S32(ctx->r16 << 2);
            goto L_43004408;
    }
    // 0x430043D0: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
    // 0x430043D4: jal         0x4300B4A0
    // 0x430043D8: nop

    ovl_boss_angel_B4A0(rdram, ctx);
        goto after_3;
    // 0x430043D8: nop

    after_3:
    // 0x430043DC: andi        $s0, $v0, 0x7
    ctx->r16 = ctx->r2 & 0X7;
    // 0x430043E0: beq         $s0, $zero, L_43004390
    if (ctx->r16 == 0) {
        // 0x430043E4: nop
    
            goto L_43004390;
    }
    // 0x430043E4: nop

L_430043E8:
    // 0x430043E8: jal         0x4300A608
    // 0x430043EC: nop

    ovl_boss_angel_A608(rdram, ctx);
        goto after_4;
    // 0x430043EC: nop

    after_4:
    // 0x430043F0: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x430043F4: bne         $s0, $zero, L_430043E8
    if (ctx->r16 != 0) {
        // 0x430043F8: nop
    
            goto L_430043E8;
    }
    // 0x430043F8: nop

    // 0x430043FC: b           L_43004390
    // 0x43004400: nop

        goto L_43004390;
    // 0x43004400: nop

    // 0x43004404: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
L_43004408:
    // 0x43004408: lui         $t2, 0x4301
    ctx->r10 = S32(0X4301 << 16);
    // 0x4300440C: sw          $s0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r16;
    // 0x43004410: addu        $t2, $t2, $v0
    ctx->r10 = ADD32(ctx->r10, ctx->r2);
    // 0x43004414: lw          $t2, -0x4600($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X4600);
    // 0x43004418: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x4300441C: addiu       $a0, $a0, -0x3C88
    ctx->r4 = ADD32(ctx->r4, -0X3C88);
    // 0x43004420: lui         $t3, 0x4301
    ctx->r11 = S32(0X4301 << 16);
    // 0x43004424: addu        $t3, $t3, $v0
    ctx->r11 = ADD32(ctx->r11, ctx->r2);
    // 0x43004428: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x4300442C: lw          $t3, -0x45E0($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X45E0);
    // 0x43004430: lui         $t4, 0x4301
    ctx->r12 = S32(0X4301 << 16);
    // 0x43004434: addu        $t4, $t4, $v0
    ctx->r12 = ADD32(ctx->r12, ctx->r2);
    // 0x43004438: sw          $t3, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r11;
    // 0x4300443C: lw          $t4, -0x45C0($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X45C0);
    // 0x43004440: lw          $t5, 0x0($s7)
    ctx->r13 = MEM_W(ctx->r23, 0X0);
    // 0x43004444: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x43004448: bne         $t5, $at, L_43004468
    if (ctx->r13 != ctx->r1) {
        // 0x4300444C: sw          $t4, 0x8($a0)
        MEM_W(0X8, ctx->r4) = ctx->r12;
            goto L_43004468;
    }
    // 0x4300444C: sw          $t4, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r12;
    // 0x43004450: lui         $t6, 0x4301
    ctx->r14 = S32(0X4301 << 16);
    // 0x43004454: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x43004458: lw          $t6, -0x4580($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4580);
    // 0x4300445C: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43004460: b           L_4300447C
    // 0x43004464: sw          $t6, -0x3C74($at)
    MEM_W(-0X3C74, ctx->r1) = ctx->r14;
        goto L_4300447C;
    // 0x43004464: sw          $t6, -0x3C74($at)
    MEM_W(-0X3C74, ctx->r1) = ctx->r14;
L_43004468:
    // 0x43004468: lui         $t7, 0x4301
    ctx->r15 = S32(0X4301 << 16);
    // 0x4300446C: addu        $t7, $t7, $v0
    ctx->r15 = ADD32(ctx->r15, ctx->r2);
    // 0x43004470: lw          $t7, -0x45A0($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X45A0);
    // 0x43004474: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43004478: sw          $t7, -0x3C74($at)
    MEM_W(-0X3C74, ctx->r1) = ctx->r15;
L_4300447C:
    // 0x4300447C: jal         0x4300A608
    // 0x43004480: nop

    ovl_boss_angel_A608(rdram, ctx);
        goto after_5;
    // 0x43004480: nop

    after_5:
    // 0x43004484: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x43004488: divu        $zero, $v0, $at
    lo = S32(U32(ctx->r2) / U32(ctx->r1)); hi = S32(U32(ctx->r2) % U32(ctx->r1));
    // 0x4300448C: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x43004490: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x43004494: mfhi        $t8
    ctx->r24 = hi;
    // 0x43004498: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x4300449C: addu        $a0, $a0, $t9
    ctx->r4 = ADD32(ctx->r4, ctx->r25);
    // 0x430044A0: lw          $a0, -0x4624($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4624);
    // 0x430044A4: jal         0x43000280
    // 0x430044A8: nop

    ovl_boss_angel_280(rdram, ctx);
        goto after_6;
    // 0x430044A8: nop

    after_6:
    // 0x430044AC: lw          $v1, 0x0($s7)
    ctx->r3 = MEM_W(ctx->r23, 0X0);
    // 0x430044B0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x430044B4: bltz        $v1, L_43004544
    if (SIGNED(ctx->r3) < 0) {
        // 0x430044B8: lui         $s3, 0x4301
        ctx->r19 = S32(0X4301 << 16);
            goto L_43004544;
    }
    // 0x430044B8: lui         $s3, 0x4301
    ctx->r19 = S32(0X4301 << 16);
    // 0x430044BC: lui         $s6, 0x4301
    ctx->r22 = S32(0X4301 << 16);
    // 0x430044C0: lui         $s5, 0x4301
    ctx->r21 = S32(0X4301 << 16);
    // 0x430044C4: lui         $s4, 0x4301
    ctx->r20 = S32(0X4301 << 16);
    // 0x430044C8: addiu       $s4, $s4, -0x3CDC
    ctx->r20 = ADD32(ctx->r20, -0X3CDC);
    // 0x430044CC: addiu       $s5, $s5, -0x4648
    ctx->r21 = ADD32(ctx->r21, -0X4648);
    // 0x430044D0: addiu       $s6, $s6, -0x4630
    ctx->r22 = ADD32(ctx->r22, -0X4630);
    // 0x430044D4: addiu       $s3, $s3, -0x3C88
    ctx->r19 = ADD32(ctx->r19, -0X3C88);
L_430044D8:
    // 0x430044D8: lw          $t2, 0x0($s3)
    ctx->r10 = MEM_W(ctx->r19, 0X0);
    // 0x430044DC: sll         $t0, $v1, 2
    ctx->r8 = S32(ctx->r3 << 2);
    // 0x430044E0: addu        $t1, $s6, $t0
    ctx->r9 = ADD32(ctx->r22, ctx->r8);
    // 0x430044E4: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x430044E8: lw          $s1, 0x0($t1)
    ctx->r17 = MEM_W(ctx->r9, 0X0);
    // 0x430044EC: addu        $t4, $s5, $t3
    ctx->r12 = ADD32(ctx->r21, ctx->r11);
    // 0x430044F0: lw          $a1, 0x0($t4)
    ctx->r5 = MEM_W(ctx->r12, 0X0);
    // 0x430044F4: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    // 0x430044F8: jal         0x43006D90
    // 0x430044FC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_boss_angel_6D90(rdram, ctx);
        goto after_7;
    // 0x430044FC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_7:
    // 0x43004500: addiu       $s2, $s1, -0x1
    ctx->r18 = ADD32(ctx->r17, -0X1);
    // 0x43004504: jal         0x4300A1D8
    // 0x43004508: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    ovl_boss_angel_A1D8(rdram, ctx);
        goto after_8;
    // 0x43004508: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_8:
    // 0x4300450C: lw          $t5, 0x0($s3)
    ctx->r13 = MEM_W(ctx->r19, 0X0);
    // 0x43004510: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    // 0x43004514: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x43004518: addu        $t7, $s5, $t6
    ctx->r15 = ADD32(ctx->r21, ctx->r14);
    // 0x4300451C: lw          $a1, 0x0($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X0);
    // 0x43004520: jal         0x43006DB0
    // 0x43004524: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_boss_angel_6DB0(rdram, ctx);
        goto after_9;
    // 0x43004524: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_9:
    // 0x43004528: jal         0x4300A1D8
    // 0x4300452C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    ovl_boss_angel_A1D8(rdram, ctx);
        goto after_10;
    // 0x4300452C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_10:
    // 0x43004530: lw          $v1, 0x0($s7)
    ctx->r3 = MEM_W(ctx->r23, 0X0);
    // 0x43004534: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x43004538: slt         $at, $v1, $s0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x4300453C: beq         $at, $zero, L_430044D8
    if (ctx->r1 == 0) {
        // 0x43004540: addiu       $s3, $s3, 0x4
        ctx->r19 = ADD32(ctx->r19, 0X4);
            goto L_430044D8;
    }
    // 0x43004540: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
L_43004544:
    // 0x43004544: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43004548: beq         $v1, $zero, L_43004558
    if (ctx->r3 == 0) {
        // 0x4300454C: sw          $zero, -0x3C78($at)
        MEM_W(-0X3C78, ctx->r1) = 0;
            goto L_43004558;
    }
    // 0x4300454C: sw          $zero, -0x3C78($at)
    MEM_W(-0X3C78, ctx->r1) = 0;
    // 0x43004550: b           L_4300455C
    // 0x43004554: addiu       $v1, $zero, 0xC
    ctx->r3 = ADD32(0, 0XC);
        goto L_4300455C;
    // 0x43004554: addiu       $v1, $zero, 0xC
    ctx->r3 = ADD32(0, 0XC);
L_43004558:
    // 0x43004558: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
L_4300455C:
    // 0x4300455C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x43004560: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x43004564: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x43004568: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x4300456C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x43004570: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x43004574: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x43004578: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x4300457C: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x43004580: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x43004584: jr          $ra
    // 0x43004588: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x43004588: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_boss_angel_458C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300458C: lui         $a1, 0x4301
    ctx->r5 = S32(0X4301 << 16);
    // 0x43004590: addiu       $a1, $a1, -0x3C78
    ctx->r5 = ADD32(ctx->r5, -0X3C78);
    // 0x43004594: lui         $t6, 0x4301
    ctx->r14 = S32(0X4301 << 16);
    // 0x43004598: lw          $t6, -0x3CC4($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3CC4);
    // 0x4300459C: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x430045A0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x430045A4: slt         $at, $t6, $v1
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x430045A8: beq         $at, $zero, L_430045B8
    if (ctx->r1 == 0) {
        // 0x430045AC: sll         $t7, $v1, 2
        ctx->r15 = S32(ctx->r3 << 2);
            goto L_430045B8;
    }
    // 0x430045AC: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
    // 0x430045B0: jr          $ra
    // 0x430045B4: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    return;
    // 0x430045B4: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_430045B8:
    // 0x430045B8: lui         $t8, 0x4301
    ctx->r24 = S32(0X4301 << 16);
    // 0x430045BC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x430045C0: lw          $t8, -0x3C88($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3C88);
    // 0x430045C4: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x430045C8: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x430045CC: addu        $a0, $a0, $t9
    ctx->r4 = ADD32(ctx->r4, ctx->r25);
    // 0x430045D0: lw          $v0, -0x4660($a0)
    ctx->r2 = MEM_W(ctx->r4, -0X4660);
    // 0x430045D4: addiu       $t0, $v1, 0x1
    ctx->r8 = ADD32(ctx->r3, 0X1);
    // 0x430045D8: sw          $t0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r8;
    // 0x430045DC: jr          $ra
    // 0x430045E0: nop

    return;
    // 0x430045E0: nop

;}
RECOMP_FUNC void ovl_boss_angel_45E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430045E4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x430045E8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x430045EC: lui         $s2, 0x4301
    ctx->r18 = S32(0X4301 << 16);
    // 0x430045F0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x430045F4: lui         $s1, 0x4301
    ctx->r17 = S32(0X4301 << 16);
    // 0x430045F8: addiu       $s2, $s2, -0x3CBC
    ctx->r18 = ADD32(ctx->r18, -0X3CBC);
    // 0x430045FC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x43004600: addiu       $s1, $s1, -0x3C74
    ctx->r17 = ADD32(ctx->r17, -0X3C74);
    // 0x43004604: sw          $zero, 0x0($s2)
    MEM_W(0X0, ctx->r18) = 0;
    // 0x43004608: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x4300460C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x43004610: lw          $a0, -0x3CDC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3CDC);
    // 0x43004614: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x43004618: jal         0x43006ED0
    // 0x4300461C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    ovl_boss_angel_6ED0(rdram, ctx);
        goto after_0;
    // 0x4300461C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x43004620: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x43004624: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x43004628: blez        $t6, L_43004670
    if (SIGNED(ctx->r14) <= 0) {
        // 0x4300462C: nop
    
            goto L_43004670;
    }
    // 0x4300462C: nop

L_43004630:
    // 0x43004630: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
    // 0x43004634: nop

    // 0x43004638: beq         $t7, $zero, L_43004654
    if (ctx->r15 == 0) {
        // 0x4300463C: lui         $a0, 0x4301
        ctx->r4 = S32(0X4301 << 16);
            goto L_43004654;
    }
    // 0x4300463C: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x43004640: lw          $a0, -0x3CDC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3CDC);
    // 0x43004644: jal         0x43006F34
    // 0x43004648: nop

    ovl_boss_angel_6F34(rdram, ctx);
        goto after_1;
    // 0x43004648: nop

    after_1:
    // 0x4300464C: b           L_43004690
    // 0x43004650: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_43004690;
    // 0x43004650: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_43004654:
    // 0x43004654: jal         0x4300A1D8
    // 0x43004658: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_boss_angel_A1D8(rdram, ctx);
        goto after_2;
    // 0x43004658: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x4300465C: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x43004660: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x43004664: slt         $at, $s0, $t8
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x43004668: bne         $at, $zero, L_43004630
    if (ctx->r1 != 0) {
        // 0x4300466C: nop
    
            goto L_43004630;
    }
    // 0x4300466C: nop

L_43004670:
    // 0x43004670: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x43004674: lw          $a0, -0x3CDC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3CDC);
    // 0x43004678: jal         0x43006F34
    // 0x4300467C: nop

    ovl_boss_angel_6F34(rdram, ctx);
        goto after_3;
    // 0x4300467C: nop

    after_3:
    // 0x43004680: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x43004684: jal         0x4300217C
    // 0x43004688: nop

    ovl_boss_angel_217C(rdram, ctx);
        goto after_4;
    // 0x43004688: nop

    after_4:
    // 0x4300468C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_43004690:
    // 0x43004690: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43004694: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43004698: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x4300469C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x430046A0: jr          $ra
    // 0x430046A4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x430046A4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_boss_angel_46A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430046A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x430046AC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x430046B0: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x430046B4: lw          $a0, -0x3CDC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3CDC);
    // 0x430046B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430046BC: lw          $t9, 0xA4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XA4);
    // 0x430046C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x430046C4: jalr        $t9
    // 0x430046C8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x430046C8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x430046CC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x430046D0: lui         $a1, 0x4301
    ctx->r5 = S32(0X4301 << 16);
    // 0x430046D4: addiu       $a1, $a1, -0x4008
    ctx->r5 = ADD32(ctx->r5, -0X4008);
    // 0x430046D8: jal         0x43001E0C
    // 0x430046DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_boss_angel_1E0C(rdram, ctx);
        goto after_1;
    // 0x430046DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x430046E0: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x430046E4: lw          $a0, -0x3CDC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3CDC);
    // 0x430046E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x430046EC: lw          $t9, 0xA4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XA4);
    // 0x430046F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x430046F4: jalr        $t9
    // 0x430046F8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x430046F8: nop

    after_2:
    // 0x430046FC: jal         0x4300A608
    // 0x43004700: nop

    ovl_boss_angel_A608(rdram, ctx);
        goto after_3;
    // 0x43004700: nop

    after_3:
    // 0x43004704: andi        $a0, $v0, 0x7
    ctx->r4 = ctx->r2 & 0X7;
    // 0x43004708: jal         0x4300A1D8
    // 0x4300470C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    ovl_boss_angel_A1D8(rdram, ctx);
        goto after_4;
    // 0x4300470C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    after_4:
    // 0x43004710: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43004714: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43004718: jr          $ra
    // 0x4300471C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    return;
    // 0x4300471C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
;}
RECOMP_FUNC void ovl_boss_angel_4720(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004720: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x43004724: addiu       $v0, $v0, -0x3C50
    ctx->r2 = ADD32(ctx->r2, -0X3C50);
    // 0x43004728: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x4300472C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43004730: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x43004734: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43004738: bne         $t7, $zero, L_43004764
    if (ctx->r15 != 0) {
        // 0x4300473C: sw          $t7, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r15;
            goto L_43004764;
    }
    // 0x4300473C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x43004740: lui         $a1, 0x4301
    ctx->r5 = S32(0X4301 << 16);
    // 0x43004744: lui         $a2, 0x4301
    ctx->r6 = S32(0X4301 << 16);
    // 0x43004748: lw          $a2, -0x3CF0($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3CF0);
    // 0x4300474C: lw          $a1, -0x3CE8($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3CE8);
    // 0x43004750: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x43004754: jal         0x43000DC0
    // 0x43004758: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_boss_angel_DC0(rdram, ctx);
        goto after_0;
    // 0x43004758: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x4300475C: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43004760: sw          $zero, -0x3CCC($at)
    MEM_W(-0X3CCC, ctx->r1) = 0;
L_43004764:
    // 0x43004764: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43004768: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4300476C: jr          $ra
    // 0x43004770: nop

    return;
    // 0x43004770: nop

;}
RECOMP_FUNC void ovl_boss_angel_4774(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004774: lui         $t6, 0x4301
    ctx->r14 = S32(0X4301 << 16);
    // 0x43004778: lw          $t6, -0x3CCC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3CCC);
    // 0x4300477C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43004780: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43004784: bne         $t6, $zero, L_430047D8
    if (ctx->r14 != 0) {
        // 0x43004788: sw          $a0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r4;
            goto L_430047D8;
    }
    // 0x43004788: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x4300478C: lui         $a2, 0x4301
    ctx->r6 = S32(0X4301 << 16);
    // 0x43004790: lui         $a3, 0x4301
    ctx->r7 = S32(0X4301 << 16);
    // 0x43004794: lw          $a3, -0x3CF4($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X3CF4);
    // 0x43004798: lw          $a2, -0x3CE8($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3CE8);
    // 0x4300479C: lui         $a1, 0x4301
    ctx->r5 = S32(0X4301 << 16);
    // 0x430047A0: addiu       $a1, $a1, -0x3CF0
    ctx->r5 = ADD32(ctx->r5, -0X3CF0);
    // 0x430047A4: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x430047A8: jal         0x43000DC0
    // 0x430047AC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_boss_angel_DC0(rdram, ctx);
        goto after_0;
    // 0x430047AC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x430047B0: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x430047B4: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430047B8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x430047BC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x430047C0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x430047C4: sw          $t8, -0x3C50($at)
    MEM_W(-0X3C50, ctx->r1) = ctx->r24;
    // 0x430047C8: lui         $t9, 0x4300
    ctx->r25 = S32(0X4300 << 16);
    // 0x430047CC: addiu       $t9, $t9, 0x4720
    ctx->r25 = ADD32(ctx->r25, 0X4720);
    // 0x430047D0: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430047D4: sw          $t9, -0x3CCC($at)
    MEM_W(-0X3CCC, ctx->r1) = ctx->r25;
L_430047D8:
    // 0x430047D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x430047DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x430047E0: jr          $ra
    // 0x430047E4: nop

    return;
    // 0x430047E4: nop

    // 0x430047E8: jr          $ra
    // 0x430047EC: nop

    return;
    // 0x430047EC: nop

;}
RECOMP_FUNC void ovl_boss_angel_47F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430047F0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x430047F4: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x430047F8: sw          $s7, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r23;
    // 0x430047FC: sw          $s6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r22;
    // 0x43004800: sw          $s5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r21;
    // 0x43004804: sw          $s4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r20;
    // 0x43004808: sw          $s3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r19;
    // 0x4300480C: sw          $s2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r18;
    // 0x43004810: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x43004814: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x43004818: swc1        $f25, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x4300481C: swc1        $f24, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f24.u32l;
    // 0x43004820: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x43004824: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x43004828: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x4300482C: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x43004830: jal         0x4300A1D8
    // 0x43004834: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_boss_angel_A1D8(rdram, ctx);
        goto after_0;
    // 0x43004834: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x43004838: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x4300483C: lwc1        $f22, -0x41D0($at)
    ctx->f22.u32l = MEM_W(ctx->r1, -0X41D0);
    // 0x43004840: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43004844: lui         $s0, 0x4301
    ctx->r16 = S32(0X4301 << 16);
    // 0x43004848: lui         $s2, 0x4301
    ctx->r18 = S32(0X4301 << 16);
    // 0x4300484C: lui         $s1, 0x4301
    ctx->r17 = S32(0X4301 << 16);
    // 0x43004850: lui         $s3, 0x4301
    ctx->r19 = S32(0X4301 << 16);
    // 0x43004854: lwc1        $f21, -0x41C8($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, -0X41C8);
    // 0x43004858: lwc1        $f20, -0x41C4($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X41C4);
    // 0x4300485C: addiu       $s3, $s3, -0x4550
    ctx->r19 = ADD32(ctx->r19, -0X4550);
    // 0x43004860: addiu       $s1, $s1, -0x4560
    ctx->r17 = ADD32(ctx->r17, -0X4560);
    // 0x43004864: addiu       $s2, $s2, -0x3C38
    ctx->r18 = ADD32(ctx->r18, -0X3C38);
    // 0x43004868: addiu       $s0, $s0, -0x3C48
    ctx->r16 = ADD32(ctx->r16, -0X3C48);
L_4300486C:
    // 0x4300486C: jal         0x4300A670
    // 0x43004870: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    ovl_boss_angel_A670(rdram, ctx);
        goto after_1;
    // 0x43004870: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    after_1:
    // 0x43004874: lwc1        $f4, 0x0($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X0);
    // 0x43004878: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x4300487C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x43004880: nop

    // 0x43004884: div.d       $f8, $f20, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f20.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = DIV_D(ctx->f20.d, ctx->f6.d);
    // 0x43004888: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x4300488C: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x43004890: swc1        $f0, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = ctx->f0.u32l;
    // 0x43004894: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x43004898: bne         $s1, $s3, L_4300486C
    if (ctx->r17 != ctx->r19) {
        // 0x4300489C: swc1        $f10, -0x4($s2)
        MEM_W(-0X4, ctx->r18) = ctx->f10.u32l;
            goto L_4300486C;
    }
    // 0x4300489C: swc1        $f10, -0x4($s2)
    MEM_W(-0X4, ctx->r18) = ctx->f10.u32l;
    // 0x430048A0: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x430048A4: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430048A8: swc1        $f24, -0x3C28($at)
    MEM_W(-0X3C28, ctx->r1) = ctx->f24.u32l;
    // 0x430048AC: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430048B0: swc1        $f24, -0x3C24($at)
    MEM_W(-0X3C24, ctx->r1) = ctx->f24.u32l;
    // 0x430048B4: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430048B8: lwc1        $f22, -0x41C0($at)
    ctx->f22.u32l = MEM_W(ctx->r1, -0X41C0);
    // 0x430048BC: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430048C0: lui         $s7, 0x4301
    ctx->r23 = S32(0X4301 << 16);
    // 0x430048C4: lui         $s6, 0x4301
    ctx->r22 = S32(0X4301 << 16);
    // 0x430048C8: lui         $s5, 0x4301
    ctx->r21 = S32(0X4301 << 16);
    // 0x430048CC: lui         $s4, 0x4301
    ctx->r20 = S32(0X4301 << 16);
    // 0x430048D0: lui         $s3, 0x4301
    ctx->r19 = S32(0X4301 << 16);
    // 0x430048D4: lwc1        $f21, -0x41B8($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, -0X41B8);
    // 0x430048D8: lwc1        $f20, -0x41B4($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X41B4);
    // 0x430048DC: addiu       $s3, $s3, -0x4550
    ctx->r19 = ADD32(ctx->r19, -0X4550);
    // 0x430048E0: addiu       $s4, $s4, -0x47F0
    ctx->r20 = ADD32(ctx->r20, -0X47F0);
    // 0x430048E4: addiu       $s5, $s5, -0x3CD4
    ctx->r21 = ADD32(ctx->r21, -0X3CD4);
    // 0x430048E8: addiu       $s6, $s6, -0x3CD8
    ctx->r22 = ADD32(ctx->r22, -0X3CD8);
    // 0x430048EC: addiu       $s7, $s7, -0x3CCC
    ctx->r23 = ADD32(ctx->r23, -0X3CCC);
    // 0x430048F0: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
L_430048F4:
    // 0x430048F4: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430048F8: lwc1        $f18, -0x3C28($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X3C28);
    // 0x430048FC: lwc1        $f16, 0x4($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X4);
    // 0x43004900: lui         $s0, 0x4301
    ctx->r16 = S32(0X4301 << 16);
    // 0x43004904: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x43004908: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x4300490C: swc1        $f4, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f4.u32l;
    // 0x43004910: lw          $t6, 0x0($s6)
    ctx->r14 = MEM_W(ctx->r22, 0X0);
    // 0x43004914: addiu       $s0, $s0, -0x3C48
    ctx->r16 = ADD32(ctx->r16, -0X3C48);
    // 0x43004918: beq         $t6, $zero, L_43004978
    if (ctx->r14 == 0) {
        // 0x4300491C: lui         $s2, 0x4301
        ctx->r18 = S32(0X4301 << 16);
            goto L_43004978;
    }
    // 0x4300491C: lui         $s2, 0x4301
    ctx->r18 = S32(0X4301 << 16);
    // 0x43004920: lui         $s1, 0x4301
    ctx->r17 = S32(0X4301 << 16);
    // 0x43004924: swc1        $f24, -0x3C28($at)
    MEM_W(-0X3C28, ctx->r1) = ctx->f24.u32l;
    // 0x43004928: addiu       $s1, $s1, -0x4560
    ctx->r17 = ADD32(ctx->r17, -0X4560);
    // 0x4300492C: addiu       $s2, $s2, -0x3C38
    ctx->r18 = ADD32(ctx->r18, -0X3C38);
L_43004930:
    // 0x43004930: lwc1        $f12, 0x0($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X0);
    // 0x43004934: jal         0x4300B4B0
    // 0x43004938: nop

    ovl_boss_angel_B4B0(rdram, ctx);
        goto after_2;
    // 0x43004938: nop

    after_2:
    // 0x4300493C: lwc1        $f8, 0x0($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X0);
    // 0x43004940: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43004944: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x43004948: lwc1        $f6, -0x3C28($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X3C28);
    // 0x4300494C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x43004950: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x43004954: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x43004958: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x4300495C: swc1        $f16, -0x3C28($at)
    MEM_W(-0X3C28, ctx->r1) = ctx->f16.u32l;
    // 0x43004960: lwc1        $f18, -0x4($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, -0X4);
    // 0x43004964: lwc1        $f4, -0x4($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, -0X4);
    // 0x43004968: nop

    // 0x4300496C: add.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x43004970: bne         $s1, $s3, L_43004930
    if (ctx->r17 != ctx->r19) {
        // 0x43004974: swc1        $f8, -0x4($s0)
        MEM_W(-0X4, ctx->r16) = ctx->f8.u32l;
            goto L_43004930;
    }
    // 0x43004974: swc1        $f8, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = ctx->f8.u32l;
L_43004978:
    // 0x43004978: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x4300497C: lwc1        $f2, -0x3C24($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X3C24);
    // 0x43004980: lwc1        $f0, 0x0($s5)
    ctx->f0.u32l = MEM_W(ctx->r21, 0X0);
    // 0x43004984: nop

    // 0x43004988: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x4300498C: nop

    // 0x43004990: bc1t        L_43004A00
    if (c1cs) {
        // 0x43004994: nop
    
            goto L_43004A00;
    }
    // 0x43004994: nop

    // 0x43004998: sub.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x4300499C: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430049A0: mul.s       $f10, $f6, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f22.fl);
    // 0x430049A4: add.s       $f2, $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f10.fl;
    // 0x430049A8: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x430049AC: jal         0x4300B468
    // 0x430049B0: swc1        $f2, -0x3C24($at)
    MEM_W(-0X3C24, ctx->r1) = ctx->f2.u32l;
    ovl_boss_angel_B468(rdram, ctx);
        goto after_3;
    // 0x430049B0: swc1        $f2, -0x3C24($at)
    MEM_W(-0X3C24, ctx->r1) = ctx->f2.u32l;
    after_3:
    // 0x430049B4: cvt.d.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.d = CVT_D_S(ctx->f0.fl);
    // 0x430049B8: c.lt.d      $f16, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f16.d < ctx->f20.d;
    // 0x430049BC: nop

    // 0x430049C0: bc1f        L_430049D4
    if (!c1cs) {
        // 0x430049C4: nop
    
            goto L_430049D4;
    }
    // 0x430049C4: nop

    // 0x430049C8: lwc1        $f2, 0x0($s5)
    ctx->f2.u32l = MEM_W(ctx->r21, 0X0);
    // 0x430049CC: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430049D0: swc1        $f2, -0x3C24($at)
    MEM_W(-0X3C24, ctx->r1) = ctx->f2.u32l;
L_430049D4:
    // 0x430049D4: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430049D8: lwc1        $f2, -0x3C24($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X3C24);
    // 0x430049DC: lw          $t7, 0x0($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X0);
    // 0x430049E0: nop

    // 0x430049E4: swc1        $f2, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->f2.u32l;
    // 0x430049E8: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    // 0x430049EC: nop

    // 0x430049F0: lw          $t9, 0x94($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X94);
    // 0x430049F4: nop

    // 0x430049F8: jalr        $t9
    // 0x430049FC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x430049FC: nop

    after_4:
L_43004A00:
    // 0x43004A00: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    // 0x43004A04: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43004A08: lwc1        $f4, -0x3C28($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X3C28);
    // 0x43004A0C: lwc1        $f18, 0x4($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X4);
    // 0x43004A10: nop

    // 0x43004A14: add.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x43004A18: swc1        $f8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f8.u32l;
    // 0x43004A1C: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    // 0x43004A20: nop

    // 0x43004A24: lw          $t9, 0x98($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X98);
    // 0x43004A28: nop

    // 0x43004A2C: jalr        $t9
    // 0x43004A30: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x43004A30: nop

    after_5:
    // 0x43004A34: lw          $v0, 0x0($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X0);
    // 0x43004A38: nop

    // 0x43004A3C: beq         $v0, $zero, L_43004A4C
    if (ctx->r2 == 0) {
        // 0x43004A40: nop
    
            goto L_43004A4C;
    }
    // 0x43004A40: nop

    // 0x43004A44: jalr        $v0
    // 0x43004A48: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_6;
    // 0x43004A48: nop

    after_6:
L_43004A4C:
    // 0x43004A4C: jal         0x4300A1D8
    // 0x43004A50: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_boss_angel_A1D8(rdram, ctx);
        goto after_7;
    // 0x43004A50: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_7:
    // 0x43004A54: b           L_430048F4
    // 0x43004A58: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
        goto L_430048F4;
    // 0x43004A58: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    // 0x43004A5C: nop

    // 0x43004A60: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x43004A64: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x43004A68: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x43004A6C: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x43004A70: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x43004A74: lwc1        $f25, 0x20($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x43004A78: lwc1        $f24, 0x24($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X24);
    // 0x43004A7C: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x43004A80: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x43004A84: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x43004A88: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x43004A8C: lw          $s4, 0x3C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X3C);
    // 0x43004A90: lw          $s5, 0x40($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X40);
    // 0x43004A94: lw          $s6, 0x44($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X44);
    // 0x43004A98: lw          $s7, 0x48($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X48);
    // 0x43004A9C: jr          $ra
    // 0x43004AA0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x43004AA0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_boss_angel_4AA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004AA4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x43004AA8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x43004AAC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x43004AB0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x43004AB4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43004AB8: jal         0x4300A1D8
    // 0x43004ABC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_boss_angel_A1D8(rdram, ctx);
        goto after_0;
    // 0x43004ABC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x43004AC0: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x43004AC4: lui         $s2, 0x4301
    ctx->r18 = S32(0X4301 << 16);
    // 0x43004AC8: lui         $s1, 0x4301
    ctx->r17 = S32(0X4301 << 16);
    // 0x43004ACC: lw          $v0, -0x4550($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4550);
    // 0x43004AD0: addiu       $s1, $s1, -0x3CBC
    ctx->r17 = ADD32(ctx->r17, -0X3CBC);
    // 0x43004AD4: addiu       $s2, $s2, -0x47F0
    ctx->r18 = ADD32(ctx->r18, -0X47F0);
    // 0x43004AD8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_43004ADC:
    // 0x43004ADC: beq         $v0, $zero, L_43004ADC
    if (ctx->r2 == 0) {
        // 0x43004AE0: nop
    
            goto L_43004ADC;
    }
    // 0x43004AE0: nop

    // 0x43004AE4: lui         $t6, 0x4301
    ctx->r14 = S32(0X4301 << 16);
    // 0x43004AE8: addiu       $s0, $t6, -0x4550
    ctx->r16 = ADD32(ctx->r14, -0X4550);
    // 0x43004AEC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x43004AF0: nop

L_43004AF4:
    // 0x43004AF4: bne         $v1, $v0, L_43004B10
    if (ctx->r3 != ctx->r2) {
        // 0x43004AF8: nop
    
            goto L_43004B10;
    }
    // 0x43004AF8: nop

    // 0x43004AFC: lw          $t9, 0x4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X4);
    // 0x43004B00: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x43004B04: jalr        $t9
    // 0x43004B08: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x43004B08: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
    after_1:
    // 0x43004B0C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_43004B10:
    // 0x43004B10: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x43004B14: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x43004B18: bne         $v0, $zero, L_43004AF4
    if (ctx->r2 != 0) {
        // 0x43004B1C: nop
    
            goto L_43004AF4;
    }
    // 0x43004B1C: nop

    // 0x43004B20: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x43004B24: lw          $v0, -0x4550($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4550);
    // 0x43004B28: b           L_43004ADC
    // 0x43004B2C: nop

        goto L_43004ADC;
    // 0x43004B2C: nop

    // 0x43004B30: nop

    // 0x43004B34: nop

    // 0x43004B38: nop

    // 0x43004B3C: nop

    // 0x43004B40: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43004B44: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43004B48: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x43004B4C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x43004B50: jr          $ra
    // 0x43004B54: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x43004B54: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_boss_angel_4B58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004B58: lui         $t6, 0x4301
    ctx->r14 = S32(0X4301 << 16);
    // 0x43004B5C: lw          $t6, -0x47F0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X47F0);
    // 0x43004B60: nop

    // 0x43004B64: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x43004B68: nop

    // 0x43004B6C: sw          $at, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r1;
    // 0x43004B70: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x43004B74: nop

    // 0x43004B78: sw          $t9, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r25;
    // 0x43004B7C: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x43004B80: jr          $ra
    // 0x43004B84: sw          $at, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r1;
    return;
    // 0x43004B84: sw          $at, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r1;
;}
RECOMP_FUNC void ovl_boss_angel_4B88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004B88: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x43004B8C: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x43004B90: jal         0x43009930
    // 0x43004B94: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    ovl_boss_angel_9930(rdram, ctx);
        goto after_0;
    // 0x43004B94: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    after_0:
    // 0x43004B98: ori         $t6, $zero, 0x8000
    ctx->r14 = 0 | 0X8000;
    // 0x43004B9C: lui         $t7, 0x4301
    ctx->r15 = S32(0X4301 << 16);
    // 0x43004BA0: sh          $t6, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r14;
    // 0x43004BA4: addiu       $t7, $t7, -0x44D4
    ctx->r15 = ADD32(ctx->r15, -0X44D4);
    // 0x43004BA8: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x43004BAC: lui         $a1, 0x4301
    ctx->r5 = S32(0X4301 << 16);
    // 0x43004BB0: swl         $at, 0x14($v0)
    do_swl(rdram, 0X14, ctx->r2, ctx->r1);
    // 0x43004BB4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x43004BB8: addiu       $a1, $a1, -0x44D0
    ctx->r5 = ADD32(ctx->r5, -0X44D0);
    // 0x43004BBC: addiu       $a0, $v0, 0x18
    ctx->r4 = ADD32(ctx->r2, 0X18);
    // 0x43004BC0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x43004BC4: jal         0x4300A100
    // 0x43004BC8: swr         $at, 0x17($v0)
    do_swr(rdram, 0X17, ctx->r2, ctx->r1);
    ovl_boss_angel_A100(rdram, ctx);
        goto after_1;
    // 0x43004BC8: swr         $at, 0x17($v0)
    do_swr(rdram, 0X17, ctx->r2, ctx->r1);
    after_1:
    // 0x43004BCC: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x43004BD0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x43004BD4: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43004BD8: swc1        $f4, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f4.u32l;
    // 0x43004BDC: sw          $zero, -0x3CCC($at)
    MEM_W(-0X3CCC, ctx->r1) = 0;
    // 0x43004BE0: jal         0x43000F10
    // 0x43004BE4: addiu       $a0, $zero, 0x3E6
    ctx->r4 = ADD32(0, 0X3E6);
    ovl_boss_angel_F10(rdram, ctx);
        goto after_2;
    // 0x43004BE4: addiu       $a0, $zero, 0x3E6
    ctx->r4 = ADD32(0, 0X3E6);
    after_2:
    // 0x43004BE8: lui         $s0, 0x4301
    ctx->r16 = S32(0X4301 << 16);
    // 0x43004BEC: addiu       $s0, $s0, -0x3CEC
    ctx->r16 = ADD32(ctx->r16, -0X3CEC);
    // 0x43004BF0: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x43004BF4: jal         0x4300B290
    // 0x43004BF8: addiu       $a0, $zero, 0xA3B
    ctx->r4 = ADD32(0, 0XA3B);
    ovl_boss_angel_B290(rdram, ctx);
        goto after_3;
    // 0x43004BF8: addiu       $a0, $zero, 0xA3B
    ctx->r4 = ADD32(0, 0XA3B);
    after_3:
    // 0x43004BFC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x43004C00: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x43004C04: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x43004C08: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x43004C0C: cvt.d.s     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f0.d = CVT_D_S(ctx->f6.fl);
    // 0x43004C10: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x43004C14: lui         $t1, 0x4301
    ctx->r9 = S32(0X4301 << 16);
    // 0x43004C18: addiu       $v1, $v1, -0x3CF4
    ctx->r3 = ADD32(ctx->r3, -0X3CF4);
    // 0x43004C1C: addiu       $t1, $t1, -0x3CE8
    ctx->r9 = ADD32(ctx->r9, -0X3CE8);
    // 0x43004C20: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x43004C24: mfc1        $a2, $f1
    ctx->r6 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x43004C28: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x43004C2C: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x43004C30: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x43004C34: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x43004C38: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x43004C3C: swc1        $f11, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(11 - 1) * 2];
    // 0x43004C40: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x43004C44: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x43004C48: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x43004C4C: swc1        $f1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x43004C50: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x43004C54: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x43004C58: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x43004C5C: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x43004C60: jal         0x43000DC0
    // 0x43004C64: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    ovl_boss_angel_DC0(rdram, ctx);
        goto after_4;
    // 0x43004C64: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    after_4:
    // 0x43004C68: jal         0x43004774
    // 0x43004C6C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    ovl_boss_angel_4774(rdram, ctx);
        goto after_5;
    // 0x43004C6C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_5:
    // 0x43004C70: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x43004C74: addiu       $a0, $a0, -0x44E0
    ctx->r4 = ADD32(ctx->r4, -0X44E0);
    // 0x43004C78: lw          $at, 0x0($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X0);
    // 0x43004C7C: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x43004C80: addiu       $v0, $v0, -0x3FF8
    ctx->r2 = ADD32(ctx->r2, -0X3FF8);
    // 0x43004C84: lw          $t4, 0x4($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X4);
    // 0x43004C88: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x43004C8C: lw          $at, 0x8($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X8);
    // 0x43004C90: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x43004C94: lwc1        $f16, 0x4($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X4);
    // 0x43004C98: sw          $at, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r1;
    // 0x43004C9C: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43004CA0: lui         $a2, 0x3D49
    ctx->r6 = S32(0X3D49 << 16);
    // 0x43004CA4: ori         $a2, $a2, 0xFDB
    ctx->r6 = ctx->r6 | 0XFDB;
    // 0x43004CA8: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    // 0x43004CAC: jal         0x43005718
    // 0x43004CB0: swc1        $f16, -0x3C94($at)
    MEM_W(-0X3C94, ctx->r1) = ctx->f16.u32l;
    ovl_boss_angel_5718(rdram, ctx);
        goto after_6;
    // 0x43004CB0: swc1        $f16, -0x3C94($at)
    MEM_W(-0X3C94, ctx->r1) = ctx->f16.u32l;
    after_6:
    // 0x43004CB4: lui         $s0, 0x4301
    ctx->r16 = S32(0X4301 << 16);
    // 0x43004CB8: addiu       $s0, $s0, -0x47F0
    ctx->r16 = ADD32(ctx->r16, -0X47F0);
    // 0x43004CBC: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x43004CC0: lw          $t9, 0x6C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X6C);
    // 0x43004CC4: lui         $a2, 0x4301
    ctx->r6 = S32(0X4301 << 16);
    // 0x43004CC8: addiu       $a2, $a2, -0x4130
    ctx->r6 = ADD32(ctx->r6, -0X4130);
    // 0x43004CCC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x43004CD0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x43004CD4: jalr        $t9
    // 0x43004CD8: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x43004CD8: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    after_7:
    // 0x43004CDC: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x43004CE0: lui         $t5, 0x4300
    ctx->r13 = S32(0X4300 << 16);
    // 0x43004CE4: lw          $t8, 0x3C($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X3C);
    // 0x43004CE8: addiu       $t5, $t5, 0x1D00
    ctx->r13 = ADD32(ctx->r13, 0X1D00);
    // 0x43004CEC: sw          $t5, 0x38($t8)
    MEM_W(0X38, ctx->r24) = ctx->r13;
    // 0x43004CF0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x43004CF4: lui         $a2, 0x3FD9
    ctx->r6 = S32(0X3FD9 << 16);
    // 0x43004CF8: lw          $t9, 0x78($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X78);
    // 0x43004CFC: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x43004D00: jalr        $t9
    // 0x43004D04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x43004D04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x43004D08: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x43004D0C: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43004D10: lwc1        $f18, 0x4($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X4);
    // 0x43004D14: addiu       $a0, $zero, 0xA0E
    ctx->r4 = ADD32(0, 0XA0E);
    // 0x43004D18: jal         0x43006B1C
    // 0x43004D1C: swc1        $f18, -0x3CD0($at)
    MEM_W(-0X3CD0, ctx->r1) = ctx->f18.u32l;
    ovl_boss_angel_6B1C(rdram, ctx);
        goto after_9;
    // 0x43004D1C: swc1        $f18, -0x3CD0($at)
    MEM_W(-0X3CD0, ctx->r1) = ctx->f18.u32l;
    after_9:
    // 0x43004D20: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x43004D24: addiu       $v1, $v1, -0x3CDC
    ctx->r3 = ADD32(ctx->r3, -0X3CDC);
    // 0x43004D28: lui         $t0, 0x4300
    ctx->r8 = S32(0X4300 << 16);
    // 0x43004D2C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x43004D30: addiu       $t0, $t0, 0x1A60
    ctx->r8 = ADD32(ctx->r8, 0X1A60);
    // 0x43004D34: sw          $t0, 0x74($v0)
    MEM_W(0X74, ctx->r2) = ctx->r8;
    // 0x43004D38: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x43004D3C: lui         $t2, 0x4301
    ctx->r10 = S32(0X4301 << 16);
    // 0x43004D40: addiu       $t2, $t2, -0x47EC
    ctx->r10 = ADD32(ctx->r10, -0X47EC);
    // 0x43004D44: sw          $t2, 0x30($t3)
    MEM_W(0X30, ctx->r11) = ctx->r10;
    // 0x43004D48: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x43004D4C: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x43004D50: lw          $t9, 0x8C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8C);
    // 0x43004D54: nop

    // 0x43004D58: jalr        $t9
    // 0x43004D5C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x43004D5C: nop

    after_10:
    // 0x43004D60: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x43004D64: addiu       $v1, $v1, -0x3CDC
    ctx->r3 = ADD32(ctx->r3, -0X3CDC);
    // 0x43004D68: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x43004D6C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x43004D70: lw          $t9, 0xA4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XA4);
    // 0x43004D74: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x43004D78: jalr        $t9
    // 0x43004D7C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x43004D7C: nop

    after_11:
    // 0x43004D80: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x43004D84: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x43004D88: lw          $t9, 0x80($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X80);
    // 0x43004D8C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x43004D90: jalr        $t9
    // 0x43004D94: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x43004D94: nop

    after_12:
    // 0x43004D98: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43004D9C: sw          $zero, -0x3CC8($at)
    MEM_W(-0X3CC8, ctx->r1) = 0;
    // 0x43004DA0: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43004DA4: sw          $zero, -0x3CC4($at)
    MEM_W(-0X3CC4, ctx->r1) = 0;
    // 0x43004DA8: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43004DAC: sw          $zero, -0x3CBC($at)
    MEM_W(-0X3CBC, ctx->r1) = 0;
    // 0x43004DB0: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43004DB4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x43004DB8: sw          $zero, -0x3CD8($at)
    MEM_W(-0X3CD8, ctx->r1) = 0;
    // 0x43004DBC: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43004DC0: swc1        $f4, -0x3CD4($at)
    MEM_W(-0X3CD4, ctx->r1) = ctx->f4.u32l;
    // 0x43004DC4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x43004DC8: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43004DCC: sw          $v0, -0x3CA8($at)
    MEM_W(-0X3CA8, ctx->r1) = ctx->r2;
    // 0x43004DD0: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43004DD4: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x43004DD8: sw          $t4, -0x3C98($at)
    MEM_W(-0X3C98, ctx->r1) = ctx->r12;
    // 0x43004DDC: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43004DE0: sw          $v0, -0x3C68($at)
    MEM_W(-0X3C68, ctx->r1) = ctx->r2;
    // 0x43004DE4: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43004DE8: sw          $zero, -0x3C70($at)
    MEM_W(-0X3C70, ctx->r1) = 0;
    // 0x43004DEC: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43004DF0: sw          $zero, -0x3C60($at)
    MEM_W(-0X3C60, ctx->r1) = 0;
    // 0x43004DF4: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43004DF8: lui         $a0, 0x4300
    ctx->r4 = S32(0X4300 << 16);
    // 0x43004DFC: sw          $zero, -0x3C6C($at)
    MEM_W(-0X3C6C, ctx->r1) = 0;
    // 0x43004E00: addiu       $a0, $a0, 0x4AA4
    ctx->r4 = ADD32(ctx->r4, 0X4AA4);
    // 0x43004E04: ori         $a1, $zero, 0xFECF
    ctx->r5 = 0 | 0XFECF;
    // 0x43004E08: addiu       $a2, $zero, 0x2000
    ctx->r6 = ADD32(0, 0X2000);
    // 0x43004E0C: jal         0x43000820
    // 0x43004E10: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_boss_angel_820(rdram, ctx);
        goto after_13;
    // 0x43004E10: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_13:
    // 0x43004E14: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x43004E18: lw          $t5, 0x0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X0);
    // 0x43004E1C: addiu       $v1, $v1, -0x3CFC
    ctx->r3 = ADD32(ctx->r3, -0X3CFC);
    // 0x43004E20: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x43004E24: lui         $a0, 0x4300
    ctx->r4 = S32(0X4300 << 16);
    // 0x43004E28: addiu       $a0, $a0, 0x47F0
    ctx->r4 = ADD32(ctx->r4, 0X47F0);
    // 0x43004E2C: ori         $a1, $zero, 0xFECF
    ctx->r5 = 0 | 0XFECF;
    // 0x43004E30: addiu       $a2, $zero, 0x2000
    ctx->r6 = ADD32(0, 0X2000);
    // 0x43004E34: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x43004E38: jal         0x43000820
    // 0x43004E3C: sw          $v0, 0x64($t5)
    MEM_W(0X64, ctx->r13) = ctx->r2;
    ovl_boss_angel_820(rdram, ctx);
        goto after_14;
    // 0x43004E3C: sw          $v0, 0x64($t5)
    MEM_W(0X64, ctx->r13) = ctx->r2;
    after_14:
    // 0x43004E40: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x43004E44: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43004E48: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x43004E4C: sw          $v0, -0x3CF8($at)
    MEM_W(-0X3CF8, ctx->r1) = ctx->r2;
    // 0x43004E50: jr          $ra
    // 0x43004E54: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x43004E54: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_boss_angel_4E58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004E58: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x43004E5C: lw          $a0, -0x3C70($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3C70);
    // 0x43004E60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43004E64: beq         $a0, $zero, L_43004E7C
    if (ctx->r4 == 0) {
        // 0x43004E68: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_43004E7C;
    }
    // 0x43004E68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43004E6C: lw          $t9, 0x114($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X114);
    // 0x43004E70: nop

    // 0x43004E74: jalr        $t9
    // 0x43004E78: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43004E78: nop

    after_0:
L_43004E7C:
    // 0x43004E7C: lui         $a1, 0x4301
    ctx->r5 = S32(0X4301 << 16);
    // 0x43004E80: lw          $a1, -0x3C6C($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3C6C);
    // 0x43004E84: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x43004E88: beq         $a1, $zero, L_43004E98
    if (ctx->r5 == 0) {
        // 0x43004E8C: nop
    
            goto L_43004E98;
    }
    // 0x43004E8C: nop

    // 0x43004E90: jal         0x43000DC0
    // 0x43004E94: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_boss_angel_DC0(rdram, ctx);
        goto after_1;
    // 0x43004E94: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_43004E98:
    // 0x43004E98: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x43004E9C: lw          $a0, -0x47F0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X47F0);
    // 0x43004EA0: nop

    // 0x43004EA4: lw          $t9, 0xB0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XB0);
    // 0x43004EA8: nop

    // 0x43004EAC: jalr        $t9
    // 0x43004EB0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x43004EB0: nop

    after_2:
    // 0x43004EB4: lui         $a1, 0x4301
    ctx->r5 = S32(0X4301 << 16);
    // 0x43004EB8: lw          $a1, -0x3CE8($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3CE8);
    // 0x43004EBC: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x43004EC0: jal         0x43000DC0
    // 0x43004EC4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_boss_angel_DC0(rdram, ctx);
        goto after_3;
    // 0x43004EC4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x43004EC8: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x43004ECC: lw          $a0, -0x3CF4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3CF4);
    // 0x43004ED0: jal         0x4300B2BC
    // 0x43004ED4: nop

    ovl_boss_angel_B2BC(rdram, ctx);
        goto after_4;
    // 0x43004ED4: nop

    after_4:
    // 0x43004ED8: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x43004EDC: lw          $a0, -0x3CFC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3CFC);
    // 0x43004EE0: jal         0x4300082C
    // 0x43004EE4: nop

    ovl_boss_angel_82C(rdram, ctx);
        goto after_5;
    // 0x43004EE4: nop

    after_5:
    // 0x43004EE8: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x43004EEC: lw          $a0, -0x3CF8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3CF8);
    // 0x43004EF0: jal         0x4300082C
    // 0x43004EF4: nop

    ovl_boss_angel_82C(rdram, ctx);
        goto after_6;
    // 0x43004EF4: nop

    after_6:
    // 0x43004EF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43004EFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43004F00: jr          $ra
    // 0x43004F04: nop

    return;
    // 0x43004F04: nop

    // 0x43004F08: nop

    // 0x43004F0C: nop

;}
RECOMP_FUNC void ovl_boss_angel_4F10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004F10: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x43004F14: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x43004F18: nop

    // 0x43004F1C: lw          $v1, 0x4C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4C);
    // 0x43004F20: nop

    // 0x43004F24: andi        $t6, $v1, 0x100
    ctx->r14 = ctx->r3 & 0X100;
    // 0x43004F28: bne         $t6, $zero, L_43004F34
    if (ctx->r14 != 0) {
        // 0x43004F2C: ori         $t7, $v1, 0x1
        ctx->r15 = ctx->r3 | 0X1;
            goto L_43004F34;
    }
    // 0x43004F2C: ori         $t7, $v1, 0x1
    ctx->r15 = ctx->r3 | 0X1;
    // 0x43004F30: sw          $t7, 0x4C($v0)
    MEM_W(0X4C, ctx->r2) = ctx->r15;
L_43004F34:
    // 0x43004F34: jr          $ra
    // 0x43004F38: nop

    return;
    // 0x43004F38: nop

;}
RECOMP_FUNC void ovl_boss_angel_4F3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004F3C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43004F40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43004F44: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x43004F48: lwc1        $f2, 0x8($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X8);
    // 0x43004F4C: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x43004F50: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x43004F54: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x43004F58: jal         0x4300B7E0
    // 0x43004F5C: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    ovl_boss_angel_B7E0(rdram, ctx);
        goto after_0;
    // 0x43004F5C: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_0:
    // 0x43004F60: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x43004F64: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x43004F68: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x43004F6C: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x43004F70: nop

    // 0x43004F74: bc1f        L_43004F9C
    if (!c1cs) {
        // 0x43004F78: nop
    
            goto L_43004F9C;
    }
    // 0x43004F78: nop

    // 0x43004F7C: div.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f12.fl, ctx->f0.fl);
    // 0x43004F80: lwc1        $f8, 0x0($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X0);
    // 0x43004F84: lwc1        $f16, 0x8($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X8);
    // 0x43004F88: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x43004F8C: nop

    // 0x43004F90: mul.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x43004F94: swc1        $f10, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f10.u32l;
    // 0x43004F98: swc1        $f18, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f18.u32l;
L_43004F9C:
    // 0x43004F9C: lw          $a0, 0x58($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X58);
    // 0x43004FA0: nop

    // 0x43004FA4: beq         $a0, $zero, L_43004FC8
    if (ctx->r4 == 0) {
        // 0x43004FA8: nop
    
            goto L_43004FC8;
    }
    // 0x43004FA8: nop

    // 0x43004FAC: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x43004FB0: lw          $t9, 0x78($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X78);
    // 0x43004FB4: nop

    // 0x43004FB8: jalr        $t9
    // 0x43004FBC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x43004FBC: nop

    after_1:
    // 0x43004FC0: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x43004FC4: nop

L_43004FC8:
    // 0x43004FC8: lw          $t6, 0x5C($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X5C);
    // 0x43004FCC: nop

    // 0x43004FD0: beq         $t6, $zero, L_43005000
    if (ctx->r14 == 0) {
        // 0x43004FD4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43005000;
    }
    // 0x43004FD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43004FD8: lw          $v0, 0x60($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X60);
    // 0x43004FDC: nop

    // 0x43004FE0: lhu         $t7, 0x0($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X0);
    // 0x43004FE4: addiu       $a0, $v0, 0x1C
    ctx->r4 = ADD32(ctx->r2, 0X1C);
    // 0x43004FE8: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x43004FEC: beq         $t8, $zero, L_43005000
    if (ctx->r24 == 0) {
        // 0x43004FF0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43005000;
    }
    // 0x43004FF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43004FF4: jal         0x4300A100
    // 0x43004FF8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    ovl_boss_angel_A100(rdram, ctx);
        goto after_2;
    // 0x43004FF8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_2:
    // 0x43004FFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43005000:
    // 0x43005000: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43005004: jr          $ra
    // 0x43005008: nop

    return;
    // 0x43005008: nop

;}
RECOMP_FUNC void ovl_boss_angel_500C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300500C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43005010: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43005014: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x43005018: beq         $a1, $zero, L_43005038
    if (ctx->r5 == 0) {
        // 0x4300501C: or          $a3, $a1, $zero
        ctx->r7 = ctx->r5 | 0;
            goto L_43005038;
    }
    // 0x4300501C: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x43005020: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x43005024: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x43005028: lw          $t9, 0x40($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X40);
    // 0x4300502C: lw          $a2, 0xC($a1)
    ctx->r6 = MEM_W(ctx->r5, 0XC);
    // 0x43005030: jalr        $t9
    // 0x43005034: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43005034: nop

    after_0:
L_43005038:
    // 0x43005038: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4300503C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43005040: jr          $ra
    // 0x43005044: nop

    return;
    // 0x43005044: nop

;}
RECOMP_FUNC void ovl_boss_angel_5048(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005048: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x4300504C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x43005050: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x43005054: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x43005058: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x4300505C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x43005060: jal         0x43004F3C
    // 0x43005064: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    ovl_boss_angel_4F3C(rdram, ctx);
        goto after_0;
    // 0x43005064: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x43005068: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x4300506C: or          $s1, $s2, $zero
    ctx->r17 = ctx->r18 | 0;
    // 0x43005070: addiu       $s3, $zero, 0x10
    ctx->r19 = ADD32(0, 0X10);
L_43005074:
    // 0x43005074: lw          $a1, 0x3C($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X3C);
    // 0x43005078: jal         0x4300500C
    // 0x4300507C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    ovl_boss_angel_500C(rdram, ctx);
        goto after_1;
    // 0x4300507C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_1:
    // 0x43005080: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x43005084: bne         $s0, $s3, L_43005074
    if (ctx->r16 != ctx->r19) {
        // 0x43005088: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_43005074;
    }
    // 0x43005088: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x4300508C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43005090: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x43005094: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x43005098: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x4300509C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x430050A0: jr          $ra
    // 0x430050A4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x430050A4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_boss_angel_50A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430050A8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x430050AC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x430050B0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x430050B4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x430050B8: lw          $a0, 0x58($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X58);
    // 0x430050BC: lw          $a1, 0xC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC);
    // 0x430050C0: lw          $t9, 0x7C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X7C);
    // 0x430050C4: lw          $a2, 0x10($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X10);
    // 0x430050C8: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    // 0x430050CC: jalr        $t9
    // 0x430050D0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x430050D0: nop

    after_0:
    // 0x430050D4: lw          $t6, 0x5C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X5C);
    // 0x430050D8: nop

    // 0x430050DC: beq         $t6, $zero, L_43005140
    if (ctx->r14 == 0) {
        // 0x430050E0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_43005140;
    }
    // 0x430050E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x430050E4: lw          $t7, 0x60($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X60);
    // 0x430050E8: nop

    // 0x430050EC: lhu         $t8, 0x0($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X0);
    // 0x430050F0: nop

    // 0x430050F4: andi        $t0, $t8, 0x1
    ctx->r8 = ctx->r24 & 0X1;
    // 0x430050F8: bne         $t0, $zero, L_43005140
    if (ctx->r8 != 0) {
        // 0x430050FC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_43005140;
    }
    // 0x430050FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43005100: lwc1        $f12, 0xC($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XC);
    // 0x43005104: jal         0x4300B4B0
    // 0x43005108: nop

    ovl_boss_angel_B4B0(rdram, ctx);
        goto after_1;
    // 0x43005108: nop

    after_1:
    // 0x4300510C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x43005110: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x43005114: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x43005118: lwc1        $f12, 0xC($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0XC);
    // 0x4300511C: jal         0x4300B670
    // 0x43005120: nop

    ovl_boss_angel_B670(rdram, ctx);
        goto after_2;
    // 0x43005120: nop

    after_2:
    // 0x43005124: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x43005128: lw          $a0, 0x60($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X60);
    // 0x4300512C: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x43005130: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x43005134: jal         0x4300A100
    // 0x43005138: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    ovl_boss_angel_A100(rdram, ctx);
        goto after_3;
    // 0x43005138: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    after_3:
    // 0x4300513C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43005140:
    // 0x43005140: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43005144: jr          $ra
    // 0x43005148: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x43005148: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_boss_angel_514C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300514C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43005150: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x43005154: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43005158: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x4300515C: addu        $v1, $a0, $t6
    ctx->r3 = ADD32(ctx->r4, ctx->r14);
    // 0x43005160: lw          $t7, 0x3C($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X3C);
    // 0x43005164: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x43005168: bne         $t7, $zero, L_4300519C
    if (ctx->r15 != 0) {
        // 0x4300516C: or          $a1, $a2, $zero
        ctx->r5 = ctx->r6 | 0;
            goto L_4300519C;
    }
    // 0x4300516C: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x43005170: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x43005174: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x43005178: jal         0x43005E5C
    // 0x4300517C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    ovl_boss_angel_5E5C(rdram, ctx);
        goto after_0;
    // 0x4300517C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x43005180: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x43005184: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x43005188: lui         $t8, 0x4300
    ctx->r24 = S32(0X4300 << 16);
    // 0x4300518C: sw          $v0, 0x3C($v1)
    MEM_W(0X3C, ctx->r3) = ctx->r2;
    // 0x43005190: addiu       $t8, $t8, 0x4F10
    ctx->r24 = ADD32(ctx->r24, 0X4F10);
    // 0x43005194: sw          $t8, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r24;
    // 0x43005198: sw          $a0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r4;
L_4300519C:
    // 0x4300519C: lw          $t9, 0x98($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X98);
    // 0x430051A0: nop

    // 0x430051A4: jalr        $t9
    // 0x430051A8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x430051A8: nop

    after_1:
    // 0x430051AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430051B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x430051B4: jr          $ra
    // 0x430051B8: nop

    return;
    // 0x430051B8: nop

;}
RECOMP_FUNC void ovl_boss_angel_51BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430051BC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x430051C0: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x430051C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430051C8: addu        $v0, $a0, $t6
    ctx->r2 = ADD32(ctx->r4, ctx->r14);
    // 0x430051CC: lw          $a2, 0x3C($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X3C);
    // 0x430051D0: nop

    // 0x430051D4: beq         $a2, $zero, L_43005200
    if (ctx->r6 == 0) {
        // 0x430051D8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43005200;
    }
    // 0x430051D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430051DC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x430051E0: lw          $t9, 0x54($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X54);
    // 0x430051E4: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x430051E8: jalr        $t9
    // 0x430051EC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x430051EC: nop

    after_0:
    // 0x430051F0: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x430051F4: nop

    // 0x430051F8: sw          $zero, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = 0;
    // 0x430051FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43005200:
    // 0x43005200: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x43005204: jr          $ra
    // 0x43005208: nop

    return;
    // 0x43005208: nop

;}
RECOMP_FUNC void ovl_boss_angel_520C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300520C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43005210: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x43005214: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43005218: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x4300521C: addu        $t7, $a0, $t6
    ctx->r15 = ADD32(ctx->r4, ctx->r14);
    // 0x43005220: lw          $a2, 0x3C($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X3C);
    // 0x43005224: nop

    // 0x43005228: beq         $a2, $zero, L_43005244
    if (ctx->r6 == 0) {
        // 0x4300522C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43005244;
    }
    // 0x4300522C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43005230: lw          $t9, 0x44($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X44);
    // 0x43005234: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x43005238: jalr        $t9
    // 0x4300523C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x4300523C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
    // 0x43005240: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43005244:
    // 0x43005244: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43005248: jr          $ra
    // 0x4300524C: nop

    return;
    // 0x4300524C: nop

;}
RECOMP_FUNC void ovl_boss_angel_5250(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005250: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43005254: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x43005258: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4300525C: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x43005260: addu        $t7, $a0, $t6
    ctx->r15 = ADD32(ctx->r4, ctx->r14);
    // 0x43005264: lw          $a2, 0x3C($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X3C);
    // 0x43005268: nop

    // 0x4300526C: beq         $a2, $zero, L_43005288
    if (ctx->r6 == 0) {
        // 0x43005270: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43005288;
    }
    // 0x43005270: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43005274: lw          $t9, 0x48($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X48);
    // 0x43005278: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x4300527C: jalr        $t9
    // 0x43005280: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43005280: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
    // 0x43005284: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43005288:
    // 0x43005288: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4300528C: jr          $ra
    // 0x43005290: nop

    return;
    // 0x43005290: nop

;}
RECOMP_FUNC void ovl_boss_angel_5294(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005294: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43005298: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x4300529C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430052A0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x430052A4: addu        $t8, $a0, $t7
    ctx->r24 = ADD32(ctx->r4, ctx->r15);
    // 0x430052A8: lw          $a3, 0x3C($t8)
    ctx->r7 = MEM_W(ctx->r24, 0X3C);
    // 0x430052AC: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x430052B0: beq         $a3, $zero, L_430052D8
    if (ctx->r7 == 0) {
        // 0x430052B4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_430052D8;
    }
    // 0x430052B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430052B8: lw          $t9, 0x58($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X58);
    // 0x430052BC: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x430052C0: lw          $a1, 0x4($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X4);
    // 0x430052C4: lw          $t9, 0x50($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X50);
    // 0x430052C8: nop

    // 0x430052CC: jalr        $t9
    // 0x430052D0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x430052D0: nop

    after_0:
    // 0x430052D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_430052D8:
    // 0x430052D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x430052DC: jr          $ra
    // 0x430052E0: nop

    return;
    // 0x430052E0: nop

;}
RECOMP_FUNC void ovl_boss_angel_52E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430052E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x430052E8: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x430052EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430052F0: addu        $t7, $a0, $t6
    ctx->r15 = ADD32(ctx->r4, ctx->r14);
    // 0x430052F4: lw          $a3, 0x3C($t7)
    ctx->r7 = MEM_W(ctx->r15, 0X3C);
    // 0x430052F8: nop

    // 0x430052FC: beq         $a3, $zero, L_43005318
    if (ctx->r7 == 0) {
        // 0x43005300: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43005318;
    }
    // 0x43005300: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43005304: lw          $t9, 0x4C($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X4C);
    // 0x43005308: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x4300530C: jalr        $t9
    // 0x43005310: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43005310: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_0:
    // 0x43005314: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43005318:
    // 0x43005318: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4300531C: jr          $ra
    // 0x43005320: nop

    return;
    // 0x43005320: nop

;}
