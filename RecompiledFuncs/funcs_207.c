#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_enemy_world5_4610(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004610: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x43004614: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43004618: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4300461C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43004620: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    // 0x43004624: sw          $a2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r6;
    // 0x43004628: sw          $a3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r7;
    // 0x4300462C: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x43004630: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    // 0x43004634: jal         0x430006C4
    // 0x43004638: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    ovl_enemy_world5_6C4(rdram, ctx);
        goto after_0;
    // 0x43004638: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_0:
    // 0x4300463C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43004640: lwc1        $f2, 0x78($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X78);
    // 0x43004644: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x43004648: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x4300464C: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x43004650: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x43004654: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x43004658: bc1f        L_43004678
    if (!c1cs) {
        // 0x4300465C: swc1        $f4, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
            goto L_43004678;
    }
    // 0x4300465C: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x43004660: lwc1        $f6, 0x80($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X80);
    // 0x43004664: nop

    // 0x43004668: c.eq.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl == ctx->f0.fl;
    // 0x4300466C: nop

    // 0x43004670: bc1t        L_4300470C
    if (c1cs) {
        // 0x43004674: lw          $t6, 0x74($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X74);
            goto L_4300470C;
    }
    // 0x43004674: lw          $t6, 0x74($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X74);
L_43004678:
    // 0x43004678: lwc1        $f8, 0x80($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X80);
    // 0x4300467C: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x43004680: swc1        $f2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f2.u32l;
    // 0x43004684: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    // 0x43004688: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4300468C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x43004690: jal         0x43005218
    // 0x43004694: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    ovl_enemy_world5_5218(rdram, ctx);
        goto after_1;
    // 0x43004694: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x43004698: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4300469C: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x430046A0: lwc1        $f16, 0x80($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X80);
    // 0x430046A4: lwc1        $f18, 0x78($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X78);
    // 0x430046A8: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x430046AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430046B0: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x430046B4: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x430046B8: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x430046BC: swc1        $f16, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f16.u32l;
    // 0x430046C0: jal         0x43005218
    // 0x430046C4: swc1        $f18, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f18.u32l;
    ovl_enemy_world5_5218(rdram, ctx);
        goto after_2;
    // 0x430046C4: swc1        $f18, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f18.u32l;
    after_2:
    // 0x430046C8: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x430046CC: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x430046D0: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x430046D4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x430046D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430046DC: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    // 0x430046E0: jal         0x43005218
    // 0x430046E4: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    ovl_enemy_world5_5218(rdram, ctx);
        goto after_3;
    // 0x430046E4: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    after_3:
    // 0x430046E8: lwc1        $f0, 0x28($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X28);
    // 0x430046EC: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x430046F0: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x430046F4: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x430046F8: nop

    // 0x430046FC: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x43004700: swc1        $f16, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f16.u32l;
    // 0x43004704: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    // 0x43004708: lw          $t6, 0x74($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X74);
L_4300470C:
    // 0x4300470C: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x43004710: sw          $t6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r14;
    // 0x43004714: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x43004718: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x4300471C: jal         0x430006C4
    // 0x43004720: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    ovl_enemy_world5_6C4(rdram, ctx);
        goto after_4;
    // 0x43004720: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    after_4:
    // 0x43004724: lwc1        $f6, 0x58($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X58);
    // 0x43004728: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x4300472C: lwc1        $f16, 0x5C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x43004730: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x43004734: lwc1        $f18, 0x7C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x43004738: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x4300473C: lwc1        $f6, 0x60($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X60);
    // 0x43004740: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x43004744: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x43004748: swc1        $f10, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f10.u32l;
    // 0x4300474C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x43004750: swc1        $f4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f4.u32l;
    // 0x43004754: swc1        $f10, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f10.u32l;
    // 0x43004758: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4300475C: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    // 0x43004760: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    // 0x43004764: jal         0x43005218
    // 0x43004768: swc1        $f16, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f16.u32l;
    ovl_enemy_world5_5218(rdram, ctx);
        goto after_5;
    // 0x43004768: swc1        $f16, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f16.u32l;
    after_5:
    // 0x4300476C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43004770: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43004774: jr          $ra
    // 0x43004778: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x43004778: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void ovl_enemy_world5_477C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300477C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x43004780: beq         $a0, $at, L_43004798
    if (ctx->r4 == ctx->r1) {
        // 0x43004784: addiu       $v1, $zero, -0x1
        ctx->r3 = ADD32(0, -0X1);
            goto L_43004798;
    }
    // 0x43004784: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x43004788: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x4300478C: lw          $v1, -0x5D70($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5D70);
    // 0x43004790: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x43004794: addu        $v1, $v1, $t6
    ctx->r3 = ADD32(ctx->r3, ctx->r14);
L_43004798:
    // 0x43004798: jr          $ra
    // 0x4300479C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x4300479C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_enemy_world5_47A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430047A0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x430047A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430047A8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x430047AC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x430047B0: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x430047B4: jal         0x43004880
    // 0x430047B8: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    ovl_enemy_world5_4880(rdram, ctx);
        goto after_0;
    // 0x430047B8: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_0:
    // 0x430047BC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x430047C0: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x430047C4: addiu       $t7, $t6, -0x3
    ctx->r15 = ADD32(ctx->r14, -0X3);
    // 0x430047C8: sltiu       $at, $t7, 0x9
    ctx->r1 = ctx->r15 < 0X9 ? 1 : 0;
    // 0x430047CC: beq         $at, $zero, L_43004858
    if (ctx->r1 == 0) {
        // 0x430047D0: addiu       $v1, $zero, -0x1
        ctx->r3 = ADD32(0, -0X1);
            goto L_43004858;
    }
    // 0x430047D0: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x430047D4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x430047D8: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430047DC: addu        $at, $at, $t7
    gpr jr_addend_430047E8 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x430047E0: lw          $t7, -0x61E0($at)
    ctx->r15 = ADD32(ctx->r1, -0X61E0);
    // 0x430047E4: nop

    // 0x430047E8: jr          $t7
    // 0x430047EC: nop

    switch (jr_addend_430047E8 >> 2) {
        case 0: goto L_430047F0; break;
        case 1: goto L_430047FC; break;
        case 2: goto L_43004808; break;
        case 3: goto L_43004814; break;
        case 4: goto L_43004820; break;
        case 5: goto L_4300482C; break;
        case 6: goto L_43004838; break;
        case 7: goto L_43004844; break;
        case 8: goto L_43004850; break;
        default: switch_error(__func__, 0x430047E8, 0x43009E20);
    }
    // 0x430047EC: nop

L_430047F0:
    // 0x430047F0: lw          $v1, 0x24($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X24);
    // 0x430047F4: b           L_4300485C
    // 0x430047F8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
        goto L_4300485C;
    // 0x430047F8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_430047FC:
    // 0x430047FC: lw          $v1, 0x28($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X28);
    // 0x43004800: b           L_4300485C
    // 0x43004804: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
        goto L_4300485C;
    // 0x43004804: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_43004808:
    // 0x43004808: lw          $v1, 0x30($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X30);
    // 0x4300480C: b           L_4300485C
    // 0x43004810: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
        goto L_4300485C;
    // 0x43004810: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_43004814:
    // 0x43004814: lw          $v1, 0x38($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X38);
    // 0x43004818: b           L_4300485C
    // 0x4300481C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
        goto L_4300485C;
    // 0x4300481C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_43004820:
    // 0x43004820: lw          $v1, 0x40($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X40);
    // 0x43004824: b           L_4300485C
    // 0x43004828: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
        goto L_4300485C;
    // 0x43004828: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_4300482C:
    // 0x4300482C: lw          $v1, 0x48($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X48);
    // 0x43004830: b           L_4300485C
    // 0x43004834: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
        goto L_4300485C;
    // 0x43004834: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_43004838:
    // 0x43004838: lw          $v1, 0x50($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X50);
    // 0x4300483C: b           L_4300485C
    // 0x43004840: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
        goto L_4300485C;
    // 0x43004840: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_43004844:
    // 0x43004844: lw          $v1, 0x58($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X58);
    // 0x43004848: b           L_4300485C
    // 0x4300484C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
        goto L_4300485C;
    // 0x4300484C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_43004850:
    // 0x43004850: lw          $v1, 0x60($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X60);
    // 0x43004854: nop

L_43004858:
    // 0x43004858: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_4300485C:
    // 0x4300485C: beq         $v1, $at, L_43004874
    if (ctx->r3 == ctx->r1) {
        // 0x43004860: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43004874;
    }
    // 0x43004860: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43004864: jal         0x4300477C
    // 0x43004868: addiu       $a0, $v1, -0x1
    ctx->r4 = ADD32(ctx->r3, -0X1);
    ovl_enemy_world5_477C(rdram, ctx);
        goto after_1;
    // 0x43004868: addiu       $a0, $v1, -0x1
    ctx->r4 = ADD32(ctx->r3, -0X1);
    after_1:
    // 0x4300486C: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x43004870: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43004874:
    // 0x43004874: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x43004878: jr          $ra
    // 0x4300487C: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    return;
    // 0x4300487C: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
;}
RECOMP_FUNC void ovl_enemy_world5_4880(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004880: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x43004884: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x43004888: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x4300488C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x43004890: lw          $v1, -0x5D74($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5D74);
    // 0x43004894: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x43004898: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x4300489C: jr          $ra
    // 0x430048A0: addu        $v0, $v1, $t6
    ctx->r2 = ADD32(ctx->r3, ctx->r14);
    return;
    // 0x430048A0: addu        $v0, $v1, $t6
    ctx->r2 = ADD32(ctx->r3, ctx->r14);
;}
RECOMP_FUNC void ovl_enemy_world5_48A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430048A4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x430048A8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x430048AC: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x430048B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430048B4: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x430048B8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x430048BC: sw          $t6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r14;
    // 0x430048C0: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x430048C4: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x430048C8: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x430048CC: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x430048D0: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x430048D4: jal         0x43005218
    // 0x430048D8: swc1        $f12, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f12.u32l;
    ovl_enemy_world5_5218(rdram, ctx);
        goto after_0;
    // 0x430048D8: swc1        $f12, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x430048DC: lwc1        $f0, 0x4C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x430048E0: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x430048E4: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x430048E8: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x430048EC: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x430048F0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x430048F4: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x430048F8: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x430048FC: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x43004900: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x43004904: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    // 0x43004908: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x4300490C: addiu       $a1, $zero, 0x22
    ctx->r5 = ADD32(0, 0X22);
    // 0x43004910: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x43004914: jal         0x43005218
    // 0x43004918: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    ovl_enemy_world5_5218(rdram, ctx);
        goto after_1;
    // 0x43004918: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x4300491C: lui         $at, 0xC700
    ctx->r1 = S32(0XC700 << 16);
    // 0x43004920: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x43004924: lwc1        $f18, 0x28($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X28);
    // 0x43004928: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x4300492C: c.eq.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl == ctx->f4.fl;
    // 0x43004930: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x43004934: bc1t        L_4300499C
    if (c1cs) {
        // 0x43004938: andi        $t9, $t8, 0x7000
        ctx->r25 = ctx->r24 & 0X7000;
            goto L_4300499C;
    }
    // 0x43004938: andi        $t9, $t8, 0x7000
    ctx->r25 = ctx->r24 & 0X7000;
    // 0x4300493C: addiu       $at, $zero, 0x1000
    ctx->r1 = ADD32(0, 0X1000);
    // 0x43004940: beq         $t9, $at, L_4300499C
    if (ctx->r25 == ctx->r1) {
        // 0x43004944: nop
    
            goto L_4300499C;
    }
    // 0x43004944: nop

    // 0x43004948: lw          $t0, 0x1C8($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X1C8);
    // 0x4300494C: nop

    // 0x43004950: andi        $t1, $t0, 0x20
    ctx->r9 = ctx->r8 & 0X20;
    // 0x43004954: beq         $t1, $zero, L_430049A4
    if (ctx->r9 == 0) {
        // 0x43004958: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_430049A4;
    }
    // 0x43004958: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4300495C: lwc1        $f0, 0x1BC($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X1BC);
    // 0x43004960: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x43004964: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x43004968: nop

    // 0x4300496C: bc1f        L_43004980
    if (!c1cs) {
        // 0x43004970: nop
    
            goto L_43004980;
    }
    // 0x43004970: nop

    // 0x43004974: sub.s       $f2, $f18, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f18.fl - ctx->f0.fl;
    // 0x43004978: b           L_43004984
    // 0x4300497C: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
        goto L_43004984;
    // 0x4300497C: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
L_43004980:
    // 0x43004980: sub.s       $f2, $f6, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f0.fl;
L_43004984:
    // 0x43004984: lwc1        $f8, 0x1C4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X1C4);
    // 0x43004988: nop

    // 0x4300498C: c.le.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl <= ctx->f2.fl;
    // 0x43004990: nop

    // 0x43004994: bc1f        L_430049A4
    if (!c1cs) {
        // 0x43004998: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_430049A4;
    }
    // 0x43004998: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4300499C:
    // 0x4300499C: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x430049A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_430049A4:
    // 0x430049A4: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
    // 0x430049A8: jr          $ra
    // 0x430049AC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x430049AC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_enemy_world5_49B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430049B0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x430049B4: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x430049B8: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x430049BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430049C0: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x430049C4: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x430049C8: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x430049CC: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x430049D0: sw          $a3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r7;
    // 0x430049D4: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x430049D8: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x430049DC: jal         0x430006C4
    // 0x430049E0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_enemy_world5_6C4(rdram, ctx);
        goto after_0;
    // 0x430049E0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x430049E4: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x430049E8: lui         $at, 0xC700
    ctx->r1 = S32(0XC700 << 16);
    // 0x430049EC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x430049F0: lwc1        $f2, 0x1BC($a3)
    ctx->f2.u32l = MEM_W(ctx->r7, 0X1BC);
    // 0x430049F4: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x430049F8: c.eq.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl == ctx->f2.fl;
    // 0x430049FC: lwc1        $f12, 0x48($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X48);
    // 0x43004A00: lwc1        $f14, 0x4C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x43004A04: bc1f        L_43004A14
    if (!c1cs) {
        // 0x43004A08: nop
    
            goto L_43004A14;
    }
    // 0x43004A08: nop

    // 0x43004A0C: b           L_43004A98
    // 0x43004A10: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_43004A98;
    // 0x43004A10: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_43004A14:
    // 0x43004A14: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x43004A18: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x43004A1C: add.s       $f0, $f2, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f6.fl;
    // 0x43004A20: lwc1        $f18, 0x28($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X28);
    // 0x43004A24: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x43004A28: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x43004A2C: bc1f        L_43004A58
    if (!c1cs) {
        // 0x43004A30: addiu       $a2, $sp, 0x24
        ctx->r6 = ADD32(ctx->r29, 0X24);
            goto L_43004A58;
    }
    // 0x43004A30: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x43004A34: add.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f12.fl;
    // 0x43004A38: c.le.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl <= ctx->f0.fl;
    // 0x43004A3C: nop

    // 0x43004A40: bc1f        L_43004A78
    if (!c1cs) {
        // 0x43004A44: nop
    
            goto L_43004A78;
    }
    // 0x43004A44: nop

    // 0x43004A48: add.s       $f16, $f8, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f14.fl;
    // 0x43004A4C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x43004A50: b           L_43004A78
    // 0x43004A54: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
        goto L_43004A78;
    // 0x43004A54: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
L_43004A58:
    // 0x43004A58: sub.s       $f4, $f18, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f12.fl;
    // 0x43004A5C: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x43004A60: nop

    // 0x43004A64: bc1f        L_43004A78
    if (!c1cs) {
        // 0x43004A68: nop
    
            goto L_43004A78;
    }
    // 0x43004A68: nop

    // 0x43004A6C: sub.s       $f6, $f18, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f14.fl;
    // 0x43004A70: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x43004A74: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
L_43004A78:
    // 0x43004A78: beq         $v1, $zero, L_43004A98
    if (ctx->r3 == 0) {
        // 0x43004A7C: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_43004A98;
    }
    // 0x43004A7C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x43004A80: lw          $a0, 0x8($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X8);
    // 0x43004A84: jal         0x430006C4
    // 0x43004A88: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    ovl_enemy_world5_6C4(rdram, ctx);
        goto after_1;
    // 0x43004A88: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    after_1:
    // 0x43004A8C: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x43004A90: nop

    // 0x43004A94: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_43004A98:
    // 0x43004A98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43004A9C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x43004AA0: jr          $ra
    // 0x43004AA4: nop

    return;
    // 0x43004AA4: nop

;}
RECOMP_FUNC void ovl_enemy_world5_4AA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004AA8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43004AAC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43004AB0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x43004AB4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x43004AB8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x43004ABC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x43004AC0: jal         0x43000F34
    // 0x43004AC4: addiu       $a3, $zero, 0x1D
    ctx->r7 = ADD32(0, 0X1D);
    ovl_enemy_world5_F34(rdram, ctx);
        goto after_0;
    // 0x43004AC4: addiu       $a3, $zero, 0x1D
    ctx->r7 = ADD32(0, 0X1D);
    after_0:
    // 0x43004AC8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43004ACC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x43004AD0: jr          $ra
    // 0x43004AD4: nop

    return;
    // 0x43004AD4: nop

;}
RECOMP_FUNC void ovl_enemy_world5_4AD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004AD8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x43004ADC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43004AE0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x43004AE4: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x43004AE8: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x43004AEC: addiu       $a1, $zero, 0x27
    ctx->r5 = ADD32(0, 0X27);
    // 0x43004AF0: jal         0x430006C4
    // 0x43004AF4: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_enemy_world5_6C4(rdram, ctx);
        goto after_0;
    // 0x43004AF4: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x43004AF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43004AFC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x43004B00: jr          $ra
    // 0x43004B04: nop

    return;
    // 0x43004B04: nop

;}
RECOMP_FUNC void ovl_enemy_world5_4B08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004B08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43004B0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43004B10: lw          $v0, 0x18C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18C);
    // 0x43004B14: nop

    // 0x43004B18: blez        $v0, L_43004B78
    if (SIGNED(ctx->r2) <= 0) {
        // 0x43004B1C: addiu       $t6, $v0, -0x1
        ctx->r14 = ADD32(ctx->r2, -0X1);
            goto L_43004B78;
    }
    // 0x43004B1C: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x43004B20: sw          $t6, 0x18C($a0)
    MEM_W(0X18C, ctx->r4) = ctx->r14;
    // 0x43004B24: bne         $t6, $zero, L_43004B64
    if (ctx->r14 != 0) {
        // 0x43004B28: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_43004B64;
    }
    // 0x43004B28: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x43004B2C: sw          $zero, 0x18C($a0)
    MEM_W(0X18C, ctx->r4) = 0;
    // 0x43004B30: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x43004B34: jal         0x43001468
    // 0x43004B38: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_enemy_world5_1468(rdram, ctx);
        goto after_0;
    // 0x43004B38: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x43004B3C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43004B40: addiu       $at, $zero, -0x4001
    ctx->r1 = ADD32(0, -0X4001);
    // 0x43004B44: lw          $t7, 0x54($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X54);
    // 0x43004B48: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    // 0x43004B4C: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x43004B50: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x43004B54: jal         0x430099E0
    // 0x43004B58: sw          $t8, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r24;
    ovl_enemy_world5_99E0(rdram, ctx);
        goto after_1;
    // 0x43004B58: sw          $t8, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r24;
    after_1:
    // 0x43004B5C: b           L_43004B7C
    // 0x43004B60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43004B7C;
    // 0x43004B60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43004B64:
    // 0x43004B64: addiu       $at, $zero, 0x32
    ctx->r1 = ADD32(0, 0X32);
    // 0x43004B68: bne         $v0, $at, L_43004B7C
    if (ctx->r2 != ctx->r1) {
        // 0x43004B6C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43004B7C;
    }
    // 0x43004B6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43004B70: jal         0x43001468
    // 0x43004B74: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world5_1468(rdram, ctx);
        goto after_2;
    // 0x43004B74: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
