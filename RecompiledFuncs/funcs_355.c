#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_stage_world7_4C5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004C5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60004C60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60004C64: jal         0x60000BB0
    // 0x60004C68: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    ovl_stage_world7_BB0(rdram, ctx);
        goto after_0;
    // 0x60004C68: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    after_0:
    // 0x60004C6C: beq         $v0, $zero, L_60004CB8
    if (ctx->r2 == 0) {
        // 0x60004C70: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60004CB8;
    }
    // 0x60004C70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004C74: jal         0x60000BB0
    // 0x60004C78: addiu       $a0, $zero, 0x107
    ctx->r4 = ADD32(0, 0X107);
    ovl_stage_world7_BB0(rdram, ctx);
        goto after_1;
    // 0x60004C78: addiu       $a0, $zero, 0x107
    ctx->r4 = ADD32(0, 0X107);
    after_1:
    // 0x60004C7C: beq         $v0, $zero, L_60004CB8
    if (ctx->r2 == 0) {
        // 0x60004C80: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60004CB8;
    }
    // 0x60004C80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004C84: jal         0x60000BB0
    // 0x60004C88: addiu       $a0, $zero, 0x108
    ctx->r4 = ADD32(0, 0X108);
    ovl_stage_world7_BB0(rdram, ctx);
        goto after_2;
    // 0x60004C88: addiu       $a0, $zero, 0x108
    ctx->r4 = ADD32(0, 0X108);
    after_2:
    // 0x60004C8C: beq         $v0, $zero, L_60004CB8
    if (ctx->r2 == 0) {
        // 0x60004C90: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60004CB8;
    }
    // 0x60004C90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004C94: jal         0x60000BB0
    // 0x60004C98: addiu       $a0, $zero, 0x109
    ctx->r4 = ADD32(0, 0X109);
    ovl_stage_world7_BB0(rdram, ctx);
        goto after_3;
    // 0x60004C98: addiu       $a0, $zero, 0x109
    ctx->r4 = ADD32(0, 0X109);
    after_3:
    // 0x60004C9C: beq         $v0, $zero, L_60004CB8
    if (ctx->r2 == 0) {
        // 0x60004CA0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60004CB8;
    }
    // 0x60004CA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004CA4: jal         0x60000EEC
    // 0x60004CA8: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    ovl_stage_world7_EEC(rdram, ctx);
        goto after_4;
    // 0x60004CA8: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_4:
    // 0x60004CAC: jal         0x60000244
    // 0x60004CB0: addiu       $a0, $zero, 0x397
    ctx->r4 = ADD32(0, 0X397);
    ovl_stage_world7_244(rdram, ctx);
        goto after_5;
    // 0x60004CB0: addiu       $a0, $zero, 0x397
    ctx->r4 = ADD32(0, 0X397);
    after_5:
    // 0x60004CB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60004CB8:
    // 0x60004CB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60004CBC: jr          $ra
    // 0x60004CC0: nop

    return;
    // 0x60004CC0: nop

;}
RECOMP_FUNC void ovl_stage_world7_4CC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004CC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60004CC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60004CCC: jal         0x60000BB0
    // 0x60004CD0: addiu       $a0, $zero, 0x10D
    ctx->r4 = ADD32(0, 0X10D);
    ovl_stage_world7_BB0(rdram, ctx);
        goto after_0;
    // 0x60004CD0: addiu       $a0, $zero, 0x10D
    ctx->r4 = ADD32(0, 0X10D);
    after_0:
    // 0x60004CD4: beq         $v0, $zero, L_60004CF8
    if (ctx->r2 == 0) {
        // 0x60004CD8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60004CF8;
    }
    // 0x60004CD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004CDC: jal         0x60000B98
    // 0x60004CE0: addiu       $a0, $zero, 0x108
    ctx->r4 = ADD32(0, 0X108);
    ovl_stage_world7_B98(rdram, ctx);
        goto after_1;
    // 0x60004CE0: addiu       $a0, $zero, 0x108
    ctx->r4 = ADD32(0, 0X108);
    after_1:
    // 0x60004CE4: jal         0x60000EF8
    // 0x60004CE8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    ovl_stage_world7_EF8(rdram, ctx);
        goto after_2;
    // 0x60004CE8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_2:
    // 0x60004CEC: jal         0x60004C5C
    // 0x60004CF0: nop

    ovl_stage_world7_4C5C(rdram, ctx);
        goto after_3;
    // 0x60004CF0: nop

    after_3:
    // 0x60004CF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60004CF8:
    // 0x60004CF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60004CFC: jr          $ra
    // 0x60004D00: nop

    return;
    // 0x60004D00: nop

;}
RECOMP_FUNC void ovl_stage_world7_4D04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004D04: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x60004D08: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x60004D0C: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x60004D10: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x60004D14: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x60004D18: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x60004D1C: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x60004D20: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x60004D24: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x60004D28: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x60004D2C: jal         0x60000E74
    // 0x60004D30: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    ovl_stage_world7_E74(rdram, ctx);
        goto after_0;
    // 0x60004D30: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_0:
    // 0x60004D34: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x60004D38: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60004D3C: swc1        $f0, 0x5B50($at)
    MEM_W(0X5B50, ctx->r1) = ctx->f0.u32l;
    // 0x60004D40: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60004D44: swc1        $f0, 0x5B58($at)
    MEM_W(0X5B58, ctx->r1) = ctx->f0.u32l;
    // 0x60004D48: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60004D4C: swc1        $f0, 0x5B60($at)
    MEM_W(0X5B60, ctx->r1) = ctx->f0.u32l;
    // 0x60004D50: swc1        $f0, 0x5B64($at)
    MEM_W(0X5B64, ctx->r1) = ctx->f0.u32l;
    // 0x60004D54: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60004D58: swc1        $f0, 0x5B68($at)
    MEM_W(0X5B68, ctx->r1) = ctx->f0.u32l;
    // 0x60004D5C: swc1        $f0, 0x5B6C($at)
    MEM_W(0X5B6C, ctx->r1) = ctx->f0.u32l;
    // 0x60004D60: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60004D64: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x60004D68: sw          $t7, 0x5B88($at)
    MEM_W(0X5B88, ctx->r1) = ctx->r15;
    // 0x60004D6C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60004D70: swc1        $f0, 0x5B70($at)
    MEM_W(0X5B70, ctx->r1) = ctx->f0.u32l;
    // 0x60004D74: swc1        $f0, 0x5B74($at)
    MEM_W(0X5B74, ctx->r1) = ctx->f0.u32l;
    // 0x60004D78: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60004D7C: swc1        $f0, 0x5B78($at)
    MEM_W(0X5B78, ctx->r1) = ctx->f0.u32l;
    // 0x60004D80: swc1        $f0, 0x5B7C($at)
    MEM_W(0X5B7C, ctx->r1) = ctx->f0.u32l;
    // 0x60004D84: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60004D88: swc1        $f0, 0x5B80($at)
    MEM_W(0X5B80, ctx->r1) = ctx->f0.u32l;
    // 0x60004D8C: swc1        $f0, 0x5B84($at)
    MEM_W(0X5B84, ctx->r1) = ctx->f0.u32l;
    // 0x60004D90: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60004D94: swc1        $f0, 0x5B54($at)
    MEM_W(0X5B54, ctx->r1) = ctx->f0.u32l;
    // 0x60004D98: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60004D9C: swc1        $f0, 0x5B5C($at)
    MEM_W(0X5B5C, ctx->r1) = ctx->f0.u32l;
    // 0x60004DA0: lui         $at, 0xC150
    ctx->r1 = S32(0XC150 << 16);
    // 0x60004DA4: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x60004DA8: lui         $t6, 0x6000
    ctx->r14 = S32(0X6000 << 16);
    // 0x60004DAC: lui         $at, 0x4150
    ctx->r1 = S32(0X4150 << 16);
    // 0x60004DB0: addiu       $t6, $t6, 0x5B50
    ctx->r14 = ADD32(ctx->r14, 0X5B50);
    // 0x60004DB4: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x60004DB8: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x60004DBC: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
    // 0x60004DC0: addiu       $s3, $zero, 0x32
    ctx->r19 = ADD32(0, 0X32);
    // 0x60004DC4: addiu       $s2, $sp, 0x3C
    ctx->r18 = ADD32(ctx->r29, 0X3C);
L_60004DC8:
    // 0x60004DC8: jal         0x600009C4
    // 0x60004DCC: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_stage_world7_9C4(rdram, ctx);
        goto after_1;
    // 0x60004DCC: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_1:
    // 0x60004DD0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_60004DD4:
    // 0x60004DD4: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60004DD8: swc1        $f20, 0x5B80($at)
    MEM_W(0X5B80, ctx->r1) = ctx->f20.u32l;
    // 0x60004DDC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x60004DE0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x60004DE4: jal         0x600006C4
    // 0x60004DE8: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    ovl_stage_world7_6C4(rdram, ctx);
        goto after_2;
    // 0x60004DE8: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_2:
    // 0x60004DEC: jal         0x60000BB0
    // 0x60004DF0: addiu       $a0, $zero, 0x10E
    ctx->r4 = ADD32(0, 0X10E);
    ovl_stage_world7_BB0(rdram, ctx);
        goto after_3;
    // 0x60004DF0: addiu       $a0, $zero, 0x10E
    ctx->r4 = ADD32(0, 0X10E);
    after_3:
    // 0x60004DF4: beq         $v0, $zero, L_60004E14
    if (ctx->r2 == 0) {
        // 0x60004DF8: nop
    
            goto L_60004E14;
    }
    // 0x60004DF8: nop

