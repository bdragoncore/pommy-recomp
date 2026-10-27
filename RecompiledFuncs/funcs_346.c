#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_stage_world6_36E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600036E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600036EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600036F0: jal         0x60000BB0
    // 0x600036F4: addiu       $a0, $zero, 0x105
    ctx->r4 = ADD32(0, 0X105);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_0;
    // 0x600036F4: addiu       $a0, $zero, 0x105
    ctx->r4 = ADD32(0, 0X105);
    after_0:
    // 0x600036F8: beq         $v0, $zero, L_60003740
    if (ctx->r2 == 0) {
        // 0x600036FC: nop
    
            goto L_60003740;
    }
    // 0x600036FC: nop

    // 0x60003700: jal         0x60000BB0
    // 0x60003704: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_1;
    // 0x60003704: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    after_1:
    // 0x60003708: beq         $v0, $zero, L_60003740
    if (ctx->r2 == 0) {
        // 0x6000370C: nop
    
            goto L_60003740;
    }
    // 0x6000370C: nop

    // 0x60003710: jal         0x60000BB0
    // 0x60003714: addiu       $a0, $zero, 0x107
    ctx->r4 = ADD32(0, 0X107);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_2;
    // 0x60003714: addiu       $a0, $zero, 0x107
    ctx->r4 = ADD32(0, 0X107);
    after_2:
    // 0x60003718: bne         $v0, $zero, L_60003740
    if (ctx->r2 != 0) {
        // 0x6000371C: nop
    
            goto L_60003740;
    }
    // 0x6000371C: nop

    // 0x60003720: jal         0x60000BB0
    // 0x60003724: addiu       $a0, $zero, 0x188
    ctx->r4 = ADD32(0, 0X188);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_3;
    // 0x60003724: addiu       $a0, $zero, 0x188
    ctx->r4 = ADD32(0, 0X188);
    after_3:
    // 0x60003728: bne         $v0, $zero, L_60003740
    if (ctx->r2 != 0) {
        // 0x6000372C: nop
    
            goto L_60003740;
    }
    // 0x6000372C: nop

    // 0x60003730: jal         0x60000B98
    // 0x60003734: addiu       $a0, $zero, 0x107
    ctx->r4 = ADD32(0, 0X107);
    ovl_stage_world6_B98(rdram, ctx);
        goto after_4;
    // 0x60003734: addiu       $a0, $zero, 0x107
    ctx->r4 = ADD32(0, 0X107);
    after_4:
    // 0x60003738: b           L_60003774
    // 0x6000373C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60003774;
    // 0x6000373C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003740:
    // 0x60003740: jal         0x60000BB0
    // 0x60003744: addiu       $a0, $zero, 0x12E
    ctx->r4 = ADD32(0, 0X12E);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_5;
    // 0x60003744: addiu       $a0, $zero, 0x12E
    ctx->r4 = ADD32(0, 0X12E);
    after_5:
    // 0x60003748: bne         $v0, $zero, L_60003774
    if (ctx->r2 != 0) {
        // 0x6000374C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003774;
    }
    // 0x6000374C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003750: jal         0x60000B98
    // 0x60003754: addiu       $a0, $zero, 0x12E
    ctx->r4 = ADD32(0, 0X12E);
    ovl_stage_world6_B98(rdram, ctx);
        goto after_6;
    // 0x60003754: addiu       $a0, $zero, 0x12E
    ctx->r4 = ADD32(0, 0X12E);
    after_6:
    // 0x60003758: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x6000375C: addiu       $a0, $a0, 0x3588
    ctx->r4 = ADD32(ctx->r4, 0X3588);
    // 0x60003760: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60003764: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60003768: jal         0x60000994
    // 0x6000376C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world6_994(rdram, ctx);
        goto after_7;
    // 0x6000376C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_7:
    // 0x60003770: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003774:
    // 0x60003774: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60003778: jr          $ra
    // 0x6000377C: nop

    return;
    // 0x6000377C: nop

;}
RECOMP_FUNC void ovl_stage_world6_3780(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003780: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60003784: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003788: jal         0x600009C4
    // 0x6000378C: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    ovl_stage_world6_9C4(rdram, ctx);
        goto after_0;
    // 0x6000378C: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_0:
    // 0x60003790: jal         0x60000244
    // 0x60003794: addiu       $a0, $zero, 0xAF
    ctx->r4 = ADD32(0, 0XAF);
    ovl_stage_world6_244(rdram, ctx);
        goto after_1;
    // 0x60003794: addiu       $a0, $zero, 0xAF
    ctx->r4 = ADD32(0, 0XAF);
    after_1:
    // 0x60003798: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x6000379C: jal         0x60000E68
    // 0x600037A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world6_E68(rdram, ctx);
        goto after_2;
    // 0x600037A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x600037A4: jal         0x600009AC
    // 0x600037A8: nop

    ovl_stage_world6_9AC(rdram, ctx);
        goto after_3;
    // 0x600037A8: nop

    after_3:
    // 0x600037AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600037B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600037B4: jr          $ra
    // 0x600037B8: nop

    return;
    // 0x600037B8: nop

;}
RECOMP_FUNC void ovl_stage_world6_37BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600037BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600037C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600037C4: jal         0x60000BB0
    // 0x600037C8: addiu       $a0, $zero, 0x105
    ctx->r4 = ADD32(0, 0X105);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_0;
    // 0x600037C8: addiu       $a0, $zero, 0x105
    ctx->r4 = ADD32(0, 0X105);
    after_0:
    // 0x600037CC: beq         $v0, $zero, L_6000382C
    if (ctx->r2 == 0) {
        // 0x600037D0: nop
    
            goto L_6000382C;
    }
    // 0x600037D0: nop

    // 0x600037D4: jal         0x60000BB0
    // 0x600037D8: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_1;
    // 0x600037D8: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    after_1:
    // 0x600037DC: beq         $v0, $zero, L_6000382C
    if (ctx->r2 == 0) {
        // 0x600037E0: nop
    
            goto L_6000382C;
    }
    // 0x600037E0: nop

    // 0x600037E4: jal         0x60000BB0
    // 0x600037E8: addiu       $a0, $zero, 0x107
    ctx->r4 = ADD32(0, 0X107);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_2;
    // 0x600037E8: addiu       $a0, $zero, 0x107
    ctx->r4 = ADD32(0, 0X107);
    after_2:
    // 0x600037EC: beq         $v0, $zero, L_6000382C
    if (ctx->r2 == 0) {
        // 0x600037F0: nop
    
            goto L_6000382C;
    }
    // 0x600037F0: nop

    // 0x600037F4: jal         0x60000BB0
    // 0x600037F8: addiu       $a0, $zero, 0x188
    ctx->r4 = ADD32(0, 0X188);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_3;
    // 0x600037F8: addiu       $a0, $zero, 0x188
    ctx->r4 = ADD32(0, 0X188);
    after_3:
    // 0x600037FC: bne         $v0, $zero, L_6000382C
    if (ctx->r2 != 0) {
        // 0x60003800: nop
    
            goto L_6000382C;
    }
    // 0x60003800: nop

    // 0x60003804: jal         0x60000B98
    // 0x60003808: addiu       $a0, $zero, 0x188
    ctx->r4 = ADD32(0, 0X188);
    ovl_stage_world6_B98(rdram, ctx);
        goto after_4;
    // 0x60003808: addiu       $a0, $zero, 0x188
    ctx->r4 = ADD32(0, 0X188);
    after_4:
    // 0x6000380C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003810: addiu       $a0, $a0, 0x3780
    ctx->r4 = ADD32(ctx->r4, 0X3780);
    // 0x60003814: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60003818: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x6000381C: jal         0x60000994
    // 0x60003820: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world6_994(rdram, ctx);
        goto after_5;
    // 0x60003820: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
    // 0x60003824: b           L_60003860
    // 0x60003828: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60003860;
    // 0x60003828: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000382C:
    // 0x6000382C: jal         0x60000BB0
    // 0x60003830: addiu       $a0, $zero, 0x12E
    ctx->r4 = ADD32(0, 0X12E);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_6;
    // 0x60003830: addiu       $a0, $zero, 0x12E
    ctx->r4 = ADD32(0, 0X12E);
    after_6:
    // 0x60003834: bne         $v0, $zero, L_60003860
    if (ctx->r2 != 0) {
        // 0x60003838: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003860;
    }
    // 0x60003838: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000383C: jal         0x60000B98
    // 0x60003840: addiu       $a0, $zero, 0x12E
    ctx->r4 = ADD32(0, 0X12E);
    ovl_stage_world6_B98(rdram, ctx);
        goto after_7;
    // 0x60003840: addiu       $a0, $zero, 0x12E
    ctx->r4 = ADD32(0, 0X12E);
    after_7:
    // 0x60003844: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003848: addiu       $a0, $a0, 0x3588
    ctx->r4 = ADD32(ctx->r4, 0X3588);
    // 0x6000384C: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60003850: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60003854: jal         0x60000994
    // 0x60003858: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world6_994(rdram, ctx);
        goto after_8;
    // 0x60003858: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_8:
    // 0x6000385C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003860:
    // 0x60003860: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60003864: jr          $ra
    // 0x60003868: nop

    return;
    // 0x60003868: nop

;}
RECOMP_FUNC void ovl_stage_world6_386C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000386C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x60003870: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x60003874: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x60003878: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x6000387C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x60003880: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x60003884: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x60003888: jal         0x60000A60
    // 0x6000388C: addiu       $a0, $zero, 0xA84
    ctx->r4 = ADD32(0, 0XA84);
    ovl_stage_world6_A60(rdram, ctx);
        goto after_0;
    // 0x6000388C: addiu       $a0, $zero, 0xA84
    ctx->r4 = ADD32(0, 0XA84);
    after_0:
    // 0x60003890: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x60003894: jal         0x60000E68
    // 0x60003898: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world6_E68(rdram, ctx);
        goto after_1;
    // 0x60003898: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x6000389C: jal         0x600009C4
    // 0x600038A0: addiu       $a0, $zero, 0x78
    ctx->r4 = ADD32(0, 0X78);
    ovl_stage_world6_9C4(rdram, ctx);
        goto after_2;
    // 0x600038A0: addiu       $a0, $zero, 0x78
    ctx->r4 = ADD32(0, 0X78);
    after_2:
    // 0x600038A4: jal         0x60000EEC
    // 0x600038A8: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    ovl_stage_world6_EEC(rdram, ctx);
        goto after_3;
    // 0x600038A8: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_3:
    // 0x600038AC: jal         0x60000E44
    // 0x600038B0: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    ovl_stage_world6_E44(rdram, ctx);
        goto after_4;
    // 0x600038B0: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_4:
    // 0x600038B4: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x600038B8: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x600038BC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x600038C0: addiu       $s2, $zero, 0x1E
    ctx->r18 = ADD32(0, 0X1E);
    // 0x600038C4: addiu       $s1, $sp, 0x38
    ctx->r17 = ADD32(ctx->r29, 0X38);
L_600038C8:
    // 0x600038C8: jal         0x60000E74
    // 0x600038CC: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    ovl_stage_world6_E74(rdram, ctx);
        goto after_5;
    // 0x600038CC: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_5:
    // 0x600038D0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600038D4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x600038D8: jal         0x600006C4
    // 0x600038DC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world6_6C4(rdram, ctx);
        goto after_6;
    // 0x600038DC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_6:
    // 0x600038E0: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x600038E4: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x600038E8: sub.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f20.fl;
    // 0x600038EC: jal         0x60000E74
    // 0x600038F0: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
    ovl_stage_world6_E74(rdram, ctx);
        goto after_7;
    // 0x600038F0: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
    after_7:
    // 0x600038F4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600038F8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x600038FC: jal         0x600006C4
    // 0x60003900: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world6_6C4(rdram, ctx);
        goto after_8;
    // 0x60003900: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_8:
    // 0x60003904: jal         0x600009D0
    // 0x60003908: nop

    ovl_stage_world6_9D0(rdram, ctx);
        goto after_9;
    // 0x60003908: nop

    after_9:
    // 0x6000390C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60003910: bne         $s0, $s2, L_600038C8
    if (ctx->r16 != ctx->r18) {
        // 0x60003914: nop
    
            goto L_600038C8;
    }
    // 0x60003914: nop

    // 0x60003918: jal         0x600009AC
    // 0x6000391C: nop

    ovl_stage_world6_9AC(rdram, ctx);
        goto after_10;
    // 0x6000391C: nop

    after_10:
    // 0x60003920: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x60003924: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x60003928: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x6000392C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x60003930: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x60003934: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x60003938: jr          $ra
    // 0x6000393C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x6000393C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_stage_world6_3940(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003940: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60003944: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003948: jal         0x60000BB0
    // 0x6000394C: addiu       $a0, $zero, 0x187
    ctx->r4 = ADD32(0, 0X187);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_0;
    // 0x6000394C: addiu       $a0, $zero, 0x187
    ctx->r4 = ADD32(0, 0X187);
    after_0:
    // 0x60003950: bne         $v0, $zero, L_6000398C
    if (ctx->r2 != 0) {
        // 0x60003954: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_6000398C;
    }
    // 0x60003954: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003958: jal         0x60000BB0
    // 0x6000395C: addiu       $a0, $zero, 0x113
    ctx->r4 = ADD32(0, 0X113);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_1;
    // 0x6000395C: addiu       $a0, $zero, 0x113
    ctx->r4 = ADD32(0, 0X113);
    after_1:
    // 0x60003960: bne         $v0, $zero, L_6000398C
    if (ctx->r2 != 0) {
        // 0x60003964: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_6000398C;
    }
    // 0x60003964: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003968: jal         0x60000B98
    // 0x6000396C: addiu       $a0, $zero, 0x113
    ctx->r4 = ADD32(0, 0X113);
    ovl_stage_world6_B98(rdram, ctx);
        goto after_2;
    // 0x6000396C: addiu       $a0, $zero, 0x113
    ctx->r4 = ADD32(0, 0X113);
    after_2:
    // 0x60003970: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003974: addiu       $a0, $a0, 0x386C
    ctx->r4 = ADD32(ctx->r4, 0X386C);
    // 0x60003978: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x6000397C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60003980: jal         0x60000994
    // 0x60003984: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world6_994(rdram, ctx);
        goto after_3;
    // 0x60003984: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x60003988: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000398C:
    // 0x6000398C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60003990: jr          $ra
    // 0x60003994: nop

    return;
    // 0x60003994: nop

