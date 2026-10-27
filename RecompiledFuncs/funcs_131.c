#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_boss_demon_52A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430052A0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x430052A4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x430052A8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x430052AC: lw          $t6, 0x20($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X20);
    // 0x430052B0: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x430052B4: beq         $t6, $zero, L_430052F0
    if (ctx->r14 == 0) {
        // 0x430052B8: swc1        $f12, 0x28($a0)
        MEM_W(0X28, ctx->r4) = ctx->f12.u32l;
            goto L_430052F0;
    }
    // 0x430052B8: swc1        $f12, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f12.u32l;
    // 0x430052BC: lui         $t7, 0x4301
    ctx->r15 = S32(0X4301 << 16);
    // 0x430052C0: lw          $t7, -0x57EC($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X57EC);
    // 0x430052C4: lw          $t8, 0x8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X8);
    // 0x430052C8: sw          $t7, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->r15;
    // 0x430052CC: bltz        $t8, L_430052F0
    if (SIGNED(ctx->r24) < 0) {
        // 0x430052D0: addiu       $a0, $zero, 0x1A
        ctx->r4 = ADD32(0, 0X1A);
            goto L_430052F0;
    }
    // 0x430052D0: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    // 0x430052D4: lw          $a1, 0x4($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X4);
    // 0x430052D8: lw          $a2, 0x18($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X18);
    // 0x430052DC: cvt.d.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.d = CVT_D_S(ctx->f12.fl);
    // 0x430052E0: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x430052E4: swc1        $f5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(5 - 1) * 2];
    // 0x430052E8: jal         0x43000DC0
    // 0x430052EC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    ovl_boss_demon_DC0(rdram, ctx);
        goto after_0;
    // 0x430052EC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_0:
L_430052F0:
    // 0x430052F0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x430052F4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x430052F8: jr          $ra
    // 0x430052FC: nop

    return;
    // 0x430052FC: nop

;}
RECOMP_FUNC void ovl_boss_demon_5300(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005300: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x43005304: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x43005308: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x4300530C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x43005310: lw          $t9, 0x80($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X80);
    // 0x43005314: nop

    // 0x43005318: jalr        $t9
    // 0x4300531C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x4300531C: nop

    after_0:
    // 0x43005320: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x43005324: lwc1        $f0, 0x2C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x43005328: lw          $t6, 0x20($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X20);
    // 0x4300532C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x43005330: bne         $t6, $at, L_43005364
    if (ctx->r14 != ctx->r1) {
        // 0x43005334: swc1        $f0, 0x2C($a3)
        MEM_W(0X2C, ctx->r7) = ctx->f0.u32l;
            goto L_43005364;
    }
    // 0x43005334: swc1        $f0, 0x2C($a3)
    MEM_W(0X2C, ctx->r7) = ctx->f0.u32l;
    // 0x43005338: lw          $t7, 0x8($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X8);
    // 0x4300533C: addiu       $a0, $zero, 0x1B
    ctx->r4 = ADD32(0, 0X1B);
    // 0x43005340: bltz        $t7, L_43005368
    if (SIGNED(ctx->r15) < 0) {
        // 0x43005344: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_43005368;
    }
    // 0x43005344: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43005348: lw          $a1, 0x4($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X4);
    // 0x4300534C: lw          $a2, 0x18($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X18);
    // 0x43005350: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x43005354: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x43005358: swc1        $f5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(5 - 1) * 2];
    // 0x4300535C: jal         0x43000DC0
    // 0x43005360: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    ovl_boss_demon_DC0(rdram, ctx);
        goto after_1;
    // 0x43005360: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_1:
L_43005364:
    // 0x43005364: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43005368:
    // 0x43005368: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x4300536C: jr          $ra
    // 0x43005370: nop

    return;
    // 0x43005370: nop

;}
RECOMP_FUNC void ovl_boss_demon_5374(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005374: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43005378: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4300537C: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x43005380: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x43005384: bne         $v0, $at, L_43005398
    if (ctx->r2 != ctx->r1) {
        // 0x43005388: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_43005398;
    }
    // 0x43005388: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4300538C: b           L_430053F0
    // 0x43005390: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_430053F0;
    // 0x43005390: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x43005394: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_43005398:
    // 0x43005398: bne         $v0, $at, L_430053F0
    if (ctx->r2 != ctx->r1) {
        // 0x4300539C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_430053F0;
    }
    // 0x4300539C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x430053A0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x430053A4: lw          $t9, 0x80($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X80);
    // 0x430053A8: nop

    // 0x430053AC: jalr        $t9
    // 0x430053B0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x430053B0: nop

    after_0:
    // 0x430053B4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x430053B8: nop

    // 0x430053BC: lw          $t7, 0x24($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X24);
    // 0x430053C0: lw          $t6, 0x30($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X30);
    // 0x430053C4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x430053C8: addu        $t0, $t6, $t8
    ctx->r8 = ADD32(ctx->r14, ctx->r24);
    // 0x430053CC: lwc1        $f4, 0x4($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X4);
    // 0x430053D0: nop

    // 0x430053D4: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x430053D8: nop

    // 0x430053DC: bc1f        L_430053F0
    if (!c1cs) {
        // 0x430053E0: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_430053F0;
    }
    // 0x430053E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x430053E4: b           L_430053F0
    // 0x430053E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_430053F0;
    // 0x430053E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x430053EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_430053F0:
    // 0x430053F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430053F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x430053F8: jr          $ra
    // 0x430053FC: nop

    return;
    // 0x430053FC: nop

;}
RECOMP_FUNC void ovl_boss_demon_5400(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005400: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43005404: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x43005408: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x4300540C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x43005410: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43005414: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x43005418: lhu         $a2, 0x26($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X26);
    // 0x4300541C: lw          $a1, 0x4($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X4);
    // 0x43005420: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x43005424: jal         0x43000DC0
    // 0x43005428: addiu       $a0, $zero, 0x2D
    ctx->r4 = ADD32(0, 0X2D);
    ovl_boss_demon_DC0(rdram, ctx);
        goto after_0;
    // 0x43005428: addiu       $a0, $zero, 0x2D
    ctx->r4 = ADD32(0, 0X2D);
    after_0:
    // 0x4300542C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43005430: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x43005434: jr          $ra
    // 0x43005438: nop

    return;
    // 0x43005438: nop

;}
RECOMP_FUNC void ovl_boss_demon_543C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300543C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43005440: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43005444: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x43005448: lw          $a1, 0x4($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X4);
    // 0x4300544C: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    // 0x43005450: jal         0x43000DC0
    // 0x43005454: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_boss_demon_DC0(rdram, ctx);
        goto after_0;
    // 0x43005454: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x43005458: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4300545C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43005460: jr          $ra
    // 0x43005464: nop

    return;
    // 0x43005464: nop

;}
RECOMP_FUNC void ovl_boss_demon_5468(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005468: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4300546C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x43005470: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x43005474: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x43005478: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x4300547C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43005480: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x43005484: lw          $a1, 0x4($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X4);
    // 0x43005488: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x4300548C: jal         0x43000DC0
    // 0x43005490: addiu       $a0, $zero, 0x2F
    ctx->r4 = ADD32(0, 0X2F);
    ovl_boss_demon_DC0(rdram, ctx);
        goto after_0;
    // 0x43005490: addiu       $a0, $zero, 0x2F
    ctx->r4 = ADD32(0, 0X2F);
    after_0:
    // 0x43005494: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43005498: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4300549C: jr          $ra
    // 0x430054A0: nop

    return;
    // 0x430054A0: nop

;}
RECOMP_FUNC void ovl_boss_demon_54A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430054A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x430054A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430054AC: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x430054B0: lw          $a1, 0x4($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X4);
    // 0x430054B4: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    // 0x430054B8: jal         0x43000DC0
    // 0x430054BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_boss_demon_DC0(rdram, ctx);
        goto after_0;
    // 0x430054BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x430054C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430054C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x430054C8: jr          $ra
    // 0x430054CC: nop

    return;
    // 0x430054CC: nop

;}
RECOMP_FUNC void ovl_boss_demon_54D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430054D0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x430054D4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x430054D8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x430054DC: lw          $t6, 0x34($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X34);
    // 0x430054E0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x430054E4: bne         $t6, $zero, L_4300551C
    if (ctx->r14 != 0) {
        // 0x430054E8: lui         $a0, 0x4300
        ctx->r4 = S32(0X4300 << 16);
            goto L_4300551C;
    }
    // 0x430054E8: lui         $a0, 0x4300
    ctx->r4 = S32(0X4300 << 16);
    // 0x430054EC: addiu       $a0, $a0, 0x5898
    ctx->r4 = ADD32(ctx->r4, 0X5898);
    // 0x430054F0: ori         $a1, $zero, 0xFECF
    ctx->r5 = 0 | 0XFECF;
    // 0x430054F4: addiu       $a2, $zero, 0x2000
    ctx->r6 = ADD32(0, 0X2000);
    // 0x430054F8: jal         0x43000820
    // 0x430054FC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_boss_demon_820(rdram, ctx);
        goto after_0;
    // 0x430054FC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x43005500: sw          $v0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r2;
    // 0x43005504: lui         $a0, 0x4300
    ctx->r4 = S32(0X4300 << 16);
    // 0x43005508: sw          $s0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r16;
    // 0x4300550C: addiu       $a0, $a0, 0x597C
    ctx->r4 = ADD32(ctx->r4, 0X597C);
    // 0x43005510: jal         0x43009CC0
    // 0x43005514: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_boss_demon_9CC0(rdram, ctx);
        goto after_1;
    // 0x43005514: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x43005518: sw          $v0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r2;
L_4300551C:
    // 0x4300551C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43005520: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43005524: jr          $ra
    // 0x43005528: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x43005528: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_boss_demon_552C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300552C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43005530: sll         $t6, $a1, 4
    ctx->r14 = S32(ctx->r5 << 4);
    // 0x43005534: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43005538: addu        $v0, $a0, $t6
    ctx->r2 = ADD32(ctx->r4, ctx->r14);
    // 0x4300553C: sw          $a2, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r6;
    // 0x43005540: sw          $a3, 0x40($v0)
    MEM_W(0X40, ctx->r2) = ctx->r7;
    // 0x43005544: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x43005548: nop

    // 0x4300554C: sw          $t7, 0x44($v0)
    MEM_W(0X44, ctx->r2) = ctx->r15;
    // 0x43005550: lh          $t8, 0x2E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X2E);
    // 0x43005554: sh          $zero, 0x4A($v0)
    MEM_H(0X4A, ctx->r2) = 0;
    // 0x43005558: jal         0x430054D0
    // 0x4300555C: sh          $t8, 0x48($v0)
    MEM_H(0X48, ctx->r2) = ctx->r24;
    ovl_boss_demon_54D0(rdram, ctx);
        goto after_0;
    // 0x4300555C: sh          $t8, 0x48($v0)
    MEM_H(0X48, ctx->r2) = ctx->r24;
    after_0:
    // 0x43005560: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43005564: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43005568: jr          $ra
    // 0x4300556C: nop

    return;
    // 0x4300556C: nop

