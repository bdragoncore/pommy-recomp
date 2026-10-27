#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_boss_angel_5324(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005324: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43005328: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4300532C: sw          $a1, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->r5;
    // 0x43005330: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x43005334: lw          $t9, 0x98($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X98);
    // 0x43005338: nop

    // 0x4300533C: jalr        $t9
    // 0x43005340: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43005340: nop

    after_0:
    // 0x43005344: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43005348: nop

    // 0x4300534C: lw          $t9, 0x94($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X94);
    // 0x43005350: nop

    // 0x43005354: jalr        $t9
    // 0x43005358: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x43005358: nop

    after_1:
    // 0x4300535C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43005360: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43005364: jr          $ra
    // 0x43005368: nop

    return;
    // 0x43005368: nop

;}
RECOMP_FUNC void ovl_boss_angel_536C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300536C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43005370: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43005374: lw          $a1, 0x58($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X58);
    // 0x43005378: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x4300537C: beq         $a1, $zero, L_430053A8
    if (ctx->r5 == 0) {
        // 0x43005380: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_430053A8;
    }
    // 0x43005380: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43005384: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x43005388: lw          $t9, 0xC0($a1)
    ctx->r25 = MEM_W(ctx->r5, 0XC0);
    // 0x4300538C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x43005390: jalr        $t9
    // 0x43005394: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43005394: nop

    after_0:
    // 0x43005398: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x4300539C: nop

    // 0x430053A0: sw          $zero, 0x58($a2)
    MEM_W(0X58, ctx->r6) = 0;
    // 0x430053A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_430053A8:
    // 0x430053A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x430053AC: jr          $ra
    // 0x430053B0: nop

    return;
    // 0x430053B0: nop

;}
RECOMP_FUNC void ovl_boss_angel_53B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430053B4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x430053B8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x430053BC: lwc1        $f4, 0x34($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X34);
    // 0x430053C0: lw          $a2, 0x30($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X30);
    // 0x430053C4: lwc1        $f12, 0xC($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0XC);
    // 0x430053C8: mtc1        $a1, $f14
    ctx->f14.u32l = ctx->r5;
    // 0x430053CC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x430053D0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x430053D4: jal         0x4300A908
    // 0x430053D8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_boss_angel_A908(rdram, ctx);
        goto after_0;
    // 0x430053D8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x430053DC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x430053E0: nop

    // 0x430053E4: lw          $t9, 0x94($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X94);
    // 0x430053E8: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
    // 0x430053EC: jalr        $t9
    // 0x430053F0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x430053F0: nop

    after_1:
    // 0x430053F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x430053F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x430053FC: jr          $ra
    // 0x43005400: nop

    return;
    // 0x43005400: nop

;}
RECOMP_FUNC void ovl_boss_angel_5404(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005404: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43005408: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x4300540C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43005410: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x43005414: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x43005418: jal         0x4300B4B0
    // 0x4300541C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_boss_angel_B4B0(rdram, ctx);
        goto after_0;
    // 0x4300541C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x43005420: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x43005424: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43005428: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x4300542C: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x43005430: nop

    // 0x43005434: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x43005438: swc1        $f10, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f10.u32l;
    // 0x4300543C: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x43005440: jal         0x4300B670
    // 0x43005444: nop

    ovl_boss_angel_B670(rdram, ctx);
        goto after_1;
    // 0x43005444: nop

    after_1:
    // 0x43005448: lwc1        $f18, 0x20($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X20);
    // 0x4300544C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43005450: mul.s       $f6, $f0, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x43005454: lwc1        $f16, 0x8($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X8);
    // 0x43005458: lw          $t9, 0x98($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X98);
    // 0x4300545C: add.s       $f4, $f16, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x43005460: jalr        $t9
    // 0x43005464: swc1        $f4, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x43005464: swc1        $f4, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f4.u32l;
    after_2:
    // 0x43005468: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4300546C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43005470: jr          $ra
    // 0x43005474: nop

    return;
    // 0x43005474: nop

;}
RECOMP_FUNC void ovl_boss_angel_5478(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005478: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x4300547C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43005480: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43005484: lw          $a2, 0x18($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X18);
    // 0x43005488: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x4300548C: jal         0x43005404
    // 0x43005490: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_boss_angel_5404(rdram, ctx);
        goto after_0;
    // 0x43005490: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x43005494: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43005498: nop

    // 0x4300549C: lwc1        $f4, 0x18($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X18);
    // 0x430054A0: lwc1        $f6, 0x1C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x430054A4: lwc1        $f2, 0x28($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X28);
    // 0x430054A8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x430054AC: swc1        $f8, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f8.u32l;
    // 0x430054B0: lwc1        $f0, 0x18($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X18);
    // 0x430054B4: nop

    // 0x430054B8: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x430054BC: nop

    // 0x430054C0: bc1f        L_430054D4
    if (!c1cs) {
        // 0x430054C4: nop
    
            goto L_430054D4;
    }
    // 0x430054C4: nop

    // 0x430054C8: swc1        $f2, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f2.u32l;
    // 0x430054CC: lwc1        $f0, 0x18($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X18);
    // 0x430054D0: nop

L_430054D4:
    // 0x430054D4: lwc1        $f2, 0x2C($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x430054D8: nop

    // 0x430054DC: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x430054E0: nop

    // 0x430054E4: bc1f        L_430054F4
    if (!c1cs) {
        // 0x430054E8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_430054F4;
    }
    // 0x430054E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430054EC: swc1        $f2, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f2.u32l;
    // 0x430054F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_430054F4:
    // 0x430054F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x430054F8: jr          $ra
    // 0x430054FC: nop

    return;
    // 0x430054FC: nop

;}
RECOMP_FUNC void ovl_boss_angel_5500(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005500: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43005504: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43005508: lw          $a1, 0xC($a0)
    ctx->r5 = MEM_W(ctx->r4, 0XC);
    // 0x4300550C: jal         0x43005478
    // 0x43005510: nop

    ovl_boss_angel_5478(rdram, ctx);
        goto after_0;
    // 0x43005510: nop

    after_0:
    // 0x43005514: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43005518: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4300551C: jr          $ra
    // 0x43005520: nop

    return;
    // 0x43005520: nop

;}
RECOMP_FUNC void ovl_boss_angel_5524(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005524: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43005528: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4300552C: lw          $t6, 0x4C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4C);
    // 0x43005530: nop

    // 0x43005534: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x43005538: beq         $t7, $zero, L_43005554
    if (ctx->r15 == 0) {
        // 0x4300553C: nop
    
            goto L_43005554;
    }
    // 0x4300553C: nop

    // 0x43005540: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43005544: nop

    // 0x43005548: swc1        $f0, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f0.u32l;
    // 0x4300554C: b           L_43005568
    // 0x43005550: swc1        $f0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f0.u32l;
        goto L_43005568;
    // 0x43005550: swc1        $f0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f0.u32l;
L_43005554:
    // 0x43005554: lwc1        $f4, 0x4($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X4);
    // 0x43005558: lwc1        $f6, 0x20($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X20);
    // 0x4300555C: nop

    // 0x43005560: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x43005564: swc1        $f8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f8.u32l;
L_43005568:
    // 0x43005568: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x4300556C: lw          $t9, 0x98($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X98);
    // 0x43005570: nop

    // 0x43005574: jalr        $t9
    // 0x43005578: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43005578: nop

    after_0:
    // 0x4300557C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43005580: nop

    // 0x43005584: lwc1        $f10, 0x20($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X20);
    // 0x43005588: lwc1        $f16, 0x24($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X24);
    // 0x4300558C: lwc1        $f2, 0x38($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X38);
    // 0x43005590: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x43005594: swc1        $f18, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f18.u32l;
    // 0x43005598: lwc1        $f0, 0x20($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X20);
    // 0x4300559C: neg.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = -ctx->f2.fl;
    // 0x430055A0: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x430055A4: nop

    // 0x430055A8: bc1f        L_430055BC
    if (!c1cs) {
        // 0x430055AC: nop
    
            goto L_430055BC;
    }
    // 0x430055AC: nop

    // 0x430055B0: swc1        $f2, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f2.u32l;
    // 0x430055B4: lwc1        $f0, 0x20($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X20);
    // 0x430055B8: nop

L_430055BC:
    // 0x430055BC: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x430055C0: nop

    // 0x430055C4: bc1f        L_430055D4
    if (!c1cs) {
        // 0x430055C8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_430055D4;
    }
    // 0x430055C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430055CC: swc1        $f12, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f12.u32l;
    // 0x430055D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_430055D4:
    // 0x430055D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x430055D8: jr          $ra
    // 0x430055DC: nop

    return;
    // 0x430055DC: nop

;}
RECOMP_FUNC void ovl_boss_angel_55E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430055E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x430055E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430055E8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x430055EC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x430055F0: jal         0x43009930
    // 0x430055F4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_boss_angel_9930(rdram, ctx);
        goto after_0;
    // 0x430055F4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x430055F8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x430055FC: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x43005600: ori         $t7, $zero, 0x8001
    ctx->r15 = 0 | 0X8001;
    // 0x43005604: sw          $v0, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->r2;
    // 0x43005608: sw          $t6, 0x60($a0)
    MEM_W(0X60, ctx->r4) = ctx->r14;
    // 0x4300560C: sh          $t7, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r15;
    // 0x43005610: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x43005614: nop

    // 0x43005618: sw          $t8, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r24;
    // 0x4300561C: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x43005620: nop

    // 0x43005624: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x43005628: nop

    // 0x4300562C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x43005630: swc1        $f6, 0x40($v0)
    MEM_W(0X40, ctx->r2) = ctx->f6.u32l;
    // 0x43005634: lw          $t9, 0x98($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X98);
    // 0x43005638: nop

    // 0x4300563C: jalr        $t9
    // 0x43005640: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x43005640: nop

    after_1:
    // 0x43005644: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43005648: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4300564C: jr          $ra
    // 0x43005650: nop

    return;
    // 0x43005650: nop

