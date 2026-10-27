#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_boss_angel_69D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430069D0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x430069D4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x430069D8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x430069DC: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x430069E0: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x430069E4: lw          $t6, 0x20($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X20);
    // 0x430069E8: mtc1        $a1, $f20
    ctx->f20.u32l = ctx->r5;
    // 0x430069EC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x430069F0: bne         $t6, $at, L_43006A38
    if (ctx->r14 != ctx->r1) {
        // 0x430069F4: or          $s0, $a0, $zero
        ctx->r16 = ctx->r4 | 0;
            goto L_43006A38;
    }
    // 0x430069F4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x430069F8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x430069FC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x43006A00: nop

    // 0x43006A04: sub.s       $f20, $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f4.fl;
    // 0x43006A08: lw          $t9, 0x80($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X80);
L_43006A0C:
    // 0x43006A0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43006A10: jalr        $t9
    // 0x43006A14: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43006A14: nop

    after_0:
    // 0x43006A18: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x43006A1C: nop

    // 0x43006A20: bc1t        L_43006A3C
    if (c1cs) {
        // 0x43006A24: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_43006A3C;
    }
    // 0x43006A24: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43006A28: jal         0x4300A1D8
    // 0x43006A2C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_boss_angel_A1D8(rdram, ctx);
        goto after_1;
    // 0x43006A2C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x43006A30: b           L_43006A0C
    // 0x43006A34: lw          $t9, 0x80($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X80);
        goto L_43006A0C;
    // 0x43006A34: lw          $t9, 0x80($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X80);
L_43006A38:
    // 0x43006A38: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43006A3C:
    // 0x43006A3C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x43006A40: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x43006A44: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x43006A48: jr          $ra
    // 0x43006A4C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x43006A4C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_boss_angel_6A50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006A50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43006A54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43006A58: lw          $t7, 0x24($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X24);
    // 0x43006A5C: lw          $t6, 0x30($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X30);
    // 0x43006A60: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x43006A64: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x43006A68: lw          $a1, 0x4($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X4);
    // 0x43006A6C: lw          $t9, 0xB8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XB8);
    // 0x43006A70: nop

    // 0x43006A74: jalr        $t9
    // 0x43006A78: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43006A78: nop

    after_0:
    // 0x43006A7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43006A80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43006A84: jr          $ra
    // 0x43006A88: nop

    return;
    // 0x43006A88: nop

;}
RECOMP_FUNC void ovl_boss_angel_6A8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006A8C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43006A90: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43006A94: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43006A98: jal         0x43006654
    // 0x43006A9C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    ovl_boss_angel_6654(rdram, ctx);
        goto after_0;
    // 0x43006A9C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x43006AA0: lw          $t9, 0xA8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XA8);
    // 0x43006AA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43006AA8: jalr        $t9
    // 0x43006AAC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x43006AAC: nop

    after_1:
    // 0x43006AB0: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x43006AB4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x43006AB8: jal         0x43000DC0
    // 0x43006ABC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_boss_angel_DC0(rdram, ctx);
        goto after_2;
    // 0x43006ABC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x43006AC0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x43006AC4: jal         0x4300B2BC
    // 0x43006AC8: nop

    ovl_boss_angel_B2BC(rdram, ctx);
        goto after_3;
    // 0x43006AC8: nop

    after_3:
    // 0x43006ACC: lw          $t6, 0x8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X8);
    // 0x43006AD0: nop

    // 0x43006AD4: bltz        $t6, L_43006AE8
    if (SIGNED(ctx->r14) < 0) {
        // 0x43006AD8: nop
    
            goto L_43006AE8;
    }
    // 0x43006AD8: nop

    // 0x43006ADC: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x43006AE0: jal         0x4300B2BC
    // 0x43006AE4: nop

    ovl_boss_angel_B2BC(rdram, ctx);
        goto after_4;
    // 0x43006AE4: nop

    after_4:
L_43006AE8:
    // 0x43006AE8: lw          $t7, 0xC($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC);
    // 0x43006AEC: nop

    // 0x43006AF0: bltz        $t7, L_43006B04
    if (SIGNED(ctx->r15) < 0) {
        // 0x43006AF4: nop
    
            goto L_43006B04;
    }
    // 0x43006AF4: nop

    // 0x43006AF8: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x43006AFC: jal         0x4300B2BC
    // 0x43006B00: nop

    ovl_boss_angel_B2BC(rdram, ctx);
        goto after_5;
    // 0x43006B00: nop

    after_5:
L_43006B04:
    // 0x43006B04: jal         0x430000F4
    // 0x43006B08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_boss_angel_F4(rdram, ctx);
        goto after_6;
    // 0x43006B08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x43006B0C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43006B10: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43006B14: jr          $ra
    // 0x43006B18: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x43006B18: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_boss_angel_6B1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006B1C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x43006B20: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x43006B24: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x43006B28: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x43006B2C: jal         0x430000E8
    // 0x43006B30: addiu       $a0, $zero, 0xC4
    ctx->r4 = ADD32(0, 0XC4);
    ovl_boss_angel_E8(rdram, ctx);
        goto after_0;
    // 0x43006B30: addiu       $a0, $zero, 0xC4
    ctx->r4 = ADD32(0, 0XC4);
    after_0:
    // 0x43006B34: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x43006B38: jal         0x4300B290
    // 0x43006B3C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    ovl_boss_angel_B290(rdram, ctx);
        goto after_1;
    // 0x43006B3C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_1:
    // 0x43006B40: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x43006B44: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x43006B48: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x43006B4C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x43006B50: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x43006B54: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x43006B58: jal         0x43000DC0
    // 0x43006B5C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_boss_angel_DC0(rdram, ctx);
        goto after_2;
    // 0x43006B5C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x43006B60: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x43006B64: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    // 0x43006B68: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x43006B6C: jal         0x43000DC0
    // 0x43006B70: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_boss_angel_DC0(rdram, ctx);
        goto after_3;
    // 0x43006B70: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x43006B74: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x43006B78: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x43006B7C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x43006B80: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x43006B84: lui         $t6, 0x4301
    ctx->r14 = S32(0X4301 << 16);
    // 0x43006B88: addiu       $t6, $t6, -0x4470
    ctx->r14 = ADD32(ctx->r14, -0X4470);
    // 0x43006B8C: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x43006B90: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x43006B94: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x43006B98: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x43006B9C: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x43006BA0: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x43006BA4: sw          $zero, 0x20($s0)
    MEM_W(0X20, ctx->r16) = 0;
    // 0x43006BA8: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    // 0x43006BAC: sw          $t6, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r14;
    // 0x43006BB0: sw          $zero, 0x34($s0)
    MEM_W(0X34, ctx->r16) = 0;
    // 0x43006BB4: sw          $zero, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = 0;
    // 0x43006BB8: sw          $zero, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = 0;
    // 0x43006BBC: sw          $zero, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = 0;
    // 0x43006BC0: lui         $t7, 0x4301
    ctx->r15 = S32(0X4301 << 16);
    // 0x43006BC4: swc1        $f4, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f4.u32l;
    // 0x43006BC8: swc1        $f6, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f6.u32l;
    // 0x43006BCC: lw          $t7, -0x3FEC($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3FEC);
    // 0x43006BD0: lui         $t8, 0x4300
    ctx->r24 = S32(0X4300 << 16);
    // 0x43006BD4: sw          $t7, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->r15;
    // 0x43006BD8: lui         $t9, 0x4300
    ctx->r25 = S32(0X4300 << 16);
    // 0x43006BDC: lui         $t0, 0x4300
    ctx->r8 = S32(0X4300 << 16);
    // 0x43006BE0: lui         $t1, 0x4300
    ctx->r9 = S32(0X4300 << 16);
    // 0x43006BE4: lui         $t2, 0x4300
    ctx->r10 = S32(0X4300 << 16);
    // 0x43006BE8: lui         $t3, 0x4300
    ctx->r11 = S32(0X4300 << 16);
    // 0x43006BEC: lui         $t4, 0x4300
    ctx->r12 = S32(0X4300 << 16);
    // 0x43006BF0: lui         $t5, 0x4300
    ctx->r13 = S32(0X4300 << 16);
    // 0x43006BF4: lui         $t6, 0x4300
    ctx->r14 = S32(0X4300 << 16);
    // 0x43006BF8: lui         $t7, 0x4300
    ctx->r15 = S32(0X4300 << 16);
    // 0x43006BFC: addiu       $t8, $t8, 0x5FD0
    ctx->r24 = ADD32(ctx->r24, 0X5FD0);
    // 0x43006C00: addiu       $t9, $t9, 0x5FDC
    ctx->r25 = ADD32(ctx->r25, 0X5FDC);
    // 0x43006C04: addiu       $t0, $t0, 0x6010
    ctx->r8 = ADD32(ctx->r8, 0X6010);
    // 0x43006C08: addiu       $t1, $t1, 0x6074
    ctx->r9 = ADD32(ctx->r9, 0X6074);
    // 0x43006C0C: addiu       $t2, $t2, 0x60E0
    ctx->r10 = ADD32(ctx->r10, 0X60E0);
    // 0x43006C10: addiu       $t3, $t3, 0x6140
    ctx->r11 = ADD32(ctx->r11, 0X6140);
    // 0x43006C14: addiu       $t4, $t4, 0x61B4
    ctx->r12 = ADD32(ctx->r12, 0X61B4);
    // 0x43006C18: addiu       $t5, $t5, 0x6240
    ctx->r13 = ADD32(ctx->r13, 0X6240);
    // 0x43006C1C: addiu       $t6, $t6, 0x627C
    ctx->r14 = ADD32(ctx->r14, 0X627C);
    // 0x43006C20: addiu       $t7, $t7, 0x62A8
    ctx->r15 = ADD32(ctx->r15, 0X62A8);
    // 0x43006C24: sw          $t8, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->r24;
    // 0x43006C28: sw          $t9, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r25;
    // 0x43006C2C: sw          $t0, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r8;
    // 0x43006C30: sw          $t1, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r9;
    // 0x43006C34: sw          $t2, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r10;
    // 0x43006C38: sw          $t3, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->r11;
    // 0x43006C3C: sw          $t4, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r12;
    // 0x43006C40: sw          $t5, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r13;
    // 0x43006C44: sw          $t6, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->r14;
    // 0x43006C48: sw          $t7, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->r15;
    // 0x43006C4C: lui         $t8, 0x4300
    ctx->r24 = S32(0X4300 << 16);
    // 0x43006C50: lui         $t9, 0x4300
    ctx->r25 = S32(0X4300 << 16);
    // 0x43006C54: lui         $t0, 0x4300
    ctx->r8 = S32(0X4300 << 16);
    // 0x43006C58: lui         $t1, 0x4300
    ctx->r9 = S32(0X4300 << 16);
    // 0x43006C5C: lui         $t2, 0x4300
    ctx->r10 = S32(0X4300 << 16);
    // 0x43006C60: lui         $t3, 0x4300
    ctx->r11 = S32(0X4300 << 16);
    // 0x43006C64: lui         $t4, 0x4300
    ctx->r12 = S32(0X4300 << 16);
    // 0x43006C68: lui         $t5, 0x4300
    ctx->r13 = S32(0X4300 << 16);
    // 0x43006C6C: lui         $t6, 0x4300
    ctx->r14 = S32(0X4300 << 16);
    // 0x43006C70: lui         $t7, 0x4300
    ctx->r15 = S32(0X4300 << 16);
    // 0x43006C74: addiu       $t8, $t8, 0x62E4
    ctx->r24 = ADD32(ctx->r24, 0X62E4);
    // 0x43006C78: addiu       $t9, $t9, 0x636C
    ctx->r25 = ADD32(ctx->r25, 0X636C);
    // 0x43006C7C: addiu       $t0, $t0, 0x67DC
    ctx->r8 = ADD32(ctx->r8, 0X67DC);
    // 0x43006C80: addiu       $t1, $t1, 0x685C
    ctx->r9 = ADD32(ctx->r9, 0X685C);
    // 0x43006C84: addiu       $t2, $t2, 0x68BC
    ctx->r10 = ADD32(ctx->r10, 0X68BC);
    // 0x43006C88: addiu       $t3, $t3, 0x6930
    ctx->r11 = ADD32(ctx->r11, 0X6930);
    // 0x43006C8C: addiu       $t4, $t4, 0x6998
    ctx->r12 = ADD32(ctx->r12, 0X6998);
    // 0x43006C90: addiu       $t5, $t5, 0x69D0
    ctx->r13 = ADD32(ctx->r13, 0X69D0);
    // 0x43006C94: addiu       $t6, $t6, 0x6A50
    ctx->r14 = ADD32(ctx->r14, 0X6A50);
    // 0x43006C98: addiu       $t7, $t7, 0x6A8C
    ctx->r15 = ADD32(ctx->r15, 0X6A8C);
    // 0x43006C9C: sw          $t8, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->r24;
    // 0x43006CA0: sw          $t9, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->r25;
    // 0x43006CA4: sw          $t0, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r8;
    // 0x43006CA8: sw          $t1, 0xA8($s0)
    MEM_W(0XA8, ctx->r16) = ctx->r9;
    // 0x43006CAC: sw          $t2, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->r10;
    // 0x43006CB0: sw          $t3, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->r11;
    // 0x43006CB4: sw          $t4, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r12;
    // 0x43006CB8: sw          $t5, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->r13;
    // 0x43006CBC: sw          $t6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->r14;
    // 0x43006CC0: sw          $t7, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = ctx->r15;
    // 0x43006CC4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43006CC8: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x43006CCC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x43006CD0: jr          $ra
    // 0x43006CD4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x43006CD4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_boss_angel_6CD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006CD8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x43006CDC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43006CE0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x43006CE4: beq         $a3, $zero, L_43006CF8
    if (ctx->r7 == 0) {
        // 0x43006CE8: sw          $a2, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r6;
            goto L_43006CF8;
    }
    // 0x43006CE8: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x43006CEC: addiu       $v1, $sp, 0x24
    ctx->r3 = ADD32(ctx->r29, 0X24);
    // 0x43006CF0: b           L_43006D04
    // 0x43006CF4: sh          $zero, 0x0($v1)
    MEM_H(0X0, ctx->r3) = 0;
        goto L_43006D04;
    // 0x43006CF4: sh          $zero, 0x0($v1)
    MEM_H(0X0, ctx->r3) = 0;
L_43006CF8:
    // 0x43006CF8: addiu       $v1, $sp, 0x24
    ctx->r3 = ADD32(ctx->r29, 0X24);
    // 0x43006CFC: addiu       $t6, $zero, 0xFF0
    ctx->r14 = ADD32(0, 0XFF0);
    // 0x43006D00: sh          $t6, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r14;