L_43004B78:
    // 0x43004B78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43004B7C:
    // 0x43004B7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43004B80: jr          $ra
    // 0x43004B84: nop

    return;
    // 0x43004B84: nop

;}
RECOMP_FUNC void ovl_enemy_world5_4B88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004B88: lw          $t6, 0x19C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X19C);
    // 0x43004B8C: nop

    // 0x43004B90: beq         $t6, $zero, L_43004BC4
    if (ctx->r14 == 0) {
        // 0x43004B94: nop
    
            goto L_43004BC4;
    }
    // 0x43004B94: nop

    // 0x43004B98: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43004B9C: lwc1        $f4, 0x188($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X188);
    // 0x43004BA0: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x43004BA4: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x43004BA8: ori         $at, $at, 0x7FFF
    ctx->r1 = ctx->r1 | 0X7FFF;
    // 0x43004BAC: bc1f        L_43004BC4
    if (!c1cs) {
        // 0x43004BB0: nop
    
            goto L_43004BC4;
    }
    // 0x43004BB0: nop

    // 0x43004BB4: lw          $t7, 0x54($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X54);
    // 0x43004BB8: swc1        $f0, 0x188($a0)
    MEM_W(0X188, ctx->r4) = ctx->f0.u32l;
    // 0x43004BBC: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x43004BC0: sw          $t8, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r24;
L_43004BC4:
    // 0x43004BC4: jr          $ra
    // 0x43004BC8: nop

    return;
    // 0x43004BC8: nop

;}
RECOMP_FUNC void ovl_enemy_world5_4BCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004BCC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43004BD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43004BD4: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x43004BD8: jal         0x430099E0
    // 0x43004BDC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    ovl_enemy_world5_99E0(rdram, ctx);
        goto after_0;
    // 0x43004BDC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_0:
    // 0x43004BE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43004BE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43004BE8: jr          $ra
    // 0x43004BEC: nop

    return;
    // 0x43004BEC: nop

;}
RECOMP_FUNC void ovl_enemy_world5_4BF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004BF0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43004BF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43004BF8: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x43004BFC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x43004C00: jal         0x43003844
    // 0x43004C04: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    ovl_enemy_world5_3844(rdram, ctx);
        goto after_0;
    // 0x43004C04: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    after_0:
    // 0x43004C08: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x43004C0C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x43004C10: lw          $t7, 0x54($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X54);
    // 0x43004C14: sll         $t0, $v0, 2
    ctx->r8 = S32(ctx->r2 << 2);
    // 0x43004C18: andi        $t8, $t7, 0x8
    ctx->r24 = ctx->r15 & 0X8;
    // 0x43004C1C: bne         $t8, $zero, L_43004C30
    if (ctx->r24 != 0) {
        // 0x43004C20: lui         $t1, 0x4301
        ctx->r9 = S32(0X4301 << 16);
            goto L_43004C30;
    }
    // 0x43004C20: lui         $t1, 0x4301
    ctx->r9 = S32(0X4301 << 16);
    // 0x43004C24: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x43004C28: nop

    // 0x43004C2C: swc1        $f4, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f4.u32l;
L_43004C30:
    // 0x43004C30: lwc1        $f8, 0x20($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X20);
    // 0x43004C34: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x43004C38: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x43004C3C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x43004C40: bc1f        L_43004C68
    if (!c1cs) {
        // 0x43004C44: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43004C68;
    }
    // 0x43004C44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43004C48: lw          $t1, -0x6514($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X6514);
    // 0x43004C4C: nop

    // 0x43004C50: slt         $at, $t9, $t1
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x43004C54: bne         $at, $zero, L_43004C68
    if (ctx->r1 != 0) {
        // 0x43004C58: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43004C68;
    }
    // 0x43004C58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43004C5C: jal         0x43004BCC
    // 0x43004C60: nop

    ovl_enemy_world5_4BCC(rdram, ctx);
        goto after_1;
    // 0x43004C60: nop

    after_1:
    // 0x43004C64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43004C68:
    // 0x43004C68: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x43004C6C: jr          $ra
    // 0x43004C70: nop

    return;
    // 0x43004C70: nop

;}
RECOMP_FUNC void ovl_enemy_world5_4C74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004C74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43004C78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43004C7C: lw          $t6, 0x54($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X54);
    // 0x43004C80: nop

    // 0x43004C84: andi        $t7, $t6, 0x8
    ctx->r15 = ctx->r14 & 0X8;
    // 0x43004C88: bne         $t7, $zero, L_43004CA4
    if (ctx->r15 != 0) {
        // 0x43004C8C: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_43004CA4;
    }
    // 0x43004C8C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x43004C90: jal         0x43001F1C
    // 0x43004C94: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_enemy_world5_1F1C(rdram, ctx);
        goto after_0;
    // 0x43004C94: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x43004C98: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43004C9C: nop

    // 0x43004CA0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_43004CA4:
    // 0x43004CA4: jal         0x43001EC8
    // 0x43004CA8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_enemy_world5_1EC8(rdram, ctx);
        goto after_1;
    // 0x43004CA8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x43004CAC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43004CB0: addiu       $at, $zero, -0x41
    ctx->r1 = ADD32(0, -0X41);
    // 0x43004CB4: lw          $t8, 0x54($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X54);
    // 0x43004CB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x43004CBC: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x43004CC0: addiu       $at, $zero, -0x801
    ctx->r1 = ADD32(0, -0X801);
    // 0x43004CC4: and         $t1, $t9, $at
    ctx->r9 = ctx->r25 & ctx->r1;
    // 0x43004CC8: sw          $t9, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r25;
    // 0x43004CCC: sw          $t1, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r9;
    // 0x43004CD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43004CD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43004CD8: jr          $ra
    // 0x43004CDC: nop

    return;
    // 0x43004CDC: nop

;}
RECOMP_FUNC void ovl_enemy_world5_4CE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004CE0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x43004CE4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x43004CE8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x43004CEC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x43004CF0: lw          $t6, 0x54($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X54);
    // 0x43004CF4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43004CF8: ori         $t7, $t6, 0x2800
    ctx->r15 = ctx->r14 | 0X2800;
    // 0x43004CFC: sw          $zero, 0x60($a0)
    MEM_W(0X60, ctx->r4) = 0;
    // 0x43004D00: jal         0x430022E4
    // 0x43004D04: sw          $t7, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r15;
    ovl_enemy_world5_22E4(rdram, ctx);
        goto after_0;
    // 0x43004D04: sw          $t7, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r15;
    after_0:
    // 0x43004D08: lw          $t8, 0x54($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X54);
    // 0x43004D0C: nop

    // 0x43004D10: andi        $t9, $t8, 0x8
    ctx->r25 = ctx->r24 & 0X8;
    // 0x43004D14: bne         $t9, $zero, L_43004D24
    if (ctx->r25 != 0) {
        // 0x43004D18: nop
    
            goto L_43004D24;
    }
    // 0x43004D18: nop

    // 0x43004D1C: jal         0x430044D8
    // 0x43004D20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world5_44D8(rdram, ctx);
        goto after_1;
    // 0x43004D20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
L_43004D24:
    // 0x43004D24: jal         0x43002040
    // 0x43004D28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world5_2040(rdram, ctx);
        goto after_2;
    // 0x43004D28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x43004D2C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x43004D30: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43004D34: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x43004D38: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x43004D3C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x43004D40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43004D44: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x43004D48: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x43004D4C: jal         0x43001F94
    // 0x43004D50: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    ovl_enemy_world5_1F94(rdram, ctx);
        goto after_3;
    // 0x43004D50: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_3:
    // 0x43004D54: jal         0x43004554
    // 0x43004D58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world5_4554(rdram, ctx);
        goto after_4;
    // 0x43004D58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x43004D5C: lw          $t1, 0x54($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X54);
    // 0x43004D60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43004D64: ori         $t2, $t1, 0x40
    ctx->r10 = ctx->r9 | 0X40;
    // 0x43004D68: jal         0x43001DB0
    // 0x43004D6C: sw          $t2, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r10;
    ovl_enemy_world5_1DB0(rdram, ctx);
        goto after_5;
    // 0x43004D6C: sw          $t2, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r10;
    after_5:
    // 0x43004D70: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43004D74: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x43004D78: jr          $ra
    // 0x43004D7C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x43004D7C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_enemy_world5_4D80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004D80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43004D84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43004D88: jal         0x43001F1C
    // 0x43004D8C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_enemy_world5_1F1C(rdram, ctx);
        goto after_0;
    // 0x43004D8C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x43004D90: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43004D94: lui         $at, 0xF9FB
    ctx->r1 = S32(0XF9FB << 16);
    // 0x43004D98: lw          $t6, 0x54($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X54);
    // 0x43004D9C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x43004DA0: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x43004DA4: sw          $t7, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r15;
    // 0x43004DA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43004DAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43004DB0: jr          $ra
    // 0x43004DB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x43004DB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void ovl_enemy_world5_4DB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004DB8: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x43004DBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43004DC0: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x43004DC4: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x43004DC8: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x43004DCC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x43004DD0: jal         0x430006C4
    // 0x43004DD4: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_enemy_world5_6C4(rdram, ctx);
        goto after_0;
    // 0x43004DD4: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_0:
    // 0x43004DD8: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x43004DDC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x43004DE0: jal         0x430006C4
    // 0x43004DE4: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    ovl_enemy_world5_6C4(rdram, ctx);
        goto after_1;
    // 0x43004DE4: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    after_1:
    // 0x43004DE8: bne         $v0, $zero, L_43004E38
    if (ctx->r2 != 0) {
        // 0x43004DEC: addiu       $a1, $zero, 0x7
        ctx->r5 = ADD32(0, 0X7);
            goto L_43004E38;
    }
    // 0x43004DEC: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x43004DF0: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x43004DF4: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x43004DF8: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x43004DFC: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x43004E00: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x43004E04: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x43004E08: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x43004E0C: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x43004E10: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    // 0x43004E14: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    // 0x43004E18: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    // 0x43004E1C: jal         0x43005218
    // 0x43004E20: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    ovl_enemy_world5_5218(rdram, ctx);
        goto after_2;
    // 0x43004E20: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x43004E24: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x43004E28: lw          $t7, 0x58($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X58);
    // 0x43004E2C: nop

    // 0x43004E30: swc1        $f6, 0x18($t7)
    MEM_W(0X18, ctx->r15) = ctx->f6.u32l;
    // 0x43004E34: swc1        $f6, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f6.u32l;
L_43004E38:
    // 0x43004E38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43004E3C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x43004E40: jr          $ra
    // 0x43004E44: nop

    return;
    // 0x43004E44: nop

;}
RECOMP_FUNC void ovl_enemy_world5_4E48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004E48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43004E4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43004E50: lw          $t6, 0x54($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X54);
    // 0x43004E54: lui         $at, 0x4
    ctx->r1 = S32(0X4 << 16);
    // 0x43004E58: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x43004E5C: sw          $zero, 0x60($a0)
    MEM_W(0X60, ctx->r4) = 0;
    // 0x43004E60: sw          $t7, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r15;
    // 0x43004E64: jal         0x43001DB0
    // 0x43004E68: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_enemy_world5_1DB0(rdram, ctx);
        goto after_0;
    // 0x43004E68: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x43004E6C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x43004E70: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x43004E74: lw          $t8, 0x54($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X54);
    // 0x43004E78: nop

    // 0x43004E7C: sll         $t9, $t8, 8
    ctx->r25 = S32(ctx->r24 << 8);
    // 0x43004E80: bltz        $t9, L_43004EA0
    if (SIGNED(ctx->r25) < 0) {
        // 0x43004E84: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43004EA0;
    }
    // 0x43004E84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43004E88: jal         0x43000DE4
    // 0x43004E8C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    ovl_enemy_world5_DE4(rdram, ctx);
        goto after_1;
    // 0x43004E8C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_1:
    // 0x43004E90: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43004E94: jal         0x43004DB8
    // 0x43004E98: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    ovl_enemy_world5_4DB8(rdram, ctx);
        goto after_2;
    // 0x43004E98: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_2:
    // 0x43004E9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43004EA0:
    // 0x43004EA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43004EA4: jr          $ra
    // 0x43004EA8: nop

    return;
    // 0x43004EA8: nop

;}
RECOMP_FUNC void ovl_enemy_world5_4EAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004EAC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x43004EB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43004EB4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x43004EB8: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x43004EBC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x43004EC0: jal         0x430006C4
    // 0x43004EC4: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_enemy_world5_6C4(rdram, ctx);
        goto after_0;
    // 0x43004EC4: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x43004EC8: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x43004ECC: addiu       $v0, $v0, -0x6460
    ctx->r2 = ADD32(ctx->r2, -0X6460);
    // 0x43004ED0: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x43004ED4: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x43004ED8: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x43004EDC: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x43004EE0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x43004EE4: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x43004EE8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x43004EEC: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x43004EF0: swc1        $f4, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f4.u32l;
    // 0x43004EF4: swc1        $f6, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f6.u32l;
    // 0x43004EF8: swc1        $f8, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f8.u32l;
    // 0x43004EFC: jal         0x430006C4
    // 0x43004F00: sw          $t6, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r14;
    ovl_enemy_world5_6C4(rdram, ctx);
        goto after_1;
    // 0x43004F00: sw          $t6, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r14;
    after_1:
    // 0x43004F04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43004F08: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x43004F0C: jr          $ra
    // 0x43004F10: nop

    return;
    // 0x43004F10: nop

;}
RECOMP_FUNC void ovl_enemy_world5_4F14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004F14: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x43004F18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43004F1C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x43004F20: jal         0x43000340
    // 0x43004F24: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    ovl_enemy_world5_340(rdram, ctx);
        goto after_0;
    // 0x43004F24: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    after_0:
    // 0x43004F28: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x43004F2C: lui         $t8, 0x4301
    ctx->r24 = S32(0X4301 << 16);
    // 0x43004F30: addiu       $t8, $t8, -0x64B0
    ctx->r24 = ADD32(ctx->r24, -0X64B0);
    // 0x43004F34: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x43004F38: addu        $a3, $t7, $t8
    ctx->r7 = ADD32(ctx->r15, ctx->r24);
    // 0x43004F3C: lw          $a1, 0x0($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X0);
    // 0x43004F40: lw          $v0, 0x4($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X4);
    // 0x43004F44: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x43004F48: blez        $a1, L_43004FD8
    if (SIGNED(ctx->r5) <= 0) {
        // 0x43004F4C: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_43004FD8;
    }
    // 0x43004F4C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x43004F50: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x43004F54: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x43004F58: cvt.s.d     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f4.fl = CVT_S_D(ctx->f0.d);
    // 0x43004F5C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x43004F60: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x43004F64: nop

    // 0x43004F68: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x43004F6C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x43004F70: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x43004F74: nop

    // 0x43004F78: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x43004F7C: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x43004F80: mfc1        $a0, $f10
    ctx->r4 = (int32_t)ctx->f10.u32l;
    // 0x43004F84: nop

L_43004F88:
    // 0x43004F88: lbu         $t0, 0x1($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X1);
    // 0x43004F8C: nop

    // 0x43004F90: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    // 0x43004F94: slt         $at, $a0, $v1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x43004F98: beq         $at, $zero, L_43004FC8
    if (ctx->r1 == 0) {
        // 0x43004F9C: nop
    
            goto L_43004FC8;
    }
    // 0x43004F9C: nop

    // 0x43004FA0: lbu         $a1, 0x0($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X0);
    // 0x43004FA4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x43004FA8: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x43004FAC: jal         0x43004EAC
    // 0x43004FB0: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    ovl_enemy_world5_4EAC(rdram, ctx);
        goto after_1;
    // 0x43004FB0: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    after_1:
    // 0x43004FB4: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x43004FB8: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x43004FBC: lw          $a1, 0x0($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X0);
    // 0x43004FC0: b           L_43004FD8
    // 0x43004FC4: nop

        goto L_43004FD8;
    // 0x43004FC4: nop

L_43004FC8:
    // 0x43004FC8: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x43004FCC: slt         $at, $a2, $a1
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x43004FD0: bne         $at, $zero, L_43004F88
    if (ctx->r1 != 0) {
        // 0x43004FD4: addiu       $v0, $v0, 0x2
        ctx->r2 = ADD32(ctx->r2, 0X2);
            goto L_43004F88;
    }
    // 0x43004FD4: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
L_43004FD8:
    // 0x43004FD8: bne         $a2, $a1, L_43004FF0
    if (ctx->r6 != ctx->r5) {
        // 0x43004FDC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43004FF0;
    }
    // 0x43004FDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43004FE0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x43004FE4: jal         0x43004EAC
    // 0x43004FE8: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    ovl_enemy_world5_4EAC(rdram, ctx);
        goto after_2;
    // 0x43004FE8: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_2:
    // 0x43004FEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43004FF0:
    // 0x43004FF0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x43004FF4: jr          $ra
    // 0x43004FF8: nop

    return;
    // 0x43004FF8: nop

;}
RECOMP_FUNC void ovl_enemy_world5_4FFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004FFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43005000: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x43005004: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x43005008: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x4300500C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43005010: bne         $a1, $at, L_43005028
    if (ctx->r5 != ctx->r1) {
        // 0x43005014: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_43005028;
    }
    // 0x43005014: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x43005018: jal         0x43001660
    // 0x4300501C: nop

    ovl_enemy_world5_1660(rdram, ctx);
        goto after_0;
    // 0x4300501C: nop

    after_0:
    // 0x43005020: b           L_43005058
    // 0x43005024: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43005058;
    // 0x43005024: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43005028:
    // 0x43005028: slti        $at, $a2, 0xF6
    ctx->r1 = SIGNED(ctx->r6) < 0XF6 ? 1 : 0;
    // 0x4300502C: bne         $at, $zero, L_4300504C
    if (ctx->r1 != 0) {
        // 0x43005030: slti        $at, $a2, 0xFF
        ctx->r1 = SIGNED(ctx->r6) < 0XFF ? 1 : 0;
            goto L_4300504C;
    }
    // 0x43005030: slti        $at, $a2, 0xFF
    ctx->r1 = SIGNED(ctx->r6) < 0XFF ? 1 : 0;
    // 0x43005034: beq         $at, $zero, L_4300504C
    if (ctx->r1 == 0) {
        // 0x43005038: nop
    
            goto L_4300504C;
    }
    // 0x43005038: nop

    // 0x4300503C: jal         0x43004F14
    // 0x43005040: addiu       $a1, $a2, -0xF6
    ctx->r5 = ADD32(ctx->r6, -0XF6);
    ovl_enemy_world5_4F14(rdram, ctx);
        goto after_1;
    // 0x43005040: addiu       $a1, $a2, -0xF6
    ctx->r5 = ADD32(ctx->r6, -0XF6);
    after_1:
    // 0x43005044: b           L_43005058
    // 0x43005048: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43005058;
    // 0x43005048: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4300504C:
    // 0x4300504C: jal         0x43004EAC
    // 0x43005050: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    ovl_enemy_world5_4EAC(rdram, ctx);
        goto after_2;
    // 0x43005050: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_2:
    // 0x43005054: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43005058:
    // 0x43005058: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4300505C: jr          $ra
    // 0x43005060: nop

    return;
    // 0x43005060: nop

