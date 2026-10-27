#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_stage_world2_38C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600038C0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x600038C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600038C8: jal         0x60000C1C
    // 0x600038CC: nop

    ovl_stage_world2_C1C(rdram, ctx);
        goto after_0;
    // 0x600038CC: nop

    after_0:
    // 0x600038D0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x600038D4: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x600038D8: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x600038DC: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x600038E0: jal         0x60000A6C
    // 0x600038E4: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    ovl_stage_world2_A6C(rdram, ctx);
        goto after_1;
    // 0x600038E4: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    after_1:
    // 0x600038E8: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x600038EC: jal         0x60000E68
    // 0x600038F0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_stage_world2_E68(rdram, ctx);
        goto after_2;
    // 0x600038F0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x600038F4: jal         0x600009D0
    // 0x600038F8: nop

    ovl_stage_world2_9D0(rdram, ctx);
        goto after_3;
    // 0x600038F8: nop

    after_3:
    // 0x600038FC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60003900: jal         0x60002738
    // 0x60003904: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world2_2738(rdram, ctx);
        goto after_4;
    // 0x60003904: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x60003908: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x6000390C: jal         0x60002738
    // 0x60003910: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world2_2738(rdram, ctx);
        goto after_5;
    // 0x60003910: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x60003914: jal         0x60000DE4
    // 0x60003918: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world2_DE4(rdram, ctx);
        goto after_6;
    // 0x60003918: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_6:
    // 0x6000391C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60003920: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x60003924: jal         0x600006C4
    // 0x60003928: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world2_6C4(rdram, ctx);
        goto after_7;
    // 0x60003928: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_7:
    // 0x6000392C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x60003930: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60003934: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x60003938: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x6000393C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x60003940: jal         0x60000DE4
    // 0x60003944: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    ovl_stage_world2_DE4(rdram, ctx);
        goto after_8;
    // 0x60003944: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    after_8:
    // 0x60003948: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x6000394C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x60003950: jal         0x600006C4
    // 0x60003954: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world2_6C4(rdram, ctx);
        goto after_9;
    // 0x60003954: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_9:
    // 0x60003958: jal         0x600009C4
    // 0x6000395C: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    ovl_stage_world2_9C4(rdram, ctx);
        goto after_10;
    // 0x6000395C: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    after_10:
    // 0x60003960: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60003964: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x60003968: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x6000396C: jal         0x60000D18
    // 0x60003970: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    ovl_stage_world2_D18(rdram, ctx);
        goto after_11;
    // 0x60003970: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    after_11:
    // 0x60003974: jal         0x600009C4
    // 0x60003978: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    ovl_stage_world2_9C4(rdram, ctx);
        goto after_12;
    // 0x60003978: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_12:
    // 0x6000397C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60003980: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x60003984: jal         0x600027BC
    // 0x60003988: lui         $a2, 0x4316
    ctx->r6 = S32(0X4316 << 16);
    ovl_stage_world2_27BC(rdram, ctx);
        goto after_13;
    // 0x60003988: lui         $a2, 0x4316
    ctx->r6 = S32(0X4316 << 16);
    after_13:
    // 0x6000398C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x60003990: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x60003994: jal         0x600027BC
    // 0x60003998: lui         $a2, 0x4316
    ctx->r6 = S32(0X4316 << 16);
    ovl_stage_world2_27BC(rdram, ctx);
        goto after_14;
    // 0x60003998: lui         $a2, 0x4316
    ctx->r6 = S32(0X4316 << 16);
    after_14:
    // 0x6000399C: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    // 0x600039A0: jal         0x600006D0
    // 0x600039A4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    ovl_stage_world2_6D0(rdram, ctx);
        goto after_15;
    // 0x600039A4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_15:
    // 0x600039A8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600039AC: jal         0x60002738
    // 0x600039B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world2_2738(rdram, ctx);
        goto after_16;
    // 0x600039B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_16:
    // 0x600039B4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x600039B8: jal         0x60002738
    // 0x600039BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world2_2738(rdram, ctx);
        goto after_17;
    // 0x600039BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_17:
    // 0x600039C0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600039C4: jal         0x60000A78
    // 0x600039C8: sw          $zero, 0x5D68($at)
    MEM_W(0X5D68, ctx->r1) = 0;
    ovl_stage_world2_A78(rdram, ctx);
        goto after_18;
    // 0x600039C8: sw          $zero, 0x5D68($at)
    MEM_W(0X5D68, ctx->r1) = 0;
    after_18:
    // 0x600039CC: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x600039D0: lui         $at, 0xFFFE
    ctx->r1 = S32(0XFFFE << 16);
    // 0x600039D4: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x600039D8: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x600039DC: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x600039E0: jal         0x600009AC
    // 0x600039E4: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    ovl_stage_world2_9AC(rdram, ctx);
        goto after_19;
    // 0x600039E4: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    after_19:
    // 0x600039E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600039EC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x600039F0: jr          $ra
    // 0x600039F4: nop

    return;
    // 0x600039F4: nop

;}
RECOMP_FUNC void ovl_stage_world2_39F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600039F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600039FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003A00: jal         0x60000C1C
    // 0x60003A04: nop

    ovl_stage_world2_C1C(rdram, ctx);
        goto after_0;
    // 0x60003A04: nop

    after_0:
    // 0x60003A08: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x60003A0C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x60003A10: bne         $v1, $at, L_60003A40
    if (ctx->r3 != ctx->r1) {
        // 0x60003A14: addiu       $a0, $zero, 0xB
        ctx->r4 = ADD32(0, 0XB);
            goto L_60003A40;
    }
    // 0x60003A14: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    // 0x60003A18: jal         0x600006D0
    // 0x60003A1C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world2_6D0(rdram, ctx);
        goto after_1;
    // 0x60003A1C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x60003A20: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003A24: addiu       $a0, $a0, 0x38C0
    ctx->r4 = ADD32(ctx->r4, 0X38C0);
    // 0x60003A28: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60003A2C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60003A30: jal         0x60000994
    // 0x60003A34: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world2_994(rdram, ctx);
        goto after_2;
    // 0x60003A34: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x60003A38: b           L_60003A68
    // 0x60003A3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60003A68;
    // 0x60003A3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003A40:
    // 0x60003A40: bne         $v1, $zero, L_60003A68
    if (ctx->r3 != 0) {
        // 0x60003A44: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003A68;
    }
    // 0x60003A44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003A48: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x60003A4C: nop

    // 0x60003A50: andi        $t7, $t6, 0x800
    ctx->r15 = ctx->r14 & 0X800;
    // 0x60003A54: beq         $t7, $zero, L_60003A68
    if (ctx->r15 == 0) {
        // 0x60003A58: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003A68;
    }
    // 0x60003A58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003A5C: jal         0x60000EEC
    // 0x60003A60: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    ovl_stage_world2_EEC(rdram, ctx);
        goto after_3;
    // 0x60003A60: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_3:
    // 0x60003A64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003A68:
    // 0x60003A68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60003A6C: jr          $ra
    // 0x60003A70: nop

    return;
    // 0x60003A70: nop

;}
RECOMP_FUNC void ovl_stage_world2_3A74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003A74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60003A78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003A7C: jal         0x60000BB0
    // 0x60003A80: addiu       $a0, $zero, 0x193
    ctx->r4 = ADD32(0, 0X193);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_0;
    // 0x60003A80: addiu       $a0, $zero, 0x193
    ctx->r4 = ADD32(0, 0X193);
    after_0:
    // 0x60003A84: bne         $v0, $zero, L_60003A94
    if (ctx->r2 != 0) {
        // 0x60003A88: addiu       $a0, $zero, 0x9
        ctx->r4 = ADD32(0, 0X9);
            goto L_60003A94;
    }
    // 0x60003A88: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x60003A8C: jal         0x60000E68
    // 0x60003A90: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    ovl_stage_world2_E68(rdram, ctx);
        goto after_1;
    // 0x60003A90: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    after_1:
L_60003A94:
    // 0x60003A94: jal         0x60000BB0
    // 0x60003A98: addiu       $a0, $zero, 0x194
    ctx->r4 = ADD32(0, 0X194);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_2;
    // 0x60003A98: addiu       $a0, $zero, 0x194
    ctx->r4 = ADD32(0, 0X194);
    after_2:
    // 0x60003A9C: bne         $v0, $zero, L_60003AAC
    if (ctx->r2 != 0) {
        // 0x60003AA0: addiu       $a0, $zero, 0xA
        ctx->r4 = ADD32(0, 0XA);
            goto L_60003AAC;
    }
    // 0x60003AA0: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x60003AA4: jal         0x60000E68
    // 0x60003AA8: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    ovl_stage_world2_E68(rdram, ctx);
        goto after_3;
    // 0x60003AA8: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    after_3:
L_60003AAC:
    // 0x60003AAC: jal         0x60000BB0
    // 0x60003AB0: addiu       $a0, $zero, 0x190
    ctx->r4 = ADD32(0, 0X190);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_4;
    // 0x60003AB0: addiu       $a0, $zero, 0x190
    ctx->r4 = ADD32(0, 0X190);
    after_4:
    // 0x60003AB4: bne         $v0, $zero, L_60003AC4
    if (ctx->r2 != 0) {
        // 0x60003AB8: addiu       $a0, $zero, 0x7
        ctx->r4 = ADD32(0, 0X7);
            goto L_60003AC4;
    }
    // 0x60003AB8: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x60003ABC: jal         0x60000E68
    // 0x60003AC0: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    ovl_stage_world2_E68(rdram, ctx);
        goto after_5;
    // 0x60003AC0: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    after_5:
L_60003AC4:
    // 0x60003AC4: jal         0x60000BB0
    // 0x60003AC8: addiu       $a0, $zero, 0x192
    ctx->r4 = ADD32(0, 0X192);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_6;
    // 0x60003AC8: addiu       $a0, $zero, 0x192
    ctx->r4 = ADD32(0, 0X192);
    after_6:
    // 0x60003ACC: bne         $v0, $zero, L_60003ADC
    if (ctx->r2 != 0) {
        // 0x60003AD0: addiu       $a0, $zero, 0x8
        ctx->r4 = ADD32(0, 0X8);
            goto L_60003ADC;
    }
    // 0x60003AD0: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x60003AD4: jal         0x60000E68
    // 0x60003AD8: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    ovl_stage_world2_E68(rdram, ctx);
        goto after_7;
    // 0x60003AD8: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    after_7:
L_60003ADC:
    // 0x60003ADC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003AE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60003AE4: jr          $ra
    // 0x60003AE8: nop

    return;
    // 0x60003AE8: nop

;}
RECOMP_FUNC void ovl_stage_world2_3AEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003AEC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x60003AF0: lui         $t6, 0x6000
    ctx->r14 = S32(0X6000 << 16);
    // 0x60003AF4: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x60003AF8: addiu       $t6, $t6, 0x5D70
    ctx->r14 = ADD32(ctx->r14, 0X5D70);
    // 0x60003AFC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60003B00: sw          $s3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r19;
    // 0x60003B04: sw          $s2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r18;
    // 0x60003B08: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x60003B0C: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x60003B10: swc1        $f25, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x60003B14: swc1        $f24, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f24.u32l;
    // 0x60003B18: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x60003B1C: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x60003B20: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x60003B24: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x60003B28: sw          $t6, 0x5DB0($at)
    MEM_W(0X5DB0, ctx->r1) = ctx->r14;
    // 0x60003B2C: jal         0x60000E74
    // 0x60003B30: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_stage_world2_E74(rdram, ctx);
        goto after_0;
    // 0x60003B30: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_0:
    // 0x60003B34: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x60003B38: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60003B3C: swc1        $f22, 0x5D70($at)
    MEM_W(0X5D70, ctx->r1) = ctx->f22.u32l;
    // 0x60003B40: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60003B44: swc1        $f22, 0x5D78($at)
    MEM_W(0X5D78, ctx->r1) = ctx->f22.u32l;
    // 0x60003B48: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60003B4C: swc1        $f22, 0x5D80($at)
    MEM_W(0X5D80, ctx->r1) = ctx->f22.u32l;
    // 0x60003B50: swc1        $f22, 0x5D84($at)
    MEM_W(0X5D84, ctx->r1) = ctx->f22.u32l;
    // 0x60003B54: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60003B58: swc1        $f22, 0x5D88($at)
    MEM_W(0X5D88, ctx->r1) = ctx->f22.u32l;
    // 0x60003B5C: swc1        $f22, 0x5D8C($at)
    MEM_W(0X5D8C, ctx->r1) = ctx->f22.u32l;
    // 0x60003B60: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60003B64: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x60003B68: sw          $t7, 0x5DA8($at)
    MEM_W(0X5DA8, ctx->r1) = ctx->r15;
    // 0x60003B6C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60003B70: swc1        $f22, 0x5D90($at)
    MEM_W(0X5D90, ctx->r1) = ctx->f22.u32l;
    // 0x60003B74: swc1        $f22, 0x5D94($at)
    MEM_W(0X5D94, ctx->r1) = ctx->f22.u32l;
    // 0x60003B78: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60003B7C: swc1        $f22, 0x5D98($at)
    MEM_W(0X5D98, ctx->r1) = ctx->f22.u32l;
    // 0x60003B80: swc1        $f22, 0x5D9C($at)
    MEM_W(0X5D9C, ctx->r1) = ctx->f22.u32l;
    // 0x60003B84: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60003B88: swc1        $f22, 0x5DA0($at)
    MEM_W(0X5DA0, ctx->r1) = ctx->f22.u32l;
    // 0x60003B8C: swc1        $f22, 0x5DA4($at)
    MEM_W(0X5DA4, ctx->r1) = ctx->f22.u32l;
    // 0x60003B90: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x60003B94: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x60003B98: lui         $at, 0x410C
    ctx->r1 = S32(0X410C << 16);
    // 0x60003B9C: lui         $s1, 0x6000
    ctx->r17 = S32(0X6000 << 16);
    // 0x60003BA0: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x60003BA4: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x60003BA8: addiu       $s1, $s1, 0x5DB0
    ctx->r17 = ADD32(ctx->r17, 0X5DB0);
    // 0x60003BAC: addiu       $s3, $zero, 0x50
    ctx->r19 = ADD32(0, 0X50);
L_60003BB0:
    // 0x60003BB0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60003BB4: swc1        $f22, 0x5D74($at)
    MEM_W(0X5D74, ctx->r1) = ctx->f22.u32l;
    // 0x60003BB8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60003BBC: swc1        $f20, 0x5D7C($at)
    MEM_W(0X5D7C, ctx->r1) = ctx->f20.u32l;
    // 0x60003BC0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60003BC4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_60003BC8:
    // 0x60003BC8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x60003BCC: jal         0x600006C4
    // 0x60003BD0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world2_6C4(rdram, ctx);
        goto after_1;
    // 0x60003BD0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_1:
    // 0x60003BD4: jal         0x600009D0
    // 0x60003BD8: nop

    ovl_stage_world2_9D0(rdram, ctx);
        goto after_2;
    // 0x60003BD8: nop

    after_2:
    // 0x60003BDC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60003BE0: slti        $at, $s0, 0x50
    ctx->r1 = SIGNED(ctx->r16) < 0X50 ? 1 : 0;
    // 0x60003BE4: bne         $at, $zero, L_60003BC8
    if (ctx->r1 != 0) {
        // 0x60003BE8: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_60003BC8;
    }
    // 0x60003BE8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x60003BEC: jal         0x600009C4
    // 0x60003BF0: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_stage_world2_9C4(rdram, ctx);
        goto after_3;
    // 0x60003BF0: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_3:
    // 0x60003BF4: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60003BF8: swc1        $f24, 0x5D74($at)
    MEM_W(0X5D74, ctx->r1) = ctx->f24.u32l;
    // 0x60003BFC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60003C00: swc1        $f20, 0x5D7C($at)
    MEM_W(0X5D7C, ctx->r1) = ctx->f20.u32l;
    // 0x60003C04: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60003C08: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_60003C0C:
    // 0x60003C0C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x60003C10: jal         0x600006C4
    // 0x60003C14: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world2_6C4(rdram, ctx);
        goto after_4;
    // 0x60003C14: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_4:
    // 0x60003C18: jal         0x600009D0
    // 0x60003C1C: nop

    ovl_stage_world2_9D0(rdram, ctx);
        goto after_5;
    // 0x60003C1C: nop

    after_5:
    // 0x60003C20: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60003C24: bne         $s0, $s3, L_60003C0C
    if (ctx->r16 != ctx->r19) {
        // 0x60003C28: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_60003C0C;
    }
    // 0x60003C28: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x60003C2C: jal         0x600009C4
    // 0x60003C30: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_stage_world2_9C4(rdram, ctx);
        goto after_6;
    // 0x60003C30: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_6:
    // 0x60003C34: b           L_60003BB0
    // 0x60003C38: nop

        goto L_60003BB0;
    // 0x60003C38: nop

    // 0x60003C3C: nop

    // 0x60003C40: nop

    // 0x60003C44: nop

    // 0x60003C48: nop

    // 0x60003C4C: nop

    // 0x60003C50: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x60003C54: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x60003C58: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x60003C5C: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x60003C60: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x60003C64: lwc1        $f25, 0x20($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x60003C68: lwc1        $f24, 0x24($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X24);
    // 0x60003C6C: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x60003C70: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x60003C74: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x60003C78: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x60003C7C: jr          $ra
    // 0x60003C80: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x60003C80: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_stage_world2_3C84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003C84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60003C88: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003C8C: jal         0x60000C1C
    // 0x60003C90: nop

    ovl_stage_world2_C1C(rdram, ctx);
        goto after_0;
    // 0x60003C90: nop

    after_0:
    // 0x60003C94: lw          $t6, 0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC);
    // 0x60003C98: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x60003C9C: bne         $t6, $at, L_60003CAC
    if (ctx->r14 != ctx->r1) {
        // 0x60003CA0: nop
    
            goto L_60003CAC;
    }
    // 0x60003CA0: nop

    // 0x60003CA4: jal         0x6000025C
    // 0x60003CA8: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    ovl_stage_world2_25C(rdram, ctx);
        goto after_1;
    // 0x60003CA8: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_1:
L_60003CAC:
    // 0x60003CAC: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003CB0: addiu       $a0, $a0, 0x3AEC
    ctx->r4 = ADD32(ctx->r4, 0X3AEC);
    // 0x60003CB4: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60003CB8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60003CBC: jal         0x60000994
    // 0x60003CC0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world2_994(rdram, ctx);
        goto after_2;
    // 0x60003CC0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x60003CC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003CC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60003CCC: jr          $ra
    // 0x60003CD0: nop

    return;
    // 0x60003CD0: nop

;}
RECOMP_FUNC void ovl_stage_world2_3CD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003CD4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60003CD8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003CDC: jal         0x60000B98
    // 0x60003CE0: addiu       $a0, $zero, 0x81
    ctx->r4 = ADD32(0, 0X81);
    ovl_stage_world2_B98(rdram, ctx);
        goto after_0;
    // 0x60003CE0: addiu       $a0, $zero, 0x81
    ctx->r4 = ADD32(0, 0X81);
    after_0:
    // 0x60003CE4: jal         0x60000C7C
    // 0x60003CE8: nop

    ovl_stage_world2_C7C(rdram, ctx);
        goto after_1;
    // 0x60003CE8: nop

    after_1:
    // 0x60003CEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003CF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60003CF4: jr          $ra
    // 0x60003CF8: nop

    return;
    // 0x60003CF8: nop