L_43006D04:
    // 0x43006D04: beq         $a3, $zero, L_43006D14
    if (ctx->r7 == 0) {
        // 0x43006D08: addiu       $v0, $zero, -0xFF
        ctx->r2 = ADD32(0, -0XFF);
            goto L_43006D14;
    }
    // 0x43006D08: addiu       $v0, $zero, -0xFF
    ctx->r2 = ADD32(0, -0XFF);
    // 0x43006D0C: b           L_43006D14
    // 0x43006D10: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
        goto L_43006D14;
    // 0x43006D10: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_43006D14:
    // 0x43006D14: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x43006D18: sll         $t7, $v0, 4
    ctx->r15 = S32(ctx->r2 << 4);
    // 0x43006D1C: div         $zero, $t7, $t8
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r24))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r24)));
    // 0x43006D20: lui         $a2, 0x4300
    ctx->r6 = S32(0X4300 << 16);
    // 0x43006D24: bne         $t8, $zero, L_43006D30
    if (ctx->r24 != 0) {
        // 0x43006D28: nop
    
            goto L_43006D30;
    }
    // 0x43006D28: nop

    // 0x43006D2C: break       7
    do_break(1124101420);
L_43006D30:
    // 0x43006D30: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x43006D34: bne         $t8, $at, L_43006D48
    if (ctx->r24 != ctx->r1) {
        // 0x43006D38: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_43006D48;
    }
    // 0x43006D38: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x43006D3C: bne         $t7, $at, L_43006D48
    if (ctx->r15 != ctx->r1) {
        // 0x43006D40: nop
    
            goto L_43006D48;
    }
    // 0x43006D40: nop

    // 0x43006D44: break       6
    do_break(1124101444);
L_43006D48:
    // 0x43006D48: addiu       $a2, $a2, 0x63B0
    ctx->r6 = ADD32(ctx->r6, 0X63B0);
    // 0x43006D4C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x43006D50: mflo        $t9
    ctx->r25 = lo;
    // 0x43006D54: sh          $t9, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r25;
    // 0x43006D58: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x43006D5C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x43006D60: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x43006D64: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x43006D68: lw          $t9, 0xA0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XA0);
    // 0x43006D6C: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x43006D70: jalr        $t9
    // 0x43006D74: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43006D74: nop

    after_0:
    // 0x43006D78: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x43006D7C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43006D80: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43006D84: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x43006D88: jr          $ra
    // 0x43006D8C: sw          $t2, -0x3C20($at)
    MEM_W(-0X3C20, ctx->r1) = ctx->r10;
    return;
    // 0x43006D8C: sw          $t2, -0x3C20($at)
    MEM_W(-0X3C20, ctx->r1) = ctx->r10;
;}
RECOMP_FUNC void ovl_boss_angel_6D90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006D90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43006D94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43006D98: jal         0x43006CD8
    // 0x43006D9C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_boss_angel_6CD8(rdram, ctx);
        goto after_0;
    // 0x43006D9C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x43006DA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43006DA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43006DA8: jr          $ra
    // 0x43006DAC: nop

    return;
    // 0x43006DAC: nop

;}
RECOMP_FUNC void ovl_boss_angel_6DB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006DB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43006DB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43006DB8: jal         0x43006CD8
    // 0x43006DBC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_boss_angel_6CD8(rdram, ctx);
        goto after_0;
    // 0x43006DBC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x43006DC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43006DC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43006DC8: jr          $ra
    // 0x43006DCC: nop

    return;
    // 0x43006DCC: nop

;}
RECOMP_FUNC void ovl_boss_angel_6DD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006DD0: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x43006DD4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x43006DD8: addiu       $v0, $v0, -0x3C20
    ctx->r2 = ADD32(ctx->r2, -0X3C20);
    // 0x43006DDC: sh          $t6, 0x5A($a0)
    MEM_H(0X5A, ctx->r4) = ctx->r14;
    // 0x43006DE0: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x43006DE4: lh          $t8, 0x58($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X58);
    // 0x43006DE8: nop

    // 0x43006DEC: subu        $t9, $t7, $t8
    ctx->r25 = SUB32(ctx->r15, ctx->r24);
    // 0x43006DF0: jr          $ra
    // 0x43006DF4: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    return;
    // 0x43006DF4: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
;}
RECOMP_FUNC void ovl_boss_angel_6DF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006DF8: jr          $ra
    // 0x43006DFC: sh          $zero, 0x5A($a0)
    MEM_H(0X5A, ctx->r4) = 0;
    return;
    // 0x43006DFC: sh          $zero, 0x5A($a0)
    MEM_H(0X5A, ctx->r4) = 0;
;}
RECOMP_FUNC void ovl_boss_angel_6E00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006E00: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x43006E04: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x43006E08: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x43006E0C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x43006E10: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x43006E14: or          $s2, $a3, $zero
    ctx->r18 = ctx->r7 | 0;
    // 0x43006E18: jal         0x43006D90
    // 0x43006E1C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    ovl_boss_angel_6D90(rdram, ctx);
        goto after_0;
    // 0x43006E1C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x43006E20: blez        $s2, L_43006E44
    if (SIGNED(ctx->r18) <= 0) {
        // 0x43006E24: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_43006E44;
    }
    // 0x43006E24: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_43006E28:
    // 0x43006E28: lw          $t9, 0x4C($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X4C);
    // 0x43006E2C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x43006E30: jalr        $t9
    // 0x43006E34: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x43006E34: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x43006E38: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x43006E3C: bne         $s0, $s2, L_43006E28
    if (ctx->r16 != ctx->r18) {
        // 0x43006E40: nop
    
            goto L_43006E28;
    }
    // 0x43006E40: nop

L_43006E44:
    // 0x43006E44: jal         0x43006DD0
    // 0x43006E48: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_boss_angel_6DD0(rdram, ctx);
        goto after_2;
    // 0x43006E48: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x43006E4C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43006E50: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43006E54: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x43006E58: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x43006E5C: jr          $ra
    // 0x43006E60: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x43006E60: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_boss_angel_6E64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006E64: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43006E68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43006E6C: lw          $t6, 0x50($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X50);
    // 0x43006E70: addiu       $v0, $sp, 0x1C
    ctx->r2 = ADD32(ctx->r29, 0X1C);
    // 0x43006E74: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x43006E78: lh          $t7, 0x2($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X2);
    // 0x43006E7C: lui         $t0, 0x4301
    ctx->r8 = S32(0X4301 << 16);
    // 0x43006E80: negu        $t8, $t7
    ctx->r24 = SUB32(0, ctx->r15);
    // 0x43006E84: sh          $t8, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r24;
    // 0x43006E88: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x43006E8C: nop

    // 0x43006E90: sw          $t9, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->r25;
    // 0x43006E94: lw          $t0, -0x3C20($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X3C20);
    // 0x43006E98: jal         0x43006DF8
    // 0x43006E9C: sh          $t0, 0x58($a0)
    MEM_H(0X58, ctx->r4) = ctx->r8;
    ovl_boss_angel_6DF8(rdram, ctx);
        goto after_0;
    // 0x43006E9C: sh          $t0, 0x58($a0)
    MEM_H(0X58, ctx->r4) = ctx->r8;
    after_0:
    // 0x43006EA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43006EA4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x43006EA8: jr          $ra
    // 0x43006EAC: nop

    return;
    // 0x43006EAC: nop

;}
RECOMP_FUNC void ovl_boss_angel_6EB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006EB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43006EB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43006EB8: jal         0x43006654
    // 0x43006EBC: nop

    ovl_boss_angel_6654(rdram, ctx);
        goto after_0;
    // 0x43006EBC: nop

    after_0:
    // 0x43006EC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43006EC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43006EC8: jr          $ra
    // 0x43006ECC: nop

    return;
    // 0x43006ECC: nop

;}
RECOMP_FUNC void ovl_boss_angel_6ED0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006ED0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43006ED4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x43006ED8: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x43006EDC: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x43006EE0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43006EE4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x43006EE8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x43006EEC: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x43006EF0: lw          $t9, 0xA0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XA0);
    // 0x43006EF4: lui         $a2, 0x4300
    ctx->r6 = S32(0X4300 << 16);
    // 0x43006EF8: addiu       $a2, $a2, 0x6564
    ctx->r6 = ADD32(ctx->r6, 0X6564);
    // 0x43006EFC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x43006F00: jalr        $t9
    // 0x43006F04: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43006F04: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x43006F08: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x43006F0C: addiu       $at, $zero, -0x100
    ctx->r1 = ADD32(0, -0X100);
    // 0x43006F10: lw          $t8, 0x6C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X6C);
    // 0x43006F14: nop

    // 0x43006F18: and         $t0, $t8, $at
    ctx->r8 = ctx->r24 & ctx->r1;
    // 0x43006F1C: ori         $t1, $t0, 0x80
    ctx->r9 = ctx->r8 | 0X80;
    // 0x43006F20: sw          $t1, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r9;
    // 0x43006F24: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43006F28: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x43006F2C: jr          $ra
    // 0x43006F30: nop

    return;
    // 0x43006F30: nop

;}
RECOMP_FUNC void ovl_boss_angel_6F34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006F34: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43006F38: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43006F3C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x43006F40: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x43006F44: lw          $t9, 0xA0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XA0);
    // 0x43006F48: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x43006F4C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x43006F50: jalr        $t9
    // 0x43006F54: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43006F54: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x43006F58: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43006F5C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x43006F60: jr          $ra
    // 0x43006F64: nop

    return;
    // 0x43006F64: nop

;}
RECOMP_FUNC void ovl_boss_angel_6F68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006F68: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43006F6C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x43006F70: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x43006F74: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43006F78: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x43006F7C: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x43006F80: lw          $t9, 0xA0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XA0);
    // 0x43006F84: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x43006F88: lui         $a2, 0x4300
    ctx->r6 = S32(0X4300 << 16);
    // 0x43006F8C: addiu       $a2, $a2, 0x649C
    ctx->r6 = ADD32(ctx->r6, 0X649C);
    // 0x43006F90: jalr        $t9
    // 0x43006F94: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43006F94: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x43006F98: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43006F9C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x43006FA0: jr          $ra
    // 0x43006FA4: nop

    return;
    // 0x43006FA4: nop

    // 0x43006FA8: nop

    // 0x43006FAC: nop

;}
RECOMP_FUNC void ovl_boss_angel_6FB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006FB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43006FB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43006FB8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x43006FBC: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x43006FC0: nop

    // 0x43006FC4: lw          $t6, 0x1FC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X1FC);
    // 0x43006FC8: nop

    // 0x43006FCC: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x43006FD0: jal         0x4300AA40
    // 0x43006FD4: sw          $t7, 0x1FC($v0)
    MEM_W(0X1FC, ctx->r2) = ctx->r15;
    ovl_boss_angel_AA40(rdram, ctx);
        goto after_0;
    // 0x43006FD4: sw          $t7, 0x1FC($v0)
    MEM_W(0X1FC, ctx->r2) = ctx->r15;
    after_0:
    // 0x43006FD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43006FDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43006FE0: jr          $ra
    // 0x43006FE4: nop

    return;
    // 0x43006FE4: nop

;}
RECOMP_FUNC void ovl_boss_angel_6FE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006FE8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43006FEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43006FF0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x43006FF4: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x43006FF8: lw          $t6, 0x24($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X24);
    // 0x43006FFC: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x43007000: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x43007004: lw          $a1, 0x28($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X28);
    // 0x43007008: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x4300700C: bltz        $a1, L_43007028
    if (SIGNED(ctx->r5) < 0) {
        // 0x43007010: nop
    
            goto L_43007028;
    }
    // 0x43007010: nop

    // 0x43007014: jal         0x43007514
    // 0x43007018: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    ovl_boss_angel_7514(rdram, ctx);
        goto after_0;
    // 0x43007018: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    after_0:
    // 0x4300701C: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x43007020: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x43007024: sw          $t7, 0x28($a3)
    MEM_W(0X28, ctx->r7) = ctx->r15;
L_43007028:
    // 0x43007028: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x4300702C: jal         0x4300A9C8
    // 0x43007030: nop

    ovl_boss_angel_A9C8(rdram, ctx);
        goto after_1;
    // 0x43007030: nop

    after_1:
    // 0x43007034: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43007038: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4300703C: jr          $ra
    // 0x43007040: nop

    return;
    // 0x43007040: nop

;}
RECOMP_FUNC void ovl_boss_angel_7044(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007044: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43007048: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4300704C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x43007050: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x43007054: jal         0x4300A9C8
    // 0x43007058: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    ovl_boss_angel_A9C8(rdram, ctx);
        goto after_0;
    // 0x43007058: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
    // 0x4300705C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43007060: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43007064: jr          $ra
    // 0x43007068: nop

    return;
    // 0x43007068: nop

;}
RECOMP_FUNC void ovl_boss_angel_706C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300706C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43007070: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43007074: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x43007078: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x4300707C: lw          $a3, 0x24($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X24);
    // 0x43007080: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x43007084: bne         $a1, $at, L_430070B0
    if (ctx->r5 != ctx->r1) {
        // 0x43007088: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_430070B0;
    }
    // 0x43007088: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x4300708C: lw          $a1, 0x28($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X28);
    // 0x43007090: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x43007094: bltz        $a1, L_430070B4
    if (SIGNED(ctx->r5) < 0) {
        // 0x43007098: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_430070B4;
    }
    // 0x43007098: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4300709C: jal         0x43007514
    // 0x430070A0: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    ovl_boss_angel_7514(rdram, ctx);
        goto after_0;
    // 0x430070A0: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x430070A4: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x430070A8: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x430070AC: sw          $t6, 0x28($a2)
    MEM_W(0X28, ctx->r6) = ctx->r14;
L_430070B0:
    // 0x430070B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_430070B4:
    // 0x430070B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x430070B8: jr          $ra
    // 0x430070BC: nop

    return;
    // 0x430070BC: nop

;}
RECOMP_FUNC void ovl_boss_angel_70C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430070C0: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x430070C4: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x430070C8: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x430070CC: lw          $v1, 0x1F8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1F8);
    // 0x430070D0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x430070D4: slti        $at, $v1, 0x18
    ctx->r1 = SIGNED(ctx->r3) < 0X18 ? 1 : 0;
    // 0x430070D8: bne         $at, $zero, L_430070E8
    if (ctx->r1 != 0) {
        // 0x430070DC: sll         $t6, $v1, 2
        ctx->r14 = S32(ctx->r3 << 2);
            goto L_430070E8;
    }
    // 0x430070DC: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x430070E0: b           L_430071E0
    // 0x430070E4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_430071E0;
    // 0x430070E4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_430070E8:
    // 0x430070E8: addu        $t7, $s0, $t6
    ctx->r15 = ADD32(ctx->r16, ctx->r14);
    // 0x430070EC: lw          $t8, 0x198($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X198);
    // 0x430070F0: addiu       $t9, $v1, 0x1
    ctx->r25 = ADD32(ctx->r3, 0X1);
    // 0x430070F4: sw          $t8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r24;
    // 0x430070F8: sw          $t9, 0x1F8($s0)
    MEM_W(0X1F8, ctx->r16) = ctx->r25;
    // 0x430070FC: lw          $t0, 0x64($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X64);
    // 0x43007100: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x43007104: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x43007108: addu        $v0, $s0, $t1
    ctx->r2 = ADD32(ctx->r16, ctx->r9);
    // 0x4300710C: lw          $a1, 0x18($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X18);
    // 0x43007110: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x43007114: beq         $a1, $zero, L_43007188
    if (ctx->r5 == 0) {
        // 0x43007118: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_43007188;
    }
    // 0x43007118: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x4300711C: sw          $a1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r5;
    // 0x43007120: lw          $v1, 0x78($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X78);
    // 0x43007124: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x43007128: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x4300712C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x43007130: addiu       $t2, $zero, 0x1B
    ctx->r10 = ADD32(0, 0X1B);
    // 0x43007134: addiu       $t3, $zero, 0x28
    ctx->r11 = ADD32(0, 0X28);
    // 0x43007138: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x4300713C: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x43007140: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x43007144: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x43007148: swc1        $f7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(7 - 1) * 2];
    // 0x4300714C: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
    // 0x43007150: swc1        $f11, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(11 - 1) * 2];
    // 0x43007154: sw          $t4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r12;
    // 0x43007158: sw          $t3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r11;
    // 0x4300715C: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x43007160: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x43007164: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x43007168: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x4300716C: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x43007170: addiu       $a3, $zero, 0x1A
    ctx->r7 = ADD32(0, 0X1A);
    // 0x43007174: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    // 0x43007178: jal         0x43000DC0
    // 0x4300717C: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    ovl_boss_angel_DC0(rdram, ctx);
        goto after_0;
    // 0x4300717C: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    after_0:
    // 0x43007180: b           L_430071DC
    // 0x43007184: lw          $v0, 0x64($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X64);
        goto L_430071DC;
    // 0x43007184: lw          $v0, 0x64($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X64);
