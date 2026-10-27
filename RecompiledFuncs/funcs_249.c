#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_enemy_battle_67B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430067B8: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x430067BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430067C0: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x430067C4: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x430067C8: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x430067CC: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x430067D0: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    // 0x430067D4: jal         0x430006C4
    // 0x430067D8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_enemy_battle_6C4(rdram, ctx);
        goto after_0;
    // 0x430067D8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x430067DC: jal         0x43000DE4
    // 0x430067E0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_enemy_battle_DE4(rdram, ctx);
        goto after_1;
    // 0x430067E0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x430067E4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x430067E8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x430067EC: jal         0x430006C4
    // 0x430067F0: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_enemy_battle_6C4(rdram, ctx);
        goto after_2;
    // 0x430067F0: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_2:
    // 0x430067F4: beq         $v0, $zero, L_43006808
    if (ctx->r2 == 0) {
        // 0x430067F8: lw          $t6, 0x5C($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X5C);
            goto L_43006808;
    }
    // 0x430067F8: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    // 0x430067FC: b           L_430068D8
    // 0x43006800: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_430068D8;
    // 0x43006800: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x43006804: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
L_43006808:
    // 0x43006808: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x4300680C: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x43006810: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x43006814: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x43006818: lwc1        $f12, 0x40($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X40);
    // 0x4300681C: lwc1        $f2, 0x28($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X28);
    // 0x43006820: mul.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x43006824: sub.s       $f10, $f12, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x43006828: c.le.s      $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f10.fl <= ctx->f2.fl;
    // 0x4300682C: nop

    // 0x43006830: bc1f        L_430068D4
    if (!c1cs) {
        // 0x43006834: lw          $v0, 0x24($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X24);
            goto L_430068D4;
    }
    // 0x43006834: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x43006838: add.s       $f16, $f0, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f0.fl + ctx->f12.fl;
    // 0x4300683C: lwc1        $f12, 0x48($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X48);
    // 0x43006840: c.le.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl <= ctx->f16.fl;
    // 0x43006844: nop

    // 0x43006848: bc1f        L_430068D4
    if (!c1cs) {
        // 0x4300684C: lw          $v0, 0x24($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X24);
            goto L_430068D4;
    }
    // 0x4300684C: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x43006850: lwc1        $f2, 0x30($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X30);
    // 0x43006854: sub.s       $f18, $f12, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x43006858: c.le.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl <= ctx->f2.fl;
    // 0x4300685C: nop

    // 0x43006860: bc1f        L_430068D4
    if (!c1cs) {
        // 0x43006864: lw          $v0, 0x24($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X24);
            goto L_430068D4;
    }
    // 0x43006864: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x43006868: add.s       $f4, $f0, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f12.fl;
    // 0x4300686C: lw          $t7, 0x60($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X60);
    // 0x43006870: c.le.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl <= ctx->f4.fl;
    // 0x43006874: nop

    // 0x43006878: bc1f        L_430068D4
    if (!c1cs) {
        // 0x4300687C: lw          $v0, 0x24($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X24);
            goto L_430068D4;
    }
    // 0x4300687C: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x43006880: beq         $t7, $zero, L_430068CC
    if (ctx->r15 == 0) {
        // 0x43006884: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_430068CC;
    }
    // 0x43006884: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x43006888: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x4300688C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x43006890: lwc1        $f2, 0x44($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X44);
    // 0x43006894: lwc1        $f0, 0x2C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x43006898: sub.s       $f6, $f2, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x4300689C: c.le.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl <= ctx->f0.fl;
    // 0x430068A0: nop

    // 0x430068A4: bc1f        L_430068D4
    if (!c1cs) {
        // 0x430068A8: lw          $v0, 0x24($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X24);
            goto L_430068D4;
    }
    // 0x430068A8: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x430068AC: add.s       $f8, $f2, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f12.fl;
    // 0x430068B0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x430068B4: c.le.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl <= ctx->f8.fl;
    // 0x430068B8: nop

    // 0x430068BC: bc1f        L_430068D4
    if (!c1cs) {
        // 0x430068C0: lw          $v0, 0x24($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X24);
            goto L_430068D4;
    }
    // 0x430068C0: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x430068C4: b           L_430068D0
    // 0x430068C8: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
        goto L_430068D0;
    // 0x430068C8: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
L_430068CC:
    // 0x430068CC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
L_430068D0:
    // 0x430068D0: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
L_430068D4:
    // 0x430068D4: nop

L_430068D8:
    // 0x430068D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430068DC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x430068E0: jr          $ra
    // 0x430068E4: nop

    return;
    // 0x430068E4: nop

;}
RECOMP_FUNC void ovl_enemy_battle_68E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430068E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x430068EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430068F0: jal         0x430067B8
    // 0x430068F4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_enemy_battle_67B8(rdram, ctx);
        goto after_0;
    // 0x430068F4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x430068F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430068FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43006900: jr          $ra
    // 0x43006904: nop

    return;
    // 0x43006904: nop

;}
RECOMP_FUNC void ovl_enemy_battle_6908(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006908: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4300690C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43006910: jal         0x430067B8
    // 0x43006914: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_enemy_battle_67B8(rdram, ctx);
        goto after_0;
    // 0x43006914: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x43006918: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4300691C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43006920: jr          $ra
    // 0x43006924: nop

    return;
    // 0x43006924: nop

;}
RECOMP_FUNC void ovl_enemy_battle_6928(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006928: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4300692C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43006930: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43006934: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x43006938: lw          $v0, 0x1C0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C0);
    // 0x4300693C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43006940: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x43006944: bgtz        $v0, L_4300699C
    if (SIGNED(ctx->r2) > 0) {
        // 0x43006948: sw          $t6, 0x1C0($a0)
        MEM_W(0X1C0, ctx->r4) = ctx->r14;
            goto L_4300699C;
    }
    // 0x43006948: sw          $t6, 0x1C0($a0)
    MEM_W(0X1C0, ctx->r4) = ctx->r14;
    // 0x4300694C: jal         0x430068E8
    // 0x43006950: nop

    ovl_enemy_battle_68E8(rdram, ctx);
        goto after_0;
    // 0x43006950: nop

    after_0:
    // 0x43006954: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x43006958: bne         $v0, $at, L_4300697C
    if (ctx->r2 != ctx->r1) {
        // 0x4300695C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4300697C;
    }
    // 0x4300695C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43006960: lw          $t7, 0x1C8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X1C8);
    // 0x43006964: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43006968: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x4300696C: jal         0x43001F1C
    // 0x43006970: sw          $t8, 0x1C8($s0)
    MEM_W(0X1C8, ctx->r16) = ctx->r24;
    ovl_enemy_battle_1F1C(rdram, ctx);
        goto after_1;
    // 0x43006970: sw          $t8, 0x1C8($s0)
    MEM_W(0X1C8, ctx->r16) = ctx->r24;
    after_1:
    // 0x43006974: b           L_43006994
    // 0x43006978: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
        goto L_43006994;
    // 0x43006978: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
L_4300697C:
    // 0x4300697C: lw          $t9, 0x1C8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X1C8);
    // 0x43006980: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x43006984: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x43006988: jal         0x430014D8
    // 0x4300698C: sw          $t0, 0x1C8($s0)
    MEM_W(0X1C8, ctx->r16) = ctx->r8;
    ovl_enemy_battle_14D8(rdram, ctx);
        goto after_2;
    // 0x4300698C: sw          $t0, 0x1C8($s0)
    MEM_W(0X1C8, ctx->r16) = ctx->r8;
    after_2:
    // 0x43006990: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
L_43006994:
    // 0x43006994: nop

    // 0x43006998: sw          $t1, 0x1C0($s0)
    MEM_W(0X1C0, ctx->r16) = ctx->r9;
L_4300699C:
    // 0x4300699C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x430069A0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x430069A4: jr          $ra
    // 0x430069A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x430069A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_enemy_battle_69AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430069AC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x430069B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430069B4: lw          $t7, 0x248($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X248);
    // 0x430069B8: lw          $t6, 0x1A4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X1A4);
    // 0x430069BC: slti        $at, $a1, 0x8
    ctx->r1 = SIGNED(ctx->r5) < 0X8 ? 1 : 0;
    // 0x430069C0: nor         $t8, $t7, $zero
    ctx->r24 = ~(ctx->r15 | 0);
    // 0x430069C4: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x430069C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x430069CC: bne         $at, $zero, L_430069DC
    if (ctx->r1 != 0) {
        // 0x430069D0: and         $t0, $t6, $t8
        ctx->r8 = ctx->r14 & ctx->r24;
            goto L_430069DC;
    }
    // 0x430069D0: and         $t0, $t6, $t8
    ctx->r8 = ctx->r14 & ctx->r24;
    // 0x430069D4: b           L_430069F0
    // 0x430069D8: addiu       $v0, $a1, -0x8
    ctx->r2 = ADD32(ctx->r5, -0X8);
        goto L_430069F0;
    // 0x430069D8: addiu       $v0, $a1, -0x8
    ctx->r2 = ADD32(ctx->r5, -0X8);
L_430069DC:
    // 0x430069DC: bgez        $a3, L_430069EC
    if (SIGNED(ctx->r7) >= 0) {
        // 0x430069E0: or          $v1, $a3, $zero
        ctx->r3 = ctx->r7 | 0;
            goto L_430069EC;
    }
    // 0x430069E0: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
    // 0x430069E4: b           L_430069EC
    // 0x430069E8: addiu       $v1, $a3, 0x8
    ctx->r3 = ADD32(ctx->r7, 0X8);
        goto L_430069EC;
    // 0x430069E8: addiu       $v1, $a3, 0x8
    ctx->r3 = ADD32(ctx->r7, 0X8);
L_430069EC:
    // 0x430069EC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_430069F0:
    // 0x430069F0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x430069F4: sllv        $t1, $t9, $v0
    ctx->r9 = S32(ctx->r25 << (ctx->r2 & 31));
    // 0x430069F8: and         $t2, $t1, $t0
    ctx->r10 = ctx->r9 & ctx->r8;
    // 0x430069FC: beq         $t2, $zero, L_43006AFC
    if (ctx->r10 == 0) {
        // 0x43006A00: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43006AFC;
    }
    // 0x43006A00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43006A04: lw          $t3, 0x54($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X54);
    // 0x43006A08: slti        $at, $a3, 0x8
    ctx->r1 = SIGNED(ctx->r7) < 0X8 ? 1 : 0;
    // 0x43006A0C: sll         $t4, $t3, 12
    ctx->r12 = S32(ctx->r11 << 12);
    // 0x43006A10: bgez        $t4, L_43006A78
    if (SIGNED(ctx->r12) >= 0) {
        // 0x43006A14: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_43006A78;
    }
    // 0x43006A14: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x43006A18: bne         $at, $zero, L_43006A28
    if (ctx->r1 != 0) {
        // 0x43006A1C: nop
    
            goto L_43006A28;
    }
    // 0x43006A1C: nop

    // 0x43006A20: b           L_43006A3C
    // 0x43006A24: addiu       $v0, $a3, -0x8
    ctx->r2 = ADD32(ctx->r7, -0X8);
        goto L_43006A3C;
    // 0x43006A24: addiu       $v0, $a3, -0x8
    ctx->r2 = ADD32(ctx->r7, -0X8);
L_43006A28:
    // 0x43006A28: bgez        $a3, L_43006A38
    if (SIGNED(ctx->r7) >= 0) {
        // 0x43006A2C: or          $v1, $a3, $zero
        ctx->r3 = ctx->r7 | 0;
            goto L_43006A38;
    }
    // 0x43006A2C: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
    // 0x43006A30: b           L_43006A38
    // 0x43006A34: addiu       $v1, $a3, 0x8
    ctx->r3 = ADD32(ctx->r7, 0X8);
        goto L_43006A38;
    // 0x43006A34: addiu       $v1, $a3, 0x8
    ctx->r3 = ADD32(ctx->r7, 0X8);
L_43006A38:
    // 0x43006A38: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_43006A3C:
    // 0x43006A3C: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x43006A40: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x43006A44: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x43006A48: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x43006A4C: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    // 0x43006A50: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x43006A54: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x43006A58: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x43006A5C: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x43006A60: jal         0x430048A4
    // 0x43006A64: nop

    ovl_enemy_battle_48A4(rdram, ctx);
        goto after_0;
    // 0x43006A64: nop

    after_0:
    // 0x43006A68: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x43006A6C: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x43006A70: b           L_43006A78
    // 0x43006A74: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
        goto L_43006A78;
    // 0x43006A74: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
L_43006A78:
    // 0x43006A78: beq         $a2, $zero, L_43006AF8
    if (ctx->r6 == 0) {
        // 0x43006A7C: slti        $at, $a3, 0x8
        ctx->r1 = SIGNED(ctx->r7) < 0X8 ? 1 : 0;
            goto L_43006AF8;
    }
    // 0x43006A7C: slti        $at, $a3, 0x8
    ctx->r1 = SIGNED(ctx->r7) < 0X8 ? 1 : 0;
    // 0x43006A80: bne         $at, $zero, L_43006A90
    if (ctx->r1 != 0) {
        // 0x43006A84: nop
    
            goto L_43006A90;
    }
    // 0x43006A84: nop

    // 0x43006A88: b           L_43006AA4
    // 0x43006A8C: addiu       $v0, $a3, -0x8
    ctx->r2 = ADD32(ctx->r7, -0X8);
        goto L_43006AA4;
    // 0x43006A8C: addiu       $v0, $a3, -0x8
    ctx->r2 = ADD32(ctx->r7, -0X8);
L_43006A90:
    // 0x43006A90: bgez        $a3, L_43006AA0
    if (SIGNED(ctx->r7) >= 0) {
        // 0x43006A94: or          $v1, $a3, $zero
        ctx->r3 = ctx->r7 | 0;
            goto L_43006AA0;
    }
    // 0x43006A94: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
    // 0x43006A98: b           L_43006AA0
    // 0x43006A9C: addiu       $v1, $a3, 0x8
    ctx->r3 = ADD32(ctx->r7, 0X8);
        goto L_43006AA0;
    // 0x43006A9C: addiu       $v1, $a3, 0x8
    ctx->r3 = ADD32(ctx->r7, 0X8);
L_43006AA0:
    // 0x43006AA0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_43006AA4:
    // 0x43006AA4: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x43006AA8: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x43006AAC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x43006AB0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x43006AB4: slti        $at, $a3, 0x8
    ctx->r1 = SIGNED(ctx->r7) < 0X8 ? 1 : 0;
    // 0x43006AB8: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x43006ABC: bne         $at, $zero, L_43006ACC
    if (ctx->r1 != 0) {
        // 0x43006AC0: swc1        $f6, 0x18($a0)
        MEM_W(0X18, ctx->r4) = ctx->f6.u32l;
            goto L_43006ACC;
    }
    // 0x43006AC0: swc1        $f6, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f6.u32l;
    // 0x43006AC4: b           L_43006AE0
    // 0x43006AC8: addiu       $v0, $a3, -0x8
    ctx->r2 = ADD32(ctx->r7, -0X8);
        goto L_43006AE0;
    // 0x43006AC8: addiu       $v0, $a3, -0x8
    ctx->r2 = ADD32(ctx->r7, -0X8);
L_43006ACC:
    // 0x43006ACC: bgez        $a3, L_43006ADC
    if (SIGNED(ctx->r7) >= 0) {
        // 0x43006AD0: or          $v1, $a3, $zero
        ctx->r3 = ctx->r7 | 0;
            goto L_43006ADC;
    }
    // 0x43006AD0: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
    // 0x43006AD4: b           L_43006ADC
    // 0x43006AD8: addiu       $v1, $a3, 0x8
    ctx->r3 = ADD32(ctx->r7, 0X8);
        goto L_43006ADC;
    // 0x43006AD8: addiu       $v1, $a3, 0x8
    ctx->r3 = ADD32(ctx->r7, 0X8);
L_43006ADC:
    // 0x43006ADC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_43006AE0:
    // 0x43006AE0: sll         $t5, $v0, 5
    ctx->r13 = S32(ctx->r2 << 5);
    // 0x43006AE4: sw          $t5, 0x1A0($a0)
    MEM_W(0X1A0, ctx->r4) = ctx->r13;
    // 0x43006AE8: jal         0x43001F1C
    // 0x43006AEC: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    ovl_enemy_battle_1F1C(rdram, ctx);
        goto after_1;
    // 0x43006AEC: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_1:
    // 0x43006AF0: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x43006AF4: nop

L_43006AF8:
    // 0x43006AF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43006AFC:
    // 0x43006AFC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x43006B00: jr          $ra
    // 0x43006B04: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    return;
    // 0x43006B04: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
;}
RECOMP_FUNC void ovl_enemy_battle_6B08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006B08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43006B0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43006B10: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x43006B14: jal         0x43000340
    // 0x43006B18: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_enemy_battle_340(rdram, ctx);
        goto after_0;
    // 0x43006B18: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x43006B1C: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43006B20: lwc1        $f6, -0x6AD0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X6AD0);
    // 0x43006B24: cvt.s.d     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f4.fl = CVT_S_D(ctx->f0.d);
    // 0x43006B28: lwc1        $f10, 0x1C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x43006B2C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x43006B30: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43006B34: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x43006B38: nop

    // 0x43006B3C: bc1f        L_43006B6C
    if (!c1cs) {
        // 0x43006B40: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43006B6C;
    }
    // 0x43006B40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43006B44: lw          $v0, 0x1C8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C8);
    // 0x43006B48: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x43006B4C: andi        $t6, $v0, 0x2
    ctx->r14 = ctx->r2 & 0X2;
    // 0x43006B50: beq         $t6, $zero, L_43006B64
    if (ctx->r14 == 0) {
        // 0x43006B54: ori         $t8, $v0, 0x2
        ctx->r24 = ctx->r2 | 0X2;
            goto L_43006B64;
    }
    // 0x43006B54: ori         $t8, $v0, 0x2
    ctx->r24 = ctx->r2 | 0X2;
    // 0x43006B58: and         $t7, $v0, $at
    ctx->r15 = ctx->r2 & ctx->r1;
    // 0x43006B5C: b           L_43006B68
    // 0x43006B60: sw          $t7, 0x1C8($a0)
    MEM_W(0X1C8, ctx->r4) = ctx->r15;
        goto L_43006B68;
    // 0x43006B60: sw          $t7, 0x1C8($a0)
    MEM_W(0X1C8, ctx->r4) = ctx->r15;
L_43006B64:
    // 0x43006B64: sw          $t8, 0x1C8($a0)
    MEM_W(0X1C8, ctx->r4) = ctx->r24;
L_43006B68:
    // 0x43006B68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43006B6C:
    // 0x43006B6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43006B70: jr          $ra
    // 0x43006B74: nop

    return;
    // 0x43006B74: nop

;}
RECOMP_FUNC void ovl_enemy_battle_6B78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006B78: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x43006B7C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x43006B80: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x43006B84: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x43006B88: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x43006B8C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x43006B90: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x43006B94: lw          $v0, 0x1CC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1CC);
    // 0x43006B98: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x43006B9C: slt         $v1, $v0, $a1
    ctx->r3 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x43006BA0: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x43006BA4: beq         $v1, $zero, L_43006C48
    if (ctx->r3 == 0) {
        // 0x43006BA8: sw          $t6, 0x1CC($a0)
        MEM_W(0X1CC, ctx->r4) = ctx->r14;
            goto L_43006C48;
    }
    // 0x43006BA8: sw          $t6, 0x1CC($a0)
    MEM_W(0X1CC, ctx->r4) = ctx->r14;
    // 0x43006BAC: lw          $t7, 0x54($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X54);
    // 0x43006BB0: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x43006BB4: sll         $t8, $t7, 12
    ctx->r24 = S32(ctx->r15 << 12);
    // 0x43006BB8: bltz        $t8, L_43006C48
    if (SIGNED(ctx->r24) < 0) {
        // 0x43006BBC: nop
    
            goto L_43006C48;
    }
    // 0x43006BBC: nop

    // 0x43006BC0: lw          $v0, 0x1A0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1A0);
    // 0x43006BC4: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x43006BC8: sra         $t9, $v0, 5
    ctx->r25 = S32(SIGNED(ctx->r2) >> 5);
    // 0x43006BCC: andi        $t0, $t9, 0xF
    ctx->r8 = ctx->r25 & 0XF;
    // 0x43006BD0: slti        $at, $t0, 0x8
    ctx->r1 = SIGNED(ctx->r8) < 0X8 ? 1 : 0;
    // 0x43006BD4: bne         $at, $zero, L_43006BE4
    if (ctx->r1 != 0) {
        // 0x43006BD8: or          $v0, $t0, $zero
        ctx->r2 = ctx->r8 | 0;
            goto L_43006BE4;
    }
    // 0x43006BD8: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x43006BDC: b           L_43006BF8
    // 0x43006BE0: addiu       $v1, $t0, -0x8
    ctx->r3 = ADD32(ctx->r8, -0X8);
        goto L_43006BF8;
    // 0x43006BE0: addiu       $v1, $t0, -0x8
    ctx->r3 = ADD32(ctx->r8, -0X8);
L_43006BE4:
    // 0x43006BE4: bgez        $v0, L_43006BF4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x43006BE8: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_43006BF4;
    }
    // 0x43006BE8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x43006BEC: b           L_43006BF4
    // 0x43006BF0: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
        goto L_43006BF4;
    // 0x43006BF0: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
L_43006BF4:
    // 0x43006BF4: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_43006BF8:
    // 0x43006BF8: lw          $t3, 0x1A4($s3)
    ctx->r11 = MEM_W(ctx->r19, 0X1A4);
    // 0x43006BFC: sllv        $t2, $t1, $v1
    ctx->r10 = S32(ctx->r9 << (ctx->r3 & 31));
    // 0x43006C00: and         $t4, $t2, $t3
    ctx->r12 = ctx->r10 & ctx->r11;
    // 0x43006C04: beq         $t4, $zero, L_43006C48
    if (ctx->r12 == 0) {
        // 0x43006C08: slti        $at, $v0, 0x8
        ctx->r1 = SIGNED(ctx->r2) < 0X8 ? 1 : 0;
            goto L_43006C48;
    }
    // 0x43006C08: slti        $at, $v0, 0x8
    ctx->r1 = SIGNED(ctx->r2) < 0X8 ? 1 : 0;
    // 0x43006C0C: bne         $at, $zero, L_43006C1C
    if (ctx->r1 != 0) {
        // 0x43006C10: nop
    
            goto L_43006C1C;
    }
    // 0x43006C10: nop

    // 0x43006C14: b           L_43006C30
    // 0x43006C18: addiu       $v1, $v0, -0x8
    ctx->r3 = ADD32(ctx->r2, -0X8);
        goto L_43006C30;
    // 0x43006C18: addiu       $v1, $v0, -0x8
    ctx->r3 = ADD32(ctx->r2, -0X8);
L_43006C1C:
    // 0x43006C1C: bgez        $v0, L_43006C2C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x43006C20: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_43006C2C;
    }
    // 0x43006C20: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x43006C24: b           L_43006C2C
    // 0x43006C28: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
        goto L_43006C2C;
    // 0x43006C28: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
L_43006C2C:
    // 0x43006C2C: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_43006C30:
    // 0x43006C30: lw          $t7, 0x248($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X248);
    // 0x43006C34: sllv        $t6, $t5, $v1
    ctx->r14 = S32(ctx->r13 << (ctx->r3 & 31));
    // 0x43006C38: nor         $t8, $t7, $zero
    ctx->r24 = ~(ctx->r15 | 0);
    // 0x43006C3C: and         $t9, $t6, $t8
    ctx->r25 = ctx->r14 & ctx->r24;
    // 0x43006C40: bne         $t9, $zero, L_43006D6C
    if (ctx->r25 != 0) {
        // 0x43006C44: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_43006D6C;
    }
    // 0x43006C44: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43006C48:
    // 0x43006C48: beq         $a2, $zero, L_43006C78
    if (ctx->r6 == 0) {
        // 0x43006C4C: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_43006C78;
    }
    // 0x43006C4C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x43006C50: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x43006C54: beq         $a2, $at, L_43006C94
    if (ctx->r6 == ctx->r1) {
        // 0x43006C58: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_43006C94;
    }
    // 0x43006C58: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x43006C5C: beq         $a2, $at, L_43006CC4
    if (ctx->r6 == ctx->r1) {
        // 0x43006C60: nop
    
            goto L_43006CC4;
    }
    // 0x43006C60: nop

    // 0x43006C64: lw          $v1, 0x1C8($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X1C8);
    // 0x43006C68: nop

    // 0x43006C6C: andi        $t0, $v1, 0x2
    ctx->r8 = ctx->r3 & 0X2;
    // 0x43006C70: b           L_43006CDC
    // 0x43006C74: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
        goto L_43006CDC;
    // 0x43006C74: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
