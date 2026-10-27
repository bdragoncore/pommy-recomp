#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_stage_world4_3730(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003730: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60003734: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003738: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x6000373C: addiu       $a0, $a0, 0x365C
    ctx->r4 = ADD32(ctx->r4, 0X365C);
    // 0x60003740: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60003744: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60003748: jal         0x60000994
    // 0x6000374C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world4_994(rdram, ctx);
        goto after_0;
    // 0x6000374C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x60003750: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003754: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60003758: jr          $ra
    // 0x6000375C: nop

    return;
    // 0x6000375C: nop

;}
RECOMP_FUNC void ovl_stage_world4_3760(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003760: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x60003764: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x60003768: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x6000376C: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x60003770: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x60003774: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x60003778: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x6000377C: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x60003780: jal         0x60000E74
    // 0x60003784: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    ovl_stage_world4_E74(rdram, ctx);
        goto after_0;
    // 0x60003784: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    after_0:
    // 0x60003788: jal         0x60000C1C
    // 0x6000378C: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    ovl_stage_world4_C1C(rdram, ctx);
        goto after_1;
    // 0x6000378C: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    after_1:
    // 0x60003790: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x60003794: jal         0x60002DC0
    // 0x60003798: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world4_2DC0(rdram, ctx);
        goto after_2;
    // 0x60003798: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x6000379C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x600037A0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x600037A4: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x600037A8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x600037AC: jal         0x60002EA0
    // 0x600037B0: nop

    ovl_stage_world4_2EA0(rdram, ctx);
        goto after_3;
    // 0x600037B0: nop

    after_3:
    // 0x600037B4: jal         0x60000244
    // 0x600037B8: addiu       $a0, $zero, 0xD4
    ctx->r4 = ADD32(0, 0XD4);
    ovl_stage_world4_244(rdram, ctx);
        goto after_4;
    // 0x600037B8: addiu       $a0, $zero, 0xD4
    ctx->r4 = ADD32(0, 0XD4);
    after_4:
    // 0x600037BC: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x600037C0: jal         0x60000E68
    // 0x600037C4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world4_E68(rdram, ctx);
        goto after_5;
    // 0x600037C4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x600037C8: jal         0x600009C4
    // 0x600037CC: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_stage_world4_9C4(rdram, ctx);
        goto after_6;
    // 0x600037CC: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_6:
    // 0x600037D0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600037D4: jal         0x60002C10
    // 0x600037D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world4_2C10(rdram, ctx);
        goto after_7;
    // 0x600037D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x600037DC: jal         0x60000244
    // 0x600037E0: addiu       $a0, $zero, 0x165
    ctx->r4 = ADD32(0, 0X165);
    ovl_stage_world4_244(rdram, ctx);
        goto after_8;
    // 0x600037E0: addiu       $a0, $zero, 0x165
    ctx->r4 = ADD32(0, 0X165);
    after_8:
    // 0x600037E4: addiu       $s1, $sp, 0x3C
    ctx->r17 = ADD32(ctx->r29, 0X3C);
    // 0x600037E8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x600037EC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x600037F0: jal         0x600006C4
    // 0x600037F4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_9;
    // 0x600037F4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_9:
    // 0x600037F8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600037FC: lwc1        $f20, 0x73F8($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X73F8);
    // 0x60003800: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60003804: addiu       $s2, $zero, 0x3C
    ctx->r18 = ADD32(0, 0X3C);
L_60003808:
    // 0x60003808: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x6000380C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x60003810: sub.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f20.fl;
    // 0x60003814: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x60003818: swc1        $f6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f6.u32l;
    // 0x6000381C: jal         0x600006C4
    // 0x60003820: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_10;
    // 0x60003820: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_10:
    // 0x60003824: jal         0x600009D0
    // 0x60003828: nop

    ovl_stage_world4_9D0(rdram, ctx);
        goto after_11;
    // 0x60003828: nop

    after_11:
    // 0x6000382C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60003830: bne         $s0, $s2, L_60003808
    if (ctx->r16 != ctx->r18) {
        // 0x60003834: nop
    
            goto L_60003808;
    }
    // 0x60003834: nop

    // 0x60003838: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x6000383C: lui         $at, 0xFFFE
    ctx->r1 = S32(0XFFFE << 16);
    // 0x60003840: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x60003844: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x60003848: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x6000384C: addiu       $a0, $zero, 0x869
    ctx->r4 = ADD32(0, 0X869);
    // 0x60003850: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x60003854: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60003858: jal         0x60000C10
    // 0x6000385C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    ovl_stage_world4_C10(rdram, ctx);
        goto after_12;
    // 0x6000385C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    after_12:
    // 0x60003860: jal         0x600009AC
    // 0x60003864: nop

    ovl_stage_world4_9AC(rdram, ctx);
        goto after_13;
    // 0x60003864: nop

    after_13:
    // 0x60003868: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x6000386C: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x60003870: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x60003874: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x60003878: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x6000387C: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x60003880: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x60003884: jr          $ra
    // 0x60003888: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x60003888: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_stage_world4_388C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000388C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x60003890: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003894: jal         0x60000DE4
    // 0x60003898: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world4_DE4(rdram, ctx);
        goto after_0;
    // 0x60003898: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x6000389C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600038A0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x600038A4: jal         0x600006C4
    // 0x600038A8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_1;
    // 0x600038A8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x600038AC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x600038B0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x600038B4: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x600038B8: nop

    // 0x600038BC: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x600038C0: nop

    // 0x600038C4: bc1f        L_60003930
    if (!c1cs) {
        // 0x600038C8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003930;
    }
    // 0x600038C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600038CC: jal         0x60000BB0
    // 0x600038D0: addiu       $a0, $zero, 0x103
    ctx->r4 = ADD32(0, 0X103);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_2;
    // 0x600038D0: addiu       $a0, $zero, 0x103
    ctx->r4 = ADD32(0, 0X103);
    after_2:
    // 0x600038D4: beq         $v0, $zero, L_60003930
    if (ctx->r2 == 0) {
        // 0x600038D8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003930;
    }
    // 0x600038D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600038DC: jal         0x60000BA4
    // 0x600038E0: addiu       $a0, $zero, 0x103
    ctx->r4 = ADD32(0, 0X103);
    ovl_stage_world4_BA4(rdram, ctx);
        goto after_3;
    // 0x600038E0: addiu       $a0, $zero, 0x103
    ctx->r4 = ADD32(0, 0X103);
    after_3:
    // 0x600038E4: jal         0x60000DE4
    // 0x600038E8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world4_DE4(rdram, ctx);
        goto after_4;
    // 0x600038E8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_4:
    // 0x600038EC: jal         0x60000CC4
    // 0x600038F0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_stage_world4_CC4(rdram, ctx);
        goto after_5;
    // 0x600038F0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_5:
    // 0x600038F4: jal         0x60000A90
    // 0x600038F8: nop

    ovl_stage_world4_A90(rdram, ctx);
        goto after_6;
    // 0x600038F8: nop

    after_6:
    // 0x600038FC: jal         0x60000A6C
    // 0x60003900: nop

    ovl_stage_world4_A6C(rdram, ctx);
        goto after_7;
    // 0x60003900: nop

    after_7:
    // 0x60003904: lui         $a1, 0x409C
    ctx->r5 = S32(0X409C << 16);
    // 0x60003908: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x6000390C: jal         0x60001028
    // 0x60003910: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world4_1028(rdram, ctx);
        goto after_8;
    // 0x60003910: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_8:
    // 0x60003914: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003918: addiu       $a0, $a0, 0x3760
    ctx->r4 = ADD32(ctx->r4, 0X3760);
    // 0x6000391C: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60003920: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60003924: jal         0x60000994
    // 0x60003928: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world4_994(rdram, ctx);
        goto after_9;
    // 0x60003928: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_9:
    // 0x6000392C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003930:
    // 0x60003930: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x60003934: jr          $ra
    // 0x60003938: nop

    return;
    // 0x60003938: nop

;}
RECOMP_FUNC void ovl_stage_world4_393C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000393C: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x60003940: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x60003944: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x60003948: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x6000394C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x60003950: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x60003954: jal         0x60000C1C
    // 0x60003958: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    ovl_stage_world4_C1C(rdram, ctx);
        goto after_0;
    // 0x60003958: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x6000395C: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x60003960: jal         0x60000E74
    // 0x60003964: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    ovl_stage_world4_E74(rdram, ctx);
        goto after_1;
    // 0x60003964: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_1:
    // 0x60003968: addiu       $s1, $sp, 0x40
    ctx->r17 = ADD32(ctx->r29, 0X40);
    // 0x6000396C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x60003970: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60003974: jal         0x600006C4
    // 0x60003978: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_2;
    // 0x60003978: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_2:
    // 0x6000397C: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x60003980: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60003984: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x60003988: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x6000398C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x60003990: jal         0x60000E74
    // 0x60003994: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    ovl_stage_world4_E74(rdram, ctx);
        goto after_3;
    // 0x60003994: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x60003998: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x6000399C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x600039A0: jal         0x600006C4
    // 0x600039A4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_4;
    // 0x600039A4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_4:
    // 0x600039A8: jal         0x60000DE4
    // 0x600039AC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world4_DE4(rdram, ctx);
        goto after_5;
    // 0x600039AC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_5:
    // 0x600039B0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600039B4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x600039B8: jal         0x600006C4
    // 0x600039BC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_6;
    // 0x600039BC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_6:
    // 0x600039C0: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x600039C4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x600039C8: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x600039CC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600039D0: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x600039D4: jal         0x60000DE4
    // 0x600039D8: swc1        $f18, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f18.u32l;
    ovl_stage_world4_DE4(rdram, ctx);
        goto after_7;
    // 0x600039D8: swc1        $f18, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f18.u32l;
    after_7:
    // 0x600039DC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600039E0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x600039E4: jal         0x600006C4
    // 0x600039E8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_8;
    // 0x600039E8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_8:
    // 0x600039EC: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x600039F0: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x600039F4: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x600039F8: nop

    // 0x600039FC: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x60003A00: jal         0x60000A6C
    // 0x60003A04: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    ovl_stage_world4_A6C(rdram, ctx);
        goto after_9;
    // 0x60003A04: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    after_9:
    // 0x60003A08: jal         0x60002DC0
    // 0x60003A0C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world4_2DC0(rdram, ctx);
        goto after_10;
    // 0x60003A0C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_10:
    // 0x60003A10: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60003A14: jal         0x60002C10
    // 0x60003A18: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world4_2C10(rdram, ctx);
        goto after_11;
    // 0x60003A18: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_11:
    // 0x60003A1C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x60003A20: jal         0x60002C10
    // 0x60003A24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world4_2C10(rdram, ctx);
        goto after_12;
    // 0x60003A24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_12:
    // 0x60003A28: jal         0x60000244
    // 0x60003A2C: addiu       $a0, $zero, 0x165
    ctx->r4 = ADD32(0, 0X165);
    ovl_stage_world4_244(rdram, ctx);
        goto after_13;
    // 0x60003A2C: addiu       $a0, $zero, 0x165
    ctx->r4 = ADD32(0, 0X165);
    after_13:
    // 0x60003A30: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60003A34: lwc1        $f20, 0x73FC($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X73FC);
    // 0x60003A38: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60003A3C: addiu       $s2, $zero, 0x3C
    ctx->r18 = ADD32(0, 0X3C);
L_60003A40:
    // 0x60003A40: jal         0x60000E74
    // 0x60003A44: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    ovl_stage_world4_E74(rdram, ctx);
        goto after_14;
    // 0x60003A44: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_14:
    // 0x60003A48: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60003A4C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x60003A50: jal         0x600006C4
    // 0x60003A54: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_15;
    // 0x60003A54: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_15:
    // 0x60003A58: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x60003A5C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x60003A60: sub.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f20.fl;
    // 0x60003A64: jal         0x60000E74
    // 0x60003A68: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    ovl_stage_world4_E74(rdram, ctx);
        goto after_16;
    // 0x60003A68: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    after_16:
    // 0x60003A6C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60003A70: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x60003A74: jal         0x600006C4
    // 0x60003A78: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_17;
    // 0x60003A78: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_17:
    // 0x60003A7C: jal         0x600009D0
    // 0x60003A80: nop

    ovl_stage_world4_9D0(rdram, ctx);
        goto after_18;
    // 0x60003A80: nop

    after_18:
    // 0x60003A84: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60003A88: bne         $s0, $s2, L_60003A40
    if (ctx->r16 != ctx->r18) {
        // 0x60003A8C: nop
    
            goto L_60003A40;
    }
    // 0x60003A8C: nop

    // 0x60003A90: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60003A94: jal         0x60002C10
    // 0x60003A98: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world4_2C10(rdram, ctx);
        goto after_19;
    // 0x60003A98: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_19:
    // 0x60003A9C: jal         0x60000244
    // 0x60003AA0: addiu       $a0, $zero, 0xD4
    ctx->r4 = ADD32(0, 0XD4);
    ovl_stage_world4_244(rdram, ctx);
        goto after_20;
    // 0x60003AA0: addiu       $a0, $zero, 0xD4
    ctx->r4 = ADD32(0, 0XD4);
    after_20:
    // 0x60003AA4: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x60003AA8: jal         0x60000E68
    // 0x60003AAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world4_E68(rdram, ctx);
        goto after_21;
    // 0x60003AAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_21:
    // 0x60003AB0: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x60003AB4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x60003AB8: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x60003ABC: jal         0x60002EA0
    // 0x60003AC0: nop

    ovl_stage_world4_2EA0(rdram, ctx);
        goto after_22;
    // 0x60003AC0: nop

    after_22:
    // 0x60003AC4: jal         0x60000814
    // 0x60003AC8: nop

    ovl_stage_world4_814(rdram, ctx);
        goto after_23;
    // 0x60003AC8: nop

    after_23:
    // 0x60003ACC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x60003AD0: jal         0x60002C10
    // 0x60003AD4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world4_2C10(rdram, ctx);
        goto after_24;
    // 0x60003AD4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_24:
    // 0x60003AD8: jal         0x60000244
    // 0x60003ADC: addiu       $a0, $zero, 0xD4
    ctx->r4 = ADD32(0, 0XD4);
    ovl_stage_world4_244(rdram, ctx);
        goto after_25;
    // 0x60003ADC: addiu       $a0, $zero, 0xD4
    ctx->r4 = ADD32(0, 0XD4);
    after_25:
    // 0x60003AE0: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x60003AE4: jal         0x60000E68
    // 0x60003AE8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world4_E68(rdram, ctx);
        goto after_26;
    // 0x60003AE8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_26:
    // 0x60003AEC: jal         0x600009C4
    // 0x60003AF0: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_stage_world4_9C4(rdram, ctx);
        goto after_27;
    // 0x60003AF0: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_27:
    // 0x60003AF4: jal         0x60002DC0
    // 0x60003AF8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world4_2DC0(rdram, ctx);
        goto after_28;
    // 0x60003AF8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_28:
    // 0x60003AFC: jal         0x60000A78
    // 0x60003B00: nop

    ovl_stage_world4_A78(rdram, ctx);
        goto after_29;
    // 0x60003B00: nop

    after_29:
    // 0x60003B04: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x60003B08: lui         $at, 0xFFFE
    ctx->r1 = S32(0XFFFE << 16);
    // 0x60003B0C: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x60003B10: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x60003B14: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x60003B18: jal         0x600009AC
    // 0x60003B1C: sw          $t0, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r8;
    ovl_stage_world4_9AC(rdram, ctx);
        goto after_30;
    // 0x60003B1C: sw          $t0, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r8;
    after_30:
    // 0x60003B20: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x60003B24: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x60003B28: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x60003B2C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x60003B30: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x60003B34: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x60003B38: jr          $ra
    // 0x60003B3C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x60003B3C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_stage_world4_3B40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003B40: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x60003B44: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x60003B48: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x60003B4C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x60003B50: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x60003B54: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x60003B58: jal         0x60000C1C
    // 0x60003B5C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    ovl_stage_world4_C1C(rdram, ctx);
        goto after_0;
    // 0x60003B5C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x60003B60: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x60003B64: jal         0x60000E74
    // 0x60003B68: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    ovl_stage_world4_E74(rdram, ctx);
        goto after_1;
    // 0x60003B68: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_1:
    // 0x60003B6C: addiu       $s1, $sp, 0x40
    ctx->r17 = ADD32(ctx->r29, 0X40);
    // 0x60003B70: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x60003B74: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60003B78: jal         0x600006C4
    // 0x60003B7C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_2;
    // 0x60003B7C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_2:
    // 0x60003B80: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x60003B84: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60003B88: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x60003B8C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x60003B90: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x60003B94: jal         0x60000E74
    // 0x60003B98: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    ovl_stage_world4_E74(rdram, ctx);
        goto after_3;
    // 0x60003B98: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x60003B9C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60003BA0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x60003BA4: jal         0x600006C4
    // 0x60003BA8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_4;
    // 0x60003BA8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_4:
    // 0x60003BAC: jal         0x60000DE4
    // 0x60003BB0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world4_DE4(rdram, ctx);
        goto after_5;
    // 0x60003BB0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_5:
    // 0x60003BB4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60003BB8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x60003BBC: jal         0x600006C4
    // 0x60003BC0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_6;
    // 0x60003BC0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_6:
    // 0x60003BC4: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x60003BC8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x60003BCC: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x60003BD0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60003BD4: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x60003BD8: jal         0x60000DE4
    // 0x60003BDC: swc1        $f18, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f18.u32l;
    ovl_stage_world4_DE4(rdram, ctx);
        goto after_7;
    // 0x60003BDC: swc1        $f18, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f18.u32l;
    after_7:
    // 0x60003BE0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60003BE4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x60003BE8: jal         0x600006C4
    // 0x60003BEC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_8;
    // 0x60003BEC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_8:
    // 0x60003BF0: jal         0x60000A6C
    // 0x60003BF4: nop

    ovl_stage_world4_A6C(rdram, ctx);
        goto after_9;
    // 0x60003BF4: nop

    after_9:
    // 0x60003BF8: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x60003BFC: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x60003C00: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x60003C04: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x60003C08: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x60003C0C: jal         0x60002DC0
    // 0x60003C10: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    ovl_stage_world4_2DC0(rdram, ctx);
        goto after_10;
    // 0x60003C10: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    after_10:
    // 0x60003C14: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60003C18: jal         0x60002C10
    // 0x60003C1C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world4_2C10(rdram, ctx);
        goto after_11;
    // 0x60003C1C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_11:
    // 0x60003C20: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x60003C24: jal         0x60002C10
    // 0x60003C28: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world4_2C10(rdram, ctx);
        goto after_12;
    // 0x60003C28: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_12:
    // 0x60003C2C: jal         0x60000244
    // 0x60003C30: addiu       $a0, $zero, 0x165
    ctx->r4 = ADD32(0, 0X165);
    ovl_stage_world4_244(rdram, ctx);
        goto after_13;
    // 0x60003C30: addiu       $a0, $zero, 0x165
    ctx->r4 = ADD32(0, 0X165);
    after_13:
    // 0x60003C34: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60003C38: lwc1        $f20, 0x7400($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X7400);
    // 0x60003C3C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60003C40: addiu       $s2, $zero, 0x3C
    ctx->r18 = ADD32(0, 0X3C);
L_60003C44:
    // 0x60003C44: jal         0x60000E74
    // 0x60003C48: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    ovl_stage_world4_E74(rdram, ctx);
        goto after_14;
    // 0x60003C48: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_14:
    // 0x60003C4C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60003C50: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x60003C54: jal         0x600006C4
    // 0x60003C58: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_15;
    // 0x60003C58: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_15:
    // 0x60003C5C: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x60003C60: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x60003C64: sub.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f20.fl;
    // 0x60003C68: jal         0x60000E74
    // 0x60003C6C: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    ovl_stage_world4_E74(rdram, ctx);
        goto after_16;
    // 0x60003C6C: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    after_16:
    // 0x60003C70: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60003C74: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x60003C78: jal         0x600006C4
    // 0x60003C7C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_17;
    // 0x60003C7C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_17:
    // 0x60003C80: jal         0x600009D0
    // 0x60003C84: nop

    ovl_stage_world4_9D0(rdram, ctx);
        goto after_18;
    // 0x60003C84: nop

    after_18:
    // 0x60003C88: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60003C8C: bne         $s0, $s2, L_60003C44
    if (ctx->r16 != ctx->r18) {
        // 0x60003C90: nop
    
            goto L_60003C44;
    }
    // 0x60003C90: nop

    // 0x60003C94: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60003C98: jal         0x60002C10
    // 0x60003C9C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world4_2C10(rdram, ctx);
        goto after_19;
    // 0x60003C9C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_19:
    // 0x60003CA0: jal         0x60000244
    // 0x60003CA4: addiu       $a0, $zero, 0xD4
    ctx->r4 = ADD32(0, 0XD4);
    ovl_stage_world4_244(rdram, ctx);
        goto after_20;
    // 0x60003CA4: addiu       $a0, $zero, 0xD4
    ctx->r4 = ADD32(0, 0XD4);
    after_20:
    // 0x60003CA8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x60003CAC: jal         0x60000E68
    // 0x60003CB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world4_E68(rdram, ctx);
        goto after_21;
    // 0x60003CB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_21:
    // 0x60003CB4: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x60003CB8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x60003CBC: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x60003CC0: jal         0x60002EA0
    // 0x60003CC4: nop

    ovl_stage_world4_2EA0(rdram, ctx);
        goto after_22;
    // 0x60003CC4: nop

    after_22:
    // 0x60003CC8: jal         0x60000814
    // 0x60003CCC: nop

    ovl_stage_world4_814(rdram, ctx);
        goto after_23;
    // 0x60003CCC: nop

    after_23:
    // 0x60003CD0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x60003CD4: jal         0x60002C10
    // 0x60003CD8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world4_2C10(rdram, ctx);
        goto after_24;
    // 0x60003CD8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_24:
    // 0x60003CDC: jal         0x60000244
    // 0x60003CE0: addiu       $a0, $zero, 0xD4
    ctx->r4 = ADD32(0, 0XD4);
    ovl_stage_world4_244(rdram, ctx);
        goto after_25;
    // 0x60003CE0: addiu       $a0, $zero, 0xD4
    ctx->r4 = ADD32(0, 0XD4);
    after_25:
    // 0x60003CE4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x60003CE8: jal         0x60000E68
    // 0x60003CEC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world4_E68(rdram, ctx);
        goto after_26;
    // 0x60003CEC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_26:
    // 0x60003CF0: jal         0x600009C4
    // 0x60003CF4: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_stage_world4_9C4(rdram, ctx);
        goto after_27;
    // 0x60003CF4: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_27:
    // 0x60003CF8: jal         0x60002DC0
    // 0x60003CFC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world4_2DC0(rdram, ctx);
        goto after_28;
    // 0x60003CFC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_28:
    // 0x60003D00: jal         0x60000A78
    // 0x60003D04: nop

    ovl_stage_world4_A78(rdram, ctx);
        goto after_29;
    // 0x60003D04: nop

    after_29:
    // 0x60003D08: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x60003D0C: lui         $at, 0xFFFE
    ctx->r1 = S32(0XFFFE << 16);
    // 0x60003D10: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x60003D14: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x60003D18: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x60003D1C: jal         0x600009AC
    // 0x60003D20: sw          $t0, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r8;
    ovl_stage_world4_9AC(rdram, ctx);
        goto after_30;
    // 0x60003D20: sw          $t0, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r8;
    after_30:
    // 0x60003D24: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x60003D28: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x60003D2C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x60003D30: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x60003D34: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x60003D38: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x60003D3C: jr          $ra
    // 0x60003D40: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x60003D40: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_stage_world4_3D44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003D44: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x60003D48: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x60003D4C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x60003D50: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x60003D54: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x60003D58: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x60003D5C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x60003D60: jal         0x60000E74
    // 0x60003D64: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    ovl_stage_world4_E74(rdram, ctx);
        goto after_0;
    // 0x60003D64: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_0:
    // 0x60003D68: addiu       $s1, $sp, 0x38
    ctx->r17 = ADD32(ctx->r29, 0X38);
    // 0x60003D6C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x60003D70: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60003D74: jal         0x600006C4
    // 0x60003D78: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_1;
    // 0x60003D78: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_1:
    // 0x60003D7C: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x60003D80: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60003D84: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x60003D88: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x60003D8C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x60003D90: jal         0x60000E74
    // 0x60003D94: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    ovl_stage_world4_E74(rdram, ctx);
        goto after_2;
    // 0x60003D94: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x60003D98: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60003D9C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x60003DA0: jal         0x600006C4
    // 0x60003DA4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_3;
    // 0x60003DA4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_3:
    // 0x60003DA8: jal         0x600009C4
    // 0x60003DAC: addiu       $a0, $zero, 0x5F
    ctx->r4 = ADD32(0, 0X5F);
    ovl_stage_world4_9C4(rdram, ctx);
        goto after_4;
    // 0x60003DAC: addiu       $a0, $zero, 0x5F
    ctx->r4 = ADD32(0, 0X5F);
    after_4:
    // 0x60003DB0: jal         0x60000244
    // 0x60003DB4: addiu       $a0, $zero, 0x165
    ctx->r4 = ADD32(0, 0X165);
    ovl_stage_world4_244(rdram, ctx);
        goto after_5;
    // 0x60003DB4: addiu       $a0, $zero, 0x165
    ctx->r4 = ADD32(0, 0X165);
    after_5:
    // 0x60003DB8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60003DBC: lwc1        $f20, 0x7404($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X7404);
    // 0x60003DC0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60003DC4: addiu       $s2, $zero, 0x3C
    ctx->r18 = ADD32(0, 0X3C);