;}
RECOMP_FUNC void ovl_enemy_world5_5064(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005064: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x43005068: lwc1        $f6, 0x2C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x4300506C: swc1        $f4, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f4.u32l;
    // 0x43005070: jr          $ra
    // 0x43005074: swc1        $f6, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f6.u32l;
    return;
    // 0x43005074: swc1        $f6, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f6.u32l;
;}
RECOMP_FUNC void ovl_enemy_world5_5078(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005078: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4300507C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43005080: lw          $v0, 0x54($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X54);
    // 0x43005084: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x43005088: andi        $t6, $v0, 0x4000
    ctx->r14 = ctx->r2 & 0X4000;
    // 0x4300508C: beq         $t6, $zero, L_430050CC
    if (ctx->r14 == 0) {
        // 0x43005090: addiu       $at, $zero, 0x26
        ctx->r1 = ADD32(0, 0X26);
            goto L_430050CC;
    }
    // 0x43005090: addiu       $at, $zero, 0x26
    ctx->r1 = ADD32(0, 0X26);
    // 0x43005094: beq         $a1, $at, L_430050C4
    if (ctx->r5 == ctx->r1) {
        // 0x43005098: addiu       $at, $zero, 0x2A
        ctx->r1 = ADD32(0, 0X2A);
            goto L_430050C4;
    }
    // 0x43005098: addiu       $at, $zero, 0x2A
    ctx->r1 = ADD32(0, 0X2A);
    // 0x4300509C: beq         $a1, $at, L_430050C4
    if (ctx->r5 == ctx->r1) {
        // 0x430050A0: addiu       $at, $zero, 0x2B
        ctx->r1 = ADD32(0, 0X2B);
            goto L_430050C4;
    }
    // 0x430050A0: addiu       $at, $zero, 0x2B
    ctx->r1 = ADD32(0, 0X2B);
    // 0x430050A4: beq         $a1, $at, L_430050C4
    if (ctx->r5 == ctx->r1) {
        // 0x430050A8: addiu       $at, $zero, 0x2C
        ctx->r1 = ADD32(0, 0X2C);
            goto L_430050C4;
    }
    // 0x430050A8: addiu       $at, $zero, 0x2C
    ctx->r1 = ADD32(0, 0X2C);
    // 0x430050AC: beq         $a1, $at, L_430050C4
    if (ctx->r5 == ctx->r1) {
        // 0x430050B0: addiu       $at, $zero, 0x2D
        ctx->r1 = ADD32(0, 0X2D);
            goto L_430050C4;
    }
    // 0x430050B0: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x430050B4: beq         $a1, $at, L_430050C4
    if (ctx->r5 == ctx->r1) {
        // 0x430050B8: addiu       $at, $zero, 0x2E
        ctx->r1 = ADD32(0, 0X2E);
            goto L_430050C4;
    }
    // 0x430050B8: addiu       $at, $zero, 0x2E
    ctx->r1 = ADD32(0, 0X2E);
    // 0x430050BC: bne         $a1, $at, L_430050D0
    if (ctx->r5 != ctx->r1) {
        // 0x430050C0: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_430050D0;
    }
    // 0x430050C0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_430050C4:
    // 0x430050C4: b           L_43005208
    // 0x430050C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_43005208;
    // 0x430050C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_430050CC:
    // 0x430050CC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_430050D0:
    // 0x430050D0: bne         $a1, $at, L_43005114
    if (ctx->r5 != ctx->r1) {
        // 0x430050D4: sll         $t7, $v0, 1
        ctx->r15 = S32(ctx->r2 << 1);
            goto L_43005114;
    }
    // 0x430050D4: sll         $t7, $v0, 1
    ctx->r15 = S32(ctx->r2 << 1);
    // 0x430050D8: bgez        $t7, L_430050E8
    if (SIGNED(ctx->r15) >= 0) {
        // 0x430050DC: nop
    
            goto L_430050E8;
    }
    // 0x430050DC: nop

    // 0x430050E0: b           L_43005208
    // 0x430050E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_43005208;
    // 0x430050E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_430050E8:
    // 0x430050E8: jal         0x43003868
    // 0x430050EC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_enemy_world5_3868(rdram, ctx);
        goto after_0;
    // 0x430050EC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x430050F0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x430050F4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x430050F8: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x430050FC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x43005100: sw          $t8, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->r24;
    // 0x43005104: jal         0x430099E0
    // 0x43005108: sw          $zero, 0x60($a0)
    MEM_W(0X60, ctx->r4) = 0;
    ovl_enemy_world5_99E0(rdram, ctx);
        goto after_1;
    // 0x43005108: sw          $zero, 0x60($a0)
    MEM_W(0X60, ctx->r4) = 0;
    after_1:
    // 0x4300510C: b           L_43005208
    // 0x43005110: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_43005208;
    // 0x43005110: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_43005114:
    // 0x43005114: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x43005118: bne         $a1, $at, L_4300514C
    if (ctx->r5 != ctx->r1) {
        // 0x4300511C: andi        $t9, $v0, 0x8
        ctx->r25 = ctx->r2 & 0X8;
            goto L_4300514C;
    }
    // 0x4300511C: andi        $t9, $v0, 0x8
    ctx->r25 = ctx->r2 & 0X8;
    // 0x43005120: bne         $t9, $zero, L_43005144
    if (ctx->r25 != 0) {
        // 0x43005124: nop
    
            goto L_43005144;
    }
    // 0x43005124: nop

    // 0x43005128: jal         0x430044D8
    // 0x4300512C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_enemy_world5_44D8(rdram, ctx);
        goto after_2;
    // 0x4300512C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_2:
    // 0x43005130: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43005134: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x43005138: jal         0x430099E0
    // 0x4300513C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    ovl_enemy_world5_99E0(rdram, ctx);
        goto after_3;
    // 0x4300513C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_3:
    // 0x43005140: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_43005144:
    // 0x43005144: b           L_43005208
    // 0x43005148: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_43005208;
    // 0x43005148: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_4300514C:
    // 0x4300514C: lw          $t0, 0x58($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X58);
    // 0x43005150: nop

    // 0x43005154: sltiu       $at, $t0, 0x27
    ctx->r1 = ctx->r8 < 0X27 ? 1 : 0;
    // 0x43005158: beq         $at, $zero, L_430051F0
    if (ctx->r1 == 0) {
        // 0x4300515C: sll         $t0, $t0, 2
        ctx->r8 = S32(ctx->r8 << 2);
            goto L_430051F0;
    }
    // 0x4300515C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x43005160: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43005164: addu        $at, $at, $t0
    gpr jr_addend_43005170 = ctx->r8;
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x43005168: lw          $t0, -0x61BC($at)
    ctx->r8 = ADD32(ctx->r1, -0X61BC);
    // 0x4300516C: nop

    // 0x43005170: jr          $t0
    // 0x43005174: nop

    switch (jr_addend_43005170 >> 2) {
        case 0: goto L_43005178; break;
        case 1: goto L_43005178; break;
        case 2: goto L_430051F0; break;
        case 3: goto L_430051F0; break;
        case 4: goto L_430051F0; break;
        case 5: goto L_430051F0; break;
        case 6: goto L_430051F0; break;
        case 7: goto L_430051F0; break;
        case 8: goto L_430051F0; break;
        case 9: goto L_430051F0; break;
        case 10: goto L_430051F0; break;
        case 11: goto L_430051F0; break;
        case 12: goto L_430051F0; break;
        case 13: goto L_430051F0; break;
        case 14: goto L_430051F0; break;
        case 15: goto L_430051F0; break;
        case 16: goto L_430051F0; break;
        case 17: goto L_430051F0; break;
        case 18: goto L_430051F4; break;
        case 19: goto L_430051F0; break;
        case 20: goto L_430051F0; break;
        case 21: goto L_430051F0; break;
        case 22: goto L_430051F0; break;
        case 23: goto L_43005180; break;
        case 24: goto L_43005180; break;
        case 25: goto L_430051F0; break;
        case 26: goto L_430051F0; break;
        case 27: goto L_430051F0; break;
        case 28: goto L_430051F0; break;
        case 29: goto L_430051F0; break;
        case 30: goto L_430051F0; break;
        case 31: goto L_430051F0; break;
        case 32: goto L_430051F0; break;
        case 33: goto L_430051F0; break;
        case 34: goto L_430051F0; break;
        case 35: goto L_430051F0; break;
        case 36: goto L_430051F0; break;
        case 37: goto L_430051F4; break;
        case 38: goto L_430051AC; break;
        default: switch_error(__func__, 0x43005170, 0x43009E44);
    }
    // 0x43005174: nop

L_43005178:
    // 0x43005178: b           L_430051F4
    // 0x4300517C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_430051F4;
    // 0x4300517C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_43005180:
    // 0x43005180: sll         $t1, $v0, 6
    ctx->r9 = S32(ctx->r2 << 6);
    // 0x43005184: bltz        $t1, L_43005190
    if (SIGNED(ctx->r9) < 0) {
        // 0x43005188: addiu       $at, $zero, 0x26
        ctx->r1 = ADD32(0, 0X26);
            goto L_43005190;
    }
    // 0x43005188: addiu       $at, $zero, 0x26
    ctx->r1 = ADD32(0, 0X26);
    // 0x4300518C: beq         $a1, $at, L_430051A4
    if (ctx->r5 == ctx->r1) {
        // 0x43005190: addiu       $at, $zero, 0x25
        ctx->r1 = ADD32(0, 0X25);
            goto L_430051A4;
    }
L_43005190:
    // 0x43005190: addiu       $at, $zero, 0x25
    ctx->r1 = ADD32(0, 0X25);
    // 0x43005194: beq         $a1, $at, L_430051A4
    if (ctx->r5 == ctx->r1) {
        // 0x43005198: addiu       $at, $zero, 0x12
        ctx->r1 = ADD32(0, 0X12);
            goto L_430051A4;
    }
    // 0x43005198: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x4300519C: bne         $a1, $at, L_430051F4
    if (ctx->r5 != ctx->r1) {
        // 0x430051A0: nop
    
            goto L_430051F4;
    }
    // 0x430051A0: nop

L_430051A4:
    // 0x430051A4: b           L_430051F4
    // 0x430051A8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_430051F4;
    // 0x430051A8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_430051AC:
    // 0x430051AC: addiu       $at, $zero, 0x25
    ctx->r1 = ADD32(0, 0X25);
    // 0x430051B0: beq         $a1, $at, L_430051C0
    if (ctx->r5 == ctx->r1) {
        // 0x430051B4: addiu       $at, $zero, 0x12
        ctx->r1 = ADD32(0, 0X12);
            goto L_430051C0;
    }
    // 0x430051B4: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x430051B8: bne         $a1, $at, L_430051CC
    if (ctx->r5 != ctx->r1) {
        // 0x430051BC: addiu       $at, $zero, 0x17
        ctx->r1 = ADD32(0, 0X17);
            goto L_430051CC;
    }
    // 0x430051BC: addiu       $at, $zero, 0x17
    ctx->r1 = ADD32(0, 0X17);
L_430051C0:
    // 0x430051C0: b           L_430051F4
    // 0x430051C4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_430051F4;
    // 0x430051C4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x430051C8: addiu       $at, $zero, 0x17
    ctx->r1 = ADD32(0, 0X17);
L_430051CC:
    // 0x430051CC: beq         $a1, $at, L_430051E0
    if (ctx->r5 == ctx->r1) {
        // 0x430051D0: sll         $t2, $v0, 6
        ctx->r10 = S32(ctx->r2 << 6);
            goto L_430051E0;
    }
    // 0x430051D0: sll         $t2, $v0, 6
    ctx->r10 = S32(ctx->r2 << 6);
    // 0x430051D4: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x430051D8: bne         $a1, $at, L_430051F4
    if (ctx->r5 != ctx->r1) {
        // 0x430051DC: nop
    
            goto L_430051F4;
    }
    // 0x430051DC: nop

L_430051E0:
    // 0x430051E0: bgez        $t2, L_430051F4
    if (SIGNED(ctx->r10) >= 0) {
        // 0x430051E4: nop
    
            goto L_430051F4;
    }
    // 0x430051E4: nop

    // 0x430051E8: b           L_430051F4
    // 0x430051EC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_430051F4;
    // 0x430051EC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_430051F0:
    // 0x430051F0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_430051F4:
    // 0x430051F4: beq         $v1, $zero, L_43005204
    if (ctx->r3 == 0) {
        // 0x430051F8: ori         $t3, $v0, 0x1
        ctx->r11 = ctx->r2 | 0X1;
            goto L_43005204;
    }
    // 0x430051F8: ori         $t3, $v0, 0x1
    ctx->r11 = ctx->r2 | 0X1;
    // 0x430051FC: sw          $a1, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->r5;
    // 0x43005200: sw          $t3, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r11;
L_43005204:
    // 0x43005204: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_43005208:
    // 0x43005208: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4300520C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43005210: jr          $ra
    // 0x43005214: nop

    return;
    // 0x43005214: nop

;}
RECOMP_FUNC void ovl_enemy_world5_5218(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005218: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x4300521C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43005220: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x43005224: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x43005228: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x4300522C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x43005230: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    // 0x43005234: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x43005238: jal         0x430007FC
    // 0x4300523C: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    ovl_enemy_world5_7FC(rdram, ctx);
        goto after_0;
    // 0x4300523C: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x43005240: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43005244: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x43005248: jr          $ra
    // 0x4300524C: nop

    return;
    // 0x4300524C: nop

;}
RECOMP_FUNC void ovl_enemy_world5_5250(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005250: addiu       $sp, $sp, -0x290
    ctx->r29 = ADD32(ctx->r29, -0X290);
    // 0x43005254: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43005258: sw          $a1, 0x294($sp)
    MEM_W(0X294, ctx->r29) = ctx->r5;
    // 0x4300525C: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x43005260: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    // 0x43005264: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    // 0x43005268: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x4300526C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x43005270: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x43005274: jal         0x43005218
    // 0x43005278: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    ovl_enemy_world5_5218(rdram, ctx);
        goto after_0;
    // 0x43005278: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x4300527C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43005280: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x43005284: jr          $ra
    // 0x43005288: addiu       $sp, $sp, 0x290
    ctx->r29 = ADD32(ctx->r29, 0X290);
    return;
    // 0x43005288: addiu       $sp, $sp, 0x290
    ctx->r29 = ADD32(ctx->r29, 0X290);
;}
RECOMP_FUNC void ovl_enemy_world5_528C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300528C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x43005290: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x43005294: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x43005298: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x4300529C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x430052A0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x430052A4: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x430052A8: jal         0x43005250
    // 0x430052AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_enemy_world5_5250(rdram, ctx);
        goto after_0;
    // 0x430052AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x430052B0: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430052B4: sw          $zero, -0x5D80($at)
    MEM_W(-0X5D80, ctx->r1) = 0;
    // 0x430052B8: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430052BC: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x430052C0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x430052C4: sw          $t6, -0x5D7C($at)
    MEM_W(-0X5D7C, ctx->r1) = ctx->r14;
    // 0x430052C8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x430052CC: addiu       $s2, $zero, 0xA
    ctx->r18 = ADD32(0, 0XA);
    // 0x430052D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_430052D4:
    // 0x430052D4: jal         0x43004430
    // 0x430052D8: addiu       $s0, $s0, 0x268
    ctx->r16 = ADD32(ctx->r16, 0X268);
    ovl_enemy_world5_4430(rdram, ctx);
        goto after_1;
    // 0x430052D8: addiu       $s0, $s0, 0x268
    ctx->r16 = ADD32(ctx->r16, 0X268);
    after_1:
    // 0x430052DC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x430052E0: bne         $s1, $s2, L_430052D4
    if (ctx->r17 != ctx->r18) {
        // 0x430052E4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_430052D4;
    }
    // 0x430052E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430052E8: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430052EC: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x430052F0: sw          $s0, -0x5D6C($at)
    MEM_W(-0X5D6C, ctx->r1) = ctx->r16;
    // 0x430052F4: addiu       $a0, $a0, -0x74F0
    ctx->r4 = ADD32(ctx->r4, -0X74F0);
    // 0x430052F8: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x430052FC: addiu       $a2, $zero, 0x1800
    ctx->r6 = ADD32(0, 0X1800);
    // 0x43005300: jal         0x43000820
    // 0x43005304: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_enemy_world5_820(rdram, ctx);
        goto after_2;
    // 0x43005304: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x43005308: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x4300530C: sw          $v0, -0x5D78($at)
    MEM_W(-0X5D78, ctx->r1) = ctx->r2;
    // 0x43005310: jal         0x43000118
    // 0x43005314: addiu       $a0, $zero, 0xBAE
    ctx->r4 = ADD32(0, 0XBAE);
    ovl_enemy_world5_118(rdram, ctx);
        goto after_3;
    // 0x43005314: addiu       $a0, $zero, 0xBAE
    ctx->r4 = ADD32(0, 0XBAE);
    after_3:
    // 0x43005318: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x4300531C: sw          $v0, -0x5D74($at)
    MEM_W(-0X5D74, ctx->r1) = ctx->r2;
    // 0x43005320: jal         0x43000118
    // 0x43005324: addiu       $a0, $zero, 0xBAD
    ctx->r4 = ADD32(0, 0XBAD);
    ovl_enemy_world5_118(rdram, ctx);
        goto after_4;
    // 0x43005324: addiu       $a0, $zero, 0xBAD
    ctx->r4 = ADD32(0, 0XBAD);
    after_4:
    // 0x43005328: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x4300532C: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43005330: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43005334: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x43005338: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x4300533C: sw          $v0, -0x5D70($at)
    MEM_W(-0X5D70, ctx->r1) = ctx->r2;
    // 0x43005340: jr          $ra
    // 0x43005344: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x43005344: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_enemy_world5_5348(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005348: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x4300534C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43005350: lw          $a2, 0x8($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X8);
    // 0x43005354: lw          $t6, 0xC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC);
    // 0x43005358: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x4300535C: jal         0x43003E8C
    // 0x43005360: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    ovl_enemy_world5_3E8C(rdram, ctx);
        goto after_0;
    // 0x43005360: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    after_0:
    // 0x43005364: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x43005368: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x4300536C: jal         0x43005250
    // 0x43005370: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    ovl_enemy_world5_5250(rdram, ctx);
        goto after_1;
    // 0x43005370: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_1:
    // 0x43005374: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x43005378: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x4300537C: addiu       $v1, $v1, -0x5D7C
    ctx->r3 = ADD32(ctx->r3, -0X5D7C);
    // 0x43005380: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x43005384: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x43005388: bne         $a2, $at, L_43005394
    if (ctx->r6 != ctx->r1) {
        // 0x4300538C: sw          $v0, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r2;
            goto L_43005394;
    }
    // 0x4300538C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x43005390: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_43005394:
    // 0x43005394: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x43005398: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x4300539C: sw          $a3, 0x180($t7)
    MEM_W(0X180, ctx->r15) = ctx->r7;
    // 0x430053A0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x430053A4: jal         0x43004058
    // 0x430053A8: nop

    ovl_enemy_world5_4058(rdram, ctx);
        goto after_2;
    // 0x430053A8: nop

    after_2:
    // 0x430053AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430053B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x430053B4: jr          $ra
    // 0x430053B8: nop

    return;
    // 0x430053B8: nop

