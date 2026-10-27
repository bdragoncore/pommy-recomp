#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_stage_world5_2C9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002C9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60002CA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60002CA4: jal         0x600009C4
    // 0x60002CA8: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_stage_world5_9C4(rdram, ctx);
        goto after_0;
    // 0x60002CA8: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_0:
    // 0x60002CAC: jal         0x60000BA4
    // 0x60002CB0: addiu       $a0, $zero, 0x112
    ctx->r4 = ADD32(0, 0X112);
    ovl_stage_world5_BA4(rdram, ctx);
        goto after_1;
    // 0x60002CB0: addiu       $a0, $zero, 0x112
    ctx->r4 = ADD32(0, 0X112);
    after_1:
    // 0x60002CB4: jal         0x600009AC
    // 0x60002CB8: nop

    ovl_stage_world5_9AC(rdram, ctx);
        goto after_2;
    // 0x60002CB8: nop

    after_2:
    // 0x60002CBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002CC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60002CC4: jr          $ra
    // 0x60002CC8: nop

    return;
    // 0x60002CC8: nop

;}
RECOMP_FUNC void ovl_stage_world5_2CCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002CCC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60002CD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60002CD4: jal         0x60000BB0
    // 0x60002CD8: addiu       $a0, $zero, 0x112
    ctx->r4 = ADD32(0, 0X112);
    ovl_stage_world5_BB0(rdram, ctx);
        goto after_0;
    // 0x60002CD8: addiu       $a0, $zero, 0x112
    ctx->r4 = ADD32(0, 0X112);
    after_0:
    // 0x60002CDC: bne         $v0, $zero, L_60002D94
    if (ctx->r2 != 0) {
        // 0x60002CE0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60002D94;
    }
    // 0x60002CE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002CE4: jal         0x60000BB0
    // 0x60002CE8: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    ovl_stage_world5_BB0(rdram, ctx);
        goto after_1;
    // 0x60002CE8: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    after_1:
    // 0x60002CEC: beq         $v0, $zero, L_60002D94
    if (ctx->r2 == 0) {
        // 0x60002CF0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60002D94;
    }
    // 0x60002CF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002CF4: jal         0x60000BB0
    // 0x60002CF8: addiu       $a0, $zero, 0x105
    ctx->r4 = ADD32(0, 0X105);
    ovl_stage_world5_BB0(rdram, ctx);
        goto after_2;
    // 0x60002CF8: addiu       $a0, $zero, 0x105
    ctx->r4 = ADD32(0, 0X105);
    after_2:
    // 0x60002CFC: bne         $v0, $zero, L_60002D94
    if (ctx->r2 != 0) {
        // 0x60002D00: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60002D94;
    }
    // 0x60002D00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002D04: jal         0x60000BB0
    // 0x60002D08: addiu       $a0, $zero, 0x113
    ctx->r4 = ADD32(0, 0X113);
    ovl_stage_world5_BB0(rdram, ctx);
        goto after_3;
    // 0x60002D08: addiu       $a0, $zero, 0x113
    ctx->r4 = ADD32(0, 0X113);
    after_3:
    // 0x60002D0C: bne         $v0, $zero, L_60002D50
    if (ctx->r2 != 0) {
        // 0x60002D10: nop
    
            goto L_60002D50;
    }
    // 0x60002D10: nop

    // 0x60002D14: jal         0x60000B98
    // 0x60002D18: addiu       $a0, $zero, 0x112
    ctx->r4 = ADD32(0, 0X112);
    ovl_stage_world5_B98(rdram, ctx);
        goto after_4;
    // 0x60002D18: addiu       $a0, $zero, 0x112
    ctx->r4 = ADD32(0, 0X112);
    after_4:
    // 0x60002D1C: jal         0x60000B98
    // 0x60002D20: addiu       $a0, $zero, 0x113
    ctx->r4 = ADD32(0, 0X113);
    ovl_stage_world5_B98(rdram, ctx);
        goto after_5;
    // 0x60002D20: addiu       $a0, $zero, 0x113
    ctx->r4 = ADD32(0, 0X113);
    after_5:
    // 0x60002D24: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x60002D28: jal         0x60000E68
    // 0x60002D2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world5_E68(rdram, ctx);
        goto after_6;
    // 0x60002D2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x60002D30: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002D34: addiu       $a0, $a0, 0x2C9C
    ctx->r4 = ADD32(ctx->r4, 0X2C9C);
    // 0x60002D38: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60002D3C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60002D40: jal         0x60000994
    // 0x60002D44: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world5_994(rdram, ctx);
        goto after_7;
    // 0x60002D44: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_7:
    // 0x60002D48: b           L_60002D94
    // 0x60002D4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60002D94;
    // 0x60002D4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60002D50:
    // 0x60002D50: jal         0x60000DE4
    // 0x60002D54: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world5_DE4(rdram, ctx);
        goto after_8;
    // 0x60002D54: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_8:
    // 0x60002D58: jal         0x60000CC4
    // 0x60002D5C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_stage_world5_CC4(rdram, ctx);
        goto after_9;
    // 0x60002D5C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_9:
    // 0x60002D60: jal         0x60000A6C
    // 0x60002D64: nop

    ovl_stage_world5_A6C(rdram, ctx);
        goto after_10;
    // 0x60002D64: nop

    after_10:
    // 0x60002D68: jal         0x60000B98
    // 0x60002D6C: addiu       $a0, $zero, 0x105
    ctx->r4 = ADD32(0, 0X105);
    ovl_stage_world5_B98(rdram, ctx);
        goto after_11;
    // 0x60002D6C: addiu       $a0, $zero, 0x105
    ctx->r4 = ADD32(0, 0X105);
    after_11:
    // 0x60002D70: jal         0x60001160
    // 0x60002D74: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    ovl_stage_world5_1160(rdram, ctx);
        goto after_12;
    // 0x60002D74: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_12:
    // 0x60002D78: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002D7C: addiu       $a0, $a0, 0x2444
    ctx->r4 = ADD32(ctx->r4, 0X2444);
    // 0x60002D80: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60002D84: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60002D88: jal         0x60000994
    // 0x60002D8C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world5_994(rdram, ctx);
        goto after_13;
    // 0x60002D8C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_13:
    // 0x60002D90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60002D94:
    // 0x60002D94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60002D98: jr          $ra
    // 0x60002D9C: nop

    return;
    // 0x60002D9C: nop

;}
RECOMP_FUNC void ovl_stage_world5_2DA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002DA0: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x60002DA4: swc1        $f30, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f30.u32l;
    // 0x60002DA8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002DAC: lwc1        $f30, 0x3B84($at)
    ctx->f30.u32l = MEM_W(ctx->r1, 0X3B84);
    // 0x60002DB0: swc1        $f28, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f28.u32l;
    // 0x60002DB4: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x60002DB8: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x60002DBC: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x60002DC0: lui         $at, 0x44AF
    ctx->r1 = S32(0X44AF << 16);
    // 0x60002DC4: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x60002DC8: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x60002DCC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002DD0: lwc1        $f22, 0x3B88($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X3B88);
    // 0x60002DD4: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x60002DD8: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x60002DDC: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x60002DE0: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x60002DE4: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x60002DE8: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x60002DEC: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x60002DF0: mtc1        $zero, $f26
    ctx->f26.u32l = 0;
    // 0x60002DF4: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x60002DF8: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x60002DFC: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x60002E00: swc1        $f31, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x60002E04: swc1        $f29, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x60002E08: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x60002E0C: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x60002E10: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x60002E14: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x60002E18: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x60002E1C: addiu       $s3, $sp, 0x64
    ctx->r19 = ADD32(ctx->r29, 0X64);
    // 0x60002E20: addiu       $s4, $sp, 0x7C
    ctx->r20 = ADD32(ctx->r29, 0X7C);
L_60002E24:
    // 0x60002E24: jal         0x600006DC
    // 0x60002E28: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    ovl_stage_world5_6DC(rdram, ctx);
        goto after_0;
    // 0x60002E28: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_0:
    // 0x60002E2C: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x60002E30: jal         0x60000BA4
    // 0x60002E34: addiu       $a0, $zero, 0x10B
    ctx->r4 = ADD32(0, 0X10B);
    ovl_stage_world5_BA4(rdram, ctx);
        goto after_1;
    // 0x60002E34: addiu       $a0, $zero, 0x10B
    ctx->r4 = ADD32(0, 0X10B);
    after_1:
    // 0x60002E38: jal         0x60000BA4
    // 0x60002E3C: addiu       $a0, $zero, 0x10C
    ctx->r4 = ADD32(0, 0X10C);
    ovl_stage_world5_BA4(rdram, ctx);
        goto after_2;
    // 0x60002E3C: addiu       $a0, $zero, 0x10C
    ctx->r4 = ADD32(0, 0X10C);
    after_2:
    // 0x60002E40: blez        $s2, L_60002F84
    if (SIGNED(ctx->r18) <= 0) {
        // 0x60002E44: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_60002F84;
    }
    // 0x60002E44: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_60002E48:
    // 0x60002E48: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
    // 0x60002E4C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x60002E50: addu        $t7, $t6, $s0
    ctx->r15 = ADD32(ctx->r14, ctx->r16);
    // 0x60002E54: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x60002E58: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x60002E5C: lw          $a0, 0x4($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X4);
    // 0x60002E60: jal         0x600006C4
    // 0x60002E64: nop

    ovl_stage_world5_6C4(rdram, ctx);
        goto after_3;
    // 0x60002E64: nop

    after_3:
    // 0x60002E68: lwc1        $f0, 0x64($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X64);
    // 0x60002E6C: nop

    // 0x60002E70: c.le.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl <= ctx->f0.fl;
    // 0x60002E74: nop

    // 0x60002E78: bc1f        L_60002EE4
    if (!c1cs) {
        // 0x60002E7C: lui         $at, 0x43FA
        ctx->r1 = S32(0X43FA << 16);
            goto L_60002EE4;
    }
    // 0x60002E7C: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x60002E80: c.lt.s      $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f0.fl < ctx->f24.fl;
    // 0x60002E84: lwc1        $f2, 0x68($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X68);
    // 0x60002E88: bc1f        L_60002EE4
    if (!c1cs) {
        // 0x60002E8C: lui         $at, 0x43FA
        ctx->r1 = S32(0X43FA << 16);
            goto L_60002EE4;
    }
    // 0x60002E8C: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x60002E90: c.le.s      $f26, $f2
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f26.fl <= ctx->f2.fl;
    // 0x60002E94: nop

    // 0x60002E98: bc1f        L_60002EE4
    if (!c1cs) {
        // 0x60002E9C: lui         $at, 0x43FA
        ctx->r1 = S32(0X43FA << 16);
            goto L_60002EE4;
    }
    // 0x60002E9C: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x60002EA0: c.lt.s      $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f2.fl < ctx->f20.fl;
    // 0x60002EA4: lwc1        $f12, 0x6C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x60002EA8: bc1f        L_60002EE4
    if (!c1cs) {
        // 0x60002EAC: lui         $at, 0x43FA
        ctx->r1 = S32(0X43FA << 16);
            goto L_60002EE4;
    }
    // 0x60002EAC: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x60002EB0: c.le.s      $f28, $f12
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f28.fl <= ctx->f12.fl;
    // 0x60002EB4: nop

    // 0x60002EB8: bc1f        L_60002EE4
    if (!c1cs) {
        // 0x60002EBC: lui         $at, 0x43FA
        ctx->r1 = S32(0X43FA << 16);
            goto L_60002EE4;
    }
    // 0x60002EBC: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x60002EC0: c.lt.s      $f12, $f30
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 30);
    c1cs = ctx->f12.fl < ctx->f30.fl;
    // 0x60002EC4: nop

    // 0x60002EC8: bc1f        L_60002EE4
    if (!c1cs) {
        // 0x60002ECC: lui         $at, 0x43FA
        ctx->r1 = S32(0X43FA << 16);
            goto L_60002EE4;
    }
    // 0x60002ECC: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x60002ED0: jal         0x60000B98
    // 0x60002ED4: addiu       $a0, $zero, 0x10B
    ctx->r4 = ADD32(0, 0X10B);
    ovl_stage_world5_B98(rdram, ctx);
        goto after_4;
    // 0x60002ED4: addiu       $a0, $zero, 0x10B
    ctx->r4 = ADD32(0, 0X10B);
    after_4:
    // 0x60002ED8: lwc1        $f0, 0x64($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X64);
    // 0x60002EDC: nop

    // 0x60002EE0: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