L_60003DC8:
    // 0x60003DC8: jal         0x60000E74
    // 0x60003DCC: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    ovl_stage_world4_E74(rdram, ctx);
        goto after_6;
    // 0x60003DCC: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_6:
    // 0x60003DD0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60003DD4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x60003DD8: jal         0x600006C4
    // 0x60003DDC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_7;
    // 0x60003DDC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_7:
    // 0x60003DE0: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x60003DE4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x60003DE8: sub.s       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f20.fl;
    // 0x60003DEC: jal         0x60000E74
    // 0x60003DF0: swc1        $f16, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f16.u32l;
    ovl_stage_world4_E74(rdram, ctx);
        goto after_8;
    // 0x60003DF0: swc1        $f16, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f16.u32l;
    after_8:
    // 0x60003DF4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60003DF8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x60003DFC: jal         0x600006C4
    // 0x60003E00: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_9;
    // 0x60003E00: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_9:
    // 0x60003E04: jal         0x600009D0
    // 0x60003E08: nop

    ovl_stage_world4_9D0(rdram, ctx);
        goto after_10;
    // 0x60003E08: nop

    after_10:
    // 0x60003E0C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60003E10: bne         $s0, $s2, L_60003DC8
    if (ctx->r16 != ctx->r18) {
        // 0x60003E14: nop
    
            goto L_60003DC8;
    }
    // 0x60003E14: nop

    // 0x60003E18: jal         0x600009AC
    // 0x60003E1C: nop

    ovl_stage_world4_9AC(rdram, ctx);
        goto after_11;
    // 0x60003E1C: nop

    after_11:
    // 0x60003E20: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x60003E24: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x60003E28: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x60003E2C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x60003E30: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x60003E34: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x60003E38: jr          $ra
    // 0x60003E3C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x60003E3C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_stage_world4_3E40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003E40: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x60003E44: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x60003E48: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x60003E4C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x60003E50: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x60003E54: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x60003E58: jal         0x60000C1C
    // 0x60003E5C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    ovl_stage_world4_C1C(rdram, ctx);
        goto after_0;
    // 0x60003E5C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x60003E60: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x60003E64: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x60003E68: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x60003E6C: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x60003E70: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x60003E74: jal         0x60002DC0
    // 0x60003E78: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world4_2DC0(rdram, ctx);
        goto after_1;
    // 0x60003E78: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x60003E7C: jal         0x60000244
    // 0x60003E80: addiu       $a0, $zero, 0xD4
    ctx->r4 = ADD32(0, 0XD4);
    ovl_stage_world4_244(rdram, ctx);
        goto after_2;
    // 0x60003E80: addiu       $a0, $zero, 0xD4
    ctx->r4 = ADD32(0, 0XD4);
    after_2:
    // 0x60003E84: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x60003E88: jal         0x60000E68
    // 0x60003E8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world4_E68(rdram, ctx);
        goto after_3;
    // 0x60003E8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x60003E90: jal         0x600009C4
    // 0x60003E94: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_stage_world4_9C4(rdram, ctx);
        goto after_4;
    // 0x60003E94: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_4:
    // 0x60003E98: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x60003E9C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x60003EA0: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x60003EA4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x60003EA8: jal         0x60002EA0
    // 0x60003EAC: nop

    ovl_stage_world4_2EA0(rdram, ctx);
        goto after_5;
    // 0x60003EAC: nop

    after_5:
    // 0x60003EB0: jal         0x60000244
    // 0x60003EB4: addiu       $a0, $zero, 0xD4
    ctx->r4 = ADD32(0, 0XD4);
    ovl_stage_world4_244(rdram, ctx);
        goto after_6;
    // 0x60003EB4: addiu       $a0, $zero, 0xD4
    ctx->r4 = ADD32(0, 0XD4);
    after_6:
    // 0x60003EB8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x60003EBC: jal         0x60000E68
    // 0x60003EC0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world4_E68(rdram, ctx);
        goto after_7;
    // 0x60003EC0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
    // 0x60003EC4: jal         0x600009C4
    // 0x60003EC8: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_stage_world4_9C4(rdram, ctx);
        goto after_8;
    // 0x60003EC8: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_8:
    // 0x60003ECC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60003ED0: jal         0x60002C10
    // 0x60003ED4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world4_2C10(rdram, ctx);
        goto after_9;
    // 0x60003ED4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x60003ED8: jal         0x60000244
    // 0x60003EDC: addiu       $a0, $zero, 0x165
    ctx->r4 = ADD32(0, 0X165);
    ovl_stage_world4_244(rdram, ctx);
        goto after_10;
    // 0x60003EDC: addiu       $a0, $zero, 0x165
    ctx->r4 = ADD32(0, 0X165);
    after_10:
    // 0x60003EE0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60003EE4: lwc1        $f20, 0x7408($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X7408);
    // 0x60003EE8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60003EEC: addiu       $s2, $zero, 0x3C
    ctx->r18 = ADD32(0, 0X3C);
    // 0x60003EF0: addiu       $s1, $sp, 0x3C
    ctx->r17 = ADD32(ctx->r29, 0X3C);
L_60003EF4:
    // 0x60003EF4: jal         0x60000E74
    // 0x60003EF8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    ovl_stage_world4_E74(rdram, ctx);
        goto after_11;
    // 0x60003EF8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_11:
    // 0x60003EFC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60003F00: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x60003F04: jal         0x600006C4
    // 0x60003F08: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_12;
    // 0x60003F08: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_12:
    // 0x60003F0C: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x60003F10: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x60003F14: add.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f20.fl;
    // 0x60003F18: jal         0x60000E74
    // 0x60003F1C: swc1        $f6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f6.u32l;
    ovl_stage_world4_E74(rdram, ctx);
        goto after_13;
    // 0x60003F1C: swc1        $f6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f6.u32l;
    after_13:
    // 0x60003F20: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60003F24: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x60003F28: jal         0x600006C4
    // 0x60003F2C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_14;
    // 0x60003F2C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_14:
    // 0x60003F30: jal         0x600009D0
    // 0x60003F34: nop

    ovl_stage_world4_9D0(rdram, ctx);
        goto after_15;
    // 0x60003F34: nop

    after_15:
    // 0x60003F38: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60003F3C: bne         $s0, $s2, L_60003EF4
    if (ctx->r16 != ctx->r18) {
        // 0x60003F40: nop
    
            goto L_60003EF4;
    }
    // 0x60003F40: nop

    // 0x60003F44: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x60003F48: lui         $at, 0xFFFE
    ctx->r1 = S32(0XFFFE << 16);
    // 0x60003F4C: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x60003F50: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x60003F54: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x60003F58: addiu       $a0, $zero, 0x86A
    ctx->r4 = ADD32(0, 0X86A);
    // 0x60003F5C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x60003F60: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60003F64: jal         0x60000C10
    // 0x60003F68: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    ovl_stage_world4_C10(rdram, ctx);
        goto after_16;
    // 0x60003F68: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    after_16:
    // 0x60003F6C: jal         0x600009AC
    // 0x60003F70: nop

    ovl_stage_world4_9AC(rdram, ctx);
        goto after_17;
    // 0x60003F70: nop

    after_17:
    // 0x60003F74: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x60003F78: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x60003F7C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x60003F80: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x60003F84: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x60003F88: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x60003F8C: jr          $ra
    // 0x60003F90: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x60003F90: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_stage_world4_3F94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003F94: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x60003F98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003F9C: jal         0x60000DE4
    // 0x60003FA0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world4_DE4(rdram, ctx);
        goto after_0;
    // 0x60003FA0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x60003FA4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60003FA8: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x60003FAC: jal         0x600006C4
    // 0x60003FB0: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_1;
    // 0x60003FB0: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x60003FB4: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x60003FB8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60003FBC: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x60003FC0: nop

    // 0x60003FC4: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x60003FC8: nop

    // 0x60003FCC: bc1f        L_60004050
    if (!c1cs) {
        // 0x60003FD0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60004050;
    }
    // 0x60003FD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003FD4: jal         0x60000BB0
    // 0x60003FD8: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_2;
    // 0x60003FD8: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    after_2:
    // 0x60003FDC: bne         $v0, $zero, L_60004050
    if (ctx->r2 != 0) {
        // 0x60003FE0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60004050;
    }
    // 0x60003FE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003FE4: jal         0x60000BB0
    // 0x60003FE8: addiu       $a0, $zero, 0x186
    ctx->r4 = ADD32(0, 0X186);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_3;
    // 0x60003FE8: addiu       $a0, $zero, 0x186
    ctx->r4 = ADD32(0, 0X186);
    after_3:
    // 0x60003FEC: beq         $v0, $zero, L_60004050
    if (ctx->r2 == 0) {
        // 0x60003FF0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60004050;
    }
    // 0x60003FF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003FF4: jal         0x60000B98
    // 0x60003FF8: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    ovl_stage_world4_B98(rdram, ctx);
        goto after_4;
    // 0x60003FF8: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    after_4:
    // 0x60003FFC: jal         0x60000DE4
    // 0x60004000: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world4_DE4(rdram, ctx);
        goto after_5;
    // 0x60004000: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_5:
    // 0x60004004: jal         0x60000CC4
    // 0x60004008: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_stage_world4_CC4(rdram, ctx);
        goto after_6;
    // 0x60004008: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_6:
    // 0x6000400C: jal         0x60000A90
    // 0x60004010: nop

    ovl_stage_world4_A90(rdram, ctx);
        goto after_7;
    // 0x60004010: nop

    after_7:
    // 0x60004014: jal         0x60000A6C
    // 0x60004018: nop

    ovl_stage_world4_A6C(rdram, ctx);
        goto after_8;
    // 0x60004018: nop

    after_8:
    // 0x6000401C: lui         $a1, 0x409C
    ctx->r5 = S32(0X409C << 16);
    // 0x60004020: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x60004024: jal         0x60001028
    // 0x60004028: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world4_1028(rdram, ctx);
        goto after_9;
    // 0x60004028: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_9:
    // 0x6000402C: jal         0x60000814
    // 0x60004030: nop

    ovl_stage_world4_814(rdram, ctx);
        goto after_10;
    // 0x60004030: nop

    after_10:
    // 0x60004034: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60004038: addiu       $a0, $a0, 0x3E40
    ctx->r4 = ADD32(ctx->r4, 0X3E40);
    // 0x6000403C: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60004040: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60004044: jal         0x60000994
    // 0x60004048: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world4_994(rdram, ctx);
        goto after_11;
    // 0x60004048: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_11:
    // 0x6000404C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60004050:
    // 0x60004050: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x60004054: jr          $ra
    // 0x60004058: nop

    return;
    // 0x60004058: nop

;}
RECOMP_FUNC void ovl_stage_world4_405C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000405C: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x60004060: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x60004064: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x60004068: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x6000406C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x60004070: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x60004074: jal         0x60000C1C
    // 0x60004078: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    ovl_stage_world4_C1C(rdram, ctx);
        goto after_0;
    // 0x60004078: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x6000407C: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x60004080: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x60004084: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x60004088: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x6000408C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x60004090: jal         0x60002DC0
    // 0x60004094: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world4_2DC0(rdram, ctx);
        goto after_1;
    // 0x60004094: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x60004098: jal         0x60000244
    // 0x6000409C: addiu       $a0, $zero, 0xD4
    ctx->r4 = ADD32(0, 0XD4);
    ovl_stage_world4_244(rdram, ctx);
        goto after_2;
    // 0x6000409C: addiu       $a0, $zero, 0xD4
    ctx->r4 = ADD32(0, 0XD4);
    after_2:
    // 0x600040A0: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x600040A4: jal         0x60000E68
    // 0x600040A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world4_E68(rdram, ctx);
        goto after_3;
    // 0x600040A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x600040AC: jal         0x600009C4
    // 0x600040B0: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_stage_world4_9C4(rdram, ctx);
        goto after_4;
    // 0x600040B0: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_4:
    // 0x600040B4: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x600040B8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x600040BC: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x600040C0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x600040C4: jal         0x60002EA0
    // 0x600040C8: nop

    ovl_stage_world4_2EA0(rdram, ctx);
        goto after_5;
    // 0x600040C8: nop

    after_5:
    // 0x600040CC: jal         0x60000244
    // 0x600040D0: addiu       $a0, $zero, 0xD4
    ctx->r4 = ADD32(0, 0XD4);
    ovl_stage_world4_244(rdram, ctx);
        goto after_6;
    // 0x600040D0: addiu       $a0, $zero, 0xD4
    ctx->r4 = ADD32(0, 0XD4);
    after_6:
    // 0x600040D4: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x600040D8: jal         0x60000E68
    // 0x600040DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world4_E68(rdram, ctx);
        goto after_7;
    // 0x600040DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
    // 0x600040E0: jal         0x600009C4
    // 0x600040E4: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_stage_world4_9C4(rdram, ctx);
        goto after_8;
    // 0x600040E4: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_8:
    // 0x600040E8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600040EC: jal         0x60002C10
    // 0x600040F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world4_2C10(rdram, ctx);
        goto after_9;
    // 0x600040F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x600040F4: jal         0x60000244
    // 0x600040F8: addiu       $a0, $zero, 0x165
    ctx->r4 = ADD32(0, 0X165);
    ovl_stage_world4_244(rdram, ctx);
        goto after_10;
    // 0x600040F8: addiu       $a0, $zero, 0x165
    ctx->r4 = ADD32(0, 0X165);
    after_10:
    // 0x600040FC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60004100: lwc1        $f20, 0x740C($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X740C);
    // 0x60004104: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60004108: addiu       $s2, $zero, 0x3C
    ctx->r18 = ADD32(0, 0X3C);
    // 0x6000410C: addiu       $s1, $sp, 0x3C
    ctx->r17 = ADD32(ctx->r29, 0X3C);
L_60004110:
    // 0x60004110: jal         0x60000E74
    // 0x60004114: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    ovl_stage_world4_E74(rdram, ctx);
        goto after_11;
    // 0x60004114: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_11:
    // 0x60004118: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x6000411C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x60004120: jal         0x600006C4
    // 0x60004124: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_12;
    // 0x60004124: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_12:
    // 0x60004128: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x6000412C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x60004130: add.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f20.fl;
    // 0x60004134: jal         0x60000E74
    // 0x60004138: swc1        $f6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f6.u32l;
    ovl_stage_world4_E74(rdram, ctx);
        goto after_13;
    // 0x60004138: swc1        $f6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f6.u32l;
    after_13:
    // 0x6000413C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60004140: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x60004144: jal         0x600006C4
    // 0x60004148: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_14;
    // 0x60004148: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_14:
    // 0x6000414C: jal         0x600009D0
    // 0x60004150: nop

    ovl_stage_world4_9D0(rdram, ctx);
        goto after_15;
    // 0x60004150: nop

    after_15:
    // 0x60004154: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60004158: bne         $s0, $s2, L_60004110
    if (ctx->r16 != ctx->r18) {
        // 0x6000415C: nop
    
            goto L_60004110;
    }
    // 0x6000415C: nop

    // 0x60004160: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x60004164: lui         $at, 0xFFFE
    ctx->r1 = S32(0XFFFE << 16);
    // 0x60004168: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x6000416C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x60004170: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x60004174: addiu       $a0, $zero, 0x868
    ctx->r4 = ADD32(0, 0X868);
    // 0x60004178: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x6000417C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60004180: jal         0x60000C10
    // 0x60004184: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    ovl_stage_world4_C10(rdram, ctx);
        goto after_16;
    // 0x60004184: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    after_16:
    // 0x60004188: jal         0x600009AC
    // 0x6000418C: nop

    ovl_stage_world4_9AC(rdram, ctx);
        goto after_17;
    // 0x6000418C: nop

    after_17:
    // 0x60004190: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x60004194: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x60004198: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x6000419C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x600041A0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x600041A4: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x600041A8: jr          $ra
    // 0x600041AC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x600041AC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_stage_world4_41B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600041B0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x600041B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600041B8: jal         0x60000DE4
    // 0x600041BC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world4_DE4(rdram, ctx);
        goto after_0;
    // 0x600041BC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x600041C0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600041C4: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x600041C8: jal         0x600006C4
    // 0x600041CC: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_1;
    // 0x600041CC: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x600041D0: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x600041D4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x600041D8: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x600041DC: nop

    // 0x600041E0: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x600041E4: nop

    // 0x600041E8: bc1f        L_6000425C
    if (!c1cs) {
        // 0x600041EC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_6000425C;
    }
    // 0x600041EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600041F0: jal         0x60000BB0
    // 0x600041F4: addiu       $a0, $zero, 0x105
    ctx->r4 = ADD32(0, 0X105);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_2;
    // 0x600041F4: addiu       $a0, $zero, 0x105
    ctx->r4 = ADD32(0, 0X105);
    after_2:
    // 0x600041F8: bne         $v0, $zero, L_6000425C
    if (ctx->r2 != 0) {
        // 0x600041FC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_6000425C;
    }
    // 0x600041FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004200: jal         0x60000B98
    // 0x60004204: addiu       $a0, $zero, 0x105
    ctx->r4 = ADD32(0, 0X105);
    ovl_stage_world4_B98(rdram, ctx);
        goto after_3;
    // 0x60004204: addiu       $a0, $zero, 0x105
    ctx->r4 = ADD32(0, 0X105);
    after_3:
    // 0x60004208: jal         0x60000DE4
    // 0x6000420C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world4_DE4(rdram, ctx);
        goto after_4;
    // 0x6000420C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_4:
    // 0x60004210: jal         0x60000CC4
    // 0x60004214: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_stage_world4_CC4(rdram, ctx);
        goto after_5;
    // 0x60004214: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_5:
    // 0x60004218: jal         0x60000A90
    // 0x6000421C: nop

    ovl_stage_world4_A90(rdram, ctx);
        goto after_6;
    // 0x6000421C: nop

    after_6:
    // 0x60004220: jal         0x60000A6C
    // 0x60004224: nop

    ovl_stage_world4_A6C(rdram, ctx);
        goto after_7;
    // 0x60004224: nop

    after_7:
    // 0x60004228: lui         $a1, 0x409C
    ctx->r5 = S32(0X409C << 16);
    // 0x6000422C: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x60004230: jal         0x60001028
    // 0x60004234: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world4_1028(rdram, ctx);
        goto after_8;
    // 0x60004234: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_8:
    // 0x60004238: jal         0x60000814
    // 0x6000423C: nop

    ovl_stage_world4_814(rdram, ctx);
        goto after_9;
    // 0x6000423C: nop

    after_9:
    // 0x60004240: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60004244: addiu       $a0, $a0, 0x405C
    ctx->r4 = ADD32(ctx->r4, 0X405C);
    // 0x60004248: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x6000424C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60004250: jal         0x60000994
    // 0x60004254: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world4_994(rdram, ctx);
        goto after_10;
    // 0x60004254: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_10:
    // 0x60004258: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000425C:
    // 0x6000425C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x60004260: jr          $ra
    // 0x60004264: nop

    return;
    // 0x60004264: nop