;}
RECOMP_FUNC void ovl_enemy_world5_53BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430053BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x430053C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430053C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x430053C8: jal         0x430019C0
    // 0x430053CC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_enemy_world5_19C0(rdram, ctx);
        goto after_0;
    // 0x430053CC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x430053D0: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x430053D4: lw          $a0, -0x5D78($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5D78);
    // 0x430053D8: jal         0x4300082C
    // 0x430053DC: nop

    ovl_enemy_world5_82C(rdram, ctx);
        goto after_1;
    // 0x430053DC: nop

    after_1:
    // 0x430053E0: jal         0x43000124
    // 0x430053E4: addiu       $a0, $zero, 0xBAE
    ctx->r4 = ADD32(0, 0XBAE);
    ovl_enemy_world5_124(rdram, ctx);
        goto after_2;
    // 0x430053E4: addiu       $a0, $zero, 0xBAE
    ctx->r4 = ADD32(0, 0XBAE);
    after_2:
    // 0x430053E8: jal         0x43000124
    // 0x430053EC: addiu       $a0, $zero, 0xBAD
    ctx->r4 = ADD32(0, 0XBAD);
    ovl_enemy_world5_124(rdram, ctx);
        goto after_3;
    // 0x430053EC: addiu       $a0, $zero, 0xBAD
    ctx->r4 = ADD32(0, 0XBAD);
    after_3:
    // 0x430053F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430053F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x430053F8: jr          $ra
    // 0x430053FC: nop

    return;
    // 0x430053FC: nop

;}
RECOMP_FUNC void ovl_enemy_world5_5400(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005400: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x43005404: addiu       $v1, $v1, -0x5D7C
    ctx->r3 = ADD32(ctx->r3, -0X5D7C);
    // 0x43005408: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x4300540C: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x43005410: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
    // 0x43005414: sw          $a1, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r5;
    // 0x43005418: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x4300541C: jr          $ra
    // 0x43005420: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    return;
    // 0x43005420: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void ovl_enemy_world5_5424(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005424: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43005428: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4300542C: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x43005430: jal         0x43003B98
    // 0x43005434: nop

    ovl_enemy_world5_3B98(rdram, ctx);
        goto after_0;
    // 0x43005434: nop

    after_0:
    // 0x43005438: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x4300543C: jal         0x43003DF0
    // 0x43005440: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_enemy_world5_3DF0(rdram, ctx);
        goto after_1;
    // 0x43005440: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x43005444: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x43005448: jal         0x43003CD8
    // 0x4300544C: nop

    ovl_enemy_world5_3CD8(rdram, ctx);
        goto after_2;
    // 0x4300544C: nop

    after_2:
    // 0x43005450: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x43005454: jal         0x43003CCC
    // 0x43005458: nop

    ovl_enemy_world5_3CCC(rdram, ctx);
        goto after_3;
    // 0x43005458: nop

    after_3:
    // 0x4300545C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x43005460: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x43005464: jal         0x430099E0
    // 0x43005468: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    ovl_enemy_world5_99E0(rdram, ctx);
        goto after_4;
    // 0x43005468: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_4:
    // 0x4300546C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43005470: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x43005474: jr          $ra
    // 0x43005478: nop

    return;
    // 0x43005478: nop

;}
RECOMP_FUNC void ovl_enemy_world5_547C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300547C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43005480: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43005484: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x43005488: jal         0x43003B98
    // 0x4300548C: nop

    ovl_enemy_world5_3B98(rdram, ctx);
        goto after_0;
    // 0x4300548C: nop

    after_0:
    // 0x43005490: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x43005494: lw          $t6, 0x1F8($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X1F8);
    // 0x43005498: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x4300549C: beq         $t6, $at, L_430054B0
    if (ctx->r14 == ctx->r1) {
        // 0x430054A0: addiu       $a0, $zero, 0x5
        ctx->r4 = ADD32(0, 0X5);
            goto L_430054B0;
    }
    // 0x430054A0: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x430054A4: lw          $a1, 0x1F8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X1F8);
    // 0x430054A8: jal         0x43000F34
    // 0x430054AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_enemy_world5_F34(rdram, ctx);
        goto after_1;
    // 0x430054AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_430054B0:
    // 0x430054B0: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x430054B4: addiu       $v0, $v0, -0x5D80
    ctx->r2 = ADD32(ctx->r2, -0X5D80);
    // 0x430054B8: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x430054BC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x430054C0: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x430054C4: jal         0x43002CD8
    // 0x430054C8: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    ovl_enemy_world5_2CD8(rdram, ctx);
        goto after_2;
    // 0x430054C8: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    after_2:
    // 0x430054CC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x430054D0: jal         0x43004430
    // 0x430054D4: nop

    ovl_enemy_world5_4430(rdram, ctx);
        goto after_3;
    // 0x430054D4: nop

    after_3:
    // 0x430054D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430054DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x430054E0: jr          $ra
    // 0x430054E4: nop

    return;
    // 0x430054E4: nop

;}
RECOMP_FUNC void ovl_enemy_world5_54E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430054E8: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x430054EC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x430054F0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x430054F4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x430054F8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x430054FC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x43005500: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43005504: lw          $t6, 0x22C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X22C);
    // 0x43005508: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x4300550C: or          $s4, $a1, $zero
    ctx->r20 = ctx->r5 | 0;
    // 0x43005510: blez        $t6, L_43005564
    if (SIGNED(ctx->r14) <= 0) {
        // 0x43005514: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_43005564;
    }
    // 0x43005514: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x43005518: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4300551C: addiu       $s2, $sp, 0x38
    ctx->r18 = ADD32(ctx->r29, 0X38);
L_43005520:
    // 0x43005520: lw          $a0, 0x234($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X234);
    // 0x43005524: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x43005528: jal         0x430006C4
    // 0x4300552C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    ovl_enemy_world5_6C4(rdram, ctx);
        goto after_0;
    // 0x4300552C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_0:
    // 0x43005530: bne         $v0, $zero, L_43005550
    if (ctx->r2 != 0) {
        // 0x43005534: nop
    
            goto L_43005550;
    }
    // 0x43005534: nop

    // 0x43005538: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x4300553C: nop

    // 0x43005540: bne         $t7, $s4, L_43005550
    if (ctx->r15 != ctx->r20) {
        // 0x43005544: nop
    
            goto L_43005550;
    }
    // 0x43005544: nop

    // 0x43005548: b           L_43005568
    // 0x4300554C: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
        goto L_43005568;
    // 0x4300554C: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_43005550:
    // 0x43005550: lw          $t8, 0x22C($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X22C);
    // 0x43005554: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x43005558: slt         $at, $s1, $t8
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x4300555C: bne         $at, $zero, L_43005520
    if (ctx->r1 != 0) {
        // 0x43005560: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_43005520;
    }
    // 0x43005560: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_43005564:
    // 0x43005564: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_43005568:
    // 0x43005568: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x4300556C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43005570: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x43005574: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x43005578: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x4300557C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x43005580: jr          $ra
    // 0x43005584: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x43005584: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_enemy_world5_5588(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005588: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4300558C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43005590: jal         0x430054E8
    // 0x43005594: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_enemy_world5_54E8(rdram, ctx);
        goto after_0;
    // 0x43005594: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x43005598: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x4300559C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430055A0: beq         $v0, $at, L_430055C0
    if (ctx->r2 == ctx->r1) {
        // 0x430055A4: nop
    
            goto L_430055C0;
    }
    // 0x430055A4: nop

    // 0x430055A8: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x430055AC: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x430055B0: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x430055B4: lw          $v0, 0x234($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X234);
    // 0x430055B8: b           L_430055C4
    // 0x430055BC: nop

        goto L_430055C4;
    // 0x430055BC: nop

L_430055C0:
    // 0x430055C0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_430055C4:
    // 0x430055C4: jr          $ra
    // 0x430055C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x430055C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void ovl_enemy_world5_55CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430055CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x430055D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430055D4: jal         0x430054E8
    // 0x430055D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_enemy_world5_54E8(rdram, ctx);
        goto after_0;
    // 0x430055D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x430055DC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x430055E0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x430055E4: bne         $v0, $at, L_43005608
    if (ctx->r2 != ctx->r1) {
        // 0x430055E8: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_43005608;
    }
    // 0x430055E8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x430055EC: lw          $t6, 0x230($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X230);
    // 0x430055F0: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x430055F4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x430055F8: sllv        $t9, $t8, $t7
    ctx->r25 = S32(ctx->r24 << (ctx->r15 & 31));
    // 0x430055FC: and         $t0, $t6, $t9
    ctx->r8 = ctx->r14 & ctx->r25;
    // 0x43005600: beq         $t0, $zero, L_4300561C
    if (ctx->r8 == 0) {
        // 0x43005604: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_4300561C;
    }
    // 0x43005604: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_43005608:
    // 0x43005608: sll         $t1, $v1, 2
    ctx->r9 = S32(ctx->r3 << 2);
    // 0x4300560C: addu        $t2, $a0, $t1
    ctx->r10 = ADD32(ctx->r4, ctx->r9);
    // 0x43005610: lw          $v0, 0x234($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X234);
    // 0x43005614: b           L_43005620
    // 0x43005618: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43005620;
    // 0x43005618: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4300561C:
    // 0x4300561C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43005620:
    // 0x43005620: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43005624: jr          $ra
    // 0x43005628: nop

    return;
    // 0x43005628: nop

;}
RECOMP_FUNC void ovl_enemy_world5_562C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300562C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43005630: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43005634: jal         0x430054E8
    // 0x43005638: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_enemy_world5_54E8(rdram, ctx);
        goto after_0;
    // 0x43005638: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x4300563C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43005640: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x43005644: bne         $v0, $at, L_43005668
    if (ctx->r2 != ctx->r1) {
        // 0x43005648: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_43005668;
    }
    // 0x43005648: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x4300564C: lw          $t6, 0x230($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X230);
    // 0x43005650: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x43005654: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x43005658: sllv        $t9, $t8, $t7
    ctx->r25 = S32(ctx->r24 << (ctx->r15 & 31));
    // 0x4300565C: and         $t0, $t6, $t9
    ctx->r8 = ctx->r14 & ctx->r25;
    // 0x43005660: beq         $t0, $zero, L_4300567C
    if (ctx->r8 == 0) {
        // 0x43005664: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_4300567C;
    }
    // 0x43005664: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_43005668:
    // 0x43005668: sll         $t1, $v1, 2
    ctx->r9 = S32(ctx->r3 << 2);
    // 0x4300566C: addu        $t2, $a0, $t1
    ctx->r10 = ADD32(ctx->r4, ctx->r9);
    // 0x43005670: lw          $v0, 0x234($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X234);
    // 0x43005674: b           L_43005680
    // 0x43005678: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43005680;
    // 0x43005678: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4300567C:
    // 0x4300567C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43005680:
    // 0x43005680: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43005684: jr          $ra
    // 0x43005688: nop

    return;
    // 0x43005688: nop

;}
RECOMP_FUNC void ovl_enemy_world5_568C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300568C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x43005690: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43005694: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x43005698: lw          $t6, 0x230($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X230);
    // 0x4300569C: nop

    // 0x430056A0: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x430056A4: beq         $t7, $zero, L_43005720
    if (ctx->r15 == 0) {
        // 0x430056A8: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_43005720;
    }
    // 0x430056A8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x430056AC: jal         0x430055CC
    // 0x430056B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world5_55CC(rdram, ctx);
        goto after_0;
    // 0x430056B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x430056B4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x430056B8: beq         $v0, $at, L_4300571C
    if (ctx->r2 == ctx->r1) {
        // 0x430056BC: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_4300571C;
    }
    // 0x430056BC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x430056C0: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x430056C4: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    // 0x430056C8: jal         0x430006C4
    // 0x430056CC: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    ovl_enemy_world5_6C4(rdram, ctx);
        goto after_1;
    // 0x430056CC: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    after_1:
    // 0x430056D0: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x430056D4: bne         $v0, $zero, L_43005720
    if (ctx->r2 != 0) {
        // 0x430056D8: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_43005720;
    }
    // 0x430056D8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x430056DC: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x430056E0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x430056E4: lwc1        $f4, 0x14($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X14);
    // 0x430056E8: nop

    // 0x430056EC: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x430056F0: nop

    // 0x430056F4: bc1f        L_43005720
    if (!c1cs) {
        // 0x430056F8: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_43005720;
    }
    // 0x430056F8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x430056FC: lwc1        $f6, 0x1C($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x43005700: nop

    // 0x43005704: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x43005708: nop

    // 0x4300570C: bc1f        L_43005720
    if (!c1cs) {
        // 0x43005710: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_43005720;
    }
    // 0x43005710: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x43005714: b           L_43005720
    // 0x43005718: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
        goto L_43005720;
    // 0x43005718: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_4300571C:
    // 0x4300571C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_43005720:
    // 0x43005720: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43005724: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x43005728: jr          $ra
    // 0x4300572C: nop

    return;
    // 0x4300572C: nop

;}
RECOMP_FUNC void ovl_enemy_world5_5730(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005730: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x43005734: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43005738: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x4300573C: lw          $t6, 0x10($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X10);
    // 0x43005740: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43005744: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
    // 0x43005748: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x4300574C: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x43005750: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x43005754: lw          $t7, 0x10($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X10);
    // 0x43005758: lwc1        $f16, 0x1C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x4300575C: lwc1        $f8, 0x8($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X8);
    // 0x43005760: c.eq.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl == ctx->f0.fl;
    // 0x43005764: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x43005768: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x4300576C: bc1f        L_43005788
    if (!c1cs) {
        // 0x43005770: swc1        $f0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
            goto L_43005788;
    }
    // 0x43005770: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x43005774: lwc1        $f18, 0x24($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X24);
    // 0x43005778: nop

    // 0x4300577C: c.eq.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl == ctx->f0.fl;
    // 0x43005780: nop

    // 0x43005784: bc1t        L_430057B8
    if (c1cs) {
        // 0x43005788: addiu       $a1, $zero, 0x7
        ctx->r5 = ADD32(0, 0X7);
            goto L_430057B8;
    }
L_43005788:
    // 0x43005788: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x4300578C: jal         0x43005218
    // 0x43005790: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    ovl_enemy_world5_5218(rdram, ctx);
        goto after_0;
    // 0x43005790: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x43005794: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    // 0x43005798: jal         0x43006E98
    // 0x4300579C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_enemy_world5_6E98(rdram, ctx);
        goto after_1;
    // 0x4300579C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x430057A0: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x430057A4: nop

    // 0x430057A8: lw          $t8, 0x248($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X248);
    // 0x430057AC: nop

    // 0x430057B0: or          $t9, $t8, $v0
    ctx->r25 = ctx->r24 | ctx->r2;
    // 0x430057B4: sw          $t9, 0x248($v1)
    MEM_W(0X248, ctx->r3) = ctx->r25;
L_430057B8:
    // 0x430057B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430057BC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x430057C0: jr          $ra
    // 0x430057C4: nop

    return;
    // 0x430057C4: nop

;}
RECOMP_FUNC void ovl_enemy_world5_57C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430057C8: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x430057CC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x430057D0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x430057D4: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x430057D8: lw          $t6, 0x230($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X230);
    // 0x430057DC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x430057E0: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x430057E4: beq         $t7, $zero, L_430057F8
    if (ctx->r15 == 0) {
        // 0x430057E8: lw          $t8, 0x54($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X54);
            goto L_430057F8;
    }
    // 0x430057E8: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x430057EC: jal         0x4300438C
    // 0x430057F0: addiu       $a0, $a0, 0x22C
    ctx->r4 = ADD32(ctx->r4, 0X22C);
    ovl_enemy_world5_438C(rdram, ctx);
        goto after_0;
    // 0x430057F0: addiu       $a0, $a0, 0x22C
    ctx->r4 = ADD32(ctx->r4, 0X22C);
    after_0:
    // 0x430057F4: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
L_430057F8:
    // 0x430057F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430057FC: lw          $t9, 0xC($t8)
    ctx->r25 = MEM_W(ctx->r24, 0XC);
    // 0x43005800: nop

    // 0x43005804: andi        $t0, $t9, 0x8000
    ctx->r8 = ctx->r25 & 0X8000;
    // 0x43005808: bne         $t0, $zero, L_43005830
    if (ctx->r8 != 0) {
        // 0x4300580C: nop
    
            goto L_43005830;
    }
    // 0x4300580C: nop

    // 0x43005810: jal         0x43005730
    // 0x43005814: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    ovl_enemy_world5_5730(rdram, ctx);
        goto after_1;
    // 0x43005814: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    after_1:
    // 0x43005818: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x4300581C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x43005820: lw          $t2, 0x8($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X8);
    // 0x43005824: nop

    // 0x43005828: beq         $t2, $at, L_43005918
    if (ctx->r10 == ctx->r1) {
        // 0x4300582C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_43005918;
    }
    // 0x4300582C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43005830:
    // 0x43005830: lw          $a0, 0x22C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X22C);
    // 0x43005834: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
    // 0x43005838: slti        $at, $a0, 0x5
    ctx->r1 = SIGNED(ctx->r4) < 0X5 ? 1 : 0;
    // 0x4300583C: beq         $at, $zero, L_43005918
    if (ctx->r1 == 0) {
        // 0x43005840: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_43005918;
    }
    // 0x43005840: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43005844: lw          $a3, 0x8($t3)
    ctx->r7 = MEM_W(ctx->r11, 0X8);
    // 0x43005848: blez        $a0, L_4300586C
    if (SIGNED(ctx->r4) <= 0) {
        // 0x4300584C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_4300586C;
    }
    // 0x4300584C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x43005850: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
L_43005854:
    // 0x43005854: lw          $t4, 0x234($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X234);
    // 0x43005858: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x4300585C: beq         $a3, $t4, L_43005914
    if (ctx->r7 == ctx->r12) {
        // 0x43005860: slt         $at, $v0, $a0
        ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
            goto L_43005914;
    }
    // 0x43005860: slt         $at, $v0, $a0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x43005864: bne         $at, $zero, L_43005854
    if (ctx->r1 != 0) {
        // 0x43005868: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_43005854;
    }
    // 0x43005868: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
