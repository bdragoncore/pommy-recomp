#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_stage_world1_3514(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003514: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60003518: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x6000351C: jal         0x60000C1C
    // 0x60003520: nop

    ovl_stage_world1_C1C(rdram, ctx);
        goto after_0;
    // 0x60003520: nop

    after_0:
    // 0x60003524: jal         0x600009D0
    // 0x60003528: nop

    ovl_stage_world1_9D0(rdram, ctx);
        goto after_1;
    // 0x60003528: nop

    after_1:
    // 0x6000352C: jal         0x60000E44
    // 0x60003530: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    ovl_stage_world1_E44(rdram, ctx);
        goto after_2;
    // 0x60003530: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_2:
    // 0x60003534: jal         0x600009AC
    // 0x60003538: nop

    ovl_stage_world1_9AC(rdram, ctx);
        goto after_3;
    // 0x60003538: nop

    after_3:
    // 0x6000353C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003540: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60003544: jr          $ra
    // 0x60003548: nop

    return;
    // 0x60003548: nop

;}
RECOMP_FUNC void ovl_stage_world1_354C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000354C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60003550: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003554: jal         0x60000BB0
    // 0x60003558: addiu       $a0, $zero, 0x187
    ctx->r4 = ADD32(0, 0X187);
    ovl_stage_world1_BB0(rdram, ctx);
        goto after_0;
    // 0x60003558: addiu       $a0, $zero, 0x187
    ctx->r4 = ADD32(0, 0X187);
    after_0:
    // 0x6000355C: beq         $v0, $zero, L_600035A0
    if (ctx->r2 == 0) {
        // 0x60003560: nop
    
            goto L_600035A0;
    }
    // 0x60003560: nop

    // 0x60003564: jal         0x60000BB0
    // 0x60003568: addiu       $a0, $zero, 0xE5
    ctx->r4 = ADD32(0, 0XE5);
    ovl_stage_world1_BB0(rdram, ctx);
        goto after_1;
    // 0x60003568: addiu       $a0, $zero, 0xE5
    ctx->r4 = ADD32(0, 0XE5);
    after_1:
    // 0x6000356C: beq         $v0, $zero, L_60003584
    if (ctx->r2 == 0) {
        // 0x60003570: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_60003584;
    }
    // 0x60003570: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003574: jal         0x60000EEC
    // 0x60003578: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    ovl_stage_world1_EEC(rdram, ctx);
        goto after_2;
    // 0x60003578: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_2:
    // 0x6000357C: b           L_600035A8
    // 0x60003580: nop

        goto L_600035A8;
    // 0x60003580: nop

L_60003584:
    // 0x60003584: addiu       $a0, $a0, 0x3514
    ctx->r4 = ADD32(ctx->r4, 0X3514);
    // 0x60003588: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x6000358C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60003590: jal         0x60000994
    // 0x60003594: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world1_994(rdram, ctx);
        goto after_3;
    // 0x60003594: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x60003598: b           L_600035A8
    // 0x6000359C: nop

        goto L_600035A8;
    // 0x6000359C: nop

L_600035A0:
    // 0x600035A0: jal         0x60000244
    // 0x600035A4: addiu       $a0, $zero, 0x130
    ctx->r4 = ADD32(0, 0X130);
    ovl_stage_world1_244(rdram, ctx);
        goto after_4;
    // 0x600035A4: addiu       $a0, $zero, 0x130
    ctx->r4 = ADD32(0, 0X130);
    after_4:
L_600035A8:
    // 0x600035A8: jal         0x60000C1C
    // 0x600035AC: nop

    ovl_stage_world1_C1C(rdram, ctx);
        goto after_5;
    // 0x600035AC: nop

    after_5:
    // 0x600035B0: lw          $t6, 0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC);
    // 0x600035B4: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x600035B8: bne         $t6, $at, L_600035CC
    if (ctx->r14 != ctx->r1) {
        // 0x600035BC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600035CC;
    }
    // 0x600035BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600035C0: jal         0x6000025C
    // 0x600035C4: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    ovl_stage_world1_25C(rdram, ctx);
        goto after_6;
    // 0x600035C4: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_6:
    // 0x600035C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600035CC:
    // 0x600035CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600035D0: jr          $ra
    // 0x600035D4: nop

    return;
    // 0x600035D4: nop

;}
RECOMP_FUNC void ovl_stage_world1_35D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600035D8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x600035DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600035E0: jal         0x60000C1C
    // 0x600035E4: nop

    ovl_stage_world1_C1C(rdram, ctx);
        goto after_0;
    // 0x600035E4: nop

    after_0:
    // 0x600035E8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x600035EC: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x600035F0: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x600035F4: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x600035F8: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x600035FC: jal         0x60000A60
    // 0x60003600: addiu       $a0, $zero, 0xAF9
    ctx->r4 = ADD32(0, 0XAF9);
    ovl_stage_world1_A60(rdram, ctx);
        goto after_1;
    // 0x60003600: addiu       $a0, $zero, 0xAF9
    ctx->r4 = ADD32(0, 0XAF9);
    after_1:
    // 0x60003604: jal         0x60001030
    // 0x60003608: nop

    ovl_stage_world1_1030(rdram, ctx);
        goto after_2;
    // 0x60003608: nop

    after_2:
    // 0x6000360C: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x60003610: lui         $at, 0xFFFE
    ctx->r1 = S32(0XFFFE << 16);
    // 0x60003614: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x60003618: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x6000361C: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x60003620: addiu       $a0, $zero, 0x8B9
    ctx->r4 = ADD32(0, 0X8B9);
    // 0x60003624: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x60003628: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x6000362C: jal         0x60000C10
    // 0x60003630: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    ovl_stage_world1_C10(rdram, ctx);
        goto after_3;
    // 0x60003630: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    after_3:
    // 0x60003634: jal         0x600009AC
    // 0x60003638: nop

    ovl_stage_world1_9AC(rdram, ctx);
        goto after_4;
    // 0x60003638: nop

    after_4:
    // 0x6000363C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003640: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x60003644: jr          $ra
    // 0x60003648: nop

    return;
    // 0x60003648: nop

;}
RECOMP_FUNC void ovl_stage_world1_364C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000364C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60003650: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003654: jal         0x60000C1C
    // 0x60003658: nop

    ovl_stage_world1_C1C(rdram, ctx);
        goto after_0;
    // 0x60003658: nop

    after_0:
    // 0x6000365C: lw          $t6, 0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC);
    // 0x60003660: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x60003664: beq         $t6, $at, L_60003680
    if (ctx->r14 == ctx->r1) {
        // 0x60003668: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_60003680;
    }
    // 0x60003668: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x6000366C: addiu       $a0, $a0, 0x35D8
    ctx->r4 = ADD32(ctx->r4, 0X35D8);
    // 0x60003670: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60003674: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60003678: jal         0x60000994
    // 0x6000367C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world1_994(rdram, ctx);
        goto after_1;
    // 0x6000367C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
L_60003680:
    // 0x60003680: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003684: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60003688: jr          $ra
    // 0x6000368C: nop

    return;
    // 0x6000368C: nop