L_60002EE4:
    // 0x60002EE4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60002EE8: lwc1        $f2, 0x68($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X68);
    // 0x60002EEC: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x60002EF0: lwc1        $f12, 0x6C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x60002EF4: bc1f        L_60002F74
    if (!c1cs) {
        // 0x60002EF8: lui         $at, 0x6000
        ctx->r1 = S32(0X6000 << 16);
            goto L_60002F74;
    }
    // 0x60002EF8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002EFC: lwc1        $f6, 0x3B8C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3B8C);
    // 0x60002F00: lui         $at, 0x43AF
    ctx->r1 = S32(0X43AF << 16);
    // 0x60002F04: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x60002F08: nop

    // 0x60002F0C: bc1f        L_60002F74
    if (!c1cs) {
        // 0x60002F10: nop
    
            goto L_60002F74;
    }
    // 0x60002F10: nop

    // 0x60002F14: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x60002F18: lui         $at, 0x43E1
    ctx->r1 = S32(0X43E1 << 16);
    // 0x60002F1C: c.le.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl <= ctx->f2.fl;
    // 0x60002F20: nop

    // 0x60002F24: bc1f        L_60002F74
    if (!c1cs) {
        // 0x60002F28: nop
    
            goto L_60002F74;
    }
    // 0x60002F28: nop

    // 0x60002F2C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x60002F30: nop

    // 0x60002F34: c.lt.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl < ctx->f10.fl;
    // 0x60002F38: nop

    // 0x60002F3C: bc1f        L_60002F74
    if (!c1cs) {
        // 0x60002F40: nop
    
            goto L_60002F74;
    }
    // 0x60002F40: nop

    // 0x60002F44: c.le.s      $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f20.fl <= ctx->f12.fl;
    // 0x60002F48: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x60002F4C: bc1f        L_60002F74
    if (!c1cs) {
        // 0x60002F50: nop
    
            goto L_60002F74;
    }
    // 0x60002F50: nop

    // 0x60002F54: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x60002F58: nop

    // 0x60002F5C: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    // 0x60002F60: nop

    // 0x60002F64: bc1f        L_60002F74
    if (!c1cs) {
        // 0x60002F68: nop
    
            goto L_60002F74;
    }
    // 0x60002F68: nop

    // 0x60002F6C: jal         0x60000B98
    // 0x60002F70: addiu       $a0, $zero, 0x10C
    ctx->r4 = ADD32(0, 0X10C);
    ovl_stage_world5_B98(rdram, ctx);
        goto after_5;
    // 0x60002F70: addiu       $a0, $zero, 0x10C
    ctx->r4 = ADD32(0, 0X10C);
    after_5:
L_60002F74:
    // 0x60002F74: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x60002F78: bne         $s1, $s2, L_60002E48
    if (ctx->r17 != ctx->r18) {
        // 0x60002F7C: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_60002E48;
    }
    // 0x60002F7C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x60002F80: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_60002F84:
    // 0x60002F84: jal         0x600009D0
    // 0x60002F88: nop

    ovl_stage_world5_9D0(rdram, ctx);
        goto after_6;
    // 0x60002F88: nop

    after_6:
    // 0x60002F8C: b           L_60002E24
    // 0x60002F90: nop

        goto L_60002E24;
    // 0x60002F90: nop

    // 0x60002F94: nop

    // 0x60002F98: nop

    // 0x60002F9C: nop

    // 0x60002FA0: nop

    // 0x60002FA4: nop

    // 0x60002FA8: nop

    // 0x60002FAC: nop

    // 0x60002FB0: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x60002FB4: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x60002FB8: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x60002FBC: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x60002FC0: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x60002FC4: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x60002FC8: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x60002FCC: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x60002FD0: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x60002FD4: lwc1        $f29, 0x38($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x60002FD8: lwc1        $f28, 0x3C($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x60002FDC: lwc1        $f31, 0x40($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x60002FE0: lwc1        $f30, 0x44($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X44);
    // 0x60002FE4: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x60002FE8: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x60002FEC: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x60002FF0: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x60002FF4: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x60002FF8: jr          $ra
    // 0x60002FFC: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    return;
    // 0x60002FFC: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void ovl_stage_world5_3000(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60003004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003008: jal         0x60000C1C
    // 0x6000300C: nop

    ovl_stage_world5_C1C(rdram, ctx);
        goto after_0;
    // 0x6000300C: nop

    after_0:
    // 0x60003010: lw          $t6, 0x8($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X8);
    // 0x60003014: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x60003018: beq         $t6, $at, L_60003034
    if (ctx->r14 == ctx->r1) {
        // 0x6000301C: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_60003034;
    }
    // 0x6000301C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003020: addiu       $a0, $a0, 0x2DA0
    ctx->r4 = ADD32(ctx->r4, 0X2DA0);
    // 0x60003024: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60003028: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x6000302C: jal         0x60000994
    // 0x60003030: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world5_994(rdram, ctx);
        goto after_1;
    // 0x60003030: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
L_60003034:
    // 0x60003034: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003038: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x6000303C: jr          $ra
    // 0x60003040: nop

    return;
    // 0x60003040: nop

;}
RECOMP_FUNC void ovl_stage_world5_3044(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003044: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60003048: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x6000304C: jal         0x60000C1C
    // 0x60003050: nop

    ovl_stage_world5_C1C(rdram, ctx);
        goto after_0;
    // 0x60003050: nop

    after_0:
    // 0x60003054: lw          $t6, 0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC);
    // 0x60003058: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x6000305C: bne         $t6, $at, L_60003070
    if (ctx->r14 != ctx->r1) {
        // 0x60003060: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003070;
    }
    // 0x60003060: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003064: jal         0x60000A60
    // 0x60003068: addiu       $a0, $zero, 0xACE
    ctx->r4 = ADD32(0, 0XACE);
    ovl_stage_world5_A60(rdram, ctx);
        goto after_1;
    // 0x60003068: addiu       $a0, $zero, 0xACE
    ctx->r4 = ADD32(0, 0XACE);
    after_1:
    // 0x6000306C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003070:
    // 0x60003070: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60003074: jr          $ra
    // 0x60003078: nop

    return;
    // 0x60003078: nop

;}
RECOMP_FUNC void ovl_stage_world5_307C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000307C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x60003080: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003084: jal         0x60000BB0
    // 0x60003088: addiu       $a0, $zero, 0x93
    ctx->r4 = ADD32(0, 0X93);
    ovl_stage_world5_BB0(rdram, ctx);
        goto after_0;
    // 0x60003088: addiu       $a0, $zero, 0x93
    ctx->r4 = ADD32(0, 0X93);
    after_0:
    // 0x6000308C: bne         $v0, $zero, L_6000309C
    if (ctx->r2 != 0) {
        // 0x60003090: addiu       $t6, $zero, 0x6E
        ctx->r14 = ADD32(0, 0X6E);
            goto L_6000309C;
    }
    // 0x60003090: addiu       $t6, $zero, 0x6E
    ctx->r14 = ADD32(0, 0X6E);
    // 0x60003094: b           L_600030E0
    // 0x60003098: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
        goto L_600030E0;
    // 0x60003098: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
L_6000309C:
    // 0x6000309C: jal         0x60000BB0
    // 0x600030A0: addiu       $a0, $zero, 0x92
    ctx->r4 = ADD32(0, 0X92);
    ovl_stage_world5_BB0(rdram, ctx);
        goto after_1;
    // 0x600030A0: addiu       $a0, $zero, 0x92
    ctx->r4 = ADD32(0, 0X92);
    after_1:
    // 0x600030A4: bne         $v0, $zero, L_600030B4
    if (ctx->r2 != 0) {
        // 0x600030A8: addiu       $t7, $zero, 0x6D
        ctx->r15 = ADD32(0, 0X6D);
            goto L_600030B4;
    }
    // 0x600030A8: addiu       $t7, $zero, 0x6D
    ctx->r15 = ADD32(0, 0X6D);
    // 0x600030AC: b           L_600030E0
    // 0x600030B0: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
        goto L_600030E0;
    // 0x600030B0: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
L_600030B4:
    // 0x600030B4: jal         0x60000BB0
    // 0x600030B8: addiu       $a0, $zero, 0x91
    ctx->r4 = ADD32(0, 0X91);
    ovl_stage_world5_BB0(rdram, ctx);
        goto after_2;
    // 0x600030B8: addiu       $a0, $zero, 0x91
    ctx->r4 = ADD32(0, 0X91);
    after_2:
    // 0x600030BC: bne         $v0, $zero, L_600030CC
    if (ctx->r2 != 0) {
        // 0x600030C0: addiu       $t8, $zero, 0x6C
        ctx->r24 = ADD32(0, 0X6C);
            goto L_600030CC;
    }
    // 0x600030C0: addiu       $t8, $zero, 0x6C
    ctx->r24 = ADD32(0, 0X6C);
    // 0x600030C4: b           L_600030E0
    // 0x600030C8: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
        goto L_600030E0;
    // 0x600030C8: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
L_600030CC:
    // 0x600030CC: jal         0x60000BB0
    // 0x600030D0: addiu       $a0, $zero, 0x90
    ctx->r4 = ADD32(0, 0X90);
    ovl_stage_world5_BB0(rdram, ctx);
        goto after_3;
    // 0x600030D0: addiu       $a0, $zero, 0x90
    ctx->r4 = ADD32(0, 0X90);
    after_3:
    // 0x600030D4: bne         $v0, $zero, L_600030E0
    if (ctx->r2 != 0) {
        // 0x600030D8: addiu       $t9, $zero, 0x6B
        ctx->r25 = ADD32(0, 0X6B);
            goto L_600030E0;
    }
    // 0x600030D8: addiu       $t9, $zero, 0x6B
    ctx->r25 = ADD32(0, 0X6B);
    // 0x600030DC: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
