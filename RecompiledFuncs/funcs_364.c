#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_stage_world2_56B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600056B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600056BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600056C0: jal         0x60000C1C
    // 0x600056C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_stage_world2_C1C(rdram, ctx);
        goto after_0;
    // 0x600056C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x600056C8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x600056CC: nop

    // 0x600056D0: slti        $at, $a0, 0x63
    ctx->r1 = SIGNED(ctx->r4) < 0X63 ? 1 : 0;
    // 0x600056D4: bne         $at, $zero, L_600056F4
    if (ctx->r1 != 0) {
        // 0x600056D8: addiu       $at, $zero, 0x63
        ctx->r1 = ADD32(0, 0X63);
            goto L_600056F4;
    }
    // 0x600056D8: addiu       $at, $zero, 0x63
    ctx->r1 = ADD32(0, 0X63);
    // 0x600056DC: beq         $a0, $at, L_60005A70
    if (ctx->r4 == ctx->r1) {
        // 0x600056E0: addiu       $at, $zero, 0xFF
        ctx->r1 = ADD32(0, 0XFF);
            goto L_60005A70;
    }
    // 0x600056E0: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x600056E4: beq         $a0, $at, L_60005A80
    if (ctx->r4 == ctx->r1) {
        // 0x600056E8: lui         $v1, 0x6000
        ctx->r3 = S32(0X6000 << 16);
            goto L_60005A80;
    }
    // 0x600056E8: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x600056EC: b           L_60005AEC
    // 0x600056F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005AEC;
    // 0x600056F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600056F4:
    // 0x600056F4: slti        $at, $a0, 0x62
    ctx->r1 = SIGNED(ctx->r4) < 0X62 ? 1 : 0;
    // 0x600056F8: bne         $at, $zero, L_60005710
    if (ctx->r1 != 0) {
        // 0x600056FC: addiu       $at, $zero, 0x62
        ctx->r1 = ADD32(0, 0X62);
            goto L_60005710;
    }
    // 0x600056FC: addiu       $at, $zero, 0x62
    ctx->r1 = ADD32(0, 0X62);
    // 0x60005700: beq         $a0, $at, L_60005A60
    if (ctx->r4 == ctx->r1) {
        // 0x60005704: nop
    
            goto L_60005A60;
    }
    // 0x60005704: nop

    // 0x60005708: b           L_60005AEC
    // 0x6000570C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005AEC;
    // 0x6000570C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005710:
    // 0x60005710: slti        $at, $a0, 0x2D
    ctx->r1 = SIGNED(ctx->r4) < 0X2D ? 1 : 0;
    // 0x60005714: bne         $at, $zero, L_6000572C
    if (ctx->r1 != 0) {
        // 0x60005718: addiu       $at, $zero, 0x61
        ctx->r1 = ADD32(0, 0X61);
            goto L_6000572C;
    }
    // 0x60005718: addiu       $at, $zero, 0x61
    ctx->r1 = ADD32(0, 0X61);
    // 0x6000571C: beq         $a0, $at, L_60005A50
    if (ctx->r4 == ctx->r1) {
        // 0x60005720: nop
    
            goto L_60005A50;
    }
    // 0x60005720: nop

    // 0x60005724: b           L_60005AEC
    // 0x60005728: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005AEC;
    // 0x60005728: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000572C:
    // 0x6000572C: sltiu       $at, $a0, 0x2D
    ctx->r1 = ctx->r4 < 0X2D ? 1 : 0;
    // 0x60005730: beq         $at, $zero, L_60005AE8
    if (ctx->r1 == 0) {
        // 0x60005734: sll         $t6, $a0, 2
        ctx->r14 = S32(ctx->r4 << 2);
            goto L_60005AE8;
    }
    // 0x60005734: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x60005738: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000573C: addu        $at, $at, $t6
    gpr jr_addend_60005748 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x60005740: lw          $t6, 0x5BF8($at)
    ctx->r14 = ADD32(ctx->r1, 0X5BF8);
    // 0x60005744: nop

    // 0x60005748: jr          $t6
    // 0x6000574C: nop

    switch (jr_addend_60005748 >> 2) {
        case 0: goto L_60005750; break;
        case 1: goto L_60005760; break;
        case 2: goto L_60005770; break;
        case 3: goto L_60005780; break;
        case 4: goto L_60005790; break;
        case 5: goto L_600057A0; break;
        case 6: goto L_600057B0; break;
        case 7: goto L_600057C0; break;
        case 8: goto L_600057D0; break;
        case 9: goto L_600057E0; break;
        case 10: goto L_600057F0; break;
        case 11: goto L_60005800; break;
        case 12: goto L_60005810; break;
        case 13: goto L_60005820; break;
        case 14: goto L_60005830; break;
        case 15: goto L_60005840; break;
        case 16: goto L_60005850; break;
        case 17: goto L_60005860; break;
        case 18: goto L_60005870; break;
        case 19: goto L_60005880; break;
        case 20: goto L_60005890; break;
        case 21: goto L_600058A0; break;
        case 22: goto L_600058B0; break;
        case 23: goto L_600058C0; break;
        case 24: goto L_600058D0; break;
        case 25: goto L_600058E0; break;
        case 26: goto L_600058F0; break;
        case 27: goto L_60005900; break;
        case 28: goto L_60005910; break;
        case 29: goto L_60005920; break;
        case 30: goto L_60005930; break;
        case 31: goto L_60005940; break;
        case 32: goto L_60005950; break;
        case 33: goto L_60005960; break;
        case 34: goto L_60005970; break;
        case 35: goto L_60005980; break;
        case 36: goto L_60005990; break;
        case 37: goto L_600059A0; break;
        case 38: goto L_600059C8; break;
        case 39: goto L_600059F0; break;
        case 40: goto L_60005A00; break;
        case 41: goto L_60005A10; break;
        case 42: goto L_60005A20; break;
        case 43: goto L_60005A30; break;
        case 44: goto L_60005A40; break;
        default: switch_error(__func__, 0x60005748, 0x60005BF8);
    }
    // 0x6000574C: nop