L_4300586C:
    // 0x4300586C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x43005870: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x43005874: jal         0x430006C4
    // 0x43005878: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    ovl_enemy_world5_6C4(rdram, ctx);
        goto after_2;
    // 0x43005878: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    after_2:
    // 0x4300587C: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x43005880: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x43005884: beq         $v0, $zero, L_430058A4
    if (ctx->r2 == 0) {
        // 0x43005888: nop
    
            goto L_430058A4;
    }
    // 0x43005888: nop

    // 0x4300588C: bne         $v0, $at, L_43005918
    if (ctx->r2 != ctx->r1) {
        // 0x43005890: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_43005918;
    }
    // 0x43005890: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43005894: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x43005898: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x4300589C: bne         $t5, $at, L_43005918
    if (ctx->r13 != ctx->r1) {
        // 0x430058A0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_43005918;
    }
    // 0x430058A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_430058A4:
    // 0x430058A4: lw          $a0, 0x22C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X22C);
    // 0x430058A8: addiu       $at, $zero, 0xA00
    ctx->r1 = ADD32(0, 0XA00);
    // 0x430058AC: addiu       $t6, $a0, 0x1
    ctx->r14 = ADD32(ctx->r4, 0X1);
    // 0x430058B0: sw          $t6, 0x22C($s0)
    MEM_W(0X22C, ctx->r16) = ctx->r14;
    // 0x430058B4: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x430058B8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x430058BC: lw          $t9, 0x4($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X4);
    // 0x430058C0: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x430058C4: andi        $t0, $t9, 0xF00
    ctx->r8 = ctx->r25 & 0XF00;
    // 0x430058C8: bne         $t0, $at, L_430058F0
    if (ctx->r8 != ctx->r1) {
        // 0x430058CC: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_430058F0;
    }
    // 0x430058CC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x430058D0: addiu       $t1, $a0, 0x8
    ctx->r9 = ADD32(ctx->r4, 0X8);
    // 0x430058D4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x430058D8: lw          $t8, 0x230($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X230);
    // 0x430058DC: sllv        $t3, $t2, $t1
    ctx->r11 = S32(ctx->r10 << (ctx->r9 & 31));
    // 0x430058E0: nor         $t4, $t3, $zero
    ctx->r12 = ~(ctx->r11 | 0);
    // 0x430058E4: and         $t5, $t8, $t4
    ctx->r13 = ctx->r24 & ctx->r12;
    // 0x430058E8: b           L_43005900
    // 0x430058EC: sw          $t5, 0x230($s0)
    MEM_W(0X230, ctx->r16) = ctx->r13;
        goto L_43005900;
    // 0x430058EC: sw          $t5, 0x230($s0)
    MEM_W(0X230, ctx->r16) = ctx->r13;
L_430058F0:
    // 0x430058F0: lw          $t6, 0x230($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X230);
    // 0x430058F4: sllv        $t0, $t9, $t7
    ctx->r8 = S32(ctx->r25 << (ctx->r15 & 31));
    // 0x430058F8: or          $t2, $t6, $t0
    ctx->r10 = ctx->r14 | ctx->r8;
    // 0x430058FC: sw          $t2, 0x230($s0)
    MEM_W(0X230, ctx->r16) = ctx->r10;
L_43005900:
    // 0x43005900: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x43005904: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x43005908: lw          $t3, 0x8($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X8);
    // 0x4300590C: addu        $t4, $s0, $t8
    ctx->r12 = ADD32(ctx->r16, ctx->r24);
    // 0x43005910: sw          $t3, 0x234($t4)
    MEM_W(0X234, ctx->r12) = ctx->r11;
L_43005914:
    // 0x43005914: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43005918:
    // 0x43005918: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x4300591C: jr          $ra
    // 0x43005920: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x43005920: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_enemy_world5_5924(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005924: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x43005928: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4300592C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x43005930: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x43005934: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x43005938: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x4300593C: nop

    // 0x43005940: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x43005944: jal         0x43003B98
    // 0x43005948: nop

    ovl_enemy_world5_3B98(rdram, ctx);
        goto after_0;
    // 0x43005948: nop

    after_0:
    // 0x4300594C: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x43005950: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x43005954: lw          $s1, 0xC($t7)
    ctx->r17 = MEM_W(ctx->r15, 0XC);
    // 0x43005958: beq         $v0, $at, L_43005974
    if (ctx->r2 == ctx->r1) {
        // 0x4300595C: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_43005974;
    }
    // 0x4300595C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x43005960: lw          $v1, 0x54($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X54);
    // 0x43005964: nop

    // 0x43005968: andi        $t8, $v1, 0x2
    ctx->r24 = ctx->r3 & 0X2;
    // 0x4300596C: beq         $t8, $zero, L_43005980
    if (ctx->r24 == 0) {
        // 0x43005970: nop
    
            goto L_43005980;
    }
    // 0x43005970: nop

L_43005974:
    // 0x43005974: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x43005978: b           L_43005BFC
    // 0x4300597C: sw          $zero, 0xC($t9)
    MEM_W(0XC, ctx->r25) = 0;
        goto L_43005BFC;
    // 0x4300597C: sw          $zero, 0xC($t9)
    MEM_W(0XC, ctx->r25) = 0;
L_43005980:
    // 0x43005980: lw          $t0, 0xC($s1)
    ctx->r8 = MEM_W(ctx->r17, 0XC);
    // 0x43005984: nop

    // 0x43005988: andi        $t1, $t0, 0x8000
    ctx->r9 = ctx->r8 & 0X8000;
    // 0x4300598C: bne         $t1, $zero, L_43005A78
    if (ctx->r9 != 0) {
        // 0x43005990: nop
    
            goto L_43005A78;
    }
    // 0x43005990: nop

    // 0x43005994: lw          $t2, 0x10($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X10);
    // 0x43005998: addiu       $t5, $s0, 0x14
    ctx->r13 = ADD32(ctx->r16, 0X14);
    // 0x4300599C: lwc1        $f4, 0x0($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X0);
    // 0x430059A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430059A4: swc1        $f4, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f4.u32l;
    // 0x430059A8: lw          $t3, 0x10($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X10);
    // 0x430059AC: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x430059B0: lwc1        $f6, 0x4($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X4);
    // 0x430059B4: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x430059B8: swc1        $f6, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f6.u32l;
    // 0x430059BC: lw          $t4, 0x10($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X10);
    // 0x430059C0: nop

    // 0x430059C4: lwc1        $f8, 0x8($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X8);
    // 0x430059C8: nop

    // 0x430059CC: swc1        $f8, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f8.u32l;
    // 0x430059D0: sw          $t5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r13;
    // 0x430059D4: lw          $t6, 0xC($s1)
    ctx->r14 = MEM_W(ctx->r17, 0XC);
    // 0x430059D8: nop

    // 0x430059DC: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x430059E0: lw          $t7, 0x10($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X10);
    // 0x430059E4: nop

    // 0x430059E8: lwc1        $f10, 0x0($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X0);
    // 0x430059EC: nop

    // 0x430059F0: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
    // 0x430059F4: lw          $t8, 0x10($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X10);
    // 0x430059F8: nop

    // 0x430059FC: lwc1        $f16, 0x4($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X4);
    // 0x43005A00: nop

    // 0x43005A04: swc1        $f16, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f16.u32l;
    // 0x43005A08: lw          $t9, 0x10($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X10);
    // 0x43005A0C: nop

    // 0x43005A10: lwc1        $f18, 0x8($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0X8);
    // 0x43005A14: jal         0x43005218
    // 0x43005A18: swc1        $f18, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f18.u32l;
    ovl_enemy_world5_5218(rdram, ctx);
        goto after_1;
    // 0x43005A18: swc1        $f18, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f18.u32l;
    after_1:
    // 0x43005A1C: lw          $t0, 0xC($s1)
    ctx->r8 = MEM_W(ctx->r17, 0XC);
    // 0x43005A20: addiu       $at, $zero, 0x17
    ctx->r1 = ADD32(0, 0X17);
    // 0x43005A24: bne         $t0, $at, L_43005A40
    if (ctx->r8 != ctx->r1) {
        // 0x43005A28: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43005A40;
    }
    // 0x43005A28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43005A2C: lw          $t1, 0x54($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X54);
    // 0x43005A30: nop

    // 0x43005A34: andi        $t2, $t1, 0x2000
    ctx->r10 = ctx->r9 & 0X2000;
    // 0x43005A38: bne         $t2, $zero, L_43005A54
    if (ctx->r10 != 0) {
        // 0x43005A3C: nop
    
            goto L_43005A54;
    }
    // 0x43005A3C: nop

L_43005A40:
    // 0x43005A40: lw          $t3, 0x54($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X54);
    // 0x43005A44: nop

    // 0x43005A48: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x43005A4C: bgez        $t4, L_43005A68
    if (SIGNED(ctx->r12) >= 0) {
        // 0x43005A50: nop
    
            goto L_43005A68;
    }
    // 0x43005A50: nop

L_43005A54:
    // 0x43005A54: lw          $t5, 0x4C($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X4C);
    // 0x43005A58: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x43005A5C: bne         $t5, $at, L_43005A68
    if (ctx->r13 != ctx->r1) {
        // 0x43005A60: addiu       $t6, $zero, 0x2
        ctx->r14 = ADD32(0, 0X2);
            goto L_43005A68;
    }
    // 0x43005A60: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x43005A64: sw          $t6, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->r14;
L_43005A68:
    // 0x43005A68: jal         0x430057C8
    // 0x43005A6C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    ovl_enemy_world5_57C8(rdram, ctx);
        goto after_2;
    // 0x43005A6C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_2:
    // 0x43005A70: b           L_43005AE8
    // 0x43005A74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_43005AE8;
    // 0x43005A74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43005A78:
    // 0x43005A78: lw          $t7, 0x8($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X8);
    // 0x43005A7C: lw          $t8, 0x21C($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X21C);
    // 0x43005A80: ori         $t9, $v1, 0x80
    ctx->r25 = ctx->r3 | 0X80;
    // 0x43005A84: bne         $t7, $t8, L_43005A90
    if (ctx->r15 != ctx->r24) {
        // 0x43005A88: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43005A90;
    }
    // 0x43005A88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43005A8C: sw          $t9, 0x54($v0)
    MEM_W(0X54, ctx->r2) = ctx->r25;
L_43005A90:
    // 0x43005A90: lw          $t0, 0x4($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X4);
    // 0x43005A94: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x43005A98: bne         $t0, $at, L_43005AD0
    if (ctx->r8 != ctx->r1) {
        // 0x43005A9C: nop
    
            goto L_43005AD0;
    }
    // 0x43005A9C: nop

    // 0x43005AA0: lw          $t1, 0x1C8($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X1C8);
    // 0x43005AA4: nop

    // 0x43005AA8: andi        $t2, $t1, 0x10
    ctx->r10 = ctx->r9 & 0X10;
    // 0x43005AAC: bne         $t2, $zero, L_43005AD8
    if (ctx->r10 != 0) {
        // 0x43005AB0: nop
    
            goto L_43005AD8;
    }
    // 0x43005AB0: nop

    // 0x43005AB4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x43005AB8: lwc1        $f6, 0x220($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X220);
    // 0x43005ABC: nop

    // 0x43005AC0: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x43005AC4: nop

    // 0x43005AC8: bc1t        L_43005AD8
    if (c1cs) {
        // 0x43005ACC: nop
    
            goto L_43005AD8;
    }
    // 0x43005ACC: nop

L_43005AD0:
    // 0x43005AD0: jal         0x43002B50
    // 0x43005AD4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    ovl_enemy_world5_2B50(rdram, ctx);
        goto after_3;
    // 0x43005AD4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_3:
L_43005AD8:
    // 0x43005AD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43005ADC: jal         0x430057C8
    // 0x43005AE0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    ovl_enemy_world5_57C8(rdram, ctx);
        goto after_4;
    // 0x43005AE0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_4:
    // 0x43005AE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43005AE8:
    // 0x43005AE8: jal         0x43002540
    // 0x43005AEC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    ovl_enemy_world5_2540(rdram, ctx);
        goto after_5;
    // 0x43005AEC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_5:
    // 0x43005AF0: lui         $at, 0xC040
    ctx->r1 = S32(0XC040 << 16);
    // 0x43005AF4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x43005AF8: lwc1        $f10, 0x14($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X14);
    // 0x43005AFC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x43005B00: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x43005B04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43005B08: bc1f        L_43005B5C
    if (!c1cs) {
        // 0x43005B0C: nop
    
            goto L_43005B5C;
    }
    // 0x43005B0C: nop

    // 0x43005B10: jal         0x430024D4
    // 0x43005B14: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    ovl_enemy_world5_24D4(rdram, ctx);
        goto after_6;
    // 0x43005B14: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    after_6:
    // 0x43005B18: lw          $v0, 0x54($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X54);
    // 0x43005B1C: lwc1        $f16, 0x18($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X18);
    // 0x43005B20: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x43005B24: andi        $t3, $v0, 0x100
    ctx->r11 = ctx->r2 & 0X100;
    // 0x43005B28: beq         $t3, $zero, L_43005B50
    if (ctx->r11 == 0) {
        // 0x43005B2C: swc1        $f16, 0x1BC($s0)
        MEM_W(0X1BC, ctx->r16) = ctx->f16.u32l;
            goto L_43005B50;
    }
    // 0x43005B2C: swc1        $f16, 0x1BC($s0)
    MEM_W(0X1BC, ctx->r16) = ctx->f16.u32l;
    // 0x43005B30: andi        $t4, $v0, 0x80
    ctx->r12 = ctx->r2 & 0X80;
    // 0x43005B34: bne         $t4, $zero, L_43005B50
    if (ctx->r12 != 0) {
        // 0x43005B38: addiu       $at, $zero, -0x101
        ctx->r1 = ADD32(0, -0X101);
            goto L_43005B50;
    }
    // 0x43005B38: addiu       $at, $zero, -0x101
    ctx->r1 = ADD32(0, -0X101);
    // 0x43005B3C: and         $t5, $v0, $at
    ctx->r13 = ctx->r2 & ctx->r1;
    // 0x43005B40: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x43005B44: sw          $t5, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r13;
    // 0x43005B48: sw          $t6, 0x21C($s0)
    MEM_W(0X21C, ctx->r16) = ctx->r14;
    // 0x43005B4C: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
L_43005B50:
    // 0x43005B50: addiu       $at, $zero, -0x81
    ctx->r1 = ADD32(0, -0X81);
    // 0x43005B54: and         $t7, $v0, $at
    ctx->r15 = ctx->r2 & ctx->r1;
    // 0x43005B58: sw          $t7, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r15;
L_43005B5C:
    // 0x43005B5C: lw          $t8, 0x4($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X4);
    // 0x43005B60: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x43005B64: beq         $t8, $at, L_43005B9C
    if (ctx->r24 == ctx->r1) {
        // 0x43005B68: nop
    
            goto L_43005B9C;
    }
    // 0x43005B68: nop

    // 0x43005B6C: lw          $t9, 0x54($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X54);
    // 0x43005B70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43005B74: sll         $t0, $t9, 4
    ctx->r8 = S32(ctx->r25 << 4);
    // 0x43005B78: bltz        $t0, L_43005B9C
    if (SIGNED(ctx->r8) < 0) {
        // 0x43005B7C: or          $a1, $s1, $zero
        ctx->r5 = ctx->r17 | 0;
            goto L_43005B9C;
    }
    // 0x43005B7C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x43005B80: jal         0x430022F0
    // 0x43005B84: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    ovl_enemy_world5_22F0(rdram, ctx);
        goto after_7;
    // 0x43005B84: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    after_7:
    // 0x43005B88: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x43005B8C: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x43005B90: beq         $v0, $at, L_43005B9C
    if (ctx->r2 == ctx->r1) {
        // 0x43005B94: nop
    
            goto L_43005B9C;
    }
    // 0x43005B94: nop

    // 0x43005B98: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_43005B9C:
    // 0x43005B9C: lw          $t1, 0x54($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X54);
    // 0x43005BA0: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x43005BA4: sll         $t2, $t1, 3
    ctx->r10 = S32(ctx->r9 << 3);
    // 0x43005BA8: bltz        $t2, L_43005BE0
    if (SIGNED(ctx->r10) < 0) {
        // 0x43005BAC: nop
    
            goto L_43005BE0;
    }
    // 0x43005BAC: nop

    // 0x43005BB0: lw          $t3, 0x4($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X4);
    // 0x43005BB4: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x43005BB8: bne         $t3, $at, L_43005BD8
    if (ctx->r11 != ctx->r1) {
        // 0x43005BBC: lw          $t6, 0x50($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X50);
            goto L_43005BD8;
    }
    // 0x43005BBC: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x43005BC0: lw          $t4, 0x1C8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X1C8);
    // 0x43005BC4: nop

    // 0x43005BC8: andi        $t5, $t4, 0x8
    ctx->r13 = ctx->r12 & 0X8;
    // 0x43005BCC: beq         $t5, $zero, L_43005BE0
    if (ctx->r13 == 0) {
        // 0x43005BD0: nop
    
            goto L_43005BE0;
    }
    // 0x43005BD0: nop

    // 0x43005BD4: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
L_43005BD8:
    // 0x43005BD8: b           L_43005BE4
    // 0x43005BDC: sw          $v1, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->r3;
        goto L_43005BE4;
    // 0x43005BDC: sw          $v1, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->r3;
L_43005BE0:
    // 0x43005BE0: sw          $zero, 0xC($t7)
    MEM_W(0XC, ctx->r15) = 0;
L_43005BE4:
    // 0x43005BE4: lw          $t8, 0x54($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X54);
    // 0x43005BE8: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x43005BEC: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x43005BF0: bgez        $t9, L_43005C00
    if (SIGNED(ctx->r25) >= 0) {
        // 0x43005BF4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_43005C00;
    }
    // 0x43005BF4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43005BF8: sw          $zero, 0xC($t0)
    MEM_W(0XC, ctx->r8) = 0;
L_43005BFC:
    // 0x43005BFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43005C00:
    // 0x43005C00: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x43005C04: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x43005C08: jr          $ra
    // 0x43005C0C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x43005C0C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_enemy_world5_5C10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005C10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43005C14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43005C18: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x43005C1C: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x43005C20: jal         0x43004880
    // 0x43005C24: nop

    ovl_enemy_world5_4880(rdram, ctx);
        goto after_0;
    // 0x43005C24: nop

    after_0:
    // 0x43005C28: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x43005C2C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x43005C30: addiu       $t7, $t6, -0x5
    ctx->r15 = ADD32(ctx->r14, -0X5);
    // 0x43005C34: sltiu       $at, $t7, 0x7
    ctx->r1 = ctx->r15 < 0X7 ? 1 : 0;
    // 0x43005C38: beq         $at, $zero, L_43005CA8
    if (ctx->r1 == 0) {
        // 0x43005C3C: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_43005CA8;
    }
    // 0x43005C3C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x43005C40: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43005C44: addu        $at, $at, $t7
    gpr jr_addend_43005C50 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x43005C48: lw          $t7, -0x6120($at)
    ctx->r15 = ADD32(ctx->r1, -0X6120);
    // 0x43005C4C: nop

    // 0x43005C50: jr          $t7
    // 0x43005C54: nop

    switch (jr_addend_43005C50 >> 2) {
        case 0: goto L_43005C58; break;
        case 1: goto L_43005C64; break;
        case 2: goto L_43005C70; break;
        case 3: goto L_43005C7C; break;
        case 4: goto L_43005C88; break;
        case 5: goto L_43005C94; break;
        case 6: goto L_43005CA0; break;
        default: switch_error(__func__, 0x43005C50, 0x43009EE0);
    }
    // 0x43005C54: nop