L_600030E0:
    // 0x600030E0: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x600030E4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x600030E8: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x600030EC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x600030F0: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x600030F4: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x600030F8: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x600030FC: addiu       $t3, $sp, 0x1C
    ctx->r11 = ADD32(ctx->r29, 0X1C);
    // 0x60003100: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x60003104: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x60003108: sw          $t3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r11;
    // 0x6000310C: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x60003110: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x60003114: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x60003118: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x6000311C: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x60003120: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x60003124: jal         0x600006C4
    // 0x60003128: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    ovl_stage_world5_6C4(rdram, ctx);
        goto after_4;
    // 0x60003128: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    after_4:
    // 0x6000312C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003130: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x60003134: jr          $ra
    // 0x60003138: nop

    return;
    // 0x60003138: nop

;}
RECOMP_FUNC void ovl_stage_world5_313C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000313C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60003140: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003144: jal         0x60000BB0
    // 0x60003148: addiu       $a0, $zero, 0xFA
    ctx->r4 = ADD32(0, 0XFA);
    ovl_stage_world5_BB0(rdram, ctx);
        goto after_0;
    // 0x60003148: addiu       $a0, $zero, 0xFA
    ctx->r4 = ADD32(0, 0XFA);
    after_0:
    // 0x6000314C: bne         $v0, $zero, L_600031D0
    if (ctx->r2 != 0) {
        // 0x60003150: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600031D0;
    }
    // 0x60003150: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003154: jal         0x60000BB0
    // 0x60003158: addiu       $a0, $zero, 0x93
    ctx->r4 = ADD32(0, 0X93);
    ovl_stage_world5_BB0(rdram, ctx);
        goto after_1;
    // 0x60003158: addiu       $a0, $zero, 0x93
    ctx->r4 = ADD32(0, 0X93);
    after_1:
    // 0x6000315C: bne         $v0, $zero, L_60003174
    if (ctx->r2 != 0) {
        // 0x60003160: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_60003174;
    }
    // 0x60003160: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x60003164: jal         0x60000E80
    // 0x60003168: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_stage_world5_E80(rdram, ctx);
        goto after_2;
    // 0x60003168: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x6000316C: b           L_600031D0
    // 0x60003170: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600031D0;
    // 0x60003170: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003174:
    // 0x60003174: jal         0x60000BB0
    // 0x60003178: addiu       $a0, $zero, 0x92
    ctx->r4 = ADD32(0, 0X92);
    ovl_stage_world5_BB0(rdram, ctx);
        goto after_3;
    // 0x60003178: addiu       $a0, $zero, 0x92
    ctx->r4 = ADD32(0, 0X92);
    after_3:
    // 0x6000317C: bne         $v0, $zero, L_60003194
    if (ctx->r2 != 0) {
        // 0x60003180: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_60003194;
    }
    // 0x60003180: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x60003184: jal         0x60000E80
    // 0x60003188: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_stage_world5_E80(rdram, ctx);
        goto after_4;
    // 0x60003188: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_4:
    // 0x6000318C: b           L_600031D0
    // 0x60003190: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600031D0;
    // 0x60003190: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003194:
    // 0x60003194: jal         0x60000BB0
    // 0x60003198: addiu       $a0, $zero, 0x91
    ctx->r4 = ADD32(0, 0X91);
    ovl_stage_world5_BB0(rdram, ctx);
        goto after_5;
    // 0x60003198: addiu       $a0, $zero, 0x91
    ctx->r4 = ADD32(0, 0X91);
    after_5:
    // 0x6000319C: bne         $v0, $zero, L_600031B4
    if (ctx->r2 != 0) {
        // 0x600031A0: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_600031B4;
    }
    // 0x600031A0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x600031A4: jal         0x60000E80
    // 0x600031A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world5_E80(rdram, ctx);
        goto after_6;
    // 0x600031A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x600031AC: b           L_600031D0
    // 0x600031B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600031D0;
    // 0x600031B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600031B4:
    // 0x600031B4: jal         0x60000BB0
    // 0x600031B8: addiu       $a0, $zero, 0x90
    ctx->r4 = ADD32(0, 0X90);
    ovl_stage_world5_BB0(rdram, ctx);
        goto after_7;
    // 0x600031B8: addiu       $a0, $zero, 0x90
    ctx->r4 = ADD32(0, 0X90);
    after_7:
    // 0x600031BC: bne         $v0, $zero, L_600031CC
    if (ctx->r2 != 0) {
        // 0x600031C0: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_600031CC;
    }
    // 0x600031C0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x600031C4: jal         0x60000E80
    // 0x600031C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world5_E80(rdram, ctx);
        goto after_8;
    // 0x600031C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
L_600031CC:
    // 0x600031CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600031D0:
    // 0x600031D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600031D4: jr          $ra
    // 0x600031D8: nop

    return;
    // 0x600031D8: nop

;}
RECOMP_FUNC void ovl_stage_world5_31DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600031DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600031E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600031E4: jal         0x60000BB0
    // 0x600031E8: addiu       $a0, $zero, 0x8C
    ctx->r4 = ADD32(0, 0X8C);
    ovl_stage_world5_BB0(rdram, ctx);
        goto after_0;
    // 0x600031E8: addiu       $a0, $zero, 0x8C
    ctx->r4 = ADD32(0, 0X8C);
    after_0:
    // 0x600031EC: beq         $v0, $zero, L_6000321C
    if (ctx->r2 == 0) {
        // 0x600031F0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_6000321C;
    }
    // 0x600031F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600031F4: jal         0x60000BB0
    // 0x600031F8: addiu       $a0, $zero, 0xE9
    ctx->r4 = ADD32(0, 0XE9);
    ovl_stage_world5_BB0(rdram, ctx);
        goto after_1;
    // 0x600031F8: addiu       $a0, $zero, 0xE9
    ctx->r4 = ADD32(0, 0XE9);
    after_1:
    // 0x600031FC: beq         $v0, $zero, L_60003210
    if (ctx->r2 == 0) {
        // 0x60003200: addiu       $a0, $zero, 0x8
        ctx->r4 = ADD32(0, 0X8);
            goto L_60003210;
    }
    // 0x60003200: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x60003204: jal         0x60000EEC
    // 0x60003208: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    ovl_stage_world5_EEC(rdram, ctx);
        goto after_2;
    // 0x60003208: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_2:
    // 0x6000320C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
L_60003210:
    // 0x60003210: jal         0x600006D0
    // 0x60003214: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world5_6D0(rdram, ctx);
        goto after_3;
    // 0x60003214: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x60003218: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000321C:
    // 0x6000321C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60003220: jr          $ra
    // 0x60003224: nop

    return;
    // 0x60003224: nop