L_43006C78:
    // 0x43006C78: lw          $s0, 0x1A0($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X1A0);
    // 0x43006C7C: lw          $v1, 0x1C8($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X1C8);
    // 0x43006C80: sra         $t1, $s0, 5
    ctx->r9 = S32(SIGNED(ctx->r16) >> 5);
    // 0x43006C84: andi        $t3, $v1, 0x2
    ctx->r11 = ctx->r3 & 0X2;
    // 0x43006C88: andi        $s0, $t1, 0xF
    ctx->r16 = ctx->r9 & 0XF;
    // 0x43006C8C: b           L_43006CDC
    // 0x43006C90: or          $v1, $t3, $zero
    ctx->r3 = ctx->r11 | 0;
        goto L_43006CDC;
    // 0x43006C90: or          $v1, $t3, $zero
    ctx->r3 = ctx->r11 | 0;
L_43006C94:
    // 0x43006C94: lw          $s0, 0x1A0($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X1A0);
    // 0x43006C98: lw          $v1, 0x1C8($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X1C8);
    // 0x43006C9C: sra         $t4, $s0, 5
    ctx->r12 = S32(SIGNED(ctx->r16) >> 5);
    // 0x43006CA0: andi        $t5, $t4, 0xF
    ctx->r13 = ctx->r12 & 0XF;
    // 0x43006CA4: andi        $t7, $v1, 0x2
    ctx->r15 = ctx->r3 & 0X2;
    // 0x43006CA8: or          $s0, $t5, $zero
    ctx->r16 = ctx->r13 | 0;
    // 0x43006CAC: bne         $t7, $zero, L_43006CBC
    if (ctx->r15 != 0) {
        // 0x43006CB0: or          $v1, $t7, $zero
        ctx->r3 = ctx->r15 | 0;
            goto L_43006CBC;
    }
    // 0x43006CB0: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
    // 0x43006CB4: b           L_43006CDC
    // 0x43006CB8: addiu       $s0, $t5, 0x1
    ctx->r16 = ADD32(ctx->r13, 0X1);
        goto L_43006CDC;
    // 0x43006CB8: addiu       $s0, $t5, 0x1
    ctx->r16 = ADD32(ctx->r13, 0X1);
L_43006CBC:
    // 0x43006CBC: b           L_43006CDC
    // 0x43006CC0: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
        goto L_43006CDC;
    // 0x43006CC0: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
L_43006CC4:
    // 0x43006CC4: jal         0x4300034C
    // 0x43006CC8: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    ovl_enemy_battle_34C(rdram, ctx);
        goto after_0;
    // 0x43006CC8: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_0:
    // 0x43006CCC: lw          $v1, 0x1C8($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X1C8);
    // 0x43006CD0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x43006CD4: andi        $t6, $v1, 0x2
    ctx->r14 = ctx->r3 & 0X2;
    // 0x43006CD8: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
L_43006CDC:
    // 0x43006CDC: bne         $v1, $zero, L_43006D20
    if (ctx->r3 != 0) {
        // 0x43006CE0: slti        $at, $s0, 0x8
        ctx->r1 = SIGNED(ctx->r16) < 0X8 ? 1 : 0;
            goto L_43006D20;
    }
    // 0x43006CE0: slti        $at, $s0, 0x8
    ctx->r1 = SIGNED(ctx->r16) < 0X8 ? 1 : 0;
    // 0x43006CE4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x43006CE8: addiu       $s2, $zero, 0x8
    ctx->r18 = ADD32(0, 0X8);
L_43006CEC:
    // 0x43006CEC: slti        $at, $s0, 0x8
    ctx->r1 = SIGNED(ctx->r16) < 0X8 ? 1 : 0;
    // 0x43006CF0: bne         $at, $zero, L_43006D00
    if (ctx->r1 != 0) {
        // 0x43006CF4: or          $a1, $s0, $zero
        ctx->r5 = ctx->r16 | 0;
            goto L_43006D00;
    }
    // 0x43006CF4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x43006CF8: b           L_43006D00
    // 0x43006CFC: addiu       $a1, $s0, -0x8
    ctx->r5 = ADD32(ctx->r16, -0X8);
        goto L_43006D00;
    // 0x43006CFC: addiu       $a1, $s0, -0x8
    ctx->r5 = ADD32(ctx->r16, -0X8);
L_43006D00:
    // 0x43006D00: jal         0x430069AC
    // 0x43006D04: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    ovl_enemy_battle_69AC(rdram, ctx);
        goto after_1;
    // 0x43006D04: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_1:
    // 0x43006D08: bne         $v0, $zero, L_43006D58
    if (ctx->r2 != 0) {
        // 0x43006D0C: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_43006D58;
    }
    // 0x43006D0C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x43006D10: bne         $s1, $s2, L_43006CEC
    if (ctx->r17 != ctx->r18) {
        // 0x43006D14: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_43006CEC;
    }
    // 0x43006D14: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x43006D18: b           L_43006D5C
    // 0x43006D1C: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
        goto L_43006D5C;
    // 0x43006D1C: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
L_43006D20:
    // 0x43006D20: bne         $at, $zero, L_43006D2C
    if (ctx->r1 != 0) {
        // 0x43006D24: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_43006D2C;
    }
    // 0x43006D24: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x43006D28: addiu       $s0, $s0, -0x8
    ctx->r16 = ADD32(ctx->r16, -0X8);
L_43006D2C:
    // 0x43006D2C: addiu       $s2, $zero, 0x8
    ctx->r18 = ADD32(0, 0X8);
L_43006D30:
    // 0x43006D30: bgez        $s0, L_43006D40
    if (SIGNED(ctx->r16) >= 0) {
        // 0x43006D34: or          $a1, $s0, $zero
        ctx->r5 = ctx->r16 | 0;
            goto L_43006D40;
    }
    // 0x43006D34: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x43006D38: b           L_43006D40
    // 0x43006D3C: addiu       $a1, $s0, 0x8
    ctx->r5 = ADD32(ctx->r16, 0X8);
        goto L_43006D40;
    // 0x43006D3C: addiu       $a1, $s0, 0x8
    ctx->r5 = ADD32(ctx->r16, 0X8);
L_43006D40:
    // 0x43006D40: jal         0x430069AC
    // 0x43006D44: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    ovl_enemy_battle_69AC(rdram, ctx);
        goto after_2;
    // 0x43006D44: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_2:
    // 0x43006D48: bne         $v0, $zero, L_43006D58
    if (ctx->r2 != 0) {
        // 0x43006D4C: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_43006D58;
    }
    // 0x43006D4C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x43006D50: bne         $s1, $s2, L_43006D30
    if (ctx->r17 != ctx->r18) {
        // 0x43006D54: addiu       $s0, $s0, -0x1
        ctx->r16 = ADD32(ctx->r16, -0X1);
            goto L_43006D30;
    }
    // 0x43006D54: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
L_43006D58:
    // 0x43006D58: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
L_43006D5C:
    // 0x43006D5C: jal         0x43006B08
    // 0x43006D60: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    ovl_enemy_battle_6B08(rdram, ctx);
        goto after_3;
    // 0x43006D60: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_3:
    // 0x43006D64: sw          $zero, 0x1CC($s3)
    MEM_W(0X1CC, ctx->r19) = 0;
    // 0x43006D68: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43006D6C:
    // 0x43006D6C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x43006D70: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x43006D74: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x43006D78: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x43006D7C: jr          $ra
    // 0x43006D80: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x43006D80: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_enemy_battle_6D84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006D84: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x43006D88: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43006D8C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x43006D90: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x43006D94: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x43006D98: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x43006D9C: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    // 0x43006DA0: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x43006DA4: jal         0x430006C4
    // 0x43006DA8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_enemy_battle_6C4(rdram, ctx);
        goto after_0;
    // 0x43006DA8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x43006DAC: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x43006DB0: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x43006DB4: sw          $t6, 0x1A4($a3)
    MEM_W(0X1A4, ctx->r7) = ctx->r14;
    // 0x43006DB8: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x43006DBC: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x43006DC0: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x43006DC4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x43006DC8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x43006DCC: lwc1        $f0, 0x1B0($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X1B0);
    // 0x43006DD0: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x43006DD4: mul.s       $f2, $f12, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = MUL_S(ctx->f12.fl, ctx->f6.fl);
    // 0x43006DD8: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x43006DDC: andi        $t9, $t6, 0x1F
    ctx->r25 = ctx->r14 & 0X1F;
    // 0x43006DE0: sub.s       $f8, $f0, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x43006DE4: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x43006DE8: nop

    // 0x43006DEC: bc1f        L_43006DFC
    if (!c1cs) {
        // 0x43006DF0: nop
    
            goto L_43006DFC;
    }
    // 0x43006DF0: nop

    // 0x43006DF4: b           L_43006E20
    // 0x43006DF8: sw          $t9, 0x1A4($a3)
    MEM_W(0X1A4, ctx->r7) = ctx->r25;
        goto L_43006E20;
    // 0x43006DF8: sw          $t9, 0x1A4($a3)
    MEM_W(0X1A4, ctx->r7) = ctx->r25;
L_43006DFC:
    // 0x43006DFC: add.s       $f18, $f0, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x43006E00: c.le.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl <= ctx->f16.fl;
    // 0x43006E04: nop

    // 0x43006E08: bc1f        L_43006E24
    if (!c1cs) {
        // 0x43006E0C: lw          $t2, 0x40($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X40);
            goto L_43006E24;
    }
    // 0x43006E0C: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x43006E10: lw          $t0, 0x1A4($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X1A4);
    // 0x43006E14: nop

    // 0x43006E18: andi        $t1, $t0, 0xF1
    ctx->r9 = ctx->r8 & 0XF1;
    // 0x43006E1C: sw          $t1, 0x1A4($a3)
    MEM_W(0X1A4, ctx->r7) = ctx->r9;
L_43006E20:
    // 0x43006E20: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
L_43006E24:
    // 0x43006E24: lwc1        $f0, 0x1B8($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X1B8);
    // 0x43006E28: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x43006E2C: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x43006E30: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x43006E34: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x43006E38: mul.s       $f2, $f12, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = MUL_S(ctx->f12.fl, ctx->f6.fl);
    // 0x43006E3C: sub.s       $f8, $f0, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x43006E40: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x43006E44: nop

    // 0x43006E48: bc1f        L_43006E64
    if (!c1cs) {
        // 0x43006E4C: nop
    
            goto L_43006E64;
    }
    // 0x43006E4C: nop

    // 0x43006E50: lw          $t3, 0x1A4($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X1A4);
    // 0x43006E54: nop

    // 0x43006E58: andi        $t4, $t3, 0xC7
    ctx->r12 = ctx->r11 & 0XC7;
    // 0x43006E5C: b           L_43006E88
    // 0x43006E60: sw          $t4, 0x1A4($a3)
    MEM_W(0X1A4, ctx->r7) = ctx->r12;
        goto L_43006E88;
    // 0x43006E60: sw          $t4, 0x1A4($a3)
    MEM_W(0X1A4, ctx->r7) = ctx->r12;
L_43006E64:
    // 0x43006E64: add.s       $f18, $f0, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x43006E68: c.le.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl <= ctx->f16.fl;
    // 0x43006E6C: nop

    // 0x43006E70: bc1f        L_43006E8C
    if (!c1cs) {
        // 0x43006E74: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43006E8C;
    }
    // 0x43006E74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43006E78: lw          $t5, 0x1A4($a3)
    ctx->r13 = MEM_W(ctx->r7, 0X1A4);
    // 0x43006E7C: nop

    // 0x43006E80: andi        $t6, $t5, 0x7C
    ctx->r14 = ctx->r13 & 0X7C;
    // 0x43006E84: sw          $t6, 0x1A4($a3)
    MEM_W(0X1A4, ctx->r7) = ctx->r14;
L_43006E88:
    // 0x43006E88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43006E8C:
    // 0x43006E8C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x43006E90: jr          $ra
    // 0x43006E94: nop

    return;
    // 0x43006E94: nop

;}
RECOMP_FUNC void ovl_enemy_battle_6E98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006E98: lui         $at, 0x41B4
    ctx->r1 = S32(0X41B4 << 16);
    // 0x43006E9C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x43006EA0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x43006EA4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x43006EA8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x43006EAC: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
L_43006EB0:
    // 0x43006EB0: mtc1        $a0, $f4
    ctx->f4.u32l = ctx->r4;
    // 0x43006EB4: nop

    // 0x43006EB8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x43006EBC: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x43006EC0: c.le.s      $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f12.fl <= ctx->f8.fl;
    // 0x43006EC4: nop

    // 0x43006EC8: bc1f        L_43006F5C
    if (!c1cs) {
        // 0x43006ECC: addiu       $at, $zero, 0x8
        ctx->r1 = ADD32(0, 0X8);
            goto L_43006F5C;
    }
    // 0x43006ECC: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x43006ED0: bne         $v0, $at, L_43006EE0
    if (ctx->r2 != ctx->r1) {
        // 0x43006ED4: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_43006EE0;
    }
    // 0x43006ED4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x43006ED8: b           L_43006EE4
    // 0x43006EDC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_43006EE4;
    // 0x43006EDC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_43006EE0:
    // 0x43006EE0: sllv        $v1, $t6, $v0
    ctx->r3 = S32(ctx->r14 << (ctx->r2 & 31));
L_43006EE4:
    // 0x43006EE4: beq         $a1, $zero, L_43006F68
    if (ctx->r5 == 0) {
        // 0x43006EE8: addiu       $a0, $v0, -0x1
        ctx->r4 = ADD32(ctx->r2, -0X1);
            goto L_43006F68;
    }
    // 0x43006EE8: addiu       $a0, $v0, -0x1
    ctx->r4 = ADD32(ctx->r2, -0X1);
    // 0x43006EEC: bgez        $a0, L_43006F18
    if (SIGNED(ctx->r4) >= 0) {
        // 0x43006EF0: addiu       $a1, $v0, 0x1
        ctx->r5 = ADD32(ctx->r2, 0X1);
            goto L_43006F18;
    }
    // 0x43006EF0: addiu       $a1, $v0, 0x1
    ctx->r5 = ADD32(ctx->r2, 0X1);
    // 0x43006EF4: addiu       $t7, $v0, 0x7
    ctx->r15 = ADD32(ctx->r2, 0X7);
    // 0x43006EF8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x43006EFC: sllv        $t9, $t8, $t7
    ctx->r25 = S32(ctx->r24 << (ctx->r15 & 31));
    // 0x43006F00: addiu       $t1, $v0, 0x1
    ctx->r9 = ADD32(ctx->r2, 0X1);
    // 0x43006F04: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x43006F08: sllv        $t3, $t2, $t1
    ctx->r11 = S32(ctx->r10 << (ctx->r9 & 31));
    // 0x43006F0C: or          $t0, $v1, $t9
    ctx->r8 = ctx->r3 | ctx->r25;
    // 0x43006F10: jr          $ra
    // 0x43006F14: or          $v0, $t0, $t3
    ctx->r2 = ctx->r8 | ctx->r11;
    return;
    // 0x43006F14: or          $v0, $t0, $t3
    ctx->r2 = ctx->r8 | ctx->r11;
L_43006F18:
    // 0x43006F18: slti        $at, $a1, 0x8
    ctx->r1 = SIGNED(ctx->r5) < 0X8 ? 1 : 0;
    // 0x43006F1C: bne         $at, $zero, L_43006F44
    if (ctx->r1 != 0) {
        // 0x43006F20: addiu       $t2, $zero, 0x1
        ctx->r10 = ADD32(0, 0X1);
            goto L_43006F44;
    }
    // 0x43006F20: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x43006F24: addiu       $t4, $v0, 0x19
    ctx->r12 = ADD32(ctx->r2, 0X19);
    // 0x43006F28: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x43006F2C: sllv        $t6, $t5, $t4
    ctx->r14 = S32(ctx->r13 << (ctx->r12 & 31));
    // 0x43006F30: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x43006F34: sllv        $t9, $t7, $a0
    ctx->r25 = S32(ctx->r15 << (ctx->r4 & 31));
    // 0x43006F38: or          $t8, $v1, $t6
    ctx->r24 = ctx->r3 | ctx->r14;
    // 0x43006F3C: jr          $ra
    // 0x43006F40: or          $v0, $t8, $t9
    ctx->r2 = ctx->r24 | ctx->r25;
    return;
    // 0x43006F40: or          $v0, $t8, $t9
    ctx->r2 = ctx->r24 | ctx->r25;
L_43006F44:
    // 0x43006F44: sllv        $t1, $t2, $a1
    ctx->r9 = S32(ctx->r10 << (ctx->r5 & 31));
    // 0x43006F48: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x43006F4C: sllv        $t5, $t3, $a0
    ctx->r13 = S32(ctx->r11 << (ctx->r4 & 31));
    // 0x43006F50: or          $t0, $v1, $t1
    ctx->r8 = ctx->r3 | ctx->r9;
    // 0x43006F54: jr          $ra
    // 0x43006F58: or          $v0, $t0, $t5
    ctx->r2 = ctx->r8 | ctx->r13;
    return;
    // 0x43006F58: or          $v0, $t0, $t5
    ctx->r2 = ctx->r8 | ctx->r13;
L_43006F5C:
    // 0x43006F5C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x43006F60: bne         $v0, $a2, L_43006EB0
    if (ctx->r2 != ctx->r6) {
        // 0x43006F64: addiu       $a0, $a0, 0x2
        ctx->r4 = ADD32(ctx->r4, 0X2);
            goto L_43006EB0;
    }
    // 0x43006F64: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
L_43006F68:
    // 0x43006F68: jr          $ra
    // 0x43006F6C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x43006F6C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_enemy_battle_6F70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006F70: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x43006F74: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43006F78: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43006F7C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43006F80: jal         0x43000DE4
    // 0x43006F84: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_enemy_battle_DE4(rdram, ctx);
        goto after_0;
    // 0x43006F84: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x43006F88: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    // 0x43006F8C: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x43006F90: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x43006F94: jal         0x430006C4
    // 0x43006F98: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    ovl_enemy_battle_6C4(rdram, ctx);
        goto after_1;
    // 0x43006F98: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    after_1:
    // 0x43006F9C: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x43006FA0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x43006FA4: jal         0x430006C4
    // 0x43006FA8: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    ovl_enemy_battle_6C4(rdram, ctx);
        goto after_2;
    // 0x43006FA8: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    after_2:
    // 0x43006FAC: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x43006FB0: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x43006FB4: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x43006FB8: lwc1        $f16, 0x4C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x43006FBC: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x43006FC0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x43006FC4: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x43006FC8: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x43006FCC: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    // 0x43006FD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43006FD4: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x43006FD8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x43006FDC: jal         0x43005218
    // 0x43006FE0: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    ovl_enemy_battle_5218(rdram, ctx);
        goto after_3;
    // 0x43006FE0: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x43006FE4: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x43006FE8: jal         0x43006E98
    // 0x43006FEC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_battle_6E98(rdram, ctx);
        goto after_4;
    // 0x43006FEC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x43006FF0: lw          $t6, 0x1A4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X1A4);
    // 0x43006FF4: sw          $v0, 0x1A8($s0)
    MEM_W(0X1A8, ctx->r16) = ctx->r2;
    // 0x43006FF8: and         $t7, $t6, $v0
    ctx->r15 = ctx->r14 & ctx->r2;
    // 0x43006FFC: sw          $t7, 0x1A4($s0)
    MEM_W(0X1A4, ctx->r16) = ctx->r15;
    // 0x43007000: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43007004: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43007008: jr          $ra
    // 0x4300700C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x4300700C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void ovl_enemy_battle_7010(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007010: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43007014: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43007018: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x4300701C: lw          $v0, 0x1C0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C0);
    // 0x43007020: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x43007024: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x43007028: bgtz        $v0, L_4300704C
    if (SIGNED(ctx->r2) > 0) {
        // 0x4300702C: sw          $t6, 0x1C0($a0)
        MEM_W(0X1C0, ctx->r4) = ctx->r14;
            goto L_4300704C;
    }
    // 0x4300702C: sw          $t6, 0x1C0($a0)
    MEM_W(0X1C0, ctx->r4) = ctx->r14;
    // 0x43007030: sw          $t7, 0x1A4($a0)
    MEM_W(0X1A4, ctx->r4) = ctx->r15;
    // 0x43007034: jal         0x43006F70
    // 0x43007038: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_enemy_battle_6F70(rdram, ctx);
        goto after_0;
    // 0x43007038: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x4300703C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43007040: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x43007044: b           L_4300705C
    // 0x43007048: sw          $t8, 0x1C0($a0)
    MEM_W(0X1C0, ctx->r4) = ctx->r24;
        goto L_4300705C;
    // 0x43007048: sw          $t8, 0x1C0($a0)
    MEM_W(0X1C0, ctx->r4) = ctx->r24;
L_4300704C:
    // 0x4300704C: lw          $t9, 0x1A8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X1A8);
    // 0x43007050: nop

    // 0x43007054: andi        $t0, $t9, 0xFF
    ctx->r8 = ctx->r25 & 0XFF;
    // 0x43007058: sw          $t0, 0x1A4($a0)
    MEM_W(0X1A4, ctx->r4) = ctx->r8;
L_4300705C:
    // 0x4300705C: jal         0x430077E4
    // 0x43007060: nop

    ovl_enemy_battle_77E4(rdram, ctx);
        goto after_1;
    // 0x43007060: nop

    after_1:
    // 0x43007064: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43007068: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4300706C: jr          $ra
    // 0x43007070: nop

    return;
    // 0x43007070: nop

;}
RECOMP_FUNC void ovl_enemy_battle_7074(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007074: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43007078: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4300707C: lw          $t6, 0x1C8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X1C8);
    // 0x43007080: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x43007084: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x43007088: beq         $t7, $zero, L_430070C4
    if (ctx->r15 == 0) {
        // 0x4300708C: addiu       $at, $zero, -0x1
        ctx->r1 = ADD32(0, -0X1);
            goto L_430070C4;
    }
    // 0x4300708C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x43007090: beq         $a3, $at, L_430070FC
    if (ctx->r7 == ctx->r1) {
        // 0x43007094: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_430070FC;
    }
    // 0x43007094: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43007098: lw          $v0, 0x1C0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C0);
    // 0x4300709C: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x430070A0: slt         $v1, $v0, $a3
    ctx->r3 = SIGNED(ctx->r2) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x430070A4: addiu       $t8, $v0, 0x1
    ctx->r24 = ADD32(ctx->r2, 0X1);
    // 0x430070A8: bne         $v1, $zero, L_430070F8
    if (ctx->r3 != 0) {
        // 0x430070AC: sw          $t8, 0x1C0($a0)
        MEM_W(0X1C0, ctx->r4) = ctx->r24;
            goto L_430070F8;
    }
    // 0x430070AC: sw          $t8, 0x1C0($a0)
    MEM_W(0X1C0, ctx->r4) = ctx->r24;
    // 0x430070B0: lw          $t9, 0x1C8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X1C8);
    // 0x430070B4: sw          $a2, 0x1C0($a0)
    MEM_W(0X1C0, ctx->r4) = ctx->r6;
    // 0x430070B8: and         $t1, $t9, $at
    ctx->r9 = ctx->r25 & ctx->r1;
    // 0x430070BC: b           L_430070F8
    // 0x430070C0: sw          $t1, 0x1C8($a0)
    MEM_W(0X1C8, ctx->r4) = ctx->r9;
        goto L_430070F8;
    // 0x430070C0: sw          $t1, 0x1C8($a0)
    MEM_W(0X1C8, ctx->r4) = ctx->r9;
L_430070C4:
    // 0x430070C4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x430070C8: jal         0x43006928
    // 0x430070CC: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    ovl_enemy_battle_6928(rdram, ctx);
        goto after_0;
    // 0x430070CC: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    after_0:
    // 0x430070D0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x430070D4: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x430070D8: lw          $t2, 0x1C8($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X1C8);
    // 0x430070DC: nop

    // 0x430070E0: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x430070E4: beq         $t3, $zero, L_430070F4
    if (ctx->r11 == 0) {
        // 0x430070E8: nop
    
            goto L_430070F4;
    }
    // 0x430070E8: nop

    // 0x430070EC: b           L_430070F8
    // 0x430070F0: sw          $zero, 0x1C0($a0)
    MEM_W(0X1C0, ctx->r4) = 0;
        goto L_430070F8;
    // 0x430070F0: sw          $zero, 0x1C0($a0)
    MEM_W(0X1C0, ctx->r4) = 0;
L_430070F4:
    // 0x430070F4: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
L_430070F8:
    // 0x430070F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_430070FC:
    // 0x430070FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x43007100: jr          $ra
    // 0x43007104: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    return;
    // 0x43007104: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