;}
RECOMP_FUNC void ovl_stage_world1_3690(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003690: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60003694: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003698: jal         0x60000BB0
    // 0x6000369C: addiu       $a0, $zero, 0x88
    ctx->r4 = ADD32(0, 0X88);
    ovl_stage_world1_BB0(rdram, ctx);
        goto after_0;
    // 0x6000369C: addiu       $a0, $zero, 0x88
    ctx->r4 = ADD32(0, 0X88);
    after_0:
    // 0x600036A0: bne         $v0, $zero, L_600036CC
    if (ctx->r2 != 0) {
        // 0x600036A4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600036CC;
    }
    // 0x600036A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600036A8: jal         0x60000BB0
    // 0x600036AC: addiu       $a0, $zero, 0x18B
    ctx->r4 = ADD32(0, 0X18B);
    ovl_stage_world1_BB0(rdram, ctx);
        goto after_1;
    // 0x600036AC: addiu       $a0, $zero, 0x18B
    ctx->r4 = ADD32(0, 0X18B);
    after_1:
    // 0x600036B0: bne         $v0, $zero, L_600036CC
    if (ctx->r2 != 0) {
        // 0x600036B4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600036CC;
    }
    // 0x600036B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600036B8: jal         0x60000B98
    // 0x600036BC: addiu       $a0, $zero, 0x18B
    ctx->r4 = ADD32(0, 0X18B);
    ovl_stage_world1_B98(rdram, ctx);
        goto after_2;
    // 0x600036BC: addiu       $a0, $zero, 0x18B
    ctx->r4 = ADD32(0, 0X18B);
    after_2:
    // 0x600036C0: jal         0x60000A60
    // 0x600036C4: addiu       $a0, $zero, 0xC06
    ctx->r4 = ADD32(0, 0XC06);
    ovl_stage_world1_A60(rdram, ctx);
        goto after_3;
    // 0x600036C4: addiu       $a0, $zero, 0xC06
    ctx->r4 = ADD32(0, 0XC06);
    after_3:
    // 0x600036C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600036CC:
    // 0x600036CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600036D0: jr          $ra
    // 0x600036D4: nop

    return;
    // 0x600036D4: nop

;}
RECOMP_FUNC void ovl_stage_world1_36D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600036D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600036DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600036E0: jal         0x60000BB0
    // 0x600036E4: addiu       $a0, $zero, 0x88
    ctx->r4 = ADD32(0, 0X88);
    ovl_stage_world1_BB0(rdram, ctx);
        goto after_0;
    // 0x600036E4: addiu       $a0, $zero, 0x88
    ctx->r4 = ADD32(0, 0X88);
    after_0:
    // 0x600036E8: bne         $v0, $zero, L_60003714
    if (ctx->r2 != 0) {
        // 0x600036EC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003714;
    }
    // 0x600036EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600036F0: jal         0x60000BB0
    // 0x600036F4: addiu       $a0, $zero, 0x18D
    ctx->r4 = ADD32(0, 0X18D);
    ovl_stage_world1_BB0(rdram, ctx);
        goto after_1;
    // 0x600036F4: addiu       $a0, $zero, 0x18D
    ctx->r4 = ADD32(0, 0X18D);
    after_1:
    // 0x600036F8: bne         $v0, $zero, L_60003714
    if (ctx->r2 != 0) {
        // 0x600036FC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003714;
    }
    // 0x600036FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003700: jal         0x60000B98
    // 0x60003704: addiu       $a0, $zero, 0x18D
    ctx->r4 = ADD32(0, 0X18D);
    ovl_stage_world1_B98(rdram, ctx);
        goto after_2;
    // 0x60003704: addiu       $a0, $zero, 0x18D
    ctx->r4 = ADD32(0, 0X18D);
    after_2:
    // 0x60003708: jal         0x60000A60
    // 0x6000370C: addiu       $a0, $zero, 0xC07
    ctx->r4 = ADD32(0, 0XC07);
    ovl_stage_world1_A60(rdram, ctx);
        goto after_3;
    // 0x6000370C: addiu       $a0, $zero, 0xC07
    ctx->r4 = ADD32(0, 0XC07);
    after_3:
    // 0x60003710: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003714:
    // 0x60003714: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60003718: jr          $ra
    // 0x6000371C: nop

    return;
    // 0x6000371C: nop

