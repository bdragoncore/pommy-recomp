#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_stage_world6_52D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600052D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600052D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600052D8: jal         0x60000B98
    // 0x600052DC: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    ovl_stage_world6_B98(rdram, ctx);
        goto after_0;
    // 0x600052DC: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    after_0:
    // 0x600052E0: jal         0x60000BB0
    // 0x600052E4: addiu       $a0, $zero, 0xE8
    ctx->r4 = ADD32(0, 0XE8);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_1;
    // 0x600052E4: addiu       $a0, $zero, 0xE8
    ctx->r4 = ADD32(0, 0XE8);
    after_1:
    // 0x600052E8: bne         $v0, $zero, L_600052FC
    if (ctx->r2 != 0) {
        // 0x600052EC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600052FC;
    }
    // 0x600052EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600052F0: jal         0x60000E44
    // 0x600052F4: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    ovl_stage_world6_E44(rdram, ctx);
        goto after_2;
    // 0x600052F4: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    after_2:
    // 0x600052F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600052FC:
    // 0x600052FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60005300: jr          $ra
    // 0x60005304: nop

    return;
    // 0x60005304: nop

;}
RECOMP_FUNC void ovl_stage_world6_5308(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005308: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x6000530C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60005310: jal         0x60000BB0
    // 0x60005314: addiu       $a0, $zero, 0x122
    ctx->r4 = ADD32(0, 0X122);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_0;
    // 0x60005314: addiu       $a0, $zero, 0x122
    ctx->r4 = ADD32(0, 0X122);
    after_0:
    // 0x60005318: bne         $v0, $zero, L_60005344
    if (ctx->r2 != 0) {
        // 0x6000531C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60005344;
    }
    // 0x6000531C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005320: jal         0x60000BB0
    // 0x60005324: addiu       $a0, $zero, 0xA1
    ctx->r4 = ADD32(0, 0XA1);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_1;
    // 0x60005324: addiu       $a0, $zero, 0xA1
    ctx->r4 = ADD32(0, 0XA1);
    after_1:
    // 0x60005328: bne         $v0, $zero, L_60005344
    if (ctx->r2 != 0) {
        // 0x6000532C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60005344;
    }
    // 0x6000532C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005330: jal         0x60000B98
    // 0x60005334: addiu       $a0, $zero, 0x122
    ctx->r4 = ADD32(0, 0X122);
    ovl_stage_world6_B98(rdram, ctx);
        goto after_2;
    // 0x60005334: addiu       $a0, $zero, 0x122
    ctx->r4 = ADD32(0, 0X122);
    after_2:
    // 0x60005338: jal         0x60000A60
    // 0x6000533C: addiu       $a0, $zero, 0xC25
    ctx->r4 = ADD32(0, 0XC25);
    ovl_stage_world6_A60(rdram, ctx);
        goto after_3;
    // 0x6000533C: addiu       $a0, $zero, 0xC25
    ctx->r4 = ADD32(0, 0XC25);
    after_3:
    // 0x60005340: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005344:
    // 0x60005344: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60005348: jr          $ra
    // 0x6000534C: nop

    return;
    // 0x6000534C: nop

;}
RECOMP_FUNC void ovl_stage_world6_5350(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005350: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x60005354: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60005358: jal         0x60000DE4
    // 0x6000535C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world6_DE4(rdram, ctx);
        goto after_0;
    // 0x6000535C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x60005360: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x60005364: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60005368: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x6000536C: jal         0x600006C4
    // 0x60005370: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world6_6C4(rdram, ctx);
        goto after_1;
    // 0x60005370: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x60005374: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x60005378: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x6000537C: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x60005380: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x60005384: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x60005388: nop

    // 0x6000538C: bc1f        L_60005418
    if (!c1cs) {
        // 0x60005390: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60005418;
    }
    // 0x60005390: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005394: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x60005398: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x6000539C: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x600053A0: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x600053A4: bc1f        L_60005418
    if (!c1cs) {
        // 0x600053A8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60005418;
    }
    // 0x600053A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600053AC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x600053B0: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x600053B4: c.le.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl <= ctx->f10.fl;
    // 0x600053B8: nop

    // 0x600053BC: bc1f        L_60005418
    if (!c1cs) {
        // 0x600053C0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60005418;
    }
    // 0x600053C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600053C4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x600053C8: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x600053CC: c.lt.s      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.fl < ctx->f18.fl;
    // 0x600053D0: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x600053D4: bc1f        L_60005418
    if (!c1cs) {
        // 0x600053D8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60005418;
    }
    // 0x600053D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600053DC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x600053E0: addiu       $t6, $zero, 0x14
    ctx->r14 = ADD32(0, 0X14);
    // 0x600053E4: c.le.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl <= ctx->f6.fl;
    // 0x600053E8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x600053EC: bc1f        L_60005414
    if (!c1cs) {
        // 0x600053F0: addiu       $t8, $zero, 0xB
        ctx->r24 = ADD32(0, 0XB);
            goto L_60005414;
    }
    // 0x600053F0: addiu       $t8, $zero, 0xB
    ctx->r24 = ADD32(0, 0XB);
    // 0x600053F4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x600053F8: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x600053FC: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x60005400: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x60005404: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x60005408: addiu       $a1, $zero, 0x23
    ctx->r5 = ADD32(0, 0X23);
    // 0x6000540C: jal         0x600006C4
    // 0x60005410: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world6_6C4(rdram, ctx);
        goto after_2;
    // 0x60005410: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_2:
L_60005414:
    // 0x60005414: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005418:
    // 0x60005418: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x6000541C: jr          $ra
    // 0x60005420: nop

    return;
    // 0x60005420: nop

;}
RECOMP_FUNC void ovl_stage_world6_5424(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005424: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60005428: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x6000542C: jal         0x60000BB0
    // 0x60005430: addiu       $a0, $zero, 0x180
    ctx->r4 = ADD32(0, 0X180);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_0;
    // 0x60005430: addiu       $a0, $zero, 0x180
    ctx->r4 = ADD32(0, 0X180);
    after_0:
    // 0x60005434: bne         $v0, $zero, L_60005444
    if (ctx->r2 != 0) {
        // 0x60005438: addiu       $a0, $zero, 0xD
        ctx->r4 = ADD32(0, 0XD);
            goto L_60005444;
    }
    // 0x60005438: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    // 0x6000543C: jal         0x60000F04
    // 0x60005440: addiu       $a1, $zero, -0x9
    ctx->r5 = ADD32(0, -0X9);
    ovl_stage_world6_F04(rdram, ctx);
        goto after_1;
    // 0x60005440: addiu       $a1, $zero, -0x9
    ctx->r5 = ADD32(0, -0X9);
    after_1:
L_60005444:
    // 0x60005444: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005448: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x6000544C: jr          $ra
    // 0x60005450: nop

    return;
    // 0x60005450: nop

;}
RECOMP_FUNC void ovl_stage_world6_5454(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005454: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60005458: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x6000545C: jal         0x60000BB0
    // 0x60005460: addiu       $a0, $zero, 0x183
    ctx->r4 = ADD32(0, 0X183);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_0;
    // 0x60005460: addiu       $a0, $zero, 0x183
    ctx->r4 = ADD32(0, 0X183);
    after_0:
    // 0x60005464: bne         $v0, $zero, L_60005474
    if (ctx->r2 != 0) {
        // 0x60005468: addiu       $a0, $zero, 0x4
        ctx->r4 = ADD32(0, 0X4);
            goto L_60005474;
    }
    // 0x60005468: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x6000546C: jal         0x60000F04
    // 0x60005470: addiu       $a1, $zero, -0x9
    ctx->r5 = ADD32(0, -0X9);
    ovl_stage_world6_F04(rdram, ctx);
        goto after_1;
    // 0x60005470: addiu       $a1, $zero, -0x9
    ctx->r5 = ADD32(0, -0X9);
    after_1:
L_60005474:
    // 0x60005474: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005478: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x6000547C: jr          $ra
    // 0x60005480: nop

    return;
    // 0x60005480: nop

;}
RECOMP_FUNC void ovl_stage_world6_5484(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005484: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60005488: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x6000548C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x60005490: jal         0x60000F04
    // 0x60005494: addiu       $a1, $zero, -0x11
    ctx->r5 = ADD32(0, -0X11);
    ovl_stage_world6_F04(rdram, ctx);
        goto after_0;
    // 0x60005494: addiu       $a1, $zero, -0x11
    ctx->r5 = ADD32(0, -0X11);
    after_0:
    // 0x60005498: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000549C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600054A0: jr          $ra
    // 0x600054A4: nop

    return;
    // 0x600054A4: nop

;}
RECOMP_FUNC void ovl_stage_world6_54A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600054A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600054AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600054B0: jal         0x60000BB0
    // 0x600054B4: addiu       $a0, $zero, 0x18F
    ctx->r4 = ADD32(0, 0X18F);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_0;
    // 0x600054B4: addiu       $a0, $zero, 0x18F
    ctx->r4 = ADD32(0, 0X18F);
    after_0:
    // 0x600054B8: bne         $v0, $zero, L_600054D0
    if (ctx->r2 != 0) {
        // 0x600054BC: nop
    
            goto L_600054D0;
    }
    // 0x600054BC: nop

    // 0x600054C0: jal         0x60000BB0
    // 0x600054C4: addiu       $a0, $zero, 0x190
    ctx->r4 = ADD32(0, 0X190);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_1;
    // 0x600054C4: addiu       $a0, $zero, 0x190
    ctx->r4 = ADD32(0, 0X190);
    after_1:
    // 0x600054C8: beq         $v0, $zero, L_600054F4
    if (ctx->r2 == 0) {
        // 0x600054CC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600054F4;
    }
    // 0x600054CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600054D0:
    // 0x600054D0: jal         0x60000BB0
    // 0x600054D4: addiu       $a0, $zero, 0x194
    ctx->r4 = ADD32(0, 0X194);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_2;
    // 0x600054D4: addiu       $a0, $zero, 0x194
    ctx->r4 = ADD32(0, 0X194);
    after_2:
    // 0x600054D8: bne         $v0, $zero, L_600054F4
    if (ctx->r2 != 0) {
        // 0x600054DC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600054F4;
    }
    // 0x600054DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600054E0: jal         0x60000BA4
    // 0x600054E4: addiu       $a0, $zero, 0x18F
    ctx->r4 = ADD32(0, 0X18F);
    ovl_stage_world6_BA4(rdram, ctx);
        goto after_3;
    // 0x600054E4: addiu       $a0, $zero, 0x18F
    ctx->r4 = ADD32(0, 0X18F);
    after_3:
    // 0x600054E8: jal         0x60000BA4
    // 0x600054EC: addiu       $a0, $zero, 0x190
    ctx->r4 = ADD32(0, 0X190);
    ovl_stage_world6_BA4(rdram, ctx);
        goto after_4;
    // 0x600054EC: addiu       $a0, $zero, 0x190
    ctx->r4 = ADD32(0, 0X190);
    after_4:
    // 0x600054F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600054F4:
    // 0x600054F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600054F8: jr          $ra
    // 0x600054FC: nop

    return;
    // 0x600054FC: nop