L_43007188:
    // 0x43007188: lw          $a2, 0x10($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X10);
    // 0x4300718C: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    // 0x43007190: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x43007194: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x43007198: jal         0x43000DC0
    // 0x4300719C: addiu       $a1, $v0, 0x18
    ctx->r5 = ADD32(ctx->r2, 0X18);
    ovl_boss_angel_DC0(rdram, ctx);
        goto after_1;
    // 0x4300719C: addiu       $a1, $v0, 0x18
    ctx->r5 = ADD32(ctx->r2, 0X18);
    after_1:
    // 0x430071A0: lw          $v0, 0x5C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X5C);
    // 0x430071A4: lw          $a3, 0x10($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X10);
    // 0x430071A8: lw          $a2, 0x18($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X18);
    // 0x430071AC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x430071B0: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x430071B4: jal         0x43000DC0
    // 0x430071B8: addiu       $a1, $v0, 0x78
    ctx->r5 = ADD32(ctx->r2, 0X78);
    ovl_boss_angel_DC0(rdram, ctx);
        goto after_2;
    // 0x430071B8: addiu       $a1, $v0, 0x78
    ctx->r5 = ADD32(ctx->r2, 0X78);
    after_2:
    // 0x430071BC: lw          $v0, 0x5C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X5C);
    // 0x430071C0: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    // 0x430071C4: lw          $a1, 0x18($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X18);
    // 0x430071C8: lw          $a2, 0x78($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X78);
    // 0x430071CC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x430071D0: jal         0x43000DC0
    // 0x430071D4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_boss_angel_DC0(rdram, ctx);
        goto after_3;
    // 0x430071D4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x430071D8: lw          $v0, 0x64($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X64);
L_430071DC:
    // 0x430071DC: nop

L_430071E0:
    // 0x430071E0: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x430071E4: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x430071E8: jr          $ra
    // 0x430071EC: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x430071EC: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void ovl_boss_angel_71F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430071F0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x430071F4: sll         $t0, $a2, 2
    ctx->r8 = S32(ctx->r6 << 2);
    // 0x430071F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430071FC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x43007200: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x43007204: addu        $t1, $a0, $t0
    ctx->r9 = ADD32(ctx->r4, ctx->r8);
    // 0x43007208: lw          $v1, 0x18($t1)
    ctx->r3 = MEM_W(ctx->r9, 0X18);
    // 0x4300720C: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x43007210: addu        $t8, $a0, $t7
    ctx->r24 = ADD32(ctx->r4, ctx->r15);
    // 0x43007214: lw          $v0, 0x18($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X18);
    // 0x43007218: lwc1        $f12, 0x18($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X18);
    // 0x4300721C: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x43007220: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x43007224: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x43007228: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x4300722C: jal         0x4300B4B0
    // 0x43007230: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    ovl_boss_angel_B4B0(rdram, ctx);
        goto after_0;
    // 0x43007230: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x43007234: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x43007238: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4300723C: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x43007240: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x43007244: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x43007248: lwc1        $f8, 0x0($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X0);
    // 0x4300724C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x43007250: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    // 0x43007254: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x43007258: swc1        $f16, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f16.u32l;
    // 0x4300725C: jal         0x4300B670
    // 0x43007260: swc1        $f10, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f10.u32l;
    ovl_boss_angel_B670(rdram, ctx);
        goto after_1;
    // 0x43007260: swc1        $f10, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f10.u32l;
    after_1:
    // 0x43007264: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x43007268: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x4300726C: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x43007270: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x43007274: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x43007278: lwc1        $f6, 0x8($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X8);
    // 0x4300727C: lhu         $t4, 0x38($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X38);
    // 0x43007280: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x43007284: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x43007288: ori         $t5, $t4, 0x80
    ctx->r13 = ctx->r12 | 0X80;
    // 0x4300728C: swc1        $f8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f8.u32l;
    // 0x43007290: sh          $t5, 0x38($v0)
    MEM_H(0X38, ctx->r2) = ctx->r13;
    // 0x43007294: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x43007298: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x4300729C: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x430072A0: addu        $v1, $a0, $t7
    ctx->r3 = ADD32(ctx->r4, ctx->r15);
    // 0x430072A4: sh          $t8, 0x138($v1)
    MEM_H(0X138, ctx->r3) = ctx->r24;
    // 0x430072A8: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x430072AC: nop

    // 0x430072B0: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x430072B4: addu        $t1, $a0, $t0
    ctx->r9 = ADD32(ctx->r4, ctx->r8);
    // 0x430072B8: lh          $t2, 0x168($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X168);
    // 0x430072BC: nop

    // 0x430072C0: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x430072C4: sh          $t3, 0x168($v1)
    MEM_H(0X168, ctx->r3) = ctx->r11;
    // 0x430072C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430072CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x430072D0: jr          $ra
    // 0x430072D4: nop

    return;
    // 0x430072D4: nop

;}
RECOMP_FUNC void ovl_boss_angel_72D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430072D8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x430072DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430072E0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x430072E4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x430072E8: jal         0x430070C0
    // 0x430072EC: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    ovl_boss_angel_70C0(rdram, ctx);
        goto after_0;
    // 0x430072EC: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    after_0:
    // 0x430072F0: bgez        $v0, L_43007300
    if (SIGNED(ctx->r2) >= 0) {
        // 0x430072F4: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_43007300;
    }
    // 0x430072F4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x430072F8: b           L_4300733C
    // 0x430072FC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_4300733C;
    // 0x430072FC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_43007300:
    // 0x43007300: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x43007304: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x43007308: jal         0x430071F0
    // 0x4300730C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    ovl_boss_angel_71F0(rdram, ctx);
        goto after_1;
    // 0x4300730C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_1:
    // 0x43007310: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    // 0x43007314: jal         0x4300A8B4
    // 0x43007318: nop

    ovl_boss_angel_A8B4(rdram, ctx);
        goto after_2;
    // 0x43007318: nop

    after_2:
    // 0x4300731C: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x43007320: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x43007324: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x43007328: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x4300732C: lw          $t8, 0x18($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X18);
    // 0x43007330: nop

    // 0x43007334: swc1        $f0, 0x18($t8)
    MEM_W(0X18, ctx->r24) = ctx->f0.u32l;
    // 0x43007338: swc1        $f0, 0xD8($v1)
    MEM_W(0XD8, ctx->r3) = ctx->f0.u32l;
L_4300733C:
    // 0x4300733C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43007340: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x43007344: jr          $ra
    // 0x43007348: nop

    return;
    // 0x43007348: nop

;}
RECOMP_FUNC void ovl_boss_angel_734C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300734C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x43007350: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x43007354: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x43007358: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x4300735C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43007360: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x43007364: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x43007368: bc1f        L_430073D8
    if (!c1cs) {
        // 0x4300736C: sw          $a1, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r5;
            goto L_430073D8;
    }
    // 0x4300736C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x43007370: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x43007374: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x43007378: addu        $v1, $t6, $t8
    ctx->r3 = ADD32(ctx->r14, ctx->r24);
    // 0x4300737C: lw          $v0, 0x18($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X18);
    // 0x43007380: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x43007384: addiu       $a0, $a0, -0x4008
    ctx->r4 = ADD32(ctx->r4, -0X4008);
    // 0x43007388: lwc1        $f8, 0x0($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X0);
    // 0x4300738C: lwc1        $f16, 0x8($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X8);
    // 0x43007390: lwc1        $f18, 0x10($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X10);
    // 0x43007394: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x43007398: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x4300739C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x430073A0: sub.s       $f14, $f16, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x430073A4: jal         0x4300A504
    // 0x430073A8: sub.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f10.fl;
    ovl_boss_angel_A504(rdram, ctx);
        goto after_0;
    // 0x430073A8: sub.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f10.fl;
    after_0:
    // 0x430073AC: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x430073B0: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430073B4: lwc1        $f4, -0x41A0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X41A0);
    // 0x430073B8: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x430073BC: lwc1        $f12, 0xD8($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0XD8);
    // 0x430073C0: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    // 0x430073C4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x430073C8: jal         0x4300A908
    // 0x430073CC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_boss_angel_A908(rdram, ctx);
        goto after_1;
    // 0x430073CC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x430073D0: b           L_430073F0
    // 0x430073D4: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
        goto L_430073F0;
    // 0x430073D4: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_430073D8:
    // 0x430073D8: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x430073DC: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x430073E0: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x430073E4: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x430073E8: lwc1        $f2, 0xD8($t2)
    ctx->f2.u32l = MEM_W(ctx->r10, 0XD8);
    // 0x430073EC: nop

L_430073F0:
    // 0x430073F0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x430073F4: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x430073F8: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x430073FC: jal         0x430072D8
    // 0x43007400: nop

    ovl_boss_angel_72D8(rdram, ctx);
        goto after_2;
    // 0x43007400: nop

    after_2:
    // 0x43007404: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43007408: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x4300740C: jr          $ra
    // 0x43007410: nop

    return;
    // 0x43007410: nop

;}
RECOMP_FUNC void ovl_boss_angel_7414(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007414: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43007418: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x4300741C: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x43007420: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43007424: addu        $t7, $a0, $t6
    ctx->r15 = ADD32(ctx->r4, ctx->r14);
    // 0x43007428: lwc1        $f0, 0xD8($t7)
    ctx->f0.u32l = MEM_W(ctx->r15, 0XD8);
    // 0x4300742C: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x43007430: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x43007434: add.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x43007438: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x4300743C: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x43007440: jal         0x430072D8
    // 0x43007444: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    ovl_boss_angel_72D8(rdram, ctx);
        goto after_0;
    // 0x43007444: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x43007448: lwc1        $f0, 0x1C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x4300744C: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x43007450: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x43007454: sub.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x43007458: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x4300745C: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x43007460: jal         0x430072D8
    // 0x43007464: nop

    ovl_boss_angel_72D8(rdram, ctx);
        goto after_1;
    // 0x43007464: nop

    after_1:
    // 0x43007468: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4300746C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x43007470: jr          $ra
    // 0x43007474: nop

    return;
    // 0x43007474: nop

;}
RECOMP_FUNC void ovl_boss_angel_7478(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007478: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4300747C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43007480: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x43007484: jal         0x430070C0
    // 0x43007488: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    ovl_boss_angel_70C0(rdram, ctx);
        goto after_0;
    // 0x43007488: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x4300748C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x43007490: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x43007494: addu        $t7, $a0, $t6
    ctx->r15 = ADD32(ctx->r4, ctx->r14);
    // 0x43007498: lw          $v1, 0x18($t7)
    ctx->r3 = MEM_W(ctx->r15, 0X18);
    // 0x4300749C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x430074A0: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x430074A4: swc1        $f6, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f6.u32l;
    // 0x430074A8: swc1        $f4, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f4.u32l;
    // 0x430074AC: lwc1        $f8, 0x8($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X8);
    // 0x430074B0: nop

    // 0x430074B4: swc1        $f8, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f8.u32l;
    // 0x430074B8: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x430074BC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x430074C0: jal         0x4300A8B4
    // 0x430074C4: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    ovl_boss_angel_A8B4(rdram, ctx);
        goto after_1;
    // 0x430074C4: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_1:
    // 0x430074C8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x430074CC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x430074D0: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x430074D4: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x430074D8: addu        $t9, $a0, $t8
    ctx->r25 = ADD32(ctx->r4, ctx->r24);
    // 0x430074DC: swc1        $f0, 0xD8($t9)
    MEM_W(0XD8, ctx->r25) = ctx->f0.u32l;
    // 0x430074E0: lhu         $t0, 0x38($v1)
    ctx->r8 = MEM_HU(ctx->r3, 0X38);
    // 0x430074E4: sll         $t2, $a1, 1
    ctx->r10 = S32(ctx->r5 << 1);
    // 0x430074E8: ori         $t1, $t0, 0x80
    ctx->r9 = ctx->r8 | 0X80;
    // 0x430074EC: addu        $v0, $a0, $t2
    ctx->r2 = ADD32(ctx->r4, ctx->r10);
    // 0x430074F0: swc1        $f0, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->f0.u32l;
    // 0x430074F4: sh          $t1, 0x38($v1)
    MEM_H(0X38, ctx->r3) = ctx->r9;
    // 0x430074F8: addiu       $t3, $zero, 0xA
    ctx->r11 = ADD32(0, 0XA);
    // 0x430074FC: sh          $t3, 0x138($v0)
    MEM_H(0X138, ctx->r2) = ctx->r11;
    // 0x43007500: sh          $zero, 0x168($v0)
    MEM_H(0X168, ctx->r2) = 0;
    // 0x43007504: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43007508: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4300750C: jr          $ra
    // 0x43007510: nop

    return;
    // 0x43007510: nop

;}
RECOMP_FUNC void ovl_boss_angel_7514(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007514: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x43007518: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x4300751C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43007520: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x43007524: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x43007528: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x4300752C: addu        $v0, $s0, $t7
    ctx->r2 = ADD32(ctx->r16, ctx->r15);
    // 0x43007530: lw          $a1, 0x18($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X18);
    // 0x43007534: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x43007538: sw          $a1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r5;
    // 0x4300753C: lw          $t8, 0x78($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X78);
    // 0x43007540: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x43007544: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x43007548: swc1        $f7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(7 - 1) * 2];
    // 0x4300754C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x43007550: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x43007554: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x43007558: addiu       $a3, $zero, 0x1B
    ctx->r7 = ADD32(0, 0X1B);
    // 0x4300755C: jal         0x43000DC0
    // 0x43007560: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    ovl_boss_angel_DC0(rdram, ctx);
        goto after_0;
    // 0x43007560: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    after_0:
    // 0x43007564: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x43007568: nop

    // 0x4300756C: sll         $t9, $v1, 1
    ctx->r25 = S32(ctx->r3 << 1);
    // 0x43007570: addu        $t0, $s0, $t9
    ctx->r8 = ADD32(ctx->r16, ctx->r25);
    // 0x43007574: sh          $zero, 0x138($t0)
    MEM_H(0X138, ctx->r8) = 0;
    // 0x43007578: lw          $v0, 0x1F8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1F8);
    // 0x4300757C: nop

    // 0x43007580: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x43007584: sll         $t1, $v0, 2
    ctx->r9 = S32(ctx->r2 << 2);
    // 0x43007588: addu        $t2, $s0, $t1
    ctx->r10 = ADD32(ctx->r16, ctx->r9);
    // 0x4300758C: sw          $v0, 0x1F8($s0)
    MEM_W(0X1F8, ctx->r16) = ctx->r2;
    // 0x43007590: sw          $v1, 0x198($t2)
    MEM_W(0X198, ctx->r10) = ctx->r3;
    // 0x43007594: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x43007598: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x4300759C: jr          $ra
    // 0x430075A0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x430075A0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_boss_angel_75A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430075A4: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x430075A8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x430075AC: blez        $v0, L_430075E4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x430075B0: nop
    
            goto L_430075E4;
    }
    // 0x430075B0: nop

    // 0x430075B4: lw          $a2, 0x8($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X8);
    // 0x430075B8: nop