;}
RECOMP_FUNC void ovl_boss_angel_5654(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005654: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43005658: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4300565C: lw          $a2, 0x5C($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X5C);
    // 0x43005660: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x43005664: beq         $a2, $zero, L_43005684
    if (ctx->r6 == 0) {
        // 0x43005668: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_43005684;
    }
    // 0x43005668: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x4300566C: jal         0x43009970
    // 0x43005670: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    ovl_boss_angel_9970(rdram, ctx);
        goto after_0;
    // 0x43005670: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x43005674: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x43005678: nop

    // 0x4300567C: sw          $zero, 0x5C($a1)
    MEM_W(0X5C, ctx->r5) = 0;
    // 0x43005680: sw          $zero, 0x60($a1)
    MEM_W(0X60, ctx->r5) = 0;
L_43005684:
    // 0x43005684: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43005688: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4300568C: jr          $ra
    // 0x43005690: nop

    return;
    // 0x43005690: nop

;}
RECOMP_FUNC void ovl_boss_angel_5694(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005694: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x43005698: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x4300569C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x430056A0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x430056A4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x430056A8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x430056AC: lw          $t9, 0x90($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X90);
    // 0x430056B0: nop

    // 0x430056B4: jalr        $t9
    // 0x430056B8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x430056B8: nop

    after_0:
    // 0x430056BC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x430056C0: addiu       $s2, $zero, 0x4
    ctx->r18 = ADD32(0, 0X4);
L_430056C4:
    // 0x430056C4: lw          $t9, 0x70($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X70);
    // 0x430056C8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x430056CC: jalr        $t9
    // 0x430056D0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x430056D0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x430056D4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x430056D8: bne         $s0, $s2, L_430056C4
    if (ctx->r16 != ctx->r18) {
        // 0x430056DC: nop
    
            goto L_430056C4;
    }
    // 0x430056DC: nop

    // 0x430056E0: lw          $t9, 0x88($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X88);
    // 0x430056E4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x430056E8: jalr        $t9
    // 0x430056EC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x430056EC: nop

    after_2:
    // 0x430056F0: jal         0x430000F4
    // 0x430056F4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_boss_angel_F4(rdram, ctx);
        goto after_3;
    // 0x430056F4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_3:
    // 0x430056F8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x430056FC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43005700: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x43005704: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x43005708: jr          $ra
    // 0x4300570C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x4300570C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_boss_angel_5710(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005710: jr          $ra
    // 0x43005714: nop

    return;
    // 0x43005714: nop

;}
RECOMP_FUNC void ovl_boss_angel_5718(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005718: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4300571C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43005720: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x43005724: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x43005728: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x4300572C: jal         0x430000E8
    // 0x43005730: addiu       $a0, $zero, 0xB4
    ctx->r4 = ADD32(0, 0XB4);
    ovl_boss_angel_E8(rdram, ctx);
        goto after_0;
    // 0x43005730: addiu       $a0, $zero, 0xB4
    ctx->r4 = ADD32(0, 0XB4);
    after_0:
    // 0x43005734: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x43005738: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x4300573C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x43005740: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x43005744: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43005748: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x4300574C: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x43005750: lui         $t0, 0x4300
    ctx->r8 = S32(0X4300 << 16);
    // 0x43005754: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x43005758: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x4300575C: swc1        $f0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f0.u32l;
    // 0x43005760: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
    // 0x43005764: swc1        $f0, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f0.u32l;
    // 0x43005768: sw          $at, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r1;
    // 0x4300576C: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x43005770: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43005774: swc1        $f2, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f2.u32l;
    // 0x43005778: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x4300577C: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x43005780: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x43005784: swc1        $f0, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f0.u32l;
    // 0x43005788: swc1        $f4, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f4.u32l;
    // 0x4300578C: lwc1        $f6, -0x41B0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X41B0);
    // 0x43005790: lui         $t1, 0x4300
    ctx->r9 = S32(0X4300 << 16);
    // 0x43005794: swc1        $f6, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->f6.u32l;
    // 0x43005798: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x4300579C: lui         $t2, 0x4300
    ctx->r10 = S32(0X4300 << 16);
    // 0x430057A0: lui         $t3, 0x4300
    ctx->r11 = S32(0X4300 << 16);
    // 0x430057A4: lui         $t4, 0x4300
    ctx->r12 = S32(0X4300 << 16);
    // 0x430057A8: lui         $t5, 0x4300
    ctx->r13 = S32(0X4300 << 16);
    // 0x430057AC: lui         $t8, 0x4300
    ctx->r24 = S32(0X4300 << 16);
    // 0x430057B0: lui         $t7, 0x4300
    ctx->r15 = S32(0X4300 << 16);
    // 0x430057B4: addiu       $t0, $t0, 0x514C
    ctx->r8 = ADD32(ctx->r8, 0X514C);
    // 0x430057B8: addiu       $t1, $t1, 0x51BC
    ctx->r9 = ADD32(ctx->r9, 0X51BC);
    // 0x430057BC: addiu       $t2, $t2, 0x520C
    ctx->r10 = ADD32(ctx->r10, 0X520C);
    // 0x430057C0: addiu       $t3, $t3, 0x5250
    ctx->r11 = ADD32(ctx->r11, 0X5250);
    // 0x430057C4: addiu       $t4, $t4, 0x52E4
    ctx->r12 = ADD32(ctx->r12, 0X52E4);
    // 0x430057C8: addiu       $t5, $t5, 0x5294
    ctx->r13 = ADD32(ctx->r13, 0X5294);
    // 0x430057CC: addiu       $t8, $t8, 0x55E0
    ctx->r24 = ADD32(ctx->r24, 0X55E0);
    // 0x430057D0: addiu       $t7, $t7, 0x5654
    ctx->r15 = ADD32(ctx->r15, 0X5654);
    // 0x430057D4: sw          $t0, 0x6C($v0)
    MEM_W(0X6C, ctx->r2) = ctx->r8;
    // 0x430057D8: sw          $t1, 0x70($v0)
    MEM_W(0X70, ctx->r2) = ctx->r9;
    // 0x430057DC: sw          $t2, 0x74($v0)
    MEM_W(0X74, ctx->r2) = ctx->r10;
    // 0x430057E0: sw          $t3, 0x78($v0)
    MEM_W(0X78, ctx->r2) = ctx->r11;
    // 0x430057E4: sw          $t4, 0x7C($v0)
    MEM_W(0X7C, ctx->r2) = ctx->r12;
    // 0x430057E8: sw          $t5, 0x80($v0)
    MEM_W(0X80, ctx->r2) = ctx->r13;
    // 0x430057EC: sw          $t8, 0x84($v0)
    MEM_W(0X84, ctx->r2) = ctx->r24;
    // 0x430057F0: sw          $t7, 0x88($v0)
    MEM_W(0X88, ctx->r2) = ctx->r15;
    // 0x430057F4: lui         $t6, 0x4300
    ctx->r14 = S32(0X4300 << 16);
    // 0x430057F8: lui         $t9, 0x4300
    ctx->r25 = S32(0X4300 << 16);
    // 0x430057FC: lui         $t0, 0x4300
    ctx->r8 = S32(0X4300 << 16);
    // 0x43005800: lui         $t1, 0x4300
    ctx->r9 = S32(0X4300 << 16);
    // 0x43005804: lui         $t2, 0x4300
    ctx->r10 = S32(0X4300 << 16);
    // 0x43005808: lui         $t3, 0x4300
    ctx->r11 = S32(0X4300 << 16);
    // 0x4300580C: lui         $t4, 0x4300
    ctx->r12 = S32(0X4300 << 16);
    // 0x43005810: lui         $t5, 0x4300
    ctx->r13 = S32(0X4300 << 16);
    // 0x43005814: lui         $t8, 0x4300
    ctx->r24 = S32(0X4300 << 16);
    // 0x43005818: lui         $t7, 0x4300
    ctx->r15 = S32(0X4300 << 16);
    // 0x4300581C: addiu       $t6, $t6, 0x5324
    ctx->r14 = ADD32(ctx->r14, 0X5324);
    // 0x43005820: addiu       $t9, $t9, 0x536C
    ctx->r25 = ADD32(ctx->r25, 0X536C);
    // 0x43005824: addiu       $t0, $t0, 0x5048
    ctx->r8 = ADD32(ctx->r8, 0X5048);
    // 0x43005828: addiu       $t1, $t1, 0x50A8
    ctx->r9 = ADD32(ctx->r9, 0X50A8);
    // 0x4300582C: addiu       $t2, $t2, 0x53B4
    ctx->r10 = ADD32(ctx->r10, 0X53B4);
    // 0x43005830: addiu       $t3, $t3, 0x5404
    ctx->r11 = ADD32(ctx->r11, 0X5404);
    // 0x43005834: addiu       $t4, $t4, 0x5478
    ctx->r12 = ADD32(ctx->r12, 0X5478);
    // 0x43005838: addiu       $t5, $t5, 0x5500
    ctx->r13 = ADD32(ctx->r13, 0X5500);
    // 0x4300583C: addiu       $t8, $t8, 0x5524
    ctx->r24 = ADD32(ctx->r24, 0X5524);
    // 0x43005840: addiu       $t7, $t7, 0x5694
    ctx->r15 = ADD32(ctx->r15, 0X5694);
    // 0x43005844: sw          $zero, 0x48($v0)
    MEM_W(0X48, ctx->r2) = 0;
    // 0x43005848: sw          $zero, 0x44($v0)
    MEM_W(0X44, ctx->r2) = 0;
    // 0x4300584C: sw          $zero, 0x40($v0)
    MEM_W(0X40, ctx->r2) = 0;
    // 0x43005850: sw          $zero, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = 0;
    // 0x43005854: sw          $zero, 0x58($v0)
    MEM_W(0X58, ctx->r2) = 0;
    // 0x43005858: sw          $zero, 0x5C($v0)
    MEM_W(0X5C, ctx->r2) = 0;
    // 0x4300585C: sw          $zero, 0x60($v0)
    MEM_W(0X60, ctx->r2) = 0;
    // 0x43005860: sw          $zero, 0x64($v0)
    MEM_W(0X64, ctx->r2) = 0;
    // 0x43005864: sw          $zero, 0x4C($v0)
    MEM_W(0X4C, ctx->r2) = 0;
    // 0x43005868: sw          $t6, 0x8C($v0)
    MEM_W(0X8C, ctx->r2) = ctx->r14;
    // 0x4300586C: sw          $t9, 0x90($v0)
    MEM_W(0X90, ctx->r2) = ctx->r25;
    // 0x43005870: sw          $t0, 0x98($v0)
    MEM_W(0X98, ctx->r2) = ctx->r8;
    // 0x43005874: sw          $t1, 0x94($v0)
    MEM_W(0X94, ctx->r2) = ctx->r9;
    // 0x43005878: sw          $t2, 0x9C($v0)
    MEM_W(0X9C, ctx->r2) = ctx->r10;
    // 0x4300587C: sw          $t3, 0xA0($v0)
    MEM_W(0XA0, ctx->r2) = ctx->r11;
    // 0x43005880: sw          $t4, 0xA4($v0)
    MEM_W(0XA4, ctx->r2) = ctx->r12;
    // 0x43005884: sw          $t5, 0xA8($v0)
    MEM_W(0XA8, ctx->r2) = ctx->r13;
    // 0x43005888: sw          $t8, 0xAC($v0)
    MEM_W(0XAC, ctx->r2) = ctx->r24;
    // 0x4300588C: sw          $t7, 0xB0($v0)
    MEM_W(0XB0, ctx->r2) = ctx->r15;
    // 0x43005890: swc1        $f2, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->f2.u32l;
    // 0x43005894: swc1        $f8, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->f8.u32l;
    // 0x43005898: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4300589C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x430058A0: jr          $ra
    // 0x430058A4: nop

    return;
    // 0x430058A4: nop

    // 0x430058A8: nop

    // 0x430058AC: nop

;}
RECOMP_FUNC void ovl_boss_angel_58B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430058B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x430058B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430058B8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x430058BC: jal         0x4300AA40
    // 0x430058C0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    ovl_boss_angel_AA40(rdram, ctx);
        goto after_0;
    // 0x430058C0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x430058C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430058C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x430058CC: jr          $ra
    // 0x430058D0: nop

    return;
    // 0x430058D0: nop

;}
RECOMP_FUNC void ovl_boss_angel_58D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430058D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x430058D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430058DC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x430058E0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x430058E4: jal         0x4300A9C8
    // 0x430058E8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    ovl_boss_angel_A9C8(rdram, ctx);
        goto after_0;
    // 0x430058E8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
    // 0x430058EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430058F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x430058F4: jr          $ra
    // 0x430058F8: nop

    return;
    // 0x430058F8: nop