;}
RECOMP_FUNC void ovl_stage_world6_3998(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003998: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x6000399C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600039A0: jal         0x60000BB0
    // 0x600039A4: addiu       $a0, $zero, 0x186
    ctx->r4 = ADD32(0, 0X186);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_0;
    // 0x600039A4: addiu       $a0, $zero, 0x186
    ctx->r4 = ADD32(0, 0X186);
    after_0:
    // 0x600039A8: beq         $v0, $zero, L_600039E8
    if (ctx->r2 == 0) {
        // 0x600039AC: nop
    
            goto L_600039E8;
    }
    // 0x600039AC: nop

    // 0x600039B0: jal         0x60000BB0
    // 0x600039B4: addiu       $a0, $zero, 0x189
    ctx->r4 = ADD32(0, 0X189);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_1;
    // 0x600039B4: addiu       $a0, $zero, 0x189
    ctx->r4 = ADD32(0, 0X189);
    after_1:
    // 0x600039B8: bne         $v0, $zero, L_600039E8
    if (ctx->r2 != 0) {
        // 0x600039BC: nop
    
            goto L_600039E8;
    }
    // 0x600039BC: nop

    // 0x600039C0: jal         0x60000EEC
    // 0x600039C4: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    ovl_stage_world6_EEC(rdram, ctx);
        goto after_2;
    // 0x600039C4: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_2:
    // 0x600039C8: jal         0x60000EEC
    // 0x600039CC: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    ovl_stage_world6_EEC(rdram, ctx);
        goto after_3;
    // 0x600039CC: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_3:
    // 0x600039D0: jal         0x60000B98
    // 0x600039D4: addiu       $a0, $zero, 0x189
    ctx->r4 = ADD32(0, 0X189);
    ovl_stage_world6_B98(rdram, ctx);
        goto after_4;
    // 0x600039D4: addiu       $a0, $zero, 0x189
    ctx->r4 = ADD32(0, 0X189);
    after_4:
    // 0x600039D8: jal         0x60000A60
    // 0x600039DC: addiu       $a0, $zero, 0xA86
    ctx->r4 = ADD32(0, 0XA86);
    ovl_stage_world6_A60(rdram, ctx);
        goto after_5;
    // 0x600039DC: addiu       $a0, $zero, 0xA86
    ctx->r4 = ADD32(0, 0XA86);
    after_5:
    // 0x600039E0: b           L_60003A2C
    // 0x600039E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60003A2C;
    // 0x600039E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600039E8:
    // 0x600039E8: jal         0x60000BB0
    // 0x600039EC: addiu       $a0, $zero, 0x189
    ctx->r4 = ADD32(0, 0X189);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_6;
    // 0x600039EC: addiu       $a0, $zero, 0x189
    ctx->r4 = ADD32(0, 0X189);
    after_6:
    // 0x600039F0: bne         $v0, $zero, L_60003A2C
    if (ctx->r2 != 0) {
        // 0x600039F4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003A2C;
    }
    // 0x600039F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600039F8: jal         0x60000BB0
    // 0x600039FC: addiu       $a0, $zero, 0x18D
    ctx->r4 = ADD32(0, 0X18D);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_7;
    // 0x600039FC: addiu       $a0, $zero, 0x18D
    ctx->r4 = ADD32(0, 0X18D);
    after_7:
    // 0x60003A00: bne         $v0, $zero, L_60003A2C
    if (ctx->r2 != 0) {
        // 0x60003A04: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003A2C;
    }
    // 0x60003A04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003A08: jal         0x60000BB0
    // 0x60003A0C: addiu       $a0, $zero, 0x186
    ctx->r4 = ADD32(0, 0X186);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_8;
    // 0x60003A0C: addiu       $a0, $zero, 0x186
    ctx->r4 = ADD32(0, 0X186);
    after_8:
    // 0x60003A10: bne         $v0, $zero, L_60003A2C
    if (ctx->r2 != 0) {
        // 0x60003A14: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003A2C;
    }
    // 0x60003A14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003A18: jal         0x60000B98
    // 0x60003A1C: addiu       $a0, $zero, 0x18D
    ctx->r4 = ADD32(0, 0X18D);
    ovl_stage_world6_B98(rdram, ctx);
        goto after_9;
    // 0x60003A1C: addiu       $a0, $zero, 0x18D
    ctx->r4 = ADD32(0, 0X18D);
    after_9:
    // 0x60003A20: jal         0x60000A60
    // 0x60003A24: addiu       $a0, $zero, 0xC20
    ctx->r4 = ADD32(0, 0XC20);
    ovl_stage_world6_A60(rdram, ctx);
        goto after_10;
    // 0x60003A24: addiu       $a0, $zero, 0xC20
    ctx->r4 = ADD32(0, 0XC20);
    after_10:
    // 0x60003A28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003A2C:
    // 0x60003A2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60003A30: jr          $ra
    // 0x60003A34: nop

    return;
    // 0x60003A34: nop

;}
RECOMP_FUNC void ovl_stage_world6_3A38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003A38: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60003A3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003A40: jal         0x60000BB0
    // 0x60003A44: addiu       $a0, $zero, 0x108
    ctx->r4 = ADD32(0, 0X108);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_0;
    // 0x60003A44: addiu       $a0, $zero, 0x108
    ctx->r4 = ADD32(0, 0X108);
    after_0:
    // 0x60003A48: beq         $v0, $zero, L_60003AC0
    if (ctx->r2 == 0) {
        // 0x60003A4C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003AC0;
    }
    // 0x60003A4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003A50: jal         0x60000BB0
    // 0x60003A54: addiu       $a0, $zero, 0x109
    ctx->r4 = ADD32(0, 0X109);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_1;
    // 0x60003A54: addiu       $a0, $zero, 0x109
    ctx->r4 = ADD32(0, 0X109);
    after_1:
    // 0x60003A58: beq         $v0, $zero, L_60003AC0
    if (ctx->r2 == 0) {
        // 0x60003A5C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003AC0;
    }
    // 0x60003A5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003A60: jal         0x60000BB0
    // 0x60003A64: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_2;
    // 0x60003A64: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    after_2:
    // 0x60003A68: beq         $v0, $zero, L_60003AC0
    if (ctx->r2 == 0) {
        // 0x60003A6C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003AC0;
    }
    // 0x60003A6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003A70: jal         0x60000BB0
    // 0x60003A74: addiu       $a0, $zero, 0x10B
    ctx->r4 = ADD32(0, 0X10B);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_3;
    // 0x60003A74: addiu       $a0, $zero, 0x10B
    ctx->r4 = ADD32(0, 0X10B);
    after_3:
    // 0x60003A78: beq         $v0, $zero, L_60003AC0
    if (ctx->r2 == 0) {
        // 0x60003A7C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003AC0;
    }
    // 0x60003A7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003A80: jal         0x60000BB0
    // 0x60003A84: addiu       $a0, $zero, 0x10C
    ctx->r4 = ADD32(0, 0X10C);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_4;
    // 0x60003A84: addiu       $a0, $zero, 0x10C
    ctx->r4 = ADD32(0, 0X10C);
    after_4:
    // 0x60003A88: beq         $v0, $zero, L_60003AC0
    if (ctx->r2 == 0) {
        // 0x60003A8C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003AC0;
    }
    // 0x60003A8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003A90: jal         0x60000BB0
    // 0x60003A94: addiu       $a0, $zero, 0x10D
    ctx->r4 = ADD32(0, 0X10D);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_5;
    // 0x60003A94: addiu       $a0, $zero, 0x10D
    ctx->r4 = ADD32(0, 0X10D);
    after_5:
    // 0x60003A98: beq         $v0, $zero, L_60003AC0
    if (ctx->r2 == 0) {
        // 0x60003A9C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003AC0;
    }
    // 0x60003A9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003AA0: jal         0x60000B98
    // 0x60003AA4: addiu       $a0, $zero, 0x194
    ctx->r4 = ADD32(0, 0X194);
    ovl_stage_world6_B98(rdram, ctx);
        goto after_6;
    // 0x60003AA4: addiu       $a0, $zero, 0x194
    ctx->r4 = ADD32(0, 0X194);
    after_6:
    // 0x60003AA8: jal         0x60000244
    // 0x60003AAC: addiu       $a0, $zero, 0x8B
    ctx->r4 = ADD32(0, 0X8B);
    ovl_stage_world6_244(rdram, ctx);
        goto after_7;
    // 0x60003AAC: addiu       $a0, $zero, 0x8B
    ctx->r4 = ADD32(0, 0X8B);
    after_7:
    // 0x60003AB0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x60003AB4: jal         0x60000E68
    // 0x60003AB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world6_E68(rdram, ctx);
        goto after_8;
    // 0x60003AB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x60003ABC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003AC0:
    // 0x60003AC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60003AC4: jr          $ra
    // 0x60003AC8: nop

    return;
    // 0x60003AC8: nop

;}
RECOMP_FUNC void ovl_stage_world6_3ACC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003ACC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x60003AD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003AD4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x60003AD8: jal         0x60000BB0
    // 0x60003ADC: addiu       $a0, $zero, 0x194
    ctx->r4 = ADD32(0, 0X194);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_0;
    // 0x60003ADC: addiu       $a0, $zero, 0x194
    ctx->r4 = ADD32(0, 0X194);
    after_0:
    // 0x60003AE0: bne         $v0, $zero, L_60003B70
    if (ctx->r2 != 0) {
        // 0x60003AE4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003B70;
    }
    // 0x60003AE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003AE8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x60003AEC: nop

    // 0x60003AF0: addiu       $a0, $a0, 0x108
    ctx->r4 = ADD32(ctx->r4, 0X108);
    // 0x60003AF4: jal         0x60000BB0
    // 0x60003AF8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_1;
    // 0x60003AF8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x60003AFC: bne         $v0, $zero, L_60003B54
    if (ctx->r2 != 0) {
        // 0x60003B00: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_60003B54;
    }
    // 0x60003B00: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x60003B04: jal         0x60000EBC
    // 0x60003B08: nop

    ovl_stage_world6_EBC(rdram, ctx);
        goto after_2;
    // 0x60003B08: nop

    after_2:
    // 0x60003B0C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x60003B10: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x60003B14: jal         0x60000E74
    // 0x60003B18: addiu       $a0, $a0, 0x6
    ctx->r4 = ADD32(ctx->r4, 0X6);
    ovl_stage_world6_E74(rdram, ctx);
        goto after_3;
    // 0x60003B18: addiu       $a0, $a0, 0x6
    ctx->r4 = ADD32(ctx->r4, 0X6);
    after_3:
    // 0x60003B1C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x60003B20: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x60003B24: bne         $v0, $t6, L_60003B6C
    if (ctx->r2 != ctx->r14) {
        // 0x60003B28: addiu       $a0, $a0, 0xC
        ctx->r4 = ADD32(ctx->r4, 0XC);
            goto L_60003B6C;
    }
    // 0x60003B28: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    // 0x60003B2C: jal         0x60000E68
    // 0x60003B30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world6_E68(rdram, ctx);
        goto after_4;
    // 0x60003B30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x60003B34: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x60003B38: jal         0x60000B98
    // 0x60003B3C: nop

    ovl_stage_world6_B98(rdram, ctx);
        goto after_5;
    // 0x60003B3C: nop

    after_5:
    // 0x60003B40: jal         0x60003A38
    // 0x60003B44: nop

    ovl_stage_world6_3A38(rdram, ctx);
        goto after_6;
    // 0x60003B44: nop

    after_6:
    // 0x60003B48: b           L_60003B70
    // 0x60003B4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60003B70;
    // 0x60003B4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003B50: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_60003B54:
    // 0x60003B54: jal         0x60000BA4
    // 0x60003B58: nop

    ovl_stage_world6_BA4(rdram, ctx);
        goto after_7;
    // 0x60003B58: nop

    after_7:
    // 0x60003B5C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x60003B60: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x60003B64: jal         0x60000E68
    // 0x60003B68: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    ovl_stage_world6_E68(rdram, ctx);
        goto after_8;
    // 0x60003B68: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    after_8:
L_60003B6C:
    // 0x60003B6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003B70:
    // 0x60003B70: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x60003B74: jr          $ra
    // 0x60003B78: nop

    return;
    // 0x60003B78: nop

;}
RECOMP_FUNC void ovl_stage_world6_3B7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003B7C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x60003B80: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x60003B84: jal         0x600009DC
    // 0x60003B88: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    ovl_stage_world6_9DC(rdram, ctx);
        goto after_0;
    // 0x60003B88: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x60003B8C: lw          $v1, 0x1C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X1C);
    // 0x60003B90: addiu       $a0, $zero, 0x1A0
    ctx->r4 = ADD32(0, 0X1A0);
    // 0x60003B94: lw          $s0, 0xC($v1)
    ctx->r16 = MEM_W(ctx->r3, 0XC);
    // 0x60003B98: jal         0x60000244
    // 0x60003B9C: nop

    ovl_stage_world6_244(rdram, ctx);
        goto after_1;
    // 0x60003B9C: nop

    after_1:
    // 0x60003BA0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x60003BA4: bne         $s0, $at, L_60003BD8
    if (ctx->r16 != ctx->r1) {
        // 0x60003BA8: nop
    
            goto L_60003BD8;
    }
    // 0x60003BA8: nop

    // 0x60003BAC: jal         0x600010E0
    // 0x60003BB0: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    ovl_stage_world6_10E0(rdram, ctx);
        goto after_2;
    // 0x60003BB0: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_2:
    // 0x60003BB4: jal         0x60000244
    // 0x60003BB8: addiu       $a0, $zero, 0x8B
    ctx->r4 = ADD32(0, 0X8B);
    ovl_stage_world6_244(rdram, ctx);
        goto after_3;
    // 0x60003BB8: addiu       $a0, $zero, 0x8B
    ctx->r4 = ADD32(0, 0X8B);
    after_3:
    // 0x60003BBC: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x60003BC0: jal         0x60000E68
    // 0x60003BC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world6_E68(rdram, ctx);
        goto after_4;
    // 0x60003BC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x60003BC8: jal         0x60000B98
    // 0x60003BCC: addiu       $a0, $zero, 0x18A
    ctx->r4 = ADD32(0, 0X18A);
    ovl_stage_world6_B98(rdram, ctx);
        goto after_5;
    // 0x60003BCC: addiu       $a0, $zero, 0x18A
    ctx->r4 = ADD32(0, 0X18A);
    after_5:
    // 0x60003BD0: b           L_60003C1C
    // 0x60003BD4: nop

        goto L_60003C1C;
    // 0x60003BD4: nop

L_60003BD8:
    // 0x60003BD8: jal         0x600010E0
    // 0x60003BDC: addiu       $a0, $s0, 0x4
    ctx->r4 = ADD32(ctx->r16, 0X4);
    ovl_stage_world6_10E0(rdram, ctx);
        goto after_6;
    // 0x60003BDC: addiu       $a0, $s0, 0x4
    ctx->r4 = ADD32(ctx->r16, 0X4);
    after_6:
    // 0x60003BE0: jal         0x600009C4
    // 0x60003BE4: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    ovl_stage_world6_9C4(rdram, ctx);
        goto after_7;
    // 0x60003BE4: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_7:
    // 0x60003BE8: addiu       $a0, $s0, 0x5
    ctx->r4 = ADD32(ctx->r16, 0X5);
    // 0x60003BEC: jal         0x60000E44
    // 0x60003BF0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    ovl_stage_world6_E44(rdram, ctx);
        goto after_8;
    // 0x60003BF0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_8:
    // 0x60003BF4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x60003BF8: jal         0x60000E68
    // 0x60003BFC: addiu       $a1, $s0, 0x2
    ctx->r5 = ADD32(ctx->r16, 0X2);
    ovl_stage_world6_E68(rdram, ctx);
        goto after_9;
    // 0x60003BFC: addiu       $a1, $s0, 0x2
    ctx->r5 = ADD32(ctx->r16, 0X2);
    after_9:
    // 0x60003C00: sll         $t6, $s0, 2
    ctx->r14 = S32(ctx->r16 << 2);
    // 0x60003C04: lui         $a1, 0x6000
    ctx->r5 = S32(0X6000 << 16);
    // 0x60003C08: addu        $a1, $a1, $t6
    ctx->r5 = ADD32(ctx->r5, ctx->r14);
    // 0x60003C0C: lw          $a1, 0x5C7C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5C7C);
    // 0x60003C10: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x60003C14: jal         0x60000F04
    // 0x60003C18: nor         $a1, $a1, $zero
    ctx->r5 = ~(ctx->r5 | 0);
    ovl_stage_world6_F04(rdram, ctx);
        goto after_10;
    // 0x60003C18: nor         $a1, $a1, $zero
    ctx->r5 = ~(ctx->r5 | 0);
    after_10:
L_60003C1C:
    // 0x60003C1C: jal         0x600009AC
    // 0x60003C20: nop

    ovl_stage_world6_9AC(rdram, ctx);
        goto after_11;
    // 0x60003C20: nop

    after_11:
    // 0x60003C24: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x60003C28: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x60003C2C: jr          $ra
    // 0x60003C30: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x60003C30: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_stage_world6_3C34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003C34: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x60003C38: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x60003C3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003C40: addiu       $a0, $a0, 0x10E
    ctx->r4 = ADD32(ctx->r4, 0X10E);
    // 0x60003C44: jal         0x60000BB0
    // 0x60003C48: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_0;
    // 0x60003C48: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x60003C4C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x60003C50: bne         $v0, $zero, L_60003C8C
    if (ctx->r2 != 0) {
        // 0x60003C54: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003C8C;
    }
    // 0x60003C54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003C58: jal         0x60000B98
    // 0x60003C5C: nop

    ovl_stage_world6_B98(rdram, ctx);
        goto after_1;
    // 0x60003C5C: nop

    after_1:
    // 0x60003C60: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003C64: addiu       $a0, $a0, 0x3B7C
    ctx->r4 = ADD32(ctx->r4, 0X3B7C);
    // 0x60003C68: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60003C6C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60003C70: jal         0x60000994
    // 0x60003C74: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world6_994(rdram, ctx);
        goto after_2;
    // 0x60003C74: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x60003C78: lw          $v1, 0x1C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X1C);
    // 0x60003C7C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x60003C80: nop

    // 0x60003C84: sw          $t6, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r14;
    // 0x60003C88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003C8C:
    // 0x60003C8C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x60003C90: jr          $ra
    // 0x60003C94: nop

    return;
    // 0x60003C94: nop

;}
RECOMP_FUNC void ovl_stage_world6_3C98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003C98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60003C9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003CA0: jal         0x60000BB0
    // 0x60003CA4: addiu       $a0, $zero, 0x112
    ctx->r4 = ADD32(0, 0X112);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_0;
    // 0x60003CA4: addiu       $a0, $zero, 0x112
    ctx->r4 = ADD32(0, 0X112);
    after_0:
    // 0x60003CA8: bne         $v0, $zero, L_60003CDC
    if (ctx->r2 != 0) {
        // 0x60003CAC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003CDC;
    }
    // 0x60003CAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003CB0: jal         0x60000BB0
    // 0x60003CB4: addiu       $a0, $zero, 0x189
    ctx->r4 = ADD32(0, 0X189);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_1;
    // 0x60003CB4: addiu       $a0, $zero, 0x189
    ctx->r4 = ADD32(0, 0X189);
    after_1:
    // 0x60003CB8: beq         $v0, $zero, L_60003CDC
    if (ctx->r2 == 0) {
        // 0x60003CBC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003CDC;
    }
    // 0x60003CBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003CC0: jal         0x600010E0
    // 0x60003CC4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    ovl_stage_world6_10E0(rdram, ctx);
        goto after_2;
    // 0x60003CC4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_2:
    // 0x60003CC8: jal         0x60000A60
    // 0x60003CCC: addiu       $a0, $zero, 0xA87
    ctx->r4 = ADD32(0, 0XA87);
    ovl_stage_world6_A60(rdram, ctx);
        goto after_3;
    // 0x60003CCC: addiu       $a0, $zero, 0xA87
    ctx->r4 = ADD32(0, 0XA87);
    after_3:
    // 0x60003CD0: jal         0x60000B98
    // 0x60003CD4: addiu       $a0, $zero, 0x112
    ctx->r4 = ADD32(0, 0X112);
    ovl_stage_world6_B98(rdram, ctx);
        goto after_4;
    // 0x60003CD4: addiu       $a0, $zero, 0x112
    ctx->r4 = ADD32(0, 0X112);
    after_4:
    // 0x60003CD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003CDC:
    // 0x60003CDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60003CE0: jr          $ra
    // 0x60003CE4: nop

    return;
    // 0x60003CE4: nop

;}
RECOMP_FUNC void ovl_stage_world6_3CE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003CE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60003CEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003CF0: jal         0x60000B98
    // 0x60003CF4: addiu       $a0, $zero, 0x187
    ctx->r4 = ADD32(0, 0X187);
    ovl_stage_world6_B98(rdram, ctx);
        goto after_0;
    // 0x60003CF4: addiu       $a0, $zero, 0x187
    ctx->r4 = ADD32(0, 0X187);
    after_0:
    // 0x60003CF8: jal         0x60000A60
    // 0x60003CFC: addiu       $a0, $zero, 0xA85
    ctx->r4 = ADD32(0, 0XA85);
    ovl_stage_world6_A60(rdram, ctx);
        goto after_1;
    // 0x60003CFC: addiu       $a0, $zero, 0xA85
    ctx->r4 = ADD32(0, 0XA85);
    after_1:
    // 0x60003D00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003D04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60003D08: jr          $ra
    // 0x60003D0C: nop

    return;
    // 0x60003D0C: nop

;}
RECOMP_FUNC void ovl_stage_world6_3D10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003D10: addiu       $sp, $sp, -0xC8
    ctx->r29 = ADD32(ctx->r29, -0XC8);
    // 0x60003D14: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x60003D18: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x60003D1C: sw          $fp, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r30;
    // 0x60003D20: sw          $s7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r23;
    // 0x60003D24: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x60003D28: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x60003D2C: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x60003D30: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x60003D34: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x60003D38: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x60003D3C: swc1        $f31, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x60003D40: swc1        $f30, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f30.u32l;
    // 0x60003D44: swc1        $f29, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x60003D48: swc1        $f28, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f28.u32l;
    // 0x60003D4C: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x60003D50: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x60003D54: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x60003D58: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x60003D5C: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x60003D60: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x60003D64: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x60003D68: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x60003D6C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x60003D70: jal         0x60000DD8
    // 0x60003D74: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world6_DD8(rdram, ctx);
        goto after_0;
    // 0x60003D74: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x60003D78: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x60003D7C: jal         0x60000C1C
    // 0x60003D80: addiu       $s0, $zero, -0x8
    ctx->r16 = ADD32(0, -0X8);
    ovl_stage_world6_C1C(rdram, ctx);
        goto after_1;
    // 0x60003D80: addiu       $s0, $zero, -0x8
    ctx->r16 = ADD32(0, -0X8);
    after_1:
    // 0x60003D84: lw          $v1, 0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8);
    // 0x60003D88: addiu       $at, $zero, 0x877
    ctx->r1 = ADD32(0, 0X877);
    // 0x60003D8C: bne         $v1, $at, L_60003DA8
    if (ctx->r3 != ctx->r1) {
        // 0x60003D90: addiu       $at, $zero, 0x875
        ctx->r1 = ADD32(0, 0X875);
            goto L_60003DA8;
    }
    // 0x60003D90: addiu       $at, $zero, 0x875
    ctx->r1 = ADD32(0, 0X875);
    // 0x60003D94: jal         0x600009AC
    // 0x60003D98: nop

    ovl_stage_world6_9AC(rdram, ctx);
        goto after_2;
    // 0x60003D98: nop

    after_2:
    // 0x60003D9C: b           L_60003DEC
    // 0x60003DA0: lw          $fp, 0x8C($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X8C);
        goto L_60003DEC;
    // 0x60003DA0: lw          $fp, 0x8C($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X8C);
    // 0x60003DA4: addiu       $at, $zero, 0x875
    ctx->r1 = ADD32(0, 0X875);