;}
RECOMP_FUNC void ovl_boss_demon_5570(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005570: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x43005574: sll         $t7, $a1, 4
    ctx->r15 = S32(ctx->r5 << 4);
    // 0x43005578: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4300557C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x43005580: addu        $v1, $a0, $t7
    ctx->r3 = ADD32(ctx->r4, ctx->r15);
    // 0x43005584: lh          $v0, 0x40($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X40);
    // 0x43005588: lw          $t0, 0x44($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X44);
    // 0x4300558C: addiu       $at, $zero, -0x100
    ctx->r1 = ADD32(0, -0X100);
    // 0x43005590: sra         $t8, $v0, 4
    ctx->r24 = S32(SIGNED(ctx->r2) >> 4);
    // 0x43005594: andi        $t9, $t8, 0xFF
    ctx->r25 = ctx->r24 & 0XFF;
    // 0x43005598: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x4300559C: or          $t2, $t1, $t9
    ctx->r10 = ctx->r9 | ctx->r25;
    // 0x430055A0: sw          $t2, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r10;
    // 0x430055A4: lhu         $t3, 0x4A($v1)
    ctx->r11 = MEM_HU(ctx->r3, 0X4A);
    // 0x430055A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x430055AC: bne         $t3, $zero, L_4300564C
    if (ctx->r11 != 0) {
        // 0x430055B0: nop
    
            goto L_4300564C;
    }
    // 0x430055B0: nop

    // 0x430055B4: lw          $t4, 0x40($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X40);
    // 0x430055B8: addiu       $v0, $sp, 0x2C
    ctx->r2 = ADD32(ctx->r29, 0X2C);
    // 0x430055BC: sw          $t4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r12;
    // 0x430055C0: lh          $t5, 0x0($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X0);
    // 0x430055C4: lh          $t7, 0x2($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X2);
    // 0x430055C8: addiu       $t9, $zero, 0xFF0
    ctx->r25 = ADD32(0, 0XFF0);
    // 0x430055CC: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x430055D0: sh          $t8, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r24;
    // 0x430055D4: lh          $a0, 0x0($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X0);
    // 0x430055D8: nop

    // 0x430055DC: slti        $at, $a0, -0xFF0
    ctx->r1 = SIGNED(ctx->r4) < -0XFF0 ? 1 : 0;
    // 0x430055E0: beq         $at, $zero, L_430055F8
    if (ctx->r1 == 0) {
        // 0x430055E4: slti        $at, $a0, 0xFF1
        ctx->r1 = SIGNED(ctx->r4) < 0XFF1 ? 1 : 0;
            goto L_430055F8;
    }
    // 0x430055E4: slti        $at, $a0, 0xFF1
    ctx->r1 = SIGNED(ctx->r4) < 0XFF1 ? 1 : 0;
    // 0x430055E8: sh          $zero, 0x0($v0)
    MEM_H(0X0, ctx->r2) = 0;
    // 0x430055EC: lh          $a0, 0x0($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X0);
    // 0x430055F0: sh          $zero, 0x2($v0)
    MEM_H(0X2, ctx->r2) = 0;
    // 0x430055F4: slti        $at, $a0, 0xFF1
    ctx->r1 = SIGNED(ctx->r4) < 0XFF1 ? 1 : 0;
L_430055F8:
    // 0x430055F8: bne         $at, $zero, L_43005608
    if (ctx->r1 != 0) {
        // 0x430055FC: nop
    
            goto L_43005608;
    }
    // 0x430055FC: nop

    // 0x43005600: sh          $t9, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r25;
    // 0x43005604: sh          $zero, 0x2($v0)
    MEM_H(0X2, ctx->r2) = 0;
L_43005608:
    // 0x43005608: lh          $t1, 0x48($v1)
    ctx->r9 = MEM_H(ctx->r3, 0X48);
    // 0x4300560C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x43005610: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x43005614: sh          $t2, 0x48($v1)
    MEM_H(0X48, ctx->r3) = ctx->r10;
    // 0x43005618: lh          $t6, 0x48($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X48);
    // 0x4300561C: sw          $t0, 0x40($v1)
    MEM_W(0X40, ctx->r3) = ctx->r8;
    // 0x43005620: bne         $t6, $zero, L_43005644
    if (ctx->r14 != 0) {
        // 0x43005624: nop
    
            goto L_43005644;
    }
    // 0x43005624: nop

    // 0x43005628: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x4300562C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x43005630: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x43005634: lw          $t9, 0xA0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XA0);
    // 0x43005638: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x4300563C: jalr        $t9
    // 0x43005640: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43005640: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
L_43005644:
    // 0x43005644: b           L_4300564C
    // 0x43005648: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_4300564C;
    // 0x43005648: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_4300564C:
    // 0x4300564C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43005650: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x43005654: jr          $ra
    // 0x43005658: nop

    return;
    // 0x43005658: nop

;}
RECOMP_FUNC void ovl_boss_demon_565C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300565C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43005660: sll         $t6, $a1, 4
    ctx->r14 = S32(ctx->r5 << 4);
    // 0x43005664: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43005668: addu        $v0, $a0, $t6
    ctx->r2 = ADD32(ctx->r4, ctx->r14);
    // 0x4300566C: lw          $t7, 0x40($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X40);
    // 0x43005670: nop

    // 0x43005674: sw          $t7, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r15;
    // 0x43005678: lh          $t8, 0x48($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X48);
    // 0x4300567C: nop

    // 0x43005680: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x43005684: sh          $t9, 0x48($v0)
    MEM_H(0X48, ctx->r2) = ctx->r25;
    // 0x43005688: lh          $t0, 0x48($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X48);
    // 0x4300568C: nop

    // 0x43005690: bne         $t0, $zero, L_430056B4
    if (ctx->r8 != 0) {
        // 0x43005694: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_430056B4;
    }
    // 0x43005694: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43005698: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x4300569C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x430056A0: lw          $t9, 0xA0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XA0);
    // 0x430056A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x430056A8: jalr        $t9
    // 0x430056AC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x430056AC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x430056B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_430056B4:
    // 0x430056B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x430056B8: jr          $ra
    // 0x430056BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x430056BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void ovl_boss_demon_56C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430056C0: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x430056C4: subu        $v0, $t6, $a3
    ctx->r2 = SUB32(ctx->r14, ctx->r7);
    // 0x430056C8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x430056CC: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x430056D0: or          $t1, $a2, $zero
    ctx->r9 = ctx->r6 | 0;
    // 0x430056D4: or          $t2, $a1, $zero
    ctx->r10 = ctx->r5 | 0;
    // 0x430056D8: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
L_430056DC:
    // 0x430056DC: lbu         $t7, 0x0($t1)
    ctx->r15 = MEM_BU(ctx->r9, 0X0);
    // 0x430056E0: lbu         $t9, 0x0($t2)
    ctx->r25 = MEM_BU(ctx->r10, 0X0);
    // 0x430056E4: multu       $t7, $v0
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x430056E8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x430056EC: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x430056F0: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x430056F4: addiu       $t2, $t2, 0x1
    ctx->r10 = ADD32(ctx->r10, 0X1);
    // 0x430056F8: mflo        $t8
    ctx->r24 = lo;
    // 0x430056FC: nop

    // 0x43005700: nop

    // 0x43005704: multu       $t9, $a3
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x43005708: mflo        $t4
    ctx->r12 = lo;
    // 0x4300570C: addu        $t5, $t8, $t4
    ctx->r13 = ADD32(ctx->r24, ctx->r12);
    // 0x43005710: sra         $t6, $t5, 8
    ctx->r14 = S32(SIGNED(ctx->r13) >> 8);
    // 0x43005714: bne         $v1, $t3, L_430056DC
    if (ctx->r3 != ctx->r11) {
        // 0x43005718: sb          $t6, -0x1($t0)
        MEM_B(-0X1, ctx->r8) = ctx->r14;
            goto L_430056DC;
    }
    // 0x43005718: sb          $t6, -0x1($t0)
    MEM_B(-0X1, ctx->r8) = ctx->r14;
    // 0x4300571C: jr          $ra
    // 0x43005720: nop

    return;
    // 0x43005720: nop