;}
RECOMP_FUNC void ovl_stage_world2_3CFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003CFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60003D00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003D04: jal         0x600009C4
    // 0x60003D08: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_stage_world2_9C4(rdram, ctx);
        goto after_0;
    // 0x60003D08: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_0:
    // 0x60003D0C: jal         0x60000BA4
    // 0x60003D10: addiu       $a0, $zero, 0x111
    ctx->r4 = ADD32(0, 0X111);
    ovl_stage_world2_BA4(rdram, ctx);
        goto after_1;
    // 0x60003D10: addiu       $a0, $zero, 0x111
    ctx->r4 = ADD32(0, 0X111);
    after_1:
    // 0x60003D14: jal         0x600009AC
    // 0x60003D18: nop

    ovl_stage_world2_9AC(rdram, ctx);
        goto after_2;
    // 0x60003D18: nop

    after_2:
    // 0x60003D1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003D20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60003D24: jr          $ra
    // 0x60003D28: nop

    return;
    // 0x60003D28: nop

;}
RECOMP_FUNC void ovl_stage_world2_3D2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003D2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60003D30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003D34: jal         0x600009C4
    // 0x60003D38: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_stage_world2_9C4(rdram, ctx);
        goto after_0;
    // 0x60003D38: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_0:
    // 0x60003D3C: jal         0x60000BA4
    // 0x60003D40: addiu       $a0, $zero, 0x112
    ctx->r4 = ADD32(0, 0X112);
    ovl_stage_world2_BA4(rdram, ctx);
        goto after_1;
    // 0x60003D40: addiu       $a0, $zero, 0x112
    ctx->r4 = ADD32(0, 0X112);
    after_1:
    // 0x60003D44: jal         0x600009AC
    // 0x60003D48: nop

    ovl_stage_world2_9AC(rdram, ctx);
        goto after_2;
    // 0x60003D48: nop

    after_2:
    // 0x60003D4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003D50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60003D54: jr          $ra
    // 0x60003D58: nop

    return;
    // 0x60003D58: nop

;}
RECOMP_FUNC void ovl_stage_world2_3D5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003D5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60003D60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003D64: jal         0x60000BB0
    // 0x60003D68: addiu       $a0, $zero, 0x111
    ctx->r4 = ADD32(0, 0X111);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_0;
    // 0x60003D68: addiu       $a0, $zero, 0x111
    ctx->r4 = ADD32(0, 0X111);
    after_0:
    // 0x60003D6C: bne         $v0, $zero, L_60003E00
    if (ctx->r2 != 0) {
        // 0x60003D70: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003E00;
    }
    // 0x60003D70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003D74: jal         0x60000BB0
    // 0x60003D78: addiu       $a0, $zero, 0x110
    ctx->r4 = ADD32(0, 0X110);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_1;
    // 0x60003D78: addiu       $a0, $zero, 0x110
    ctx->r4 = ADD32(0, 0X110);
    after_1:
    // 0x60003D7C: bne         $v0, $zero, L_60003DC0
    if (ctx->r2 != 0) {
        // 0x60003D80: nop
    
            goto L_60003DC0;
    }
    // 0x60003D80: nop

    // 0x60003D84: jal         0x60000B98
    // 0x60003D88: addiu       $a0, $zero, 0x111
    ctx->r4 = ADD32(0, 0X111);
    ovl_stage_world2_B98(rdram, ctx);
        goto after_2;
    // 0x60003D88: addiu       $a0, $zero, 0x111
    ctx->r4 = ADD32(0, 0X111);
    after_2:
    // 0x60003D8C: jal         0x60000B98
    // 0x60003D90: addiu       $a0, $zero, 0x110
    ctx->r4 = ADD32(0, 0X110);
    ovl_stage_world2_B98(rdram, ctx);
        goto after_3;
    // 0x60003D90: addiu       $a0, $zero, 0x110
    ctx->r4 = ADD32(0, 0X110);
    after_3:
    // 0x60003D94: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003D98: addiu       $a0, $a0, 0x3CFC
    ctx->r4 = ADD32(ctx->r4, 0X3CFC);
    // 0x60003D9C: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60003DA0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60003DA4: jal         0x60000994
    // 0x60003DA8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world2_994(rdram, ctx);
        goto after_4;
    // 0x60003DA8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x60003DAC: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x60003DB0: jal         0x60000E68
    // 0x60003DB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world2_E68(rdram, ctx);
        goto after_5;
    // 0x60003DB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x60003DB8: b           L_60003E00
    // 0x60003DBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60003E00;
    // 0x60003DBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003DC0:
    // 0x60003DC0: jal         0x60000BB0
    // 0x60003DC4: addiu       $a0, $zero, 0x18C
    ctx->r4 = ADD32(0, 0X18C);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_6;
    // 0x60003DC4: addiu       $a0, $zero, 0x18C
    ctx->r4 = ADD32(0, 0X18C);
    after_6:
    // 0x60003DC8: bne         $v0, $zero, L_60003E00
    if (ctx->r2 != 0) {
        // 0x60003DCC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003E00;
    }
    // 0x60003DCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003DD0: jal         0x60000B98
    // 0x60003DD4: addiu       $a0, $zero, 0x18C
    ctx->r4 = ADD32(0, 0X18C);
    ovl_stage_world2_B98(rdram, ctx);
        goto after_7;
    // 0x60003DD4: addiu       $a0, $zero, 0x18C
    ctx->r4 = ADD32(0, 0X18C);
    after_7:
    // 0x60003DD8: jal         0x60000BB0
    // 0x60003DDC: addiu       $a0, $zero, 0x81
    ctx->r4 = ADD32(0, 0X81);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_8;
    // 0x60003DDC: addiu       $a0, $zero, 0x81
    ctx->r4 = ADD32(0, 0X81);
    after_8:
    // 0x60003DE0: bne         $v0, $zero, L_60003DF4
    if (ctx->r2 != 0) {
        // 0x60003DE4: addiu       $a0, $zero, 0x9
        ctx->r4 = ADD32(0, 0X9);
            goto L_60003DF4;
    }
    // 0x60003DE4: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x60003DE8: jal         0x60000A60
    // 0x60003DEC: addiu       $a0, $zero, 0xA50
    ctx->r4 = ADD32(0, 0XA50);
    ovl_stage_world2_A60(rdram, ctx);
        goto after_9;
    // 0x60003DEC: addiu       $a0, $zero, 0xA50
    ctx->r4 = ADD32(0, 0XA50);
    after_9:
    // 0x60003DF0: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
L_60003DF4:
    // 0x60003DF4: jal         0x60000E68
    // 0x60003DF8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world2_E68(rdram, ctx);
        goto after_10;
    // 0x60003DF8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_10:
    // 0x60003DFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003E00:
    // 0x60003E00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60003E04: jr          $ra
    // 0x60003E08: nop

    return;
    // 0x60003E08: nop

;}
RECOMP_FUNC void ovl_stage_world2_3E0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003E0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60003E10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003E14: jal         0x60000BB0
    // 0x60003E18: addiu       $a0, $zero, 0x112
    ctx->r4 = ADD32(0, 0X112);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_0;
    // 0x60003E18: addiu       $a0, $zero, 0x112
    ctx->r4 = ADD32(0, 0X112);
    after_0:
    // 0x60003E1C: bne         $v0, $zero, L_60003EB0
    if (ctx->r2 != 0) {
        // 0x60003E20: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003EB0;
    }
    // 0x60003E20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003E24: jal         0x60000BB0
    // 0x60003E28: addiu       $a0, $zero, 0x113
    ctx->r4 = ADD32(0, 0X113);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_1;
    // 0x60003E28: addiu       $a0, $zero, 0x113
    ctx->r4 = ADD32(0, 0X113);
    after_1:
    // 0x60003E2C: bne         $v0, $zero, L_60003E70
    if (ctx->r2 != 0) {
        // 0x60003E30: nop
    
            goto L_60003E70;
    }
    // 0x60003E30: nop

    // 0x60003E34: jal         0x60000B98
    // 0x60003E38: addiu       $a0, $zero, 0x112
    ctx->r4 = ADD32(0, 0X112);
    ovl_stage_world2_B98(rdram, ctx);
        goto after_2;
    // 0x60003E38: addiu       $a0, $zero, 0x112
    ctx->r4 = ADD32(0, 0X112);
    after_2:
    // 0x60003E3C: jal         0x60000B98
    // 0x60003E40: addiu       $a0, $zero, 0x113
    ctx->r4 = ADD32(0, 0X113);
    ovl_stage_world2_B98(rdram, ctx);
        goto after_3;
    // 0x60003E40: addiu       $a0, $zero, 0x113
    ctx->r4 = ADD32(0, 0X113);
    after_3:
    // 0x60003E44: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003E48: addiu       $a0, $a0, 0x3D2C
    ctx->r4 = ADD32(ctx->r4, 0X3D2C);
    // 0x60003E4C: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60003E50: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60003E54: jal         0x60000994
    // 0x60003E58: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world2_994(rdram, ctx);
        goto after_4;
    // 0x60003E58: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x60003E5C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x60003E60: jal         0x60000E68
    // 0x60003E64: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world2_E68(rdram, ctx);
        goto after_5;
    // 0x60003E64: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x60003E68: b           L_60003EB0
    // 0x60003E6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60003EB0;
    // 0x60003E6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003E70:
    // 0x60003E70: jal         0x60000BB0
    // 0x60003E74: addiu       $a0, $zero, 0x18B
    ctx->r4 = ADD32(0, 0X18B);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_6;
    // 0x60003E74: addiu       $a0, $zero, 0x18B
    ctx->r4 = ADD32(0, 0X18B);
    after_6:
    // 0x60003E78: bne         $v0, $zero, L_60003EB0
    if (ctx->r2 != 0) {
        // 0x60003E7C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003EB0;
    }
    // 0x60003E7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003E80: jal         0x60000B98
    // 0x60003E84: addiu       $a0, $zero, 0x18B
    ctx->r4 = ADD32(0, 0X18B);
    ovl_stage_world2_B98(rdram, ctx);
        goto after_7;
    // 0x60003E84: addiu       $a0, $zero, 0x18B
    ctx->r4 = ADD32(0, 0X18B);
    after_7:
    // 0x60003E88: jal         0x60000BB0
    // 0x60003E8C: addiu       $a0, $zero, 0x81
    ctx->r4 = ADD32(0, 0X81);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_8;
    // 0x60003E8C: addiu       $a0, $zero, 0x81
    ctx->r4 = ADD32(0, 0X81);
    after_8:
    // 0x60003E90: bne         $v0, $zero, L_60003EA4
    if (ctx->r2 != 0) {
        // 0x60003E94: addiu       $a0, $zero, 0xA
        ctx->r4 = ADD32(0, 0XA);
            goto L_60003EA4;
    }
    // 0x60003E94: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x60003E98: jal         0x60000A60
    // 0x60003E9C: addiu       $a0, $zero, 0xA50
    ctx->r4 = ADD32(0, 0XA50);
    ovl_stage_world2_A60(rdram, ctx);
        goto after_9;
    // 0x60003E9C: addiu       $a0, $zero, 0xA50
    ctx->r4 = ADD32(0, 0XA50);
    after_9:
    // 0x60003EA0: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
L_60003EA4:
    // 0x60003EA4: jal         0x60000E68
    // 0x60003EA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world2_E68(rdram, ctx);
        goto after_10;
    // 0x60003EA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_10:
    // 0x60003EAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003EB0:
    // 0x60003EB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60003EB4: jr          $ra
    // 0x60003EB8: nop

    return;
    // 0x60003EB8: nop

;}
RECOMP_FUNC void ovl_stage_world2_3EBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003EBC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60003EC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003EC4: jal         0x60000BB0
    // 0x60003EC8: addiu       $a0, $zero, 0x116
    ctx->r4 = ADD32(0, 0X116);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_0;
    // 0x60003EC8: addiu       $a0, $zero, 0x116
    ctx->r4 = ADD32(0, 0X116);
    after_0:
    // 0x60003ECC: bne         $v0, $zero, L_60003EFC
    if (ctx->r2 != 0) {
        // 0x60003ED0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003EFC;
    }
    // 0x60003ED0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003ED4: jal         0x60000B98
    // 0x60003ED8: addiu       $a0, $zero, 0x116
    ctx->r4 = ADD32(0, 0X116);
    ovl_stage_world2_B98(rdram, ctx);
        goto after_1;
    // 0x60003ED8: addiu       $a0, $zero, 0x116
    ctx->r4 = ADD32(0, 0X116);
    after_1:
    // 0x60003EDC: jal         0x60000EEC
    // 0x60003EE0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    ovl_stage_world2_EEC(rdram, ctx);
        goto after_2;
    // 0x60003EE0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_2:
    // 0x60003EE4: jal         0x60000E44
    // 0x60003EE8: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    ovl_stage_world2_E44(rdram, ctx);
        goto after_3;
    // 0x60003EE8: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    after_3:
    // 0x60003EEC: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    // 0x60003EF0: jal         0x60000E80
    // 0x60003EF4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_stage_world2_E80(rdram, ctx);
        goto after_4;
    // 0x60003EF4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_4:
    // 0x60003EF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003EFC:
    // 0x60003EFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60003F00: jr          $ra
    // 0x60003F04: nop

    return;
    // 0x60003F04: nop

;}
RECOMP_FUNC void ovl_stage_world2_3F08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003F08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60003F0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003F10: jal         0x60000EEC
    // 0x60003F14: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    ovl_stage_world2_EEC(rdram, ctx);
        goto after_0;
    // 0x60003F14: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    after_0:
    // 0x60003F18: jal         0x60000A60
    // 0x60003F1C: addiu       $a0, $zero, 0xA52
    ctx->r4 = ADD32(0, 0XA52);
    ovl_stage_world2_A60(rdram, ctx);
        goto after_1;
    // 0x60003F1C: addiu       $a0, $zero, 0xA52
    ctx->r4 = ADD32(0, 0XA52);
    after_1:
    // 0x60003F20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003F24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60003F28: jr          $ra
    // 0x60003F2C: nop

    return;
    // 0x60003F2C: nop

;}
RECOMP_FUNC void ovl_stage_world2_3F30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003F30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60003F34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003F38: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x60003F3C: jal         0x60000E80
    // 0x60003F40: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world2_E80(rdram, ctx);
        goto after_0;
    // 0x60003F40: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x60003F44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003F48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60003F4C: jr          $ra
    // 0x60003F50: nop

    return;
    // 0x60003F50: nop

;}
RECOMP_FUNC void ovl_stage_world2_3F54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003F54: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60003F58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003F5C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x60003F60: jal         0x60000E68
    // 0x60003F64: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world2_E68(rdram, ctx);
        goto after_0;
    // 0x60003F64: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x60003F68: jal         0x60000B98
    // 0x60003F6C: addiu       $a0, $zero, 0x18F
    ctx->r4 = ADD32(0, 0X18F);
    ovl_stage_world2_B98(rdram, ctx);
        goto after_1;
    // 0x60003F6C: addiu       $a0, $zero, 0x18F
    ctx->r4 = ADD32(0, 0X18F);
    after_1:
    // 0x60003F70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003F74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60003F78: jr          $ra
    // 0x60003F7C: nop

    return;
    // 0x60003F7C: nop

;}
RECOMP_FUNC void ovl_stage_world2_3F80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003F80: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x60003F84: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x60003F88: jal         0x600009D0
    // 0x60003F8C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    ovl_stage_world2_9D0(rdram, ctx);
        goto after_0;
    // 0x60003F8C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x60003F90: jal         0x60000C1C
    // 0x60003F94: nop

    ovl_stage_world2_C1C(rdram, ctx);
        goto after_1;
    // 0x60003F94: nop

    after_1:
    // 0x60003F98: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x60003F9C: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x60003FA0: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x60003FA4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x60003FA8: jal         0x60000A6C
    // 0x60003FAC: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    ovl_stage_world2_A6C(rdram, ctx);
        goto after_2;
    // 0x60003FAC: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    after_2:
    // 0x60003FB0: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x60003FB4: addiu       $at, $zero, 0x83D
    ctx->r1 = ADD32(0, 0X83D);
    // 0x60003FB8: bne         $v0, $at, L_60004080
    if (ctx->r2 != ctx->r1) {
        // 0x60003FBC: addiu       $at, $zero, 0x83E
        ctx->r1 = ADD32(0, 0X83E);
            goto L_60004080;
    }
    // 0x60003FBC: addiu       $at, $zero, 0x83E
    ctx->r1 = ADD32(0, 0X83E);
    // 0x60003FC0: lw          $t8, 0xC($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC);
    // 0x60003FC4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x60003FC8: bne         $t8, $at, L_6000407C
    if (ctx->r24 != ctx->r1) {
        // 0x60003FCC: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_6000407C;
    }
    // 0x60003FCC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60003FD0: jal         0x60002738
    // 0x60003FD4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world2_2738(rdram, ctx);
        goto after_3;
    // 0x60003FD4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x60003FD8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x60003FDC: jal         0x60002738
    // 0x60003FE0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world2_2738(rdram, ctx);
        goto after_4;
    // 0x60003FE0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x60003FE4: jal         0x60000DE4
    // 0x60003FE8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world2_DE4(rdram, ctx);
        goto after_5;
    // 0x60003FE8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_5:
    // 0x60003FEC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60003FF0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x60003FF4: jal         0x600006C4
    // 0x60003FF8: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    ovl_stage_world2_6C4(rdram, ctx);
        goto after_6;
    // 0x60003FF8: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    after_6:
    // 0x60003FFC: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x60004000: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60004004: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x60004008: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x6000400C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x60004010: jal         0x60000DE4
    // 0x60004014: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    ovl_stage_world2_DE4(rdram, ctx);
        goto after_7;
    // 0x60004014: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    after_7:
    // 0x60004018: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x6000401C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x60004020: jal         0x600006C4
    // 0x60004024: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    ovl_stage_world2_6C4(rdram, ctx);
        goto after_8;
    // 0x60004024: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    after_8:
    // 0x60004028: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x6000402C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x60004030: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x60004034: jal         0x60000D18
    // 0x60004038: addiu       $a3, $zero, 0x10E
    ctx->r7 = ADD32(0, 0X10E);
    ovl_stage_world2_D18(rdram, ctx);
        goto after_9;
    // 0x60004038: addiu       $a3, $zero, 0x10E
    ctx->r7 = ADD32(0, 0X10E);
    after_9:
    // 0x6000403C: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x60004040: jal         0x60000E68
    // 0x60004044: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world2_E68(rdram, ctx);
        goto after_10;
    // 0x60004044: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_10:
    // 0x60004048: jal         0x600009C4
    // 0x6000404C: addiu       $a0, $zero, 0x6E
    ctx->r4 = ADD32(0, 0X6E);
    ovl_stage_world2_9C4(rdram, ctx);
        goto after_11;
    // 0x6000404C: addiu       $a0, $zero, 0x6E
    ctx->r4 = ADD32(0, 0X6E);
    after_11:
    // 0x60004050: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x60004054: lui         $at, 0xFFFE
    ctx->r1 = S32(0XFFFE << 16);
    // 0x60004058: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x6000405C: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x60004060: sw          $t0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r8;
    // 0x60004064: addiu       $a0, $zero, 0x83E
    ctx->r4 = ADD32(0, 0X83E);
    // 0x60004068: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x6000406C: jal         0x60000C10
    // 0x60004070: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_stage_world2_C10(rdram, ctx);
        goto after_12;
    // 0x60004070: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_12:
    // 0x60004074: b           L_6000413C
    // 0x60004078: nop

        goto L_6000413C;
    // 0x60004078: nop