;}
RECOMP_FUNC void ovl_stage_world4_4268(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004268: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x6000426C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60004270: jal         0x60000C1C
    // 0x60004274: nop

    ovl_stage_world4_C1C(rdram, ctx);
        goto after_0;
    // 0x60004274: nop

    after_0:
    // 0x60004278: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x6000427C: jal         0x60000BB0
    // 0x60004280: addiu       $a0, $zero, 0x186
    ctx->r4 = ADD32(0, 0X186);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_1;
    // 0x60004280: addiu       $a0, $zero, 0x186
    ctx->r4 = ADD32(0, 0X186);
    after_1:
    // 0x60004284: bne         $v0, $zero, L_60004298
    if (ctx->r2 != 0) {
        // 0x60004288: lw          $t6, 0x1C($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X1C);
            goto L_60004298;
    }
    // 0x60004288: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x6000428C: jal         0x60000EEC
    // 0x60004290: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    ovl_stage_world4_EEC(rdram, ctx);
        goto after_2;
    // 0x60004290: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_2:
    // 0x60004294: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
L_60004298:
    // 0x60004298: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x6000429C: lw          $v0, 0xC($t6)
    ctx->r2 = MEM_W(ctx->r14, 0XC);
    // 0x600042A0: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600042A4: bne         $v0, $at, L_600042C4
    if (ctx->r2 != ctx->r1) {
        // 0x600042A8: addiu       $a0, $a0, 0x393C
        ctx->r4 = ADD32(ctx->r4, 0X393C);
            goto L_600042C4;
    }
    // 0x600042A8: addiu       $a0, $a0, 0x393C
    ctx->r4 = ADD32(ctx->r4, 0X393C);
    // 0x600042AC: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x600042B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x600042B4: jal         0x60000994
    // 0x600042B8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world4_994(rdram, ctx);
        goto after_3;
    // 0x600042B8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x600042BC: b           L_6000431C
    // 0x600042C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_6000431C;
    // 0x600042C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600042C4:
    // 0x600042C4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x600042C8: bne         $v0, $at, L_600042EC
    if (ctx->r2 != ctx->r1) {
        // 0x600042CC: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_600042EC;
    }
    // 0x600042CC: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600042D0: addiu       $a0, $a0, 0x3B40
    ctx->r4 = ADD32(ctx->r4, 0X3B40);
    // 0x600042D4: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x600042D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x600042DC: jal         0x60000994
    // 0x600042E0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world4_994(rdram, ctx);
        goto after_4;
    // 0x600042E0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x600042E4: b           L_6000431C
    // 0x600042E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_6000431C;
    // 0x600042E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600042EC:
    // 0x600042EC: bne         $v0, $zero, L_6000431C
    if (ctx->r2 != 0) {
        // 0x600042F0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_6000431C;
    }
    // 0x600042F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600042F4: jal         0x60000BB0
    // 0x600042F8: addiu       $a0, $zero, 0x186
    ctx->r4 = ADD32(0, 0X186);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_5;
    // 0x600042F8: addiu       $a0, $zero, 0x186
    ctx->r4 = ADD32(0, 0X186);
    after_5:
    // 0x600042FC: beq         $v0, $zero, L_60004318
    if (ctx->r2 == 0) {
        // 0x60004300: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_60004318;
    }
    // 0x60004300: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60004304: addiu       $a0, $a0, 0x3D44
    ctx->r4 = ADD32(ctx->r4, 0X3D44);
    // 0x60004308: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x6000430C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60004310: jal         0x60000994
    // 0x60004314: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world4_994(rdram, ctx);
        goto after_6;
    // 0x60004314: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_6:
L_60004318:
    // 0x60004318: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000431C:
    // 0x6000431C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x60004320: jr          $ra
    // 0x60004324: nop

    return;
    // 0x60004324: nop

;}
RECOMP_FUNC void ovl_stage_world4_4328(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004328: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x6000432C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x60004330: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x60004334: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x60004338: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x6000433C: jal         0x60000C1C
    // 0x60004340: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    ovl_stage_world4_C1C(rdram, ctx);
        goto after_0;
    // 0x60004340: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x60004344: jal         0x60000A6C
    // 0x60004348: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    ovl_stage_world4_A6C(rdram, ctx);
        goto after_1;
    // 0x60004348: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    after_1:
    // 0x6000434C: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x60004350: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x60004354: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x60004358: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x6000435C: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x60004360: jal         0x60002DC0
    // 0x60004364: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    ovl_stage_world4_2DC0(rdram, ctx);
        goto after_2;
    // 0x60004364: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    after_2:
    // 0x60004368: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x6000436C: jal         0x60002C10
    // 0x60004370: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world4_2C10(rdram, ctx);
        goto after_3;
    // 0x60004370: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x60004374: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x60004378: jal         0x60002C10
    // 0x6000437C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world4_2C10(rdram, ctx);
        goto after_4;
    // 0x6000437C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x60004380: jal         0x60000DE4
    // 0x60004384: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world4_DE4(rdram, ctx);
        goto after_5;
    // 0x60004384: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_5:
    // 0x60004388: addiu       $s1, $sp, 0x38
    ctx->r17 = ADD32(ctx->r29, 0X38);
    // 0x6000438C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x60004390: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60004394: jal         0x600006C4
    // 0x60004398: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_6;
    // 0x60004398: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_6:
    // 0x6000439C: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x600043A0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x600043A4: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x600043A8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600043AC: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x600043B0: jal         0x60000DE4
    // 0x600043B4: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    ovl_stage_world4_DE4(rdram, ctx);
        goto after_7;
    // 0x600043B4: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    after_7:
    // 0x600043B8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600043BC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x600043C0: jal         0x600006C4
    // 0x600043C4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_8;
    // 0x600043C4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_8:
    // 0x600043C8: jal         0x60000DE4
    // 0x600043CC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world4_DE4(rdram, ctx);
        goto after_9;
    // 0x600043CC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_9:
    // 0x600043D0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600043D4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x600043D8: jal         0x600006C4
    // 0x600043DC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_10;
    // 0x600043DC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_10:
    // 0x600043E0: jal         0x60000244
    // 0x600043E4: addiu       $a0, $zero, 0x165
    ctx->r4 = ADD32(0, 0X165);
    ovl_stage_world4_244(rdram, ctx);
        goto after_11;
    // 0x600043E4: addiu       $a0, $zero, 0x165
    ctx->r4 = ADD32(0, 0X165);
    after_11:
    // 0x600043E8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600043EC: lwc1        $f20, 0x7410($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X7410);
    // 0x600043F0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_600043F4:
    // 0x600043F4: jal         0x60000E74
    // 0x600043F8: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    ovl_stage_world4_E74(rdram, ctx);
        goto after_12;
    // 0x600043F8: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    after_12:
    // 0x600043FC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60004400: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x60004404: jal         0x600006C4
    // 0x60004408: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_13;
    // 0x60004408: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_13:
    // 0x6000440C: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x60004410: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x60004414: add.s       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f20.fl;
    // 0x60004418: jal         0x60000E74
    // 0x6000441C: swc1        $f16, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f16.u32l;
    ovl_stage_world4_E74(rdram, ctx);
        goto after_14;
    // 0x6000441C: swc1        $f16, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f16.u32l;
    after_14:
    // 0x60004420: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60004424: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x60004428: jal         0x600006C4
    // 0x6000442C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_15;
    // 0x6000442C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_15:
    // 0x60004430: jal         0x600009D0
    // 0x60004434: nop

    ovl_stage_world4_9D0(rdram, ctx);
        goto after_16;
    // 0x60004434: nop

    after_16:
    // 0x60004438: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x6000443C: slti        $at, $s0, 0x3C
    ctx->r1 = SIGNED(ctx->r16) < 0X3C ? 1 : 0;
    // 0x60004440: bne         $at, $zero, L_600043F4
    if (ctx->r1 != 0) {
        // 0x60004444: nop
    
            goto L_600043F4;
    }
    // 0x60004444: nop

    // 0x60004448: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x6000444C: jal         0x60002C10
    // 0x60004450: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world4_2C10(rdram, ctx);
        goto after_17;
    // 0x60004450: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_17:
    // 0x60004454: jal         0x60000244
    // 0x60004458: addiu       $a0, $zero, 0xD4
    ctx->r4 = ADD32(0, 0XD4);
    ovl_stage_world4_244(rdram, ctx);
        goto after_18;
    // 0x60004458: addiu       $a0, $zero, 0xD4
    ctx->r4 = ADD32(0, 0XD4);
    after_18:
    // 0x6000445C: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x60004460: jal         0x60000E68
    // 0x60004464: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world4_E68(rdram, ctx);
        goto after_19;
    // 0x60004464: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_19:
    // 0x60004468: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x6000446C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x60004470: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x60004474: jal         0x60002EA0
    // 0x60004478: nop

    ovl_stage_world4_2EA0(rdram, ctx);
        goto after_20;
    // 0x60004478: nop

    after_20:
    // 0x6000447C: jal         0x60000814
    // 0x60004480: nop

    ovl_stage_world4_814(rdram, ctx);
        goto after_21;
    // 0x60004480: nop

    after_21:
    // 0x60004484: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x60004488: jal         0x60002C10
    // 0x6000448C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world4_2C10(rdram, ctx);
        goto after_22;
    // 0x6000448C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_22:
    // 0x60004490: jal         0x60000244
    // 0x60004494: addiu       $a0, $zero, 0xD4
    ctx->r4 = ADD32(0, 0XD4);
    ovl_stage_world4_244(rdram, ctx);
        goto after_23;
    // 0x60004494: addiu       $a0, $zero, 0xD4
    ctx->r4 = ADD32(0, 0XD4);
    after_23:
    // 0x60004498: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x6000449C: jal         0x60000E68
    // 0x600044A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world4_E68(rdram, ctx);
        goto after_24;
    // 0x600044A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_24:
    // 0x600044A4: jal         0x600009C4
    // 0x600044A8: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_stage_world4_9C4(rdram, ctx);
        goto after_25;
    // 0x600044A8: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_25:
    // 0x600044AC: jal         0x60000244
    // 0x600044B0: addiu       $a0, $zero, 0x165
    ctx->r4 = ADD32(0, 0X165);
    ovl_stage_world4_244(rdram, ctx);
        goto after_26;
    // 0x600044B0: addiu       $a0, $zero, 0x165
    ctx->r4 = ADD32(0, 0X165);
    after_26:
    // 0x600044B4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_600044B8:
    // 0x600044B8: jal         0x60000E74
    // 0x600044BC: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    ovl_stage_world4_E74(rdram, ctx);
        goto after_27;
    // 0x600044BC: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    after_27:
    // 0x600044C0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600044C4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x600044C8: jal         0x600006C4
    // 0x600044CC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_28;
    // 0x600044CC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_28:
    // 0x600044D0: lwc1        $f18, 0x3C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x600044D4: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x600044D8: sub.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f20.fl;
    // 0x600044DC: jal         0x60000E74
    // 0x600044E0: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    ovl_stage_world4_E74(rdram, ctx);
        goto after_29;
    // 0x600044E0: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    after_29:
    // 0x600044E4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600044E8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x600044EC: jal         0x600006C4
    // 0x600044F0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_30;
    // 0x600044F0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_30:
    // 0x600044F4: jal         0x600009D0
    // 0x600044F8: nop

    ovl_stage_world4_9D0(rdram, ctx);
        goto after_31;
    // 0x600044F8: nop

    after_31:
    // 0x600044FC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60004500: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x60004504: bne         $s0, $at, L_600044B8
    if (ctx->r16 != ctx->r1) {
        // 0x60004508: nop
    
            goto L_600044B8;
    }
    // 0x60004508: nop

    // 0x6000450C: jal         0x60002DC0
    // 0x60004510: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world4_2DC0(rdram, ctx);
        goto after_32;
    // 0x60004510: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_32:
    // 0x60004514: jal         0x60000A78
    // 0x60004518: nop

    ovl_stage_world4_A78(rdram, ctx);
        goto after_33;
    // 0x60004518: nop

    after_33:
    // 0x6000451C: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x60004520: lui         $at, 0xFFFE
    ctx->r1 = S32(0XFFFE << 16);
    // 0x60004524: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x60004528: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x6000452C: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x60004530: jal         0x600009AC
    // 0x60004534: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    ovl_stage_world4_9AC(rdram, ctx);
        goto after_34;
    // 0x60004534: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    after_34:
    // 0x60004538: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x6000453C: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x60004540: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x60004544: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x60004548: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x6000454C: jr          $ra
    // 0x60004550: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x60004550: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_stage_world4_4554(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004554: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60004558: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x6000455C: jal         0x60000C1C
    // 0x60004560: nop

    ovl_stage_world4_C1C(rdram, ctx);
        goto after_0;
    // 0x60004560: nop

    after_0:
    // 0x60004564: lw          $t6, 0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC);
    // 0x60004568: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x6000456C: bne         $t6, $at, L_60004588
    if (ctx->r14 != ctx->r1) {
        // 0x60004570: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_60004588;
    }
    // 0x60004570: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60004574: addiu       $a0, $a0, 0x4328
    ctx->r4 = ADD32(ctx->r4, 0X4328);
    // 0x60004578: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x6000457C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60004580: jal         0x60000994
    // 0x60004584: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world4_994(rdram, ctx);
        goto after_1;
    // 0x60004584: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
L_60004588:
    // 0x60004588: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000458C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60004590: jr          $ra
    // 0x60004594: nop

    return;
    // 0x60004594: nop

;}
RECOMP_FUNC void ovl_stage_world4_4598(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004598: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x6000459C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x600045A0: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x600045A4: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x600045A8: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x600045AC: jal         0x60000C1C
    // 0x600045B0: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    ovl_stage_world4_C1C(rdram, ctx);
        goto after_0;
    // 0x600045B0: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x600045B4: jal         0x60000A6C
    // 0x600045B8: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    ovl_stage_world4_A6C(rdram, ctx);
        goto after_1;
    // 0x600045B8: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    after_1:
    // 0x600045BC: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x600045C0: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x600045C4: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x600045C8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x600045CC: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x600045D0: jal         0x60002DC0
    // 0x600045D4: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    ovl_stage_world4_2DC0(rdram, ctx);
        goto after_2;
    // 0x600045D4: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    after_2:
    // 0x600045D8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600045DC: jal         0x60002C10
    // 0x600045E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world4_2C10(rdram, ctx);
        goto after_3;
    // 0x600045E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x600045E4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x600045E8: jal         0x60002C10
    // 0x600045EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world4_2C10(rdram, ctx);
        goto after_4;
    // 0x600045EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x600045F0: jal         0x60000DE4
    // 0x600045F4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world4_DE4(rdram, ctx);
        goto after_5;
    // 0x600045F4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_5:
    // 0x600045F8: addiu       $s1, $sp, 0x34
    ctx->r17 = ADD32(ctx->r29, 0X34);
    // 0x600045FC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x60004600: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60004604: jal         0x600006C4
    // 0x60004608: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_6;
    // 0x60004608: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_6:
    // 0x6000460C: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x60004610: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60004614: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x60004618: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x6000461C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x60004620: jal         0x60000DE4
    // 0x60004624: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    ovl_stage_world4_DE4(rdram, ctx);
        goto after_7;
    // 0x60004624: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    after_7:
    // 0x60004628: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x6000462C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x60004630: jal         0x600006C4
    // 0x60004634: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_8;
    // 0x60004634: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_8:
    // 0x60004638: jal         0x60000DE4
    // 0x6000463C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world4_DE4(rdram, ctx);
        goto after_9;
    // 0x6000463C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_9:
    // 0x60004640: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60004644: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x60004648: jal         0x600006C4
    // 0x6000464C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_10;
    // 0x6000464C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_10:
    // 0x60004650: jal         0x60000244
    // 0x60004654: addiu       $a0, $zero, 0x165
    ctx->r4 = ADD32(0, 0X165);
    ovl_stage_world4_244(rdram, ctx);
        goto after_11;
    // 0x60004654: addiu       $a0, $zero, 0x165
    ctx->r4 = ADD32(0, 0X165);
    after_11:
    // 0x60004658: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000465C: lwc1        $f20, 0x7414($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X7414);
    // 0x60004660: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_60004664:
    // 0x60004664: jal         0x60000E74
    // 0x60004668: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    ovl_stage_world4_E74(rdram, ctx);
        goto after_12;
    // 0x60004668: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_12:
    // 0x6000466C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60004670: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x60004674: jal         0x600006C4
    // 0x60004678: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_13;
    // 0x60004678: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_13:
    // 0x6000467C: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x60004680: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x60004684: add.s       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f20.fl;
    // 0x60004688: jal         0x60000E74
    // 0x6000468C: swc1        $f16, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f16.u32l;
    ovl_stage_world4_E74(rdram, ctx);
        goto after_14;
    // 0x6000468C: swc1        $f16, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f16.u32l;
    after_14:
    // 0x60004690: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60004694: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x60004698: jal         0x600006C4
    // 0x6000469C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_15;
    // 0x6000469C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_15:
    // 0x600046A0: jal         0x600009D0
    // 0x600046A4: nop

    ovl_stage_world4_9D0(rdram, ctx);
        goto after_16;
    // 0x600046A4: nop

    after_16:
    // 0x600046A8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x600046AC: slti        $at, $s0, 0x3C
    ctx->r1 = SIGNED(ctx->r16) < 0X3C ? 1 : 0;
    // 0x600046B0: bne         $at, $zero, L_60004664
    if (ctx->r1 != 0) {
        // 0x600046B4: nop
    
            goto L_60004664;
    }
    // 0x600046B4: nop

    // 0x600046B8: jal         0x60000244
    // 0x600046BC: addiu       $a0, $zero, 0xD4
    ctx->r4 = ADD32(0, 0XD4);
    ovl_stage_world4_244(rdram, ctx);
        goto after_17;
    // 0x600046BC: addiu       $a0, $zero, 0xD4
    ctx->r4 = ADD32(0, 0XD4);
    after_17:
    // 0x600046C0: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x600046C4: jal         0x60000E68
    // 0x600046C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world4_E68(rdram, ctx);
        goto after_18;
    // 0x600046C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_18:
    // 0x600046CC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600046D0: jal         0x60002C10
    // 0x600046D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world4_2C10(rdram, ctx);
        goto after_19;
    // 0x600046D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_19:
    // 0x600046D8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x600046DC: jal         0x60002C10
    // 0x600046E0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world4_2C10(rdram, ctx);
        goto after_20;
    // 0x600046E0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_20:
    // 0x600046E4: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x600046E8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x600046EC: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x600046F0: jal         0x60002EA0
    // 0x600046F4: nop

    ovl_stage_world4_2EA0(rdram, ctx);
        goto after_21;
    // 0x600046F4: nop

    after_21:
    // 0x600046F8: jal         0x60000814
    // 0x600046FC: nop

    ovl_stage_world4_814(rdram, ctx);
        goto after_22;
    // 0x600046FC: nop

    after_22:
    // 0x60004700: jal         0x60000244
    // 0x60004704: addiu       $a0, $zero, 0xD4
    ctx->r4 = ADD32(0, 0XD4);
    ovl_stage_world4_244(rdram, ctx);
        goto after_23;
    // 0x60004704: addiu       $a0, $zero, 0xD4
    ctx->r4 = ADD32(0, 0XD4);
    after_23:
    // 0x60004708: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x6000470C: jal         0x60000E68
    // 0x60004710: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world4_E68(rdram, ctx);
        goto after_24;
    // 0x60004710: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_24:
    // 0x60004714: jal         0x600009C4
    // 0x60004718: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_stage_world4_9C4(rdram, ctx);
        goto after_25;
    // 0x60004718: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_25:
    // 0x6000471C: jal         0x60000244
    // 0x60004720: addiu       $a0, $zero, 0x165
    ctx->r4 = ADD32(0, 0X165);
    ovl_stage_world4_244(rdram, ctx);
        goto after_26;
    // 0x60004720: addiu       $a0, $zero, 0x165
    ctx->r4 = ADD32(0, 0X165);
    after_26:
    // 0x60004724: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_60004728:
    // 0x60004728: jal         0x60000E74
    // 0x6000472C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    ovl_stage_world4_E74(rdram, ctx);
        goto after_27;
    // 0x6000472C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_27:
    // 0x60004730: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60004734: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x60004738: jal         0x600006C4
    // 0x6000473C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_28;
    // 0x6000473C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_28:
    // 0x60004740: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x60004744: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x60004748: sub.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f20.fl;
    // 0x6000474C: jal         0x60000E74
    // 0x60004750: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    ovl_stage_world4_E74(rdram, ctx);
        goto after_29;
    // 0x60004750: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    after_29:
    // 0x60004754: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60004758: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x6000475C: jal         0x600006C4
    // 0x60004760: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_30;
    // 0x60004760: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_30:
    // 0x60004764: jal         0x600009D0
    // 0x60004768: nop

    ovl_stage_world4_9D0(rdram, ctx);
        goto after_31;
    // 0x60004768: nop

    after_31:
    // 0x6000476C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60004770: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x60004774: bne         $s0, $at, L_60004728
    if (ctx->r16 != ctx->r1) {
        // 0x60004778: nop
    
            goto L_60004728;
    }
    // 0x60004778: nop

    // 0x6000477C: jal         0x60002DC0
    // 0x60004780: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world4_2DC0(rdram, ctx);
        goto after_32;
    // 0x60004780: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_32:
    // 0x60004784: jal         0x60000A78
    // 0x60004788: nop

    ovl_stage_world4_A78(rdram, ctx);
        goto after_33;
    // 0x60004788: nop

    after_33:
    // 0x6000478C: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x60004790: lui         $at, 0xFFFE
    ctx->r1 = S32(0XFFFE << 16);
    // 0x60004794: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x60004798: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x6000479C: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x600047A0: jal         0x600009AC
    // 0x600047A4: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    ovl_stage_world4_9AC(rdram, ctx);
        goto after_34;
    // 0x600047A4: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    after_34:
    // 0x600047A8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x600047AC: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x600047B0: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x600047B4: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x600047B8: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x600047BC: jr          $ra
    // 0x600047C0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x600047C0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_stage_world4_47C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600047C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600047C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600047CC: jal         0x60000C1C
    // 0x600047D0: nop

    ovl_stage_world4_C1C(rdram, ctx);
        goto after_0;
    // 0x600047D0: nop

    after_0:
    // 0x600047D4: lw          $t6, 0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC);
    // 0x600047D8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x600047DC: bne         $t6, $at, L_600047F8
    if (ctx->r14 != ctx->r1) {
        // 0x600047E0: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_600047F8;
    }
    // 0x600047E0: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600047E4: addiu       $a0, $a0, 0x4598
    ctx->r4 = ADD32(ctx->r4, 0X4598);
    // 0x600047E8: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x600047EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x600047F0: jal         0x60000994
    // 0x600047F4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world4_994(rdram, ctx);
        goto after_1;
    // 0x600047F4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
L_600047F8:
    // 0x600047F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600047FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60004800: jr          $ra
    // 0x60004804: nop

    return;
    // 0x60004804: nop

;}
RECOMP_FUNC void ovl_stage_world4_4808(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004808: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x6000480C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x60004810: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x60004814: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x60004818: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x6000481C: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x60004820: jal         0x60000C1C
    // 0x60004824: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    ovl_stage_world4_C1C(rdram, ctx);
        goto after_0;
    // 0x60004824: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x60004828: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x6000482C: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x60004830: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x60004834: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x60004838: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x6000483C: jal         0x60002DC0
    // 0x60004840: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world4_2DC0(rdram, ctx);
        goto after_1;
    // 0x60004840: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x60004844: jal         0x60000244
    // 0x60004848: addiu       $a0, $zero, 0xD4
    ctx->r4 = ADD32(0, 0XD4);
    ovl_stage_world4_244(rdram, ctx);
        goto after_2;
    // 0x60004848: addiu       $a0, $zero, 0xD4
    ctx->r4 = ADD32(0, 0XD4);
    after_2:
    // 0x6000484C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x60004850: jal         0x60000E68
    // 0x60004854: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world4_E68(rdram, ctx);
        goto after_3;
    // 0x60004854: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x60004858: jal         0x600009C4
    // 0x6000485C: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_stage_world4_9C4(rdram, ctx);
        goto after_4;
    // 0x6000485C: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_4:
    // 0x60004860: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x60004864: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x60004868: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x6000486C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x60004870: jal         0x60002EA0
    // 0x60004874: nop

    ovl_stage_world4_2EA0(rdram, ctx);
        goto after_5;
    // 0x60004874: nop

    after_5:
    // 0x60004878: jal         0x60000244
    // 0x6000487C: addiu       $a0, $zero, 0xD4
    ctx->r4 = ADD32(0, 0XD4);
    ovl_stage_world4_244(rdram, ctx);
        goto after_6;
    // 0x6000487C: addiu       $a0, $zero, 0xD4
    ctx->r4 = ADD32(0, 0XD4);
    after_6:
    // 0x60004880: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x60004884: jal         0x60000E68
    // 0x60004888: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world4_E68(rdram, ctx);
        goto after_7;
    // 0x60004888: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
    // 0x6000488C: jal         0x600009C4
    // 0x60004890: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_stage_world4_9C4(rdram, ctx);
        goto after_8;
    // 0x60004890: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_8:
    // 0x60004894: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60004898: jal         0x60002C10
    // 0x6000489C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world4_2C10(rdram, ctx);
        goto after_9;
    // 0x6000489C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x600048A0: jal         0x60000244
    // 0x600048A4: addiu       $a0, $zero, 0x165
    ctx->r4 = ADD32(0, 0X165);
    ovl_stage_world4_244(rdram, ctx);
        goto after_10;
    // 0x600048A4: addiu       $a0, $zero, 0x165
    ctx->r4 = ADD32(0, 0X165);
    after_10:
    // 0x600048A8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600048AC: lwc1        $f20, 0x7418($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X7418);
    // 0x600048B0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x600048B4: addiu       $s2, $zero, 0x3C
    ctx->r18 = ADD32(0, 0X3C);
    // 0x600048B8: addiu       $s1, $sp, 0x3C
    ctx->r17 = ADD32(ctx->r29, 0X3C);
L_600048BC:
    // 0x600048BC: jal         0x60000E74
    // 0x600048C0: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    ovl_stage_world4_E74(rdram, ctx);
        goto after_11;
    // 0x600048C0: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_11:
    // 0x600048C4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600048C8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x600048CC: jal         0x600006C4
    // 0x600048D0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_12;
    // 0x600048D0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_12:
    // 0x600048D4: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x600048D8: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x600048DC: sub.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f20.fl;
    // 0x600048E0: jal         0x60000E74
    // 0x600048E4: swc1        $f6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f6.u32l;
    ovl_stage_world4_E74(rdram, ctx);
        goto after_13;
    // 0x600048E4: swc1        $f6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f6.u32l;
    after_13:
    // 0x600048E8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600048EC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x600048F0: jal         0x600006C4
    // 0x600048F4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_14;
    // 0x600048F4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_14:
    // 0x600048F8: jal         0x600009D0
    // 0x600048FC: nop

    ovl_stage_world4_9D0(rdram, ctx);
        goto after_15;
    // 0x600048FC: nop

    after_15:
    // 0x60004900: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60004904: bne         $s0, $s2, L_600048BC
    if (ctx->r16 != ctx->r18) {
        // 0x60004908: nop
    
            goto L_600048BC;
    }
    // 0x60004908: nop

    // 0x6000490C: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x60004910: lui         $at, 0xFFFE
    ctx->r1 = S32(0XFFFE << 16);
    // 0x60004914: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x60004918: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x6000491C: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x60004920: addiu       $a0, $zero, 0x869
    ctx->r4 = ADD32(0, 0X869);
    // 0x60004924: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x60004928: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x6000492C: jal         0x60000C10
    // 0x60004930: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    ovl_stage_world4_C10(rdram, ctx);
        goto after_16;
    // 0x60004930: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    after_16:
    // 0x60004934: jal         0x600009AC
    // 0x60004938: nop

    ovl_stage_world4_9AC(rdram, ctx);
        goto after_17;
    // 0x60004938: nop

    after_17:
    // 0x6000493C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x60004940: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x60004944: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x60004948: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x6000494C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x60004950: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x60004954: jr          $ra
    // 0x60004958: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x60004958: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_stage_world4_495C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000495C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x60004960: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60004964: jal         0x60000DE4
    // 0x60004968: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world4_DE4(rdram, ctx);
        goto after_0;
    // 0x60004968: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x6000496C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60004970: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x60004974: jal         0x600006C4
    // 0x60004978: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_1;
    // 0x60004978: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x6000497C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x60004980: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60004984: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x60004988: nop

    // 0x6000498C: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x60004990: nop

    // 0x60004994: bc1f        L_60004A18
    if (!c1cs) {
        // 0x60004998: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60004A18;
    }
    // 0x60004998: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000499C: jal         0x60000BB0
    // 0x600049A0: addiu       $a0, $zero, 0x107
    ctx->r4 = ADD32(0, 0X107);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_2;
    // 0x600049A0: addiu       $a0, $zero, 0x107
    ctx->r4 = ADD32(0, 0X107);
    after_2:
    // 0x600049A4: beq         $v0, $zero, L_60004A18
    if (ctx->r2 == 0) {
        // 0x600049A8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60004A18;
    }
    // 0x600049A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600049AC: jal         0x60000B98
    // 0x600049B0: addiu       $a0, $zero, 0x186
    ctx->r4 = ADD32(0, 0X186);
    ovl_stage_world4_B98(rdram, ctx);
        goto after_3;
    // 0x600049B0: addiu       $a0, $zero, 0x186
    ctx->r4 = ADD32(0, 0X186);
    after_3:
    // 0x600049B4: jal         0x60000B98
    // 0x600049B8: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    ovl_stage_world4_B98(rdram, ctx);
        goto after_4;
    // 0x600049B8: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    after_4:
    // 0x600049BC: jal         0x60000BA4
    // 0x600049C0: addiu       $a0, $zero, 0x107
    ctx->r4 = ADD32(0, 0X107);
    ovl_stage_world4_BA4(rdram, ctx);
        goto after_5;
    // 0x600049C0: addiu       $a0, $zero, 0x107
    ctx->r4 = ADD32(0, 0X107);
    after_5:
    // 0x600049C4: jal         0x60000DE4
    // 0x600049C8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world4_DE4(rdram, ctx);
        goto after_6;
    // 0x600049C8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_6:
    // 0x600049CC: jal         0x60000CC4
    // 0x600049D0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_stage_world4_CC4(rdram, ctx);
        goto after_7;
    // 0x600049D0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_7:
    // 0x600049D4: jal         0x60000A90
    // 0x600049D8: nop

    ovl_stage_world4_A90(rdram, ctx);
        goto after_8;
    // 0x600049D8: nop

    after_8:
    // 0x600049DC: jal         0x60000A6C
    // 0x600049E0: nop

    ovl_stage_world4_A6C(rdram, ctx);
        goto after_9;
    // 0x600049E0: nop

    after_9:
    // 0x600049E4: lui         $a1, 0x409C
    ctx->r5 = S32(0X409C << 16);
    // 0x600049E8: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x600049EC: jal         0x60001028
    // 0x600049F0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world4_1028(rdram, ctx);
        goto after_10;
    // 0x600049F0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_10:
    // 0x600049F4: jal         0x60000814
    // 0x600049F8: nop

    ovl_stage_world4_814(rdram, ctx);
        goto after_11;
    // 0x600049F8: nop

    after_11:
    // 0x600049FC: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60004A00: addiu       $a0, $a0, 0x4808
    ctx->r4 = ADD32(ctx->r4, 0X4808);
    // 0x60004A04: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60004A08: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60004A0C: jal         0x60000994
    // 0x60004A10: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world4_994(rdram, ctx);
        goto after_12;
    // 0x60004A10: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_12:
    // 0x60004A14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60004A18:
    // 0x60004A18: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x60004A1C: jr          $ra
    // 0x60004A20: nop

    return;
    // 0x60004A20: nop

;}
RECOMP_FUNC void ovl_stage_world4_4A24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004A24: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x60004A28: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x60004A2C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x60004A30: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x60004A34: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x60004A38: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x60004A3C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x60004A40: jal         0x60000244
    // 0x60004A44: addiu       $a0, $zero, 0x165
    ctx->r4 = ADD32(0, 0X165);
    ovl_stage_world4_244(rdram, ctx);
        goto after_0;
    // 0x60004A44: addiu       $a0, $zero, 0x165
    ctx->r4 = ADD32(0, 0X165);
    after_0:
    // 0x60004A48: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60004A4C: lwc1        $f20, 0x741C($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X741C);
    // 0x60004A50: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60004A54: addiu       $s2, $zero, 0x3C
    ctx->r18 = ADD32(0, 0X3C);
    // 0x60004A58: addiu       $s1, $sp, 0x34
    ctx->r17 = ADD32(ctx->r29, 0X34);