;}
RECOMP_FUNC void ovl_stage_world1_3720(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003720: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x60003724: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x60003728: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x6000372C: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x60003730: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x60003734: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x60003738: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x6000373C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x60003740: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x60003744: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x60003748: addiu       $s1, $sp, 0x40
    ctx->r17 = ADD32(ctx->r29, 0X40);
    // 0x6000374C: addiu       $s3, $sp, 0x58
    ctx->r19 = ADD32(ctx->r29, 0X58);
    // 0x60003750: addiu       $s4, $zero, 0x2
    ctx->r20 = ADD32(0, 0X2);
    // 0x60003754: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_60003758:
    // 0x60003758: jal         0x60000BB0
    // 0x6000375C: addiu       $a0, $zero, 0x182
    ctx->r4 = ADD32(0, 0X182);
    ovl_stage_world1_BB0(rdram, ctx);
        goto after_0;
    // 0x6000375C: addiu       $a0, $zero, 0x182
    ctx->r4 = ADD32(0, 0X182);
    after_0:
    // 0x60003760: beq         $v0, $zero, L_60003774
    if (ctx->r2 == 0) {
        // 0x60003764: addiu       $t6, $zero, 0x22
        ctx->r14 = ADD32(0, 0X22);
            goto L_60003774;
    }
    // 0x60003764: addiu       $t6, $zero, 0x22
    ctx->r14 = ADD32(0, 0X22);
    // 0x60003768: jal         0x600009AC
    // 0x6000376C: nop

    ovl_stage_world1_9AC(rdram, ctx);
        goto after_1;
    // 0x6000376C: nop

    after_1:
    // 0x60003770: addiu       $t6, $zero, 0x22
    ctx->r14 = ADD32(0, 0X22);
L_60003774:
    // 0x60003774: sw          $t6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r14;
    // 0x60003778: swc1        $f20, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f20.u32l;
    // 0x6000377C: swc1        $f20, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f20.u32l;
    // 0x60003780: swc1        $f20, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f20.u32l;
    // 0x60003784: jal         0x60000E74
    // 0x60003788: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    ovl_stage_world1_E74(rdram, ctx);
        goto after_2;
    // 0x60003788: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_2:
    // 0x6000378C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x60003790: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60003794: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    // 0x60003798: jal         0x600006C4
    // 0x6000379C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    ovl_stage_world1_6C4(rdram, ctx);
        goto after_3;
    // 0x6000379C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_3:
    // 0x600037A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x600037A4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x600037A8: jal         0x600006C4
    // 0x600037AC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world1_6C4(rdram, ctx);
        goto after_4;
    // 0x600037AC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_4:
    // 0x600037B0: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x600037B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x600037B8: ori         $t8, $t7, 0x4
    ctx->r24 = ctx->r15 | 0X4;
    // 0x600037BC: sw          $t8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r24;
    // 0x600037C0: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x600037C4: jal         0x600006C4
    // 0x600037C8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world1_6C4(rdram, ctx);
        goto after_5;
    // 0x600037C8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_5:
    // 0x600037CC: jal         0x60000E74
    // 0x600037D0: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    ovl_stage_world1_E74(rdram, ctx);
        goto after_6;
    // 0x600037D0: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_6:
    // 0x600037D4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x600037D8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600037DC: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    // 0x600037E0: jal         0x600006C4
    // 0x600037E4: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    ovl_stage_world1_6C4(rdram, ctx);
        goto after_7;
    // 0x600037E4: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_7:
    // 0x600037E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x600037EC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x600037F0: jal         0x600006C4
    // 0x600037F4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world1_6C4(rdram, ctx);
        goto after_8;
    // 0x600037F4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_8:
    // 0x600037F8: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x600037FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x60003800: ori         $t0, $t9, 0x4
    ctx->r8 = ctx->r25 | 0X4;
    // 0x60003804: sw          $t0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r8;
    // 0x60003808: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x6000380C: jal         0x600006C4
    // 0x60003810: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world1_6C4(rdram, ctx);
        goto after_9;
    // 0x60003810: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_9:
    // 0x60003814: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x60003818: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x6000381C: jal         0x600006C4
    // 0x60003820: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world1_6C4(rdram, ctx);
        goto after_10;
    // 0x60003820: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_10:
    // 0x60003824: beq         $s2, $zero, L_60003840
    if (ctx->r18 == 0) {
        // 0x60003828: addiu       $a0, $zero, 0x1F3
        ctx->r4 = ADD32(0, 0X1F3);
            goto L_60003840;
    }
    // 0x60003828: addiu       $a0, $zero, 0x1F3
    ctx->r4 = ADD32(0, 0X1F3);
    // 0x6000382C: addiu       $a0, $zero, 0x1F2
    ctx->r4 = ADD32(0, 0X1F2);
    // 0x60003830: jal         0x60000280
    // 0x60003834: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    ovl_stage_world1_280(rdram, ctx);
        goto after_11;
    // 0x60003834: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_11:
    // 0x60003838: b           L_60003848
    // 0x6000383C: nop

        goto L_60003848;
    // 0x6000383C: nop

L_60003840:
    // 0x60003840: jal         0x60000280
    // 0x60003844: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    ovl_stage_world1_280(rdram, ctx);
        goto after_12;
    // 0x60003844: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_12:
L_60003848:
    // 0x60003848: jal         0x600009C4
    // 0x6000384C: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_stage_world1_9C4(rdram, ctx);
        goto after_13;
    // 0x6000384C: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_13:
    // 0x60003850: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x60003854: bne         $s2, $s4, L_60003758
    if (ctx->r18 != ctx->r20) {
        // 0x60003858: nop
    
            goto L_60003758;
    }
    // 0x60003858: nop

    // 0x6000385C: b           L_60003758
    // 0x60003860: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
        goto L_60003758;
    // 0x60003860: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x60003864: nop

    // 0x60003868: nop

    // 0x6000386C: nop

    // 0x60003870: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x60003874: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x60003878: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x6000387C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x60003880: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x60003884: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x60003888: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x6000388C: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x60003890: jr          $ra
    // 0x60003894: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x60003894: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void ovl_stage_world1_3898(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003898: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x6000389C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600038A0: jal         0x60000C1C
    // 0x600038A4: nop

    ovl_stage_world1_C1C(rdram, ctx);
        goto after_0;
    // 0x600038A4: nop

    after_0:
    // 0x600038A8: lw          $t6, 0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC);
    // 0x600038AC: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x600038B0: bne         $t6, $at, L_600038E8
    if (ctx->r14 != ctx->r1) {
        // 0x600038B4: nop
    
            goto L_600038E8;
    }
    // 0x600038B4: nop

    // 0x600038B8: jal         0x60000BB0
    // 0x600038BC: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    ovl_stage_world1_BB0(rdram, ctx);
        goto after_1;
    // 0x600038BC: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    after_1:
    // 0x600038C0: bne         $v0, $zero, L_600038E8
    if (ctx->r2 != 0) {
        // 0x600038C4: nop
    
            goto L_600038E8;
    }
    // 0x600038C4: nop

    // 0x600038C8: jal         0x60000BB0
    // 0x600038CC: addiu       $a0, $zero, 0x18E
    ctx->r4 = ADD32(0, 0X18E);
    ovl_stage_world1_BB0(rdram, ctx);
        goto after_2;
    // 0x600038CC: addiu       $a0, $zero, 0x18E
    ctx->r4 = ADD32(0, 0X18E);
    after_2:
    // 0x600038D0: bne         $v0, $zero, L_600038E8
    if (ctx->r2 != 0) {
        // 0x600038D4: nop
    
            goto L_600038E8;
    }
    // 0x600038D4: nop

    // 0x600038D8: jal         0x60000B98
    // 0x600038DC: addiu       $a0, $zero, 0x18E
    ctx->r4 = ADD32(0, 0X18E);
    ovl_stage_world1_B98(rdram, ctx);
        goto after_3;
    // 0x600038DC: addiu       $a0, $zero, 0x18E
    ctx->r4 = ADD32(0, 0X18E);
    after_3:
    // 0x600038E0: jal         0x60000A60
    // 0x600038E4: addiu       $a0, $zero, 0xC08
    ctx->r4 = ADD32(0, 0XC08);
    ovl_stage_world1_A60(rdram, ctx);
        goto after_4;
    // 0x600038E4: addiu       $a0, $zero, 0xC08
    ctx->r4 = ADD32(0, 0XC08);
    after_4:
L_600038E8:
    // 0x600038E8: jal         0x60000BB0
    // 0x600038EC: addiu       $a0, $zero, 0x182
    ctx->r4 = ADD32(0, 0X182);
    ovl_stage_world1_BB0(rdram, ctx);
        goto after_5;
    // 0x600038EC: addiu       $a0, $zero, 0x182
    ctx->r4 = ADD32(0, 0X182);
    after_5:
    // 0x600038F0: bne         $v0, $zero, L_6000390C
    if (ctx->r2 != 0) {
        // 0x600038F4: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_6000390C;
    }
    // 0x600038F4: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600038F8: addiu       $a0, $a0, 0x3720
    ctx->r4 = ADD32(ctx->r4, 0X3720);
    // 0x600038FC: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60003900: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60003904: jal         0x60000994
    // 0x60003908: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world1_994(rdram, ctx);
        goto after_6;
    // 0x60003908: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_6:
L_6000390C:
    // 0x6000390C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003910: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60003914: jr          $ra
    // 0x60003918: nop

    return;
    // 0x60003918: nop

;}
RECOMP_FUNC void ovl_stage_world1_391C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000391C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60003920: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003924: jal         0x60000EEC
    // 0x60003928: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    ovl_stage_world1_EEC(rdram, ctx);
        goto after_0;
    // 0x60003928: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_0:
    // 0x6000392C: jal         0x60000EEC
    // 0x60003930: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    ovl_stage_world1_EEC(rdram, ctx);
        goto after_1;
    // 0x60003930: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_1:
    // 0x60003934: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003938: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x6000393C: jr          $ra
    // 0x60003940: nop

    return;
    // 0x60003940: nop

;}
RECOMP_FUNC void ovl_stage_world1_3944(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003944: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60003948: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x6000394C: jal         0x60000C1C
    // 0x60003950: nop

    ovl_stage_world1_C1C(rdram, ctx);
        goto after_0;
    // 0x60003950: nop

    after_0:
    // 0x60003954: lw          $t6, 0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC);
    // 0x60003958: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x6000395C: bne         $t6, $at, L_60003998
    if (ctx->r14 != ctx->r1) {
        // 0x60003960: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003998;
    }
    // 0x60003960: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003964: jal         0x60000BB0
    // 0x60003968: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    ovl_stage_world1_BB0(rdram, ctx);
        goto after_1;
    // 0x60003968: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    after_1:
    // 0x6000396C: bne         $v0, $zero, L_60003998
    if (ctx->r2 != 0) {
        // 0x60003970: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003998;
    }
    // 0x60003970: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003974: jal         0x60000BB0
    // 0x60003978: addiu       $a0, $zero, 0x18F
    ctx->r4 = ADD32(0, 0X18F);
    ovl_stage_world1_BB0(rdram, ctx);
        goto after_2;
    // 0x60003978: addiu       $a0, $zero, 0x18F
    ctx->r4 = ADD32(0, 0X18F);
    after_2:
    // 0x6000397C: bne         $v0, $zero, L_60003998
    if (ctx->r2 != 0) {
        // 0x60003980: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003998;
    }
    // 0x60003980: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003984: jal         0x60000B98
    // 0x60003988: addiu       $a0, $zero, 0x18F
    ctx->r4 = ADD32(0, 0X18F);
    ovl_stage_world1_B98(rdram, ctx);
        goto after_3;
    // 0x60003988: addiu       $a0, $zero, 0x18F
    ctx->r4 = ADD32(0, 0X18F);
    after_3:
    // 0x6000398C: jal         0x60000A60
    // 0x60003990: addiu       $a0, $zero, 0xC0D
    ctx->r4 = ADD32(0, 0XC0D);
    ovl_stage_world1_A60(rdram, ctx);
        goto after_4;
    // 0x60003990: addiu       $a0, $zero, 0xC0D
    ctx->r4 = ADD32(0, 0XC0D);
    after_4:
    // 0x60003994: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003998:
    // 0x60003998: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x6000399C: jr          $ra
    // 0x600039A0: nop

    return;
    // 0x600039A0: nop

;}
RECOMP_FUNC void ovl_stage_world1_39A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600039A4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x600039A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600039AC: jal         0x60000C1C
    // 0x600039B0: nop

    ovl_stage_world1_C1C(rdram, ctx);
        goto after_0;
    // 0x600039B0: nop

    after_0:
    // 0x600039B4: lw          $t6, 0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC);
    // 0x600039B8: lbu         $v1, 0x20($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X20);
    // 0x600039BC: bne         $t6, $zero, L_600039FC
    if (ctx->r14 != 0) {
        // 0x600039C0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600039FC;
    }
    // 0x600039C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600039C4: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x600039C8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600039CC: andi        $t8, $t7, 0x800
    ctx->r24 = ctx->r15 & 0X800;
    // 0x600039D0: bne         $t8, $zero, L_600039FC
    if (ctx->r24 != 0) {
        // 0x600039D4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600039FC;
    }
    // 0x600039D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600039D8: jal         0x60000EE0
    // 0x600039DC: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    ovl_stage_world1_EE0(rdram, ctx);
        goto after_1;
    // 0x600039DC: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_1:
    // 0x600039E0: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x600039E4: nop

    // 0x600039E8: beq         $v0, $v1, L_600039FC
    if (ctx->r2 == ctx->r3) {
        // 0x600039EC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600039FC;
    }
    // 0x600039EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600039F0: jal         0x60000A60
    // 0x600039F4: addiu       $a0, $zero, 0xAF1
    ctx->r4 = ADD32(0, 0XAF1);
    ovl_stage_world1_A60(rdram, ctx);
        goto after_2;
    // 0x600039F4: addiu       $a0, $zero, 0xAF1
    ctx->r4 = ADD32(0, 0XAF1);
    after_2:
    // 0x600039F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600039FC:
    // 0x600039FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x60003A00: jr          $ra
    // 0x60003A04: nop

    return;
    // 0x60003A04: nop