;}
RECOMP_FUNC void ovl_stage_world5_3228(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003228: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x6000322C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003230: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x60003234: jal         0x60000E80
    // 0x60003238: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world5_E80(rdram, ctx);
        goto after_0;
    // 0x60003238: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x6000323C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x60003240: jal         0x60000E80
    // 0x60003244: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_stage_world5_E80(rdram, ctx);
        goto after_1;
    // 0x60003244: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x60003248: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x6000324C: jal         0x60000E80
    // 0x60003250: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    ovl_stage_world5_E80(rdram, ctx);
        goto after_2;
    // 0x60003250: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_2:
    // 0x60003254: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003258: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x6000325C: jr          $ra
    // 0x60003260: nop

    return;
    // 0x60003260: nop

;}
RECOMP_FUNC void ovl_stage_world5_3264(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003264: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x60003268: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x6000326C: jal         0x60000C1C
    // 0x60003270: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    ovl_stage_world5_C1C(rdram, ctx);
        goto after_0;
    // 0x60003270: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x60003274: lbu         $t6, 0x20($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X20);
    // 0x60003278: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x6000327C: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x60003280: lw          $t7, 0xC($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XC);
    // 0x60003284: nop

    // 0x60003288: bne         $t7, $zero, L_6000337C
    if (ctx->r15 != 0) {
        // 0x6000328C: nop
    
            goto L_6000337C;
    }
    // 0x6000328C: nop

    // 0x60003290: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x60003294: nop

    // 0x60003298: andi        $t9, $t8, 0x800
    ctx->r25 = ctx->r24 & 0X800;
    // 0x6000329C: bne         $t9, $zero, L_6000337C
    if (ctx->r25 != 0) {
        // 0x600032A0: nop
    
            goto L_6000337C;
    }
    // 0x600032A0: nop

    // 0x600032A4: jal         0x60000BB0
    // 0x600032A8: addiu       $a0, $zero, 0x98
    ctx->r4 = ADD32(0, 0X98);
    ovl_stage_world5_BB0(rdram, ctx);
        goto after_1;
    // 0x600032A8: addiu       $a0, $zero, 0x98
    ctx->r4 = ADD32(0, 0X98);
    after_1:
    // 0x600032AC: bne         $v0, $zero, L_60003314
    if (ctx->r2 != 0) {
        // 0x600032B0: nop
    
            goto L_60003314;
    }
    // 0x600032B0: nop

    // 0x600032B4: jal         0x60000B98
    // 0x600032B8: addiu       $a0, $zero, 0x98
    ctx->r4 = ADD32(0, 0X98);
    ovl_stage_world5_B98(rdram, ctx);
        goto after_2;
    // 0x600032B8: addiu       $a0, $zero, 0x98
    ctx->r4 = ADD32(0, 0X98);
    after_2:
    // 0x600032BC: jal         0x60000EEC
    // 0x600032C0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    ovl_stage_world5_EEC(rdram, ctx);
        goto after_3;
    // 0x600032C0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_3:
    // 0x600032C4: jal         0x60000A60
    // 0x600032C8: addiu       $a0, $zero, 0xAED
    ctx->r4 = ADD32(0, 0XAED);
    ovl_stage_world5_A60(rdram, ctx);
        goto after_4;
    // 0x600032C8: addiu       $a0, $zero, 0xAED
    ctx->r4 = ADD32(0, 0XAED);
    after_4:
    // 0x600032CC: jal         0x600009D0
    // 0x600032D0: nop

    ovl_stage_world5_9D0(rdram, ctx);
        goto after_5;
    // 0x600032D0: nop

    after_5:
    // 0x600032D4: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x600032D8: nop

    // 0x600032DC: andi        $t1, $t0, 0x800
    ctx->r9 = ctx->r8 & 0X800;
    // 0x600032E0: beq         $t1, $zero, L_60003304
    if (ctx->r9 == 0) {
        // 0x600032E4: nop
    
            goto L_60003304;
    }
    // 0x600032E4: nop

L_600032E8:
    // 0x600032E8: jal         0x600009D0
    // 0x600032EC: nop

    ovl_stage_world5_9D0(rdram, ctx);
        goto after_6;
    // 0x600032EC: nop

    after_6:
    // 0x600032F0: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x600032F4: nop

    // 0x600032F8: andi        $t3, $t2, 0x800
    ctx->r11 = ctx->r10 & 0X800;
    // 0x600032FC: bne         $t3, $zero, L_600032E8
    if (ctx->r11 != 0) {
        // 0x60003300: nop
    
            goto L_600032E8;
    }
    // 0x60003300: nop

L_60003304:
    // 0x60003304: jal         0x600009C4
    // 0x60003308: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    ovl_stage_world5_9C4(rdram, ctx);
        goto after_7;
    // 0x60003308: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_7:
    // 0x6000330C: b           L_6000331C
    // 0x60003310: nop

        goto L_6000331C;
    // 0x60003310: nop

L_60003314:
    // 0x60003314: jal         0x60003228
    // 0x60003318: nop

    ovl_stage_world5_3228(rdram, ctx);
        goto after_8;
    // 0x60003318: nop

    after_8:
L_6000331C:
    // 0x6000331C: jal         0x60000EE0
    // 0x60003320: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world5_EE0(rdram, ctx);
        goto after_9;
    // 0x60003320: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_9:
    // 0x60003324: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x60003328: nop

    // 0x6000332C: beq         $v0, $t4, L_60003384
    if (ctx->r2 == ctx->r12) {
        // 0x60003330: nop
    
            goto L_60003384;
    }
    // 0x60003330: nop

    // 0x60003334: jal         0x60000A60
    // 0x60003338: addiu       $a0, $zero, 0xAF5
    ctx->r4 = ADD32(0, 0XAF5);
    ovl_stage_world5_A60(rdram, ctx);
        goto after_10;
    // 0x60003338: addiu       $a0, $zero, 0xAF5
    ctx->r4 = ADD32(0, 0XAF5);
    after_10:
    // 0x6000333C: jal         0x600009D0
    // 0x60003340: nop

    ovl_stage_world5_9D0(rdram, ctx);
        goto after_11;
    // 0x60003340: nop

    after_11:
    // 0x60003344: lw          $t5, 0x0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X0);
    // 0x60003348: nop

    // 0x6000334C: andi        $t6, $t5, 0x800
    ctx->r14 = ctx->r13 & 0X800;
    // 0x60003350: beq         $t6, $zero, L_60003384
    if (ctx->r14 == 0) {
        // 0x60003354: nop
    
            goto L_60003384;
    }
    // 0x60003354: nop

L_60003358:
    // 0x60003358: jal         0x600009D0
    // 0x6000335C: nop

    ovl_stage_world5_9D0(rdram, ctx);
        goto after_12;
    // 0x6000335C: nop

    after_12:
    // 0x60003360: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x60003364: nop

    // 0x60003368: andi        $t8, $t7, 0x800
    ctx->r24 = ctx->r15 & 0X800;
    // 0x6000336C: bne         $t8, $zero, L_60003358
    if (ctx->r24 != 0) {
        // 0x60003370: nop
    
            goto L_60003358;
    }
    // 0x60003370: nop

    // 0x60003374: b           L_60003384
    // 0x60003378: nop

        goto L_60003384;
    // 0x60003378: nop

L_6000337C:
    // 0x6000337C: jal         0x60003228
    // 0x60003380: nop

    ovl_stage_world5_3228(rdram, ctx);
        goto after_13;
    // 0x60003380: nop

    after_13:
L_60003384:
    // 0x60003384: jal         0x600009AC
    // 0x60003388: nop

    ovl_stage_world5_9AC(rdram, ctx);
        goto after_14;
    // 0x60003388: nop

    after_14:
    // 0x6000338C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x60003390: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x60003394: jr          $ra
    // 0x60003398: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x60003398: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_stage_world5_339C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000339C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600033A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600033A4: jal         0x60000C1C
    // 0x600033A8: nop

    ovl_stage_world5_C1C(rdram, ctx);
        goto after_0;
    // 0x600033A8: nop

    after_0:
    // 0x600033AC: lw          $t6, 0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC);
    // 0x600033B0: nop

    // 0x600033B4: bne         $t6, $zero, L_600033D4
    if (ctx->r14 != 0) {
        // 0x600033B8: nop
    
            goto L_600033D4;
    }
    // 0x600033B8: nop

    // 0x600033BC: jal         0x60000BB0
    // 0x600033C0: addiu       $a0, $zero, 0x84
    ctx->r4 = ADD32(0, 0X84);
    ovl_stage_world5_BB0(rdram, ctx);
        goto after_1;
    // 0x600033C0: addiu       $a0, $zero, 0x84
    ctx->r4 = ADD32(0, 0X84);
    after_1:
    // 0x600033C4: beq         $v0, $zero, L_600033D4
    if (ctx->r2 == 0) {
        // 0x600033C8: nop
    
            goto L_600033D4;
    }
    // 0x600033C8: nop

    // 0x600033CC: jal         0x60000F50
    // 0x600033D0: nop

    ovl_stage_world5_F50(rdram, ctx);
        goto after_2;
    // 0x600033D0: nop

    after_2:
L_600033D4:
    // 0x600033D4: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600033D8: addiu       $a0, $a0, 0x3264
    ctx->r4 = ADD32(ctx->r4, 0X3264);
    // 0x600033DC: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x600033E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x600033E4: jal         0x60000994
    // 0x600033E8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world5_994(rdram, ctx);
        goto after_3;
    // 0x600033E8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x600033EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600033F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600033F4: jr          $ra
    // 0x600033F8: nop

    return;
    // 0x600033F8: nop

;}
RECOMP_FUNC void ovl_stage_world5_33FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600033FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60003400: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003404: jal         0x60000BB0
    // 0x60003408: addiu       $a0, $zero, 0x10D
    ctx->r4 = ADD32(0, 0X10D);
    ovl_stage_world5_BB0(rdram, ctx);
        goto after_0;
    // 0x60003408: addiu       $a0, $zero, 0x10D
    ctx->r4 = ADD32(0, 0X10D);
    after_0:
    // 0x6000340C: beq         $v0, $zero, L_60003438
    if (ctx->r2 == 0) {
        // 0x60003410: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003438;
    }
    // 0x60003410: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003414: jal         0x60000BB0
    // 0x60003418: addiu       $a0, $zero, 0x10E
    ctx->r4 = ADD32(0, 0X10E);
    ovl_stage_world5_BB0(rdram, ctx);
        goto after_1;
    // 0x60003418: addiu       $a0, $zero, 0x10E
    ctx->r4 = ADD32(0, 0X10E);
    after_1:
    // 0x6000341C: beq         $v0, $zero, L_60003438
    if (ctx->r2 == 0) {
        // 0x60003420: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003438;
    }
    // 0x60003420: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003424: jal         0x60000244
    // 0x60003428: addiu       $a0, $zero, 0x8B
    ctx->r4 = ADD32(0, 0X8B);
    ovl_stage_world5_244(rdram, ctx);
        goto after_2;
    // 0x60003428: addiu       $a0, $zero, 0x8B
    ctx->r4 = ADD32(0, 0X8B);
    after_2:
    // 0x6000342C: jal         0x60000B98
    // 0x60003430: addiu       $a0, $zero, 0x180
    ctx->r4 = ADD32(0, 0X180);
    ovl_stage_world5_B98(rdram, ctx);
        goto after_3;
    // 0x60003430: addiu       $a0, $zero, 0x180
    ctx->r4 = ADD32(0, 0X180);
    after_3:
    // 0x60003434: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003438:
    // 0x60003438: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x6000343C: jr          $ra
    // 0x60003440: nop

    return;
    // 0x60003440: nop