L_6000407C:
    // 0x6000407C: addiu       $at, $zero, 0x83E
    ctx->r1 = ADD32(0, 0X83E);
L_60004080:
    // 0x60004080: bne         $v0, $at, L_6000413C
    if (ctx->r2 != ctx->r1) {
        // 0x60004084: nop
    
            goto L_6000413C;
    }
    // 0x60004084: nop

    // 0x60004088: lw          $t1, 0xC($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC);
    // 0x6000408C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x60004090: bne         $t1, $at, L_6000413C
    if (ctx->r9 != ctx->r1) {
        // 0x60004094: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_6000413C;
    }
    // 0x60004094: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60004098: jal         0x60002738
    // 0x6000409C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world2_2738(rdram, ctx);
        goto after_13;
    // 0x6000409C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_13:
    // 0x600040A0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x600040A4: jal         0x60002738
    // 0x600040A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world2_2738(rdram, ctx);
        goto after_14;
    // 0x600040A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_14:
    // 0x600040AC: jal         0x60000DE4
    // 0x600040B0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world2_DE4(rdram, ctx);
        goto after_15;
    // 0x600040B0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_15:
    // 0x600040B4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600040B8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x600040BC: jal         0x600006C4
    // 0x600040C0: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    ovl_stage_world2_6C4(rdram, ctx);
        goto after_16;
    // 0x600040C0: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    after_16:
    // 0x600040C4: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x600040C8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x600040CC: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x600040D0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x600040D4: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x600040D8: jal         0x60000DE4
    // 0x600040DC: swc1        $f18, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f18.u32l;
    ovl_stage_world2_DE4(rdram, ctx);
        goto after_17;
    // 0x600040DC: swc1        $f18, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f18.u32l;
    after_17:
    // 0x600040E0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600040E4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x600040E8: jal         0x600006C4
    // 0x600040EC: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    ovl_stage_world2_6C4(rdram, ctx);
        goto after_18;
    // 0x600040EC: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    after_18:
    // 0x600040F0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600040F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x600040F8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x600040FC: jal         0x60000D18
    // 0x60004100: addiu       $a3, $zero, 0x10E
    ctx->r7 = ADD32(0, 0X10E);
    ovl_stage_world2_D18(rdram, ctx);
        goto after_19;
    // 0x60004100: addiu       $a3, $zero, 0x10E
    ctx->r7 = ADD32(0, 0X10E);
    after_19:
    // 0x60004104: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    // 0x60004108: jal         0x60000E68
    // 0x6000410C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world2_E68(rdram, ctx);
        goto after_20;
    // 0x6000410C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_20:
    // 0x60004110: jal         0x600009C4
    // 0x60004114: addiu       $a0, $zero, 0x6E
    ctx->r4 = ADD32(0, 0X6E);
    ovl_stage_world2_9C4(rdram, ctx);
        goto after_21;
    // 0x60004114: addiu       $a0, $zero, 0x6E
    ctx->r4 = ADD32(0, 0X6E);
    after_21:
    // 0x60004118: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x6000411C: lui         $at, 0xFFFE
    ctx->r1 = S32(0XFFFE << 16);
    // 0x60004120: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x60004124: and         $t3, $t2, $at
    ctx->r11 = ctx->r10 & ctx->r1;
    // 0x60004128: sw          $t3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r11;
    // 0x6000412C: addiu       $a0, $zero, 0x841
    ctx->r4 = ADD32(0, 0X841);
    // 0x60004130: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60004134: jal         0x60000C10
    // 0x60004138: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_stage_world2_C10(rdram, ctx);
        goto after_22;
    // 0x60004138: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_22:
L_6000413C:
    // 0x6000413C: jal         0x600009AC
    // 0x60004140: nop

    ovl_stage_world2_9AC(rdram, ctx);
        goto after_23;
    // 0x60004140: nop

    after_23:
    // 0x60004144: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x60004148: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x6000414C: jr          $ra
    // 0x60004150: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x60004150: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_stage_world2_4154(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004154: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x60004158: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x6000415C: jal         0x60000C1C
    // 0x60004160: nop

    ovl_stage_world2_C1C(rdram, ctx);
        goto after_0;
    // 0x60004160: nop

    after_0:
    // 0x60004164: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x60004168: jal         0x60000BB0
    // 0x6000416C: addiu       $a0, $zero, 0x18C
    ctx->r4 = ADD32(0, 0X18C);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_1;
    // 0x6000416C: addiu       $a0, $zero, 0x18C
    ctx->r4 = ADD32(0, 0X18C);
    after_1:
    // 0x60004170: bne         $v0, $zero, L_60004198
    if (ctx->r2 != 0) {
        // 0x60004174: nop
    
            goto L_60004198;
    }
    // 0x60004174: nop

    // 0x60004178: jal         0x60000BB0
    // 0x6000417C: addiu       $a0, $zero, 0x19E
    ctx->r4 = ADD32(0, 0X19E);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_2;
    // 0x6000417C: addiu       $a0, $zero, 0x19E
    ctx->r4 = ADD32(0, 0X19E);
    after_2:
    // 0x60004180: beq         $v0, $zero, L_60004198
    if (ctx->r2 == 0) {
        // 0x60004184: nop
    
            goto L_60004198;
    }
    // 0x60004184: nop

    // 0x60004188: jal         0x60000BB0
    // 0x6000418C: addiu       $a0, $zero, 0x19F
    ctx->r4 = ADD32(0, 0X19F);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_3;
    // 0x6000418C: addiu       $a0, $zero, 0x19F
    ctx->r4 = ADD32(0, 0X19F);
    after_3:
    // 0x60004190: beq         $v0, $zero, L_600041A0
    if (ctx->r2 == 0) {
        // 0x60004194: nop
    
            goto L_600041A0;
    }
    // 0x60004194: nop

L_60004198:
    // 0x60004198: jal         0x60000EEC
    // 0x6000419C: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    ovl_stage_world2_EEC(rdram, ctx);
        goto after_4;
    // 0x6000419C: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_4:
L_600041A0:
    // 0x600041A0: jal         0x60000BB0
    // 0x600041A4: addiu       $a0, $zero, 0x18B
    ctx->r4 = ADD32(0, 0X18B);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_5;
    // 0x600041A4: addiu       $a0, $zero, 0x18B
    ctx->r4 = ADD32(0, 0X18B);
    after_5:
    // 0x600041A8: bne         $v0, $zero, L_600041D0
    if (ctx->r2 != 0) {
        // 0x600041AC: nop
    
            goto L_600041D0;
    }
    // 0x600041AC: nop

    // 0x600041B0: jal         0x60000BB0
    // 0x600041B4: addiu       $a0, $zero, 0x19E
    ctx->r4 = ADD32(0, 0X19E);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_6;
    // 0x600041B4: addiu       $a0, $zero, 0x19E
    ctx->r4 = ADD32(0, 0X19E);
    after_6:
    // 0x600041B8: beq         $v0, $zero, L_600041D0
    if (ctx->r2 == 0) {
        // 0x600041BC: nop
    
            goto L_600041D0;
    }
    // 0x600041BC: nop

    // 0x600041C0: jal         0x60000BB0
    // 0x600041C4: addiu       $a0, $zero, 0x19F
    ctx->r4 = ADD32(0, 0X19F);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_7;
    // 0x600041C4: addiu       $a0, $zero, 0x19F
    ctx->r4 = ADD32(0, 0X19F);
    after_7:
    // 0x600041C8: beq         $v0, $zero, L_600041DC
    if (ctx->r2 == 0) {
        // 0x600041CC: lw          $v1, 0x1C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X1C);
            goto L_600041DC;
    }
    // 0x600041CC: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
L_600041D0:
    // 0x600041D0: jal         0x60000EEC
    // 0x600041D4: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    ovl_stage_world2_EEC(rdram, ctx);
        goto after_8;
    // 0x600041D4: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_8:
    // 0x600041D8: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
L_600041DC:
    // 0x600041DC: addiu       $at, $zero, 0x83D
    ctx->r1 = ADD32(0, 0X83D);
    // 0x600041E0: lw          $v0, 0x8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X8);
    // 0x600041E4: nop

    // 0x600041E8: bne         $v0, $at, L_60004200
    if (ctx->r2 != ctx->r1) {
        // 0x600041EC: addiu       $at, $zero, 0x83E
        ctx->r1 = ADD32(0, 0X83E);
            goto L_60004200;
    }
    // 0x600041EC: addiu       $at, $zero, 0x83E
    ctx->r1 = ADD32(0, 0X83E);
    // 0x600041F0: lw          $t6, 0xC($v1)
    ctx->r14 = MEM_W(ctx->r3, 0XC);
    // 0x600041F4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x600041F8: beq         $t6, $at, L_60004214
    if (ctx->r14 == ctx->r1) {
        // 0x600041FC: addiu       $at, $zero, 0x83E
        ctx->r1 = ADD32(0, 0X83E);
            goto L_60004214;
    }
    // 0x600041FC: addiu       $at, $zero, 0x83E
    ctx->r1 = ADD32(0, 0X83E);
L_60004200:
    // 0x60004200: bne         $v0, $at, L_60004230
    if (ctx->r2 != ctx->r1) {
        // 0x60004204: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60004230;
    }
    // 0x60004204: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004208: lw          $t7, 0xC($v1)
    ctx->r15 = MEM_W(ctx->r3, 0XC);
    // 0x6000420C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x60004210: bne         $t7, $at, L_6000422C
    if (ctx->r15 != ctx->r1) {
        // 0x60004214: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_6000422C;
    }
L_60004214:
    // 0x60004214: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60004218: addiu       $a0, $a0, 0x3F80
    ctx->r4 = ADD32(ctx->r4, 0X3F80);
    // 0x6000421C: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60004220: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60004224: jal         0x60000994
    // 0x60004228: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world2_994(rdram, ctx);
        goto after_9;
    // 0x60004228: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_9:
L_6000422C:
    // 0x6000422C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60004230:
    // 0x60004230: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x60004234: jr          $ra
    // 0x60004238: nop

    return;
    // 0x60004238: nop

;}
RECOMP_FUNC void ovl_stage_world2_423C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000423C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x60004240: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60004244: jal         0x60000C1C
    // 0x60004248: nop

    ovl_stage_world2_C1C(rdram, ctx);
        goto after_0;
    // 0x60004248: nop

    after_0:
    // 0x6000424C: jal         0x600009D0
    // 0x60004250: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    ovl_stage_world2_9D0(rdram, ctx);
        goto after_1;
    // 0x60004250: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_1:
    // 0x60004254: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x60004258: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x6000425C: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x60004260: nop

    // 0x60004264: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x60004268: jal         0x60000A6C
    // 0x6000426C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    ovl_stage_world2_A6C(rdram, ctx);
        goto after_2;
    // 0x6000426C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    after_2:
    // 0x60004270: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60004274: jal         0x60002738
    // 0x60004278: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world2_2738(rdram, ctx);
        goto after_3;
    // 0x60004278: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x6000427C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x60004280: jal         0x60002738
    // 0x60004284: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world2_2738(rdram, ctx);
        goto after_4;
    // 0x60004284: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x60004288: jal         0x60000B98
    // 0x6000428C: addiu       $a0, $zero, 0x198
    ctx->r4 = ADD32(0, 0X198);
    ovl_stage_world2_B98(rdram, ctx);
        goto after_5;
    // 0x6000428C: addiu       $a0, $zero, 0x198
    ctx->r4 = ADD32(0, 0X198);
    after_5:
    // 0x60004290: jal         0x60000DE4
    // 0x60004294: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world2_DE4(rdram, ctx);
        goto after_6;
    // 0x60004294: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_6:
    // 0x60004298: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x6000429C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x600042A0: jal         0x600006C4
    // 0x600042A4: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_stage_world2_6C4(rdram, ctx);
        goto after_7;
    // 0x600042A4: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_7:
    // 0x600042A8: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x600042AC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x600042B0: lw          $v1, 0xC($t8)
    ctx->r3 = MEM_W(ctx->r24, 0XC);
    // 0x600042B4: nop

    // 0x600042B8: bne         $v1, $at, L_600042EC
    if (ctx->r3 != ctx->r1) {
        // 0x600042BC: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_600042EC;
    }
    // 0x600042BC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x600042C0: jal         0x60000DE4
    // 0x600042C4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world2_DE4(rdram, ctx);
        goto after_8;
    // 0x600042C4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_8:
    // 0x600042C8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600042CC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x600042D0: jal         0x600006C4
    // 0x600042D4: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_stage_world2_6C4(rdram, ctx);
        goto after_9;
    // 0x600042D4: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_9:
    // 0x600042D8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x600042DC: nop

    // 0x600042E0: lw          $v1, 0xC($t9)
    ctx->r3 = MEM_W(ctx->r25, 0XC);
    // 0x600042E4: nop

    // 0x600042E8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_600042EC:
    // 0x600042EC: beq         $v1, $at, L_6000430C
    if (ctx->r3 == ctx->r1) {
        // 0x600042F0: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_6000430C;
    }
    // 0x600042F0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600042F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x600042F8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x600042FC: jal         0x60000D18
    // 0x60004300: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    ovl_stage_world2_D18(rdram, ctx);
        goto after_10;
    // 0x60004300: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    after_10:
    // 0x60004304: jal         0x60000244
    // 0x60004308: addiu       $a0, $zero, 0x136
    ctx->r4 = ADD32(0, 0X136);
    ovl_stage_world2_244(rdram, ctx);
        goto after_11;
    // 0x60004308: addiu       $a0, $zero, 0x136
    ctx->r4 = ADD32(0, 0X136);
    after_11:
L_6000430C:
    // 0x6000430C: jal         0x600009C4
    // 0x60004310: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    ovl_stage_world2_9C4(rdram, ctx);
        goto after_12;
    // 0x60004310: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    after_12:
    // 0x60004314: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x60004318: jal         0x60000E68
    // 0x6000431C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world2_E68(rdram, ctx);
        goto after_13;
    // 0x6000431C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_13:
    // 0x60004320: jal         0x600009C4
    // 0x60004324: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_stage_world2_9C4(rdram, ctx);
        goto after_14;
    // 0x60004324: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_14:
    // 0x60004328: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x6000432C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x60004330: lw          $t1, 0xC($t0)
    ctx->r9 = MEM_W(ctx->r8, 0XC);
    // 0x60004334: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60004338: bne         $t1, $at, L_600043A8
    if (ctx->r9 != ctx->r1) {
        // 0x6000433C: lui         $a1, 0x4334
        ctx->r5 = S32(0X4334 << 16);
            goto L_600043A8;
    }
    // 0x6000433C: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    // 0x60004340: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60004344: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x60004348: jal         0x600027BC
    // 0x6000434C: lui         $a2, 0x4396
    ctx->r6 = S32(0X4396 << 16);
    ovl_stage_world2_27BC(rdram, ctx);
        goto after_15;
    // 0x6000434C: lui         $a2, 0x4396
    ctx->r6 = S32(0X4396 << 16);
    after_15:
    // 0x60004350: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x60004354: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x60004358: jal         0x600027BC
    // 0x6000435C: lui         $a2, 0x4348
    ctx->r6 = S32(0X4348 << 16);
    ovl_stage_world2_27BC(rdram, ctx);
        goto after_16;
    // 0x6000435C: lui         $a2, 0x4348
    ctx->r6 = S32(0X4348 << 16);
    after_16:
    // 0x60004360: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x60004364: jal         0x60000E68
    // 0x60004368: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world2_E68(rdram, ctx);
        goto after_17;
    // 0x60004368: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_17:
    // 0x6000436C: jal         0x600009C4
    // 0x60004370: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_stage_world2_9C4(rdram, ctx);
        goto after_18;
    // 0x60004370: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_18:
    // 0x60004374: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60004378: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x6000437C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x60004380: jal         0x60000D18
    // 0x60004384: addiu       $a3, $zero, 0x96
    ctx->r7 = ADD32(0, 0X96);
    ovl_stage_world2_D18(rdram, ctx);
        goto after_19;
    // 0x60004384: addiu       $a3, $zero, 0x96
    ctx->r7 = ADD32(0, 0X96);
    after_19:
    // 0x60004388: addiu       $a0, $zero, 0x83C
    ctx->r4 = ADD32(0, 0X83C);
    // 0x6000438C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x60004390: jal         0x60000C10
    // 0x60004394: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_stage_world2_C10(rdram, ctx);
        goto after_20;
    // 0x60004394: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_20:
    // 0x60004398: jal         0x60000244
    // 0x6000439C: addiu       $a0, $zero, 0x135
    ctx->r4 = ADD32(0, 0X135);
    ovl_stage_world2_244(rdram, ctx);
        goto after_21;
    // 0x6000439C: addiu       $a0, $zero, 0x135
    ctx->r4 = ADD32(0, 0X135);
    after_21:
    // 0x600043A0: b           L_600043E8
    // 0x600043A4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
        goto L_600043E8;
    // 0x600043A4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
L_600043A8:
    // 0x600043A8: jal         0x600027BC
    // 0x600043AC: lui         $a2, 0x437A
    ctx->r6 = S32(0X437A << 16);
    ovl_stage_world2_27BC(rdram, ctx);
        goto after_22;
    // 0x600043AC: lui         $a2, 0x437A
    ctx->r6 = S32(0X437A << 16);
    after_22:
    // 0x600043B0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x600043B4: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    // 0x600043B8: jal         0x600027BC
    // 0x600043BC: lui         $a2, 0x4348
    ctx->r6 = S32(0X4348 << 16);
    ovl_stage_world2_27BC(rdram, ctx);
        goto after_23;
    // 0x600043BC: lui         $a2, 0x4348
    ctx->r6 = S32(0X4348 << 16);
    after_23:
    // 0x600043C0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x600043C4: jal         0x60000E68
    // 0x600043C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world2_E68(rdram, ctx);
        goto after_24;
    // 0x600043C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_24:
    // 0x600043CC: jal         0x600009C4
    // 0x600043D0: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_stage_world2_9C4(rdram, ctx);
        goto after_25;
    // 0x600043D0: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_25:
    // 0x600043D4: addiu       $a0, $zero, 0x842
    ctx->r4 = ADD32(0, 0X842);
    // 0x600043D8: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x600043DC: jal         0x60000C10
    // 0x600043E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_stage_world2_C10(rdram, ctx);
        goto after_26;
    // 0x600043E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_26:
    // 0x600043E4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
L_600043E8:
    // 0x600043E8: lui         $at, 0xFFFE
    ctx->r1 = S32(0XFFFE << 16);
    // 0x600043EC: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x600043F0: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x600043F4: and         $t4, $t3, $at
    ctx->r12 = ctx->r11 & ctx->r1;
    // 0x600043F8: jal         0x600009AC
    // 0x600043FC: sw          $t4, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r12;
    ovl_stage_world2_9AC(rdram, ctx);
        goto after_27;
    // 0x600043FC: sw          $t4, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r12;
    after_27:
    // 0x60004400: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004404: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x60004408: jr          $ra
    // 0x6000440C: nop

    return;
    // 0x6000440C: nop