L_60004A5C:
    // 0x60004A5C: jal         0x60000E74
    // 0x60004A60: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    ovl_stage_world4_E74(rdram, ctx);
        goto after_1;
    // 0x60004A60: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_1:
    // 0x60004A64: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60004A68: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x60004A6C: jal         0x600006C4
    // 0x60004A70: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_2;
    // 0x60004A70: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_2:
    // 0x60004A74: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x60004A78: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x60004A7C: add.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f20.fl;
    // 0x60004A80: jal         0x60000E74
    // 0x60004A84: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
    ovl_stage_world4_E74(rdram, ctx);
        goto after_3;
    // 0x60004A84: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x60004A88: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60004A8C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x60004A90: jal         0x600006C4
    // 0x60004A94: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_4;
    // 0x60004A94: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_4:
    // 0x60004A98: jal         0x600009D0
    // 0x60004A9C: nop

    ovl_stage_world4_9D0(rdram, ctx);
        goto after_5;
    // 0x60004A9C: nop

    after_5:
    // 0x60004AA0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60004AA4: bne         $s0, $s2, L_60004A5C
    if (ctx->r16 != ctx->r18) {
        // 0x60004AA8: nop
    
            goto L_60004A5C;
    }
    // 0x60004AA8: nop

    // 0x60004AAC: jal         0x60000B98
    // 0x60004AB0: addiu       $a0, $zero, 0x107
    ctx->r4 = ADD32(0, 0X107);
    ovl_stage_world4_B98(rdram, ctx);
        goto after_6;
    // 0x60004AB0: addiu       $a0, $zero, 0x107
    ctx->r4 = ADD32(0, 0X107);
    after_6:
    // 0x60004AB4: jal         0x600009AC
    // 0x60004AB8: nop

    ovl_stage_world4_9AC(rdram, ctx);
        goto after_7;
    // 0x60004AB8: nop

    after_7:
    // 0x60004ABC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x60004AC0: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x60004AC4: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x60004AC8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x60004ACC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x60004AD0: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x60004AD4: jr          $ra
    // 0x60004AD8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x60004AD8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_stage_world4_4ADC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004ADC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60004AE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60004AE4: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60004AE8: addiu       $a0, $a0, 0x4A24
    ctx->r4 = ADD32(ctx->r4, 0X4A24);
    // 0x60004AEC: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60004AF0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60004AF4: jal         0x60000994
    // 0x60004AF8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world4_994(rdram, ctx);
        goto after_0;
    // 0x60004AF8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x60004AFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004B00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60004B04: jr          $ra
    // 0x60004B08: nop

    return;
    // 0x60004B08: nop

;}
RECOMP_FUNC void ovl_stage_world4_4B0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004B0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60004B10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60004B14: jal         0x60000BB0
    // 0x60004B18: addiu       $a0, $zero, 0x11F
    ctx->r4 = ADD32(0, 0X11F);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_0;
    // 0x60004B18: addiu       $a0, $zero, 0x11F
    ctx->r4 = ADD32(0, 0X11F);
    after_0:
    // 0x60004B1C: bne         $v0, $zero, L_60004D78
    if (ctx->r2 != 0) {
        // 0x60004B20: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60004D78;
    }
    // 0x60004B20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004B24: jal         0x60000BB0
    // 0x60004B28: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_1;
    // 0x60004B28: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    after_1:
    // 0x60004B2C: beq         $v0, $zero, L_60004B6C
    if (ctx->r2 == 0) {
        // 0x60004B30: nop
    
            goto L_60004B6C;
    }
    // 0x60004B30: nop

    // 0x60004B34: jal         0x60000BB0
    // 0x60004B38: addiu       $a0, $zero, 0x10B
    ctx->r4 = ADD32(0, 0X10B);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_2;
    // 0x60004B38: addiu       $a0, $zero, 0x10B
    ctx->r4 = ADD32(0, 0X10B);
    after_2:
    // 0x60004B3C: beq         $v0, $zero, L_60004B6C
    if (ctx->r2 == 0) {
        // 0x60004B40: nop
    
            goto L_60004B6C;
    }
    // 0x60004B40: nop

    // 0x60004B44: jal         0x60000BB0
    // 0x60004B48: addiu       $a0, $zero, 0x10C
    ctx->r4 = ADD32(0, 0X10C);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_3;
    // 0x60004B48: addiu       $a0, $zero, 0x10C
    ctx->r4 = ADD32(0, 0X10C);
    after_3:
    // 0x60004B4C: beq         $v0, $zero, L_60004B6C
    if (ctx->r2 == 0) {
        // 0x60004B50: nop
    
            goto L_60004B6C;
    }
    // 0x60004B50: nop

    // 0x60004B54: jal         0x60000B98
    // 0x60004B58: addiu       $a0, $zero, 0x11F
    ctx->r4 = ADD32(0, 0X11F);
    ovl_stage_world4_B98(rdram, ctx);
        goto after_4;
    // 0x60004B58: addiu       $a0, $zero, 0x11F
    ctx->r4 = ADD32(0, 0X11F);
    after_4:
    // 0x60004B5C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60004B60: lw          $a0, 0x7530($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7530);
    // 0x60004B64: jal         0x6000028C
    // 0x60004B68: nop

    ovl_stage_world4_28C(rdram, ctx);
        goto after_5;
    // 0x60004B68: nop

    after_5:
L_60004B6C:
    // 0x60004B6C: jal         0x60000BB0
    // 0x60004B70: addiu       $a0, $zero, 0x10D
    ctx->r4 = ADD32(0, 0X10D);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_6;
    // 0x60004B70: addiu       $a0, $zero, 0x10D
    ctx->r4 = ADD32(0, 0X10D);
    after_6:
    // 0x60004B74: beq         $v0, $zero, L_60004BC0
    if (ctx->r2 == 0) {
        // 0x60004B78: nop
    
            goto L_60004BC0;
    }
    // 0x60004B78: nop

    // 0x60004B7C: jal         0x60000BB0
    // 0x60004B80: addiu       $a0, $zero, 0x10E
    ctx->r4 = ADD32(0, 0X10E);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_7;
    // 0x60004B80: addiu       $a0, $zero, 0x10E
    ctx->r4 = ADD32(0, 0X10E);
    after_7:
    // 0x60004B84: beq         $v0, $zero, L_60004BC0
    if (ctx->r2 == 0) {
        // 0x60004B88: nop
    
            goto L_60004BC0;
    }
    // 0x60004B88: nop

    // 0x60004B8C: jal         0x60000BB0
    // 0x60004B90: addiu       $a0, $zero, 0x10F
    ctx->r4 = ADD32(0, 0X10F);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_8;
    // 0x60004B90: addiu       $a0, $zero, 0x10F
    ctx->r4 = ADD32(0, 0X10F);
    after_8:
    // 0x60004B94: beq         $v0, $zero, L_60004BC0
    if (ctx->r2 == 0) {
        // 0x60004B98: nop
    
            goto L_60004BC0;
    }
    // 0x60004B98: nop

    // 0x60004B9C: jal         0x600009C4
    // 0x60004BA0: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    ovl_stage_world4_9C4(rdram, ctx);
        goto after_9;
    // 0x60004BA0: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_9:
    // 0x60004BA4: jal         0x60000244
    // 0x60004BA8: addiu       $a0, $zero, 0x16E
    ctx->r4 = ADD32(0, 0X16E);
    ovl_stage_world4_244(rdram, ctx);
        goto after_10;
    // 0x60004BA8: addiu       $a0, $zero, 0x16E
    ctx->r4 = ADD32(0, 0X16E);
    after_10:
    // 0x60004BAC: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x60004BB0: jal         0x60000E68
    // 0x60004BB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world4_E68(rdram, ctx);
        goto after_11;
    // 0x60004BB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_11:
    // 0x60004BB8: b           L_60004D10
    // 0x60004BBC: nop

        goto L_60004D10;
    // 0x60004BBC: nop

L_60004BC0:
    // 0x60004BC0: jal         0x60000BB0
    // 0x60004BC4: addiu       $a0, $zero, 0x11B
    ctx->r4 = ADD32(0, 0X11B);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_12;
    // 0x60004BC4: addiu       $a0, $zero, 0x11B
    ctx->r4 = ADD32(0, 0X11B);
    after_12:
    // 0x60004BC8: beq         $v0, $zero, L_60004C90
    if (ctx->r2 == 0) {
        // 0x60004BCC: nop
    
            goto L_60004C90;
    }
    // 0x60004BCC: nop

    // 0x60004BD0: jal         0x60000BB0
    // 0x60004BD4: addiu       $a0, $zero, 0x11C
    ctx->r4 = ADD32(0, 0X11C);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_13;
    // 0x60004BD4: addiu       $a0, $zero, 0x11C
    ctx->r4 = ADD32(0, 0X11C);
    after_13:
    // 0x60004BD8: beq         $v0, $zero, L_60004C90
    if (ctx->r2 == 0) {
        // 0x60004BDC: nop
    
            goto L_60004C90;
    }
    // 0x60004BDC: nop

    // 0x60004BE0: jal         0x60000BB0
    // 0x60004BE4: addiu       $a0, $zero, 0x11D
    ctx->r4 = ADD32(0, 0X11D);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_14;
    // 0x60004BE4: addiu       $a0, $zero, 0x11D
    ctx->r4 = ADD32(0, 0X11D);
    after_14:
    // 0x60004BE8: beq         $v0, $zero, L_60004C90
    if (ctx->r2 == 0) {
        // 0x60004BEC: nop
    
            goto L_60004C90;
    }
    // 0x60004BEC: nop

    // 0x60004BF0: jal         0x60000BB0
    // 0x60004BF4: addiu       $a0, $zero, 0x11E
    ctx->r4 = ADD32(0, 0X11E);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_15;
    // 0x60004BF4: addiu       $a0, $zero, 0x11E
    ctx->r4 = ADD32(0, 0X11E);
    after_15:
    // 0x60004BF8: bne         $v0, $zero, L_60004C90
    if (ctx->r2 != 0) {
        // 0x60004BFC: nop
    
            goto L_60004C90;
    }
    // 0x60004BFC: nop

    // 0x60004C00: jal         0x60000B98
    // 0x60004C04: addiu       $a0, $zero, 0x11E
    ctx->r4 = ADD32(0, 0X11E);
    ovl_stage_world4_B98(rdram, ctx);
        goto after_16;
    // 0x60004C04: addiu       $a0, $zero, 0x11E
    ctx->r4 = ADD32(0, 0X11E);
    after_16:
    // 0x60004C08: jal         0x60000BB0
    // 0x60004C0C: addiu       $a0, $zero, 0xDE
    ctx->r4 = ADD32(0, 0XDE);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_17;
    // 0x60004C0C: addiu       $a0, $zero, 0xDE
    ctx->r4 = ADD32(0, 0XDE);
    after_17:
    // 0x60004C10: bne         $v0, $zero, L_60004C38
    if (ctx->r2 != 0) {
        // 0x60004C14: nop
    
            goto L_60004C38;
    }
    // 0x60004C14: nop

    // 0x60004C18: jal         0x600009C4
    // 0x60004C1C: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    ovl_stage_world4_9C4(rdram, ctx);
        goto after_18;
    // 0x60004C1C: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_18:
    // 0x60004C20: jal         0x60000244
    // 0x60004C24: addiu       $a0, $zero, 0x16E
    ctx->r4 = ADD32(0, 0X16E);
    ovl_stage_world4_244(rdram, ctx);
        goto after_19;
    // 0x60004C24: addiu       $a0, $zero, 0x16E
    ctx->r4 = ADD32(0, 0X16E);
    after_19:
    // 0x60004C28: jal         0x60000E44
    // 0x60004C2C: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    ovl_stage_world4_E44(rdram, ctx);
        goto after_20;
    // 0x60004C2C: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_20:
    // 0x60004C30: b           L_60004D10
    // 0x60004C34: nop

        goto L_60004D10;
    // 0x60004C34: nop

L_60004C38:
    // 0x60004C38: jal         0x600009C4
    // 0x60004C3C: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    ovl_stage_world4_9C4(rdram, ctx);
        goto after_21;
    // 0x60004C3C: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_21:
    // 0x60004C40: jal         0x60000244
    // 0x60004C44: addiu       $a0, $zero, 0x16D
    ctx->r4 = ADD32(0, 0X16D);
    ovl_stage_world4_244(rdram, ctx);
        goto after_22;
    // 0x60004C44: addiu       $a0, $zero, 0x16D
    ctx->r4 = ADD32(0, 0X16D);
    after_22:
    // 0x60004C48: jal         0x60000BB0
    // 0x60004C4C: addiu       $a0, $zero, 0x120
    ctx->r4 = ADD32(0, 0X120);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_23;
    // 0x60004C4C: addiu       $a0, $zero, 0x120
    ctx->r4 = ADD32(0, 0X120);
    after_23:
    // 0x60004C50: beq         $v0, $zero, L_60004C80
    if (ctx->r2 == 0) {
        // 0x60004C54: nop
    
            goto L_60004C80;
    }
    // 0x60004C54: nop

    // 0x60004C58: jal         0x60000BB0
    // 0x60004C5C: addiu       $a0, $zero, 0x121
    ctx->r4 = ADD32(0, 0X121);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_24;
    // 0x60004C5C: addiu       $a0, $zero, 0x121
    ctx->r4 = ADD32(0, 0X121);
    after_24:
    // 0x60004C60: bne         $v0, $zero, L_60004C80
    if (ctx->r2 != 0) {
        // 0x60004C64: nop
    
            goto L_60004C80;
    }
    // 0x60004C64: nop

    // 0x60004C68: jal         0x60000B98
    // 0x60004C6C: addiu       $a0, $zero, 0x121
    ctx->r4 = ADD32(0, 0X121);
    ovl_stage_world4_B98(rdram, ctx);
        goto after_25;
    // 0x60004C6C: addiu       $a0, $zero, 0x121
    ctx->r4 = ADD32(0, 0X121);
    after_25:
    // 0x60004C70: jal         0x60000A60
    // 0x60004C74: addiu       $a0, $zero, 0xC15
    ctx->r4 = ADD32(0, 0XC15);
    ovl_stage_world4_A60(rdram, ctx);
        goto after_26;
    // 0x60004C74: addiu       $a0, $zero, 0xC15
    ctx->r4 = ADD32(0, 0XC15);
    after_26:
    // 0x60004C78: b           L_60004D10
    // 0x60004C7C: nop

        goto L_60004D10;
    // 0x60004C7C: nop

L_60004C80:
    // 0x60004C80: jal         0x60000B98
    // 0x60004C84: addiu       $a0, $zero, 0x120
    ctx->r4 = ADD32(0, 0X120);
    ovl_stage_world4_B98(rdram, ctx);
        goto after_27;
    // 0x60004C84: addiu       $a0, $zero, 0x120
    ctx->r4 = ADD32(0, 0X120);
    after_27:
    // 0x60004C88: b           L_60004D10
    // 0x60004C8C: nop

        goto L_60004D10;
    // 0x60004C8C: nop

L_60004C90:
    // 0x60004C90: jal         0x60000BB0
    // 0x60004C94: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_28;
    // 0x60004C94: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    after_28:
    // 0x60004C98: beq         $v0, $zero, L_60004D10
    if (ctx->r2 == 0) {
        // 0x60004C9C: nop
    
            goto L_60004D10;
    }
    // 0x60004C9C: nop

    // 0x60004CA0: jal         0x60000BB0
    // 0x60004CA4: addiu       $a0, $zero, 0x10B
    ctx->r4 = ADD32(0, 0X10B);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_29;
    // 0x60004CA4: addiu       $a0, $zero, 0x10B
    ctx->r4 = ADD32(0, 0X10B);
    after_29:
    // 0x60004CA8: beq         $v0, $zero, L_60004D10
    if (ctx->r2 == 0) {
        // 0x60004CAC: nop
    
            goto L_60004D10;
    }
    // 0x60004CAC: nop

    // 0x60004CB0: jal         0x60000BB0
    // 0x60004CB4: addiu       $a0, $zero, 0x10C
    ctx->r4 = ADD32(0, 0X10C);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_30;
    // 0x60004CB4: addiu       $a0, $zero, 0x10C
    ctx->r4 = ADD32(0, 0X10C);
    after_30:
    // 0x60004CB8: beq         $v0, $zero, L_60004D10
    if (ctx->r2 == 0) {
        // 0x60004CBC: nop
    
            goto L_60004D10;
    }
    // 0x60004CBC: nop

    // 0x60004CC0: jal         0x600009C4
    // 0x60004CC4: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    ovl_stage_world4_9C4(rdram, ctx);
        goto after_31;
    // 0x60004CC4: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_31:
    // 0x60004CC8: jal         0x60000244
    // 0x60004CCC: addiu       $a0, $zero, 0x16D
    ctx->r4 = ADD32(0, 0X16D);
    ovl_stage_world4_244(rdram, ctx);
        goto after_32;
    // 0x60004CCC: addiu       $a0, $zero, 0x16D
    ctx->r4 = ADD32(0, 0X16D);
    after_32:
    // 0x60004CD0: jal         0x60000BB0
    // 0x60004CD4: addiu       $a0, $zero, 0x120
    ctx->r4 = ADD32(0, 0X120);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_33;
    // 0x60004CD4: addiu       $a0, $zero, 0x120
    ctx->r4 = ADD32(0, 0X120);
    after_33:
    // 0x60004CD8: beq         $v0, $zero, L_60004D08
    if (ctx->r2 == 0) {
        // 0x60004CDC: nop
    
            goto L_60004D08;
    }
    // 0x60004CDC: nop

    // 0x60004CE0: jal         0x60000BB0
    // 0x60004CE4: addiu       $a0, $zero, 0x121
    ctx->r4 = ADD32(0, 0X121);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_34;
    // 0x60004CE4: addiu       $a0, $zero, 0x121
    ctx->r4 = ADD32(0, 0X121);
    after_34:
    // 0x60004CE8: bne         $v0, $zero, L_60004D08
    if (ctx->r2 != 0) {
        // 0x60004CEC: nop
    
            goto L_60004D08;
    }
    // 0x60004CEC: nop

    // 0x60004CF0: jal         0x60000B98
    // 0x60004CF4: addiu       $a0, $zero, 0x121
    ctx->r4 = ADD32(0, 0X121);
    ovl_stage_world4_B98(rdram, ctx);
        goto after_35;
    // 0x60004CF4: addiu       $a0, $zero, 0x121
    ctx->r4 = ADD32(0, 0X121);
    after_35:
    // 0x60004CF8: jal         0x60000A60
    // 0x60004CFC: addiu       $a0, $zero, 0xC15
    ctx->r4 = ADD32(0, 0XC15);
    ovl_stage_world4_A60(rdram, ctx);
        goto after_36;
    // 0x60004CFC: addiu       $a0, $zero, 0xC15
    ctx->r4 = ADD32(0, 0XC15);
    after_36:
    // 0x60004D00: b           L_60004D10
    // 0x60004D04: nop

        goto L_60004D10;
    // 0x60004D04: nop

L_60004D08:
    // 0x60004D08: jal         0x60000B98
    // 0x60004D0C: addiu       $a0, $zero, 0x120
    ctx->r4 = ADD32(0, 0X120);
    ovl_stage_world4_B98(rdram, ctx);
        goto after_37;
    // 0x60004D0C: addiu       $a0, $zero, 0x120
    ctx->r4 = ADD32(0, 0X120);
    after_37:
L_60004D10:
    // 0x60004D10: jal         0x60000BB0
    // 0x60004D14: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_38;
    // 0x60004D14: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    after_38:
    // 0x60004D18: beq         $v0, $zero, L_60004D78
    if (ctx->r2 == 0) {
        // 0x60004D1C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60004D78;
    }
    // 0x60004D1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004D20: jal         0x60000BB0
    // 0x60004D24: addiu       $a0, $zero, 0x10B
    ctx->r4 = ADD32(0, 0X10B);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_39;
    // 0x60004D24: addiu       $a0, $zero, 0x10B
    ctx->r4 = ADD32(0, 0X10B);
    after_39:
    // 0x60004D28: beq         $v0, $zero, L_60004D78
    if (ctx->r2 == 0) {
        // 0x60004D2C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60004D78;
    }
    // 0x60004D2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004D30: jal         0x60000BB0
    // 0x60004D34: addiu       $a0, $zero, 0x10C
    ctx->r4 = ADD32(0, 0X10C);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_40;
    // 0x60004D34: addiu       $a0, $zero, 0x10C
    ctx->r4 = ADD32(0, 0X10C);
    after_40:
    // 0x60004D38: beq         $v0, $zero, L_60004D78
    if (ctx->r2 == 0) {
        // 0x60004D3C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60004D78;
    }
    // 0x60004D3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004D40: jal         0x600009C4
    // 0x60004D44: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_stage_world4_9C4(rdram, ctx);
        goto after_41;
    // 0x60004D44: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_41:
    // 0x60004D48: jal         0x60000244
    // 0x60004D4C: addiu       $a0, $zero, 0x8A
    ctx->r4 = ADD32(0, 0X8A);
    ovl_stage_world4_244(rdram, ctx);
        goto after_42;
    // 0x60004D4C: addiu       $a0, $zero, 0x8A
    ctx->r4 = ADD32(0, 0X8A);
    after_42:
    // 0x60004D50: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    // 0x60004D54: jal         0x60000E80
    // 0x60004D58: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world4_E80(rdram, ctx);
        goto after_43;
    // 0x60004D58: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_43:
    // 0x60004D5C: jal         0x600009C4
    // 0x60004D60: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    ovl_stage_world4_9C4(rdram, ctx);
        goto after_44;
    // 0x60004D60: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_44:
    // 0x60004D64: jal         0x60000B98
    // 0x60004D68: addiu       $a0, $zero, 0x118
    ctx->r4 = ADD32(0, 0X118);
    ovl_stage_world4_B98(rdram, ctx);
        goto after_45;
    // 0x60004D68: addiu       $a0, $zero, 0x118
    ctx->r4 = ADD32(0, 0X118);
    after_45:
    // 0x60004D6C: jal         0x60000BA4
    // 0x60004D70: addiu       $a0, $zero, 0x11F
    ctx->r4 = ADD32(0, 0X11F);
    ovl_stage_world4_BA4(rdram, ctx);
        goto after_46;
    // 0x60004D70: addiu       $a0, $zero, 0x11F
    ctx->r4 = ADD32(0, 0X11F);
    after_46:
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
RECOMP_FUNC void ovl_stage_world4_4D84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004D84: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x60004D88: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x60004D8C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x60004D90: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x60004D94: jal         0x600009DC
    // 0x60004D98: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    ovl_stage_world4_9DC(rdram, ctx);
        goto after_0;
    // 0x60004D98: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x60004D9C: lw          $s1, 0x1C($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X1C);
    // 0x60004DA0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_60004DA4:
    // 0x60004DA4: jal         0x600009D0
    // 0x60004DA8: nop

    ovl_stage_world4_9D0(rdram, ctx);
        goto after_1;
    // 0x60004DA8: nop

    after_1:
    // 0x60004DAC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60004DB0: slti        $at, $s0, 0x1E
    ctx->r1 = SIGNED(ctx->r16) < 0X1E ? 1 : 0;
    // 0x60004DB4: bne         $at, $zero, L_60004DA4
    if (ctx->r1 != 0) {
        // 0x60004DB8: nop
    
            goto L_60004DA4;
    }
    // 0x60004DB8: nop

    // 0x60004DBC: lw          $v0, 0xC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XC);
    // 0x60004DC0: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x60004DC4: bne         $v0, $at, L_60004DDC
    if (ctx->r2 != ctx->r1) {
        // 0x60004DC8: addiu       $a0, $zero, 0xE
        ctx->r4 = ADD32(0, 0XE);
            goto L_60004DDC;
    }
    // 0x60004DC8: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x60004DCC: jal         0x60000E80
    // 0x60004DD0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_stage_world4_E80(rdram, ctx);
        goto after_2;
    // 0x60004DD0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x60004DD4: b           L_60004E40
    // 0x60004DD8: lui         $a1, 0x443B
    ctx->r5 = S32(0X443B << 16);
        goto L_60004E40;
    // 0x60004DD8: lui         $a1, 0x443B
    ctx->r5 = S32(0X443B << 16);
L_60004DDC:
    // 0x60004DDC: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x60004DE0: bne         $v0, $at, L_60004DF8
    if (ctx->r2 != ctx->r1) {
        // 0x60004DE4: addiu       $a0, $zero, 0xE
        ctx->r4 = ADD32(0, 0XE);
            goto L_60004DF8;
    }
    // 0x60004DE4: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x60004DE8: jal         0x60000E80
    // 0x60004DEC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_stage_world4_E80(rdram, ctx);
        goto after_3;
    // 0x60004DEC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_3:
    // 0x60004DF0: b           L_60004E40
    // 0x60004DF4: lui         $a1, 0x443B
    ctx->r5 = S32(0X443B << 16);
        goto L_60004E40;
    // 0x60004DF4: lui         $a1, 0x443B
    ctx->r5 = S32(0X443B << 16);
L_60004DF8:
    // 0x60004DF8: jal         0x6000034C
    // 0x60004DFC: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    ovl_stage_world4_34C(rdram, ctx);
        goto after_4;
    // 0x60004DFC: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_4:
    // 0x60004E00: addiu       $s2, $zero, 0x2
    ctx->r18 = ADD32(0, 0X2);
    // 0x60004E04: beq         $v0, $s2, L_60004E14
    if (ctx->r2 == ctx->r18) {
        // 0x60004E08: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_60004E14;
    }
    // 0x60004E08: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x60004E0C: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
    // 0x60004E10: bne         $v0, $s1, L_60004E30
    if (ctx->r2 != ctx->r17) {
        // 0x60004E14: addiu       $s1, $zero, 0x3
        ctx->r17 = ADD32(0, 0X3);
            goto L_60004E30;
    }
L_60004E14:
    // 0x60004E14: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
L_60004E18:
    // 0x60004E18: jal         0x6000034C
    // 0x60004E1C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    ovl_stage_world4_34C(rdram, ctx);
        goto after_5;
    // 0x60004E1C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_5:
    // 0x60004E20: beq         $v0, $s2, L_60004E14
    if (ctx->r2 == ctx->r18) {
        // 0x60004E24: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_60004E14;
    }
    // 0x60004E24: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x60004E28: beq         $v0, $s1, L_60004E18
    if (ctx->r2 == ctx->r17) {
        // 0x60004E2C: addiu       $s1, $zero, 0x3
        ctx->r17 = ADD32(0, 0X3);
            goto L_60004E18;
    }
    // 0x60004E2C: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
L_60004E30:
    // 0x60004E30: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x60004E34: jal         0x60000E80
    // 0x60004E38: addiu       $a1, $s0, 0x1
    ctx->r5 = ADD32(ctx->r16, 0X1);
    ovl_stage_world4_E80(rdram, ctx);
        goto after_6;
    // 0x60004E38: addiu       $a1, $s0, 0x1
    ctx->r5 = ADD32(ctx->r16, 0X1);
    after_6:
    // 0x60004E3C: lui         $a1, 0x443B
    ctx->r5 = S32(0X443B << 16);
L_60004E40:
    // 0x60004E40: lui         $a3, 0x4483
    ctx->r7 = S32(0X4483 << 16);
    // 0x60004E44: ori         $a3, $a3, 0x4000
    ctx->r7 = ctx->r7 | 0X4000;
    // 0x60004E48: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x60004E4C: addiu       $a0, $zero, 0x16C
    ctx->r4 = ADD32(0, 0X16C);
    // 0x60004E50: jal         0x60000274
    // 0x60004E54: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    ovl_stage_world4_274(rdram, ctx);
        goto after_7;
    // 0x60004E54: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_7:
    // 0x60004E58: jal         0x60000EEC
    // 0x60004E5C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    ovl_stage_world4_EEC(rdram, ctx);
        goto after_8;
    // 0x60004E5C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_8:
    // 0x60004E60: jal         0x60004B0C
    // 0x60004E64: nop

    ovl_stage_world4_4B0C(rdram, ctx);
        goto after_9;
    // 0x60004E64: nop

    after_9:
    // 0x60004E68: jal         0x600009AC
    // 0x60004E6C: nop

    ovl_stage_world4_9AC(rdram, ctx);
        goto after_10;
    // 0x60004E6C: nop

    after_10:
    // 0x60004E70: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x60004E74: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x60004E78: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x60004E7C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x60004E80: jr          $ra
    // 0x60004E84: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x60004E84: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_stage_world4_4E88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004E88: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x60004E8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60004E90: jal         0x60000B98
    // 0x60004E94: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    ovl_stage_world4_B98(rdram, ctx);
        goto after_0;
    // 0x60004E94: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    after_0:
    // 0x60004E98: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60004E9C: addiu       $a0, $a0, 0x4D84
    ctx->r4 = ADD32(ctx->r4, 0X4D84);
    // 0x60004EA0: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60004EA4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60004EA8: jal         0x60000994
    // 0x60004EAC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world4_994(rdram, ctx);
        goto after_1;
    // 0x60004EAC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x60004EB0: lw          $t6, 0x1C($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X1C);
    // 0x60004EB4: addiu       $a0, $zero, 0x10B
    ctx->r4 = ADD32(0, 0X10B);
    // 0x60004EB8: jal         0x60000BB0
    // 0x60004EBC: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_2;
    // 0x60004EBC: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    after_2:
    // 0x60004EC0: beq         $v0, $zero, L_60004EF0
    if (ctx->r2 == 0) {
        // 0x60004EC4: nop
    
            goto L_60004EF0;
    }
    // 0x60004EC4: nop

    // 0x60004EC8: jal         0x60000BB0
    // 0x60004ECC: addiu       $a0, $zero, 0x10C
    ctx->r4 = ADD32(0, 0X10C);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_3;
    // 0x60004ECC: addiu       $a0, $zero, 0x10C
    ctx->r4 = ADD32(0, 0X10C);
    after_3:
    // 0x60004ED0: beq         $v0, $zero, L_60004EF0
    if (ctx->r2 == 0) {
        // 0x60004ED4: addiu       $t7, $zero, 0x4
        ctx->r15 = ADD32(0, 0X4);
            goto L_60004EF0;
    }
    // 0x60004ED4: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x60004ED8: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x60004EDC: addiu       $a0, $zero, 0x11B
    ctx->r4 = ADD32(0, 0X11B);
    // 0x60004EE0: jal         0x60000B98
    // 0x60004EE4: sw          $t7, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->r15;
    ovl_stage_world4_B98(rdram, ctx);
        goto after_4;
    // 0x60004EE4: sw          $t7, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->r15;
    after_4:
    // 0x60004EE8: b           L_60004F30
    // 0x60004EEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60004F30;
    // 0x60004EEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60004EF0:
    // 0x60004EF0: jal         0x60000BB0
    // 0x60004EF4: addiu       $a0, $zero, 0x10B
    ctx->r4 = ADD32(0, 0X10B);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_5;
    // 0x60004EF4: addiu       $a0, $zero, 0x10B
    ctx->r4 = ADD32(0, 0X10B);
    after_5:
    // 0x60004EF8: bne         $v0, $zero, L_60004F14
    if (ctx->r2 != 0) {
        // 0x60004EFC: lw          $t9, 0x18($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X18);
            goto L_60004F14;
    }
    // 0x60004EFC: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x60004F00: jal         0x60000BB0
    // 0x60004F04: addiu       $a0, $zero, 0x10C
    ctx->r4 = ADD32(0, 0X10C);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_6;
    // 0x60004F04: addiu       $a0, $zero, 0x10C
    ctx->r4 = ADD32(0, 0X10C);
    after_6:
    // 0x60004F08: beq         $v0, $zero, L_60004F1C
    if (ctx->r2 == 0) {
        // 0x60004F0C: addiu       $t0, $zero, 0x7
        ctx->r8 = ADD32(0, 0X7);
            goto L_60004F1C;
    }
    // 0x60004F0C: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
    // 0x60004F10: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
L_60004F14:
    // 0x60004F14: b           L_60004F2C
    // 0x60004F18: sw          $zero, 0xC($t9)
    MEM_W(0XC, ctx->r25) = 0;
        goto L_60004F2C;
    // 0x60004F18: sw          $zero, 0xC($t9)
    MEM_W(0XC, ctx->r25) = 0;
L_60004F1C:
    // 0x60004F1C: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x60004F20: addiu       $a0, $zero, 0x10D
    ctx->r4 = ADD32(0, 0X10D);
    // 0x60004F24: jal         0x60000B98
    // 0x60004F28: sw          $t0, 0xC($t1)
    MEM_W(0XC, ctx->r9) = ctx->r8;
    ovl_stage_world4_B98(rdram, ctx);
        goto after_7;
    // 0x60004F28: sw          $t0, 0xC($t1)
    MEM_W(0XC, ctx->r9) = ctx->r8;
    after_7:
L_60004F2C:
    // 0x60004F2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60004F30:
    // 0x60004F30: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x60004F34: jr          $ra
    // 0x60004F38: nop

    return;
    // 0x60004F38: nop

;}
RECOMP_FUNC void ovl_stage_world4_4F3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004F3C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x60004F40: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x60004F44: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x60004F48: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x60004F4C: jal         0x600009DC
    // 0x60004F50: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    ovl_stage_world4_9DC(rdram, ctx);
        goto after_0;
    // 0x60004F50: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x60004F54: lw          $s1, 0x1C($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X1C);
    // 0x60004F58: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_60004F5C:
    // 0x60004F5C: jal         0x600009D0
    // 0x60004F60: nop

    ovl_stage_world4_9D0(rdram, ctx);
        goto after_1;
    // 0x60004F60: nop

    after_1:
    // 0x60004F64: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60004F68: slti        $at, $s0, 0x1E
    ctx->r1 = SIGNED(ctx->r16) < 0X1E ? 1 : 0;
    // 0x60004F6C: bne         $at, $zero, L_60004F5C
    if (ctx->r1 != 0) {
        // 0x60004F70: nop
    
            goto L_60004F5C;
    }
    // 0x60004F70: nop

    // 0x60004F74: lw          $v0, 0xC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XC);
    // 0x60004F78: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x60004F7C: bne         $v0, $at, L_60004F94
    if (ctx->r2 != ctx->r1) {
        // 0x60004F80: addiu       $a0, $zero, 0xC
        ctx->r4 = ADD32(0, 0XC);
            goto L_60004F94;
    }
    // 0x60004F80: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x60004F84: jal         0x60000E80
    // 0x60004F88: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_stage_world4_E80(rdram, ctx);
        goto after_2;
    // 0x60004F88: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x60004F8C: b           L_60004FF8
    // 0x60004F90: lui         $at, 0x43AF
    ctx->r1 = S32(0X43AF << 16);
        goto L_60004FF8;
    // 0x60004F90: lui         $at, 0x43AF
    ctx->r1 = S32(0X43AF << 16);
L_60004F94:
    // 0x60004F94: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x60004F98: bne         $v0, $at, L_60004FB0
    if (ctx->r2 != ctx->r1) {
        // 0x60004F9C: addiu       $a0, $zero, 0xC
        ctx->r4 = ADD32(0, 0XC);
            goto L_60004FB0;
    }
    // 0x60004F9C: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x60004FA0: jal         0x60000E80
    // 0x60004FA4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_stage_world4_E80(rdram, ctx);
        goto after_3;
    // 0x60004FA4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_3:
    // 0x60004FA8: b           L_60004FF8
    // 0x60004FAC: lui         $at, 0x43AF
    ctx->r1 = S32(0X43AF << 16);
        goto L_60004FF8;
    // 0x60004FAC: lui         $at, 0x43AF
    ctx->r1 = S32(0X43AF << 16);
L_60004FB0:
    // 0x60004FB0: jal         0x6000034C
    // 0x60004FB4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    ovl_stage_world4_34C(rdram, ctx);
        goto after_4;
    // 0x60004FB4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_4:
    // 0x60004FB8: addiu       $s2, $zero, 0x2
    ctx->r18 = ADD32(0, 0X2);
    // 0x60004FBC: beq         $v0, $s2, L_60004FCC
    if (ctx->r2 == ctx->r18) {
        // 0x60004FC0: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_60004FCC;
    }
    // 0x60004FC0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x60004FC4: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
    // 0x60004FC8: bne         $v0, $s1, L_60004FE8
    if (ctx->r2 != ctx->r17) {
        // 0x60004FCC: addiu       $s1, $zero, 0x3
        ctx->r17 = ADD32(0, 0X3);
            goto L_60004FE8;
    }
L_60004FCC:
    // 0x60004FCC: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
L_60004FD0:
    // 0x60004FD0: jal         0x6000034C
    // 0x60004FD4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    ovl_stage_world4_34C(rdram, ctx);
        goto after_5;
    // 0x60004FD4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_5:
    // 0x60004FD8: beq         $v0, $s2, L_60004FCC
    if (ctx->r2 == ctx->r18) {
        // 0x60004FDC: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_60004FCC;
    }
    // 0x60004FDC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x60004FE0: beq         $v0, $s1, L_60004FD0
    if (ctx->r2 == ctx->r17) {
        // 0x60004FE4: addiu       $s1, $zero, 0x3
        ctx->r17 = ADD32(0, 0X3);
            goto L_60004FD0;
    }
    // 0x60004FE4: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
L_60004FE8:
    // 0x60004FE8: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x60004FEC: jal         0x60000E80
    // 0x60004FF0: addiu       $a1, $s0, 0x1
    ctx->r5 = ADD32(ctx->r16, 0X1);
    ovl_stage_world4_E80(rdram, ctx);
        goto after_6;
    // 0x60004FF0: addiu       $a1, $s0, 0x1
    ctx->r5 = ADD32(ctx->r16, 0X1);
    after_6:
    // 0x60004FF4: lui         $at, 0x43AF
    ctx->r1 = S32(0X43AF << 16);
L_60004FF8:
    // 0x60004FF8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x60004FFC: addiu       $a0, $zero, 0x16C
    ctx->r4 = ADD32(0, 0X16C);
    // 0x60005000: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x60005004: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x60005008: jal         0x60000274
    // 0x6000500C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    ovl_stage_world4_274(rdram, ctx);
        goto after_7;
    // 0x6000500C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_7:
    // 0x60005010: jal         0x60000EEC
    // 0x60005014: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    ovl_stage_world4_EEC(rdram, ctx);
        goto after_8;
    // 0x60005014: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_8:
    // 0x60005018: jal         0x60004B0C
    // 0x6000501C: nop

    ovl_stage_world4_4B0C(rdram, ctx);
        goto after_9;
    // 0x6000501C: nop

    after_9:
    // 0x60005020: jal         0x600009AC
    // 0x60005024: nop

    ovl_stage_world4_9AC(rdram, ctx);
        goto after_10;
    // 0x60005024: nop

    after_10:
    // 0x60005028: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x6000502C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x60005030: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x60005034: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x60005038: jr          $ra
    // 0x6000503C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x6000503C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_stage_world4_5040(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005040: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x60005044: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60005048: jal         0x60000B98
    // 0x6000504C: addiu       $a0, $zero, 0x10B
    ctx->r4 = ADD32(0, 0X10B);
    ovl_stage_world4_B98(rdram, ctx);
        goto after_0;
    // 0x6000504C: addiu       $a0, $zero, 0x10B
    ctx->r4 = ADD32(0, 0X10B);
    after_0:
    // 0x60005050: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60005054: addiu       $a0, $a0, 0x4F3C
    ctx->r4 = ADD32(ctx->r4, 0X4F3C);
    // 0x60005058: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x6000505C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60005060: jal         0x60000994
    // 0x60005064: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world4_994(rdram, ctx);
        goto after_1;
    // 0x60005064: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x60005068: lw          $t6, 0x1C($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X1C);
    // 0x6000506C: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    // 0x60005070: jal         0x60000BB0
    // 0x60005074: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_2;
    // 0x60005074: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    after_2:
    // 0x60005078: beq         $v0, $zero, L_600050A8
    if (ctx->r2 == 0) {
        // 0x6000507C: nop
    
            goto L_600050A8;
    }
    // 0x6000507C: nop

    // 0x60005080: jal         0x60000BB0
    // 0x60005084: addiu       $a0, $zero, 0x10C
    ctx->r4 = ADD32(0, 0X10C);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_3;
    // 0x60005084: addiu       $a0, $zero, 0x10C
    ctx->r4 = ADD32(0, 0X10C);
    after_3:
    // 0x60005088: bne         $v0, $zero, L_600050A8
    if (ctx->r2 != 0) {
        // 0x6000508C: addiu       $t7, $zero, 0x7
        ctx->r15 = ADD32(0, 0X7);
            goto L_600050A8;
    }
    // 0x6000508C: addiu       $t7, $zero, 0x7
    ctx->r15 = ADD32(0, 0X7);
    // 0x60005090: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x60005094: addiu       $a0, $zero, 0x10E
    ctx->r4 = ADD32(0, 0X10E);
    // 0x60005098: jal         0x60000B98
    // 0x6000509C: sw          $t7, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->r15;
    ovl_stage_world4_B98(rdram, ctx);
        goto after_4;
    // 0x6000509C: sw          $t7, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->r15;
    after_4:
    // 0x600050A0: b           L_600050F0
    // 0x600050A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600050F0;
    // 0x600050A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600050A8:
    // 0x600050A8: jal         0x60000BB0
    // 0x600050AC: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_5;
    // 0x600050AC: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    after_5:
    // 0x600050B0: bne         $v0, $zero, L_600050E4
    if (ctx->r2 != 0) {
        // 0x600050B4: lw          $t1, 0x18($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X18);
            goto L_600050E4;
    }
    // 0x600050B4: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x600050B8: jal         0x60000BB0
    // 0x600050BC: addiu       $a0, $zero, 0x10C
    ctx->r4 = ADD32(0, 0X10C);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_6;
    // 0x600050BC: addiu       $a0, $zero, 0x10C
    ctx->r4 = ADD32(0, 0X10C);
    after_6:
    // 0x600050C0: beq         $v0, $zero, L_600050E0
    if (ctx->r2 == 0) {
        // 0x600050C4: addiu       $t9, $zero, 0x4
        ctx->r25 = ADD32(0, 0X4);
            goto L_600050E0;
    }
    // 0x600050C4: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x600050C8: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x600050CC: addiu       $a0, $zero, 0x11C
    ctx->r4 = ADD32(0, 0X11C);
    // 0x600050D0: jal         0x60000B98
    // 0x600050D4: sw          $t9, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r25;
    ovl_stage_world4_B98(rdram, ctx);
        goto after_7;
    // 0x600050D4: sw          $t9, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r25;
    after_7:
    // 0x600050D8: b           L_600050F0
    // 0x600050DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600050F0;
    // 0x600050DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600050E0:
    // 0x600050E0: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
L_600050E4:
    // 0x600050E4: nop

    // 0x600050E8: sw          $zero, 0xC($t1)
    MEM_W(0XC, ctx->r9) = 0;
    // 0x600050EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600050F0:
    // 0x600050F0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x600050F4: jr          $ra
    // 0x600050F8: nop

    return;
    // 0x600050F8: nop

;}
RECOMP_FUNC void ovl_stage_world4_50FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600050FC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x60005100: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x60005104: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x60005108: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x6000510C: jal         0x600009DC
    // 0x60005110: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    ovl_stage_world4_9DC(rdram, ctx);
        goto after_0;
    // 0x60005110: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x60005114: lw          $s1, 0x1C($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X1C);
    // 0x60005118: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_6000511C:
    // 0x6000511C: jal         0x600009D0
    // 0x60005120: nop

    ovl_stage_world4_9D0(rdram, ctx);
        goto after_1;
    // 0x60005120: nop

    after_1:
    // 0x60005124: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60005128: slti        $at, $s0, 0x1E
    ctx->r1 = SIGNED(ctx->r16) < 0X1E ? 1 : 0;
    // 0x6000512C: bne         $at, $zero, L_6000511C
    if (ctx->r1 != 0) {
        // 0x60005130: nop
    
            goto L_6000511C;
    }
    // 0x60005130: nop

    // 0x60005134: lw          $v0, 0xC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XC);
    // 0x60005138: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x6000513C: bne         $v0, $at, L_60005154
    if (ctx->r2 != ctx->r1) {
        // 0x60005140: addiu       $a0, $zero, 0xD
        ctx->r4 = ADD32(0, 0XD);
            goto L_60005154;
    }
    // 0x60005140: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    // 0x60005144: jal         0x60000E80
    // 0x60005148: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_stage_world4_E80(rdram, ctx);
        goto after_2;
    // 0x60005148: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x6000514C: b           L_600051B8
    // 0x60005150: lui         $a1, 0x443B
    ctx->r5 = S32(0X443B << 16);
        goto L_600051B8;
    // 0x60005150: lui         $a1, 0x443B
    ctx->r5 = S32(0X443B << 16);
L_60005154:
    // 0x60005154: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x60005158: bne         $v0, $at, L_60005170
    if (ctx->r2 != ctx->r1) {
        // 0x6000515C: addiu       $a0, $zero, 0xD
        ctx->r4 = ADD32(0, 0XD);
            goto L_60005170;
    }
    // 0x6000515C: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    // 0x60005160: jal         0x60000E80
    // 0x60005164: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_stage_world4_E80(rdram, ctx);
        goto after_3;
    // 0x60005164: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_3:
    // 0x60005168: b           L_600051B8
    // 0x6000516C: lui         $a1, 0x443B
    ctx->r5 = S32(0X443B << 16);
        goto L_600051B8;
    // 0x6000516C: lui         $a1, 0x443B
    ctx->r5 = S32(0X443B << 16);
L_60005170:
    // 0x60005170: jal         0x6000034C
    // 0x60005174: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    ovl_stage_world4_34C(rdram, ctx);
        goto after_4;
    // 0x60005174: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_4:
    // 0x60005178: addiu       $s2, $zero, 0x2
    ctx->r18 = ADD32(0, 0X2);
    // 0x6000517C: beq         $v0, $s2, L_6000518C
    if (ctx->r2 == ctx->r18) {
        // 0x60005180: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_6000518C;
    }
    // 0x60005180: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x60005184: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
    // 0x60005188: bne         $v0, $s1, L_600051A8
    if (ctx->r2 != ctx->r17) {
        // 0x6000518C: addiu       $s1, $zero, 0x3
        ctx->r17 = ADD32(0, 0X3);
            goto L_600051A8;
    }