;}
RECOMP_FUNC void ovl_stage_world5_3444(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003444: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60003448: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x6000344C: jal         0x60000BB0
    // 0x60003450: addiu       $a0, $zero, 0x10F
    ctx->r4 = ADD32(0, 0X10F);
    ovl_stage_world5_BB0(rdram, ctx);
        goto after_0;
    // 0x60003450: addiu       $a0, $zero, 0x10F
    ctx->r4 = ADD32(0, 0X10F);
    after_0:
    // 0x60003454: beq         $v0, $zero, L_60003488
    if (ctx->r2 == 0) {
        // 0x60003458: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003488;
    }
    // 0x60003458: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000345C: jal         0x60000BB0
    // 0x60003460: addiu       $a0, $zero, 0x110
    ctx->r4 = ADD32(0, 0X110);
    ovl_stage_world5_BB0(rdram, ctx);
        goto after_1;
    // 0x60003460: addiu       $a0, $zero, 0x110
    ctx->r4 = ADD32(0, 0X110);
    after_1:
    // 0x60003464: beq         $v0, $zero, L_60003488
    if (ctx->r2 == 0) {
        // 0x60003468: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003488;
    }
    // 0x60003468: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000346C: jal         0x60000BB0
    // 0x60003470: addiu       $a0, $zero, 0x111
    ctx->r4 = ADD32(0, 0X111);
    ovl_stage_world5_BB0(rdram, ctx);
        goto after_2;
    // 0x60003470: addiu       $a0, $zero, 0x111
    ctx->r4 = ADD32(0, 0X111);
    after_2:
    // 0x60003474: beq         $v0, $zero, L_60003488
    if (ctx->r2 == 0) {
        // 0x60003478: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003488;
    }
    // 0x60003478: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000347C: jal         0x60000B98
    // 0x60003480: addiu       $a0, $zero, 0x18A
    ctx->r4 = ADD32(0, 0X18A);
    ovl_stage_world5_B98(rdram, ctx);
        goto after_3;
    // 0x60003480: addiu       $a0, $zero, 0x18A
    ctx->r4 = ADD32(0, 0X18A);
    after_3:
    // 0x60003484: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003488:
    // 0x60003488: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x6000348C: jr          $ra
    // 0x60003490: nop

    return;
    // 0x60003490: nop

;}
RECOMP_FUNC void ovl_stage_world5_3494(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003494: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x60003498: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x6000349C: jal         0x60000C1C
    // 0x600034A0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    ovl_stage_world5_C1C(rdram, ctx);
        goto after_0;
    // 0x600034A0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x600034A4: lw          $t6, 0x8($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X8);
    // 0x600034A8: addiu       $at, $zero, 0x82F
    ctx->r1 = ADD32(0, 0X82F);
    // 0x600034AC: bne         $t6, $at, L_600034C4
    if (ctx->r14 != ctx->r1) {
        // 0x600034B0: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_600034C4;
    }
    // 0x600034B0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x600034B4: jal         0x60000A60
    // 0x600034B8: addiu       $a0, $zero, 0xB1B
    ctx->r4 = ADD32(0, 0XB1B);
    ovl_stage_world5_A60(rdram, ctx);
        goto after_1;
    // 0x600034B8: addiu       $a0, $zero, 0xB1B
    ctx->r4 = ADD32(0, 0XB1B);
    after_1:
    // 0x600034BC: b           L_600034CC
    // 0x600034C0: nop

        goto L_600034CC;
    // 0x600034C0: nop

L_600034C4:
    // 0x600034C4: jal         0x60000A60
    // 0x600034C8: addiu       $a0, $zero, 0xB26
    ctx->r4 = ADD32(0, 0XB26);
    ovl_stage_world5_A60(rdram, ctx);
        goto after_2;
    // 0x600034C8: addiu       $a0, $zero, 0xB26
    ctx->r4 = ADD32(0, 0XB26);
    after_2:
L_600034CC:
    // 0x600034CC: jal         0x600009D0
    // 0x600034D0: nop

    ovl_stage_world5_9D0(rdram, ctx);
        goto after_3;
    // 0x600034D0: nop

    after_3:
    // 0x600034D4: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x600034D8: nop

    // 0x600034DC: andi        $t8, $t7, 0x800
    ctx->r24 = ctx->r15 & 0X800;
    // 0x600034E0: beq         $t8, $zero, L_60003504
    if (ctx->r24 == 0) {
        // 0x600034E4: nop
    
            goto L_60003504;
    }
    // 0x600034E4: nop

L_600034E8:
    // 0x600034E8: jal         0x600009D0
    // 0x600034EC: nop

    ovl_stage_world5_9D0(rdram, ctx);
        goto after_4;
    // 0x600034EC: nop

    after_4:
    // 0x600034F0: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x600034F4: nop

    // 0x600034F8: andi        $t0, $t9, 0x800
    ctx->r8 = ctx->r25 & 0X800;
    // 0x600034FC: bne         $t0, $zero, L_600034E8
    if (ctx->r8 != 0) {
        // 0x60003500: nop
    
            goto L_600034E8;
    }
    // 0x60003500: nop

L_60003504:
    // 0x60003504: jal         0x600009C4
    // 0x60003508: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    ovl_stage_world5_9C4(rdram, ctx);
        goto after_5;
    // 0x60003508: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_5:
    // 0x6000350C: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x60003510: nop

    // 0x60003514: ori         $t2, $t1, 0x200
    ctx->r10 = ctx->r9 | 0X200;
    // 0x60003518: jal         0x600009AC
    // 0x6000351C: sw          $t2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r10;
    ovl_stage_world5_9AC(rdram, ctx);
        goto after_6;
    // 0x6000351C: sw          $t2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r10;
    after_6:
    // 0x60003520: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x60003524: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x60003528: jr          $ra
    // 0x6000352C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x6000352C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_stage_world5_3530(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003530: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60003534: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003538: jal         0x60000C1C
    // 0x6000353C: nop

    ovl_stage_world5_C1C(rdram, ctx);
        goto after_0;
    // 0x6000353C: nop

    after_0:
    // 0x60003540: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x60003544: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x60003548: bne         $v1, $at, L_6000356C
    if (ctx->r3 != ctx->r1) {
        // 0x6000354C: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_6000356C;
    }
    // 0x6000354C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003550: addiu       $a0, $a0, 0x3494
    ctx->r4 = ADD32(ctx->r4, 0X3494);
    // 0x60003554: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60003558: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x6000355C: jal         0x60000994
    // 0x60003560: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world5_994(rdram, ctx);
        goto after_1;
    // 0x60003560: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x60003564: b           L_600035AC
    // 0x60003568: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600035AC;
    // 0x60003568: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000356C:
    // 0x6000356C: lw          $a0, 0x8($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X8);
    // 0x60003570: addiu       $at, $zero, 0x82F
    ctx->r1 = ADD32(0, 0X82F);
    // 0x60003574: bne         $a0, $at, L_60003594
    if (ctx->r4 != ctx->r1) {
        // 0x60003578: addiu       $at, $zero, 0x7
        ctx->r1 = ADD32(0, 0X7);
            goto L_60003594;
    }
    // 0x60003578: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x6000357C: beq         $v1, $at, L_60003598
    if (ctx->r3 == ctx->r1) {
        // 0x60003580: addiu       $at, $zero, 0x825
        ctx->r1 = ADD32(0, 0X825);
            goto L_60003598;
    }
    // 0x60003580: addiu       $at, $zero, 0x825
    ctx->r1 = ADD32(0, 0X825);
    // 0x60003584: jal         0x60000B98
    // 0x60003588: addiu       $a0, $zero, 0x1BF
    ctx->r4 = ADD32(0, 0X1BF);
    ovl_stage_world5_B98(rdram, ctx);
        goto after_2;
    // 0x60003588: addiu       $a0, $zero, 0x1BF
    ctx->r4 = ADD32(0, 0X1BF);
    after_2:
    // 0x6000358C: b           L_600035AC
    // 0x60003590: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600035AC;
    // 0x60003590: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003594:
    // 0x60003594: addiu       $at, $zero, 0x825
    ctx->r1 = ADD32(0, 0X825);
L_60003598:
    // 0x60003598: bne         $a0, $at, L_600035A8
    if (ctx->r4 != ctx->r1) {
        // 0x6000359C: addiu       $a1, $zero, -0x41
        ctx->r5 = ADD32(0, -0X41);
            goto L_600035A8;
    }
    // 0x6000359C: addiu       $a1, $zero, -0x41
    ctx->r5 = ADD32(0, -0X41);
    // 0x600035A0: jal         0x60000F04
    // 0x600035A4: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    ovl_stage_world5_F04(rdram, ctx);
        goto after_3;
    // 0x600035A4: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_3:
L_600035A8:
    // 0x600035A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600035AC:
    // 0x600035AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600035B0: jr          $ra
    // 0x600035B4: nop

    return;
    // 0x600035B4: nop

;}
RECOMP_FUNC void ovl_stage_world5_35B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600035B8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x600035BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x600035C0: jal         0x60000C1C
    // 0x600035C4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    ovl_stage_world5_C1C(rdram, ctx);
        goto after_0;
    // 0x600035C4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x600035C8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x600035CC: jal         0x60000A60
    // 0x600035D0: addiu       $a0, $zero, 0xBF7
    ctx->r4 = ADD32(0, 0XBF7);
    ovl_stage_world5_A60(rdram, ctx);
        goto after_1;
    // 0x600035D0: addiu       $a0, $zero, 0xBF7
    ctx->r4 = ADD32(0, 0XBF7);
    after_1:
    // 0x600035D4: jal         0x600009D0
    // 0x600035D8: nop

    ovl_stage_world5_9D0(rdram, ctx);
        goto after_2;
    // 0x600035D8: nop

    after_2:
    // 0x600035DC: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x600035E0: nop

    // 0x600035E4: andi        $t7, $t6, 0x800
    ctx->r15 = ctx->r14 & 0X800;
    // 0x600035E8: beq         $t7, $zero, L_6000360C
    if (ctx->r15 == 0) {
        // 0x600035EC: nop
    
            goto L_6000360C;
    }
    // 0x600035EC: nop

L_600035F0:
    // 0x600035F0: jal         0x600009D0
    // 0x600035F4: nop

    ovl_stage_world5_9D0(rdram, ctx);
        goto after_3;
    // 0x600035F4: nop

    after_3:
    // 0x600035F8: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x600035FC: nop

    // 0x60003600: andi        $t9, $t8, 0x800
    ctx->r25 = ctx->r24 & 0X800;
    // 0x60003604: bne         $t9, $zero, L_600035F0
    if (ctx->r25 != 0) {
        // 0x60003608: nop
    
            goto L_600035F0;
    }
    // 0x60003608: nop

L_6000360C:
    // 0x6000360C: jal         0x600009C4
    // 0x60003610: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    ovl_stage_world5_9C4(rdram, ctx);
        goto after_4;
    // 0x60003610: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_4:
    // 0x60003614: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x60003618: nop

    // 0x6000361C: ori         $t1, $t0, 0x200
    ctx->r9 = ctx->r8 | 0X200;
    // 0x60003620: jal         0x600009AC
    // 0x60003624: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
    ovl_stage_world5_9AC(rdram, ctx);
        goto after_5;
    // 0x60003624: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
    after_5:
    // 0x60003628: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x6000362C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x60003630: jr          $ra
    // 0x60003634: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x60003634: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_stage_world5_3638(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003638: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x6000363C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003640: jal         0x60000C1C
    // 0x60003644: nop

    ovl_stage_world5_C1C(rdram, ctx);
        goto after_0;
    // 0x60003644: nop

    after_0:
    // 0x60003648: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x6000364C: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x60003650: bne         $v1, $at, L_60003674
    if (ctx->r3 != ctx->r1) {
        // 0x60003654: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_60003674;
    }
    // 0x60003654: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003658: addiu       $a0, $a0, 0x35B8
    ctx->r4 = ADD32(ctx->r4, 0X35B8);
    // 0x6000365C: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60003660: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60003664: jal         0x60000994
    // 0x60003668: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world5_994(rdram, ctx);
        goto after_1;
    // 0x60003668: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x6000366C: b           L_6000368C
    // 0x60003670: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_6000368C;
    // 0x60003670: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003674:
    // 0x60003674: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x60003678: bne         $v1, $at, L_6000368C
    if (ctx->r3 != ctx->r1) {
        // 0x6000367C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_6000368C;
    }
    // 0x6000367C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003680: jal         0x6000025C
    // 0x60003684: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    ovl_stage_world5_25C(rdram, ctx);
        goto after_2;
    // 0x60003684: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_2:
    // 0x60003688: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000368C:
    // 0x6000368C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60003690: jr          $ra
    // 0x60003694: nop

    return;
    // 0x60003694: nop

;}
RECOMP_FUNC void ovl_stage_world5_3698(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003698: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x6000369C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600036A0: jal         0x60000244
    // 0x600036A4: addiu       $a0, $zero, 0x1C8
    ctx->r4 = ADD32(0, 0X1C8);
    ovl_stage_world5_244(rdram, ctx);
        goto after_0;
    // 0x600036A4: addiu       $a0, $zero, 0x1C8
    ctx->r4 = ADD32(0, 0X1C8);
    after_0:
    // 0x600036A8: jal         0x60000EF8
    // 0x600036AC: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    ovl_stage_world5_EF8(rdram, ctx);
        goto after_1;
    // 0x600036AC: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_1:
    // 0x600036B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600036B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600036B8: jr          $ra
    // 0x600036BC: nop

    return;
    // 0x600036BC: nop

;}
RECOMP_FUNC void ovl_stage_world5_36C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600036C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600036C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600036C8: jal         0x60000BB0
    // 0x600036CC: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    ovl_stage_world5_BB0(rdram, ctx);
        goto after_0;
    // 0x600036CC: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    after_0:
    // 0x600036D0: beq         $v0, $zero, L_60003704
    if (ctx->r2 == 0) {
        // 0x600036D4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003704;
    }
    // 0x600036D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600036D8: jal         0x60000BB0
    // 0x600036DC: addiu       $a0, $zero, 0x18A
    ctx->r4 = ADD32(0, 0X18A);
    ovl_stage_world5_BB0(rdram, ctx);
        goto after_1;
    // 0x600036DC: addiu       $a0, $zero, 0x18A
    ctx->r4 = ADD32(0, 0X18A);
    after_1:
    // 0x600036E0: bne         $v0, $zero, L_60003704
    if (ctx->r2 != 0) {
        // 0x600036E4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003704;
    }
    // 0x600036E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600036E8: jal         0x60000EEC
    // 0x600036EC: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    ovl_stage_world5_EEC(rdram, ctx);
        goto after_2;
    // 0x600036EC: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    after_2:
    // 0x600036F0: jal         0x60000EEC
    // 0x600036F4: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    ovl_stage_world5_EEC(rdram, ctx);
        goto after_3;
    // 0x600036F4: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    after_3:
    // 0x600036F8: jal         0x60000EEC
    // 0x600036FC: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    ovl_stage_world5_EEC(rdram, ctx);
        goto after_4;
    // 0x600036FC: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_4:
    // 0x60003700: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003704:
    // 0x60003704: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60003708: jr          $ra
    // 0x6000370C: nop

    return;
    // 0x6000370C: nop