;}
RECOMP_FUNC void ovl_stage_world2_4410(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004410: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60004414: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60004418: jal         0x60000C1C
    // 0x6000441C: nop

    ovl_stage_world2_C1C(rdram, ctx);
        goto after_0;
    // 0x6000441C: nop

    after_0:
    // 0x60004420: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x60004424: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x60004428: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x6000442C: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x60004430: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x60004434: addiu       $a0, $a0, 0x423C
    ctx->r4 = ADD32(ctx->r4, 0X423C);
    // 0x60004438: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x6000443C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60004440: jal         0x60000994
    // 0x60004444: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world2_994(rdram, ctx);
        goto after_1;
    // 0x60004444: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x60004448: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000444C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60004450: jr          $ra
    // 0x60004454: nop

    return;
    // 0x60004454: nop

;}
RECOMP_FUNC void ovl_stage_world2_4458(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004458: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x6000445C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x60004460: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x60004464: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x60004468: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x6000446C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x60004470: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x60004474: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60004478: addiu       $s1, $zero, 0x4
    ctx->r17 = ADD32(0, 0X4);
L_6000447C:
    // 0x6000447C: jal         0x60000E74
    // 0x60004480: addiu       $a0, $s0, 0x4
    ctx->r4 = ADD32(ctx->r16, 0X4);
    ovl_stage_world2_E74(rdram, ctx);
        goto after_0;
    // 0x60004480: addiu       $a0, $s0, 0x4
    ctx->r4 = ADD32(ctx->r16, 0X4);
    after_0:
    // 0x60004484: beq         $v0, $s2, L_60004498
    if (ctx->r2 == ctx->r18) {
        // 0x60004488: nop
    
            goto L_60004498;
    }
    // 0x60004488: nop

    // 0x6000448C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60004490: bne         $s0, $s1, L_6000447C
    if (ctx->r16 != ctx->r17) {
        // 0x60004494: nop
    
            goto L_6000447C;
    }
    // 0x60004494: nop

L_60004498:
    // 0x60004498: jal         0x60000BB0
    // 0x6000449C: addiu       $a0, $s0, 0x104
    ctx->r4 = ADD32(ctx->r16, 0X104);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_1;
    // 0x6000449C: addiu       $a0, $s0, 0x104
    ctx->r4 = ADD32(ctx->r16, 0X104);
    after_1:
    // 0x600044A0: beq         $v0, $zero, L_6000454C
    if (ctx->r2 == 0) {
        // 0x600044A4: addiu       $s1, $s0, 0x108
        ctx->r17 = ADD32(ctx->r16, 0X108);
            goto L_6000454C;
    }
    // 0x600044A4: addiu       $s1, $s0, 0x108
    ctx->r17 = ADD32(ctx->r16, 0X108);
    // 0x600044A8: jal         0x60000BB0
    // 0x600044AC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_2;
    // 0x600044AC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x600044B0: bne         $v0, $zero, L_60004550
    if (ctx->r2 != 0) {
        // 0x600044B4: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_60004550;
    }
    // 0x600044B4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x600044B8: jal         0x60000B98
    // 0x600044BC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_stage_world2_B98(rdram, ctx);
        goto after_3;
    // 0x600044BC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_3:
    // 0x600044C0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x600044C4: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x600044C8: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x600044CC: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x600044D0: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x600044D4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x600044D8: addiu       $a1, $zero, 0x23
    ctx->r5 = ADD32(0, 0X23);
    // 0x600044DC: jal         0x600006C4
    // 0x600044E0: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    ovl_stage_world2_6C4(rdram, ctx);
        goto after_4;
    // 0x600044E0: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_4:
    // 0x600044E4: jal         0x60000BB0
    // 0x600044E8: addiu       $a0, $zero, 0x108
    ctx->r4 = ADD32(0, 0X108);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_5;
    // 0x600044E8: addiu       $a0, $zero, 0x108
    ctx->r4 = ADD32(0, 0X108);
    after_5:
    // 0x600044EC: beq         $v0, $zero, L_60004550
    if (ctx->r2 == 0) {
        // 0x600044F0: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_60004550;
    }
    // 0x600044F0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x600044F4: jal         0x60000BB0
    // 0x600044F8: addiu       $a0, $zero, 0x109
    ctx->r4 = ADD32(0, 0X109);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_6;
    // 0x600044F8: addiu       $a0, $zero, 0x109
    ctx->r4 = ADD32(0, 0X109);
    after_6:
    // 0x600044FC: beq         $v0, $zero, L_60004550
    if (ctx->r2 == 0) {
        // 0x60004500: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_60004550;
    }
    // 0x60004500: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x60004504: jal         0x60000BB0
    // 0x60004508: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_7;
    // 0x60004508: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    after_7:
    // 0x6000450C: beq         $v0, $zero, L_60004550
    if (ctx->r2 == 0) {
        // 0x60004510: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_60004550;
    }
    // 0x60004510: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x60004514: jal         0x60000BB0
    // 0x60004518: addiu       $a0, $zero, 0x10B
    ctx->r4 = ADD32(0, 0X10B);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_8;
    // 0x60004518: addiu       $a0, $zero, 0x10B
    ctx->r4 = ADD32(0, 0X10B);
    after_8:
    // 0x6000451C: beq         $v0, $zero, L_60004550
    if (ctx->r2 == 0) {
        // 0x60004520: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_60004550;
    }
    // 0x60004520: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x60004524: jal         0x60000BB0
    // 0x60004528: addiu       $a0, $zero, 0x10C
    ctx->r4 = ADD32(0, 0X10C);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_9;
    // 0x60004528: addiu       $a0, $zero, 0x10C
    ctx->r4 = ADD32(0, 0X10C);
    after_9:
    // 0x6000452C: bne         $v0, $zero, L_60004550
    if (ctx->r2 != 0) {
        // 0x60004530: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_60004550;
    }
    // 0x60004530: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x60004534: jal         0x60000B98
    // 0x60004538: addiu       $a0, $zero, 0x10C
    ctx->r4 = ADD32(0, 0X10C);
    ovl_stage_world2_B98(rdram, ctx);
        goto after_10;
    // 0x60004538: addiu       $a0, $zero, 0x10C
    ctx->r4 = ADD32(0, 0X10C);
    after_10:
    // 0x6000453C: jal         0x60000244
    // 0x60004540: addiu       $a0, $zero, 0x397
    ctx->r4 = ADD32(0, 0X397);
    ovl_stage_world2_244(rdram, ctx);
        goto after_11;
    // 0x60004540: addiu       $a0, $zero, 0x397
    ctx->r4 = ADD32(0, 0X397);
    after_11:
    // 0x60004544: jal         0x60000EF8
    // 0x60004548: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    ovl_stage_world2_EF8(rdram, ctx);
        goto after_12;
    // 0x60004548: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_12:
L_6000454C:
    // 0x6000454C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_60004550:
    // 0x60004550: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x60004554: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x60004558: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x6000455C: jr          $ra
    // 0x60004560: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x60004560: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_stage_world2_4564(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004564: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x60004568: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x6000456C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x60004570: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x60004574: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x60004578: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x6000457C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x60004580: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60004584: addiu       $s2, $zero, 0x4
    ctx->r18 = ADD32(0, 0X4);
L_60004588:
    // 0x60004588: jal         0x60000E74
    // 0x6000458C: addiu       $a0, $s0, 0x4
    ctx->r4 = ADD32(ctx->r16, 0X4);
    ovl_stage_world2_E74(rdram, ctx);
        goto after_0;
    // 0x6000458C: addiu       $a0, $s0, 0x4
    ctx->r4 = ADD32(ctx->r16, 0X4);
    after_0:
    // 0x60004590: beq         $v0, $s1, L_600045A4
    if (ctx->r2 == ctx->r17) {
        // 0x60004594: nop
    
            goto L_600045A4;
    }
    // 0x60004594: nop

    // 0x60004598: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x6000459C: bne         $s0, $s2, L_60004588
    if (ctx->r16 != ctx->r18) {
        // 0x600045A0: nop
    
            goto L_60004588;
    }
    // 0x600045A0: nop

L_600045A4:
    // 0x600045A4: jal         0x60000BB0
    // 0x600045A8: addiu       $a0, $s0, 0x100
    ctx->r4 = ADD32(ctx->r16, 0X100);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_1;
    // 0x600045A8: addiu       $a0, $s0, 0x100
    ctx->r4 = ADD32(ctx->r16, 0X100);
    after_1:
    // 0x600045AC: beq         $v0, $zero, L_600045D8
    if (ctx->r2 == 0) {
        // 0x600045B0: addiu       $s1, $s0, 0x104
        ctx->r17 = ADD32(ctx->r16, 0X104);
            goto L_600045D8;
    }
    // 0x600045B0: addiu       $s1, $s0, 0x104
    ctx->r17 = ADD32(ctx->r16, 0X104);
    // 0x600045B4: jal         0x60000BB0
    // 0x600045B8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_2;
    // 0x600045B8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x600045BC: bne         $v0, $zero, L_600045D8
    if (ctx->r2 != 0) {
        // 0x600045C0: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_600045D8;
    }
    // 0x600045C0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x600045C4: jal         0x60000B98
    // 0x600045C8: addiu       $s2, $s0, 0x4
    ctx->r18 = ADD32(ctx->r16, 0X4);
    ovl_stage_world2_B98(rdram, ctx);
        goto after_3;
    // 0x600045C8: addiu       $s2, $s0, 0x4
    ctx->r18 = ADD32(ctx->r16, 0X4);
    after_3:
    // 0x600045CC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x600045D0: jal         0x60000E80
    // 0x600045D4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_stage_world2_E80(rdram, ctx);
        goto after_4;
    // 0x600045D4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_4:
L_600045D8:
    // 0x600045D8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x600045DC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x600045E0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x600045E4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x600045E8: jr          $ra
    // 0x600045EC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x600045EC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_stage_world2_45F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600045F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x600045F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x600045F8: jal         0x60000C1C
    // 0x600045FC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    ovl_stage_world2_C1C(rdram, ctx);
        goto after_0;
    // 0x600045FC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x60004600: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x60004604: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x60004608: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x6000460C: beq         $t7, $zero, L_6000461C
    if (ctx->r15 == 0) {
        // 0x60004610: nop
    
            goto L_6000461C;
    }
    // 0x60004610: nop

    // 0x60004614: jal         0x600009AC
    // 0x60004618: nop

    ovl_stage_world2_9AC(rdram, ctx);
        goto after_1;
    // 0x60004618: nop

    after_1:
L_6000461C:
    // 0x6000461C: jal         0x60000FA8
    // 0x60004620: nop

    ovl_stage_world2_FA8(rdram, ctx);
        goto after_2;
    // 0x60004620: nop

    after_2:
    // 0x60004624: jal         0x60000EF8
    // 0x60004628: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_stage_world2_EF8(rdram, ctx);
        goto after_3;
    // 0x60004628: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_3:
    // 0x6000462C: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x60004630: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x60004634: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x60004638: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x6000463C: jal         0x60000A60
    // 0x60004640: addiu       $a0, $zero, 0xABD
    ctx->r4 = ADD32(0, 0XABD);
    ovl_stage_world2_A60(rdram, ctx);
        goto after_4;
    // 0x60004640: addiu       $a0, $zero, 0xABD
    ctx->r4 = ADD32(0, 0XABD);
    after_4:
    // 0x60004644: jal         0x60001030
    // 0x60004648: nop

    ovl_stage_world2_1030(rdram, ctx);
        goto after_5;
    // 0x60004648: nop

    after_5:
    // 0x6000464C: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x60004650: lui         $at, 0xFFFE
    ctx->r1 = S32(0XFFFE << 16);
    // 0x60004654: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x60004658: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x6000465C: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
    // 0x60004660: jal         0x6000215C
    // 0x60004664: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world2_215C(rdram, ctx);
        goto after_6;
    // 0x60004664: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_6:
    // 0x60004668: jal         0x60001098
    // 0x6000466C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world2_1098(rdram, ctx);
        goto after_7;
    // 0x6000466C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_7:
    // 0x60004670: jal         0x60000BB0
    // 0x60004674: addiu       $a0, $zero, 0x81
    ctx->r4 = ADD32(0, 0X81);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_8;
    // 0x60004674: addiu       $a0, $zero, 0x81
    ctx->r4 = ADD32(0, 0X81);
    after_8:
    // 0x60004678: beq         $v0, $zero, L_60004690
    if (ctx->r2 == 0) {
        // 0x6000467C: nop
    
            goto L_60004690;
    }
    // 0x6000467C: nop

    // 0x60004680: jal         0x60000C7C
    // 0x60004684: nop

    ovl_stage_world2_C7C(rdram, ctx);
        goto after_9;
    // 0x60004684: nop

    after_9:
    // 0x60004688: b           L_600046A8
    // 0x6000468C: nop

        goto L_600046A8;
    // 0x6000468C: nop

L_60004690:
    // 0x60004690: jal         0x60000B98
    // 0x60004694: addiu       $a0, $zero, 0x81
    ctx->r4 = ADD32(0, 0X81);
    ovl_stage_world2_B98(rdram, ctx);
        goto after_10;
    // 0x60004694: addiu       $a0, $zero, 0x81
    ctx->r4 = ADD32(0, 0X81);
    after_10:
    // 0x60004698: addiu       $a0, $zero, 0x8B9
    ctx->r4 = ADD32(0, 0X8B9);
    // 0x6000469C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x600046A0: jal         0x60000C10
    // 0x600046A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_stage_world2_C10(rdram, ctx);
        goto after_11;
    // 0x600046A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_11:
L_600046A8:
    // 0x600046A8: jal         0x600009AC
    // 0x600046AC: nop

    ovl_stage_world2_9AC(rdram, ctx);
        goto after_12;
    // 0x600046AC: nop

    after_12:
    // 0x600046B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x600046B4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x600046B8: jr          $ra
    // 0x600046BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x600046BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_stage_world2_46C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600046C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600046C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600046C8: jal         0x60000C1C
    // 0x600046CC: nop

    ovl_stage_world2_C1C(rdram, ctx);
        goto after_0;
    // 0x600046CC: nop

    after_0:
    // 0x600046D0: jal         0x60000B98
    // 0x600046D4: addiu       $a0, $zero, 0xAD
    ctx->r4 = ADD32(0, 0XAD);
    ovl_stage_world2_B98(rdram, ctx);
        goto after_1;
    // 0x600046D4: addiu       $a0, $zero, 0xAD
    ctx->r4 = ADD32(0, 0XAD);
    after_1:
    // 0x600046D8: jal         0x60000A60
    // 0x600046DC: addiu       $a0, $zero, 0xABC
    ctx->r4 = ADD32(0, 0XABC);
    ovl_stage_world2_A60(rdram, ctx);
        goto after_2;
    // 0x600046DC: addiu       $a0, $zero, 0xABC
    ctx->r4 = ADD32(0, 0XABC);
    after_2:
    // 0x600046E0: jal         0x60001030
    // 0x600046E4: nop

    ovl_stage_world2_1030(rdram, ctx);
        goto after_3;
    // 0x600046E4: nop

    after_3:
    // 0x600046E8: jal         0x6000215C
    // 0x600046EC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world2_215C(rdram, ctx);
        goto after_4;
    // 0x600046EC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
    // 0x600046F0: jal         0x600009AC
    // 0x600046F4: nop

    ovl_stage_world2_9AC(rdram, ctx);
        goto after_5;
    // 0x600046F4: nop

    after_5:
    // 0x600046F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600046FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60004700: jr          $ra
    // 0x60004704: nop

    return;
    // 0x60004704: nop

;}
RECOMP_FUNC void ovl_stage_world2_4708(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004708: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x6000470C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60004710: jal         0x6000025C
    // 0x60004714: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    ovl_stage_world2_25C(rdram, ctx);
        goto after_0;
    // 0x60004714: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    after_0:
    // 0x60004718: jal         0x60000244
    // 0x6000471C: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    ovl_stage_world2_244(rdram, ctx);
        goto after_1;
    // 0x6000471C: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    after_1:
    // 0x60004720: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x60004724: addiu       $t6, $zero, 0x8E
    ctx->r14 = ADD32(0, 0X8E);
    // 0x60004728: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x6000472C: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    // 0x60004730: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x60004734: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x60004738: jal         0x60000E74
    // 0x6000473C: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    ovl_stage_world2_E74(rdram, ctx);
        goto after_2;
    // 0x6000473C: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x60004740: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60004744: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    // 0x60004748: jal         0x600006C4
    // 0x6000474C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world2_6C4(rdram, ctx);
        goto after_3;
    // 0x6000474C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_3:
    // 0x60004750: jal         0x60000EEC
    // 0x60004754: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    ovl_stage_world2_EEC(rdram, ctx);
        goto after_4;
    // 0x60004754: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_4:
    // 0x60004758: jal         0x60000EEC
    // 0x6000475C: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    ovl_stage_world2_EEC(rdram, ctx);
        goto after_5;
    // 0x6000475C: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    after_5:
    // 0x60004760: jal         0x60000EEC
    // 0x60004764: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    ovl_stage_world2_EEC(rdram, ctx);
        goto after_6;
    // 0x60004764: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    after_6:
    // 0x60004768: jal         0x600009AC
    // 0x6000476C: nop

    ovl_stage_world2_9AC(rdram, ctx);
        goto after_7;
    // 0x6000476C: nop

    after_7:
    // 0x60004770: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004774: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x60004778: jr          $ra
    // 0x6000477C: nop

    return;
    // 0x6000477C: nop

;}
RECOMP_FUNC void ovl_stage_world2_4780(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004780: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x60004784: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x60004788: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x6000478C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x60004790: jal         0x60001098
    // 0x60004794: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world2_1098(rdram, ctx);
        goto after_0;
    // 0x60004794: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x60004798: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000479C: lwc1        $f4, 0x5BF4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5BF4);
    // 0x600047A0: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x600047A4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x600047A8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x600047AC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x600047B0: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x600047B4: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    // 0x600047B8: jal         0x60000DE4
    // 0x600047BC: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    ovl_stage_world2_DE4(rdram, ctx);
        goto after_1;
    // 0x600047BC: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x600047C0: addiu       $s0, $sp, 0x24
    ctx->r16 = ADD32(ctx->r29, 0X24);
    // 0x600047C4: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x600047C8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600047CC: jal         0x600006C4
    // 0x600047D0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_stage_world2_6C4(rdram, ctx);
        goto after_2;
    // 0x600047D0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x600047D4: addiu       $t6, $zero, 0x31
    ctx->r14 = ADD32(0, 0X31);
    // 0x600047D8: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x600047DC: jal         0x60000DE4
    // 0x600047E0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world2_DE4(rdram, ctx);
        goto after_3;
    // 0x600047E0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
    // 0x600047E4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600047E8: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x600047EC: jal         0x600006C4
    // 0x600047F0: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_stage_world2_6C4(rdram, ctx);
        goto after_4;
    // 0x600047F0: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_4:
    // 0x600047F4: jal         0x60000DE4
    // 0x600047F8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world2_DE4(rdram, ctx);
        goto after_5;
    // 0x600047F8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_5:
    // 0x600047FC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60004800: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x60004804: jal         0x600006C4
    // 0x60004808: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_stage_world2_6C4(rdram, ctx);
        goto after_6;
    // 0x60004808: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_6:
    // 0x6000480C: lui         $at, 0x4307
    ctx->r1 = S32(0X4307 << 16);
    // 0x60004810: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x60004814: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x60004818: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x6000481C: addiu       $s1, $zero, 0x1E
    ctx->r17 = ADD32(0, 0X1E);
    // 0x60004820: swc1        $f10, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->f10.u32l;
L_60004824:
    // 0x60004824: jal         0x6000215C
    // 0x60004828: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world2_215C(rdram, ctx);
        goto after_7;
    // 0x60004828: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_7:
    // 0x6000482C: jal         0x600009D0
    // 0x60004830: nop

    ovl_stage_world2_9D0(rdram, ctx);
        goto after_8;
    // 0x60004830: nop

    after_8:
    // 0x60004834: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60004838: bne         $s0, $s1, L_60004824
    if (ctx->r16 != ctx->r17) {
        // 0x6000483C: nop
    
            goto L_60004824;
    }
    // 0x6000483C: nop

    // 0x60004840: jal         0x600009AC
    // 0x60004844: nop

    ovl_stage_world2_9AC(rdram, ctx);
        goto after_9;
    // 0x60004844: nop

    after_9:
    // 0x60004848: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x6000484C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x60004850: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x60004854: jr          $ra
    // 0x60004858: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x60004858: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_stage_world2_485C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000485C: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x60004860: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x60004864: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x60004868: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x6000486C: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x60004870: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x60004874: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x60004878: lui         $t6, 0x6000
    ctx->r14 = S32(0X6000 << 16);
    // 0x6000487C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x60004880: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x60004884: addiu       $t6, $t6, 0x4564
    ctx->r14 = ADD32(ctx->r14, 0X4564);
    // 0x60004888: lui         $s2, 0x6000
    ctx->r18 = S32(0X6000 << 16);
    // 0x6000488C: lui         $s4, 0x100
    ctx->r20 = S32(0X100 << 16);
    // 0x60004890: lui         $s5, 0x100
    ctx->r21 = S32(0X100 << 16);
    // 0x60004894: lui         $s6, 0x100
    ctx->r22 = S32(0X100 << 16);
    // 0x60004898: lui         $s7, 0x100
    ctx->r23 = S32(0X100 << 16);
    // 0x6000489C: lui         $fp, 0x100
    ctx->r30 = S32(0X100 << 16);
    // 0x600048A0: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x600048A4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x600048A8: ori         $fp, $fp, 0x8
    ctx->r30 = ctx->r30 | 0X8;
    // 0x600048AC: ori         $s7, $s7, 0xA
    ctx->r23 = ctx->r23 | 0XA;
    // 0x600048B0: ori         $s6, $s6, 0x9
    ctx->r22 = ctx->r22 | 0X9;
    // 0x600048B4: ori         $s5, $s5, 0x7
    ctx->r21 = ctx->r21 | 0X7;
    // 0x600048B8: ori         $s4, $s4, 0x6
    ctx->r20 = ctx->r20 | 0X6;
    // 0x600048BC: addiu       $s2, $s2, 0x4458
    ctx->r18 = ADD32(ctx->r18, 0X4458);
    // 0x600048C0: sw          $t6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r14;
    // 0x600048C4: addiu       $s1, $sp, 0x58
    ctx->r17 = ADD32(ctx->r29, 0X58);
    // 0x600048C8: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x600048CC: addiu       $s0, $s3, 0x4
    ctx->r16 = ADD32(ctx->r19, 0X4);
L_600048D0:
    // 0x600048D0: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x600048D4: sw          $s2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r18;
    // 0x600048D8: jal         0x60000E74
    // 0x600048DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_stage_world2_E74(rdram, ctx);
        goto after_0;
    // 0x600048DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x600048E0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600048E4: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    // 0x600048E8: jal         0x600006C4
    // 0x600048EC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world2_6C4(rdram, ctx);
        goto after_1;
    // 0x600048EC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_1:
    // 0x600048F0: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x600048F4: sw          $s5, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r21;
    // 0x600048F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x600048FC: jal         0x60000E74
    // 0x60004900: sw          $t7, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r15;
    ovl_stage_world2_E74(rdram, ctx);
        goto after_2;
    // 0x60004900: sw          $t7, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r15;
    after_2:
    // 0x60004904: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60004908: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    // 0x6000490C: jal         0x600006C4
    // 0x60004910: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world2_6C4(rdram, ctx);
        goto after_3;
    // 0x60004910: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_3:
    // 0x60004914: sw          $s6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r22;
    // 0x60004918: sw          $s2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r18;
    // 0x6000491C: jal         0x60000E74
    // 0x60004920: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_stage_world2_E74(rdram, ctx);
        goto after_4;
    // 0x60004920: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x60004924: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60004928: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    // 0x6000492C: jal         0x600006C4
    // 0x60004930: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world2_6C4(rdram, ctx);
        goto after_5;
    // 0x60004930: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_5:
    // 0x60004934: sw          $s7, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r23;
    // 0x60004938: sw          $s2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r18;
    // 0x6000493C: jal         0x60000E74
    // 0x60004940: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_stage_world2_E74(rdram, ctx);
        goto after_6;
    // 0x60004940: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x60004944: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60004948: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    // 0x6000494C: jal         0x600006C4
    // 0x60004950: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world2_6C4(rdram, ctx);
        goto after_7;
    // 0x60004950: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_7:
    // 0x60004954: sw          $fp, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r30;
    // 0x60004958: sw          $s2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r18;
    // 0x6000495C: jal         0x60000E74
    // 0x60004960: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_stage_world2_E74(rdram, ctx);
        goto after_8;
    // 0x60004960: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x60004964: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60004968: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    // 0x6000496C: jal         0x600006C4
    // 0x60004970: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world2_6C4(rdram, ctx);
        goto after_9;
    // 0x60004970: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_9:
    // 0x60004974: lui         $t8, 0x100
    ctx->r24 = S32(0X100 << 16);
    // 0x60004978: ori         $t8, $t8, 0xB
    ctx->r24 = ctx->r24 | 0XB;
    // 0x6000497C: sw          $t8, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r24;
    // 0x60004980: sw          $s2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r18;
    // 0x60004984: jal         0x60000E74
    // 0x60004988: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_stage_world2_E74(rdram, ctx);
        goto after_10;
    // 0x60004988: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x6000498C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60004990: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    // 0x60004994: jal         0x600006C4
    // 0x60004998: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world2_6C4(rdram, ctx);
        goto after_11;
    // 0x60004998: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_11:
    // 0x6000499C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x600049A0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x600049A4: bne         $s3, $at, L_600048D0
    if (ctx->r19 != ctx->r1) {
        // 0x600049A8: addiu       $s0, $s3, 0x4
        ctx->r16 = ADD32(ctx->r19, 0X4);
            goto L_600048D0;
    }
    // 0x600049A8: addiu       $s0, $s3, 0x4
    ctx->r16 = ADD32(ctx->r19, 0X4);
    // 0x600049AC: jal         0x60000BB0
    // 0x600049B0: addiu       $a0, $zero, 0xAD
    ctx->r4 = ADD32(0, 0XAD);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_12;
    // 0x600049B0: addiu       $a0, $zero, 0xAD
    ctx->r4 = ADD32(0, 0XAD);
    after_12:
    // 0x600049B4: bne         $v0, $zero, L_600049D8
    if (ctx->r2 != 0) {
        // 0x600049B8: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_600049D8;
    }
    // 0x600049B8: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600049BC: addiu       $a0, $a0, 0x46C0
    ctx->r4 = ADD32(ctx->r4, 0X46C0);
    // 0x600049C0: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x600049C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x600049C8: jal         0x60000994
    // 0x600049CC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world2_994(rdram, ctx);
        goto after_13;
    // 0x600049CC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_13:
    // 0x600049D0: b           L_60004A00
    // 0x600049D4: nop

        goto L_60004A00;
    // 0x600049D4: nop

L_600049D8:
    // 0x600049D8: jal         0x60000BB0
    // 0x600049DC: addiu       $a0, $zero, 0xAD
    ctx->r4 = ADD32(0, 0XAD);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_14;
    // 0x600049DC: addiu       $a0, $zero, 0xAD
    ctx->r4 = ADD32(0, 0XAD);
    after_14:
    // 0x600049E0: beq         $v0, $zero, L_60004A00
    if (ctx->r2 == 0) {
        // 0x600049E4: nop
    
            goto L_60004A00;
    }
    // 0x600049E4: nop

    // 0x600049E8: jal         0x60000BB0
    // 0x600049EC: addiu       $a0, $zero, 0x81
    ctx->r4 = ADD32(0, 0X81);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_15;
    // 0x600049EC: addiu       $a0, $zero, 0x81
    ctx->r4 = ADD32(0, 0X81);
    after_15:
    // 0x600049F0: bne         $v0, $zero, L_60004A00
    if (ctx->r2 != 0) {
        // 0x600049F4: nop
    
            goto L_60004A00;
    }
    // 0x600049F4: nop

    // 0x600049F8: jal         0x6000025C
    // 0x600049FC: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    ovl_stage_world2_25C(rdram, ctx);
        goto after_16;
    // 0x600049FC: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    after_16:
L_60004A00:
    // 0x60004A00: jal         0x60000BB0
    // 0x60004A04: addiu       $a0, $zero, 0x81
    ctx->r4 = ADD32(0, 0X81);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_17;
    // 0x60004A04: addiu       $a0, $zero, 0x81
    ctx->r4 = ADD32(0, 0X81);
    after_17:
    // 0x60004A08: beq         $v0, $zero, L_60004A30
    if (ctx->r2 == 0) {
        // 0x60004A0C: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_60004A30;
    }
    // 0x60004A0C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60004A10: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60004A14: addiu       $a0, $a0, 0x4708
    ctx->r4 = ADD32(ctx->r4, 0X4708);
    // 0x60004A18: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60004A1C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60004A20: jal         0x60000994
    // 0x60004A24: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world2_994(rdram, ctx);
        goto after_18;
    // 0x60004A24: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_18:
    // 0x60004A28: b           L_60004A48
    // 0x60004A2C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_60004A48;
    // 0x60004A2C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_60004A30:
    // 0x60004A30: addiu       $a0, $a0, 0x4780
    ctx->r4 = ADD32(ctx->r4, 0X4780);
    // 0x60004A34: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60004A38: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60004A3C: jal         0x60000994
    // 0x60004A40: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world2_994(rdram, ctx);
        goto after_19;
    // 0x60004A40: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_19:
    // 0x60004A44: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_60004A48:
    // 0x60004A48: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x60004A4C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x60004A50: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x60004A54: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x60004A58: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x60004A5C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x60004A60: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x60004A64: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x60004A68: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x60004A6C: jr          $ra
    // 0x60004A70: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x60004A70: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void ovl_stage_world2_4A74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004A74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60004A78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60004A7C: jal         0x60000B98
    // 0x60004A80: addiu       $a0, $zero, 0x196
    ctx->r4 = ADD32(0, 0X196);
    ovl_stage_world2_B98(rdram, ctx);
        goto after_0;
    // 0x60004A80: addiu       $a0, $zero, 0x196
    ctx->r4 = ADD32(0, 0X196);
    after_0:
    // 0x60004A84: jal         0x60000A60
    // 0x60004A88: addiu       $a0, $zero, 0xA54
    ctx->r4 = ADD32(0, 0XA54);
    ovl_stage_world2_A60(rdram, ctx);
        goto after_1;
    // 0x60004A88: addiu       $a0, $zero, 0xA54
    ctx->r4 = ADD32(0, 0XA54);
    after_1:
    // 0x60004A8C: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x60004A90: jal         0x60000E68
    // 0x60004A94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world2_E68(rdram, ctx);
        goto after_2;
    // 0x60004A94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x60004A98: jal         0x600009C4
    // 0x60004A9C: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_stage_world2_9C4(rdram, ctx);
        goto after_3;
    // 0x60004A9C: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_3:
    // 0x60004AA0: jal         0x600009C4
    // 0x60004AA4: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    ovl_stage_world2_9C4(rdram, ctx);
        goto after_4;
    // 0x60004AA4: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    after_4:
    // 0x60004AA8: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x60004AAC: jal         0x60000E68
    // 0x60004AB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world2_E68(rdram, ctx);
        goto after_5;
    // 0x60004AB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x60004AB4: jal         0x600009AC
    // 0x60004AB8: nop

    ovl_stage_world2_9AC(rdram, ctx);
        goto after_6;
    // 0x60004AB8: nop

    after_6:
    // 0x60004ABC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004AC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60004AC4: jr          $ra
    // 0x60004AC8: nop

    return;
    // 0x60004AC8: nop

;}
RECOMP_FUNC void ovl_stage_world2_4ACC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004ACC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60004AD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60004AD4: jal         0x60000BB0
    // 0x60004AD8: addiu       $a0, $zero, 0x185
    ctx->r4 = ADD32(0, 0X185);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_0;
    // 0x60004AD8: addiu       $a0, $zero, 0x185
    ctx->r4 = ADD32(0, 0X185);
    after_0:
    // 0x60004ADC: beq         $v0, $zero, L_60004AF8
    if (ctx->r2 == 0) {
        // 0x60004AE0: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_60004AF8;
    }
    // 0x60004AE0: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60004AE4: addiu       $a0, $a0, 0x4A74
    ctx->r4 = ADD32(ctx->r4, 0X4A74);
    // 0x60004AE8: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60004AEC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60004AF0: jal         0x60000994
    // 0x60004AF4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world2_994(rdram, ctx);
        goto after_1;
    // 0x60004AF4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