;}
RECOMP_FUNC void ovl_stage_world1_3A08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003A08: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x60003A0C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x60003A10: jal         0x60000C1C
    // 0x60003A14: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    ovl_stage_world1_C1C(rdram, ctx);
        goto after_0;
    // 0x60003A14: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x60003A18: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x60003A1C: jal         0x60000A60
    // 0x60003A20: addiu       $a0, $zero, 0xB17
    ctx->r4 = ADD32(0, 0XB17);
    ovl_stage_world1_A60(rdram, ctx);
        goto after_1;
    // 0x60003A20: addiu       $a0, $zero, 0xB17
    ctx->r4 = ADD32(0, 0XB17);
    after_1:
    // 0x60003A24: jal         0x600009D0
    // 0x60003A28: nop

    ovl_stage_world1_9D0(rdram, ctx);
        goto after_2;
    // 0x60003A28: nop

    after_2:
    // 0x60003A2C: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x60003A30: nop

    // 0x60003A34: andi        $t7, $t6, 0x800
    ctx->r15 = ctx->r14 & 0X800;
    // 0x60003A38: beq         $t7, $zero, L_60003A5C
    if (ctx->r15 == 0) {
        // 0x60003A3C: nop
    
            goto L_60003A5C;
    }
    // 0x60003A3C: nop

L_60003A40:
    // 0x60003A40: jal         0x600009D0
    // 0x60003A44: nop

    ovl_stage_world1_9D0(rdram, ctx);
        goto after_3;
    // 0x60003A44: nop

    after_3:
    // 0x60003A48: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x60003A4C: nop

    // 0x60003A50: andi        $t9, $t8, 0x800
    ctx->r25 = ctx->r24 & 0X800;
    // 0x60003A54: bne         $t9, $zero, L_60003A40
    if (ctx->r25 != 0) {
        // 0x60003A58: nop
    
            goto L_60003A40;
    }
    // 0x60003A58: nop

L_60003A5C:
    // 0x60003A5C: jal         0x600009C4
    // 0x60003A60: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    ovl_stage_world1_9C4(rdram, ctx);
        goto after_4;
    // 0x60003A60: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_4:
    // 0x60003A64: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x60003A68: nop

    // 0x60003A6C: ori         $t1, $t0, 0x200
    ctx->r9 = ctx->r8 | 0X200;
    // 0x60003A70: jal         0x600009AC
    // 0x60003A74: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
    ovl_stage_world1_9AC(rdram, ctx);
        goto after_5;
    // 0x60003A74: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
    after_5:
    // 0x60003A78: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x60003A7C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x60003A80: jr          $ra
    // 0x60003A84: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x60003A84: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_stage_world1_3A88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003A88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60003A8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003A90: jal         0x60000C1C
    // 0x60003A94: nop

    ovl_stage_world1_C1C(rdram, ctx);
        goto after_0;
    // 0x60003A94: nop

    after_0:
    // 0x60003A98: lw          $t6, 0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC);
    // 0x60003A9C: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x60003AA0: bne         $t6, $at, L_60003AC4
    if (ctx->r14 != ctx->r1) {
        // 0x60003AA4: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_60003AC4;
    }
    // 0x60003AA4: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003AA8: addiu       $a0, $a0, 0x3A08
    ctx->r4 = ADD32(ctx->r4, 0X3A08);
    // 0x60003AAC: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60003AB0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60003AB4: jal         0x60000994
    // 0x60003AB8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world1_994(rdram, ctx);
        goto after_1;
    // 0x60003AB8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x60003ABC: b           L_60003AD0
    // 0x60003AC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60003AD0;
    // 0x60003AC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003AC4:
    // 0x60003AC4: jal         0x60000B98
    // 0x60003AC8: addiu       $a0, $zero, 0x1BF
    ctx->r4 = ADD32(0, 0X1BF);
    ovl_stage_world1_B98(rdram, ctx);
        goto after_2;
    // 0x60003AC8: addiu       $a0, $zero, 0x1BF
    ctx->r4 = ADD32(0, 0X1BF);
    after_2:
    // 0x60003ACC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003AD0:
    // 0x60003AD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60003AD4: jr          $ra
    // 0x60003AD8: nop

    return;
    // 0x60003AD8: nop

;}
RECOMP_FUNC void ovl_stage_world1_3ADC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003ADC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x60003AE0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x60003AE4: jal         0x60000C1C
    // 0x60003AE8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    ovl_stage_world1_C1C(rdram, ctx);
        goto after_0;
    // 0x60003AE8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x60003AEC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x60003AF0: jal         0x60000A60
    // 0x60003AF4: addiu       $a0, $zero, 0xBF9
    ctx->r4 = ADD32(0, 0XBF9);
    ovl_stage_world1_A60(rdram, ctx);
        goto after_1;
    // 0x60003AF4: addiu       $a0, $zero, 0xBF9
    ctx->r4 = ADD32(0, 0XBF9);
    after_1:
    // 0x60003AF8: jal         0x600009D0
    // 0x60003AFC: nop

    ovl_stage_world1_9D0(rdram, ctx);
        goto after_2;
    // 0x60003AFC: nop

    after_2:
    // 0x60003B00: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x60003B04: nop

    // 0x60003B08: andi        $t7, $t6, 0x800
    ctx->r15 = ctx->r14 & 0X800;
    // 0x60003B0C: beq         $t7, $zero, L_60003B30
    if (ctx->r15 == 0) {
        // 0x60003B10: nop
    
            goto L_60003B30;
    }
    // 0x60003B10: nop

L_60003B14:
    // 0x60003B14: jal         0x600009D0
    // 0x60003B18: nop

    ovl_stage_world1_9D0(rdram, ctx);
        goto after_3;
    // 0x60003B18: nop

    after_3:
    // 0x60003B1C: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x60003B20: nop

    // 0x60003B24: andi        $t9, $t8, 0x800
    ctx->r25 = ctx->r24 & 0X800;
    // 0x60003B28: bne         $t9, $zero, L_60003B14
    if (ctx->r25 != 0) {
        // 0x60003B2C: nop
    
            goto L_60003B14;
    }
    // 0x60003B2C: nop