;}
RECOMP_FUNC void ovl_stage_world5_3710(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003710: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x60003714: slti        $at, $a0, 0x63
    ctx->r1 = SIGNED(ctx->r4) < 0X63 ? 1 : 0;
    // 0x60003718: bne         $at, $zero, L_6000373C
    if (ctx->r1 != 0) {
        // 0x6000371C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_6000373C;
    }
    // 0x6000371C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003720: addiu       $at, $zero, 0x63
    ctx->r1 = ADD32(0, 0X63);
    // 0x60003724: beq         $a0, $at, L_600039C8
    if (ctx->r4 == ctx->r1) {
        // 0x60003728: addiu       $at, $zero, 0xFF
        ctx->r1 = ADD32(0, 0XFF);
            goto L_600039C8;
    }
    // 0x60003728: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x6000372C: beq         $a0, $at, L_600039D8
    if (ctx->r4 == ctx->r1) {
        // 0x60003730: nop
    
            goto L_600039D8;
    }
    // 0x60003730: nop

    // 0x60003734: b           L_600039E8
    // 0x60003738: andi        $v1, $a0, 0xFFFF
    ctx->r3 = ctx->r4 & 0XFFFF;
        goto L_600039E8;
    // 0x60003738: andi        $v1, $a0, 0xFFFF
    ctx->r3 = ctx->r4 & 0XFFFF;
L_6000373C:
    // 0x6000373C: slti        $at, $a0, 0x62
    ctx->r1 = SIGNED(ctx->r4) < 0X62 ? 1 : 0;
    // 0x60003740: bne         $at, $zero, L_60003758
    if (ctx->r1 != 0) {
        // 0x60003744: addiu       $at, $zero, 0x62
        ctx->r1 = ADD32(0, 0X62);
            goto L_60003758;
    }
    // 0x60003744: addiu       $at, $zero, 0x62
    ctx->r1 = ADD32(0, 0X62);
    // 0x60003748: beq         $a0, $at, L_600039B8
    if (ctx->r4 == ctx->r1) {
        // 0x6000374C: nop
    
            goto L_600039B8;
    }
    // 0x6000374C: nop

    // 0x60003750: b           L_600039E8
    // 0x60003754: andi        $v1, $a0, 0xFFFF
    ctx->r3 = ctx->r4 & 0XFFFF;
        goto L_600039E8;
    // 0x60003754: andi        $v1, $a0, 0xFFFF
    ctx->r3 = ctx->r4 & 0XFFFF;
L_60003758:
    // 0x60003758: slti        $at, $a0, 0x20
    ctx->r1 = SIGNED(ctx->r4) < 0X20 ? 1 : 0;
    // 0x6000375C: bne         $at, $zero, L_60003774
    if (ctx->r1 != 0) {
        // 0x60003760: addiu       $at, $zero, 0x61
        ctx->r1 = ADD32(0, 0X61);
            goto L_60003774;
    }
    // 0x60003760: addiu       $at, $zero, 0x61
    ctx->r1 = ADD32(0, 0X61);
    // 0x60003764: beq         $a0, $at, L_600039A8
    if (ctx->r4 == ctx->r1) {
        // 0x60003768: nop
    
            goto L_600039A8;
    }
    // 0x60003768: nop

    // 0x6000376C: b           L_600039E8
    // 0x60003770: andi        $v1, $a0, 0xFFFF
    ctx->r3 = ctx->r4 & 0XFFFF;
        goto L_600039E8;
    // 0x60003770: andi        $v1, $a0, 0xFFFF
    ctx->r3 = ctx->r4 & 0XFFFF;
L_60003774:
    // 0x60003774: sltiu       $at, $a0, 0x20
    ctx->r1 = ctx->r4 < 0X20 ? 1 : 0;
    // 0x60003778: beq         $at, $zero, L_600039E4
    if (ctx->r1 == 0) {
        // 0x6000377C: sll         $t6, $a0, 2
        ctx->r14 = S32(ctx->r4 << 2);
            goto L_600039E4;
    }
    // 0x6000377C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x60003780: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60003784: addu        $at, $at, $t6
    gpr jr_addend_60003790 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x60003788: lw          $t6, 0x3B90($at)
    ctx->r14 = ADD32(ctx->r1, 0X3B90);
    // 0x6000378C: nop

    // 0x60003790: jr          $t6
    // 0x60003794: nop

    switch (jr_addend_60003790 >> 2) {
        case 0: goto L_60003798; break;
        case 1: goto L_600039E4; break;
        case 2: goto L_600037A8; break;
        case 3: goto L_600037B8; break;
        case 4: goto L_600037C8; break;
        case 5: goto L_600037D8; break;
        case 6: goto L_600037E8; break;
        case 7: goto L_600037F8; break;
        case 8: goto L_60003808; break;
        case 9: goto L_60003818; break;
        case 10: goto L_60003828; break;
        case 11: goto L_60003838; break;
        case 12: goto L_60003848; break;
        case 13: goto L_60003858; break;
        case 14: goto L_60003868; break;
        case 15: goto L_60003878; break;
        case 16: goto L_600039E4; break;
        case 17: goto L_60003888; break;
        case 18: goto L_60003898; break;
        case 19: goto L_600038A8; break;
        case 20: goto L_600038B8; break;
        case 21: goto L_600038C8; break;
        case 22: goto L_600038D8; break;
        case 23: goto L_600038E8; break;
        case 24: goto L_600038F8; break;
        case 25: goto L_60003908; break;
        case 26: goto L_60003918; break;
        case 27: goto L_60003928; break;
        case 28: goto L_60003950; break;
        case 29: goto L_60003978; break;
        case 30: goto L_60003988; break;
        case 31: goto L_60003998; break;
        default: switch_error(__func__, 0x60003790, 0x60003B90);
    }
    // 0x60003794: nop

L_60003798:
    // 0x60003798: jal         0x60001308
    // 0x6000379C: nop

    ovl_stage_world5_1308(rdram, ctx);
        goto after_0;
    // 0x6000379C: nop

    after_0:
    // 0x600037A0: b           L_60003AF4
    // 0x600037A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60003AF4;
    // 0x600037A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600037A8:
    // 0x600037A8: jal         0x600011E0
    // 0x600037AC: nop

    ovl_stage_world5_11E0(rdram, ctx);
        goto after_1;
    // 0x600037AC: nop

    after_1:
    // 0x600037B0: b           L_60003AF4
    // 0x600037B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60003AF4;
    // 0x600037B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600037B8:
    // 0x600037B8: jal         0x60001248
    // 0x600037BC: nop

    ovl_stage_world5_1248(rdram, ctx);
        goto after_2;
    // 0x600037BC: nop

    after_2:
    // 0x600037C0: b           L_60003AF4
    // 0x600037C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60003AF4;
    // 0x600037C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600037C8:
    // 0x600037C8: jal         0x600012BC
    // 0x600037CC: nop

    ovl_stage_world5_12BC(rdram, ctx);
        goto after_3;
    // 0x600037CC: nop

    after_3:
    // 0x600037D0: b           L_60003AF4
    // 0x600037D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60003AF4;
    // 0x600037D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600037D8:
    // 0x600037D8: jal         0x60002350
    // 0x600037DC: nop

    ovl_stage_world5_2350(rdram, ctx);
        goto after_4;
    // 0x600037DC: nop

    after_4:
    // 0x600037E0: b           L_60003AF4
    // 0x600037E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60003AF4;
    // 0x600037E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600037E8:
    // 0x600037E8: jal         0x600026B0
    // 0x600037EC: nop

    ovl_stage_world5_26B0(rdram, ctx);
        goto after_5;
    // 0x600037EC: nop

    after_5:
    // 0x600037F0: b           L_60003AF4
    // 0x600037F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60003AF4;
    // 0x600037F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600037F8:
    // 0x600037F8: jal         0x60002780
    // 0x600037FC: nop

    ovl_stage_world5_2780(rdram, ctx);
        goto after_6;
    // 0x600037FC: nop

    after_6:
    // 0x60003800: b           L_60003AF4
    // 0x60003804: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60003AF4;
    // 0x60003804: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003808:
    // 0x60003808: jal         0x600027A0
    // 0x6000380C: nop

    ovl_stage_world5_27A0(rdram, ctx);
        goto after_7;
    // 0x6000380C: nop

    after_7:
    // 0x60003810: b           L_60003AF4
    // 0x60003814: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60003AF4;
    // 0x60003814: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003818:
    // 0x60003818: jal         0x600027C0
    // 0x6000381C: nop

    ovl_stage_world5_27C0(rdram, ctx);
        goto after_8;
    // 0x6000381C: nop

    after_8:
    // 0x60003820: b           L_60003AF4
    // 0x60003824: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60003AF4;
    // 0x60003824: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003828:
    // 0x60003828: jal         0x60002978
    // 0x6000382C: nop

    ovl_stage_world5_2978(rdram, ctx);
        goto after_9;
    // 0x6000382C: nop

    after_9:
    // 0x60003830: b           L_60003AF4
    // 0x60003834: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60003AF4;
    // 0x60003834: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003838:
    // 0x60003838: jal         0x60002A40
    // 0x6000383C: nop

    ovl_stage_world5_2A40(rdram, ctx);
        goto after_10;
    // 0x6000383C: nop

    after_10:
    // 0x60003840: b           L_60003AF4
    // 0x60003844: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60003AF4;
    // 0x60003844: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003848:
    // 0x60003848: jal         0x60002AA0
    // 0x6000384C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world5_2AA0(rdram, ctx);
        goto after_11;
    // 0x6000384C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_11:
    // 0x60003850: b           L_60003AF4
    // 0x60003854: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60003AF4;
    // 0x60003854: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003858:
    // 0x60003858: jal         0x60002AA0
    // 0x6000385C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world5_2AA0(rdram, ctx);
        goto after_12;
    // 0x6000385C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_12:
    // 0x60003860: b           L_60003AF4
    // 0x60003864: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60003AF4;
    // 0x60003864: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003868:
    // 0x60003868: jal         0x60002AA0
    // 0x6000386C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_stage_world5_2AA0(rdram, ctx);
        goto after_13;
    // 0x6000386C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_13:
    // 0x60003870: b           L_60003AF4
    // 0x60003874: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60003AF4;
    // 0x60003874: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003878:
    // 0x60003878: jal         0x60002AA0
    // 0x6000387C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    ovl_stage_world5_2AA0(rdram, ctx);
        goto after_14;
    // 0x6000387C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_14:
    // 0x60003880: b           L_60003AF4
    // 0x60003884: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60003AF4;
    // 0x60003884: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003888:
    // 0x60003888: jal         0x60002C44
    // 0x6000388C: nop

    ovl_stage_world5_2C44(rdram, ctx);
        goto after_15;
    // 0x6000388C: nop

    after_15:
    // 0x60003890: b           L_60003AF4
    // 0x60003894: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60003AF4;
    // 0x60003894: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003898:
    // 0x60003898: jal         0x60002CCC
    // 0x6000389C: nop

    ovl_stage_world5_2CCC(rdram, ctx);
        goto after_16;
    // 0x6000389C: nop

    after_16:
    // 0x600038A0: b           L_60003AF4
    // 0x600038A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60003AF4;
    // 0x600038A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600038A8:
    // 0x600038A8: jal         0x60003000
    // 0x600038AC: nop

    ovl_stage_world5_3000(rdram, ctx);
        goto after_17;
    // 0x600038AC: nop

    after_17:
    // 0x600038B0: b           L_60003AF4
    // 0x600038B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60003AF4;
    // 0x600038B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600038B8:
    // 0x600038B8: jal         0x60003044
    // 0x600038BC: nop

    ovl_stage_world5_3044(rdram, ctx);
        goto after_18;
    // 0x600038BC: nop

    after_18:
    // 0x600038C0: b           L_60003AF4
    // 0x600038C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60003AF4;
    // 0x600038C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600038C8:
    // 0x600038C8: jal         0x6000307C
    // 0x600038CC: nop

    ovl_stage_world5_307C(rdram, ctx);
        goto after_19;
    // 0x600038CC: nop

    after_19:
    // 0x600038D0: b           L_60003AF4
    // 0x600038D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60003AF4;
    // 0x600038D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600038D8:
    // 0x600038D8: jal         0x6000313C
    // 0x600038DC: nop

    ovl_stage_world5_313C(rdram, ctx);
        goto after_20;
    // 0x600038DC: nop

    after_20:
    // 0x600038E0: b           L_60003AF4
    // 0x600038E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60003AF4;
    // 0x600038E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600038E8:
    // 0x600038E8: jal         0x600031DC
    // 0x600038EC: nop

    ovl_stage_world5_31DC(rdram, ctx);
        goto after_21;
    // 0x600038EC: nop

    after_21:
    // 0x600038F0: b           L_60003AF4
    // 0x600038F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60003AF4;
    // 0x600038F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600038F8:
    // 0x600038F8: jal         0x6000339C
    // 0x600038FC: nop

    ovl_stage_world5_339C(rdram, ctx);
        goto after_22;
    // 0x600038FC: nop

    after_22:
    // 0x60003900: b           L_60003AF4
    // 0x60003904: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60003AF4;
    // 0x60003904: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003908:
    // 0x60003908: jal         0x600033FC
    // 0x6000390C: nop

    ovl_stage_world5_33FC(rdram, ctx);
        goto after_23;
    // 0x6000390C: nop

    after_23:
    // 0x60003910: b           L_60003AF4
    // 0x60003914: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60003AF4;
    // 0x60003914: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003918:
    // 0x60003918: jal         0x60003444
    // 0x6000391C: nop

    ovl_stage_world5_3444(rdram, ctx);
        goto after_24;
    // 0x6000391C: nop

    after_24:
    // 0x60003920: b           L_60003AF4
    // 0x60003924: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60003AF4;
    // 0x60003924: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003928:
    // 0x60003928: jal         0x60000BB0
    // 0x6000392C: addiu       $a0, $zero, 0x84
    ctx->r4 = ADD32(0, 0X84);
    ovl_stage_world5_BB0(rdram, ctx);
        goto after_25;
    // 0x6000392C: addiu       $a0, $zero, 0x84
    ctx->r4 = ADD32(0, 0X84);
    after_25:
    // 0x60003930: bne         $v0, $zero, L_60003940
    if (ctx->r2 != 0) {
        // 0x60003934: nop
    
            goto L_60003940;
    }
    // 0x60003934: nop

    // 0x60003938: jal         0x60001098
    // 0x6000393C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world5_1098(rdram, ctx);
        goto after_26;
    // 0x6000393C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_26:
L_60003940:
    // 0x60003940: jal         0x60000268
    // 0x60003944: nop

    ovl_stage_world5_268(rdram, ctx);
        goto after_27;
    // 0x60003944: nop

    after_27:
    // 0x60003948: b           L_60003AF4
    // 0x6000394C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60003AF4;
    // 0x6000394C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003950:
    // 0x60003950: jal         0x60000DE4
    // 0x60003954: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world5_DE4(rdram, ctx);
        goto after_28;
    // 0x60003954: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_28:
    // 0x60003958: jal         0x60000CC4
    // 0x6000395C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_stage_world5_CC4(rdram, ctx);
        goto after_29;
    // 0x6000395C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_29:
    // 0x60003960: jal         0x60000A6C
    // 0x60003964: nop

    ovl_stage_world5_A6C(rdram, ctx);
        goto after_30;
    // 0x60003964: nop

    after_30:
    // 0x60003968: jal         0x60000C7C
    // 0x6000396C: nop

    ovl_stage_world5_C7C(rdram, ctx);
        goto after_31;
    // 0x6000396C: nop

    after_31:
    // 0x60003970: b           L_60003AF4
    // 0x60003974: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60003AF4;
    // 0x60003974: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003978:
    // 0x60003978: jal         0x60000268
    // 0x6000397C: nop

    ovl_stage_world5_268(rdram, ctx);
        goto after_32;
    // 0x6000397C: nop

    after_32:
    // 0x60003980: b           L_60003AF4
    // 0x60003984: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60003AF4;
    // 0x60003984: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003988:
    // 0x60003988: jal         0x60003698
    // 0x6000398C: nop

    ovl_stage_world5_3698(rdram, ctx);
        goto after_33;
    // 0x6000398C: nop

    after_33:
    // 0x60003990: b           L_60003AF4
    // 0x60003994: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60003AF4;
    // 0x60003994: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003998:
    // 0x60003998: jal         0x600036C0
    // 0x6000399C: nop

    ovl_stage_world5_36C0(rdram, ctx);
        goto after_34;
    // 0x6000399C: nop

    after_34:
    // 0x600039A0: b           L_60003AF4
    // 0x600039A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60003AF4;
    // 0x600039A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600039A8:
    // 0x600039A8: jal         0x60003638
    // 0x600039AC: nop

    ovl_stage_world5_3638(rdram, ctx);
        goto after_35;
    // 0x600039AC: nop

    after_35:
    // 0x600039B0: b           L_60003AF4
    // 0x600039B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60003AF4;
    // 0x600039B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600039B8:
    // 0x600039B8: jal         0x60003530
    // 0x600039BC: nop

    ovl_stage_world5_3530(rdram, ctx);
        goto after_36;
    // 0x600039BC: nop

    after_36:
    // 0x600039C0: b           L_60003AF4
    // 0x600039C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60003AF4;
    // 0x600039C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600039C8:
    // 0x600039C8: jal         0x60000EE0
    // 0x600039CC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world5_EE0(rdram, ctx);
        goto after_37;
    // 0x600039CC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_37:
    // 0x600039D0: b           L_60003AF4
    // 0x600039D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60003AF4;
    // 0x600039D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600039D8:
    // 0x600039D8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600039DC: b           L_60003AF0
    // 0x600039E0: sw          $zero, 0x3C30($at)
    MEM_W(0X3C30, ctx->r1) = 0;
        goto L_60003AF0;
    // 0x600039E0: sw          $zero, 0x3C30($at)
    MEM_W(0X3C30, ctx->r1) = 0;
L_600039E4:
    // 0x600039E4: andi        $v1, $a0, 0xFFFF
    ctx->r3 = ctx->r4 & 0XFFFF;
L_600039E8:
    // 0x600039E8: slti        $at, $v1, 0x32
    ctx->r1 = SIGNED(ctx->r3) < 0X32 ? 1 : 0;
    // 0x600039EC: bne         $at, $zero, L_60003AF0
    if (ctx->r1 != 0) {
        // 0x600039F0: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_60003AF0;
    }
    // 0x600039F0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600039F4: slti        $at, $v1, 0x3C
    ctx->r1 = SIGNED(ctx->r3) < 0X3C ? 1 : 0;
    // 0x600039F8: beq         $at, $zero, L_60003A1C
    if (ctx->r1 == 0) {
        // 0x600039FC: sll         $t7, $v1, 2
        ctx->r15 = S32(ctx->r3 << 2);
            goto L_60003A1C;
    }
    // 0x600039FC: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
    // 0x60003A00: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003A04: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x60003A08: lw          $a0, 0x3A84($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3A84);
    // 0x60003A0C: jal         0x60000CDC
    // 0x60003A10: nop

    ovl_stage_world5_CDC(rdram, ctx);
        goto after_38;
    // 0x60003A10: nop

    after_38:
    // 0x60003A14: b           L_60003AF4
    // 0x60003A18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60003AF4;
    // 0x60003A18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003A1C:
    // 0x60003A1C: slti        $at, $v1, 0x46
    ctx->r1 = SIGNED(ctx->r3) < 0X46 ? 1 : 0;
    // 0x60003A20: beq         $at, $zero, L_60003A3C
    if (ctx->r1 == 0) {
        // 0x60003A24: slti        $at, $v1, 0x50
        ctx->r1 = SIGNED(ctx->r3) < 0X50 ? 1 : 0;
            goto L_60003A3C;
    }
    // 0x60003A24: slti        $at, $v1, 0x50
    ctx->r1 = SIGNED(ctx->r3) < 0X50 ? 1 : 0;
    // 0x60003A28: jal         0x60000B98
    // 0x60003A2C: addiu       $a0, $v1, 0x4D
    ctx->r4 = ADD32(ctx->r3, 0X4D);
    ovl_stage_world5_B98(rdram, ctx);
        goto after_39;
    // 0x60003A2C: addiu       $a0, $v1, 0x4D
    ctx->r4 = ADD32(ctx->r3, 0X4D);
    after_39:
    // 0x60003A30: b           L_60003AF4
    // 0x60003A34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60003AF4;
    // 0x60003A34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003A38: slti        $at, $v1, 0x50
    ctx->r1 = SIGNED(ctx->r3) < 0X50 ? 1 : 0;
L_60003A3C:
    // 0x60003A3C: beq         $at, $zero, L_60003AF4
    if (ctx->r1 == 0) {
        // 0x60003A40: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003AF4;
    }
    // 0x60003A40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003A44: jal         0x600007E4
    // 0x60003A48: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    ovl_stage_world5_7E4(rdram, ctx);
        goto after_40;
    // 0x60003A48: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_40:
    // 0x60003A4C: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x60003A50: nop

    // 0x60003A54: addiu       $t8, $v1, -0x47
    ctx->r24 = ADD32(ctx->r3, -0X47);
    // 0x60003A58: sltiu       $at, $t8, 0x5
    ctx->r1 = ctx->r24 < 0X5 ? 1 : 0;
    // 0x60003A5C: beq         $at, $zero, L_60003AF0
    if (ctx->r1 == 0) {
        // 0x60003A60: sll         $t8, $t8, 2
        ctx->r24 = S32(ctx->r24 << 2);
            goto L_60003AF0;
    }
    // 0x60003A60: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x60003A64: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60003A68: addu        $at, $at, $t8
    gpr jr_addend_60003A74 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x60003A6C: lw          $t8, 0x3C10($at)
    ctx->r24 = ADD32(ctx->r1, 0X3C10);
    // 0x60003A70: nop

    // 0x60003A74: jr          $t8
    // 0x60003A78: nop

    switch (jr_addend_60003A74 >> 2) {
        case 0: goto L_60003A7C; break;
        case 1: goto L_60003AA4; break;
        case 2: goto L_60003AB8; break;
        case 3: goto L_60003ACC; break;
        case 4: goto L_60003AE0; break;
        default: switch_error(__func__, 0x60003A74, 0x60003C10);
    }
    // 0x60003A78: nop

L_60003A7C:
    // 0x60003A7C: lw          $t9, 0x10($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X10);
    // 0x60003A80: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x60003A84: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x60003A88: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x60003A8C: sw          $t0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r8;
    // 0x60003A90: and         $t2, $t0, $at
    ctx->r10 = ctx->r8 & ctx->r1;
    // 0x60003A94: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x60003A98: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x60003A9C: b           L_60003AF0
    // 0x60003AA0: sw          $t2, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r10;
        goto L_60003AF0;
    // 0x60003AA0: sw          $t2, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r10;
L_60003AA4:
    // 0x60003AA4: lw          $t3, 0x10($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X10);
    // 0x60003AA8: nop

    // 0x60003AAC: ori         $t4, $t3, 0x1
    ctx->r12 = ctx->r11 | 0X1;
    // 0x60003AB0: b           L_60003AF0
    // 0x60003AB4: sw          $t4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r12;
        goto L_60003AF0;
    // 0x60003AB4: sw          $t4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r12;
L_60003AB8:
    // 0x60003AB8: lw          $t5, 0x10($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X10);
    // 0x60003ABC: nop

    // 0x60003AC0: ori         $t6, $t5, 0x2
    ctx->r14 = ctx->r13 | 0X2;
    // 0x60003AC4: b           L_60003AF0
    // 0x60003AC8: sw          $t6, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r14;
        goto L_60003AF0;
    // 0x60003AC8: sw          $t6, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r14;
L_60003ACC:
    // 0x60003ACC: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x60003AD0: nop

    // 0x60003AD4: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x60003AD8: b           L_60003AF0
    // 0x60003ADC: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
        goto L_60003AF0;
    // 0x60003ADC: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
L_60003AE0:
    // 0x60003AE0: lw          $t9, 0x4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4);
    // 0x60003AE4: nop

    // 0x60003AE8: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x60003AEC: sw          $t0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r8;
L_60003AF0:
    // 0x60003AF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003AF4:
    // 0x60003AF4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x60003AF8: jr          $ra
    // 0x60003AFC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x60003AFC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void ovl_menu_battle_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000000: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60000004: jr          $ra
    // 0x60000008: addiu       $v0, $v0, 0x3808
    ctx->r2 = ADD32(ctx->r2, 0X3808);
    return;
    // 0x60000008: addiu       $v0, $v0, 0x3808
    ctx->r2 = ADD32(ctx->r2, 0X3808);
    // 0x6000000C: nop

;}
RECOMP_FUNC void ovl_menu_battle_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000010: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000014: jr          $t1
    // 0x60000018: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000018: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