;}
RECOMP_FUNC void ovl_boss_angel_58FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430058FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43005900: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43005904: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x43005908: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x4300590C: jal         0x4300A9C8
    // 0x43005910: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    ovl_boss_angel_A9C8(rdram, ctx);
        goto after_0;
    // 0x43005910: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
    // 0x43005914: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43005918: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4300591C: jr          $ra
    // 0x43005920: nop

    return;
    // 0x43005920: nop

;}
RECOMP_FUNC void ovl_boss_angel_5924(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005924: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x43005928: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x4300592C: jr          $ra
    // 0x43005930: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    return;
    // 0x43005930: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
;}
RECOMP_FUNC void ovl_boss_angel_5934(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005934: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x43005938: jr          $ra
    // 0x4300593C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x4300593C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void ovl_boss_angel_5940(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005940: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x43005944: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43005948: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4300594C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43005950: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x43005954: jal         0x43001320
    // 0x43005958: nop

    ovl_boss_angel_1320(rdram, ctx);
        goto after_0;
    // 0x43005958: nop

    after_0:
    // 0x4300595C: lui         $t6, 0x4301
    ctx->r14 = S32(0X4301 << 16);
    // 0x43005960: lw          $t6, -0x4010($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4010);
    // 0x43005964: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x43005968: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x4300596C: bne         $t6, $a0, L_4300598C
    if (ctx->r14 != ctx->r4) {
        // 0x43005970: addiu       $at, $zero, -0x1
        ctx->r1 = ADD32(0, -0X1);
            goto L_4300598C;
    }
    // 0x43005970: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x43005974: lw          $t9, 0x2C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X2C);
    // 0x43005978: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x4300597C: jalr        $t9
    // 0x43005980: addiu       $a1, $s0, 0x10
    ctx->r5 = ADD32(ctx->r16, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x43005980: addiu       $a1, $s0, 0x10
    ctx->r5 = ADD32(ctx->r16, 0X10);
    after_1:
    // 0x43005984: b           L_43005A78
    // 0x43005988: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43005A78;
    // 0x43005988: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4300598C:
    // 0x4300598C: bne         $a0, $at, L_430059AC
    if (ctx->r4 != ctx->r1) {
        // 0x43005990: addiu       $a1, $zero, 0x29
        ctx->r5 = ADD32(0, 0X29);
            goto L_430059AC;
    }
    // 0x43005990: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x43005994: lw          $t9, 0x3C($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X3C);
    // 0x43005998: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x4300599C: jalr        $t9
    // 0x430059A0: addiu       $a1, $s0, 0x10
    ctx->r5 = ADD32(ctx->r16, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x430059A0: addiu       $a1, $s0, 0x10
    ctx->r5 = ADD32(ctx->r16, 0X10);
    after_2:
    // 0x430059A4: b           L_43005A78
    // 0x430059A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43005A78;
    // 0x430059A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_430059AC:
    // 0x430059AC: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x430059B0: jal         0x430006C4
    // 0x430059B4: sw          $a3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r7;
    ovl_boss_angel_6C4(rdram, ctx);
        goto after_3;
    // 0x430059B4: sw          $a3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r7;
    after_3:
    // 0x430059B8: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x430059BC: bne         $v0, $zero, L_43005A78
    if (ctx->r2 != 0) {
        // 0x430059C0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_43005A78;
    }
    // 0x430059C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x430059C4: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x430059C8: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x430059CC: bne         $v0, $at, L_430059EC
    if (ctx->r2 != ctx->r1) {
        // 0x430059D0: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_430059EC;
    }
    // 0x430059D0: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x430059D4: lw          $t9, 0x30($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X30);
    // 0x430059D8: lw          $a2, 0xC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XC);
    // 0x430059DC: jalr        $t9
    // 0x430059E0: addiu       $a1, $s0, 0x10
    ctx->r5 = ADD32(ctx->r16, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x430059E0: addiu       $a1, $s0, 0x10
    ctx->r5 = ADD32(ctx->r16, 0X10);
    after_4:
    // 0x430059E4: b           L_43005A78
    // 0x430059E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43005A78;
    // 0x430059E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_430059EC:
    // 0x430059EC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x430059F0: bne         $v0, $at, L_43005A24
    if (ctx->r2 != ctx->r1) {
        // 0x430059F4: lw          $a0, 0x2C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X2C);
            goto L_43005A24;
    }
    // 0x430059F4: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x430059F8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x430059FC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x43005A00: bne         $a0, $at, L_43005A20
    if (ctx->r4 != ctx->r1) {
        // 0x43005A04: addiu       $a1, $s0, 0x10
        ctx->r5 = ADD32(ctx->r16, 0X10);
            goto L_43005A20;
    }
    // 0x43005A04: addiu       $a1, $s0, 0x10
    ctx->r5 = ADD32(ctx->r16, 0X10);
    // 0x43005A08: lw          $t9, 0x34($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X34);
    // 0x43005A0C: lw          $a2, 0xC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XC);
    // 0x43005A10: jalr        $t9
    // 0x43005A14: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x43005A14: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_5:
    // 0x43005A18: b           L_43005A78
    // 0x43005A1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43005A78;
    // 0x43005A1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43005A20:
    // 0x43005A20: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
L_43005A24:
    // 0x43005A24: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x43005A28: bne         $v0, $at, L_43005A74
    if (ctx->r2 != ctx->r1) {
        // 0x43005A2C: lui         $v1, 0x4301
        ctx->r3 = S32(0X4301 << 16);
            goto L_43005A74;
    }
    // 0x43005A2C: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x43005A30: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x43005A34: addiu       $v0, $v0, -0x44C0
    ctx->r2 = ADD32(ctx->r2, -0X44C0);
    // 0x43005A38: addiu       $v1, $v1, -0x4488
    ctx->r3 = ADD32(ctx->r3, -0X4488);
L_43005A3C:
    // 0x43005A3C: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x43005A40: nop

    // 0x43005A44: bne         $a0, $t7, L_43005A68
    if (ctx->r4 != ctx->r15) {
        // 0x43005A48: nop
    
            goto L_43005A68;
    }
    // 0x43005A48: nop

    // 0x43005A4C: lw          $t9, 0x38($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X38);
    // 0x43005A50: lw          $a1, 0x4($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4);
    // 0x43005A54: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x43005A58: jalr        $t9
    // 0x43005A5C: addiu       $a2, $s0, 0x10
    ctx->r6 = ADD32(ctx->r16, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x43005A5C: addiu       $a2, $s0, 0x10
    ctx->r6 = ADD32(ctx->r16, 0X10);
    after_6:
    // 0x43005A60: b           L_43005A78
    // 0x43005A64: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43005A78;
    // 0x43005A64: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43005A68:
    // 0x43005A68: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x43005A6C: bne         $v0, $v1, L_43005A3C
    if (ctx->r2 != ctx->r3) {
        // 0x43005A70: nop
    
            goto L_43005A3C;
    }
    // 0x43005A70: nop

L_43005A74:
    // 0x43005A74: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43005A78:
    // 0x43005A78: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43005A7C: jr          $ra
    // 0x43005A80: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x43005A80: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_boss_angel_5A84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005A84: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x43005A88: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43005A8C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43005A90: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x43005A94: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x43005A98: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x43005A9C: beq         $t6, $at, L_43005C08
    if (ctx->r14 == ctx->r1) {
        // 0x43005AA0: or          $s0, $a0, $zero
        ctx->r16 = ctx->r4 | 0;
            goto L_43005C08;
    }
    // 0x43005AA0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43005AA4: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x43005AA8: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    // 0x43005AAC: bne         $v0, $zero, L_43005B18
    if (ctx->r2 != 0) {
        // 0x43005AB0: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_43005B18;
    }
    // 0x43005AB0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x43005AB4: jal         0x4300B4B0
    // 0x43005AB8: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    ovl_boss_angel_B4B0(rdram, ctx);
        goto after_0;
    // 0x43005AB8: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    after_0:
    // 0x43005ABC: lwc1        $f4, 0x4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4);
    // 0x43005AC0: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x43005AC4: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x43005AC8: lwc1        $f8, 0x0($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X0);
    // 0x43005ACC: addiu       $a3, $s0, 0x10
    ctx->r7 = ADD32(ctx->r16, 0X10);
    // 0x43005AD0: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x43005AD4: swc1        $f10, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f10.u32l;
    // 0x43005AD8: lwc1        $f18, 0x8($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X8);
    // 0x43005ADC: lwc1        $f16, 0x4($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X4);
    // 0x43005AE0: nop

    // 0x43005AE4: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x43005AE8: swc1        $f4, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->f4.u32l;
    // 0x43005AEC: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    // 0x43005AF0: jal         0x4300B670
    // 0x43005AF4: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    ovl_boss_angel_B670(rdram, ctx);
        goto after_1;
    // 0x43005AF4: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    after_1:
    // 0x43005AF8: lwc1        $f6, 0xC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0XC);
    // 0x43005AFC: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x43005B00: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x43005B04: lwc1        $f10, 0x8($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X8);
    // 0x43005B08: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x43005B0C: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x43005B10: b           L_43005BF8
    // 0x43005B14: swc1        $f16, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->f16.u32l;
        goto L_43005BF8;
    // 0x43005B14: swc1        $f16, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->f16.u32l;
L_43005B18:
    // 0x43005B18: bne         $v0, $at, L_43005B3C
    if (ctx->r2 != ctx->r1) {
        // 0x43005B1C: addiu       $a3, $s0, 0x10
        ctx->r7 = ADD32(ctx->r16, 0X10);
            goto L_43005B3C;
    }
    // 0x43005B1C: addiu       $a3, $s0, 0x10
    ctx->r7 = ADD32(ctx->r16, 0X10);
    // 0x43005B20: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x43005B24: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x43005B28: jal         0x4300A100
    // 0x43005B2C: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    ovl_boss_angel_A100(rdram, ctx);
        goto after_2;
    // 0x43005B2C: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    after_2:
    // 0x43005B30: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x43005B34: b           L_43005BFC
    // 0x43005B38: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
        goto L_43005BFC;
    // 0x43005B38: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
L_43005B3C:
    // 0x43005B3C: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x43005B40: lwc1        $f4, 0x4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4);
    // 0x43005B44: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x43005B48: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x43005B4C: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x43005B50: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x43005B54: lwc1        $f4, 0x20($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X20);
    // 0x43005B58: addiu       $a3, $s0, 0x10
    ctx->r7 = ADD32(ctx->r16, 0X10);
    // 0x43005B5C: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x43005B60: lwc1        $f8, 0xC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0XC);
    // 0x43005B64: nop

    // 0x43005B68: mul.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x43005B6C: add.s       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x43005B70: lwc1        $f16, 0x30($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X30);
    // 0x43005B74: add.s       $f6, $f18, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x43005B78: add.s       $f4, $f16, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x43005B7C: swc1        $f4, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f4.u32l;
    // 0x43005B80: lwc1        $f18, 0x4($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X4);
    // 0x43005B84: lwc1        $f8, 0x4($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X4);
    // 0x43005B88: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    // 0x43005B8C: mul.s       $f10, $f8, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x43005B90: lwc1        $f16, 0x14($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X14);
    // 0x43005B94: lwc1        $f18, 0x24($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X24);
    // 0x43005B98: mul.s       $f4, $f16, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f6.fl);
    // 0x43005B9C: lwc1        $f16, 0xC($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0XC);
    // 0x43005BA0: nop

    // 0x43005BA4: mul.s       $f6, $f18, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f16.fl);
    // 0x43005BA8: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x43005BAC: lwc1        $f4, 0x34($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X34);
    // 0x43005BB0: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x43005BB4: add.s       $f18, $f4, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x43005BB8: swc1        $f18, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->f18.u32l;
    // 0x43005BBC: lwc1        $f8, 0x4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X4);
    // 0x43005BC0: lwc1        $f16, 0x8($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X8);
    // 0x43005BC4: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x43005BC8: mul.s       $f6, $f16, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f8.fl);
    // 0x43005BCC: lwc1        $f4, 0x18($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X18);
    // 0x43005BD0: lwc1        $f8, 0x28($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X28);
    // 0x43005BD4: mul.s       $f18, $f4, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x43005BD8: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x43005BDC: nop

    // 0x43005BE0: mul.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x43005BE4: add.s       $f16, $f6, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x43005BE8: lwc1        $f18, 0x38($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X38);
    // 0x43005BEC: add.s       $f6, $f16, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x43005BF0: add.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x43005BF4: swc1        $f8, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->f8.u32l;
L_43005BF8:
    // 0x43005BF8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
L_43005BFC:
    // 0x43005BFC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x43005C00: jal         0x430006C4
    // 0x43005C04: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    ovl_boss_angel_6C4(rdram, ctx);
        goto after_3;
    // 0x43005C04: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    after_3:
L_43005C08:
    // 0x43005C08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43005C0C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43005C10: jr          $ra
    // 0x43005C14: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x43005C14: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_boss_angel_5C18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005C18: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x43005C1C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x43005C20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43005C24: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    // 0x43005C28: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    // 0x43005C2C: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    // 0x43005C30: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x43005C34: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x43005C38: jal         0x430006C4
    // 0x43005C3C: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    ovl_boss_angel_6C4(rdram, ctx);
        goto after_0;
    // 0x43005C3C: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    after_0:
    // 0x43005C40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43005C44: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x43005C48: jr          $ra
    // 0x43005C4C: nop

    return;
    // 0x43005C4C: nop

;}
RECOMP_FUNC void ovl_boss_angel_5C50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005C50: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x43005C54: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x43005C58: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x43005C5C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x43005C60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43005C64: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    // 0x43005C68: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    // 0x43005C6C: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x43005C70: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x43005C74: addiu       $a1, $zero, 0x2F
    ctx->r5 = ADD32(0, 0X2F);
    // 0x43005C78: jal         0x430006C4
    // 0x43005C7C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_boss_angel_6C4(rdram, ctx);
        goto after_0;
    // 0x43005C7C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x43005C80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43005C84: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x43005C88: jr          $ra
    // 0x43005C8C: nop

    return;
    // 0x43005C8C: nop

;}
RECOMP_FUNC void ovl_boss_angel_5C90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005C90: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x43005C94: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x43005C98: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x43005C9C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x43005CA0: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x43005CA4: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x43005CA8: sw          $t6, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r14;
    // 0x43005CAC: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x43005CB0: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x43005CB4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43005CB8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x43005CBC: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    // 0x43005CC0: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x43005CC4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x43005CC8: jal         0x43000DC0
    // 0x43005CCC: sllv        $a3, $t8, $t7
    ctx->r7 = S32(ctx->r24 << (ctx->r15 & 31));
    ovl_boss_angel_DC0(rdram, ctx);
        goto after_0;
    // 0x43005CCC: sllv        $a3, $t8, $t7
    ctx->r7 = S32(ctx->r24 << (ctx->r15 & 31));
    after_0:
    // 0x43005CD0: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x43005CD4: nop

    // 0x43005CD8: beq         $t9, $zero, L_43005D54
    if (ctx->r25 == 0) {
        // 0x43005CDC: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_43005D54;
    }
    // 0x43005CDC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43005CE0: lw          $t0, 0x4($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X4);
    // 0x43005CE4: addiu       $a0, $zero, 0x33
    ctx->r4 = ADD32(0, 0X33);
    // 0x43005CE8: sw          $t0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r8;
    // 0x43005CEC: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x43005CF0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x43005CF4: lw          $v0, 0x8($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X8);
    // 0x43005CF8: nop

    // 0x43005CFC: lh          $t2, 0x0($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X0);
    // 0x43005D00: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x43005D04: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x43005D08: nop

    // 0x43005D0C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x43005D10: swc1        $f6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f6.u32l;
    // 0x43005D14: lh          $t3, -0x2($v0)
    ctx->r11 = MEM_H(ctx->r2, -0X2);
    // 0x43005D18: nop

    // 0x43005D1C: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x43005D20: nop

    // 0x43005D24: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x43005D28: swc1        $f10, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f10.u32l;
    // 0x43005D2C: lh          $t4, 0x0($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X0);
    // 0x43005D30: nop

    // 0x43005D34: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x43005D38: nop

    // 0x43005D3C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x43005D40: swc1        $f18, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f18.u32l;
    // 0x43005D44: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x43005D48: jal         0x43000DC0
    // 0x43005D4C: nop

    ovl_boss_angel_DC0(rdram, ctx);
        goto after_1;
    // 0x43005D4C: nop

    after_1:
    // 0x43005D50: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43005D54:
    // 0x43005D54: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x43005D58: jr          $ra
    // 0x43005D5C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x43005D5C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_boss_angel_5D60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005D60: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x43005D64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43005D68: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x43005D6C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x43005D70: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x43005D74: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    // 0x43005D78: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x43005D7C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x43005D80: jal         0x430006C4
    // 0x43005D84: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    ovl_boss_angel_6C4(rdram, ctx);
        goto after_0;
    // 0x43005D84: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x43005D88: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x43005D8C: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x43005D90: beq         $t6, $zero, L_43005DBC
    if (ctx->r14 == 0) {
        // 0x43005D94: addiu       $at, $zero, -0x5
        ctx->r1 = ADD32(0, -0X5);
            goto L_43005DBC;
    }
    // 0x43005D94: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x43005D98: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x43005D9C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x43005DA0: ori         $t8, $t7, 0x4
    ctx->r24 = ctx->r15 | 0X4;
    // 0x43005DA4: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x43005DA8: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x43005DAC: jal         0x430006C4
    // 0x43005DB0: addiu       $a2, $a3, 0x10
    ctx->r6 = ADD32(ctx->r7, 0X10);
    ovl_boss_angel_6C4(rdram, ctx);
        goto after_1;
    // 0x43005DB0: addiu       $a2, $a3, 0x10
    ctx->r6 = ADD32(ctx->r7, 0X10);
    after_1:
    // 0x43005DB4: b           L_43005DE0
    // 0x43005DB8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
        goto L_43005DE0;
    // 0x43005DB8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
L_43005DBC:
    // 0x43005DBC: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x43005DC0: lui         $a2, 0x4301
    ctx->r6 = S32(0X4301 << 16);
    // 0x43005DC4: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x43005DC8: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x43005DCC: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x43005DD0: addiu       $a2, $a2, -0x4488
    ctx->r6 = ADD32(ctx->r6, -0X4488);
    // 0x43005DD4: jal         0x430006C4
    // 0x43005DD8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_boss_angel_6C4(rdram, ctx);
        goto after_2;
    // 0x43005DD8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x43005DDC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
L_43005DE0:
    // 0x43005DE0: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x43005DE4: jal         0x430006C4
    // 0x43005DE8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_boss_angel_6C4(rdram, ctx);
        goto after_3;
    // 0x43005DE8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_3:
    // 0x43005DEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43005DF0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x43005DF4: jr          $ra
    // 0x43005DF8: nop

    return;
    // 0x43005DF8: nop

;}
RECOMP_FUNC void ovl_boss_angel_5DFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005DFC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43005E00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43005E04: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x43005E08: lw          $a3, 0x0($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X0);
    // 0x43005E0C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x43005E10: beq         $a3, $at, L_43005E40
    if (ctx->r7 == ctx->r1) {
        // 0x43005E14: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_43005E40;
    }
    // 0x43005E14: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x43005E18: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x43005E1C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x43005E20: jal         0x430006C4
    // 0x43005E24: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    ovl_boss_angel_6C4(rdram, ctx);
        goto after_0;
    // 0x43005E24: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_0:
    // 0x43005E28: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x43005E2C: jal         0x430012B0
    // 0x43005E30: nop

    ovl_boss_angel_12B0(rdram, ctx);
        goto after_1;
    // 0x43005E30: nop

    after_1:
    // 0x43005E34: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x43005E38: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x43005E3C: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
L_43005E40:
    // 0x43005E40: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x43005E44: jal         0x430000F4
    // 0x43005E48: nop

    ovl_boss_angel_F4(rdram, ctx);
        goto after_2;
    // 0x43005E48: nop

    after_2:
    // 0x43005E4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43005E50: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x43005E54: jr          $ra
    // 0x43005E58: nop

    return;
    // 0x43005E58: nop

;}
RECOMP_FUNC void ovl_boss_angel_5E5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005E5C: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x43005E60: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x43005E64: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x43005E68: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43005E6C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x43005E70: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x43005E74: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x43005E78: jal         0x430000E8
    // 0x43005E7C: addiu       $a0, $zero, 0x58
    ctx->r4 = ADD32(0, 0X58);
    ovl_boss_angel_E8(rdram, ctx);
        goto after_0;
    // 0x43005E7C: addiu       $a0, $zero, 0x58
    ctx->r4 = ADD32(0, 0X58);
    after_0:
    // 0x43005E80: lui         $a1, 0x4300
    ctx->r5 = S32(0X4300 << 16);
    // 0x43005E84: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x43005E88: addiu       $a1, $a1, 0x5940
    ctx->r5 = ADD32(ctx->r5, 0X5940);
    // 0x43005E8C: jal         0x4300070C
    // 0x43005E90: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_boss_angel_70C(rdram, ctx);
        goto after_1;
    // 0x43005E90: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x43005E94: lwc1        $f4, 0x60($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X60);
    // 0x43005E98: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x43005E9C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x43005EA0: sw          $t6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r14;
    // 0x43005EA4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x43005EA8: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x43005EAC: jal         0x43000718
    // 0x43005EB0: swc1        $f4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f4.u32l;
    ovl_boss_angel_718(rdram, ctx);
        goto after_2;
    // 0x43005EB0: swc1        $f4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x43005EB4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x43005EB8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x43005EBC: jal         0x43001260
    // 0x43005EC0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_boss_angel_1260(rdram, ctx);
        goto after_3;
    // 0x43005EC0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x43005EC4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x43005EC8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x43005ECC: jal         0x430006C4
    // 0x43005ED0: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_boss_angel_6C4(rdram, ctx);
        goto after_4;
    // 0x43005ED0: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_4:
    // 0x43005ED4: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x43005ED8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x43005EDC: ori         $t8, $t7, 0x4
    ctx->r24 = ctx->r15 | 0X4;
    // 0x43005EE0: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x43005EE4: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x43005EE8: jal         0x430006C4
    // 0x43005EEC: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_boss_angel_6C4(rdram, ctx);
        goto after_5;
    // 0x43005EEC: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_5:
    // 0x43005EF0: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x43005EF4: sw          $zero, 0x20($s0)
    MEM_W(0X20, ctx->r16) = 0;
    // 0x43005EF8: beq         $a0, $zero, L_43005F08
    if (ctx->r4 == 0) {
        // 0x43005EFC: sw          $s1, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r17;
            goto L_43005F08;
    }
    // 0x43005EFC: sw          $s1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r17;
    // 0x43005F00: b           L_43005F10
    // 0x43005F04: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
        goto L_43005F10;
    // 0x43005F04: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_43005F08:
    // 0x43005F08: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x43005F0C: addiu       $v1, $v1, -0x4130
    ctx->r3 = ADD32(ctx->r3, -0X4130);
L_43005F10:
    // 0x43005F10: lw          $at, 0x0($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X0);
    // 0x43005F14: lui         $t1, 0x4300
    ctx->r9 = S32(0X4300 << 16);
    // 0x43005F18: sw          $at, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r1;
    // 0x43005F1C: lw          $t0, 0x4($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X4);
    // 0x43005F20: addiu       $t1, $t1, 0x58B0
    ctx->r9 = ADD32(ctx->r9, 0X58B0);
    // 0x43005F24: sw          $t0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r8;
    // 0x43005F28: lw          $at, 0x8($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X8);
    // 0x43005F2C: sw          $t1, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r9;
    // 0x43005F30: lui         $t2, 0x4300
    ctx->r10 = S32(0X4300 << 16);
    // 0x43005F34: lui         $t3, 0x4300
    ctx->r11 = S32(0X4300 << 16);
    // 0x43005F38: lui         $t4, 0x4300
    ctx->r12 = S32(0X4300 << 16);
    // 0x43005F3C: lui         $t5, 0x4300
    ctx->r13 = S32(0X4300 << 16);
    // 0x43005F40: lui         $t6, 0x4300
    ctx->r14 = S32(0X4300 << 16);
    // 0x43005F44: lui         $t7, 0x4300
    ctx->r15 = S32(0X4300 << 16);
    // 0x43005F48: lui         $t8, 0x4300
    ctx->r24 = S32(0X4300 << 16);
    // 0x43005F4C: lui         $t9, 0x4300
    ctx->r25 = S32(0X4300 << 16);
    // 0x43005F50: lui         $t0, 0x4300
    ctx->r8 = S32(0X4300 << 16);
    // 0x43005F54: lui         $t1, 0x4300
    ctx->r9 = S32(0X4300 << 16);
    // 0x43005F58: addiu       $t2, $t2, 0x58D4
    ctx->r10 = ADD32(ctx->r10, 0X58D4);
    // 0x43005F5C: addiu       $t3, $t3, 0x58FC
    ctx->r11 = ADD32(ctx->r11, 0X58FC);
    // 0x43005F60: addiu       $t4, $t4, 0x5924
    ctx->r12 = ADD32(ctx->r12, 0X5924);
    // 0x43005F64: addiu       $t5, $t5, 0x5934
    ctx->r13 = ADD32(ctx->r13, 0X5934);
    // 0x43005F68: addiu       $t6, $t6, 0x5A84
    ctx->r14 = ADD32(ctx->r14, 0X5A84);
    // 0x43005F6C: addiu       $t7, $t7, 0x5C18
    ctx->r15 = ADD32(ctx->r15, 0X5C18);
    // 0x43005F70: addiu       $t8, $t8, 0x5C50
    ctx->r24 = ADD32(ctx->r24, 0X5C50);
    // 0x43005F74: addiu       $t9, $t9, 0x5D60
    ctx->r25 = ADD32(ctx->r25, 0X5D60);
    // 0x43005F78: addiu       $t0, $t0, 0x5C90
    ctx->r8 = ADD32(ctx->r8, 0X5C90);
    // 0x43005F7C: addiu       $t1, $t1, 0x5DFC
    ctx->r9 = ADD32(ctx->r9, 0X5DFC);
    // 0x43005F80: sw          $t2, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r10;
    // 0x43005F84: sw          $t3, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r11;
    // 0x43005F88: sw          $t4, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r12;
    // 0x43005F8C: sw          $t5, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r13;
    // 0x43005F90: sw          $t6, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r14;
    // 0x43005F94: sw          $t7, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r15;
    // 0x43005F98: sw          $t8, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r24;
    // 0x43005F9C: sw          $t9, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->r25;
    // 0x43005FA0: sw          $t0, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->r8;
    // 0x43005FA4: sw          $t1, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r9;
    // 0x43005FA8: sw          $at, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r1;
    // 0x43005FAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43005FB0: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x43005FB4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x43005FB8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x43005FBC: jr          $ra
    // 0x43005FC0: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x43005FC0: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x43005FC4: nop

    // 0x43005FC8: nop

    // 0x43005FCC: nop

;}
RECOMP_FUNC void ovl_boss_angel_5FD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005FD0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x43005FD4: jr          $ra
    // 0x43005FD8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x43005FD8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void ovl_boss_angel_5FDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43005FDC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43005FE0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x43005FE4: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x43005FE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43005FEC: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x43005FF0: lw          $a1, 0x4($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X4);
    // 0x43005FF4: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x43005FF8: jal         0x43000DC0
    // 0x43005FFC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_boss_angel_DC0(rdram, ctx);
        goto after_0;
    // 0x43005FFC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x43006000: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43006004: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43006008: jr          $ra
    // 0x4300600C: nop

    return;
    // 0x4300600C: nop