L_6000518C:
    // 0x6000518C: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
L_60005190:
    // 0x60005190: jal         0x6000034C
    // 0x60005194: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    ovl_stage_world4_34C(rdram, ctx);
        goto after_5;
    // 0x60005194: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_5:
    // 0x60005198: beq         $v0, $s2, L_6000518C
    if (ctx->r2 == ctx->r18) {
        // 0x6000519C: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_6000518C;
    }
    // 0x6000519C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x600051A0: beq         $v0, $s1, L_60005190
    if (ctx->r2 == ctx->r17) {
        // 0x600051A4: addiu       $s1, $zero, 0x3
        ctx->r17 = ADD32(0, 0X3);
            goto L_60005190;
    }
    // 0x600051A4: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
L_600051A8:
    // 0x600051A8: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    // 0x600051AC: jal         0x60000E80
    // 0x600051B0: addiu       $a1, $s0, 0x1
    ctx->r5 = ADD32(ctx->r16, 0X1);
    ovl_stage_world4_E80(rdram, ctx);
        goto after_6;
    // 0x600051B0: addiu       $a1, $s0, 0x1
    ctx->r5 = ADD32(ctx->r16, 0X1);
    after_6:
    // 0x600051B4: lui         $a1, 0x443B
    ctx->r5 = S32(0X443B << 16);
L_600051B8:
    // 0x600051B8: lui         $a3, 0x4422
    ctx->r7 = S32(0X4422 << 16);
    // 0x600051BC: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x600051C0: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x600051C4: addiu       $a0, $zero, 0x16C
    ctx->r4 = ADD32(0, 0X16C);
    // 0x600051C8: jal         0x60000274
    // 0x600051CC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    ovl_stage_world4_274(rdram, ctx);
        goto after_7;
    // 0x600051CC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_7:
    // 0x600051D0: jal         0x60000EEC
    // 0x600051D4: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    ovl_stage_world4_EEC(rdram, ctx);
        goto after_8;
    // 0x600051D4: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_8:
    // 0x600051D8: jal         0x60004B0C
    // 0x600051DC: nop

    ovl_stage_world4_4B0C(rdram, ctx);
        goto after_9;
    // 0x600051DC: nop

    after_9:
    // 0x600051E0: jal         0x600009AC
    // 0x600051E4: nop

    ovl_stage_world4_9AC(rdram, ctx);
        goto after_10;
    // 0x600051E4: nop

    after_10:
    // 0x600051E8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x600051EC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x600051F0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x600051F4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x600051F8: jr          $ra
    // 0x600051FC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x600051FC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_stage_world4_5200(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005200: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x60005204: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60005208: jal         0x60000B98
    // 0x6000520C: addiu       $a0, $zero, 0x10C
    ctx->r4 = ADD32(0, 0X10C);
    ovl_stage_world4_B98(rdram, ctx);
        goto after_0;
    // 0x6000520C: addiu       $a0, $zero, 0x10C
    ctx->r4 = ADD32(0, 0X10C);
    after_0:
    // 0x60005210: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60005214: addiu       $a0, $a0, 0x50FC
    ctx->r4 = ADD32(ctx->r4, 0X50FC);
    // 0x60005218: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x6000521C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60005220: jal         0x60000994
    // 0x60005224: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world4_994(rdram, ctx);
        goto after_1;
    // 0x60005224: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x60005228: lw          $t6, 0x1C($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X1C);
    // 0x6000522C: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    // 0x60005230: jal         0x60000BB0
    // 0x60005234: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_2;
    // 0x60005234: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    after_2:
    // 0x60005238: beq         $v0, $zero, L_60005268
    if (ctx->r2 == 0) {
        // 0x6000523C: nop
    
            goto L_60005268;
    }
    // 0x6000523C: nop

    // 0x60005240: jal         0x60000BB0
    // 0x60005244: addiu       $a0, $zero, 0x10B
    ctx->r4 = ADD32(0, 0X10B);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_3;
    // 0x60005244: addiu       $a0, $zero, 0x10B
    ctx->r4 = ADD32(0, 0X10B);
    after_3:
    // 0x60005248: beq         $v0, $zero, L_60005268
    if (ctx->r2 == 0) {
        // 0x6000524C: addiu       $t7, $zero, 0x7
        ctx->r15 = ADD32(0, 0X7);
            goto L_60005268;
    }
    // 0x6000524C: addiu       $t7, $zero, 0x7
    ctx->r15 = ADD32(0, 0X7);
    // 0x60005250: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x60005254: addiu       $a0, $zero, 0x10F
    ctx->r4 = ADD32(0, 0X10F);
    // 0x60005258: jal         0x60000B98
    // 0x6000525C: sw          $t7, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->r15;
    ovl_stage_world4_B98(rdram, ctx);
        goto after_4;
    // 0x6000525C: sw          $t7, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->r15;
    after_4:
    // 0x60005260: b           L_600052B0
    // 0x60005264: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600052B0;
    // 0x60005264: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005268:
    // 0x60005268: jal         0x60000BB0
    // 0x6000526C: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_5;
    // 0x6000526C: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    after_5:
    // 0x60005270: bne         $v0, $zero, L_600052A4
    if (ctx->r2 != 0) {
        // 0x60005274: lw          $t1, 0x18($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X18);
            goto L_600052A4;
    }
    // 0x60005274: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x60005278: jal         0x60000BB0
    // 0x6000527C: addiu       $a0, $zero, 0x10B
    ctx->r4 = ADD32(0, 0X10B);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_6;
    // 0x6000527C: addiu       $a0, $zero, 0x10B
    ctx->r4 = ADD32(0, 0X10B);
    after_6:
    // 0x60005280: bne         $v0, $zero, L_600052A0
    if (ctx->r2 != 0) {
        // 0x60005284: addiu       $t9, $zero, 0x4
        ctx->r25 = ADD32(0, 0X4);
            goto L_600052A0;
    }
    // 0x60005284: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x60005288: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x6000528C: addiu       $a0, $zero, 0x11D
    ctx->r4 = ADD32(0, 0X11D);
    // 0x60005290: jal         0x60000B98
    // 0x60005294: sw          $t9, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r25;
    ovl_stage_world4_B98(rdram, ctx);
        goto after_7;
    // 0x60005294: sw          $t9, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r25;
    after_7:
    // 0x60005298: b           L_600052B0
    // 0x6000529C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600052B0;
    // 0x6000529C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600052A0:
    // 0x600052A0: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
L_600052A4:
    // 0x600052A4: nop

    // 0x600052A8: sw          $zero, 0xC($t1)
    MEM_W(0XC, ctx->r9) = 0;
    // 0x600052AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600052B0:
    // 0x600052B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x600052B4: jr          $ra
    // 0x600052B8: nop

    return;
    // 0x600052B8: nop

;}
RECOMP_FUNC void ovl_stage_world4_52BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600052BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600052C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600052C4: jal         0x60000BB0
    // 0x600052C8: addiu       $a0, $zero, 0x18B
    ctx->r4 = ADD32(0, 0X18B);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_0;
    // 0x600052C8: addiu       $a0, $zero, 0x18B
    ctx->r4 = ADD32(0, 0X18B);
    after_0:
    // 0x600052CC: beq         $v0, $zero, L_600052F0
    if (ctx->r2 == 0) {
        // 0x600052D0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600052F0;
    }
    // 0x600052D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600052D4: jal         0x60000BB0
    // 0x600052D8: addiu       $a0, $zero, 0x18C
    ctx->r4 = ADD32(0, 0X18C);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_1;
    // 0x600052D8: addiu       $a0, $zero, 0x18C
    ctx->r4 = ADD32(0, 0X18C);
    after_1:
    // 0x600052DC: beq         $v0, $zero, L_600052EC
    if (ctx->r2 == 0) {
        // 0x600052E0: addiu       $a0, $zero, 0x6
        ctx->r4 = ADD32(0, 0X6);
            goto L_600052EC;
    }
    // 0x600052E0: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x600052E4: jal         0x60000E68
    // 0x600052E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world4_E68(rdram, ctx);
        goto after_2;
    // 0x600052E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
L_600052EC:
    // 0x600052EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600052F0:
    // 0x600052F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600052F4: jr          $ra
    // 0x600052F8: nop

    return;
    // 0x600052F8: nop

;}
RECOMP_FUNC void ovl_stage_world4_52FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600052FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60005300: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60005304: jal         0x60000BB0
    // 0x60005308: addiu       $a0, $zero, 0x194
    ctx->r4 = ADD32(0, 0X194);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_0;
    // 0x60005308: addiu       $a0, $zero, 0x194
    ctx->r4 = ADD32(0, 0X194);
    after_0:
    // 0x6000530C: beq         $v0, $zero, L_6000531C
    if (ctx->r2 == 0) {
        // 0x60005310: nop
    
            goto L_6000531C;
    }
    // 0x60005310: nop

    // 0x60005314: jal         0x60000EEC
    // 0x60005318: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    ovl_stage_world4_EEC(rdram, ctx);
        goto after_1;
    // 0x60005318: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    after_1:
L_6000531C:
    // 0x6000531C: jal         0x60000BB0
    // 0x60005320: addiu       $a0, $zero, 0x190
    ctx->r4 = ADD32(0, 0X190);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_2;
    // 0x60005320: addiu       $a0, $zero, 0x190
    ctx->r4 = ADD32(0, 0X190);
    after_2:
    // 0x60005324: beq         $v0, $zero, L_60005338
    if (ctx->r2 == 0) {
        // 0x60005328: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60005338;
    }
    // 0x60005328: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000532C: jal         0x60000EEC
    // 0x60005330: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    ovl_stage_world4_EEC(rdram, ctx);
        goto after_3;
    // 0x60005330: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    after_3:
    // 0x60005334: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005338:
    // 0x60005338: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x6000533C: jr          $ra
    // 0x60005340: nop

    return;
    // 0x60005340: nop

;}
RECOMP_FUNC void ovl_stage_world4_5344(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005344: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60005348: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x6000534C: jal         0x60000244
    // 0x60005350: addiu       $a0, $zero, 0x9F
    ctx->r4 = ADD32(0, 0X9F);
    ovl_stage_world4_244(rdram, ctx);
        goto after_0;
    // 0x60005350: addiu       $a0, $zero, 0x9F
    ctx->r4 = ADD32(0, 0X9F);
    after_0:
    // 0x60005354: jal         0x60000E44
    // 0x60005358: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    ovl_stage_world4_E44(rdram, ctx);
        goto after_1;
    // 0x60005358: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    after_1:
    // 0x6000535C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005360: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60005364: jr          $ra
    // 0x60005368: nop

    return;
    // 0x60005368: nop

;}
RECOMP_FUNC void ovl_stage_world4_536C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000536C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60005370: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60005374: jal         0x60000A60
    // 0x60005378: addiu       $a0, $zero, 0xA6C
    ctx->r4 = ADD32(0, 0XA6C);
    ovl_stage_world4_A60(rdram, ctx);
        goto after_0;
    // 0x60005378: addiu       $a0, $zero, 0xA6C
    ctx->r4 = ADD32(0, 0XA6C);
    after_0:
    // 0x6000537C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005380: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60005384: jr          $ra
    // 0x60005388: nop

    return;
    // 0x60005388: nop

;}
RECOMP_FUNC void ovl_stage_world4_538C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000538C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60005390: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60005394: jal         0x60000BB0
    // 0x60005398: addiu       $a0, $zero, 0x195
    ctx->r4 = ADD32(0, 0X195);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_0;
    // 0x60005398: addiu       $a0, $zero, 0x195
    ctx->r4 = ADD32(0, 0X195);
    after_0:
    // 0x6000539C: beq         $v0, $zero, L_600053AC
    if (ctx->r2 == 0) {
        // 0x600053A0: nop
    
            goto L_600053AC;
    }
    // 0x600053A0: nop

    // 0x600053A4: jal         0x60000EEC
    // 0x600053A8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    ovl_stage_world4_EEC(rdram, ctx);
        goto after_1;
    // 0x600053A8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_1:
L_600053AC:
    // 0x600053AC: jal         0x60000BB0
    // 0x600053B0: addiu       $a0, $zero, 0x191
    ctx->r4 = ADD32(0, 0X191);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_2;
    // 0x600053B0: addiu       $a0, $zero, 0x191
    ctx->r4 = ADD32(0, 0X191);
    after_2:
    // 0x600053B4: beq         $v0, $zero, L_600053C8
    if (ctx->r2 == 0) {
        // 0x600053B8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600053C8;
    }
    // 0x600053B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600053BC: jal         0x60000EEC
    // 0x600053C0: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    ovl_stage_world4_EEC(rdram, ctx);
        goto after_3;
    // 0x600053C0: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_3:
    // 0x600053C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600053C8:
    // 0x600053C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600053CC: jr          $ra
    // 0x600053D0: nop

    return;
    // 0x600053D0: nop

;}
RECOMP_FUNC void ovl_stage_world4_53D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600053D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600053D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600053DC: jal         0x60000244
    // 0x600053E0: addiu       $a0, $zero, 0x9F
    ctx->r4 = ADD32(0, 0X9F);
    ovl_stage_world4_244(rdram, ctx);
        goto after_0;
    // 0x600053E0: addiu       $a0, $zero, 0x9F
    ctx->r4 = ADD32(0, 0X9F);
    after_0:
    // 0x600053E4: jal         0x60000E44
    // 0x600053E8: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    ovl_stage_world4_E44(rdram, ctx);
        goto after_1;
    // 0x600053E8: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_1:
    // 0x600053EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600053F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600053F4: jr          $ra
    // 0x600053F8: nop

    return;
    // 0x600053F8: nop

;}
RECOMP_FUNC void ovl_stage_world4_53FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600053FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60005400: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60005404: jal         0x60000A60
    // 0x60005408: addiu       $a0, $zero, 0xA6E
    ctx->r4 = ADD32(0, 0XA6E);
    ovl_stage_world4_A60(rdram, ctx);
        goto after_0;
    // 0x60005408: addiu       $a0, $zero, 0xA6E
    ctx->r4 = ADD32(0, 0XA6E);
    after_0:
    // 0x6000540C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005410: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60005414: jr          $ra
    // 0x60005418: nop

    return;
    // 0x60005418: nop

;}
RECOMP_FUNC void ovl_stage_world4_541C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000541C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60005420: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60005424: jal         0x60000BB0
    // 0x60005428: addiu       $a0, $zero, 0x196
    ctx->r4 = ADD32(0, 0X196);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_0;
    // 0x60005428: addiu       $a0, $zero, 0x196
    ctx->r4 = ADD32(0, 0X196);
    after_0:
    // 0x6000542C: beq         $v0, $zero, L_6000543C
    if (ctx->r2 == 0) {
        // 0x60005430: nop
    
            goto L_6000543C;
    }
    // 0x60005430: nop

    // 0x60005434: jal         0x60000EEC
    // 0x60005438: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    ovl_stage_world4_EEC(rdram, ctx);
        goto after_1;
    // 0x60005438: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_1:
L_6000543C:
    // 0x6000543C: jal         0x60000BB0
    // 0x60005440: addiu       $a0, $zero, 0x192
    ctx->r4 = ADD32(0, 0X192);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_2;
    // 0x60005440: addiu       $a0, $zero, 0x192
    ctx->r4 = ADD32(0, 0X192);
    after_2:
    // 0x60005444: beq         $v0, $zero, L_60005458
    if (ctx->r2 == 0) {
        // 0x60005448: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60005458;
    }
    // 0x60005448: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000544C: jal         0x60000EEC
    // 0x60005450: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    ovl_stage_world4_EEC(rdram, ctx);
        goto after_3;
    // 0x60005450: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_3:
    // 0x60005454: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005458:
    // 0x60005458: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x6000545C: jr          $ra
    // 0x60005460: nop

    return;
    // 0x60005460: nop

;}
RECOMP_FUNC void ovl_stage_world4_5464(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005464: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60005468: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x6000546C: jal         0x60000244
    // 0x60005470: addiu       $a0, $zero, 0x9F
    ctx->r4 = ADD32(0, 0X9F);
    ovl_stage_world4_244(rdram, ctx);
        goto after_0;
    // 0x60005470: addiu       $a0, $zero, 0x9F
    ctx->r4 = ADD32(0, 0X9F);
    after_0:
    // 0x60005474: jal         0x60000E44
    // 0x60005478: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    ovl_stage_world4_E44(rdram, ctx);
        goto after_1;
    // 0x60005478: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_1:
    // 0x6000547C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005480: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60005484: jr          $ra
    // 0x60005488: nop

    return;
    // 0x60005488: nop

;}
RECOMP_FUNC void ovl_stage_world4_548C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000548C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60005490: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60005494: jal         0x60000A60
    // 0x60005498: addiu       $a0, $zero, 0xA6D
    ctx->r4 = ADD32(0, 0XA6D);
    ovl_stage_world4_A60(rdram, ctx);
        goto after_0;
    // 0x60005498: addiu       $a0, $zero, 0xA6D
    ctx->r4 = ADD32(0, 0XA6D);
    after_0:
    // 0x6000549C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600054A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600054A4: jr          $ra
    // 0x600054A8: nop

    return;
    // 0x600054A8: nop

;}
RECOMP_FUNC void ovl_stage_world4_54AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600054AC: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x600054B0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x600054B4: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x600054B8: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x600054BC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x600054C0: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x600054C4: jal         0x60000C1C
    // 0x600054C8: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    ovl_stage_world4_C1C(rdram, ctx);
        goto after_0;
    // 0x600054C8: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x600054CC: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x600054D0: jal         0x6000025C
    // 0x600054D4: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    ovl_stage_world4_25C(rdram, ctx);
        goto after_1;
    // 0x600054D4: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    after_1:
    // 0x600054D8: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x600054DC: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x600054E0: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x600054E4: nop

    // 0x600054E8: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x600054EC: jal         0x60000A6C
    // 0x600054F0: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    ovl_stage_world4_A6C(rdram, ctx);
        goto after_2;
    // 0x600054F0: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    after_2:
    // 0x600054F4: jal         0x60002DC0
    // 0x600054F8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world4_2DC0(rdram, ctx);
        goto after_3;
    // 0x600054F8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
    // 0x600054FC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60005500: jal         0x60002C10
    // 0x60005504: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world4_2C10(rdram, ctx);
        goto after_4;
    // 0x60005504: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x60005508: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x6000550C: jal         0x60002C10
    // 0x60005510: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world4_2C10(rdram, ctx);
        goto after_5;
    // 0x60005510: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x60005514: jal         0x60000DE4
    // 0x60005518: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world4_DE4(rdram, ctx);
        goto after_6;
    // 0x60005518: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_6:
    // 0x6000551C: addiu       $s1, $sp, 0x3C
    ctx->r17 = ADD32(ctx->r29, 0X3C);
    // 0x60005520: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x60005524: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60005528: jal         0x600006C4
    // 0x6000552C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_7;
    // 0x6000552C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_7:
    // 0x60005530: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x60005534: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60005538: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x6000553C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60005540: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x60005544: jal         0x60000DE4
    // 0x60005548: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    ovl_stage_world4_DE4(rdram, ctx);
        goto after_8;
    // 0x60005548: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    after_8:
    // 0x6000554C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60005550: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x60005554: jal         0x600006C4
    // 0x60005558: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_9;
    // 0x60005558: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_9:
    // 0x6000555C: jal         0x60000DE4
    // 0x60005560: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world4_DE4(rdram, ctx);
        goto after_10;
    // 0x60005560: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_10:
    // 0x60005564: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60005568: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x6000556C: jal         0x600006C4
    // 0x60005570: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_11;
    // 0x60005570: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_11:
    // 0x60005574: jal         0x60000244
    // 0x60005578: addiu       $a0, $zero, 0x165
    ctx->r4 = ADD32(0, 0X165);
    ovl_stage_world4_244(rdram, ctx);
        goto after_12;
    // 0x60005578: addiu       $a0, $zero, 0x165
    ctx->r4 = ADD32(0, 0X165);
    after_12:
    // 0x6000557C: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x60005580: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x60005584: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60005588: addiu       $s2, $zero, 0x3C
    ctx->r18 = ADD32(0, 0X3C);
L_6000558C:
    // 0x6000558C: jal         0x60000E74
    // 0x60005590: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    ovl_stage_world4_E74(rdram, ctx);
        goto after_13;
    // 0x60005590: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_13:
    // 0x60005594: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60005598: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x6000559C: jal         0x600006C4
    // 0x600055A0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_14;
    // 0x600055A0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_14:
    // 0x600055A4: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
    // 0x600055A8: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x600055AC: add.s       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f20.fl;
    // 0x600055B0: jal         0x60000E74
    // 0x600055B4: swc1        $f16, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f16.u32l;
    ovl_stage_world4_E74(rdram, ctx);
        goto after_15;
    // 0x600055B4: swc1        $f16, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f16.u32l;
    after_15:
    // 0x600055B8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600055BC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x600055C0: jal         0x600006C4
    // 0x600055C4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_16;
    // 0x600055C4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_16:
    // 0x600055C8: jal         0x600009D0
    // 0x600055CC: nop

    ovl_stage_world4_9D0(rdram, ctx);
        goto after_17;
    // 0x600055CC: nop

    after_17:
    // 0x600055D0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x600055D4: bne         $s0, $s2, L_6000558C
    if (ctx->r16 != ctx->r18) {
        // 0x600055D8: nop
    
            goto L_6000558C;
    }
    // 0x600055D8: nop

    // 0x600055DC: jal         0x60000244
    // 0x600055E0: addiu       $a0, $zero, 0xD4
    ctx->r4 = ADD32(0, 0XD4);
    ovl_stage_world4_244(rdram, ctx);
        goto after_18;
    // 0x600055E0: addiu       $a0, $zero, 0xD4
    ctx->r4 = ADD32(0, 0XD4);
    after_18:
    // 0x600055E4: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x600055E8: jal         0x60000E68
    // 0x600055EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world4_E68(rdram, ctx);
        goto after_19;
    // 0x600055EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_19:
    // 0x600055F0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600055F4: jal         0x60002C10
    // 0x600055F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world4_2C10(rdram, ctx);
        goto after_20;
    // 0x600055F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_20:
    // 0x600055FC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x60005600: jal         0x60002C10
    // 0x60005604: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world4_2C10(rdram, ctx);
        goto after_21;
    // 0x60005604: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_21:
    // 0x60005608: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x6000560C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x60005610: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x60005614: jal         0x60002EA0
    // 0x60005618: nop

    ovl_stage_world4_2EA0(rdram, ctx);
        goto after_22;
    // 0x60005618: nop

    after_22:
    // 0x6000561C: jal         0x60000814
    // 0x60005620: nop

    ovl_stage_world4_814(rdram, ctx);
        goto after_23;
    // 0x60005620: nop

    after_23:
    // 0x60005624: jal         0x60000244
    // 0x60005628: addiu       $a0, $zero, 0xD4
    ctx->r4 = ADD32(0, 0XD4);
    ovl_stage_world4_244(rdram, ctx);
        goto after_24;
    // 0x60005628: addiu       $a0, $zero, 0xD4
    ctx->r4 = ADD32(0, 0XD4);
    after_24:
    // 0x6000562C: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x60005630: jal         0x60000E68
    // 0x60005634: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world4_E68(rdram, ctx);
        goto after_25;
    // 0x60005634: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_25:
    // 0x60005638: jal         0x600009C4
    // 0x6000563C: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_stage_world4_9C4(rdram, ctx);
        goto after_26;
    // 0x6000563C: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_26:
    // 0x60005640: jal         0x60002DC0
    // 0x60005644: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world4_2DC0(rdram, ctx);
        goto after_27;
    // 0x60005644: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_27:
    // 0x60005648: jal         0x60000A78
    // 0x6000564C: nop

    ovl_stage_world4_A78(rdram, ctx);
        goto after_28;
    // 0x6000564C: nop

    after_28:
    // 0x60005650: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x60005654: lui         $at, 0xFFFE
    ctx->r1 = S32(0XFFFE << 16);
    // 0x60005658: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x6000565C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x60005660: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x60005664: jal         0x600009AC
    // 0x60005668: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    ovl_stage_world4_9AC(rdram, ctx);
        goto after_29;
    // 0x60005668: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    after_29:
    // 0x6000566C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x60005670: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x60005674: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x60005678: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x6000567C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x60005680: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x60005684: jr          $ra
    // 0x60005688: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x60005688: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_stage_world4_568C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000568C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x60005690: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60005694: jal         0x60000C1C
    // 0x60005698: nop

    ovl_stage_world4_C1C(rdram, ctx);
        goto after_0;
    // 0x60005698: nop

    after_0:
    // 0x6000569C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x600056A0: jal         0x60000BB0
    // 0x600056A4: addiu       $a0, $zero, 0x182
    ctx->r4 = ADD32(0, 0X182);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_1;
    // 0x600056A4: addiu       $a0, $zero, 0x182
    ctx->r4 = ADD32(0, 0X182);
    after_1:
    // 0x600056A8: beq         $v0, $zero, L_60005754
    if (ctx->r2 == 0) {
        // 0x600056AC: lw          $t8, 0x1C($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X1C);
            goto L_60005754;
    }
    // 0x600056AC: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x600056B0: jal         0x60000BB0
    // 0x600056B4: addiu       $a0, $zero, 0x183
    ctx->r4 = ADD32(0, 0X183);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_2;
    // 0x600056B4: addiu       $a0, $zero, 0x183
    ctx->r4 = ADD32(0, 0X183);
    after_2:
    // 0x600056B8: beq         $v0, $zero, L_60005754
    if (ctx->r2 == 0) {
        // 0x600056BC: lw          $t8, 0x1C($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X1C);
            goto L_60005754;
    }
    // 0x600056BC: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x600056C0: jal         0x60000BB0
    // 0x600056C4: addiu       $a0, $zero, 0x184
    ctx->r4 = ADD32(0, 0X184);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_3;
    // 0x600056C4: addiu       $a0, $zero, 0x184
    ctx->r4 = ADD32(0, 0X184);
    after_3:
    // 0x600056C8: beq         $v0, $zero, L_60005754
    if (ctx->r2 == 0) {
        // 0x600056CC: lw          $t8, 0x1C($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X1C);
            goto L_60005754;
    }
    // 0x600056CC: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x600056D0: jal         0x60000BB0
    // 0x600056D4: addiu       $a0, $zero, 0x185
    ctx->r4 = ADD32(0, 0X185);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_4;
    // 0x600056D4: addiu       $a0, $zero, 0x185
    ctx->r4 = ADD32(0, 0X185);
    after_4:
    // 0x600056D8: beq         $v0, $zero, L_60005754
    if (ctx->r2 == 0) {
        // 0x600056DC: lw          $t8, 0x1C($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X1C);
            goto L_60005754;
    }
    // 0x600056DC: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x600056E0: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x600056E4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x600056E8: lw          $t7, 0xC($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XC);
    // 0x600056EC: nop

    // 0x600056F0: beq         $t7, $at, L_60005740
    if (ctx->r15 == ctx->r1) {
        // 0x600056F4: addiu       $a0, $zero, 0xB
        ctx->r4 = ADD32(0, 0XB);
            goto L_60005740;
    }
    // 0x600056F4: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    // 0x600056F8: jal         0x60000E74
    // 0x600056FC: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    ovl_stage_world4_E74(rdram, ctx);
        goto after_5;
    // 0x600056FC: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_5:
    // 0x60005700: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60005704: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x60005708: jal         0x600006C4
    // 0x6000570C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_6;
    // 0x6000570C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_6:
    // 0x60005710: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x60005714: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60005718: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x6000571C: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x60005720: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x60005724: jal         0x60000E74
    // 0x60005728: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    ovl_stage_world4_E74(rdram, ctx);
        goto after_7;
    // 0x60005728: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    after_7:
    // 0x6000572C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60005730: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x60005734: jal         0x600006C4
    // 0x60005738: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_8;
    // 0x60005738: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_8:
    // 0x6000573C: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