L_60004DFC:
    // 0x60004DFC: jal         0x600009D0
    // 0x60004E00: nop

    ovl_stage_world7_9D0(rdram, ctx);
        goto after_4;
    // 0x60004E00: nop

    after_4:
    // 0x60004E04: jal         0x60000BB0
    // 0x60004E08: addiu       $a0, $zero, 0x10E
    ctx->r4 = ADD32(0, 0X10E);
    ovl_stage_world7_BB0(rdram, ctx);
        goto after_5;
    // 0x60004E08: addiu       $a0, $zero, 0x10E
    ctx->r4 = ADD32(0, 0X10E);
    after_5:
    // 0x60004E0C: bne         $v0, $zero, L_60004DFC
    if (ctx->r2 != 0) {
        // 0x60004E10: nop
    
            goto L_60004DFC;
    }
    // 0x60004E10: nop

L_60004E14:
    // 0x60004E14: jal         0x600009D0
    // 0x60004E18: nop

    ovl_stage_world7_9D0(rdram, ctx);
        goto after_6;
    // 0x60004E18: nop

    after_6:
    // 0x60004E1C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60004E20: slti        $at, $s0, 0x32
    ctx->r1 = SIGNED(ctx->r16) < 0X32 ? 1 : 0;
    // 0x60004E24: bne         $at, $zero, L_60004DD4
    if (ctx->r1 != 0) {
        // 0x60004E28: nop
    
            goto L_60004DD4;
    }
    // 0x60004E28: nop

    // 0x60004E2C: jal         0x600009C4
    // 0x60004E30: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_stage_world7_9C4(rdram, ctx);
        goto after_7;
    // 0x60004E30: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_7:
    // 0x60004E34: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_60004E38:
    // 0x60004E38: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60004E3C: swc1        $f22, 0x5B80($at)
    MEM_W(0X5B80, ctx->r1) = ctx->f22.u32l;
    // 0x60004E40: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x60004E44: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x60004E48: jal         0x600006C4
    // 0x60004E4C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    ovl_stage_world7_6C4(rdram, ctx);
        goto after_8;
    // 0x60004E4C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_8:
    // 0x60004E50: jal         0x60000BB0
    // 0x60004E54: addiu       $a0, $zero, 0x10E
    ctx->r4 = ADD32(0, 0X10E);
    ovl_stage_world7_BB0(rdram, ctx);
        goto after_9;
    // 0x60004E54: addiu       $a0, $zero, 0x10E
    ctx->r4 = ADD32(0, 0X10E);
    after_9:
    // 0x60004E58: beq         $v0, $zero, L_60004E68
    if (ctx->r2 == 0) {
        // 0x60004E5C: nop
    
            goto L_60004E68;
    }
    // 0x60004E5C: nop

    // 0x60004E60: jal         0x600009D0
    // 0x60004E64: nop

    ovl_stage_world7_9D0(rdram, ctx);
        goto after_10;
    // 0x60004E64: nop

    after_10:
L_60004E68:
    // 0x60004E68: jal         0x600009D0
    // 0x60004E6C: nop

    ovl_stage_world7_9D0(rdram, ctx);
        goto after_11;
    // 0x60004E6C: nop

    after_11:
    // 0x60004E70: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60004E74: bne         $s0, $s3, L_60004E38
    if (ctx->r16 != ctx->r19) {
        // 0x60004E78: nop
    
            goto L_60004E38;
    }
    // 0x60004E78: nop

    // 0x60004E7C: b           L_60004DC8
    // 0x60004E80: nop

        goto L_60004DC8;
    // 0x60004E80: nop

    // 0x60004E84: nop

    // 0x60004E88: nop

    // 0x60004E8C: nop

    // 0x60004E90: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x60004E94: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x60004E98: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x60004E9C: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x60004EA0: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x60004EA4: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x60004EA8: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x60004EAC: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x60004EB0: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x60004EB4: jr          $ra
    // 0x60004EB8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x60004EB8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_stage_world7_4EBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004EBC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60004EC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60004EC4: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60004EC8: addiu       $a0, $a0, 0x4D04
    ctx->r4 = ADD32(ctx->r4, 0X4D04);
    // 0x60004ECC: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60004ED0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60004ED4: jal         0x60000994
    // 0x60004ED8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world7_994(rdram, ctx);
        goto after_0;
    // 0x60004ED8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x60004EDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004EE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60004EE4: jr          $ra
    // 0x60004EE8: nop

    return;
    // 0x60004EE8: nop

;}
RECOMP_FUNC void ovl_stage_world7_4EEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004EEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60004EF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60004EF4: jal         0x600009C4
    // 0x60004EF8: addiu       $a0, $zero, 0x1E0
    ctx->r4 = ADD32(0, 0X1E0);
    ovl_stage_world7_9C4(rdram, ctx);
        goto after_0;
    // 0x60004EF8: addiu       $a0, $zero, 0x1E0
    ctx->r4 = ADD32(0, 0X1E0);
    after_0:
    // 0x60004EFC: jal         0x60000BA4
    // 0x60004F00: addiu       $a0, $zero, 0x10E
    ctx->r4 = ADD32(0, 0X10E);
    ovl_stage_world7_BA4(rdram, ctx);
        goto after_1;
    // 0x60004F00: addiu       $a0, $zero, 0x10E
    ctx->r4 = ADD32(0, 0X10E);
    after_1:
    // 0x60004F04: jal         0x600009AC
    // 0x60004F08: nop

    ovl_stage_world7_9AC(rdram, ctx);
        goto after_2;
    // 0x60004F08: nop

    after_2:
    // 0x60004F0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004F10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60004F14: jr          $ra
    // 0x60004F18: nop

    return;
    // 0x60004F18: nop

;}
RECOMP_FUNC void ovl_stage_world7_4F1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004F1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60004F20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60004F24: jal         0x60000BB0
    // 0x60004F28: addiu       $a0, $zero, 0x10E
    ctx->r4 = ADD32(0, 0X10E);
    ovl_stage_world7_BB0(rdram, ctx);
        goto after_0;
    // 0x60004F28: addiu       $a0, $zero, 0x10E
    ctx->r4 = ADD32(0, 0X10E);
    after_0:
    // 0x60004F2C: bne         $v0, $zero, L_60004F58
    if (ctx->r2 != 0) {
        // 0x60004F30: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60004F58;
    }
    // 0x60004F30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004F34: jal         0x60000B98
    // 0x60004F38: addiu       $a0, $zero, 0x10E
    ctx->r4 = ADD32(0, 0X10E);
    ovl_stage_world7_B98(rdram, ctx);
        goto after_1;
    // 0x60004F38: addiu       $a0, $zero, 0x10E
    ctx->r4 = ADD32(0, 0X10E);
    after_1:
    // 0x60004F3C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60004F40: addiu       $a0, $a0, 0x4EEC
    ctx->r4 = ADD32(ctx->r4, 0X4EEC);
    // 0x60004F44: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60004F48: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60004F4C: jal         0x60000994
    // 0x60004F50: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world7_994(rdram, ctx);
        goto after_2;
    // 0x60004F50: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x60004F54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60004F58:
    // 0x60004F58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60004F5C: jr          $ra
    // 0x60004F60: nop

    return;
    // 0x60004F60: nop

;}
RECOMP_FUNC void ovl_stage_world7_4F64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004F64: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x60004F68: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x60004F6C: jal         0x60000C1C
    // 0x60004F70: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    ovl_stage_world7_C1C(rdram, ctx);
        goto after_0;
    // 0x60004F70: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x60004F74: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x60004F78: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x60004F7C: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x60004F80: beq         $t7, $zero, L_60004F90
    if (ctx->r15 == 0) {
        // 0x60004F84: nop
    
            goto L_60004F90;
    }
    // 0x60004F84: nop

    // 0x60004F88: jal         0x600009AC
    // 0x60004F8C: nop

    ovl_stage_world7_9AC(rdram, ctx);
        goto after_1;
    // 0x60004F8C: nop

    after_1:
L_60004F90:
    // 0x60004F90: jal         0x60000FA8
    // 0x60004F94: nop

    ovl_stage_world7_FA8(rdram, ctx);
        goto after_2;
    // 0x60004F94: nop

    after_2:
    // 0x60004F98: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x60004F9C: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x60004FA0: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x60004FA4: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x60004FA8: jal         0x60000A60
    // 0x60004FAC: addiu       $a0, $zero, 0xADB
    ctx->r4 = ADD32(0, 0XADB);
    ovl_stage_world7_A60(rdram, ctx);
        goto after_3;
    // 0x60004FAC: addiu       $a0, $zero, 0xADB
    ctx->r4 = ADD32(0, 0XADB);
    after_3:
    // 0x60004FB0: jal         0x600011A0
    // 0x60004FB4: nop

    ovl_stage_world7_11A0(rdram, ctx);
        goto after_4;
    // 0x60004FB4: nop

    after_4:
    // 0x60004FB8: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x60004FBC: lui         $at, 0xFFFE
    ctx->r1 = S32(0XFFFE << 16);
    // 0x60004FC0: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x60004FC4: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x60004FC8: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
    // 0x60004FCC: jal         0x60002A40
    // 0x60004FD0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world7_2A40(rdram, ctx);
        goto after_5;
    // 0x60004FD0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_5:
    // 0x60004FD4: jal         0x60001208
    // 0x60004FD8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world7_1208(rdram, ctx);
        goto after_6;
    // 0x60004FD8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_6:
    // 0x60004FDC: jal         0x60000BB0
    // 0x60004FE0: addiu       $a0, $zero, 0x86
    ctx->r4 = ADD32(0, 0X86);
    ovl_stage_world7_BB0(rdram, ctx);
        goto after_7;
    // 0x60004FE0: addiu       $a0, $zero, 0x86
    ctx->r4 = ADD32(0, 0X86);
    after_7:
    // 0x60004FE4: beq         $v0, $zero, L_60004FFC
    if (ctx->r2 == 0) {
        // 0x60004FE8: nop
    
            goto L_60004FFC;
    }
    // 0x60004FE8: nop

    // 0x60004FEC: jal         0x60000C7C
    // 0x60004FF0: nop

    ovl_stage_world7_C7C(rdram, ctx);
        goto after_8;
    // 0x60004FF0: nop

    after_8:
    // 0x60004FF4: b           L_60005014
    // 0x60004FF8: nop

        goto L_60005014;
    // 0x60004FF8: nop

L_60004FFC:
    // 0x60004FFC: jal         0x60000B98
    // 0x60005000: addiu       $a0, $zero, 0x86
    ctx->r4 = ADD32(0, 0X86);
    ovl_stage_world7_B98(rdram, ctx);
        goto after_9;
    // 0x60005000: addiu       $a0, $zero, 0x86
    ctx->r4 = ADD32(0, 0X86);
    after_9:
    // 0x60005004: addiu       $a0, $zero, 0x8B9
    ctx->r4 = ADD32(0, 0X8B9);
    // 0x60005008: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x6000500C: jal         0x60000C10
    // 0x60005010: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_stage_world7_C10(rdram, ctx);
        goto after_10;
    // 0x60005010: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_10:
L_60005014:
    // 0x60005014: jal         0x600009AC
    // 0x60005018: nop

    ovl_stage_world7_9AC(rdram, ctx);
        goto after_11;
    // 0x60005018: nop

    after_11:
    // 0x6000501C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x60005020: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x60005024: jr          $ra
    // 0x60005028: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x60005028: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_stage_world7_502C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000502C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60005030: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60005034: jal         0x600009C4
    // 0x60005038: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_stage_world7_9C4(rdram, ctx);
        goto after_0;
    // 0x60005038: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_0:
    // 0x6000503C: jal         0x60000BA4
    // 0x60005040: addiu       $a0, $zero, 0x10B
    ctx->r4 = ADD32(0, 0X10B);
    ovl_stage_world7_BA4(rdram, ctx);
        goto after_1;
    // 0x60005040: addiu       $a0, $zero, 0x10B
    ctx->r4 = ADD32(0, 0X10B);
    after_1:
    // 0x60005044: jal         0x600009AC
    // 0x60005048: nop

    ovl_stage_world7_9AC(rdram, ctx);
        goto after_2;
    // 0x60005048: nop

    after_2:
    // 0x6000504C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005050: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60005054: jr          $ra
    // 0x60005058: nop

    return;
    // 0x60005058: nop

;}
RECOMP_FUNC void ovl_stage_world7_505C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000505C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60005060: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60005064: jal         0x60000BB0
    // 0x60005068: addiu       $a0, $zero, 0x10B
    ctx->r4 = ADD32(0, 0X10B);
    ovl_stage_world7_BB0(rdram, ctx);
        goto after_0;
    // 0x60005068: addiu       $a0, $zero, 0x10B
    ctx->r4 = ADD32(0, 0X10B);
    after_0:
    // 0x6000506C: bne         $v0, $zero, L_60005154
    if (ctx->r2 != 0) {
        // 0x60005070: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60005154;
    }
    // 0x60005070: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005074: jal         0x60000BB0
    // 0x60005078: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    ovl_stage_world7_BB0(rdram, ctx);
        goto after_1;
    // 0x60005078: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    after_1:
    // 0x6000507C: beq         $v0, $zero, L_60005154
    if (ctx->r2 == 0) {
        // 0x60005080: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60005154;
    }
    // 0x60005080: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005084: jal         0x60000BB0
    // 0x60005088: addiu       $a0, $zero, 0x107
    ctx->r4 = ADD32(0, 0X107);
    ovl_stage_world7_BB0(rdram, ctx);
        goto after_2;
    // 0x60005088: addiu       $a0, $zero, 0x107
    ctx->r4 = ADD32(0, 0X107);
    after_2:
    // 0x6000508C: beq         $v0, $zero, L_60005154
    if (ctx->r2 == 0) {
        // 0x60005090: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60005154;
    }
    // 0x60005090: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005094: jal         0x60000BB0
    // 0x60005098: addiu       $a0, $zero, 0x108
    ctx->r4 = ADD32(0, 0X108);
    ovl_stage_world7_BB0(rdram, ctx);
        goto after_3;
    // 0x60005098: addiu       $a0, $zero, 0x108
    ctx->r4 = ADD32(0, 0X108);
    after_3:
    // 0x6000509C: beq         $v0, $zero, L_60005154
    if (ctx->r2 == 0) {
        // 0x600050A0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60005154;
    }
    // 0x600050A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600050A4: jal         0x60000BB0
    // 0x600050A8: addiu       $a0, $zero, 0x109
    ctx->r4 = ADD32(0, 0X109);
    ovl_stage_world7_BB0(rdram, ctx);
        goto after_4;
    // 0x600050A8: addiu       $a0, $zero, 0x109
    ctx->r4 = ADD32(0, 0X109);
    after_4:
    // 0x600050AC: beq         $v0, $zero, L_60005154
    if (ctx->r2 == 0) {
        // 0x600050B0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60005154;
    }
    // 0x600050B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600050B4: jal         0x60000BB0
    // 0x600050B8: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    ovl_stage_world7_BB0(rdram, ctx);
        goto after_5;
    // 0x600050B8: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    after_5:
    // 0x600050BC: bne         $v0, $zero, L_60005154
    if (ctx->r2 != 0) {
        // 0x600050C0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60005154;
    }
    // 0x600050C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600050C4: jal         0x60000BB0
    // 0x600050C8: addiu       $a0, $zero, 0x10C
    ctx->r4 = ADD32(0, 0X10C);
    ovl_stage_world7_BB0(rdram, ctx);
        goto after_6;
    // 0x600050C8: addiu       $a0, $zero, 0x10C
    ctx->r4 = ADD32(0, 0X10C);
    after_6:
    // 0x600050CC: bne         $v0, $zero, L_60005110
    if (ctx->r2 != 0) {
        // 0x600050D0: nop
    
            goto L_60005110;
    }
    // 0x600050D0: nop

    // 0x600050D4: jal         0x60000B98
    // 0x600050D8: addiu       $a0, $zero, 0x10B
    ctx->r4 = ADD32(0, 0X10B);
    ovl_stage_world7_B98(rdram, ctx);
        goto after_7;
    // 0x600050D8: addiu       $a0, $zero, 0x10B
    ctx->r4 = ADD32(0, 0X10B);
    after_7:
    // 0x600050DC: jal         0x60000B98
    // 0x600050E0: addiu       $a0, $zero, 0x10C
    ctx->r4 = ADD32(0, 0X10C);
    ovl_stage_world7_B98(rdram, ctx);
        goto after_8;
    // 0x600050E0: addiu       $a0, $zero, 0x10C
    ctx->r4 = ADD32(0, 0X10C);
    after_8:
    // 0x600050E4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x600050E8: jal         0x60000E68
    // 0x600050EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world7_E68(rdram, ctx);
        goto after_9;
    // 0x600050EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x600050F0: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600050F4: addiu       $a0, $a0, 0x502C
    ctx->r4 = ADD32(ctx->r4, 0X502C);
    // 0x600050F8: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x600050FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60005100: jal         0x60000994
    // 0x60005104: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world7_994(rdram, ctx);
        goto after_10;
    // 0x60005104: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_10:
    // 0x60005108: b           L_60005154
    // 0x6000510C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005154;
    // 0x6000510C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005110:
    // 0x60005110: jal         0x60000DE4
    // 0x60005114: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world7_DE4(rdram, ctx);
        goto after_11;
    // 0x60005114: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_11:
    // 0x60005118: jal         0x60000CC4
    // 0x6000511C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_stage_world7_CC4(rdram, ctx);
        goto after_12;
    // 0x6000511C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_12:
    // 0x60005120: jal         0x60000A6C
    // 0x60005124: nop

    ovl_stage_world7_A6C(rdram, ctx);
        goto after_13;
    // 0x60005124: nop

    after_13:
    // 0x60005128: jal         0x60000B98
    // 0x6000512C: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    ovl_stage_world7_B98(rdram, ctx);
        goto after_14;
    // 0x6000512C: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    after_14:
    // 0x60005130: jal         0x600012C0
    // 0x60005134: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_stage_world7_12C0(rdram, ctx);
        goto after_15;
    // 0x60005134: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_15:
    // 0x60005138: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x6000513C: addiu       $a0, $a0, 0x4F64
    ctx->r4 = ADD32(ctx->r4, 0X4F64);
    // 0x60005140: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60005144: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60005148: jal         0x60000994
    // 0x6000514C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world7_994(rdram, ctx);
        goto after_16;
    // 0x6000514C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_16:
    // 0x60005150: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005154:
    // 0x60005154: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60005158: jr          $ra
    // 0x6000515C: nop

    return;
    // 0x6000515C: nop