L_60003DA8:
    // 0x60003DA8: bne         $v1, $at, L_60003DBC
    if (ctx->r3 != ctx->r1) {
        // 0x60003DAC: lui         $fp, 0x6000
        ctx->r30 = S32(0X6000 << 16);
            goto L_60003DBC;
    }
    // 0x60003DAC: lui         $fp, 0x6000
    ctx->r30 = S32(0X6000 << 16);
    // 0x60003DB0: addiu       $fp, $fp, 0x5EFC
    ctx->r30 = ADD32(ctx->r30, 0X5EFC);
    // 0x60003DB4: b           L_60003DE8
    // 0x60003DB8: sw          $fp, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r30;
        goto L_60003DE8;
    // 0x60003DB8: sw          $fp, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r30;
L_60003DBC:
    // 0x60003DBC: addiu       $at, $zero, 0x882
    ctx->r1 = ADD32(0, 0X882);
    // 0x60003DC0: bne         $v1, $at, L_60003DD4
    if (ctx->r3 != ctx->r1) {
        // 0x60003DC4: lui         $fp, 0x6000
        ctx->r30 = S32(0X6000 << 16);
            goto L_60003DD4;
    }
    // 0x60003DC4: lui         $fp, 0x6000
    ctx->r30 = S32(0X6000 << 16);
    // 0x60003DC8: addiu       $fp, $fp, 0x5FEC
    ctx->r30 = ADD32(ctx->r30, 0X5FEC);
    // 0x60003DCC: b           L_60003DE8
    // 0x60003DD0: sw          $fp, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r30;
        goto L_60003DE8;
    // 0x60003DD0: sw          $fp, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r30;
L_60003DD4:
    // 0x60003DD4: addiu       $at, $zero, 0x884
    ctx->r1 = ADD32(0, 0X884);
    // 0x60003DD8: bne         $v1, $at, L_60003DE8
    if (ctx->r3 != ctx->r1) {
        // 0x60003DDC: lui         $fp, 0x6000
        ctx->r30 = S32(0X6000 << 16);
            goto L_60003DE8;
    }
    // 0x60003DDC: lui         $fp, 0x6000
    ctx->r30 = S32(0X6000 << 16);
    // 0x60003DE0: addiu       $fp, $fp, 0x625C
    ctx->r30 = ADD32(ctx->r30, 0X625C);
    // 0x60003DE4: sw          $fp, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r30;
L_60003DE8:
    // 0x60003DE8: lw          $fp, 0x8C($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X8C);
L_60003DEC:
    // 0x60003DEC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60003DF0: jal         0x60000DF0
    // 0x60003DF4: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    ovl_stage_world6_DF0(rdram, ctx);
        goto after_3;
    // 0x60003DF4: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_3:
    // 0x60003DF8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x60003DFC: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x60003E00: lwc1        $f4, 0x0($fp)
    ctx->f4.u32l = MEM_W(ctx->r30, 0X0);
    // 0x60003E04: addiu       $s6, $sp, 0xB0
    ctx->r22 = ADD32(ctx->r29, 0XB0);
    // 0x60003E08: mul.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x60003E0C: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x60003E10: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x60003E14: swc1        $f6, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f6.u32l;
    // 0x60003E18: lwc1        $f8, 0x4($fp)
    ctx->f8.u32l = MEM_W(ctx->r30, 0X4);
    // 0x60003E1C: nop

    // 0x60003E20: mul.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x60003E24: swc1        $f10, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f10.u32l;
    // 0x60003E28: lwc1        $f4, 0x8($fp)
    ctx->f4.u32l = MEM_W(ctx->r30, 0X8);
    // 0x60003E2C: nop

    // 0x60003E30: mul.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x60003E34: swc1        $f6, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f6.u32l;
    // 0x60003E38: lw          $t6, 0x44($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X44);
    // 0x60003E3C: nop

    // 0x60003E40: ori         $t7, $t6, 0x3
    ctx->r15 = ctx->r14 | 0X3;
    // 0x60003E44: jal         0x60000D54
    // 0x60003E48: sw          $t7, 0x44($s4)
    MEM_W(0X44, ctx->r20) = ctx->r15;
    ovl_stage_world6_D54(rdram, ctx);
        goto after_4;
    // 0x60003E48: sw          $t7, 0x44($s4)
    MEM_W(0X44, ctx->r20) = ctx->r15;
    after_4:
    // 0x60003E4C: sll         $s7, $s1, 2
    ctx->r23 = S32(ctx->r17 << 2);
    // 0x60003E50: subu        $s7, $s7, $s1
    ctx->r23 = SUB32(ctx->r23, ctx->r17);
    // 0x60003E54: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x60003E58: sll         $s7, $s7, 2
    ctx->r23 = S32(ctx->r23 << 2);
    // 0x60003E5C: lui         $s2, 0x6000
    ctx->r18 = S32(0X6000 << 16);
    // 0x60003E60: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x60003E64: mtc1        $zero, $f30
    ctx->f30.u32l = 0;
    // 0x60003E68: addiu       $s2, $s2, 0x65E0
    ctx->r18 = ADD32(ctx->r18, 0X65E0);
    // 0x60003E6C: addu        $s5, $fp, $s7
    ctx->r21 = ADD32(ctx->r30, ctx->r23);
    // 0x60003E70: addiu       $s3, $zero, 0xC
    ctx->r19 = ADD32(0, 0XC);
L_60003E74:
    // 0x60003E74: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x60003E78: lwc1        $f10, 0xC($s5)
    ctx->f10.u32l = MEM_W(ctx->r21, 0XC);
    // 0x60003E7C: nop

    // 0x60003E80: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x60003E84: nop

    // 0x60003E88: bc1t        L_60004088
    if (c1cs) {
        // 0x60003E8C: addu        $a1, $s7, $fp
        ctx->r5 = ADD32(ctx->r23, ctx->r30);
            goto L_60004088;
    }
    // 0x60003E8C: addu        $a1, $s7, $fp
    ctx->r5 = ADD32(ctx->r23, ctx->r30);
    // 0x60003E90: addiu       $a0, $a1, 0xC
    ctx->r4 = ADD32(ctx->r5, 0XC);
    // 0x60003E94: jal         0x60000418
    // 0x60003E98: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    ovl_stage_world6_418(rdram, ctx);
        goto after_5;
    // 0x60003E98: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    after_5:
    // 0x60003E9C: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x60003EA0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60003EA4: lwc1        $f12, 0xC($s5)
    ctx->f12.u32l = MEM_W(ctx->r21, 0XC);
    // 0x60003EA8: mul.s       $f2, $f0, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x60003EAC: lwc1        $f6, 0x0($s5)
    ctx->f6.u32l = MEM_W(ctx->r21, 0X0);
    // 0x60003EB0: lwc1        $f4, 0x4($s5)
    ctx->f4.u32l = MEM_W(ctx->r21, 0X4);
    // 0x60003EB4: lwc1        $f10, 0x10($s5)
    ctx->f10.u32l = MEM_W(ctx->r21, 0X10);
    // 0x60003EB8: sub.s       $f8, $f12, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f12.fl - ctx->f6.fl;
    // 0x60003EBC: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x60003EC0: lwc1        $f10, 0x8($s5)
    ctx->f10.u32l = MEM_W(ctx->r21, 0X8);
    // 0x60003EC4: div.s       $f14, $f8, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = DIV_S(ctx->f8.fl, ctx->f2.fl);
    // 0x60003EC8: lwc1        $f8, 0x14($s5)
    ctx->f8.u32l = MEM_W(ctx->r21, 0X14);
    // 0x60003ECC: c.le.s      $f30, $f2
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f30.fl <= ctx->f2.fl;
    // 0x60003ED0: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x60003ED4: mov.s       $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    ctx->f20.fl = ctx->f2.fl;
    // 0x60003ED8: nop

    // 0x60003EDC: div.s       $f16, $f6, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = DIV_S(ctx->f6.fl, ctx->f2.fl);
    // 0x60003EE0: bc1f        L_60003EF0
    if (!c1cs) {
        // 0x60003EE4: div.s       $f18, $f4, $f2
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = DIV_S(ctx->f4.fl, ctx->f2.fl);
            goto L_60003EF0;
    }
    // 0x60003EE4: div.s       $f18, $f4, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = DIV_S(ctx->f4.fl, ctx->f2.fl);
    // 0x60003EE8: b           L_60003EF4
    // 0x60003EEC: add.s       $f0, $f2, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f22.fl;
        goto L_60003EF4;
    // 0x60003EEC: add.s       $f0, $f2, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f22.fl;
L_60003EF0:
    // 0x60003EF0: sub.s       $f0, $f2, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f22.fl;
L_60003EF4:
    // 0x60003EF4: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x60003EF8: nop

    // 0x60003EFC: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x60003F00: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x60003F04: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x60003F08: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x60003F0C: cvt.w.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = CVT_W_S(ctx->f0.fl);
    // 0x60003F10: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x60003F14: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x60003F18: blez        $t9, L_6000404C
    if (SIGNED(ctx->r25) <= 0) {
        // 0x60003F1C: nop
    
            goto L_6000404C;
    }
    // 0x60003F1C: nop

    // 0x60003F20: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x60003F24: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x60003F28: mul.s       $f24, $f14, $f8
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f24.fl = MUL_S(ctx->f14.fl, ctx->f8.fl);
    // 0x60003F2C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60003F30: mul.s       $f26, $f16, $f10
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f26.fl = MUL_S(ctx->f16.fl, ctx->f10.fl);
    // 0x60003F34: nop

    // 0x60003F38: mul.s       $f28, $f18, $f4
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f28.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x60003F3C: nop

L_60003F40:
    // 0x60003F40: lwc1        $f0, 0xB0($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0XB0);
    // 0x60003F44: lwc1        $f2, 0xB4($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0XB4);
    // 0x60003F48: lwc1        $f12, 0xB8($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x60003F4C: add.s       $f0, $f0, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f24.fl;
    // 0x60003F50: add.s       $f2, $f2, $f26
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f26.fl;
    // 0x60003F54: bgez        $s0, L_60003F8C
    if (SIGNED(ctx->r16) >= 0) {
        // 0x60003F58: add.s       $f12, $f12, $f28
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f28.fl;
            goto L_60003F8C;
    }
    // 0x60003F58: add.s       $f12, $f12, $f28
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f28.fl;
    // 0x60003F5C: addiu       $t0, $s0, 0x8
    ctx->r8 = ADD32(ctx->r16, 0X8);
    // 0x60003F60: andi        $t1, $t0, 0x7
    ctx->r9 = ctx->r8 & 0X7;
    // 0x60003F64: multu       $t1, $s3
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x60003F68: swc1        $f0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f0.u32l;
    // 0x60003F6C: swc1        $f2, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f2.u32l;
    // 0x60003F70: swc1        $f12, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f12.u32l;
    // 0x60003F74: mflo        $t2
    ctx->r10 = lo;
    // 0x60003F78: addu        $v0, $s2, $t2
    ctx->r2 = ADD32(ctx->r18, ctx->r10);
    // 0x60003F7C: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    // 0x60003F80: swc1        $f2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f2.u32l;
    // 0x60003F84: b           L_60003FD0
    // 0x60003F88: swc1        $f12, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f12.u32l;
        goto L_60003FD0;
    // 0x60003F88: swc1        $f12, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f12.u32l;
L_60003F8C:
    // 0x60003F8C: multu       $s0, $s3
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x60003F90: addiu       $t4, $s0, -0x7
    ctx->r12 = ADD32(ctx->r16, -0X7);
    // 0x60003F94: andi        $t5, $t4, 0x7
    ctx->r13 = ctx->r12 & 0X7;
    // 0x60003F98: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x60003F9C: swc1        $f0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f0.u32l;
    // 0x60003FA0: swc1        $f2, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f2.u32l;
    // 0x60003FA4: swc1        $f12, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f12.u32l;
    // 0x60003FA8: mflo        $t3
    ctx->r11 = lo;
    // 0x60003FAC: addu        $v0, $s2, $t3
    ctx->r2 = ADD32(ctx->r18, ctx->r11);
    // 0x60003FB0: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    // 0x60003FB4: multu       $t5, $s3
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x60003FB8: swc1        $f2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f2.u32l;
    // 0x60003FBC: swc1        $f12, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f12.u32l;
    // 0x60003FC0: mflo        $t6
    ctx->r14 = lo;
    // 0x60003FC4: addu        $a1, $s2, $t6
    ctx->r5 = ADD32(ctx->r18, ctx->r14);
    // 0x60003FC8: jal         0x60000D54
    // 0x60003FCC: nop

    ovl_stage_world6_D54(rdram, ctx);
        goto after_6;
    // 0x60003FCC: nop

    after_6:
L_60003FD0:
    // 0x60003FD0: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x60003FD4: jal         0x60000D60
    // 0x60003FD8: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    ovl_stage_world6_D60(rdram, ctx);
        goto after_7;
    // 0x60003FD8: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    after_7:
    // 0x60003FDC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60003FE0: slti        $at, $s0, 0x8
    ctx->r1 = SIGNED(ctx->r16) < 0X8 ? 1 : 0;
    // 0x60003FE4: bne         $at, $zero, L_60003FF0
    if (ctx->r1 != 0) {
        // 0x60003FE8: nop
    
            goto L_60003FF0;
    }
    // 0x60003FE8: nop

    // 0x60003FEC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_60003FF0:
    // 0x60003FF0: jal         0x600009D0
    // 0x60003FF4: nop

    ovl_stage_world6_9D0(rdram, ctx);
        goto after_8;
    // 0x60003FF4: nop

    after_8:
    // 0x60003FF8: c.le.s      $f30, $f20
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f30.fl <= ctx->f20.fl;
    // 0x60003FFC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x60004000: bc1f        L_60004010
    if (!c1cs) {
        // 0x60004004: nop
    
            goto L_60004010;
    }
    // 0x60004004: nop

    // 0x60004008: b           L_60004014
    // 0x6000400C: add.s       $f0, $f20, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = ctx->f20.fl + ctx->f22.fl;
        goto L_60004014;
    // 0x6000400C: add.s       $f0, $f20, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = ctx->f20.fl + ctx->f22.fl;
L_60004010:
    // 0x60004010: sub.s       $f0, $f20, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = ctx->f20.fl - ctx->f22.fl;
L_60004014:
    // 0x60004014: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x60004018: nop

    // 0x6000401C: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x60004020: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x60004024: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x60004028: nop

    // 0x6000402C: cvt.w.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = CVT_W_S(ctx->f0.fl);
    // 0x60004030: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x60004034: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x60004038: slt         $at, $s1, $t8
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x6000403C: bne         $at, $zero, L_60003F40
    if (ctx->r1 != 0) {
        // 0x60004040: nop
    
            goto L_60003F40;
    }
    // 0x60004040: nop

    // 0x60004044: lwc1        $f12, 0xC($s5)
    ctx->f12.u32l = MEM_W(ctx->r21, 0XC);
    // 0x60004048: nop

L_6000404C:
    // 0x6000404C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x60004050: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x60004054: addiu       $s7, $s7, 0xC
    ctx->r23 = ADD32(ctx->r23, 0XC);
    // 0x60004058: mul.s       $f8, $f12, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x6000405C: addiu       $s5, $s5, 0xC
    ctx->r21 = ADD32(ctx->r21, 0XC);
    // 0x60004060: swc1        $f8, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f8.u32l;
    // 0x60004064: lwc1        $f10, 0x4($s5)
    ctx->f10.u32l = MEM_W(ctx->r21, 0X4);
    // 0x60004068: nop

    // 0x6000406C: mul.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x60004070: swc1        $f4, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f4.u32l;
    // 0x60004074: lwc1        $f6, 0x8($s5)
    ctx->f6.u32l = MEM_W(ctx->r21, 0X8);
    // 0x60004078: nop

    // 0x6000407C: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x60004080: b           L_60003E74
    // 0x60004084: swc1        $f8, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f8.u32l;
        goto L_60003E74;
    // 0x60004084: swc1        $f8, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f8.u32l;
L_60004088:
    // 0x60004088: jal         0x600009AC
    // 0x6000408C: nop

    ovl_stage_world6_9AC(rdram, ctx);
        goto after_9;
    // 0x6000408C: nop

    after_9:
    // 0x60004090: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x60004094: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x60004098: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x6000409C: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x600040A0: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x600040A4: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x600040A8: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x600040AC: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x600040B0: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x600040B4: lwc1        $f29, 0x38($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x600040B8: lwc1        $f28, 0x3C($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x600040BC: lwc1        $f31, 0x40($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x600040C0: lwc1        $f30, 0x44($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X44);
    // 0x600040C4: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x600040C8: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x600040CC: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x600040D0: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x600040D4: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x600040D8: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x600040DC: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x600040E0: lw          $s7, 0x64($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X64);
    // 0x600040E4: lw          $fp, 0x68($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X68);
    // 0x600040E8: jr          $ra
    // 0x600040EC: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
    return;
    // 0x600040EC: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
;}
RECOMP_FUNC void ovl_stage_world6_40F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600040F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600040F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600040F8: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600040FC: addiu       $a0, $a0, 0x3D10
    ctx->r4 = ADD32(ctx->r4, 0X3D10);
    // 0x60004100: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60004104: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60004108: jal         0x60000994
    // 0x6000410C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world6_994(rdram, ctx);
        goto after_0;
    // 0x6000410C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x60004110: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004114: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60004118: jr          $ra
    // 0x6000411C: nop

    return;
    // 0x6000411C: nop