L_60004AF8:
    // 0x60004AF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004AFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60004B00: jr          $ra
    // 0x60004B04: nop

    return;
    // 0x60004B04: nop

;}
RECOMP_FUNC void ovl_stage_world2_4B08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004B08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60004B0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60004B10: jal         0x60000E44
    // 0x60004B14: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    ovl_stage_world2_E44(rdram, ctx);
        goto after_0;
    // 0x60004B14: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_0:
    // 0x60004B18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004B1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60004B20: jr          $ra
    // 0x60004B24: nop

    return;
    // 0x60004B24: nop

;}
RECOMP_FUNC void ovl_stage_world2_4B28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004B28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60004B2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60004B30: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    // 0x60004B34: jal         0x60000E80
    // 0x60004B38: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world2_E80(rdram, ctx);
        goto after_0;
    // 0x60004B38: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x60004B3C: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    // 0x60004B40: jal         0x60000E80
    // 0x60004B44: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_stage_world2_E80(rdram, ctx);
        goto after_1;
    // 0x60004B44: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x60004B48: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    // 0x60004B4C: jal         0x60000E80
    // 0x60004B50: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    ovl_stage_world2_E80(rdram, ctx);
        goto after_2;
    // 0x60004B50: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_2:
    // 0x60004B54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004B58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60004B5C: jr          $ra
    // 0x60004B60: nop

    return;
    // 0x60004B60: nop

;}
RECOMP_FUNC void ovl_stage_world2_4B64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004B64: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x60004B68: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x60004B6C: jal         0x60000C1C
    // 0x60004B70: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    ovl_stage_world2_C1C(rdram, ctx);
        goto after_0;
    // 0x60004B70: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x60004B74: lbu         $t6, 0x20($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X20);
    // 0x60004B78: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x60004B7C: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x60004B80: lw          $t7, 0xC($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XC);
    // 0x60004B84: nop

    // 0x60004B88: bne         $t7, $zero, L_60004C7C
    if (ctx->r15 != 0) {
        // 0x60004B8C: nop
    
            goto L_60004C7C;
    }
    // 0x60004B8C: nop

    // 0x60004B90: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x60004B94: nop

    // 0x60004B98: andi        $t9, $t8, 0x800
    ctx->r25 = ctx->r24 & 0X800;
    // 0x60004B9C: bne         $t9, $zero, L_60004C7C
    if (ctx->r25 != 0) {
        // 0x60004BA0: nop
    
            goto L_60004C7C;
    }
    // 0x60004BA0: nop

    // 0x60004BA4: jal         0x60000BB0
    // 0x60004BA8: addiu       $a0, $zero, 0x95
    ctx->r4 = ADD32(0, 0X95);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_1;
    // 0x60004BA8: addiu       $a0, $zero, 0x95
    ctx->r4 = ADD32(0, 0X95);
    after_1:
    // 0x60004BAC: bne         $v0, $zero, L_60004C14
    if (ctx->r2 != 0) {
        // 0x60004BB0: nop
    
            goto L_60004C14;
    }
    // 0x60004BB0: nop

    // 0x60004BB4: jal         0x60000B98
    // 0x60004BB8: addiu       $a0, $zero, 0x95
    ctx->r4 = ADD32(0, 0X95);
    ovl_stage_world2_B98(rdram, ctx);
        goto after_2;
    // 0x60004BB8: addiu       $a0, $zero, 0x95
    ctx->r4 = ADD32(0, 0X95);
    after_2:
    // 0x60004BBC: jal         0x60000EEC
    // 0x60004BC0: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    ovl_stage_world2_EEC(rdram, ctx);
        goto after_3;
    // 0x60004BC0: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    after_3:
    // 0x60004BC4: jal         0x60000A60
    // 0x60004BC8: addiu       $a0, $zero, 0xAEA
    ctx->r4 = ADD32(0, 0XAEA);
    ovl_stage_world2_A60(rdram, ctx);
        goto after_4;
    // 0x60004BC8: addiu       $a0, $zero, 0xAEA
    ctx->r4 = ADD32(0, 0XAEA);
    after_4:
    // 0x60004BCC: jal         0x600009D0
    // 0x60004BD0: nop

    ovl_stage_world2_9D0(rdram, ctx);
        goto after_5;
    // 0x60004BD0: nop

    after_5:
    // 0x60004BD4: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x60004BD8: nop

    // 0x60004BDC: andi        $t1, $t0, 0x800
    ctx->r9 = ctx->r8 & 0X800;
    // 0x60004BE0: beq         $t1, $zero, L_60004C04
    if (ctx->r9 == 0) {
        // 0x60004BE4: nop
    
            goto L_60004C04;
    }
    // 0x60004BE4: nop

L_60004BE8:
    // 0x60004BE8: jal         0x600009D0
    // 0x60004BEC: nop

    ovl_stage_world2_9D0(rdram, ctx);
        goto after_6;
    // 0x60004BEC: nop

    after_6:
    // 0x60004BF0: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x60004BF4: nop

    // 0x60004BF8: andi        $t3, $t2, 0x800
    ctx->r11 = ctx->r10 & 0X800;
    // 0x60004BFC: bne         $t3, $zero, L_60004BE8
    if (ctx->r11 != 0) {
        // 0x60004C00: nop
    
            goto L_60004BE8;
    }
    // 0x60004C00: nop

L_60004C04:
    // 0x60004C04: jal         0x600009C4
    // 0x60004C08: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    ovl_stage_world2_9C4(rdram, ctx);
        goto after_7;
    // 0x60004C08: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_7:
    // 0x60004C0C: b           L_60004C1C
    // 0x60004C10: nop

        goto L_60004C1C;
    // 0x60004C10: nop

L_60004C14:
    // 0x60004C14: jal         0x60004B28
    // 0x60004C18: nop

    ovl_stage_world2_4B28(rdram, ctx);
        goto after_8;
    // 0x60004C18: nop

    after_8:
L_60004C1C:
    // 0x60004C1C: jal         0x60000EE0
    // 0x60004C20: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world2_EE0(rdram, ctx);
        goto after_9;
    // 0x60004C20: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_9:
    // 0x60004C24: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x60004C28: nop

    // 0x60004C2C: beq         $v0, $t4, L_60004C84
    if (ctx->r2 == ctx->r12) {
        // 0x60004C30: nop
    
            goto L_60004C84;
    }
    // 0x60004C30: nop

    // 0x60004C34: jal         0x60000A60
    // 0x60004C38: addiu       $a0, $zero, 0xAF2
    ctx->r4 = ADD32(0, 0XAF2);
    ovl_stage_world2_A60(rdram, ctx);
        goto after_10;
    // 0x60004C38: addiu       $a0, $zero, 0xAF2
    ctx->r4 = ADD32(0, 0XAF2);
    after_10:
    // 0x60004C3C: jal         0x600009D0
    // 0x60004C40: nop

    ovl_stage_world2_9D0(rdram, ctx);
        goto after_11;
    // 0x60004C40: nop

    after_11:
    // 0x60004C44: lw          $t5, 0x0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X0);
    // 0x60004C48: nop

    // 0x60004C4C: andi        $t6, $t5, 0x800
    ctx->r14 = ctx->r13 & 0X800;
    // 0x60004C50: beq         $t6, $zero, L_60004C84
    if (ctx->r14 == 0) {
        // 0x60004C54: nop
    
            goto L_60004C84;
    }
    // 0x60004C54: nop

L_60004C58:
    // 0x60004C58: jal         0x600009D0
    // 0x60004C5C: nop

    ovl_stage_world2_9D0(rdram, ctx);
        goto after_12;
    // 0x60004C5C: nop

    after_12:
    // 0x60004C60: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x60004C64: nop

    // 0x60004C68: andi        $t8, $t7, 0x800
    ctx->r24 = ctx->r15 & 0X800;
    // 0x60004C6C: bne         $t8, $zero, L_60004C58
    if (ctx->r24 != 0) {
        // 0x60004C70: nop
    
            goto L_60004C58;
    }
    // 0x60004C70: nop

    // 0x60004C74: b           L_60004C84
    // 0x60004C78: nop

        goto L_60004C84;
    // 0x60004C78: nop

L_60004C7C:
    // 0x60004C7C: jal         0x60004B28
    // 0x60004C80: nop

    ovl_stage_world2_4B28(rdram, ctx);
        goto after_13;
    // 0x60004C80: nop

    after_13:
L_60004C84:
    // 0x60004C84: jal         0x600009AC
    // 0x60004C88: nop

    ovl_stage_world2_9AC(rdram, ctx);
        goto after_14;
    // 0x60004C88: nop

    after_14:
    // 0x60004C8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x60004C90: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x60004C94: jr          $ra
    // 0x60004C98: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x60004C98: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_stage_world2_4C9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004C9C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x60004CA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60004CA4: jal         0x60000C1C
    // 0x60004CA8: nop

    ovl_stage_world2_C1C(rdram, ctx);
        goto after_0;
    // 0x60004CA8: nop

    after_0:
    // 0x60004CAC: lw          $t6, 0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC);
    // 0x60004CB0: addiu       $at, $zero, 0x15
    ctx->r1 = ADD32(0, 0X15);
    // 0x60004CB4: beq         $t6, $at, L_60004CD4
    if (ctx->r14 == ctx->r1) {
        // 0x60004CB8: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_60004CD4;
    }
    // 0x60004CB8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x60004CBC: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x60004CC0: addiu       $a1, $zero, -0x9
    ctx->r5 = ADD32(0, -0X9);
    // 0x60004CC4: jal         0x60000F04
    // 0x60004CC8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    ovl_stage_world2_F04(rdram, ctx);
        goto after_1;
    // 0x60004CC8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x60004CCC: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x60004CD0: nop

L_60004CD4:
    // 0x60004CD4: lw          $t7, 0xC($v1)
    ctx->r15 = MEM_W(ctx->r3, 0XC);
    // 0x60004CD8: nop

    // 0x60004CDC: bne         $t7, $zero, L_60004D04
    if (ctx->r15 != 0) {
        // 0x60004CE0: nop
    
            goto L_60004D04;
    }
    // 0x60004CE0: nop

    // 0x60004CE4: jal         0x60000BB0
    // 0x60004CE8: addiu       $a0, $zero, 0x81
    ctx->r4 = ADD32(0, 0X81);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_2;
    // 0x60004CE8: addiu       $a0, $zero, 0x81
    ctx->r4 = ADD32(0, 0X81);
    after_2:
    // 0x60004CEC: beq         $v0, $zero, L_60004D04
    if (ctx->r2 == 0) {
        // 0x60004CF0: nop
    
            goto L_60004D04;
    }
    // 0x60004CF0: nop

    // 0x60004CF4: jal         0x60000F50
    // 0x60004CF8: nop

    ovl_stage_world2_F50(rdram, ctx);
        goto after_3;
    // 0x60004CF8: nop

    after_3:
    // 0x60004CFC: jal         0x60000EEC
    // 0x60004D00: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    ovl_stage_world2_EEC(rdram, ctx);
        goto after_4;
    // 0x60004D00: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_4:
L_60004D04:
    // 0x60004D04: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60004D08: addiu       $a0, $a0, 0x4B64
    ctx->r4 = ADD32(ctx->r4, 0X4B64);
    // 0x60004D0C: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60004D10: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60004D14: jal         0x60000994
    // 0x60004D18: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world2_994(rdram, ctx);
        goto after_5;
    // 0x60004D18: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
    // 0x60004D1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004D20: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x60004D24: jr          $ra
    // 0x60004D28: nop

    return;
    // 0x60004D28: nop

;}
RECOMP_FUNC void ovl_stage_world2_4D2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004D2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60004D30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60004D34: jal         0x60000BB0
    // 0x60004D38: addiu       $a0, $zero, 0x89
    ctx->r4 = ADD32(0, 0X89);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_0;
    // 0x60004D38: addiu       $a0, $zero, 0x89
    ctx->r4 = ADD32(0, 0X89);
    after_0:
    // 0x60004D3C: beq         $v0, $zero, L_60004D78
    if (ctx->r2 == 0) {
        // 0x60004D40: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60004D78;
    }
    // 0x60004D40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004D44: jal         0x60000BB0
    // 0x60004D48: addiu       $a0, $zero, 0x81
    ctx->r4 = ADD32(0, 0X81);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_1;
    // 0x60004D48: addiu       $a0, $zero, 0x81
    ctx->r4 = ADD32(0, 0X81);
    after_1:
    // 0x60004D4C: bne         $v0, $zero, L_60004D78
    if (ctx->r2 != 0) {
        // 0x60004D50: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60004D78;
    }
    // 0x60004D50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004D54: jal         0x60000BB0
    // 0x60004D58: addiu       $a0, $zero, 0x19D
    ctx->r4 = ADD32(0, 0X19D);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_2;
    // 0x60004D58: addiu       $a0, $zero, 0x19D
    ctx->r4 = ADD32(0, 0X19D);
    after_2:
    // 0x60004D5C: bne         $v0, $zero, L_60004D78
    if (ctx->r2 != 0) {
        // 0x60004D60: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60004D78;
    }
    // 0x60004D60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004D64: jal         0x60000B98
    // 0x60004D68: addiu       $a0, $zero, 0x19D
    ctx->r4 = ADD32(0, 0X19D);
    ovl_stage_world2_B98(rdram, ctx);
        goto after_3;
    // 0x60004D68: addiu       $a0, $zero, 0x19D
    ctx->r4 = ADD32(0, 0X19D);
    after_3:
    // 0x60004D6C: jal         0x60000A60
    // 0x60004D70: addiu       $a0, $zero, 0xABB
    ctx->r4 = ADD32(0, 0XABB);
    ovl_stage_world2_A60(rdram, ctx);
        goto after_4;
    // 0x60004D70: addiu       $a0, $zero, 0xABB
    ctx->r4 = ADD32(0, 0XABB);
    after_4:
    // 0x60004D74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60004D78:
    // 0x60004D78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60004D7C: jr          $ra
    // 0x60004D80: nop

    return;
    // 0x60004D80: nop

;}
RECOMP_FUNC void ovl_stage_world2_4D84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004D84: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x60004D88: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x60004D8C: jal         0x600009DC
    // 0x60004D90: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    ovl_stage_world2_9DC(rdram, ctx);
        goto after_0;
    // 0x60004D90: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x60004D94: lw          $v1, 0x1C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X1C);
    // 0x60004D98: addiu       $a0, $zero, 0x10E
    ctx->r4 = ADD32(0, 0X10E);
    // 0x60004D9C: lw          $s0, 0xC($v1)
    ctx->r16 = MEM_W(ctx->r3, 0XC);
    // 0x60004DA0: jal         0x600009C4
    // 0x60004DA4: nop

    ovl_stage_world2_9C4(rdram, ctx);
        goto after_1;
    // 0x60004DA4: nop

    after_1:
    // 0x60004DA8: jal         0x60000BB0
    // 0x60004DAC: addiu       $a0, $s0, 0x104
    ctx->r4 = ADD32(ctx->r16, 0X104);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_2;
    // 0x60004DAC: addiu       $a0, $s0, 0x104
    ctx->r4 = ADD32(ctx->r16, 0X104);
    after_2:
    // 0x60004DB0: bne         $v0, $zero, L_60004DD8
    if (ctx->r2 != 0) {
        // 0x60004DB4: nop
    
            goto L_60004DD8;
    }
    // 0x60004DB4: nop

    // 0x60004DB8: jal         0x60000BA4
    // 0x60004DBC: addiu       $a0, $s0, 0x100
    ctx->r4 = ADD32(ctx->r16, 0X100);
    ovl_stage_world2_BA4(rdram, ctx);
        goto after_3;
    // 0x60004DBC: addiu       $a0, $s0, 0x100
    ctx->r4 = ADD32(ctx->r16, 0X100);
    after_3:
    // 0x60004DC0: addiu       $a0, $s0, 0x4
    ctx->r4 = ADD32(ctx->r16, 0X4);
    // 0x60004DC4: jal         0x60000E80
    // 0x60004DC8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world2_E80(rdram, ctx);
        goto after_4;
    // 0x60004DC8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x60004DCC: addiu       $a0, $s0, 0x8
    ctx->r4 = ADD32(ctx->r16, 0X8);
    // 0x60004DD0: jal         0x60000E68
    // 0x60004DD4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world2_E68(rdram, ctx);
        goto after_5;
    // 0x60004DD4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
L_60004DD8:
    // 0x60004DD8: jal         0x600009AC
    // 0x60004DDC: nop

    ovl_stage_world2_9AC(rdram, ctx);
        goto after_6;
    // 0x60004DDC: nop

    after_6:
    // 0x60004DE0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x60004DE4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x60004DE8: jr          $ra
    // 0x60004DEC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x60004DEC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_stage_world2_4DF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004DF0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x60004DF4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x60004DF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60004DFC: addiu       $a0, $a0, 0x100
    ctx->r4 = ADD32(ctx->r4, 0X100);
    // 0x60004E00: jal         0x60000BB0
    // 0x60004E04: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_0;
    // 0x60004E04: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x60004E08: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x60004E0C: bne         $v0, $zero, L_60004E68
    if (ctx->r2 != 0) {
        // 0x60004E10: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60004E68;
    }
    // 0x60004E10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004E14: jal         0x60000B98
    // 0x60004E18: nop

    ovl_stage_world2_B98(rdram, ctx);
        goto after_1;
    // 0x60004E18: nop

    after_1:
    // 0x60004E1C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x60004E20: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x60004E24: jal         0x60000E80
    // 0x60004E28: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    ovl_stage_world2_E80(rdram, ctx);
        goto after_2;
    // 0x60004E28: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_2:
    // 0x60004E2C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x60004E30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60004E34: jal         0x60000E68
    // 0x60004E38: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    ovl_stage_world2_E68(rdram, ctx);
        goto after_3;
    // 0x60004E38: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    after_3:
    // 0x60004E3C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60004E40: addiu       $a0, $a0, 0x4D84
    ctx->r4 = ADD32(ctx->r4, 0X4D84);
    // 0x60004E44: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60004E48: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60004E4C: jal         0x60000994
    // 0x60004E50: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world2_994(rdram, ctx);
        goto after_4;
    // 0x60004E50: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x60004E54: lw          $v1, 0x1C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X1C);
    // 0x60004E58: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x60004E5C: nop

    // 0x60004E60: sw          $t6, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r14;
    // 0x60004E64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60004E68:
    // 0x60004E68: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x60004E6C: jr          $ra
    // 0x60004E70: nop

    return;
    // 0x60004E70: nop

;}
RECOMP_FUNC void ovl_stage_world2_4E74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004E74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60004E78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60004E7C: jal         0x600009C4
    // 0x60004E80: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_stage_world2_9C4(rdram, ctx);
        goto after_0;
    // 0x60004E80: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_0:
    // 0x60004E84: jal         0x60000BA4
    // 0x60004E88: addiu       $a0, $zero, 0x114
    ctx->r4 = ADD32(0, 0X114);
    ovl_stage_world2_BA4(rdram, ctx);
        goto after_1;
    // 0x60004E88: addiu       $a0, $zero, 0x114
    ctx->r4 = ADD32(0, 0X114);
    after_1:
    // 0x60004E8C: jal         0x600009AC
    // 0x60004E90: nop

    ovl_stage_world2_9AC(rdram, ctx);
        goto after_2;
    // 0x60004E90: nop

    after_2:
    // 0x60004E94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004E98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60004E9C: jr          $ra
    // 0x60004EA0: nop

    return;
    // 0x60004EA0: nop

;}
RECOMP_FUNC void ovl_stage_world2_4EA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004EA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60004EA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60004EAC: jal         0x60000BB0
    // 0x60004EB0: addiu       $a0, $zero, 0x114
    ctx->r4 = ADD32(0, 0X114);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_0;
    // 0x60004EB0: addiu       $a0, $zero, 0x114
    ctx->r4 = ADD32(0, 0X114);
    after_0:
    // 0x60004EB4: bne         $v0, $zero, L_60004F64
    if (ctx->r2 != 0) {
        // 0x60004EB8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60004F64;
    }
    // 0x60004EB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004EBC: jal         0x60000BB0
    // 0x60004EC0: addiu       $a0, $zero, 0x10D
    ctx->r4 = ADD32(0, 0X10D);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_1;
    // 0x60004EC0: addiu       $a0, $zero, 0x10D
    ctx->r4 = ADD32(0, 0X10D);
    after_1:
    // 0x60004EC4: bne         $v0, $zero, L_60004F64
    if (ctx->r2 != 0) {
        // 0x60004EC8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60004F64;
    }
    // 0x60004EC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004ECC: jal         0x60000BB0
    // 0x60004ED0: addiu       $a0, $zero, 0x10C
    ctx->r4 = ADD32(0, 0X10C);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_2;
    // 0x60004ED0: addiu       $a0, $zero, 0x10C
    ctx->r4 = ADD32(0, 0X10C);
    after_2:
    // 0x60004ED4: beq         $v0, $zero, L_60004F64
    if (ctx->r2 == 0) {
        // 0x60004ED8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60004F64;
    }
    // 0x60004ED8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004EDC: jal         0x60000BB0
    // 0x60004EE0: addiu       $a0, $zero, 0x115
    ctx->r4 = ADD32(0, 0X115);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_3;
    // 0x60004EE0: addiu       $a0, $zero, 0x115
    ctx->r4 = ADD32(0, 0X115);
    after_3:
    // 0x60004EE4: bne         $v0, $zero, L_60004F28
    if (ctx->r2 != 0) {
        // 0x60004EE8: nop
    
            goto L_60004F28;
    }
    // 0x60004EE8: nop

    // 0x60004EEC: jal         0x60000B98
    // 0x60004EF0: addiu       $a0, $zero, 0x114
    ctx->r4 = ADD32(0, 0X114);
    ovl_stage_world2_B98(rdram, ctx);
        goto after_4;
    // 0x60004EF0: addiu       $a0, $zero, 0x114
    ctx->r4 = ADD32(0, 0X114);
    after_4:
    // 0x60004EF4: jal         0x60000B98
    // 0x60004EF8: addiu       $a0, $zero, 0x115
    ctx->r4 = ADD32(0, 0X115);
    ovl_stage_world2_B98(rdram, ctx);
        goto after_5;
    // 0x60004EF8: addiu       $a0, $zero, 0x115
    ctx->r4 = ADD32(0, 0X115);
    after_5:
    // 0x60004EFC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x60004F00: jal         0x60000E68
    // 0x60004F04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world2_E68(rdram, ctx);
        goto after_6;
    // 0x60004F04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x60004F08: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60004F0C: addiu       $a0, $a0, 0x4E74
    ctx->r4 = ADD32(ctx->r4, 0X4E74);
    // 0x60004F10: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60004F14: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60004F18: jal         0x60000994
    // 0x60004F1C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world2_994(rdram, ctx);
        goto after_7;
    // 0x60004F1C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_7:
    // 0x60004F20: b           L_60004F64
    // 0x60004F24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60004F64;
    // 0x60004F24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60004F28:
    // 0x60004F28: jal         0x60000DE4
    // 0x60004F2C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world2_DE4(rdram, ctx);
        goto after_8;
    // 0x60004F2C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_8:
    // 0x60004F30: jal         0x60000CC4
    // 0x60004F34: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_stage_world2_CC4(rdram, ctx);
        goto after_9;
    // 0x60004F34: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_9:
    // 0x60004F38: jal         0x60000A6C
    // 0x60004F3C: nop

    ovl_stage_world2_A6C(rdram, ctx);
        goto after_10;
    // 0x60004F3C: nop

    after_10:
    // 0x60004F40: jal         0x60000B98
    // 0x60004F44: addiu       $a0, $zero, 0x10D
    ctx->r4 = ADD32(0, 0X10D);
    ovl_stage_world2_B98(rdram, ctx);
        goto after_11;
    // 0x60004F44: addiu       $a0, $zero, 0x10D
    ctx->r4 = ADD32(0, 0X10D);
    after_11:
    // 0x60004F48: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60004F4C: addiu       $a0, $a0, 0x45F0
    ctx->r4 = ADD32(ctx->r4, 0X45F0);
    // 0x60004F50: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60004F54: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60004F58: jal         0x60000994
    // 0x60004F5C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world2_994(rdram, ctx);
        goto after_12;
    // 0x60004F5C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_12:
    // 0x60004F60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60004F64:
    // 0x60004F64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60004F68: jr          $ra
    // 0x60004F6C: nop

    return;
    // 0x60004F6C: nop