;}
RECOMP_FUNC void ovl_boss_angel_6010(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006010: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x43006014: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x43006018: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x4300601C: mtc1        $a1, $f14
    ctx->f14.u32l = ctx->r5;
    // 0x43006020: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x43006024: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x43006028: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x4300602C: lw          $a1, 0x4($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X4);
    // 0x43006030: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x43006034: cvt.d.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.d = CVT_D_S(ctx->f12.fl);
    // 0x43006038: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x4300603C: mfc1        $a2, $f5
    ctx->r6 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x43006040: cvt.d.s     $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f6.d = CVT_D_S(ctx->f14.fl);
    // 0x43006044: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x43006048: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x4300604C: swc1        $f11, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(11 - 1) * 2];
    // 0x43006050: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x43006054: swc1        $f7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(7 - 1) * 2];
    // 0x43006058: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x4300605C: jal         0x43000DC0
    // 0x43006060: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    ovl_boss_angel_DC0(rdram, ctx);
        goto after_0;
    // 0x43006060: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_0:
    // 0x43006064: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x43006068: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x4300606C: jr          $ra
    // 0x43006070: nop

    return;
    // 0x43006070: nop

;}
RECOMP_FUNC void ovl_boss_angel_6074(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006074: lw          $t6, 0x20($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X20);
    // 0x43006078: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4300607C: bne         $t6, $at, L_430060D0
    if (ctx->r14 != ctx->r1) {
        // 0x43006080: lui         $t8, 0x4301
        ctx->r24 = S32(0X4301 << 16);
            goto L_430060D0;
    }
    // 0x43006080: lui         $t8, 0x4301
    ctx->r24 = S32(0X4301 << 16);
    // 0x43006084: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x43006088: lw          $v1, -0x3FEC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3FEC);
    // 0x4300608C: lw          $v0, 0x70($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X70);
    // 0x43006090: nop

    // 0x43006094: beq         $v0, $v1, L_430060D0
    if (ctx->r2 == ctx->r3) {
        // 0x43006098: subu        $t7, $v1, $v0
        ctx->r15 = SUB32(ctx->r3, ctx->r2);
            goto L_430060D0;
    }
    // 0x43006098: subu        $t7, $v1, $v0
    ctx->r15 = SUB32(ctx->r3, ctx->r2);
    // 0x4300609C: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x430060A0: lwc1        $f4, 0x2C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x430060A4: bgez        $t7, L_430060BC
    if (SIGNED(ctx->r15) >= 0) {
        // 0x430060A8: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_430060BC;
    }
    // 0x430060A8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x430060AC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x430060B0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x430060B4: nop

    // 0x430060B8: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_430060BC:
    // 0x430060BC: mul.s       $f16, $f4, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x430060C0: lwc1        $f18, 0x28($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X28);
    // 0x430060C4: nop

    // 0x430060C8: add.s       $f6, $f18, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x430060CC: swc1        $f6, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f6.u32l;
L_430060D0:
    // 0x430060D0: lw          $t8, -0x3FEC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3FEC);
    // 0x430060D4: lwc1        $f0, 0x28($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X28);
    // 0x430060D8: jr          $ra
    // 0x430060DC: sw          $t8, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->r24;
    return;
    // 0x430060DC: sw          $t8, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->r24;
;}
RECOMP_FUNC void ovl_boss_angel_60E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430060E0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x430060E4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x430060E8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x430060EC: lw          $t6, 0x20($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X20);
    // 0x430060F0: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x430060F4: beq         $t6, $zero, L_43006130
    if (ctx->r14 == 0) {
        // 0x430060F8: swc1        $f12, 0x28($a0)
        MEM_W(0X28, ctx->r4) = ctx->f12.u32l;
            goto L_43006130;
    }
    // 0x430060F8: swc1        $f12, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f12.u32l;
    // 0x430060FC: lui         $t7, 0x4301
    ctx->r15 = S32(0X4301 << 16);
    // 0x43006100: lw          $t7, -0x3FEC($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3FEC);
    // 0x43006104: lw          $t8, 0x8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X8);
    // 0x43006108: sw          $t7, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->r15;
    // 0x4300610C: bltz        $t8, L_43006130
    if (SIGNED(ctx->r24) < 0) {
        // 0x43006110: addiu       $a0, $zero, 0x1A
        ctx->r4 = ADD32(0, 0X1A);
            goto L_43006130;
    }
    // 0x43006110: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    // 0x43006114: lw          $a1, 0x4($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X4);
    // 0x43006118: lw          $a2, 0x18($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X18);
    // 0x4300611C: cvt.d.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.d = CVT_D_S(ctx->f12.fl);
    // 0x43006120: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x43006124: swc1        $f5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(5 - 1) * 2];
    // 0x43006128: jal         0x43000DC0
    // 0x4300612C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    ovl_boss_angel_DC0(rdram, ctx);
        goto after_0;
    // 0x4300612C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_0:
L_43006130:
    // 0x43006130: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43006134: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x43006138: jr          $ra
    // 0x4300613C: nop

    return;
    // 0x4300613C: nop

;}
RECOMP_FUNC void ovl_boss_angel_6140(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006140: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x43006144: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x43006148: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x4300614C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x43006150: lw          $t9, 0x80($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X80);
    // 0x43006154: nop

    // 0x43006158: jalr        $t9
    // 0x4300615C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x4300615C: nop

    after_0:
    // 0x43006160: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x43006164: lwc1        $f0, 0x2C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x43006168: lw          $t6, 0x20($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X20);
    // 0x4300616C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x43006170: bne         $t6, $at, L_430061A4
    if (ctx->r14 != ctx->r1) {
        // 0x43006174: swc1        $f0, 0x2C($a3)
        MEM_W(0X2C, ctx->r7) = ctx->f0.u32l;
            goto L_430061A4;
    }
    // 0x43006174: swc1        $f0, 0x2C($a3)
    MEM_W(0X2C, ctx->r7) = ctx->f0.u32l;
    // 0x43006178: lw          $t7, 0x8($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X8);
    // 0x4300617C: addiu       $a0, $zero, 0x1B
    ctx->r4 = ADD32(0, 0X1B);
    // 0x43006180: bltz        $t7, L_430061A8
    if (SIGNED(ctx->r15) < 0) {
        // 0x43006184: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_430061A8;
    }
    // 0x43006184: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43006188: lw          $a1, 0x4($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X4);
    // 0x4300618C: lw          $a2, 0x18($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X18);
    // 0x43006190: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x43006194: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x43006198: swc1        $f5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(5 - 1) * 2];
    // 0x4300619C: jal         0x43000DC0
    // 0x430061A0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    ovl_boss_angel_DC0(rdram, ctx);
        goto after_1;
    // 0x430061A0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_1:
L_430061A4:
    // 0x430061A4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_430061A8:
    // 0x430061A8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x430061AC: jr          $ra
    // 0x430061B0: nop

    return;
    // 0x430061B0: nop

;}
RECOMP_FUNC void ovl_boss_angel_61B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430061B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x430061B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430061BC: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x430061C0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x430061C4: bne         $v0, $at, L_430061D8
    if (ctx->r2 != ctx->r1) {
        // 0x430061C8: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_430061D8;
    }
    // 0x430061C8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x430061CC: b           L_43006230
    // 0x430061D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_43006230;
    // 0x430061D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x430061D4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_430061D8:
    // 0x430061D8: bne         $v0, $at, L_43006230
    if (ctx->r2 != ctx->r1) {
        // 0x430061DC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_43006230;
    }
    // 0x430061DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x430061E0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x430061E4: lw          $t9, 0x80($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X80);
    // 0x430061E8: nop

    // 0x430061EC: jalr        $t9
    // 0x430061F0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x430061F0: nop

    after_0:
    // 0x430061F4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x430061F8: nop

    // 0x430061FC: lw          $t7, 0x24($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X24);
    // 0x43006200: lw          $t6, 0x30($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X30);
    // 0x43006204: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x43006208: addu        $t0, $t6, $t8
    ctx->r8 = ADD32(ctx->r14, ctx->r24);
    // 0x4300620C: lwc1        $f4, 0x4($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X4);
    // 0x43006210: nop

    // 0x43006214: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x43006218: nop

    // 0x4300621C: bc1f        L_43006230
    if (!c1cs) {
        // 0x43006220: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_43006230;
    }
    // 0x43006220: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x43006224: b           L_43006230
    // 0x43006228: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_43006230;
    // 0x43006228: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x4300622C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_43006230:
    // 0x43006230: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43006234: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43006238: jr          $ra
    // 0x4300623C: nop

    return;
    // 0x4300623C: nop