L_430075BC:
    // 0x430075BC: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x430075C0: nop

    // 0x430075C4: bne         $a0, $t6, L_430075D4
    if (ctx->r4 != ctx->r14) {
        // 0x430075C8: nop
    
            goto L_430075D4;
    }
    // 0x430075C8: nop

    // 0x430075CC: jr          $ra
    // 0x430075D0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x430075D0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_430075D4:
    // 0x430075D4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x430075D8: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x430075DC: bne         $at, $zero, L_430075BC
    if (ctx->r1 != 0) {
        // 0x430075E0: addiu       $a2, $a2, 0x4
        ctx->r6 = ADD32(ctx->r6, 0X4);
            goto L_430075BC;
    }
    // 0x430075E0: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
L_430075E4:
    // 0x430075E4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x430075E8: jr          $ra
    // 0x430075EC: nop

    return;
    // 0x430075EC: nop

;}
RECOMP_FUNC void ovl_boss_angel_75F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430075F0: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x430075F4: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x430075F8: sw          $fp, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r30;
    // 0x430075FC: sw          $s7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r23;
    // 0x43007600: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x43007604: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x43007608: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x4300760C: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x43007610: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x43007614: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x43007618: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x4300761C: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x43007620: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x43007624: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x43007628: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x4300762C: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x43007630: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x43007634: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x43007638: jal         0x43000868
    // 0x4300763C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    ovl_boss_angel_868(rdram, ctx);
        goto after_0;
    // 0x4300763C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x43007640: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x43007644: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x43007648: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x4300764C: lui         $fp, 0x4301
    ctx->r30 = S32(0X4301 << 16);
    // 0x43007650: lw          $s5, 0x1C($v0)
    ctx->r21 = MEM_W(ctx->r2, 0X1C);
    // 0x43007654: lwc1        $f21, -0x4198($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, -0X4198);
    // 0x43007658: lwc1        $f20, -0x4194($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X4194);
    // 0x4300765C: mtc1        $zero, $f26
    ctx->f26.u32l = 0;
    // 0x43007660: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x43007664: addiu       $fp, $fp, -0x4418
    ctx->r30 = ADD32(ctx->r30, -0X4418);
    // 0x43007668: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x4300766C: addiu       $s7, $zero, 0x6
    ctx->r23 = ADD32(0, 0X6);
    // 0x43007670: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_43007674:
    // 0x43007674: or          $s4, $s5, $zero
    ctx->r20 = ctx->r21 | 0;
L_43007678:
    // 0x43007678: lh          $v1, 0x138($s4)
    ctx->r3 = MEM_H(ctx->r20, 0X138);
    // 0x4300767C: sll         $t7, $s3, 2
    ctx->r15 = S32(ctx->r19 << 2);
    // 0x43007680: beq         $v1, $zero, L_430076FC
    if (ctx->r3 == 0) {
        // 0x43007684: addiu       $t6, $v1, -0x1
        ctx->r14 = ADD32(ctx->r3, -0X1);
            goto L_430076FC;
    }
    // 0x43007684: addiu       $t6, $v1, -0x1
    ctx->r14 = ADD32(ctx->r3, -0X1);
    // 0x43007688: sh          $t6, 0x138($s4)
    MEM_H(0X138, ctx->r20) = ctx->r14;
    // 0x4300768C: addu        $s2, $s5, $t7
    ctx->r18 = ADD32(ctx->r21, ctx->r15);
    // 0x43007690: lw          $v0, 0x18($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X18);
    // 0x43007694: lh          $s0, 0x138($s4)
    ctx->r16 = MEM_H(ctx->r20, 0X138);
    // 0x43007698: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x4300769C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x430076A0: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x430076A4: lwc1        $f2, 0x8($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X8);
    // 0x430076A8: nop

    // 0x430076AC: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x430076B0: jal         0x4300B7E0
    // 0x430076B4: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    ovl_boss_angel_B7E0(rdram, ctx);
        goto after_1;
    // 0x430076B4: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_1:
    // 0x430076B8: blez        $s0, L_430076D0
    if (SIGNED(ctx->r16) <= 0) {
        // 0x430076BC: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_430076D0;
    }
    // 0x430076BC: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x430076C0: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
    // 0x430076C4: sll         $t8, $s0, 2
    ctx->r24 = S32(ctx->r16 << 2);
    // 0x430076C8: bc1f        L_430076E0
    if (!c1cs) {
        // 0x430076CC: lui         $a2, 0x4301
        ctx->r6 = S32(0X4301 << 16);
            goto L_430076E0;
    }
    // 0x430076CC: lui         $a2, 0x4301
    ctx->r6 = S32(0X4301 << 16);
L_430076D0:
    // 0x430076D0: jal         0x43007514
    // 0x430076D4: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    ovl_boss_angel_7514(rdram, ctx);
        goto after_2;
    // 0x430076D4: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_2:
    // 0x430076D8: b           L_43007700
    // 0x430076DC: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
        goto L_43007700;
    // 0x430076DC: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_430076E0:
    // 0x430076E0: addu        $a2, $a2, $t8
    ctx->r6 = ADD32(ctx->r6, ctx->r24);
    // 0x430076E4: lw          $a2, -0x4414($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X4414);
    // 0x430076E8: lw          $a1, 0x18($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X18);
    // 0x430076EC: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x430076F0: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    // 0x430076F4: jal         0x43000DC0
    // 0x430076F8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_boss_angel_DC0(rdram, ctx);
        goto after_3;
    // 0x430076F8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
L_430076FC:
    // 0x430076FC: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_43007700:
    // 0x43007700: slti        $at, $s3, 0x18
    ctx->r1 = SIGNED(ctx->r19) < 0X18 ? 1 : 0;
    // 0x43007704: bne         $at, $zero, L_43007678
    if (ctx->r1 != 0) {
        // 0x43007708: addiu       $s4, $s4, 0x2
        ctx->r20 = ADD32(ctx->r20, 0X2);
            goto L_43007678;
    }
    // 0x43007708: addiu       $s4, $s4, 0x2
    ctx->r20 = ADD32(ctx->r20, 0X2);
    // 0x4300770C: beq         $s6, $zero, L_43007894
    if (ctx->r22 == 0) {
        // 0x43007710: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_43007894;
    }
    // 0x43007710: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x43007714: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x43007718: or          $s4, $s5, $zero
    ctx->r20 = ctx->r21 | 0;
L_4300771C:
    // 0x4300771C: lh          $t9, 0x138($s4)
    ctx->r25 = MEM_H(ctx->r20, 0X138);
    // 0x43007720: nop

    // 0x43007724: bne         $s7, $t9, L_430077BC
    if (ctx->r23 != ctx->r25) {
        // 0x43007728: nop
    
            goto L_430077BC;
    }
    // 0x43007728: nop

    // 0x4300772C: lh          $s1, 0x168($s4)
    ctx->r17 = MEM_H(ctx->r20, 0X168);
    // 0x43007730: lw          $s0, 0x204($s5)
    ctx->r16 = MEM_W(ctx->r21, 0X204);
    // 0x43007734: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x43007738: jal         0x430075A4
    // 0x4300773C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_boss_angel_75A4(rdram, ctx);
        goto after_4;
    // 0x4300773C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_4:
    // 0x43007740: bltz        $v0, L_43007780
    if (SIGNED(ctx->r2) < 0) {
        // 0x43007744: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_43007780;
    }
    // 0x43007744: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x43007748: lw          $t0, 0xC($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC);
    // 0x4300774C: sll         $t1, $v0, 2
    ctx->r9 = S32(ctx->r2 << 2);
    // 0x43007750: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x43007754: lwc1        $f8, 0x0($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X0);
    // 0x43007758: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x4300775C: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x43007760: mul.d       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f20.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f20.d);
    // 0x43007764: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x43007768: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x4300776C: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x43007770: jal         0x43007414
    // 0x43007774: nop

    ovl_boss_angel_7414(rdram, ctx);
        goto after_5;
    // 0x43007774: nop

    after_5:
    // 0x43007778: b           L_430077C0
    // 0x4300777C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
        goto L_430077C0;
    // 0x4300777C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_43007780:
    // 0x43007780: lw          $t3, 0x10($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X10);
    // 0x43007784: nop

    // 0x43007788: slt         $at, $s1, $t3
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x4300778C: beq         $at, $zero, L_430077AC
    if (ctx->r1 == 0) {
        // 0x43007790: nop
    
            goto L_430077AC;
    }
    // 0x43007790: nop

    // 0x43007794: lw          $t4, 0x14($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X14);
    // 0x43007798: sll         $t5, $s1, 2
    ctx->r13 = S32(ctx->r17 << 2);
    // 0x4300779C: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x430077A0: lwc1        $f0, 0x0($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X0);
    // 0x430077A4: b           L_430077B4
    // 0x430077A8: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
        goto L_430077B4;
    // 0x430077A8: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
L_430077AC:
    // 0x430077AC: mov.s       $f0, $f26
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    ctx->f0.fl = ctx->f26.fl;
    // 0x430077B0: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
L_430077B4:
    // 0x430077B4: jal         0x4300734C
    // 0x430077B8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    ovl_boss_angel_734C(rdram, ctx);
        goto after_6;
    // 0x430077B8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_6:
L_430077BC:
    // 0x430077BC: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_430077C0:
    // 0x430077C0: slti        $at, $s3, 0x18
    ctx->r1 = SIGNED(ctx->r19) < 0X18 ? 1 : 0;
    // 0x430077C4: bne         $at, $zero, L_4300771C
    if (ctx->r1 != 0) {
        // 0x430077C8: addiu       $s4, $s4, 0x2
        ctx->r20 = ADD32(ctx->r20, 0X2);
            goto L_4300771C;
    }
    // 0x430077C8: addiu       $s4, $s4, 0x2
    ctx->r20 = ADD32(ctx->r20, 0X2);
    // 0x430077CC: lui         $s4, 0x4301
    ctx->r20 = S32(0X4301 << 16);
    // 0x430077D0: addiu       $s4, $s4, -0x4420
    ctx->r20 = ADD32(ctx->r20, -0X4420);
    // 0x430077D4: or          $s2, $s5, $zero
    ctx->r18 = ctx->r21 | 0;
L_430077D8:
    // 0x430077D8: lw          $s1, 0x20C($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X20C);
    // 0x430077DC: lw          $s0, 0x214($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X214);
    // 0x430077E0: lw          $t9, 0x4C($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X4C);
    // 0x430077E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x430077E8: jalr        $t9
    // 0x430077EC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x430077EC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_7:
    // 0x430077F0: lw          $v1, 0x4($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X4);
    // 0x430077F4: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    // 0x430077F8: nop

    // 0x430077FC: slt         $at, $a0, $v1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x43007800: beq         $at, $zero, L_43007874
    if (ctx->r1 == 0) {
        // 0x43007804: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_43007874;
    }
    // 0x43007804: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_43007808:
    // 0x43007808: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x4300780C: slt         $at, $s0, $v1
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x43007810: bne         $at, $zero, L_4300781C
    if (ctx->r1 != 0) {
        // 0x43007814: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_4300781C;
    }
    // 0x43007814: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x43007818: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
L_4300781C:
    // 0x4300781C: sll         $t7, $s0, 1
    ctx->r15 = S32(ctx->r16 << 1);
    // 0x43007820: addu        $t8, $s5, $t7
    ctx->r24 = ADD32(ctx->r21, ctx->r15);
    // 0x43007824: lh          $t0, 0x138($t8)
    ctx->r8 = MEM_H(ctx->r24, 0X138);
    // 0x43007828: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x4300782C: beq         $t0, $zero, L_4300786C
    if (ctx->r8 == 0) {
        // 0x43007830: sll         $t1, $s0, 2
        ctx->r9 = S32(ctx->r16 << 2);
            goto L_4300786C;
    }
    // 0x43007830: sll         $t1, $s0, 2
    ctx->r9 = S32(ctx->r16 << 2);
    // 0x43007834: addu        $t2, $s5, $t1
    ctx->r10 = ADD32(ctx->r21, ctx->r9);
    // 0x43007838: lw          $a1, 0x18($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X18);
    // 0x4300783C: lw          $t9, 0x40($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X40);
    // 0x43007840: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x43007844: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x43007848: jalr        $t9
    // 0x4300784C: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x4300784C: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    after_8:
    // 0x43007850: lw          $t9, 0x4C($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X4C);
    // 0x43007854: sw          $s0, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->r16;
    // 0x43007858: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x4300785C: jalr        $t9
    // 0x43007860: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x43007860: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_9:
    // 0x43007864: b           L_43007878
    // 0x43007868: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
        goto L_43007878;
    // 0x43007868: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
L_4300786C:
    // 0x4300786C: bne         $at, $zero, L_43007808
    if (ctx->r1 != 0) {
        // 0x43007870: nop
    
            goto L_43007808;
    }
    // 0x43007870: nop

L_43007874:
    // 0x43007874: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
L_43007878:
    // 0x43007878: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x4300787C: bne         $s4, $fp, L_430077D8
    if (ctx->r20 != ctx->r30) {
        // 0x43007880: sw          $s0, 0x210($s2)
        MEM_W(0X210, ctx->r18) = ctx->r16;
            goto L_430077D8;
    }
    // 0x43007880: sw          $s0, 0x210($s2)
    MEM_W(0X210, ctx->r18) = ctx->r16;
    // 0x43007884: jal         0x4300A1D8
    // 0x43007888: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_boss_angel_A1D8(rdram, ctx);
        goto after_10;
    // 0x43007888: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_10:
    // 0x4300788C: b           L_43007674
    // 0x43007890: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
        goto L_43007674;
    // 0x43007890: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_43007894:
    // 0x43007894: lw          $a0, 0x208($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X208);
    // 0x43007898: jal         0x4300B358
    // 0x4300789C: nop

    ovl_boss_angel_B358(rdram, ctx);
        goto after_11;
    // 0x4300789C: nop

    after_11:
    // 0x430078A0: lw          $t9, 0x21C($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X21C);
    // 0x430078A4: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x430078A8: jalr        $t9
    // 0x430078AC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x430078AC: nop

    after_12:
    // 0x430078B0: jal         0x43000838
    // 0x430078B4: nop

    ovl_boss_angel_838(rdram, ctx);
        goto after_13;
    // 0x430078B4: nop

    after_13:
    // 0x430078B8: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x430078BC: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x430078C0: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x430078C4: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x430078C8: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x430078CC: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x430078D0: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x430078D4: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x430078D8: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x430078DC: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x430078E0: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x430078E4: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x430078E8: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x430078EC: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x430078F0: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x430078F4: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x430078F8: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x430078FC: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x43007900: jr          $ra
    // 0x43007904: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x43007904: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void ovl_boss_angel_7908(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007908: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4300790C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43007910: lw          $t9, 0x21C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X21C);
    // 0x43007914: nop

    // 0x43007918: jalr        $t9
    // 0x4300791C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x4300791C: nop

    after_0:
    // 0x43007920: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43007924: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43007928: jr          $ra
    // 0x4300792C: nop

    return;
    // 0x4300792C: nop