;}
RECOMP_FUNC void ovl_enemy_battle_7108(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007108: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4300710C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43007110: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43007114: jal         0x43007074
    // 0x43007118: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    ovl_enemy_battle_7074(rdram, ctx);
        goto after_0;
    // 0x43007118: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x4300711C: beq         $v0, $zero, L_43007138
    if (ctx->r2 == 0) {
        // 0x43007120: addiu       $t6, $zero, 0xFF
        ctx->r14 = ADD32(0, 0XFF);
            goto L_43007138;
    }
    // 0x43007120: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x43007124: sw          $t6, 0x1A4($s0)
    MEM_W(0X1A4, ctx->r16) = ctx->r14;
    // 0x43007128: jal         0x43006F70
    // 0x4300712C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_battle_6F70(rdram, ctx);
        goto after_1;
    // 0x4300712C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x43007130: b           L_43007154
    // 0x43007134: nop

        goto L_43007154;
    // 0x43007134: nop

L_43007138:
    // 0x43007138: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x4300713C: nop

    // 0x43007140: andi        $t7, $v0, 0xFF
    ctx->r15 = ctx->r2 & 0XFF;
    // 0x43007144: beq         $v0, $zero, L_43007154
    if (ctx->r2 == 0) {
        // 0x43007148: sw          $t7, 0x1A4($s0)
        MEM_W(0X1A4, ctx->r16) = ctx->r15;
            goto L_43007154;
    }
    // 0x43007148: sw          $t7, 0x1A4($s0)
    MEM_W(0X1A4, ctx->r16) = ctx->r15;
    // 0x4300714C: jal         0x43001F1C
    // 0x43007150: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_battle_1F1C(rdram, ctx);
        goto after_2;
    // 0x43007150: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
L_43007154:
    // 0x43007154: jal         0x430077E4
    // 0x43007158: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_battle_77E4(rdram, ctx);
        goto after_3;
    // 0x43007158: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x4300715C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43007160: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43007164: jr          $ra
    // 0x43007168: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x43007168: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_enemy_battle_716C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300716C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x43007170: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43007174: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x43007178: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x4300717C: sw          $a3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r7;
    // 0x43007180: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x43007184: jal         0x430006C4
    // 0x43007188: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    ovl_enemy_battle_6C4(rdram, ctx);
        goto after_0;
    // 0x43007188: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_0:
    // 0x4300718C: lw          $a3, 0x50($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X50);
    // 0x43007190: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43007194: lw          $v0, 0x1A0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X1A0);
    // 0x43007198: nop

    // 0x4300719C: sra         $t6, $v0, 5
    ctx->r14 = S32(SIGNED(ctx->r2) >> 5);
    // 0x430071A0: andi        $t7, $t6, 0xF
    ctx->r15 = ctx->r14 & 0XF;
    // 0x430071A4: slti        $at, $t7, 0x8
    ctx->r1 = SIGNED(ctx->r15) < 0X8 ? 1 : 0;
    // 0x430071A8: bne         $at, $zero, L_430071B8
    if (ctx->r1 != 0) {
        // 0x430071AC: or          $v0, $t7, $zero
        ctx->r2 = ctx->r15 | 0;
            goto L_430071B8;
    }
    // 0x430071AC: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x430071B0: b           L_430071CC
    // 0x430071B4: addiu       $v1, $t7, -0x8
    ctx->r3 = ADD32(ctx->r15, -0X8);
        goto L_430071CC;
    // 0x430071B4: addiu       $v1, $t7, -0x8
    ctx->r3 = ADD32(ctx->r15, -0X8);
L_430071B8:
    // 0x430071B8: bgez        $v0, L_430071C8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x430071BC: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_430071C8;
    }
    // 0x430071BC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x430071C0: b           L_430071C8
    // 0x430071C4: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
        goto L_430071C8;
    // 0x430071C4: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
L_430071C8:
    // 0x430071C8: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_430071CC:
    // 0x430071CC: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x430071D0: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x430071D4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x430071D8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x430071DC: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x430071E0: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x430071E4: slti        $at, $v0, 0x8
    ctx->r1 = SIGNED(ctx->r2) < 0X8 ? 1 : 0;
    // 0x430071E8: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x430071EC: nop

    // 0x430071F0: bc1f        L_4300723C
    if (!c1cs) {
        // 0x430071F4: nop
    
            goto L_4300723C;
    }
    // 0x430071F4: nop

    // 0x430071F8: slti        $at, $v0, 0x8
    ctx->r1 = SIGNED(ctx->r2) < 0X8 ? 1 : 0;
    // 0x430071FC: bne         $at, $zero, L_4300720C
    if (ctx->r1 != 0) {
        // 0x43007200: nop
    
            goto L_4300720C;
    }
    // 0x43007200: nop

    // 0x43007204: b           L_43007220
    // 0x43007208: addiu       $v1, $v0, -0x8
    ctx->r3 = ADD32(ctx->r2, -0X8);
        goto L_43007220;
    // 0x43007208: addiu       $v1, $v0, -0x8
    ctx->r3 = ADD32(ctx->r2, -0X8);
L_4300720C:
    // 0x4300720C: bgez        $v0, L_4300721C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x43007210: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_4300721C;
    }
    // 0x43007210: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x43007214: b           L_4300721C
    // 0x43007218: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
        goto L_4300721C;
    // 0x43007218: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
L_4300721C:
    // 0x4300721C: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_43007220:
    // 0x43007220: mtc1        $v1, $f16
    ctx->f16.u32l = ctx->r3;
    // 0x43007224: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x43007228: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x4300722C: mul.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x43007230: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x43007234: b           L_43007274
    // 0x43007238: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_43007274;
    // 0x43007238: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_4300723C:
    // 0x4300723C: bne         $at, $zero, L_4300724C
    if (ctx->r1 != 0) {
        // 0x43007240: nop
    
            goto L_4300724C;
    }
    // 0x43007240: nop

    // 0x43007244: b           L_43007260
    // 0x43007248: addiu       $v1, $v0, -0x8
    ctx->r3 = ADD32(ctx->r2, -0X8);
        goto L_43007260;
    // 0x43007248: addiu       $v1, $v0, -0x8
    ctx->r3 = ADD32(ctx->r2, -0X8);
L_4300724C:
    // 0x4300724C: bgez        $v0, L_4300725C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x43007250: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_4300725C;
    }
    // 0x43007250: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x43007254: b           L_4300725C
    // 0x43007258: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
        goto L_4300725C;
    // 0x43007258: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
L_4300725C:
    // 0x4300725C: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_43007260:
    // 0x43007260: mtc1        $v1, $f8
    ctx->f8.u32l = ctx->r3;
    // 0x43007264: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x43007268: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x4300726C: mul.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x43007270: sub.s       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f16.fl - ctx->f18.fl;
L_43007274:
    // 0x43007274: lwc1        $f4, 0x14($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X14);
    // 0x43007278: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x4300727C: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x43007280: nop

    // 0x43007284: bc1f        L_43007294
    if (!c1cs) {
        // 0x43007288: nop
    
            goto L_43007294;
    }
    // 0x43007288: nop

    // 0x4300728C: b           L_43007294
    // 0x43007290: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_43007294;
    // 0x43007290: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_43007294:
    // 0x43007294: jr          $ra
    // 0x43007298: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x43007298: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_enemy_battle_729C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300729C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x430072A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x430072A4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x430072A8: lw          $t6, 0x1A4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X1A4);
    // 0x430072AC: lw          $t8, 0x1C8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X1C8);
    // 0x430072B0: andi        $t7, $t6, 0x55
    ctx->r15 = ctx->r14 & 0X55;
    // 0x430072B4: andi        $t9, $t8, 0x4
    ctx->r25 = ctx->r24 & 0X4;
    // 0x430072B8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x430072BC: bne         $t9, $zero, L_430073D8
    if (ctx->r25 != 0) {
        // 0x430072C0: sw          $t7, 0x1A4($a0)
        MEM_W(0X1A4, ctx->r4) = ctx->r15;
            goto L_430073D8;
    }
    // 0x430072C0: sw          $t7, 0x1A4($a0)
    MEM_W(0X1A4, ctx->r4) = ctx->r15;
    // 0x430072C4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x430072C8: jal         0x43006B78
    // 0x430072CC: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    ovl_enemy_battle_6B78(rdram, ctx);
        goto after_0;
    // 0x430072CC: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    after_0:
    // 0x430072D0: lw          $t0, 0x1CC($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X1CC);
    // 0x430072D4: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x430072D8: bne         $t0, $zero, L_43007440
    if (ctx->r8 != 0) {
        // 0x430072DC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_43007440;
    }
    // 0x430072DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x430072E0: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x430072E4: jal         0x430006C4
    // 0x430072E8: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_enemy_battle_6C4(rdram, ctx);
        goto after_1;
    // 0x430072E8: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_1:
    // 0x430072EC: lw          $v1, 0x1A0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1A0);
    // 0x430072F0: addiu       $at, $zero, 0x40
    ctx->r1 = ADD32(0, 0X40);
    // 0x430072F4: beq         $v1, $zero, L_4300731C
    if (ctx->r3 == 0) {
        // 0x430072F8: nop
    
            goto L_4300731C;
    }
    // 0x430072F8: nop

    // 0x430072FC: beq         $v1, $at, L_4300743C
    if (ctx->r3 == ctx->r1) {
        // 0x43007300: addiu       $at, $zero, 0x80
        ctx->r1 = ADD32(0, 0X80);
            goto L_4300743C;
    }
    // 0x43007300: addiu       $at, $zero, 0x80
    ctx->r1 = ADD32(0, 0X80);
    // 0x43007304: beq         $v1, $at, L_43007378
    if (ctx->r3 == ctx->r1) {
        // 0x43007308: addiu       $at, $zero, 0xC0
        ctx->r1 = ADD32(0, 0XC0);
            goto L_43007378;
    }
    // 0x43007308: addiu       $at, $zero, 0xC0
    ctx->r1 = ADD32(0, 0XC0);
    // 0x4300730C: beq         $v1, $at, L_43007440
    if (ctx->r3 == ctx->r1) {
        // 0x43007310: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_43007440;
    }
    // 0x43007310: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43007314: b           L_43007440
    // 0x43007318: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43007440;
    // 0x43007318: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4300731C:
    // 0x4300731C: lw          $t1, 0x1C8($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X1C8);
    // 0x43007320: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x43007324: ori         $t2, $t1, 0x4
    ctx->r10 = ctx->r9 | 0X4;
    // 0x43007328: sw          $t2, 0x1C8($s0)
    MEM_W(0X1C8, ctx->r16) = ctx->r10;
    // 0x4300732C: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x43007330: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007334: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x43007338: nop

    // 0x4300733C: bc1f        L_4300735C
    if (!c1cs) {
        // 0x43007340: nop
    
            goto L_4300735C;
    }
    // 0x43007340: nop

    // 0x43007344: jal         0x43005078
    // 0x43007348: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    ovl_enemy_battle_5078(rdram, ctx);
        goto after_2;
    // 0x43007348: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_2:
    // 0x4300734C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x43007350: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x43007354: b           L_4300743C
    // 0x43007358: swc1        $f8, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f8.u32l;
        goto L_4300743C;
    // 0x43007358: swc1        $f8, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f8.u32l;
L_4300735C:
    // 0x4300735C: jal         0x430014D8
    // 0x43007360: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_battle_14D8(rdram, ctx);
        goto after_3;
    // 0x43007360: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x43007364: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007368: jal         0x430015C0
    // 0x4300736C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_battle_15C0(rdram, ctx);
        goto after_4;
    // 0x4300736C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x43007370: b           L_43007440
    // 0x43007374: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43007440;
    // 0x43007374: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43007378:
    // 0x43007378: lw          $t3, 0x1C8($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X1C8);
    // 0x4300737C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x43007380: ori         $t4, $t3, 0x4
    ctx->r12 = ctx->r11 | 0X4;
    // 0x43007384: sw          $t4, 0x1C8($s0)
    MEM_W(0X1C8, ctx->r16) = ctx->r12;
    // 0x43007388: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x4300738C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x43007390: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007394: c.eq.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl == ctx->f16.fl;
    // 0x43007398: nop

    // 0x4300739C: bc1f        L_430073BC
    if (!c1cs) {
        // 0x430073A0: nop
    
            goto L_430073BC;
    }
    // 0x430073A0: nop

    // 0x430073A4: jal         0x43005078
    // 0x430073A8: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    ovl_enemy_battle_5078(rdram, ctx);
        goto after_5;
    // 0x430073A8: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_5:
    // 0x430073AC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x430073B0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x430073B4: b           L_4300743C
    // 0x430073B8: swc1        $f18, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f18.u32l;
        goto L_4300743C;
    // 0x430073B8: swc1        $f18, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f18.u32l;
L_430073BC:
    // 0x430073BC: jal         0x430014D8
    // 0x430073C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_battle_14D8(rdram, ctx);
        goto after_6;
    // 0x430073C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x430073C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430073C8: jal         0x430015C0
    // 0x430073CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_battle_15C0(rdram, ctx);
        goto after_7;
    // 0x430073CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
    // 0x430073D0: b           L_43007440
    // 0x430073D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43007440;
    // 0x430073D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_430073D8:
    // 0x430073D8: jal         0x4300716C
    // 0x430073DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_battle_716C(rdram, ctx);
        goto after_8;
    // 0x430073DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x430073E0: beq         $v0, $zero, L_43007440
    if (ctx->r2 == 0) {
        // 0x430073E4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_43007440;
    }
    // 0x430073E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x430073E8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x430073EC: lwc1        $f6, 0x30($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X30);
    // 0x430073F0: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x430073F4: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x430073F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430073FC: bc1f        L_43007440
    if (!c1cs) {
        // 0x43007400: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_43007440;
    }
    // 0x43007400: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43007404: lw          $t5, 0x1C8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X1C8);
    // 0x43007408: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x4300740C: and         $t6, $t5, $at
    ctx->r14 = ctx->r13 & ctx->r1;
    // 0x43007410: jal         0x430015C0
    // 0x43007414: sw          $t6, 0x1C8($s0)
    MEM_W(0X1C8, ctx->r16) = ctx->r14;
    ovl_enemy_battle_15C0(rdram, ctx);
        goto after_9;
    // 0x43007414: sw          $t6, 0x1C8($s0)
    MEM_W(0X1C8, ctx->r16) = ctx->r14;
    after_9:
    // 0x43007418: jal         0x43001F1C
    // 0x4300741C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_battle_1F1C(rdram, ctx);
        goto after_10;
    // 0x4300741C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x43007420: addiu       $t7, $zero, 0x44
    ctx->r15 = ADD32(0, 0X44);
    // 0x43007424: sw          $t7, 0x1A4($s0)
    MEM_W(0X1A4, ctx->r16) = ctx->r15;
    // 0x43007428: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4300742C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x43007430: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x43007434: jal         0x43006B78
    // 0x43007438: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    ovl_enemy_battle_6B78(rdram, ctx);
        goto after_11;
    // 0x43007438: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_11:
L_4300743C:
    // 0x4300743C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43007440:
    // 0x43007440: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43007444: jr          $ra
    // 0x43007448: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x43007448: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_enemy_battle_744C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300744C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43007450: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43007454: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43007458: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4300745C: lwc1        $f4, 0x30($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X30);
    // 0x43007460: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43007464: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x43007468: nop

    // 0x4300746C: bc1f        L_43007514
    if (!c1cs) {
        // 0x43007470: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_43007514;
    }
    // 0x43007470: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43007474: lwc1        $f6, 0x28($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X28);
    // 0x43007478: nop

    // 0x4300747C: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x43007480: nop

    // 0x43007484: bc1f        L_43007514
    if (!c1cs) {
        // 0x43007488: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_43007514;
    }
    // 0x43007488: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4300748C: lw          $t6, 0x1CC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X1CC);
    // 0x43007490: nop

    // 0x43007494: slt         $at, $t6, $a1
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x43007498: bne         $at, $zero, L_430074C0
    if (ctx->r1 != 0) {
        // 0x4300749C: nop
    
            goto L_430074C0;
    }
    // 0x4300749C: nop

    // 0x430074A0: jal         0x43001F1C
    // 0x430074A4: sw          $zero, 0x1CC($a0)
    MEM_W(0X1CC, ctx->r4) = 0;
    ovl_enemy_battle_1F1C(rdram, ctx);
        goto after_0;
    // 0x430074A4: sw          $zero, 0x1CC($a0)
    MEM_W(0X1CC, ctx->r4) = 0;
    after_0:
    // 0x430074A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430074AC: jal         0x43005078
    // 0x430074B0: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    ovl_enemy_battle_5078(rdram, ctx);
        goto after_1;
    // 0x430074B0: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_1:
    // 0x430074B4: lw          $v0, 0x1CC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1CC);
    // 0x430074B8: b           L_4300750C
    // 0x430074BC: addiu       $t0, $v0, 0x1
    ctx->r8 = ADD32(ctx->r2, 0X1);
        goto L_4300750C;
    // 0x430074BC: addiu       $t0, $v0, 0x1
    ctx->r8 = ADD32(ctx->r2, 0X1);
L_430074C0:
    // 0x430074C0: jal         0x430014D8
    // 0x430074C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_battle_14D8(rdram, ctx);
        goto after_2;
    // 0x430074C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x430074C8: lw          $v0, 0x1CC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1CC);
    // 0x430074CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430074D0: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x430074D4: beq         $at, $zero, L_43007508
    if (ctx->r1 == 0) {
        // 0x430074D8: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_43007508;
    }
    // 0x430074D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x430074DC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x430074E0: jal         0x43006B78
    // 0x430074E4: lui         $a3, 0x4270
    ctx->r7 = S32(0X4270 << 16);
    ovl_enemy_battle_6B78(rdram, ctx);
        goto after_3;
    // 0x430074E4: lui         $a3, 0x4270
    ctx->r7 = S32(0X4270 << 16);
    after_3:
    // 0x430074E8: lw          $t7, 0x1CC($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X1CC);
    // 0x430074EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x430074F0: beq         $t7, $zero, L_43007504
    if (ctx->r15 == 0) {
        // 0x430074F4: nop
    
            goto L_43007504;
    }
    // 0x430074F4: nop

    // 0x430074F8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x430074FC: b           L_43007508
    // 0x43007500: sw          $v0, 0x1CC($s0)
    MEM_W(0X1CC, ctx->r16) = ctx->r2;
        goto L_43007508;
    // 0x43007500: sw          $v0, 0x1CC($s0)
    MEM_W(0X1CC, ctx->r16) = ctx->r2;
L_43007504:
    // 0x43007504: sw          $v0, 0x1CC($s0)
    MEM_W(0X1CC, ctx->r16) = ctx->r2;
L_43007508:
    // 0x43007508: addiu       $t0, $v0, 0x1
    ctx->r8 = ADD32(ctx->r2, 0X1);
L_4300750C:
    // 0x4300750C: sw          $t0, 0x1CC($s0)
    MEM_W(0X1CC, ctx->r16) = ctx->r8;
    // 0x43007510: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43007514:
    // 0x43007514: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43007518: jr          $ra
    // 0x4300751C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x4300751C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_enemy_battle_7520(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007520: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43007524: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43007528: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x4300752C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43007530: jal         0x4300716C
    // 0x43007534: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    ovl_enemy_battle_716C(rdram, ctx);
        goto after_0;
    // 0x43007534: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x43007538: bne         $v0, $zero, L_43007588
    if (ctx->r2 != 0) {
        // 0x4300753C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43007588;
    }
    // 0x4300753C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007540: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007544: jal         0x430015C0
    // 0x43007548: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_battle_15C0(rdram, ctx);
        goto after_1;
    // 0x43007548: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x4300754C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007550: jal         0x430014E4
    // 0x43007554: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_enemy_battle_14E4(rdram, ctx);
        goto after_2;
    // 0x43007554: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x43007558: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4300755C: jal         0x43001554
    // 0x43007560: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_battle_1554(rdram, ctx);
        goto after_3;
    // 0x43007560: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x43007564: jal         0x430014D8
    // 0x43007568: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_battle_14D8(rdram, ctx);
        goto after_4;
    // 0x43007568: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x4300756C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x43007570: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007574: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x43007578: jal         0x43006B78
    // 0x4300757C: lui         $a3, 0x4270
    ctx->r7 = S32(0X4270 << 16);
    ovl_enemy_battle_6B78(rdram, ctx);
        goto after_5;
    // 0x4300757C: lui         $a3, 0x4270
    ctx->r7 = S32(0X4270 << 16);
    after_5:
    // 0x43007580: b           L_430075DC
    // 0x43007584: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_430075DC;
    // 0x43007584: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43007588:
    // 0x43007588: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x4300758C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x43007590: jal         0x43006B78
    // 0x43007594: lui         $a3, 0x4270
    ctx->r7 = S32(0X4270 << 16);
    ovl_enemy_battle_6B78(rdram, ctx);
        goto after_6;
    // 0x43007594: lui         $a3, 0x4270
    ctx->r7 = S32(0X4270 << 16);
    after_6:
    // 0x43007598: jal         0x43001F1C
    // 0x4300759C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_battle_1F1C(rdram, ctx);
        goto after_7;
    // 0x4300759C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x430075A0: lw          $t6, 0x1CC($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X1CC);
    // 0x430075A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x430075A8: slti        $at, $t6, 0xA
    ctx->r1 = SIGNED(ctx->r14) < 0XA ? 1 : 0;
    // 0x430075AC: beq         $at, $zero, L_430075C4
    if (ctx->r1 == 0) {
        // 0x430075B0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_430075C4;
    }
    // 0x430075B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430075B4: jal         0x430014E4
    // 0x430075B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_battle_14E4(rdram, ctx);
        goto after_8;
    // 0x430075B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x430075BC: b           L_430075DC
    // 0x430075C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_430075DC;
    // 0x430075C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_430075C4:
    // 0x430075C4: jal         0x430014E4
    // 0x430075C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_enemy_battle_14E4(rdram, ctx);
        goto after_9;
    // 0x430075C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x430075CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430075D0: jal         0x43001554
    // 0x430075D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_enemy_battle_1554(rdram, ctx);
        goto after_10;
    // 0x430075D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_10:
    // 0x430075D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_430075DC:
    // 0x430075DC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x430075E0: jr          $ra
    // 0x430075E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x430075E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_enemy_battle_75E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430075E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x430075EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430075F0: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x430075F4: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x430075F8: lwc1        $f6, 0x28($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X28);
    // 0x430075FC: lui         $at, 0x4128
    ctx->r1 = S32(0X4128 << 16);
    // 0x43007600: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x43007604: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x43007608: c.le.s      $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f14.fl <= ctx->f6.fl;
    // 0x4300760C: swc1        $f12, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f12.u32l;
    // 0x43007610: bc1f        L_43007624
    if (!c1cs) {
        // 0x43007614: swc1        $f4, 0x30($a0)
        MEM_W(0X30, ctx->r4) = ctx->f4.u32l;
            goto L_43007624;
    }
    // 0x43007614: swc1        $f4, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f4.u32l;
    // 0x43007618: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x4300761C: nop

    // 0x43007620: swc1        $f8, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f8.u32l;
L_43007624:
    // 0x43007624: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x43007628: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    // 0x4300762C: jal         0x430049B0
    // 0x43007630: lui         $a3, 0x4000
    ctx->r7 = S32(0X4000 << 16);
    ovl_enemy_battle_49B0(rdram, ctx);
        goto after_0;
    // 0x43007630: lui         $a3, 0x4000
    ctx->r7 = S32(0X4000 << 16);
    after_0:
    // 0x43007634: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43007638: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4300763C: jr          $ra
    // 0x43007640: nop

    return;
    // 0x43007640: nop