;}
RECOMP_FUNC void ovl_boss_demon_5724(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005724: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x43005728: sll         $t8, $a1, 4
    ctx->r24 = S32(ctx->r5 << 4);
    // 0x4300572C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43005730: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x43005734: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x43005738: addu        $t0, $a0, $t8
    ctx->r8 = ADD32(ctx->r4, ctx->r24);
    // 0x4300573C: lw          $v0, 0x40($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X40);
    // 0x43005740: lui         $t1, 0x4301
    ctx->r9 = S32(0X4301 << 16);
    // 0x43005744: sra         $v1, $v0, 8
    ctx->r3 = S32(SIGNED(ctx->r2) >> 8);
    // 0x43005748: sll         $t9, $v1, 2
    ctx->r25 = S32(ctx->r3 << 2);
    // 0x4300574C: addiu       $t1, $t1, -0x5C04
    ctx->r9 = ADD32(ctx->r9, -0X5C04);
    // 0x43005750: addu        $a2, $t9, $t1
    ctx->r6 = ADD32(ctx->r25, ctx->r9);
    // 0x43005754: addiu       $a1, $a2, 0x4
    ctx->r5 = ADD32(ctx->r6, 0X4);
    // 0x43005758: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x4300575C: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x43005760: jal         0x430056C0
    // 0x43005764: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    ovl_boss_demon_56C0(rdram, ctx);
        goto after_0;
    // 0x43005764: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    after_0:
    // 0x43005768: addiu       $t2, $zero, 0x80
    ctx->r10 = ADD32(0, 0X80);
    // 0x4300576C: sb          $t2, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r10;
    // 0x43005770: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x43005774: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x43005778: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x4300577C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x43005780: sw          $t3, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r11;
    // 0x43005784: lhu         $t4, 0x4A($t0)
    ctx->r12 = MEM_HU(ctx->r8, 0X4A);
    // 0x43005788: addiu       $v1, $t0, 0x40
    ctx->r3 = ADD32(ctx->r8, 0X40);
    // 0x4300578C: bne         $t4, $zero, L_43005804
    if (ctx->r12 != 0) {
        // 0x43005790: nop
    
            goto L_43005804;
    }
    // 0x43005790: nop

    // 0x43005794: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x43005798: lw          $t7, 0x4($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X4);
    // 0x4300579C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x430057A0: addu        $v0, $t5, $t7
    ctx->r2 = ADD32(ctx->r13, ctx->r15);
    // 0x430057A4: slti        $at, $v0, 0x601
    ctx->r1 = SIGNED(ctx->r2) < 0X601 ? 1 : 0;
    // 0x430057A8: bne         $at, $zero, L_430057C4
    if (ctx->r1 != 0) {
        // 0x430057AC: sw          $v0, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r2;
            goto L_430057C4;
    }
    // 0x430057AC: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_430057B0:
    // 0x430057B0: addiu       $t8, $v0, -0x600
    ctx->r24 = ADD32(ctx->r2, -0X600);
    // 0x430057B4: slti        $at, $t8, 0x601
    ctx->r1 = SIGNED(ctx->r24) < 0X601 ? 1 : 0;
    // 0x430057B8: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x430057BC: beq         $at, $zero, L_430057B0
    if (ctx->r1 == 0) {
        // 0x430057C0: or          $v0, $t8, $zero
        ctx->r2 = ctx->r24 | 0;
            goto L_430057B0;
    }
    // 0x430057C0: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
L_430057C4:
    // 0x430057C4: lh          $t9, 0x48($t0)
    ctx->r25 = MEM_H(ctx->r8, 0X48);
    // 0x430057C8: nop

    // 0x430057CC: addiu       $t1, $t9, -0x1
    ctx->r9 = ADD32(ctx->r25, -0X1);
    // 0x430057D0: sh          $t1, 0x48($t0)
    MEM_H(0X48, ctx->r8) = ctx->r9;
    // 0x430057D4: lh          $t2, 0x48($t0)
    ctx->r10 = MEM_H(ctx->r8, 0X48);
    // 0x430057D8: nop

    // 0x430057DC: bne         $t2, $zero, L_430057FC
    if (ctx->r10 != 0) {
        // 0x430057E0: nop
    
            goto L_430057FC;
    }
    // 0x430057E0: nop

    // 0x430057E4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x430057E8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x430057EC: lw          $t9, 0xA0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XA0);
    // 0x430057F0: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x430057F4: jalr        $t9
    // 0x430057F8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x430057F8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
L_430057FC:
    // 0x430057FC: b           L_43005804
    // 0x43005800: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_43005804;
    // 0x43005800: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_43005804:
    // 0x43005804: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43005808: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x4300580C: jr          $ra
    // 0x43005810: nop

    return;
    // 0x43005810: nop

;}
RECOMP_FUNC void ovl_boss_demon_5814(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005814: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x43005818: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x4300581C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x43005820: lw          $t6, 0x34($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X34);
    // 0x43005824: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43005828: beq         $t6, $zero, L_4300588C
    if (ctx->r14 == 0) {
        // 0x4300582C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_4300588C;
    }
    // 0x4300582C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43005830: jal         0x43000868
    // 0x43005834: nop

    ovl_boss_demon_868(rdram, ctx);
        goto after_0;
    // 0x43005834: nop

    after_0:
    // 0x43005838: lw          $t7, 0x34($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X34);
    // 0x4300583C: nop

    // 0x43005840: beq         $v0, $t7, L_43005860
    if (ctx->r2 == ctx->r15) {
        // 0x43005844: nop
    
            goto L_43005860;
    }
    // 0x43005844: nop

    // 0x43005848: lw          $a0, 0x38($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X38);
    // 0x4300584C: jal         0x43009D18
    // 0x43005850: nop

    ovl_boss_demon_9D18(rdram, ctx);
        goto after_1;
    // 0x43005850: nop

    after_1:
    // 0x43005854: lw          $a0, 0x34($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X34);
    // 0x43005858: jal         0x4300082C
    // 0x4300585C: nop

    ovl_boss_demon_82C(rdram, ctx);
        goto after_2;
    // 0x4300585C: nop

    after_2:
L_43005860:
    // 0x43005860: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x43005864: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x43005868: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    // 0x4300586C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x43005870: jal         0x43000DC0
    // 0x43005874: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_boss_demon_DC0(rdram, ctx);
        goto after_3;
    // 0x43005874: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x43005878: sw          $zero, 0x34($s0)
    MEM_W(0X34, ctx->r16) = 0;
    // 0x4300587C: sw          $zero, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = 0;
    // 0x43005880: sw          $zero, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = 0;
    // 0x43005884: sw          $zero, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = 0;
    // 0x43005888: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4300588C:
    // 0x4300588C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x43005890: jr          $ra
    // 0x43005894: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x43005894: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_boss_demon_5898(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005898: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x4300589C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x430058A0: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x430058A4: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x430058A8: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x430058AC: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x430058B0: jal         0x43000868
    // 0x430058B4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    ovl_boss_demon_868(rdram, ctx);
        goto after_0;
    // 0x430058B4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    after_0:
    // 0x430058B8: lw          $s3, 0x1C($v0)
    ctx->r19 = MEM_W(ctx->r2, 0X1C);
    // 0x430058BC: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    // 0x430058C0: lw          $a1, 0x4($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X4);
    // 0x430058C4: lw          $a3, 0x6C($s3)
    ctx->r7 = MEM_W(ctx->r19, 0X6C);
    // 0x430058C8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x430058CC: jal         0x43000DC0
    // 0x430058D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_boss_demon_DC0(rdram, ctx);
        goto after_1;
    // 0x430058D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x430058D4: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x430058D8: addiu       $s4, $zero, 0x3
    ctx->r20 = ADD32(0, 0X3);
    // 0x430058DC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_430058E0:
    // 0x430058E0: or          $s1, $s3, $zero
    ctx->r17 = ctx->r19 | 0;
L_430058E4:
    // 0x430058E4: lw          $v0, 0x3C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X3C);
    // 0x430058E8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x430058EC: beq         $v0, $zero, L_430058FC
    if (ctx->r2 == 0) {
        // 0x430058F0: or          $a1, $s0, $zero
        ctx->r5 = ctx->r16 | 0;
            goto L_430058FC;
    }
    // 0x430058F0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x430058F4: jalr        $v0
    // 0x430058F8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x430058F8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    after_2:
L_430058FC:
    // 0x430058FC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x43005900: bne         $s0, $s4, L_430058E4
    if (ctx->r16 != ctx->r20) {
        // 0x43005904: addiu       $s1, $s1, 0x10
        ctx->r17 = ADD32(ctx->r17, 0X10);
            goto L_430058E4;
    }
    // 0x43005904: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    // 0x43005908: lw          $a1, 0x4($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X4);
    // 0x4300590C: lw          $a2, 0x6C($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X6C);
    // 0x43005910: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x43005914: addiu       $a0, $zero, 0x27
    ctx->r4 = ADD32(0, 0X27);
    // 0x43005918: addiu       $a3, $zero, 0x28
    ctx->r7 = ADD32(0, 0X28);
    // 0x4300591C: sw          $a1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r5;
    // 0x43005920: jal         0x43000DC0
    // 0x43005924: sw          $a2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r6;
    ovl_boss_demon_DC0(rdram, ctx);
        goto after_3;
    // 0x43005924: sw          $a2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r6;
    after_3:
    // 0x43005928: beq         $s2, $zero, L_43005940
    if (ctx->r18 == 0) {
        // 0x4300592C: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_43005940;
    }
    // 0x4300592C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x43005930: jal         0x43008B98
    // 0x43005934: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    ovl_boss_demon_8B98(rdram, ctx);
        goto after_4;
    // 0x43005934: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    after_4:
    // 0x43005938: b           L_430058E0
    // 0x4300593C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
        goto L_430058E0;
    // 0x4300593C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_43005940:
    // 0x43005940: lw          $a0, 0x38($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X38);
    // 0x43005944: jal         0x43009D18
    // 0x43005948: nop

    ovl_boss_demon_9D18(rdram, ctx);
        goto after_5;
    // 0x43005948: nop

    after_5:
    // 0x4300594C: jal         0x43005814
    // 0x43005950: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    ovl_boss_demon_5814(rdram, ctx);
        goto after_6;
    // 0x43005950: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_6:
    // 0x43005954: jal         0x43000838
    // 0x43005958: nop

    ovl_boss_demon_838(rdram, ctx);
        goto after_7;
    // 0x43005958: nop

    after_7:
    // 0x4300595C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x43005960: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x43005964: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x43005968: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x4300596C: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x43005970: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x43005974: jr          $ra
    // 0x43005978: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x43005978: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_boss_demon_597C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300597C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43005980: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43005984: jal         0x43005814
    // 0x43005988: nop

    ovl_boss_demon_5814(rdram, ctx);
        goto after_0;
    // 0x43005988: nop

    after_0:
    // 0x4300598C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43005990: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43005994: jr          $ra
    // 0x43005998: nop

    return;
    // 0x43005998: nop

;}
RECOMP_FUNC void ovl_boss_demon_599C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300599C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x430059A0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x430059A4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x430059A8: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x430059AC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x430059B0: sw          $a1, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r5;
    // 0x430059B4: lw          $t9, 0x74($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X74);
    // 0x430059B8: nop

    // 0x430059BC: jalr        $t9
    // 0x430059C0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x430059C0: nop

    after_0:
    // 0x430059C4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x430059C8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x430059CC: sw          $t6, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r14;
    // 0x430059D0: lui         $t7, 0x4301
    ctx->r15 = S32(0X4301 << 16);
    // 0x430059D4: swc1        $f4, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f4.u32l;
    // 0x430059D8: lw          $t7, -0x57EC($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X57EC);
    // 0x430059DC: lw          $t8, 0x24($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X24);
    // 0x430059E0: sw          $t7, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->r15;
    // 0x430059E4: bltz        $t8, L_43005A10
    if (SIGNED(ctx->r24) < 0) {
        // 0x430059E8: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_43005A10;
    }
    // 0x430059E8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x430059EC: lw          $t0, 0x8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X8);
    // 0x430059F0: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x430059F4: bltz        $t0, L_43005A0C
    if (SIGNED(ctx->r8) < 0) {
        // 0x430059F8: addiu       $a0, $zero, 0xB
        ctx->r4 = ADD32(0, 0XB);
            goto L_43005A0C;
    }
    // 0x430059F8: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    // 0x430059FC: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x43005A00: lw          $a2, 0x18($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X18);
    // 0x43005A04: jal         0x43000DC0
    // 0x43005A08: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_boss_demon_DC0(rdram, ctx);
        goto after_1;
    // 0x43005A08: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