;}
RECOMP_FUNC void ovl_boss_angel_6240(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006240: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43006244: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x43006248: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x4300624C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x43006250: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43006254: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x43006258: lhu         $a2, 0x26($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X26);
    // 0x4300625C: lw          $a1, 0x4($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X4);
    // 0x43006260: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x43006264: jal         0x43000DC0
    // 0x43006268: addiu       $a0, $zero, 0x2D
    ctx->r4 = ADD32(0, 0X2D);
    ovl_boss_angel_DC0(rdram, ctx);
        goto after_0;
    // 0x43006268: addiu       $a0, $zero, 0x2D
    ctx->r4 = ADD32(0, 0X2D);
    after_0:
    // 0x4300626C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43006270: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x43006274: jr          $ra
    // 0x43006278: nop

    return;
    // 0x43006278: nop

;}
RECOMP_FUNC void ovl_boss_angel_627C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300627C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43006280: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43006284: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x43006288: lw          $a1, 0x4($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X4);
    // 0x4300628C: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    // 0x43006290: jal         0x43000DC0
    // 0x43006294: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_boss_angel_DC0(rdram, ctx);
        goto after_0;
    // 0x43006294: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x43006298: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4300629C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x430062A0: jr          $ra
    // 0x430062A4: nop

    return;
    // 0x430062A4: nop

;}
RECOMP_FUNC void ovl_boss_angel_62A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430062A8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x430062AC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x430062B0: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x430062B4: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x430062B8: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x430062BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x430062C0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x430062C4: lw          $a1, 0x4($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X4);
    // 0x430062C8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x430062CC: jal         0x43000DC0
    // 0x430062D0: addiu       $a0, $zero, 0x2F
    ctx->r4 = ADD32(0, 0X2F);
    ovl_boss_angel_DC0(rdram, ctx);
        goto after_0;
    // 0x430062D0: addiu       $a0, $zero, 0x2F
    ctx->r4 = ADD32(0, 0X2F);
    after_0:
    // 0x430062D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x430062D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x430062DC: jr          $ra
    // 0x430062E0: nop

    return;
    // 0x430062E0: nop

;}
RECOMP_FUNC void ovl_boss_angel_62E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430062E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x430062E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430062EC: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x430062F0: lw          $a1, 0x4($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X4);
    // 0x430062F4: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    // 0x430062F8: jal         0x43000DC0
    // 0x430062FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_boss_angel_DC0(rdram, ctx);
        goto after_0;
    // 0x430062FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x43006300: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43006304: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43006308: jr          $ra
    // 0x4300630C: nop

    return;
    // 0x4300630C: nop

;}
RECOMP_FUNC void ovl_boss_angel_6310(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006310: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43006314: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43006318: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x4300631C: lw          $t6, 0x34($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X34);
    // 0x43006320: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43006324: bne         $t6, $zero, L_4300635C
    if (ctx->r14 != 0) {
        // 0x43006328: lui         $a0, 0x4300
        ctx->r4 = S32(0X4300 << 16);
            goto L_4300635C;
    }
    // 0x43006328: lui         $a0, 0x4300
    ctx->r4 = S32(0X4300 << 16);
    // 0x4300632C: addiu       $a0, $a0, 0x66D8
    ctx->r4 = ADD32(ctx->r4, 0X66D8);
    // 0x43006330: ori         $a1, $zero, 0xFECF
    ctx->r5 = 0 | 0XFECF;
    // 0x43006334: addiu       $a2, $zero, 0x2000
    ctx->r6 = ADD32(0, 0X2000);
    // 0x43006338: jal         0x43000820
    // 0x4300633C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_boss_angel_820(rdram, ctx);
        goto after_0;
    // 0x4300633C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x43006340: sw          $v0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r2;
    // 0x43006344: lui         $a0, 0x4300
    ctx->r4 = S32(0X4300 << 16);
    // 0x43006348: sw          $s0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r16;
    // 0x4300634C: addiu       $a0, $a0, 0x67BC
    ctx->r4 = ADD32(ctx->r4, 0X67BC);
    // 0x43006350: jal         0x4300B300
    // 0x43006354: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_boss_angel_B300(rdram, ctx);
        goto after_1;
    // 0x43006354: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x43006358: sw          $v0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r2;
L_4300635C:
    // 0x4300635C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43006360: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43006364: jr          $ra
    // 0x43006368: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x43006368: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_boss_angel_636C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300636C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43006370: sll         $t6, $a1, 4
    ctx->r14 = S32(ctx->r5 << 4);
    // 0x43006374: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43006378: addu        $v0, $a0, $t6
    ctx->r2 = ADD32(ctx->r4, ctx->r14);
    // 0x4300637C: sw          $a2, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r6;
    // 0x43006380: sw          $a3, 0x40($v0)
    MEM_W(0X40, ctx->r2) = ctx->r7;
    // 0x43006384: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x43006388: nop

    // 0x4300638C: sw          $t7, 0x44($v0)
    MEM_W(0X44, ctx->r2) = ctx->r15;
    // 0x43006390: lh          $t8, 0x2E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X2E);
    // 0x43006394: sh          $zero, 0x4A($v0)
    MEM_H(0X4A, ctx->r2) = 0;
    // 0x43006398: jal         0x43006310
    // 0x4300639C: sh          $t8, 0x48($v0)
    MEM_H(0X48, ctx->r2) = ctx->r24;
    ovl_boss_angel_6310(rdram, ctx);
        goto after_0;
    // 0x4300639C: sh          $t8, 0x48($v0)
    MEM_H(0X48, ctx->r2) = ctx->r24;
    after_0:
    // 0x430063A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430063A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x430063A8: jr          $ra
    // 0x430063AC: nop

    return;
    // 0x430063AC: nop

;}
RECOMP_FUNC void ovl_boss_angel_63B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430063B0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x430063B4: sll         $t7, $a1, 4
    ctx->r15 = S32(ctx->r5 << 4);
    // 0x430063B8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x430063BC: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x430063C0: addu        $v1, $a0, $t7
    ctx->r3 = ADD32(ctx->r4, ctx->r15);
    // 0x430063C4: lh          $v0, 0x40($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X40);
    // 0x430063C8: lw          $t0, 0x44($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X44);
    // 0x430063CC: addiu       $at, $zero, -0x100
    ctx->r1 = ADD32(0, -0X100);
    // 0x430063D0: sra         $t8, $v0, 4
    ctx->r24 = S32(SIGNED(ctx->r2) >> 4);
    // 0x430063D4: andi        $t9, $t8, 0xFF
    ctx->r25 = ctx->r24 & 0XFF;
    // 0x430063D8: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x430063DC: or          $t2, $t1, $t9
    ctx->r10 = ctx->r9 | ctx->r25;
    // 0x430063E0: sw          $t2, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r10;
    // 0x430063E4: lhu         $t3, 0x4A($v1)
    ctx->r11 = MEM_HU(ctx->r3, 0X4A);
    // 0x430063E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x430063EC: bne         $t3, $zero, L_4300648C
    if (ctx->r11 != 0) {
        // 0x430063F0: nop
    
            goto L_4300648C;
    }
    // 0x430063F0: nop

    // 0x430063F4: lw          $t4, 0x40($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X40);
    // 0x430063F8: addiu       $v0, $sp, 0x2C
    ctx->r2 = ADD32(ctx->r29, 0X2C);
    // 0x430063FC: sw          $t4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r12;
    // 0x43006400: lh          $t5, 0x0($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X0);
    // 0x43006404: lh          $t7, 0x2($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X2);
    // 0x43006408: addiu       $t9, $zero, 0xFF0
    ctx->r25 = ADD32(0, 0XFF0);
    // 0x4300640C: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x43006410: sh          $t8, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r24;
    // 0x43006414: lh          $a0, 0x0($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X0);
    // 0x43006418: nop

    // 0x4300641C: slti        $at, $a0, -0xFF0
    ctx->r1 = SIGNED(ctx->r4) < -0XFF0 ? 1 : 0;
    // 0x43006420: beq         $at, $zero, L_43006438
    if (ctx->r1 == 0) {
        // 0x43006424: slti        $at, $a0, 0xFF1
        ctx->r1 = SIGNED(ctx->r4) < 0XFF1 ? 1 : 0;
            goto L_43006438;
    }
    // 0x43006424: slti        $at, $a0, 0xFF1
    ctx->r1 = SIGNED(ctx->r4) < 0XFF1 ? 1 : 0;
    // 0x43006428: sh          $zero, 0x0($v0)
    MEM_H(0X0, ctx->r2) = 0;
    // 0x4300642C: lh          $a0, 0x0($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X0);
    // 0x43006430: sh          $zero, 0x2($v0)
    MEM_H(0X2, ctx->r2) = 0;
    // 0x43006434: slti        $at, $a0, 0xFF1
    ctx->r1 = SIGNED(ctx->r4) < 0XFF1 ? 1 : 0;
L_43006438:
    // 0x43006438: bne         $at, $zero, L_43006448
    if (ctx->r1 != 0) {
        // 0x4300643C: nop
    
            goto L_43006448;
    }
    // 0x4300643C: nop

    // 0x43006440: sh          $t9, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r25;
    // 0x43006444: sh          $zero, 0x2($v0)
    MEM_H(0X2, ctx->r2) = 0;