L_60005740:
    // 0x60005740: jal         0x60000E80
    // 0x60005744: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world4_E80(rdram, ctx);
        goto after_9;
    // 0x60005744: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_9:
    // 0x60005748: jal         0x60000B98
    // 0x6000574C: addiu       $a0, $zero, 0x102
    ctx->r4 = ADD32(0, 0X102);
    ovl_stage_world4_B98(rdram, ctx);
        goto after_10;
    // 0x6000574C: addiu       $a0, $zero, 0x102
    ctx->r4 = ADD32(0, 0X102);
    after_10:
    // 0x60005750: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
L_60005754:
    // 0x60005754: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x60005758: lw          $t9, 0xC($t8)
    ctx->r25 = MEM_W(ctx->r24, 0XC);
    // 0x6000575C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60005760: bne         $t9, $at, L_60005778
    if (ctx->r25 != ctx->r1) {
        // 0x60005764: addiu       $a0, $a0, 0x54AC
        ctx->r4 = ADD32(ctx->r4, 0X54AC);
            goto L_60005778;
    }
    // 0x60005764: addiu       $a0, $a0, 0x54AC
    ctx->r4 = ADD32(ctx->r4, 0X54AC);
    // 0x60005768: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x6000576C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60005770: jal         0x60000994
    // 0x60005774: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world4_994(rdram, ctx);
        goto after_11;
    // 0x60005774: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_11:
L_60005778:
    // 0x60005778: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000577C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x60005780: jr          $ra
    // 0x60005784: nop

    return;
    // 0x60005784: nop

;}
RECOMP_FUNC void ovl_stage_world4_5788(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005788: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x6000578C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x60005790: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x60005794: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x60005798: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x6000579C: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x600057A0: jal         0x60000C1C
    // 0x600057A4: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    ovl_stage_world4_C1C(rdram, ctx);
        goto after_0;
    // 0x600057A4: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x600057A8: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x600057AC: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x600057B0: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x600057B4: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x600057B8: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x600057BC: jal         0x60002DC0
    // 0x600057C0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world4_2DC0(rdram, ctx);
        goto after_1;
    // 0x600057C0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x600057C4: jal         0x60000244
    // 0x600057C8: addiu       $a0, $zero, 0xD4
    ctx->r4 = ADD32(0, 0XD4);
    ovl_stage_world4_244(rdram, ctx);
        goto after_2;
    // 0x600057C8: addiu       $a0, $zero, 0xD4
    ctx->r4 = ADD32(0, 0XD4);
    after_2:
    // 0x600057CC: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x600057D0: jal         0x60000E68
    // 0x600057D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world4_E68(rdram, ctx);
        goto after_3;
    // 0x600057D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x600057D8: jal         0x600009C4
    // 0x600057DC: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_stage_world4_9C4(rdram, ctx);
        goto after_4;
    // 0x600057DC: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_4:
    // 0x600057E0: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x600057E4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x600057E8: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x600057EC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x600057F0: jal         0x60002EA0
    // 0x600057F4: nop

    ovl_stage_world4_2EA0(rdram, ctx);
        goto after_5;
    // 0x600057F4: nop

    after_5:
    // 0x600057F8: jal         0x60000244
    // 0x600057FC: addiu       $a0, $zero, 0xD4
    ctx->r4 = ADD32(0, 0XD4);
    ovl_stage_world4_244(rdram, ctx);
        goto after_6;
    // 0x600057FC: addiu       $a0, $zero, 0xD4
    ctx->r4 = ADD32(0, 0XD4);
    after_6:
    // 0x60005800: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x60005804: jal         0x60000E68
    // 0x60005808: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world4_E68(rdram, ctx);
        goto after_7;
    // 0x60005808: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
    // 0x6000580C: jal         0x600009C4
    // 0x60005810: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_stage_world4_9C4(rdram, ctx);
        goto after_8;
    // 0x60005810: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_8:
    // 0x60005814: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60005818: jal         0x60002C10
    // 0x6000581C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world4_2C10(rdram, ctx);
        goto after_9;
    // 0x6000581C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x60005820: jal         0x60000244
    // 0x60005824: addiu       $a0, $zero, 0x165
    ctx->r4 = ADD32(0, 0X165);
    ovl_stage_world4_244(rdram, ctx);
        goto after_10;
    // 0x60005824: addiu       $a0, $zero, 0x165
    ctx->r4 = ADD32(0, 0X165);
    after_10:
    // 0x60005828: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x6000582C: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x60005830: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60005834: addiu       $s2, $zero, 0x3C
    ctx->r18 = ADD32(0, 0X3C);
    // 0x60005838: addiu       $s1, $sp, 0x3C
    ctx->r17 = ADD32(ctx->r29, 0X3C);
L_6000583C:
    // 0x6000583C: jal         0x60000E74
    // 0x60005840: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    ovl_stage_world4_E74(rdram, ctx);
        goto after_11;
    // 0x60005840: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_11:
    // 0x60005844: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60005848: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x6000584C: jal         0x600006C4
    // 0x60005850: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_12;
    // 0x60005850: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_12:
    // 0x60005854: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x60005858: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x6000585C: sub.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f20.fl;
    // 0x60005860: jal         0x60000E74
    // 0x60005864: swc1        $f6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f6.u32l;
    ovl_stage_world4_E74(rdram, ctx);
        goto after_13;
    // 0x60005864: swc1        $f6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f6.u32l;
    after_13:
    // 0x60005868: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x6000586C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x60005870: jal         0x600006C4
    // 0x60005874: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_14;
    // 0x60005874: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_14:
    // 0x60005878: jal         0x600009D0
    // 0x6000587C: nop

    ovl_stage_world4_9D0(rdram, ctx);
        goto after_15;
    // 0x6000587C: nop

    after_15:
    // 0x60005880: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60005884: bne         $s0, $s2, L_6000583C
    if (ctx->r16 != ctx->r18) {
        // 0x60005888: nop
    
            goto L_6000583C;
    }
    // 0x60005888: nop

    // 0x6000588C: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x60005890: lui         $at, 0xFFFE
    ctx->r1 = S32(0XFFFE << 16);
    // 0x60005894: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x60005898: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x6000589C: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x600058A0: jal         0x60000268
    // 0x600058A4: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    ovl_stage_world4_268(rdram, ctx);
        goto after_16;
    // 0x600058A4: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    after_16:
    // 0x600058A8: addiu       $a0, $zero, 0x872
    ctx->r4 = ADD32(0, 0X872);
    // 0x600058AC: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x600058B0: jal         0x60000C10
    // 0x600058B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_stage_world4_C10(rdram, ctx);
        goto after_17;
    // 0x600058B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_17:
    // 0x600058B8: jal         0x600009AC
    // 0x600058BC: nop

    ovl_stage_world4_9AC(rdram, ctx);
        goto after_18;
    // 0x600058BC: nop

    after_18:
    // 0x600058C0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x600058C4: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x600058C8: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x600058CC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x600058D0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x600058D4: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x600058D8: jr          $ra
    // 0x600058DC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x600058DC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_stage_world4_58E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600058E0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x600058E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600058E8: jal         0x60000DE4
    // 0x600058EC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world4_DE4(rdram, ctx);
        goto after_0;
    // 0x600058EC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x600058F0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600058F4: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x600058F8: jal         0x600006C4
    // 0x600058FC: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_1;
    // 0x600058FC: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x60005900: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x60005904: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60005908: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x6000590C: nop

    // 0x60005910: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x60005914: nop

    // 0x60005918: bc1f        L_60005984
    if (!c1cs) {
        // 0x6000591C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60005984;
    }
    // 0x6000591C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005920: jal         0x60000BB0
    // 0x60005924: addiu       $a0, $zero, 0x102
    ctx->r4 = ADD32(0, 0X102);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_2;
    // 0x60005924: addiu       $a0, $zero, 0x102
    ctx->r4 = ADD32(0, 0X102);
    after_2:
    // 0x60005928: beq         $v0, $zero, L_60005984
    if (ctx->r2 == 0) {
        // 0x6000592C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60005984;
    }
    // 0x6000592C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005930: jal         0x60000BA4
    // 0x60005934: addiu       $a0, $zero, 0x102
    ctx->r4 = ADD32(0, 0X102);
    ovl_stage_world4_BA4(rdram, ctx);
        goto after_3;
    // 0x60005934: addiu       $a0, $zero, 0x102
    ctx->r4 = ADD32(0, 0X102);
    after_3:
    // 0x60005938: jal         0x60000DE4
    // 0x6000593C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world4_DE4(rdram, ctx);
        goto after_4;
    // 0x6000593C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_4:
    // 0x60005940: jal         0x60000CC4
    // 0x60005944: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_stage_world4_CC4(rdram, ctx);
        goto after_5;
    // 0x60005944: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_5:
    // 0x60005948: jal         0x60000A90
    // 0x6000594C: nop

    ovl_stage_world4_A90(rdram, ctx);
        goto after_6;
    // 0x6000594C: nop

    after_6:
    // 0x60005950: jal         0x60000A6C
    // 0x60005954: nop

    ovl_stage_world4_A6C(rdram, ctx);
        goto after_7;
    // 0x60005954: nop

    after_7:
    // 0x60005958: lui         $a1, 0x409C
    ctx->r5 = S32(0X409C << 16);
    // 0x6000595C: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x60005960: jal         0x60001028
    // 0x60005964: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world4_1028(rdram, ctx);
        goto after_8;
    // 0x60005964: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_8:
    // 0x60005968: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x6000596C: addiu       $a0, $a0, 0x5788
    ctx->r4 = ADD32(ctx->r4, 0X5788);
    // 0x60005970: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60005974: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60005978: jal         0x60000994
    // 0x6000597C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world4_994(rdram, ctx);
        goto after_9;
    // 0x6000597C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_9:
    // 0x60005980: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005984:
    // 0x60005984: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x60005988: jr          $ra
    // 0x6000598C: nop

    return;
    // 0x6000598C: nop

;}
RECOMP_FUNC void ovl_stage_world4_5990(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005990: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60005994: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60005998: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    // 0x6000599C: jal         0x60000E80
    // 0x600059A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world4_E80(rdram, ctx);
        goto after_0;
    // 0x600059A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x600059A4: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    // 0x600059A8: jal         0x60000E80
    // 0x600059AC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_stage_world4_E80(rdram, ctx);
        goto after_1;
    // 0x600059AC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x600059B0: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    // 0x600059B4: jal         0x60000E80
    // 0x600059B8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    ovl_stage_world4_E80(rdram, ctx);
        goto after_2;
    // 0x600059B8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_2:
    // 0x600059BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600059C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600059C4: jr          $ra
    // 0x600059C8: nop

    return;
    // 0x600059C8: nop

;}
RECOMP_FUNC void ovl_stage_world4_59CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600059CC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x600059D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x600059D4: jal         0x60000C1C
    // 0x600059D8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    ovl_stage_world4_C1C(rdram, ctx);
        goto after_0;
    // 0x600059D8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x600059DC: lbu         $t6, 0x20($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X20);
    // 0x600059E0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x600059E4: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x600059E8: lw          $t7, 0xC($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XC);
    // 0x600059EC: nop

    // 0x600059F0: bne         $t7, $zero, L_60005AE4
    if (ctx->r15 != 0) {
        // 0x600059F4: nop
    
            goto L_60005AE4;
    }
    // 0x600059F4: nop

    // 0x600059F8: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x600059FC: nop

    // 0x60005A00: andi        $t9, $t8, 0x800
    ctx->r25 = ctx->r24 & 0X800;
    // 0x60005A04: bne         $t9, $zero, L_60005AE4
    if (ctx->r25 != 0) {
        // 0x60005A08: nop
    
            goto L_60005AE4;
    }
    // 0x60005A08: nop

    // 0x60005A0C: jal         0x60000BB0
    // 0x60005A10: addiu       $a0, $zero, 0x97
    ctx->r4 = ADD32(0, 0X97);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_1;
    // 0x60005A10: addiu       $a0, $zero, 0x97
    ctx->r4 = ADD32(0, 0X97);
    after_1:
    // 0x60005A14: bne         $v0, $zero, L_60005A7C
    if (ctx->r2 != 0) {
        // 0x60005A18: nop
    
            goto L_60005A7C;
    }
    // 0x60005A18: nop

    // 0x60005A1C: jal         0x60000B98
    // 0x60005A20: addiu       $a0, $zero, 0x97
    ctx->r4 = ADD32(0, 0X97);
    ovl_stage_world4_B98(rdram, ctx);
        goto after_2;
    // 0x60005A20: addiu       $a0, $zero, 0x97
    ctx->r4 = ADD32(0, 0X97);
    after_2:
    // 0x60005A24: jal         0x60000EEC
    // 0x60005A28: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    ovl_stage_world4_EEC(rdram, ctx);
        goto after_3;
    // 0x60005A28: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    after_3:
    // 0x60005A2C: jal         0x60000A60
    // 0x60005A30: addiu       $a0, $zero, 0xAEC
    ctx->r4 = ADD32(0, 0XAEC);
    ovl_stage_world4_A60(rdram, ctx);
        goto after_4;
    // 0x60005A30: addiu       $a0, $zero, 0xAEC
    ctx->r4 = ADD32(0, 0XAEC);
    after_4:
    // 0x60005A34: jal         0x600009D0
    // 0x60005A38: nop

    ovl_stage_world4_9D0(rdram, ctx);
        goto after_5;
    // 0x60005A38: nop

    after_5:
    // 0x60005A3C: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x60005A40: nop

    // 0x60005A44: andi        $t1, $t0, 0x800
    ctx->r9 = ctx->r8 & 0X800;
    // 0x60005A48: beq         $t1, $zero, L_60005A6C
    if (ctx->r9 == 0) {
        // 0x60005A4C: nop
    
            goto L_60005A6C;
    }
    // 0x60005A4C: nop

L_60005A50:
    // 0x60005A50: jal         0x600009D0
    // 0x60005A54: nop

    ovl_stage_world4_9D0(rdram, ctx);
        goto after_6;
    // 0x60005A54: nop

    after_6:
    // 0x60005A58: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x60005A5C: nop

    // 0x60005A60: andi        $t3, $t2, 0x800
    ctx->r11 = ctx->r10 & 0X800;
    // 0x60005A64: bne         $t3, $zero, L_60005A50
    if (ctx->r11 != 0) {
        // 0x60005A68: nop
    
            goto L_60005A50;
    }
    // 0x60005A68: nop

L_60005A6C:
    // 0x60005A6C: jal         0x600009C4
    // 0x60005A70: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    ovl_stage_world4_9C4(rdram, ctx);
        goto after_7;
    // 0x60005A70: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_7:
    // 0x60005A74: b           L_60005A84
    // 0x60005A78: nop

        goto L_60005A84;
    // 0x60005A78: nop

L_60005A7C:
    // 0x60005A7C: jal         0x60005990
    // 0x60005A80: nop

    ovl_stage_world4_5990(rdram, ctx);
        goto after_8;
    // 0x60005A80: nop

    after_8:
L_60005A84:
    // 0x60005A84: jal         0x60000EE0
    // 0x60005A88: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world4_EE0(rdram, ctx);
        goto after_9;
    // 0x60005A88: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_9:
    // 0x60005A8C: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x60005A90: nop

    // 0x60005A94: beq         $v0, $t4, L_60005AEC
    if (ctx->r2 == ctx->r12) {
        // 0x60005A98: nop
    
            goto L_60005AEC;
    }
    // 0x60005A98: nop

    // 0x60005A9C: jal         0x60000A60
    // 0x60005AA0: addiu       $a0, $zero, 0xAF4
    ctx->r4 = ADD32(0, 0XAF4);
    ovl_stage_world4_A60(rdram, ctx);
        goto after_10;
    // 0x60005AA0: addiu       $a0, $zero, 0xAF4
    ctx->r4 = ADD32(0, 0XAF4);
    after_10:
    // 0x60005AA4: jal         0x600009D0
    // 0x60005AA8: nop

    ovl_stage_world4_9D0(rdram, ctx);
        goto after_11;
    // 0x60005AA8: nop

    after_11:
    // 0x60005AAC: lw          $t5, 0x0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X0);
    // 0x60005AB0: nop

    // 0x60005AB4: andi        $t6, $t5, 0x800
    ctx->r14 = ctx->r13 & 0X800;
    // 0x60005AB8: beq         $t6, $zero, L_60005AEC
    if (ctx->r14 == 0) {
        // 0x60005ABC: nop
    
            goto L_60005AEC;
    }
    // 0x60005ABC: nop

L_60005AC0:
    // 0x60005AC0: jal         0x600009D0
    // 0x60005AC4: nop

    ovl_stage_world4_9D0(rdram, ctx);
        goto after_12;
    // 0x60005AC4: nop

    after_12:
    // 0x60005AC8: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x60005ACC: nop

    // 0x60005AD0: andi        $t8, $t7, 0x800
    ctx->r24 = ctx->r15 & 0X800;
    // 0x60005AD4: bne         $t8, $zero, L_60005AC0
    if (ctx->r24 != 0) {
        // 0x60005AD8: nop
    
            goto L_60005AC0;
    }
    // 0x60005AD8: nop

    // 0x60005ADC: b           L_60005AEC
    // 0x60005AE0: nop

        goto L_60005AEC;
    // 0x60005AE0: nop

L_60005AE4:
    // 0x60005AE4: jal         0x60005990
    // 0x60005AE8: nop

    ovl_stage_world4_5990(rdram, ctx);
        goto after_13;
    // 0x60005AE8: nop

    after_13:
L_60005AEC:
    // 0x60005AEC: jal         0x600009AC
    // 0x60005AF0: nop

    ovl_stage_world4_9AC(rdram, ctx);
        goto after_14;
    // 0x60005AF0: nop

    after_14:
    // 0x60005AF4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x60005AF8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x60005AFC: jr          $ra
    // 0x60005B00: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x60005B00: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_stage_world4_5B04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005B04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60005B08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60005B0C: jal         0x60000C1C
    // 0x60005B10: nop

    ovl_stage_world4_C1C(rdram, ctx);
        goto after_0;
    // 0x60005B10: nop

    after_0:
    // 0x60005B14: lw          $t6, 0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC);
    // 0x60005B18: nop

    // 0x60005B1C: bne         $t6, $zero, L_60005B8C
    if (ctx->r14 != 0) {
        // 0x60005B20: nop
    
            goto L_60005B8C;
    }
    // 0x60005B20: nop

    // 0x60005B24: jal         0x60000BB0
    // 0x60005B28: addiu       $a0, $zero, 0x83
    ctx->r4 = ADD32(0, 0X83);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_1;
    // 0x60005B28: addiu       $a0, $zero, 0x83
    ctx->r4 = ADD32(0, 0X83);
    after_1:
    // 0x60005B2C: beq         $v0, $zero, L_60005B8C
    if (ctx->r2 == 0) {
        // 0x60005B30: nop
    
            goto L_60005B8C;
    }
    // 0x60005B30: nop

    // 0x60005B34: jal         0x60000F50
    // 0x60005B38: nop

    ovl_stage_world4_F50(rdram, ctx);
        goto after_2;
    // 0x60005B38: nop

    after_2:
    // 0x60005B3C: jal         0x60000BB0
    // 0x60005B40: addiu       $a0, $zero, 0x193
    ctx->r4 = ADD32(0, 0X193);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_3;
    // 0x60005B40: addiu       $a0, $zero, 0x193
    ctx->r4 = ADD32(0, 0X193);
    after_3:
    // 0x60005B44: beq         $v0, $zero, L_60005B5C
    if (ctx->r2 == 0) {
        // 0x60005B48: nop
    
            goto L_60005B5C;
    }
    // 0x60005B48: nop

    // 0x60005B4C: jal         0x60000EEC
    // 0x60005B50: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    ovl_stage_world4_EEC(rdram, ctx);
        goto after_4;
    // 0x60005B50: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    after_4:
    // 0x60005B54: b           L_60005B64
    // 0x60005B58: nop

        goto L_60005B64;
    // 0x60005B58: nop

L_60005B5C:
    // 0x60005B5C: jal         0x60000E44
    // 0x60005B60: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    ovl_stage_world4_E44(rdram, ctx);
        goto after_5;
    // 0x60005B60: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    after_5:
L_60005B64:
    // 0x60005B64: jal         0x60000BB0
    // 0x60005B68: addiu       $a0, $zero, 0x18F
    ctx->r4 = ADD32(0, 0X18F);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_6;
    // 0x60005B68: addiu       $a0, $zero, 0x18F
    ctx->r4 = ADD32(0, 0X18F);
    after_6:
    // 0x60005B6C: beq         $v0, $zero, L_60005B84
    if (ctx->r2 == 0) {
        // 0x60005B70: nop
    
            goto L_60005B84;
    }
    // 0x60005B70: nop

    // 0x60005B74: jal         0x60000EEC
    // 0x60005B78: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    ovl_stage_world4_EEC(rdram, ctx);
        goto after_7;
    // 0x60005B78: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    after_7:
    // 0x60005B7C: b           L_60005B8C
    // 0x60005B80: nop

        goto L_60005B8C;
    // 0x60005B80: nop

L_60005B84:
    // 0x60005B84: jal         0x60000E44
    // 0x60005B88: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    ovl_stage_world4_E44(rdram, ctx);
        goto after_8;
    // 0x60005B88: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    after_8:
L_60005B8C:
    // 0x60005B8C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60005B90: addiu       $a0, $a0, 0x59CC
    ctx->r4 = ADD32(ctx->r4, 0X59CC);
    // 0x60005B94: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60005B98: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60005B9C: jal         0x60000994
    // 0x60005BA0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world4_994(rdram, ctx);
        goto after_9;
    // 0x60005BA0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_9:
    // 0x60005BA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005BA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60005BAC: jr          $ra
    // 0x60005BB0: nop

    return;
    // 0x60005BB0: nop