;}
RECOMP_FUNC void ovl_enemy_battle_7644(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007644: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43007648: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x4300764C: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x43007650: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x43007654: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43007658: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x4300765C: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x43007660: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x43007664: jal         0x430075E8
    // 0x43007668: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_enemy_battle_75E8(rdram, ctx);
        goto after_0;
    // 0x43007668: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x4300766C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43007670: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x43007674: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x43007678: jal         0x43006B78
    // 0x4300767C: lui         $a3, 0x4220
    ctx->r7 = S32(0X4220 << 16);
    ovl_enemy_battle_6B78(rdram, ctx);
        goto after_1;
    // 0x4300767C: lui         $a3, 0x4220
    ctx->r7 = S32(0X4220 << 16);
    after_1:
    // 0x43007680: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43007684: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43007688: jr          $ra
    // 0x4300768C: nop

    return;
    // 0x4300768C: nop

;}
RECOMP_FUNC void ovl_enemy_battle_7690(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007690: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43007694: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43007698: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4300769C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x430076A0: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x430076A4: jal         0x43004880
    // 0x430076A8: nop

    ovl_enemy_battle_4880(rdram, ctx);
        goto after_0;
    // 0x430076A8: nop

    after_0:
    // 0x430076AC: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x430076B0: nop

    // 0x430076B4: addiu       $t7, $t6, -0x11
    ctx->r15 = ADD32(ctx->r14, -0X11);
    // 0x430076B8: sltiu       $at, $t7, 0x7
    ctx->r1 = ctx->r15 < 0X7 ? 1 : 0;
    // 0x430076BC: beq         $at, $zero, L_43007760
    if (ctx->r1 == 0) {
        // 0x430076C0: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_43007760;
    }
    // 0x430076C0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x430076C4: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430076C8: addu        $at, $at, $t7
    gpr jr_addend_430076D4 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x430076CC: lw          $t7, -0x6ACC($at)
    ctx->r15 = ADD32(ctx->r1, -0X6ACC);
    // 0x430076D0: nop

    // 0x430076D4: jr          $t7
    // 0x430076D8: nop

    switch (jr_addend_430076D4 >> 2) {
        case 0: goto L_430076DC; break;
        case 1: goto L_430076F8; break;
        case 2: goto L_43007714; break;
        case 3: goto L_43007730; break;
        case 4: goto L_43007760; break;
        case 5: goto L_43007760; break;
        case 6: goto L_4300774C; break;
        default: switch_error(__func__, 0x430076D4, 0x43009534);
    }
    // 0x430076D8: nop

L_430076DC:
    // 0x430076DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430076E0: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    // 0x430076E4: lui         $a2, 0x4188
    ctx->r6 = S32(0X4188 << 16);
    // 0x430076E8: jal         0x430075E8
    // 0x430076EC: lui         $a3, 0x428C
    ctx->r7 = S32(0X428C << 16);
    ovl_enemy_battle_75E8(rdram, ctx);
        goto after_1;
    // 0x430076EC: lui         $a3, 0x428C
    ctx->r7 = S32(0X428C << 16);
    after_1:
    // 0x430076F0: b           L_43007764
    // 0x430076F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43007764;
    // 0x430076F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_430076F8:
    // 0x430076F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430076FC: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    // 0x43007700: lui         $a2, 0x4198
    ctx->r6 = S32(0X4198 << 16);
    // 0x43007704: jal         0x430075E8
    // 0x43007708: lui         $a3, 0x428C
    ctx->r7 = S32(0X428C << 16);
    ovl_enemy_battle_75E8(rdram, ctx);
        goto after_2;
    // 0x43007708: lui         $a3, 0x428C
    ctx->r7 = S32(0X428C << 16);
    after_2:
    // 0x4300770C: b           L_43007764
    // 0x43007710: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43007764;
    // 0x43007710: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43007714:
    // 0x43007714: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007718: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    // 0x4300771C: lui         $a2, 0x4188
    ctx->r6 = S32(0X4188 << 16);
    // 0x43007720: jal         0x430075E8
    // 0x43007724: lui         $a3, 0x428C
    ctx->r7 = S32(0X428C << 16);
    ovl_enemy_battle_75E8(rdram, ctx);
        goto after_3;
    // 0x43007724: lui         $a3, 0x428C
    ctx->r7 = S32(0X428C << 16);
    after_3:
    // 0x43007728: b           L_43007764
    // 0x4300772C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43007764;
    // 0x4300772C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43007730:
    // 0x43007730: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007734: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    // 0x43007738: lui         $a2, 0x4198
    ctx->r6 = S32(0X4198 << 16);
    // 0x4300773C: jal         0x430075E8
    // 0x43007740: lui         $a3, 0x428C
    ctx->r7 = S32(0X428C << 16);
    ovl_enemy_battle_75E8(rdram, ctx);
        goto after_4;
    // 0x43007740: lui         $a3, 0x428C
    ctx->r7 = S32(0X428C << 16);
    after_4:
    // 0x43007744: b           L_43007764
    // 0x43007748: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43007764;
    // 0x43007748: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4300774C:
    // 0x4300774C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007750: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x43007754: lui         $a2, 0x4188
    ctx->r6 = S32(0X4188 << 16);
    // 0x43007758: jal         0x430075E8
    // 0x4300775C: lui         $a3, 0x428C
    ctx->r7 = S32(0X428C << 16);
    ovl_enemy_battle_75E8(rdram, ctx);
        goto after_5;
    // 0x4300775C: lui         $a3, 0x428C
    ctx->r7 = S32(0X428C << 16);
    after_5:
L_43007760:
    // 0x43007760: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43007764:
    // 0x43007764: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43007768: jr          $ra
    // 0x4300776C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x4300776C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_enemy_battle_7770(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007770: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43007774: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43007778: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x4300777C: lw          $t6, 0x1A4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X1A4);
    // 0x43007780: lui         $a1, 0x428C
    ctx->r5 = S32(0X428C << 16);
    // 0x43007784: beq         $t6, $zero, L_430077C8
    if (ctx->r14 == 0) {
        // 0x43007788: lui         $at, 0x40A0
        ctx->r1 = S32(0X40A0 << 16);
            goto L_430077C8;
    }
    // 0x43007788: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x4300778C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43007790: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x43007794: swc1        $f0, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f0.u32l;
    // 0x43007798: swc1        $f0, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f0.u32l;
    // 0x4300779C: swc1        $f0, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f0.u32l;
    // 0x430077A0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x430077A4: jal         0x430049B0
    // 0x430077A8: lui         $a3, 0x4120
    ctx->r7 = S32(0X4120 << 16);
    ovl_enemy_battle_49B0(rdram, ctx);
        goto after_0;
    // 0x430077A8: lui         $a3, 0x4120
    ctx->r7 = S32(0X4120 << 16);
    after_0:
    // 0x430077AC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x430077B0: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x430077B4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x430077B8: jal         0x43006B78
    // 0x430077BC: lui         $a3, 0x4220
    ctx->r7 = S32(0X4220 << 16);
    ovl_enemy_battle_6B78(rdram, ctx);
        goto after_1;
    // 0x430077BC: lui         $a3, 0x4220
    ctx->r7 = S32(0X4220 << 16);
    after_1:
    // 0x430077C0: b           L_430077D8
    // 0x430077C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_430077D8;
    // 0x430077C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_430077C8:
    // 0x430077C8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x430077CC: nop

    // 0x430077D0: swc1        $f4, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f4.u32l;
    // 0x430077D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_430077D8:
    // 0x430077D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x430077DC: jr          $ra
    // 0x430077E0: nop

    return;
    // 0x430077E0: nop

;}
RECOMP_FUNC void ovl_enemy_battle_77E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430077E4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x430077E8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x430077EC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x430077F0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x430077F4: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x430077F8: jal         0x43004880
    // 0x430077FC: nop

    ovl_enemy_battle_4880(rdram, ctx);
        goto after_0;
    // 0x430077FC: nop

    after_0:
    // 0x43007800: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x43007804: nop

    // 0x43007808: sltiu       $at, $t6, 0x18
    ctx->r1 = ctx->r14 < 0X18 ? 1 : 0;
    // 0x4300780C: beq         $at, $zero, L_43007B00
    if (ctx->r1 == 0) {
        // 0x43007810: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_43007B00;
    }
    // 0x43007810: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x43007814: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43007818: addu        $at, $at, $t6
    gpr jr_addend_43007824 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x4300781C: lw          $t6, -0x6AB0($at)
    ctx->r14 = ADD32(ctx->r1, -0X6AB0);
    // 0x43007820: nop

    // 0x43007824: jr          $t6
    // 0x43007828: nop

    switch (jr_addend_43007824 >> 2) {
        case 0: goto L_4300782C; break;
        case 1: goto L_43007834; break;
        case 2: goto L_4300785C; break;
        case 3: goto L_43007884; break;
        case 4: goto L_430078AC; break;
        case 5: goto L_430078D4; break;
        case 6: goto L_430078F0; break;
        case 7: goto L_4300790C; break;
        case 8: goto L_43007928; break;
        case 9: goto L_43007944; break;
        case 10: goto L_43007960; break;
        case 11: goto L_43007974; break;
        case 12: goto L_43007988; break;
        case 13: goto L_4300799C; break;
        case 14: goto L_430079B0; break;
        case 15: goto L_430079C8; break;
        case 16: goto L_430079E4; break;
        case 17: goto L_43007A0C; break;
        case 18: goto L_43007A34; break;
        case 19: goto L_43007A5C; break;
        case 20: goto L_43007A84; break;
        case 21: goto L_43007AD4; break;
        case 22: goto L_43007AE8; break;
        case 23: goto L_43007AAC; break;
        default: switch_error(__func__, 0x43007824, 0x43009550);
    }
    // 0x43007828: nop

L_4300782C:
    // 0x4300782C: b           L_43007B00
    // 0x43007830: sw          $zero, 0x1A4($s0)
    MEM_W(0X1A4, ctx->r16) = 0;
        goto L_43007B00;
    // 0x43007830: sw          $zero, 0x1A4($s0)
    MEM_W(0X1A4, ctx->r16) = 0;
L_43007834:
    // 0x43007834: lw          $t7, 0x1A4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X1A4);
    // 0x43007838: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4300783C: andi        $t8, $t7, 0x55
    ctx->r24 = ctx->r15 & 0X55;
    // 0x43007840: sw          $t8, 0x1A4($s0)
    MEM_W(0X1A4, ctx->r16) = ctx->r24;
    // 0x43007844: addiu       $a1, $zero, 0x96
    ctx->r5 = ADD32(0, 0X96);
    // 0x43007848: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x4300784C: jal         0x43006B78
    // 0x43007850: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    ovl_enemy_battle_6B78(rdram, ctx);
        goto after_1;
    // 0x43007850: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    after_1:
    // 0x43007854: b           L_43007B04
    // 0x43007858: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43007B04;
    // 0x43007858: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4300785C:
    // 0x4300785C: lw          $t9, 0x1A4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X1A4);
    // 0x43007860: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007864: andi        $t0, $t9, 0x55
    ctx->r8 = ctx->r25 & 0X55;
    // 0x43007868: sw          $t0, 0x1A4($s0)
    MEM_W(0X1A4, ctx->r16) = ctx->r8;
    // 0x4300786C: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    // 0x43007870: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x43007874: jal         0x43006B78
    // 0x43007878: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    ovl_enemy_battle_6B78(rdram, ctx);
        goto after_2;
    // 0x43007878: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    after_2:
    // 0x4300787C: b           L_43007B04
    // 0x43007880: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43007B04;
    // 0x43007880: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43007884:
    // 0x43007884: lw          $t1, 0x1A4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X1A4);
    // 0x43007888: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4300788C: andi        $t2, $t1, 0x55
    ctx->r10 = ctx->r9 & 0X55;
    // 0x43007890: sw          $t2, 0x1A4($s0)
    MEM_W(0X1A4, ctx->r16) = ctx->r10;
    // 0x43007894: addiu       $a1, $zero, 0x5A
    ctx->r5 = ADD32(0, 0X5A);
    // 0x43007898: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x4300789C: jal         0x43006B78
    // 0x430078A0: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    ovl_enemy_battle_6B78(rdram, ctx);
        goto after_3;
    // 0x430078A0: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    after_3:
    // 0x430078A4: b           L_43007B04
    // 0x430078A8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43007B04;
    // 0x430078A8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_430078AC:
    // 0x430078AC: lw          $t3, 0x1A4($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X1A4);
    // 0x430078B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430078B4: andi        $t4, $t3, 0x55
    ctx->r12 = ctx->r11 & 0X55;
    // 0x430078B8: sw          $t4, 0x1A4($s0)
    MEM_W(0X1A4, ctx->r16) = ctx->r12;
    // 0x430078BC: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    // 0x430078C0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x430078C4: jal         0x43006B78
    // 0x430078C8: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    ovl_enemy_battle_6B78(rdram, ctx);
        goto after_4;
    // 0x430078C8: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    after_4:
    // 0x430078CC: b           L_43007B04
    // 0x430078D0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43007B04;
    // 0x430078D0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_430078D4:
    // 0x430078D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430078D8: addiu       $a1, $zero, 0x96
    ctx->r5 = ADD32(0, 0X96);
    // 0x430078DC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x430078E0: jal         0x43006B78
    // 0x430078E4: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    ovl_enemy_battle_6B78(rdram, ctx);
        goto after_5;
    // 0x430078E4: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    after_5:
    // 0x430078E8: b           L_43007B04
    // 0x430078EC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43007B04;
    // 0x430078EC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_430078F0:
    // 0x430078F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430078F4: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    // 0x430078F8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x430078FC: jal         0x43006B78
    // 0x43007900: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    ovl_enemy_battle_6B78(rdram, ctx);
        goto after_6;
    // 0x43007900: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    after_6:
    // 0x43007904: b           L_43007B04
    // 0x43007908: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43007B04;
    // 0x43007908: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4300790C:
    // 0x4300790C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007910: addiu       $a1, $zero, 0x5A
    ctx->r5 = ADD32(0, 0X5A);
    // 0x43007914: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x43007918: jal         0x43006B78
    // 0x4300791C: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    ovl_enemy_battle_6B78(rdram, ctx);
        goto after_7;
    // 0x4300791C: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    after_7:
    // 0x43007920: b           L_43007B04
    // 0x43007924: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43007B04;
    // 0x43007924: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43007928:
    // 0x43007928: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4300792C: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    // 0x43007930: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x43007934: jal         0x43006B78
    // 0x43007938: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    ovl_enemy_battle_6B78(rdram, ctx);
        goto after_8;
    // 0x43007938: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    after_8:
    // 0x4300793C: b           L_43007B04
    // 0x43007940: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43007B04;
    // 0x43007940: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43007944:
    // 0x43007944: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007948: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x4300794C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x43007950: jal         0x43006B78
    // 0x43007954: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    ovl_enemy_battle_6B78(rdram, ctx);
        goto after_9;
    // 0x43007954: lui         $a3, 0x41A0
    ctx->r7 = S32(0X41A0 << 16);
    after_9:
    // 0x43007958: b           L_43007B04
    // 0x4300795C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43007B04;
    // 0x4300795C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43007960:
    // 0x43007960: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007964: jal         0x4300729C
    // 0x43007968: addiu       $a1, $zero, 0x5A
    ctx->r5 = ADD32(0, 0X5A);
    ovl_enemy_battle_729C(rdram, ctx);
        goto after_10;
    // 0x43007968: addiu       $a1, $zero, 0x5A
    ctx->r5 = ADD32(0, 0X5A);
    after_10:
    // 0x4300796C: b           L_43007B04
    // 0x43007970: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43007B04;
    // 0x43007970: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43007974:
    // 0x43007974: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007978: jal         0x4300729C
    // 0x4300797C: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    ovl_enemy_battle_729C(rdram, ctx);
        goto after_11;
    // 0x4300797C: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    after_11:
    // 0x43007980: b           L_43007B04
    // 0x43007984: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43007B04;
    // 0x43007984: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43007988:
    // 0x43007988: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4300798C: jal         0x4300744C
    // 0x43007990: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    ovl_enemy_battle_744C(rdram, ctx);
        goto after_12;
    // 0x43007990: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    after_12:
    // 0x43007994: b           L_43007B04
    // 0x43007998: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43007B04;
    // 0x43007998: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4300799C:
    // 0x4300799C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430079A0: jal         0x4300744C
    // 0x430079A4: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    ovl_enemy_battle_744C(rdram, ctx);
        goto after_13;
    // 0x430079A4: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    after_13:
    // 0x430079A8: b           L_43007B04
    // 0x430079AC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43007B04;
    // 0x430079AC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_430079B0:
    // 0x430079B0: sw          $zero, 0x1A4($s0)
    MEM_W(0X1A4, ctx->r16) = 0;
    // 0x430079B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430079B8: jal         0x4300744C
    // 0x430079BC: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    ovl_enemy_battle_744C(rdram, ctx);
        goto after_14;
    // 0x430079BC: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    after_14:
    // 0x430079C0: b           L_43007B04
    // 0x430079C4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43007B04;
    // 0x430079C4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_430079C8:
    // 0x430079C8: jal         0x4300034C
    // 0x430079CC: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    ovl_enemy_battle_34C(rdram, ctx);
        goto after_15;
    // 0x430079CC: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_15:
    // 0x430079D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430079D4: jal         0x43007520
    // 0x430079D8: addiu       $a1, $v0, 0x1E
    ctx->r5 = ADD32(ctx->r2, 0X1E);
    ovl_enemy_battle_7520(rdram, ctx);
        goto after_16;
    // 0x430079D8: addiu       $a1, $v0, 0x1E
    ctx->r5 = ADD32(ctx->r2, 0X1E);
    after_16:
    // 0x430079DC: b           L_43007B04
    // 0x430079E0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43007B04;
    // 0x430079E0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_430079E4:
    // 0x430079E4: lw          $t5, 0x1A4($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X1A4);
    // 0x430079E8: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    // 0x430079EC: andi        $t6, $t5, 0x55
    ctx->r14 = ctx->r13 & 0X55;
    // 0x430079F0: jal         0x4300034C
    // 0x430079F4: sw          $t6, 0x1A4($s0)
    MEM_W(0X1A4, ctx->r16) = ctx->r14;
    ovl_enemy_battle_34C(rdram, ctx);
        goto after_17;
    // 0x430079F4: sw          $t6, 0x1A4($s0)
    MEM_W(0X1A4, ctx->r16) = ctx->r14;
    after_17:
    // 0x430079F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430079FC: jal         0x43007520
    // 0x43007A00: addiu       $a1, $v0, 0x1E
    ctx->r5 = ADD32(ctx->r2, 0X1E);
    ovl_enemy_battle_7520(rdram, ctx);
        goto after_18;
    // 0x43007A00: addiu       $a1, $v0, 0x1E
    ctx->r5 = ADD32(ctx->r2, 0X1E);
    after_18:
    // 0x43007A04: b           L_43007B04
    // 0x43007A08: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43007B04;
    // 0x43007A08: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43007A0C:
    // 0x43007A0C: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x43007A10: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x43007A14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007A18: addiu       $a1, $zero, 0x5A
    ctx->r5 = ADD32(0, 0X5A);
    // 0x43007A1C: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    // 0x43007A20: lui         $a3, 0x4188
    ctx->r7 = S32(0X4188 << 16);
    // 0x43007A24: jal         0x43007644
    // 0x43007A28: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_enemy_battle_7644(rdram, ctx);
        goto after_19;
    // 0x43007A28: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_19:
    // 0x43007A2C: b           L_43007B04
    // 0x43007A30: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43007B04;
    // 0x43007A30: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43007A34:
    // 0x43007A34: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x43007A38: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x43007A3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007A40: addiu       $a1, $zero, 0x5A
    ctx->r5 = ADD32(0, 0X5A);
    // 0x43007A44: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x43007A48: lui         $a3, 0x4198
    ctx->r7 = S32(0X4198 << 16);
    // 0x43007A4C: jal         0x43007644
    // 0x43007A50: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    ovl_enemy_battle_7644(rdram, ctx);
        goto after_20;
    // 0x43007A50: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_20:
    // 0x43007A54: b           L_43007B04
    // 0x43007A58: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43007B04;
    // 0x43007A58: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43007A5C:
    // 0x43007A5C: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x43007A60: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x43007A64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007A68: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    // 0x43007A6C: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    // 0x43007A70: lui         $a3, 0x4188
    ctx->r7 = S32(0X4188 << 16);
    // 0x43007A74: jal         0x43007644
    // 0x43007A78: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    ovl_enemy_battle_7644(rdram, ctx);
        goto after_21;
    // 0x43007A78: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_21:
    // 0x43007A7C: b           L_43007B04
    // 0x43007A80: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43007B04;
    // 0x43007A80: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43007A84:
    // 0x43007A84: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x43007A88: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x43007A8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007A90: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    // 0x43007A94: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x43007A98: lui         $a3, 0x4198
    ctx->r7 = S32(0X4198 << 16);
    // 0x43007A9C: jal         0x43007644
    // 0x43007AA0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    ovl_enemy_battle_7644(rdram, ctx);
        goto after_22;
    // 0x43007AA0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_22:
    // 0x43007AA4: b           L_43007B04
    // 0x43007AA8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43007B04;
    // 0x43007AA8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43007AAC:
    // 0x43007AAC: lui         $at, 0x4391
    ctx->r1 = S32(0X4391 << 16);
    // 0x43007AB0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x43007AB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007AB8: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x43007ABC: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x43007AC0: lui         $a3, 0x4188
    ctx->r7 = S32(0X4188 << 16);
    // 0x43007AC4: jal         0x43007644
    // 0x43007AC8: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    ovl_enemy_battle_7644(rdram, ctx);
        goto after_23;
    // 0x43007AC8: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_23:
    // 0x43007ACC: b           L_43007B04
    // 0x43007AD0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43007B04;
    // 0x43007AD0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43007AD4:
    // 0x43007AD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007AD8: jal         0x43007770
    // 0x43007ADC: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    ovl_enemy_battle_7770(rdram, ctx);
        goto after_24;
    // 0x43007ADC: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_24:
    // 0x43007AE0: b           L_43007B04
    // 0x43007AE4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43007B04;
    // 0x43007AE4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43007AE8:
    // 0x43007AE8: lw          $t7, 0x1A4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X1A4);
    // 0x43007AEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007AF0: andi        $t8, $t7, 0x55
    ctx->r24 = ctx->r15 & 0X55;
    // 0x43007AF4: sw          $t8, 0x1A4($s0)
    MEM_W(0X1A4, ctx->r16) = ctx->r24;
    // 0x43007AF8: jal         0x43007770
    // 0x43007AFC: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    ovl_enemy_battle_7770(rdram, ctx);
        goto after_25;
    // 0x43007AFC: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_25:
L_43007B00:
    // 0x43007B00: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43007B04:
    // 0x43007B04: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x43007B08: jr          $ra
    // 0x43007B0C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x43007B0C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_enemy_battle_7B10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007B10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43007B14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43007B18: jal         0x43006928
    // 0x43007B1C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_enemy_battle_6928(rdram, ctx);
        goto after_0;
    // 0x43007B1C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x43007B20: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43007B24: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x43007B28: lw          $t6, 0x1C8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X1C8);
    // 0x43007B2C: nop

    // 0x43007B30: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x43007B34: beq         $t7, $zero, L_43007B44
    if (ctx->r15 == 0) {
        // 0x43007B38: nop
    
            goto L_43007B44;
    }
    // 0x43007B38: nop

    // 0x43007B3C: b           L_43007B48
    // 0x43007B40: sw          $t8, 0x1A4($a0)
    MEM_W(0X1A4, ctx->r4) = ctx->r24;
        goto L_43007B48;
    // 0x43007B40: sw          $t8, 0x1A4($a0)
    MEM_W(0X1A4, ctx->r4) = ctx->r24;
L_43007B44:
    // 0x43007B44: sw          $zero, 0x1A4($a0)
    MEM_W(0X1A4, ctx->r4) = 0;
L_43007B48:
    // 0x43007B48: jal         0x430077E4
    // 0x43007B4C: nop

    ovl_enemy_battle_77E4(rdram, ctx);
        goto after_1;
    // 0x43007B4C: nop

    after_1:
    // 0x43007B50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43007B54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43007B58: jr          $ra
    // 0x43007B5C: nop

    return;
    // 0x43007B5C: nop

;}
RECOMP_FUNC void ovl_enemy_battle_7B60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007B60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43007B64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43007B68: jal         0x43006D84
    // 0x43007B6C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_enemy_battle_6D84(rdram, ctx);
        goto after_0;
    // 0x43007B6C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x43007B70: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43007B74: jal         0x430077E4
    // 0x43007B78: nop

    ovl_enemy_battle_77E4(rdram, ctx);
        goto after_1;
    // 0x43007B78: nop

    after_1:
    // 0x43007B7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43007B80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43007B84: jr          $ra
    // 0x43007B88: nop

    return;
    // 0x43007B88: nop

;}
RECOMP_FUNC void ovl_enemy_battle_7B8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007B8C: lw          $v0, 0x1A0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1A0);
    // 0x43007B90: nop

    // 0x43007B94: sra         $t6, $v0, 5
    ctx->r14 = S32(SIGNED(ctx->r2) >> 5);
    // 0x43007B98: andi        $t7, $t6, 0xF
    ctx->r15 = ctx->r14 & 0XF;
    // 0x43007B9C: slti        $at, $t7, 0x8
    ctx->r1 = SIGNED(ctx->r15) < 0X8 ? 1 : 0;
    // 0x43007BA0: bne         $at, $zero, L_43007BB0
    if (ctx->r1 != 0) {
        // 0x43007BA4: or          $v0, $t7, $zero
        ctx->r2 = ctx->r15 | 0;
            goto L_43007BB0;
    }
    // 0x43007BA4: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    // 0x43007BA8: b           L_43007BC4
    // 0x43007BAC: addiu       $a1, $t7, -0x8
    ctx->r5 = ADD32(ctx->r15, -0X8);
        goto L_43007BC4;
    // 0x43007BAC: addiu       $a1, $t7, -0x8
    ctx->r5 = ADD32(ctx->r15, -0X8);
L_43007BB0:
    // 0x43007BB0: bgez        $v0, L_43007BC0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x43007BB4: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_43007BC0;
    }
    // 0x43007BB4: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x43007BB8: b           L_43007BC0
    // 0x43007BBC: addiu       $a2, $v0, 0x8
    ctx->r6 = ADD32(ctx->r2, 0X8);
        goto L_43007BC0;
    // 0x43007BBC: addiu       $a2, $v0, 0x8
    ctx->r6 = ADD32(ctx->r2, 0X8);
L_43007BC0:
    // 0x43007BC0: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
L_43007BC4:
    // 0x43007BC4: lw          $t9, 0x1C8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X1C8);
    // 0x43007BC8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x43007BCC: andi        $t0, $t9, 0x2
    ctx->r8 = ctx->r25 & 0X2;
    // 0x43007BD0: beq         $t0, $zero, L_43007C2C
    if (ctx->r8 == 0) {
        // 0x43007BD4: sllv        $v1, $t8, $a1
        ctx->r3 = S32(ctx->r24 << (ctx->r5 & 31));
            goto L_43007C2C;
    }
    // 0x43007BD4: sllv        $v1, $t8, $a1
    ctx->r3 = S32(ctx->r24 << (ctx->r5 & 31));
    // 0x43007BD8: addiu       $a0, $v0, -0x1
    ctx->r4 = ADD32(ctx->r2, -0X1);
    // 0x43007BDC: slti        $at, $a0, 0x8
    ctx->r1 = SIGNED(ctx->r4) < 0X8 ? 1 : 0;
    // 0x43007BE0: bne         $at, $zero, L_43007BF0
    if (ctx->r1 != 0) {
        // 0x43007BE4: nop
    
            goto L_43007BF0;
    }
    // 0x43007BE4: nop

    // 0x43007BE8: b           L_43007C04
    // 0x43007BEC: addiu       $a1, $v0, -0x9
    ctx->r5 = ADD32(ctx->r2, -0X9);
        goto L_43007C04;
    // 0x43007BEC: addiu       $a1, $v0, -0x9
    ctx->r5 = ADD32(ctx->r2, -0X9);