L_43005A0C:
    // 0x43005A0C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43005A10:
    // 0x43005A10: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x43005A14: jr          $ra
    // 0x43005A18: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x43005A18: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_boss_demon_5A1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005A1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43005A20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43005A24: lw          $t6, 0x20($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X20);
    // 0x43005A28: nop

    // 0x43005A2C: beq         $t6, $zero, L_43005A70
    if (ctx->r14 == 0) {
        // 0x43005A30: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43005A70;
    }
    // 0x43005A30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43005A34: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x43005A38: lw          $t9, 0x80($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X80);
    // 0x43005A3C: nop

    // 0x43005A40: jalr        $t9
    // 0x43005A44: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43005A44: nop

    after_0:
    // 0x43005A48: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43005A4C: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x43005A50: lw          $t9, 0x74($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X74);
    // 0x43005A54: nop

    // 0x43005A58: jalr        $t9
    // 0x43005A5C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x43005A5C: nop

    after_1:
    // 0x43005A60: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43005A64: nop

    // 0x43005A68: sw          $zero, 0x20($a0)
    MEM_W(0X20, ctx->r4) = 0;
    // 0x43005A6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43005A70:
    // 0x43005A70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43005A74: jr          $ra
    // 0x43005A78: nop

    return;
    // 0x43005A78: nop

;}
RECOMP_FUNC void ovl_boss_demon_5A7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005A7C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x43005A80: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x43005A84: lw          $t6, 0x20($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X20);
    // 0x43005A88: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x43005A8C: bne         $t6, $at, L_43005AE0
    if (ctx->r14 != ctx->r1) {
        // 0x43005A90: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_43005AE0;
    }
    // 0x43005A90: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x43005A94: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    // 0x43005A98: lw          $t9, 0x80($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X80);
    // 0x43005A9C: nop

    // 0x43005AA0: jalr        $t9
    // 0x43005AA4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43005AA4: nop

    after_0:
    // 0x43005AA8: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x43005AAC: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x43005AB0: lw          $t8, 0x8($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X8);
    // 0x43005AB4: addiu       $a0, $zero, 0x1B
    ctx->r4 = ADD32(0, 0X1B);
    // 0x43005AB8: bltz        $t8, L_43005AE0
    if (SIGNED(ctx->r24) < 0) {
        // 0x43005ABC: sw          $t7, 0x20($a3)
        MEM_W(0X20, ctx->r7) = ctx->r15;
            goto L_43005AE0;
    }
    // 0x43005ABC: sw          $t7, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->r15;
    // 0x43005AC0: lw          $a1, 0x4($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X4);
    // 0x43005AC4: lw          $a2, 0x18($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X18);
    // 0x43005AC8: mtc1        $zero, $f5
    ctx->f_odd[(5 - 1) * 2] = 0;
    // 0x43005ACC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x43005AD0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x43005AD4: swc1        $f5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(5 - 1) * 2];
    // 0x43005AD8: jal         0x43000DC0
    // 0x43005ADC: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    ovl_boss_demon_DC0(rdram, ctx);
        goto after_1;
    // 0x43005ADC: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_1:
L_43005AE0:
    // 0x43005AE0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43005AE4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x43005AE8: jr          $ra
    // 0x43005AEC: nop

    return;
    // 0x43005AEC: nop

;}
RECOMP_FUNC void ovl_boss_demon_5AF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005AF0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x43005AF4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x43005AF8: lw          $t6, 0x20($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X20);
    // 0x43005AFC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x43005B00: bne         $t6, $at, L_43005B48
    if (ctx->r14 != ctx->r1) {
        // 0x43005B04: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_43005B48;
    }
    // 0x43005B04: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x43005B08: lui         $t7, 0x4301
    ctx->r15 = S32(0X4301 << 16);
    // 0x43005B0C: lw          $t7, -0x57EC($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X57EC);
    // 0x43005B10: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x43005B14: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x43005B18: sw          $t8, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r24;
    // 0x43005B1C: bltz        $t9, L_43005B48
    if (SIGNED(ctx->r25) < 0) {
        // 0x43005B20: sw          $t7, 0x70($a0)
        MEM_W(0X70, ctx->r4) = ctx->r15;
            goto L_43005B48;
    }
    // 0x43005B20: sw          $t7, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->r15;
    // 0x43005B24: lwc1        $f4, 0x2C($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X2C);
    // 0x43005B28: lw          $a1, 0x4($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X4);
    // 0x43005B2C: lw          $a2, 0x18($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X18);
    // 0x43005B30: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x43005B34: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x43005B38: swc1        $f7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(7 - 1) * 2];
    // 0x43005B3C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x43005B40: jal         0x43000DC0
    // 0x43005B44: addiu       $a0, $zero, 0x1B
    ctx->r4 = ADD32(0, 0X1B);
    ovl_boss_demon_DC0(rdram, ctx);
        goto after_0;
    // 0x43005B44: addiu       $a0, $zero, 0x1B
    ctx->r4 = ADD32(0, 0X1B);
    after_0:
L_43005B48:
    // 0x43005B48: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43005B4C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x43005B50: jr          $ra
    // 0x43005B54: nop

    return;
    // 0x43005B54: nop

;}
RECOMP_FUNC void ovl_boss_demon_5B58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005B58: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43005B5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43005B60: lw          $t6, 0x20($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X20);
    // 0x43005B64: nop

    // 0x43005B68: beq         $t6, $zero, L_43005B84
    if (ctx->r14 == 0) {
        // 0x43005B6C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43005B84;
    }
    // 0x43005B6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43005B70: lw          $t9, 0x84($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X84);
    // 0x43005B74: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x43005B78: jalr        $t9
    // 0x43005B7C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43005B7C: nop

    after_0:
    // 0x43005B80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43005B84:
    // 0x43005B84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43005B88: jr          $ra
    // 0x43005B8C: nop

    return;
    // 0x43005B8C: nop

;}
RECOMP_FUNC void ovl_boss_demon_5B90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005B90: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x43005B94: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x43005B98: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x43005B9C: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x43005BA0: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x43005BA4: lw          $t6, 0x20($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X20);
    // 0x43005BA8: mtc1        $a1, $f20
    ctx->f20.u32l = ctx->r5;
    // 0x43005BAC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x43005BB0: bne         $t6, $at, L_43005BF8
    if (ctx->r14 != ctx->r1) {
        // 0x43005BB4: or          $s0, $a0, $zero
        ctx->r16 = ctx->r4 | 0;
            goto L_43005BF8;
    }
    // 0x43005BB4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43005BB8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x43005BBC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x43005BC0: nop

    // 0x43005BC4: sub.s       $f20, $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f4.fl;
    // 0x43005BC8: lw          $t9, 0x80($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X80);
L_43005BCC:
    // 0x43005BCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43005BD0: jalr        $t9
    // 0x43005BD4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43005BD4: nop

    after_0:
    // 0x43005BD8: c.lt.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl < ctx->f0.fl;
    // 0x43005BDC: nop

    // 0x43005BE0: bc1t        L_43005BFC
    if (c1cs) {
        // 0x43005BE4: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_43005BFC;
    }
    // 0x43005BE4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43005BE8: jal         0x43008B98
    // 0x43005BEC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_boss_demon_8B98(rdram, ctx);
        goto after_1;
    // 0x43005BEC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x43005BF0: b           L_43005BCC
    // 0x43005BF4: lw          $t9, 0x80($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X80);
        goto L_43005BCC;
    // 0x43005BF4: lw          $t9, 0x80($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X80);
L_43005BF8:
    // 0x43005BF8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43005BFC:
    // 0x43005BFC: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x43005C00: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x43005C04: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x43005C08: jr          $ra
    // 0x43005C0C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x43005C0C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_boss_demon_5C10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005C10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43005C14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43005C18: lw          $t7, 0x24($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X24);
    // 0x43005C1C: lw          $t6, 0x30($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X30);
    // 0x43005C20: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x43005C24: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x43005C28: lw          $a1, 0x4($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X4);
    // 0x43005C2C: lw          $t9, 0xB8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XB8);
    // 0x43005C30: nop

    // 0x43005C34: jalr        $t9
    // 0x43005C38: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43005C38: nop

    after_0:
    // 0x43005C3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43005C40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43005C44: jr          $ra
    // 0x43005C48: nop

    return;
    // 0x43005C48: nop

;}
RECOMP_FUNC void ovl_boss_demon_5C4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005C4C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43005C50: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43005C54: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43005C58: jal         0x43005814
    // 0x43005C5C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    ovl_boss_demon_5814(rdram, ctx);
        goto after_0;
    // 0x43005C5C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x43005C60: lw          $t9, 0xA8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XA8);
    // 0x43005C64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43005C68: jalr        $t9
    // 0x43005C6C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x43005C6C: nop

    after_1:
    // 0x43005C70: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x43005C74: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x43005C78: jal         0x43000DC0
    // 0x43005C7C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_boss_demon_DC0(rdram, ctx);
        goto after_2;
    // 0x43005C7C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x43005C80: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x43005C84: jal         0x43009C7C
    // 0x43005C88: nop

    ovl_boss_demon_9C7C(rdram, ctx);
        goto after_3;
    // 0x43005C88: nop

    after_3:
    // 0x43005C8C: lw          $t6, 0x8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X8);
    // 0x43005C90: nop

    // 0x43005C94: bltz        $t6, L_43005CA8
    if (SIGNED(ctx->r14) < 0) {
        // 0x43005C98: nop
    
            goto L_43005CA8;
    }
    // 0x43005C98: nop

    // 0x43005C9C: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x43005CA0: jal         0x43009C7C
    // 0x43005CA4: nop

    ovl_boss_demon_9C7C(rdram, ctx);
        goto after_4;
    // 0x43005CA4: nop

    after_4:
L_43005CA8:
    // 0x43005CA8: lw          $t7, 0xC($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC);
    // 0x43005CAC: nop

    // 0x43005CB0: bltz        $t7, L_43005CC4
    if (SIGNED(ctx->r15) < 0) {
        // 0x43005CB4: nop
    
            goto L_43005CC4;
    }
    // 0x43005CB4: nop

    // 0x43005CB8: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x43005CBC: jal         0x43009C7C
    // 0x43005CC0: nop

    ovl_boss_demon_9C7C(rdram, ctx);
        goto after_5;
    // 0x43005CC0: nop

    after_5:
L_43005CC4:
    // 0x43005CC4: jal         0x430000F4
    // 0x43005CC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_boss_demon_F4(rdram, ctx);
        goto after_6;
    // 0x43005CC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x43005CCC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43005CD0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43005CD4: jr          $ra
    // 0x43005CD8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x43005CD8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_boss_demon_5CDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005CDC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x43005CE0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x43005CE4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x43005CE8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x43005CEC: jal         0x430000E8
    // 0x43005CF0: addiu       $a0, $zero, 0xC4
    ctx->r4 = ADD32(0, 0XC4);
    ovl_boss_demon_E8(rdram, ctx);
        goto after_0;
    // 0x43005CF0: addiu       $a0, $zero, 0xC4
    ctx->r4 = ADD32(0, 0XC4);
    after_0:
    // 0x43005CF4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x43005CF8: jal         0x43009C50
    // 0x43005CFC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    ovl_boss_demon_9C50(rdram, ctx);
        goto after_1;
    // 0x43005CFC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_1:
    // 0x43005D00: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x43005D04: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x43005D08: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x43005D0C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x43005D10: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x43005D14: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x43005D18: jal         0x43000DC0
    // 0x43005D1C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_boss_demon_DC0(rdram, ctx);
        goto after_2;
    // 0x43005D1C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x43005D20: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x43005D24: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    // 0x43005D28: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x43005D2C: jal         0x43000DC0
    // 0x43005D30: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_boss_demon_DC0(rdram, ctx);
        goto after_3;
    // 0x43005D30: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x43005D34: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x43005D38: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x43005D3C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x43005D40: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x43005D44: lui         $t6, 0x4301
    ctx->r14 = S32(0X4301 << 16);
    // 0x43005D48: addiu       $t6, $t6, -0x5C30
    ctx->r14 = ADD32(ctx->r14, -0X5C30);
    // 0x43005D4C: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x43005D50: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x43005D54: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x43005D58: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x43005D5C: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x43005D60: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x43005D64: sw          $zero, 0x20($s0)
    MEM_W(0X20, ctx->r16) = 0;
    // 0x43005D68: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    // 0x43005D6C: sw          $t6, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r14;
    // 0x43005D70: sw          $zero, 0x34($s0)
    MEM_W(0X34, ctx->r16) = 0;
    // 0x43005D74: sw          $zero, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = 0;
    // 0x43005D78: sw          $zero, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = 0;
    // 0x43005D7C: sw          $zero, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = 0;
    // 0x43005D80: lui         $t7, 0x4301
    ctx->r15 = S32(0X4301 << 16);
    // 0x43005D84: swc1        $f4, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f4.u32l;
    // 0x43005D88: swc1        $f6, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f6.u32l;
    // 0x43005D8C: lw          $t7, -0x57EC($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X57EC);
    // 0x43005D90: lui         $t8, 0x4300
    ctx->r24 = S32(0X4300 << 16);
    // 0x43005D94: sw          $t7, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->r15;
    // 0x43005D98: lui         $t9, 0x4300
    ctx->r25 = S32(0X4300 << 16);
    // 0x43005D9C: lui         $t0, 0x4300
    ctx->r8 = S32(0X4300 << 16);
    // 0x43005DA0: lui         $t1, 0x4300
    ctx->r9 = S32(0X4300 << 16);
    // 0x43005DA4: lui         $t2, 0x4300
    ctx->r10 = S32(0X4300 << 16);
    // 0x43005DA8: lui         $t3, 0x4300
    ctx->r11 = S32(0X4300 << 16);
    // 0x43005DAC: lui         $t4, 0x4300
    ctx->r12 = S32(0X4300 << 16);
    // 0x43005DB0: lui         $t5, 0x4300
    ctx->r13 = S32(0X4300 << 16);
    // 0x43005DB4: lui         $t6, 0x4300
    ctx->r14 = S32(0X4300 << 16);
    // 0x43005DB8: lui         $t7, 0x4300
    ctx->r15 = S32(0X4300 << 16);
    // 0x43005DBC: addiu       $t8, $t8, 0x5190
    ctx->r24 = ADD32(ctx->r24, 0X5190);
    // 0x43005DC0: addiu       $t9, $t9, 0x519C
    ctx->r25 = ADD32(ctx->r25, 0X519C);
    // 0x43005DC4: addiu       $t0, $t0, 0x51D0
    ctx->r8 = ADD32(ctx->r8, 0X51D0);
    // 0x43005DC8: addiu       $t1, $t1, 0x5234
    ctx->r9 = ADD32(ctx->r9, 0X5234);
    // 0x43005DCC: addiu       $t2, $t2, 0x52A0
    ctx->r10 = ADD32(ctx->r10, 0X52A0);
    // 0x43005DD0: addiu       $t3, $t3, 0x5300
    ctx->r11 = ADD32(ctx->r11, 0X5300);
    // 0x43005DD4: addiu       $t4, $t4, 0x5374
    ctx->r12 = ADD32(ctx->r12, 0X5374);
    // 0x43005DD8: addiu       $t5, $t5, 0x5400
    ctx->r13 = ADD32(ctx->r13, 0X5400);
    // 0x43005DDC: addiu       $t6, $t6, 0x543C
    ctx->r14 = ADD32(ctx->r14, 0X543C);
    // 0x43005DE0: addiu       $t7, $t7, 0x5468
    ctx->r15 = ADD32(ctx->r15, 0X5468);
    // 0x43005DE4: sw          $t8, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->r24;
    // 0x43005DE8: sw          $t9, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r25;
    // 0x43005DEC: sw          $t0, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r8;
    // 0x43005DF0: sw          $t1, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r9;
    // 0x43005DF4: sw          $t2, 0x84($s0)
    MEM_W(0X84, ctx->r16) = ctx->r10;
    // 0x43005DF8: sw          $t3, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->r11;
    // 0x43005DFC: sw          $t4, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r12;
    // 0x43005E00: sw          $t5, 0x90($s0)
    MEM_W(0X90, ctx->r16) = ctx->r13;
    // 0x43005E04: sw          $t6, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->r14;
    // 0x43005E08: sw          $t7, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->r15;
    // 0x43005E0C: lui         $t8, 0x4300
    ctx->r24 = S32(0X4300 << 16);
    // 0x43005E10: lui         $t9, 0x4300
    ctx->r25 = S32(0X4300 << 16);
    // 0x43005E14: lui         $t0, 0x4300
    ctx->r8 = S32(0X4300 << 16);
    // 0x43005E18: lui         $t1, 0x4300
    ctx->r9 = S32(0X4300 << 16);
    // 0x43005E1C: lui         $t2, 0x4300
    ctx->r10 = S32(0X4300 << 16);
    // 0x43005E20: lui         $t3, 0x4300
    ctx->r11 = S32(0X4300 << 16);
    // 0x43005E24: lui         $t4, 0x4300
    ctx->r12 = S32(0X4300 << 16);
    // 0x43005E28: lui         $t5, 0x4300
    ctx->r13 = S32(0X4300 << 16);
    // 0x43005E2C: lui         $t6, 0x4300
    ctx->r14 = S32(0X4300 << 16);
    // 0x43005E30: lui         $t7, 0x4300
    ctx->r15 = S32(0X4300 << 16);
    // 0x43005E34: addiu       $t8, $t8, 0x54A4
    ctx->r24 = ADD32(ctx->r24, 0X54A4);
    // 0x43005E38: addiu       $t9, $t9, 0x552C
    ctx->r25 = ADD32(ctx->r25, 0X552C);
    // 0x43005E3C: addiu       $t0, $t0, 0x599C
    ctx->r8 = ADD32(ctx->r8, 0X599C);
    // 0x43005E40: addiu       $t1, $t1, 0x5A1C
    ctx->r9 = ADD32(ctx->r9, 0X5A1C);
    // 0x43005E44: addiu       $t2, $t2, 0x5A7C
    ctx->r10 = ADD32(ctx->r10, 0X5A7C);
    // 0x43005E48: addiu       $t3, $t3, 0x5AF0
    ctx->r11 = ADD32(ctx->r11, 0X5AF0);
    // 0x43005E4C: addiu       $t4, $t4, 0x5B58
    ctx->r12 = ADD32(ctx->r12, 0X5B58);
    // 0x43005E50: addiu       $t5, $t5, 0x5B90
    ctx->r13 = ADD32(ctx->r13, 0X5B90);
    // 0x43005E54: addiu       $t6, $t6, 0x5C10
    ctx->r14 = ADD32(ctx->r14, 0X5C10);
    // 0x43005E58: addiu       $t7, $t7, 0x5C4C
    ctx->r15 = ADD32(ctx->r15, 0X5C4C);
    // 0x43005E5C: sw          $t8, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = ctx->r24;
    // 0x43005E60: sw          $t9, 0xA0($s0)
    MEM_W(0XA0, ctx->r16) = ctx->r25;
    // 0x43005E64: sw          $t0, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r8;
    // 0x43005E68: sw          $t1, 0xA8($s0)
    MEM_W(0XA8, ctx->r16) = ctx->r9;
    // 0x43005E6C: sw          $t2, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->r10;
    // 0x43005E70: sw          $t3, 0xB0($s0)
    MEM_W(0XB0, ctx->r16) = ctx->r11;
    // 0x43005E74: sw          $t4, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r12;
    // 0x43005E78: sw          $t5, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->r13;
    // 0x43005E7C: sw          $t6, 0xBC($s0)
    MEM_W(0XBC, ctx->r16) = ctx->r14;
    // 0x43005E80: sw          $t7, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = ctx->r15;
    // 0x43005E84: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43005E88: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x43005E8C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x43005E90: jr          $ra
    // 0x43005E94: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x43005E94: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_boss_demon_5E98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005E98: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x43005E9C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43005EA0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x43005EA4: beq         $a3, $zero, L_43005EB8
    if (ctx->r7 == 0) {
        // 0x43005EA8: sw          $a2, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r6;
            goto L_43005EB8;
    }
    // 0x43005EA8: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x43005EAC: addiu       $v1, $sp, 0x24
    ctx->r3 = ADD32(ctx->r29, 0X24);
    // 0x43005EB0: b           L_43005EC4
    // 0x43005EB4: sh          $zero, 0x0($v1)
    MEM_H(0X0, ctx->r3) = 0;
        goto L_43005EC4;
    // 0x43005EB4: sh          $zero, 0x0($v1)
    MEM_H(0X0, ctx->r3) = 0;