;}
RECOMP_FUNC void ovl_boss_angel_7930(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007930: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x43007934: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x43007938: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x4300793C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x43007940: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x43007944: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x43007948: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x4300794C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x43007950: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
L_43007954:
    // 0x43007954: lw          $a1, 0x18($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X18);
    // 0x43007958: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x4300795C: beq         $a1, $zero, L_4300796C
    if (ctx->r5 == 0) {
        // 0x43007960: nop
    
            goto L_4300796C;
    }
    // 0x43007960: nop

    // 0x43007964: jal         0x43000DC0
    // 0x43007968: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_boss_angel_DC0(rdram, ctx);
        goto after_0;
    // 0x43007968: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
L_4300796C:
    // 0x4300796C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x43007970: slti        $at, $s0, 0x60
    ctx->r1 = SIGNED(ctx->r16) < 0X60 ? 1 : 0;
    // 0x43007974: bne         $at, $zero, L_43007954
    if (ctx->r1 != 0) {
        // 0x43007978: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_43007954;
    }
    // 0x43007978: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x4300797C: lw          $a0, 0x10($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X10);
    // 0x43007980: jal         0x4300B2BC
    // 0x43007984: nop

    ovl_boss_angel_B2BC(rdram, ctx);
        goto after_1;
    // 0x43007984: nop

    after_1:
    // 0x43007988: lw          $a0, 0x14($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X14);
    // 0x4300798C: jal         0x4300B2BC
    // 0x43007990: nop

    ovl_boss_angel_B2BC(rdram, ctx);
        goto after_2;
    // 0x43007990: nop

    after_2:
    // 0x43007994: jal         0x43000868
    // 0x43007998: nop

    ovl_boss_angel_868(rdram, ctx);
        goto after_3;
    // 0x43007998: nop

    after_3:
    // 0x4300799C: lw          $a0, 0xC($s3)
    ctx->r4 = MEM_W(ctx->r19, 0XC);
    // 0x430079A0: nop

    // 0x430079A4: beq         $v0, $a0, L_430079C4
    if (ctx->r2 == ctx->r4) {
        // 0x430079A8: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_430079C4;
    }
    // 0x430079A8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x430079AC: jal         0x4300082C
    // 0x430079B0: nop

    ovl_boss_angel_82C(rdram, ctx);
        goto after_4;
    // 0x430079B0: nop

    after_4:
    // 0x430079B4: lw          $a0, 0x208($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X208);
    // 0x430079B8: jal         0x4300B358
    // 0x430079BC: nop

    ovl_boss_angel_B358(rdram, ctx);
        goto after_5;
    // 0x430079BC: nop

    after_5:
    // 0x430079C0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_430079C4:
    // 0x430079C4: or          $s1, $s3, $zero
    ctx->r17 = ctx->r19 | 0;
    // 0x430079C8: addiu       $s2, $zero, 0x8
    ctx->r18 = ADD32(0, 0X8);
L_430079CC:
    // 0x430079CC: lw          $a0, 0x20C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20C);
    // 0x430079D0: nop

    // 0x430079D4: lw          $t9, 0x54($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X54);
    // 0x430079D8: nop

    // 0x430079DC: jalr        $t9
    // 0x430079E0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x430079E0: nop

    after_6:
    // 0x430079E4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x430079E8: bne         $s0, $s2, L_430079CC
    if (ctx->r16 != ctx->r18) {
        // 0x430079EC: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_430079CC;
    }
    // 0x430079EC: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x430079F0: jal         0x430000F4
    // 0x430079F4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    ovl_boss_angel_F4(rdram, ctx);
        goto after_7;
    // 0x430079F4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_7:
    // 0x430079F8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x430079FC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x43007A00: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x43007A04: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x43007A08: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x43007A0C: jr          $ra
    // 0x43007A10: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x43007A10: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_boss_angel_7A14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007A14: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x43007A18: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x43007A1C: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x43007A20: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x43007A24: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x43007A28: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x43007A2C: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x43007A30: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x43007A34: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x43007A38: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x43007A3C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x43007A40: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x43007A44: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x43007A48: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x43007A4C: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x43007A50: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x43007A54: jal         0x430000E8
    // 0x43007A58: addiu       $a0, $zero, 0x220
    ctx->r4 = ADD32(0, 0X220);
    ovl_boss_angel_E8(rdram, ctx);
        goto after_0;
    // 0x43007A58: addiu       $a0, $zero, 0x220
    ctx->r4 = ADD32(0, 0X220);
    after_0:
    // 0x43007A5C: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x43007A60: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x43007A64: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x43007A68: jal         0x4300A100
    // 0x43007A6C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    ovl_boss_angel_A100(rdram, ctx);
        goto after_1;
    // 0x43007A6C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_1:
    // 0x43007A70: jal         0x4300B290
    // 0x43007A74: addiu       $a0, $zero, 0xA34
    ctx->r4 = ADD32(0, 0XA34);
    ovl_boss_angel_B290(rdram, ctx);
        goto after_2;
    // 0x43007A74: addiu       $a0, $zero, 0xA34
    ctx->r4 = ADD32(0, 0XA34);
    after_2:
    // 0x43007A78: sw          $v0, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r2;
    // 0x43007A7C: jal         0x4300B290
    // 0x43007A80: addiu       $a0, $zero, 0xA35
    ctx->r4 = ADD32(0, 0XA35);
    ovl_boss_angel_B290(rdram, ctx);
        goto after_3;
    // 0x43007A80: addiu       $a0, $zero, 0xA35
    ctx->r4 = ADD32(0, 0XA35);
    after_3:
    // 0x43007A84: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
    // 0x43007A88: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x43007A8C: addiu       $a1, $s2, 0x198
    ctx->r5 = ADD32(ctx->r18, 0X198);
    // 0x43007A90: addiu       $a0, $s2, 0x168
    ctx->r4 = ADD32(ctx->r18, 0X168);
    // 0x43007A94: addiu       $a2, $s2, 0x138
    ctx->r6 = ADD32(ctx->r18, 0X138);
    // 0x43007A98: addiu       $a3, $s2, 0x18
    ctx->r7 = ADD32(ctx->r18, 0X18);
L_43007A9C:
    // 0x43007A9C: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x43007AA0: sh          $zero, 0x0($a0)
    MEM_H(0X0, ctx->r4) = 0;
    // 0x43007AA4: lh          $t6, 0x0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X0);
    // 0x43007AA8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x43007AAC: slti        $at, $v1, 0x18
    ctx->r1 = SIGNED(ctx->r3) < 0X18 ? 1 : 0;
    // 0x43007AB0: sh          $t6, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r14;
    // 0x43007AB4: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x43007AB8: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x43007ABC: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
    // 0x43007AC0: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x43007AC4: bne         $at, $zero, L_43007A9C
    if (ctx->r1 != 0) {
        // 0x43007AC8: sw          $zero, -0x4($a3)
        MEM_W(-0X4, ctx->r7) = 0;
            goto L_43007A9C;
    }
    // 0x43007AC8: sw          $zero, -0x4($a3)
    MEM_W(-0X4, ctx->r7) = 0;
    // 0x43007ACC: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x43007AD0: sw          $zero, 0x1F8($s2)
    MEM_W(0X1F8, ctx->r18) = 0;
    // 0x43007AD4: sw          $zero, 0x1FC($s2)
    MEM_W(0X1FC, ctx->r18) = 0;
    // 0x43007AD8: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x43007ADC: addiu       $v0, $v0, -0x4008
    ctx->r2 = ADD32(ctx->r2, -0X4008);
    // 0x43007AE0: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x43007AE4: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x43007AE8: lwc1        $f10, 0x8($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X8);
    // 0x43007AEC: lwc1        $f6, 0x0($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X0);
    // 0x43007AF0: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x43007AF4: jal         0x4300A504
    // 0x43007AF8: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    ovl_boss_angel_A504(rdram, ctx);
        goto after_4;
    // 0x43007AF8: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    after_4:
    // 0x43007AFC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x43007B00: jal         0x43007478
    // 0x43007B04: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    ovl_boss_angel_7478(rdram, ctx);
        goto after_5;
    // 0x43007B04: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_5:
    // 0x43007B08: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x43007B0C: lui         $s3, 0x4300
    ctx->r19 = S32(0X4300 << 16);
    // 0x43007B10: lui         $s4, 0x4300
    ctx->r20 = S32(0X4300 << 16);
    // 0x43007B14: lui         $s5, 0x4300
    ctx->r21 = S32(0X4300 << 16);
    // 0x43007B18: lui         $s6, 0x4300
    ctx->r22 = S32(0X4300 << 16);
    // 0x43007B1C: lui         $s1, 0x4301
    ctx->r17 = S32(0X4301 << 16);
    // 0x43007B20: lui         $s7, 0x4301
    ctx->r23 = S32(0X4301 << 16);
    // 0x43007B24: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x43007B28: addiu       $s7, $s7, -0x4130
    ctx->r23 = ADD32(ctx->r23, -0X4130);
    // 0x43007B2C: addiu       $s1, $s1, -0x4420
    ctx->r17 = ADD32(ctx->r17, -0X4420);
    // 0x43007B30: addiu       $s6, $s6, 0x6FE8
    ctx->r22 = ADD32(ctx->r22, 0X6FE8);
    // 0x43007B34: addiu       $s5, $s5, 0x706C
    ctx->r21 = ADD32(ctx->r21, 0X706C);
    // 0x43007B38: addiu       $s4, $s4, 0x7044
    ctx->r20 = ADD32(ctx->r20, 0X7044);
    // 0x43007B3C: addiu       $s3, $s3, 0x6FB0
    ctx->r19 = ADD32(ctx->r19, 0X6FB0);
    // 0x43007B40: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
    // 0x43007B44: addiu       $fp, $zero, 0x1
    ctx->r30 = ADD32(0, 0X1);
L_43007B48:
    // 0x43007B48: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x43007B4C: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x43007B50: jal         0x43005E5C
    // 0x43007B54: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    ovl_boss_angel_5E5C(rdram, ctx);
        goto after_6;
    // 0x43007B54: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    after_6:
    // 0x43007B58: sw          $v0, 0x20C($s0)
    MEM_W(0X20C, ctx->r16) = ctx->r2;
    // 0x43007B5C: sw          $s2, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r18;
    // 0x43007B60: sw          $s3, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r19;
    // 0x43007B64: sw          $s4, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->r20;
    // 0x43007B68: sw          $s5, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->r21;
    // 0x43007B6C: sw          $s6, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->r22;
    // 0x43007B70: sw          $fp, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r30;
    // 0x43007B74: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x43007B78: lui         $t8, 0x4301
    ctx->r24 = S32(0X4301 << 16);
    // 0x43007B7C: addiu       $t8, $t8, -0x4418
    ctx->r24 = ADD32(ctx->r24, -0X4418);
    // 0x43007B80: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x43007B84: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x43007B88: bne         $s1, $t8, L_43007B48
    if (ctx->r17 != ctx->r24) {
        // 0x43007B8C: sw          $t7, 0x210($s0)
        MEM_W(0X210, ctx->r16) = ctx->r15;
            goto L_43007B48;
    }
    // 0x43007B8C: sw          $t7, 0x210($s0)
    MEM_W(0X210, ctx->r16) = ctx->r15;
    // 0x43007B90: sw          $zero, 0x200($s2)
    MEM_W(0X200, ctx->r18) = 0;
    // 0x43007B94: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x43007B98: lui         $a0, 0x4300
    ctx->r4 = S32(0X4300 << 16);
    // 0x43007B9C: addiu       $a0, $a0, 0x7908
    ctx->r4 = ADD32(ctx->r4, 0X7908);
    // 0x43007BA0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x43007BA4: jal         0x4300B300
    // 0x43007BA8: sw          $t9, 0x204($s2)
    MEM_W(0X204, ctx->r18) = ctx->r25;
    ovl_boss_angel_B300(rdram, ctx);
        goto after_7;
    // 0x43007BA8: sw          $t9, 0x204($s2)
    MEM_W(0X204, ctx->r18) = ctx->r25;
    after_7:
    // 0x43007BAC: lui         $t0, 0x4300
    ctx->r8 = S32(0X4300 << 16);
    // 0x43007BB0: addiu       $t0, $t0, 0x7930
    ctx->r8 = ADD32(ctx->r8, 0X7930);
    // 0x43007BB4: lui         $a0, 0x4300
    ctx->r4 = S32(0X4300 << 16);
    // 0x43007BB8: sw          $v0, 0x208($s2)
    MEM_W(0X208, ctx->r18) = ctx->r2;
    // 0x43007BBC: sw          $t0, 0x21C($s2)
    MEM_W(0X21C, ctx->r18) = ctx->r8;
    // 0x43007BC0: addiu       $a0, $a0, 0x75F0
    ctx->r4 = ADD32(ctx->r4, 0X75F0);
    // 0x43007BC4: ori         $a1, $zero, 0xFECF
    ctx->r5 = 0 | 0XFECF;
    // 0x43007BC8: addiu       $a2, $zero, 0x2000
    ctx->r6 = ADD32(0, 0X2000);
    // 0x43007BCC: jal         0x43000820
    // 0x43007BD0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_boss_angel_820(rdram, ctx);
        goto after_8;
    // 0x43007BD0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_8:
    // 0x43007BD4: sw          $v0, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r2;
    // 0x43007BD8: sw          $s2, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r18;
    // 0x43007BDC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x43007BE0: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x43007BE4: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x43007BE8: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x43007BEC: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x43007BF0: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x43007BF4: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x43007BF8: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x43007BFC: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x43007C00: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x43007C04: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x43007C08: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x43007C0C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x43007C10: jr          $ra
    // 0x43007C14: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x43007C14: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x43007C18: nop

    // 0x43007C1C: nop

;}
RECOMP_FUNC void ovl_boss_angel_7C20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007C20: jr          $ra
    // 0x43007C24: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x43007C24: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void ovl_boss_angel_7C28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007C28: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x43007C2C: jr          $ra
    // 0x43007C30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x43007C30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void ovl_boss_angel_7C34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007C34: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43007C38: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43007C3C: jal         0x43000868
    // 0x43007C40: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    ovl_boss_angel_868(rdram, ctx);
        goto after_0;
    // 0x43007C40: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x43007C44: lw          $s0, 0x1C($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X1C);
    // 0x43007C48: nop

    // 0x43007C4C: lw          $t9, 0x30($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X30);