L_43007BF0:
    // 0x43007BF0: bgez        $a0, L_43007C00
    if (SIGNED(ctx->r4) >= 0) {
        // 0x43007BF4: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_43007C00;
    }
    // 0x43007BF4: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x43007BF8: b           L_43007C00
    // 0x43007BFC: addiu       $a2, $v0, 0x7
    ctx->r6 = ADD32(ctx->r2, 0X7);
        goto L_43007C00;
    // 0x43007BFC: addiu       $a2, $v0, 0x7
    ctx->r6 = ADD32(ctx->r2, 0X7);
L_43007C00:
    // 0x43007C00: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
L_43007C04:
    // 0x43007C04: addiu       $a0, $v0, -0x2
    ctx->r4 = ADD32(ctx->r2, -0X2);
    // 0x43007C08: slti        $at, $a0, 0x8
    ctx->r1 = SIGNED(ctx->r4) < 0X8 ? 1 : 0;
    // 0x43007C0C: beq         $at, $zero, L_43007C78
    if (ctx->r1 == 0) {
        // 0x43007C10: nop
    
            goto L_43007C78;
    }
    // 0x43007C10: nop

    // 0x43007C14: bgez        $a0, L_43007C24
    if (SIGNED(ctx->r4) >= 0) {
        // 0x43007C18: nop
    
            goto L_43007C24;
    }
    // 0x43007C18: nop

    // 0x43007C1C: jr          $ra
    // 0x43007C20: nop

    return;
    // 0x43007C20: nop

L_43007C24:
    // 0x43007C24: jr          $ra
    // 0x43007C28: nop

    return;
    // 0x43007C28: nop

L_43007C2C:
    // 0x43007C2C: addiu       $a0, $v0, 0x1
    ctx->r4 = ADD32(ctx->r2, 0X1);
    // 0x43007C30: slti        $at, $a0, 0x8
    ctx->r1 = SIGNED(ctx->r4) < 0X8 ? 1 : 0;
    // 0x43007C34: bne         $at, $zero, L_43007C44
    if (ctx->r1 != 0) {
        // 0x43007C38: nop
    
            goto L_43007C44;
    }
    // 0x43007C38: nop

    // 0x43007C3C: b           L_43007C58
    // 0x43007C40: addiu       $a1, $v0, -0x7
    ctx->r5 = ADD32(ctx->r2, -0X7);
        goto L_43007C58;
    // 0x43007C40: addiu       $a1, $v0, -0x7
    ctx->r5 = ADD32(ctx->r2, -0X7);
L_43007C44:
    // 0x43007C44: bgez        $a0, L_43007C54
    if (SIGNED(ctx->r4) >= 0) {
        // 0x43007C48: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_43007C54;
    }
    // 0x43007C48: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x43007C4C: b           L_43007C54
    // 0x43007C50: addiu       $a2, $v0, 0x9
    ctx->r6 = ADD32(ctx->r2, 0X9);
        goto L_43007C54;
    // 0x43007C50: addiu       $a2, $v0, 0x9
    ctx->r6 = ADD32(ctx->r2, 0X9);
L_43007C54:
    // 0x43007C54: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
L_43007C58:
    // 0x43007C58: addiu       $a0, $v0, 0x2
    ctx->r4 = ADD32(ctx->r2, 0X2);
    // 0x43007C5C: slti        $at, $a0, 0x8
    ctx->r1 = SIGNED(ctx->r4) < 0X8 ? 1 : 0;
    // 0x43007C60: beq         $at, $zero, L_43007C78
    if (ctx->r1 == 0) {
        // 0x43007C64: nop
    
            goto L_43007C78;
    }
    // 0x43007C64: nop

    // 0x43007C68: bgez        $a0, L_43007C78
    if (SIGNED(ctx->r4) >= 0) {
        // 0x43007C6C: nop
    
            goto L_43007C78;
    }
    // 0x43007C6C: nop

    // 0x43007C70: jr          $ra
    // 0x43007C74: nop

    return;
    // 0x43007C74: nop

L_43007C78:
    // 0x43007C78: jr          $ra
    // 0x43007C7C: nop

    return;
    // 0x43007C7C: nop

;}
RECOMP_FUNC void ovl_enemy_battle_7C80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007C80: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x43007C84: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x43007C88: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43007C8C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x43007C90: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x43007C94: jal         0x43004880
    // 0x43007C98: nop

    ovl_enemy_battle_4880(rdram, ctx);
        goto after_0;
    // 0x43007C98: nop

    after_0:
    // 0x43007C9C: lw          $t6, 0x8($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X8);
    // 0x43007CA0: nop

    // 0x43007CA4: sltiu       $at, $t6, 0x16
    ctx->r1 = ctx->r14 < 0X16 ? 1 : 0;
    // 0x43007CA8: beq         $at, $zero, L_43007F2C
    if (ctx->r1 == 0) {
        // 0x43007CAC: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_43007F2C;
    }
    // 0x43007CAC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x43007CB0: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43007CB4: addu        $at, $at, $t6
    gpr jr_addend_43007CC0 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x43007CB8: lw          $t6, -0x6A50($at)
    ctx->r14 = ADD32(ctx->r1, -0X6A50);
    // 0x43007CBC: nop

    // 0x43007CC0: jr          $t6
    // 0x43007CC4: nop

    switch (jr_addend_43007CC0 >> 2) {
        case 0: goto L_43007CC8; break;
        case 1: goto L_43007CD4; break;
        case 2: goto L_43007CEC; break;
        case 3: goto L_43007D04; break;
        case 4: goto L_43007D1C; break;
        case 5: goto L_43007D34; break;
        case 6: goto L_43007D54; break;
        case 7: goto L_43007D74; break;
        case 8: goto L_43007D8C; break;
        case 9: goto L_43007DA4; break;
        case 10: goto L_43007DBC; break;
        case 11: goto L_43007DD4; break;
        case 12: goto L_43007DEC; break;
        case 13: goto L_43007E04; break;
        case 14: goto L_43007E1C; break;
        case 15: goto L_43007E30; break;
        case 16: goto L_43007E44; break;
        case 17: goto L_43007E58; break;
        case 18: goto L_43007E78; break;
        case 19: goto L_43007E9C; break;
        case 20: goto L_43007EC0; break;
        case 21: goto L_43007EF8; break;
        default: switch_error(__func__, 0x43007CC0, 0x430095B0);
    }
    // 0x43007CC4: nop

L_43007CC8:
    // 0x43007CC8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x43007CCC: b           L_43007F2C
    // 0x43007CD0: swc1        $f4, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f4.u32l;
        goto L_43007F2C;
    // 0x43007CD0: swc1        $f4, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f4.u32l;
L_43007CD4:
    // 0x43007CD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007CD8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x43007CDC: jal         0x43007B10
    // 0x43007CE0: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    ovl_enemy_battle_7B10(rdram, ctx);
        goto after_1;
    // 0x43007CE0: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    after_1:
    // 0x43007CE4: b           L_43007F30
    // 0x43007CE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_43007F30;
    // 0x43007CE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43007CEC:
    // 0x43007CEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007CF0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x43007CF4: jal         0x43007B10
    // 0x43007CF8: addiu       $a2, $zero, 0x5A
    ctx->r6 = ADD32(0, 0X5A);
    ovl_enemy_battle_7B10(rdram, ctx);
        goto after_2;
    // 0x43007CF8: addiu       $a2, $zero, 0x5A
    ctx->r6 = ADD32(0, 0X5A);
    after_2:
    // 0x43007CFC: b           L_43007F30
    // 0x43007D00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_43007F30;
    // 0x43007D00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43007D04:
    // 0x43007D04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007D08: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x43007D0C: jal         0x43007B10
    // 0x43007D10: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    ovl_enemy_battle_7B10(rdram, ctx);
        goto after_3;
    // 0x43007D10: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    after_3:
    // 0x43007D14: b           L_43007F30
    // 0x43007D18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_43007F30;
    // 0x43007D18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43007D1C:
    // 0x43007D1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007D20: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x43007D24: jal         0x43007B10
    // 0x43007D28: addiu       $a2, $zero, 0x5A
    ctx->r6 = ADD32(0, 0X5A);
    ovl_enemy_battle_7B10(rdram, ctx);
        goto after_4;
    // 0x43007D28: addiu       $a2, $zero, 0x5A
    ctx->r6 = ADD32(0, 0X5A);
    after_4:
    // 0x43007D2C: b           L_43007F30
    // 0x43007D30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_43007F30;
    // 0x43007D30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43007D34:
    // 0x43007D34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007D38: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x43007D3C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x43007D40: addiu       $a3, $zero, 0xB4
    ctx->r7 = ADD32(0, 0XB4);
    // 0x43007D44: jal         0x43007108
    // 0x43007D48: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_enemy_battle_7108(rdram, ctx);
        goto after_5;
    // 0x43007D48: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_5:
    // 0x43007D4C: b           L_43007F30
    // 0x43007D50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_43007F30;
    // 0x43007D50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43007D54:
    // 0x43007D54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007D58: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x43007D5C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x43007D60: addiu       $a3, $zero, 0x78
    ctx->r7 = ADD32(0, 0X78);
    // 0x43007D64: jal         0x43007108
    // 0x43007D68: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_enemy_battle_7108(rdram, ctx);
        goto after_6;
    // 0x43007D68: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_6:
    // 0x43007D6C: b           L_43007F30
    // 0x43007D70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_43007F30;
    // 0x43007D70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43007D74:
    // 0x43007D74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007D78: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x43007D7C: jal         0x43007B60
    // 0x43007D80: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    ovl_enemy_battle_7B60(rdram, ctx);
        goto after_7;
    // 0x43007D80: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_7:
    // 0x43007D84: b           L_43007F30
    // 0x43007D88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_43007F30;
    // 0x43007D88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43007D8C:
    // 0x43007D8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007D90: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x43007D94: jal         0x43007B60
    // 0x43007D98: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    ovl_enemy_battle_7B60(rdram, ctx);
        goto after_8;
    // 0x43007D98: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_8:
    // 0x43007D9C: b           L_43007F30
    // 0x43007DA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_43007F30;
    // 0x43007DA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43007DA4:
    // 0x43007DA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007DA8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x43007DAC: jal         0x43007B60
    // 0x43007DB0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    ovl_enemy_battle_7B60(rdram, ctx);
        goto after_9;
    // 0x43007DB0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_9:
    // 0x43007DB4: b           L_43007F30
    // 0x43007DB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_43007F30;
    // 0x43007DB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43007DBC:
    // 0x43007DBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007DC0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x43007DC4: jal         0x43007B60
    // 0x43007DC8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    ovl_enemy_battle_7B60(rdram, ctx);
        goto after_10;
    // 0x43007DC8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_10:
    // 0x43007DCC: b           L_43007F30
    // 0x43007DD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_43007F30;
    // 0x43007DD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43007DD4:
    // 0x43007DD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007DD8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x43007DDC: jal         0x43007B60
    // 0x43007DE0: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    ovl_enemy_battle_7B60(rdram, ctx);
        goto after_11;
    // 0x43007DE0: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_11:
    // 0x43007DE4: b           L_43007F30
    // 0x43007DE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_43007F30;
    // 0x43007DE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43007DEC:
    // 0x43007DEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007DF0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x43007DF4: jal         0x43007B60
    // 0x43007DF8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    ovl_enemy_battle_7B60(rdram, ctx);
        goto after_12;
    // 0x43007DF8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_12:
    // 0x43007DFC: b           L_43007F30
    // 0x43007E00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_43007F30;
    // 0x43007E00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43007E04:
    // 0x43007E04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007E08: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x43007E0C: jal         0x43007B60
    // 0x43007E10: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    ovl_enemy_battle_7B60(rdram, ctx);
        goto after_13;
    // 0x43007E10: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_13:
    // 0x43007E14: b           L_43007F30
    // 0x43007E18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_43007F30;
    // 0x43007E18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43007E1C:
    // 0x43007E1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007E20: jal         0x43007010
    // 0x43007E24: addiu       $a1, $zero, 0x5A
    ctx->r5 = ADD32(0, 0X5A);
    ovl_enemy_battle_7010(rdram, ctx);
        goto after_14;
    // 0x43007E24: addiu       $a1, $zero, 0x5A
    ctx->r5 = ADD32(0, 0X5A);
    after_14:
    // 0x43007E28: b           L_43007F30
    // 0x43007E2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_43007F30;
    // 0x43007E2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43007E30:
    // 0x43007E30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007E34: jal         0x43007010
    // 0x43007E38: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    ovl_enemy_battle_7010(rdram, ctx);
        goto after_15;
    // 0x43007E38: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    after_15:
    // 0x43007E3C: b           L_43007F30
    // 0x43007E40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_43007F30;
    // 0x43007E40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43007E44:
    // 0x43007E44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007E48: jal         0x43007010
    // 0x43007E4C: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    ovl_enemy_battle_7010(rdram, ctx);
        goto after_16;
    // 0x43007E4C: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    after_16:
    // 0x43007E50: b           L_43007F30
    // 0x43007E54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_43007F30;
    // 0x43007E54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43007E58:
    // 0x43007E58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007E5C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x43007E60: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x43007E64: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x43007E68: jal         0x43007108
    // 0x43007E6C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_enemy_battle_7108(rdram, ctx);
        goto after_17;
    // 0x43007E6C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_17:
    // 0x43007E70: b           L_43007F30
    // 0x43007E74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_43007F30;
    // 0x43007E74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43007E78:
    // 0x43007E78: addiu       $t7, $zero, 0x44
    ctx->r15 = ADD32(0, 0X44);
    // 0x43007E7C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x43007E80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007E84: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x43007E88: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x43007E8C: jal         0x43007108
    // 0x43007E90: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    ovl_enemy_battle_7108(rdram, ctx);
        goto after_18;
    // 0x43007E90: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    after_18:
    // 0x43007E94: b           L_43007F30
    // 0x43007E98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_43007F30;
    // 0x43007E98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43007E9C:
    // 0x43007E9C: addiu       $t8, $zero, 0x11
    ctx->r24 = ADD32(0, 0X11);
    // 0x43007EA0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x43007EA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007EA8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x43007EAC: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x43007EB0: jal         0x43007108
    // 0x43007EB4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    ovl_enemy_battle_7108(rdram, ctx);
        goto after_19;
    // 0x43007EB4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    after_19:
    // 0x43007EB8: b           L_43007F30
    // 0x43007EBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_43007F30;
    // 0x43007EBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43007EC0:
    // 0x43007EC0: lw          $t9, 0x1C8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X1C8);
    // 0x43007EC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007EC8: ori         $t0, $t9, 0x2
    ctx->r8 = ctx->r25 | 0X2;
    // 0x43007ECC: jal         0x43007B8C
    // 0x43007ED0: sw          $t0, 0x1C8($s0)
    MEM_W(0X1C8, ctx->r16) = ctx->r8;
    ovl_enemy_battle_7B8C(rdram, ctx);
        goto after_20;
    // 0x43007ED0: sw          $t0, 0x1C8($s0)
    MEM_W(0X1C8, ctx->r16) = ctx->r8;
    after_20:
    // 0x43007ED4: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x43007ED8: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x43007EDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007EE0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x43007EE4: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x43007EE8: jal         0x43007108
    // 0x43007EEC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    ovl_enemy_battle_7108(rdram, ctx);
        goto after_21;
    // 0x43007EEC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    after_21:
    // 0x43007EF0: b           L_43007F30
    // 0x43007EF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_43007F30;
    // 0x43007EF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43007EF8:
    // 0x43007EF8: lw          $t2, 0x1C8($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X1C8);
    // 0x43007EFC: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x43007F00: and         $t3, $t2, $at
    ctx->r11 = ctx->r10 & ctx->r1;
    // 0x43007F04: sw          $t3, 0x1C8($s0)
    MEM_W(0X1C8, ctx->r16) = ctx->r11;
    // 0x43007F08: jal         0x43007B8C
    // 0x43007F0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_battle_7B8C(rdram, ctx);
        goto after_22;
    // 0x43007F0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
    // 0x43007F10: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x43007F14: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x43007F18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007F1C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x43007F20: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x43007F24: jal         0x43007108
    // 0x43007F28: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    ovl_enemy_battle_7108(rdram, ctx);
        goto after_23;
    // 0x43007F28: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    after_23:
L_43007F2C:
    // 0x43007F2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43007F30:
    // 0x43007F30: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    // 0x43007F34: jal         0x43008FF0
    // 0x43007F38: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    ovl_enemy_battle_8FF0(rdram, ctx);
        goto after_24;
    // 0x43007F38: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_24:
    // 0x43007F3C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43007F40: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x43007F44: jr          $ra
    // 0x43007F48: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x43007F48: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_enemy_battle_7F4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007F4C: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x43007F50: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x43007F54: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x43007F58: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x43007F5C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x43007F60: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x43007F64: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x43007F68: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x43007F6C: lw          $t6, 0x22C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X22C);
    // 0x43007F70: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x43007F74: blez        $t6, L_43007FD0
    if (SIGNED(ctx->r14) <= 0) {
        // 0x43007F78: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_43007FD0;
    }
    // 0x43007F78: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x43007F7C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43007F80: addiu       $s4, $zero, 0x2
    ctx->r20 = ADD32(0, 0X2);
    // 0x43007F84: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x43007F88: addiu       $s2, $sp, 0x38
    ctx->r18 = ADD32(ctx->r29, 0X38);
L_43007F8C:
    // 0x43007F8C: lw          $a0, 0x234($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X234);
    // 0x43007F90: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x43007F94: jal         0x430006C4
    // 0x43007F98: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    ovl_enemy_battle_6C4(rdram, ctx);
        goto after_0;
    // 0x43007F98: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_0:
    // 0x43007F9C: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x43007FA0: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x43007FA4: bne         $t7, $s3, L_43007FBC
    if (ctx->r15 != ctx->r19) {
        // 0x43007FA8: nop
    
            goto L_43007FBC;
    }
    // 0x43007FA8: nop

    // 0x43007FAC: bne         $t8, $s4, L_43007FBC
    if (ctx->r24 != ctx->r20) {
        // 0x43007FB0: nop
    
            goto L_43007FBC;
    }
    // 0x43007FB0: nop

    // 0x43007FB4: b           L_43007FD4
    // 0x43007FB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_43007FD4;
    // 0x43007FB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_43007FBC:
    // 0x43007FBC: lw          $t9, 0x22C($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X22C);
    // 0x43007FC0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x43007FC4: slt         $at, $s1, $t9
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x43007FC8: bne         $at, $zero, L_43007F8C
    if (ctx->r1 != 0) {
        // 0x43007FCC: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_43007F8C;
    }
    // 0x43007FCC: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_43007FD0:
    // 0x43007FD0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_43007FD4:
    // 0x43007FD4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x43007FD8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x43007FDC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x43007FE0: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x43007FE4: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x43007FE8: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x43007FEC: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x43007FF0: jr          $ra
    // 0x43007FF4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x43007FF4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_enemy_battle_7FF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007FF8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43007FFC: sltiu       $at, $a1, 0xC
    ctx->r1 = ctx->r5 < 0XC ? 1 : 0;
    // 0x43008000: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43008004: beq         $at, $zero, L_43008120
    if (ctx->r1 == 0) {
        // 0x43008008: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_43008120;
    }
    // 0x43008008: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x4300800C: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x43008010: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43008014: addu        $at, $at, $t6
    gpr jr_addend_43008020 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x43008018: lw          $t6, -0x69F8($at)
    ctx->r14 = ADD32(ctx->r1, -0X69F8);
    // 0x4300801C: nop

    // 0x43008020: jr          $t6
    // 0x43008024: nop

    switch (jr_addend_43008020 >> 2) {
        case 0: goto L_43008120; break;
        case 1: goto L_43008028; break;
        case 2: goto L_4300804C; break;
        case 3: goto L_43008070; break;
        case 4: goto L_43008094; break;
        case 5: goto L_430080B8; break;
        case 6: goto L_430080DC; break;
        case 7: goto L_430080DC; break;
        case 8: goto L_430080DC; break;
        case 9: goto L_430080F8; break;
        case 10: goto L_43008120; break;
        case 11: goto L_43008100; break;
        default: switch_error(__func__, 0x43008020, 0x43009608);
    }
    // 0x43008024: nop

L_43008028:
    // 0x43008028: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x4300802C: jal         0x430068E8
    // 0x43008030: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    ovl_enemy_battle_68E8(rdram, ctx);
        goto after_0;
    // 0x43008030: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x43008034: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x43008038: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4300803C: bne         $v0, $at, L_43008124
    if (ctx->r2 != ctx->r1) {
        // 0x43008040: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43008124;
    }
    // 0x43008040: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43008044: b           L_43008120
    // 0x43008048: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_43008120;
    // 0x43008048: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_4300804C:
    // 0x4300804C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x43008050: jal         0x430068E8
    // 0x43008054: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    ovl_enemy_battle_68E8(rdram, ctx);
        goto after_1;
    // 0x43008054: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_1:
    // 0x43008058: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x4300805C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x43008060: bne         $v0, $at, L_43008124
    if (ctx->r2 != ctx->r1) {
        // 0x43008064: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43008124;
    }
    // 0x43008064: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43008068: b           L_43008120
    // 0x4300806C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_43008120;
    // 0x4300806C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_43008070:
    // 0x43008070: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x43008074: jal         0x430068E8
    // 0x43008078: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    ovl_enemy_battle_68E8(rdram, ctx);
        goto after_2;
    // 0x43008078: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_2:
    // 0x4300807C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x43008080: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x43008084: bne         $v0, $at, L_43008124
    if (ctx->r2 != ctx->r1) {
        // 0x43008088: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43008124;
    }
    // 0x43008088: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4300808C: b           L_43008120
    // 0x43008090: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_43008120;
    // 0x43008090: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_43008094:
    // 0x43008094: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x43008098: jal         0x430068E8
    // 0x4300809C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    ovl_enemy_battle_68E8(rdram, ctx);
        goto after_3;
    // 0x4300809C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_3:
    // 0x430080A0: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x430080A4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x430080A8: bne         $v0, $at, L_43008124
    if (ctx->r2 != ctx->r1) {
        // 0x430080AC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43008124;
    }
    // 0x430080AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430080B0: b           L_43008120
    // 0x430080B4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_43008120;
    // 0x430080B4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_430080B8:
    // 0x430080B8: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x430080BC: jal         0x430068E8
    // 0x430080C0: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    ovl_enemy_battle_68E8(rdram, ctx);
        goto after_4;
    // 0x430080C0: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_4:
    // 0x430080C4: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x430080C8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x430080CC: bne         $v0, $at, L_43008124
    if (ctx->r2 != ctx->r1) {
        // 0x430080D0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43008124;
    }
    // 0x430080D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430080D4: b           L_43008120
    // 0x430080D8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_43008120;
    // 0x430080D8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_430080DC:
    // 0x430080DC: jal         0x43007F4C
    // 0x430080E0: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    ovl_enemy_battle_7F4C(rdram, ctx);
        goto after_5;
    // 0x430080E0: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_5:
    // 0x430080E4: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x430080E8: beq         $v0, $zero, L_43008124
    if (ctx->r2 == 0) {
        // 0x430080EC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43008124;
    }
    // 0x430080EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430080F0: b           L_43008120
    // 0x430080F4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_43008120;
    // 0x430080F4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_430080F8:
    // 0x430080F8: b           L_43008120
    // 0x430080FC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_43008120;
    // 0x430080FC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_43008100:
    // 0x43008100: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x43008104: jal         0x43006908
    // 0x43008108: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    ovl_enemy_battle_6908(rdram, ctx);
        goto after_6;
    // 0x43008108: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_6:
    // 0x4300810C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x43008110: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x43008114: bne         $v0, $at, L_43008124
    if (ctx->r2 != ctx->r1) {
        // 0x43008118: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43008124;
    }
    // 0x43008118: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4300811C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_43008120:
    // 0x43008120: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008124:
    // 0x43008124: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x43008128: jr          $ra
    // 0x4300812C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x4300812C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_enemy_battle_8130(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008130: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43008134: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43008138: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x4300813C: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x43008140: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x43008144: bne         $v0, $at, L_43008168
    if (ctx->r2 != ctx->r1) {
        // 0x43008148: or          $a2, $a1, $zero
        ctx->r6 = ctx->r5 | 0;
            goto L_43008168;
    }
    // 0x43008148: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x4300814C: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    // 0x43008150: jal         0x43005078
    // 0x43008154: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    ovl_enemy_battle_5078(rdram, ctx);
        goto after_0;
    // 0x43008154: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_0:
    // 0x43008158: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x4300815C: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x43008160: b           L_43008190
    // 0x43008164: sw          $a2, 0x1DC($t6)
    MEM_W(0X1DC, ctx->r14) = ctx->r6;
        goto L_43008190;
    // 0x43008164: sw          $a2, 0x1DC($t6)
    MEM_W(0X1DC, ctx->r14) = ctx->r6;