L_60005750:
    // 0x60005750: jal         0x60002AC4
    // 0x60005754: nop

    ovl_stage_world2_2AC4(rdram, ctx);
        goto after_1;
    // 0x60005754: nop

    after_1:
    // 0x60005758: b           L_60005AEC
    // 0x6000575C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005AEC;
    // 0x6000575C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005760:
    // 0x60005760: jal         0x60002C20
    // 0x60005764: nop

    ovl_stage_world2_2C20(rdram, ctx);
        goto after_2;
    // 0x60005764: nop

    after_2:
    // 0x60005768: b           L_60005AEC
    // 0x6000576C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005AEC;
    // 0x6000576C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005770:
    // 0x60005770: jal         0x60002C7C
    // 0x60005774: nop

    ovl_stage_world2_2C7C(rdram, ctx);
        goto after_3;
    // 0x60005774: nop

    after_3:
    // 0x60005778: b           L_60005AEC
    // 0x6000577C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005AEC;
    // 0x6000577C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005780:
    // 0x60005780: jal         0x60002D38
    // 0x60005784: nop

    ovl_stage_world2_2D38(rdram, ctx);
        goto after_4;
    // 0x60005784: nop

    after_4:
    // 0x60005788: b           L_60005AEC
    // 0x6000578C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005AEC;
    // 0x6000578C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005790:
    // 0x60005790: jal         0x60002EA0
    // 0x60005794: nop

    ovl_stage_world2_2EA0(rdram, ctx);
        goto after_5;
    // 0x60005794: nop

    after_5:
    // 0x60005798: b           L_60005AEC
    // 0x6000579C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005AEC;
    // 0x6000579C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600057A0:
    // 0x600057A0: jal         0x600031B4
    // 0x600057A4: nop

    ovl_stage_world2_31B4(rdram, ctx);
        goto after_6;
    // 0x600057A4: nop

    after_6:
    // 0x600057A8: b           L_60005AEC
    // 0x600057AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005AEC;
    // 0x600057AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600057B0:
    // 0x600057B0: jal         0x60003454
    // 0x600057B4: nop

    ovl_stage_world2_3454(rdram, ctx);
        goto after_7;
    // 0x600057B4: nop

    after_7:
    // 0x600057B8: b           L_60005AEC
    // 0x600057BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005AEC;
    // 0x600057BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600057C0:
    // 0x600057C0: jal         0x60003874
    // 0x600057C4: nop

    ovl_stage_world2_3874(rdram, ctx);
        goto after_8;
    // 0x600057C4: nop

    after_8:
    // 0x600057C8: b           L_60005AEC
    // 0x600057CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005AEC;
    // 0x600057CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600057D0:
    // 0x600057D0: jal         0x6000373C
    // 0x600057D4: nop

    ovl_stage_world2_373C(rdram, ctx);
        goto after_9;
    // 0x600057D4: nop

    after_9:
    // 0x600057D8: b           L_60005AEC
    // 0x600057DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005AEC;
    // 0x600057DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600057E0:
    // 0x600057E0: jal         0x600039F8
    // 0x600057E4: nop

    ovl_stage_world2_39F8(rdram, ctx);
        goto after_10;
    // 0x600057E4: nop

    after_10:
    // 0x600057E8: b           L_60005AEC
    // 0x600057EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005AEC;
    // 0x600057EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600057F0:
    // 0x600057F0: jal         0x60003A74
    // 0x600057F4: nop

    ovl_stage_world2_3A74(rdram, ctx);
        goto after_11;
    // 0x600057F4: nop

    after_11:
    // 0x600057F8: b           L_60005AEC
    // 0x600057FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005AEC;
    // 0x600057FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005800:
    // 0x60005800: jal         0x60003C84
    // 0x60005804: nop

    ovl_stage_world2_3C84(rdram, ctx);
        goto after_12;
    // 0x60005804: nop

    after_12:
    // 0x60005808: b           L_60005AEC
    // 0x6000580C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005AEC;
    // 0x6000580C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005810:
    // 0x60005810: jal         0x600055E0
    // 0x60005814: nop

    ovl_stage_world2_55E0(rdram, ctx);
        goto after_13;
    // 0x60005814: nop

    after_13:
    // 0x60005818: b           L_60005AEC
    // 0x6000581C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005AEC;
    // 0x6000581C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005820:
    // 0x60005820: jal         0x60002510
    // 0x60005824: nop

    ovl_stage_world2_2510(rdram, ctx);
        goto after_14;
    // 0x60005824: nop

    after_14:
    // 0x60005828: b           L_60005AEC
    // 0x6000582C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005AEC;
    // 0x6000582C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005830:
    // 0x60005830: jal         0x60003CD4
    // 0x60005834: nop

    ovl_stage_world2_3CD4(rdram, ctx);
        goto after_15;
    // 0x60005834: nop

    after_15:
    // 0x60005838: b           L_60005AEC
    // 0x6000583C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005AEC;
    // 0x6000583C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005840:
    // 0x60005840: jal         0x60003D5C
    // 0x60005844: nop

    ovl_stage_world2_3D5C(rdram, ctx);
        goto after_16;
    // 0x60005844: nop

    after_16:
    // 0x60005848: b           L_60005AEC
    // 0x6000584C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005AEC;
    // 0x6000584C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005850:
    // 0x60005850: jal         0x60003EBC
    // 0x60005854: nop

    ovl_stage_world2_3EBC(rdram, ctx);
        goto after_17;
    // 0x60005854: nop

    after_17:
    // 0x60005858: b           L_60005AEC
    // 0x6000585C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005AEC;
    // 0x6000585C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005860:
    // 0x60005860: jal         0x60003F54
    // 0x60005864: nop

    ovl_stage_world2_3F54(rdram, ctx);
        goto after_18;
    // 0x60005864: nop

    after_18:
    // 0x60005868: b           L_60005AEC
    // 0x6000586C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005AEC;
    // 0x6000586C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005870:
    // 0x60005870: jal         0x60004154
    // 0x60005874: nop

    ovl_stage_world2_4154(rdram, ctx);
        goto after_19;
    // 0x60005874: nop

    after_19:
    // 0x60005878: b           L_60005AEC
    // 0x6000587C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005AEC;
    // 0x6000587C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005880:
    // 0x60005880: jal         0x60004410
    // 0x60005884: nop

    ovl_stage_world2_4410(rdram, ctx);
        goto after_20;
    // 0x60005884: nop

    after_20:
    // 0x60005888: b           L_60005AEC
    // 0x6000588C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005AEC;
    // 0x6000588C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005890:
    // 0x60005890: jal         0x6000485C
    // 0x60005894: nop

    ovl_stage_world2_485C(rdram, ctx);
        goto after_21;
    // 0x60005894: nop

    after_21:
    // 0x60005898: b           L_60005AEC
    // 0x6000589C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005AEC;
    // 0x6000589C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600058A0:
    // 0x600058A0: jal         0x60004ACC
    // 0x600058A4: nop

    ovl_stage_world2_4ACC(rdram, ctx);
        goto after_22;
    // 0x600058A4: nop

    after_22:
    // 0x600058A8: b           L_60005AEC
    // 0x600058AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005AEC;
    // 0x600058AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600058B0:
    // 0x600058B0: jal         0x60004B08
    // 0x600058B4: nop

    ovl_stage_world2_4B08(rdram, ctx);
        goto after_23;
    // 0x600058B4: nop

    after_23:
    // 0x600058B8: b           L_60005AEC
    // 0x600058BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005AEC;
    // 0x600058BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600058C0:
    // 0x600058C0: jal         0x60004C9C
    // 0x600058C4: nop

    ovl_stage_world2_4C9C(rdram, ctx);
        goto after_24;
    // 0x600058C4: nop

    after_24:
    // 0x600058C8: b           L_60005AEC
    // 0x600058CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005AEC;
    // 0x600058CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600058D0:
    // 0x600058D0: jal         0x60004D2C
    // 0x600058D4: nop

    ovl_stage_world2_4D2C(rdram, ctx);
        goto after_25;
    // 0x600058D4: nop

    after_25:
    // 0x600058D8: b           L_60005AEC
    // 0x600058DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005AEC;
    // 0x600058DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600058E0:
    // 0x600058E0: jal         0x60004DF0
    // 0x600058E4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world2_4DF0(rdram, ctx);
        goto after_26;
    // 0x600058E4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_26:
    // 0x600058E8: b           L_60005AEC
    // 0x600058EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005AEC;
    // 0x600058EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600058F0:
    // 0x600058F0: jal         0x60004DF0
    // 0x600058F4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world2_4DF0(rdram, ctx);
        goto after_27;
    // 0x600058F4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_27:
    // 0x600058F8: b           L_60005AEC
    // 0x600058FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005AEC;
    // 0x600058FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005900:
    // 0x60005900: jal         0x60004DF0
    // 0x60005904: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_stage_world2_4DF0(rdram, ctx);
        goto after_28;
    // 0x60005904: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_28:
    // 0x60005908: b           L_60005AEC
    // 0x6000590C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005AEC;
    // 0x6000590C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005910:
    // 0x60005910: jal         0x60004DF0
    // 0x60005914: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    ovl_stage_world2_4DF0(rdram, ctx);
        goto after_29;
    // 0x60005914: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_29:
    // 0x60005918: b           L_60005AEC
    // 0x6000591C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005AEC;
    // 0x6000591C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005920:
    // 0x60005920: jal         0x60004EA4
    // 0x60005924: nop

    ovl_stage_world2_4EA4(rdram, ctx);
        goto after_30;
    // 0x60005924: nop

    after_30:
    // 0x60005928: b           L_60005AEC
    // 0x6000592C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005AEC;
    // 0x6000592C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005930:
    // 0x60005930: jal         0x60004F70
    // 0x60005934: nop

    ovl_stage_world2_4F70(rdram, ctx);
        goto after_31;
    // 0x60005934: nop

    after_31:
    // 0x60005938: b           L_60005AEC
    // 0x6000593C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005AEC;
    // 0x6000593C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005940:
    // 0x60005940: jal         0x6000501C
    // 0x60005944: nop

    ovl_stage_world2_501C(rdram, ctx);
        goto after_32;
    // 0x60005944: nop

    after_32:
    // 0x60005948: b           L_60005AEC
    // 0x6000594C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005AEC;
    // 0x6000594C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005950:
    // 0x60005950: jal         0x600050DC
    // 0x60005954: nop

    ovl_stage_world2_50DC(rdram, ctx);
        goto after_33;
    // 0x60005954: nop

    after_33:
    // 0x60005958: b           L_60005AEC
    // 0x6000595C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005AEC;
    // 0x6000595C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005960:
    // 0x60005960: jal         0x6000517C
    // 0x60005964: nop

    ovl_stage_world2_517C(rdram, ctx);
        goto after_34;
    // 0x60005964: nop

    after_34:
    // 0x60005968: b           L_60005AEC
    // 0x6000596C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005AEC;
    // 0x6000596C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005970:
    // 0x60005970: jal         0x60003E0C
    // 0x60005974: nop

    ovl_stage_world2_3E0C(rdram, ctx);
        goto after_35;
    // 0x60005974: nop

    after_35:
    // 0x60005978: b           L_60005AEC
    // 0x6000597C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005AEC;
    // 0x6000597C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005980:
    // 0x60005980: jal         0x60002F10
    // 0x60005984: nop

    ovl_stage_world2_2F10(rdram, ctx);
        goto after_36;
    // 0x60005984: nop

    after_36:
    // 0x60005988: b           L_60005AEC
    // 0x6000598C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005AEC;
    // 0x6000598C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005990:
    // 0x60005990: jal         0x60002F90
    // 0x60005994: nop

    ovl_stage_world2_2F90(rdram, ctx);
        goto after_37;
    // 0x60005994: nop

    after_37:
    // 0x60005998: b           L_60005AEC
    // 0x6000599C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005AEC;
    // 0x6000599C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600059A0:
    // 0x600059A0: jal         0x60000BB0
    // 0x600059A4: addiu       $a0, $zero, 0x81
    ctx->r4 = ADD32(0, 0X81);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_38;
    // 0x600059A4: addiu       $a0, $zero, 0x81
    ctx->r4 = ADD32(0, 0X81);
    after_38:
    // 0x600059A8: bne         $v0, $zero, L_600059B8
    if (ctx->r2 != 0) {
        // 0x600059AC: nop
    
            goto L_600059B8;
    }
    // 0x600059AC: nop

    // 0x600059B0: jal         0x60001098
    // 0x600059B4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world2_1098(rdram, ctx);
        goto after_39;
    // 0x600059B4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_39:
L_600059B8:
    // 0x600059B8: jal         0x60000268
    // 0x600059BC: nop

    ovl_stage_world2_268(rdram, ctx);
        goto after_40;
    // 0x600059BC: nop

    after_40:
    // 0x600059C0: b           L_60005AEC
    // 0x600059C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005AEC;
    // 0x600059C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600059C8:
    // 0x600059C8: jal         0x60000DE4
    // 0x600059CC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world2_DE4(rdram, ctx);
        goto after_41;
    // 0x600059CC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_41:
    // 0x600059D0: jal         0x60000CC4
    // 0x600059D4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_stage_world2_CC4(rdram, ctx);
        goto after_42;
    // 0x600059D4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_42:
    // 0x600059D8: jal         0x60000A6C
    // 0x600059DC: nop

    ovl_stage_world2_A6C(rdram, ctx);
        goto after_43;
    // 0x600059DC: nop

    after_43:
    // 0x600059E0: jal         0x60000C7C
    // 0x600059E4: nop

    ovl_stage_world2_C7C(rdram, ctx);
        goto after_44;
    // 0x600059E4: nop

    after_44:
    // 0x600059E8: b           L_60005AEC
    // 0x600059EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005AEC;
    // 0x600059EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600059F0:
    // 0x600059F0: jal         0x600036F4
    // 0x600059F4: nop

    ovl_stage_world2_36F4(rdram, ctx);
        goto after_45;
    // 0x600059F4: nop

    after_45:
    // 0x600059F8: b           L_60005AEC
    // 0x600059FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005AEC;
    // 0x600059FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005A00:
    // 0x60005A00: jal         0x60003F08
    // 0x60005A04: nop

    ovl_stage_world2_3F08(rdram, ctx);
        goto after_46;
    // 0x60005A04: nop

    after_46:
    // 0x60005A08: b           L_60005AEC
    // 0x60005A0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005AEC;
    // 0x60005A0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005A10:
    // 0x60005A10: jal         0x60003F30
    // 0x60005A14: nop

    ovl_stage_world2_3F30(rdram, ctx);
        goto after_47;
    // 0x60005A14: nop

    after_47:
    // 0x60005A18: b           L_60005AEC
    // 0x60005A1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005AEC;
    // 0x60005A1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005A20:
    // 0x60005A20: jal         0x60000268
    // 0x60005A24: nop

    ovl_stage_world2_268(rdram, ctx);
        goto after_48;
    // 0x60005A24: nop

    after_48:
    // 0x60005A28: b           L_60005AEC
    // 0x60005A2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005AEC;
    // 0x60005A2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005A30:
    // 0x60005A30: jal         0x600054AC
    // 0x60005A34: nop

    ovl_stage_world2_54AC(rdram, ctx);
        goto after_49;
    // 0x60005A34: nop

    after_49:
    // 0x60005A38: b           L_60005AEC
    // 0x60005A3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005AEC;
    // 0x60005A3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005A40:
    // 0x60005A40: jal         0x6000567C
    // 0x60005A44: nop

    ovl_stage_world2_567C(rdram, ctx);
        goto after_50;
    // 0x60005A44: nop

    after_50:
    // 0x60005A48: b           L_60005AEC
    // 0x60005A4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005AEC;
    // 0x60005A4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005A50:
    // 0x60005A50: jal         0x60005438
    // 0x60005A54: nop

    ovl_stage_world2_5438(rdram, ctx);
        goto after_51;
    // 0x60005A54: nop

    after_51:
    // 0x60005A58: b           L_60005AEC
    // 0x60005A5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005AEC;
    // 0x60005A5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005A60:
    // 0x60005A60: jal         0x6000534C
    // 0x60005A64: nop

    ovl_stage_world2_534C(rdram, ctx);
        goto after_52;
    // 0x60005A64: nop

    after_52:
    // 0x60005A68: b           L_60005AEC
    // 0x60005A6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005AEC;
    // 0x60005A6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005A70:
    // 0x60005A70: jal         0x60000EE0
    // 0x60005A74: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world2_EE0(rdram, ctx);
        goto after_53;
    // 0x60005A74: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_53:
    // 0x60005A78: b           L_60005AEC
    // 0x60005A7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005AEC;
    // 0x60005A7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005A80:
    // 0x60005A80: addiu       $v1, $v1, 0x5D64
    ctx->r3 = ADD32(ctx->r3, 0X5D64);
    // 0x60005A84: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x60005A88: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60005A8C: sw          $zero, 0x5D60($at)
    MEM_W(0X5D60, ctx->r1) = 0;
    // 0x60005A90: lw          $t8, 0x8($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X8);
    // 0x60005A94: addiu       $at, $zero, 0x83C
    ctx->r1 = ADD32(0, 0X83C);
    // 0x60005A98: bne         $t8, $at, L_60005AEC
    if (ctx->r24 != ctx->r1) {
        // 0x60005A9C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60005AEC;
    }
    // 0x60005A9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005AA0: lw          $t9, 0xC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XC);
    // 0x60005AA4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x60005AA8: bne         $t9, $at, L_60005AC8
    if (ctx->r25 != ctx->r1) {
        // 0x60005AAC: addiu       $a0, $zero, 0x6
        ctx->r4 = ADD32(0, 0X6);
            goto L_60005AC8;
    }
    // 0x60005AAC: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x60005AB0: jal         0x60000E68
    // 0x60005AB4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_stage_world2_E68(rdram, ctx);
        goto after_54;
    // 0x60005AB4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_54:
    // 0x60005AB8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x60005ABC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60005AC0: b           L_60005AE8
    // 0x60005AC4: sw          $t0, 0x5D68($at)
    MEM_W(0X5D68, ctx->r1) = ctx->r8;
        goto L_60005AE8;
    // 0x60005AC4: sw          $t0, 0x5D68($at)
    MEM_W(0X5D68, ctx->r1) = ctx->r8;