;}
RECOMP_FUNC void ovl_stage_world2_4F70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004F70: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x60004F74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60004F78: jal         0x60000E74
    // 0x60004F7C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    ovl_stage_world2_E74(rdram, ctx);
        goto after_0;
    // 0x60004F7C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_0:
    // 0x60004F80: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60004F84: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x60004F88: jal         0x600006C4
    // 0x60004F8C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world2_6C4(rdram, ctx);
        goto after_1;
    // 0x60004F8C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x60004F90: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x60004F94: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60004F98: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x60004F9C: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x60004FA0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x60004FA4: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x60004FA8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x60004FAC: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x60004FB0: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x60004FB4: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x60004FB8: jal         0x60000E74
    // 0x60004FBC: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    ovl_stage_world2_E74(rdram, ctx);
        goto after_2;
    // 0x60004FBC: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    after_2:
    // 0x60004FC0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60004FC4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x60004FC8: jal         0x600006C4
    // 0x60004FCC: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world2_6C4(rdram, ctx);
        goto after_3;
    // 0x60004FCC: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_3:
    // 0x60004FD0: jal         0x60000E74
    // 0x60004FD4: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    ovl_stage_world2_E74(rdram, ctx);
        goto after_4;
    // 0x60004FD4: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_4:
    // 0x60004FD8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60004FDC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x60004FE0: jal         0x600006C4
    // 0x60004FE4: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world2_6C4(rdram, ctx);
        goto after_5;
    // 0x60004FE4: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_5:
    // 0x60004FE8: lui         $at, 0x4278
    ctx->r1 = S32(0X4278 << 16);
    // 0x60004FEC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60004FF0: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x60004FF4: jal         0x60000E74
    // 0x60004FF8: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    ovl_stage_world2_E74(rdram, ctx);
        goto after_6;
    // 0x60004FF8: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    after_6:
    // 0x60004FFC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60005000: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x60005004: jal         0x600006C4
    // 0x60005008: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world2_6C4(rdram, ctx);
        goto after_7;
    // 0x60005008: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_7:
    // 0x6000500C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005010: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x60005014: jr          $ra
    // 0x60005018: nop

    return;
    // 0x60005018: nop

;}
RECOMP_FUNC void ovl_stage_world2_501C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000501C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x60005020: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60005024: jal         0x60000BB0
    // 0x60005028: addiu       $a0, $zero, 0x93
    ctx->r4 = ADD32(0, 0X93);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_0;
    // 0x60005028: addiu       $a0, $zero, 0x93
    ctx->r4 = ADD32(0, 0X93);
    after_0:
    // 0x6000502C: bne         $v0, $zero, L_6000503C
    if (ctx->r2 != 0) {
        // 0x60005030: addiu       $t6, $zero, 0x6E
        ctx->r14 = ADD32(0, 0X6E);
            goto L_6000503C;
    }
    // 0x60005030: addiu       $t6, $zero, 0x6E
    ctx->r14 = ADD32(0, 0X6E);
    // 0x60005034: b           L_60005080
    // 0x60005038: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
        goto L_60005080;
    // 0x60005038: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
L_6000503C:
    // 0x6000503C: jal         0x60000BB0
    // 0x60005040: addiu       $a0, $zero, 0x92
    ctx->r4 = ADD32(0, 0X92);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_1;
    // 0x60005040: addiu       $a0, $zero, 0x92
    ctx->r4 = ADD32(0, 0X92);
    after_1:
    // 0x60005044: bne         $v0, $zero, L_60005054
    if (ctx->r2 != 0) {
        // 0x60005048: addiu       $t7, $zero, 0x6D
        ctx->r15 = ADD32(0, 0X6D);
            goto L_60005054;
    }
    // 0x60005048: addiu       $t7, $zero, 0x6D
    ctx->r15 = ADD32(0, 0X6D);
    // 0x6000504C: b           L_60005080
    // 0x60005050: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
        goto L_60005080;
    // 0x60005050: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
L_60005054:
    // 0x60005054: jal         0x60000BB0
    // 0x60005058: addiu       $a0, $zero, 0x91
    ctx->r4 = ADD32(0, 0X91);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_2;
    // 0x60005058: addiu       $a0, $zero, 0x91
    ctx->r4 = ADD32(0, 0X91);
    after_2:
    // 0x6000505C: bne         $v0, $zero, L_6000506C
    if (ctx->r2 != 0) {
        // 0x60005060: addiu       $t8, $zero, 0x6C
        ctx->r24 = ADD32(0, 0X6C);
            goto L_6000506C;
    }
    // 0x60005060: addiu       $t8, $zero, 0x6C
    ctx->r24 = ADD32(0, 0X6C);
    // 0x60005064: b           L_60005080
    // 0x60005068: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
        goto L_60005080;
    // 0x60005068: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
L_6000506C:
    // 0x6000506C: jal         0x60000BB0
    // 0x60005070: addiu       $a0, $zero, 0x90
    ctx->r4 = ADD32(0, 0X90);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_3;
    // 0x60005070: addiu       $a0, $zero, 0x90
    ctx->r4 = ADD32(0, 0X90);
    after_3:
    // 0x60005074: bne         $v0, $zero, L_60005080
    if (ctx->r2 != 0) {
        // 0x60005078: addiu       $t9, $zero, 0x6B
        ctx->r25 = ADD32(0, 0X6B);
            goto L_60005080;
    }
    // 0x60005078: addiu       $t9, $zero, 0x6B
    ctx->r25 = ADD32(0, 0X6B);
    // 0x6000507C: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
L_60005080:
    // 0x60005080: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x60005084: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x60005088: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x6000508C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60005090: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x60005094: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x60005098: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x6000509C: addiu       $t3, $sp, 0x1C
    ctx->r11 = ADD32(ctx->r29, 0X1C);
    // 0x600050A0: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x600050A4: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x600050A8: sw          $t3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r11;
    // 0x600050AC: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x600050B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x600050B4: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x600050B8: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x600050BC: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x600050C0: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x600050C4: jal         0x600006C4
    // 0x600050C8: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    ovl_stage_world2_6C4(rdram, ctx);
        goto after_4;
    // 0x600050C8: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    after_4:
    // 0x600050CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600050D0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x600050D4: jr          $ra
    // 0x600050D8: nop

    return;
    // 0x600050D8: nop

;}
RECOMP_FUNC void ovl_stage_world2_50DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600050DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600050E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600050E4: jal         0x60000BB0
    // 0x600050E8: addiu       $a0, $zero, 0xF7
    ctx->r4 = ADD32(0, 0XF7);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_0;
    // 0x600050E8: addiu       $a0, $zero, 0xF7
    ctx->r4 = ADD32(0, 0XF7);
    after_0:
    // 0x600050EC: bne         $v0, $zero, L_60005170
    if (ctx->r2 != 0) {
        // 0x600050F0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60005170;
    }
    // 0x600050F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600050F4: jal         0x60000BB0
    // 0x600050F8: addiu       $a0, $zero, 0x93
    ctx->r4 = ADD32(0, 0X93);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_1;
    // 0x600050F8: addiu       $a0, $zero, 0x93
    ctx->r4 = ADD32(0, 0X93);
    after_1:
    // 0x600050FC: bne         $v0, $zero, L_60005114
    if (ctx->r2 != 0) {
        // 0x60005100: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_60005114;
    }
    // 0x60005100: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x60005104: jal         0x60000E80
    // 0x60005108: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_stage_world2_E80(rdram, ctx);
        goto after_2;
    // 0x60005108: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x6000510C: b           L_60005170
    // 0x60005110: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005170;
    // 0x60005110: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005114:
    // 0x60005114: jal         0x60000BB0
    // 0x60005118: addiu       $a0, $zero, 0x92
    ctx->r4 = ADD32(0, 0X92);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_3;
    // 0x60005118: addiu       $a0, $zero, 0x92
    ctx->r4 = ADD32(0, 0X92);
    after_3:
    // 0x6000511C: bne         $v0, $zero, L_60005134
    if (ctx->r2 != 0) {
        // 0x60005120: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_60005134;
    }
    // 0x60005120: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x60005124: jal         0x60000E80
    // 0x60005128: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_stage_world2_E80(rdram, ctx);
        goto after_4;
    // 0x60005128: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_4:
    // 0x6000512C: b           L_60005170
    // 0x60005130: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005170;
    // 0x60005130: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005134:
    // 0x60005134: jal         0x60000BB0
    // 0x60005138: addiu       $a0, $zero, 0x91
    ctx->r4 = ADD32(0, 0X91);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_5;
    // 0x60005138: addiu       $a0, $zero, 0x91
    ctx->r4 = ADD32(0, 0X91);
    after_5:
    // 0x6000513C: bne         $v0, $zero, L_60005154
    if (ctx->r2 != 0) {
        // 0x60005140: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_60005154;
    }
    // 0x60005140: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x60005144: jal         0x60000E80
    // 0x60005148: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world2_E80(rdram, ctx);
        goto after_6;
    // 0x60005148: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x6000514C: b           L_60005170
    // 0x60005150: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005170;
    // 0x60005150: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005154:
    // 0x60005154: jal         0x60000BB0
    // 0x60005158: addiu       $a0, $zero, 0x90
    ctx->r4 = ADD32(0, 0X90);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_7;
    // 0x60005158: addiu       $a0, $zero, 0x90
    ctx->r4 = ADD32(0, 0X90);
    after_7:
    // 0x6000515C: bne         $v0, $zero, L_6000516C
    if (ctx->r2 != 0) {
        // 0x60005160: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_6000516C;
    }
    // 0x60005160: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x60005164: jal         0x60000E80
    // 0x60005168: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world2_E80(rdram, ctx);
        goto after_8;
    // 0x60005168: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
L_6000516C:
    // 0x6000516C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005170:
    // 0x60005170: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60005174: jr          $ra
    // 0x60005178: nop

    return;
    // 0x60005178: nop

;}
RECOMP_FUNC void ovl_stage_world2_517C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000517C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x60005180: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60005184: jal         0x60000C1C
    // 0x60005188: nop

    ovl_stage_world2_C1C(rdram, ctx);
        goto after_0;
    // 0x60005188: nop

    after_0:
    // 0x6000518C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x60005190: jal         0x60000BB0
    // 0x60005194: addiu       $a0, $zero, 0x89
    ctx->r4 = ADD32(0, 0X89);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_1;
    // 0x60005194: addiu       $a0, $zero, 0x89
    ctx->r4 = ADD32(0, 0X89);
    after_1:
    // 0x60005198: bne         $v0, $zero, L_60005248
    if (ctx->r2 != 0) {
        // 0x6000519C: nop
    
            goto L_60005248;
    }
    // 0x6000519C: nop

    // 0x600051A0: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x600051A4: addiu       $at, $zero, 0x839
    ctx->r1 = ADD32(0, 0X839);
    // 0x600051A8: lw          $v0, 0x8($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X8);
    // 0x600051AC: nop

    // 0x600051B0: bne         $v0, $at, L_600051E4
    if (ctx->r2 != ctx->r1) {
        // 0x600051B4: addiu       $at, $zero, 0x83B
        ctx->r1 = ADD32(0, 0X83B);
            goto L_600051E4;
    }
    // 0x600051B4: addiu       $at, $zero, 0x83B
    ctx->r1 = ADD32(0, 0X83B);
    // 0x600051B8: jal         0x60000BB0
    // 0x600051BC: addiu       $a0, $zero, 0x199
    ctx->r4 = ADD32(0, 0X199);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_2;
    // 0x600051BC: addiu       $a0, $zero, 0x199
    ctx->r4 = ADD32(0, 0X199);
    after_2:
    // 0x600051C0: bne         $v0, $zero, L_600052A4
    if (ctx->r2 != 0) {
        // 0x600051C4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600052A4;
    }
    // 0x600051C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600051C8: jal         0x60000B98
    // 0x600051CC: addiu       $a0, $zero, 0x199
    ctx->r4 = ADD32(0, 0X199);
    ovl_stage_world2_B98(rdram, ctx);
        goto after_3;
    // 0x600051CC: addiu       $a0, $zero, 0x199
    ctx->r4 = ADD32(0, 0X199);
    after_3:
    // 0x600051D0: jal         0x60000A60
    // 0x600051D4: addiu       $a0, $zero, 0xC09
    ctx->r4 = ADD32(0, 0XC09);
    ovl_stage_world2_A60(rdram, ctx);
        goto after_4;
    // 0x600051D4: addiu       $a0, $zero, 0xC09
    ctx->r4 = ADD32(0, 0XC09);
    after_4:
    // 0x600051D8: b           L_600052A4
    // 0x600051DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600052A4;
    // 0x600051DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600051E0: addiu       $at, $zero, 0x83B
    ctx->r1 = ADD32(0, 0X83B);
L_600051E4:
    // 0x600051E4: bne         $v0, $at, L_60005218
    if (ctx->r2 != ctx->r1) {
        // 0x600051E8: addiu       $at, $zero, 0x83C
        ctx->r1 = ADD32(0, 0X83C);
            goto L_60005218;
    }
    // 0x600051E8: addiu       $at, $zero, 0x83C
    ctx->r1 = ADD32(0, 0X83C);
    // 0x600051EC: jal         0x60000BB0
    // 0x600051F0: addiu       $a0, $zero, 0x19A
    ctx->r4 = ADD32(0, 0X19A);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_5;
    // 0x600051F0: addiu       $a0, $zero, 0x19A
    ctx->r4 = ADD32(0, 0X19A);
    after_5:
    // 0x600051F4: bne         $v0, $zero, L_600052A4
    if (ctx->r2 != 0) {
        // 0x600051F8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600052A4;
    }
    // 0x600051F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600051FC: jal         0x60000B98
    // 0x60005200: addiu       $a0, $zero, 0x19A
    ctx->r4 = ADD32(0, 0X19A);
    ovl_stage_world2_B98(rdram, ctx);
        goto after_6;
    // 0x60005200: addiu       $a0, $zero, 0x19A
    ctx->r4 = ADD32(0, 0X19A);
    after_6:
    // 0x60005204: jal         0x60000A60
    // 0x60005208: addiu       $a0, $zero, 0xC0A
    ctx->r4 = ADD32(0, 0XC0A);
    ovl_stage_world2_A60(rdram, ctx);
        goto after_7;
    // 0x60005208: addiu       $a0, $zero, 0xC0A
    ctx->r4 = ADD32(0, 0XC0A);
    after_7:
    // 0x6000520C: b           L_600052A4
    // 0x60005210: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600052A4;
    // 0x60005210: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005214: addiu       $at, $zero, 0x83C
    ctx->r1 = ADD32(0, 0X83C);
L_60005218:
    // 0x60005218: bne         $v0, $at, L_600052A4
    if (ctx->r2 != ctx->r1) {
        // 0x6000521C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600052A4;
    }
    // 0x6000521C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005220: jal         0x60000BB0
    // 0x60005224: addiu       $a0, $zero, 0x19B
    ctx->r4 = ADD32(0, 0X19B);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_8;
    // 0x60005224: addiu       $a0, $zero, 0x19B
    ctx->r4 = ADD32(0, 0X19B);
    after_8:
    // 0x60005228: bne         $v0, $zero, L_600052A4
    if (ctx->r2 != 0) {
        // 0x6000522C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600052A4;
    }
    // 0x6000522C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005230: jal         0x60000B98
    // 0x60005234: addiu       $a0, $zero, 0x19B
    ctx->r4 = ADD32(0, 0X19B);
    ovl_stage_world2_B98(rdram, ctx);
        goto after_9;
    // 0x60005234: addiu       $a0, $zero, 0x19B
    ctx->r4 = ADD32(0, 0X19B);
    after_9:
    // 0x60005238: jal         0x60000A60
    // 0x6000523C: addiu       $a0, $zero, 0xC0B
    ctx->r4 = ADD32(0, 0XC0B);
    ovl_stage_world2_A60(rdram, ctx);
        goto after_10;
    // 0x6000523C: addiu       $a0, $zero, 0xC0B
    ctx->r4 = ADD32(0, 0XC0B);
    after_10:
    // 0x60005240: b           L_600052A4
    // 0x60005244: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600052A4;
    // 0x60005244: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005248:
    // 0x60005248: jal         0x60000BB0
    // 0x6000524C: addiu       $a0, $zero, 0x81
    ctx->r4 = ADD32(0, 0X81);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_11;
    // 0x6000524C: addiu       $a0, $zero, 0x81
    ctx->r4 = ADD32(0, 0X81);
    after_11:
    // 0x60005250: bne         $v0, $zero, L_600052A4
    if (ctx->r2 != 0) {
        // 0x60005254: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600052A4;
    }
    // 0x60005254: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005258: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x6000525C: addiu       $at, $zero, 0x844
    ctx->r1 = ADD32(0, 0X844);
    // 0x60005260: lw          $t8, 0x8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X8);
    // 0x60005264: nop

    // 0x60005268: bne         $t8, $at, L_600052A4
    if (ctx->r24 != ctx->r1) {
        // 0x6000526C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600052A4;
    }
    // 0x6000526C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005270: jal         0x60000BB0
    // 0x60005274: addiu       $a0, $zero, 0x19C
    ctx->r4 = ADD32(0, 0X19C);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_12;
    // 0x60005274: addiu       $a0, $zero, 0x19C
    ctx->r4 = ADD32(0, 0X19C);
    after_12:
    // 0x60005278: bne         $v0, $zero, L_600052A4
    if (ctx->r2 != 0) {
        // 0x6000527C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600052A4;
    }
    // 0x6000527C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005280: jal         0x60000BB0
    // 0x60005284: addiu       $a0, $zero, 0x18F
    ctx->r4 = ADD32(0, 0X18F);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_13;
    // 0x60005284: addiu       $a0, $zero, 0x18F
    ctx->r4 = ADD32(0, 0X18F);
    after_13:
    // 0x60005288: bne         $v0, $zero, L_600052A4
    if (ctx->r2 != 0) {
        // 0x6000528C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600052A4;
    }
    // 0x6000528C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005290: jal         0x60000B98
    // 0x60005294: addiu       $a0, $zero, 0x19C
    ctx->r4 = ADD32(0, 0X19C);
    ovl_stage_world2_B98(rdram, ctx);
        goto after_14;
    // 0x60005294: addiu       $a0, $zero, 0x19C
    ctx->r4 = ADD32(0, 0X19C);
    after_14:
    // 0x60005298: jal         0x60000A60
    // 0x6000529C: addiu       $a0, $zero, 0xC0C
    ctx->r4 = ADD32(0, 0XC0C);
    ovl_stage_world2_A60(rdram, ctx);
        goto after_15;
    // 0x6000529C: addiu       $a0, $zero, 0xC0C
    ctx->r4 = ADD32(0, 0XC0C);
    after_15:
    // 0x600052A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600052A4:
    // 0x600052A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x600052A8: jr          $ra
    // 0x600052AC: nop

    return;
    // 0x600052AC: nop

;}
RECOMP_FUNC void ovl_stage_world2_52B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600052B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x600052B4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x600052B8: jal         0x60000C1C
    // 0x600052BC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    ovl_stage_world2_C1C(rdram, ctx);
        goto after_0;
    // 0x600052BC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x600052C0: lw          $t6, 0x8($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X8);
    // 0x600052C4: addiu       $at, $zero, 0x842
    ctx->r1 = ADD32(0, 0X842);
    // 0x600052C8: bne         $t6, $at, L_600052E0
    if (ctx->r14 != ctx->r1) {
        // 0x600052CC: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_600052E0;
    }
    // 0x600052CC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x600052D0: jal         0x60000A60
    // 0x600052D4: addiu       $a0, $zero, 0xB18
    ctx->r4 = ADD32(0, 0XB18);
    ovl_stage_world2_A60(rdram, ctx);
        goto after_1;
    // 0x600052D4: addiu       $a0, $zero, 0xB18
    ctx->r4 = ADD32(0, 0XB18);
    after_1:
    // 0x600052D8: b           L_600052E8
    // 0x600052DC: nop

        goto L_600052E8;
    // 0x600052DC: nop