L_43006448:
    // 0x43006448: lh          $t1, 0x48($v1)
    ctx->r9 = MEM_H(ctx->r3, 0X48);
    // 0x4300644C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x43006450: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x43006454: sh          $t2, 0x48($v1)
    MEM_H(0X48, ctx->r3) = ctx->r10;
    // 0x43006458: lh          $t6, 0x48($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X48);
    // 0x4300645C: sw          $t0, 0x40($v1)
    MEM_W(0X40, ctx->r3) = ctx->r8;
    // 0x43006460: bne         $t6, $zero, L_43006484
    if (ctx->r14 != 0) {
        // 0x43006464: nop
    
            goto L_43006484;
    }
    // 0x43006464: nop

    // 0x43006468: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x4300646C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x43006470: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x43006474: lw          $t9, 0xA0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XA0);
    // 0x43006478: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x4300647C: jalr        $t9
    // 0x43006480: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43006480: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
L_43006484:
    // 0x43006484: b           L_4300648C
    // 0x43006488: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_4300648C;
    // 0x43006488: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_4300648C:
    // 0x4300648C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43006490: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x43006494: jr          $ra
    // 0x43006498: nop

    return;
    // 0x43006498: nop

;}
RECOMP_FUNC void ovl_boss_angel_649C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300649C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x430064A0: sll         $t6, $a1, 4
    ctx->r14 = S32(ctx->r5 << 4);
    // 0x430064A4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x430064A8: addu        $v0, $a0, $t6
    ctx->r2 = ADD32(ctx->r4, ctx->r14);
    // 0x430064AC: lw          $t7, 0x40($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X40);
    // 0x430064B0: nop

    // 0x430064B4: sw          $t7, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r15;
    // 0x430064B8: lh          $t8, 0x48($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X48);
    // 0x430064BC: nop

    // 0x430064C0: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x430064C4: sh          $t9, 0x48($v0)
    MEM_H(0X48, ctx->r2) = ctx->r25;
    // 0x430064C8: lh          $t0, 0x48($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X48);
    // 0x430064CC: nop

    // 0x430064D0: bne         $t0, $zero, L_430064F4
    if (ctx->r8 != 0) {
        // 0x430064D4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_430064F4;
    }
    // 0x430064D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x430064D8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x430064DC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x430064E0: lw          $t9, 0xA0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XA0);
    // 0x430064E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x430064E8: jalr        $t9
    // 0x430064EC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x430064EC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x430064F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_430064F4:
    // 0x430064F4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x430064F8: jr          $ra
    // 0x430064FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x430064FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void ovl_boss_angel_6500(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006500: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x43006504: subu        $v0, $t6, $a3
    ctx->r2 = SUB32(ctx->r14, ctx->r7);
    // 0x43006508: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x4300650C: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x43006510: or          $t1, $a2, $zero
    ctx->r9 = ctx->r6 | 0;
    // 0x43006514: or          $t2, $a1, $zero
    ctx->r10 = ctx->r5 | 0;
    // 0x43006518: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
L_4300651C:
    // 0x4300651C: lbu         $t7, 0x0($t1)
    ctx->r15 = MEM_BU(ctx->r9, 0X0);
    // 0x43006520: lbu         $t9, 0x0($t2)
    ctx->r25 = MEM_BU(ctx->r10, 0X0);
    // 0x43006524: multu       $t7, $v0
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x43006528: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x4300652C: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x43006530: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x43006534: addiu       $t2, $t2, 0x1
    ctx->r10 = ADD32(ctx->r10, 0X1);
    // 0x43006538: mflo        $t8
    ctx->r24 = lo;
    // 0x4300653C: nop

    // 0x43006540: nop

    // 0x43006544: multu       $t9, $a3
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x43006548: mflo        $t4
    ctx->r12 = lo;
    // 0x4300654C: addu        $t5, $t8, $t4
    ctx->r13 = ADD32(ctx->r24, ctx->r12);
    // 0x43006550: sra         $t6, $t5, 8
    ctx->r14 = S32(SIGNED(ctx->r13) >> 8);
    // 0x43006554: bne         $v1, $t3, L_4300651C
    if (ctx->r3 != ctx->r11) {
        // 0x43006558: sb          $t6, -0x1($t0)
        MEM_B(-0X1, ctx->r8) = ctx->r14;
            goto L_4300651C;
    }
    // 0x43006558: sb          $t6, -0x1($t0)
    MEM_B(-0X1, ctx->r8) = ctx->r14;
    // 0x4300655C: jr          $ra
    // 0x43006560: nop

    return;
    // 0x43006560: nop

;}
RECOMP_FUNC void ovl_boss_angel_6564(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006564: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x43006568: sll         $t8, $a1, 4
    ctx->r24 = S32(ctx->r5 << 4);
    // 0x4300656C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43006570: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x43006574: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x43006578: addu        $t0, $a0, $t8
    ctx->r8 = ADD32(ctx->r4, ctx->r24);
    // 0x4300657C: lw          $v0, 0x40($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X40);
    // 0x43006580: lui         $t1, 0x4301
    ctx->r9 = S32(0X4301 << 16);
    // 0x43006584: sra         $v1, $v0, 8
    ctx->r3 = S32(SIGNED(ctx->r2) >> 8);
    // 0x43006588: sll         $t9, $v1, 2
    ctx->r25 = S32(ctx->r3 << 2);
    // 0x4300658C: addiu       $t1, $t1, -0x4444
    ctx->r9 = ADD32(ctx->r9, -0X4444);
    // 0x43006590: addu        $a2, $t9, $t1
    ctx->r6 = ADD32(ctx->r25, ctx->r9);
    // 0x43006594: addiu       $a1, $a2, 0x4
    ctx->r5 = ADD32(ctx->r6, 0X4);
    // 0x43006598: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x4300659C: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x430065A0: jal         0x43006500
    // 0x430065A4: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    ovl_boss_angel_6500(rdram, ctx);
        goto after_0;
    // 0x430065A4: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    after_0:
    // 0x430065A8: addiu       $t2, $zero, 0x80
    ctx->r10 = ADD32(0, 0X80);
    // 0x430065AC: sb          $t2, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r10;
    // 0x430065B0: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x430065B4: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x430065B8: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x430065BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x430065C0: sw          $t3, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r11;
    // 0x430065C4: lhu         $t4, 0x4A($t0)
    ctx->r12 = MEM_HU(ctx->r8, 0X4A);
    // 0x430065C8: addiu       $v1, $t0, 0x40
    ctx->r3 = ADD32(ctx->r8, 0X40);
    // 0x430065CC: bne         $t4, $zero, L_43006644
    if (ctx->r12 != 0) {
        // 0x430065D0: nop
    
            goto L_43006644;
    }
    // 0x430065D0: nop

    // 0x430065D4: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x430065D8: lw          $t7, 0x4($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X4);
    // 0x430065DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x430065E0: addu        $v0, $t5, $t7
    ctx->r2 = ADD32(ctx->r13, ctx->r15);
    // 0x430065E4: slti        $at, $v0, 0x601
    ctx->r1 = SIGNED(ctx->r2) < 0X601 ? 1 : 0;
    // 0x430065E8: bne         $at, $zero, L_43006604
    if (ctx->r1 != 0) {
        // 0x430065EC: sw          $v0, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r2;
            goto L_43006604;
    }
    // 0x430065EC: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_430065F0:
    // 0x430065F0: addiu       $t8, $v0, -0x600
    ctx->r24 = ADD32(ctx->r2, -0X600);
    // 0x430065F4: slti        $at, $t8, 0x601
    ctx->r1 = SIGNED(ctx->r24) < 0X601 ? 1 : 0;
    // 0x430065F8: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x430065FC: beq         $at, $zero, L_430065F0
    if (ctx->r1 == 0) {
        // 0x43006600: or          $v0, $t8, $zero
        ctx->r2 = ctx->r24 | 0;
            goto L_430065F0;
    }
    // 0x43006600: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
L_43006604:
    // 0x43006604: lh          $t9, 0x48($t0)
    ctx->r25 = MEM_H(ctx->r8, 0X48);
    // 0x43006608: nop

    // 0x4300660C: addiu       $t1, $t9, -0x1
    ctx->r9 = ADD32(ctx->r25, -0X1);
    // 0x43006610: sh          $t1, 0x48($t0)
    MEM_H(0X48, ctx->r8) = ctx->r9;
    // 0x43006614: lh          $t2, 0x48($t0)
    ctx->r10 = MEM_H(ctx->r8, 0X48);
    // 0x43006618: nop

    // 0x4300661C: bne         $t2, $zero, L_4300663C
    if (ctx->r10 != 0) {
        // 0x43006620: nop
    
            goto L_4300663C;
    }
    // 0x43006620: nop

    // 0x43006624: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x43006628: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x4300662C: lw          $t9, 0xA0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XA0);
    // 0x43006630: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x43006634: jalr        $t9
    // 0x43006638: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x43006638: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
L_4300663C:
    // 0x4300663C: b           L_43006644
    // 0x43006640: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_43006644;
    // 0x43006640: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_43006644:
    // 0x43006644: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43006648: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x4300664C: jr          $ra
    // 0x43006650: nop

    return;
    // 0x43006650: nop

;}
RECOMP_FUNC void ovl_boss_angel_6654(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006654: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x43006658: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x4300665C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x43006660: lw          $t6, 0x34($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X34);
    // 0x43006664: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43006668: beq         $t6, $zero, L_430066CC
    if (ctx->r14 == 0) {
        // 0x4300666C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_430066CC;
    }
    // 0x4300666C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43006670: jal         0x43000868
    // 0x43006674: nop

    ovl_boss_angel_868(rdram, ctx);
        goto after_0;
    // 0x43006674: nop

    after_0:
    // 0x43006678: lw          $t7, 0x34($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X34);
    // 0x4300667C: nop

    // 0x43006680: beq         $v0, $t7, L_430066A0
    if (ctx->r2 == ctx->r15) {
        // 0x43006684: nop
    
            goto L_430066A0;
    }
    // 0x43006684: nop

    // 0x43006688: lw          $a0, 0x38($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X38);
    // 0x4300668C: jal         0x4300B358
    // 0x43006690: nop

    ovl_boss_angel_B358(rdram, ctx);
        goto after_1;
    // 0x43006690: nop

    after_1:
    // 0x43006694: lw          $a0, 0x34($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X34);
    // 0x43006698: jal         0x4300082C
    // 0x4300669C: nop

    ovl_boss_angel_82C(rdram, ctx);
        goto after_2;
    // 0x4300669C: nop

    after_2:
L_430066A0:
    // 0x430066A0: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x430066A4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x430066A8: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    // 0x430066AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x430066B0: jal         0x43000DC0
    // 0x430066B4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_boss_angel_DC0(rdram, ctx);
        goto after_3;
    // 0x430066B4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x430066B8: sw          $zero, 0x34($s0)
    MEM_W(0X34, ctx->r16) = 0;
    // 0x430066BC: sw          $zero, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = 0;
    // 0x430066C0: sw          $zero, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = 0;
    // 0x430066C4: sw          $zero, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = 0;
    // 0x430066C8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_430066CC:
    // 0x430066CC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x430066D0: jr          $ra
    // 0x430066D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x430066D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_boss_angel_66D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430066D8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x430066DC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x430066E0: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x430066E4: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x430066E8: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x430066EC: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x430066F0: jal         0x43000868
    // 0x430066F4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    ovl_boss_angel_868(rdram, ctx);
        goto after_0;
    // 0x430066F4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    after_0:
    // 0x430066F8: lw          $s3, 0x1C($v0)
    ctx->r19 = MEM_W(ctx->r2, 0X1C);
    // 0x430066FC: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    // 0x43006700: lw          $a1, 0x4($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X4);
    // 0x43006704: lw          $a3, 0x6C($s3)
    ctx->r7 = MEM_W(ctx->r19, 0X6C);
    // 0x43006708: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x4300670C: jal         0x43000DC0
    // 0x43006710: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_boss_angel_DC0(rdram, ctx);
        goto after_1;
    // 0x43006710: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x43006714: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x43006718: addiu       $s4, $zero, 0x3
    ctx->r20 = ADD32(0, 0X3);
    // 0x4300671C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_43006720:
    // 0x43006720: or          $s1, $s3, $zero
    ctx->r17 = ctx->r19 | 0;
L_43006724:
    // 0x43006724: lw          $v0, 0x3C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X3C);
    // 0x43006728: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x4300672C: beq         $v0, $zero, L_4300673C
    if (ctx->r2 == 0) {
        // 0x43006730: or          $a1, $s0, $zero
        ctx->r5 = ctx->r16 | 0;
            goto L_4300673C;
    }
    // 0x43006730: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x43006734: jalr        $v0
    // 0x43006738: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x43006738: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    after_2:
L_4300673C:
    // 0x4300673C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x43006740: bne         $s0, $s4, L_43006724
    if (ctx->r16 != ctx->r20) {
        // 0x43006744: addiu       $s1, $s1, 0x10
        ctx->r17 = ADD32(ctx->r17, 0X10);
            goto L_43006724;
    }
    // 0x43006744: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    // 0x43006748: lw          $a1, 0x4($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X4);
    // 0x4300674C: lw          $a2, 0x6C($s3)
    ctx->r6 = MEM_W(ctx->r19, 0X6C);
    // 0x43006750: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x43006754: addiu       $a0, $zero, 0x27
    ctx->r4 = ADD32(0, 0X27);
    // 0x43006758: addiu       $a3, $zero, 0x28
    ctx->r7 = ADD32(0, 0X28);
    // 0x4300675C: sw          $a1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r5;
    // 0x43006760: jal         0x43000DC0
    // 0x43006764: sw          $a2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r6;
    ovl_boss_angel_DC0(rdram, ctx);
        goto after_3;
    // 0x43006764: sw          $a2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r6;
    after_3:
    // 0x43006768: beq         $s2, $zero, L_43006780
    if (ctx->r18 == 0) {
        // 0x4300676C: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_43006780;
    }
    // 0x4300676C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x43006770: jal         0x4300A1D8
    // 0x43006774: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    ovl_boss_angel_A1D8(rdram, ctx);
        goto after_4;
    // 0x43006774: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    after_4:
    // 0x43006778: b           L_43006720
    // 0x4300677C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
        goto L_43006720;
    // 0x4300677C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_43006780:
    // 0x43006780: lw          $a0, 0x38($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X38);
    // 0x43006784: jal         0x4300B358
    // 0x43006788: nop

    ovl_boss_angel_B358(rdram, ctx);
        goto after_5;
    // 0x43006788: nop

    after_5:
    // 0x4300678C: jal         0x43006654
    // 0x43006790: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    ovl_boss_angel_6654(rdram, ctx);
        goto after_6;
    // 0x43006790: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_6:
    // 0x43006794: jal         0x43000838
    // 0x43006798: nop

    ovl_boss_angel_838(rdram, ctx);
        goto after_7;
    // 0x43006798: nop

    after_7:
    // 0x4300679C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x430067A0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x430067A4: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x430067A8: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x430067AC: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x430067B0: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x430067B4: jr          $ra
    // 0x430067B8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x430067B8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_boss_angel_67BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430067BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x430067C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430067C4: jal         0x43006654
    // 0x430067C8: nop

    ovl_boss_angel_6654(rdram, ctx);
        goto after_0;
    // 0x430067C8: nop

    after_0:
    // 0x430067CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430067D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x430067D4: jr          $ra
    // 0x430067D8: nop

    return;
    // 0x430067D8: nop

;}
RECOMP_FUNC void ovl_boss_angel_67DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430067DC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x430067E0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x430067E4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x430067E8: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x430067EC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x430067F0: sw          $a1, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r5;
    // 0x430067F4: lw          $t9, 0x74($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X74);
    // 0x430067F8: nop

    // 0x430067FC: jalr        $t9
    // 0x43006800: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43006800: nop

    after_0:
    // 0x43006804: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x43006808: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x4300680C: sw          $t6, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r14;
    // 0x43006810: lui         $t7, 0x4301
    ctx->r15 = S32(0X4301 << 16);
    // 0x43006814: swc1        $f4, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f4.u32l;
    // 0x43006818: lw          $t7, -0x3FEC($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3FEC);
    // 0x4300681C: lw          $t8, 0x24($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X24);
    // 0x43006820: sw          $t7, 0x70($s0)
    MEM_W(0X70, ctx->r16) = ctx->r15;
    // 0x43006824: bltz        $t8, L_43006850
    if (SIGNED(ctx->r24) < 0) {
        // 0x43006828: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_43006850;
    }
    // 0x43006828: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x4300682C: lw          $t0, 0x8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X8);
    // 0x43006830: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x43006834: bltz        $t0, L_4300684C
    if (SIGNED(ctx->r8) < 0) {
        // 0x43006838: addiu       $a0, $zero, 0xB
        ctx->r4 = ADD32(0, 0XB);
            goto L_4300684C;
    }
    // 0x43006838: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    // 0x4300683C: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x43006840: lw          $a2, 0x18($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X18);
    // 0x43006844: jal         0x43000DC0
    // 0x43006848: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_boss_angel_DC0(rdram, ctx);
        goto after_1;
    // 0x43006848: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