;}
RECOMP_FUNC void ovl_stage_world7_5160(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005160: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60005164: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60005168: jal         0x60000C1C
    // 0x6000516C: nop

    ovl_stage_world7_C1C(rdram, ctx);
        goto after_0;
    // 0x6000516C: nop

    after_0:
    // 0x60005170: jal         0x60000B98
    // 0x60005174: addiu       $a0, $zero, 0xB2
    ctx->r4 = ADD32(0, 0XB2);
    ovl_stage_world7_B98(rdram, ctx);
        goto after_1;
    // 0x60005174: addiu       $a0, $zero, 0xB2
    ctx->r4 = ADD32(0, 0XB2);
    after_1:
    // 0x60005178: jal         0x60000A60
    // 0x6000517C: addiu       $a0, $zero, 0xADA
    ctx->r4 = ADD32(0, 0XADA);
    ovl_stage_world7_A60(rdram, ctx);
        goto after_2;
    // 0x6000517C: addiu       $a0, $zero, 0xADA
    ctx->r4 = ADD32(0, 0XADA);
    after_2:
    // 0x60005180: jal         0x600011A0
    // 0x60005184: nop

    ovl_stage_world7_11A0(rdram, ctx);
        goto after_3;
    // 0x60005184: nop

    after_3:
    // 0x60005188: jal         0x60002A40
    // 0x6000518C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world7_2A40(rdram, ctx);
        goto after_4;
    // 0x6000518C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
    // 0x60005190: jal         0x600009AC
    // 0x60005194: nop

    ovl_stage_world7_9AC(rdram, ctx);
        goto after_5;
    // 0x60005194: nop

    after_5:
    // 0x60005198: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000519C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600051A0: jr          $ra
    // 0x600051A4: nop

    return;
    // 0x600051A4: nop

;}
RECOMP_FUNC void ovl_stage_world7_51A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600051A8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x600051AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600051B0: jal         0x6000025C
    // 0x600051B4: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    ovl_stage_world7_25C(rdram, ctx);
        goto after_0;
    // 0x600051B4: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    after_0:
    // 0x600051B8: jal         0x60000244
    // 0x600051BC: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    ovl_stage_world7_244(rdram, ctx);
        goto after_1;
    // 0x600051BC: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    after_1:
    // 0x600051C0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x600051C4: addiu       $t6, $zero, 0x8E
    ctx->r14 = ADD32(0, 0X8E);
    // 0x600051C8: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x600051CC: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x600051D0: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x600051D4: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x600051D8: jal         0x60000E74
    // 0x600051DC: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    ovl_stage_world7_E74(rdram, ctx);
        goto after_2;
    // 0x600051DC: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x600051E0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600051E4: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    // 0x600051E8: jal         0x600006C4
    // 0x600051EC: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world7_6C4(rdram, ctx);
        goto after_3;
    // 0x600051EC: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_3:
    // 0x600051F0: jal         0x60000EEC
    // 0x600051F4: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    ovl_stage_world7_EEC(rdram, ctx);
        goto after_4;
    // 0x600051F4: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    after_4:
    // 0x600051F8: jal         0x60000EEC
    // 0x600051FC: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    ovl_stage_world7_EEC(rdram, ctx);
        goto after_5;
    // 0x600051FC: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    after_5:
    // 0x60005200: jal         0x60000EEC
    // 0x60005204: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    ovl_stage_world7_EEC(rdram, ctx);
        goto after_6;
    // 0x60005204: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_6:
    // 0x60005208: jal         0x60000EEC
    // 0x6000520C: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    ovl_stage_world7_EEC(rdram, ctx);
        goto after_7;
    // 0x6000520C: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_7:
    // 0x60005210: jal         0x600009AC
    // 0x60005214: nop

    ovl_stage_world7_9AC(rdram, ctx);
        goto after_8;
    // 0x60005214: nop

    after_8:
    // 0x60005218: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000521C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x60005220: jr          $ra
    // 0x60005224: nop

    return;
    // 0x60005224: nop

;}
RECOMP_FUNC void ovl_stage_world7_5228(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005228: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x6000522C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x60005230: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x60005234: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x60005238: jal         0x60001208
    // 0x6000523C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world7_1208(rdram, ctx);
        goto after_0;
    // 0x6000523C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x60005240: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60005244: lwc1        $f4, 0x5AC4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5AC4);
    // 0x60005248: lui         $at, 0x44AF
    ctx->r1 = S32(0X44AF << 16);
    // 0x6000524C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x60005250: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x60005254: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x60005258: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x6000525C: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    // 0x60005260: jal         0x60000DE4
    // 0x60005264: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    ovl_stage_world7_DE4(rdram, ctx);
        goto after_1;
    // 0x60005264: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x60005268: addiu       $s0, $sp, 0x24
    ctx->r16 = ADD32(ctx->r29, 0X24);
    // 0x6000526C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x60005270: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60005274: jal         0x600006C4
    // 0x60005278: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_stage_world7_6C4(rdram, ctx);
        goto after_2;
    // 0x60005278: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x6000527C: addiu       $t6, $zero, 0x31
    ctx->r14 = ADD32(0, 0X31);
    // 0x60005280: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x60005284: jal         0x60000DE4
    // 0x60005288: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world7_DE4(rdram, ctx);
        goto after_3;
    // 0x60005288: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
    // 0x6000528C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60005290: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x60005294: jal         0x600006C4
    // 0x60005298: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_stage_world7_6C4(rdram, ctx);
        goto after_4;
    // 0x60005298: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_4:
    // 0x6000529C: jal         0x60000DE4
    // 0x600052A0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world7_DE4(rdram, ctx);
        goto after_5;
    // 0x600052A0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_5:
    // 0x600052A4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600052A8: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x600052AC: jal         0x600006C4
    // 0x600052B0: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_stage_world7_6C4(rdram, ctx);
        goto after_6;
    // 0x600052B0: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_6:
    // 0x600052B4: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x600052B8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x600052BC: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x600052C0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x600052C4: addiu       $s1, $zero, 0x1E
    ctx->r17 = ADD32(0, 0X1E);
    // 0x600052C8: swc1        $f10, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->f10.u32l;
L_600052CC:
    // 0x600052CC: jal         0x60002A40
    // 0x600052D0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world7_2A40(rdram, ctx);
        goto after_7;
    // 0x600052D0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_7:
    // 0x600052D4: jal         0x600009D0
    // 0x600052D8: nop

    ovl_stage_world7_9D0(rdram, ctx);
        goto after_8;
    // 0x600052D8: nop

    after_8:
    // 0x600052DC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x600052E0: bne         $s0, $s1, L_600052CC
    if (ctx->r16 != ctx->r17) {
        // 0x600052E4: nop
    
            goto L_600052CC;
    }
    // 0x600052E4: nop

    // 0x600052E8: jal         0x600009AC
    // 0x600052EC: nop

    ovl_stage_world7_9AC(rdram, ctx);
        goto after_9;
    // 0x600052EC: nop

    after_9:
    // 0x600052F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x600052F4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x600052F8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x600052FC: jr          $ra
    // 0x60005300: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x60005300: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_stage_world7_5304(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005304: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60005308: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x6000530C: jal         0x60000BB0
    // 0x60005310: addiu       $a0, $zero, 0xB2
    ctx->r4 = ADD32(0, 0XB2);
    ovl_stage_world7_BB0(rdram, ctx);
        goto after_0;
    // 0x60005310: addiu       $a0, $zero, 0xB2
    ctx->r4 = ADD32(0, 0XB2);
    after_0:
    // 0x60005314: bne         $v0, $zero, L_60005338
    if (ctx->r2 != 0) {
        // 0x60005318: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_60005338;
    }
    // 0x60005318: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x6000531C: addiu       $a0, $a0, 0x5160
    ctx->r4 = ADD32(ctx->r4, 0X5160);
    // 0x60005320: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60005324: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60005328: jal         0x60000994
    // 0x6000532C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world7_994(rdram, ctx);
        goto after_1;
    // 0x6000532C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x60005330: b           L_60005360
    // 0x60005334: nop

        goto L_60005360;
    // 0x60005334: nop

L_60005338:
    // 0x60005338: jal         0x60000BB0
    // 0x6000533C: addiu       $a0, $zero, 0xB2
    ctx->r4 = ADD32(0, 0XB2);
    ovl_stage_world7_BB0(rdram, ctx);
        goto after_2;
    // 0x6000533C: addiu       $a0, $zero, 0xB2
    ctx->r4 = ADD32(0, 0XB2);
    after_2:
    // 0x60005340: beq         $v0, $zero, L_60005360
    if (ctx->r2 == 0) {
        // 0x60005344: nop
    
            goto L_60005360;
    }
    // 0x60005344: nop

    // 0x60005348: jal         0x60000BB0
    // 0x6000534C: addiu       $a0, $zero, 0x86
    ctx->r4 = ADD32(0, 0X86);
    ovl_stage_world7_BB0(rdram, ctx);
        goto after_3;
    // 0x6000534C: addiu       $a0, $zero, 0x86
    ctx->r4 = ADD32(0, 0X86);
    after_3:
    // 0x60005350: bne         $v0, $zero, L_60005360
    if (ctx->r2 != 0) {
        // 0x60005354: nop
    
            goto L_60005360;
    }
    // 0x60005354: nop

    // 0x60005358: jal         0x6000025C
    // 0x6000535C: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    ovl_stage_world7_25C(rdram, ctx);
        goto after_4;
    // 0x6000535C: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    after_4:
L_60005360:
    // 0x60005360: jal         0x60000BB0
    // 0x60005364: addiu       $a0, $zero, 0x86
    ctx->r4 = ADD32(0, 0X86);
    ovl_stage_world7_BB0(rdram, ctx);
        goto after_5;
    // 0x60005364: addiu       $a0, $zero, 0x86
    ctx->r4 = ADD32(0, 0X86);
    after_5:
    // 0x60005368: beq         $v0, $zero, L_60005390
    if (ctx->r2 == 0) {
        // 0x6000536C: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_60005390;
    }
    // 0x6000536C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60005370: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60005374: addiu       $a0, $a0, 0x51A8
    ctx->r4 = ADD32(ctx->r4, 0X51A8);
    // 0x60005378: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x6000537C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60005380: jal         0x60000994
    // 0x60005384: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world7_994(rdram, ctx);
        goto after_6;
    // 0x60005384: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_6:
    // 0x60005388: b           L_600053A8
    // 0x6000538C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600053A8;
    // 0x6000538C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005390:
    // 0x60005390: addiu       $a0, $a0, 0x5228
    ctx->r4 = ADD32(ctx->r4, 0X5228);
    // 0x60005394: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60005398: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x6000539C: jal         0x60000994
    // 0x600053A0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world7_994(rdram, ctx);
        goto after_7;
    // 0x600053A0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_7:
    // 0x600053A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600053A8:
    // 0x600053A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600053AC: jr          $ra
    // 0x600053B0: nop

    return;
    // 0x600053B0: nop

;}
RECOMP_FUNC void ovl_stage_world7_53B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600053B4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x600053B8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x600053BC: jal         0x60000C1C
    // 0x600053C0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    ovl_stage_world7_C1C(rdram, ctx);
        goto after_0;
    // 0x600053C0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x600053C4: lw          $v1, 0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8);
    // 0x600053C8: addiu       $at, $zero, 0x8B1
    ctx->r1 = ADD32(0, 0X8B1);
    // 0x600053CC: bne         $v1, $at, L_600053E4
    if (ctx->r3 != ctx->r1) {
        // 0x600053D0: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_600053E4;
    }
    // 0x600053D0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x600053D4: jal         0x60000A60
    // 0x600053D8: addiu       $a0, $zero, 0xB1E
    ctx->r4 = ADD32(0, 0XB1E);
    ovl_stage_world7_A60(rdram, ctx);
        goto after_1;
    // 0x600053D8: addiu       $a0, $zero, 0xB1E
    ctx->r4 = ADD32(0, 0XB1E);
    after_1:
    // 0x600053DC: b           L_60005424
    // 0x600053E0: nop

        goto L_60005424;
    // 0x600053E0: nop