L_43007C50:
    // 0x43007C50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007C54: jalr        $t9
    // 0x43007C58: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x43007C58: nop

    after_1:
    // 0x43007C5C: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x43007C60: nop

    // 0x43007C64: blez        $v0, L_43007C74
    if (SIGNED(ctx->r2) <= 0) {
        // 0x43007C68: addiu       $t6, $v0, -0x1
        ctx->r14 = ADD32(ctx->r2, -0X1);
            goto L_43007C74;
    }
    // 0x43007C68: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x43007C6C: sw          $t6, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r14;
    // 0x43007C70: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
L_43007C74:
    // 0x43007C74: bne         $v0, $zero, L_43007C94
    if (ctx->r2 != 0) {
        // 0x43007C78: nop
    
            goto L_43007C94;
    }
    // 0x43007C78: nop

    // 0x43007C7C: lw          $t9, 0x34($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X34);
    // 0x43007C80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007C84: jalr        $t9
    // 0x43007C88: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x43007C88: nop

    after_2:
    // 0x43007C8C: bne         $v0, $zero, L_43007CA4
    if (ctx->r2 != 0) {
        // 0x43007C90: nop
    
            goto L_43007CA4;
    }
    // 0x43007C90: nop

L_43007C94:
    // 0x43007C94: jal         0x4300A1D8
    // 0x43007C98: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_boss_angel_A1D8(rdram, ctx);
        goto after_3;
    // 0x43007C98: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x43007C9C: b           L_43007C50
    // 0x43007CA0: lw          $t9, 0x30($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X30);
        goto L_43007C50;
    // 0x43007CA0: lw          $t9, 0x30($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X30);
L_43007CA4:
    // 0x43007CA4: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    // 0x43007CA8: jal         0x4300B358
    // 0x43007CAC: nop

    ovl_boss_angel_B358(rdram, ctx);
        goto after_4;
    // 0x43007CAC: nop

    after_4:
    // 0x43007CB0: lw          $t9, 0x54($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X54);
    // 0x43007CB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007CB8: jalr        $t9
    // 0x43007CBC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x43007CBC: nop

    after_5:
    // 0x43007CC0: jal         0x43000838
    // 0x43007CC4: nop

    ovl_boss_angel_838(rdram, ctx);
        goto after_6;
    // 0x43007CC4: nop

    after_6:
    // 0x43007CC8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43007CCC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43007CD0: jr          $ra
    // 0x43007CD4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x43007CD4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_boss_angel_7CD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007CD8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43007CDC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43007CE0: lw          $t9, 0x54($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X54);
    // 0x43007CE4: nop

    // 0x43007CE8: jalr        $t9
    // 0x43007CEC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43007CEC: nop

    after_0:
    // 0x43007CF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43007CF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43007CF8: jr          $ra
    // 0x43007CFC: nop

    return;
    // 0x43007CFC: nop

;}
RECOMP_FUNC void ovl_boss_angel_7D00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007D00: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x43007D04: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x43007D08: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x43007D0C: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x43007D10: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43007D14: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x43007D18: sw          $t6, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r14;
    // 0x43007D1C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x43007D20: jal         0x4300B290
    // 0x43007D24: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    ovl_boss_angel_B290(rdram, ctx);
        goto after_0;
    // 0x43007D24: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_0:
    // 0x43007D28: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x43007D2C: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x43007D30: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
    // 0x43007D34: addu        $t8, $s0, $t7
    ctx->r24 = ADD32(ctx->r16, ctx->r15);
    // 0x43007D38: bne         $v1, $zero, L_43007D5C
    if (ctx->r3 != 0) {
        // 0x43007D3C: sw          $v0, 0x4($t8)
        MEM_W(0X4, ctx->r24) = ctx->r2;
            goto L_43007D5C;
    }
    // 0x43007D3C: sw          $v0, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r2;
    // 0x43007D40: lw          $a2, 0x18($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X18);
    // 0x43007D44: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x43007D48: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x43007D4C: jal         0x43000DC0
    // 0x43007D50: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    ovl_boss_angel_DC0(rdram, ctx);
        goto after_1;
    // 0x43007D50: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    after_1:
    // 0x43007D54: b           L_43007D74
    // 0x43007D58: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43007D74;
    // 0x43007D58: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43007D5C:
    // 0x43007D5C: lw          $a1, 0x18($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X18);
    // 0x43007D60: lw          $a2, 0x1C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1C);
    // 0x43007D64: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x43007D68: jal         0x43000DC0
    // 0x43007D6C: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    ovl_boss_angel_DC0(rdram, ctx);
        goto after_2;
    // 0x43007D6C: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    after_2:
    // 0x43007D70: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43007D74:
    // 0x43007D74: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x43007D78: jr          $ra
    // 0x43007D7C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x43007D7C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_boss_angel_7D80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007D80: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x43007D84: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x43007D88: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x43007D8C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x43007D90: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43007D94: lw          $t6, 0x14($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X14);
    // 0x43007D98: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x43007D9C: blez        $t6, L_43007DC8
    if (SIGNED(ctx->r14) <= 0) {
        // 0x43007DA0: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_43007DC8;
    }
    // 0x43007DA0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x43007DA4: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
L_43007DA8:
    // 0x43007DA8: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x43007DAC: jal         0x4300B2BC
    // 0x43007DB0: nop

    ovl_boss_angel_B2BC(rdram, ctx);
        goto after_0;
    // 0x43007DB0: nop

    after_0:
    // 0x43007DB4: lw          $t7, 0x14($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X14);
    // 0x43007DB8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x43007DBC: slt         $at, $s0, $t7
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x43007DC0: bne         $at, $zero, L_43007DA8
    if (ctx->r1 != 0) {
        // 0x43007DC4: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_43007DA8;
    }
    // 0x43007DC4: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_43007DC8:
    // 0x43007DC8: sw          $zero, 0x14($s2)
    MEM_W(0X14, ctx->r18) = 0;
    // 0x43007DCC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43007DD0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x43007DD4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x43007DD8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43007DDC: jr          $ra
    // 0x43007DE0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x43007DE0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_boss_angel_7DE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007DE4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43007DE8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43007DEC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43007DF0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x43007DF4: lw          $t6, 0x14($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X14);
    // 0x43007DF8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43007DFC: beq         $t6, $zero, L_43007E1C
    if (ctx->r14 == 0) {
        // 0x43007E00: addiu       $a0, $zero, 0x7
        ctx->r4 = ADD32(0, 0X7);
            goto L_43007E1C;
    }
    // 0x43007E00: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x43007E04: lw          $a1, 0x18($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X18);
    // 0x43007E08: lw          $a2, 0x1C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1C);
    // 0x43007E0C: jal         0x43000DC0
    // 0x43007E10: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_boss_angel_DC0(rdram, ctx);
        goto after_0;
    // 0x43007E10: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x43007E14: jal         0x43007D80
    // 0x43007E18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_boss_angel_7D80(rdram, ctx);
        goto after_1;
    // 0x43007E18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
L_43007E1C:
    // 0x43007E1C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x43007E20: jal         0x43007D00
    // 0x43007E24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_boss_angel_7D00(rdram, ctx);
        goto after_2;
    // 0x43007E24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x43007E28: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43007E2C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43007E30: jr          $ra
    // 0x43007E34: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x43007E34: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_boss_angel_7E38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007E38: bne         $a1, $zero, L_43007E48
    if (ctx->r5 != 0) {
        // 0x43007E3C: nop
    
            goto L_43007E48;
    }
    // 0x43007E3C: nop

    // 0x43007E40: lui         $a1, 0x4300
    ctx->r5 = S32(0X4300 << 16);
    // 0x43007E44: addiu       $a1, $a1, 0x7C28
    ctx->r5 = ADD32(ctx->r5, 0X7C28);
L_43007E48:
    // 0x43007E48: jr          $ra
    // 0x43007E4C: sw          $a1, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->r5;
    return;
    // 0x43007E4C: sw          $a1, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void ovl_boss_angel_7E50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007E50: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43007E54: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43007E58: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x43007E5C: lw          $t7, 0x14($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X14);
    // 0x43007E60: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x43007E64: beq         $t7, $zero, L_43007E80
    if (ctx->r15 == 0) {
        // 0x43007E68: or          $t6, $a0, $zero
        ctx->r14 = ctx->r4 | 0;
            goto L_43007E80;
    }
    // 0x43007E68: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x43007E6C: lw          $a1, 0x18($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X18);
    // 0x43007E70: lw          $a2, 0x1C($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X1C);
    // 0x43007E74: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x43007E78: jal         0x43000DC0
    // 0x43007E7C: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    ovl_boss_angel_DC0(rdram, ctx);
        goto after_0;
    // 0x43007E7C: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_0:
L_43007E80:
    // 0x43007E80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43007E84: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x43007E88: jr          $ra
    // 0x43007E8C: nop

    return;
    // 0x43007E8C: nop

;}
RECOMP_FUNC void ovl_boss_angel_7E90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007E90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43007E94: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x43007E98: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x43007E9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43007EA0: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x43007EA4: lw          $a1, 0x18($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X18);
    // 0x43007EA8: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x43007EAC: jal         0x43000DC0
    // 0x43007EB0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_boss_angel_DC0(rdram, ctx);
        goto after_0;
    // 0x43007EB0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x43007EB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43007EB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43007EBC: jr          $ra
    // 0x43007EC0: nop

    return;
    // 0x43007EC0: nop

;}
RECOMP_FUNC void ovl_boss_angel_7EC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007EC4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x43007EC8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x43007ECC: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x43007ED0: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x43007ED4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x43007ED8: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x43007EDC: lw          $a1, 0x18($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X18);
    // 0x43007EE0: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x43007EE4: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x43007EE8: cvt.d.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.d = CVT_D_S(ctx->f12.fl);
    // 0x43007EEC: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x43007EF0: mfc1        $a2, $f5
    ctx->r6 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x43007EF4: cvt.d.s     $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f6.d = CVT_D_S(ctx->f14.fl);
    // 0x43007EF8: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x43007EFC: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x43007F00: swc1        $f11, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(11 - 1) * 2];
    // 0x43007F04: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x43007F08: swc1        $f7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(7 - 1) * 2];
    // 0x43007F0C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x43007F10: jal         0x43000DC0
    // 0x43007F14: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    ovl_boss_angel_DC0(rdram, ctx);
        goto after_0;
    // 0x43007F14: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_0:
    // 0x43007F18: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x43007F1C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x43007F20: jr          $ra
    // 0x43007F24: nop

    return;
    // 0x43007F24: nop

;}
RECOMP_FUNC void ovl_boss_angel_7F28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007F28: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x43007F2C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x43007F30: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x43007F34: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x43007F38: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x43007F3C: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x43007F40: lw          $a1, 0x18($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X18);
    // 0x43007F44: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x43007F48: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x43007F4C: cvt.d.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.d = CVT_D_S(ctx->f12.fl);
    // 0x43007F50: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x43007F54: mfc1        $a2, $f5
    ctx->r6 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x43007F58: cvt.d.s     $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f6.d = CVT_D_S(ctx->f14.fl);
    // 0x43007F5C: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x43007F60: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x43007F64: swc1        $f11, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(11 - 1) * 2];
    // 0x43007F68: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x43007F6C: swc1        $f7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(7 - 1) * 2];
    // 0x43007F70: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x43007F74: jal         0x43000DC0
    // 0x43007F78: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    ovl_boss_angel_DC0(rdram, ctx);
        goto after_0;
    // 0x43007F78: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_0:
    // 0x43007F7C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x43007F80: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x43007F84: jr          $ra
    // 0x43007F88: nop

    return;
    // 0x43007F88: nop

;}
RECOMP_FUNC void ovl_boss_angel_7F8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007F8C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43007F90: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43007F94: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43007F98: jal         0x43007D80
    // 0x43007F9C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    ovl_boss_angel_7D80(rdram, ctx);
        goto after_0;
    // 0x43007F9C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x43007FA0: lw          $a1, 0x18($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X18);
    // 0x43007FA4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x43007FA8: jal         0x43000DC0
    // 0x43007FAC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_boss_angel_DC0(rdram, ctx);
        goto after_1;
    // 0x43007FAC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x43007FB0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x43007FB4: jal         0x4300B2BC
    // 0x43007FB8: nop

    ovl_boss_angel_B2BC(rdram, ctx);
        goto after_2;
    // 0x43007FB8: nop

    after_2:
    // 0x43007FBC: jal         0x43000868
    // 0x43007FC0: nop

    ovl_boss_angel_868(rdram, ctx);
        goto after_3;
    // 0x43007FC0: nop

    after_3:
    // 0x43007FC4: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    // 0x43007FC8: nop

    // 0x43007FCC: beq         $v0, $a0, L_43007FE8
    if (ctx->r2 == ctx->r4) {
        // 0x43007FD0: nop
    
            goto L_43007FE8;
    }
    // 0x43007FD0: nop

    // 0x43007FD4: jal         0x4300082C
    // 0x43007FD8: nop

    ovl_boss_angel_82C(rdram, ctx);
        goto after_4;
    // 0x43007FD8: nop

    after_4:
    // 0x43007FDC: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    // 0x43007FE0: jal         0x4300B358
    // 0x43007FE4: nop

    ovl_boss_angel_B358(rdram, ctx);
        goto after_5;
    // 0x43007FE4: nop

    after_5:
L_43007FE8:
    // 0x43007FE8: jal         0x430000F4
    // 0x43007FEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_boss_angel_F4(rdram, ctx);
        goto after_6;
    // 0x43007FEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x43007FF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43007FF4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43007FF8: jr          $ra
    // 0x43007FFC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x43007FFC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_boss_angel_8000(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008000: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x43008004: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x43008008: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x4300800C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x43008010: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x43008014: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x43008018: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x4300801C: jal         0x430000E8
    // 0x43008020: addiu       $a0, $zero, 0x58
    ctx->r4 = ADD32(0, 0X58);
    ovl_boss_angel_E8(rdram, ctx);
        goto after_0;
    // 0x43008020: addiu       $a0, $zero, 0x58
    ctx->r4 = ADD32(0, 0X58);
    after_0:
    // 0x43008024: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x43008028: jal         0x4300B290
    // 0x4300802C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    ovl_boss_angel_B290(rdram, ctx);
        goto after_1;
    // 0x4300802C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_1:
    // 0x43008030: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x43008034: sw          $zero, 0x14($s0)
    MEM_W(0X14, ctx->r16) = 0;
    // 0x43008038: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x4300803C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x43008040: sw          $t6, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r14;
    // 0x43008044: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x43008048: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x4300804C: addiu       $a1, $s0, 0x18
    ctx->r5 = ADD32(ctx->r16, 0X18);
    // 0x43008050: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x43008054: jal         0x43000DC0
    // 0x43008058: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_boss_angel_DC0(rdram, ctx);
        goto after_2;
    // 0x43008058: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x4300805C: lui         $t7, 0x4300
    ctx->r15 = S32(0X4300 << 16);
    // 0x43008060: lui         $t8, 0x4300
    ctx->r24 = S32(0X4300 << 16);
    // 0x43008064: lui         $t9, 0x4300
    ctx->r25 = S32(0X4300 << 16);
    // 0x43008068: lui         $t0, 0x4300
    ctx->r8 = S32(0X4300 << 16);
    // 0x4300806C: lui         $t1, 0x4300
    ctx->r9 = S32(0X4300 << 16);
    // 0x43008070: lui         $t2, 0x4300
    ctx->r10 = S32(0X4300 << 16);
    // 0x43008074: lui         $t3, 0x4300
    ctx->r11 = S32(0X4300 << 16);
    // 0x43008078: lui         $t4, 0x4300
    ctx->r12 = S32(0X4300 << 16);
    // 0x4300807C: lui         $t5, 0x4300
    ctx->r13 = S32(0X4300 << 16);
    // 0x43008080: addiu       $t7, $t7, 0x7C20
    ctx->r15 = ADD32(ctx->r15, 0X7C20);
    // 0x43008084: addiu       $t8, $t8, 0x7D00
    ctx->r24 = ADD32(ctx->r24, 0X7D00);
    // 0x43008088: addiu       $t9, $t9, 0x7DE4
    ctx->r25 = ADD32(ctx->r25, 0X7DE4);
    // 0x4300808C: addiu       $t0, $t0, 0x7E38
    ctx->r8 = ADD32(ctx->r8, 0X7E38);
    // 0x43008090: addiu       $t1, $t1, 0x7E50
    ctx->r9 = ADD32(ctx->r9, 0X7E50);
    // 0x43008094: addiu       $t2, $t2, 0x7E90
    ctx->r10 = ADD32(ctx->r10, 0X7E90);
    // 0x43008098: addiu       $t3, $t3, 0x7EC4
    ctx->r11 = ADD32(ctx->r11, 0X7EC4);
    // 0x4300809C: addiu       $t4, $t4, 0x7F28
    ctx->r12 = ADD32(ctx->r12, 0X7F28);
    // 0x430080A0: addiu       $t5, $t5, 0x7F8C
    ctx->r13 = ADD32(ctx->r13, 0X7F8C);
    // 0x430080A4: sw          $t7, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r15;
    // 0x430080A8: sw          $t8, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r24;
    // 0x430080AC: sw          $t9, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r25;
    // 0x430080B0: sw          $t0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r8;
    // 0x430080B4: sw          $t1, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r9;
    // 0x430080B8: sw          $t2, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r10;
    // 0x430080BC: sw          $t3, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->r11;
    // 0x430080C0: sw          $t4, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->r12;
    // 0x430080C4: sw          $t5, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r13;
    // 0x430080C8: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x430080CC: jal         0x43007E90
    // 0x430080D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_boss_angel_7E90(rdram, ctx);
        goto after_3;
    // 0x430080D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x430080D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430080D8: jal         0x43007E38
    // 0x430080DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_boss_angel_7E38(rdram, ctx);
        goto after_4;
    // 0x430080DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x430080E0: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x430080E4: nop

    // 0x430080E8: beq         $v0, $zero, L_43008110
    if (ctx->r2 == 0) {
        // 0x430080EC: nop
    
            goto L_43008110;
    }
    // 0x430080EC: nop

    // 0x430080F0: bgez        $v0, L_43008108
    if (SIGNED(ctx->r2) >= 0) {
        // 0x430080F4: lw          $a1, 0x30($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X30);
            goto L_43008108;
    }
    // 0x430080F4: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x430080F8: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x430080FC: nop

    // 0x43008100: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x43008104: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
L_43008108:
    // 0x43008108: jal         0x43007D00
    // 0x4300810C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_boss_angel_7D00(rdram, ctx);
        goto after_5;
    // 0x4300810C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
L_43008110:
    // 0x43008110: lui         $a0, 0x4300
    ctx->r4 = S32(0X4300 << 16);
    // 0x43008114: addiu       $a0, $a0, 0x7CD8
    ctx->r4 = ADD32(ctx->r4, 0X7CD8);
    // 0x43008118: jal         0x4300B300
    // 0x4300811C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_boss_angel_B300(rdram, ctx);
        goto after_6;
    // 0x4300811C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_6:
    // 0x43008120: lui         $a0, 0x4300
    ctx->r4 = S32(0X4300 << 16);
    // 0x43008124: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x43008128: addiu       $a0, $a0, 0x7C34
    ctx->r4 = ADD32(ctx->r4, 0X7C34);
    // 0x4300812C: ori         $a1, $zero, 0xFECF
    ctx->r5 = 0 | 0XFECF;
    // 0x43008130: addiu       $a2, $zero, 0x2000
    ctx->r6 = ADD32(0, 0X2000);
    // 0x43008134: jal         0x43000820
    // 0x43008138: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_boss_angel_820(rdram, ctx);
        goto after_7;
    // 0x43008138: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_7:
    // 0x4300813C: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    // 0x43008140: sw          $s0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r16;
    // 0x43008144: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43008148: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x4300814C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x43008150: jr          $ra
    // 0x43008154: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x43008154: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x43008158: nop

    // 0x4300815C: nop

;}
RECOMP_FUNC void ovl_boss_angel_8160(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008160: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x43008164: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x43008168: sw          $s7, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r23;
    // 0x4300816C: sw          $s6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r22;
    // 0x43008170: sw          $s5, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r21;
    // 0x43008174: sw          $s4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r20;
    // 0x43008178: sw          $s3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r19;
    // 0x4300817C: sw          $s2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r18;
    // 0x43008180: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x43008184: sw          $s0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r16;
    // 0x43008188: swc1        $f31, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x4300818C: swc1        $f30, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f30.u32l;
    // 0x43008190: swc1        $f29, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x43008194: swc1        $f28, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f28.u32l;
    // 0x43008198: swc1        $f27, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x4300819C: swc1        $f26, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f26.u32l;
    // 0x430081A0: swc1        $f25, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x430081A4: swc1        $f24, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f24.u32l;
    // 0x430081A8: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x430081AC: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x430081B0: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x430081B4: jal         0x43000868
    // 0x430081B8: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    ovl_boss_angel_868(rdram, ctx);
        goto after_0;
    // 0x430081B8: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x430081BC: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430081C0: lwc1        $f31, -0x4190($at)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r1, -0X4190);
    // 0x430081C4: lwc1        $f30, -0x418C($at)
    ctx->f30.u32l = MEM_W(ctx->r1, -0X418C);
    // 0x430081C8: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x430081CC: mtc1        $at, $f29
    ctx->f_odd[(29 - 1) * 2] = ctx->r1;
    // 0x430081D0: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430081D4: lwc1        $f27, -0x4188($at)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r1, -0X4188);
    // 0x430081D8: lwc1        $f26, -0x4184($at)
    ctx->f26.u32l = MEM_W(ctx->r1, -0X4184);
    // 0x430081DC: lui         $at, 0x4030
    ctx->r1 = S32(0X4030 << 16);
    // 0x430081E0: lui         $s7, 0x4301
    ctx->r23 = S32(0X4301 << 16);
    // 0x430081E4: lw          $s3, 0x1C($v0)
    ctx->r19 = MEM_W(ctx->r2, 0X1C);
    // 0x430081E8: mtc1        $at, $f25
    ctx->f_odd[(25 - 1) * 2] = ctx->r1;
    // 0x430081EC: mtc1        $zero, $f28
    ctx->f28.u32l = 0;
    // 0x430081F0: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x430081F4: addiu       $s7, $s7, -0x43D8
    ctx->r23 = ADD32(ctx->r23, -0X43D8);
    // 0x430081F8: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x430081FC: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
L_43008200:
    // 0x43008200: or          $s2, $s3, $zero
    ctx->r18 = ctx->r19 | 0;
    // 0x43008204: or          $s1, $s3, $zero
    ctx->r17 = ctx->r19 | 0;
L_43008208:
    // 0x43008208: lh          $v0, 0xB0($s1)
    ctx->r2 = MEM_H(ctx->r17, 0XB0);
    // 0x4300820C: lw          $a1, 0x8($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X8);
    // 0x43008210: beq         $v0, $zero, L_4300831C
    if (ctx->r2 == 0) {
        // 0x43008214: addiu       $t6, $v0, -0x1
        ctx->r14 = ADD32(ctx->r2, -0X1);
            goto L_4300831C;
    }
    // 0x43008214: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x43008218: sh          $t6, 0xB0($s1)
    MEM_H(0XB0, ctx->r17) = ctx->r14;
    // 0x4300821C: lh          $v0, 0xB0($s1)
    ctx->r2 = MEM_H(ctx->r17, 0XB0);
    // 0x43008220: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x43008224: beq         $v0, $zero, L_430082F8
    if (ctx->r2 == 0) {
        // 0x43008228: addiu       $a0, $zero, 0xC
        ctx->r4 = ADD32(0, 0XC);
            goto L_430082F8;
    }
    // 0x43008228: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x4300822C: mtc1        $v0, $f18
    ctx->f18.u32l = ctx->r2;
    // 0x43008230: lw          $t7, 0xF8($s3)
    ctx->r15 = MEM_W(ctx->r19, 0XF8);
    // 0x43008234: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x43008238: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x4300823C: lwc1        $f14, 0x68($s2)
    ctx->f14.u32l = MEM_W(ctx->r18, 0X68);
    // 0x43008240: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x43008244: lw          $s0, 0x8($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X8);
    // 0x43008248: lwc1        $f22, 0x38($s2)
    ctx->f22.u32l = MEM_W(ctx->r18, 0X38);
    // 0x4300824C: mul.s       $f14, $f18, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = MUL_S(ctx->f18.fl, ctx->f14.fl);
    // 0x43008250: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    // 0x43008254: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x43008258: jal         0x4300B4B0
    // 0x4300825C: div.s       $f20, $f14, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f20.fl = DIV_S(ctx->f14.fl, ctx->f16.fl);
    ovl_boss_angel_B4B0(rdram, ctx);
        goto after_1;
    // 0x4300825C: div.s       $f20, $f14, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f20.fl = DIV_S(ctx->f14.fl, ctx->f16.fl);
    after_1:
    // 0x43008260: mul.s       $f6, $f0, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x43008264: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x43008268: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    // 0x4300826C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x43008270: jal         0x4300B670
    // 0x43008274: swc1        $f8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f8.u32l;
    ovl_boss_angel_B670(rdram, ctx);
        goto after_2;
    // 0x43008274: swc1        $f8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f8.u32l;
    after_2:
    // 0x43008278: mul.s       $f10, $f0, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x4300827C: lwc1        $f16, 0x8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8);
    // 0x43008280: nop

    // 0x43008284: add.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x43008288: swc1        $f18, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f18.u32l;
    // 0x4300828C: lh          $v0, 0xB0($s1)
    ctx->r2 = MEM_H(ctx->r17, 0XB0);
    // 0x43008290: nop

    // 0x43008294: slti        $at, $v0, 0x10
    ctx->r1 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x43008298: beq         $at, $zero, L_430082C4
    if (ctx->r1 == 0) {
        // 0x4300829C: nop
    
            goto L_430082C4;
    }
    // 0x4300829C: nop

    // 0x430082A0: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x430082A4: nop

    // 0x430082A8: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x430082AC: sub.d       $f8, $f24, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f24.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f24.d - ctx->f6.d;
    // 0x430082B0: mul.d       $f16, $f8, $f26
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f26.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f26.d);
    // 0x430082B4: add.d       $f10, $f16, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f28.d); 
    ctx->f10.d = ctx->f16.d + ctx->f28.d;
    // 0x430082B8: cvt.s.d     $f20, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f20.fl = CVT_S_D(ctx->f10.d);
    // 0x430082BC: swc1        $f20, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f20.u32l;
    // 0x430082C0: swc1        $f20, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f20.u32l;
L_430082C4:
    // 0x430082C4: lw          $v0, 0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X8);
    // 0x430082C8: nop

    // 0x430082CC: lhu         $t8, 0x38($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X38);
    // 0x430082D0: nop

    // 0x430082D4: ori         $t9, $t8, 0x80
    ctx->r25 = ctx->r24 | 0X80;
    // 0x430082D8: sh          $t9, 0x38($v0)
    MEM_H(0X38, ctx->r2) = ctx->r25;
    // 0x430082DC: lwc1        $f18, 0x68($s2)
    ctx->f18.u32l = MEM_W(ctx->r18, 0X68);
    // 0x430082E0: nop

    // 0x430082E4: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x430082E8: mul.d       $f6, $f4, $f30
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f30.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f30.d);
    // 0x430082EC: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x430082F0: b           L_4300831C
    // 0x430082F4: swc1        $f8, 0x68($s2)
    MEM_W(0X68, ctx->r18) = ctx->f8.u32l;
        goto L_4300831C;
    // 0x430082F4: swc1        $f8, 0x68($s2)
    MEM_W(0X68, ctx->r18) = ctx->f8.u32l;
L_430082F8:
    // 0x430082F8: lw          $v0, 0xE0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XE0);
    // 0x430082FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x43008300: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x43008304: sll         $t0, $v0, 1
    ctx->r8 = S32(ctx->r2 << 1);
    // 0x43008308: addu        $t1, $s3, $t0
    ctx->r9 = ADD32(ctx->r19, ctx->r8);
    // 0x4300830C: sw          $v0, 0xE0($s3)
    MEM_W(0XE0, ctx->r19) = ctx->r2;
    // 0x43008310: sh          $s5, 0xC8($t1)
    MEM_H(0XC8, ctx->r9) = ctx->r21;
    // 0x43008314: jal         0x43000DC0
    // 0x43008318: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_boss_angel_DC0(rdram, ctx);
        goto after_3;
    // 0x43008318: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
L_4300831C:
    // 0x4300831C: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x43008320: slti        $at, $s5, 0xC
    ctx->r1 = SIGNED(ctx->r21) < 0XC ? 1 : 0;
    // 0x43008324: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x43008328: bne         $at, $zero, L_43008208
    if (ctx->r1 != 0) {
        // 0x4300832C: addiu       $s1, $s1, 0x2
        ctx->r17 = ADD32(ctx->r17, 0X2);
            goto L_43008208;
    }
    // 0x4300832C: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x43008330: lui         $s4, 0x4301
    ctx->r20 = S32(0X4301 << 16);
    // 0x43008334: addiu       $s4, $s4, -0x43E0
    ctx->r20 = ADD32(ctx->r20, -0X43E0);
    // 0x43008338: or          $s2, $s3, $zero
    ctx->r18 = ctx->r19 | 0;
L_4300833C:
    // 0x4300833C: lw          $s1, 0xE4($s2)
    ctx->r17 = MEM_W(ctx->r18, 0XE4);
    // 0x43008340: lw          $s0, 0xEC($s2)
    ctx->r16 = MEM_W(ctx->r18, 0XEC);
    // 0x43008344: lw          $t9, 0x4C($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X4C);
    // 0x43008348: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x4300834C: jalr        $t9
    // 0x43008350: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x43008350: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_4:
    // 0x43008354: lw          $v1, 0x4($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X4);
    // 0x43008358: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    // 0x4300835C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x43008360: slt         $at, $a0, $v1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x43008364: beq         $at, $zero, L_430083DC
    if (ctx->r1 == 0) {
        // 0x43008368: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_430083DC;
    }
    // 0x43008368: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_4300836C:
    // 0x4300836C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x43008370: slt         $at, $s0, $v1
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x43008374: bne         $at, $zero, L_43008380
    if (ctx->r1 != 0) {
        // 0x43008378: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_43008380;
    }
    // 0x43008378: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x4300837C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