L_60003B30:
    // 0x60003B30: jal         0x600009C4
    // 0x60003B34: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    ovl_stage_world1_9C4(rdram, ctx);
        goto after_4;
    // 0x60003B34: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_4:
    // 0x60003B38: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x60003B3C: nop

    // 0x60003B40: ori         $t1, $t0, 0x200
    ctx->r9 = ctx->r8 | 0X200;
    // 0x60003B44: jal         0x600009AC
    // 0x60003B48: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
    ovl_stage_world1_9AC(rdram, ctx);
        goto after_5;
    // 0x60003B48: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
    after_5:
    // 0x60003B4C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x60003B50: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x60003B54: jr          $ra
    // 0x60003B58: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x60003B58: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_stage_world1_3B5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003B5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60003B60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003B64: jal         0x60000C1C
    // 0x60003B68: nop

    ovl_stage_world1_C1C(rdram, ctx);
        goto after_0;
    // 0x60003B68: nop

    after_0:
    // 0x60003B6C: lw          $t6, 0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC);
    // 0x60003B70: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x60003B74: bne         $t6, $at, L_60003B90
    if (ctx->r14 != ctx->r1) {
        // 0x60003B78: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_60003B90;
    }
    // 0x60003B78: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003B7C: addiu       $a0, $a0, 0x3ADC
    ctx->r4 = ADD32(ctx->r4, 0X3ADC);
    // 0x60003B80: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60003B84: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60003B88: jal         0x60000994
    // 0x60003B8C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world1_994(rdram, ctx);
        goto after_1;
    // 0x60003B8C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
L_60003B90:
    // 0x60003B90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003B94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60003B98: jr          $ra
    // 0x60003B9C: nop

    return;
    // 0x60003B9C: nop

;}
RECOMP_FUNC void ovl_stage_world1_3BA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003BA0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x60003BA4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x60003BA8: jal         0x60000C1C
    // 0x60003BAC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    ovl_stage_world1_C1C(rdram, ctx);
        goto after_0;
    // 0x60003BAC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x60003BB0: lw          $v1, 0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8);
    // 0x60003BB4: addiu       $at, $zero, 0x8AF
    ctx->r1 = ADD32(0, 0X8AF);
    // 0x60003BB8: bne         $v1, $at, L_60003BD0
    if (ctx->r3 != ctx->r1) {
        // 0x60003BBC: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_60003BD0;
    }
    // 0x60003BBC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x60003BC0: jal         0x60000A60
    // 0x60003BC4: addiu       $a0, $zero, 0xAFB
    ctx->r4 = ADD32(0, 0XAFB);
    ovl_stage_world1_A60(rdram, ctx);
        goto after_1;
    // 0x60003BC4: addiu       $a0, $zero, 0xAFB
    ctx->r4 = ADD32(0, 0XAFB);
    after_1:
    // 0x60003BC8: b           L_60003BE4
    // 0x60003BCC: nop

        goto L_60003BE4;
    // 0x60003BCC: nop

L_60003BD0:
    // 0x60003BD0: addiu       $at, $zero, 0x84D
    ctx->r1 = ADD32(0, 0X84D);
    // 0x60003BD4: bne         $v1, $at, L_60003BE4
    if (ctx->r3 != ctx->r1) {
        // 0x60003BD8: nop
    
            goto L_60003BE4;
    }
    // 0x60003BD8: nop

    // 0x60003BDC: jal         0x60000A60
    // 0x60003BE0: addiu       $a0, $zero, 0xAFC
    ctx->r4 = ADD32(0, 0XAFC);
    ovl_stage_world1_A60(rdram, ctx);
        goto after_2;
    // 0x60003BE0: addiu       $a0, $zero, 0xAFC
    ctx->r4 = ADD32(0, 0XAFC);
    after_2:
L_60003BE4:
    // 0x60003BE4: jal         0x600009D0
    // 0x60003BE8: nop

    ovl_stage_world1_9D0(rdram, ctx);
        goto after_3;
    // 0x60003BE8: nop

    after_3:
    // 0x60003BEC: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x60003BF0: nop

    // 0x60003BF4: andi        $t7, $t6, 0x800
    ctx->r15 = ctx->r14 & 0X800;
    // 0x60003BF8: beq         $t7, $zero, L_60003C1C
    if (ctx->r15 == 0) {
        // 0x60003BFC: nop
    
            goto L_60003C1C;
    }
    // 0x60003BFC: nop

L_60003C00:
    // 0x60003C00: jal         0x600009D0
    // 0x60003C04: nop

    ovl_stage_world1_9D0(rdram, ctx);
        goto after_4;
    // 0x60003C04: nop

    after_4:
    // 0x60003C08: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x60003C0C: nop

    // 0x60003C10: andi        $t9, $t8, 0x800
    ctx->r25 = ctx->r24 & 0X800;
    // 0x60003C14: bne         $t9, $zero, L_60003C00
    if (ctx->r25 != 0) {
        // 0x60003C18: nop
    
            goto L_60003C00;
    }
    // 0x60003C18: nop

L_60003C1C:
    // 0x60003C1C: jal         0x600009C4
    // 0x60003C20: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    ovl_stage_world1_9C4(rdram, ctx);
        goto after_5;
    // 0x60003C20: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_5:
    // 0x60003C24: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x60003C28: nop

    // 0x60003C2C: ori         $t1, $t0, 0x200
    ctx->r9 = ctx->r8 | 0X200;
    // 0x60003C30: jal         0x600009AC
    // 0x60003C34: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
    ovl_stage_world1_9AC(rdram, ctx);
        goto after_6;
    // 0x60003C34: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
    after_6:
    // 0x60003C38: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x60003C3C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x60003C40: jr          $ra
    // 0x60003C44: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x60003C44: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_stage_world1_3C48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003C48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60003C4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003C50: jal         0x60000C1C
    // 0x60003C54: nop

    ovl_stage_world1_C1C(rdram, ctx);
        goto after_0;
    // 0x60003C54: nop

    after_0:
    // 0x60003C58: lw          $t6, 0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC);
    // 0x60003C5C: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x60003C60: bne         $t6, $at, L_60003C7C
    if (ctx->r14 != ctx->r1) {
        // 0x60003C64: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_60003C7C;
    }
    // 0x60003C64: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003C68: addiu       $a0, $a0, 0x3BA0
    ctx->r4 = ADD32(ctx->r4, 0X3BA0);
    // 0x60003C6C: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60003C70: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60003C74: jal         0x60000994
    // 0x60003C78: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world1_994(rdram, ctx);
        goto after_1;
    // 0x60003C78: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
L_60003C7C:
    // 0x60003C7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003C80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60003C84: jr          $ra
    // 0x60003C88: nop

    return;
    // 0x60003C88: nop