L_43008168:
    // 0x43008168: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x4300816C: bne         $v0, $at, L_43008190
    if (ctx->r2 != ctx->r1) {
        // 0x43008170: addiu       $a1, $zero, 0x18
        ctx->r5 = ADD32(0, 0X18);
            goto L_43008190;
    }
    // 0x43008170: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x43008174: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43008178: jal         0x43005078
    // 0x4300817C: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    ovl_enemy_battle_5078(rdram, ctx);
        goto after_1;
    // 0x4300817C: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_1:
    // 0x43008180: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x43008184: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x43008188: nop

    // 0x4300818C: sw          $a2, 0x1DC($t7)
    MEM_W(0X1DC, ctx->r15) = ctx->r6;
L_43008190:
    // 0x43008190: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43008194: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43008198: jr          $ra
    // 0x4300819C: nop

    return;
    // 0x4300819C: nop

;}
RECOMP_FUNC void ovl_enemy_battle_81A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430081A0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x430081A4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x430081A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430081AC: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x430081B0: beq         $a1, $at, L_4300820C
    if (ctx->r5 == ctx->r1) {
        // 0x430081B4: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_4300820C;
    }
    // 0x430081B4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x430081B8: lw          $t6, 0x1D4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X1D4);
    // 0x430081BC: lw          $t7, 0x8($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X8);
    // 0x430081C0: nop

    // 0x430081C4: slt         $at, $t6, $t7
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x430081C8: bne         $at, $zero, L_43008210
    if (ctx->r1 != 0) {
        // 0x430081CC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43008210;
    }
    // 0x430081CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430081D0: lw          $a1, 0x0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X0);
    // 0x430081D4: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    // 0x430081D8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x430081DC: jal         0x43007FF8
    // 0x430081E0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    ovl_enemy_battle_7FF8(rdram, ctx);
        goto after_0;
    // 0x430081E0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x430081E4: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x430081E8: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x430081EC: beq         $v0, $zero, L_43008210
    if (ctx->r2 == 0) {
        // 0x430081F0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43008210;
    }
    // 0x430081F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430081F4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x430081F8: jal         0x43008130
    // 0x430081FC: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    ovl_enemy_battle_8130(rdram, ctx);
        goto after_1;
    // 0x430081FC: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_1:
    // 0x43008200: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x43008204: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x43008208: sw          $zero, 0x1D4($t8)
    MEM_W(0X1D4, ctx->r24) = 0;
L_4300820C:
    // 0x4300820C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008210:
    // 0x43008210: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x43008214: jr          $ra
    // 0x43008218: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x43008218: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_enemy_battle_821C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300821C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43008220: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43008224: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x43008228: jal         0x430047A0
    // 0x4300822C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_enemy_battle_47A0(rdram, ctx);
        goto after_0;
    // 0x4300822C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x43008230: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x43008234: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x43008238: jal         0x430047A0
    // 0x4300823C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    ovl_enemy_battle_47A0(rdram, ctx);
        goto after_1;
    // 0x4300823C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x43008240: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x43008244: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x43008248: beq         $v1, $a1, L_43008268
    if (ctx->r3 == ctx->r5) {
        // 0x4300824C: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_43008268;
    }
    // 0x4300824C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x43008250: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x43008254: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x43008258: bne         $t6, $at, L_43008268
    if (ctx->r14 != ctx->r1) {
        // 0x4300825C: nop
    
            goto L_43008268;
    }
    // 0x4300825C: nop

    // 0x43008260: b           L_43008284
    // 0x43008264: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
        goto L_43008284;
    // 0x43008264: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
L_43008268:
    // 0x43008268: beq         $v0, $a1, L_43008288
    if (ctx->r2 == ctx->r5) {
        // 0x4300826C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43008288;
    }
    // 0x4300826C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43008270: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x43008274: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x43008278: bne         $t7, $at, L_43008288
    if (ctx->r15 != ctx->r1) {
        // 0x4300827C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43008288;
    }
    // 0x4300827C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43008280: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_43008284:
    // 0x43008284: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008288:
    // 0x43008288: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4300828C: jr          $ra
    // 0x43008290: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    return;
    // 0x43008290: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
;}
RECOMP_FUNC void ovl_enemy_battle_8294(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008294: beq         $a1, $zero, L_430082B0
    if (ctx->r5 == 0) {
        // 0x43008298: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_430082B0;
    }
    // 0x43008298: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x4300829C: lw          $t6, 0x54($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X54);
    // 0x430082A0: nop

    // 0x430082A4: sll         $t7, $t6, 13
    ctx->r15 = S32(ctx->r14 << 13);
    // 0x430082A8: bltz        $t7, L_430082D4
    if (SIGNED(ctx->r15) < 0) {
        // 0x430082AC: nop
    
            goto L_430082D4;
    }
    // 0x430082AC: nop

L_430082B0:
    // 0x430082B0: lw          $v0, 0x54($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X54);
    // 0x430082B4: nop

    // 0x430082B8: andi        $t8, $v0, 0x8000
    ctx->r24 = ctx->r2 & 0X8000;
    // 0x430082BC: bne         $t8, $zero, L_430082D4
    if (ctx->r24 != 0) {
        // 0x430082C0: andi        $t9, $v0, 0x2000
        ctx->r25 = ctx->r2 & 0X2000;
            goto L_430082D4;
    }
    // 0x430082C0: andi        $t9, $v0, 0x2000
    ctx->r25 = ctx->r2 & 0X2000;
    // 0x430082C4: bne         $t9, $zero, L_430082D4
    if (ctx->r25 != 0) {
        // 0x430082C8: sll         $t0, $v0, 9
        ctx->r8 = S32(ctx->r2 << 9);
            goto L_430082D4;
    }
    // 0x430082C8: sll         $t0, $v0, 9
    ctx->r8 = S32(ctx->r2 << 9);
    // 0x430082CC: bgez        $t0, L_430082D8
    if (SIGNED(ctx->r8) >= 0) {
        // 0x430082D0: nop
    
            goto L_430082D8;
    }
    // 0x430082D0: nop

L_430082D4:
    // 0x430082D4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_430082D8:
    // 0x430082D8: jr          $ra
    // 0x430082DC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x430082DC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_enemy_battle_82E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430082E0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x430082E4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x430082E8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x430082EC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x430082F0: jal         0x43008294
    // 0x430082F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_battle_8294(rdram, ctx);
        goto after_0;
    // 0x430082F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x430082F8: beq         $v0, $zero, L_4300833C
    if (ctx->r2 == 0) {
        // 0x430082FC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4300833C;
    }
    // 0x430082FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008300: lw          $t6, 0x1D4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X1D4);
    // 0x43008304: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x43008308: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x4300830C: jal         0x430047A0
    // 0x43008310: sw          $t7, 0x1D4($s0)
    MEM_W(0X1D4, ctx->r16) = ctx->r15;
    ovl_enemy_battle_47A0(rdram, ctx);
        goto after_1;
    // 0x43008310: sw          $t7, 0x1D4($s0)
    MEM_W(0X1D4, ctx->r16) = ctx->r15;
    after_1:
    // 0x43008314: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008318: jal         0x430081A0
    // 0x4300831C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    ovl_enemy_battle_81A0(rdram, ctx);
        goto after_2;
    // 0x4300831C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_2:
    // 0x43008320: bne         $v0, $zero, L_4300833C
    if (ctx->r2 != 0) {
        // 0x43008324: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4300833C;
    }
    // 0x43008324: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008328: jal         0x430047A0
    // 0x4300832C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_enemy_battle_47A0(rdram, ctx);
        goto after_3;
    // 0x4300832C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_3:
    // 0x43008330: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008334: jal         0x430081A0
    // 0x43008338: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    ovl_enemy_battle_81A0(rdram, ctx);
        goto after_4;
    // 0x43008338: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_4:
L_4300833C:
    // 0x4300833C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43008340: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43008344: jr          $ra
    // 0x43008348: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x43008348: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_enemy_battle_834C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300834C: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x43008350: addiu       $at, $zero, 0x19
    ctx->r1 = ADD32(0, 0X19);
    // 0x43008354: beq         $v0, $at, L_4300837C
    if (ctx->r2 == ctx->r1) {
        // 0x43008358: addiu       $at, $zero, 0x1B
        ctx->r1 = ADD32(0, 0X1B);
            goto L_4300837C;
    }
    // 0x43008358: addiu       $at, $zero, 0x1B
    ctx->r1 = ADD32(0, 0X1B);
    // 0x4300835C: beq         $v0, $at, L_4300837C
    if (ctx->r2 == ctx->r1) {
        // 0x43008360: addiu       $at, $zero, 0x23
        ctx->r1 = ADD32(0, 0X23);
            goto L_4300837C;
    }
    // 0x43008360: addiu       $at, $zero, 0x23
    ctx->r1 = ADD32(0, 0X23);
    // 0x43008364: beq         $v0, $at, L_4300837C
    if (ctx->r2 == ctx->r1) {
        // 0x43008368: addiu       $at, $zero, 0x33
        ctx->r1 = ADD32(0, 0X33);
            goto L_4300837C;
    }
    // 0x43008368: addiu       $at, $zero, 0x33
    ctx->r1 = ADD32(0, 0X33);
    // 0x4300836C: beq         $v0, $at, L_4300837C
    if (ctx->r2 == ctx->r1) {
        // 0x43008370: addiu       $at, $zero, 0x35
        ctx->r1 = ADD32(0, 0X35);
            goto L_4300837C;
    }
    // 0x43008370: addiu       $at, $zero, 0x35
    ctx->r1 = ADD32(0, 0X35);
    // 0x43008374: bne         $v0, $at, L_43008388
    if (ctx->r2 != ctx->r1) {
        // 0x43008378: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_43008388;
    }
    // 0x43008378: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_4300837C:
    // 0x4300837C: jr          $ra
    // 0x43008380: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x43008380: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x43008384: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_43008388:
    // 0x43008388: jr          $ra
    // 0x4300838C: nop

    return;
    // 0x4300838C: nop

;}
RECOMP_FUNC void ovl_enemy_battle_8390(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008390: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x43008394: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x43008398: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4300839C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x430083A0: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x430083A4: jal         0x43004880
    // 0x430083A8: nop

    ovl_enemy_battle_4880(rdram, ctx);
        goto after_0;
    // 0x430083A8: nop

    after_0:
    // 0x430083AC: lw          $v1, 0x5C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X5C);
    // 0x430083B0: addiu       $at, $zero, 0x25
    ctx->r1 = ADD32(0, 0X25);
    // 0x430083B4: bne         $v1, $at, L_4300840C
    if (ctx->r3 != ctx->r1) {
        // 0x430083B8: addiu       $at, $zero, 0x26
        ctx->r1 = ADD32(0, 0X26);
            goto L_4300840C;
    }
    // 0x430083B8: addiu       $at, $zero, 0x26
    ctx->r1 = ADD32(0, 0X26);
    // 0x430083BC: lw          $t6, 0x64($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X64);
    // 0x430083C0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x430083C4: beq         $t6, $at, L_430083E4
    if (ctx->r14 == ctx->r1) {
        // 0x430083C8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_430083E4;
    }
    // 0x430083C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430083CC: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x430083D0: lw          $a1, 0x64($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X64);
    // 0x430083D4: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x430083D8: jal         0x43004FFC
    // 0x430083DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_battle_4FFC(rdram, ctx);
        goto after_1;
    // 0x430083DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x430083E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_430083E4:
    // 0x430083E4: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x430083E8: jal         0x43008FF0
    // 0x430083EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_enemy_battle_8FF0(rdram, ctx);
        goto after_2;
    // 0x430083EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x430083F0: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x430083F4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x430083F8: jal         0x430006C4
    // 0x430083FC: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    ovl_enemy_battle_6C4(rdram, ctx);
        goto after_3;
    // 0x430083FC: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    after_3:
    // 0x43008400: b           L_4300855C
    // 0x43008404: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_4300855C;
    // 0x43008404: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x43008408: addiu       $at, $zero, 0x26
    ctx->r1 = ADD32(0, 0X26);
L_4300840C:
    // 0x4300840C: bne         $v1, $at, L_43008514
    if (ctx->r3 != ctx->r1) {
        // 0x43008410: addiu       $at, $zero, 0x2A
        ctx->r1 = ADD32(0, 0X2A);
            goto L_43008514;
    }
    // 0x43008410: addiu       $at, $zero, 0x2A
    ctx->r1 = ADD32(0, 0X2A);
    // 0x43008414: lw          $t7, 0x54($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X54);
    // 0x43008418: nop

    // 0x4300841C: sll         $t8, $t7, 14
    ctx->r24 = S32(ctx->r15 << 14);
    // 0x43008420: bltz        $t8, L_430084FC
    if (SIGNED(ctx->r24) < 0) {
        // 0x43008424: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_430084FC;
    }
    // 0x43008424: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008428: jal         0x4300834C
    // 0x4300842C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_battle_834C(rdram, ctx);
        goto after_4;
    // 0x4300842C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x43008430: beq         $v0, $zero, L_430084F8
    if (ctx->r2 == 0) {
        // 0x43008434: addiu       $a1, $zero, -0x1
        ctx->r5 = ADD32(0, -0X1);
            goto L_430084F8;
    }
    // 0x43008434: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x43008438: lw          $t9, 0x54($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X54);
    // 0x4300843C: lw          $t1, 0x1E4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X1E4);
    // 0x43008440: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x43008444: or          $t0, $t9, $at
    ctx->r8 = ctx->r25 | ctx->r1;
    // 0x43008448: addiu       $t2, $t1, -0x6
    ctx->r10 = ADD32(ctx->r9, -0X6);
    // 0x4300844C: sltiu       $at, $t2, 0x6
    ctx->r1 = ctx->r10 < 0X6 ? 1 : 0;
    // 0x43008450: beq         $at, $zero, L_430084A0
    if (ctx->r1 == 0) {
        // 0x43008454: sw          $t0, 0x54($s0)
        MEM_W(0X54, ctx->r16) = ctx->r8;
            goto L_430084A0;
    }
    // 0x43008454: sw          $t0, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r8;
    // 0x43008458: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x4300845C: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43008460: addu        $at, $at, $t2
    gpr jr_addend_4300846C = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x43008464: lw          $t2, -0x69C8($at)
    ctx->r10 = ADD32(ctx->r1, -0X69C8);
    // 0x43008468: nop

    // 0x4300846C: jr          $t2
    // 0x43008470: nop

    switch (jr_addend_4300846C >> 2) {
        case 0: goto L_43008474; break;
        case 1: goto L_4300847C; break;
        case 2: goto L_43008484; break;
        case 3: goto L_4300848C; break;
        case 4: goto L_43008494; break;
        case 5: goto L_4300849C; break;
        default: switch_error(__func__, 0x4300846C, 0x43009638);
    }
    // 0x43008470: nop

L_43008474:
    // 0x43008474: b           L_430084A0
    // 0x43008478: addiu       $a1, $zero, 0x92
    ctx->r5 = ADD32(0, 0X92);
        goto L_430084A0;
    // 0x43008478: addiu       $a1, $zero, 0x92
    ctx->r5 = ADD32(0, 0X92);
L_4300847C:
    // 0x4300847C: b           L_430084A0
    // 0x43008480: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
        goto L_430084A0;
    // 0x43008480: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
L_43008484:
    // 0x43008484: b           L_430084A0
    // 0x43008488: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
        goto L_430084A0;
    // 0x43008488: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
L_4300848C:
    // 0x4300848C: b           L_430084A0
    // 0x43008490: addiu       $a1, $zero, 0x9D
    ctx->r5 = ADD32(0, 0X9D);
        goto L_430084A0;
    // 0x43008490: addiu       $a1, $zero, 0x9D
    ctx->r5 = ADD32(0, 0X9D);
L_43008494:
    // 0x43008494: b           L_430084A0
    // 0x43008498: addiu       $a1, $zero, 0x46
    ctx->r5 = ADD32(0, 0X46);
        goto L_430084A0;
    // 0x43008498: addiu       $a1, $zero, 0x46
    ctx->r5 = ADD32(0, 0X46);
L_4300849C:
    // 0x4300849C: addiu       $a1, $zero, 0x88
    ctx->r5 = ADD32(0, 0X88);
L_430084A0:
    // 0x430084A0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x430084A4: beq         $a1, $at, L_430084F8
    if (ctx->r5 == ctx->r1) {
        // 0x430084A8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_430084F8;
    }
    // 0x430084A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430084AC: lw          $v0, 0x54($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X54);
    // 0x430084B0: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x430084B4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x430084B8: sll         $t3, $v0, 11
    ctx->r11 = S32(ctx->r2 << 11);
    // 0x430084BC: bgez        $t3, L_430084D4
    if (SIGNED(ctx->r11) >= 0) {
        // 0x430084C0: sll         $t4, $v0, 10
        ctx->r12 = S32(ctx->r2 << 10);
            goto L_430084D4;
    }
    // 0x430084C0: sll         $t4, $v0, 10
    ctx->r12 = S32(ctx->r2 << 10);
    // 0x430084C4: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x430084C8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x430084CC: b           L_430084E4
    // 0x430084D0: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
        goto L_430084E4;
    // 0x430084D0: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
L_430084D4:
    // 0x430084D4: bgez        $t4, L_430084E4
    if (SIGNED(ctx->r12) >= 0) {
        // 0x430084D8: lui         $at, 0x4120
        ctx->r1 = S32(0X4120 << 16);
            goto L_430084E4;
    }
    // 0x430084D8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x430084DC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x430084E0: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
L_430084E4:
    // 0x430084E4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x430084E8: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x430084EC: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x430084F0: jal         0x43001F48
    // 0x430084F4: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    ovl_enemy_battle_1F48(rdram, ctx);
        goto after_5;
    // 0x430084F4: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    after_5:
L_430084F8:
    // 0x430084F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_430084FC:
    // 0x430084FC: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x43008500: jal         0x43008FF0
    // 0x43008504: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    ovl_enemy_battle_8FF0(rdram, ctx);
        goto after_6;
    // 0x43008504: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_6:
    // 0x43008508: b           L_4300855C
    // 0x4300850C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_4300855C;
    // 0x4300850C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x43008510: addiu       $at, $zero, 0x2A
    ctx->r1 = ADD32(0, 0X2A);
L_43008514:
    // 0x43008514: beq         $v1, $at, L_4300853C
    if (ctx->r3 == ctx->r1) {
        // 0x43008518: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4300853C;
    }
    // 0x43008518: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4300851C: addiu       $at, $zero, 0x2B
    ctx->r1 = ADD32(0, 0X2B);
    // 0x43008520: beq         $v1, $at, L_4300853C
    if (ctx->r3 == ctx->r1) {
        // 0x43008524: addiu       $at, $zero, 0x2C
        ctx->r1 = ADD32(0, 0X2C);
            goto L_4300853C;
    }
    // 0x43008524: addiu       $at, $zero, 0x2C
    ctx->r1 = ADD32(0, 0X2C);
    // 0x43008528: beq         $v1, $at, L_4300853C
    if (ctx->r3 == ctx->r1) {
        // 0x4300852C: addiu       $at, $zero, 0x2D
        ctx->r1 = ADD32(0, 0X2D);
            goto L_4300853C;
    }
    // 0x4300852C: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x43008530: beq         $v1, $at, L_4300853C
    if (ctx->r3 == ctx->r1) {
        // 0x43008534: addiu       $at, $zero, 0x2E
        ctx->r1 = ADD32(0, 0X2E);
            goto L_4300853C;
    }
    // 0x43008534: addiu       $at, $zero, 0x2E
    ctx->r1 = ADD32(0, 0X2E);
    // 0x43008538: bne         $v1, $at, L_43008550
    if (ctx->r3 != ctx->r1) {
        // 0x4300853C: addiu       $a1, $zero, 0x5
        ctx->r5 = ADD32(0, 0X5);
            goto L_43008550;
    }
L_4300853C:
    // 0x4300853C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x43008540: jal         0x43008FF0
    // 0x43008544: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    ovl_enemy_battle_8FF0(rdram, ctx);
        goto after_7;
    // 0x43008544: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_7:
    // 0x43008548: b           L_4300855C
    // 0x4300854C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_4300855C;
    // 0x4300854C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_43008550:
    // 0x43008550: b           L_4300855C
    // 0x43008554: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_4300855C;
    // 0x43008554: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x43008558: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_4300855C:
    // 0x4300855C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43008560: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x43008564: jr          $ra
    // 0x43008568: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x43008568: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_enemy_battle_856C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300856C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x43008570: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43008574: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43008578: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4300857C: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x43008580: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x43008584: jal         0x430006C4
    // 0x43008588: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    ovl_enemy_battle_6C4(rdram, ctx);
        goto after_0;
    // 0x43008588: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    after_0:
    // 0x4300858C: bne         $v0, $zero, L_430085F0
    if (ctx->r2 != 0) {
        // 0x43008590: lui         $at, 0x4301
        ctx->r1 = S32(0X4301 << 16);
            goto L_430085F0;
    }
    // 0x43008590: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43008594: lwc1        $f0, 0x20($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X20);
    // 0x43008598: lwc1        $f4, -0x69B0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X69B0);
    // 0x4300859C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x430085A0: sub.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x430085A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430085A8: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x430085AC: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x430085B0: bc1f        L_430085C4
    if (!c1cs) {
        // 0x430085B4: addiu       $a1, $zero, 0x25
        ctx->r5 = ADD32(0, 0X25);
            goto L_430085C4;
    }
    // 0x430085B4: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    // 0x430085B8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x430085BC: jal         0x43005078
    // 0x430085C0: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    ovl_enemy_battle_5078(rdram, ctx);
        goto after_1;
    // 0x430085C0: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    after_1:
L_430085C4:
    // 0x430085C4: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x430085C8: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x430085CC: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    // 0x430085D0: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x430085D4: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x430085D8: jal         0x430006C4
    // 0x430085DC: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_enemy_battle_6C4(rdram, ctx);
        goto after_2;
    // 0x430085DC: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_2:
    // 0x430085E0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x430085E4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x430085E8: swc1        $f10, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f10.u32l;
    // 0x430085EC: swc1        $f16, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f16.u32l;
L_430085F0:
    // 0x430085F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x430085F4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x430085F8: jr          $ra
    // 0x430085FC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x430085FC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_enemy_battle_8600(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008600: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x43008604: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43008608: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4300860C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43008610: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x43008614: jal         0x43004880
    // 0x43008618: nop

    ovl_enemy_battle_4880(rdram, ctx);
        goto after_0;
    // 0x43008618: nop

    after_0:
    // 0x4300861C: lhu         $t6, 0x262($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X262);
    // 0x43008620: lw          $v1, 0x54($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X54);
    // 0x43008624: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x43008628: sll         $t8, $v1, 3
    ctx->r24 = S32(ctx->r3 << 3);
    // 0x4300862C: bgez        $t8, L_43008644
    if (SIGNED(ctx->r24) >= 0) {
        // 0x43008630: sh          $t7, 0x262($s0)
        MEM_H(0X262, ctx->r16) = ctx->r15;
            goto L_43008644;
    }
    // 0x43008630: sh          $t7, 0x262($s0)
    MEM_H(0X262, ctx->r16) = ctx->r15;
    // 0x43008634: jal         0x4300856C
    // 0x43008638: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_battle_856C(rdram, ctx);
        goto after_1;
    // 0x43008638: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x4300863C: lw          $v1, 0x54($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X54);
    // 0x43008640: nop

L_43008644:
    // 0x43008644: andi        $t9, $v1, 0x8000
    ctx->r25 = ctx->r3 & 0X8000;
    // 0x43008648: beq         $t9, $zero, L_43008664
    if (ctx->r25 == 0) {
        // 0x4300864C: andi        $t0, $v1, 0x4
        ctx->r8 = ctx->r3 & 0X4;
            goto L_43008664;
    }
    // 0x4300864C: andi        $t0, $v1, 0x4
    ctx->r8 = ctx->r3 & 0X4;
    // 0x43008650: jal         0x43004B88
    // 0x43008654: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_battle_4B88(rdram, ctx);
        goto after_2;
    // 0x43008654: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x43008658: lw          $v1, 0x54($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X54);
    // 0x4300865C: nop

    // 0x43008660: andi        $t0, $v1, 0x4
    ctx->r8 = ctx->r3 & 0X4;
L_43008664:
    // 0x43008664: beq         $t0, $zero, L_43008690
    if (ctx->r8 == 0) {
        // 0x43008668: andi        $t3, $v1, 0x8
        ctx->r11 = ctx->r3 & 0X8;
            goto L_43008690;
    }
    // 0x43008668: andi        $t3, $v1, 0x8
    ctx->r11 = ctx->r3 & 0X8;
    // 0x4300866C: jal         0x43008390
    // 0x43008670: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_battle_8390(rdram, ctx);
        goto after_3;
    // 0x43008670: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x43008674: lw          $t1, 0x60($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X60);
    // 0x43008678: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4300867C: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x43008680: jal         0x43005064
    // 0x43008684: sw          $t2, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r10;
    ovl_enemy_battle_5064(rdram, ctx);
        goto after_4;
    // 0x43008684: sw          $t2, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r10;
    after_4:
    // 0x43008688: b           L_430087F8
    // 0x4300868C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_430087F8;
    // 0x4300868C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43008690:
    // 0x43008690: beq         $t3, $zero, L_430086AC
    if (ctx->r11 == 0) {
        // 0x43008694: andi        $t4, $v1, 0x4000
        ctx->r12 = ctx->r3 & 0X4000;
            goto L_430086AC;
    }
    // 0x43008694: andi        $t4, $v1, 0x4000
    ctx->r12 = ctx->r3 & 0X4000;
    // 0x43008698: jal         0x430035F8
    // 0x4300869C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_battle_35F8(rdram, ctx);
        goto after_5;
    // 0x4300869C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x430086A0: lw          $v1, 0x54($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X54);
    // 0x430086A4: nop

    // 0x430086A8: andi        $t4, $v1, 0x4000
    ctx->r12 = ctx->r3 & 0X4000;
L_430086AC:
    // 0x430086AC: beq         $t4, $zero, L_430086BC
    if (ctx->r12 == 0) {
        // 0x430086B0: nop
    
            goto L_430086BC;
    }
    // 0x430086B0: nop

    // 0x430086B4: jal         0x43004B08
    // 0x430086B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_battle_4B08(rdram, ctx);
        goto after_6;
    // 0x430086B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
L_430086BC:
    // 0x430086BC: jal         0x430082E0
    // 0x430086C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_battle_82E0(rdram, ctx);
        goto after_7;
    // 0x430086C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x430086C4: jal         0x43008390
    // 0x430086C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_battle_8390(rdram, ctx);
        goto after_8;
    // 0x430086C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x430086CC: bne         $v0, $zero, L_430087F8
    if (ctx->r2 != 0) {
        // 0x430086D0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_430087F8;
    }
    // 0x430086D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x430086D4: lw          $v0, 0x5C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X5C);
    // 0x430086D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430086DC: beq         $v0, $zero, L_43008708
    if (ctx->r2 == 0) {
        // 0x430086E0: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_43008708;
    }
    // 0x430086E0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x430086E4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x430086E8: beq         $v0, $at, L_43008718
    if (ctx->r2 == ctx->r1) {
        // 0x430086EC: addiu       $a0, $zero, 0x17
        ctx->r4 = ADD32(0, 0X17);
            goto L_43008718;
    }
    // 0x430086EC: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    // 0x430086F0: beq         $v0, $a0, L_430087CC
    if (ctx->r2 == ctx->r4) {
        // 0x430086F4: addiu       $at, $zero, 0x18
        ctx->r1 = ADD32(0, 0X18);
            goto L_430087CC;
    }
    // 0x430086F4: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x430086F8: beq         $v1, $at, L_430087CC
    if (ctx->r3 == ctx->r1) {
        // 0x430086FC: nop
    
            goto L_430087CC;
    }
    // 0x430086FC: nop

    // 0x43008700: b           L_430087F8
    // 0x43008704: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_430087F8;
    // 0x43008704: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43008708:
    // 0x43008708: jal         0x43005078
    // 0x4300870C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_battle_5078(rdram, ctx);
        goto after_9;
    // 0x4300870C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_9:
    // 0x43008710: b           L_430087F8
    // 0x43008714: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_430087F8;
    // 0x43008714: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43008718:
    // 0x43008718: lw          $v1, 0x54($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X54);
    // 0x4300871C: nop

    // 0x43008720: andi        $t5, $v1, 0x1000
    ctx->r13 = ctx->r3 & 0X1000;
    // 0x43008724: bne         $t5, $zero, L_430087F4
    if (ctx->r13 != 0) {
        // 0x43008728: andi        $t6, $v1, 0x8
        ctx->r14 = ctx->r3 & 0X8;
            goto L_430087F4;
    }
    // 0x43008728: andi        $t6, $v1, 0x8
    ctx->r14 = ctx->r3 & 0X8;
    // 0x4300872C: bne         $t6, $zero, L_430087F8
    if (ctx->r14 != 0) {
        // 0x43008730: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_430087F8;
    }
    // 0x43008730: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43008734: jal         0x43007C80
    // 0x43008738: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_battle_7C80(rdram, ctx);
        goto after_10;
    // 0x43008738: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x4300873C: lw          $a2, 0x18($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X18);
    // 0x43008740: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008744: jal         0x430048A4
    // 0x43008748: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    ovl_enemy_battle_48A4(rdram, ctx);
        goto after_11;
    // 0x43008748: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    after_11:
    // 0x4300874C: bne         $v0, $zero, L_430087F4
    if (ctx->r2 != 0) {
        // 0x43008750: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_430087F4;
    }
    // 0x43008750: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x43008754: lw          $v0, 0x1A0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1A0);
    // 0x43008758: nop

    // 0x4300875C: sra         $t7, $v0, 5
    ctx->r15 = S32(SIGNED(ctx->r2) >> 5);
    // 0x43008760: andi        $t8, $t7, 0xF
    ctx->r24 = ctx->r15 & 0XF;
    // 0x43008764: slti        $at, $t8, 0x8
    ctx->r1 = SIGNED(ctx->r24) < 0X8 ? 1 : 0;
    // 0x43008768: bne         $at, $zero, L_43008778
    if (ctx->r1 != 0) {
        // 0x4300876C: or          $v0, $t8, $zero
        ctx->r2 = ctx->r24 | 0;
            goto L_43008778;
    }
    // 0x4300876C: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x43008770: b           L_4300878C
    // 0x43008774: addiu       $v1, $t8, -0x8
    ctx->r3 = ADD32(ctx->r24, -0X8);
        goto L_4300878C;
    // 0x43008774: addiu       $v1, $t8, -0x8
    ctx->r3 = ADD32(ctx->r24, -0X8);
L_43008778:
    // 0x43008778: bgez        $v0, L_43008788
    if (SIGNED(ctx->r2) >= 0) {
        // 0x4300877C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_43008788;
    }
    // 0x4300877C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x43008780: b           L_43008788
    // 0x43008784: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
        goto L_43008788;
    // 0x43008784: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
L_43008788:
    // 0x43008788: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_4300878C:
    // 0x4300878C: lw          $t3, 0x54($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X54);
    // 0x43008790: sllv        $t0, $t9, $v1
    ctx->r8 = S32(ctx->r25 << (ctx->r3 & 31));
    // 0x43008794: nor         $t1, $t0, $zero
    ctx->r9 = ~(ctx->r8 | 0);
    // 0x43008798: lui         $at, 0x8
    ctx->r1 = S32(0X8 << 16);
    // 0x4300879C: andi        $t2, $t1, 0xFF
    ctx->r10 = ctx->r9 & 0XFF;
    // 0x430087A0: or          $t4, $t3, $at
    ctx->r12 = ctx->r11 | ctx->r1;
    // 0x430087A4: sw          $t2, 0x1A4($s0)
    MEM_W(0X1A4, ctx->r16) = ctx->r10;
    // 0x430087A8: sw          $t4, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r12;
    // 0x430087AC: jal         0x430077E4
    // 0x430087B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_battle_77E4(rdram, ctx);
        goto after_12;
    // 0x430087B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x430087B4: lw          $t5, 0x54($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X54);
    // 0x430087B8: lui         $at, 0xFFF7
    ctx->r1 = S32(0XFFF7 << 16);
    // 0x430087BC: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x430087C0: and         $t6, $t5, $at
    ctx->r14 = ctx->r13 & ctx->r1;
    // 0x430087C4: b           L_430087F4
    // 0x430087C8: sw          $t6, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r14;
        goto L_430087F4;
    // 0x430087C8: sw          $t6, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r14;
L_430087CC:
    // 0x430087CC: bne         $a0, $v0, L_430087E0
    if (ctx->r4 != ctx->r2) {
        // 0x430087D0: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_430087E0;
    }
    // 0x430087D0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x430087D4: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x430087D8: b           L_430087E8
    // 0x430087DC: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
        goto L_430087E8;
    // 0x430087DC: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
L_430087E0:
    // 0x430087E0: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x430087E4: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
L_430087E8:
    // 0x430087E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430087EC: jal         0x43008FF0
    // 0x430087F0: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    ovl_enemy_battle_8FF0(rdram, ctx);
        goto after_13;
    // 0x430087F0: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    after_13:
L_430087F4:
    // 0x430087F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_430087F8:
    // 0x430087F8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x430087FC: jr          $ra
    // 0x43008800: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x43008800: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_enemy_battle_8804(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008804: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x43008808: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4300880C: lw          $t6, 0x180($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X180);
    // 0x43008810: lui         $t9, 0x4301
    ctx->r25 = S32(0X4301 << 16);
    // 0x43008814: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x43008818: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x4300881C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x43008820: lwc1        $f4, 0x220($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X220);
    // 0x43008824: addiu       $t8, $t7, 0x14
    ctx->r24 = ADD32(ctx->r15, 0X14);
    // 0x43008828: addiu       $t9, $t9, -0x6740
    ctx->r25 = ADD32(ctx->r25, -0X6740);
    // 0x4300882C: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x43008830: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    // 0x43008834: lwc1        $f8, 0x220($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X220);
    // 0x43008838: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x4300883C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x43008840: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x43008844: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x43008848: bc1t        L_430088A0
    if (c1cs) {
        // 0x4300884C: lui         $at, 0x4301
        ctx->r1 = S32(0X4301 << 16);
            goto L_430088A0;
    }
    // 0x4300884C: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43008850: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x43008854: sw          $a3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r7;
    // 0x43008858: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x4300885C: jal         0x430006C4
    // 0x43008860: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    ovl_enemy_battle_6C4(rdram, ctx);
        goto after_0;
    // 0x43008860: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    after_0:
    // 0x43008864: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x43008868: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x4300886C: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x43008870: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
    // 0x43008874: lwc1        $f16, 0x228($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X228);
    // 0x43008878: addiu       $t0, $v0, 0x4
    ctx->r8 = ADD32(ctx->r2, 0X4);
    // 0x4300887C: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x43008880: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    // 0x43008884: lwc1        $f18, 0x224($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X224);
    // 0x43008888: addiu       $a1, $zero, 0x1B
    ctx->r5 = ADD32(0, 0X1B);
    // 0x4300888C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x43008890: jal         0x43005218
    // 0x43008894: swc1        $f18, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f18.u32l;
    ovl_enemy_battle_5218(rdram, ctx);
        goto after_1;
    // 0x43008894: swc1        $f18, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f18.u32l;
    after_1:
    // 0x43008898: b           L_430088B0
    // 0x4300889C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_430088B0;
    // 0x4300889C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_430088A0:
    // 0x430088A0: lwc1        $f4, -0x69AC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X69AC);
    // 0x430088A4: nop

    // 0x430088A8: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
    // 0x430088AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_430088B0:
    // 0x430088B0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x430088B4: jr          $ra
    // 0x430088B8: nop

    return;
    // 0x430088B8: nop

;}
RECOMP_FUNC void ovl_enemy_battle_88BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430088BC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x430088C0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x430088C4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x430088C8: lw          $t6, 0x180($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X180);
    // 0x430088CC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x430088D0: beq         $v0, $t6, L_43008974
    if (ctx->r2 == ctx->r14) {
        // 0x430088D4: or          $s0, $a0, $zero
        ctx->r16 = ctx->r4 | 0;
            goto L_43008974;
    }
    // 0x430088D4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x430088D8: lw          $t7, 0x8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X8);
    // 0x430088DC: nop

    // 0x430088E0: beq         $v0, $t7, L_43008978
    if (ctx->r2 == ctx->r15) {
        // 0x430088E4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_43008978;
    }
    // 0x430088E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x430088E8: jal         0x43008804
    // 0x430088EC: nop

    ovl_enemy_battle_8804(rdram, ctx);
        goto after_0;
    // 0x430088EC: nop

    after_0:
    // 0x430088F0: jal         0x43003A60
    // 0x430088F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_battle_3A60(rdram, ctx);
        goto after_1;
    // 0x430088F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x430088F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430088FC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x43008900: jal         0x43008FF0
    // 0x43008904: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    ovl_enemy_battle_8FF0(rdram, ctx);
        goto after_2;
    // 0x43008904: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_2:
    // 0x43008908: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x4300890C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x43008910: beq         $v0, $at, L_4300892C
    if (ctx->r2 == ctx->r1) {
        // 0x43008914: addiu       $at, $zero, -0x1
        ctx->r1 = ADD32(0, -0X1);
            goto L_4300892C;
    }
    // 0x43008914: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x43008918: jal         0x43003880
    // 0x4300891C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_battle_3880(rdram, ctx);
        goto after_3;
    // 0x4300891C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x43008920: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x43008924: nop

    // 0x43008928: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_4300892C:
    // 0x4300892C: beq         $v0, $at, L_43008948
    if (ctx->r2 == ctx->r1) {
        // 0x43008930: addiu       $at, $zero, -0x1
        ctx->r1 = ADD32(0, -0X1);
            goto L_43008948;
    }
    // 0x43008930: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x43008934: jal         0x43008600
    // 0x43008938: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_battle_8600(rdram, ctx);
        goto after_4;
    // 0x43008938: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x4300893C: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x43008940: nop

    // 0x43008944: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