L_4300684C:
    // 0x4300684C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43006850:
    // 0x43006850: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x43006854: jr          $ra
    // 0x43006858: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x43006858: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_boss_angel_685C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300685C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43006860: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43006864: lw          $t6, 0x20($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X20);
    // 0x43006868: nop

    // 0x4300686C: beq         $t6, $zero, L_430068B0
    if (ctx->r14 == 0) {
        // 0x43006870: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_430068B0;
    }
    // 0x43006870: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43006874: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x43006878: lw          $t9, 0x80($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X80);
    // 0x4300687C: nop

    // 0x43006880: jalr        $t9
    // 0x43006884: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43006884: nop

    after_0:
    // 0x43006888: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4300688C: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x43006890: lw          $t9, 0x74($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X74);
    // 0x43006894: nop

    // 0x43006898: jalr        $t9
    // 0x4300689C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x4300689C: nop

    after_1:
    // 0x430068A0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x430068A4: nop

    // 0x430068A8: sw          $zero, 0x20($a0)
    MEM_W(0X20, ctx->r4) = 0;
    // 0x430068AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_430068B0:
    // 0x430068B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x430068B4: jr          $ra
    // 0x430068B8: nop

    return;
    // 0x430068B8: nop

;}
RECOMP_FUNC void ovl_boss_angel_68BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430068BC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x430068C0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x430068C4: lw          $t6, 0x20($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X20);
    // 0x430068C8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x430068CC: bne         $t6, $at, L_43006920
    if (ctx->r14 != ctx->r1) {
        // 0x430068D0: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_43006920;
    }
    // 0x430068D0: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x430068D4: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    // 0x430068D8: lw          $t9, 0x80($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X80);
    // 0x430068DC: nop

    // 0x430068E0: jalr        $t9
    // 0x430068E4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x430068E4: nop

    after_0:
    // 0x430068E8: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x430068EC: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x430068F0: lw          $t8, 0x8($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X8);
    // 0x430068F4: addiu       $a0, $zero, 0x1B
    ctx->r4 = ADD32(0, 0X1B);
    // 0x430068F8: bltz        $t8, L_43006920
    if (SIGNED(ctx->r24) < 0) {
        // 0x430068FC: sw          $t7, 0x20($a3)
        MEM_W(0X20, ctx->r7) = ctx->r15;
            goto L_43006920;
    }
    // 0x430068FC: sw          $t7, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->r15;
    // 0x43006900: lw          $a1, 0x4($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X4);
    // 0x43006904: lw          $a2, 0x18($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X18);
    // 0x43006908: mtc1        $zero, $f5
    ctx->f_odd[(5 - 1) * 2] = 0;
    // 0x4300690C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x43006910: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x43006914: swc1        $f5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(5 - 1) * 2];
    // 0x43006918: jal         0x43000DC0
    // 0x4300691C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    ovl_boss_angel_DC0(rdram, ctx);
        goto after_1;
    // 0x4300691C: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_1:
L_43006920:
    // 0x43006920: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43006924: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x43006928: jr          $ra
    // 0x4300692C: nop

    return;
    // 0x4300692C: nop

;}
RECOMP_FUNC void ovl_boss_angel_6930(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006930: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x43006934: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x43006938: lw          $t6, 0x20($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X20);
    // 0x4300693C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x43006940: bne         $t6, $at, L_43006988
    if (ctx->r14 != ctx->r1) {
        // 0x43006944: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_43006988;
    }
    // 0x43006944: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x43006948: lui         $t7, 0x4301
    ctx->r15 = S32(0X4301 << 16);
    // 0x4300694C: lw          $t7, -0x3FEC($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3FEC);
    // 0x43006950: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x43006954: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x43006958: sw          $t8, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r24;
    // 0x4300695C: bltz        $t9, L_43006988
    if (SIGNED(ctx->r25) < 0) {
        // 0x43006960: sw          $t7, 0x70($a0)
        MEM_W(0X70, ctx->r4) = ctx->r15;
            goto L_43006988;
    }
    // 0x43006960: sw          $t7, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->r15;
    // 0x43006964: lwc1        $f4, 0x2C($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X2C);
    // 0x43006968: lw          $a1, 0x4($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X4);
    // 0x4300696C: lw          $a2, 0x18($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X18);
    // 0x43006970: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x43006974: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x43006978: swc1        $f7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(7 - 1) * 2];
    // 0x4300697C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x43006980: jal         0x43000DC0
    // 0x43006984: addiu       $a0, $zero, 0x1B
    ctx->r4 = ADD32(0, 0X1B);
    ovl_boss_angel_DC0(rdram, ctx);
        goto after_0;
    // 0x43006984: addiu       $a0, $zero, 0x1B
    ctx->r4 = ADD32(0, 0X1B);
    after_0:
L_43006988:
    // 0x43006988: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x4300698C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x43006990: jr          $ra
    // 0x43006994: nop

    return;
    // 0x43006994: nop

;}
RECOMP_FUNC void ovl_boss_angel_6998(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006998: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4300699C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430069A0: lw          $t6, 0x20($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X20);
    // 0x430069A4: nop

    // 0x430069A8: beq         $t6, $zero, L_430069C4
    if (ctx->r14 == 0) {
        // 0x430069AC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_430069C4;
    }
    // 0x430069AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430069B0: lw          $t9, 0x84($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X84);
    // 0x430069B4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x430069B8: jalr        $t9
    // 0x430069BC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x430069BC: nop

    after_0:
    // 0x430069C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_430069C4:
    // 0x430069C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x430069C8: jr          $ra
    // 0x430069CC: nop

    return;
    // 0x430069CC: nop

;}