;}
RECOMP_FUNC void ovl_stage_world1_3C8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003C8C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x60003C90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003C94: jal         0x60000BB0
    // 0x60003C98: addiu       $a0, $zero, 0x189
    ctx->r4 = ADD32(0, 0X189);
    ovl_stage_world1_BB0(rdram, ctx);
        goto after_0;
    // 0x60003C98: addiu       $a0, $zero, 0x189
    ctx->r4 = ADD32(0, 0X189);
    after_0:
    // 0x60003C9C: bne         $v0, $zero, L_60003D5C
    if (ctx->r2 != 0) {
        // 0x60003CA0: addiu       $t6, $zero, 0x67
        ctx->r14 = ADD32(0, 0X67);
            goto L_60003D5C;
    }
    // 0x60003CA0: addiu       $t6, $zero, 0x67
    ctx->r14 = ADD32(0, 0X67);
    // 0x60003CA4: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x60003CA8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60003CAC: lui         $at, 0x41B8
    ctx->r1 = S32(0X41B8 << 16);
    // 0x60003CB0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60003CB4: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x60003CB8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x60003CBC: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x60003CC0: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x60003CC4: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x60003CC8: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x60003CCC: jal         0x60000E74
    // 0x60003CD0: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    ovl_stage_world1_E74(rdram, ctx);
        goto after_1;
    // 0x60003CD0: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x60003CD4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60003CD8: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    // 0x60003CDC: jal         0x600006C4
    // 0x60003CE0: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world1_6C4(rdram, ctx);
        goto after_2;
    // 0x60003CE0: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_2:
    // 0x60003CE4: jal         0x60000E74
    // 0x60003CE8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    ovl_stage_world1_E74(rdram, ctx);
        goto after_3;
    // 0x60003CE8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_3:
    // 0x60003CEC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60003CF0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x60003CF4: jal         0x600006C4
    // 0x60003CF8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world1_6C4(rdram, ctx);
        goto after_4;
    // 0x60003CF8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_4:
    // 0x60003CFC: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x60003D00: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x60003D04: ori         $t8, $t7, 0x4
    ctx->r24 = ctx->r15 | 0X4;
    // 0x60003D08: jal         0x60000E74
    // 0x60003D0C: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    ovl_stage_world1_E74(rdram, ctx);
        goto after_5;
    // 0x60003D0C: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    after_5:
    // 0x60003D10: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60003D14: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x60003D18: jal         0x600006C4
    // 0x60003D1C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world1_6C4(rdram, ctx);
        goto after_6;
    // 0x60003D1C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_6:
    // 0x60003D20: jal         0x60000E74
    // 0x60003D24: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    ovl_stage_world1_E74(rdram, ctx);
        goto after_7;
    // 0x60003D24: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    after_7:
    // 0x60003D28: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60003D2C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x60003D30: jal         0x600006C4
    // 0x60003D34: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world1_6C4(rdram, ctx);
        goto after_8;
    // 0x60003D34: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_8:
    // 0x60003D38: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x60003D3C: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    // 0x60003D40: ori         $t0, $t9, 0x4
    ctx->r8 = ctx->r25 | 0X4;
    // 0x60003D44: jal         0x60000E74
    // 0x60003D48: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    ovl_stage_world1_E74(rdram, ctx);
        goto after_9;
    // 0x60003D48: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    after_9:
    // 0x60003D4C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60003D50: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x60003D54: jal         0x600006C4
    // 0x60003D58: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world1_6C4(rdram, ctx);
        goto after_10;
    // 0x60003D58: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_10:
L_60003D5C:
    // 0x60003D5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003D60: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x60003D64: jr          $ra
    // 0x60003D68: nop

    return;
    // 0x60003D68: nop

;}
RECOMP_FUNC void ovl_stage_world1_3D6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003D6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60003D70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003D74: lui         $a1, 0x4468
    ctx->r5 = S32(0X4468 << 16);
    // 0x60003D78: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x60003D7C: addiu       $a0, $zero, 0x128
    ctx->r4 = ADD32(0, 0X128);
    // 0x60003D80: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x60003D84: jal         0x60000274
    // 0x60003D88: lui         $a3, 0x43BE
    ctx->r7 = S32(0X43BE << 16);
    ovl_stage_world1_274(rdram, ctx);
        goto after_0;
    // 0x60003D88: lui         $a3, 0x43BE
    ctx->r7 = S32(0X43BE << 16);
    after_0:
    // 0x60003D8C: jal         0x600009AC
    // 0x60003D90: nop

    ovl_stage_world1_9AC(rdram, ctx);
        goto after_1;
    // 0x60003D90: nop

    after_1:
    // 0x60003D94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003D98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60003D9C: jr          $ra
    // 0x60003DA0: nop

    return;
    // 0x60003DA0: nop

;}
RECOMP_FUNC void ovl_stage_world1_3DA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003DA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60003DA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003DAC: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003DB0: addiu       $a0, $a0, 0x3D6C
    ctx->r4 = ADD32(ctx->r4, 0X3D6C);
    // 0x60003DB4: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60003DB8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60003DBC: jal         0x60000994
    // 0x60003DC0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world1_994(rdram, ctx);
        goto after_0;
    // 0x60003DC0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x60003DC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003DC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60003DCC: jr          $ra
    // 0x60003DD0: nop

    return;
    // 0x60003DD0: nop

;}
RECOMP_FUNC void ovl_stage_world1_3DD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003DD4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60003DD8: slti        $at, $a0, 0x62
    ctx->r1 = SIGNED(ctx->r4) < 0X62 ? 1 : 0;
    // 0x60003DDC: bne         $at, $zero, L_60003E08
    if (ctx->r1 != 0) {
        // 0x60003DE0: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_60003E08;
    }
    // 0x60003DE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003DE4: addiu       $at, $zero, 0x62
    ctx->r1 = ADD32(0, 0X62);
    // 0x60003DE8: beq         $a0, $at, L_600040A4
    if (ctx->r4 == ctx->r1) {
        // 0x60003DEC: addiu       $at, $zero, 0x63
        ctx->r1 = ADD32(0, 0X63);
            goto L_600040A4;
    }
    // 0x60003DEC: addiu       $at, $zero, 0x63
    ctx->r1 = ADD32(0, 0X63);
    // 0x60003DF0: beq         $a0, $at, L_600040B4
    if (ctx->r4 == ctx->r1) {
        // 0x60003DF4: addiu       $at, $zero, 0xFF
        ctx->r1 = ADD32(0, 0XFF);
            goto L_600040B4;
    }
    // 0x60003DF4: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x60003DF8: beq         $a0, $at, L_600040C0
    if (ctx->r4 == ctx->r1) {
        // 0x60003DFC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600040C0;
    }
    // 0x60003DFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003E00: b           L_600040C0
    // 0x60003E04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600040C0;
    // 0x60003E04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003E08:
    // 0x60003E08: slti        $at, $a0, 0x61
    ctx->r1 = SIGNED(ctx->r4) < 0X61 ? 1 : 0;
    // 0x60003E0C: bne         $at, $zero, L_60003E24
    if (ctx->r1 != 0) {
        // 0x60003E10: addiu       $at, $zero, 0x61
        ctx->r1 = ADD32(0, 0X61);
            goto L_60003E24;
    }
    // 0x60003E10: addiu       $at, $zero, 0x61
    ctx->r1 = ADD32(0, 0X61);
    // 0x60003E14: beq         $a0, $at, L_60004094
    if (ctx->r4 == ctx->r1) {
        // 0x60003E18: nop
    
            goto L_60004094;
    }
    // 0x60003E18: nop

    // 0x60003E1C: b           L_600040C0
    // 0x60003E20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600040C0;
    // 0x60003E20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003E24:
    // 0x60003E24: slti        $at, $a0, 0x1C
    ctx->r1 = SIGNED(ctx->r4) < 0X1C ? 1 : 0;
    // 0x60003E28: bne         $at, $zero, L_60003E40
    if (ctx->r1 != 0) {
        // 0x60003E2C: addiu       $at, $zero, 0x60
        ctx->r1 = ADD32(0, 0X60);
            goto L_60003E40;
    }
    // 0x60003E2C: addiu       $at, $zero, 0x60
    ctx->r1 = ADD32(0, 0X60);
    // 0x60003E30: beq         $a0, $at, L_60004084
    if (ctx->r4 == ctx->r1) {
        // 0x60003E34: nop
    
            goto L_60004084;
    }
    // 0x60003E34: nop

    // 0x60003E38: b           L_600040C0
    // 0x60003E3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600040C0;
    // 0x60003E3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003E40:
    // 0x60003E40: sltiu       $at, $a0, 0x1C
    ctx->r1 = ctx->r4 < 0X1C ? 1 : 0;
    // 0x60003E44: beq         $at, $zero, L_600040BC
    if (ctx->r1 == 0) {
        // 0x60003E48: sll         $t6, $a0, 2
        ctx->r14 = S32(ctx->r4 << 2);
            goto L_600040BC;
    }
    // 0x60003E48: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x60003E4C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60003E50: addu        $at, $at, $t6
    gpr jr_addend_60003E5C = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x60003E54: lw          $t6, 0x419C($at)
    ctx->r14 = ADD32(ctx->r1, 0X419C);
    // 0x60003E58: nop

    // 0x60003E5C: jr          $t6
    // 0x60003E60: nop

    switch (jr_addend_60003E5C >> 2) {
        case 0: goto L_60003E64; break;
        case 1: goto L_60003E74; break;
        case 2: goto L_60003E84; break;
        case 3: goto L_60003E94; break;
        case 4: goto L_60003EA4; break;
        case 5: goto L_60003EB4; break;
        case 6: goto L_60003EC4; break;
        case 7: goto L_60003ED4; break;
        case 8: goto L_60003EE4; break;
        case 9: goto L_60003EF4; break;
        case 10: goto L_60003F04; break;
        case 11: goto L_60003F14; break;
        case 12: goto L_60003F24; break;
        case 13: goto L_60003F34; break;
        case 14: goto L_60003F44; break;
        case 15: goto L_60003F54; break;
        case 16: goto L_60003F64; break;
        case 17: goto L_60003F74; break;
        case 18: goto L_60003FB4; break;
        case 19: goto L_60003FC4; break;
        case 20: goto L_60003FEC; break;
        case 21: goto L_60004014; break;
        case 22: goto L_60004024; break;
        case 23: goto L_60004034; break;
        case 24: goto L_60004044; break;
        case 25: goto L_60004054; break;
        case 26: goto L_60004064; break;
        case 27: goto L_60004074; break;
        default: switch_error(__func__, 0x60003E5C, 0x6000419C);
    }
    // 0x60003E60: nop