;}
RECOMP_FUNC void ovl_stage_world6_4120(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004120: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x60004124: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x60004128: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x6000412C: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x60004130: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x60004134: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x60004138: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x6000413C: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x60004140: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x60004144: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x60004148: jal         0x60000E74
    // 0x6000414C: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    ovl_stage_world6_E74(rdram, ctx);
        goto after_0;
    // 0x6000414C: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    after_0:
    // 0x60004150: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x60004154: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60004158: swc1        $f0, 0x6648($at)
    MEM_W(0X6648, ctx->r1) = ctx->f0.u32l;
    // 0x6000415C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60004160: swc1        $f0, 0x6650($at)
    MEM_W(0X6650, ctx->r1) = ctx->f0.u32l;
    // 0x60004164: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60004168: swc1        $f0, 0x6658($at)
    MEM_W(0X6658, ctx->r1) = ctx->f0.u32l;
    // 0x6000416C: swc1        $f0, 0x665C($at)
    MEM_W(0X665C, ctx->r1) = ctx->f0.u32l;
    // 0x60004170: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60004174: swc1        $f0, 0x6660($at)
    MEM_W(0X6660, ctx->r1) = ctx->f0.u32l;
    // 0x60004178: swc1        $f0, 0x6664($at)
    MEM_W(0X6664, ctx->r1) = ctx->f0.u32l;
    // 0x6000417C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60004180: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x60004184: sw          $t7, 0x6680($at)
    MEM_W(0X6680, ctx->r1) = ctx->r15;
    // 0x60004188: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000418C: swc1        $f0, 0x6668($at)
    MEM_W(0X6668, ctx->r1) = ctx->f0.u32l;
    // 0x60004190: swc1        $f0, 0x666C($at)
    MEM_W(0X666C, ctx->r1) = ctx->f0.u32l;
    // 0x60004194: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60004198: swc1        $f0, 0x6670($at)
    MEM_W(0X6670, ctx->r1) = ctx->f0.u32l;
    // 0x6000419C: swc1        $f0, 0x6674($at)
    MEM_W(0X6674, ctx->r1) = ctx->f0.u32l;
    // 0x600041A0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600041A4: swc1        $f0, 0x6678($at)
    MEM_W(0X6678, ctx->r1) = ctx->f0.u32l;
    // 0x600041A8: swc1        $f0, 0x667C($at)
    MEM_W(0X667C, ctx->r1) = ctx->f0.u32l;
    // 0x600041AC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600041B0: swc1        $f0, 0x664C($at)
    MEM_W(0X664C, ctx->r1) = ctx->f0.u32l;
    // 0x600041B4: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600041B8: swc1        $f0, 0x6654($at)
    MEM_W(0X6654, ctx->r1) = ctx->f0.u32l;
    // 0x600041BC: lui         $at, 0xC110
    ctx->r1 = S32(0XC110 << 16);
    // 0x600041C0: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x600041C4: lui         $t6, 0x6000
    ctx->r14 = S32(0X6000 << 16);
    // 0x600041C8: lui         $at, 0x4110
    ctx->r1 = S32(0X4110 << 16);
    // 0x600041CC: addiu       $t6, $t6, 0x6648
    ctx->r14 = ADD32(ctx->r14, 0X6648);
    // 0x600041D0: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x600041D4: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x600041D8: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
    // 0x600041DC: addiu       $s3, $zero, 0x32
    ctx->r19 = ADD32(0, 0X32);
    // 0x600041E0: addiu       $s2, $sp, 0x3C
    ctx->r18 = ADD32(ctx->r29, 0X3C);
L_600041E4:
    // 0x600041E4: jal         0x600009C4
    // 0x600041E8: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_stage_world6_9C4(rdram, ctx);
        goto after_1;
    // 0x600041E8: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_1:
    // 0x600041EC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_600041F0:
    // 0x600041F0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600041F4: swc1        $f20, 0x6678($at)
    MEM_W(0X6678, ctx->r1) = ctx->f20.u32l;
    // 0x600041F8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x600041FC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x60004200: jal         0x600006C4
    // 0x60004204: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    ovl_stage_world6_6C4(rdram, ctx);
        goto after_2;
    // 0x60004204: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_2:
    // 0x60004208: jal         0x60000BB0
    // 0x6000420C: addiu       $a0, $zero, 0x11E
    ctx->r4 = ADD32(0, 0X11E);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_3;
    // 0x6000420C: addiu       $a0, $zero, 0x11E
    ctx->r4 = ADD32(0, 0X11E);
    after_3:
    // 0x60004210: beq         $v0, $zero, L_60004230
    if (ctx->r2 == 0) {
        // 0x60004214: nop
    
            goto L_60004230;
    }
    // 0x60004214: nop

L_60004218:
    // 0x60004218: jal         0x600009D0
    // 0x6000421C: nop

    ovl_stage_world6_9D0(rdram, ctx);
        goto after_4;
    // 0x6000421C: nop

    after_4:
    // 0x60004220: jal         0x60000BB0
    // 0x60004224: addiu       $a0, $zero, 0x11E
    ctx->r4 = ADD32(0, 0X11E);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_5;
    // 0x60004224: addiu       $a0, $zero, 0x11E
    ctx->r4 = ADD32(0, 0X11E);
    after_5:
    // 0x60004228: bne         $v0, $zero, L_60004218
    if (ctx->r2 != 0) {
        // 0x6000422C: nop
    
            goto L_60004218;
    }
    // 0x6000422C: nop

L_60004230:
    // 0x60004230: jal         0x600009D0
    // 0x60004234: nop

    ovl_stage_world6_9D0(rdram, ctx);
        goto after_6;
    // 0x60004234: nop

    after_6:
    // 0x60004238: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x6000423C: slti        $at, $s0, 0x32
    ctx->r1 = SIGNED(ctx->r16) < 0X32 ? 1 : 0;
    // 0x60004240: bne         $at, $zero, L_600041F0
    if (ctx->r1 != 0) {
        // 0x60004244: nop
    
            goto L_600041F0;
    }
    // 0x60004244: nop

    // 0x60004248: jal         0x600009C4
    // 0x6000424C: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_stage_world6_9C4(rdram, ctx);
        goto after_7;
    // 0x6000424C: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_7:
    // 0x60004250: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_60004254:
    // 0x60004254: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60004258: swc1        $f22, 0x6678($at)
    MEM_W(0X6678, ctx->r1) = ctx->f22.u32l;
    // 0x6000425C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x60004260: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x60004264: jal         0x600006C4
    // 0x60004268: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    ovl_stage_world6_6C4(rdram, ctx);
        goto after_8;
    // 0x60004268: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_8:
    // 0x6000426C: jal         0x60000BB0
    // 0x60004270: addiu       $a0, $zero, 0x11E
    ctx->r4 = ADD32(0, 0X11E);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_9;
    // 0x60004270: addiu       $a0, $zero, 0x11E
    ctx->r4 = ADD32(0, 0X11E);
    after_9:
    // 0x60004274: beq         $v0, $zero, L_60004294
    if (ctx->r2 == 0) {
        // 0x60004278: nop
    
            goto L_60004294;
    }
    // 0x60004278: nop

L_6000427C:
    // 0x6000427C: jal         0x600009D0
    // 0x60004280: nop

    ovl_stage_world6_9D0(rdram, ctx);
        goto after_10;
    // 0x60004280: nop

    after_10:
    // 0x60004284: jal         0x60000BB0
    // 0x60004288: addiu       $a0, $zero, 0x11E
    ctx->r4 = ADD32(0, 0X11E);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_11;
    // 0x60004288: addiu       $a0, $zero, 0x11E
    ctx->r4 = ADD32(0, 0X11E);
    after_11:
    // 0x6000428C: bne         $v0, $zero, L_6000427C
    if (ctx->r2 != 0) {
        // 0x60004290: nop
    
            goto L_6000427C;
    }
    // 0x60004290: nop

L_60004294:
    // 0x60004294: jal         0x600009D0
    // 0x60004298: nop

    ovl_stage_world6_9D0(rdram, ctx);
        goto after_12;
    // 0x60004298: nop

    after_12:
    // 0x6000429C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x600042A0: bne         $s0, $s3, L_60004254
    if (ctx->r16 != ctx->r19) {
        // 0x600042A4: nop
    
            goto L_60004254;
    }
    // 0x600042A4: nop

    // 0x600042A8: b           L_600041E4
    // 0x600042AC: nop

        goto L_600041E4;
    // 0x600042AC: nop

    // 0x600042B0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x600042B4: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x600042B8: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x600042BC: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x600042C0: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x600042C4: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x600042C8: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x600042CC: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x600042D0: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x600042D4: jr          $ra
    // 0x600042D8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x600042D8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_stage_world6_42DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600042DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600042E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600042E4: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600042E8: addiu       $a0, $a0, 0x4120
    ctx->r4 = ADD32(ctx->r4, 0X4120);
    // 0x600042EC: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x600042F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x600042F4: jal         0x60000994
    // 0x600042F8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world6_994(rdram, ctx);
        goto after_0;
    // 0x600042F8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x600042FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004300: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60004304: jr          $ra
    // 0x60004308: nop

    return;
    // 0x60004308: nop

;}
RECOMP_FUNC void ovl_stage_world6_430C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000430C: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x60004310: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x60004314: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x60004318: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x6000431C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x60004320: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x60004324: jal         0x600009DC
    // 0x60004328: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    ovl_stage_world6_9DC(rdram, ctx);
        goto after_0;
    // 0x60004328: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x6000432C: lw          $v1, 0x1C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X1C);
    // 0x60004330: addiu       $a0, $zero, 0x117
    ctx->r4 = ADD32(0, 0X117);
    // 0x60004334: lw          $s0, 0xC($v1)
    ctx->r16 = MEM_W(ctx->r3, 0XC);
    // 0x60004338: jal         0x60000BB0
    // 0x6000433C: nop

    ovl_stage_world6_BB0(rdram, ctx);
        goto after_1;
    // 0x6000433C: nop

    after_1:
    // 0x60004340: bne         $v0, $zero, L_60004444
    if (ctx->r2 != 0) {
        // 0x60004344: addiu       $s1, $s0, 0x114
        ctx->r17 = ADD32(ctx->r16, 0X114);
            goto L_60004444;
    }
    // 0x60004344: addiu       $s1, $s0, 0x114
    ctx->r17 = ADD32(ctx->r16, 0X114);
    // 0x60004348: jal         0x60000BB0
    // 0x6000434C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_2;
    // 0x6000434C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x60004350: beq         $v0, $zero, L_60004374
    if (ctx->r2 == 0) {
        // 0x60004354: addiu       $a0, $s0, 0xB
        ctx->r4 = ADD32(ctx->r16, 0XB);
            goto L_60004374;
    }
    // 0x60004354: addiu       $a0, $s0, 0xB
    ctx->r4 = ADD32(ctx->r16, 0XB);
    // 0x60004358: addiu       $a0, $s0, 0xB
    ctx->r4 = ADD32(ctx->r16, 0XB);
    // 0x6000435C: jal         0x60000E68
    // 0x60004360: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world6_E68(rdram, ctx);
        goto after_3;
    // 0x60004360: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x60004364: jal         0x60000BA4
    // 0x60004368: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_stage_world6_BA4(rdram, ctx);
        goto after_4;
    // 0x60004368: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_4:
    // 0x6000436C: b           L_60004384
    // 0x60004370: nop

        goto L_60004384;
    // 0x60004370: nop

L_60004374:
    // 0x60004374: jal         0x60000E68
    // 0x60004378: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world6_E68(rdram, ctx);
        goto after_5;
    // 0x60004378: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x6000437C: jal         0x60000B98
    // 0x60004380: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_stage_world6_B98(rdram, ctx);
        goto after_6;
    // 0x60004380: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_6:
L_60004384:
    // 0x60004384: jal         0x60000BB0
    // 0x60004388: addiu       $a0, $zero, 0x114
    ctx->r4 = ADD32(0, 0X114);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_7;
    // 0x60004388: addiu       $a0, $zero, 0x114
    ctx->r4 = ADD32(0, 0X114);
    after_7:
    // 0x6000438C: beq         $v0, $zero, L_60004444
    if (ctx->r2 == 0) {
        // 0x60004390: nop
    
            goto L_60004444;
    }
    // 0x60004390: nop

    // 0x60004394: jal         0x60000BB0
    // 0x60004398: addiu       $a0, $zero, 0x115
    ctx->r4 = ADD32(0, 0X115);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_8;
    // 0x60004398: addiu       $a0, $zero, 0x115
    ctx->r4 = ADD32(0, 0X115);
    after_8:
    // 0x6000439C: beq         $v0, $zero, L_60004444
    if (ctx->r2 == 0) {
        // 0x600043A0: nop
    
            goto L_60004444;
    }
    // 0x600043A0: nop

    // 0x600043A4: jal         0x60000BB0
    // 0x600043A8: addiu       $a0, $zero, 0x116
    ctx->r4 = ADD32(0, 0X116);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_9;
    // 0x600043A8: addiu       $a0, $zero, 0x116
    ctx->r4 = ADD32(0, 0X116);
    after_9:
    // 0x600043AC: beq         $v0, $zero, L_60004444
    if (ctx->r2 == 0) {
        // 0x600043B0: nop
    
            goto L_60004444;
    }
    // 0x600043B0: nop

    // 0x600043B4: jal         0x60000B98
    // 0x600043B8: addiu       $a0, $zero, 0x117
    ctx->r4 = ADD32(0, 0X117);
    ovl_stage_world6_B98(rdram, ctx);
        goto after_10;
    // 0x600043B8: addiu       $a0, $zero, 0x117
    ctx->r4 = ADD32(0, 0X117);
    after_10:
    // 0x600043BC: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x600043C0: jal         0x60000E68
    // 0x600043C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world6_E68(rdram, ctx);
        goto after_11;
    // 0x600043C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_11:
    // 0x600043C8: jal         0x600009C4
    // 0x600043CC: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    ovl_stage_world6_9C4(rdram, ctx);
        goto after_12;
    // 0x600043CC: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_12:
    // 0x600043D0: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x600043D4: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x600043D8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x600043DC: addiu       $s2, $zero, 0x32
    ctx->r18 = ADD32(0, 0X32);
    // 0x600043E0: addiu       $s1, $sp, 0x44
    ctx->r17 = ADD32(ctx->r29, 0X44);
L_600043E4:
    // 0x600043E4: jal         0x60000E74
    // 0x600043E8: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    ovl_stage_world6_E74(rdram, ctx);
        goto after_13;
    // 0x600043E8: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_13:
    // 0x600043EC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600043F0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x600043F4: jal         0x600006C4
    // 0x600043F8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world6_6C4(rdram, ctx);
        goto after_14;
    // 0x600043F8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_14:
    // 0x600043FC: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x60004400: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x60004404: add.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f20.fl;
    // 0x60004408: jal         0x60000E74
    // 0x6000440C: swc1        $f6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f6.u32l;
    ovl_stage_world6_E74(rdram, ctx);
        goto after_15;
    // 0x6000440C: swc1        $f6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f6.u32l;
    after_15:
    // 0x60004410: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60004414: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x60004418: jal         0x600006C4
    // 0x6000441C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world6_6C4(rdram, ctx);
        goto after_16;
    // 0x6000441C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_16:
    // 0x60004420: jal         0x600009D0
    // 0x60004424: nop

    ovl_stage_world6_9D0(rdram, ctx);
        goto after_17;
    // 0x60004424: nop

    after_17:
    // 0x60004428: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x6000442C: bne         $s0, $s2, L_600043E4
    if (ctx->r16 != ctx->r18) {
        // 0x60004430: nop
    
            goto L_600043E4;
    }
    // 0x60004430: nop

    // 0x60004434: jal         0x60000EEC
    // 0x60004438: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    ovl_stage_world6_EEC(rdram, ctx);
        goto after_18;
    // 0x60004438: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_18:
    // 0x6000443C: jal         0x60000E44
    // 0x60004440: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    ovl_stage_world6_E44(rdram, ctx);
        goto after_19;
    // 0x60004440: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    after_19:
L_60004444:
    // 0x60004444: jal         0x600009AC
    // 0x60004448: nop

    ovl_stage_world6_9AC(rdram, ctx);
        goto after_20;
    // 0x60004448: nop

    after_20:
    // 0x6000444C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x60004450: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x60004454: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x60004458: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x6000445C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x60004460: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x60004464: jr          $ra
    // 0x60004468: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x60004468: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void ovl_stage_world6_446C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000446C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60004470: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60004474: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x60004478: jal         0x60000BB0
    // 0x6000447C: addiu       $a0, $zero, 0x85
    ctx->r4 = ADD32(0, 0X85);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_0;
    // 0x6000447C: addiu       $a0, $zero, 0x85
    ctx->r4 = ADD32(0, 0X85);
    after_0:
    // 0x60004480: bne         $v0, $zero, L_600044AC
    if (ctx->r2 != 0) {
        // 0x60004484: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_600044AC;
    }
    // 0x60004484: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60004488: addiu       $a0, $a0, 0x430C
    ctx->r4 = ADD32(ctx->r4, 0X430C);
    // 0x6000448C: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60004490: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60004494: jal         0x60000994
    // 0x60004498: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world6_994(rdram, ctx);
        goto after_1;
    // 0x60004498: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x6000449C: lw          $v1, 0x1C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X1C);
    // 0x600044A0: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x600044A4: nop

    // 0x600044A8: sw          $t6, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r14;
L_600044AC:
    // 0x600044AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600044B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600044B4: jr          $ra
    // 0x600044B8: nop

    return;
    // 0x600044B8: nop

;}
RECOMP_FUNC void ovl_stage_world6_44BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600044BC: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x600044C0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x600044C4: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x600044C8: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x600044CC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x600044D0: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x600044D4: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x600044D8: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x600044DC: jal         0x60000E68
    // 0x600044E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world6_E68(rdram, ctx);
        goto after_0;
    // 0x600044E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x600044E4: jal         0x600009C4
    // 0x600044E8: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    ovl_stage_world6_9C4(rdram, ctx);
        goto after_1;
    // 0x600044E8: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_1:
    // 0x600044EC: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x600044F0: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x600044F4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x600044F8: addiu       $s2, $zero, 0x32
    ctx->r18 = ADD32(0, 0X32);
    // 0x600044FC: addiu       $s1, $sp, 0x34
    ctx->r17 = ADD32(ctx->r29, 0X34);