L_43005C58:
    // 0x43005C58: lw          $v1, 0x2C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X2C);
    // 0x43005C5C: b           L_43005CAC
    // 0x43005C60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43005CAC;
    // 0x43005C60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43005C64:
    // 0x43005C64: lw          $v1, 0x34($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X34);
    // 0x43005C68: b           L_43005CAC
    // 0x43005C6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43005CAC;
    // 0x43005C6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43005C70:
    // 0x43005C70: lw          $v1, 0x3C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X3C);
    // 0x43005C74: b           L_43005CAC
    // 0x43005C78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43005CAC;
    // 0x43005C78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43005C7C:
    // 0x43005C7C: lw          $v1, 0x44($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X44);
    // 0x43005C80: b           L_43005CAC
    // 0x43005C84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43005CAC;
    // 0x43005C84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43005C88:
    // 0x43005C88: lw          $v1, 0x4C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4C);
    // 0x43005C8C: b           L_43005CAC
    // 0x43005C90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43005CAC;
    // 0x43005C90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43005C94:
    // 0x43005C94: lw          $v1, 0x54($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X54);
    // 0x43005C98: b           L_43005CAC
    // 0x43005C9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43005CAC;
    // 0x43005C9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43005CA0:
    // 0x43005CA0: lw          $v1, 0x5C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X5C);
    // 0x43005CA4: nop

L_43005CA8:
    // 0x43005CA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43005CAC:
    // 0x43005CAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43005CB0: jr          $ra
    // 0x43005CB4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x43005CB4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_enemy_world5_5CB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005CB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43005CBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43005CC0: lw          $t6, 0x1E4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X1E4);
    // 0x43005CC4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x43005CC8: sltiu       $at, $t6, 0x17
    ctx->r1 = ctx->r14 < 0X17 ? 1 : 0;
    // 0x43005CCC: beq         $at, $zero, L_43005D90
    if (ctx->r1 == 0) {
        // 0x43005CD0: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_43005D90;
    }
    // 0x43005CD0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x43005CD4: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43005CD8: addu        $at, $at, $t6
    gpr jr_addend_43005CE4 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x43005CDC: lw          $t6, -0x6104($at)
    ctx->r14 = ADD32(ctx->r1, -0X6104);
    // 0x43005CE0: nop

    // 0x43005CE4: jr          $t6
    // 0x43005CE8: nop

    switch (jr_addend_43005CE4 >> 2) {
        case 0: goto L_43005D90; break;
        case 1: goto L_43005D5C; break;
        case 2: goto L_43005D64; break;
        case 3: goto L_43005D6C; break;
        case 4: goto L_43005D6C; break;
        case 5: goto L_43005D6C; break;
        case 6: goto L_43005CEC; break;
        case 7: goto L_43005CFC; break;
        case 8: goto L_43005D0C; break;
        case 9: goto L_43005D1C; break;
        case 10: goto L_43005D2C; break;
        case 11: goto L_43005D3C; break;
        case 12: goto L_43005D4C; break;
        case 13: goto L_43005D64; break;
        case 14: goto L_43005D64; break;
        case 15: goto L_43005D5C; break;
        case 16: goto L_43005D5C; break;
        case 17: goto L_43005D5C; break;
        case 18: goto L_43005D5C; break;
        case 19: goto L_43005D74; break;
        case 20: goto L_43005D7C; break;
        case 21: goto L_43005D84; break;
        case 22: goto L_43005D8C; break;
        default: switch_error(__func__, 0x43005CE4, 0x43009EFC);
    }
    // 0x43005CE8: nop

L_43005CEC:
    // 0x43005CEC: jal         0x43005C10
    // 0x43005CF0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    ovl_enemy_world5_5C10(rdram, ctx);
        goto after_0;
    // 0x43005CF0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_0:
    // 0x43005CF4: b           L_43005D90
    // 0x43005CF8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_43005D90;
    // 0x43005CF8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_43005CFC:
    // 0x43005CFC: jal         0x43005C10
    // 0x43005D00: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    ovl_enemy_world5_5C10(rdram, ctx);
        goto after_1;
    // 0x43005D00: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_1:
    // 0x43005D04: b           L_43005D90
    // 0x43005D08: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_43005D90;
    // 0x43005D08: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_43005D0C:
    // 0x43005D0C: jal         0x43005C10
    // 0x43005D10: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    ovl_enemy_world5_5C10(rdram, ctx);
        goto after_2;
    // 0x43005D10: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_2:
    // 0x43005D14: b           L_43005D90
    // 0x43005D18: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_43005D90;
    // 0x43005D18: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_43005D1C:
    // 0x43005D1C: jal         0x43005C10
    // 0x43005D20: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    ovl_enemy_world5_5C10(rdram, ctx);
        goto after_3;
    // 0x43005D20: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_3:
    // 0x43005D24: b           L_43005D90
    // 0x43005D28: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_43005D90;
    // 0x43005D28: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_43005D2C:
    // 0x43005D2C: jal         0x43005C10
    // 0x43005D30: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    ovl_enemy_world5_5C10(rdram, ctx);
        goto after_4;
    // 0x43005D30: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_4:
    // 0x43005D34: b           L_43005D90
    // 0x43005D38: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_43005D90;
    // 0x43005D38: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_43005D3C:
    // 0x43005D3C: jal         0x43005C10
    // 0x43005D40: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    ovl_enemy_world5_5C10(rdram, ctx);
        goto after_5;
    // 0x43005D40: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_5:
    // 0x43005D44: b           L_43005D90
    // 0x43005D48: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_43005D90;
    // 0x43005D48: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_43005D4C:
    // 0x43005D4C: jal         0x43005C10
    // 0x43005D50: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    ovl_enemy_world5_5C10(rdram, ctx);
        goto after_6;
    // 0x43005D50: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_6:
    // 0x43005D54: b           L_43005D90
    // 0x43005D58: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_43005D90;
    // 0x43005D58: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_43005D5C:
    // 0x43005D5C: b           L_43005D90
    // 0x43005D60: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_43005D90;
    // 0x43005D60: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_43005D64:
    // 0x43005D64: b           L_43005D90
    // 0x43005D68: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
        goto L_43005D90;
    // 0x43005D68: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
L_43005D6C:
    // 0x43005D6C: b           L_43005D90
    // 0x43005D70: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
        goto L_43005D90;
    // 0x43005D70: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
L_43005D74:
    // 0x43005D74: b           L_43005D90
    // 0x43005D78: addiu       $v1, $zero, 0xC
    ctx->r3 = ADD32(0, 0XC);
        goto L_43005D90;
    // 0x43005D78: addiu       $v1, $zero, 0xC
    ctx->r3 = ADD32(0, 0XC);
L_43005D7C:
    // 0x43005D7C: b           L_43005D90
    // 0x43005D80: addiu       $v1, $zero, 0xD
    ctx->r3 = ADD32(0, 0XD);
        goto L_43005D90;
    // 0x43005D80: addiu       $v1, $zero, 0xD
    ctx->r3 = ADD32(0, 0XD);
L_43005D84:
    // 0x43005D84: b           L_43005D90
    // 0x43005D88: addiu       $v1, $zero, 0xE
    ctx->r3 = ADD32(0, 0XE);
        goto L_43005D90;
    // 0x43005D88: addiu       $v1, $zero, 0xE
    ctx->r3 = ADD32(0, 0XE);
L_43005D8C:
    // 0x43005D8C: addiu       $v1, $zero, 0xF
    ctx->r3 = ADD32(0, 0XF);
L_43005D90:
    // 0x43005D90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43005D94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43005D98: jr          $ra
    // 0x43005D9C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x43005D9C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_enemy_world5_5DA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005DA0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x43005DA4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43005DA8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43005DAC: lw          $t6, 0x1E4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X1E4);
    // 0x43005DB0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43005DB4: addiu       $t7, $t6, -0x6
    ctx->r15 = ADD32(ctx->r14, -0X6);
    // 0x43005DB8: sltiu       $at, $t7, 0x7
    ctx->r1 = ctx->r15 < 0X7 ? 1 : 0;
    // 0x43005DBC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x43005DC0: beq         $at, $zero, L_43005E18
    if (ctx->r1 == 0) {
        // 0x43005DC4: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_43005E18;
    }
    // 0x43005DC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x43005DC8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x43005DCC: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43005DD0: addu        $at, $at, $t7
    gpr jr_addend_43005DDC = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x43005DD4: lw          $t7, -0x60A8($at)
    ctx->r15 = ADD32(ctx->r1, -0X60A8);
    // 0x43005DD8: nop

    // 0x43005DDC: jr          $t7
    // 0x43005DE0: nop

    switch (jr_addend_43005DDC >> 2) {
        case 0: goto L_43005DE4; break;
        case 1: goto L_43005DEC; break;
        case 2: goto L_43005DF4; break;
        case 3: goto L_43005DFC; break;
        case 4: goto L_43005E04; break;
        case 5: goto L_43005E0C; break;
        case 6: goto L_43005E14; break;
        default: switch_error(__func__, 0x43005DDC, 0x43009F58);
    }
    // 0x43005DE0: nop

L_43005DE4:
    // 0x43005DE4: b           L_43005E18
    // 0x43005DE8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
        goto L_43005E18;
    // 0x43005DE8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
L_43005DEC:
    // 0x43005DEC: b           L_43005E18
    // 0x43005DF0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
        goto L_43005E18;
    // 0x43005DF0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
L_43005DF4:
    // 0x43005DF4: b           L_43005E18
    // 0x43005DF8: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
        goto L_43005E18;
    // 0x43005DF8: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
L_43005DFC:
    // 0x43005DFC: b           L_43005E18
    // 0x43005E00: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
        goto L_43005E18;
    // 0x43005E00: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
L_43005E04:
    // 0x43005E04: b           L_43005E18
    // 0x43005E08: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
        goto L_43005E18;
    // 0x43005E08: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
L_43005E0C:
    // 0x43005E0C: b           L_43005E18
    // 0x43005E10: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
        goto L_43005E18;
    // 0x43005E10: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
L_43005E14:
    // 0x43005E14: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
L_43005E18:
    // 0x43005E18: beq         $a1, $zero, L_43005EA0
    if (ctx->r5 == 0) {
        // 0x43005E1C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43005EA0;
    }
    // 0x43005E1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43005E20: jal         0x430047A0
    // 0x43005E24: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    ovl_enemy_world5_47A0(rdram, ctx);
        goto after_0;
    // 0x43005E24: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    after_0:
    // 0x43005E28: lw          $a1, 0x54($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X54);
    // 0x43005E2C: lui         $at, 0x200
    ctx->r1 = S32(0X200 << 16);
    // 0x43005E30: and         $t8, $a1, $at
    ctx->r24 = ctx->r5 & ctx->r1;
    // 0x43005E34: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x43005E38: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x43005E3C: beq         $v0, $at, L_43005EA0
    if (ctx->r2 == ctx->r1) {
        // 0x43005E40: or          $a1, $t8, $zero
        ctx->r5 = ctx->r24 | 0;
            goto L_43005EA0;
    }
    // 0x43005E40: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x43005E44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43005E48: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x43005E4C: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x43005E50: jal         0x43008294
    // 0x43005E54: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    ovl_enemy_world5_8294(rdram, ctx);
        goto after_1;
    // 0x43005E54: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_1:
    // 0x43005E58: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x43005E5C: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x43005E60: beq         $v0, $zero, L_43005EA0
    if (ctx->r2 == 0) {
        // 0x43005E64: lui         $at, 0x200
        ctx->r1 = S32(0X200 << 16);
            goto L_43005EA0;
    }
    // 0x43005E64: lui         $at, 0x200
    ctx->r1 = S32(0X200 << 16);
    // 0x43005E68: lw          $t9, 0x54($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X54);
    // 0x43005E6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43005E70: or          $t0, $t9, $at
    ctx->r8 = ctx->r25 | ctx->r1;
    // 0x43005E74: sw          $t0, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r8;
    // 0x43005E78: jal         0x43008130
    // 0x43005E7C: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    ovl_enemy_world5_8130(rdram, ctx);
        goto after_2;
    // 0x43005E7C: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_2:
    // 0x43005E80: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x43005E84: lui         $at, 0xFDFF
    ctx->r1 = S32(0XFDFF << 16);
    // 0x43005E88: bne         $t1, $zero, L_43005EA0
    if (ctx->r9 != 0) {
        // 0x43005E8C: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_43005EA0;
    }
    // 0x43005E8C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x43005E90: lw          $t2, 0x54($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X54);
    // 0x43005E94: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x43005E98: and         $t3, $t2, $at
    ctx->r11 = ctx->r10 & ctx->r1;
    // 0x43005E9C: sw          $t3, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r11;
L_43005EA0:
    // 0x43005EA0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43005EA4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43005EA8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x43005EAC: jr          $ra
    // 0x43005EB0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x43005EB0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_enemy_world5_5EB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005EB4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x43005EB8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43005EBC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43005EC0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43005EC4: jal         0x43005CB8
    // 0x43005EC8: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    ovl_enemy_world5_5CB8(rdram, ctx);
        goto after_0;
    // 0x43005EC8: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    after_0:
    // 0x43005ECC: lw          $t6, 0x54($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X54);
    // 0x43005ED0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x43005ED4: andi        $t7, $t6, 0x4
    ctx->r15 = ctx->r14 & 0X4;
    // 0x43005ED8: beq         $t7, $zero, L_43005F0C
    if (ctx->r15 == 0) {
        // 0x43005EDC: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_43005F0C;
    }
    // 0x43005EDC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x43005EE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43005EE4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x43005EE8: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x43005EEC: jal         0x43001760
    // 0x43005EF0: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    ovl_enemy_world5_1760(rdram, ctx);
        goto after_1;
    // 0x43005EF0: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    after_1:
    // 0x43005EF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43005EF8: jal         0x43005078
    // 0x43005EFC: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    ovl_enemy_world5_5078(rdram, ctx);
        goto after_2;
    // 0x43005EFC: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_2:
    // 0x43005F00: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x43005F04: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x43005F08: nop

L_43005F0C:
    // 0x43005F0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43005F10: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x43005F14: jal         0x43005DA0
    // 0x43005F18: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    ovl_enemy_world5_5DA0(rdram, ctx);
        goto after_3;
    // 0x43005F18: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    after_3:
    // 0x43005F1C: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x43005F20: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x43005F24: beq         $v0, $zero, L_43005F3C
    if (ctx->r2 == 0) {
        // 0x43005F28: or          $a3, $v0, $zero
        ctx->r7 = ctx->r2 | 0;
            goto L_43005F3C;
    }
    // 0x43005F28: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x43005F2C: lw          $t8, 0x54($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X54);
    // 0x43005F30: lui         $at, 0x200
    ctx->r1 = S32(0X200 << 16);
    // 0x43005F34: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x43005F38: sw          $t9, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r25;
L_43005F3C:
    // 0x43005F3C: sltiu       $at, $v1, 0x7
    ctx->r1 = ctx->r3 < 0X7 ? 1 : 0;
    // 0x43005F40: beq         $at, $zero, L_43006000
    if (ctx->r1 == 0) {
        // 0x43005F44: sll         $t0, $v1, 2
        ctx->r8 = S32(ctx->r3 << 2);
            goto L_43006000;
    }
    // 0x43005F44: sll         $t0, $v1, 2
    ctx->r8 = S32(ctx->r3 << 2);
    // 0x43005F48: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43005F4C: addu        $at, $at, $t0
    gpr jr_addend_43005F58 = ctx->r8;
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x43005F50: lw          $t0, -0x608C($at)
    ctx->r8 = ADD32(ctx->r1, -0X608C);
    // 0x43005F54: nop

    // 0x43005F58: jr          $t0
    // 0x43005F5C: nop

    switch (jr_addend_43005F58 >> 2) {
        case 0: goto L_430060FC; break;
        case 1: goto L_43005F60; break;
        case 2: goto L_43005F8C; break;
        case 3: goto L_43005FA0; break;
        case 4: goto L_43005FB4; break;
        case 5: goto L_43005FC8; break;
        case 6: goto L_43005FD0; break;
        default: switch_error(__func__, 0x43005F58, 0x43009F74);
    }
    // 0x43005F5C: nop

L_43005F60:
    // 0x43005F60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43005F64: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    // 0x43005F68: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x43005F6C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x43005F70: jal         0x43005078
    // 0x43005F74: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    ovl_enemy_world5_5078(rdram, ctx);
        goto after_4;
    // 0x43005F74: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_4:
    // 0x43005F78: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x43005F7C: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x43005F80: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x43005F84: b           L_43006004
    // 0x43005F88: slti        $at, $v1, 0x7
    ctx->r1 = SIGNED(ctx->r3) < 0X7 ? 1 : 0;
        goto L_43006004;
    // 0x43005F88: slti        $at, $v1, 0x7
    ctx->r1 = SIGNED(ctx->r3) < 0X7 ? 1 : 0;
L_43005F8C:
    // 0x43005F8C: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x43005F90: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x43005F94: addiu       $a2, $zero, 0x26
    ctx->r6 = ADD32(0, 0X26);
    // 0x43005F98: b           L_43006000
    // 0x43005F9C: swc1        $f4, 0x188($s0)
    MEM_W(0X188, ctx->r16) = ctx->f4.u32l;
        goto L_43006000;
    // 0x43005F9C: swc1        $f4, 0x188($s0)
    MEM_W(0X188, ctx->r16) = ctx->f4.u32l;
L_43005FA0:
    // 0x43005FA0: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x43005FA4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x43005FA8: addiu       $a2, $zero, 0x26
    ctx->r6 = ADD32(0, 0X26);
    // 0x43005FAC: b           L_43006000
    // 0x43005FB0: swc1        $f6, 0x188($s0)
    MEM_W(0X188, ctx->r16) = ctx->f6.u32l;
        goto L_43006000;
    // 0x43005FB0: swc1        $f6, 0x188($s0)
    MEM_W(0X188, ctx->r16) = ctx->f6.u32l;
L_43005FB4:
    // 0x43005FB4: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
    // 0x43005FB8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x43005FBC: addiu       $a2, $zero, 0x26
    ctx->r6 = ADD32(0, 0X26);
    // 0x43005FC0: b           L_43006000
    // 0x43005FC4: swc1        $f8, 0x188($s0)
    MEM_W(0X188, ctx->r16) = ctx->f8.u32l;
        goto L_43006000;
    // 0x43005FC4: swc1        $f8, 0x188($s0)
    MEM_W(0X188, ctx->r16) = ctx->f8.u32l;
L_43005FC8:
    // 0x43005FC8: b           L_43006000
    // 0x43005FCC: addiu       $a2, $zero, 0x2B
    ctx->r6 = ADD32(0, 0X2B);
        goto L_43006000;
    // 0x43005FCC: addiu       $a2, $zero, 0x2B
    ctx->r6 = ADD32(0, 0X2B);
L_43005FD0:
    // 0x43005FD0: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
    // 0x43005FD4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x43005FD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43005FDC: swc1        $f10, 0x188($s0)
    MEM_W(0X188, ctx->r16) = ctx->f10.u32l;
    // 0x43005FE0: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x43005FE4: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x43005FE8: jal         0x43001D64
    // 0x43005FEC: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    ovl_enemy_world5_1D64(rdram, ctx);
        goto after_5;
    // 0x43005FEC: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    after_5:
    // 0x43005FF0: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x43005FF4: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x43005FF8: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x43005FFC: nop