L_43005EB8:
    // 0x43005EB8: addiu       $v1, $sp, 0x24
    ctx->r3 = ADD32(ctx->r29, 0X24);
    // 0x43005EBC: addiu       $t6, $zero, 0xFF0
    ctx->r14 = ADD32(0, 0XFF0);
    // 0x43005EC0: sh          $t6, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r14;
L_43005EC4:
    // 0x43005EC4: beq         $a3, $zero, L_43005ED4
    if (ctx->r7 == 0) {
        // 0x43005EC8: addiu       $v0, $zero, -0xFF
        ctx->r2 = ADD32(0, -0XFF);
            goto L_43005ED4;
    }
    // 0x43005EC8: addiu       $v0, $zero, -0xFF
    ctx->r2 = ADD32(0, -0XFF);
    // 0x43005ECC: b           L_43005ED4
    // 0x43005ED0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
        goto L_43005ED4;
    // 0x43005ED0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_43005ED4:
    // 0x43005ED4: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x43005ED8: sll         $t7, $v0, 4
    ctx->r15 = S32(ctx->r2 << 4);
    // 0x43005EDC: div         $zero, $t7, $t8
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r24))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r24)));
    // 0x43005EE0: lui         $a2, 0x4300
    ctx->r6 = S32(0X4300 << 16);
    // 0x43005EE4: bne         $t8, $zero, L_43005EF0
    if (ctx->r24 != 0) {
        // 0x43005EE8: nop
    
            goto L_43005EF0;
    }
    // 0x43005EE8: nop

    // 0x43005EEC: break       7
    do_break(1124097772);
L_43005EF0:
    // 0x43005EF0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x43005EF4: bne         $t8, $at, L_43005F08
    if (ctx->r24 != ctx->r1) {
        // 0x43005EF8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_43005F08;
    }
    // 0x43005EF8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x43005EFC: bne         $t7, $at, L_43005F08
    if (ctx->r15 != ctx->r1) {
        // 0x43005F00: nop
    
            goto L_43005F08;
    }
    // 0x43005F00: nop

    // 0x43005F04: break       6
    do_break(1124097796);
L_43005F08:
    // 0x43005F08: addiu       $a2, $a2, 0x5570
    ctx->r6 = ADD32(ctx->r6, 0X5570);
    // 0x43005F0C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x43005F10: mflo        $t9
    ctx->r25 = lo;
    // 0x43005F14: sh          $t9, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r25;
    // 0x43005F18: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x43005F1C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x43005F20: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x43005F24: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x43005F28: lw          $t9, 0xA0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XA0);
    // 0x43005F2C: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x43005F30: jalr        $t9
    // 0x43005F34: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43005F34: nop

    after_0:
    // 0x43005F38: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x43005F3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43005F40: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43005F44: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x43005F48: jr          $ra
    // 0x43005F4C: sw          $t2, -0x5490($at)
    MEM_W(-0X5490, ctx->r1) = ctx->r10;
    return;
    // 0x43005F4C: sw          $t2, -0x5490($at)
    MEM_W(-0X5490, ctx->r1) = ctx->r10;
;}
RECOMP_FUNC void ovl_boss_demon_5F50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005F50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43005F54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43005F58: jal         0x43005E98
    // 0x43005F5C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    ovl_boss_demon_5E98(rdram, ctx);
        goto after_0;
    // 0x43005F5C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x43005F60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43005F64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43005F68: jr          $ra
    // 0x43005F6C: nop

    return;
    // 0x43005F6C: nop

;}
RECOMP_FUNC void ovl_boss_demon_5F70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005F70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43005F74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43005F78: jal         0x43005E98
    // 0x43005F7C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_boss_demon_5E98(rdram, ctx);
        goto after_0;
    // 0x43005F7C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x43005F80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43005F84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43005F88: jr          $ra
    // 0x43005F8C: nop

    return;
    // 0x43005F8C: nop

;}
RECOMP_FUNC void ovl_boss_demon_5F90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005F90: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x43005F94: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x43005F98: addiu       $v0, $v0, -0x5490
    ctx->r2 = ADD32(ctx->r2, -0X5490);
    // 0x43005F9C: sh          $t6, 0x5A($a0)
    MEM_H(0X5A, ctx->r4) = ctx->r14;
    // 0x43005FA0: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x43005FA4: lh          $t8, 0x58($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X58);
    // 0x43005FA8: nop

    // 0x43005FAC: subu        $t9, $t7, $t8
    ctx->r25 = SUB32(ctx->r15, ctx->r24);
    // 0x43005FB0: jr          $ra
    // 0x43005FB4: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    return;
    // 0x43005FB4: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
;}
RECOMP_FUNC void ovl_boss_demon_5FB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005FB8: jr          $ra
    // 0x43005FBC: sh          $zero, 0x5A($a0)
    MEM_H(0X5A, ctx->r4) = 0;
    return;
    // 0x43005FBC: sh          $zero, 0x5A($a0)
    MEM_H(0X5A, ctx->r4) = 0;
;}
RECOMP_FUNC void ovl_boss_demon_5FC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005FC0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x43005FC4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x43005FC8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x43005FCC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x43005FD0: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x43005FD4: or          $s2, $a3, $zero
    ctx->r18 = ctx->r7 | 0;
    // 0x43005FD8: jal         0x43005F50
    // 0x43005FDC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    ovl_boss_demon_5F50(rdram, ctx);
        goto after_0;
    // 0x43005FDC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x43005FE0: blez        $s2, L_43006004
    if (SIGNED(ctx->r18) <= 0) {
        // 0x43005FE4: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_43006004;
    }
    // 0x43005FE4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_43005FE8:
    // 0x43005FE8: lw          $t9, 0x4C($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X4C);
    // 0x43005FEC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x43005FF0: jalr        $t9
    // 0x43005FF4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x43005FF4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x43005FF8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x43005FFC: bne         $s0, $s2, L_43005FE8
    if (ctx->r16 != ctx->r18) {
        // 0x43006000: nop
    
            goto L_43005FE8;
    }
    // 0x43006000: nop

L_43006004:
    // 0x43006004: jal         0x43005F90
    // 0x43006008: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_boss_demon_5F90(rdram, ctx);
        goto after_2;
    // 0x43006008: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x4300600C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43006010: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43006014: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x43006018: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x4300601C: jr          $ra
    // 0x43006020: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x43006020: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_boss_demon_6024(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006024: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43006028: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4300602C: lw          $t6, 0x50($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X50);
    // 0x43006030: addiu       $v0, $sp, 0x1C
    ctx->r2 = ADD32(ctx->r29, 0X1C);
    // 0x43006034: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x43006038: lh          $t7, 0x2($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X2);
    // 0x4300603C: lui         $t0, 0x4301
    ctx->r8 = S32(0X4301 << 16);
    // 0x43006040: negu        $t8, $t7
    ctx->r24 = SUB32(0, ctx->r15);
    // 0x43006044: sh          $t8, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r24;
    // 0x43006048: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x4300604C: nop

    // 0x43006050: sw          $t9, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->r25;
    // 0x43006054: lw          $t0, -0x5490($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X5490);
    // 0x43006058: jal         0x43005FB8
    // 0x4300605C: sh          $t0, 0x58($a0)
    MEM_H(0X58, ctx->r4) = ctx->r8;
    ovl_boss_demon_5FB8(rdram, ctx);
        goto after_0;
    // 0x4300605C: sh          $t0, 0x58($a0)
    MEM_H(0X58, ctx->r4) = ctx->r8;
    after_0:
    // 0x43006060: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43006064: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x43006068: jr          $ra
    // 0x4300606C: nop

    return;
    // 0x4300606C: nop

;}
RECOMP_FUNC void ovl_boss_demon_6070(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006070: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43006074: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43006078: jal         0x43005814
    // 0x4300607C: nop

    ovl_boss_demon_5814(rdram, ctx);
        goto after_0;
    // 0x4300607C: nop

    after_0:
    // 0x43006080: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43006084: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43006088: jr          $ra
    // 0x4300608C: nop

    return;
    // 0x4300608C: nop

;}
RECOMP_FUNC void ovl_boss_demon_6090(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006090: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43006094: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x43006098: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x4300609C: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x430060A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x430060A4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x430060A8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x430060AC: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x430060B0: lw          $t9, 0xA0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XA0);
    // 0x430060B4: lui         $a2, 0x4300
    ctx->r6 = S32(0X4300 << 16);
    // 0x430060B8: addiu       $a2, $a2, 0x5724
    ctx->r6 = ADD32(ctx->r6, 0X5724);
    // 0x430060BC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x430060C0: jalr        $t9
    // 0x430060C4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x430060C4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x430060C8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x430060CC: addiu       $at, $zero, -0x100
    ctx->r1 = ADD32(0, -0X100);
    // 0x430060D0: lw          $t8, 0x6C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X6C);
    // 0x430060D4: nop

    // 0x430060D8: and         $t0, $t8, $at
    ctx->r8 = ctx->r24 & ctx->r1;
    // 0x430060DC: ori         $t1, $t0, 0x80
    ctx->r9 = ctx->r8 | 0X80;
    // 0x430060E0: sw          $t1, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r9;
    // 0x430060E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x430060E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x430060EC: jr          $ra
    // 0x430060F0: nop

    return;
    // 0x430060F0: nop

;}
RECOMP_FUNC void ovl_boss_demon_60F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430060F4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x430060F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x430060FC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x43006100: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x43006104: lw          $t9, 0xA0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XA0);
    // 0x43006108: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x4300610C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x43006110: jalr        $t9
    // 0x43006114: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43006114: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x43006118: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4300611C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x43006120: jr          $ra
    // 0x43006124: nop

    return;
    // 0x43006124: nop