;}
RECOMP_FUNC void ovl_menu_battle_1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000001C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000020: jr          $t1
    // 0x60000024: addiu       $t0, $zero, 0x100
    ctx->r8 = ADD32(0, 0X100);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000024: addiu       $t0, $zero, 0x100
    ctx->r8 = ADD32(0, 0X100);
;}
RECOMP_FUNC void ovl_menu_battle_28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000028: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x6000002C: jr          $t1
    // 0x60000030: addiu       $t0, $zero, 0x101
    ctx->r8 = ADD32(0, 0X101);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000030: addiu       $t0, $zero, 0x101
    ctx->r8 = ADD32(0, 0X101);
;}
RECOMP_FUNC void ovl_menu_battle_34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000034: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000038: jr          $t1
    // 0x6000003C: addiu       $t0, $zero, 0x102
    ctx->r8 = ADD32(0, 0X102);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x6000003C: addiu       $t0, $zero, 0x102
    ctx->r8 = ADD32(0, 0X102);
;}
RECOMP_FUNC void ovl_menu_battle_40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000040: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000044: jr          $t1
    // 0x60000048: addiu       $t0, $zero, 0x103
    ctx->r8 = ADD32(0, 0X103);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000048: addiu       $t0, $zero, 0x103
    ctx->r8 = ADD32(0, 0X103);