L_60004500:
    // 0x60004500: jal         0x60000E74
    // 0x60004504: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    ovl_stage_world6_E74(rdram, ctx);
        goto after_2;
    // 0x60004504: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_2:
    // 0x60004508: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x6000450C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x60004510: jal         0x600006C4
    // 0x60004514: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world6_6C4(rdram, ctx);
        goto after_3;
    // 0x60004514: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_3:
    // 0x60004518: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x6000451C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x60004520: add.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f20.fl;
    // 0x60004524: jal         0x60000E74
    // 0x60004528: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
    ovl_stage_world6_E74(rdram, ctx);
        goto after_4;
    // 0x60004528: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
    after_4:
    // 0x6000452C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60004530: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x60004534: jal         0x600006C4
    // 0x60004538: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world6_6C4(rdram, ctx);
        goto after_5;
    // 0x60004538: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_5:
    // 0x6000453C: jal         0x600009D0
    // 0x60004540: nop

    ovl_stage_world6_9D0(rdram, ctx);
        goto after_6;
    // 0x60004540: nop

    after_6:
    // 0x60004544: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60004548: bne         $s0, $s2, L_60004500
    if (ctx->r16 != ctx->r18) {
        // 0x6000454C: nop
    
            goto L_60004500;
    }
    // 0x6000454C: nop

    // 0x60004550: jal         0x60000EEC
    // 0x60004554: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    ovl_stage_world6_EEC(rdram, ctx);
        goto after_7;
    // 0x60004554: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_7:
    // 0x60004558: jal         0x60000E44
    // 0x6000455C: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    ovl_stage_world6_E44(rdram, ctx);
        goto after_8;
    // 0x6000455C: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    after_8:
    // 0x60004560: jal         0x600009AC
    // 0x60004564: nop

    ovl_stage_world6_9AC(rdram, ctx);
        goto after_9;
    // 0x60004564: nop

    after_9:
    // 0x60004568: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x6000456C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x60004570: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x60004574: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x60004578: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x6000457C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x60004580: jr          $ra
    // 0x60004584: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x60004584: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_stage_world6_4588(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004588: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x6000458C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60004590: jal         0x60000BB0
    // 0x60004594: addiu       $a0, $zero, 0x118
    ctx->r4 = ADD32(0, 0X118);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_0;
    // 0x60004594: addiu       $a0, $zero, 0x118
    ctx->r4 = ADD32(0, 0X118);
    after_0:
    // 0x60004598: bne         $v0, $zero, L_600045D4
    if (ctx->r2 != 0) {
        // 0x6000459C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600045D4;
    }
    // 0x6000459C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600045A0: jal         0x60000BB0
    // 0x600045A4: addiu       $a0, $zero, 0x85
    ctx->r4 = ADD32(0, 0X85);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_1;
    // 0x600045A4: addiu       $a0, $zero, 0x85
    ctx->r4 = ADD32(0, 0X85);
    after_1:
    // 0x600045A8: bne         $v0, $zero, L_600045D4
    if (ctx->r2 != 0) {
        // 0x600045AC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600045D4;
    }
    // 0x600045AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600045B0: jal         0x60000B98
    // 0x600045B4: addiu       $a0, $zero, 0x118
    ctx->r4 = ADD32(0, 0X118);
    ovl_stage_world6_B98(rdram, ctx);
        goto after_2;
    // 0x600045B4: addiu       $a0, $zero, 0x118
    ctx->r4 = ADD32(0, 0X118);
    after_2:
    // 0x600045B8: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600045BC: addiu       $a0, $a0, 0x44BC
    ctx->r4 = ADD32(ctx->r4, 0X44BC);
    // 0x600045C0: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x600045C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x600045C8: jal         0x60000994
    // 0x600045CC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world6_994(rdram, ctx);
        goto after_3;
    // 0x600045CC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x600045D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600045D4:
    // 0x600045D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600045D8: jr          $ra
    // 0x600045DC: nop

    return;
    // 0x600045DC: nop

;}
RECOMP_FUNC void ovl_stage_world6_45E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600045E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600045E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600045E8: jal         0x60000BB0
    // 0x600045EC: addiu       $a0, $zero, 0x119
    ctx->r4 = ADD32(0, 0X119);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_0;
    // 0x600045EC: addiu       $a0, $zero, 0x119
    ctx->r4 = ADD32(0, 0X119);
    after_0:
    // 0x600045F0: beq         $v0, $zero, L_6000463C
    if (ctx->r2 == 0) {
        // 0x600045F4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_6000463C;
    }
    // 0x600045F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600045F8: jal         0x60000BB0
    // 0x600045FC: addiu       $a0, $zero, 0x11A
    ctx->r4 = ADD32(0, 0X11A);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_1;
    // 0x600045FC: addiu       $a0, $zero, 0x11A
    ctx->r4 = ADD32(0, 0X11A);
    after_1:
    // 0x60004600: beq         $v0, $zero, L_6000463C
    if (ctx->r2 == 0) {
        // 0x60004604: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_6000463C;
    }
    // 0x60004604: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004608: jal         0x60000BB0
    // 0x6000460C: addiu       $a0, $zero, 0x11B
    ctx->r4 = ADD32(0, 0X11B);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_2;
    // 0x6000460C: addiu       $a0, $zero, 0x11B
    ctx->r4 = ADD32(0, 0X11B);
    after_2:
    // 0x60004610: beq         $v0, $zero, L_6000463C
    if (ctx->r2 == 0) {
        // 0x60004614: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_6000463C;
    }
    // 0x60004614: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004618: jal         0x60000BB0
    // 0x6000461C: addiu       $a0, $zero, 0x11C
    ctx->r4 = ADD32(0, 0X11C);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_3;
    // 0x6000461C: addiu       $a0, $zero, 0x11C
    ctx->r4 = ADD32(0, 0X11C);
    after_3:
    // 0x60004620: beq         $v0, $zero, L_6000463C
    if (ctx->r2 == 0) {
        // 0x60004624: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_6000463C;
    }
    // 0x60004624: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004628: jal         0x60000EEC
    // 0x6000462C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    ovl_stage_world6_EEC(rdram, ctx);
        goto after_4;
    // 0x6000462C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_4:
    // 0x60004630: jal         0x60000244
    // 0x60004634: addiu       $a0, $zero, 0x397
    ctx->r4 = ADD32(0, 0X397);
    ovl_stage_world6_244(rdram, ctx);
        goto after_5;
    // 0x60004634: addiu       $a0, $zero, 0x397
    ctx->r4 = ADD32(0, 0X397);
    after_5:
    // 0x60004638: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000463C:
    // 0x6000463C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60004640: jr          $ra
    // 0x60004644: nop

    return;
    // 0x60004644: nop

;}
RECOMP_FUNC void ovl_stage_world6_4648(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004648: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x6000464C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60004650: jal         0x600045E0
    // 0x60004654: nop

    ovl_stage_world6_45E0(rdram, ctx);
        goto after_0;
    // 0x60004654: nop

    after_0:
    // 0x60004658: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000465C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60004660: jr          $ra
    // 0x60004664: nop

    return;
    // 0x60004664: nop

;}
RECOMP_FUNC void ovl_stage_world6_4668(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004668: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x6000466C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60004670: jal         0x60000BB0
    // 0x60004674: addiu       $a0, $zero, 0x117
    ctx->r4 = ADD32(0, 0X117);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_0;
    // 0x60004674: addiu       $a0, $zero, 0x117
    ctx->r4 = ADD32(0, 0X117);
    after_0:
    // 0x60004678: beq         $v0, $zero, L_6000469C
    if (ctx->r2 == 0) {
        // 0x6000467C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_6000469C;
    }
    // 0x6000467C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004680: jal         0x600010E0
    // 0x60004684: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    ovl_stage_world6_10E0(rdram, ctx);
        goto after_1;
    // 0x60004684: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    after_1:
    // 0x60004688: jal         0x60000B98
    // 0x6000468C: addiu       $a0, $zero, 0x11B
    ctx->r4 = ADD32(0, 0X11B);
    ovl_stage_world6_B98(rdram, ctx);
        goto after_2;
    // 0x6000468C: addiu       $a0, $zero, 0x11B
    ctx->r4 = ADD32(0, 0X11B);
    after_2:
    // 0x60004690: jal         0x600045E0
    // 0x60004694: nop

    ovl_stage_world6_45E0(rdram, ctx);
        goto after_3;
    // 0x60004694: nop

    after_3:
    // 0x60004698: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000469C:
    // 0x6000469C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600046A0: jr          $ra
    // 0x600046A4: nop

    return;
    // 0x600046A4: nop

;}
RECOMP_FUNC void ovl_stage_world6_46A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600046A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600046AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600046B0: jal         0x60000BB0
    // 0x600046B4: addiu       $a0, $zero, 0x118
    ctx->r4 = ADD32(0, 0X118);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_0;
    // 0x600046B4: addiu       $a0, $zero, 0x118
    ctx->r4 = ADD32(0, 0X118);
    after_0:
    // 0x600046B8: beq         $v0, $zero, L_600046DC
    if (ctx->r2 == 0) {
        // 0x600046BC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600046DC;
    }
    // 0x600046BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600046C0: jal         0x600010E0
    // 0x600046C4: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    ovl_stage_world6_10E0(rdram, ctx);
        goto after_1;
    // 0x600046C4: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    after_1:
    // 0x600046C8: jal         0x60000B98
    // 0x600046CC: addiu       $a0, $zero, 0x11C
    ctx->r4 = ADD32(0, 0X11C);
    ovl_stage_world6_B98(rdram, ctx);
        goto after_2;
    // 0x600046CC: addiu       $a0, $zero, 0x11C
    ctx->r4 = ADD32(0, 0X11C);
    after_2:
    // 0x600046D0: jal         0x600045E0
    // 0x600046D4: nop

    ovl_stage_world6_45E0(rdram, ctx);
        goto after_3;
    // 0x600046D4: nop

    after_3:
    // 0x600046D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600046DC:
    // 0x600046DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600046E0: jr          $ra
    // 0x600046E4: nop

    return;
    // 0x600046E4: nop

;}
RECOMP_FUNC void ovl_stage_world6_46E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600046E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600046EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600046F0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x600046F4: jal         0x600006D0
    // 0x600046F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world6_6D0(rdram, ctx);
        goto after_0;
    // 0x600046F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x600046FC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60004700: jal         0x60000E38
    // 0x60004704: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world6_E38(rdram, ctx);
        goto after_1;
    // 0x60004704: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x60004708: jal         0x600009C4
    // 0x6000470C: addiu       $a0, $zero, 0xF0
    ctx->r4 = ADD32(0, 0XF0);
    ovl_stage_world6_9C4(rdram, ctx);
        goto after_2;
    // 0x6000470C: addiu       $a0, $zero, 0xF0
    ctx->r4 = ADD32(0, 0XF0);
    after_2:
    // 0x60004710: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x60004714: jal         0x600006D0
    // 0x60004718: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    ovl_stage_world6_6D0(rdram, ctx);
        goto after_3;
    // 0x60004718: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_3:
    // 0x6000471C: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x60004720: jal         0x60000E38
    // 0x60004724: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world6_E38(rdram, ctx);
        goto after_4;
    // 0x60004724: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x60004728: jal         0x60000BA4
    // 0x6000472C: addiu       $a0, $zero, 0x11D
    ctx->r4 = ADD32(0, 0X11D);
    ovl_stage_world6_BA4(rdram, ctx);
        goto after_5;
    // 0x6000472C: addiu       $a0, $zero, 0x11D
    ctx->r4 = ADD32(0, 0X11D);
    after_5:
    // 0x60004730: jal         0x600009AC
    // 0x60004734: nop

    ovl_stage_world6_9AC(rdram, ctx);
        goto after_6;
    // 0x60004734: nop

    after_6:
    // 0x60004738: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000473C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60004740: jr          $ra
    // 0x60004744: nop

    return;
    // 0x60004744: nop

;}
RECOMP_FUNC void ovl_stage_world6_4748(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004748: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x6000474C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60004750: jal         0x60000BB0
    // 0x60004754: addiu       $a0, $zero, 0x11D
    ctx->r4 = ADD32(0, 0X11D);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_0;
    // 0x60004754: addiu       $a0, $zero, 0x11D
    ctx->r4 = ADD32(0, 0X11D);
    after_0:
    // 0x60004758: bne         $v0, $zero, L_60004784
    if (ctx->r2 != 0) {
        // 0x6000475C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60004784;
    }
    // 0x6000475C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004760: jal         0x60000B98
    // 0x60004764: addiu       $a0, $zero, 0x11D
    ctx->r4 = ADD32(0, 0X11D);
    ovl_stage_world6_B98(rdram, ctx);
        goto after_1;
    // 0x60004764: addiu       $a0, $zero, 0x11D
    ctx->r4 = ADD32(0, 0X11D);
    after_1:
    // 0x60004768: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x6000476C: addiu       $a0, $a0, 0x46E8
    ctx->r4 = ADD32(ctx->r4, 0X46E8);
    // 0x60004770: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60004774: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60004778: jal         0x60000994
    // 0x6000477C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world6_994(rdram, ctx);
        goto after_2;
    // 0x6000477C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x60004780: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60004784:
    // 0x60004784: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60004788: jr          $ra
    // 0x6000478C: nop

    return;
    // 0x6000478C: nop

;}
RECOMP_FUNC void ovl_stage_world6_4790(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004790: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60004794: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60004798: jal         0x600009C4
    // 0x6000479C: addiu       $a0, $zero, 0x1E0
    ctx->r4 = ADD32(0, 0X1E0);
    ovl_stage_world6_9C4(rdram, ctx);
        goto after_0;
    // 0x6000479C: addiu       $a0, $zero, 0x1E0
    ctx->r4 = ADD32(0, 0X1E0);
    after_0:
    // 0x600047A0: jal         0x60000BA4
    // 0x600047A4: addiu       $a0, $zero, 0x11E
    ctx->r4 = ADD32(0, 0X11E);
    ovl_stage_world6_BA4(rdram, ctx);
        goto after_1;
    // 0x600047A4: addiu       $a0, $zero, 0x11E
    ctx->r4 = ADD32(0, 0X11E);
    after_1:
    // 0x600047A8: jal         0x600009AC
    // 0x600047AC: nop

    ovl_stage_world6_9AC(rdram, ctx);
        goto after_2;
    // 0x600047AC: nop

    after_2:
    // 0x600047B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600047B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600047B8: jr          $ra
    // 0x600047BC: nop

    return;
    // 0x600047BC: nop

;}
RECOMP_FUNC void ovl_stage_world6_47C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600047C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600047C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600047C8: jal         0x60000BB0
    // 0x600047CC: addiu       $a0, $zero, 0x11E
    ctx->r4 = ADD32(0, 0X11E);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_0;
    // 0x600047CC: addiu       $a0, $zero, 0x11E
    ctx->r4 = ADD32(0, 0X11E);
    after_0:
    // 0x600047D0: bne         $v0, $zero, L_600047FC
    if (ctx->r2 != 0) {
        // 0x600047D4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600047FC;
    }
    // 0x600047D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600047D8: jal         0x60000B98
    // 0x600047DC: addiu       $a0, $zero, 0x11E
    ctx->r4 = ADD32(0, 0X11E);
    ovl_stage_world6_B98(rdram, ctx);
        goto after_1;
    // 0x600047DC: addiu       $a0, $zero, 0x11E
    ctx->r4 = ADD32(0, 0X11E);
    after_1:
    // 0x600047E0: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600047E4: addiu       $a0, $a0, 0x4790
    ctx->r4 = ADD32(ctx->r4, 0X4790);
    // 0x600047E8: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x600047EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x600047F0: jal         0x60000994
    // 0x600047F4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world6_994(rdram, ctx);
        goto after_2;
    // 0x600047F4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x600047F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600047FC:
    // 0x600047FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60004800: jr          $ra
    // 0x60004804: nop

    return;
    // 0x60004804: nop