L_43008948:
    // 0x43008948: beq         $v0, $at, L_43008958
    if (ctx->r2 == ctx->r1) {
        // 0x4300894C: nop
    
            goto L_43008958;
    }
    // 0x4300894C: nop

    // 0x43008950: jal         0x43002E4C
    // 0x43008954: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_battle_2E4C(rdram, ctx);
        goto after_5;
    // 0x43008954: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
L_43008958:
    // 0x43008958: lw          $t8, 0x54($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X54);
    // 0x4300895C: nop

    // 0x43008960: andi        $t9, $t8, 0x10
    ctx->r25 = ctx->r24 & 0X10;
    // 0x43008964: beq         $t9, $zero, L_43008978
    if (ctx->r25 == 0) {
        // 0x43008968: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_43008978;
    }
    // 0x43008968: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4300896C: jal         0x43002D7C
    // 0x43008970: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_battle_2D7C(rdram, ctx);
        goto after_6;
    // 0x43008970: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
L_43008974:
    // 0x43008974: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43008978:
    // 0x43008978: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x4300897C: jr          $ra
    // 0x43008980: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x43008980: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_enemy_battle_8984(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008984: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x43008988: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x4300898C: lw          $v1, -0x674C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X674C);
    // 0x43008990: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x43008994: sltu        $at, $v0, $v1
    ctx->r1 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x43008998: beq         $at, $zero, L_430089DC
    if (ctx->r1 == 0) {
        // 0x4300899C: addiu       $t8, $zero, -0x1
        ctx->r24 = ADD32(0, -0X1);
            goto L_430089DC;
    }
    // 0x4300899C: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
L_430089A0:
    // 0x430089A0: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x430089A4: nop

    // 0x430089A8: beq         $a1, $t6, L_430089C8
    if (ctx->r5 == ctx->r14) {
        // 0x430089AC: nop
    
            goto L_430089C8;
    }
    // 0x430089AC: nop

    // 0x430089B0: lw          $t7, 0x8($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X8);
    // 0x430089B4: nop

    // 0x430089B8: beq         $a1, $t7, L_430089C8
    if (ctx->r5 == ctx->r15) {
        // 0x430089BC: nop
    
            goto L_430089C8;
    }
    // 0x430089BC: nop

    // 0x430089C0: jr          $ra
    // 0x430089C4: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    return;
    // 0x430089C4: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
L_430089C8:
    // 0x430089C8: addiu       $v0, $v0, 0x268
    ctx->r2 = ADD32(ctx->r2, 0X268);
    // 0x430089CC: sltu        $at, $v0, $v1
    ctx->r1 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x430089D0: bne         $at, $zero, L_430089A0
    if (ctx->r1 != 0) {
        // 0x430089D4: nop
    
            goto L_430089A0;
    }
    // 0x430089D4: nop

    // 0x430089D8: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
L_430089DC:
    // 0x430089DC: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x430089E0: jr          $ra
    // 0x430089E4: nop

    return;
    // 0x430089E4: nop

;}
RECOMP_FUNC void ovl_enemy_battle_89E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430089E8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x430089EC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x430089F0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x430089F4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x430089F8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x430089FC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x43008A00: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43008A04: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x43008A08: jal         0x43005250
    // 0x43008A0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_enemy_battle_5250(rdram, ctx);
        goto after_0;
    // 0x43008A0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x43008A10: lui         $s4, 0x4301
    ctx->r20 = S32(0X4301 << 16);
    // 0x43008A14: lw          $s4, -0x6760($s4)
    ctx->r20 = MEM_W(ctx->r20, -0X6760);
    // 0x43008A18: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x43008A1C: blez        $s4, L_43008AE0
    if (SIGNED(ctx->r20) <= 0) {
        // 0x43008A20: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_43008AE0;
    }
    // 0x43008A20: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x43008A24: addiu       $s3, $sp, 0x38
    ctx->r19 = ADD32(ctx->r29, 0X38);
    // 0x43008A28: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x43008A2C: addiu       $s1, $sp, 0x40
    ctx->r17 = ADD32(ctx->r29, 0X40);
L_43008A30:
    // 0x43008A30: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x43008A34: jal         0x43008984
    // 0x43008A38: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_enemy_battle_8984(rdram, ctx);
        goto after_1;
    // 0x43008A38: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x43008A3C: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x43008A40: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x43008A44: beq         $t6, $s2, L_43008AE0
    if (ctx->r14 == ctx->r18) {
        // 0x43008A48: or          $a0, $t6, $zero
        ctx->r4 = ctx->r14 | 0;
            goto L_43008AE0;
    }
    // 0x43008A48: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x43008A4C: jal         0x43005218
    // 0x43008A50: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    ovl_enemy_battle_5218(rdram, ctx);
        goto after_2;
    // 0x43008A50: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_2:
    // 0x43008A54: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x43008A58: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x43008A5C: lw          $v0, 0x0($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X0);
    // 0x43008A60: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x43008A64: andi        $t8, $v0, 0x4
    ctx->r24 = ctx->r2 & 0X4;
    // 0x43008A68: beq         $t8, $zero, L_43008A80
    if (ctx->r24 == 0) {
        // 0x43008A6C: andi        $t9, $v0, 0x1
        ctx->r25 = ctx->r2 & 0X1;
            goto L_43008A80;
    }
    // 0x43008A6C: andi        $t9, $v0, 0x1
    ctx->r25 = ctx->r2 & 0X1;
    // 0x43008A70: jal         0x43005218
    // 0x43008A74: ori         $a2, $zero, 0xFFFF
    ctx->r6 = 0 | 0XFFFF;
    ovl_enemy_battle_5218(rdram, ctx);
        goto after_3;
    // 0x43008A74: ori         $a2, $zero, 0xFFFF
    ctx->r6 = 0 | 0XFFFF;
    after_3:
    // 0x43008A78: b           L_43008AD8
    // 0x43008A7C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
        goto L_43008AD8;
    // 0x43008A7C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_43008A80:
    // 0x43008A80: beq         $t9, $zero, L_43008AC8
    if (ctx->r25 == 0) {
        // 0x43008A84: lw          $t6, 0x40($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X40);
            goto L_43008AC8;
    }
    // 0x43008A84: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x43008A88: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x43008A8C: nop

    // 0x43008A90: lw          $t1, 0x60($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X60);
    // 0x43008A94: nop

    // 0x43008A98: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x43008A9C: sw          $t2, 0x60($t0)
    MEM_W(0X60, ctx->r8) = ctx->r10;
    // 0x43008AA0: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x43008AA4: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x43008AA8: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x43008AAC: nop

    // 0x43008AB0: andi        $t5, $t4, 0x2
    ctx->r13 = ctx->r12 & 0X2;
    // 0x43008AB4: bne         $t5, $zero, L_43008AC8
    if (ctx->r13 != 0) {
        // 0x43008AB8: lw          $t6, 0x40($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X40);
            goto L_43008AC8;
    }
    // 0x43008AB8: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x43008ABC: jal         0x430088BC
    // 0x43008AC0: nop

    ovl_enemy_battle_88BC(rdram, ctx);
        goto after_4;
    // 0x43008AC0: nop

    after_4:
    // 0x43008AC4: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
L_43008AC8:
    // 0x43008AC8: nop

    // 0x43008ACC: addiu       $t7, $t6, 0x268
    ctx->r15 = ADD32(ctx->r14, 0X268);
    // 0x43008AD0: sw          $t7, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r15;
    // 0x43008AD4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_43008AD8:
    // 0x43008AD8: bne         $s0, $s4, L_43008A30
    if (ctx->r16 != ctx->r20) {
        // 0x43008ADC: nop
    
            goto L_43008A30;
    }
    // 0x43008ADC: nop

L_43008AE0:
    // 0x43008AE0: bne         $s4, $zero, L_43008AF4
    if (ctx->r20 != 0) {
        // 0x43008AE4: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_43008AF4;
    }
    // 0x43008AE4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x43008AE8: jal         0x43002C70
    // 0x43008AEC: nop

    ovl_enemy_battle_2C70(rdram, ctx);
        goto after_5;
    // 0x43008AEC: nop

    after_5:
    // 0x43008AF0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_43008AF4:
    // 0x43008AF4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43008AF8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x43008AFC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x43008B00: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x43008B04: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x43008B08: jr          $ra
    // 0x43008B0C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x43008B0C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_enemy_battle_8B10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008B10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43008B14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
L_43008B18:
    // 0x43008B18: jal         0x430089E8
    // 0x43008B1C: nop

    ovl_enemy_battle_89E8(rdram, ctx);
        goto after_0;
    // 0x43008B1C: nop

    after_0:
    // 0x43008B20: jal         0x4300085C
    // 0x43008B24: nop

    ovl_enemy_battle_85C(rdram, ctx);
        goto after_1;
    // 0x43008B24: nop

    after_1:
    // 0x43008B28: b           L_43008B18
    // 0x43008B2C: nop

        goto L_43008B18;
    // 0x43008B2C: nop

    // 0x43008B30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43008B34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43008B38: jr          $ra
    // 0x43008B3C: nop

    return;
    // 0x43008B3C: nop

;}
RECOMP_FUNC void ovl_enemy_battle_8B40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008B40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43008B44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43008B48: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x43008B4C: nop

    // 0x43008B50: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x43008B54: sltiu       $at, $t7, 0x18
    ctx->r1 = ctx->r15 < 0X18 ? 1 : 0;
    // 0x43008B58: beq         $at, $zero, L_43008C50
    if (ctx->r1 == 0) {
        // 0x43008B5C: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_43008C50;
    }
    // 0x43008B5C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x43008B60: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43008B64: addu        $at, $at, $t7
    gpr jr_addend_43008B70 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x43008B68: lw          $t7, -0x69A8($at)
    ctx->r15 = ADD32(ctx->r1, -0X69A8);
    // 0x43008B6C: nop

    // 0x43008B70: jr          $t7
    // 0x43008B74: nop

    switch (jr_addend_43008B70 >> 2) {
        case 0: goto L_43008B78; break;
        case 1: goto L_43008C50; break;
        case 2: goto L_43008C50; break;
        case 3: goto L_43008BC8; break;
        case 4: goto L_43008C50; break;
        case 5: goto L_43008B98; break;
        case 6: goto L_43008B88; break;
        case 7: goto L_43008BA8; break;
        case 8: goto L_43008C50; break;
        case 9: goto L_43008C50; break;
        case 10: goto L_43008BD8; break;
        case 11: goto L_43008C48; break;
        case 12: goto L_43008C50; break;
        case 13: goto L_43008C50; break;
        case 14: goto L_43008C50; break;
        case 15: goto L_43008C50; break;
        case 16: goto L_43008C18; break;
        case 17: goto L_43008C08; break;
        case 18: goto L_43008C50; break;
        case 19: goto L_43008C38; break;
        case 20: goto L_43008BB8; break;
        case 21: goto L_43008C28; break;
        case 22: goto L_43008BF8; break;
        case 23: goto L_43008BE8; break;
        default: switch_error(__func__, 0x43008B70, 0x43009658);
    }
    // 0x43008B74: nop