;}
RECOMP_FUNC void ovl_stage_world6_5500(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005500: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60005504: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60005508: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x6000550C: jal         0x60000F04
    // 0x60005510: addiu       $a1, $zero, -0x2
    ctx->r5 = ADD32(0, -0X2);
    ovl_stage_world6_F04(rdram, ctx);
        goto after_0;
    // 0x60005510: addiu       $a1, $zero, -0x2
    ctx->r5 = ADD32(0, -0X2);
    after_0:
    // 0x60005514: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005518: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x6000551C: jr          $ra
    // 0x60005520: nop

    return;
    // 0x60005520: nop

;}
RECOMP_FUNC void ovl_stage_world6_5524(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005524: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60005528: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x6000552C: jal         0x60000C1C
    // 0x60005530: nop

    ovl_stage_world6_C1C(rdram, ctx);
        goto after_0;
    // 0x60005530: nop

    after_0:
    // 0x60005534: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x60005538: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x6000553C: beq         $v1, $at, L_60005554
    if (ctx->r3 == ctx->r1) {
        // 0x60005540: addiu       $at, $zero, 0x14
        ctx->r1 = ADD32(0, 0X14);
            goto L_60005554;
    }
    // 0x60005540: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x60005544: beq         $v1, $at, L_60005554
    if (ctx->r3 == ctx->r1) {
        // 0x60005548: addiu       $at, $zero, 0x1E
        ctx->r1 = ADD32(0, 0X1E);
            goto L_60005554;
    }
    // 0x60005548: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x6000554C: bne         $v1, $at, L_60005588
    if (ctx->r3 != ctx->r1) {
        // 0x60005550: addiu       $at, $zero, 0x15
        ctx->r1 = ADD32(0, 0X15);
            goto L_60005588;
    }
    // 0x60005550: addiu       $at, $zero, 0x15
    ctx->r1 = ADD32(0, 0X15);
L_60005554:
    // 0x60005554: jal         0x60000EEC
    // 0x60005558: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    ovl_stage_world6_EEC(rdram, ctx);
        goto after_1;
    // 0x60005558: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_1:
    // 0x6000555C: jal         0x60000EEC
    // 0x60005560: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    ovl_stage_world6_EEC(rdram, ctx);
        goto after_2;
    // 0x60005560: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    after_2:
    // 0x60005564: jal         0x60000EEC
    // 0x60005568: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    ovl_stage_world6_EEC(rdram, ctx);
        goto after_3;
    // 0x60005568: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    after_3:
    // 0x6000556C: jal         0x60000EEC
    // 0x60005570: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    ovl_stage_world6_EEC(rdram, ctx);
        goto after_4;
    // 0x60005570: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    after_4:
    // 0x60005574: jal         0x60000EEC
    // 0x60005578: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    ovl_stage_world6_EEC(rdram, ctx);
        goto after_5;
    // 0x60005578: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    after_5:
    // 0x6000557C: b           L_600055D0
    // 0x60005580: nop

        goto L_600055D0;
    // 0x60005580: nop

    // 0x60005584: addiu       $at, $zero, 0x15
    ctx->r1 = ADD32(0, 0X15);
L_60005588:
    // 0x60005588: beq         $v1, $at, L_600055A0
    if (ctx->r3 == ctx->r1) {
        // 0x6000558C: addiu       $at, $zero, 0x1F
        ctx->r1 = ADD32(0, 0X1F);
            goto L_600055A0;
    }
    // 0x6000558C: addiu       $at, $zero, 0x1F
    ctx->r1 = ADD32(0, 0X1F);
    // 0x60005590: beq         $v1, $at, L_600055A0
    if (ctx->r3 == ctx->r1) {
        // 0x60005594: addiu       $at, $zero, 0x20
        ctx->r1 = ADD32(0, 0X20);
            goto L_600055A0;
    }
    // 0x60005594: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x60005598: bne         $v1, $at, L_600055D0
    if (ctx->r3 != ctx->r1) {
        // 0x6000559C: nop
    
            goto L_600055D0;
    }
    // 0x6000559C: nop

L_600055A0:
    // 0x600055A0: jal         0x60000EEC
    // 0x600055A4: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    ovl_stage_world6_EEC(rdram, ctx);
        goto after_6;
    // 0x600055A4: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_6:
    // 0x600055A8: jal         0x60000EEC
    // 0x600055AC: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    ovl_stage_world6_EEC(rdram, ctx);
        goto after_7;
    // 0x600055AC: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_7:
    // 0x600055B0: jal         0x60000EEC
    // 0x600055B4: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    ovl_stage_world6_EEC(rdram, ctx);
        goto after_8;
    // 0x600055B4: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_8:
    // 0x600055B8: jal         0x60000EEC
    // 0x600055BC: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    ovl_stage_world6_EEC(rdram, ctx);
        goto after_9;
    // 0x600055BC: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    after_9:
    // 0x600055C0: jal         0x60000EEC
    // 0x600055C4: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    ovl_stage_world6_EEC(rdram, ctx);
        goto after_10;
    // 0x600055C4: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    after_10:
    // 0x600055C8: jal         0x60000EEC
    // 0x600055CC: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    ovl_stage_world6_EEC(rdram, ctx);
        goto after_11;
    // 0x600055CC: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    after_11:
L_600055D0:
    // 0x600055D0: jal         0x60000BB0
    // 0x600055D4: addiu       $a0, $zero, 0x184
    ctx->r4 = ADD32(0, 0X184);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_12;
    // 0x600055D4: addiu       $a0, $zero, 0x184
    ctx->r4 = ADD32(0, 0X184);
    after_12:
    // 0x600055D8: beq         $v0, $zero, L_600055F4
    if (ctx->r2 == 0) {
        // 0x600055DC: addiu       $a0, $zero, 0x7
        ctx->r4 = ADD32(0, 0X7);
            goto L_600055F4;
    }
    // 0x600055DC: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x600055E0: jal         0x60000E80
    // 0x600055E4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world6_E80(rdram, ctx);
        goto after_13;
    // 0x600055E4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_13:
    // 0x600055E8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x600055EC: jal         0x60000E80
    // 0x600055F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world6_E80(rdram, ctx);
        goto after_14;
    // 0x600055F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_14:
L_600055F4:
    // 0x600055F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600055F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600055FC: jr          $ra
    // 0x60005600: nop

    return;
    // 0x60005600: nop

;}
RECOMP_FUNC void ovl_stage_world6_5604(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005604: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x60005608: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x6000560C: jal         0x60000DE4
    // 0x60005610: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world6_DE4(rdram, ctx);
        goto after_0;
    // 0x60005610: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x60005614: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60005618: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x6000561C: jal         0x600006C4
    // 0x60005620: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world6_6C4(rdram, ctx);
        goto after_1;
    // 0x60005620: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x60005624: jal         0x60000BB0
    // 0x60005628: addiu       $a0, $zero, 0x130
    ctx->r4 = ADD32(0, 0X130);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_2;
    // 0x60005628: addiu       $a0, $zero, 0x130
    ctx->r4 = ADD32(0, 0X130);
    after_2:
    // 0x6000562C: beq         $v0, $zero, L_60005690
    if (ctx->r2 == 0) {
        // 0x60005630: lui         $at, 0x4316
        ctx->r1 = S32(0X4316 << 16);
            goto L_60005690;
    }
    // 0x60005630: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x60005634: lwc1        $f0, 0x20($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X20);
    // 0x60005638: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x6000563C: lui         $at, 0x4352
    ctx->r1 = S32(0X4352 << 16);
    // 0x60005640: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x60005644: nop

    // 0x60005648: bc1f        L_60005694
    if (!c1cs) {
        // 0x6000564C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60005694;
    }
    // 0x6000564C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005650: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60005654: nop

    // 0x60005658: c.le.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl <= ctx->f6.fl;
    // 0x6000565C: nop

    // 0x60005660: bc1f        L_60005694
    if (!c1cs) {
        // 0x60005664: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60005694;
    }
    // 0x60005664: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005668: jal         0x60000BB0
    // 0x6000566C: addiu       $a0, $zero, 0x12F
    ctx->r4 = ADD32(0, 0X12F);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_3;
    // 0x6000566C: addiu       $a0, $zero, 0x12F
    ctx->r4 = ADD32(0, 0X12F);
    after_3:
    // 0x60005670: bne         $v0, $zero, L_60005694
    if (ctx->r2 != 0) {
        // 0x60005674: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60005694;
    }
    // 0x60005674: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005678: jal         0x60000B98
    // 0x6000567C: addiu       $a0, $zero, 0x12F
    ctx->r4 = ADD32(0, 0X12F);
    ovl_stage_world6_B98(rdram, ctx);
        goto after_4;
    // 0x6000567C: addiu       $a0, $zero, 0x12F
    ctx->r4 = ADD32(0, 0X12F);
    after_4:
    // 0x60005680: addiu       $a0, $zero, 0x87B
    ctx->r4 = ADD32(0, 0X87B);
    // 0x60005684: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x60005688: jal         0x60000C10
    // 0x6000568C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_stage_world6_C10(rdram, ctx);
        goto after_5;
    // 0x6000568C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
L_60005690:
    // 0x60005690: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005694:
    // 0x60005694: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x60005698: jr          $ra
    // 0x6000569C: nop

    return;
    // 0x6000569C: nop

;}
RECOMP_FUNC void ovl_stage_world6_56A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600056A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600056A4: slti        $at, $a0, 0x61
    ctx->r1 = SIGNED(ctx->r4) < 0X61 ? 1 : 0;
    // 0x600056A8: bne         $at, $zero, L_600056CC
    if (ctx->r1 != 0) {
        // 0x600056AC: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_600056CC;
    }
    // 0x600056AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600056B0: addiu       $at, $zero, 0x62
    ctx->r1 = ADD32(0, 0X62);
    // 0x600056B4: beq         $a0, $at, L_60005B8C
    if (ctx->r4 == ctx->r1) {
        // 0x600056B8: addiu       $at, $zero, 0x63
        ctx->r1 = ADD32(0, 0X63);
            goto L_60005B8C;
    }
    // 0x600056B8: addiu       $at, $zero, 0x63
    ctx->r1 = ADD32(0, 0X63);
    // 0x600056BC: beq         $a0, $at, L_60005B9C
    if (ctx->r4 == ctx->r1) {
        // 0x600056C0: nop
    
            goto L_60005B9C;
    }
    // 0x600056C0: nop

    // 0x600056C4: b           L_60005BA8
    // 0x600056C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005BA8;
    // 0x600056C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600056CC:
    // 0x600056CC: slti        $at, $a0, 0x44
    ctx->r1 = SIGNED(ctx->r4) < 0X44 ? 1 : 0;
    // 0x600056D0: bne         $at, $zero, L_600056E8
    if (ctx->r1 != 0) {
        // 0x600056D4: addiu       $at, $zero, 0x60
        ctx->r1 = ADD32(0, 0X60);
            goto L_600056E8;
    }
    // 0x600056D4: addiu       $at, $zero, 0x60
    ctx->r1 = ADD32(0, 0X60);
    // 0x600056D8: beq         $a0, $at, L_60005B7C
    if (ctx->r4 == ctx->r1) {
        // 0x600056DC: nop
    
            goto L_60005B7C;
    }
    // 0x600056DC: nop

    // 0x600056E0: b           L_60005BA8
    // 0x600056E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005BA8;
    // 0x600056E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600056E8:
    // 0x600056E8: sltiu       $at, $a0, 0x44
    ctx->r1 = ctx->r4 < 0X44 ? 1 : 0;
    // 0x600056EC: beq         $at, $zero, L_60005BA4
    if (ctx->r1 == 0) {
        // 0x600056F0: sll         $t6, $a0, 2
        ctx->r14 = S32(ctx->r4 << 2);
            goto L_60005BA4;
    }
    // 0x600056F0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x600056F4: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600056F8: addu        $at, $at, $t6
    gpr jr_addend_60005704 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x600056FC: lw          $t6, 0x64CC($at)
    ctx->r14 = ADD32(ctx->r1, 0X64CC);
    // 0x60005700: nop

    // 0x60005704: jr          $t6
    // 0x60005708: nop

    switch (jr_addend_60005704 >> 2) {
        case 0: goto L_6000570C; break;
        case 1: goto L_6000571C; break;
        case 2: goto L_6000572C; break;
        case 3: goto L_6000573C; break;
        case 4: goto L_6000574C; break;
        case 5: goto L_6000575C; break;
        case 6: goto L_6000576C; break;
        case 7: goto L_6000577C; break;
        case 8: goto L_6000578C; break;
        case 9: goto L_6000579C; break;
        case 10: goto L_600057AC; break;
        case 11: goto L_600057BC; break;
        case 12: goto L_600057CC; break;
        case 13: goto L_600057DC; break;
        case 14: goto L_600057EC; break;
        case 15: goto L_600057FC; break;
        case 16: goto L_6000580C; break;
        case 17: goto L_6000581C; break;
        case 18: goto L_6000582C; break;
        case 19: goto L_6000583C; break;
        case 20: goto L_6000584C; break;
        case 21: goto L_6000585C; break;
        case 22: goto L_6000586C; break;
        case 23: goto L_6000587C; break;
        case 24: goto L_6000588C; break;
        case 25: goto L_6000589C; break;
        case 26: goto L_600058AC; break;
        case 27: goto L_600058BC; break;
        case 28: goto L_600058CC; break;
        case 29: goto L_600058DC; break;
        case 30: goto L_600058EC; break;
        case 31: goto L_600058FC; break;
        case 32: goto L_6000590C; break;
        case 33: goto L_6000591C; break;
        case 34: goto L_6000592C; break;
        case 35: goto L_6000593C; break;
        case 36: goto L_6000594C; break;
        case 37: goto L_6000595C; break;
        case 38: goto L_6000596C; break;
        case 39: goto L_6000597C; break;
        case 40: goto L_6000598C; break;
        case 41: goto L_6000599C; break;
        case 42: goto L_600059AC; break;
        case 43: goto L_600059BC; break;
        case 44: goto L_600059CC; break;
        case 45: goto L_600059DC; break;
        case 46: goto L_600059EC; break;
        case 47: goto L_600059FC; break;
        case 48: goto L_60005A0C; break;
        case 49: goto L_60005A1C; break;
        case 50: goto L_60005A2C; break;
        case 51: goto L_60005A3C; break;
        case 52: goto L_60005A4C; break;
        case 53: goto L_60005A5C; break;
        case 54: goto L_60005A84; break;
        case 55: goto L_60005AAC; break;
        case 56: goto L_60005ABC; break;
        case 57: goto L_60005ACC; break;
        case 58: goto L_60005ADC; break;
        case 59: goto L_60005AEC; break;
        case 60: goto L_60005AFC; break;
        case 61: goto L_60005B0C; break;
        case 62: goto L_60005B1C; break;
        case 63: goto L_60005B2C; break;
        case 64: goto L_60005B3C; break;
        case 65: goto L_60005B4C; break;
        case 66: goto L_60005B5C; break;
        case 67: goto L_60005B6C; break;
        default: switch_error(__func__, 0x60005704, 0x600064CC);
    }
    // 0x60005708: nop