;}
RECOMP_FUNC void ovl_stage_world6_4808(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004808: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x6000480C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x60004810: jal         0x60000C1C
    // 0x60004814: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    ovl_stage_world6_C1C(rdram, ctx);
        goto after_0;
    // 0x60004814: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x60004818: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x6000481C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x60004820: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x60004824: beq         $t7, $zero, L_60004834
    if (ctx->r15 == 0) {
        // 0x60004828: nop
    
            goto L_60004834;
    }
    // 0x60004828: nop

    // 0x6000482C: jal         0x600009AC
    // 0x60004830: nop

    ovl_stage_world6_9AC(rdram, ctx);
        goto after_1;
    // 0x60004830: nop

    after_1:
L_60004834:
    // 0x60004834: jal         0x60000FA8
    // 0x60004838: nop

    ovl_stage_world6_FA8(rdram, ctx);
        goto after_2;
    // 0x60004838: nop

    after_2:
    // 0x6000483C: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x60004840: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x60004844: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x60004848: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x6000484C: jal         0x60000A60
    // 0x60004850: addiu       $a0, $zero, 0xAD6
    ctx->r4 = ADD32(0, 0XAD6);
    ovl_stage_world6_A60(rdram, ctx);
        goto after_3;
    // 0x60004850: addiu       $a0, $zero, 0xAD6
    ctx->r4 = ADD32(0, 0XAD6);
    after_3:
    // 0x60004854: jal         0x6000117C
    // 0x60004858: nop

    ovl_stage_world6_117C(rdram, ctx);
        goto after_4;
    // 0x60004858: nop

    after_4:
    // 0x6000485C: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x60004860: lui         $at, 0xFFFE
    ctx->r1 = S32(0XFFFE << 16);
    // 0x60004864: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x60004868: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x6000486C: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
    // 0x60004870: jal         0x60002484
    // 0x60004874: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world6_2484(rdram, ctx);
        goto after_5;
    // 0x60004874: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_5:
    // 0x60004878: jal         0x60001028
    // 0x6000487C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world6_1028(rdram, ctx);
        goto after_6;
    // 0x6000487C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_6:
    // 0x60004880: jal         0x60000BB0
    // 0x60004884: addiu       $a0, $zero, 0x85
    ctx->r4 = ADD32(0, 0X85);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_7;
    // 0x60004884: addiu       $a0, $zero, 0x85
    ctx->r4 = ADD32(0, 0X85);
    after_7:
    // 0x60004888: beq         $v0, $zero, L_600048A0
    if (ctx->r2 == 0) {
        // 0x6000488C: nop
    
            goto L_600048A0;
    }
    // 0x6000488C: nop

    // 0x60004890: jal         0x60000C7C
    // 0x60004894: nop

    ovl_stage_world6_C7C(rdram, ctx);
        goto after_8;
    // 0x60004894: nop

    after_8:
    // 0x60004898: b           L_600048B8
    // 0x6000489C: nop

        goto L_600048B8;
    // 0x6000489C: nop

L_600048A0:
    // 0x600048A0: jal         0x60000B98
    // 0x600048A4: addiu       $a0, $zero, 0x85
    ctx->r4 = ADD32(0, 0X85);
    ovl_stage_world6_B98(rdram, ctx);
        goto after_9;
    // 0x600048A4: addiu       $a0, $zero, 0x85
    ctx->r4 = ADD32(0, 0X85);
    after_9:
    // 0x600048A8: addiu       $a0, $zero, 0x8B9
    ctx->r4 = ADD32(0, 0X8B9);
    // 0x600048AC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x600048B0: jal         0x60000C10
    // 0x600048B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_stage_world6_C10(rdram, ctx);
        goto after_10;
    // 0x600048B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_10:
L_600048B8:
    // 0x600048B8: jal         0x600009AC
    // 0x600048BC: nop

    ovl_stage_world6_9AC(rdram, ctx);
        goto after_11;
    // 0x600048BC: nop

    after_11:
    // 0x600048C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x600048C4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x600048C8: jr          $ra
    // 0x600048CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x600048CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_stage_world6_48D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600048D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600048D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600048D8: jal         0x600009C4
    // 0x600048DC: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_stage_world6_9C4(rdram, ctx);
        goto after_0;
    // 0x600048DC: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_0:
    // 0x600048E0: jal         0x60000BA4
    // 0x600048E4: addiu       $a0, $zero, 0x120
    ctx->r4 = ADD32(0, 0X120);
    ovl_stage_world6_BA4(rdram, ctx);
        goto after_1;
    // 0x600048E4: addiu       $a0, $zero, 0x120
    ctx->r4 = ADD32(0, 0X120);
    after_1:
    // 0x600048E8: jal         0x600009AC
    // 0x600048EC: nop

    ovl_stage_world6_9AC(rdram, ctx);
        goto after_2;
    // 0x600048EC: nop

    after_2:
    // 0x600048F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600048F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600048F8: jr          $ra
    // 0x600048FC: nop

    return;
    // 0x600048FC: nop

;}
RECOMP_FUNC void ovl_stage_world6_4900(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004900: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60004904: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60004908: jal         0x60000BB0
    // 0x6000490C: addiu       $a0, $zero, 0x120
    ctx->r4 = ADD32(0, 0X120);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_0;
    // 0x6000490C: addiu       $a0, $zero, 0x120
    ctx->r4 = ADD32(0, 0X120);
    after_0:
    // 0x60004910: bne         $v0, $zero, L_600049F8
    if (ctx->r2 != 0) {
        // 0x60004914: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600049F8;
    }
    // 0x60004914: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004918: jal         0x60000BB0
    // 0x6000491C: addiu       $a0, $zero, 0x119
    ctx->r4 = ADD32(0, 0X119);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_1;
    // 0x6000491C: addiu       $a0, $zero, 0x119
    ctx->r4 = ADD32(0, 0X119);
    after_1:
    // 0x60004920: beq         $v0, $zero, L_600049F8
    if (ctx->r2 == 0) {
        // 0x60004924: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600049F8;
    }
    // 0x60004924: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004928: jal         0x60000BB0
    // 0x6000492C: addiu       $a0, $zero, 0x11A
    ctx->r4 = ADD32(0, 0X11A);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_2;
    // 0x6000492C: addiu       $a0, $zero, 0x11A
    ctx->r4 = ADD32(0, 0X11A);
    after_2:
    // 0x60004930: beq         $v0, $zero, L_600049F8
    if (ctx->r2 == 0) {
        // 0x60004934: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600049F8;
    }
    // 0x60004934: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004938: jal         0x60000BB0
    // 0x6000493C: addiu       $a0, $zero, 0x11B
    ctx->r4 = ADD32(0, 0X11B);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_3;
    // 0x6000493C: addiu       $a0, $zero, 0x11B
    ctx->r4 = ADD32(0, 0X11B);
    after_3:
    // 0x60004940: beq         $v0, $zero, L_600049F8
    if (ctx->r2 == 0) {
        // 0x60004944: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600049F8;
    }
    // 0x60004944: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004948: jal         0x60000BB0
    // 0x6000494C: addiu       $a0, $zero, 0x11C
    ctx->r4 = ADD32(0, 0X11C);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_4;
    // 0x6000494C: addiu       $a0, $zero, 0x11C
    ctx->r4 = ADD32(0, 0X11C);
    after_4:
    // 0x60004950: beq         $v0, $zero, L_600049F8
    if (ctx->r2 == 0) {
        // 0x60004954: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600049F8;
    }
    // 0x60004954: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004958: jal         0x60000BB0
    // 0x6000495C: addiu       $a0, $zero, 0x11F
    ctx->r4 = ADD32(0, 0X11F);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_5;
    // 0x6000495C: addiu       $a0, $zero, 0x11F
    ctx->r4 = ADD32(0, 0X11F);
    after_5:
    // 0x60004960: bne         $v0, $zero, L_600049F8
    if (ctx->r2 != 0) {
        // 0x60004964: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600049F8;
    }
    // 0x60004964: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004968: jal         0x60000BB0
    // 0x6000496C: addiu       $a0, $zero, 0x121
    ctx->r4 = ADD32(0, 0X121);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_6;
    // 0x6000496C: addiu       $a0, $zero, 0x121
    ctx->r4 = ADD32(0, 0X121);
    after_6:
    // 0x60004970: bne         $v0, $zero, L_600049B4
    if (ctx->r2 != 0) {
        // 0x60004974: nop
    
            goto L_600049B4;
    }
    // 0x60004974: nop

    // 0x60004978: jal         0x60000B98
    // 0x6000497C: addiu       $a0, $zero, 0x120
    ctx->r4 = ADD32(0, 0X120);
    ovl_stage_world6_B98(rdram, ctx);
        goto after_7;
    // 0x6000497C: addiu       $a0, $zero, 0x120
    ctx->r4 = ADD32(0, 0X120);
    after_7:
    // 0x60004980: jal         0x60000B98
    // 0x60004984: addiu       $a0, $zero, 0x121
    ctx->r4 = ADD32(0, 0X121);
    ovl_stage_world6_B98(rdram, ctx);
        goto after_8;
    // 0x60004984: addiu       $a0, $zero, 0x121
    ctx->r4 = ADD32(0, 0X121);
    after_8:
    // 0x60004988: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x6000498C: jal         0x60000E68
    // 0x60004990: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world6_E68(rdram, ctx);
        goto after_9;
    // 0x60004990: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x60004994: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60004998: addiu       $a0, $a0, 0x48D0
    ctx->r4 = ADD32(ctx->r4, 0X48D0);
    // 0x6000499C: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x600049A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x600049A4: jal         0x60000994
    // 0x600049A8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world6_994(rdram, ctx);
        goto after_10;
    // 0x600049A8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_10:
    // 0x600049AC: b           L_600049F8
    // 0x600049B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600049F8;
    // 0x600049B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600049B4:
    // 0x600049B4: jal         0x60000DE4
    // 0x600049B8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world6_DE4(rdram, ctx);
        goto after_11;
    // 0x600049B8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_11:
    // 0x600049BC: jal         0x60000CC4
    // 0x600049C0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_stage_world6_CC4(rdram, ctx);
        goto after_12;
    // 0x600049C0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_12:
    // 0x600049C4: jal         0x60000A6C
    // 0x600049C8: nop

    ovl_stage_world6_A6C(rdram, ctx);
        goto after_13;
    // 0x600049C8: nop

    after_13:
    // 0x600049CC: jal         0x60000B98
    // 0x600049D0: addiu       $a0, $zero, 0x11F
    ctx->r4 = ADD32(0, 0X11F);
    ovl_stage_world6_B98(rdram, ctx);
        goto after_14;
    // 0x600049D0: addiu       $a0, $zero, 0x11F
    ctx->r4 = ADD32(0, 0X11F);
    after_14:
    // 0x600049D4: jal         0x600010E0
    // 0x600049D8: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    ovl_stage_world6_10E0(rdram, ctx);
        goto after_15;
    // 0x600049D8: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_15:
    // 0x600049DC: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600049E0: addiu       $a0, $a0, 0x4808
    ctx->r4 = ADD32(ctx->r4, 0X4808);
    // 0x600049E4: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x600049E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x600049EC: jal         0x60000994
    // 0x600049F0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world6_994(rdram, ctx);
        goto after_16;
    // 0x600049F0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_16:
    // 0x600049F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600049F8:
    // 0x600049F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600049FC: jr          $ra
    // 0x60004A00: nop

    return;
    // 0x60004A00: nop

;}
RECOMP_FUNC void ovl_stage_world6_4A04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004A04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60004A08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60004A0C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x60004A10: jal         0x60000E80
    // 0x60004A14: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world6_E80(rdram, ctx);
        goto after_0;
    // 0x60004A14: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x60004A18: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x60004A1C: jal         0x60000E80
    // 0x60004A20: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_stage_world6_E80(rdram, ctx);
        goto after_1;
    // 0x60004A20: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x60004A24: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x60004A28: jal         0x60000E80
    // 0x60004A2C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    ovl_stage_world6_E80(rdram, ctx);
        goto after_2;
    // 0x60004A2C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_2:
    // 0x60004A30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004A34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60004A38: jr          $ra
    // 0x60004A3C: nop

    return;
    // 0x60004A3C: nop

;}
RECOMP_FUNC void ovl_stage_world6_4A40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004A40: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x60004A44: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x60004A48: jal         0x60000C1C
    // 0x60004A4C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    ovl_stage_world6_C1C(rdram, ctx);
        goto after_0;
    // 0x60004A4C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x60004A50: lbu         $t6, 0x20($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X20);
    // 0x60004A54: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x60004A58: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x60004A5C: lw          $t7, 0xC($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XC);
    // 0x60004A60: nop

    // 0x60004A64: bne         $t7, $zero, L_60004B80
    if (ctx->r15 != 0) {
        // 0x60004A68: nop
    
            goto L_60004B80;
    }
    // 0x60004A68: nop

    // 0x60004A6C: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x60004A70: nop

    // 0x60004A74: andi        $t9, $t8, 0x800
    ctx->r25 = ctx->r24 & 0X800;
    // 0x60004A78: bne         $t9, $zero, L_60004B80
    if (ctx->r25 != 0) {
        // 0x60004A7C: nop
    
            goto L_60004B80;
    }
    // 0x60004A7C: nop

    // 0x60004A80: jal         0x60000BB0
    // 0x60004A84: addiu       $a0, $zero, 0x99
    ctx->r4 = ADD32(0, 0X99);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_1;
    // 0x60004A84: addiu       $a0, $zero, 0x99
    ctx->r4 = ADD32(0, 0X99);
    after_1:
    // 0x60004A88: bne         $v0, $zero, L_60004B18
    if (ctx->r2 != 0) {
        // 0x60004A8C: nop
    
            goto L_60004B18;
    }
    // 0x60004A8C: nop

    // 0x60004A90: jal         0x60000BB0
    // 0x60004A94: addiu       $a0, $zero, 0xFB
    ctx->r4 = ADD32(0, 0XFB);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_2;
    // 0x60004A94: addiu       $a0, $zero, 0xFB
    ctx->r4 = ADD32(0, 0XFB);
    after_2:
    // 0x60004A98: bne         $v0, $zero, L_60004AB8
    if (ctx->r2 != 0) {
        // 0x60004A9C: nop
    
            goto L_60004AB8;
    }
    // 0x60004A9C: nop

    // 0x60004AA0: jal         0x60000B98
    // 0x60004AA4: addiu       $a0, $zero, 0xFB
    ctx->r4 = ADD32(0, 0XFB);
    ovl_stage_world6_B98(rdram, ctx);
        goto after_3;
    // 0x60004AA4: addiu       $a0, $zero, 0xFB
    ctx->r4 = ADD32(0, 0XFB);
    after_3:
    // 0x60004AA8: jal         0x60000B38
    // 0x60004AAC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_stage_world6_B38(rdram, ctx);
        goto after_4;
    // 0x60004AAC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_4:
    // 0x60004AB0: jal         0x60000B5C
    // 0x60004AB4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_stage_world6_B5C(rdram, ctx);
        goto after_5;
    // 0x60004AB4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_5:
L_60004AB8:
    // 0x60004AB8: jal         0x60000B98
    // 0x60004ABC: addiu       $a0, $zero, 0x99
    ctx->r4 = ADD32(0, 0X99);
    ovl_stage_world6_B98(rdram, ctx);
        goto after_6;
    // 0x60004ABC: addiu       $a0, $zero, 0x99
    ctx->r4 = ADD32(0, 0X99);
    after_6:
    // 0x60004AC0: jal         0x60000EEC
    // 0x60004AC4: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    ovl_stage_world6_EEC(rdram, ctx);
        goto after_7;
    // 0x60004AC4: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_7:
    // 0x60004AC8: jal         0x60000A60
    // 0x60004ACC: addiu       $a0, $zero, 0xAEE
    ctx->r4 = ADD32(0, 0XAEE);
    ovl_stage_world6_A60(rdram, ctx);
        goto after_8;
    // 0x60004ACC: addiu       $a0, $zero, 0xAEE
    ctx->r4 = ADD32(0, 0XAEE);
    after_8:
    // 0x60004AD0: jal         0x600009D0
    // 0x60004AD4: nop

    ovl_stage_world6_9D0(rdram, ctx);
        goto after_9;
    // 0x60004AD4: nop

    after_9:
    // 0x60004AD8: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x60004ADC: nop

    // 0x60004AE0: andi        $t1, $t0, 0x800
    ctx->r9 = ctx->r8 & 0X800;
    // 0x60004AE4: beq         $t1, $zero, L_60004B08
    if (ctx->r9 == 0) {
        // 0x60004AE8: nop
    
            goto L_60004B08;
    }
    // 0x60004AE8: nop

L_60004AEC:
    // 0x60004AEC: jal         0x600009D0
    // 0x60004AF0: nop

    ovl_stage_world6_9D0(rdram, ctx);
        goto after_10;
    // 0x60004AF0: nop

    after_10:
    // 0x60004AF4: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x60004AF8: nop

    // 0x60004AFC: andi        $t3, $t2, 0x800
    ctx->r11 = ctx->r10 & 0X800;
    // 0x60004B00: bne         $t3, $zero, L_60004AEC
    if (ctx->r11 != 0) {
        // 0x60004B04: nop
    
            goto L_60004AEC;
    }
    // 0x60004B04: nop

L_60004B08:
    // 0x60004B08: jal         0x600009C4
    // 0x60004B0C: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    ovl_stage_world6_9C4(rdram, ctx);
        goto after_11;
    // 0x60004B0C: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_11:
    // 0x60004B10: b           L_60004B20
    // 0x60004B14: nop

        goto L_60004B20;
    // 0x60004B14: nop

L_60004B18:
    // 0x60004B18: jal         0x60004A04
    // 0x60004B1C: nop

    ovl_stage_world6_4A04(rdram, ctx);
        goto after_12;
    // 0x60004B1C: nop

    after_12:
L_60004B20:
    // 0x60004B20: jal         0x60000EE0
    // 0x60004B24: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world6_EE0(rdram, ctx);
        goto after_13;
    // 0x60004B24: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_13:
    // 0x60004B28: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x60004B2C: nop

    // 0x60004B30: beq         $v0, $t4, L_60004B88
    if (ctx->r2 == ctx->r12) {
        // 0x60004B34: nop
    
            goto L_60004B88;
    }
    // 0x60004B34: nop

    // 0x60004B38: jal         0x60000A60
    // 0x60004B3C: addiu       $a0, $zero, 0xAF6
    ctx->r4 = ADD32(0, 0XAF6);
    ovl_stage_world6_A60(rdram, ctx);
        goto after_14;
    // 0x60004B3C: addiu       $a0, $zero, 0xAF6
    ctx->r4 = ADD32(0, 0XAF6);
    after_14:
    // 0x60004B40: jal         0x600009D0
    // 0x60004B44: nop

    ovl_stage_world6_9D0(rdram, ctx);
        goto after_15;
    // 0x60004B44: nop

    after_15:
    // 0x60004B48: lw          $t5, 0x0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X0);
    // 0x60004B4C: nop

    // 0x60004B50: andi        $t6, $t5, 0x800
    ctx->r14 = ctx->r13 & 0X800;
    // 0x60004B54: beq         $t6, $zero, L_60004B88
    if (ctx->r14 == 0) {
        // 0x60004B58: nop
    
            goto L_60004B88;
    }
    // 0x60004B58: nop

L_60004B5C:
    // 0x60004B5C: jal         0x600009D0
    // 0x60004B60: nop

    ovl_stage_world6_9D0(rdram, ctx);
        goto after_16;
    // 0x60004B60: nop

    after_16:
    // 0x60004B64: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x60004B68: nop

    // 0x60004B6C: andi        $t8, $t7, 0x800
    ctx->r24 = ctx->r15 & 0X800;
    // 0x60004B70: bne         $t8, $zero, L_60004B5C
    if (ctx->r24 != 0) {
        // 0x60004B74: nop
    
            goto L_60004B5C;
    }
    // 0x60004B74: nop

    // 0x60004B78: b           L_60004B88
    // 0x60004B7C: nop

        goto L_60004B88;
    // 0x60004B7C: nop

L_60004B80:
    // 0x60004B80: jal         0x60004A04
    // 0x60004B84: nop

    ovl_stage_world6_4A04(rdram, ctx);
        goto after_17;
    // 0x60004B84: nop

    after_17:
L_60004B88:
    // 0x60004B88: jal         0x600009AC
    // 0x60004B8C: nop

    ovl_stage_world6_9AC(rdram, ctx);
        goto after_18;
    // 0x60004B8C: nop

    after_18:
    // 0x60004B90: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x60004B94: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x60004B98: jr          $ra
    // 0x60004B9C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x60004B9C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_stage_world6_4BA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004BA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60004BA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60004BA8: jal         0x60000C1C
    // 0x60004BAC: nop

    ovl_stage_world6_C1C(rdram, ctx);
        goto after_0;
    // 0x60004BAC: nop

    after_0:
    // 0x60004BB0: lw          $t6, 0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC);
    // 0x60004BB4: nop

    // 0x60004BB8: bne         $t6, $zero, L_60004BD8
    if (ctx->r14 != 0) {
        // 0x60004BBC: nop
    
            goto L_60004BD8;
    }
    // 0x60004BBC: nop

    // 0x60004BC0: jal         0x60000BB0
    // 0x60004BC4: addiu       $a0, $zero, 0x85
    ctx->r4 = ADD32(0, 0X85);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_1;
    // 0x60004BC4: addiu       $a0, $zero, 0x85
    ctx->r4 = ADD32(0, 0X85);
    after_1:
    // 0x60004BC8: beq         $v0, $zero, L_60004BD8
    if (ctx->r2 == 0) {
        // 0x60004BCC: nop
    
            goto L_60004BD8;
    }
    // 0x60004BCC: nop

    // 0x60004BD0: jal         0x60000F50
    // 0x60004BD4: nop

    ovl_stage_world6_F50(rdram, ctx);
        goto after_2;
    // 0x60004BD4: nop

    after_2:
L_60004BD8:
    // 0x60004BD8: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60004BDC: addiu       $a0, $a0, 0x4A40
    ctx->r4 = ADD32(ctx->r4, 0X4A40);
    // 0x60004BE0: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60004BE4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60004BE8: jal         0x60000994
    // 0x60004BEC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world6_994(rdram, ctx);
        goto after_3;
    // 0x60004BEC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x60004BF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004BF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60004BF8: jr          $ra
    // 0x60004BFC: nop

    return;
    // 0x60004BFC: nop

;}
RECOMP_FUNC void ovl_stage_world6_4C00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004C00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60004C04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60004C08: jal         0x60000C1C
    // 0x60004C0C: nop

    ovl_stage_world6_C1C(rdram, ctx);
        goto after_0;
    // 0x60004C0C: nop

    after_0:
    // 0x60004C10: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x60004C14: jal         0x60000F04
    // 0x60004C18: addiu       $a1, $zero, -0x11
    ctx->r5 = ADD32(0, -0X11);
    ovl_stage_world6_F04(rdram, ctx);
        goto after_1;
    // 0x60004C18: addiu       $a1, $zero, -0x11
    ctx->r5 = ADD32(0, -0X11);
    after_1:
    // 0x60004C1C: jal         0x60000B98
    // 0x60004C20: addiu       $a0, $zero, 0xB1
    ctx->r4 = ADD32(0, 0XB1);
    ovl_stage_world6_B98(rdram, ctx);
        goto after_2;
    // 0x60004C20: addiu       $a0, $zero, 0xB1
    ctx->r4 = ADD32(0, 0XB1);
    after_2:
    // 0x60004C24: jal         0x60000A60
    // 0x60004C28: addiu       $a0, $zero, 0xAD5
    ctx->r4 = ADD32(0, 0XAD5);
    ovl_stage_world6_A60(rdram, ctx);
        goto after_3;
    // 0x60004C28: addiu       $a0, $zero, 0xAD5
    ctx->r4 = ADD32(0, 0XAD5);
    after_3:
    // 0x60004C2C: jal         0x6000117C
    // 0x60004C30: nop

    ovl_stage_world6_117C(rdram, ctx);
        goto after_4;
    // 0x60004C30: nop

    after_4:
    // 0x60004C34: jal         0x60002484
    // 0x60004C38: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world6_2484(rdram, ctx);
        goto after_5;
    // 0x60004C38: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_5:
    // 0x60004C3C: jal         0x600009AC
    // 0x60004C40: nop

    ovl_stage_world6_9AC(rdram, ctx);
        goto after_6;
    // 0x60004C40: nop

    after_6:
    // 0x60004C44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004C48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60004C4C: jr          $ra
    // 0x60004C50: nop

    return;
    // 0x60004C50: nop

;}
RECOMP_FUNC void ovl_stage_world6_4C54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004C54: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x60004C58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60004C5C: jal         0x6000025C
    // 0x60004C60: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    ovl_stage_world6_25C(rdram, ctx);
        goto after_0;
    // 0x60004C60: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    after_0:
    // 0x60004C64: jal         0x60000244
    // 0x60004C68: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    ovl_stage_world6_244(rdram, ctx);
        goto after_1;
    // 0x60004C68: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    after_1:
    // 0x60004C6C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x60004C70: addiu       $t6, $zero, 0x8E
    ctx->r14 = ADD32(0, 0X8E);
    // 0x60004C74: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x60004C78: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    // 0x60004C7C: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x60004C80: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x60004C84: jal         0x60000E74
    // 0x60004C88: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    ovl_stage_world6_E74(rdram, ctx);
        goto after_2;
    // 0x60004C88: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x60004C8C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60004C90: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    // 0x60004C94: jal         0x600006C4
    // 0x60004C98: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world6_6C4(rdram, ctx);
        goto after_3;
    // 0x60004C98: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_3:
    // 0x60004C9C: jal         0x60000EEC
    // 0x60004CA0: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    ovl_stage_world6_EEC(rdram, ctx);
        goto after_4;
    // 0x60004CA0: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_4:
    // 0x60004CA4: jal         0x60000EEC
    // 0x60004CA8: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    ovl_stage_world6_EEC(rdram, ctx);
        goto after_5;
    // 0x60004CA8: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    after_5:
    // 0x60004CAC: jal         0x60000EEC
    // 0x60004CB0: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    ovl_stage_world6_EEC(rdram, ctx);
        goto after_6;
    // 0x60004CB0: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    after_6:
    // 0x60004CB4: jal         0x60000EEC
    // 0x60004CB8: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    ovl_stage_world6_EEC(rdram, ctx);
        goto after_7;
    // 0x60004CB8: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    after_7:
    // 0x60004CBC: jal         0x600009AC
    // 0x60004CC0: nop

    ovl_stage_world6_9AC(rdram, ctx);
        goto after_8;
    // 0x60004CC0: nop

    after_8:
    // 0x60004CC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004CC8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x60004CCC: jr          $ra
    // 0x60004CD0: nop

    return;
    // 0x60004CD0: nop

;}
RECOMP_FUNC void ovl_stage_world6_4CD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004CD4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x60004CD8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x60004CDC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x60004CE0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x60004CE4: jal         0x60001028
    // 0x60004CE8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world6_1028(rdram, ctx);
        goto after_0;
    // 0x60004CE8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x60004CEC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60004CF0: lwc1        $f4, 0x64C4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X64C4);
    // 0x60004CF4: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60004CF8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x60004CFC: lwc1        $f8, 0x64C8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X64C8);
    // 0x60004D00: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x60004D04: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x60004D08: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    // 0x60004D0C: jal         0x60000DE4
    // 0x60004D10: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    ovl_stage_world6_DE4(rdram, ctx);
        goto after_1;
    // 0x60004D10: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x60004D14: addiu       $s0, $sp, 0x24
    ctx->r16 = ADD32(ctx->r29, 0X24);
    // 0x60004D18: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x60004D1C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60004D20: jal         0x600006C4
    // 0x60004D24: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_stage_world6_6C4(rdram, ctx);
        goto after_2;
    // 0x60004D24: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x60004D28: addiu       $t6, $zero, 0x31
    ctx->r14 = ADD32(0, 0X31);
    // 0x60004D2C: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x60004D30: jal         0x60000DE4
    // 0x60004D34: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world6_DE4(rdram, ctx);
        goto after_3;
    // 0x60004D34: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
    // 0x60004D38: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60004D3C: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x60004D40: jal         0x600006C4
    // 0x60004D44: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_stage_world6_6C4(rdram, ctx);
        goto after_4;
    // 0x60004D44: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_4:
    // 0x60004D48: jal         0x60000DE4
    // 0x60004D4C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world6_DE4(rdram, ctx);
        goto after_5;
    // 0x60004D4C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_5:
    // 0x60004D50: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60004D54: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x60004D58: jal         0x600006C4
    // 0x60004D5C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_stage_world6_6C4(rdram, ctx);
        goto after_6;
    // 0x60004D5C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_6:
    // 0x60004D60: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x60004D64: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x60004D68: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x60004D6C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60004D70: addiu       $s1, $zero, 0x1E
    ctx->r17 = ADD32(0, 0X1E);
    // 0x60004D74: swc1        $f10, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->f10.u32l;
L_60004D78:
    // 0x60004D78: jal         0x60002484
    // 0x60004D7C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world6_2484(rdram, ctx);
        goto after_7;
    // 0x60004D7C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_7:
    // 0x60004D80: jal         0x600009D0
    // 0x60004D84: nop

    ovl_stage_world6_9D0(rdram, ctx);
        goto after_8;
    // 0x60004D84: nop

    after_8:
    // 0x60004D88: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60004D8C: bne         $s0, $s1, L_60004D78
    if (ctx->r16 != ctx->r17) {
        // 0x60004D90: nop
    
            goto L_60004D78;
    }
    // 0x60004D90: nop

    // 0x60004D94: jal         0x600009AC
    // 0x60004D98: nop

    ovl_stage_world6_9AC(rdram, ctx);
        goto after_9;
    // 0x60004D98: nop

    after_9:
    // 0x60004D9C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x60004DA0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x60004DA4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x60004DA8: jr          $ra
    // 0x60004DAC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x60004DAC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_stage_world6_4DB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004DB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60004DB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60004DB8: jal         0x60000BB0
    // 0x60004DBC: addiu       $a0, $zero, 0xB1
    ctx->r4 = ADD32(0, 0XB1);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_0;
    // 0x60004DBC: addiu       $a0, $zero, 0xB1
    ctx->r4 = ADD32(0, 0XB1);
    after_0:
    // 0x60004DC0: bne         $v0, $zero, L_60004DE4
    if (ctx->r2 != 0) {
        // 0x60004DC4: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_60004DE4;
    }
    // 0x60004DC4: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60004DC8: addiu       $a0, $a0, 0x4C00
    ctx->r4 = ADD32(ctx->r4, 0X4C00);
    // 0x60004DCC: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60004DD0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60004DD4: jal         0x60000994
    // 0x60004DD8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world6_994(rdram, ctx);
        goto after_1;
    // 0x60004DD8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x60004DDC: b           L_60004E0C
    // 0x60004DE0: nop

        goto L_60004E0C;
    // 0x60004DE0: nop

L_60004DE4:
    // 0x60004DE4: jal         0x60000BB0
    // 0x60004DE8: addiu       $a0, $zero, 0xB1
    ctx->r4 = ADD32(0, 0XB1);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_2;
    // 0x60004DE8: addiu       $a0, $zero, 0xB1
    ctx->r4 = ADD32(0, 0XB1);
    after_2:
    // 0x60004DEC: beq         $v0, $zero, L_60004E0C
    if (ctx->r2 == 0) {
        // 0x60004DF0: nop
    
            goto L_60004E0C;
    }
    // 0x60004DF0: nop

    // 0x60004DF4: jal         0x60000BB0
    // 0x60004DF8: addiu       $a0, $zero, 0x85
    ctx->r4 = ADD32(0, 0X85);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_3;
    // 0x60004DF8: addiu       $a0, $zero, 0x85
    ctx->r4 = ADD32(0, 0X85);
    after_3:
    // 0x60004DFC: bne         $v0, $zero, L_60004E0C
    if (ctx->r2 != 0) {
        // 0x60004E00: nop
    
            goto L_60004E0C;
    }
    // 0x60004E00: nop

    // 0x60004E04: jal         0x6000025C
    // 0x60004E08: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    ovl_stage_world6_25C(rdram, ctx);
        goto after_4;
    // 0x60004E08: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    after_4:
L_60004E0C:
    // 0x60004E0C: jal         0x60000BB0
    // 0x60004E10: addiu       $a0, $zero, 0x85
    ctx->r4 = ADD32(0, 0X85);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_5;
    // 0x60004E10: addiu       $a0, $zero, 0x85
    ctx->r4 = ADD32(0, 0X85);
    after_5:
    // 0x60004E14: beq         $v0, $zero, L_60004E3C
    if (ctx->r2 == 0) {
        // 0x60004E18: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_60004E3C;
    }
    // 0x60004E18: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60004E1C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60004E20: addiu       $a0, $a0, 0x4C54
    ctx->r4 = ADD32(ctx->r4, 0X4C54);
    // 0x60004E24: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60004E28: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60004E2C: jal         0x60000994
    // 0x60004E30: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world6_994(rdram, ctx);
        goto after_6;
    // 0x60004E30: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_6:
    // 0x60004E34: b           L_60004E54
    // 0x60004E38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60004E54;
    // 0x60004E38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60004E3C:
    // 0x60004E3C: addiu       $a0, $a0, 0x4CD4
    ctx->r4 = ADD32(ctx->r4, 0X4CD4);
    // 0x60004E40: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60004E44: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60004E48: jal         0x60000994
    // 0x60004E4C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world6_994(rdram, ctx);
        goto after_7;
    // 0x60004E4C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_7:
    // 0x60004E50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60004E54:
    // 0x60004E54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60004E58: jr          $ra
    // 0x60004E5C: nop

    return;
    // 0x60004E5C: nop

;}
RECOMP_FUNC void ovl_stage_world6_4E60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004E60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60004E64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60004E68: jal         0x60000BB0
    // 0x60004E6C: addiu       $a0, $zero, 0x13F
    ctx->r4 = ADD32(0, 0X13F);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_0;
    // 0x60004E6C: addiu       $a0, $zero, 0x13F
    ctx->r4 = ADD32(0, 0X13F);
    after_0:
    // 0x60004E70: bne         $v0, $zero, L_60004E80
    if (ctx->r2 != 0) {
        // 0x60004E74: addiu       $a0, $zero, 0xE
        ctx->r4 = ADD32(0, 0XE);
            goto L_60004E80;
    }
    // 0x60004E74: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x60004E78: jal         0x60000E80
    // 0x60004E7C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_stage_world6_E80(rdram, ctx);
        goto after_1;
    // 0x60004E7C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
L_60004E80:
    // 0x60004E80: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x60004E84: jal         0x600006D0
    // 0x60004E88: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world6_6D0(rdram, ctx);
        goto after_2;
    // 0x60004E88: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x60004E8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004E90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60004E94: jr          $ra
    // 0x60004E98: nop

    return;
    // 0x60004E98: nop

;}
RECOMP_FUNC void ovl_stage_world6_4E9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004E9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60004EA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60004EA4: jal         0x60000BB0
    // 0x60004EA8: addiu       $a0, $zero, 0x13F
    ctx->r4 = ADD32(0, 0X13F);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_0;
    // 0x60004EA8: addiu       $a0, $zero, 0x13F
    ctx->r4 = ADD32(0, 0X13F);
    after_0:
    // 0x60004EAC: bne         $v0, $zero, L_60004EBC
    if (ctx->r2 != 0) {
        // 0x60004EB0: addiu       $a0, $zero, 0x5
        ctx->r4 = ADD32(0, 0X5);
            goto L_60004EBC;
    }
    // 0x60004EB0: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x60004EB4: jal         0x60000E80
    // 0x60004EB8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_stage_world6_E80(rdram, ctx);
        goto after_1;
    // 0x60004EB8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
L_60004EBC:
    // 0x60004EBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004EC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60004EC4: jr          $ra
    // 0x60004EC8: nop

    return;
    // 0x60004EC8: nop

;}
RECOMP_FUNC void ovl_stage_world6_4ECC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004ECC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60004ED0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60004ED4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x60004ED8: jal         0x60000F04
    // 0x60004EDC: addiu       $a1, $zero, -0x2
    ctx->r5 = ADD32(0, -0X2);
    ovl_stage_world6_F04(rdram, ctx);
        goto after_0;
    // 0x60004EDC: addiu       $a1, $zero, -0x2
    ctx->r5 = ADD32(0, -0X2);
    after_0:
    // 0x60004EE0: jal         0x60000BB0
    // 0x60004EE4: addiu       $a0, $zero, 0x18C
    ctx->r4 = ADD32(0, 0X18C);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_1;
    // 0x60004EE4: addiu       $a0, $zero, 0x18C
    ctx->r4 = ADD32(0, 0X18C);
    after_1:
    // 0x60004EE8: bne         $v0, $zero, L_60004F14
    if (ctx->r2 != 0) {
        // 0x60004EEC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60004F14;
    }
    // 0x60004EEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004EF0: jal         0x60000BB0
    // 0x60004EF4: addiu       $a0, $zero, 0x187
    ctx->r4 = ADD32(0, 0X187);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_2;
    // 0x60004EF4: addiu       $a0, $zero, 0x187
    ctx->r4 = ADD32(0, 0X187);
    after_2:
    // 0x60004EF8: beq         $v0, $zero, L_60004F14
    if (ctx->r2 == 0) {
        // 0x60004EFC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60004F14;
    }
    // 0x60004EFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004F00: jal         0x60000B98
    // 0x60004F04: addiu       $a0, $zero, 0x18C
    ctx->r4 = ADD32(0, 0X18C);
    ovl_stage_world6_B98(rdram, ctx);
        goto after_3;
    // 0x60004F04: addiu       $a0, $zero, 0x18C
    ctx->r4 = ADD32(0, 0X18C);
    after_3:
    // 0x60004F08: jal         0x60000A60
    // 0x60004F0C: addiu       $a0, $zero, 0xC1F
    ctx->r4 = ADD32(0, 0XC1F);
    ovl_stage_world6_A60(rdram, ctx);
        goto after_4;
    // 0x60004F0C: addiu       $a0, $zero, 0xC1F
    ctx->r4 = ADD32(0, 0XC1F);
    after_4:
    // 0x60004F10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60004F14:
    // 0x60004F14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60004F18: jr          $ra
    // 0x60004F1C: nop

    return;
    // 0x60004F1C: nop

;}
RECOMP_FUNC void ovl_stage_world6_4F20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004F20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60004F24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60004F28: jal         0x60000BB0
    // 0x60004F2C: addiu       $a0, $zero, 0x18E
    ctx->r4 = ADD32(0, 0X18E);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_0;
    // 0x60004F2C: addiu       $a0, $zero, 0x18E
    ctx->r4 = ADD32(0, 0X18E);
    after_0:
    // 0x60004F30: bne         $v0, $zero, L_60004F6C
    if (ctx->r2 != 0) {
        // 0x60004F34: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60004F6C;
    }
    // 0x60004F34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004F38: jal         0x60000BB0
    // 0x60004F3C: addiu       $a0, $zero, 0x186
    ctx->r4 = ADD32(0, 0X186);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_1;
    // 0x60004F3C: addiu       $a0, $zero, 0x186
    ctx->r4 = ADD32(0, 0X186);
    after_1:
    // 0x60004F40: beq         $v0, $zero, L_60004F6C
    if (ctx->r2 == 0) {
        // 0x60004F44: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60004F6C;
    }
    // 0x60004F44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004F48: jal         0x60000BB0
    // 0x60004F4C: addiu       $a0, $zero, 0x189
    ctx->r4 = ADD32(0, 0X189);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_2;
    // 0x60004F4C: addiu       $a0, $zero, 0x189
    ctx->r4 = ADD32(0, 0X189);
    after_2:
    // 0x60004F50: bne         $v0, $zero, L_60004F6C
    if (ctx->r2 != 0) {
        // 0x60004F54: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60004F6C;
    }
    // 0x60004F54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004F58: jal         0x60000B98
    // 0x60004F5C: addiu       $a0, $zero, 0x18E
    ctx->r4 = ADD32(0, 0X18E);
    ovl_stage_world6_B98(rdram, ctx);
        goto after_3;
    // 0x60004F5C: addiu       $a0, $zero, 0x18E
    ctx->r4 = ADD32(0, 0X18E);
    after_3:
    // 0x60004F60: jal         0x60000A60
    // 0x60004F64: addiu       $a0, $zero, 0xC21
    ctx->r4 = ADD32(0, 0XC21);
    ovl_stage_world6_A60(rdram, ctx);
        goto after_4;
    // 0x60004F64: addiu       $a0, $zero, 0xC21
    ctx->r4 = ADD32(0, 0XC21);
    after_4:
    // 0x60004F68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60004F6C:
    // 0x60004F6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60004F70: jr          $ra
    // 0x60004F74: nop

    return;
    // 0x60004F74: nop