L_43006000:
    // 0x43006000: slti        $at, $v1, 0x7
    ctx->r1 = SIGNED(ctx->r3) < 0X7 ? 1 : 0;
L_43006004:
    // 0x43006004: bne         $at, $zero, L_43006040
    if (ctx->r1 != 0) {
        // 0x43006008: slti        $at, $v1, 0xC
        ctx->r1 = SIGNED(ctx->r3) < 0XC ? 1 : 0;
            goto L_43006040;
    }
    // 0x43006008: slti        $at, $v1, 0xC
    ctx->r1 = SIGNED(ctx->r3) < 0XC ? 1 : 0;
    // 0x4300600C: beq         $at, $zero, L_43006040
    if (ctx->r1 == 0) {
        // 0x43006010: addiu       $t1, $v1, -0x7
        ctx->r9 = ADD32(ctx->r3, -0X7);
            goto L_43006040;
    }
    // 0x43006010: addiu       $t1, $v1, -0x7
    ctx->r9 = ADD32(ctx->r3, -0X7);
    // 0x43006014: mtc1        $t1, $f16
    ctx->f16.u32l = ctx->r9;
    // 0x43006018: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x4300601C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x43006020: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x43006024: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x43006028: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x4300602C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x43006030: addiu       $a2, $zero, 0x26
    ctx->r6 = ADD32(0, 0X26);
    // 0x43006034: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x43006038: b           L_43006088
    // 0x4300603C: swc1        $f10, 0x188($s0)
    MEM_W(0X188, ctx->r16) = ctx->f10.u32l;
        goto L_43006088;
    // 0x4300603C: swc1        $f10, 0x188($s0)
    MEM_W(0X188, ctx->r16) = ctx->f10.u32l;
L_43006040:
    // 0x43006040: slti        $at, $v1, 0xC
    ctx->r1 = SIGNED(ctx->r3) < 0XC ? 1 : 0;
    // 0x43006044: bne         $at, $zero, L_43006088
    if (ctx->r1 != 0) {
        // 0x43006048: slti        $at, $v1, 0x10
        ctx->r1 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
            goto L_43006088;
    }
    // 0x43006048: slti        $at, $v1, 0x10
    ctx->r1 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x4300604C: beq         $at, $zero, L_43006088
    if (ctx->r1 == 0) {
        // 0x43006050: nop
    
            goto L_43006088;
    }
    // 0x43006050: nop

    // 0x43006054: mtc1        $v1, $f16
    ctx->f16.u32l = ctx->r3;
    // 0x43006058: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x4300605C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x43006060: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x43006064: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x43006068: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x4300606C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x43006070: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x43006074: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x43006078: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x4300607C: addiu       $a2, $zero, 0x26
    ctx->r6 = ADD32(0, 0X26);
    // 0x43006080: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x43006084: swc1        $f18, 0x188($s0)
    MEM_W(0X188, ctx->r16) = ctx->f18.u32l;
L_43006088:
    // 0x43006088: bne         $a3, $zero, L_430060A8
    if (ctx->r7 != 0) {
        // 0x4300608C: nop
    
            goto L_430060A8;
    }
    // 0x4300608C: nop

    // 0x43006090: beq         $a2, $zero, L_430060A8
    if (ctx->r6 == 0) {
        // 0x43006094: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_430060A8;
    }
    // 0x43006094: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43006098: jal         0x43005078
    // 0x4300609C: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    ovl_enemy_world5_5078(rdram, ctx);
        goto after_6;
    // 0x4300609C: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_6:
    // 0x430060A0: b           L_43006100
    // 0x430060A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43006100;
    // 0x430060A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_430060A8:
    // 0x430060A8: beq         $a3, $zero, L_43006100
    if (ctx->r7 == 0) {
        // 0x430060AC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_43006100;
    }
    // 0x430060AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x430060B0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x430060B4: lwc1        $f6, 0x188($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X188);
    // 0x430060B8: nop

    // 0x430060BC: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x430060C0: nop

    // 0x430060C4: bc1t        L_43006100
    if (c1cs) {
        // 0x430060C8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_43006100;
    }
    // 0x430060C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x430060CC: lw          $t2, 0x54($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X54);
    // 0x430060D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430060D4: sll         $t3, $t2, 5
    ctx->r11 = S32(ctx->r10 << 5);
    // 0x430060D8: bltz        $t3, L_430060FC
    if (SIGNED(ctx->r11) < 0) {
        // 0x430060DC: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_430060FC;
    }
    // 0x430060DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x430060E0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x430060E4: jal         0x43001DE0
    // 0x430060E8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_enemy_world5_1DE0(rdram, ctx);
        goto after_7;
    // 0x430060E8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_7:
    // 0x430060EC: lw          $t4, 0x54($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X54);
    // 0x430060F0: lui         $at, 0x400
    ctx->r1 = S32(0X400 << 16);
    // 0x430060F4: or          $t5, $t4, $at
    ctx->r13 = ctx->r12 | ctx->r1;
    // 0x430060F8: sw          $t5, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r13;
L_430060FC:
    // 0x430060FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43006100:
    // 0x43006100: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43006104: jr          $ra
    // 0x43006108: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x43006108: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_enemy_world5_610C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300610C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x43006110: lw          $v0, 0xC($a2)
    ctx->r2 = MEM_W(ctx->r6, 0XC);
    // 0x43006114: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x43006118: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    // 0x4300611C: bne         $v0, $a3, L_43006130
    if (ctx->r2 != ctx->r7) {
        // 0x43006120: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_43006130;
    }
    // 0x43006120: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x43006124: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x43006128: b           L_430061A4
    // 0x4300612C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
        goto L_430061A4;
    // 0x4300612C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
L_43006130:
    // 0x43006130: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x43006134: bne         $v0, $a2, L_43006144
    if (ctx->r2 != ctx->r6) {
        // 0x43006138: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_43006144;
    }
    // 0x43006138: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x4300613C: b           L_430061A4
    // 0x43006140: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
        goto L_430061A4;
    // 0x43006140: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
L_43006144:
    // 0x43006144: bne         $v0, $at, L_430061A4
    if (ctx->r2 != ctx->r1) {
        // 0x43006148: slti        $at, $a0, 0x16
        ctx->r1 = SIGNED(ctx->r4) < 0X16 ? 1 : 0;
            goto L_430061A4;
    }
    // 0x43006148: slti        $at, $a0, 0x16
    ctx->r1 = SIGNED(ctx->r4) < 0X16 ? 1 : 0;
    // 0x4300614C: bne         $at, $zero, L_43006164
    if (ctx->r1 != 0) {
        // 0x43006150: slti        $at, $a0, 0x1C
        ctx->r1 = SIGNED(ctx->r4) < 0X1C ? 1 : 0;
            goto L_43006164;
    }
    // 0x43006150: slti        $at, $a0, 0x1C
    ctx->r1 = SIGNED(ctx->r4) < 0X1C ? 1 : 0;
    // 0x43006154: beq         $at, $zero, L_43006168
    if (ctx->r1 == 0) {
        // 0x43006158: slti        $at, $a0, 0x1C
        ctx->r1 = SIGNED(ctx->r4) < 0X1C ? 1 : 0;
            goto L_43006168;
    }
    // 0x43006158: slti        $at, $a0, 0x1C
    ctx->r1 = SIGNED(ctx->r4) < 0X1C ? 1 : 0;
    // 0x4300615C: b           L_430061A4
    // 0x43006160: addiu       $v1, $zero, 0x13
    ctx->r3 = ADD32(0, 0X13);
        goto L_430061A4;
    // 0x43006160: addiu       $v1, $zero, 0x13
    ctx->r3 = ADD32(0, 0X13);
L_43006164:
    // 0x43006164: slti        $at, $a0, 0x1C
    ctx->r1 = SIGNED(ctx->r4) < 0X1C ? 1 : 0;
L_43006168:
    // 0x43006168: bne         $at, $zero, L_43006180
    if (ctx->r1 != 0) {
        // 0x4300616C: slti        $at, $a0, 0x22
        ctx->r1 = SIGNED(ctx->r4) < 0X22 ? 1 : 0;
            goto L_43006180;
    }
    // 0x4300616C: slti        $at, $a0, 0x22
    ctx->r1 = SIGNED(ctx->r4) < 0X22 ? 1 : 0;
    // 0x43006170: beq         $at, $zero, L_43006184
    if (ctx->r1 == 0) {
        // 0x43006174: addiu       $at, $zero, 0x22
        ctx->r1 = ADD32(0, 0X22);
            goto L_43006184;
    }
    // 0x43006174: addiu       $at, $zero, 0x22
    ctx->r1 = ADD32(0, 0X22);
    // 0x43006178: b           L_430061A4
    // 0x4300617C: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
        goto L_430061A4;
    // 0x4300617C: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
L_43006180:
    // 0x43006180: addiu       $at, $zero, 0x22
    ctx->r1 = ADD32(0, 0X22);
L_43006184:
    // 0x43006184: bne         $a0, $at, L_43006198
    if (ctx->r4 != ctx->r1) {
        // 0x43006188: addiu       $at, $zero, 0x23
        ctx->r1 = ADD32(0, 0X23);
            goto L_43006198;
    }
    // 0x43006188: addiu       $at, $zero, 0x23
    ctx->r1 = ADD32(0, 0X23);
    // 0x4300618C: b           L_430061A4
    // 0x43006190: addiu       $v1, $zero, 0x15
    ctx->r3 = ADD32(0, 0X15);
        goto L_430061A4;
    // 0x43006190: addiu       $v1, $zero, 0x15
    ctx->r3 = ADD32(0, 0X15);
    // 0x43006194: addiu       $at, $zero, 0x23
    ctx->r1 = ADD32(0, 0X23);
L_43006198:
    // 0x43006198: bne         $a0, $at, L_430061A4
    if (ctx->r4 != ctx->r1) {
        // 0x4300619C: nop
    
            goto L_430061A4;
    }
    // 0x4300619C: nop

    // 0x430061A0: addiu       $v1, $zero, 0x16
    ctx->r3 = ADD32(0, 0X16);
L_430061A4:
    // 0x430061A4: bne         $v1, $zero, L_430062D0
    if (ctx->r3 != 0) {
        // 0x430061A8: nop
    
            goto L_430062D0;
    }
    // 0x430061A8: nop

    // 0x430061AC: bne         $a0, $a3, L_430061BC
    if (ctx->r4 != ctx->r7) {
        // 0x430061B0: nop
    
            goto L_430061BC;
    }
    // 0x430061B0: nop

    // 0x430061B4: jr          $ra
    // 0x430061B8: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    return;
    // 0x430061B8: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_430061BC:
    // 0x430061BC: bne         $a0, $a2, L_430061CC
    if (ctx->r4 != ctx->r6) {
        // 0x430061C0: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_430061CC;
    }
    // 0x430061C0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x430061C4: jr          $ra
    // 0x430061C8: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    return;
    // 0x430061C8: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_430061CC:
    // 0x430061CC: bne         $a0, $at, L_430061E0
    if (ctx->r4 != ctx->r1) {
        // 0x430061D0: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_430061E0;
    }
    // 0x430061D0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x430061D4: jr          $ra
    // 0x430061D8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    return;
    // 0x430061D8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x430061DC: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
L_430061E0:
    // 0x430061E0: bne         $a0, $at, L_430061F4
    if (ctx->r4 != ctx->r1) {
        // 0x430061E4: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_430061F4;
    }
    // 0x430061E4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x430061E8: jr          $ra
    // 0x430061EC: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    return;
    // 0x430061EC: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x430061F0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
L_430061F4:
    // 0x430061F4: bne         $a0, $at, L_43006208
    if (ctx->r4 != ctx->r1) {
        // 0x430061F8: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_43006208;
    }
    // 0x430061F8: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x430061FC: jr          $ra
    // 0x43006200: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    return;
    // 0x43006200: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x43006204: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
L_43006208:
    // 0x43006208: bne         $a0, $at, L_4300621C
    if (ctx->r4 != ctx->r1) {
        // 0x4300620C: addiu       $at, $zero, 0x7
        ctx->r1 = ADD32(0, 0X7);
            goto L_4300621C;
    }
    // 0x4300620C: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x43006210: jr          $ra
    // 0x43006214: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    return;
    // 0x43006214: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x43006218: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
L_4300621C:
    // 0x4300621C: bne         $a0, $at, L_43006230
    if (ctx->r4 != ctx->r1) {
        // 0x43006220: addiu       $at, $zero, 0xE
        ctx->r1 = ADD32(0, 0XE);
            goto L_43006230;
    }
    // 0x43006220: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x43006224: jr          $ra
    // 0x43006228: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    return;
    // 0x43006228: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x4300622C: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
L_43006230:
    // 0x43006230: bne         $a0, $at, L_43006244
    if (ctx->r4 != ctx->r1) {
        // 0x43006234: addiu       $at, $zero, 0x11
        ctx->r1 = ADD32(0, 0X11);
            goto L_43006244;
    }
    // 0x43006234: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x43006238: jr          $ra
    // 0x4300623C: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    return;
    // 0x4300623C: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x43006240: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
L_43006244:
    // 0x43006244: bne         $a0, $at, L_43006258
    if (ctx->r4 != ctx->r1) {
        // 0x43006248: addiu       $at, $zero, 0x12
        ctx->r1 = ADD32(0, 0X12);
            goto L_43006258;
    }
    // 0x43006248: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x4300624C: jr          $ra
    // 0x43006250: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    return;
    // 0x43006250: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x43006254: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
L_43006258:
    // 0x43006258: bne         $a0, $at, L_4300626C
    if (ctx->r4 != ctx->r1) {
        // 0x4300625C: addiu       $at, $zero, 0x13
        ctx->r1 = ADD32(0, 0X13);
            goto L_4300626C;
    }
    // 0x4300625C: addiu       $at, $zero, 0x13
    ctx->r1 = ADD32(0, 0X13);
    // 0x43006260: jr          $ra
    // 0x43006264: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    return;
    // 0x43006264: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x43006268: addiu       $at, $zero, 0x13
    ctx->r1 = ADD32(0, 0X13);
L_4300626C:
    // 0x4300626C: bne         $a0, $at, L_43006280
    if (ctx->r4 != ctx->r1) {
        // 0x43006270: addiu       $at, $zero, 0x14
        ctx->r1 = ADD32(0, 0X14);
            goto L_43006280;
    }
    // 0x43006270: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x43006274: jr          $ra
    // 0x43006278: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    return;
    // 0x43006278: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x4300627C: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
L_43006280:
    // 0x43006280: bne         $a0, $at, L_43006294
    if (ctx->r4 != ctx->r1) {
        // 0x43006284: addiu       $at, $zero, 0x15
        ctx->r1 = ADD32(0, 0X15);
            goto L_43006294;
    }
    // 0x43006284: addiu       $at, $zero, 0x15
    ctx->r1 = ADD32(0, 0X15);
    // 0x43006288: jr          $ra
    // 0x4300628C: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    return;
    // 0x4300628C: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x43006290: addiu       $at, $zero, 0x15
    ctx->r1 = ADD32(0, 0X15);
L_43006294:
    // 0x43006294: bne         $a0, $at, L_430062A4
    if (ctx->r4 != ctx->r1) {
        // 0x43006298: nop
    
            goto L_430062A4;
    }
    // 0x43006298: nop

    // 0x4300629C: jr          $ra
    // 0x430062A0: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    return;
    // 0x430062A0: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
L_430062A4:
    // 0x430062A4: bne         $a1, $zero, L_430062B4
    if (ctx->r5 != 0) {
        // 0x430062A8: nop
    
            goto L_430062B4;
    }
    // 0x430062A8: nop

    // 0x430062AC: jr          $ra
    // 0x430062B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x430062B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_430062B4:
    // 0x430062B4: bne         $a1, $a3, L_430062C4
    if (ctx->r5 != ctx->r7) {
        // 0x430062B8: nop
    
            goto L_430062C4;
    }
    // 0x430062B8: nop

    // 0x430062BC: jr          $ra
    // 0x430062C0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    return;
    // 0x430062C0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_430062C4:
    // 0x430062C4: bne         $a1, $a2, L_430062D0
    if (ctx->r5 != ctx->r6) {
        // 0x430062C8: nop
    
            goto L_430062D0;
    }
    // 0x430062C8: nop

    // 0x430062CC: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
L_430062D0:
    // 0x430062D0: jr          $ra
    // 0x430062D4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x430062D4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_enemy_world5_62D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430062D8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x430062DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430062E0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x430062E4: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x430062E8: jal         0x43003B98
    // 0x430062EC: nop

    ovl_enemy_world5_3B98(rdram, ctx);
        goto after_0;
    // 0x430062EC: nop

    after_0:
    // 0x430062F0: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x430062F4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x430062F8: lw          $v1, 0xC($t7)
    ctx->r3 = MEM_W(ctx->r15, 0XC);
    // 0x430062FC: beq         $v0, $at, L_43006358
    if (ctx->r2 == ctx->r1) {
        // 0x43006300: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_43006358;
    }
    // 0x43006300: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x43006304: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x43006308: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x4300630C: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x43006310: lw          $t9, 0x14($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X14);
    // 0x43006314: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x43006318: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x4300631C: lwc1        $f4, 0x4($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X4);
    // 0x43006320: nop

    // 0x43006324: swc1        $f4, 0x1EC($v0)
    MEM_W(0X1EC, ctx->r2) = ctx->f4.u32l;
    // 0x43006328: lwc1        $f6, 0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8);
    // 0x4300632C: nop

    // 0x43006330: swc1        $f6, 0x1F0($v0)
    MEM_W(0X1F0, ctx->r2) = ctx->f6.u32l;
    // 0x43006334: lwc1        $f8, 0xC($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0XC);
    // 0x43006338: nop

    // 0x4300633C: swc1        $f8, 0x1F4($v0)
    MEM_W(0X1F4, ctx->r2) = ctx->f8.u32l;
    // 0x43006340: jal         0x4300610C
    // 0x43006344: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    ovl_enemy_world5_610C(rdram, ctx);
        goto after_1;
    // 0x43006344: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_1:
    // 0x43006348: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x4300634C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x43006350: jal         0x43005EB4
    // 0x43006354: sw          $v0, 0x1E4($a0)
    MEM_W(0X1E4, ctx->r4) = ctx->r2;
    ovl_enemy_world5_5EB4(rdram, ctx);
        goto after_2;
    // 0x43006354: sw          $v0, 0x1E4($a0)
    MEM_W(0X1E4, ctx->r4) = ctx->r2;
    after_2:
L_43006358:
    // 0x43006358: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4300635C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x43006360: jr          $ra
    // 0x43006364: nop

    return;
    // 0x43006364: nop