L_60003E64:
    // 0x60003E64: jal         0x60001150
    // 0x60003E68: nop

    ovl_stage_world1_1150(rdram, ctx);
        goto after_0;
    // 0x60003E68: nop

    after_0:
    // 0x60003E6C: b           L_600040C0
    // 0x60003E70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600040C0;
    // 0x60003E70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003E74:
    // 0x60003E74: jal         0x60001198
    // 0x60003E78: nop

    ovl_stage_world1_1198(rdram, ctx);
        goto after_1;
    // 0x60003E78: nop

    after_1:
    // 0x60003E7C: b           L_600040C0
    // 0x60003E80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600040C0;
    // 0x60003E80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003E84:
    // 0x60003E84: jal         0x60002B50
    // 0x60003E88: nop

    ovl_stage_world1_2B50(rdram, ctx);
        goto after_2;
    // 0x60003E88: nop

    after_2:
    // 0x60003E8C: b           L_600040C0
    // 0x60003E90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600040C0;
    // 0x60003E90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003E94:
    // 0x60003E94: jal         0x60002BCC
    // 0x60003E98: nop

    ovl_stage_world1_2BCC(rdram, ctx);
        goto after_3;
    // 0x60003E98: nop

    after_3:
    // 0x60003E9C: b           L_600040C0
    // 0x60003EA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600040C0;
    // 0x60003EA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003EA4:
    // 0x60003EA4: jal         0x60002C1C
    // 0x60003EA8: nop

    ovl_stage_world1_2C1C(rdram, ctx);
        goto after_4;
    // 0x60003EA8: nop

    after_4:
    // 0x60003EAC: b           L_600040C0
    // 0x60003EB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600040C0;
    // 0x60003EB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003EB4:
    // 0x60003EB4: jal         0x60002CBC
    // 0x60003EB8: nop

    ovl_stage_world1_2CBC(rdram, ctx);
        goto after_5;
    // 0x60003EB8: nop

    after_5:
    // 0x60003EBC: b           L_600040C0
    // 0x60003EC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600040C0;
    // 0x60003EC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003EC4:
    // 0x60003EC4: jal         0x60002CDC
    // 0x60003EC8: nop

    ovl_stage_world1_2CDC(rdram, ctx);
        goto after_6;
    // 0x60003EC8: nop

    after_6:
    // 0x60003ECC: b           L_600040C0
    // 0x60003ED0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600040C0;
    // 0x60003ED0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003ED4:
    // 0x60003ED4: jal         0x60002ED0
    // 0x60003ED8: nop

    ovl_stage_world1_2ED0(rdram, ctx);
        goto after_7;
    // 0x60003ED8: nop

    after_7:
    // 0x60003EDC: b           L_600040C0
    // 0x60003EE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600040C0;
    // 0x60003EE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003EE4:
    // 0x60003EE4: jal         0x60002F80
    // 0x60003EE8: nop

    ovl_stage_world1_2F80(rdram, ctx);
        goto after_8;
    // 0x60003EE8: nop

    after_8:
    // 0x60003EEC: b           L_600040C0
    // 0x60003EF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600040C0;
    // 0x60003EF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003EF4:
    // 0x60003EF4: jal         0x60002FA0
    // 0x60003EF8: nop

    ovl_stage_world1_2FA0(rdram, ctx);
        goto after_9;
    // 0x60003EF8: nop

    after_9:
    // 0x60003EFC: b           L_600040C0
    // 0x60003F00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600040C0;
    // 0x60003F00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003F04:
    // 0x60003F04: jal         0x60002FC0
    // 0x60003F08: nop

    ovl_stage_world1_2FC0(rdram, ctx);
        goto after_10;
    // 0x60003F08: nop

    after_10:
    // 0x60003F0C: b           L_600040C0
    // 0x60003F10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600040C0;
    // 0x60003F10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003F14:
    // 0x60003F14: jal         0x6000318C
    // 0x60003F18: nop

    ovl_stage_world1_318C(rdram, ctx);
        goto after_11;
    // 0x60003F18: nop

    after_11:
    // 0x60003F1C: b           L_600040C0
    // 0x60003F20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600040C0;
    // 0x60003F20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003F24:
    // 0x60003F24: jal         0x60003374
    // 0x60003F28: nop

    ovl_stage_world1_3374(rdram, ctx);
        goto after_12;
    // 0x60003F28: nop

    after_12:
    // 0x60003F2C: b           L_600040C0
    // 0x60003F30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600040C0;
    // 0x60003F30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003F34:
    // 0x60003F34: jal         0x600033E8
    // 0x60003F38: nop

    ovl_stage_world1_33E8(rdram, ctx);
        goto after_13;
    // 0x60003F38: nop

    after_13:
    // 0x60003F3C: b           L_600040C0
    // 0x60003F40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600040C0;
    // 0x60003F40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003F44:
    // 0x60003F44: jal         0x6000349C
    // 0x60003F48: nop

    ovl_stage_world1_349C(rdram, ctx);
        goto after_14;
    // 0x60003F48: nop

    after_14:
    // 0x60003F4C: b           L_600040C0
    // 0x60003F50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600040C0;
    // 0x60003F50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003F54:
    // 0x60003F54: jal         0x6000354C
    // 0x60003F58: nop

    ovl_stage_world1_354C(rdram, ctx);
        goto after_15;
    // 0x60003F58: nop

    after_15:
    // 0x60003F5C: b           L_600040C0
    // 0x60003F60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600040C0;
    // 0x60003F60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003F64:
    // 0x60003F64: jal         0x6000364C
    // 0x60003F68: nop

    ovl_stage_world1_364C(rdram, ctx);
        goto after_16;
    // 0x60003F68: nop

    after_16:
    // 0x60003F6C: b           L_600040C0
    // 0x60003F70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600040C0;
    // 0x60003F70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003F74:
    // 0x60003F74: jal         0x60000C1C
    // 0x60003F78: nop

    ovl_stage_world1_C1C(rdram, ctx);
        goto after_17;
    // 0x60003F78: nop

    after_17:
    // 0x60003F7C: lw          $t7, 0xC($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XC);
    // 0x60003F80: nop

    // 0x60003F84: bne         $t7, $zero, L_60003FA4
    if (ctx->r15 != 0) {
        // 0x60003F88: nop
    
            goto L_60003FA4;
    }
    // 0x60003F88: nop

    // 0x60003F8C: jal         0x60000BB0
    // 0x60003F90: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    ovl_stage_world1_BB0(rdram, ctx);
        goto after_18;
    // 0x60003F90: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    after_18:
    // 0x60003F94: beq         $v0, $zero, L_60003FA4
    if (ctx->r2 == 0) {
        // 0x60003F98: nop
    
            goto L_60003FA4;
    }
    // 0x60003F98: nop

    // 0x60003F9C: jal         0x60000F50
    // 0x60003FA0: nop

    ovl_stage_world1_F50(rdram, ctx);
        goto after_19;
    // 0x60003FA0: nop

    after_19:
L_60003FA4:
    // 0x60003FA4: jal         0x600039A4
    // 0x60003FA8: nop

    ovl_stage_world1_39A4(rdram, ctx);
        goto after_20;
    // 0x60003FA8: nop

    after_20:
    // 0x60003FAC: b           L_600040C0
    // 0x60003FB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600040C0;
    // 0x60003FB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003FB4:
    // 0x60003FB4: jal         0x60003690
    // 0x60003FB8: nop

    ovl_stage_world1_3690(rdram, ctx);
        goto after_21;
    // 0x60003FB8: nop

    after_21:
    // 0x60003FBC: b           L_600040C0
    // 0x60003FC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600040C0;
    // 0x60003FC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003FC4:
    // 0x60003FC4: jal         0x60000BB0
    // 0x60003FC8: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    ovl_stage_world1_BB0(rdram, ctx);
        goto after_22;
    // 0x60003FC8: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    after_22:
    // 0x60003FCC: bne         $v0, $zero, L_60003FDC
    if (ctx->r2 != 0) {
        // 0x60003FD0: nop
    
            goto L_60003FDC;
    }
    // 0x60003FD0: nop

    // 0x60003FD4: jal         0x60001098
    // 0x60003FD8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world1_1098(rdram, ctx);
        goto after_23;
    // 0x60003FD8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_23:
L_60003FDC:
    // 0x60003FDC: jal         0x60000268
    // 0x60003FE0: nop

    ovl_stage_world1_268(rdram, ctx);
        goto after_24;
    // 0x60003FE0: nop

    after_24:
    // 0x60003FE4: b           L_600040C0
    // 0x60003FE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600040C0;
    // 0x60003FE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003FEC:
    // 0x60003FEC: jal         0x60000DE4
    // 0x60003FF0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world1_DE4(rdram, ctx);
        goto after_25;
    // 0x60003FF0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_25:
    // 0x60003FF4: jal         0x60000CC4
    // 0x60003FF8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_stage_world1_CC4(rdram, ctx);
        goto after_26;
    // 0x60003FF8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_26:
    // 0x60003FFC: jal         0x60000A6C
    // 0x60004000: nop

    ovl_stage_world1_A6C(rdram, ctx);
        goto after_27;
    // 0x60004000: nop

    after_27:
    // 0x60004004: jal         0x60000C7C
    // 0x60004008: nop

    ovl_stage_world1_C7C(rdram, ctx);
        goto after_28;
    // 0x60004008: nop

    after_28:
    // 0x6000400C: b           L_600040C0
    // 0x60004010: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600040C0;
    // 0x60004010: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60004014:
    // 0x60004014: jal         0x600036D8
    // 0x60004018: nop

    ovl_stage_world1_36D8(rdram, ctx);
        goto after_29;
    // 0x60004018: nop

    after_29:
    // 0x6000401C: b           L_600040C0
    // 0x60004020: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600040C0;
    // 0x60004020: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60004024:
    // 0x60004024: jal         0x60003C8C
    // 0x60004028: nop

    ovl_stage_world1_3C8C(rdram, ctx);
        goto after_30;
    // 0x60004028: nop

    after_30:
    // 0x6000402C: b           L_600040C0
    // 0x60004030: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600040C0;
    // 0x60004030: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60004034:
    // 0x60004034: jal         0x60003898
    // 0x60004038: nop

    ovl_stage_world1_3898(rdram, ctx);
        goto after_31;
    // 0x60004038: nop

    after_31:
    // 0x6000403C: b           L_600040C0
    // 0x60004040: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600040C0;
    // 0x60004040: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60004044:
    // 0x60004044: jal         0x60003944
    // 0x60004048: nop

    ovl_stage_world1_3944(rdram, ctx);
        goto after_32;
    // 0x60004048: nop

    after_32:
    // 0x6000404C: b           L_600040C0
    // 0x60004050: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600040C0;
    // 0x60004050: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60004054:
    // 0x60004054: jal         0x6000391C
    // 0x60004058: nop

    ovl_stage_world1_391C(rdram, ctx);
        goto after_33;
    // 0x60004058: nop

    after_33:
    // 0x6000405C: b           L_600040C0
    // 0x60004060: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600040C0;
    // 0x60004060: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60004064:
    // 0x60004064: jal         0x60003DA4
    // 0x60004068: nop

    ovl_stage_world1_3DA4(rdram, ctx);
        goto after_34;
    // 0x60004068: nop

    after_34:
    // 0x6000406C: b           L_600040C0
    // 0x60004070: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600040C0;
    // 0x60004070: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60004074:
    // 0x60004074: jal         0x60000268
    // 0x60004078: nop

    ovl_stage_world1_268(rdram, ctx);
        goto after_35;
    // 0x60004078: nop

    after_35:
    // 0x6000407C: b           L_600040C0
    // 0x60004080: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600040C0;
    // 0x60004080: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60004084:
    // 0x60004084: jal         0x60003C48
    // 0x60004088: nop

    ovl_stage_world1_3C48(rdram, ctx);
        goto after_36;
    // 0x60004088: nop

    after_36:
    // 0x6000408C: b           L_600040C0
    // 0x60004090: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600040C0;
    // 0x60004090: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60004094:
    // 0x60004094: jal         0x60003B5C
    // 0x60004098: nop

    ovl_stage_world1_3B5C(rdram, ctx);
        goto after_37;
    // 0x60004098: nop

    after_37:
    // 0x6000409C: b           L_600040C0
    // 0x600040A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600040C0;
    // 0x600040A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600040A4:
    // 0x600040A4: jal         0x60003A88
    // 0x600040A8: nop

    ovl_stage_world1_3A88(rdram, ctx);
        goto after_38;
    // 0x600040A8: nop

    after_38:
    // 0x600040AC: b           L_600040C0
    // 0x600040B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600040C0;
    // 0x600040B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600040B4:
    // 0x600040B4: jal         0x60000EE0
    // 0x600040B8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world1_EE0(rdram, ctx);
        goto after_39;
    // 0x600040B8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_39:
L_600040BC:
    // 0x600040BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600040C0:
    // 0x600040C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600040C4: jr          $ra
    // 0x600040C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x600040C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void ovl_stage_world6_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000000: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60000004: jr          $ra
    // 0x60000008: addiu       $v0, $v0, 0x56A0
    ctx->r2 = ADD32(ctx->r2, 0X56A0);
    return;
    // 0x60000008: addiu       $v0, $v0, 0x56A0
    ctx->r2 = ADD32(ctx->r2, 0X56A0);
    // 0x6000000C: nop

;}
RECOMP_FUNC void ovl_stage_world6_10(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world6_1C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world6_28(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world6_34(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world6_40(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world6_4C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world6_58(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world6_64(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world6_70(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world6_7C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world6_88(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world6_94(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world6_A0(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world6_AC(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world6_B8(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world6_C4(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world6_D0(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world6_DC(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world6_E8(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world6_F4(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world6_100(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world6_10C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world6_118(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world6_124(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world6_130(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world6_13C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world6_148(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world6_154(uint8_t* rdram, recomp_context* ctx) {
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