L_43008B78:
    // 0x43008B78: jal         0x4300528C
    // 0x43008B7C: nop

    ovl_enemy_battle_528C(rdram, ctx);
        goto after_0;
    // 0x43008B7C: nop

    after_0:
    // 0x43008B80: b           L_43008C54
    // 0x43008B84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008C54;
    // 0x43008B84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008B88:
    // 0x43008B88: jal         0x43005348
    // 0x43008B8C: nop

    ovl_enemy_battle_5348(rdram, ctx);
        goto after_1;
    // 0x43008B8C: nop

    after_1:
    // 0x43008B90: b           L_43008C54
    // 0x43008B94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008C54;
    // 0x43008B94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008B98:
    // 0x43008B98: jal         0x430053BC
    // 0x43008B9C: nop

    ovl_enemy_battle_53BC(rdram, ctx);
        goto after_2;
    // 0x43008B9C: nop

    after_2:
    // 0x43008BA0: b           L_43008C54
    // 0x43008BA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008C54;
    // 0x43008BA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008BA8:
    // 0x43008BA8: jal         0x43005400
    // 0x43008BAC: nop

    ovl_enemy_battle_5400(rdram, ctx);
        goto after_3;
    // 0x43008BAC: nop

    after_3:
    // 0x43008BB0: b           L_43008C54
    // 0x43008BB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008C54;
    // 0x43008BB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008BB8:
    // 0x43008BB8: jal         0x43005424
    // 0x43008BBC: nop

    ovl_enemy_battle_5424(rdram, ctx);
        goto after_4;
    // 0x43008BBC: nop

    after_4:
    // 0x43008BC0: b           L_43008C54
    // 0x43008BC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008C54;
    // 0x43008BC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008BC8:
    // 0x43008BC8: jal         0x4300547C
    // 0x43008BCC: nop

    ovl_enemy_battle_547C(rdram, ctx);
        goto after_5;
    // 0x43008BCC: nop

    after_5:
    // 0x43008BD0: b           L_43008C54
    // 0x43008BD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008C54;
    // 0x43008BD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008BD8:
    // 0x43008BD8: jal         0x43005924
    // 0x43008BDC: nop

    ovl_enemy_battle_5924(rdram, ctx);
        goto after_6;
    // 0x43008BDC: nop

    after_6:
    // 0x43008BE0: b           L_43008C54
    // 0x43008BE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008C54;
    // 0x43008BE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008BE8:
    // 0x43008BE8: jal         0x430062D8
    // 0x43008BEC: nop

    ovl_enemy_battle_62D8(rdram, ctx);
        goto after_7;
    // 0x43008BEC: nop

    after_7:
    // 0x43008BF0: b           L_43008C54
    // 0x43008BF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008C54;
    // 0x43008BF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008BF8:
    // 0x43008BF8: jal         0x43006368
    // 0x43008BFC: nop

    ovl_enemy_battle_6368(rdram, ctx);
        goto after_8;
    // 0x43008BFC: nop

    after_8:
    // 0x43008C00: b           L_43008C54
    // 0x43008C04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008C54;
    // 0x43008C04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008C08:
    // 0x43008C08: jal         0x430063CC
    // 0x43008C0C: nop

    ovl_enemy_battle_63CC(rdram, ctx);
        goto after_9;
    // 0x43008C0C: nop

    after_9:
    // 0x43008C10: b           L_43008C54
    // 0x43008C14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008C54;
    // 0x43008C14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008C18:
    // 0x43008C18: jal         0x43006448
    // 0x43008C1C: nop

    ovl_enemy_battle_6448(rdram, ctx);
        goto after_10;
    // 0x43008C1C: nop

    after_10:
    // 0x43008C20: b           L_43008C54
    // 0x43008C24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008C54;
    // 0x43008C24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008C28:
    // 0x43008C28: jal         0x43006488
    // 0x43008C2C: nop

    ovl_enemy_battle_6488(rdram, ctx);
        goto after_11;
    // 0x43008C2C: nop

    after_11:
    // 0x43008C30: b           L_43008C54
    // 0x43008C34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008C54;
    // 0x43008C34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008C38:
    // 0x43008C38: jal         0x430064EC
    // 0x43008C3C: nop

    ovl_enemy_battle_64EC(rdram, ctx);
        goto after_12;
    // 0x43008C3C: nop

    after_12:
    // 0x43008C40: b           L_43008C54
    // 0x43008C44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008C54;
    // 0x43008C44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008C48:
    // 0x43008C48: jal         0x430066D0
    // 0x43008C4C: nop

    ovl_enemy_battle_66D0(rdram, ctx);
        goto after_13;
    // 0x43008C4C: nop

    after_13:
L_43008C50:
    // 0x43008C50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008C54:
    // 0x43008C54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43008C58: jr          $ra
    // 0x43008C5C: nop

    return;
    // 0x43008C5C: nop

;}
RECOMP_FUNC void ovl_enemy_battle_8C60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008C60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43008C64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43008C68: lw          $t6, 0x54($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X54);
    // 0x43008C6C: nop

    // 0x43008C70: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x43008C74: bne         $t7, $zero, L_43008C8C
    if (ctx->r15 != 0) {
        // 0x43008C78: nop
    
            goto L_43008C8C;
    }
    // 0x43008C78: nop

    // 0x43008C7C: lw          $t8, 0x58($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X58);
    // 0x43008C80: addiu       $at, $zero, 0x25
    ctx->r1 = ADD32(0, 0X25);
    // 0x43008C84: bne         $t8, $at, L_43008CB4
    if (ctx->r24 != ctx->r1) {
        // 0x43008C88: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43008CB4;
    }
    // 0x43008C88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008C8C:
    // 0x43008C8C: jal         0x430014D8
    // 0x43008C90: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_enemy_battle_14D8(rdram, ctx);
        goto after_0;
    // 0x43008C90: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x43008C94: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43008C98: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43008C9C: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    // 0x43008CA0: swc1        $f0, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f0.u32l;
    // 0x43008CA4: swc1        $f0, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f0.u32l;
    // 0x43008CA8: jal         0x43005078
    // 0x43008CAC: swc1        $f0, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f0.u32l;
    ovl_enemy_battle_5078(rdram, ctx);
        goto after_1;
    // 0x43008CAC: swc1        $f0, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f0.u32l;
    after_1:
    // 0x43008CB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008CB4:
    // 0x43008CB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43008CB8: jr          $ra
    // 0x43008CBC: nop

    return;
    // 0x43008CBC: nop

;}
RECOMP_FUNC void ovl_enemy_battle_8CC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008CC0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x43008CC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43008CC8: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x43008CCC: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x43008CD0: jal         0x430006C4
    // 0x43008CD4: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    ovl_enemy_battle_6C4(rdram, ctx);
        goto after_0;
    // 0x43008CD4: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    after_0:
    // 0x43008CD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43008CDC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x43008CE0: jr          $ra
    // 0x43008CE4: nop

    return;
    // 0x43008CE4: nop

;}
RECOMP_FUNC void ovl_enemy_battle_8CE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008CE8: addiu       $t6, $a1, -0x4
    ctx->r14 = ADD32(ctx->r5, -0X4);
    // 0x43008CEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43008CF0: sltiu       $at, $t6, 0x12
    ctx->r1 = ctx->r14 < 0X12 ? 1 : 0;
    // 0x43008CF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43008CF8: beq         $at, $zero, L_43008D7C
    if (ctx->r1 == 0) {
        // 0x43008CFC: sw          $a2, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r6;
            goto L_43008D7C;
    }
    // 0x43008CFC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x43008D00: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x43008D04: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43008D08: addu        $at, $at, $t6
    gpr jr_addend_43008D14 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x43008D0C: lw          $t6, -0x6940($at)
    ctx->r14 = ADD32(ctx->r1, -0X6940);
    // 0x43008D10: nop

    // 0x43008D14: jr          $t6
    // 0x43008D18: nop

    switch (jr_addend_43008D14 >> 2) {
        case 0: goto L_43008D60; break;
        case 1: goto L_43008D7C; break;
        case 2: goto L_43008D7C; break;
        case 3: goto L_43008D7C; break;
        case 4: goto L_43008D7C; break;
        case 5: goto L_43008D7C; break;
        case 6: goto L_43008D7C; break;
        case 7: goto L_43008D7C; break;
        case 8: goto L_43008D7C; break;
        case 9: goto L_43008D7C; break;
        case 10: goto L_43008D2C; break;
        case 11: goto L_43008D50; break;
        case 12: goto L_43008D3C; break;
        case 13: goto L_43008D70; break;
        case 14: goto L_43008D7C; break;
        case 15: goto L_43008D1C; break;
        case 16: goto L_43008D7C; break;
        case 17: goto L_43008D60; break;
        default: switch_error(__func__, 0x43008D14, 0x430096C0);
    }
    // 0x43008D18: nop

L_43008D1C:
    // 0x43008D1C: jal         0x43008C60
    // 0x43008D20: nop

    ovl_enemy_battle_8C60(rdram, ctx);
        goto after_0;
    // 0x43008D20: nop

    after_0:
    // 0x43008D24: b           L_43008D80
    // 0x43008D28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008D80;
    // 0x43008D28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008D2C:
    // 0x43008D2C: jal         0x43008CC0
    // 0x43008D30: nop

    ovl_enemy_battle_8CC0(rdram, ctx);
        goto after_1;
    // 0x43008D30: nop

    after_1:
    // 0x43008D34: b           L_43008D80
    // 0x43008D38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008D80;
    // 0x43008D38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008D3C:
    // 0x43008D3C: lw          $t7, 0x54($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X54);
    // 0x43008D40: nop

    // 0x43008D44: ori         $t8, $t7, 0x800
    ctx->r24 = ctx->r15 | 0X800;
    // 0x43008D48: b           L_43008D7C
    // 0x43008D4C: sw          $t8, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r24;
        goto L_43008D7C;
    // 0x43008D4C: sw          $t8, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r24;
L_43008D50:
    // 0x43008D50: jal         0x43005078
    // 0x43008D54: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    ovl_enemy_battle_5078(rdram, ctx);
        goto after_2;
    // 0x43008D54: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    after_2:
    // 0x43008D58: b           L_43008D80
    // 0x43008D5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008D80;
    // 0x43008D5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008D60:
    // 0x43008D60: jal         0x43005078
    // 0x43008D64: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_battle_5078(rdram, ctx);
        goto after_3;
    // 0x43008D64: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x43008D68: b           L_43008D80
    // 0x43008D6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008D80;
    // 0x43008D6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008D70:
    // 0x43008D70: addiu       $a1, $zero, 0x35C
    ctx->r5 = ADD32(0, 0X35C);
    // 0x43008D74: jal         0x43001630
    // 0x43008D78: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_enemy_battle_1630(rdram, ctx);
        goto after_4;
    // 0x43008D78: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
L_43008D7C:
    // 0x43008D7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008D80:
    // 0x43008D80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43008D84: jr          $ra
    // 0x43008D88: nop

    return;
    // 0x43008D88: nop

;}
RECOMP_FUNC void ovl_enemy_battle_8D8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008D8C: addiu       $t6, $a1, -0x4
    ctx->r14 = ADD32(ctx->r5, -0X4);
    // 0x43008D90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43008D94: sltiu       $at, $t6, 0x12
    ctx->r1 = ctx->r14 < 0X12 ? 1 : 0;
    // 0x43008D98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43008D9C: beq         $at, $zero, L_43008E18
    if (ctx->r1 == 0) {
        // 0x43008DA0: sw          $a2, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r6;
            goto L_43008E18;
    }
    // 0x43008DA0: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x43008DA4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x43008DA8: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43008DAC: addu        $at, $at, $t6
    gpr jr_addend_43008DB8 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x43008DB0: lw          $t6, -0x68F8($at)
    ctx->r14 = ADD32(ctx->r1, -0X68F8);
    // 0x43008DB4: nop

    // 0x43008DB8: jr          $t6
    // 0x43008DBC: nop

    switch (jr_addend_43008DB8 >> 2) {
        case 0: goto L_43008E10; break;
        case 1: goto L_43008E18; break;
        case 2: goto L_43008E18; break;
        case 3: goto L_43008E18; break;
        case 4: goto L_43008E18; break;
        case 5: goto L_43008E18; break;
        case 6: goto L_43008E18; break;
        case 7: goto L_43008E18; break;
        case 8: goto L_43008E18; break;
        case 9: goto L_43008E18; break;
        case 10: goto L_43008DC0; break;
        case 11: goto L_43008E00; break;
        case 12: goto L_43008DD0; break;
        case 13: goto L_43008E18; break;
        case 14: goto L_43008E18; break;
        case 15: goto L_43008DE4; break;
        case 16: goto L_43008E18; break;
        case 17: goto L_43008E10; break;
        default: switch_error(__func__, 0x43008DB8, 0x43009708);
    }
    // 0x43008DBC: nop

L_43008DC0:
    // 0x43008DC0: jal         0x43008CC0
    // 0x43008DC4: nop

    ovl_enemy_battle_8CC0(rdram, ctx);
        goto after_0;
    // 0x43008DC4: nop

    after_0:
    // 0x43008DC8: b           L_43008E1C
    // 0x43008DCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008E1C;
    // 0x43008DCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008DD0:
    // 0x43008DD0: lw          $t7, 0x54($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X54);
    // 0x43008DD4: nop

    // 0x43008DD8: ori         $t8, $t7, 0x800
    ctx->r24 = ctx->r15 | 0X800;
    // 0x43008DDC: b           L_43008E18
    // 0x43008DE0: sw          $t8, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r24;
        goto L_43008E18;
    // 0x43008DE0: sw          $t8, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r24;
L_43008DE4:
    // 0x43008DE4: jal         0x43001F1C
    // 0x43008DE8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_enemy_battle_1F1C(rdram, ctx);
        goto after_1;
    // 0x43008DE8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x43008DEC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43008DF0: jal         0x43008C60
    // 0x43008DF4: nop

    ovl_enemy_battle_8C60(rdram, ctx);
        goto after_2;
    // 0x43008DF4: nop

    after_2:
    // 0x43008DF8: b           L_43008E1C
    // 0x43008DFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008E1C;
    // 0x43008DFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008E00:
    // 0x43008E00: jal         0x43005078
    // 0x43008E04: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    ovl_enemy_battle_5078(rdram, ctx);
        goto after_3;
    // 0x43008E04: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    after_3:
    // 0x43008E08: b           L_43008E1C
    // 0x43008E0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008E1C;
    // 0x43008E0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008E10:
    // 0x43008E10: jal         0x43005078
    // 0x43008E14: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_battle_5078(rdram, ctx);
        goto after_4;
    // 0x43008E14: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
L_43008E18:
    // 0x43008E18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008E1C:
    // 0x43008E1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43008E20: jr          $ra
    // 0x43008E24: nop

    return;
    // 0x43008E24: nop

;}
RECOMP_FUNC void ovl_enemy_battle_8E28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008E28: addiu       $t6, $a1, -0x4
    ctx->r14 = ADD32(ctx->r5, -0X4);
    // 0x43008E2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43008E30: sltiu       $at, $t6, 0x12
    ctx->r1 = ctx->r14 < 0X12 ? 1 : 0;
    // 0x43008E34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43008E38: beq         $at, $zero, L_43008EBC
    if (ctx->r1 == 0) {
        // 0x43008E3C: sw          $a2, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r6;
            goto L_43008EBC;
    }
    // 0x43008E3C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x43008E40: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x43008E44: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43008E48: addu        $at, $at, $t6
    gpr jr_addend_43008E54 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x43008E4C: lw          $t6, -0x68B0($at)
    ctx->r14 = ADD32(ctx->r1, -0X68B0);
    // 0x43008E50: nop

    // 0x43008E54: jr          $t6
    // 0x43008E58: nop

    switch (jr_addend_43008E54 >> 2) {
        case 0: goto L_43008EA0; break;
        case 1: goto L_43008EBC; break;
        case 2: goto L_43008EBC; break;
        case 3: goto L_43008EBC; break;
        case 4: goto L_43008EBC; break;
        case 5: goto L_43008EBC; break;
        case 6: goto L_43008EBC; break;
        case 7: goto L_43008EBC; break;
        case 8: goto L_43008EBC; break;
        case 9: goto L_43008EBC; break;
        case 10: goto L_43008E6C; break;
        case 11: goto L_43008E90; break;
        case 12: goto L_43008E7C; break;
        case 13: goto L_43008EB0; break;
        case 14: goto L_43008EBC; break;
        case 15: goto L_43008E5C; break;
        case 16: goto L_43008EBC; break;
        case 17: goto L_43008EA0; break;
        default: switch_error(__func__, 0x43008E54, 0x43009750);
    }
    // 0x43008E58: nop

L_43008E5C:
    // 0x43008E5C: jal         0x43008C60
    // 0x43008E60: nop

    ovl_enemy_battle_8C60(rdram, ctx);
        goto after_0;
    // 0x43008E60: nop

    after_0:
    // 0x43008E64: b           L_43008EC0
    // 0x43008E68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008EC0;
    // 0x43008E68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008E6C:
    // 0x43008E6C: jal         0x43008CC0
    // 0x43008E70: nop

    ovl_enemy_battle_8CC0(rdram, ctx);
        goto after_1;
    // 0x43008E70: nop

    after_1:
    // 0x43008E74: b           L_43008EC0
    // 0x43008E78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008EC0;
    // 0x43008E78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008E7C:
    // 0x43008E7C: lw          $t7, 0x54($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X54);
    // 0x43008E80: nop

    // 0x43008E84: ori         $t8, $t7, 0x800
    ctx->r24 = ctx->r15 | 0X800;
    // 0x43008E88: b           L_43008EBC
    // 0x43008E8C: sw          $t8, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r24;
        goto L_43008EBC;
    // 0x43008E8C: sw          $t8, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r24;
L_43008E90:
    // 0x43008E90: jal         0x43005078
    // 0x43008E94: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    ovl_enemy_battle_5078(rdram, ctx);
        goto after_2;
    // 0x43008E94: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    after_2:
    // 0x43008E98: b           L_43008EC0
    // 0x43008E9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008EC0;
    // 0x43008E9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008EA0:
    // 0x43008EA0: jal         0x43005078
    // 0x43008EA4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_battle_5078(rdram, ctx);
        goto after_3;
    // 0x43008EA4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x43008EA8: b           L_43008EC0
    // 0x43008EAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008EC0;
    // 0x43008EAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008EB0:
    // 0x43008EB0: addiu       $a1, $zero, 0x35D
    ctx->r5 = ADD32(0, 0X35D);
    // 0x43008EB4: jal         0x43001630
    // 0x43008EB8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_enemy_battle_1630(rdram, ctx);
        goto after_4;
    // 0x43008EB8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
L_43008EBC:
    // 0x43008EBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008EC0:
    // 0x43008EC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43008EC4: jr          $ra
    // 0x43008EC8: nop

    return;
    // 0x43008EC8: nop

;}
RECOMP_FUNC void ovl_enemy_battle_8ECC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008ECC: addiu       $t6, $a1, -0x4
    ctx->r14 = ADD32(ctx->r5, -0X4);
    // 0x43008ED0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43008ED4: sltiu       $at, $t6, 0x12
    ctx->r1 = ctx->r14 < 0X12 ? 1 : 0;
    // 0x43008ED8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43008EDC: beq         $at, $zero, L_43008F60
    if (ctx->r1 == 0) {
        // 0x43008EE0: sw          $a2, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r6;
            goto L_43008F60;
    }
    // 0x43008EE0: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x43008EE4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x43008EE8: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43008EEC: addu        $at, $at, $t6
    gpr jr_addend_43008EF8 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x43008EF0: lw          $t6, -0x6868($at)
    ctx->r14 = ADD32(ctx->r1, -0X6868);
    // 0x43008EF4: nop

    // 0x43008EF8: jr          $t6
    // 0x43008EFC: nop

    switch (jr_addend_43008EF8 >> 2) {
        case 0: goto L_43008F44; break;
        case 1: goto L_43008F60; break;
        case 2: goto L_43008F60; break;
        case 3: goto L_43008F60; break;
        case 4: goto L_43008F60; break;
        case 5: goto L_43008F60; break;
        case 6: goto L_43008F60; break;
        case 7: goto L_43008F60; break;
        case 8: goto L_43008F60; break;
        case 9: goto L_43008F60; break;
        case 10: goto L_43008F10; break;
        case 11: goto L_43008F34; break;
        case 12: goto L_43008F20; break;
        case 13: goto L_43008F54; break;
        case 14: goto L_43008F60; break;
        case 15: goto L_43008F00; break;
        case 16: goto L_43008F60; break;
        case 17: goto L_43008F44; break;
        default: switch_error(__func__, 0x43008EF8, 0x43009798);
    }
    // 0x43008EFC: nop

L_43008F00:
    // 0x43008F00: jal         0x43008C60
    // 0x43008F04: nop

    ovl_enemy_battle_8C60(rdram, ctx);
        goto after_0;
    // 0x43008F04: nop

    after_0:
    // 0x43008F08: b           L_43008F64
    // 0x43008F0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008F64;
    // 0x43008F0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008F10:
    // 0x43008F10: jal         0x43008CC0
    // 0x43008F14: nop

    ovl_enemy_battle_8CC0(rdram, ctx);
        goto after_1;
    // 0x43008F14: nop

    after_1:
    // 0x43008F18: b           L_43008F64
    // 0x43008F1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008F64;
    // 0x43008F1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008F20:
    // 0x43008F20: lw          $t7, 0x54($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X54);
    // 0x43008F24: nop

    // 0x43008F28: ori         $t8, $t7, 0x800
    ctx->r24 = ctx->r15 | 0X800;
    // 0x43008F2C: b           L_43008F60
    // 0x43008F30: sw          $t8, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r24;
        goto L_43008F60;
    // 0x43008F30: sw          $t8, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r24;
L_43008F34:
    // 0x43008F34: jal         0x43005078
    // 0x43008F38: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    ovl_enemy_battle_5078(rdram, ctx);
        goto after_2;
    // 0x43008F38: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    after_2:
    // 0x43008F3C: b           L_43008F64
    // 0x43008F40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008F64;
    // 0x43008F40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008F44:
    // 0x43008F44: jal         0x43005078
    // 0x43008F48: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_battle_5078(rdram, ctx);
        goto after_3;
    // 0x43008F48: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x43008F4C: b           L_43008F64
    // 0x43008F50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008F64;
    // 0x43008F50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008F54:
    // 0x43008F54: addiu       $a1, $zero, 0x35B
    ctx->r5 = ADD32(0, 0X35B);
    // 0x43008F58: jal         0x43001630
    // 0x43008F5C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_enemy_battle_1630(rdram, ctx);
        goto after_4;
    // 0x43008F5C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
L_43008F60:
    // 0x43008F60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008F64:
    // 0x43008F64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43008F68: jr          $ra
    // 0x43008F6C: nop

    return;
    // 0x43008F6C: nop

;}
RECOMP_FUNC void ovl_enemy_battle_8F70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008F70: addiu       $t6, $a1, -0x4
    ctx->r14 = ADD32(ctx->r5, -0X4);
    // 0x43008F74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43008F78: sltiu       $at, $t6, 0x12
    ctx->r1 = ctx->r14 < 0X12 ? 1 : 0;
    // 0x43008F7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43008F80: beq         $at, $zero, L_43008FE0
    if (ctx->r1 == 0) {
        // 0x43008F84: sw          $a2, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r6;
            goto L_43008FE0;
    }
    // 0x43008F84: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x43008F88: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x43008F8C: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43008F90: addu        $at, $at, $t6
    gpr jr_addend_43008F9C = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x43008F94: lw          $t6, -0x6820($at)
    ctx->r14 = ADD32(ctx->r1, -0X6820);
    // 0x43008F98: nop

    // 0x43008F9C: jr          $t6
    // 0x43008FA0: nop

    switch (jr_addend_43008F9C >> 2) {
        case 0: goto L_43008FD8; break;
        case 1: goto L_43008FE0; break;
        case 2: goto L_43008FE0; break;
        case 3: goto L_43008FE0; break;
        case 4: goto L_43008FE0; break;
        case 5: goto L_43008FE0; break;
        case 6: goto L_43008FE0; break;
        case 7: goto L_43008FE0; break;
        case 8: goto L_43008FE0; break;
        case 9: goto L_43008FE0; break;
        case 10: goto L_43008FE0; break;
        case 11: goto L_43008FC8; break;
        case 12: goto L_43008FB4; break;
        case 13: goto L_43008FE0; break;
        case 14: goto L_43008FE0; break;
        case 15: goto L_43008FA4; break;
        case 16: goto L_43008FE0; break;
        case 17: goto L_43008FD8; break;
        default: switch_error(__func__, 0x43008F9C, 0x430097E0);
    }
    // 0x43008FA0: nop

L_43008FA4:
    // 0x43008FA4: jal         0x43008C60
    // 0x43008FA8: nop

    ovl_enemy_battle_8C60(rdram, ctx);
        goto after_0;
    // 0x43008FA8: nop

    after_0:
    // 0x43008FAC: b           L_43008FE4
    // 0x43008FB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008FE4;
    // 0x43008FB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008FB4:
    // 0x43008FB4: lw          $t7, 0x54($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X54);
    // 0x43008FB8: nop

    // 0x43008FBC: ori         $t8, $t7, 0x800
    ctx->r24 = ctx->r15 | 0X800;
    // 0x43008FC0: b           L_43008FE0
    // 0x43008FC4: sw          $t8, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r24;
        goto L_43008FE0;
    // 0x43008FC4: sw          $t8, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r24;
L_43008FC8:
    // 0x43008FC8: jal         0x43005078
    // 0x43008FCC: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    ovl_enemy_battle_5078(rdram, ctx);
        goto after_1;
    // 0x43008FCC: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    after_1:
    // 0x43008FD0: b           L_43008FE4
    // 0x43008FD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008FE4;
    // 0x43008FD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008FD8:
    // 0x43008FD8: jal         0x43005078
    // 0x43008FDC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_battle_5078(rdram, ctx);
        goto after_2;
    // 0x43008FDC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
L_43008FE0:
    // 0x43008FE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008FE4:
    // 0x43008FE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43008FE8: jr          $ra
    // 0x43008FEC: nop

    return;
    // 0x43008FEC: nop

;}