L_600053E4:
    // 0x600053E4: addiu       $at, $zero, 0x892
    ctx->r1 = ADD32(0, 0X892);
    // 0x600053E8: bne         $v1, $at, L_60005404
    if (ctx->r3 != ctx->r1) {
        // 0x600053EC: addiu       $at, $zero, 0x888
        ctx->r1 = ADD32(0, 0X888);
            goto L_60005404;
    }
    // 0x600053EC: addiu       $at, $zero, 0x888
    ctx->r1 = ADD32(0, 0X888);
    // 0x600053F0: jal         0x60000A60
    // 0x600053F4: addiu       $a0, $zero, 0xB1F
    ctx->r4 = ADD32(0, 0XB1F);
    ovl_stage_world7_A60(rdram, ctx);
        goto after_2;
    // 0x600053F4: addiu       $a0, $zero, 0xB1F
    ctx->r4 = ADD32(0, 0XB1F);
    after_2:
    // 0x600053F8: b           L_60005424
    // 0x600053FC: nop

        goto L_60005424;
    // 0x600053FC: nop

    // 0x60005400: addiu       $at, $zero, 0x888
    ctx->r1 = ADD32(0, 0X888);
L_60005404:
    // 0x60005404: bne         $v1, $at, L_6000541C
    if (ctx->r3 != ctx->r1) {
        // 0x60005408: nop
    
            goto L_6000541C;
    }
    // 0x60005408: nop

    // 0x6000540C: jal         0x60000A60
    // 0x60005410: addiu       $a0, $zero, 0xB27
    ctx->r4 = ADD32(0, 0XB27);
    ovl_stage_world7_A60(rdram, ctx);
        goto after_3;
    // 0x60005410: addiu       $a0, $zero, 0xB27
    ctx->r4 = ADD32(0, 0XB27);
    after_3:
    // 0x60005414: b           L_60005424
    // 0x60005418: nop

        goto L_60005424;
    // 0x60005418: nop

L_6000541C:
    // 0x6000541C: jal         0x60000A60
    // 0x60005420: addiu       $a0, $zero, 0xB20
    ctx->r4 = ADD32(0, 0XB20);
    ovl_stage_world7_A60(rdram, ctx);
        goto after_4;
    // 0x60005420: addiu       $a0, $zero, 0xB20
    ctx->r4 = ADD32(0, 0XB20);
    after_4:
L_60005424:
    // 0x60005424: jal         0x600009D0
    // 0x60005428: nop

    ovl_stage_world7_9D0(rdram, ctx);
        goto after_5;
    // 0x60005428: nop

    after_5:
    // 0x6000542C: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x60005430: nop

    // 0x60005434: andi        $t7, $t6, 0x800
    ctx->r15 = ctx->r14 & 0X800;
    // 0x60005438: beq         $t7, $zero, L_6000545C
    if (ctx->r15 == 0) {
        // 0x6000543C: nop
    
            goto L_6000545C;
    }
    // 0x6000543C: nop

L_60005440:
    // 0x60005440: jal         0x600009D0
    // 0x60005444: nop

    ovl_stage_world7_9D0(rdram, ctx);
        goto after_6;
    // 0x60005444: nop

    after_6:
    // 0x60005448: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x6000544C: nop

    // 0x60005450: andi        $t9, $t8, 0x800
    ctx->r25 = ctx->r24 & 0X800;
    // 0x60005454: bne         $t9, $zero, L_60005440
    if (ctx->r25 != 0) {
        // 0x60005458: nop
    
            goto L_60005440;
    }
    // 0x60005458: nop

L_6000545C:
    // 0x6000545C: jal         0x600009C4
    // 0x60005460: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    ovl_stage_world7_9C4(rdram, ctx);
        goto after_7;
    // 0x60005460: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_7:
    // 0x60005464: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x60005468: nop

    // 0x6000546C: ori         $t1, $t0, 0x200
    ctx->r9 = ctx->r8 | 0X200;
    // 0x60005470: jal         0x600009AC
    // 0x60005474: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
    ovl_stage_world7_9AC(rdram, ctx);
        goto after_8;
    // 0x60005474: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
    after_8:
    // 0x60005478: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x6000547C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x60005480: jr          $ra
    // 0x60005484: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x60005484: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_stage_world7_5488(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005488: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x6000548C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60005490: jal         0x60000C1C
    // 0x60005494: nop

    ovl_stage_world7_C1C(rdram, ctx);
        goto after_0;
    // 0x60005494: nop

    after_0:
    // 0x60005498: lw          $t6, 0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC);
    // 0x6000549C: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x600054A0: bne         $t6, $at, L_600054C4
    if (ctx->r14 != ctx->r1) {
        // 0x600054A4: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_600054C4;
    }
    // 0x600054A4: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600054A8: addiu       $a0, $a0, 0x53B4
    ctx->r4 = ADD32(ctx->r4, 0X53B4);
    // 0x600054AC: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x600054B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x600054B4: jal         0x60000994
    // 0x600054B8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world7_994(rdram, ctx);
        goto after_1;
    // 0x600054B8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x600054BC: b           L_600054E0
    // 0x600054C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600054E0;
    // 0x600054C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600054C4:
    // 0x600054C4: lw          $t7, 0x8($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X8);
    // 0x600054C8: addiu       $at, $zero, 0x8B1
    ctx->r1 = ADD32(0, 0X8B1);
    // 0x600054CC: bne         $t7, $at, L_600054E0
    if (ctx->r15 != ctx->r1) {
        // 0x600054D0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600054E0;
    }
    // 0x600054D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600054D4: jal         0x60000B98
    // 0x600054D8: addiu       $a0, $zero, 0x1BF
    ctx->r4 = ADD32(0, 0X1BF);
    ovl_stage_world7_B98(rdram, ctx);
        goto after_2;
    // 0x600054D8: addiu       $a0, $zero, 0x1BF
    ctx->r4 = ADD32(0, 0X1BF);
    after_2:
    // 0x600054DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600054E0:
    // 0x600054E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600054E4: jr          $ra
    // 0x600054E8: nop

    return;
    // 0x600054E8: nop