;}
RECOMP_FUNC void ovl_boss_demon_6128(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006128: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4300612C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x43006130: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x43006134: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43006138: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x4300613C: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x43006140: lw          $t9, 0xA0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XA0);
    // 0x43006144: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x43006148: lui         $a2, 0x4300
    ctx->r6 = S32(0X4300 << 16);
    // 0x4300614C: addiu       $a2, $a2, 0x565C
    ctx->r6 = ADD32(ctx->r6, 0X565C);
    // 0x43006150: jalr        $t9
    // 0x43006154: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43006154: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x43006158: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4300615C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x43006160: jr          $ra
    // 0x43006164: nop

    return;
    // 0x43006164: nop

    // 0x43006168: nop

    // 0x4300616C: nop

;}
RECOMP_FUNC void ovl_boss_demon_6170(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006170: jr          $ra
    // 0x43006174: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x43006174: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void ovl_boss_demon_6178(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006178: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x4300617C: jr          $ra
    // 0x43006180: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x43006180: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void ovl_boss_demon_6184(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006184: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43006188: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4300618C: jal         0x43000868
    // 0x43006190: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    ovl_boss_demon_868(rdram, ctx);
        goto after_0;
    // 0x43006190: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x43006194: lw          $s0, 0x1C($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X1C);
    // 0x43006198: nop

    // 0x4300619C: lw          $t9, 0x30($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X30);
L_430061A0:
    // 0x430061A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430061A4: jalr        $t9
    // 0x430061A8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x430061A8: nop

    after_1:
    // 0x430061AC: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x430061B0: nop

    // 0x430061B4: blez        $v0, L_430061C4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x430061B8: addiu       $t6, $v0, -0x1
        ctx->r14 = ADD32(ctx->r2, -0X1);
            goto L_430061C4;
    }
    // 0x430061B8: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x430061BC: sw          $t6, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r14;
    // 0x430061C0: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
L_430061C4:
    // 0x430061C4: bne         $v0, $zero, L_430061E4
    if (ctx->r2 != 0) {
        // 0x430061C8: nop
    
            goto L_430061E4;
    }
    // 0x430061C8: nop

    // 0x430061CC: lw          $t9, 0x34($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X34);
    // 0x430061D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430061D4: jalr        $t9
    // 0x430061D8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x430061D8: nop

    after_2:
    // 0x430061DC: bne         $v0, $zero, L_430061F4
    if (ctx->r2 != 0) {
        // 0x430061E0: nop
    
            goto L_430061F4;
    }
    // 0x430061E0: nop

L_430061E4:
    // 0x430061E4: jal         0x43008B98
    // 0x430061E8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_boss_demon_8B98(rdram, ctx);
        goto after_3;
    // 0x430061E8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x430061EC: b           L_430061A0
    // 0x430061F0: lw          $t9, 0x30($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X30);
        goto L_430061A0;
    // 0x430061F0: lw          $t9, 0x30($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X30);
L_430061F4:
    // 0x430061F4: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    // 0x430061F8: jal         0x43009D18
    // 0x430061FC: nop

    ovl_boss_demon_9D18(rdram, ctx);
        goto after_4;
    // 0x430061FC: nop

    after_4:
    // 0x43006200: lw          $t9, 0x54($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X54);
    // 0x43006204: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43006208: jalr        $t9
    // 0x4300620C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x4300620C: nop

    after_5:
    // 0x43006210: jal         0x43000838
    // 0x43006214: nop

    ovl_boss_demon_838(rdram, ctx);
        goto after_6;
    // 0x43006214: nop

    after_6:
    // 0x43006218: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4300621C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43006220: jr          $ra
    // 0x43006224: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x43006224: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_boss_demon_6228(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006228: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4300622C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43006230: lw          $t9, 0x54($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X54);
    // 0x43006234: nop

    // 0x43006238: jalr        $t9
    // 0x4300623C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x4300623C: nop

    after_0:
    // 0x43006240: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43006244: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43006248: jr          $ra
    // 0x4300624C: nop

    return;
    // 0x4300624C: nop

;}
RECOMP_FUNC void ovl_boss_demon_6250(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006250: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x43006254: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x43006258: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x4300625C: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x43006260: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43006264: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x43006268: sw          $t6, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r14;
    // 0x4300626C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x43006270: jal         0x43009C50
    // 0x43006274: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    ovl_boss_demon_9C50(rdram, ctx);
        goto after_0;
    // 0x43006274: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_0:
    // 0x43006278: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x4300627C: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x43006280: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
    // 0x43006284: addu        $t8, $s0, $t7
    ctx->r24 = ADD32(ctx->r16, ctx->r15);
    // 0x43006288: bne         $v1, $zero, L_430062AC
    if (ctx->r3 != 0) {
        // 0x4300628C: sw          $v0, 0x4($t8)
        MEM_W(0X4, ctx->r24) = ctx->r2;
            goto L_430062AC;
    }
    // 0x4300628C: sw          $v0, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r2;
    // 0x43006290: lw          $a2, 0x18($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X18);
    // 0x43006294: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x43006298: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x4300629C: jal         0x43000DC0
    // 0x430062A0: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    ovl_boss_demon_DC0(rdram, ctx);
        goto after_1;
    // 0x430062A0: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    after_1:
    // 0x430062A4: b           L_430062C4
    // 0x430062A8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_430062C4;
    // 0x430062A8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_430062AC:
    // 0x430062AC: lw          $a1, 0x18($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X18);
    // 0x430062B0: lw          $a2, 0x1C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1C);
    // 0x430062B4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x430062B8: jal         0x43000DC0
    // 0x430062BC: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    ovl_boss_demon_DC0(rdram, ctx);
        goto after_2;
    // 0x430062BC: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    after_2:
    // 0x430062C0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_430062C4:
    // 0x430062C4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x430062C8: jr          $ra
    // 0x430062CC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x430062CC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_boss_demon_62D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430062D0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x430062D4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x430062D8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x430062DC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x430062E0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x430062E4: lw          $t6, 0x14($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X14);
    // 0x430062E8: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x430062EC: blez        $t6, L_43006318
    if (SIGNED(ctx->r14) <= 0) {
        // 0x430062F0: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_43006318;
    }
    // 0x430062F0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x430062F4: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
L_430062F8:
    // 0x430062F8: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x430062FC: jal         0x43009C7C
    // 0x43006300: nop

    ovl_boss_demon_9C7C(rdram, ctx);
        goto after_0;
    // 0x43006300: nop

    after_0:
    // 0x43006304: lw          $t7, 0x14($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X14);
    // 0x43006308: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x4300630C: slt         $at, $s0, $t7
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x43006310: bne         $at, $zero, L_430062F8
    if (ctx->r1 != 0) {
        // 0x43006314: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_430062F8;
    }
    // 0x43006314: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_43006318:
    // 0x43006318: sw          $zero, 0x14($s2)
    MEM_W(0X14, ctx->r18) = 0;
    // 0x4300631C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43006320: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x43006324: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x43006328: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x4300632C: jr          $ra
    // 0x43006330: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x43006330: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_boss_demon_6334(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006334: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43006338: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4300633C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43006340: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x43006344: lw          $t6, 0x14($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X14);
    // 0x43006348: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4300634C: beq         $t6, $zero, L_4300636C
    if (ctx->r14 == 0) {
        // 0x43006350: addiu       $a0, $zero, 0x7
        ctx->r4 = ADD32(0, 0X7);
            goto L_4300636C;
    }
    // 0x43006350: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x43006354: lw          $a1, 0x18($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X18);
    // 0x43006358: lw          $a2, 0x1C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1C);
    // 0x4300635C: jal         0x43000DC0
    // 0x43006360: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_boss_demon_DC0(rdram, ctx);
        goto after_0;
    // 0x43006360: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x43006364: jal         0x430062D0
    // 0x43006368: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_boss_demon_62D0(rdram, ctx);
        goto after_1;
    // 0x43006368: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
L_4300636C:
    // 0x4300636C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x43006370: jal         0x43006250
    // 0x43006374: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_boss_demon_6250(rdram, ctx);
        goto after_2;
    // 0x43006374: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x43006378: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4300637C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43006380: jr          $ra
    // 0x43006384: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x43006384: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_boss_demon_6388(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006388: bne         $a1, $zero, L_43006398
    if (ctx->r5 != 0) {
        // 0x4300638C: nop
    
            goto L_43006398;
    }
    // 0x4300638C: nop

    // 0x43006390: lui         $a1, 0x4300
    ctx->r5 = S32(0X4300 << 16);
    // 0x43006394: addiu       $a1, $a1, 0x6178
    ctx->r5 = ADD32(ctx->r5, 0X6178);
L_43006398:
    // 0x43006398: jr          $ra
    // 0x4300639C: sw          $a1, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->r5;
    return;
    // 0x4300639C: sw          $a1, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void ovl_boss_demon_63A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430063A0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x430063A4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x430063A8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x430063AC: lw          $t7, 0x14($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X14);
    // 0x430063B0: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x430063B4: beq         $t7, $zero, L_430063D0
    if (ctx->r15 == 0) {
        // 0x430063B8: or          $t6, $a0, $zero
        ctx->r14 = ctx->r4 | 0;
            goto L_430063D0;
    }
    // 0x430063B8: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x430063BC: lw          $a1, 0x18($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X18);
    // 0x430063C0: lw          $a2, 0x1C($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X1C);
    // 0x430063C4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x430063C8: jal         0x43000DC0
    // 0x430063CC: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    ovl_boss_demon_DC0(rdram, ctx);
        goto after_0;
    // 0x430063CC: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_0:
L_430063D0:
    // 0x430063D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x430063D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x430063D8: jr          $ra
    // 0x430063DC: nop

    return;
    // 0x430063DC: nop

;}
RECOMP_FUNC void ovl_boss_demon_63E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430063E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x430063E4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x430063E8: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x430063EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430063F0: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x430063F4: lw          $a1, 0x18($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X18);
    // 0x430063F8: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x430063FC: jal         0x43000DC0
    // 0x43006400: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_boss_demon_DC0(rdram, ctx);
        goto after_0;
    // 0x43006400: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x43006404: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43006408: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4300640C: jr          $ra
    // 0x43006410: nop

    return;
    // 0x43006410: nop