L_600052E0:
    // 0x600052E0: jal         0x60000A60
    // 0x600052E4: addiu       $a0, $zero, 0xB23
    ctx->r4 = ADD32(0, 0XB23);
    ovl_stage_world2_A60(rdram, ctx);
        goto after_2;
    // 0x600052E4: addiu       $a0, $zero, 0xB23
    ctx->r4 = ADD32(0, 0XB23);
    after_2:
L_600052E8:
    // 0x600052E8: jal         0x600009D0
    // 0x600052EC: nop

    ovl_stage_world2_9D0(rdram, ctx);
        goto after_3;
    // 0x600052EC: nop

    after_3:
    // 0x600052F0: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x600052F4: nop

    // 0x600052F8: andi        $t8, $t7, 0x800
    ctx->r24 = ctx->r15 & 0X800;
    // 0x600052FC: beq         $t8, $zero, L_60005320
    if (ctx->r24 == 0) {
        // 0x60005300: nop
    
            goto L_60005320;
    }
    // 0x60005300: nop

L_60005304:
    // 0x60005304: jal         0x600009D0
    // 0x60005308: nop

    ovl_stage_world2_9D0(rdram, ctx);
        goto after_4;
    // 0x60005308: nop

    after_4:
    // 0x6000530C: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x60005310: nop

    // 0x60005314: andi        $t0, $t9, 0x800
    ctx->r8 = ctx->r25 & 0X800;
    // 0x60005318: bne         $t0, $zero, L_60005304
    if (ctx->r8 != 0) {
        // 0x6000531C: nop
    
            goto L_60005304;
    }
    // 0x6000531C: nop

L_60005320:
    // 0x60005320: jal         0x600009C4
    // 0x60005324: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    ovl_stage_world2_9C4(rdram, ctx);
        goto after_5;
    // 0x60005324: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_5:
    // 0x60005328: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x6000532C: nop

    // 0x60005330: ori         $t2, $t1, 0x200
    ctx->r10 = ctx->r9 | 0X200;
    // 0x60005334: jal         0x600009AC
    // 0x60005338: sw          $t2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r10;
    ovl_stage_world2_9AC(rdram, ctx);
        goto after_6;
    // 0x60005338: sw          $t2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r10;
    after_6:
    // 0x6000533C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x60005340: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x60005344: jr          $ra
    // 0x60005348: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x60005348: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_stage_world2_534C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000534C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60005350: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60005354: jal         0x60000C1C
    // 0x60005358: nop

    ovl_stage_world2_C1C(rdram, ctx);
        goto after_0;
    // 0x60005358: nop

    after_0:
    // 0x6000535C: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x60005360: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x60005364: bne         $v1, $at, L_60005388
    if (ctx->r3 != ctx->r1) {
        // 0x60005368: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_60005388;
    }
    // 0x60005368: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x6000536C: addiu       $a0, $a0, 0x52B0
    ctx->r4 = ADD32(ctx->r4, 0X52B0);
    // 0x60005370: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60005374: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60005378: jal         0x60000994
    // 0x6000537C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world2_994(rdram, ctx);
        goto after_1;
    // 0x6000537C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x60005380: b           L_600053AC
    // 0x60005384: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600053AC;
    // 0x60005384: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005388:
    // 0x60005388: lw          $t6, 0x8($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X8);
    // 0x6000538C: addiu       $at, $zero, 0x842
    ctx->r1 = ADD32(0, 0X842);
    // 0x60005390: bne         $t6, $at, L_600053A8
    if (ctx->r14 != ctx->r1) {
        // 0x60005394: addiu       $at, $zero, 0x7
        ctx->r1 = ADD32(0, 0X7);
            goto L_600053A8;
    }
    // 0x60005394: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x60005398: beq         $v1, $at, L_600053AC
    if (ctx->r3 == ctx->r1) {
        // 0x6000539C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600053AC;
    }
    // 0x6000539C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600053A0: jal         0x60000B98
    // 0x600053A4: addiu       $a0, $zero, 0x1BF
    ctx->r4 = ADD32(0, 0X1BF);
    ovl_stage_world2_B98(rdram, ctx);
        goto after_2;
    // 0x600053A4: addiu       $a0, $zero, 0x1BF
    ctx->r4 = ADD32(0, 0X1BF);
    after_2:
L_600053A8:
    // 0x600053A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600053AC:
    // 0x600053AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600053B0: jr          $ra
    // 0x600053B4: nop

    return;
    // 0x600053B4: nop

;}
RECOMP_FUNC void ovl_stage_world2_53B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600053B8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x600053BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x600053C0: jal         0x60000C1C
    // 0x600053C4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    ovl_stage_world2_C1C(rdram, ctx);
        goto after_0;
    // 0x600053C4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x600053C8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x600053CC: jal         0x60000A60
    // 0x600053D0: addiu       $a0, $zero, 0xBFA
    ctx->r4 = ADD32(0, 0XBFA);
    ovl_stage_world2_A60(rdram, ctx);
        goto after_1;
    // 0x600053D0: addiu       $a0, $zero, 0xBFA
    ctx->r4 = ADD32(0, 0XBFA);
    after_1:
    // 0x600053D4: jal         0x600009D0
    // 0x600053D8: nop

    ovl_stage_world2_9D0(rdram, ctx);
        goto after_2;
    // 0x600053D8: nop

    after_2:
    // 0x600053DC: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x600053E0: nop

    // 0x600053E4: andi        $t7, $t6, 0x800
    ctx->r15 = ctx->r14 & 0X800;
    // 0x600053E8: beq         $t7, $zero, L_6000540C
    if (ctx->r15 == 0) {
        // 0x600053EC: nop
    
            goto L_6000540C;
    }
    // 0x600053EC: nop

L_600053F0:
    // 0x600053F0: jal         0x600009D0
    // 0x600053F4: nop

    ovl_stage_world2_9D0(rdram, ctx);
        goto after_3;
    // 0x600053F4: nop

    after_3:
    // 0x600053F8: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x600053FC: nop

    // 0x60005400: andi        $t9, $t8, 0x800
    ctx->r25 = ctx->r24 & 0X800;
    // 0x60005404: bne         $t9, $zero, L_600053F0
    if (ctx->r25 != 0) {
        // 0x60005408: nop
    
            goto L_600053F0;
    }
    // 0x60005408: nop

L_6000540C:
    // 0x6000540C: jal         0x600009C4
    // 0x60005410: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    ovl_stage_world2_9C4(rdram, ctx);
        goto after_4;
    // 0x60005410: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_4:
    // 0x60005414: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x60005418: nop

    // 0x6000541C: ori         $t1, $t0, 0x200
    ctx->r9 = ctx->r8 | 0X200;
    // 0x60005420: jal         0x600009AC
    // 0x60005424: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
    ovl_stage_world2_9AC(rdram, ctx);
        goto after_5;
    // 0x60005424: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
    after_5:
    // 0x60005428: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x6000542C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x60005430: jr          $ra
    // 0x60005434: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x60005434: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_stage_world2_5438(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005438: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x6000543C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60005440: jal         0x60000C1C
    // 0x60005444: nop

    ovl_stage_world2_C1C(rdram, ctx);
        goto after_0;
    // 0x60005444: nop

    after_0:
    // 0x60005448: lw          $t6, 0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC);
    // 0x6000544C: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x60005450: bne         $t6, $at, L_6000546C
    if (ctx->r14 != ctx->r1) {
        // 0x60005454: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_6000546C;
    }
    // 0x60005454: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60005458: addiu       $a0, $a0, 0x53B8
    ctx->r4 = ADD32(ctx->r4, 0X53B8);
    // 0x6000545C: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60005460: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60005464: jal         0x60000994
    // 0x60005468: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world2_994(rdram, ctx);
        goto after_1;
    // 0x60005468: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
L_6000546C:
    // 0x6000546C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005470: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60005474: jr          $ra
    // 0x60005478: nop

    return;
    // 0x60005478: nop

;}
RECOMP_FUNC void ovl_stage_world2_547C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000547C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60005480: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60005484: jal         0x600009C4
    // 0x60005488: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    ovl_stage_world2_9C4(rdram, ctx);
        goto after_0;
    // 0x60005488: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_0:
    // 0x6000548C: jal         0x60000BA4
    // 0x60005490: addiu       $a0, $zero, 0x117
    ctx->r4 = ADD32(0, 0X117);
    ovl_stage_world2_BA4(rdram, ctx);
        goto after_1;
    // 0x60005490: addiu       $a0, $zero, 0x117
    ctx->r4 = ADD32(0, 0X117);
    after_1:
    // 0x60005494: jal         0x600009AC
    // 0x60005498: nop

    ovl_stage_world2_9AC(rdram, ctx);
        goto after_2;
    // 0x60005498: nop

    after_2:
    // 0x6000549C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600054A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600054A4: jr          $ra
    // 0x600054A8: nop

    return;
    // 0x600054A8: nop

;}
RECOMP_FUNC void ovl_stage_world2_54AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600054AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600054B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600054B4: jal         0x60000BB0
    // 0x600054B8: addiu       $a0, $zero, 0x118
    ctx->r4 = ADD32(0, 0X118);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_0;
    // 0x600054B8: addiu       $a0, $zero, 0x118
    ctx->r4 = ADD32(0, 0X118);
    after_0:
    // 0x600054BC: bne         $v0, $zero, L_60005510
    if (ctx->r2 != 0) {
        // 0x600054C0: nop
    
            goto L_60005510;
    }
    // 0x600054C0: nop

    // 0x600054C4: jal         0x60000BB0
    // 0x600054C8: addiu       $a0, $zero, 0x117
    ctx->r4 = ADD32(0, 0X117);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_1;
    // 0x600054C8: addiu       $a0, $zero, 0x117
    ctx->r4 = ADD32(0, 0X117);
    after_1:
    // 0x600054CC: bne         $v0, $zero, L_60005510
    if (ctx->r2 != 0) {
        // 0x600054D0: nop
    
            goto L_60005510;
    }
    // 0x600054D0: nop

    // 0x600054D4: jal         0x60000B98
    // 0x600054D8: addiu       $a0, $zero, 0x117
    ctx->r4 = ADD32(0, 0X117);
    ovl_stage_world2_B98(rdram, ctx);
        goto after_2;
    // 0x600054D8: addiu       $a0, $zero, 0x117
    ctx->r4 = ADD32(0, 0X117);
    after_2:
    // 0x600054DC: jal         0x60000B98
    // 0x600054E0: addiu       $a0, $zero, 0x118
    ctx->r4 = ADD32(0, 0X118);
    ovl_stage_world2_B98(rdram, ctx);
        goto after_3;
    // 0x600054E0: addiu       $a0, $zero, 0x118
    ctx->r4 = ADD32(0, 0X118);
    after_3:
    // 0x600054E4: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x600054E8: jal         0x60000E80
    // 0x600054EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world2_E80(rdram, ctx);
        goto after_4;
    // 0x600054EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x600054F0: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600054F4: addiu       $a0, $a0, 0x547C
    ctx->r4 = ADD32(ctx->r4, 0X547C);
    // 0x600054F8: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x600054FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60005500: jal         0x60000994
    // 0x60005504: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world2_994(rdram, ctx);
        goto after_5;
    // 0x60005504: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
    // 0x60005508: b           L_60005568
    // 0x6000550C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005568;
    // 0x6000550C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005510:
    // 0x60005510: jal         0x60000BB0
    // 0x60005514: addiu       $a0, $zero, 0x119
    ctx->r4 = ADD32(0, 0X119);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_6;
    // 0x60005514: addiu       $a0, $zero, 0x119
    ctx->r4 = ADD32(0, 0X119);
    after_6:
    // 0x60005518: bne         $v0, $zero, L_60005568
    if (ctx->r2 != 0) {
        // 0x6000551C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60005568;
    }
    // 0x6000551C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005520: jal         0x60000BB0
    // 0x60005524: addiu       $a0, $zero, 0x117
    ctx->r4 = ADD32(0, 0X117);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_7;
    // 0x60005524: addiu       $a0, $zero, 0x117
    ctx->r4 = ADD32(0, 0X117);
    after_7:
    // 0x60005528: bne         $v0, $zero, L_60005568
    if (ctx->r2 != 0) {
        // 0x6000552C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60005568;
    }
    // 0x6000552C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005530: jal         0x60000B98
    // 0x60005534: addiu       $a0, $zero, 0x117
    ctx->r4 = ADD32(0, 0X117);
    ovl_stage_world2_B98(rdram, ctx);
        goto after_8;
    // 0x60005534: addiu       $a0, $zero, 0x117
    ctx->r4 = ADD32(0, 0X117);
    after_8:
    // 0x60005538: jal         0x60000B98
    // 0x6000553C: addiu       $a0, $zero, 0x119
    ctx->r4 = ADD32(0, 0X119);
    ovl_stage_world2_B98(rdram, ctx);
        goto after_9;
    // 0x6000553C: addiu       $a0, $zero, 0x119
    ctx->r4 = ADD32(0, 0X119);
    after_9:
    // 0x60005540: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x60005544: jal         0x60000E68
    // 0x60005548: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world2_E68(rdram, ctx);
        goto after_10;
    // 0x60005548: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_10:
    // 0x6000554C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60005550: addiu       $a0, $a0, 0x547C
    ctx->r4 = ADD32(ctx->r4, 0X547C);
    // 0x60005554: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60005558: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x6000555C: jal         0x60000994
    // 0x60005560: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world2_994(rdram, ctx);
        goto after_11;
    // 0x60005560: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_11:
    // 0x60005564: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005568:
    // 0x60005568: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x6000556C: jr          $ra
    // 0x60005570: nop

    return;
    // 0x60005570: nop

;}
RECOMP_FUNC void ovl_stage_world2_5574(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005574: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x60005578: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x6000557C: jal         0x60000C1C
    // 0x60005580: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    ovl_stage_world2_C1C(rdram, ctx);
        goto after_0;
    // 0x60005580: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x60005584: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x60005588: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x6000558C: andi        $t7, $t6, 0x800
    ctx->r15 = ctx->r14 & 0X800;
    // 0x60005590: beq         $t7, $zero, L_600055B4
    if (ctx->r15 == 0) {
        // 0x60005594: nop
    
            goto L_600055B4;
    }
    // 0x60005594: nop

L_60005598:
    // 0x60005598: jal         0x600009D0
    // 0x6000559C: nop

    ovl_stage_world2_9D0(rdram, ctx);
        goto after_1;
    // 0x6000559C: nop

    after_1:
    // 0x600055A0: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x600055A4: nop

    // 0x600055A8: andi        $t9, $t8, 0x800
    ctx->r25 = ctx->r24 & 0X800;
    // 0x600055AC: bne         $t9, $zero, L_60005598
    if (ctx->r25 != 0) {
        // 0x600055B0: nop
    
            goto L_60005598;
    }
    // 0x600055B0: nop

L_600055B4:
    // 0x600055B4: jal         0x60000E44
    // 0x600055B8: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    ovl_stage_world2_E44(rdram, ctx);
        goto after_2;
    // 0x600055B8: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_2:
    // 0x600055BC: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x600055C0: jal         0x60000E80
    // 0x600055C4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_stage_world2_E80(rdram, ctx);
        goto after_3;
    // 0x600055C4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x600055C8: jal         0x600009AC
    // 0x600055CC: nop

    ovl_stage_world2_9AC(rdram, ctx);
        goto after_4;
    // 0x600055CC: nop

    after_4:
    // 0x600055D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x600055D4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x600055D8: jr          $ra
    // 0x600055DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x600055DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_stage_world2_55E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600055E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600055E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600055E8: jal         0x60000BB0
    // 0x600055EC: addiu       $a0, $zero, 0x185
    ctx->r4 = ADD32(0, 0X185);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_0;
    // 0x600055EC: addiu       $a0, $zero, 0x185
    ctx->r4 = ADD32(0, 0X185);
    after_0:
    // 0x600055F0: beq         $v0, $zero, L_6000560C
    if (ctx->r2 == 0) {
        // 0x600055F4: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_6000560C;
    }
    // 0x600055F4: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600055F8: addiu       $a0, $a0, 0x5574
    ctx->r4 = ADD32(ctx->r4, 0X5574);
    // 0x600055FC: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60005600: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60005604: jal         0x60000994
    // 0x60005608: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world2_994(rdram, ctx);
        goto after_1;
    // 0x60005608: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
L_6000560C:
    // 0x6000560C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005610: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60005614: jr          $ra
    // 0x60005618: nop

    return;
    // 0x60005618: nop

;}
RECOMP_FUNC void ovl_stage_world2_561C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000561C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x60005620: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x60005624: jal         0x60000C1C
    // 0x60005628: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    ovl_stage_world2_C1C(rdram, ctx);
        goto after_0;
    // 0x60005628: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x6000562C: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x60005630: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x60005634: andi        $t7, $t6, 0x800
    ctx->r15 = ctx->r14 & 0X800;
    // 0x60005638: beq         $t7, $zero, L_6000565C
    if (ctx->r15 == 0) {
        // 0x6000563C: nop
    
            goto L_6000565C;
    }
    // 0x6000563C: nop

L_60005640:
    // 0x60005640: jal         0x600009D0
    // 0x60005644: nop

    ovl_stage_world2_9D0(rdram, ctx);
        goto after_1;
    // 0x60005644: nop

    after_1:
    // 0x60005648: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x6000564C: nop

    // 0x60005650: andi        $t9, $t8, 0x800
    ctx->r25 = ctx->r24 & 0X800;
    // 0x60005654: bne         $t9, $zero, L_60005640
    if (ctx->r25 != 0) {
        // 0x60005658: nop
    
            goto L_60005640;
    }
    // 0x60005658: nop

L_6000565C:
    // 0x6000565C: jal         0x60000E44
    // 0x60005660: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    ovl_stage_world2_E44(rdram, ctx);
        goto after_2;
    // 0x60005660: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_2:
    // 0x60005664: jal         0x600009AC
    // 0x60005668: nop

    ovl_stage_world2_9AC(rdram, ctx);
        goto after_3;
    // 0x60005668: nop

    after_3:
    // 0x6000566C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x60005670: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x60005674: jr          $ra
    // 0x60005678: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x60005678: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_stage_world2_567C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000567C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60005680: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60005684: jal         0x60000BB0
    // 0x60005688: addiu       $a0, $zero, 0x180
    ctx->r4 = ADD32(0, 0X180);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_0;
    // 0x60005688: addiu       $a0, $zero, 0x180
    ctx->r4 = ADD32(0, 0X180);
    after_0:
    // 0x6000568C: beq         $v0, $zero, L_600056A8
    if (ctx->r2 == 0) {
        // 0x60005690: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_600056A8;
    }
    // 0x60005690: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60005694: addiu       $a0, $a0, 0x561C
    ctx->r4 = ADD32(ctx->r4, 0X561C);
    // 0x60005698: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x6000569C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x600056A0: jal         0x60000994
    // 0x600056A4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world2_994(rdram, ctx);
        goto after_1;
    // 0x600056A4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
L_600056A8:
    // 0x600056A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600056AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600056B0: jr          $ra
    // 0x600056B4: nop

    return;
    // 0x600056B4: nop

;}