;}
RECOMP_FUNC void ovl_stage_world6_4F78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004F78: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60004F7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60004F80: jal         0x60000BB0
    // 0x60004F84: addiu       $a0, $zero, 0x18F
    ctx->r4 = ADD32(0, 0X18F);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_0;
    // 0x60004F84: addiu       $a0, $zero, 0x18F
    ctx->r4 = ADD32(0, 0X18F);
    after_0:
    // 0x60004F88: bne         $v0, $zero, L_60004FB4
    if (ctx->r2 != 0) {
        // 0x60004F8C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60004FB4;
    }
    // 0x60004F8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004F90: jal         0x60000BB0
    // 0x60004F94: addiu       $a0, $zero, 0x194
    ctx->r4 = ADD32(0, 0X194);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_1;
    // 0x60004F94: addiu       $a0, $zero, 0x194
    ctx->r4 = ADD32(0, 0X194);
    after_1:
    // 0x60004F98: bne         $v0, $zero, L_60004FB4
    if (ctx->r2 != 0) {
        // 0x60004F9C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60004FB4;
    }
    // 0x60004F9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004FA0: jal         0x60000B98
    // 0x60004FA4: addiu       $a0, $zero, 0x18F
    ctx->r4 = ADD32(0, 0X18F);
    ovl_stage_world6_B98(rdram, ctx);
        goto after_2;
    // 0x60004FA4: addiu       $a0, $zero, 0x18F
    ctx->r4 = ADD32(0, 0X18F);
    after_2:
    // 0x60004FA8: jal         0x60000A60
    // 0x60004FAC: addiu       $a0, $zero, 0xC22
    ctx->r4 = ADD32(0, 0XC22);
    ovl_stage_world6_A60(rdram, ctx);
        goto after_3;
    // 0x60004FAC: addiu       $a0, $zero, 0xC22
    ctx->r4 = ADD32(0, 0XC22);
    after_3:
    // 0x60004FB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60004FB4:
    // 0x60004FB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60004FB8: jr          $ra
    // 0x60004FBC: nop

    return;
    // 0x60004FBC: nop

;}
RECOMP_FUNC void ovl_stage_world6_4FC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004FC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60004FC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60004FC8: jal         0x60000BB0
    // 0x60004FCC: addiu       $a0, $zero, 0x190
    ctx->r4 = ADD32(0, 0X190);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_0;
    // 0x60004FCC: addiu       $a0, $zero, 0x190
    ctx->r4 = ADD32(0, 0X190);
    after_0:
    // 0x60004FD0: bne         $v0, $zero, L_60004FFC
    if (ctx->r2 != 0) {
        // 0x60004FD4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60004FFC;
    }
    // 0x60004FD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004FD8: jal         0x60000BB0
    // 0x60004FDC: addiu       $a0, $zero, 0x194
    ctx->r4 = ADD32(0, 0X194);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_1;
    // 0x60004FDC: addiu       $a0, $zero, 0x194
    ctx->r4 = ADD32(0, 0X194);
    after_1:
    // 0x60004FE0: bne         $v0, $zero, L_60004FFC
    if (ctx->r2 != 0) {
        // 0x60004FE4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60004FFC;
    }
    // 0x60004FE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004FE8: jal         0x60000B98
    // 0x60004FEC: addiu       $a0, $zero, 0x190
    ctx->r4 = ADD32(0, 0X190);
    ovl_stage_world6_B98(rdram, ctx);
        goto after_2;
    // 0x60004FEC: addiu       $a0, $zero, 0x190
    ctx->r4 = ADD32(0, 0X190);
    after_2:
    // 0x60004FF0: jal         0x60000A60
    // 0x60004FF4: addiu       $a0, $zero, 0xC23
    ctx->r4 = ADD32(0, 0XC23);
    ovl_stage_world6_A60(rdram, ctx);
        goto after_3;
    // 0x60004FF4: addiu       $a0, $zero, 0xC23
    ctx->r4 = ADD32(0, 0XC23);
    after_3:
    // 0x60004FF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60004FFC:
    // 0x60004FFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60005000: jr          $ra
    // 0x60005004: nop

    return;
    // 0x60005004: nop

;}
RECOMP_FUNC void ovl_stage_world6_5008(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005008: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x6000500C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60005010: jal         0x60000C1C
    // 0x60005014: nop

    ovl_stage_world6_C1C(rdram, ctx);
        goto after_0;
    // 0x60005014: nop

    after_0:
    // 0x60005018: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x6000501C: jal         0x60000BB0
    // 0x60005020: addiu       $a0, $zero, 0x191
    ctx->r4 = ADD32(0, 0X191);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_1;
    // 0x60005020: addiu       $a0, $zero, 0x191
    ctx->r4 = ADD32(0, 0X191);
    after_1:
    // 0x60005024: bne         $v0, $zero, L_6000506C
    if (ctx->r2 != 0) {
        // 0x60005028: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_6000506C;
    }
    // 0x60005028: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000502C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x60005030: nop

    // 0x60005034: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x60005038: nop

    // 0x6000503C: andi        $t8, $t7, 0x800
    ctx->r24 = ctx->r15 & 0X800;
    // 0x60005040: bne         $t8, $zero, L_6000506C
    if (ctx->r24 != 0) {
        // 0x60005044: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_6000506C;
    }
    // 0x60005044: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005048: jal         0x60000BB0
    // 0x6000504C: addiu       $a0, $zero, 0xA1
    ctx->r4 = ADD32(0, 0XA1);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_2;
    // 0x6000504C: addiu       $a0, $zero, 0xA1
    ctx->r4 = ADD32(0, 0XA1);
    after_2:
    // 0x60005050: bne         $v0, $zero, L_6000506C
    if (ctx->r2 != 0) {
        // 0x60005054: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_6000506C;
    }
    // 0x60005054: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005058: jal         0x60000B98
    // 0x6000505C: addiu       $a0, $zero, 0x191
    ctx->r4 = ADD32(0, 0X191);
    ovl_stage_world6_B98(rdram, ctx);
        goto after_3;
    // 0x6000505C: addiu       $a0, $zero, 0x191
    ctx->r4 = ADD32(0, 0X191);
    after_3:
    // 0x60005060: jal         0x60000A60
    // 0x60005064: addiu       $a0, $zero, 0xC24
    ctx->r4 = ADD32(0, 0XC24);
    ovl_stage_world6_A60(rdram, ctx);
        goto after_4;
    // 0x60005064: addiu       $a0, $zero, 0xC24
    ctx->r4 = ADD32(0, 0XC24);
    after_4:
    // 0x60005068: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000506C:
    // 0x6000506C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x60005070: jr          $ra
    // 0x60005074: nop

    return;
    // 0x60005074: nop

;}
RECOMP_FUNC void ovl_stage_world6_5078(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005078: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x6000507C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x60005080: jal         0x60000C1C
    // 0x60005084: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    ovl_stage_world6_C1C(rdram, ctx);
        goto after_0;
    // 0x60005084: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x60005088: lw          $t6, 0x8($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X8);
    // 0x6000508C: addiu       $at, $zero, 0x885
    ctx->r1 = ADD32(0, 0X885);
    // 0x60005090: bne         $t6, $at, L_600050A8
    if (ctx->r14 != ctx->r1) {
        // 0x60005094: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_600050A8;
    }
    // 0x60005094: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x60005098: jal         0x60000A60
    // 0x6000509C: addiu       $a0, $zero, 0xB1C
    ctx->r4 = ADD32(0, 0XB1C);
    ovl_stage_world6_A60(rdram, ctx);
        goto after_1;
    // 0x6000509C: addiu       $a0, $zero, 0xB1C
    ctx->r4 = ADD32(0, 0XB1C);
    after_1:
    // 0x600050A0: b           L_600050B0
    // 0x600050A4: nop

        goto L_600050B0;
    // 0x600050A4: nop

L_600050A8:
    // 0x600050A8: jal         0x60000A60
    // 0x600050AC: addiu       $a0, $zero, 0xB1D
    ctx->r4 = ADD32(0, 0XB1D);
    ovl_stage_world6_A60(rdram, ctx);
        goto after_2;
    // 0x600050AC: addiu       $a0, $zero, 0xB1D
    ctx->r4 = ADD32(0, 0XB1D);
    after_2:
L_600050B0:
    // 0x600050B0: jal         0x600009D0
    // 0x600050B4: nop

    ovl_stage_world6_9D0(rdram, ctx);
        goto after_3;
    // 0x600050B4: nop

    after_3:
    // 0x600050B8: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x600050BC: nop

    // 0x600050C0: andi        $t8, $t7, 0x800
    ctx->r24 = ctx->r15 & 0X800;
    // 0x600050C4: beq         $t8, $zero, L_600050E8
    if (ctx->r24 == 0) {
        // 0x600050C8: nop
    
            goto L_600050E8;
    }
    // 0x600050C8: nop

L_600050CC:
    // 0x600050CC: jal         0x600009D0
    // 0x600050D0: nop

    ovl_stage_world6_9D0(rdram, ctx);
        goto after_4;
    // 0x600050D0: nop

    after_4:
    // 0x600050D4: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x600050D8: nop

    // 0x600050DC: andi        $t0, $t9, 0x800
    ctx->r8 = ctx->r25 & 0X800;
    // 0x600050E0: bne         $t0, $zero, L_600050CC
    if (ctx->r8 != 0) {
        // 0x600050E4: nop
    
            goto L_600050CC;
    }
    // 0x600050E4: nop

L_600050E8:
    // 0x600050E8: jal         0x600009C4
    // 0x600050EC: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    ovl_stage_world6_9C4(rdram, ctx);
        goto after_5;
    // 0x600050EC: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_5:
    // 0x600050F0: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x600050F4: nop

    // 0x600050F8: ori         $t2, $t1, 0x200
    ctx->r10 = ctx->r9 | 0X200;
    // 0x600050FC: jal         0x600009AC
    // 0x60005100: sw          $t2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r10;
    ovl_stage_world6_9AC(rdram, ctx);
        goto after_6;
    // 0x60005100: sw          $t2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r10;
    after_6:
    // 0x60005104: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x60005108: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x6000510C: jr          $ra
    // 0x60005110: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x60005110: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_stage_world6_5114(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005114: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60005118: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x6000511C: jal         0x60000C1C
    // 0x60005120: nop

    ovl_stage_world6_C1C(rdram, ctx);
        goto after_0;
    // 0x60005120: nop

    after_0:
    // 0x60005124: lw          $t6, 0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC);
    // 0x60005128: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x6000512C: bne         $t6, $at, L_60005150
    if (ctx->r14 != ctx->r1) {
        // 0x60005130: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_60005150;
    }
    // 0x60005130: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60005134: addiu       $a0, $a0, 0x5078
    ctx->r4 = ADD32(ctx->r4, 0X5078);
    // 0x60005138: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x6000513C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60005140: jal         0x60000994
    // 0x60005144: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world6_994(rdram, ctx);
        goto after_1;
    // 0x60005144: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x60005148: b           L_6000516C
    // 0x6000514C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_6000516C;
    // 0x6000514C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005150:
    // 0x60005150: lw          $t7, 0x8($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X8);
    // 0x60005154: addiu       $at, $zero, 0x885
    ctx->r1 = ADD32(0, 0X885);
    // 0x60005158: bne         $t7, $at, L_6000516C
    if (ctx->r15 != ctx->r1) {
        // 0x6000515C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_6000516C;
    }
    // 0x6000515C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005160: jal         0x60000B98
    // 0x60005164: addiu       $a0, $zero, 0x1BF
    ctx->r4 = ADD32(0, 0X1BF);
    ovl_stage_world6_B98(rdram, ctx);
        goto after_2;
    // 0x60005164: addiu       $a0, $zero, 0x1BF
    ctx->r4 = ADD32(0, 0X1BF);
    after_2:
    // 0x60005168: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000516C:
    // 0x6000516C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60005170: jr          $ra
    // 0x60005174: nop

    return;
    // 0x60005174: nop

;}
RECOMP_FUNC void ovl_stage_world6_5178(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005178: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x6000517C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x60005180: jal         0x60000C1C
    // 0x60005184: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    ovl_stage_world6_C1C(rdram, ctx);
        goto after_0;
    // 0x60005184: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x60005188: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x6000518C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x60005190: andi        $t7, $t6, 0x800
    ctx->r15 = ctx->r14 & 0X800;
    // 0x60005194: beq         $t7, $zero, L_600051B8
    if (ctx->r15 == 0) {
        // 0x60005198: nop
    
            goto L_600051B8;
    }
    // 0x60005198: nop

L_6000519C:
    // 0x6000519C: jal         0x600009D0
    // 0x600051A0: nop

    ovl_stage_world6_9D0(rdram, ctx);
        goto after_1;
    // 0x600051A0: nop

    after_1:
    // 0x600051A4: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x600051A8: nop

    // 0x600051AC: andi        $t9, $t8, 0x800
    ctx->r25 = ctx->r24 & 0X800;
    // 0x600051B0: bne         $t9, $zero, L_6000519C
    if (ctx->r25 != 0) {
        // 0x600051B4: nop
    
            goto L_6000519C;
    }
    // 0x600051B4: nop

L_600051B8:
    // 0x600051B8: jal         0x600009C4
    // 0x600051BC: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    ovl_stage_world6_9C4(rdram, ctx);
        goto after_2;
    // 0x600051BC: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_2:
    // 0x600051C0: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x600051C4: nop

    // 0x600051C8: ori         $t1, $t0, 0x200
    ctx->r9 = ctx->r8 | 0X200;
    // 0x600051CC: jal         0x600009AC
    // 0x600051D0: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
    ovl_stage_world6_9AC(rdram, ctx);
        goto after_3;
    // 0x600051D0: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
    after_3:
    // 0x600051D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x600051D8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x600051DC: jr          $ra
    // 0x600051E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x600051E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_stage_world6_51E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600051E4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x600051E8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x600051EC: jal         0x60000C1C
    // 0x600051F0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    ovl_stage_world6_C1C(rdram, ctx);
        goto after_0;
    // 0x600051F0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x600051F4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x600051F8: jal         0x60000A60
    // 0x600051FC: addiu       $a0, $zero, 0xBFE
    ctx->r4 = ADD32(0, 0XBFE);
    ovl_stage_world6_A60(rdram, ctx);
        goto after_1;
    // 0x600051FC: addiu       $a0, $zero, 0xBFE
    ctx->r4 = ADD32(0, 0XBFE);
    after_1:
    // 0x60005200: jal         0x600009D0
    // 0x60005204: nop

    ovl_stage_world6_9D0(rdram, ctx);
        goto after_2;
    // 0x60005204: nop

    after_2:
    // 0x60005208: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x6000520C: nop

    // 0x60005210: andi        $t7, $t6, 0x800
    ctx->r15 = ctx->r14 & 0X800;
    // 0x60005214: beq         $t7, $zero, L_60005238
    if (ctx->r15 == 0) {
        // 0x60005218: nop
    
            goto L_60005238;
    }
    // 0x60005218: nop

L_6000521C:
    // 0x6000521C: jal         0x600009D0
    // 0x60005220: nop

    ovl_stage_world6_9D0(rdram, ctx);
        goto after_3;
    // 0x60005220: nop

    after_3:
    // 0x60005224: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x60005228: nop

    // 0x6000522C: andi        $t9, $t8, 0x800
    ctx->r25 = ctx->r24 & 0X800;
    // 0x60005230: bne         $t9, $zero, L_6000521C
    if (ctx->r25 != 0) {
        // 0x60005234: nop
    
            goto L_6000521C;
    }
    // 0x60005234: nop

L_60005238:
    // 0x60005238: jal         0x600009C4
    // 0x6000523C: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    ovl_stage_world6_9C4(rdram, ctx);
        goto after_4;
    // 0x6000523C: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_4:
    // 0x60005240: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x60005244: nop

    // 0x60005248: ori         $t1, $t0, 0x200
    ctx->r9 = ctx->r8 | 0X200;
    // 0x6000524C: jal         0x600009AC
    // 0x60005250: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
    ovl_stage_world6_9AC(rdram, ctx);
        goto after_5;
    // 0x60005250: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
    after_5:
    // 0x60005254: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x60005258: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x6000525C: jr          $ra
    // 0x60005260: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x60005260: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_stage_world6_5264(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005264: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60005268: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x6000526C: jal         0x60000C1C
    // 0x60005270: nop

    ovl_stage_world6_C1C(rdram, ctx);
        goto after_0;
    // 0x60005270: nop

    after_0:
    // 0x60005274: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x60005278: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x6000527C: bne         $v1, $at, L_600052A0
    if (ctx->r3 != ctx->r1) {
        // 0x60005280: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_600052A0;
    }
    // 0x60005280: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60005284: addiu       $a0, $a0, 0x5178
    ctx->r4 = ADD32(ctx->r4, 0X5178);
    // 0x60005288: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x6000528C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60005290: jal         0x60000994
    // 0x60005294: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world6_994(rdram, ctx);
        goto after_1;
    // 0x60005294: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x60005298: b           L_600052C4
    // 0x6000529C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600052C4;
    // 0x6000529C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600052A0:
    // 0x600052A0: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x600052A4: bne         $v1, $at, L_600052C0
    if (ctx->r3 != ctx->r1) {
        // 0x600052A8: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_600052C0;
    }
    // 0x600052A8: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600052AC: addiu       $a0, $a0, 0x51E4
    ctx->r4 = ADD32(ctx->r4, 0X51E4);
    // 0x600052B0: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x600052B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x600052B8: jal         0x60000994
    // 0x600052BC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world6_994(rdram, ctx);
        goto after_2;
    // 0x600052BC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
L_600052C0:
    // 0x600052C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600052C4:
    // 0x600052C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600052C8: jr          $ra
    // 0x600052CC: nop

    return;
    // 0x600052CC: nop

;}