L_43008380:
    // 0x43008380: sll         $t2, $s0, 1
    ctx->r10 = S32(ctx->r16 << 1);
    // 0x43008384: addu        $t3, $s3, $t2
    ctx->r11 = ADD32(ctx->r19, ctx->r10);
    // 0x43008388: lh          $t4, 0xB0($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XB0);
    // 0x4300838C: nop

    // 0x43008390: slti        $at, $t4, 0x15
    ctx->r1 = SIGNED(ctx->r12) < 0X15 ? 1 : 0;
    // 0x43008394: bne         $at, $zero, L_430083D0
    if (ctx->r1 != 0) {
        // 0x43008398: sll         $t5, $s0, 2
        ctx->r13 = S32(ctx->r16 << 2);
            goto L_430083D0;
    }
    // 0x43008398: sll         $t5, $s0, 2
    ctx->r13 = S32(ctx->r16 << 2);
    // 0x4300839C: addu        $t6, $s3, $t5
    ctx->r14 = ADD32(ctx->r19, ctx->r13);
    // 0x430083A0: lw          $a1, 0x8($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X8);
    // 0x430083A4: lw          $t9, 0x40($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X40);
    // 0x430083A8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x430083AC: jalr        $t9
    // 0x430083B0: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x430083B0: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    after_5:
    // 0x430083B4: lw          $t9, 0x4C($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X4C);
    // 0x430083B8: sw          $s0, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->r16;
    // 0x430083BC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x430083C0: jalr        $t9
    // 0x430083C4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x430083C4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x430083C8: b           L_430083E0
    // 0x430083CC: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
        goto L_430083E0;
    // 0x430083CC: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
L_430083D0:
    // 0x430083D0: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x430083D4: bne         $at, $zero, L_4300836C
    if (ctx->r1 != 0) {
        // 0x430083D8: nop
    
            goto L_4300836C;
    }
    // 0x430083D8: nop

L_430083DC:
    // 0x430083DC: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
L_430083E0:
    // 0x430083E0: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x430083E4: bne         $s4, $s7, L_4300833C
    if (ctx->r20 != ctx->r23) {
        // 0x430083E8: sw          $s0, 0xE8($s2)
        MEM_W(0XE8, ctx->r18) = ctx->r16;
            goto L_4300833C;
    }
    // 0x430083E8: sw          $s0, 0xE8($s2)
    MEM_W(0XE8, ctx->r18) = ctx->r16;
    // 0x430083EC: bne         $s6, $zero, L_43008404
    if (ctx->r22 != 0) {
        // 0x430083F0: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_43008404;
    }
    // 0x430083F0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x430083F4: lw          $t7, 0x104($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X104);
    // 0x430083F8: nop

    // 0x430083FC: bne         $t7, $zero, L_43008414
    if (ctx->r15 != 0) {
        // 0x43008400: nop
    
            goto L_43008414;
    }
    // 0x43008400: nop

L_43008404:
    // 0x43008404: jal         0x4300A1D8
    // 0x43008408: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    ovl_boss_angel_A1D8(rdram, ctx);
        goto after_7;
    // 0x43008408: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    after_7:
    // 0x4300840C: b           L_43008200
    // 0x43008410: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
        goto L_43008200;
    // 0x43008410: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
L_43008414:
    // 0x43008414: lw          $v0, 0x108($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X108);
    // 0x43008418: nop

    // 0x4300841C: beq         $v0, $zero, L_4300842C
    if (ctx->r2 == 0) {
        // 0x43008420: nop
    
            goto L_4300842C;
    }
    // 0x43008420: nop

    // 0x43008424: jalr        $v0
    // 0x43008428: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_8;
    // 0x43008428: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_8:
L_4300842C:
    // 0x4300842C: lw          $a0, 0x100($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X100);
    // 0x43008430: jal         0x4300B358
    // 0x43008434: nop

    ovl_boss_angel_B358(rdram, ctx);
        goto after_9;
    // 0x43008434: nop

    after_9:
    // 0x43008438: lw          $t9, 0x114($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X114);
    // 0x4300843C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x43008440: jalr        $t9
    // 0x43008444: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x43008444: nop

    after_10:
    // 0x43008448: jal         0x43000838
    // 0x4300844C: nop

    ovl_boss_angel_838(rdram, ctx);
        goto after_11;
    // 0x4300844C: nop

    after_11:
    // 0x43008450: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x43008454: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x43008458: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x4300845C: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x43008460: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x43008464: lwc1        $f25, 0x20($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x43008468: lwc1        $f24, 0x24($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X24);
    // 0x4300846C: lwc1        $f27, 0x28($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x43008470: lwc1        $f26, 0x2C($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x43008474: lwc1        $f29, 0x30($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x43008478: lwc1        $f28, 0x34($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X34);
    // 0x4300847C: lwc1        $f31, 0x38($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x43008480: lwc1        $f30, 0x3C($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x43008484: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
    // 0x43008488: lw          $s1, 0x48($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X48);
    // 0x4300848C: lw          $s2, 0x4C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X4C);
    // 0x43008490: lw          $s3, 0x50($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X50);
    // 0x43008494: lw          $s4, 0x54($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X54);
    // 0x43008498: lw          $s5, 0x58($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X58);
    // 0x4300849C: lw          $s6, 0x5C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X5C);
    // 0x430084A0: lw          $s7, 0x60($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X60);
    // 0x430084A4: jr          $ra
    // 0x430084A8: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x430084A8: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void ovl_boss_angel_84AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430084AC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x430084B0: jr          $ra
    // 0x430084B4: sw          $t6, 0x104($a0)
    MEM_W(0X104, ctx->r4) = ctx->r14;
    return;
    // 0x430084B4: sw          $t6, 0x104($a0)
    MEM_W(0X104, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void ovl_boss_angel_84B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430084B8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x430084BC: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x430084C0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x430084C4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x430084C8: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x430084CC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x430084D0: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x430084D4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x430084D8: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
L_430084DC:
    // 0x430084DC: lw          $a1, 0x8($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X8);
    // 0x430084E0: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x430084E4: beq         $a1, $zero, L_430084F4
    if (ctx->r5 == 0) {
        // 0x430084E8: nop
    
            goto L_430084F4;
    }
    // 0x430084E8: nop

    // 0x430084EC: jal         0x43000DC0
    // 0x430084F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_boss_angel_DC0(rdram, ctx);
        goto after_0;
    // 0x430084F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
L_430084F4:
    // 0x430084F4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x430084F8: slti        $at, $s0, 0x30
    ctx->r1 = SIGNED(ctx->r16) < 0X30 ? 1 : 0;
    // 0x430084FC: bne         $at, $zero, L_430084DC
    if (ctx->r1 != 0) {
        // 0x43008500: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_430084DC;
    }
    // 0x43008500: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x43008504: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x43008508: jal         0x4300B2BC
    // 0x4300850C: nop

    ovl_boss_angel_B2BC(rdram, ctx);
        goto after_1;
    // 0x4300850C: nop

    after_1:
    // 0x43008510: lw          $a0, 0x4($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X4);
    // 0x43008514: jal         0x4300B2BC
    // 0x43008518: nop

    ovl_boss_angel_B2BC(rdram, ctx);
        goto after_2;
    // 0x43008518: nop

    after_2:
    // 0x4300851C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x43008520: or          $s1, $s3, $zero
    ctx->r17 = ctx->r19 | 0;
    // 0x43008524: addiu       $s2, $zero, 0x8
    ctx->r18 = ADD32(0, 0X8);
L_43008528:
    // 0x43008528: lw          $a0, 0xE4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XE4);
    // 0x4300852C: nop

    // 0x43008530: lw          $t9, 0x54($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X54);
    // 0x43008534: nop

    // 0x43008538: jalr        $t9
    // 0x4300853C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x4300853C: nop

    after_3:
    // 0x43008540: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x43008544: bne         $s0, $s2, L_43008528
    if (ctx->r16 != ctx->r18) {
        // 0x43008548: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_43008528;
    }
    // 0x43008548: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x4300854C: jal         0x43000868
    // 0x43008550: nop

    ovl_boss_angel_868(rdram, ctx);
        goto after_4;
    // 0x43008550: nop

    after_4:
    // 0x43008554: lw          $a0, 0xFC($s3)
    ctx->r4 = MEM_W(ctx->r19, 0XFC);
    // 0x43008558: nop

    // 0x4300855C: beq         $v0, $a0, L_43008578
    if (ctx->r2 == ctx->r4) {
        // 0x43008560: nop
    
            goto L_43008578;
    }
    // 0x43008560: nop

    // 0x43008564: jal         0x4300082C
    // 0x43008568: nop

    ovl_boss_angel_82C(rdram, ctx);
        goto after_5;
    // 0x43008568: nop

    after_5:
    // 0x4300856C: lw          $a0, 0x100($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X100);
    // 0x43008570: jal         0x4300B358
    // 0x43008574: nop

    ovl_boss_angel_B358(rdram, ctx);
        goto after_6;
    // 0x43008574: nop

    after_6:
L_43008578:
    // 0x43008578: jal         0x430000F4
    // 0x4300857C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    ovl_boss_angel_F4(rdram, ctx);
        goto after_7;
    // 0x4300857C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_7:
    // 0x43008580: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43008584: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x43008588: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x4300858C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x43008590: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x43008594: jr          $ra
    // 0x43008598: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x43008598: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_boss_angel_859C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300859C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x430085A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430085A4: lw          $t9, 0x114($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X114);
    // 0x430085A8: nop

    // 0x430085AC: jalr        $t9
    // 0x430085B0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x430085B0: nop

    after_0:
    // 0x430085B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430085B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x430085BC: jr          $ra
    // 0x430085C0: nop

    return;
    // 0x430085C0: nop

;}
RECOMP_FUNC void ovl_boss_angel_85C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430085C4: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x430085C8: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x430085CC: sw          $s1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r17;
    // 0x430085D0: sw          $s0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r16;
    // 0x430085D4: sw          $a1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r5;
    // 0x430085D8: sw          $a2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r6;
    // 0x430085DC: sw          $a3, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r7;
    // 0x430085E0: lw          $v0, 0xE0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XE0);
    // 0x430085E4: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x430085E8: beq         $v0, $at, L_43008700
    if (ctx->r2 == ctx->r1) {
        // 0x430085EC: or          $s0, $a0, $zero
        ctx->r16 = ctx->r4 | 0;
            goto L_43008700;
    }
    // 0x430085EC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x430085F0: sll         $t6, $v0, 1
    ctx->r14 = S32(ctx->r2 << 1);
    // 0x430085F4: addu        $t7, $a0, $t6
    ctx->r15 = ADD32(ctx->r4, ctx->r14);
    // 0x430085F8: lh          $t8, 0xC8($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XC8);
    // 0x430085FC: addiu       $t9, $v0, 0x1
    ctx->r25 = ADD32(ctx->r2, 0X1);
    // 0x43008600: sw          $t8, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r24;
    // 0x43008604: sw          $t9, 0xE0($a0)
    MEM_W(0XE0, ctx->r4) = ctx->r25;
    // 0x43008608: lw          $t0, 0x78($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X78);
    // 0x4300860C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x43008610: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x43008614: addu        $s1, $a0, $t1
    ctx->r17 = ADD32(ctx->r4, ctx->r9);
    // 0x43008618: lw          $v1, 0x8($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X8);
    // 0x4300861C: addiu       $a1, $s1, 0x8
    ctx->r5 = ADD32(ctx->r17, 0X8);
    // 0x43008620: bne         $v1, $zero, L_43008658
    if (ctx->r3 != 0) {
        // 0x43008624: addiu       $a0, $zero, 0x4
        ctx->r4 = ADD32(0, 0X4);
            goto L_43008658;
    }
    // 0x43008624: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x43008628: lw          $a2, 0x0($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X0);
    // 0x4300862C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x43008630: jal         0x43000DC0
    // 0x43008634: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_boss_angel_DC0(rdram, ctx);
        goto after_0;
    // 0x43008634: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x43008638: lw          $a2, 0x8($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X8);
    // 0x4300863C: lw          $a3, 0x4($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X4);
    // 0x43008640: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x43008644: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x43008648: jal         0x43000DC0
    // 0x4300864C: addiu       $a1, $sp, 0x74
    ctx->r5 = ADD32(ctx->r29, 0X74);
    ovl_boss_angel_DC0(rdram, ctx);
        goto after_1;
    // 0x4300864C: addiu       $a1, $sp, 0x74
    ctx->r5 = ADD32(ctx->r29, 0X74);
    after_1:
    // 0x43008650: lw          $v1, 0x8($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X8);
    // 0x43008654: nop

L_43008658:
    // 0x43008658: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x4300865C: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x43008660: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43008664: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x43008668: lw          $a2, 0x84($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X84);
    // 0x4300866C: addiu       $t2, $zero, 0xC
    ctx->r10 = ADD32(0, 0XC);
    // 0x43008670: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x43008674: addiu       $t4, $zero, 0x1A
    ctx->r12 = ADD32(0, 0X1A);
    // 0x43008678: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x4300867C: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    // 0x43008680: swc1        $f6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f6.u32l;
    // 0x43008684: swc1        $f7, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f_odd[(7 - 1) * 2];
    // 0x43008688: sw          $t4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r12;
    // 0x4300868C: sw          $t3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r11;
    // 0x43008690: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x43008694: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x43008698: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    // 0x4300869C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x430086A0: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    // 0x430086A4: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    // 0x430086A8: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x430086AC: sw          $zero, 0x50($sp)
    MEM_W(0X50, ctx->r29) = 0;
    // 0x430086B0: swc1        $f1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x430086B4: swc1        $f1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x430086B8: swc1        $f1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x430086BC: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x430086C0: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x430086C4: jal         0x43000DC0
    // 0x430086C8: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    ovl_boss_angel_DC0(rdram, ctx);
        goto after_2;
    // 0x430086C8: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x430086CC: lwc1        $f8, 0x88($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X88);
    // 0x430086D0: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430086D4: swc1        $f8, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->f8.u32l;
    // 0x430086D8: lwc1        $f16, -0x4180($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X4180);
    // 0x430086DC: lwc1        $f10, 0x8C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x430086E0: nop

    // 0x430086E4: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x430086E8: swc1        $f18, 0x68($s1)
    MEM_W(0X68, ctx->r17) = ctx->f18.u32l;
    // 0x430086EC: lw          $t6, 0x78($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X78);
    // 0x430086F0: lw          $t5, 0xF8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XF8);
    // 0x430086F4: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x430086F8: addu        $t8, $s0, $t7
    ctx->r24 = ADD32(ctx->r16, ctx->r15);
    // 0x430086FC: sh          $t5, 0xB0($t8)
    MEM_H(0XB0, ctx->r24) = ctx->r13;
L_43008700:
    // 0x43008700: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x43008704: lw          $s0, 0x5C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X5C);
    // 0x43008708: lw          $s1, 0x60($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X60);
    // 0x4300870C: jr          $ra
    // 0x43008710: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x43008710: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