L_60005AC8:
    // 0x60005AC8: jal         0x60000BB0
    // 0x60005ACC: addiu       $a0, $zero, 0x18E
    ctx->r4 = ADD32(0, 0X18E);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_55;
    // 0x60005ACC: addiu       $a0, $zero, 0x18E
    ctx->r4 = ADD32(0, 0X18E);
    after_55:
    // 0x60005AD0: beq         $v0, $zero, L_60005AE0
    if (ctx->r2 == 0) {
        // 0x60005AD4: addiu       $a0, $zero, 0x6
        ctx->r4 = ADD32(0, 0X6);
            goto L_60005AE0;
    }
    // 0x60005AD4: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x60005AD8: jal         0x60000E80
    // 0x60005ADC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world2_E80(rdram, ctx);
        goto after_56;
    // 0x60005ADC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_56:
L_60005AE0:
    // 0x60005AE0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60005AE4: sw          $zero, 0x5D68($at)
    MEM_W(0X5D68, ctx->r1) = 0;
L_60005AE8:
    // 0x60005AE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005AEC:
    // 0x60005AEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60005AF0: jr          $ra
    // 0x60005AF4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x60005AF4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void ovl_stage_world3_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000000: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60000004: jr          $ra
    // 0x60000008: addiu       $v0, $v0, 0x62F4
    ctx->r2 = ADD32(ctx->r2, 0X62F4);
    return;
    // 0x60000008: addiu       $v0, $v0, 0x62F4
    ctx->r2 = ADD32(ctx->r2, 0X62F4);
    // 0x6000000C: nop