;}
RECOMP_FUNC void ovl_stage_world4_5BB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005BB4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x60005BB8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x60005BBC: jal         0x60000C1C
    // 0x60005BC0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    ovl_stage_world4_C1C(rdram, ctx);
        goto after_0;
    // 0x60005BC0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x60005BC4: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x60005BC8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x60005BCC: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x60005BD0: beq         $t7, $zero, L_60005BE0
    if (ctx->r15 == 0) {
        // 0x60005BD4: nop
    
            goto L_60005BE0;
    }
    // 0x60005BD4: nop

    // 0x60005BD8: jal         0x600009AC
    // 0x60005BDC: nop

    ovl_stage_world4_9AC(rdram, ctx);
        goto after_1;
    // 0x60005BDC: nop

    after_1:
L_60005BE0:
    // 0x60005BE0: jal         0x60000FA8
    // 0x60005BE4: nop

    ovl_stage_world4_FA8(rdram, ctx);
        goto after_2;
    // 0x60005BE4: nop

    after_2:
    // 0x60005BE8: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x60005BEC: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x60005BF0: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x60005BF4: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x60005BF8: jal         0x60000A60
    // 0x60005BFC: addiu       $a0, $zero, 0xACA
    ctx->r4 = ADD32(0, 0XACA);
    ovl_stage_world4_A60(rdram, ctx);
        goto after_3;
    // 0x60005BFC: addiu       $a0, $zero, 0xACA
    ctx->r4 = ADD32(0, 0XACA);
    after_3:
    // 0x60005C00: jal         0x600010F0
    // 0x60005C04: nop

    ovl_stage_world4_10F0(rdram, ctx);
        goto after_4;
    // 0x60005C04: nop

    after_4:
    // 0x60005C08: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x60005C0C: lui         $at, 0xFFFE
    ctx->r1 = S32(0XFFFE << 16);
    // 0x60005C10: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x60005C14: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x60005C18: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
    // 0x60005C1C: jal         0x60002798
    // 0x60005C20: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world4_2798(rdram, ctx);
        goto after_5;
    // 0x60005C20: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_5:
    // 0x60005C24: jal         0x60001158
    // 0x60005C28: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world4_1158(rdram, ctx);
        goto after_6;
    // 0x60005C28: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_6:
    // 0x60005C2C: jal         0x60000BB0
    // 0x60005C30: addiu       $a0, $zero, 0x83
    ctx->r4 = ADD32(0, 0X83);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_7;
    // 0x60005C30: addiu       $a0, $zero, 0x83
    ctx->r4 = ADD32(0, 0X83);
    after_7:
    // 0x60005C34: beq         $v0, $zero, L_60005C4C
    if (ctx->r2 == 0) {
        // 0x60005C38: nop
    
            goto L_60005C4C;
    }
    // 0x60005C38: nop

    // 0x60005C3C: jal         0x60000C7C
    // 0x60005C40: nop

    ovl_stage_world4_C7C(rdram, ctx);
        goto after_8;
    // 0x60005C40: nop

    after_8:
    // 0x60005C44: b           L_60005C64
    // 0x60005C48: nop

        goto L_60005C64;
    // 0x60005C48: nop

L_60005C4C:
    // 0x60005C4C: jal         0x60000B98
    // 0x60005C50: addiu       $a0, $zero, 0x83
    ctx->r4 = ADD32(0, 0X83);
    ovl_stage_world4_B98(rdram, ctx);
        goto after_9;
    // 0x60005C50: addiu       $a0, $zero, 0x83
    ctx->r4 = ADD32(0, 0X83);
    after_9:
    // 0x60005C54: addiu       $a0, $zero, 0x8B9
    ctx->r4 = ADD32(0, 0X8B9);
    // 0x60005C58: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x60005C5C: jal         0x60000C10
    // 0x60005C60: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_stage_world4_C10(rdram, ctx);
        goto after_10;
    // 0x60005C60: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_10:
L_60005C64:
    // 0x60005C64: jal         0x600009AC
    // 0x60005C68: nop

    ovl_stage_world4_9AC(rdram, ctx);
        goto after_11;
    // 0x60005C68: nop

    after_11:
    // 0x60005C6C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x60005C70: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x60005C74: jr          $ra
    // 0x60005C78: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x60005C78: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_stage_world4_5C7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005C7C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60005C80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60005C84: jal         0x60000C1C
    // 0x60005C88: nop

    ovl_stage_world4_C1C(rdram, ctx);
        goto after_0;
    // 0x60005C88: nop

    after_0:
    // 0x60005C8C: jal         0x60000EEC
    // 0x60005C90: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    ovl_stage_world4_EEC(rdram, ctx);
        goto after_1;
    // 0x60005C90: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_1:
    // 0x60005C94: jal         0x60000EEC
    // 0x60005C98: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    ovl_stage_world4_EEC(rdram, ctx);
        goto after_2;
    // 0x60005C98: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    after_2:
    // 0x60005C9C: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x60005CA0: jal         0x60000F04
    // 0x60005CA4: addiu       $a1, $zero, -0x11
    ctx->r5 = ADD32(0, -0X11);
    ovl_stage_world4_F04(rdram, ctx);
        goto after_3;
    // 0x60005CA4: addiu       $a1, $zero, -0x11
    ctx->r5 = ADD32(0, -0X11);
    after_3:
    // 0x60005CA8: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x60005CAC: jal         0x60000F04
    // 0x60005CB0: addiu       $a1, $zero, -0x11
    ctx->r5 = ADD32(0, -0X11);
    ovl_stage_world4_F04(rdram, ctx);
        goto after_4;
    // 0x60005CB0: addiu       $a1, $zero, -0x11
    ctx->r5 = ADD32(0, -0X11);
    after_4:
    // 0x60005CB4: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    // 0x60005CB8: jal         0x60000F04
    // 0x60005CBC: addiu       $a1, $zero, -0x11
    ctx->r5 = ADD32(0, -0X11);
    ovl_stage_world4_F04(rdram, ctx);
        goto after_5;
    // 0x60005CBC: addiu       $a1, $zero, -0x11
    ctx->r5 = ADD32(0, -0X11);
    after_5:
    // 0x60005CC0: jal         0x60000B98
    // 0x60005CC4: addiu       $a0, $zero, 0xAF
    ctx->r4 = ADD32(0, 0XAF);
    ovl_stage_world4_B98(rdram, ctx);
        goto after_6;
    // 0x60005CC4: addiu       $a0, $zero, 0xAF
    ctx->r4 = ADD32(0, 0XAF);
    after_6:
    // 0x60005CC8: jal         0x60000A60
    // 0x60005CCC: addiu       $a0, $zero, 0xAC9
    ctx->r4 = ADD32(0, 0XAC9);
    ovl_stage_world4_A60(rdram, ctx);
        goto after_7;
    // 0x60005CCC: addiu       $a0, $zero, 0xAC9
    ctx->r4 = ADD32(0, 0XAC9);
    after_7:
    // 0x60005CD0: jal         0x600010F0
    // 0x60005CD4: nop

    ovl_stage_world4_10F0(rdram, ctx);
        goto after_8;
    // 0x60005CD4: nop

    after_8:
    // 0x60005CD8: jal         0x60002798
    // 0x60005CDC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world4_2798(rdram, ctx);
        goto after_9;
    // 0x60005CDC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_9:
    // 0x60005CE0: jal         0x600009AC
    // 0x60005CE4: nop

    ovl_stage_world4_9AC(rdram, ctx);
        goto after_10;
    // 0x60005CE4: nop

    after_10:
    // 0x60005CE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005CEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60005CF0: jr          $ra
    // 0x60005CF4: nop

    return;
    // 0x60005CF4: nop

;}
RECOMP_FUNC void ovl_stage_world4_5CF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005CF8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x60005CFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60005D00: jal         0x6000025C
    // 0x60005D04: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    ovl_stage_world4_25C(rdram, ctx);
        goto after_0;
    // 0x60005D04: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    after_0:
    // 0x60005D08: jal         0x60000244
    // 0x60005D0C: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    ovl_stage_world4_244(rdram, ctx);
        goto after_1;
    // 0x60005D0C: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    after_1:
    // 0x60005D10: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x60005D14: addiu       $t6, $zero, 0x8E
    ctx->r14 = ADD32(0, 0X8E);
    // 0x60005D18: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x60005D1C: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    // 0x60005D20: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x60005D24: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x60005D28: jal         0x60000E74
    // 0x60005D2C: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    ovl_stage_world4_E74(rdram, ctx);
        goto after_2;
    // 0x60005D2C: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x60005D30: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60005D34: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    // 0x60005D38: jal         0x600006C4
    // 0x60005D3C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_3;
    // 0x60005D3C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_3:
    // 0x60005D40: jal         0x60000EEC
    // 0x60005D44: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    ovl_stage_world4_EEC(rdram, ctx);
        goto after_4;
    // 0x60005D44: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_4:
    // 0x60005D48: jal         0x60000EEC
    // 0x60005D4C: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    ovl_stage_world4_EEC(rdram, ctx);
        goto after_5;
    // 0x60005D4C: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    after_5:
    // 0x60005D50: jal         0x60000EEC
    // 0x60005D54: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    ovl_stage_world4_EEC(rdram, ctx);
        goto after_6;
    // 0x60005D54: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    after_6:
    // 0x60005D58: jal         0x60000EEC
    // 0x60005D5C: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    ovl_stage_world4_EEC(rdram, ctx);
        goto after_7;
    // 0x60005D5C: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    after_7:
    // 0x60005D60: jal         0x600009AC
    // 0x60005D64: nop

    ovl_stage_world4_9AC(rdram, ctx);
        goto after_8;
    // 0x60005D64: nop

    after_8:
    // 0x60005D68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005D6C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x60005D70: jr          $ra
    // 0x60005D74: nop

    return;
    // 0x60005D74: nop

;}
RECOMP_FUNC void ovl_stage_world4_5D78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005D78: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x60005D7C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x60005D80: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x60005D84: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x60005D88: jal         0x60001158
    // 0x60005D8C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world4_1158(rdram, ctx);
        goto after_0;
    // 0x60005D8C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x60005D90: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60005D94: lwc1        $f4, 0x7420($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7420);
    // 0x60005D98: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60005D9C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x60005DA0: lwc1        $f8, 0x7424($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X7424);
    // 0x60005DA4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x60005DA8: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x60005DAC: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    // 0x60005DB0: jal         0x60000DE4
    // 0x60005DB4: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    ovl_stage_world4_DE4(rdram, ctx);
        goto after_1;
    // 0x60005DB4: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x60005DB8: addiu       $s0, $sp, 0x24
    ctx->r16 = ADD32(ctx->r29, 0X24);
    // 0x60005DBC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x60005DC0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60005DC4: jal         0x600006C4
    // 0x60005DC8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_2;
    // 0x60005DC8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x60005DCC: addiu       $t6, $zero, 0x31
    ctx->r14 = ADD32(0, 0X31);
    // 0x60005DD0: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x60005DD4: jal         0x60000DE4
    // 0x60005DD8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world4_DE4(rdram, ctx);
        goto after_3;
    // 0x60005DD8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
    // 0x60005DDC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60005DE0: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x60005DE4: jal         0x600006C4
    // 0x60005DE8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_4;
    // 0x60005DE8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_4:
    // 0x60005DEC: jal         0x60000DE4
    // 0x60005DF0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world4_DE4(rdram, ctx);
        goto after_5;
    // 0x60005DF0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_5:
    // 0x60005DF4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60005DF8: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x60005DFC: jal         0x600006C4
    // 0x60005E00: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_6;
    // 0x60005E00: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_6:
    // 0x60005E04: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x60005E08: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x60005E0C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x60005E10: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x60005E14: addiu       $a1, $zero, -0x11
    ctx->r5 = ADD32(0, -0X11);
    // 0x60005E18: jal         0x60000F04
    // 0x60005E1C: swc1        $f10, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->f10.u32l;
    ovl_stage_world4_F04(rdram, ctx);
        goto after_7;
    // 0x60005E1C: swc1        $f10, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->f10.u32l;
    after_7:
    // 0x60005E20: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x60005E24: jal         0x60000F04
    // 0x60005E28: addiu       $a1, $zero, -0x11
    ctx->r5 = ADD32(0, -0X11);
    ovl_stage_world4_F04(rdram, ctx);
        goto after_8;
    // 0x60005E28: addiu       $a1, $zero, -0x11
    ctx->r5 = ADD32(0, -0X11);
    after_8:
    // 0x60005E2C: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    // 0x60005E30: jal         0x60000F04
    // 0x60005E34: addiu       $a1, $zero, -0x11
    ctx->r5 = ADD32(0, -0X11);
    ovl_stage_world4_F04(rdram, ctx);
        goto after_9;
    // 0x60005E34: addiu       $a1, $zero, -0x11
    ctx->r5 = ADD32(0, -0X11);
    after_9:
    // 0x60005E38: jal         0x60000EEC
    // 0x60005E3C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    ovl_stage_world4_EEC(rdram, ctx);
        goto after_10;
    // 0x60005E3C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_10:
    // 0x60005E40: jal         0x60000EEC
    // 0x60005E44: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    ovl_stage_world4_EEC(rdram, ctx);
        goto after_11;
    // 0x60005E44: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    after_11:
    // 0x60005E48: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60005E4C: addiu       $s1, $zero, 0x1E
    ctx->r17 = ADD32(0, 0X1E);
L_60005E50:
    // 0x60005E50: jal         0x60002798
    // 0x60005E54: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world4_2798(rdram, ctx);
        goto after_12;
    // 0x60005E54: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_12:
    // 0x60005E58: jal         0x600009D0
    // 0x60005E5C: nop

    ovl_stage_world4_9D0(rdram, ctx);
        goto after_13;
    // 0x60005E5C: nop

    after_13:
    // 0x60005E60: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60005E64: bne         $s0, $s1, L_60005E50
    if (ctx->r16 != ctx->r17) {
        // 0x60005E68: nop
    
            goto L_60005E50;
    }
    // 0x60005E68: nop

    // 0x60005E6C: jal         0x600009AC
    // 0x60005E70: nop

    ovl_stage_world4_9AC(rdram, ctx);
        goto after_14;
    // 0x60005E70: nop

    after_14:
    // 0x60005E74: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x60005E78: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x60005E7C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x60005E80: jr          $ra
    // 0x60005E84: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x60005E84: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_stage_world4_5E88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005E88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60005E8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60005E90: jal         0x60000BB0
    // 0x60005E94: addiu       $a0, $zero, 0xAF
    ctx->r4 = ADD32(0, 0XAF);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_0;
    // 0x60005E94: addiu       $a0, $zero, 0xAF
    ctx->r4 = ADD32(0, 0XAF);
    after_0:
    // 0x60005E98: bne         $v0, $zero, L_60005EBC
    if (ctx->r2 != 0) {
        // 0x60005E9C: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_60005EBC;
    }
    // 0x60005E9C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60005EA0: addiu       $a0, $a0, 0x5C7C
    ctx->r4 = ADD32(ctx->r4, 0X5C7C);
    // 0x60005EA4: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60005EA8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60005EAC: jal         0x60000994
    // 0x60005EB0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world4_994(rdram, ctx);
        goto after_1;
    // 0x60005EB0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x60005EB4: b           L_60005EE4
    // 0x60005EB8: nop

        goto L_60005EE4;
    // 0x60005EB8: nop

L_60005EBC:
    // 0x60005EBC: jal         0x60000BB0
    // 0x60005EC0: addiu       $a0, $zero, 0xAF
    ctx->r4 = ADD32(0, 0XAF);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_2;
    // 0x60005EC0: addiu       $a0, $zero, 0xAF
    ctx->r4 = ADD32(0, 0XAF);
    after_2:
    // 0x60005EC4: beq         $v0, $zero, L_60005EE4
    if (ctx->r2 == 0) {
        // 0x60005EC8: nop
    
            goto L_60005EE4;
    }
    // 0x60005EC8: nop

    // 0x60005ECC: jal         0x60000BB0
    // 0x60005ED0: addiu       $a0, $zero, 0x83
    ctx->r4 = ADD32(0, 0X83);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_3;
    // 0x60005ED0: addiu       $a0, $zero, 0x83
    ctx->r4 = ADD32(0, 0X83);
    after_3:
    // 0x60005ED4: bne         $v0, $zero, L_60005EE4
    if (ctx->r2 != 0) {
        // 0x60005ED8: nop
    
            goto L_60005EE4;
    }
    // 0x60005ED8: nop

    // 0x60005EDC: jal         0x6000025C
    // 0x60005EE0: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    ovl_stage_world4_25C(rdram, ctx);
        goto after_4;
    // 0x60005EE0: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    after_4:
L_60005EE4:
    // 0x60005EE4: jal         0x60000BB0
    // 0x60005EE8: addiu       $a0, $zero, 0x83
    ctx->r4 = ADD32(0, 0X83);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_5;
    // 0x60005EE8: addiu       $a0, $zero, 0x83
    ctx->r4 = ADD32(0, 0X83);
    after_5:
    // 0x60005EEC: beq         $v0, $zero, L_60005F14
    if (ctx->r2 == 0) {
        // 0x60005EF0: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_60005F14;
    }
    // 0x60005EF0: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60005EF4: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60005EF8: addiu       $a0, $a0, 0x5CF8
    ctx->r4 = ADD32(ctx->r4, 0X5CF8);
    // 0x60005EFC: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60005F00: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60005F04: jal         0x60000994
    // 0x60005F08: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world4_994(rdram, ctx);
        goto after_6;
    // 0x60005F08: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_6:
    // 0x60005F0C: b           L_60005F2C
    // 0x60005F10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005F2C;
    // 0x60005F10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005F14:
    // 0x60005F14: addiu       $a0, $a0, 0x5D78
    ctx->r4 = ADD32(ctx->r4, 0X5D78);
    // 0x60005F18: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60005F1C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60005F20: jal         0x60000994
    // 0x60005F24: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world4_994(rdram, ctx);
        goto after_7;
    // 0x60005F24: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_7:
    // 0x60005F28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005F2C:
    // 0x60005F2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60005F30: jr          $ra
    // 0x60005F34: nop

    return;
    // 0x60005F34: nop

;}
RECOMP_FUNC void ovl_stage_world4_5F38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005F38: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60005F3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60005F40: jal         0x60000BB0
    // 0x60005F44: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_0;
    // 0x60005F44: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    after_0:
    // 0x60005F48: beq         $v0, $zero, L_60005F74
    if (ctx->r2 == 0) {
        // 0x60005F4C: nop
    
            goto L_60005F74;
    }
    // 0x60005F4C: nop

    // 0x60005F50: jal         0x60000BB0
    // 0x60005F54: addiu       $a0, $zero, 0x10B
    ctx->r4 = ADD32(0, 0X10B);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_1;
    // 0x60005F54: addiu       $a0, $zero, 0x10B
    ctx->r4 = ADD32(0, 0X10B);
    after_1:
    // 0x60005F58: bne         $v0, $zero, L_60005F74
    if (ctx->r2 != 0) {
        // 0x60005F5C: nop
    
            goto L_60005F74;
    }
    // 0x60005F5C: nop

    // 0x60005F60: jal         0x60000B98
    // 0x60005F64: addiu       $a0, $zero, 0x10B
    ctx->r4 = ADD32(0, 0X10B);
    ovl_stage_world4_B98(rdram, ctx);
        goto after_2;
    // 0x60005F64: addiu       $a0, $zero, 0x10B
    ctx->r4 = ADD32(0, 0X10B);
    after_2:
    // 0x60005F68: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x60005F6C: jal         0x60000E68
    // 0x60005F70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world4_E68(rdram, ctx);
        goto after_3;
    // 0x60005F70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
L_60005F74:
    // 0x60005F74: jal         0x60000BB0
    // 0x60005F78: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_4;
    // 0x60005F78: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    after_4:
    // 0x60005F7C: beq         $v0, $zero, L_60005FE0
    if (ctx->r2 == 0) {
        // 0x60005F80: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60005FE0;
    }
    // 0x60005F80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005F84: jal         0x60000BB0
    // 0x60005F88: addiu       $a0, $zero, 0x101
    ctx->r4 = ADD32(0, 0X101);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_5;
    // 0x60005F88: addiu       $a0, $zero, 0x101
    ctx->r4 = ADD32(0, 0X101);
    after_5:
    // 0x60005F8C: beq         $v0, $zero, L_60005FE0
    if (ctx->r2 == 0) {
        // 0x60005F90: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60005FE0;
    }
    // 0x60005F90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005F94: jal         0x60000BB0
    // 0x60005F98: addiu       $a0, $zero, 0x102
    ctx->r4 = ADD32(0, 0X102);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_6;
    // 0x60005F98: addiu       $a0, $zero, 0x102
    ctx->r4 = ADD32(0, 0X102);
    after_6:
    // 0x60005F9C: beq         $v0, $zero, L_60005FE0
    if (ctx->r2 == 0) {
        // 0x60005FA0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60005FE0;
    }
    // 0x60005FA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005FA4: jal         0x60000BB0
    // 0x60005FA8: addiu       $a0, $zero, 0x103
    ctx->r4 = ADD32(0, 0X103);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_7;
    // 0x60005FA8: addiu       $a0, $zero, 0x103
    ctx->r4 = ADD32(0, 0X103);
    after_7:
    // 0x60005FAC: beq         $v0, $zero, L_60005FE0
    if (ctx->r2 == 0) {
        // 0x60005FB0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60005FE0;
    }
    // 0x60005FB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005FB4: jal         0x60000BB0
    // 0x60005FB8: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_8;
    // 0x60005FB8: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    after_8:
    // 0x60005FBC: bne         $v0, $zero, L_60005FE0
    if (ctx->r2 != 0) {
        // 0x60005FC0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60005FE0;
    }
    // 0x60005FC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005FC4: jal         0x60000B98
    // 0x60005FC8: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    ovl_stage_world4_B98(rdram, ctx);
        goto after_9;
    // 0x60005FC8: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    after_9:
    // 0x60005FCC: jal         0x60000244
    // 0x60005FD0: addiu       $a0, $zero, 0x397
    ctx->r4 = ADD32(0, 0X397);
    ovl_stage_world4_244(rdram, ctx);
        goto after_10;
    // 0x60005FD0: addiu       $a0, $zero, 0x397
    ctx->r4 = ADD32(0, 0X397);
    after_10:
    // 0x60005FD4: jal         0x60001210
    // 0x60005FD8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    ovl_stage_world4_1210(rdram, ctx);
        goto after_11;
    // 0x60005FD8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_11:
    // 0x60005FDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005FE0:
    // 0x60005FE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60005FE4: jr          $ra
    // 0x60005FE8: nop

    return;
    // 0x60005FE8: nop

;}
RECOMP_FUNC void ovl_stage_world4_5FEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005FEC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x60005FF0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x60005FF4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x60005FF8: beq         $a0, $zero, L_60006024
    if (ctx->r4 == 0) {
        // 0x60005FFC: sw          $s0, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r16;
            goto L_60006024;
    }
    // 0x60005FFC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x60006000: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60006004: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
L_60006008:
    // 0x60006008: jal         0x60000E44
    // 0x6000600C: addiu       $a0, $s0, 0x9
    ctx->r4 = ADD32(ctx->r16, 0X9);
    ovl_stage_world4_E44(rdram, ctx);
        goto after_0;
    // 0x6000600C: addiu       $a0, $s0, 0x9
    ctx->r4 = ADD32(ctx->r16, 0X9);
    after_0:
    // 0x60006010: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60006014: bne         $s0, $s1, L_60006008
    if (ctx->r16 != ctx->r17) {
        // 0x60006018: nop
    
            goto L_60006008;
    }
    // 0x60006018: nop

    // 0x6000601C: b           L_60006044
    // 0x60006020: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_60006044;
    // 0x60006020: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_60006024:
    // 0x60006024: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60006028: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
L_6000602C:
    // 0x6000602C: jal         0x60000EEC
    // 0x60006030: addiu       $a0, $s0, 0x9
    ctx->r4 = ADD32(ctx->r16, 0X9);
    ovl_stage_world4_EEC(rdram, ctx);
        goto after_1;
    // 0x60006030: addiu       $a0, $s0, 0x9
    ctx->r4 = ADD32(ctx->r16, 0X9);
    after_1:
    // 0x60006034: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60006038: bne         $s0, $s1, L_6000602C
    if (ctx->r16 != ctx->r17) {
        // 0x6000603C: nop
    
            goto L_6000602C;
    }
    // 0x6000603C: nop

    // 0x60006040: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_60006044:
    // 0x60006044: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x60006048: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x6000604C: jr          $ra
    // 0x60006050: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x60006050: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