L_6000570C:
    // 0x6000570C: jal         0x60004900
    // 0x60005710: nop

    ovl_stage_world6_4900(rdram, ctx);
        goto after_0;
    // 0x60005710: nop

    after_0:
    // 0x60005714: b           L_60005BA8
    // 0x60005718: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005BA8;
    // 0x60005718: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000571C:
    // 0x6000571C: jal         0x600029A8
    // 0x60005720: nop

    ovl_stage_world6_29A8(rdram, ctx);
        goto after_1;
    // 0x60005720: nop

    after_1:
    // 0x60005724: b           L_60005BA8
    // 0x60005728: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005BA8;
    // 0x60005728: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000572C:
    // 0x6000572C: jal         0x60002BE4
    // 0x60005730: nop

    ovl_stage_world6_2BE4(rdram, ctx);
        goto after_2;
    // 0x60005730: nop

    after_2:
    // 0x60005734: b           L_60005BA8
    // 0x60005738: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005BA8;
    // 0x60005738: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000573C:
    // 0x6000573C: jal         0x60002C78
    // 0x60005740: nop

    ovl_stage_world6_2C78(rdram, ctx);
        goto after_3;
    // 0x60005740: nop

    after_3:
    // 0x60005744: b           L_60005BA8
    // 0x60005748: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005BA8;
    // 0x60005748: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000574C:
    // 0x6000574C: jal         0x60002D08
    // 0x60005750: nop

    ovl_stage_world6_2D08(rdram, ctx);
        goto after_4;
    // 0x60005750: nop

    after_4:
    // 0x60005754: b           L_60005BA8
    // 0x60005758: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005BA8;
    // 0x60005758: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000575C:
    // 0x6000575C: jal         0x60002DE8
    // 0x60005760: nop

    ovl_stage_world6_2DE8(rdram, ctx);
        goto after_5;
    // 0x60005760: nop

    after_5:
    // 0x60005764: b           L_60005BA8
    // 0x60005768: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005BA8;
    // 0x60005768: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000576C:
    // 0x6000576C: jal         0x60002F14
    // 0x60005770: nop

    ovl_stage_world6_2F14(rdram, ctx);
        goto after_6;
    // 0x60005770: nop

    after_6:
    // 0x60005774: b           L_60005BA8
    // 0x60005778: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005BA8;
    // 0x60005778: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000577C:
    // 0x6000577C: jal         0x60002F44
    // 0x60005780: nop

    ovl_stage_world6_2F44(rdram, ctx);
        goto after_7;
    // 0x60005780: nop

    after_7:
    // 0x60005784: b           L_60005BA8
    // 0x60005788: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005BA8;
    // 0x60005788: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000578C:
    // 0x6000578C: jal         0x60003154
    // 0x60005790: nop

    ovl_stage_world6_3154(rdram, ctx);
        goto after_8;
    // 0x60005790: nop

    after_8:
    // 0x60005794: b           L_60005BA8
    // 0x60005798: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005BA8;
    // 0x60005798: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000579C:
    // 0x6000579C: jal         0x600031C0
    // 0x600057A0: nop

    ovl_stage_world6_31C0(rdram, ctx);
        goto after_9;
    // 0x600057A0: nop

    after_9:
    // 0x600057A4: b           L_60005BA8
    // 0x600057A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005BA8;
    // 0x600057A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600057AC:
    // 0x600057AC: jal         0x60003220
    // 0x600057B0: nop

    ovl_stage_world6_3220(rdram, ctx);
        goto after_10;
    // 0x600057B0: nop

    after_10:
    // 0x600057B4: b           L_60005BA8
    // 0x600057B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005BA8;
    // 0x600057B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600057BC:
    // 0x600057BC: jal         0x600032EC
    // 0x600057C0: nop

    ovl_stage_world6_32EC(rdram, ctx);
        goto after_11;
    // 0x600057C0: nop

    after_11:
    // 0x600057C4: b           L_60005BA8
    // 0x600057C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005BA8;
    // 0x600057C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600057CC:
    // 0x600057CC: jal         0x600034E0
    // 0x600057D0: nop

    ovl_stage_world6_34E0(rdram, ctx);
        goto after_12;
    // 0x600057D0: nop

    after_12:
    // 0x600057D4: b           L_60005BA8
    // 0x600057D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005BA8;
    // 0x600057D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600057DC:
    // 0x600057DC: jal         0x600035B8
    // 0x600057E0: nop

    ovl_stage_world6_35B8(rdram, ctx);
        goto after_13;
    // 0x600057E0: nop

    after_13:
    // 0x600057E4: b           L_60005BA8
    // 0x600057E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005BA8;
    // 0x600057E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600057EC:
    // 0x600057EC: jal         0x60003650
    // 0x600057F0: nop

    ovl_stage_world6_3650(rdram, ctx);
        goto after_14;
    // 0x600057F0: nop

    after_14:
    // 0x600057F4: b           L_60005BA8
    // 0x600057F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005BA8;
    // 0x600057F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600057FC:
    // 0x600057FC: jal         0x600036E8
    // 0x60005800: nop

    ovl_stage_world6_36E8(rdram, ctx);
        goto after_15;
    // 0x60005800: nop

    after_15:
    // 0x60005804: b           L_60005BA8
    // 0x60005808: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005BA8;
    // 0x60005808: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000580C:
    // 0x6000580C: jal         0x600037BC
    // 0x60005810: nop

    ovl_stage_world6_37BC(rdram, ctx);
        goto after_16;
    // 0x60005810: nop

    after_16:
    // 0x60005814: b           L_60005BA8
    // 0x60005818: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005BA8;
    // 0x60005818: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000581C:
    // 0x6000581C: jal         0x60003940
    // 0x60005820: nop

    ovl_stage_world6_3940(rdram, ctx);
        goto after_17;
    // 0x60005820: nop

    after_17:
    // 0x60005824: b           L_60005BA8
    // 0x60005828: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005BA8;
    // 0x60005828: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000582C:
    // 0x6000582C: jal         0x60003998
    // 0x60005830: nop

    ovl_stage_world6_3998(rdram, ctx);
        goto after_18;
    // 0x60005830: nop

    after_18:
    // 0x60005834: b           L_60005BA8
    // 0x60005838: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005BA8;
    // 0x60005838: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000583C:
    // 0x6000583C: jal         0x60003ACC
    // 0x60005840: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world6_3ACC(rdram, ctx);
        goto after_19;
    // 0x60005840: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_19:
    // 0x60005844: b           L_60005BA8
    // 0x60005848: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005BA8;
    // 0x60005848: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000584C:
    // 0x6000584C: jal         0x60003ACC
    // 0x60005850: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world6_3ACC(rdram, ctx);
        goto after_20;
    // 0x60005850: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_20:
    // 0x60005854: b           L_60005BA8
    // 0x60005858: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005BA8;
    // 0x60005858: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000585C:
    // 0x6000585C: jal         0x60003ACC
    // 0x60005860: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_stage_world6_3ACC(rdram, ctx);
        goto after_21;
    // 0x60005860: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_21:
    // 0x60005864: b           L_60005BA8
    // 0x60005868: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005BA8;
    // 0x60005868: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000586C:
    // 0x6000586C: jal         0x60003ACC
    // 0x60005870: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    ovl_stage_world6_3ACC(rdram, ctx);
        goto after_22;
    // 0x60005870: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_22:
    // 0x60005874: b           L_60005BA8
    // 0x60005878: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005BA8;
    // 0x60005878: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000587C:
    // 0x6000587C: jal         0x60003ACC
    // 0x60005880: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    ovl_stage_world6_3ACC(rdram, ctx);
        goto after_23;
    // 0x60005880: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_23:
    // 0x60005884: b           L_60005BA8
    // 0x60005888: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005BA8;
    // 0x60005888: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000588C:
    // 0x6000588C: jal         0x60003ACC
    // 0x60005890: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    ovl_stage_world6_3ACC(rdram, ctx);
        goto after_24;
    // 0x60005890: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_24:
    // 0x60005894: b           L_60005BA8
    // 0x60005898: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005BA8;
    // 0x60005898: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000589C:
    // 0x6000589C: jal         0x60003C34
    // 0x600058A0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world6_3C34(rdram, ctx);
        goto after_25;
    // 0x600058A0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_25:
    // 0x600058A4: b           L_60005BA8
    // 0x600058A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005BA8;
    // 0x600058A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600058AC:
    // 0x600058AC: jal         0x60003C34
    // 0x600058B0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world6_3C34(rdram, ctx);
        goto after_26;
    // 0x600058B0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_26:
    // 0x600058B4: b           L_60005BA8
    // 0x600058B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005BA8;
    // 0x600058B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600058BC:
    // 0x600058BC: jal         0x60003C34
    // 0x600058C0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_stage_world6_3C34(rdram, ctx);
        goto after_27;
    // 0x600058C0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_27:
    // 0x600058C4: b           L_60005BA8
    // 0x600058C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005BA8;
    // 0x600058C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600058CC:
    // 0x600058CC: jal         0x60003C34
    // 0x600058D0: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    ovl_stage_world6_3C34(rdram, ctx);
        goto after_28;
    // 0x600058D0: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_28:
    // 0x600058D4: b           L_60005BA8
    // 0x600058D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005BA8;
    // 0x600058D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600058DC:
    // 0x600058DC: jal         0x60003C34
    // 0x600058E0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    ovl_stage_world6_3C34(rdram, ctx);
        goto after_29;
    // 0x600058E0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_29:
    // 0x600058E4: b           L_60005BA8
    // 0x600058E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005BA8;
    // 0x600058E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600058EC:
    // 0x600058EC: jal         0x60003C98
    // 0x600058F0: nop

    ovl_stage_world6_3C98(rdram, ctx);
        goto after_30;
    // 0x600058F0: nop

    after_30:
    // 0x600058F4: b           L_60005BA8
    // 0x600058F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005BA8;
    // 0x600058F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600058FC:
    // 0x600058FC: jal         0x60002850
    // 0x60005900: nop

    ovl_stage_world6_2850(rdram, ctx);
        goto after_31;
    // 0x60005900: nop

    after_31:
    // 0x60005904: b           L_60005BA8
    // 0x60005908: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005BA8;
    // 0x60005908: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000590C:
    // 0x6000590C: jal         0x60003CE8
    // 0x60005910: nop

    ovl_stage_world6_3CE8(rdram, ctx);
        goto after_32;
    // 0x60005910: nop

    after_32:
    // 0x60005914: b           L_60005BA8
    // 0x60005918: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005BA8;
    // 0x60005918: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000591C:
    // 0x6000591C: jal         0x600040F0
    // 0x60005920: nop

    ovl_stage_world6_40F0(rdram, ctx);
        goto after_33;
    // 0x60005920: nop

    after_33:
    // 0x60005924: b           L_60005BA8
    // 0x60005928: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005BA8;
    // 0x60005928: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000592C:
    // 0x6000592C: jal         0x600042DC
    // 0x60005930: nop

    ovl_stage_world6_42DC(rdram, ctx);
        goto after_34;
    // 0x60005930: nop

    after_34:
    // 0x60005934: b           L_60005BA8
    // 0x60005938: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005BA8;
    // 0x60005938: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000593C:
    // 0x6000593C: jal         0x6000446C
    // 0x60005940: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world6_446C(rdram, ctx);
        goto after_35;
    // 0x60005940: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_35:
    // 0x60005944: b           L_60005BA8
    // 0x60005948: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005BA8;
    // 0x60005948: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000594C:
    // 0x6000594C: jal         0x6000446C
    // 0x60005950: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world6_446C(rdram, ctx);
        goto after_36;
    // 0x60005950: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_36:
    // 0x60005954: b           L_60005BA8
    // 0x60005958: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005BA8;
    // 0x60005958: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000595C:
    // 0x6000595C: jal         0x6000446C
    // 0x60005960: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_stage_world6_446C(rdram, ctx);
        goto after_37;
    // 0x60005960: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_37:
    // 0x60005964: b           L_60005BA8
    // 0x60005968: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005BA8;
    // 0x60005968: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000596C:
    // 0x6000596C: jal         0x60004588
    // 0x60005970: nop

    ovl_stage_world6_4588(rdram, ctx);
        goto after_38;
    // 0x60005970: nop

    after_38:
    // 0x60005974: b           L_60005BA8
    // 0x60005978: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005BA8;
    // 0x60005978: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000597C:
    // 0x6000597C: jal         0x60004648
    // 0x60005980: nop

    ovl_stage_world6_4648(rdram, ctx);
        goto after_39;
    // 0x60005980: nop

    after_39:
    // 0x60005984: b           L_60005BA8
    // 0x60005988: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005BA8;
    // 0x60005988: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000598C:
    // 0x6000598C: jal         0x60004668
    // 0x60005990: nop

    ovl_stage_world6_4668(rdram, ctx);
        goto after_40;
    // 0x60005990: nop

    after_40:
    // 0x60005994: b           L_60005BA8
    // 0x60005998: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005BA8;
    // 0x60005998: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000599C:
    // 0x6000599C: jal         0x600046A8
    // 0x600059A0: nop

    ovl_stage_world6_46A8(rdram, ctx);
        goto after_41;
    // 0x600059A0: nop

    after_41:
    // 0x600059A4: b           L_60005BA8
    // 0x600059A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005BA8;
    // 0x600059A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600059AC:
    // 0x600059AC: jal         0x60004748
    // 0x600059B0: nop

    ovl_stage_world6_4748(rdram, ctx);
        goto after_42;
    // 0x600059B0: nop

    after_42:
    // 0x600059B4: b           L_60005BA8
    // 0x600059B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005BA8;
    // 0x600059B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600059BC:
    // 0x600059BC: jal         0x600047C0
    // 0x600059C0: nop

    ovl_stage_world6_47C0(rdram, ctx);
        goto after_43;
    // 0x600059C0: nop

    after_43:
    // 0x600059C4: b           L_60005BA8
    // 0x600059C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005BA8;
    // 0x600059C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600059CC:
    // 0x600059CC: jal         0x60004BA0
    // 0x600059D0: nop

    ovl_stage_world6_4BA0(rdram, ctx);
        goto after_44;
    // 0x600059D0: nop

    after_44:
    // 0x600059D4: b           L_60005BA8
    // 0x600059D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005BA8;
    // 0x600059D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600059DC:
    // 0x600059DC: jal         0x60004DB0
    // 0x600059E0: nop

    ovl_stage_world6_4DB0(rdram, ctx);
        goto after_45;
    // 0x600059E0: nop

    after_45:
    // 0x600059E4: b           L_60005BA8
    // 0x600059E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005BA8;
    // 0x600059E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600059EC:
    // 0x600059EC: jal         0x60004E60
    // 0x600059F0: nop

    ovl_stage_world6_4E60(rdram, ctx);
        goto after_46;
    // 0x600059F0: nop

    after_46:
    // 0x600059F4: b           L_60005BA8
    // 0x600059F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005BA8;
    // 0x600059F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600059FC:
    // 0x600059FC: jal         0x60004E9C
    // 0x60005A00: nop

    ovl_stage_world6_4E9C(rdram, ctx);
        goto after_47;
    // 0x60005A00: nop

    after_47:
    // 0x60005A04: b           L_60005BA8
    // 0x60005A08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005BA8;
    // 0x60005A08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005A0C:
    // 0x60005A0C: jal         0x60004ECC
    // 0x60005A10: nop

    ovl_stage_world6_4ECC(rdram, ctx);
        goto after_48;
    // 0x60005A10: nop

    after_48:
    // 0x60005A14: b           L_60005BA8
    // 0x60005A18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005BA8;
    // 0x60005A18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005A1C:
    // 0x60005A1C: jal         0x60004F20
    // 0x60005A20: nop

    ovl_stage_world6_4F20(rdram, ctx);
        goto after_49;
    // 0x60005A20: nop

    after_49:
    // 0x60005A24: b           L_60005BA8
    // 0x60005A28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005BA8;
    // 0x60005A28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005A2C:
    // 0x60005A2C: jal         0x60004F78
    // 0x60005A30: nop

    ovl_stage_world6_4F78(rdram, ctx);
        goto after_50;
    // 0x60005A30: nop

    after_50:
    // 0x60005A34: b           L_60005BA8
    // 0x60005A38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005BA8;
    // 0x60005A38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005A3C:
    // 0x60005A3C: jal         0x60004FC0
    // 0x60005A40: nop

    ovl_stage_world6_4FC0(rdram, ctx);
        goto after_51;
    // 0x60005A40: nop

    after_51:
    // 0x60005A44: b           L_60005BA8
    // 0x60005A48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005BA8;
    // 0x60005A48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005A4C:
    // 0x60005A4C: jal         0x60005008
    // 0x60005A50: nop

    ovl_stage_world6_5008(rdram, ctx);
        goto after_52;
    // 0x60005A50: nop

    after_52:
    // 0x60005A54: b           L_60005BA8
    // 0x60005A58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005BA8;
    // 0x60005A58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005A5C:
    // 0x60005A5C: jal         0x60000BB0
    // 0x60005A60: addiu       $a0, $zero, 0x85
    ctx->r4 = ADD32(0, 0X85);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_53;
    // 0x60005A60: addiu       $a0, $zero, 0x85
    ctx->r4 = ADD32(0, 0X85);
    after_53:
    // 0x60005A64: bne         $v0, $zero, L_60005A74
    if (ctx->r2 != 0) {
        // 0x60005A68: nop
    
            goto L_60005A74;
    }
    // 0x60005A68: nop

    // 0x60005A6C: jal         0x60001028
    // 0x60005A70: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world6_1028(rdram, ctx);
        goto after_54;
    // 0x60005A70: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_54:
L_60005A74:
    // 0x60005A74: jal         0x60000268
    // 0x60005A78: nop

    ovl_stage_world6_268(rdram, ctx);
        goto after_55;
    // 0x60005A78: nop

    after_55:
    // 0x60005A7C: b           L_60005BA8
    // 0x60005A80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005BA8;
    // 0x60005A80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005A84:
    // 0x60005A84: jal         0x60000DE4
    // 0x60005A88: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world6_DE4(rdram, ctx);
        goto after_56;
    // 0x60005A88: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_56:
    // 0x60005A8C: jal         0x60000CC4
    // 0x60005A90: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_stage_world6_CC4(rdram, ctx);
        goto after_57;
    // 0x60005A90: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_57:
    // 0x60005A94: jal         0x60000A6C
    // 0x60005A98: nop

    ovl_stage_world6_A6C(rdram, ctx);
        goto after_58;
    // 0x60005A98: nop

    after_58:
    // 0x60005A9C: jal         0x60000C7C
    // 0x60005AA0: nop

    ovl_stage_world6_C7C(rdram, ctx);
        goto after_59;
    // 0x60005AA0: nop

    after_59:
    // 0x60005AA4: b           L_60005BA8
    // 0x60005AA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005BA8;
    // 0x60005AA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005AAC:
    // 0x60005AAC: jal         0x600052D0
    // 0x60005AB0: nop

    ovl_stage_world6_52D0(rdram, ctx);
        goto after_60;
    // 0x60005AB0: nop

    after_60:
    // 0x60005AB4: b           L_60005BA8
    // 0x60005AB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005BA8;
    // 0x60005AB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005ABC:
    // 0x60005ABC: jal         0x60005308
    // 0x60005AC0: nop

    ovl_stage_world6_5308(rdram, ctx);
        goto after_61;
    // 0x60005AC0: nop

    after_61:
    // 0x60005AC4: b           L_60005BA8
    // 0x60005AC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005BA8;
    // 0x60005AC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005ACC:
    // 0x60005ACC: jal         0x60005350
    // 0x60005AD0: nop

    ovl_stage_world6_5350(rdram, ctx);
        goto after_62;
    // 0x60005AD0: nop

    after_62:
    // 0x60005AD4: b           L_60005BA8
    // 0x60005AD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005BA8;
    // 0x60005AD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005ADC:
    // 0x60005ADC: jal         0x60005424
    // 0x60005AE0: nop

    ovl_stage_world6_5424(rdram, ctx);
        goto after_63;
    // 0x60005AE0: nop

    after_63:
    // 0x60005AE4: b           L_60005BA8
    // 0x60005AE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005BA8;
    // 0x60005AE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005AEC:
    // 0x60005AEC: jal         0x60005454
    // 0x60005AF0: nop

    ovl_stage_world6_5454(rdram, ctx);
        goto after_64;
    // 0x60005AF0: nop

    after_64:
    // 0x60005AF4: b           L_60005BA8
    // 0x60005AF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005BA8;
    // 0x60005AF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005AFC:
    // 0x60005AFC: jal         0x60005484
    // 0x60005B00: nop

    ovl_stage_world6_5484(rdram, ctx);
        goto after_65;
    // 0x60005B00: nop

    after_65:
    // 0x60005B04: b           L_60005BA8
    // 0x60005B08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005BA8;
    // 0x60005B08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005B0C:
    // 0x60005B0C: jal         0x60000268
    // 0x60005B10: nop

    ovl_stage_world6_268(rdram, ctx);
        goto after_66;
    // 0x60005B10: nop

    after_66:
    // 0x60005B14: b           L_60005BA8
    // 0x60005B18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005BA8;
    // 0x60005B18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005B1C:
    // 0x60005B1C: jal         0x60005500
    // 0x60005B20: nop

    ovl_stage_world6_5500(rdram, ctx);
        goto after_67;
    // 0x60005B20: nop

    after_67:
    // 0x60005B24: b           L_60005BA8
    // 0x60005B28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005BA8;
    // 0x60005B28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005B2C:
    // 0x60005B2C: jal         0x600054A8
    // 0x60005B30: nop

    ovl_stage_world6_54A8(rdram, ctx);
        goto after_68;
    // 0x60005B30: nop

    after_68:
    // 0x60005B34: b           L_60005BA8
    // 0x60005B38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005BA8;
    // 0x60005B38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005B3C:
    // 0x60005B3C: jal         0x60005524
    // 0x60005B40: nop

    ovl_stage_world6_5524(rdram, ctx);
        goto after_69;
    // 0x60005B40: nop

    after_69:
    // 0x60005B44: b           L_60005BA8
    // 0x60005B48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005BA8;
    // 0x60005B48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005B4C:
    // 0x60005B4C: jal         0x60002D78
    // 0x60005B50: nop

    ovl_stage_world6_2D78(rdram, ctx);
        goto after_70;
    // 0x60005B50: nop

    after_70:
    // 0x60005B54: b           L_60005BA8
    // 0x60005B58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005BA8;
    // 0x60005B58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005B5C:
    // 0x60005B5C: jal         0x60003540
    // 0x60005B60: nop

    ovl_stage_world6_3540(rdram, ctx);
        goto after_71;
    // 0x60005B60: nop

    after_71:
    // 0x60005B64: b           L_60005BA8
    // 0x60005B68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005BA8;
    // 0x60005B68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005B6C:
    // 0x60005B6C: jal         0x60005604
    // 0x60005B70: nop

    ovl_stage_world6_5604(rdram, ctx);
        goto after_72;
    // 0x60005B70: nop

    after_72:
    // 0x60005B74: b           L_60005BA8
    // 0x60005B78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005BA8;
    // 0x60005B78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005B7C:
    // 0x60005B7C: jal         0x60005264
    // 0x60005B80: nop

    ovl_stage_world6_5264(rdram, ctx);
        goto after_73;
    // 0x60005B80: nop

    after_73:
    // 0x60005B84: b           L_60005BA8
    // 0x60005B88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005BA8;
    // 0x60005B88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005B8C:
    // 0x60005B8C: jal         0x60005114
    // 0x60005B90: nop

    ovl_stage_world6_5114(rdram, ctx);
        goto after_74;
    // 0x60005B90: nop

    after_74:
    // 0x60005B94: b           L_60005BA8
    // 0x60005B98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005BA8;
    // 0x60005B98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005B9C:
    // 0x60005B9C: jal         0x60000EE0
    // 0x60005BA0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world6_EE0(rdram, ctx);
        goto after_75;
    // 0x60005BA0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_75:
L_60005BA4:
    // 0x60005BA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005BA8:
    // 0x60005BA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60005BAC: jr          $ra
    // 0x60005BB0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x60005BB0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void ovl_stage_world7_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000000: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60000004: jr          $ra
    // 0x60000008: addiu       $v0, $v0, 0x56A4
    ctx->r2 = ADD32(ctx->r2, 0X56A4);
    return;
    // 0x60000008: addiu       $v0, $v0, 0x56A4
    ctx->r2 = ADD32(ctx->r2, 0X56A4);
    // 0x6000000C: nop

;}
RECOMP_FUNC void ovl_stage_world7_10(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world7_1C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world7_28(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world7_34(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world7_40(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world7_4C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world7_58(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world7_64(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world7_70(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world7_7C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world7_88(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world7_94(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world7_A0(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world7_AC(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world7_B8(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world7_C4(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world7_D0(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world7_DC(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world7_E8(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world7_F4(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world7_100(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world7_10C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world7_118(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world7_124(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world7_130(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world7_13C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world7_148(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world7_154(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world7_160(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world7_16C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world7_178(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world7_184(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world7_190(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world7_19C(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world7_1A8(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world7_1B4(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world7_1C0(uint8_t* rdram, recomp_context* ctx) {
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
RECOMP_FUNC void ovl_stage_world7_1CC(uint8_t* rdram, recomp_context* ctx) {
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