;}
RECOMP_FUNC void ovl_enemy_world5_6368(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006368: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4300636C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43006370: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x43006374: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x43006378: jal         0x43003B98
    // 0x4300637C: nop

    ovl_enemy_world5_3B98(rdram, ctx);
        goto after_0;
    // 0x4300637C: nop

    after_0:
    // 0x43006380: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x43006384: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x43006388: lw          $a2, 0xC($t7)
    ctx->r6 = MEM_W(ctx->r15, 0XC);
    // 0x4300638C: beq         $v0, $at, L_430063BC
    if (ctx->r2 == ctx->r1) {
        // 0x43006390: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_430063BC;
    }
    // 0x43006390: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x43006394: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x43006398: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x4300639C: jal         0x4300610C
    // 0x430063A0: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    ovl_enemy_world5_610C(rdram, ctx);
        goto after_1;
    // 0x430063A0: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_1:
    // 0x430063A4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x430063A8: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x430063AC: sw          $v0, 0x1E4($a0)
    MEM_W(0X1E4, ctx->r4) = ctx->r2;
    // 0x430063B0: lw          $a1, 0x4($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X4);
    // 0x430063B4: jal         0x43005EB4
    // 0x430063B8: nop

    ovl_enemy_world5_5EB4(rdram, ctx);
        goto after_2;
    // 0x430063B8: nop

    after_2:
L_430063BC:
    // 0x430063BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430063C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x430063C4: jr          $ra
    // 0x430063C8: nop

    return;
    // 0x430063C8: nop

;}
RECOMP_FUNC void ovl_enemy_world5_63CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430063CC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x430063D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430063D4: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x430063D8: lw          $t6, 0xC($a1)
    ctx->r14 = MEM_W(ctx->r5, 0XC);
    // 0x430063DC: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x430063E0: jal         0x43003B98
    // 0x430063E4: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    ovl_enemy_world5_3B98(rdram, ctx);
        goto after_0;
    // 0x430063E4: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    after_0:
    // 0x430063E8: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x430063EC: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x430063F0: sw          $t7, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r15;
    // 0x430063F4: lw          $t8, 0x64($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X64);
    // 0x430063F8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x430063FC: slti        $at, $t8, 0xA
    ctx->r1 = SIGNED(ctx->r24) < 0XA ? 1 : 0;
    // 0x43006400: beq         $at, $zero, L_4300643C
    if (ctx->r1 == 0) {
        // 0x43006404: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4300643C;
    }
    // 0x43006404: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43006408: lw          $a2, 0x64($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X64);
    // 0x4300640C: jal         0x43001A78
    // 0x43006410: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    ovl_enemy_world5_1A78(rdram, ctx);
        goto after_1;
    // 0x43006410: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x43006414: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x43006418: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x4300641C: lw          $t9, 0x64($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X64);
    // 0x43006420: nop

    // 0x43006424: sw          $t9, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r25;
    // 0x43006428: lw          $t1, 0x64($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X64);
    // 0x4300642C: nop

    // 0x43006430: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x43006434: sw          $t2, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r10;
    // 0x43006438: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4300643C:
    // 0x4300643C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x43006440: jr          $ra
    // 0x43006444: nop

    return;
    // 0x43006444: nop

;}
RECOMP_FUNC void ovl_enemy_world5_6448(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006448: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4300644C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43006450: lw          $a2, 0xC($a0)
    ctx->r6 = MEM_W(ctx->r4, 0XC);
    // 0x43006454: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x43006458: jal         0x43003B98
    // 0x4300645C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    ovl_enemy_world5_3B98(rdram, ctx);
        goto after_0;
    // 0x4300645C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x43006460: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x43006464: addiu       $t6, $v0, 0x14
    ctx->r14 = ADD32(ctx->r2, 0X14);
    // 0x43006468: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x4300646C: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x43006470: jal         0x43005218
    // 0x43006474: sw          $t6, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r14;
    ovl_enemy_world5_5218(rdram, ctx);
        goto after_1;
    // 0x43006474: sw          $t6, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r14;
    after_1:
    // 0x43006478: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4300647C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x43006480: jr          $ra
    // 0x43006484: nop

    return;
    // 0x43006484: nop

;}
RECOMP_FUNC void ovl_enemy_world5_6488(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006488: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4300648C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43006490: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x43006494: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x43006498: jal         0x43003B98
    // 0x4300649C: nop

    ovl_enemy_world5_3B98(rdram, ctx);
        goto after_0;
    // 0x4300649C: nop

    after_0:
    // 0x430064A0: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x430064A4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x430064A8: lw          $a2, 0xC($t7)
    ctx->r6 = MEM_W(ctx->r15, 0XC);
    // 0x430064AC: beq         $v0, $at, L_430064DC
    if (ctx->r2 == ctx->r1) {
        // 0x430064B0: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_430064DC;
    }
    // 0x430064B0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x430064B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x430064B8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x430064BC: jal         0x4300610C
    // 0x430064C0: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    ovl_enemy_world5_610C(rdram, ctx);
        goto after_1;
    // 0x430064C0: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_1:
    // 0x430064C4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x430064C8: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x430064CC: sw          $v0, 0x1E4($a0)
    MEM_W(0X1E4, ctx->r4) = ctx->r2;
    // 0x430064D0: lw          $a1, 0x4($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X4);
    // 0x430064D4: jal         0x43005EB4
    // 0x430064D8: nop

    ovl_enemy_world5_5EB4(rdram, ctx);
        goto after_2;
    // 0x430064D8: nop

    after_2:
L_430064DC:
    // 0x430064DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430064E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x430064E4: jr          $ra
    // 0x430064E8: nop

    return;
    // 0x430064E8: nop

;}
RECOMP_FUNC void ovl_enemy_world5_64EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430064EC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x430064F0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x430064F4: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x430064F8: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x430064FC: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x43006500: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x43006504: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x43006508: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x4300650C: lw          $s1, 0xC($a0)
    ctx->r17 = MEM_W(ctx->r4, 0XC);
    // 0x43006510: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x43006514: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x43006518: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4300651C: bne         $v0, $at, L_43006540
    if (ctx->r2 != ctx->r1) {
        // 0x43006520: addiu       $at, $zero, 0x1A
        ctx->r1 = ADD32(0, 0X1A);
            goto L_43006540;
    }
    // 0x43006520: addiu       $at, $zero, 0x1A
    ctx->r1 = ADD32(0, 0X1A);
    // 0x43006524: lw          $s2, 0x4($s1)
    ctx->r18 = MEM_W(ctx->r17, 0X4);
    // 0x43006528: jal         0x430019B0
    // 0x4300652C: nop

    ovl_enemy_world5_19B0(rdram, ctx);
        goto after_0;
    // 0x4300652C: nop

    after_0:
    // 0x43006530: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    // 0x43006534: b           L_430066AC
    // 0x43006538: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
        goto L_430066AC;
    // 0x43006538: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x4300653C: addiu       $at, $zero, 0x1A
    ctx->r1 = ADD32(0, 0X1A);
L_43006540:
    // 0x43006540: bne         $v0, $at, L_43006570
    if (ctx->r2 != ctx->r1) {
        // 0x43006544: addiu       $at, $zero, 0x20
        ctx->r1 = ADD32(0, 0X20);
            goto L_43006570;
    }
    // 0x43006544: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x43006548: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x4300654C: jal         0x43003B98
    // 0x43006550: nop

    ovl_enemy_world5_3B98(rdram, ctx);
        goto after_1;
    // 0x43006550: nop

    after_1:
    // 0x43006554: addiu       $s5, $zero, -0x1
    ctx->r21 = ADD32(0, -0X1);
    // 0x43006558: beq         $v0, $s5, L_430066AC
    if (ctx->r2 == ctx->r21) {
        // 0x4300655C: addiu       $t6, $v0, 0x14
        ctx->r14 = ADD32(ctx->r2, 0X14);
            goto L_430066AC;
    }
    // 0x4300655C: addiu       $t6, $v0, 0x14
    ctx->r14 = ADD32(ctx->r2, 0X14);
    // 0x43006560: lw          $v1, 0x4($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4);
    // 0x43006564: b           L_430066AC
    // 0x43006568: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
        goto L_430066AC;
    // 0x43006568: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x4300656C: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
L_43006570:
    // 0x43006570: bne         $v0, $at, L_430065FC
    if (ctx->r2 != ctx->r1) {
        // 0x43006574: addiu       $at, $zero, 0x29
        ctx->r1 = ADD32(0, 0X29);
            goto L_430065FC;
    }
    // 0x43006574: addiu       $at, $zero, 0x29
    ctx->r1 = ADD32(0, 0X29);
    // 0x43006578: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x4300657C: jal         0x43003B98
    // 0x43006580: nop

    ovl_enemy_world5_3B98(rdram, ctx);
        goto after_2;
    // 0x43006580: nop

    after_2:
    // 0x43006584: addiu       $s5, $zero, -0x1
    ctx->r21 = ADD32(0, -0X1);
    // 0x43006588: beq         $v0, $s5, L_430066AC
    if (ctx->r2 == ctx->r21) {
        // 0x4300658C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_430066AC;
    }
    // 0x4300658C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x43006590: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x43006594: nop

    // 0x43006598: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x4300659C: nop

    // 0x430065A0: beq         $t7, $zero, L_430065CC
    if (ctx->r15 == 0) {
        // 0x430065A4: nop
    
            goto L_430065CC;
    }
    // 0x430065A4: nop

    // 0x430065A8: lw          $t8, 0x54($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X54);
    // 0x430065AC: lui         $at, 0x40
    ctx->r1 = S32(0X40 << 16);
    // 0x430065B0: ori         $t9, $t8, 0x1000
    ctx->r25 = ctx->r24 | 0X1000;
    // 0x430065B4: sw          $t9, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r25;
    // 0x430065B8: or          $t1, $t9, $at
    ctx->r9 = ctx->r25 | ctx->r1;
    // 0x430065BC: jal         0x430014D8
    // 0x430065C0: sw          $t1, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r9;
    ovl_enemy_world5_14D8(rdram, ctx);
        goto after_3;
    // 0x430065C0: sw          $t1, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r9;
    after_3:
    // 0x430065C4: b           L_430066B0
    // 0x430065C8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_430066B0;
    // 0x430065C8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_430065CC:
    // 0x430065CC: lw          $t2, 0x54($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X54);
    // 0x430065D0: addiu       $at, $zero, -0x1001
    ctx->r1 = ADD32(0, -0X1001);
    // 0x430065D4: and         $t3, $t2, $at
    ctx->r11 = ctx->r10 & ctx->r1;
    // 0x430065D8: lui         $at, 0xFFBF
    ctx->r1 = S32(0XFFBF << 16);
    // 0x430065DC: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x430065E0: sw          $t3, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r11;
    // 0x430065E4: and         $t5, $t3, $at
    ctx->r13 = ctx->r11 & ctx->r1;
    // 0x430065E8: jal         0x43001F1C
    // 0x430065EC: sw          $t5, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r13;
    ovl_enemy_world5_1F1C(rdram, ctx);
        goto after_4;
    // 0x430065EC: sw          $t5, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r13;
    after_4:
    // 0x430065F0: b           L_430066B0
    // 0x430065F4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_430066B0;
    // 0x430065F4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x430065F8: addiu       $at, $zero, 0x29
    ctx->r1 = ADD32(0, 0X29);
L_430065FC:
    // 0x430065FC: bne         $v0, $at, L_430066AC
    if (ctx->r2 != ctx->r1) {
        // 0x43006600: addiu       $a0, $zero, 0x6
        ctx->r4 = ADD32(0, 0X6);
            goto L_430066AC;
    }
    // 0x43006600: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x43006604: jal         0x43005250
    // 0x43006608: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_enemy_world5_5250(rdram, ctx);
        goto after_5;
    // 0x43006608: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x4300660C: lui         $s4, 0x4301
    ctx->r20 = S32(0X4301 << 16);
    // 0x43006610: lw          $s4, -0x5D80($s4)
    ctx->r20 = MEM_W(ctx->r20, -0X5D80);
    // 0x43006614: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x43006618: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x4300661C: blez        $s4, L_430066AC
    if (SIGNED(ctx->r20) <= 0) {
        // 0x43006620: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_430066AC;
    }
    // 0x43006620: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x43006624: addiu       $s5, $zero, -0x1
    ctx->r21 = ADD32(0, -0X1);
    // 0x43006628: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x4300662C: slti        $at, $s1, 0xA
    ctx->r1 = SIGNED(ctx->r17) < 0XA ? 1 : 0;
L_43006630:
    // 0x43006630: beq         $at, $zero, L_430066A0
    if (ctx->r1 == 0) {
        // 0x43006634: nop
    
            goto L_430066A0;
    }
    // 0x43006634: nop

L_43006638:
    // 0x43006638: lw          $t6, 0x4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X4);
    // 0x4300663C: nop

    // 0x43006640: beq         $s2, $t6, L_43006690
    if (ctx->r18 == ctx->r14) {
        // 0x43006644: nop
    
            goto L_43006690;
    }
    // 0x43006644: nop

    // 0x43006648: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
    // 0x4300664C: nop

    // 0x43006650: beq         $s2, $t7, L_43006690
    if (ctx->r18 == ctx->r15) {
        // 0x43006654: nop
    
            goto L_43006690;
    }
    // 0x43006654: nop

    // 0x43006658: lw          $t8, 0x54($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X54);
    // 0x4300665C: nop

    // 0x43006660: andi        $t9, $t8, 0x10
    ctx->r25 = ctx->r24 & 0X10;
    // 0x43006664: beq         $t9, $zero, L_43006688
    if (ctx->r25 == 0) {
        // 0x43006668: nop
    
            goto L_43006688;
    }
    // 0x43006668: nop

    // 0x4300666C: lw          $t0, 0x190($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X190);
    // 0x43006670: nop

    // 0x43006674: beq         $s5, $t0, L_43006684
    if (ctx->r21 == ctx->r8) {
        // 0x43006678: nop
    
            goto L_43006684;
    }
    // 0x43006678: nop

    // 0x4300667C: jal         0x43002CD8
    // 0x43006680: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world5_2CD8(rdram, ctx);
        goto after_6;
    // 0x43006680: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
L_43006684:
    // 0x43006684: sw          $zero, 0x194($s0)
    MEM_W(0X194, ctx->r16) = 0;
L_43006688:
    // 0x43006688: b           L_430066A0
    // 0x4300668C: addiu       $s0, $s0, 0x268
    ctx->r16 = ADD32(ctx->r16, 0X268);
        goto L_430066A0;
    // 0x4300668C: addiu       $s0, $s0, 0x268
    ctx->r16 = ADD32(ctx->r16, 0X268);
L_43006690:
    // 0x43006690: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x43006694: slti        $at, $s1, 0xA
    ctx->r1 = SIGNED(ctx->r17) < 0XA ? 1 : 0;
    // 0x43006698: bne         $at, $zero, L_43006638
    if (ctx->r1 != 0) {
        // 0x4300669C: addiu       $s0, $s0, 0x268
        ctx->r16 = ADD32(ctx->r16, 0X268);
            goto L_43006638;
    }
    // 0x4300669C: addiu       $s0, $s0, 0x268
    ctx->r16 = ADD32(ctx->r16, 0X268);
L_430066A0:
    // 0x430066A0: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x430066A4: bne         $s3, $s4, L_43006630
    if (ctx->r19 != ctx->r20) {
        // 0x430066A8: slti        $at, $s1, 0xA
        ctx->r1 = SIGNED(ctx->r17) < 0XA ? 1 : 0;
            goto L_43006630;
    }
    // 0x430066A8: slti        $at, $s1, 0xA
    ctx->r1 = SIGNED(ctx->r17) < 0XA ? 1 : 0;
L_430066AC:
    // 0x430066AC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_430066B0:
    // 0x430066B0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x430066B4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x430066B8: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x430066BC: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x430066C0: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x430066C4: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x430066C8: jr          $ra
    // 0x430066CC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x430066CC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_enemy_world5_66D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430066D0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x430066D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430066D8: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x430066DC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x430066E0: lw          $a1, 0xC($v1)
    ctx->r5 = MEM_W(ctx->r3, 0XC);
    // 0x430066E4: nop

    // 0x430066E8: beq         $a1, $at, L_430067A8
    if (ctx->r5 == ctx->r1) {
        // 0x430066EC: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_430067A8;
    }
    // 0x430066EC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x430066F0: jal         0x43003B98
    // 0x430066F4: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    ovl_enemy_world5_3B98(rdram, ctx);
        goto after_0;
    // 0x430066F4: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_0:
    // 0x430066F8: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x430066FC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x43006700: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x43006704: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x43006708: bne         $v0, $zero, L_43006754
    if (ctx->r2 != 0) {
        // 0x4300670C: nop
    
            goto L_43006754;
    }
    // 0x4300670C: nop

    // 0x43006710: lw          $v0, 0x10($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X10);
    // 0x43006714: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x43006718: bne         $v0, $at, L_43006738
    if (ctx->r2 != ctx->r1) {
        // 0x4300671C: addiu       $at, $zero, 0xA
        ctx->r1 = ADD32(0, 0XA);
            goto L_43006738;
    }
    // 0x4300671C: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x43006720: lw          $a1, 0x14($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X14);
    // 0x43006724: jal         0x430018CC
    // 0x43006728: nop

    ovl_enemy_world5_18CC(rdram, ctx);
        goto after_1;
    // 0x43006728: nop

    after_1:
    // 0x4300672C: b           L_430067AC
    // 0x43006730: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_430067AC;
    // 0x43006730: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43006734: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
L_43006738:
    // 0x43006738: bne         $v0, $at, L_430067AC
    if (ctx->r2 != ctx->r1) {
        // 0x4300673C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_430067AC;
    }
    // 0x4300673C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43006740: lw          $a1, 0x14($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X14);
    // 0x43006744: jal         0x43001818
    // 0x43006748: nop

    ovl_enemy_world5_1818(rdram, ctx);
        goto after_2;
    // 0x43006748: nop

    after_2:
    // 0x4300674C: b           L_430067AC
    // 0x43006750: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_430067AC;
    // 0x43006750: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43006754:
    // 0x43006754: bne         $v0, $at, L_43006784
    if (ctx->r2 != ctx->r1) {
        // 0x43006758: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_43006784;
    }
    // 0x43006758: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4300675C: lw          $t6, 0x10($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X10);
    // 0x43006760: addiu       $at, $zero, 0x1F
    ctx->r1 = ADD32(0, 0X1F);
    // 0x43006764: bne         $t6, $at, L_43006784
    if (ctx->r14 != ctx->r1) {
        // 0x43006768: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_43006784;
    }
    // 0x43006768: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4300676C: lw          $a1, 0x14($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X14);
    // 0x43006770: jal         0x430018CC
    // 0x43006774: nop

    ovl_enemy_world5_18CC(rdram, ctx);
        goto after_3;
    // 0x43006774: nop

    after_3:
    // 0x43006778: b           L_430067AC
    // 0x4300677C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_430067AC;
    // 0x4300677C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43006780: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_43006784:
    // 0x43006784: bne         $v0, $at, L_430067AC
    if (ctx->r2 != ctx->r1) {
        // 0x43006788: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_430067AC;
    }
    // 0x43006788: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4300678C: lw          $t7, 0x10($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X10);
    // 0x43006790: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x43006794: bne         $t7, $at, L_430067AC
    if (ctx->r15 != ctx->r1) {
        // 0x43006798: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_430067AC;
    }
    // 0x43006798: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4300679C: lw          $a1, 0x14($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X14);
    // 0x430067A0: jal         0x43001964
    // 0x430067A4: nop

    ovl_enemy_world5_1964(rdram, ctx);
        goto after_4;
    // 0x430067A4: nop

    after_4:
L_430067A8:
    // 0x430067A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_430067AC:
    // 0x430067AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x430067B0: jr          $ra
    // 0x430067B4: nop

    return;
    // 0x430067B4: nop

;}