;}
RECOMP_FUNC void ovl_stage_world3_10(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_1C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_28(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_34(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_40(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_4C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_58(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_64(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_70(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_7C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_88(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_94(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_A0(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_AC(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_B8(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_C4(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_D0(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_DC(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_E8(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_F4(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_100(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_10C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_118(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_124(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_130(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_13C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_148(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_154(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_160(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world3_16C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000016C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000170: jr          $t1
    // 0x60000174: addiu       $t0, $zero, 0x604
    ctx->r8 = ADD32(0, 0X604);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000174: addiu       $t0, $zero, 0x604
    ctx->r8 = ADD32(0, 0X604);
;}
RECOMP_FUNC void ovl_stage_world3_178(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000178: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x6000017C: jr          $t1
    // 0x60000180: addiu       $t0, $zero, 0x605
    ctx->r8 = ADD32(0, 0X605);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000180: addiu       $t0, $zero, 0x605
    ctx->r8 = ADD32(0, 0X605);
;}
RECOMP_FUNC void ovl_stage_world3_184(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000184: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000188: jr          $t1
    // 0x6000018C: addiu       $t0, $zero, 0x606
    ctx->r8 = ADD32(0, 0X606);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x6000018C: addiu       $t0, $zero, 0x606
    ctx->r8 = ADD32(0, 0X606);
;}
RECOMP_FUNC void ovl_stage_world3_190(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000190: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000194: jr          $t1
    // 0x60000198: addiu       $t0, $zero, 0x607
    ctx->r8 = ADD32(0, 0X607);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000198: addiu       $t0, $zero, 0x607
    ctx->r8 = ADD32(0, 0X607);
;}
RECOMP_FUNC void ovl_stage_world3_19C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000019C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600001A0: jr          $t1
    // 0x600001A4: addiu       $t0, $zero, 0x608
    ctx->r8 = ADD32(0, 0X608);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600001A4: addiu       $t0, $zero, 0x608
    ctx->r8 = ADD32(0, 0X608);
;}
RECOMP_FUNC void ovl_stage_world3_1A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600001A8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600001AC: jr          $t1
    // 0x600001B0: addiu       $t0, $zero, 0x609
    ctx->r8 = ADD32(0, 0X609);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600001B0: addiu       $t0, $zero, 0x609
    ctx->r8 = ADD32(0, 0X609);
;}
RECOMP_FUNC void ovl_stage_world3_1B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600001B4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600001B8: jr          $t1
    // 0x600001BC: addiu       $t0, $zero, 0x700
    ctx->r8 = ADD32(0, 0X700);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600001BC: addiu       $t0, $zero, 0x700
    ctx->r8 = ADD32(0, 0X700);
;}
RECOMP_FUNC void ovl_stage_world3_1C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600001C0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600001C4: jr          $t1
    // 0x600001C8: addiu       $t0, $zero, 0x701
    ctx->r8 = ADD32(0, 0X701);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600001C8: addiu       $t0, $zero, 0x701
    ctx->r8 = ADD32(0, 0X701);
;}
RECOMP_FUNC void ovl_stage_world3_1CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600001CC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600001D0: jr          $t1
    // 0x600001D4: addiu       $t0, $zero, 0x702
    ctx->r8 = ADD32(0, 0X702);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600001D4: addiu       $t0, $zero, 0x702
    ctx->r8 = ADD32(0, 0X702);
;}
RECOMP_FUNC void ovl_stage_world3_1D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600001D8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600001DC: jr          $t1
    // 0x600001E0: addiu       $t0, $zero, 0x703
    ctx->r8 = ADD32(0, 0X703);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600001E0: addiu       $t0, $zero, 0x703
    ctx->r8 = ADD32(0, 0X703);
;}
RECOMP_FUNC void ovl_stage_world3_1E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600001E4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600001E8: jr          $t1
    // 0x600001EC: addiu       $t0, $zero, 0x800
    ctx->r8 = ADD32(0, 0X800);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600001EC: addiu       $t0, $zero, 0x800
    ctx->r8 = ADD32(0, 0X800);
;}
RECOMP_FUNC void ovl_stage_world3_1F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600001F0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x600001F4: jr          $t1
    // 0x600001F8: addiu       $t0, $zero, 0x801
    ctx->r8 = ADD32(0, 0X801);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x600001F8: addiu       $t0, $zero, 0x801
    ctx->r8 = ADD32(0, 0X801);
;}
RECOMP_FUNC void ovl_stage_world3_1FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600001FC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000200: jr          $t1
    // 0x60000204: addiu       $t0, $zero, 0x802
    ctx->r8 = ADD32(0, 0X802);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000204: addiu       $t0, $zero, 0x802
    ctx->r8 = ADD32(0, 0X802);
;}
RECOMP_FUNC void ovl_stage_world3_208(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000208: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x6000020C: jr          $t1
    // 0x60000210: addiu       $t0, $zero, 0x803
    ctx->r8 = ADD32(0, 0X803);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000210: addiu       $t0, $zero, 0x803
    ctx->r8 = ADD32(0, 0X803);
;}
RECOMP_FUNC void ovl_stage_world3_214(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000214: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000218: jr          $t1
    // 0x6000021C: addiu       $t0, $zero, 0x804
    ctx->r8 = ADD32(0, 0X804);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x6000021C: addiu       $t0, $zero, 0x804
    ctx->r8 = ADD32(0, 0X804);
;}
RECOMP_FUNC void ovl_stage_world3_220(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000220: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000224: jr          $t1
    // 0x60000228: addiu       $t0, $zero, 0x805
    ctx->r8 = ADD32(0, 0X805);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000228: addiu       $t0, $zero, 0x805
    ctx->r8 = ADD32(0, 0X805);
;}
RECOMP_FUNC void ovl_stage_world3_22C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000022C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000230: jr          $t1
    // 0x60000234: addiu       $t0, $zero, 0x806
    ctx->r8 = ADD32(0, 0X806);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000234: addiu       $t0, $zero, 0x806
    ctx->r8 = ADD32(0, 0X806);
;}
RECOMP_FUNC void ovl_stage_world3_238(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000238: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x6000023C: jr          $t1
    // 0x60000240: addiu       $t0, $zero, 0x807
    ctx->r8 = ADD32(0, 0X807);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000240: addiu       $t0, $zero, 0x807
    ctx->r8 = ADD32(0, 0X807);
;}
RECOMP_FUNC void ovl_stage_world3_244(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000244: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000248: jr          $t1
    // 0x6000024C: addiu       $t0, $zero, 0x900
    ctx->r8 = ADD32(0, 0X900);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x6000024C: addiu       $t0, $zero, 0x900
    ctx->r8 = ADD32(0, 0X900);
;}