;}
RECOMP_FUNC void ovl_boss_demon_6414(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006414: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x43006418: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x4300641C: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x43006420: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x43006424: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x43006428: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x4300642C: lw          $a1, 0x18($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X18);
    // 0x43006430: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x43006434: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x43006438: cvt.d.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.d = CVT_D_S(ctx->f12.fl);
    // 0x4300643C: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x43006440: mfc1        $a2, $f5
    ctx->r6 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x43006444: cvt.d.s     $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f6.d = CVT_D_S(ctx->f14.fl);
    // 0x43006448: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x4300644C: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x43006450: swc1        $f11, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(11 - 1) * 2];
    // 0x43006454: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x43006458: swc1        $f7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(7 - 1) * 2];
    // 0x4300645C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x43006460: jal         0x43000DC0
    // 0x43006464: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    ovl_boss_demon_DC0(rdram, ctx);
        goto after_0;
    // 0x43006464: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_0:
    // 0x43006468: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x4300646C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x43006470: jr          $ra
    // 0x43006474: nop

    return;
    // 0x43006474: nop

;}
RECOMP_FUNC void ovl_boss_demon_6478(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006478: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x4300647C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x43006480: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x43006484: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x43006488: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x4300648C: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x43006490: lw          $a1, 0x18($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X18);
    // 0x43006494: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x43006498: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x4300649C: cvt.d.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.d = CVT_D_S(ctx->f12.fl);
    // 0x430064A0: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x430064A4: mfc1        $a2, $f5
    ctx->r6 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x430064A8: cvt.d.s     $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f6.d = CVT_D_S(ctx->f14.fl);
    // 0x430064AC: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x430064B0: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x430064B4: swc1        $f11, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(11 - 1) * 2];
    // 0x430064B8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x430064BC: swc1        $f7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(7 - 1) * 2];
    // 0x430064C0: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x430064C4: jal         0x43000DC0
    // 0x430064C8: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    ovl_boss_demon_DC0(rdram, ctx);
        goto after_0;
    // 0x430064C8: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_0:
    // 0x430064CC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x430064D0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x430064D4: jr          $ra
    // 0x430064D8: nop

    return;
    // 0x430064D8: nop

;}
RECOMP_FUNC void ovl_boss_demon_64DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430064DC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x430064E0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x430064E4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x430064E8: jal         0x430062D0
    // 0x430064EC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    ovl_boss_demon_62D0(rdram, ctx);
        goto after_0;
    // 0x430064EC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x430064F0: lw          $a1, 0x18($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X18);
    // 0x430064F4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x430064F8: jal         0x43000DC0
    // 0x430064FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_boss_demon_DC0(rdram, ctx);
        goto after_1;
    // 0x430064FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x43006500: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x43006504: jal         0x43009C7C
    // 0x43006508: nop

    ovl_boss_demon_9C7C(rdram, ctx);
        goto after_2;
    // 0x43006508: nop

    after_2:
    // 0x4300650C: jal         0x43000868
    // 0x43006510: nop

    ovl_boss_demon_868(rdram, ctx);
        goto after_3;
    // 0x43006510: nop

    after_3:
    // 0x43006514: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    // 0x43006518: nop

    // 0x4300651C: beq         $v0, $a0, L_43006538
    if (ctx->r2 == ctx->r4) {
        // 0x43006520: nop
    
            goto L_43006538;
    }
    // 0x43006520: nop

    // 0x43006524: jal         0x4300082C
    // 0x43006528: nop

    ovl_boss_demon_82C(rdram, ctx);
        goto after_4;
    // 0x43006528: nop

    after_4:
    // 0x4300652C: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    // 0x43006530: jal         0x43009D18
    // 0x43006534: nop

    ovl_boss_demon_9D18(rdram, ctx);
        goto after_5;
    // 0x43006534: nop

    after_5:
L_43006538:
    // 0x43006538: jal         0x430000F4
    // 0x4300653C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_boss_demon_F4(rdram, ctx);
        goto after_6;
    // 0x4300653C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x43006540: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43006544: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43006548: jr          $ra
    // 0x4300654C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x4300654C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_boss_demon_6550(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006550: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x43006554: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x43006558: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x4300655C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x43006560: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x43006564: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x43006568: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x4300656C: jal         0x430000E8
    // 0x43006570: addiu       $a0, $zero, 0x58
    ctx->r4 = ADD32(0, 0X58);
    ovl_boss_demon_E8(rdram, ctx);
        goto after_0;
    // 0x43006570: addiu       $a0, $zero, 0x58
    ctx->r4 = ADD32(0, 0X58);
    after_0:
    // 0x43006574: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x43006578: jal         0x43009C50
    // 0x4300657C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    ovl_boss_demon_9C50(rdram, ctx);
        goto after_1;
    // 0x4300657C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_1:
    // 0x43006580: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x43006584: sw          $zero, 0x14($s0)
    MEM_W(0X14, ctx->r16) = 0;
    // 0x43006588: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x4300658C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x43006590: sw          $t6, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r14;
    // 0x43006594: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x43006598: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x4300659C: addiu       $a1, $s0, 0x18
    ctx->r5 = ADD32(ctx->r16, 0X18);
    // 0x430065A0: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x430065A4: jal         0x43000DC0
    // 0x430065A8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_boss_demon_DC0(rdram, ctx);
        goto after_2;
    // 0x430065A8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x430065AC: lui         $t7, 0x4300
    ctx->r15 = S32(0X4300 << 16);
    // 0x430065B0: lui         $t8, 0x4300
    ctx->r24 = S32(0X4300 << 16);
    // 0x430065B4: lui         $t9, 0x4300
    ctx->r25 = S32(0X4300 << 16);
    // 0x430065B8: lui         $t0, 0x4300
    ctx->r8 = S32(0X4300 << 16);
    // 0x430065BC: lui         $t1, 0x4300
    ctx->r9 = S32(0X4300 << 16);
    // 0x430065C0: lui         $t2, 0x4300
    ctx->r10 = S32(0X4300 << 16);
    // 0x430065C4: lui         $t3, 0x4300
    ctx->r11 = S32(0X4300 << 16);
    // 0x430065C8: lui         $t4, 0x4300
    ctx->r12 = S32(0X4300 << 16);
    // 0x430065CC: lui         $t5, 0x4300
    ctx->r13 = S32(0X4300 << 16);
    // 0x430065D0: addiu       $t7, $t7, 0x6170
    ctx->r15 = ADD32(ctx->r15, 0X6170);
    // 0x430065D4: addiu       $t8, $t8, 0x6250
    ctx->r24 = ADD32(ctx->r24, 0X6250);
    // 0x430065D8: addiu       $t9, $t9, 0x6334
    ctx->r25 = ADD32(ctx->r25, 0X6334);
    // 0x430065DC: addiu       $t0, $t0, 0x6388
    ctx->r8 = ADD32(ctx->r8, 0X6388);
    // 0x430065E0: addiu       $t1, $t1, 0x63A0
    ctx->r9 = ADD32(ctx->r9, 0X63A0);
    // 0x430065E4: addiu       $t2, $t2, 0x63E0
    ctx->r10 = ADD32(ctx->r10, 0X63E0);
    // 0x430065E8: addiu       $t3, $t3, 0x6414
    ctx->r11 = ADD32(ctx->r11, 0X6414);
    // 0x430065EC: addiu       $t4, $t4, 0x6478
    ctx->r12 = ADD32(ctx->r12, 0X6478);
    // 0x430065F0: addiu       $t5, $t5, 0x64DC
    ctx->r13 = ADD32(ctx->r13, 0X64DC);
    // 0x430065F4: sw          $t7, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r15;
    // 0x430065F8: sw          $t8, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r24;
    // 0x430065FC: sw          $t9, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r25;
    // 0x43006600: sw          $t0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r8;
    // 0x43006604: sw          $t1, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r9;
    // 0x43006608: sw          $t2, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r10;
    // 0x4300660C: sw          $t3, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->r11;
    // 0x43006610: sw          $t4, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->r12;
    // 0x43006614: sw          $t5, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r13;
    // 0x43006618: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x4300661C: jal         0x430063E0
    // 0x43006620: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_boss_demon_63E0(rdram, ctx);
        goto after_3;
    // 0x43006620: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x43006624: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43006628: jal         0x43006388
    // 0x4300662C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_boss_demon_6388(rdram, ctx);
        goto after_4;
    // 0x4300662C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x43006630: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x43006634: nop

    // 0x43006638: beq         $v0, $zero, L_43006660
    if (ctx->r2 == 0) {
        // 0x4300663C: nop
    
            goto L_43006660;
    }
    // 0x4300663C: nop

    // 0x43006640: bgez        $v0, L_43006658
    if (SIGNED(ctx->r2) >= 0) {
        // 0x43006644: lw          $a1, 0x30($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X30);
            goto L_43006658;
    }
    // 0x43006644: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x43006648: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x4300664C: nop

    // 0x43006650: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x43006654: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
L_43006658:
    // 0x43006658: jal         0x43006250
    // 0x4300665C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_boss_demon_6250(rdram, ctx);
        goto after_5;
    // 0x4300665C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
L_43006660:
    // 0x43006660: lui         $a0, 0x4300
    ctx->r4 = S32(0X4300 << 16);
    // 0x43006664: addiu       $a0, $a0, 0x6228
    ctx->r4 = ADD32(ctx->r4, 0X6228);
    // 0x43006668: jal         0x43009CC0
    // 0x4300666C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_boss_demon_9CC0(rdram, ctx);
        goto after_6;
    // 0x4300666C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_6:
    // 0x43006670: lui         $a0, 0x4300
    ctx->r4 = S32(0X4300 << 16);
    // 0x43006674: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x43006678: addiu       $a0, $a0, 0x6184
    ctx->r4 = ADD32(ctx->r4, 0X6184);
    // 0x4300667C: ori         $a1, $zero, 0xFECF
    ctx->r5 = 0 | 0XFECF;
    // 0x43006680: addiu       $a2, $zero, 0x2000
    ctx->r6 = ADD32(0, 0X2000);
    // 0x43006684: jal         0x43000820
    // 0x43006688: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_boss_demon_820(rdram, ctx);
        goto after_7;
    // 0x43006688: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_7:
    // 0x4300668C: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    // 0x43006690: sw          $s0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r16;
    // 0x43006694: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43006698: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x4300669C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x430066A0: jr          $ra
    // 0x430066A4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x430066A4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x430066A8: nop

    // 0x430066AC: nop

;}