;}
RECOMP_FUNC void ovl_menu_battle_4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000004C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000050: jr          $t1
    // 0x60000054: addiu       $t0, $zero, 0x104
    ctx->r8 = ADD32(0, 0X104);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000054: addiu       $t0, $zero, 0x104
    ctx->r8 = ADD32(0, 0X104);
;}
RECOMP_FUNC void ovl_menu_battle_58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000058: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x6000005C: jr          $t1
    // 0x60000060: addiu       $t0, $zero, 0x105
    ctx->r8 = ADD32(0, 0X105);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000060: addiu       $t0, $zero, 0x105
    ctx->r8 = ADD32(0, 0X105);
;}
RECOMP_FUNC void ovl_menu_battle_64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000064: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000068: jr          $t1
    // 0x6000006C: addiu       $t0, $zero, 0x106
    ctx->r8 = ADD32(0, 0X106);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x6000006C: addiu       $t0, $zero, 0x106
    ctx->r8 = ADD32(0, 0X106);
;}
RECOMP_FUNC void ovl_menu_battle_70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000070: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000074: jr          $t1
    // 0x60000078: addiu       $t0, $zero, 0x107
    ctx->r8 = ADD32(0, 0X107);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000078: addiu       $t0, $zero, 0x107
    ctx->r8 = ADD32(0, 0X107);
;}
RECOMP_FUNC void ovl_menu_battle_7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000007C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000080: jr          $t1
    // 0x60000084: addiu       $t0, $zero, 0x108
    ctx->r8 = ADD32(0, 0X108);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000084: addiu       $t0, $zero, 0x108
    ctx->r8 = ADD32(0, 0X108);
;}
RECOMP_FUNC void ovl_menu_battle_88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000088: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x6000008C: jr          $t1
    // 0x60000090: addiu       $t0, $zero, 0x200
    ctx->r8 = ADD32(0, 0X200);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000090: addiu       $t0, $zero, 0x200
    ctx->r8 = ADD32(0, 0X200);
;}
RECOMP_FUNC void ovl_menu_battle_94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000094: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000098: jr          $t1
    // 0x6000009C: addiu       $t0, $zero, 0x201
    ctx->r8 = ADD32(0, 0X201);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x6000009C: addiu       $t0, $zero, 0x201
    ctx->r8 = ADD32(0, 0X201);
;}
RECOMP_FUNC void ovl_menu_battle_A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600000A0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600000A4: jr          $t1
    // 0x600000A8: addiu       $t0, $zero, 0x202
    ctx->r8 = ADD32(0, 0X202);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600000A8: addiu       $t0, $zero, 0x202
    ctx->r8 = ADD32(0, 0X202);
;}
RECOMP_FUNC void ovl_menu_battle_AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600000AC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600000B0: jr          $t1
    // 0x600000B4: addiu       $t0, $zero, 0x203
    ctx->r8 = ADD32(0, 0X203);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600000B4: addiu       $t0, $zero, 0x203
    ctx->r8 = ADD32(0, 0X203);
;}
RECOMP_FUNC void ovl_menu_battle_B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600000B8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600000BC: jr          $t1
    // 0x600000C0: addiu       $t0, $zero, 0x204
    ctx->r8 = ADD32(0, 0X204);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600000C0: addiu       $t0, $zero, 0x204
    ctx->r8 = ADD32(0, 0X204);
;}
RECOMP_FUNC void ovl_menu_battle_C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600000C4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600000C8: jr          $t1
    // 0x600000CC: addiu       $t0, $zero, 0x205
    ctx->r8 = ADD32(0, 0X205);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600000CC: addiu       $t0, $zero, 0x205
    ctx->r8 = ADD32(0, 0X205);
;}
RECOMP_FUNC void ovl_menu_battle_D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600000D0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600000D4: jr          $t1
    // 0x600000D8: addiu       $t0, $zero, 0x206
    ctx->r8 = ADD32(0, 0X206);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600000D8: addiu       $t0, $zero, 0x206
    ctx->r8 = ADD32(0, 0X206);
;}
RECOMP_FUNC void ovl_menu_battle_DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600000DC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600000E0: jr          $t1
    // 0x600000E4: addiu       $t0, $zero, 0x207
    ctx->r8 = ADD32(0, 0X207);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600000E4: addiu       $t0, $zero, 0x207
    ctx->r8 = ADD32(0, 0X207);
;}
RECOMP_FUNC void ovl_menu_battle_E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600000E8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600000EC: jr          $t1
    // 0x600000F0: addiu       $t0, $zero, 0x300
    ctx->r8 = ADD32(0, 0X300);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600000F0: addiu       $t0, $zero, 0x300
    ctx->r8 = ADD32(0, 0X300);
;}
RECOMP_FUNC void ovl_menu_battle_F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600000F4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600000F8: jr          $t1
    // 0x600000FC: addiu       $t0, $zero, 0x301
    ctx->r8 = ADD32(0, 0X301);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600000FC: addiu       $t0, $zero, 0x301
    ctx->r8 = ADD32(0, 0X301);
;}
RECOMP_FUNC void ovl_menu_battle_100(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000100: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000104: jr          $t1
    // 0x60000108: addiu       $t0, $zero, 0x400
    ctx->r8 = ADD32(0, 0X400);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000108: addiu       $t0, $zero, 0x400
    ctx->r8 = ADD32(0, 0X400);
;}
RECOMP_FUNC void ovl_menu_battle_10C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000010C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000110: jr          $t1
    // 0x60000114: addiu       $t0, $zero, 0x401
    ctx->r8 = ADD32(0, 0X401);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000114: addiu       $t0, $zero, 0x401
    ctx->r8 = ADD32(0, 0X401);
;}
RECOMP_FUNC void ovl_menu_battle_118(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000118: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x6000011C: jr          $t1
    // 0x60000120: addiu       $t0, $zero, 0x500
    ctx->r8 = ADD32(0, 0X500);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000120: addiu       $t0, $zero, 0x500
    ctx->r8 = ADD32(0, 0X500);
;}
RECOMP_FUNC void ovl_menu_battle_124(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000124: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000128: jr          $t1
    // 0x6000012C: addiu       $t0, $zero, 0x501
    ctx->r8 = ADD32(0, 0X501);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x6000012C: addiu       $t0, $zero, 0x501
    ctx->r8 = ADD32(0, 0X501);
;}
RECOMP_FUNC void ovl_menu_battle_130(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000130: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000134: jr          $t1
    // 0x60000138: addiu       $t0, $zero, 0x502
    ctx->r8 = ADD32(0, 0X502);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000138: addiu       $t0, $zero, 0x502
    ctx->r8 = ADD32(0, 0X502);
;}
RECOMP_FUNC void ovl_menu_battle_13C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000013C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000140: jr          $t1
    // 0x60000144: addiu       $t0, $zero, 0x600
    ctx->r8 = ADD32(0, 0X600);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000144: addiu       $t0, $zero, 0x600
    ctx->r8 = ADD32(0, 0X600);
;}
RECOMP_FUNC void ovl_menu_battle_148(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000148: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x6000014C: jr          $t1
    // 0x60000150: addiu       $t0, $zero, 0x601
    ctx->r8 = ADD32(0, 0X601);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000150: addiu       $t0, $zero, 0x601
    ctx->r8 = ADD32(0, 0X601);
;}
RECOMP_FUNC void ovl_menu_battle_154(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000154: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000158: jr          $t1
    // 0x6000015C: addiu       $t0, $zero, 0x602
    ctx->r8 = ADD32(0, 0X602);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x6000015C: addiu       $t0, $zero, 0x602
    ctx->r8 = ADD32(0, 0X602);
;}
RECOMP_FUNC void ovl_menu_battle_160(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000160: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000164: jr          $t1
    // 0x60000168: addiu       $t0, $zero, 0x603
    ctx->r8 = ADD32(0, 0X603);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000168: addiu       $t0, $zero, 0x603
    ctx->r8 = ADD32(0, 0X603);
;}