;}
RECOMP_FUNC void ovl_stage_world7_54EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600054EC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x600054F0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x600054F4: jal         0x60000C1C
    // 0x600054F8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    ovl_stage_world7_C1C(rdram, ctx);
        goto after_0;
    // 0x600054F8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x600054FC: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x60005500: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x60005504: andi        $t7, $t6, 0x800
    ctx->r15 = ctx->r14 & 0X800;
    // 0x60005508: beq         $t7, $zero, L_6000552C
    if (ctx->r15 == 0) {
        // 0x6000550C: nop
    
            goto L_6000552C;
    }
    // 0x6000550C: nop

L_60005510:
    // 0x60005510: jal         0x600009D0
    // 0x60005514: nop

    ovl_stage_world7_9D0(rdram, ctx);
        goto after_1;
    // 0x60005514: nop

    after_1:
    // 0x60005518: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x6000551C: nop

    // 0x60005520: andi        $t9, $t8, 0x800
    ctx->r25 = ctx->r24 & 0X800;
    // 0x60005524: bne         $t9, $zero, L_60005510
    if (ctx->r25 != 0) {
        // 0x60005528: nop
    
            goto L_60005510;
    }
    // 0x60005528: nop

L_6000552C:
    // 0x6000552C: jal         0x600009C4
    // 0x60005530: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    ovl_stage_world7_9C4(rdram, ctx);
        goto after_2;
    // 0x60005530: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_2:
    // 0x60005534: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x60005538: nop

    // 0x6000553C: ori         $t1, $t0, 0x200
    ctx->r9 = ctx->r8 | 0X200;
    // 0x60005540: jal         0x600009AC
    // 0x60005544: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
    ovl_stage_world7_9AC(rdram, ctx);
        goto after_3;
    // 0x60005544: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
    after_3:
    // 0x60005548: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x6000554C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x60005550: jr          $ra
    // 0x60005554: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x60005554: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_stage_world7_5558(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005558: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x6000555C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60005560: jal         0x60000C1C
    // 0x60005564: nop

    ovl_stage_world7_C1C(rdram, ctx);
        goto after_0;
    // 0x60005564: nop

    after_0:
    // 0x60005568: lw          $t6, 0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC);
    // 0x6000556C: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x60005570: bne         $t6, $at, L_6000558C
    if (ctx->r14 != ctx->r1) {
        // 0x60005574: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_6000558C;
    }
    // 0x60005574: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60005578: addiu       $a0, $a0, 0x54EC
    ctx->r4 = ADD32(ctx->r4, 0X54EC);
    // 0x6000557C: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60005580: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60005584: jal         0x60000994
    // 0x60005588: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world7_994(rdram, ctx);
        goto after_1;
    // 0x60005588: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
L_6000558C:
    // 0x6000558C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005590: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60005594: jr          $ra
    // 0x60005598: nop

    return;
    // 0x60005598: nop

;}
RECOMP_FUNC void ovl_stage_world7_559C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000559C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600055A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600055A4: jal         0x60000C1C
    // 0x600055A8: nop

    ovl_stage_world7_C1C(rdram, ctx);
        goto after_0;
    // 0x600055A8: nop

    after_0:
    // 0x600055AC: lw          $t6, 0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC);
    // 0x600055B0: addiu       $at, $zero, 0x32
    ctx->r1 = ADD32(0, 0X32);
    // 0x600055B4: beq         $t6, $at, L_600055C4
    if (ctx->r14 == ctx->r1) {
        // 0x600055B8: addiu       $a0, $zero, 0x4
        ctx->r4 = ADD32(0, 0X4);
            goto L_600055C4;
    }
    // 0x600055B8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x600055BC: jal         0x60000F04
    // 0x600055C0: addiu       $a1, $zero, -0x9
    ctx->r5 = ADD32(0, -0X9);
    ovl_stage_world7_F04(rdram, ctx);
        goto after_1;
    // 0x600055C0: addiu       $a1, $zero, -0x9
    ctx->r5 = ADD32(0, -0X9);
    after_1:
L_600055C4:
    // 0x600055C4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x600055C8: jal         0x60000F04
    // 0x600055CC: addiu       $a1, $zero, -0x9
    ctx->r5 = ADD32(0, -0X9);
    ovl_stage_world7_F04(rdram, ctx);
        goto after_2;
    // 0x600055CC: addiu       $a1, $zero, -0x9
    ctx->r5 = ADD32(0, -0X9);
    after_2:
    // 0x600055D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600055D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600055D8: jr          $ra
    // 0x600055DC: nop

    return;
    // 0x600055DC: nop

;}
RECOMP_FUNC void ovl_stage_world7_55E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600055E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600055E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600055E8: jal         0x60000C1C
    // 0x600055EC: nop

    ovl_stage_world7_C1C(rdram, ctx);
        goto after_0;
    // 0x600055EC: nop

    after_0:
    // 0x600055F0: lw          $t6, 0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC);
    // 0x600055F4: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x600055F8: bne         $t6, $at, L_60005608
    if (ctx->r14 != ctx->r1) {
        // 0x600055FC: nop
    
            goto L_60005608;
    }
    // 0x600055FC: nop

    // 0x60005600: jal         0x6000025C
    // 0x60005604: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    ovl_stage_world7_25C(rdram, ctx);
        goto after_1;
    // 0x60005604: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_1:
L_60005608:
    // 0x60005608: jal         0x60000BB0
    // 0x6000560C: addiu       $a0, $zero, 0x189
    ctx->r4 = ADD32(0, 0X189);
    ovl_stage_world7_BB0(rdram, ctx);
        goto after_2;
    // 0x6000560C: addiu       $a0, $zero, 0x189
    ctx->r4 = ADD32(0, 0X189);
    after_2:
    // 0x60005610: bne         $v0, $zero, L_60005620
    if (ctx->r2 != 0) {
        // 0x60005614: addiu       $a0, $zero, 0x3
        ctx->r4 = ADD32(0, 0X3);
            goto L_60005620;
    }
    // 0x60005614: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x60005618: jal         0x60000F04
    // 0x6000561C: addiu       $a1, $zero, -0x41
    ctx->r5 = ADD32(0, -0X41);
    ovl_stage_world7_F04(rdram, ctx);
        goto after_3;
    // 0x6000561C: addiu       $a1, $zero, -0x41
    ctx->r5 = ADD32(0, -0X41);
    after_3:
L_60005620:
    // 0x60005620: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005624: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60005628: jr          $ra
    // 0x6000562C: nop

    return;
    // 0x6000562C: nop

;}
RECOMP_FUNC void ovl_stage_world7_5630(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005630: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60005634: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60005638: jal         0x60000BB0
    // 0x6000563C: addiu       $a0, $zero, 0x86
    ctx->r4 = ADD32(0, 0X86);
    ovl_stage_world7_BB0(rdram, ctx);
        goto after_0;
    // 0x6000563C: addiu       $a0, $zero, 0x86
    ctx->r4 = ADD32(0, 0X86);
    after_0:
    // 0x60005640: bne         $v0, $zero, L_60005650
    if (ctx->r2 != 0) {
        // 0x60005644: addiu       $a0, $zero, 0x10
        ctx->r4 = ADD32(0, 0X10);
            goto L_60005650;
    }
    // 0x60005644: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x60005648: jal         0x60000F04
    // 0x6000564C: addiu       $a1, $zero, -0x41
    ctx->r5 = ADD32(0, -0X41);
    ovl_stage_world7_F04(rdram, ctx);
        goto after_1;
    // 0x6000564C: addiu       $a1, $zero, -0x41
    ctx->r5 = ADD32(0, -0X41);
    after_1:
L_60005650:
    // 0x60005650: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x60005654: jal         0x60000F04
    // 0x60005658: addiu       $a1, $zero, -0x9
    ctx->r5 = ADD32(0, -0X9);
    ovl_stage_world7_F04(rdram, ctx);
        goto after_2;
    // 0x60005658: addiu       $a1, $zero, -0x9
    ctx->r5 = ADD32(0, -0X9);
    after_2:
    // 0x6000565C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005660: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60005664: jr          $ra
    // 0x60005668: nop

    return;
    // 0x60005668: nop

;}
RECOMP_FUNC void ovl_stage_world7_566C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000566C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60005670: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60005674: jal         0x60000C1C
    // 0x60005678: nop

    ovl_stage_world7_C1C(rdram, ctx);
        goto after_0;
    // 0x60005678: nop

    after_0:
    // 0x6000567C: lw          $t6, 0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC);
    // 0x60005680: addiu       $at, $zero, 0x32
    ctx->r1 = ADD32(0, 0X32);
    // 0x60005684: beq         $t6, $at, L_60005694
    if (ctx->r14 == ctx->r1) {
        // 0x60005688: addiu       $a0, $zero, 0x5
        ctx->r4 = ADD32(0, 0X5);
            goto L_60005694;
    }
    // 0x60005688: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x6000568C: jal         0x60000F04
    // 0x60005690: addiu       $a1, $zero, -0x9
    ctx->r5 = ADD32(0, -0X9);
    ovl_stage_world7_F04(rdram, ctx);
        goto after_1;
    // 0x60005690: addiu       $a1, $zero, -0x9
    ctx->r5 = ADD32(0, -0X9);
    after_1:
L_60005694:
    // 0x60005694: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005698: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x6000569C: jr          $ra
    // 0x600056A0: nop

    return;
    // 0x600056A0: nop

;}
RECOMP_FUNC void ovl_stage_world7_56A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600056A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600056A8: slti        $at, $a0, 0x63
    ctx->r1 = SIGNED(ctx->r4) < 0X63 ? 1 : 0;
    // 0x600056AC: bne         $at, $zero, L_600056D0
    if (ctx->r1 != 0) {
        // 0x600056B0: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_600056D0;
    }
    // 0x600056B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600056B4: addiu       $at, $zero, 0x63
    ctx->r1 = ADD32(0, 0X63);
    // 0x600056B8: beq         $a0, $at, L_60005970
    if (ctx->r4 == ctx->r1) {
        // 0x600056BC: addiu       $at, $zero, 0xFF
        ctx->r1 = ADD32(0, 0XFF);
            goto L_60005970;
    }
    // 0x600056BC: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x600056C0: beq         $a0, $at, L_6000597C
    if (ctx->r4 == ctx->r1) {
        // 0x600056C4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_6000597C;
    }
    // 0x600056C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600056C8: b           L_6000597C
    // 0x600056CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_6000597C;
    // 0x600056CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600056D0:
    // 0x600056D0: slti        $at, $a0, 0x61
    ctx->r1 = SIGNED(ctx->r4) < 0X61 ? 1 : 0;
    // 0x600056D4: bne         $at, $zero, L_600056EC
    if (ctx->r1 != 0) {
        // 0x600056D8: addiu       $at, $zero, 0x62
        ctx->r1 = ADD32(0, 0X62);
            goto L_600056EC;
    }
    // 0x600056D8: addiu       $at, $zero, 0x62
    ctx->r1 = ADD32(0, 0X62);
    // 0x600056DC: beq         $a0, $at, L_60005960
    if (ctx->r4 == ctx->r1) {
        // 0x600056E0: nop
    
            goto L_60005960;
    }
    // 0x600056E0: nop

    // 0x600056E4: b           L_6000597C
    // 0x600056E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_6000597C;
    // 0x600056E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600056EC:
    // 0x600056EC: slti        $at, $a0, 0x1F
    ctx->r1 = SIGNED(ctx->r4) < 0X1F ? 1 : 0;
    // 0x600056F0: bne         $at, $zero, L_60005708
    if (ctx->r1 != 0) {
        // 0x600056F4: addiu       $at, $zero, 0x60
        ctx->r1 = ADD32(0, 0X60);
            goto L_60005708;
    }
    // 0x600056F4: addiu       $at, $zero, 0x60
    ctx->r1 = ADD32(0, 0X60);
    // 0x600056F8: beq         $a0, $at, L_60005950
    if (ctx->r4 == ctx->r1) {
        // 0x600056FC: nop
    
            goto L_60005950;
    }
    // 0x600056FC: nop

    // 0x60005700: b           L_6000597C
    // 0x60005704: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_6000597C;
    // 0x60005704: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005708:
    // 0x60005708: sltiu       $at, $a0, 0x1F
    ctx->r1 = ctx->r4 < 0X1F ? 1 : 0;
    // 0x6000570C: beq         $at, $zero, L_60005978
    if (ctx->r1 == 0) {
        // 0x60005710: sll         $t6, $a0, 2
        ctx->r14 = S32(ctx->r4 << 2);
            goto L_60005978;
    }
    // 0x60005710: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x60005714: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60005718: addu        $at, $at, $t6
    gpr jr_addend_60005724 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x6000571C: lw          $t6, 0x5AC8($at)
    ctx->r14 = ADD32(ctx->r1, 0X5AC8);
    // 0x60005720: nop

    // 0x60005724: jr          $t6
    // 0x60005728: nop

    switch (jr_addend_60005724 >> 2) {
        case 0: goto L_6000572C; break;
        case 1: goto L_6000573C; break;
        case 2: goto L_6000574C; break;
        case 3: goto L_6000575C; break;
        case 4: goto L_6000576C; break;
        case 5: goto L_6000577C; break;
        case 6: goto L_6000578C; break;
        case 7: goto L_6000579C; break;
        case 8: goto L_600057AC; break;
        case 9: goto L_600057BC; break;
        case 10: goto L_600057CC; break;
        case 11: goto L_600057DC; break;
        case 12: goto L_600057EC; break;
        case 13: goto L_600057FC; break;
        case 14: goto L_6000580C; break;
        case 15: goto L_6000581C; break;
        case 16: goto L_6000582C; break;
        case 17: goto L_6000583C; break;
        case 18: goto L_6000584C; break;
        case 19: goto L_6000585C; break;
        case 20: goto L_6000586C; break;
        case 21: goto L_6000587C; break;
        case 22: goto L_600058A4; break;
        case 23: goto L_600058CC; break;
        case 24: goto L_600058DC; break;
        case 25: goto L_600058EC; break;
        case 26: goto L_600058FC; break;
        case 27: goto L_6000590C; break;
        case 28: goto L_6000591C; break;
        case 29: goto L_6000592C; break;
        case 30: goto L_60005940; break;
        default: switch_error(__func__, 0x60005724, 0x60005AC8);
    }
    // 0x60005728: nop

L_6000572C:
    // 0x6000572C: jal         0x600031B0
    // 0x60005730: nop

    ovl_stage_world7_31B0(rdram, ctx);
        goto after_0;
    // 0x60005730: nop

    after_0:
    // 0x60005734: b           L_6000597C
    // 0x60005738: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_6000597C;
    // 0x60005738: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000573C:
    // 0x6000573C: jal         0x60003408
    // 0x60005740: nop

    ovl_stage_world7_3408(rdram, ctx);
        goto after_1;
    // 0x60005740: nop

    after_1:
    // 0x60005744: b           L_6000597C
    // 0x60005748: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_6000597C;
    // 0x60005748: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000574C:
    // 0x6000574C: jal         0x600035DC
    // 0x60005750: nop

    ovl_stage_world7_35DC(rdram, ctx);
        goto after_2;
    // 0x60005750: nop

    after_2:
    // 0x60005754: b           L_6000597C
    // 0x60005758: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_6000597C;
    // 0x60005758: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000575C:
    // 0x6000575C: jal         0x60003794
    // 0x60005760: nop

    ovl_stage_world7_3794(rdram, ctx);
        goto after_3;
    // 0x60005760: nop

    after_3:
    // 0x60005764: b           L_6000597C
    // 0x60005768: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_6000597C;
    // 0x60005768: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000576C:
    // 0x6000576C: jal         0x60003954
    // 0x60005770: nop

    ovl_stage_world7_3954(rdram, ctx);
        goto after_4;
    // 0x60005770: nop

    after_4:
    // 0x60005774: b           L_6000597C
    // 0x60005778: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_6000597C;
    // 0x60005778: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000577C:
    // 0x6000577C: jal         0x60003AB4
    // 0x60005780: nop

    ovl_stage_world7_3AB4(rdram, ctx);
        goto after_5;
    // 0x60005780: nop

    after_5:
    // 0x60005784: b           L_6000597C
    // 0x60005788: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_6000597C;
    // 0x60005788: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000578C:
    // 0x6000578C: jal         0x60003B0C
    // 0x60005790: nop

    ovl_stage_world7_3B0C(rdram, ctx);
        goto after_6;
    // 0x60005790: nop

    after_6:
    // 0x60005794: b           L_6000597C
    // 0x60005798: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_6000597C;
    // 0x60005798: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000579C:
    // 0x6000579C: jal         0x60003CE4
    // 0x600057A0: nop

    ovl_stage_world7_3CE4(rdram, ctx);
        goto after_7;
    // 0x600057A0: nop

    after_7:
    // 0x600057A4: b           L_6000597C
    // 0x600057A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_6000597C;
    // 0x600057A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600057AC:
    // 0x600057AC: jal         0x600032B0
    // 0x600057B0: nop

    ovl_stage_world7_32B0(rdram, ctx);
        goto after_8;
    // 0x600057B0: nop

    after_8:
    // 0x600057B4: b           L_6000597C
    // 0x600057B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_6000597C;
    // 0x600057B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600057BC:
    // 0x600057BC: jal         0x60003DF4
    // 0x600057C0: nop

    ovl_stage_world7_3DF4(rdram, ctx);
        goto after_9;
    // 0x600057C0: nop

    after_9:
    // 0x600057C4: b           L_6000597C
    // 0x600057C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_6000597C;
    // 0x600057C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600057CC:
    // 0x600057CC: jal         0x60004084
    // 0x600057D0: nop

    ovl_stage_world7_4084(rdram, ctx);
        goto after_10;
    // 0x600057D0: nop

    after_10:
    // 0x600057D4: b           L_6000597C
    // 0x600057D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_6000597C;
    // 0x600057D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600057DC:
    // 0x600057DC: jal         0x60002E84
    // 0x600057E0: nop

    ovl_stage_world7_2E84(rdram, ctx);
        goto after_11;
    // 0x600057E0: nop

    after_11:
    // 0x600057E4: b           L_6000597C
    // 0x600057E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_6000597C;
    // 0x600057E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600057EC:
    // 0x600057EC: jal         0x60004278
    // 0x600057F0: nop

    ovl_stage_world7_4278(rdram, ctx);
        goto after_12;
    // 0x600057F0: nop

    after_12:
    // 0x600057F4: b           L_6000597C
    // 0x600057F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_6000597C;
    // 0x600057F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600057FC:
    // 0x600057FC: jal         0x60004660
    // 0x60005800: nop

    ovl_stage_world7_4660(rdram, ctx);
        goto after_13;
    // 0x60005800: nop

    after_13:
    // 0x60005804: b           L_6000597C
    // 0x60005808: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_6000597C;
    // 0x60005808: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000580C:
    // 0x6000580C: jal         0x60004A50
    // 0x60005810: nop

    ovl_stage_world7_4A50(rdram, ctx);
        goto after_14;
    // 0x60005810: nop

    after_14:
    // 0x60005814: b           L_6000597C
    // 0x60005818: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_6000597C;
    // 0x60005818: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000581C:
    // 0x6000581C: jal         0x60004B7C
    // 0x60005820: nop

    ovl_stage_world7_4B7C(rdram, ctx);
        goto after_15;
    // 0x60005820: nop

    after_15:
    // 0x60005824: b           L_6000597C
    // 0x60005828: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_6000597C;
    // 0x60005828: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000582C:
    // 0x6000582C: jal         0x60004C24
    // 0x60005830: nop

    ovl_stage_world7_4C24(rdram, ctx);
        goto after_16;
    // 0x60005830: nop

    after_16:
    // 0x60005834: b           L_6000597C
    // 0x60005838: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_6000597C;
    // 0x60005838: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000583C:
    // 0x6000583C: jal         0x60004C5C
    // 0x60005840: nop

    ovl_stage_world7_4C5C(rdram, ctx);
        goto after_17;
    // 0x60005840: nop

    after_17:
    // 0x60005844: b           L_6000597C
    // 0x60005848: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_6000597C;
    // 0x60005848: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000584C:
    // 0x6000584C: jal         0x60004EBC
    // 0x60005850: nop

    ovl_stage_world7_4EBC(rdram, ctx);
        goto after_18;
    // 0x60005850: nop

    after_18:
    // 0x60005854: b           L_6000597C
    // 0x60005858: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_6000597C;
    // 0x60005858: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000585C:
    // 0x6000585C: jal         0x6000505C
    // 0x60005860: nop

    ovl_stage_world7_505C(rdram, ctx);
        goto after_19;
    // 0x60005860: nop

    after_19:
    // 0x60005864: b           L_6000597C
    // 0x60005868: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_6000597C;
    // 0x60005868: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000586C:
    // 0x6000586C: jal         0x60005304
    // 0x60005870: nop

    ovl_stage_world7_5304(rdram, ctx);
        goto after_20;
    // 0x60005870: nop

    after_20:
    // 0x60005874: b           L_6000597C
    // 0x60005878: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_6000597C;
    // 0x60005878: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000587C:
    // 0x6000587C: jal         0x60000BB0
    // 0x60005880: addiu       $a0, $zero, 0x86
    ctx->r4 = ADD32(0, 0X86);
    ovl_stage_world7_BB0(rdram, ctx);
        goto after_21;
    // 0x60005880: addiu       $a0, $zero, 0x86
    ctx->r4 = ADD32(0, 0X86);
    after_21:
    // 0x60005884: bne         $v0, $zero, L_60005894
    if (ctx->r2 != 0) {
        // 0x60005888: nop
    
            goto L_60005894;
    }
    // 0x60005888: nop

    // 0x6000588C: jal         0x60001208
    // 0x60005890: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world7_1208(rdram, ctx);
        goto after_22;
    // 0x60005890: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_22:
L_60005894:
    // 0x60005894: jal         0x60000268
    // 0x60005898: nop

    ovl_stage_world7_268(rdram, ctx);
        goto after_23;
    // 0x60005898: nop

    after_23:
    // 0x6000589C: b           L_6000597C
    // 0x600058A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_6000597C;
    // 0x600058A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600058A4:
    // 0x600058A4: jal         0x60000DE4
    // 0x600058A8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world7_DE4(rdram, ctx);
        goto after_24;
    // 0x600058A8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_24:
    // 0x600058AC: jal         0x60000CC4
    // 0x600058B0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_stage_world7_CC4(rdram, ctx);
        goto after_25;
    // 0x600058B0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_25:
    // 0x600058B4: jal         0x60000A6C
    // 0x600058B8: nop

    ovl_stage_world7_A6C(rdram, ctx);
        goto after_26;
    // 0x600058B8: nop

    after_26:
    // 0x600058BC: jal         0x60000C7C
    // 0x600058C0: nop

    ovl_stage_world7_C7C(rdram, ctx);
        goto after_27;
    // 0x600058C0: nop

    after_27:
    // 0x600058C4: b           L_6000597C
    // 0x600058C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_6000597C;
    // 0x600058C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600058CC:
    // 0x600058CC: jal         0x60004CC4
    // 0x600058D0: nop

    ovl_stage_world7_4CC4(rdram, ctx);
        goto after_28;
    // 0x600058D0: nop

    after_28:
    // 0x600058D4: b           L_6000597C
    // 0x600058D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_6000597C;
    // 0x600058D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600058DC:
    // 0x600058DC: jal         0x6000559C
    // 0x600058E0: nop

    ovl_stage_world7_559C(rdram, ctx);
        goto after_29;
    // 0x600058E0: nop

    after_29:
    // 0x600058E4: b           L_6000597C
    // 0x600058E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_6000597C;
    // 0x600058E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600058EC:
    // 0x600058EC: jal         0x600055E0
    // 0x600058F0: nop

    ovl_stage_world7_55E0(rdram, ctx);
        goto after_30;
    // 0x600058F0: nop

    after_30:
    // 0x600058F4: b           L_6000597C
    // 0x600058F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_6000597C;
    // 0x600058F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600058FC:
    // 0x600058FC: jal         0x60005630
    // 0x60005900: nop

    ovl_stage_world7_5630(rdram, ctx);
        goto after_31;
    // 0x60005900: nop

    after_31:
    // 0x60005904: b           L_6000597C
    // 0x60005908: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_6000597C;
    // 0x60005908: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000590C:
    // 0x6000590C: jal         0x6000566C
    // 0x60005910: nop

    ovl_stage_world7_566C(rdram, ctx);
        goto after_32;
    // 0x60005910: nop

    after_32:
    // 0x60005914: b           L_6000597C
    // 0x60005918: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_6000597C;
    // 0x60005918: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000591C:
    // 0x6000591C: jal         0x60000268
    // 0x60005920: nop

    ovl_stage_world7_268(rdram, ctx);
        goto after_33;
    // 0x60005920: nop

    after_33:
    // 0x60005924: b           L_6000597C
    // 0x60005928: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_6000597C;
    // 0x60005928: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000592C:
    // 0x6000592C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x60005930: jal         0x60000F04
    // 0x60005934: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world7_F04(rdram, ctx);
        goto after_34;
    // 0x60005934: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_34:
    // 0x60005938: b           L_6000597C
    // 0x6000593C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_6000597C;
    // 0x6000593C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005940:
    // 0x60005940: jal         0x60004F1C
    // 0x60005944: nop

    ovl_stage_world7_4F1C(rdram, ctx);
        goto after_35;
    // 0x60005944: nop

    after_35:
    // 0x60005948: b           L_6000597C
    // 0x6000594C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_6000597C;
    // 0x6000594C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005950:
    // 0x60005950: jal         0x60005558
    // 0x60005954: nop

    ovl_stage_world7_5558(rdram, ctx);
        goto after_36;
    // 0x60005954: nop

    after_36:
    // 0x60005958: b           L_6000597C
    // 0x6000595C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_6000597C;
    // 0x6000595C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005960:
    // 0x60005960: jal         0x60005488
    // 0x60005964: nop

    ovl_stage_world7_5488(rdram, ctx);
        goto after_37;
    // 0x60005964: nop

    after_37:
    // 0x60005968: b           L_6000597C
    // 0x6000596C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_6000597C;
    // 0x6000596C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005970:
    // 0x60005970: jal         0x60000EE0
    // 0x60005974: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world7_EE0(rdram, ctx);
        goto after_38;
    // 0x60005974: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_38:
L_60005978:
    // 0x60005978: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000597C:
    // 0x6000597C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60005980: jr          $ra
    // 0x60005984: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x60005984: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void ovl_stage_world2_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000000: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60000004: jr          $ra
    // 0x60000008: addiu       $v0, $v0, 0x56B8
    ctx->r2 = ADD32(ctx->r2, 0X56B8);
    return;
    // 0x60000008: addiu       $v0, $v0, 0x56B8
    ctx->r2 = ADD32(ctx->r2, 0X56B8);
    // 0x6000000C: nop

;}
RECOMP_FUNC void ovl_stage_world2_10(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world2_1C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world2_28(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world2_34(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world2_40(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world2_4C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world2_58(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world2_64(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world2_70(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world2_7C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world2_88(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world2_94(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world2_A0(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world2_AC(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world2_B8(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world2_C4(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world2_D0(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world2_DC(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world2_E8(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world2_F4(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world2_100(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world2_10C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world2_118(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world2_124(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world2_130(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world2_13C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world2_148(uint8_t* rdram, recomp_context* ctx) {
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
