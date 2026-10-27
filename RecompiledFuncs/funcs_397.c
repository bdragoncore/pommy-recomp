#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_stage_world8_4410(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004410: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x60004414: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x60004418: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x6000441C: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x60004420: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x60004424: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x60004428: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x6000442C: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x60004430: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x60004434: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x60004438: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x6000443C: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x60004440: jal         0x60000C1C
    // 0x60004444: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    ovl_stage_world8_C1C(rdram, ctx);
        goto after_0;
    // 0x60004444: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x60004448: jal         0x60000244
    // 0x6000444C: addiu       $a0, $zero, 0x1D2
    ctx->r4 = ADD32(0, 0X1D2);
    ovl_stage_world8_244(rdram, ctx);
        goto after_1;
    // 0x6000444C: addiu       $a0, $zero, 0x1D2
    ctx->r4 = ADD32(0, 0X1D2);
    after_1:
    // 0x60004450: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x60004454: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x60004458: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x6000445C: addiu       $s2, $zero, 0xA0
    ctx->r18 = ADD32(0, 0XA0);
    // 0x60004460: addiu       $s1, $sp, 0x58
    ctx->r17 = ADD32(ctx->r29, 0X58);
L_60004464:
    // 0x60004464: jal         0x60000E74
    // 0x60004468: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_stage_world8_E74(rdram, ctx);
        goto after_2;
    // 0x60004468: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_2:
    // 0x6000446C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60004470: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x60004474: jal         0x600006C4
    // 0x60004478: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_3;
    // 0x60004478: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_3:
    // 0x6000447C: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x60004480: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x60004484: jal         0x60000E74
    // 0x60004488: swc1        $f20, 0x30($t6)
    MEM_W(0X30, ctx->r14) = ctx->f20.u32l;
    ovl_stage_world8_E74(rdram, ctx);
        goto after_4;
    // 0x60004488: swc1        $f20, 0x30($t6)
    MEM_W(0X30, ctx->r14) = ctx->f20.u32l;
    after_4:
    // 0x6000448C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60004490: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x60004494: jal         0x600006C4
    // 0x60004498: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_5;
    // 0x60004498: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_5:
    // 0x6000449C: jal         0x600009D0
    // 0x600044A0: nop

    ovl_stage_world8_9D0(rdram, ctx);
        goto after_6;
    // 0x600044A0: nop

    after_6:
    // 0x600044A4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x600044A8: bne         $s0, $s2, L_60004464
    if (ctx->r16 != ctx->r18) {
        // 0x600044AC: nop
    
            goto L_60004464;
    }
    // 0x600044AC: nop

    // 0x600044B0: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x600044B4: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x600044B8: lui         $at, 0x442F
    ctx->r1 = S32(0X442F << 16);
    // 0x600044BC: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x600044C0: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x600044C4: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x600044C8: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x600044CC: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x600044D0: nop

L_600044D4:
    // 0x600044D4: jal         0x60000DE4
    // 0x600044D8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world8_DE4(rdram, ctx);
        goto after_7;
    // 0x600044D8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_7:
    // 0x600044DC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600044E0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x600044E4: jal         0x600006C4
    // 0x600044E8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_8;
    // 0x600044E8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_8:
    // 0x600044EC: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x600044F0: lwc1        $f0, 0x60($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X60);
    // 0x600044F4: c.lt.s      $f4, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f4.fl < ctx->f20.fl;
    // 0x600044F8: nop

    // 0x600044FC: bc1t        L_60004544
    if (c1cs) {
        // 0x60004500: nop
    
            goto L_60004544;
    }
    // 0x60004500: nop

    // 0x60004504: c.lt.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl < ctx->f22.fl;
    // 0x60004508: nop

    // 0x6000450C: bc1t        L_60004544
    if (c1cs) {
        // 0x60004510: nop
    
            goto L_60004544;
    }
    // 0x60004510: nop

    // 0x60004514: c.le.s      $f24, $f4
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f24.fl <= ctx->f4.fl;
    // 0x60004518: nop

    // 0x6000451C: bc1t        L_60004544
    if (c1cs) {
        // 0x60004520: nop
    
            goto L_60004544;
    }
    // 0x60004520: nop

    // 0x60004524: c.le.s      $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f26.fl <= ctx->f0.fl;
    // 0x60004528: nop

    // 0x6000452C: bc1t        L_60004544
    if (c1cs) {
        // 0x60004530: nop
    
            goto L_60004544;
    }
    // 0x60004530: nop

    // 0x60004534: jal         0x600009D0
    // 0x60004538: nop

    ovl_stage_world8_9D0(rdram, ctx);
        goto after_9;
    // 0x60004538: nop

    after_9:
    // 0x6000453C: b           L_600044D4
    // 0x60004540: nop

        goto L_600044D4;
    // 0x60004540: nop

L_60004544:
    // 0x60004544: jal         0x60000B98
    // 0x60004548: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_10;
    // 0x60004548: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    after_10:
    // 0x6000454C: jal         0x60000BA4
    // 0x60004550: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    ovl_stage_world8_BA4(rdram, ctx);
        goto after_11;
    // 0x60004550: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    after_11:
    // 0x60004554: jal         0x60000BA4
    // 0x60004558: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    ovl_stage_world8_BA4(rdram, ctx);
        goto after_12;
    // 0x60004558: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    after_12:
    // 0x6000455C: jal         0x60000BA4
    // 0x60004560: addiu       $a0, $zero, 0x101
    ctx->r4 = ADD32(0, 0X101);
    ovl_stage_world8_BA4(rdram, ctx);
        goto after_13;
    // 0x60004560: addiu       $a0, $zero, 0x101
    ctx->r4 = ADD32(0, 0X101);
    after_13:
    // 0x60004564: jal         0x60000BA4
    // 0x60004568: addiu       $a0, $zero, 0x102
    ctx->r4 = ADD32(0, 0X102);
    ovl_stage_world8_BA4(rdram, ctx);
        goto after_14;
    // 0x60004568: addiu       $a0, $zero, 0x102
    ctx->r4 = ADD32(0, 0X102);
    after_14:
    // 0x6000456C: jal         0x60000BA4
    // 0x60004570: addiu       $a0, $zero, 0x103
    ctx->r4 = ADD32(0, 0X103);
    ovl_stage_world8_BA4(rdram, ctx);
        goto after_15;
    // 0x60004570: addiu       $a0, $zero, 0x103
    ctx->r4 = ADD32(0, 0X103);
    after_15:
    // 0x60004574: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x60004578: jal         0x60000E68
    // 0x6000457C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world8_E68(rdram, ctx);
        goto after_16;
    // 0x6000457C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_16:
    // 0x60004580: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x60004584: jal         0x60000E68
    // 0x60004588: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world8_E68(rdram, ctx);
        goto after_17;
    // 0x60004588: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_17:
    // 0x6000458C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x60004590: jal         0x60000E68
    // 0x60004594: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world8_E68(rdram, ctx);
        goto after_18;
    // 0x60004594: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_18:
    // 0x60004598: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x6000459C: jal         0x60000E68
    // 0x600045A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world8_E68(rdram, ctx);
        goto after_19;
    // 0x600045A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_19:
    // 0x600045A4: jal         0x600009AC
    // 0x600045A8: nop

    ovl_stage_world8_9AC(rdram, ctx);
        goto after_20;
    // 0x600045A8: nop

    after_20:
    // 0x600045AC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x600045B0: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x600045B4: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x600045B8: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x600045BC: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x600045C0: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x600045C4: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x600045C8: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x600045CC: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x600045D0: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x600045D4: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x600045D8: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x600045DC: jr          $ra
    // 0x600045E0: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x600045E0: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void ovl_stage_world8_45E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600045E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600045E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600045EC: jal         0x60000BB0
    // 0x600045F0: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_0;
    // 0x600045F0: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    after_0:
    // 0x600045F4: bne         $v0, $zero, L_60004630
    if (ctx->r2 != 0) {
        // 0x600045F8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60004630;
    }
    // 0x600045F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600045FC: jal         0x60000BB0
    // 0x60004600: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_1;
    // 0x60004600: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    after_1:
    // 0x60004604: bne         $v0, $zero, L_60004630
    if (ctx->r2 != 0) {
        // 0x60004608: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60004630;
    }
    // 0x60004608: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000460C: jal         0x60000B98
    // 0x60004610: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_2;
    // 0x60004610: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    after_2:
    // 0x60004614: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60004618: addiu       $a0, $a0, 0x4410
    ctx->r4 = ADD32(ctx->r4, 0X4410);
    // 0x6000461C: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60004620: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60004624: jal         0x60000994
    // 0x60004628: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world8_994(rdram, ctx);
        goto after_3;
    // 0x60004628: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x6000462C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60004630:
    // 0x60004630: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60004634: jr          $ra
    // 0x60004638: nop

    return;
    // 0x60004638: nop

;}
RECOMP_FUNC void ovl_stage_world8_463C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000463C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60004640: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60004644: jal         0x60000A60
    // 0x60004648: addiu       $a0, $zero, 0xA99
    ctx->r4 = ADD32(0, 0XA99);
    ovl_stage_world8_A60(rdram, ctx);
        goto after_0;
    // 0x60004648: addiu       $a0, $zero, 0xA99
    ctx->r4 = ADD32(0, 0XA99);
    after_0:
    // 0x6000464C: jal         0x600009C4
    // 0x60004650: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    ovl_stage_world8_9C4(rdram, ctx);
        goto after_1;
    // 0x60004650: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    after_1:
    // 0x60004654: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x60004658: jal         0x60000E68
    // 0x6000465C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world8_E68(rdram, ctx);
        goto after_2;
    // 0x6000465C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x60004660: jal         0x600009C4
    // 0x60004664: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    ovl_stage_world8_9C4(rdram, ctx);
        goto after_3;
    // 0x60004664: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    after_3:
    // 0x60004668: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x6000466C: jal         0x60000E68
    // 0x60004670: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world8_E68(rdram, ctx);
        goto after_4;
    // 0x60004670: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x60004674: jal         0x600009C4
    // 0x60004678: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_stage_world8_9C4(rdram, ctx);
        goto after_5;
    // 0x60004678: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_5:
    // 0x6000467C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60004680: jal         0x600011AC
    // 0x60004684: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world8_11AC(rdram, ctx);
        goto after_6;
    // 0x60004684: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x60004688: jal         0x60000B98
    // 0x6000468C: addiu       $a0, $zero, 0x10F
    ctx->r4 = ADD32(0, 0X10F);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_7;
    // 0x6000468C: addiu       $a0, $zero, 0x10F
    ctx->r4 = ADD32(0, 0X10F);
    after_7:
    // 0x60004690: jal         0x600009AC
    // 0x60004694: nop

    ovl_stage_world8_9AC(rdram, ctx);
        goto after_8;
    // 0x60004694: nop

    after_8:
    // 0x60004698: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000469C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600046A0: jr          $ra
    // 0x600046A4: nop

    return;
    // 0x600046A4: nop

;}
RECOMP_FUNC void ovl_stage_world8_46A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600046A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600046AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600046B0: jal         0x60000BB0
    // 0x600046B4: addiu       $a0, $zero, 0x10F
    ctx->r4 = ADD32(0, 0X10F);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_0;
    // 0x600046B4: addiu       $a0, $zero, 0x10F
    ctx->r4 = ADD32(0, 0X10F);
    after_0:
    // 0x600046B8: bne         $v0, $zero, L_60004764
    if (ctx->r2 != 0) {
        // 0x600046BC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60004764;
    }
    // 0x600046BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600046C0: jal         0x60000BB0
    // 0x600046C4: addiu       $a0, $zero, 0x19B
    ctx->r4 = ADD32(0, 0X19B);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_1;
    // 0x600046C4: addiu       $a0, $zero, 0x19B
    ctx->r4 = ADD32(0, 0X19B);
    after_1:
    // 0x600046C8: bne         $v0, $zero, L_60004764
    if (ctx->r2 != 0) {
        // 0x600046CC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60004764;
    }
    // 0x600046CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600046D0: jal         0x60000BB0
    // 0x600046D4: addiu       $a0, $zero, 0x10C
    ctx->r4 = ADD32(0, 0X10C);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_2;
    // 0x600046D4: addiu       $a0, $zero, 0x10C
    ctx->r4 = ADD32(0, 0X10C);
    after_2:
    // 0x600046D8: bne         $v0, $zero, L_600046F0
    if (ctx->r2 != 0) {
        // 0x600046DC: nop
    
            goto L_600046F0;
    }
    // 0x600046DC: nop

    // 0x600046E0: jal         0x60000B98
    // 0x600046E4: addiu       $a0, $zero, 0x10C
    ctx->r4 = ADD32(0, 0X10C);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_3;
    // 0x600046E4: addiu       $a0, $zero, 0x10C
    ctx->r4 = ADD32(0, 0X10C);
    after_3:
    // 0x600046E8: b           L_60004764
    // 0x600046EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60004764;
    // 0x600046EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600046F0:
    // 0x600046F0: jal         0x60000BB0
    // 0x600046F4: addiu       $a0, $zero, 0x10D
    ctx->r4 = ADD32(0, 0X10D);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_4;
    // 0x600046F4: addiu       $a0, $zero, 0x10D
    ctx->r4 = ADD32(0, 0X10D);
    after_4:
    // 0x600046F8: bne         $v0, $zero, L_60004710
    if (ctx->r2 != 0) {
        // 0x600046FC: nop
    
            goto L_60004710;
    }
    // 0x600046FC: nop

    // 0x60004700: jal         0x60000B98
    // 0x60004704: addiu       $a0, $zero, 0x10D
    ctx->r4 = ADD32(0, 0X10D);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_5;
    // 0x60004704: addiu       $a0, $zero, 0x10D
    ctx->r4 = ADD32(0, 0X10D);
    after_5:
    // 0x60004708: b           L_60004764
    // 0x6000470C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60004764;
    // 0x6000470C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60004710:
    // 0x60004710: jal         0x60000BB0
    // 0x60004714: addiu       $a0, $zero, 0x10E
    ctx->r4 = ADD32(0, 0X10E);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_6;
    // 0x60004714: addiu       $a0, $zero, 0x10E
    ctx->r4 = ADD32(0, 0X10E);
    after_6:
    // 0x60004718: bne         $v0, $zero, L_60004730
    if (ctx->r2 != 0) {
        // 0x6000471C: nop
    
            goto L_60004730;
    }
    // 0x6000471C: nop

    // 0x60004720: jal         0x60000B98
    // 0x60004724: addiu       $a0, $zero, 0x10E
    ctx->r4 = ADD32(0, 0X10E);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_7;
    // 0x60004724: addiu       $a0, $zero, 0x10E
    ctx->r4 = ADD32(0, 0X10E);
    after_7:
    // 0x60004728: b           L_60004764
    // 0x6000472C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60004764;
    // 0x6000472C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60004730:
    // 0x60004730: jal         0x60000BB0
    // 0x60004734: addiu       $a0, $zero, 0x10F
    ctx->r4 = ADD32(0, 0X10F);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_8;
    // 0x60004734: addiu       $a0, $zero, 0x10F
    ctx->r4 = ADD32(0, 0X10F);
    after_8:
    // 0x60004738: bne         $v0, $zero, L_60004760
    if (ctx->r2 != 0) {
        // 0x6000473C: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_60004760;
    }
    // 0x6000473C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60004740: jal         0x600011AC
    // 0x60004744: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world8_11AC(rdram, ctx);
        goto after_9;
    // 0x60004744: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_9:
    // 0x60004748: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x6000474C: addiu       $a0, $a0, 0x463C
    ctx->r4 = ADD32(ctx->r4, 0X463C);
    // 0x60004750: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60004754: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60004758: jal         0x60000994
    // 0x6000475C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world8_994(rdram, ctx);
        goto after_10;
    // 0x6000475C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_10:
L_60004760:
    // 0x60004760: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60004764:
    // 0x60004764: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60004768: jr          $ra
    // 0x6000476C: nop

    return;
    // 0x6000476C: nop

;}
RECOMP_FUNC void ovl_stage_world8_4770(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004770: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60004774: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60004778: jal         0x60000BB0
    // 0x6000477C: addiu       $a0, $zero, 0x10F
    ctx->r4 = ADD32(0, 0X10F);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_0;
    // 0x6000477C: addiu       $a0, $zero, 0x10F
    ctx->r4 = ADD32(0, 0X10F);
    after_0:
    // 0x60004780: beq         $v0, $zero, L_600047B0
    if (ctx->r2 == 0) {
        // 0x60004784: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600047B0;
    }
    // 0x60004784: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004788: jal         0x60000BB0
    // 0x6000478C: addiu       $a0, $zero, 0x19B
    ctx->r4 = ADD32(0, 0X19B);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_1;
    // 0x6000478C: addiu       $a0, $zero, 0x19B
    ctx->r4 = ADD32(0, 0X19B);
    after_1:
    // 0x60004790: bne         $v0, $zero, L_600047B0
    if (ctx->r2 != 0) {
        // 0x60004794: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600047B0;
    }
    // 0x60004794: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004798: jal         0x60000B98
    // 0x6000479C: addiu       $a0, $zero, 0x19B
    ctx->r4 = ADD32(0, 0X19B);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_2;
    // 0x6000479C: addiu       $a0, $zero, 0x19B
    ctx->r4 = ADD32(0, 0X19B);
    after_2:
    // 0x600047A0: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x600047A4: jal         0x60000E68
    // 0x600047A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world8_E68(rdram, ctx);
        goto after_3;
    // 0x600047A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x600047AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600047B0:
    // 0x600047B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600047B4: jr          $ra
    // 0x600047B8: nop

    return;
    // 0x600047B8: nop

;}
RECOMP_FUNC void ovl_stage_world8_47BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600047BC: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x600047C0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x600047C4: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x600047C8: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x600047CC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x600047D0: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x600047D4: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x600047D8: jal         0x600009C4
    // 0x600047DC: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    ovl_stage_world8_9C4(rdram, ctx);
        goto after_0;
    // 0x600047DC: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    after_0:
    // 0x600047E0: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x600047E4: jal         0x60000E80
    // 0x600047E8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_stage_world8_E80(rdram, ctx);
        goto after_1;
    // 0x600047E8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x600047EC: jal         0x60001064
    // 0x600047F0: nop

    ovl_stage_world8_1064(rdram, ctx);
        goto after_2;
    // 0x600047F0: nop

    after_2:
    // 0x600047F4: jal         0x60000DD8
    // 0x600047F8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world8_DD8(rdram, ctx);
        goto after_3;
    // 0x600047F8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x600047FC: addiu       $s1, $sp, 0x34
    ctx->r17 = ADD32(ctx->r29, 0X34);
    // 0x60004800: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x60004804: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x60004808: jal         0x60000D9C
    // 0x6000480C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_stage_world8_D9C(rdram, ctx);
        goto after_4;
    // 0x6000480C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_4:
    // 0x60004810: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x60004814: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x60004818: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x6000481C: jal         0x60000D78
    // 0x60004820: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    ovl_stage_world8_D78(rdram, ctx);
        goto after_5;
    // 0x60004820: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    after_5:
    // 0x60004824: jal         0x60000A6C
    // 0x60004828: nop

    ovl_stage_world8_A6C(rdram, ctx);
        goto after_6;
    // 0x60004828: nop

    after_6:
    // 0x6000482C: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    // 0x60004830: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x60004834: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60004838: addiu       $s2, $zero, 0xA0
    ctx->r18 = ADD32(0, 0XA0);
    // 0x6000483C: addiu       $s1, $sp, 0x48
    ctx->r17 = ADD32(ctx->r29, 0X48);
L_60004840:
    // 0x60004840: jal         0x60000E74
    // 0x60004844: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    ovl_stage_world8_E74(rdram, ctx);
        goto after_7;
    // 0x60004844: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_7:
    // 0x60004848: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x6000484C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x60004850: jal         0x600006C4
    // 0x60004854: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_8;
    // 0x60004854: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_8:
    // 0x60004858: lwc1        $f6, 0x4C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x6000485C: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x60004860: sub.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f20.fl;
    // 0x60004864: jal         0x60000E74
    // 0x60004868: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
    ovl_stage_world8_E74(rdram, ctx);
        goto after_9;
    // 0x60004868: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
    after_9:
    // 0x6000486C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60004870: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x60004874: jal         0x600006C4
    // 0x60004878: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_10;
    // 0x60004878: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_10:
    // 0x6000487C: jal         0x600009D0
    // 0x60004880: nop

    ovl_stage_world8_9D0(rdram, ctx);
        goto after_11;
    // 0x60004880: nop

    after_11:
    // 0x60004884: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60004888: bne         $s0, $s2, L_60004840
    if (ctx->r16 != ctx->r18) {
        // 0x6000488C: nop
    
            goto L_60004840;
    }
    // 0x6000488C: nop

    // 0x60004890: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x60004894: jal         0x60000E68
    // 0x60004898: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world8_E68(rdram, ctx);
        goto after_12;
    // 0x60004898: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_12:
    // 0x6000489C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600048A0: addiu       $a0, $a0, 0x3378
    ctx->r4 = ADD32(ctx->r4, 0X3378);
    // 0x600048A4: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x600048A8: addiu       $a2, $zero, 0x2400
    ctx->r6 = ADD32(0, 0X2400);
    // 0x600048AC: jal         0x60000994
    // 0x600048B0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world8_994(rdram, ctx);
        goto after_13;
    // 0x600048B0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_13:
    // 0x600048B4: jal         0x600009AC
    // 0x600048B8: nop

    ovl_stage_world8_9AC(rdram, ctx);
        goto after_14;
    // 0x600048B8: nop

    after_14:
    // 0x600048BC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x600048C0: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x600048C4: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x600048C8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x600048CC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x600048D0: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x600048D4: jr          $ra
    // 0x600048D8: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x600048D8: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void ovl_stage_world8_48DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600048DC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x600048E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600048E4: jal         0x60000DE4
    // 0x600048E8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world8_DE4(rdram, ctx);
        goto after_0;
    // 0x600048E8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x600048EC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600048F0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x600048F4: jal         0x600006C4
    // 0x600048F8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_1;
    // 0x600048F8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x600048FC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x60004900: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60004904: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x60004908: nop

    // 0x6000490C: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x60004910: nop

    // 0x60004914: bc1f        L_60004988
    if (!c1cs) {
        // 0x60004918: lui         $at, 0x4334
        ctx->r1 = S32(0X4334 << 16);
            goto L_60004988;
    }
    // 0x60004918: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x6000491C: jal         0x60000BB0
    // 0x60004920: addiu       $a0, $zero, 0x180
    ctx->r4 = ADD32(0, 0X180);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_2;
    // 0x60004920: addiu       $a0, $zero, 0x180
    ctx->r4 = ADD32(0, 0X180);
    after_2:
    // 0x60004924: beq         $v0, $zero, L_60004988
    if (ctx->r2 == 0) {
        // 0x60004928: lui         $at, 0x4334
        ctx->r1 = S32(0X4334 << 16);
            goto L_60004988;
    }
    // 0x60004928: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x6000492C: jal         0x60000BB0
    // 0x60004930: addiu       $a0, $zero, 0x184
    ctx->r4 = ADD32(0, 0X184);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_3;
    // 0x60004930: addiu       $a0, $zero, 0x184
    ctx->r4 = ADD32(0, 0X184);
    after_3:
    // 0x60004934: bne         $v0, $zero, L_60004988
    if (ctx->r2 != 0) {
        // 0x60004938: lui         $at, 0x4334
        ctx->r1 = S32(0X4334 << 16);
            goto L_60004988;
    }
    // 0x60004938: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x6000493C: jal         0x60000DE4
    // 0x60004940: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world8_DE4(rdram, ctx);
        goto after_4;
    // 0x60004940: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_4:
    // 0x60004944: jal         0x60000CC4
    // 0x60004948: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_stage_world8_CC4(rdram, ctx);
        goto after_5;
    // 0x60004948: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_5:
    // 0x6000494C: jal         0x60000A6C
    // 0x60004950: nop

    ovl_stage_world8_A6C(rdram, ctx);
        goto after_6;
    // 0x60004950: nop

    after_6:
    // 0x60004954: jal         0x60000B98
    // 0x60004958: addiu       $a0, $zero, 0x184
    ctx->r4 = ADD32(0, 0X184);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_7;
    // 0x60004958: addiu       $a0, $zero, 0x184
    ctx->r4 = ADD32(0, 0X184);
    after_7:
    // 0x6000495C: jal         0x60000A60
    // 0x60004960: addiu       $a0, $zero, 0xA9D
    ctx->r4 = ADD32(0, 0XA9D);
    ovl_stage_world8_A60(rdram, ctx);
        goto after_8;
    // 0x60004960: addiu       $a0, $zero, 0xA9D
    ctx->r4 = ADD32(0, 0XA9D);
    after_8:
    // 0x60004964: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60004968: addiu       $a0, $a0, 0x47BC
    ctx->r4 = ADD32(ctx->r4, 0X47BC);
    // 0x6000496C: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60004970: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60004974: jal         0x60000994
    // 0x60004978: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world8_994(rdram, ctx);
        goto after_9;
    // 0x60004978: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_9:
    // 0x6000497C: b           L_60004A18
    // 0x60004980: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60004A18;
    // 0x60004980: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004984: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
L_60004988:
    // 0x60004988: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x6000498C: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x60004990: nop

    // 0x60004994: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x60004998: nop

    // 0x6000499C: bc1f        L_60004A18
    if (!c1cs) {
        // 0x600049A0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60004A18;
    }
    // 0x600049A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600049A4: jal         0x60000BB0
    // 0x600049A8: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_10;
    // 0x600049A8: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    after_10:
    // 0x600049AC: beq         $v0, $zero, L_600049C4
    if (ctx->r2 == 0) {
        // 0x600049B0: nop
    
            goto L_600049C4;
    }
    // 0x600049B0: nop

    // 0x600049B4: jal         0x60000BB0
    // 0x600049B8: addiu       $a0, $zero, 0x185
    ctx->r4 = ADD32(0, 0X185);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_11;
    // 0x600049B8: addiu       $a0, $zero, 0x185
    ctx->r4 = ADD32(0, 0X185);
    after_11:
    // 0x600049BC: beq         $v0, $zero, L_600049E4
    if (ctx->r2 == 0) {
        // 0x600049C0: nop
    
            goto L_600049E4;
    }
    // 0x600049C0: nop

L_600049C4:
    // 0x600049C4: jal         0x60000BB0
    // 0x600049C8: addiu       $a0, $zero, 0x182
    ctx->r4 = ADD32(0, 0X182);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_12;
    // 0x600049C8: addiu       $a0, $zero, 0x182
    ctx->r4 = ADD32(0, 0X182);
    after_12:
    // 0x600049CC: beq         $v0, $zero, L_60004A18
    if (ctx->r2 == 0) {
        // 0x600049D0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60004A18;
    }
    // 0x600049D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600049D4: jal         0x60000BB0
    // 0x600049D8: addiu       $a0, $zero, 0x186
    ctx->r4 = ADD32(0, 0X186);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_13;
    // 0x600049D8: addiu       $a0, $zero, 0x186
    ctx->r4 = ADD32(0, 0X186);
    after_13:
    // 0x600049DC: bne         $v0, $zero, L_60004A18
    if (ctx->r2 != 0) {
        // 0x600049E0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60004A18;
    }
    // 0x600049E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600049E4:
    // 0x600049E4: jal         0x60000BB0
    // 0x600049E8: addiu       $a0, $zero, 0x184
    ctx->r4 = ADD32(0, 0X184);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_14;
    // 0x600049E8: addiu       $a0, $zero, 0x184
    ctx->r4 = ADD32(0, 0X184);
    after_14:
    // 0x600049EC: bne         $v0, $zero, L_60004A18
    if (ctx->r2 != 0) {
        // 0x600049F0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60004A18;
    }
    // 0x600049F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600049F4: jal         0x60000BB0
    // 0x600049F8: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_15;
    // 0x600049F8: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    after_15:
    // 0x600049FC: bne         $v0, $zero, L_60004A18
    if (ctx->r2 != 0) {
        // 0x60004A00: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60004A18;
    }
    // 0x60004A00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004A04: jal         0x60000B98
    // 0x60004A08: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_16;
    // 0x60004A08: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    after_16:
    // 0x60004A0C: jal         0x60000A60
    // 0x60004A10: addiu       $a0, $zero, 0xC29
    ctx->r4 = ADD32(0, 0XC29);
    ovl_stage_world8_A60(rdram, ctx);
        goto after_17;
    // 0x60004A10: addiu       $a0, $zero, 0xC29
    ctx->r4 = ADD32(0, 0XC29);
    after_17:
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
RECOMP_FUNC void ovl_stage_world8_4A24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004A24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60004A28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60004A2C: jal         0x600009C4
    // 0x60004A30: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    ovl_stage_world8_9C4(rdram, ctx);
        goto after_0;
    // 0x60004A30: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    after_0:
    // 0x60004A34: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x60004A38: jal         0x60000E80
    // 0x60004A3C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world8_E80(rdram, ctx);
        goto after_1;
    // 0x60004A3C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x60004A40: jal         0x600009AC
    // 0x60004A44: nop

    ovl_stage_world8_9AC(rdram, ctx);
        goto after_2;
    // 0x60004A44: nop

    after_2:
    // 0x60004A48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004A4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60004A50: jr          $ra
    // 0x60004A54: nop

    return;
    // 0x60004A54: nop

;}
RECOMP_FUNC void ovl_stage_world8_4A58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004A58: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x60004A5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60004A60: jal         0x60000DE4
    // 0x60004A64: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world8_DE4(rdram, ctx);
        goto after_0;
    // 0x60004A64: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x60004A68: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60004A6C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x60004A70: jal         0x600006C4
    // 0x60004A74: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_1;
    // 0x60004A74: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x60004A78: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x60004A7C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60004A80: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x60004A84: nop

    // 0x60004A88: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x60004A8C: nop

    // 0x60004A90: bc1f        L_60004B04
    if (!c1cs) {
        // 0x60004A94: lui         $at, 0x42B4
        ctx->r1 = S32(0X42B4 << 16);
            goto L_60004B04;
    }
    // 0x60004A94: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x60004A98: jal         0x60000BB0
    // 0x60004A9C: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_2;
    // 0x60004A9C: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    after_2:
    // 0x60004AA0: beq         $v0, $zero, L_60004B04
    if (ctx->r2 == 0) {
        // 0x60004AA4: lui         $at, 0x42B4
        ctx->r1 = S32(0X42B4 << 16);
            goto L_60004B04;
    }
    // 0x60004AA4: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x60004AA8: jal         0x60000BB0
    // 0x60004AAC: addiu       $a0, $zero, 0x185
    ctx->r4 = ADD32(0, 0X185);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_3;
    // 0x60004AAC: addiu       $a0, $zero, 0x185
    ctx->r4 = ADD32(0, 0X185);
    after_3:
    // 0x60004AB0: bne         $v0, $zero, L_60004B04
    if (ctx->r2 != 0) {
        // 0x60004AB4: lui         $at, 0x42B4
        ctx->r1 = S32(0X42B4 << 16);
            goto L_60004B04;
    }
    // 0x60004AB4: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x60004AB8: jal         0x60000DE4
    // 0x60004ABC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world8_DE4(rdram, ctx);
        goto after_4;
    // 0x60004ABC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_4:
    // 0x60004AC0: jal         0x60000CC4
    // 0x60004AC4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_stage_world8_CC4(rdram, ctx);
        goto after_5;
    // 0x60004AC4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_5:
    // 0x60004AC8: jal         0x60000A6C
    // 0x60004ACC: nop

    ovl_stage_world8_A6C(rdram, ctx);
        goto after_6;
    // 0x60004ACC: nop

    after_6:
    // 0x60004AD0: jal         0x60000B98
    // 0x60004AD4: addiu       $a0, $zero, 0x185
    ctx->r4 = ADD32(0, 0X185);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_7;
    // 0x60004AD4: addiu       $a0, $zero, 0x185
    ctx->r4 = ADD32(0, 0X185);
    after_7:
    // 0x60004AD8: jal         0x60000A60
    // 0x60004ADC: addiu       $a0, $zero, 0xA9E
    ctx->r4 = ADD32(0, 0XA9E);
    ovl_stage_world8_A60(rdram, ctx);
        goto after_8;
    // 0x60004ADC: addiu       $a0, $zero, 0xA9E
    ctx->r4 = ADD32(0, 0XA9E);
    after_8:
    // 0x60004AE0: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60004AE4: addiu       $a0, $a0, 0x4A24
    ctx->r4 = ADD32(ctx->r4, 0X4A24);
    // 0x60004AE8: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60004AEC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60004AF0: jal         0x60000994
    // 0x60004AF4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world8_994(rdram, ctx);
        goto after_9;
    // 0x60004AF4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_9:
    // 0x60004AF8: b           L_60004B94
    // 0x60004AFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60004B94;
    // 0x60004AFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004B00: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
L_60004B04:
    // 0x60004B04: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x60004B08: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x60004B0C: nop

    // 0x60004B10: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x60004B14: nop

    // 0x60004B18: bc1f        L_60004B94
    if (!c1cs) {
        // 0x60004B1C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60004B94;
    }
    // 0x60004B1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004B20: jal         0x60000BB0
    // 0x60004B24: addiu       $a0, $zero, 0x180
    ctx->r4 = ADD32(0, 0X180);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_10;
    // 0x60004B24: addiu       $a0, $zero, 0x180
    ctx->r4 = ADD32(0, 0X180);
    after_10:
    // 0x60004B28: beq         $v0, $zero, L_60004B40
    if (ctx->r2 == 0) {
        // 0x60004B2C: nop
    
            goto L_60004B40;
    }
    // 0x60004B2C: nop

    // 0x60004B30: jal         0x60000BB0
    // 0x60004B34: addiu       $a0, $zero, 0x184
    ctx->r4 = ADD32(0, 0X184);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_11;
    // 0x60004B34: addiu       $a0, $zero, 0x184
    ctx->r4 = ADD32(0, 0X184);
    after_11:
    // 0x60004B38: beq         $v0, $zero, L_60004B60
    if (ctx->r2 == 0) {
        // 0x60004B3C: nop
    
            goto L_60004B60;
    }
    // 0x60004B3C: nop

L_60004B40:
    // 0x60004B40: jal         0x60000BB0
    // 0x60004B44: addiu       $a0, $zero, 0x182
    ctx->r4 = ADD32(0, 0X182);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_12;
    // 0x60004B44: addiu       $a0, $zero, 0x182
    ctx->r4 = ADD32(0, 0X182);
    after_12:
    // 0x60004B48: beq         $v0, $zero, L_60004B94
    if (ctx->r2 == 0) {
        // 0x60004B4C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60004B94;
    }
    // 0x60004B4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004B50: jal         0x60000BB0
    // 0x60004B54: addiu       $a0, $zero, 0x186
    ctx->r4 = ADD32(0, 0X186);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_13;
    // 0x60004B54: addiu       $a0, $zero, 0x186
    ctx->r4 = ADD32(0, 0X186);
    after_13:
    // 0x60004B58: bne         $v0, $zero, L_60004B94
    if (ctx->r2 != 0) {
        // 0x60004B5C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60004B94;
    }
    // 0x60004B5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60004B60:
    // 0x60004B60: jal         0x60000BB0
    // 0x60004B64: addiu       $a0, $zero, 0x185
    ctx->r4 = ADD32(0, 0X185);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_14;
    // 0x60004B64: addiu       $a0, $zero, 0x185
    ctx->r4 = ADD32(0, 0X185);
    after_14:
    // 0x60004B68: bne         $v0, $zero, L_60004B94
    if (ctx->r2 != 0) {
        // 0x60004B6C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60004B94;
    }
    // 0x60004B6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004B70: jal         0x60000BB0
    // 0x60004B74: addiu       $a0, $zero, 0x12D
    ctx->r4 = ADD32(0, 0X12D);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_15;
    // 0x60004B74: addiu       $a0, $zero, 0x12D
    ctx->r4 = ADD32(0, 0X12D);
    after_15:
    // 0x60004B78: bne         $v0, $zero, L_60004B94
    if (ctx->r2 != 0) {
        // 0x60004B7C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60004B94;
    }
    // 0x60004B7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004B80: jal         0x60000B98
    // 0x60004B84: addiu       $a0, $zero, 0x12D
    ctx->r4 = ADD32(0, 0X12D);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_16;
    // 0x60004B84: addiu       $a0, $zero, 0x12D
    ctx->r4 = ADD32(0, 0X12D);
    after_16:
    // 0x60004B88: jal         0x60000A60
    // 0x60004B8C: addiu       $a0, $zero, 0xC29
    ctx->r4 = ADD32(0, 0XC29);
    ovl_stage_world8_A60(rdram, ctx);
        goto after_17;
    // 0x60004B8C: addiu       $a0, $zero, 0xC29
    ctx->r4 = ADD32(0, 0XC29);
    after_17:
    // 0x60004B90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60004B94:
    // 0x60004B94: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x60004B98: jr          $ra
    // 0x60004B9C: nop

    return;
    // 0x60004B9C: nop

;}
RECOMP_FUNC void ovl_stage_world8_4BA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004BA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60004BA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60004BA8: jal         0x600009C4
    // 0x60004BAC: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    ovl_stage_world8_9C4(rdram, ctx);
        goto after_0;
    // 0x60004BAC: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    after_0:
    // 0x60004BB0: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x60004BB4: jal         0x60000E80
    // 0x60004BB8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_stage_world8_E80(rdram, ctx);
        goto after_1;
    // 0x60004BB8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x60004BBC: jal         0x600009AC
    // 0x60004BC0: nop

    ovl_stage_world8_9AC(rdram, ctx);
        goto after_2;
    // 0x60004BC0: nop

    after_2:
    // 0x60004BC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004BC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60004BCC: jr          $ra
    // 0x60004BD0: nop

    return;
    // 0x60004BD0: nop

;}
RECOMP_FUNC void ovl_stage_world8_4BD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004BD4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x60004BD8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60004BDC: jal         0x60000DE4
    // 0x60004BE0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world8_DE4(rdram, ctx);
        goto after_0;
    // 0x60004BE0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x60004BE4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60004BE8: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x60004BEC: jal         0x600006C4
    // 0x60004BF0: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_1;
    // 0x60004BF0: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x60004BF4: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x60004BF8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60004BFC: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x60004C00: nop

    // 0x60004C04: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x60004C08: nop

    // 0x60004C0C: bc1f        L_60004C80
    if (!c1cs) {
        // 0x60004C10: lui         $at, 0x4387
        ctx->r1 = S32(0X4387 << 16);
            goto L_60004C80;
    }
    // 0x60004C10: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x60004C14: jal         0x60000BB0
    // 0x60004C18: addiu       $a0, $zero, 0x182
    ctx->r4 = ADD32(0, 0X182);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_2;
    // 0x60004C18: addiu       $a0, $zero, 0x182
    ctx->r4 = ADD32(0, 0X182);
    after_2:
    // 0x60004C1C: beq         $v0, $zero, L_60004C80
    if (ctx->r2 == 0) {
        // 0x60004C20: lui         $at, 0x4387
        ctx->r1 = S32(0X4387 << 16);
            goto L_60004C80;
    }
    // 0x60004C20: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x60004C24: jal         0x60000BB0
    // 0x60004C28: addiu       $a0, $zero, 0x186
    ctx->r4 = ADD32(0, 0X186);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_3;
    // 0x60004C28: addiu       $a0, $zero, 0x186
    ctx->r4 = ADD32(0, 0X186);
    after_3:
    // 0x60004C2C: bne         $v0, $zero, L_60004C80
    if (ctx->r2 != 0) {
        // 0x60004C30: lui         $at, 0x4387
        ctx->r1 = S32(0X4387 << 16);
            goto L_60004C80;
    }
    // 0x60004C30: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x60004C34: jal         0x60000DE4
    // 0x60004C38: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world8_DE4(rdram, ctx);
        goto after_4;
    // 0x60004C38: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_4:
    // 0x60004C3C: jal         0x60000CC4
    // 0x60004C40: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_stage_world8_CC4(rdram, ctx);
        goto after_5;
    // 0x60004C40: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_5:
    // 0x60004C44: jal         0x60000A6C
    // 0x60004C48: nop

    ovl_stage_world8_A6C(rdram, ctx);
        goto after_6;
    // 0x60004C48: nop

    after_6:
    // 0x60004C4C: jal         0x60000B98
    // 0x60004C50: addiu       $a0, $zero, 0x186
    ctx->r4 = ADD32(0, 0X186);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_7;
    // 0x60004C50: addiu       $a0, $zero, 0x186
    ctx->r4 = ADD32(0, 0X186);
    after_7:
    // 0x60004C54: jal         0x60000A60
    // 0x60004C58: addiu       $a0, $zero, 0xA9F
    ctx->r4 = ADD32(0, 0XA9F);
    ovl_stage_world8_A60(rdram, ctx);
        goto after_8;
    // 0x60004C58: addiu       $a0, $zero, 0xA9F
    ctx->r4 = ADD32(0, 0XA9F);
    after_8:
    // 0x60004C5C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60004C60: addiu       $a0, $a0, 0x4BA0
    ctx->r4 = ADD32(ctx->r4, 0X4BA0);
    // 0x60004C64: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60004C68: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60004C6C: jal         0x60000994
    // 0x60004C70: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world8_994(rdram, ctx);
        goto after_9;
    // 0x60004C70: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_9:
    // 0x60004C74: b           L_60004D10
    // 0x60004C78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60004D10;
    // 0x60004C78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004C7C: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
L_60004C80:
    // 0x60004C80: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x60004C84: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x60004C88: nop

    // 0x60004C8C: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x60004C90: nop

    // 0x60004C94: bc1f        L_60004D10
    if (!c1cs) {
        // 0x60004C98: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60004D10;
    }
    // 0x60004C98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004C9C: jal         0x60000BB0
    // 0x60004CA0: addiu       $a0, $zero, 0x180
    ctx->r4 = ADD32(0, 0X180);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_10;
    // 0x60004CA0: addiu       $a0, $zero, 0x180
    ctx->r4 = ADD32(0, 0X180);
    after_10:
    // 0x60004CA4: beq         $v0, $zero, L_60004CBC
    if (ctx->r2 == 0) {
        // 0x60004CA8: nop
    
            goto L_60004CBC;
    }
    // 0x60004CA8: nop

    // 0x60004CAC: jal         0x60000BB0
    // 0x60004CB0: addiu       $a0, $zero, 0x184
    ctx->r4 = ADD32(0, 0X184);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_11;
    // 0x60004CB0: addiu       $a0, $zero, 0x184
    ctx->r4 = ADD32(0, 0X184);
    after_11:
    // 0x60004CB4: beq         $v0, $zero, L_60004CDC
    if (ctx->r2 == 0) {
        // 0x60004CB8: nop
    
            goto L_60004CDC;
    }
    // 0x60004CB8: nop

L_60004CBC:
    // 0x60004CBC: jal         0x60000BB0
    // 0x60004CC0: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_12;
    // 0x60004CC0: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    after_12:
    // 0x60004CC4: beq         $v0, $zero, L_60004D10
    if (ctx->r2 == 0) {
        // 0x60004CC8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60004D10;
    }
    // 0x60004CC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004CCC: jal         0x60000BB0
    // 0x60004CD0: addiu       $a0, $zero, 0x185
    ctx->r4 = ADD32(0, 0X185);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_13;
    // 0x60004CD0: addiu       $a0, $zero, 0x185
    ctx->r4 = ADD32(0, 0X185);
    after_13:
    // 0x60004CD4: bne         $v0, $zero, L_60004D10
    if (ctx->r2 != 0) {
        // 0x60004CD8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60004D10;
    }
    // 0x60004CD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60004CDC:
    // 0x60004CDC: jal         0x60000BB0
    // 0x60004CE0: addiu       $a0, $zero, 0x186
    ctx->r4 = ADD32(0, 0X186);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_14;
    // 0x60004CE0: addiu       $a0, $zero, 0x186
    ctx->r4 = ADD32(0, 0X186);
    after_14:
    // 0x60004CE4: bne         $v0, $zero, L_60004D10
    if (ctx->r2 != 0) {
        // 0x60004CE8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60004D10;
    }
    // 0x60004CE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004CEC: jal         0x60000BB0
    // 0x60004CF0: addiu       $a0, $zero, 0x12E
    ctx->r4 = ADD32(0, 0X12E);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_15;
    // 0x60004CF0: addiu       $a0, $zero, 0x12E
    ctx->r4 = ADD32(0, 0X12E);
    after_15:
    // 0x60004CF4: bne         $v0, $zero, L_60004D10
    if (ctx->r2 != 0) {
        // 0x60004CF8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60004D10;
    }
    // 0x60004CF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004CFC: jal         0x60000B98
    // 0x60004D00: addiu       $a0, $zero, 0x12E
    ctx->r4 = ADD32(0, 0X12E);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_16;
    // 0x60004D00: addiu       $a0, $zero, 0x12E
    ctx->r4 = ADD32(0, 0X12E);
    after_16:
    // 0x60004D04: jal         0x60000A60
    // 0x60004D08: addiu       $a0, $zero, 0xC29
    ctx->r4 = ADD32(0, 0XC29);
    ovl_stage_world8_A60(rdram, ctx);
        goto after_17;
    // 0x60004D08: addiu       $a0, $zero, 0xC29
    ctx->r4 = ADD32(0, 0XC29);
    after_17:
    // 0x60004D0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60004D10:
    // 0x60004D10: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x60004D14: jr          $ra
    // 0x60004D18: nop

    return;
    // 0x60004D18: nop

;}
RECOMP_FUNC void ovl_stage_world8_4D1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004D1C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x60004D20: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x60004D24: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x60004D28: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x60004D2C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x60004D30: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x60004D34: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x60004D38: jal         0x60000244
    // 0x60004D3C: addiu       $a0, $zero, 0x1DB
    ctx->r4 = ADD32(0, 0X1DB);
    ovl_stage_world8_244(rdram, ctx);
        goto after_0;
    // 0x60004D3C: addiu       $a0, $zero, 0x1DB
    ctx->r4 = ADD32(0, 0X1DB);
    after_0:
    // 0x60004D40: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x60004D44: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x60004D48: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60004D4C: addiu       $s2, $zero, 0x32
    ctx->r18 = ADD32(0, 0X32);
    // 0x60004D50: addiu       $s1, $sp, 0x38
    ctx->r17 = ADD32(ctx->r29, 0X38);
L_60004D54:
    // 0x60004D54: jal         0x60000E74
    // 0x60004D58: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    ovl_stage_world8_E74(rdram, ctx);
        goto after_1;
    // 0x60004D58: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_1:
    // 0x60004D5C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60004D60: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x60004D64: jal         0x600006C4
    // 0x60004D68: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_2;
    // 0x60004D68: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_2:
    // 0x60004D6C: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x60004D70: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x60004D74: jal         0x60000E74
    // 0x60004D78: swc1        $f20, 0x30($t6)
    MEM_W(0X30, ctx->r14) = ctx->f20.u32l;
    ovl_stage_world8_E74(rdram, ctx);
        goto after_3;
    // 0x60004D78: swc1        $f20, 0x30($t6)
    MEM_W(0X30, ctx->r14) = ctx->f20.u32l;
    after_3:
    // 0x60004D7C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60004D80: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x60004D84: jal         0x600006C4
    // 0x60004D88: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_4;
    // 0x60004D88: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_4:
    // 0x60004D8C: jal         0x600009D0
    // 0x60004D90: nop

    ovl_stage_world8_9D0(rdram, ctx);
        goto after_5;
    // 0x60004D90: nop

    after_5:
    // 0x60004D94: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60004D98: bne         $s0, $s2, L_60004D54
    if (ctx->r16 != ctx->r18) {
        // 0x60004D9C: nop
    
            goto L_60004D54;
    }
    // 0x60004D9C: nop

    // 0x60004DA0: jal         0x60000244
    // 0x60004DA4: addiu       $a0, $zero, 0x1DD
    ctx->r4 = ADD32(0, 0X1DD);
    ovl_stage_world8_244(rdram, ctx);
        goto after_6;
    // 0x60004DA4: addiu       $a0, $zero, 0x1DD
    ctx->r4 = ADD32(0, 0X1DD);
    after_6:
    // 0x60004DA8: jal         0x600009C4
    // 0x60004DAC: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    ovl_stage_world8_9C4(rdram, ctx);
        goto after_7;
    // 0x60004DAC: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_7:
    // 0x60004DB0: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x60004DB4: jal         0x60000E80
    // 0x60004DB8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world8_E80(rdram, ctx);
        goto after_8;
    // 0x60004DB8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
    // 0x60004DBC: jal         0x600009AC
    // 0x60004DC0: nop

    ovl_stage_world8_9AC(rdram, ctx);
        goto after_9;
    // 0x60004DC0: nop

    after_9:
    // 0x60004DC4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x60004DC8: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x60004DCC: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x60004DD0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x60004DD4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x60004DD8: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x60004DDC: jr          $ra
    // 0x60004DE0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x60004DE0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_stage_world8_4DE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004DE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60004DE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60004DEC: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60004DF0: addiu       $a0, $a0, 0x4D1C
    ctx->r4 = ADD32(ctx->r4, 0X4D1C);
    // 0x60004DF4: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60004DF8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60004DFC: jal         0x60000994
    // 0x60004E00: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world8_994(rdram, ctx);
        goto after_0;
    // 0x60004E00: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x60004E04: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x60004E08: jal         0x60000E68
    // 0x60004E0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world8_E68(rdram, ctx);
        goto after_1;
    // 0x60004E0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x60004E10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004E14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60004E18: jr          $ra
    // 0x60004E1C: nop

    return;
    // 0x60004E1C: nop

;}
RECOMP_FUNC void ovl_stage_world8_4E20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004E20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60004E24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60004E28: jal         0x60000B98
    // 0x60004E2C: addiu       $a0, $zero, 0x110
    ctx->r4 = ADD32(0, 0X110);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_0;
    // 0x60004E2C: addiu       $a0, $zero, 0x110
    ctx->r4 = ADD32(0, 0X110);
    after_0:
    // 0x60004E30: jal         0x60000244
    // 0x60004E34: addiu       $a0, $zero, 0x9F
    ctx->r4 = ADD32(0, 0X9F);
    ovl_stage_world8_244(rdram, ctx);
        goto after_1;
    // 0x60004E34: addiu       $a0, $zero, 0x9F
    ctx->r4 = ADD32(0, 0X9F);
    after_1:
    // 0x60004E38: jal         0x60000E44
    // 0x60004E3C: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    ovl_stage_world8_E44(rdram, ctx);
        goto after_2;
    // 0x60004E3C: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_2:
    // 0x60004E40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004E44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60004E48: jr          $ra
    // 0x60004E4C: nop

    return;
    // 0x60004E4C: nop

;}
RECOMP_FUNC void ovl_stage_world8_4E50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004E50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60004E54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60004E58: jal         0x60000BB0
    // 0x60004E5C: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_0;
    // 0x60004E5C: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    after_0:
    // 0x60004E60: bne         $v0, $zero, L_60004E9C
    if (ctx->r2 != 0) {
        // 0x60004E64: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60004E9C;
    }
    // 0x60004E64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004E68: jal         0x60000DE4
    // 0x60004E6C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world8_DE4(rdram, ctx);
        goto after_1;
    // 0x60004E6C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x60004E70: jal         0x60000CC4
    // 0x60004E74: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_stage_world8_CC4(rdram, ctx);
        goto after_2;
    // 0x60004E74: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x60004E78: jal         0x60000A6C
    // 0x60004E7C: nop

    ovl_stage_world8_A6C(rdram, ctx);
        goto after_3;
    // 0x60004E7C: nop

    after_3:
    // 0x60004E80: jal         0x60000B98
    // 0x60004E84: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_4;
    // 0x60004E84: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    after_4:
    // 0x60004E88: jal         0x60000A60
    // 0x60004E8C: addiu       $a0, $zero, 0xAA0
    ctx->r4 = ADD32(0, 0XAA0);
    ovl_stage_world8_A60(rdram, ctx);
        goto after_5;
    // 0x60004E8C: addiu       $a0, $zero, 0xAA0
    ctx->r4 = ADD32(0, 0XAA0);
    after_5:
    // 0x60004E90: jal         0x600010C0
    // 0x60004E94: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    ovl_stage_world8_10C0(rdram, ctx);
        goto after_6;
    // 0x60004E94: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_6:
    // 0x60004E98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60004E9C:
    // 0x60004E9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60004EA0: jr          $ra
    // 0x60004EA4: nop

    return;
    // 0x60004EA4: nop

;}
RECOMP_FUNC void ovl_stage_world8_4EA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004EA8: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x60004EAC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x60004EB0: jal         0x600009DC
    // 0x60004EB4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    ovl_stage_world8_9DC(rdram, ctx);
        goto after_0;
    // 0x60004EB4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x60004EB8: lw          $v1, 0x1C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X1C);
    // 0x60004EBC: addiu       $a0, $zero, 0xF0
    ctx->r4 = ADD32(0, 0XF0);
    // 0x60004EC0: lw          $s0, 0xC($v1)
    ctx->r16 = MEM_W(ctx->r3, 0XC);
    // 0x60004EC4: jal         0x600009C4
    // 0x60004EC8: nop

    ovl_stage_world8_9C4(rdram, ctx);
        goto after_1;
    // 0x60004EC8: nop

    after_1:
    // 0x60004ECC: addiu       $a0, $s0, 0x3
    ctx->r4 = ADD32(ctx->r16, 0X3);
    // 0x60004ED0: jal         0x60000E80
    // 0x60004ED4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world8_E80(rdram, ctx);
        goto after_2;
    // 0x60004ED4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x60004ED8: addiu       $a0, $s0, 0x111
    ctx->r4 = ADD32(ctx->r16, 0X111);
    // 0x60004EDC: jal         0x60000BA4
    // 0x60004EE0: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    ovl_stage_world8_BA4(rdram, ctx);
        goto after_3;
    // 0x60004EE0: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    after_3:
    // 0x60004EE4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x60004EE8: jal         0x60000BB0
    // 0x60004EEC: nop

    ovl_stage_world8_BB0(rdram, ctx);
        goto after_4;
    // 0x60004EEC: nop

    after_4:
    // 0x60004EF0: bne         $v0, $zero, L_60004F74
    if (ctx->r2 != 0) {
        // 0x60004EF4: xori        $a0, $s0, 0x1
        ctx->r4 = ctx->r16 ^ 0X1;
            goto L_60004F74;
    }
    // 0x60004EF4: xori        $a0, $s0, 0x1
    ctx->r4 = ctx->r16 ^ 0X1;
    // 0x60004EF8: jal         0x60000BB0
    // 0x60004EFC: addiu       $a0, $a0, 0x111
    ctx->r4 = ADD32(ctx->r4, 0X111);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_5;
    // 0x60004EFC: addiu       $a0, $a0, 0x111
    ctx->r4 = ADD32(ctx->r4, 0X111);
    after_5:
    // 0x60004F00: bne         $v0, $zero, L_60004F74
    if (ctx->r2 != 0) {
        // 0x60004F04: sra         $a0, $s0, 1
        ctx->r4 = S32(SIGNED(ctx->r16) >> 1);
            goto L_60004F74;
    }
    // 0x60004F04: sra         $a0, $s0, 1
    ctx->r4 = S32(SIGNED(ctx->r16) >> 1);
    // 0x60004F08: jal         0x60000E74
    // 0x60004F0C: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    ovl_stage_world8_E74(rdram, ctx);
        goto after_6;
    // 0x60004F0C: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    after_6:
    // 0x60004F10: addiu       $s0, $sp, 0x28
    ctx->r16 = ADD32(ctx->r29, 0X28);
    // 0x60004F14: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x60004F18: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x60004F1C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60004F20: jal         0x600006C4
    // 0x60004F24: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_7;
    // 0x60004F24: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    after_7:
    // 0x60004F28: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x60004F2C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x60004F30: ori         $t7, $t6, 0x4
    ctx->r15 = ctx->r14 | 0X4;
    // 0x60004F34: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x60004F38: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x60004F3C: jal         0x600006C4
    // 0x60004F40: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_8;
    // 0x60004F40: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_8:
    // 0x60004F44: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x60004F48: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x60004F4C: jal         0x600006C4
    // 0x60004F50: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_9;
    // 0x60004F50: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_9:
    // 0x60004F54: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x60004F58: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x60004F5C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x60004F60: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x60004F64: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x60004F68: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x60004F6C: jal         0x600006C4
    // 0x60004F70: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_10;
    // 0x60004F70: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_10:
L_60004F74:
    // 0x60004F74: jal         0x600009AC
    // 0x60004F78: nop

    ovl_stage_world8_9AC(rdram, ctx);
        goto after_11;
    // 0x60004F78: nop

    after_11:
    // 0x60004F7C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x60004F80: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x60004F84: jr          $ra
    // 0x60004F88: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x60004F88: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_stage_world8_4F8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004F8C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x60004F90: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x60004F94: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x60004F98: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x60004F9C: addiu       $s0, $a0, 0x111
    ctx->r16 = ADD32(ctx->r4, 0X111);
    // 0x60004FA0: jal         0x60000BB0
    // 0x60004FA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_0;
    // 0x60004FA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x60004FA8: bne         $v0, $zero, L_6000505C
    if (ctx->r2 != 0) {
        // 0x60004FAC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_6000505C;
    }
    // 0x60004FAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x60004FB0: jal         0x60000B98
    // 0x60004FB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_stage_world8_B98(rdram, ctx);
        goto after_1;
    // 0x60004FB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x60004FB8: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60004FBC: addiu       $a0, $a0, 0x4EA8
    ctx->r4 = ADD32(ctx->r4, 0X4EA8);
    // 0x60004FC0: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60004FC4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60004FC8: jal         0x60000994
    // 0x60004FCC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world8_994(rdram, ctx);
        goto after_2;
    // 0x60004FCC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x60004FD0: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x60004FD4: lw          $v1, 0x1C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X1C);
    // 0x60004FD8: sra         $a0, $a1, 1
    ctx->r4 = S32(SIGNED(ctx->r5) >> 1);
    // 0x60004FDC: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    // 0x60004FE0: jal         0x60000E74
    // 0x60004FE4: sw          $a1, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r5;
    ovl_stage_world8_E74(rdram, ctx);
        goto after_3;
    // 0x60004FE4: sw          $a1, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r5;
    after_3:
    // 0x60004FE8: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x60004FEC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x60004FF0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x60004FF4: jal         0x60000E80
    // 0x60004FF8: addiu       $a0, $a0, 0x3
    ctx->r4 = ADD32(ctx->r4, 0X3);
    ovl_stage_world8_E80(rdram, ctx);
        goto after_4;
    // 0x60004FF8: addiu       $a0, $a0, 0x3
    ctx->r4 = ADD32(ctx->r4, 0X3);
    after_4:
    // 0x60004FFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x60005000: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x60005004: jal         0x600006C4
    // 0x60005008: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_5;
    // 0x60005008: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    after_5:
    // 0x6000500C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x60005010: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x60005014: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x60005018: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x6000501C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x60005020: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x60005024: jal         0x600006C4
    // 0x60005028: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_6;
    // 0x60005028: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    after_6:
    // 0x6000502C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x60005030: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x60005034: jal         0x600006C4
    // 0x60005038: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_7;
    // 0x60005038: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    after_7:
    // 0x6000503C: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x60005040: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x60005044: ori         $t9, $t8, 0x4
    ctx->r25 = ctx->r24 | 0X4;
    // 0x60005048: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x6000504C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x60005050: jal         0x600006C4
    // 0x60005054: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_8;
    // 0x60005054: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    after_8:
    // 0x60005058: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_6000505C:
    // 0x6000505C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x60005060: jr          $ra
    // 0x60005064: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x60005064: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_stage_world8_5068(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005068: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x6000506C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60005070: jal         0x600009C4
    // 0x60005074: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_stage_world8_9C4(rdram, ctx);
        goto after_0;
    // 0x60005074: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_0:
    // 0x60005078: jal         0x60000BA4
    // 0x6000507C: addiu       $a0, $zero, 0x11D
    ctx->r4 = ADD32(0, 0X11D);
    ovl_stage_world8_BA4(rdram, ctx);
        goto after_1;
    // 0x6000507C: addiu       $a0, $zero, 0x11D
    ctx->r4 = ADD32(0, 0X11D);
    after_1:
    // 0x60005080: jal         0x600009AC
    // 0x60005084: nop

    ovl_stage_world8_9AC(rdram, ctx);
        goto after_2;
    // 0x60005084: nop

    after_2:
    // 0x60005088: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000508C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60005090: jr          $ra
    // 0x60005094: nop

    return;
    // 0x60005094: nop

;}
RECOMP_FUNC void ovl_stage_world8_5098(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005098: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x6000509C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600050A0: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x600050A4: jal         0x60000E68
    // 0x600050A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world8_E68(rdram, ctx);
        goto after_0;
    // 0x600050A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x600050AC: jal         0x600009C4
    // 0x600050B0: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_stage_world8_9C4(rdram, ctx);
        goto after_1;
    // 0x600050B0: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_1:
    // 0x600050B4: jal         0x60000BA4
    // 0x600050B8: addiu       $a0, $zero, 0x11F
    ctx->r4 = ADD32(0, 0X11F);
    ovl_stage_world8_BA4(rdram, ctx);
        goto after_2;
    // 0x600050B8: addiu       $a0, $zero, 0x11F
    ctx->r4 = ADD32(0, 0X11F);
    after_2:
    // 0x600050BC: jal         0x600009AC
    // 0x600050C0: nop

    ovl_stage_world8_9AC(rdram, ctx);
        goto after_3;
    // 0x600050C0: nop

    after_3:
    // 0x600050C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600050C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600050CC: jr          $ra
    // 0x600050D0: nop

    return;
    // 0x600050D0: nop

;}
RECOMP_FUNC void ovl_stage_world8_50D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600050D4: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x600050D8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x600050DC: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x600050E0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x600050E4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x600050E8: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x600050EC: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x600050F0: jal         0x60000244
    // 0x600050F4: addiu       $a0, $zero, 0x1E4
    ctx->r4 = ADD32(0, 0X1E4);
    ovl_stage_world8_244(rdram, ctx);
        goto after_0;
    // 0x600050F4: addiu       $a0, $zero, 0x1E4
    ctx->r4 = ADD32(0, 0X1E4);
    after_0:
    // 0x600050F8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x600050FC: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x60005100: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60005104: addiu       $s2, $zero, 0x96
    ctx->r18 = ADD32(0, 0X96);
    // 0x60005108: addiu       $s1, $sp, 0x38
    ctx->r17 = ADD32(ctx->r29, 0X38);
L_6000510C:
    // 0x6000510C: jal         0x60000E74
    // 0x60005110: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    ovl_stage_world8_E74(rdram, ctx);
        goto after_1;
    // 0x60005110: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_1:
    // 0x60005114: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60005118: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x6000511C: jal         0x600006C4
    // 0x60005120: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_2;
    // 0x60005120: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_2:
    // 0x60005124: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x60005128: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x6000512C: jal         0x60000E74
    // 0x60005130: swc1        $f20, 0x30($t6)
    MEM_W(0X30, ctx->r14) = ctx->f20.u32l;
    ovl_stage_world8_E74(rdram, ctx);
        goto after_3;
    // 0x60005130: swc1        $f20, 0x30($t6)
    MEM_W(0X30, ctx->r14) = ctx->f20.u32l;
    after_3:
    // 0x60005134: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60005138: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x6000513C: jal         0x600006C4
    // 0x60005140: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_4;
    // 0x60005140: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_4:
    // 0x60005144: jal         0x600009D0
    // 0x60005148: nop

    ovl_stage_world8_9D0(rdram, ctx);
        goto after_5;
    // 0x60005148: nop

    after_5:
    // 0x6000514C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60005150: bne         $s0, $s2, L_6000510C
    if (ctx->r16 != ctx->r18) {
        // 0x60005154: nop
    
            goto L_6000510C;
    }
    // 0x60005154: nop

    // 0x60005158: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x6000515C: jal         0x60000F04
    // 0x60005160: addiu       $a1, $zero, -0x9
    ctx->r5 = ADD32(0, -0X9);
    ovl_stage_world8_F04(rdram, ctx);
        goto after_6;
    // 0x60005160: addiu       $a1, $zero, -0x9
    ctx->r5 = ADD32(0, -0X9);
    after_6:
    // 0x60005164: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x60005168: jal         0x60000F04
    // 0x6000516C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world8_F04(rdram, ctx);
        goto after_7;
    // 0x6000516C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x60005170: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x60005174: jal         0x60000F04
    // 0x60005178: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world8_F04(rdram, ctx);
        goto after_8;
    // 0x60005178: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x6000517C: jal         0x60000BA4
    // 0x60005180: addiu       $a0, $zero, 0x11F
    ctx->r4 = ADD32(0, 0X11F);
    ovl_stage_world8_BA4(rdram, ctx);
        goto after_9;
    // 0x60005180: addiu       $a0, $zero, 0x11F
    ctx->r4 = ADD32(0, 0X11F);
    after_9:
    // 0x60005184: jal         0x60000A78
    // 0x60005188: nop

    ovl_stage_world8_A78(rdram, ctx);
        goto after_10;
    // 0x60005188: nop

    after_10:
    // 0x6000518C: jal         0x60000F50
    // 0x60005190: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world8_F50(rdram, ctx);
        goto after_11;
    // 0x60005190: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_11:
    // 0x60005194: jal         0x600009AC
    // 0x60005198: nop

    ovl_stage_world8_9AC(rdram, ctx);
        goto after_12;
    // 0x60005198: nop

    after_12:
    // 0x6000519C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x600051A0: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x600051A4: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x600051A8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x600051AC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x600051B0: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x600051B4: jr          $ra
    // 0x600051B8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x600051B8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_stage_world8_51BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600051BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600051C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600051C4: jal         0x60000BB0
    // 0x600051C8: addiu       $a0, $zero, 0x119
    ctx->r4 = ADD32(0, 0X119);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_0;
    // 0x600051C8: addiu       $a0, $zero, 0x119
    ctx->r4 = ADD32(0, 0X119);
    after_0:
    // 0x600051CC: beq         $v0, $zero, L_600052C8
    if (ctx->r2 == 0) {
        // 0x600051D0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600052C8;
    }
    // 0x600051D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600051D4: jal         0x60000BB0
    // 0x600051D8: addiu       $a0, $zero, 0x187
    ctx->r4 = ADD32(0, 0X187);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_1;
    // 0x600051D8: addiu       $a0, $zero, 0x187
    ctx->r4 = ADD32(0, 0X187);
    after_1:
    // 0x600051DC: bne         $v0, $zero, L_600052C8
    if (ctx->r2 != 0) {
        // 0x600051E0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600052C8;
    }
    // 0x600051E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600051E4: jal         0x60000BB0
    // 0x600051E8: addiu       $a0, $zero, 0x11D
    ctx->r4 = ADD32(0, 0X11D);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_2;
    // 0x600051E8: addiu       $a0, $zero, 0x11D
    ctx->r4 = ADD32(0, 0X11D);
    after_2:
    // 0x600051EC: bne         $v0, $zero, L_600052C8
    if (ctx->r2 != 0) {
        // 0x600051F0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600052C8;
    }
    // 0x600051F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600051F4: jal         0x60000BB0
    // 0x600051F8: addiu       $a0, $zero, 0x11C
    ctx->r4 = ADD32(0, 0X11C);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_3;
    // 0x600051F8: addiu       $a0, $zero, 0x11C
    ctx->r4 = ADD32(0, 0X11C);
    after_3:
    // 0x600051FC: bne         $v0, $zero, L_600052C8
    if (ctx->r2 != 0) {
        // 0x60005200: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600052C8;
    }
    // 0x60005200: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005204: jal         0x60000BB0
    // 0x60005208: addiu       $a0, $zero, 0x11E
    ctx->r4 = ADD32(0, 0X11E);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_4;
    // 0x60005208: addiu       $a0, $zero, 0x11E
    ctx->r4 = ADD32(0, 0X11E);
    after_4:
    // 0x6000520C: beq         $v0, $zero, L_600052A4
    if (ctx->r2 == 0) {
        // 0x60005210: nop
    
            goto L_600052A4;
    }
    // 0x60005210: nop

    // 0x60005214: jal         0x60000BB0
    // 0x60005218: addiu       $a0, $zero, 0x11F
    ctx->r4 = ADD32(0, 0X11F);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_5;
    // 0x60005218: addiu       $a0, $zero, 0x11F
    ctx->r4 = ADD32(0, 0X11F);
    after_5:
    // 0x6000521C: bne         $v0, $zero, L_600052C8
    if (ctx->r2 != 0) {
        // 0x60005220: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600052C8;
    }
    // 0x60005220: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005224: jal         0x60000B98
    // 0x60005228: addiu       $a0, $zero, 0x11F
    ctx->r4 = ADD32(0, 0X11F);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_6;
    // 0x60005228: addiu       $a0, $zero, 0x11F
    ctx->r4 = ADD32(0, 0X11F);
    after_6:
    // 0x6000522C: jal         0x60000BB0
    // 0x60005230: addiu       $a0, $zero, 0x11B
    ctx->r4 = ADD32(0, 0X11B);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_7;
    // 0x60005230: addiu       $a0, $zero, 0x11B
    ctx->r4 = ADD32(0, 0X11B);
    after_7:
    // 0x60005234: bne         $v0, $zero, L_60005264
    if (ctx->r2 != 0) {
        // 0x60005238: addiu       $a0, $zero, 0x8
        ctx->r4 = ADD32(0, 0X8);
            goto L_60005264;
    }
    // 0x60005238: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x6000523C: jal         0x60000B98
    // 0x60005240: addiu       $a0, $zero, 0x11B
    ctx->r4 = ADD32(0, 0X11B);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_8;
    // 0x60005240: addiu       $a0, $zero, 0x11B
    ctx->r4 = ADD32(0, 0X11B);
    after_8:
    // 0x60005244: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60005248: addiu       $a0, $a0, 0x5098
    ctx->r4 = ADD32(ctx->r4, 0X5098);
    // 0x6000524C: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60005250: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60005254: jal         0x60000994
    // 0x60005258: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world8_994(rdram, ctx);
        goto after_9;
    // 0x60005258: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_9:
    // 0x6000525C: b           L_600052C8
    // 0x60005260: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600052C8;
    // 0x60005260: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005264:
    // 0x60005264: jal         0x60000F04
    // 0x60005268: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world8_F04(rdram, ctx);
        goto after_10;
    // 0x60005268: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_10:
    // 0x6000526C: jal         0x60000A6C
    // 0x60005270: nop

    ovl_stage_world8_A6C(rdram, ctx);
        goto after_11;
    // 0x60005270: nop

    after_11:
    // 0x60005274: jal         0x60000F50
    // 0x60005278: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world8_F50(rdram, ctx);
        goto after_12;
    // 0x60005278: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_12:
    // 0x6000527C: jal         0x60000B98
    // 0x60005280: addiu       $a0, $zero, 0x11C
    ctx->r4 = ADD32(0, 0X11C);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_13;
    // 0x60005280: addiu       $a0, $zero, 0x11C
    ctx->r4 = ADD32(0, 0X11C);
    after_13:
    // 0x60005284: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60005288: addiu       $a0, $a0, 0x50D4
    ctx->r4 = ADD32(ctx->r4, 0X50D4);
    // 0x6000528C: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60005290: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60005294: jal         0x60000994
    // 0x60005298: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world8_994(rdram, ctx);
        goto after_14;
    // 0x60005298: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_14:
    // 0x6000529C: b           L_600052C8
    // 0x600052A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600052C8;
    // 0x600052A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600052A4:
    // 0x600052A4: jal         0x60000B98
    // 0x600052A8: addiu       $a0, $zero, 0x11D
    ctx->r4 = ADD32(0, 0X11D);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_15;
    // 0x600052A8: addiu       $a0, $zero, 0x11D
    ctx->r4 = ADD32(0, 0X11D);
    after_15:
    // 0x600052AC: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600052B0: addiu       $a0, $a0, 0x5068
    ctx->r4 = ADD32(ctx->r4, 0X5068);
    // 0x600052B4: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x600052B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x600052BC: jal         0x60000994
    // 0x600052C0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world8_994(rdram, ctx);
        goto after_16;
    // 0x600052C0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_16:
    // 0x600052C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600052C8:
    // 0x600052C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600052CC: jr          $ra
    // 0x600052D0: nop

    return;
    // 0x600052D0: nop

;}
RECOMP_FUNC void ovl_stage_world8_52D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600052D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600052D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600052DC: jal         0x600009C4
    // 0x600052E0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_stage_world8_9C4(rdram, ctx);
        goto after_0;
    // 0x600052E0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_0:
    // 0x600052E4: jal         0x60000BA4
    // 0x600052E8: addiu       $a0, $zero, 0x11E
    ctx->r4 = ADD32(0, 0X11E);
    ovl_stage_world8_BA4(rdram, ctx);
        goto after_1;
    // 0x600052E8: addiu       $a0, $zero, 0x11E
    ctx->r4 = ADD32(0, 0X11E);
    after_1:
    // 0x600052EC: jal         0x600009AC
    // 0x600052F0: nop

    ovl_stage_world8_9AC(rdram, ctx);
        goto after_2;
    // 0x600052F0: nop

    after_2:
    // 0x600052F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600052F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600052FC: jr          $ra
    // 0x60005300: nop

    return;
    // 0x60005300: nop

;}
RECOMP_FUNC void ovl_stage_world8_5304(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005304: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60005308: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x6000530C: jal         0x60000BB0
    // 0x60005310: addiu       $a0, $zero, 0x11A
    ctx->r4 = ADD32(0, 0X11A);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_0;
    // 0x60005310: addiu       $a0, $zero, 0x11A
    ctx->r4 = ADD32(0, 0X11A);
    after_0:
    // 0x60005314: beq         $v0, $zero, L_60005408
    if (ctx->r2 == 0) {
        // 0x60005318: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60005408;
    }
    // 0x60005318: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000531C: jal         0x60000BB0
    // 0x60005320: addiu       $a0, $zero, 0x187
    ctx->r4 = ADD32(0, 0X187);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_1;
    // 0x60005320: addiu       $a0, $zero, 0x187
    ctx->r4 = ADD32(0, 0X187);
    after_1:
    // 0x60005324: bne         $v0, $zero, L_60005408
    if (ctx->r2 != 0) {
        // 0x60005328: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60005408;
    }
    // 0x60005328: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000532C: jal         0x60000BB0
    // 0x60005330: addiu       $a0, $zero, 0x11E
    ctx->r4 = ADD32(0, 0X11E);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_2;
    // 0x60005330: addiu       $a0, $zero, 0x11E
    ctx->r4 = ADD32(0, 0X11E);
    after_2:
    // 0x60005334: bne         $v0, $zero, L_60005408
    if (ctx->r2 != 0) {
        // 0x60005338: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60005408;
    }
    // 0x60005338: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000533C: jal         0x60000BB0
    // 0x60005340: addiu       $a0, $zero, 0x11C
    ctx->r4 = ADD32(0, 0X11C);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_3;
    // 0x60005340: addiu       $a0, $zero, 0x11C
    ctx->r4 = ADD32(0, 0X11C);
    after_3:
    // 0x60005344: bne         $v0, $zero, L_60005408
    if (ctx->r2 != 0) {
        // 0x60005348: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60005408;
    }
    // 0x60005348: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000534C: jal         0x60000BB0
    // 0x60005350: addiu       $a0, $zero, 0x11D
    ctx->r4 = ADD32(0, 0X11D);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_4;
    // 0x60005350: addiu       $a0, $zero, 0x11D
    ctx->r4 = ADD32(0, 0X11D);
    after_4:
    // 0x60005354: beq         $v0, $zero, L_600053E4
    if (ctx->r2 == 0) {
        // 0x60005358: nop
    
            goto L_600053E4;
    }
    // 0x60005358: nop

    // 0x6000535C: jal         0x60000BB0
    // 0x60005360: addiu       $a0, $zero, 0x11F
    ctx->r4 = ADD32(0, 0X11F);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_5;
    // 0x60005360: addiu       $a0, $zero, 0x11F
    ctx->r4 = ADD32(0, 0X11F);
    after_5:
    // 0x60005364: bne         $v0, $zero, L_60005408
    if (ctx->r2 != 0) {
        // 0x60005368: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60005408;
    }
    // 0x60005368: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000536C: jal         0x60000B98
    // 0x60005370: addiu       $a0, $zero, 0x11F
    ctx->r4 = ADD32(0, 0X11F);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_6;
    // 0x60005370: addiu       $a0, $zero, 0x11F
    ctx->r4 = ADD32(0, 0X11F);
    after_6:
    // 0x60005374: jal         0x60000BB0
    // 0x60005378: addiu       $a0, $zero, 0x11B
    ctx->r4 = ADD32(0, 0X11B);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_7;
    // 0x60005378: addiu       $a0, $zero, 0x11B
    ctx->r4 = ADD32(0, 0X11B);
    after_7:
    // 0x6000537C: bne         $v0, $zero, L_600053AC
    if (ctx->r2 != 0) {
        // 0x60005380: nop
    
            goto L_600053AC;
    }
    // 0x60005380: nop

    // 0x60005384: jal         0x60000B98
    // 0x60005388: addiu       $a0, $zero, 0x11B
    ctx->r4 = ADD32(0, 0X11B);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_8;
    // 0x60005388: addiu       $a0, $zero, 0x11B
    ctx->r4 = ADD32(0, 0X11B);
    after_8:
    // 0x6000538C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60005390: addiu       $a0, $a0, 0x5098
    ctx->r4 = ADD32(ctx->r4, 0X5098);
    // 0x60005394: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60005398: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x6000539C: jal         0x60000994
    // 0x600053A0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world8_994(rdram, ctx);
        goto after_9;
    // 0x600053A0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_9:
    // 0x600053A4: b           L_60005408
    // 0x600053A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005408;
    // 0x600053A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600053AC:
    // 0x600053AC: jal         0x60000A6C
    // 0x600053B0: nop

    ovl_stage_world8_A6C(rdram, ctx);
        goto after_10;
    // 0x600053B0: nop

    after_10:
    // 0x600053B4: jal         0x60000F50
    // 0x600053B8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world8_F50(rdram, ctx);
        goto after_11;
    // 0x600053B8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_11:
    // 0x600053BC: jal         0x60000B98
    // 0x600053C0: addiu       $a0, $zero, 0x11C
    ctx->r4 = ADD32(0, 0X11C);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_12;
    // 0x600053C0: addiu       $a0, $zero, 0x11C
    ctx->r4 = ADD32(0, 0X11C);
    after_12:
    // 0x600053C4: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600053C8: addiu       $a0, $a0, 0x50D4
    ctx->r4 = ADD32(ctx->r4, 0X50D4);
    // 0x600053CC: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x600053D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x600053D4: jal         0x60000994
    // 0x600053D8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world8_994(rdram, ctx);
        goto after_13;
    // 0x600053D8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_13:
    // 0x600053DC: b           L_60005408
    // 0x600053E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005408;
    // 0x600053E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600053E4:
    // 0x600053E4: jal         0x60000B98
    // 0x600053E8: addiu       $a0, $zero, 0x11E
    ctx->r4 = ADD32(0, 0X11E);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_14;
    // 0x600053E8: addiu       $a0, $zero, 0x11E
    ctx->r4 = ADD32(0, 0X11E);
    after_14:
    // 0x600053EC: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600053F0: addiu       $a0, $a0, 0x52D4
    ctx->r4 = ADD32(ctx->r4, 0X52D4);
    // 0x600053F4: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x600053F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x600053FC: jal         0x60000994
    // 0x60005400: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world8_994(rdram, ctx);
        goto after_15;
    // 0x60005400: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_15:
    // 0x60005404: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005408:
    // 0x60005408: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x6000540C: jr          $ra
    // 0x60005410: nop

    return;
    // 0x60005410: nop

;}
RECOMP_FUNC void ovl_stage_world8_5414(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005414: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60005418: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x6000541C: jal         0x600009C4
    // 0x60005420: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_stage_world8_9C4(rdram, ctx);
        goto after_0;
    // 0x60005420: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_0:
    // 0x60005424: jal         0x60000BA4
    // 0x60005428: addiu       $a0, $zero, 0x131
    ctx->r4 = ADD32(0, 0X131);
    ovl_stage_world8_BA4(rdram, ctx);
        goto after_1;
    // 0x60005428: addiu       $a0, $zero, 0x131
    ctx->r4 = ADD32(0, 0X131);
    after_1:
    // 0x6000542C: jal         0x600009AC
    // 0x60005430: nop

    ovl_stage_world8_9AC(rdram, ctx);
        goto after_2;
    // 0x60005430: nop

    after_2:
    // 0x60005434: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005438: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x6000543C: jr          $ra
    // 0x60005440: nop

    return;
    // 0x60005440: nop

;}
RECOMP_FUNC void ovl_stage_world8_5444(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005444: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60005448: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x6000544C: jal         0x60000EEC
    // 0x60005450: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    ovl_stage_world8_EEC(rdram, ctx);
        goto after_0;
    // 0x60005450: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_0:
    // 0x60005454: jal         0x600009AC
    // 0x60005458: nop

    ovl_stage_world8_9AC(rdram, ctx);
        goto after_1;
    // 0x60005458: nop

    after_1:
    // 0x6000545C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005460: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60005464: jr          $ra
    // 0x60005468: nop

    return;
    // 0x60005468: nop

;}
RECOMP_FUNC void ovl_stage_world8_546C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000546C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60005470: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60005474: jal         0x60000BB0
    // 0x60005478: addiu       $a0, $zero, 0x131
    ctx->r4 = ADD32(0, 0X131);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_0;
    // 0x60005478: addiu       $a0, $zero, 0x131
    ctx->r4 = ADD32(0, 0X131);
    after_0:
    // 0x6000547C: bne         $v0, $zero, L_60005530
    if (ctx->r2 != 0) {
        // 0x60005480: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60005530;
    }
    // 0x60005480: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005484: jal         0x60000BB0
    // 0x60005488: addiu       $a0, $zero, 0x11C
    ctx->r4 = ADD32(0, 0X11C);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_1;
    // 0x60005488: addiu       $a0, $zero, 0x11C
    ctx->r4 = ADD32(0, 0X11C);
    after_1:
    // 0x6000548C: beq         $v0, $zero, L_60005530
    if (ctx->r2 == 0) {
        // 0x60005490: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60005530;
    }
    // 0x60005490: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005494: jal         0x60000BB0
    // 0x60005498: addiu       $a0, $zero, 0x187
    ctx->r4 = ADD32(0, 0X187);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_2;
    // 0x60005498: addiu       $a0, $zero, 0x187
    ctx->r4 = ADD32(0, 0X187);
    after_2:
    // 0x6000549C: bne         $v0, $zero, L_60005530
    if (ctx->r2 != 0) {
        // 0x600054A0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60005530;
    }
    // 0x600054A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600054A4: jal         0x60000BB0
    // 0x600054A8: addiu       $a0, $zero, 0x120
    ctx->r4 = ADD32(0, 0X120);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_3;
    // 0x600054A8: addiu       $a0, $zero, 0x120
    ctx->r4 = ADD32(0, 0X120);
    after_3:
    // 0x600054AC: bne         $v0, $zero, L_600054EC
    if (ctx->r2 != 0) {
        // 0x600054B0: addiu       $a0, $zero, 0x8
        ctx->r4 = ADD32(0, 0X8);
            goto L_600054EC;
    }
    // 0x600054B0: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x600054B4: jal         0x60000E68
    // 0x600054B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world8_E68(rdram, ctx);
        goto after_4;
    // 0x600054B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x600054BC: jal         0x60000B98
    // 0x600054C0: addiu       $a0, $zero, 0x131
    ctx->r4 = ADD32(0, 0X131);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_5;
    // 0x600054C0: addiu       $a0, $zero, 0x131
    ctx->r4 = ADD32(0, 0X131);
    after_5:
    // 0x600054C4: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600054C8: addiu       $a0, $a0, 0x5414
    ctx->r4 = ADD32(ctx->r4, 0X5414);
    // 0x600054CC: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x600054D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x600054D4: jal         0x60000994
    // 0x600054D8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world8_994(rdram, ctx);
        goto after_6;
    // 0x600054D8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_6:
    // 0x600054DC: jal         0x60000B98
    // 0x600054E0: addiu       $a0, $zero, 0x120
    ctx->r4 = ADD32(0, 0X120);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_7;
    // 0x600054E0: addiu       $a0, $zero, 0x120
    ctx->r4 = ADD32(0, 0X120);
    after_7:
    // 0x600054E4: b           L_60005530
    // 0x600054E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005530;
    // 0x600054E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600054EC:
    // 0x600054EC: jal         0x60000DE4
    // 0x600054F0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world8_DE4(rdram, ctx);
        goto after_8;
    // 0x600054F0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_8:
    // 0x600054F4: jal         0x60000CC4
    // 0x600054F8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_stage_world8_CC4(rdram, ctx);
        goto after_9;
    // 0x600054F8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_9:
    // 0x600054FC: jal         0x60000A6C
    // 0x60005500: nop

    ovl_stage_world8_A6C(rdram, ctx);
        goto after_10;
    // 0x60005500: nop

    after_10:
    // 0x60005504: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60005508: addiu       $a0, $a0, 0x5444
    ctx->r4 = ADD32(ctx->r4, 0X5444);
    // 0x6000550C: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60005510: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60005514: jal         0x60000994
    // 0x60005518: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world8_994(rdram, ctx);
        goto after_11;
    // 0x60005518: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_11:
    // 0x6000551C: jal         0x60000B98
    // 0x60005520: addiu       $a0, $zero, 0x187
    ctx->r4 = ADD32(0, 0X187);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_12;
    // 0x60005520: addiu       $a0, $zero, 0x187
    ctx->r4 = ADD32(0, 0X187);
    after_12:
    // 0x60005524: jal         0x60000A60
    // 0x60005528: addiu       $a0, $zero, 0xA9C
    ctx->r4 = ADD32(0, 0XA9C);
    ovl_stage_world8_A60(rdram, ctx);
        goto after_13;
    // 0x60005528: addiu       $a0, $zero, 0xA9C
    ctx->r4 = ADD32(0, 0XA9C);
    after_13:
    // 0x6000552C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005530:
    // 0x60005530: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60005534: jr          $ra
    // 0x60005538: nop

    return;
    // 0x60005538: nop

;}
RECOMP_FUNC void ovl_stage_world8_553C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000553C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60005540: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60005544: jal         0x60000B98
    // 0x60005548: addiu       $a0, $zero, 0x187
    ctx->r4 = ADD32(0, 0X187);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_0;
    // 0x60005548: addiu       $a0, $zero, 0x187
    ctx->r4 = ADD32(0, 0X187);
    after_0:
    // 0x6000554C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005550: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60005554: jr          $ra
    // 0x60005558: nop

    return;
    // 0x60005558: nop

;}
RECOMP_FUNC void ovl_stage_world8_555C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000555C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60005560: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60005564: jal         0x60000BB0
    // 0x60005568: addiu       $a0, $zero, 0x122
    ctx->r4 = ADD32(0, 0X122);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_0;
    // 0x60005568: addiu       $a0, $zero, 0x122
    ctx->r4 = ADD32(0, 0X122);
    after_0:
    // 0x6000556C: bne         $v0, $zero, L_60005584
    if (ctx->r2 != 0) {
        // 0x60005570: nop
    
            goto L_60005584;
    }
    // 0x60005570: nop

    // 0x60005574: jal         0x60000B98
    // 0x60005578: addiu       $a0, $zero, 0x122
    ctx->r4 = ADD32(0, 0X122);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_1;
    // 0x60005578: addiu       $a0, $zero, 0x122
    ctx->r4 = ADD32(0, 0X122);
    after_1:
    // 0x6000557C: b           L_600055BC
    // 0x60005580: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600055BC;
    // 0x60005580: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005584:
    // 0x60005584: jal         0x60000BB0
    // 0x60005588: addiu       $a0, $zero, 0x123
    ctx->r4 = ADD32(0, 0X123);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_2;
    // 0x60005588: addiu       $a0, $zero, 0x123
    ctx->r4 = ADD32(0, 0X123);
    after_2:
    // 0x6000558C: bne         $v0, $zero, L_600055BC
    if (ctx->r2 != 0) {
        // 0x60005590: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600055BC;
    }
    // 0x60005590: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005594: jal         0x60000B98
    // 0x60005598: addiu       $a0, $zero, 0x123
    ctx->r4 = ADD32(0, 0X123);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_3;
    // 0x60005598: addiu       $a0, $zero, 0x123
    ctx->r4 = ADD32(0, 0X123);
    after_3:
    // 0x6000559C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x600055A0: jal         0x60000E68
    // 0x600055A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world8_E68(rdram, ctx);
        goto after_4;
    // 0x600055A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x600055A8: jal         0x60000E44
    // 0x600055AC: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    ovl_stage_world8_E44(rdram, ctx);
        goto after_5;
    // 0x600055AC: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    after_5:
    // 0x600055B0: jal         0x60000E44
    // 0x600055B4: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    ovl_stage_world8_E44(rdram, ctx);
        goto after_6;
    // 0x600055B4: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_6:
    // 0x600055B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600055BC:
    // 0x600055BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600055C0: jr          $ra
    // 0x600055C4: nop

    return;
    // 0x600055C4: nop

;}
RECOMP_FUNC void ovl_stage_world8_55C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600055C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600055CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600055D0: jal         0x60000BB0
    // 0x600055D4: addiu       $a0, $zero, 0x124
    ctx->r4 = ADD32(0, 0X124);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_0;
    // 0x600055D4: addiu       $a0, $zero, 0x124
    ctx->r4 = ADD32(0, 0X124);
    after_0:
    // 0x600055D8: bne         $v0, $zero, L_60005608
    if (ctx->r2 != 0) {
        // 0x600055DC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60005608;
    }
    // 0x600055DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600055E0: jal         0x60000B98
    // 0x600055E4: addiu       $a0, $zero, 0x124
    ctx->r4 = ADD32(0, 0X124);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_1;
    // 0x600055E4: addiu       $a0, $zero, 0x124
    ctx->r4 = ADD32(0, 0X124);
    after_1:
    // 0x600055E8: jal         0x60000B98
    // 0x600055EC: addiu       $a0, $zero, 0x125
    ctx->r4 = ADD32(0, 0X125);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_2;
    // 0x600055EC: addiu       $a0, $zero, 0x125
    ctx->r4 = ADD32(0, 0X125);
    after_2:
    // 0x600055F0: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x600055F4: jal         0x60000E68
    // 0x600055F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world8_E68(rdram, ctx);
        goto after_3;
    // 0x600055F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x600055FC: jal         0x60000E44
    // 0x60005600: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    ovl_stage_world8_E44(rdram, ctx);
        goto after_4;
    // 0x60005600: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_4:
    // 0x60005604: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005608:
    // 0x60005608: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x6000560C: jr          $ra
    // 0x60005610: nop

    return;
    // 0x60005610: nop

;}
RECOMP_FUNC void ovl_stage_world8_5614(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005614: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60005618: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x6000561C: jal         0x60000BB0
    // 0x60005620: addiu       $a0, $zero, 0x126
    ctx->r4 = ADD32(0, 0X126);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_0;
    // 0x60005620: addiu       $a0, $zero, 0x126
    ctx->r4 = ADD32(0, 0X126);
    after_0:
    // 0x60005624: bne         $v0, $zero, L_6000563C
    if (ctx->r2 != 0) {
        // 0x60005628: nop
    
            goto L_6000563C;
    }
    // 0x60005628: nop

    // 0x6000562C: jal         0x60000B98
    // 0x60005630: addiu       $a0, $zero, 0x126
    ctx->r4 = ADD32(0, 0X126);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_1;
    // 0x60005630: addiu       $a0, $zero, 0x126
    ctx->r4 = ADD32(0, 0X126);
    after_1:
    // 0x60005634: b           L_6000566C
    // 0x60005638: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_6000566C;
    // 0x60005638: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000563C:
    // 0x6000563C: jal         0x60000BB0
    // 0x60005640: addiu       $a0, $zero, 0x127
    ctx->r4 = ADD32(0, 0X127);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_2;
    // 0x60005640: addiu       $a0, $zero, 0x127
    ctx->r4 = ADD32(0, 0X127);
    after_2:
    // 0x60005644: bne         $v0, $zero, L_6000566C
    if (ctx->r2 != 0) {
        // 0x60005648: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_6000566C;
    }
    // 0x60005648: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000564C: jal         0x60000B98
    // 0x60005650: addiu       $a0, $zero, 0x127
    ctx->r4 = ADD32(0, 0X127);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_3;
    // 0x60005650: addiu       $a0, $zero, 0x127
    ctx->r4 = ADD32(0, 0X127);
    after_3:
    // 0x60005654: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x60005658: jal         0x60000E68
    // 0x6000565C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world8_E68(rdram, ctx);
        goto after_4;
    // 0x6000565C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x60005660: jal         0x60000E44
    // 0x60005664: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    ovl_stage_world8_E44(rdram, ctx);
        goto after_5;
    // 0x60005664: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_5:
    // 0x60005668: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000566C:
    // 0x6000566C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60005670: jr          $ra
    // 0x60005674: nop

    return;
    // 0x60005674: nop

;}
RECOMP_FUNC void ovl_stage_world8_5678(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005678: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x6000567C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60005680: jal         0x60000BB0
    // 0x60005684: addiu       $a0, $zero, 0x128
    ctx->r4 = ADD32(0, 0X128);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_0;
    // 0x60005684: addiu       $a0, $zero, 0x128
    ctx->r4 = ADD32(0, 0X128);
    after_0:
    // 0x60005688: bne         $v0, $zero, L_600056A0
    if (ctx->r2 != 0) {
        // 0x6000568C: nop
    
            goto L_600056A0;
    }
    // 0x6000568C: nop

    // 0x60005690: jal         0x60000B98
    // 0x60005694: addiu       $a0, $zero, 0x128
    ctx->r4 = ADD32(0, 0X128);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_1;
    // 0x60005694: addiu       $a0, $zero, 0x128
    ctx->r4 = ADD32(0, 0X128);
    after_1:
    // 0x60005698: b           L_600056D8
    // 0x6000569C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600056D8;
    // 0x6000569C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600056A0:
    // 0x600056A0: jal         0x60000BB0
    // 0x600056A4: addiu       $a0, $zero, 0x129
    ctx->r4 = ADD32(0, 0X129);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_2;
    // 0x600056A4: addiu       $a0, $zero, 0x129
    ctx->r4 = ADD32(0, 0X129);
    after_2:
    // 0x600056A8: bne         $v0, $zero, L_600056D8
    if (ctx->r2 != 0) {
        // 0x600056AC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600056D8;
    }
    // 0x600056AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600056B0: jal         0x60000B98
    // 0x600056B4: addiu       $a0, $zero, 0x129
    ctx->r4 = ADD32(0, 0X129);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_3;
    // 0x600056B4: addiu       $a0, $zero, 0x129
    ctx->r4 = ADD32(0, 0X129);
    after_3:
    // 0x600056B8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x600056BC: jal         0x60000E68
    // 0x600056C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world8_E68(rdram, ctx);
        goto after_4;
    // 0x600056C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x600056C4: jal         0x60000E44
    // 0x600056C8: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    ovl_stage_world8_E44(rdram, ctx);
        goto after_5;
    // 0x600056C8: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    after_5:
    // 0x600056CC: jal         0x60000E44
    // 0x600056D0: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    ovl_stage_world8_E44(rdram, ctx);
        goto after_6;
    // 0x600056D0: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    after_6:
    // 0x600056D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600056D8:
    // 0x600056D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600056DC: jr          $ra
    // 0x600056E0: nop

    return;
    // 0x600056E0: nop

;}
RECOMP_FUNC void ovl_stage_world8_56E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600056E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600056E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600056EC: jal         0x60000BB0
    // 0x600056F0: addiu       $a0, $zero, 0x12A
    ctx->r4 = ADD32(0, 0X12A);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_0;
    // 0x600056F0: addiu       $a0, $zero, 0x12A
    ctx->r4 = ADD32(0, 0X12A);
    after_0:
    // 0x600056F4: bne         $v0, $zero, L_6000571C
    if (ctx->r2 != 0) {
        // 0x600056F8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_6000571C;
    }
    // 0x600056F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600056FC: jal         0x60000B98
    // 0x60005700: addiu       $a0, $zero, 0x12A
    ctx->r4 = ADD32(0, 0X12A);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_1;
    // 0x60005700: addiu       $a0, $zero, 0x12A
    ctx->r4 = ADD32(0, 0X12A);
    after_1:
    // 0x60005704: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x60005708: jal         0x60000E68
    // 0x6000570C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world8_E68(rdram, ctx);
        goto after_2;
    // 0x6000570C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x60005710: jal         0x60000B98
    // 0x60005714: addiu       $a0, $zero, 0x188
    ctx->r4 = ADD32(0, 0X188);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_3;
    // 0x60005714: addiu       $a0, $zero, 0x188
    ctx->r4 = ADD32(0, 0X188);
    after_3:
    // 0x60005718: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000571C:
    // 0x6000571C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60005720: jr          $ra
    // 0x60005724: nop

    return;
    // 0x60005724: nop

    // 0x60005728: jr          $ra
    // 0x6000572C: nop

    return;
    // 0x6000572C: nop

;}
RECOMP_FUNC void ovl_stage_world8_5730(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005730: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60005734: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60005738: jal         0x60000BB0
    // 0x6000573C: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_0;
    // 0x6000573C: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    after_0:
    // 0x60005740: bne         $v0, $zero, L_6000577C
    if (ctx->r2 != 0) {
        // 0x60005744: nop
    
            goto L_6000577C;
    }
    // 0x60005744: nop

    // 0x60005748: jal         0x60000B98
    // 0x6000574C: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_1;
    // 0x6000574C: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    after_1:
    // 0x60005750: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x60005754: jal         0x60000E68
    // 0x60005758: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world8_E68(rdram, ctx);
        goto after_2;
    // 0x60005758: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x6000575C: jal         0x60000BB0
    // 0x60005760: addiu       $a0, $zero, 0x101
    ctx->r4 = ADD32(0, 0X101);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_3;
    // 0x60005760: addiu       $a0, $zero, 0x101
    ctx->r4 = ADD32(0, 0X101);
    after_3:
    // 0x60005764: beq         $v0, $zero, L_600057A8
    if (ctx->r2 == 0) {
        // 0x60005768: addiu       $a0, $zero, 0x9
        ctx->r4 = ADD32(0, 0X9);
            goto L_600057A8;
    }
    // 0x60005768: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x6000576C: jal         0x60000E68
    // 0x60005770: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world8_E68(rdram, ctx);
        goto after_4;
    // 0x60005770: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x60005774: b           L_600057AC
    // 0x60005778: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600057AC;
    // 0x60005778: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000577C:
    // 0x6000577C: jal         0x60000BB0
    // 0x60005780: addiu       $a0, $zero, 0x101
    ctx->r4 = ADD32(0, 0X101);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_5;
    // 0x60005780: addiu       $a0, $zero, 0x101
    ctx->r4 = ADD32(0, 0X101);
    after_5:
    // 0x60005784: beq         $v0, $zero, L_60005794
    if (ctx->r2 == 0) {
        // 0x60005788: addiu       $a0, $zero, 0x9
        ctx->r4 = ADD32(0, 0X9);
            goto L_60005794;
    }
    // 0x60005788: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x6000578C: jal         0x60000E68
    // 0x60005790: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world8_E68(rdram, ctx);
        goto after_6;
    // 0x60005790: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
L_60005794:
    // 0x60005794: jal         0x60000BA4
    // 0x60005798: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    ovl_stage_world8_BA4(rdram, ctx);
        goto after_7;
    // 0x60005798: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    after_7:
    // 0x6000579C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x600057A0: jal         0x60000E68
    // 0x600057A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world8_E68(rdram, ctx);
        goto after_8;
    // 0x600057A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
L_600057A8:
    // 0x600057A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600057AC:
    // 0x600057AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600057B0: jr          $ra
    // 0x600057B4: nop

    return;
    // 0x600057B4: nop

;}
RECOMP_FUNC void ovl_stage_world8_57B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600057B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600057BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600057C0: jal         0x60000BB0
    // 0x600057C4: addiu       $a0, $zero, 0x101
    ctx->r4 = ADD32(0, 0X101);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_0;
    // 0x600057C4: addiu       $a0, $zero, 0x101
    ctx->r4 = ADD32(0, 0X101);
    after_0:
    // 0x600057C8: bne         $v0, $zero, L_60005804
    if (ctx->r2 != 0) {
        // 0x600057CC: nop
    
            goto L_60005804;
    }
    // 0x600057CC: nop

    // 0x600057D0: jal         0x60000B98
    // 0x600057D4: addiu       $a0, $zero, 0x101
    ctx->r4 = ADD32(0, 0X101);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_1;
    // 0x600057D4: addiu       $a0, $zero, 0x101
    ctx->r4 = ADD32(0, 0X101);
    after_1:
    // 0x600057D8: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x600057DC: jal         0x60000E68
    // 0x600057E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world8_E68(rdram, ctx);
        goto after_2;
    // 0x600057E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x600057E4: jal         0x60000BB0
    // 0x600057E8: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_3;
    // 0x600057E8: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    after_3:
    // 0x600057EC: beq         $v0, $zero, L_60005830
    if (ctx->r2 == 0) {
        // 0x600057F0: addiu       $a0, $zero, 0x9
        ctx->r4 = ADD32(0, 0X9);
            goto L_60005830;
    }
    // 0x600057F0: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x600057F4: jal         0x60000E68
    // 0x600057F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world8_E68(rdram, ctx);
        goto after_4;
    // 0x600057F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x600057FC: b           L_60005834
    // 0x60005800: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005834;
    // 0x60005800: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005804:
    // 0x60005804: jal         0x60000BB0
    // 0x60005808: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_5;
    // 0x60005808: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    after_5:
    // 0x6000580C: beq         $v0, $zero, L_6000581C
    if (ctx->r2 == 0) {
        // 0x60005810: addiu       $a0, $zero, 0x9
        ctx->r4 = ADD32(0, 0X9);
            goto L_6000581C;
    }
    // 0x60005810: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x60005814: jal         0x60000E68
    // 0x60005818: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world8_E68(rdram, ctx);
        goto after_6;
    // 0x60005818: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
L_6000581C:
    // 0x6000581C: jal         0x60000BA4
    // 0x60005820: addiu       $a0, $zero, 0x101
    ctx->r4 = ADD32(0, 0X101);
    ovl_stage_world8_BA4(rdram, ctx);
        goto after_7;
    // 0x60005820: addiu       $a0, $zero, 0x101
    ctx->r4 = ADD32(0, 0X101);
    after_7:
    // 0x60005824: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x60005828: jal         0x60000E68
    // 0x6000582C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world8_E68(rdram, ctx);
        goto after_8;
    // 0x6000582C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
L_60005830:
    // 0x60005830: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005834:
    // 0x60005834: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60005838: jr          $ra
    // 0x6000583C: nop

    return;
    // 0x6000583C: nop

;}
RECOMP_FUNC void ovl_stage_world8_5840(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005840: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60005844: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60005848: jal         0x600009C4
    // 0x6000584C: addiu       $a0, $zero, 0x3A
    ctx->r4 = ADD32(0, 0X3A);
    ovl_stage_world8_9C4(rdram, ctx);
        goto after_0;
    // 0x6000584C: addiu       $a0, $zero, 0x3A
    ctx->r4 = ADD32(0, 0X3A);
    after_0:
    // 0x60005850: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x60005854: jal         0x600006D0
    // 0x60005858: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world8_6D0(rdram, ctx);
        goto after_1;
    // 0x60005858: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x6000585C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60005860: jal         0x60000E38
    // 0x60005864: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world8_E38(rdram, ctx);
        goto after_2;
    // 0x60005864: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x60005868: jal         0x600009AC
    // 0x6000586C: nop

    ovl_stage_world8_9AC(rdram, ctx);
        goto after_3;
    // 0x6000586C: nop

    after_3:
    // 0x60005870: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005874: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60005878: jr          $ra
    // 0x6000587C: nop

    return;
    // 0x6000587C: nop

;}
RECOMP_FUNC void ovl_stage_world8_5880(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005880: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x60005884: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60005888: jal         0x60000C1C
    // 0x6000588C: nop

    ovl_stage_world8_C1C(rdram, ctx);
        goto after_0;
    // 0x6000588C: nop

    after_0:
    // 0x60005890: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x60005894: jal         0x60000BB0
    // 0x60005898: addiu       $a0, $zero, 0x197
    ctx->r4 = ADD32(0, 0X197);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_1;
    // 0x60005898: addiu       $a0, $zero, 0x197
    ctx->r4 = ADD32(0, 0X197);
    after_1:
    // 0x6000589C: bne         $v0, $zero, L_600058AC
    if (ctx->r2 != 0) {
        // 0x600058A0: addiu       $a0, $zero, 0x6
        ctx->r4 = ADD32(0, 0X6);
            goto L_600058AC;
    }
    // 0x600058A0: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x600058A4: jal         0x60000F04
    // 0x600058A8: addiu       $a1, $zero, -0x9
    ctx->r5 = ADD32(0, -0X9);
    ovl_stage_world8_F04(rdram, ctx);
        goto after_2;
    // 0x600058A8: addiu       $a1, $zero, -0x9
    ctx->r5 = ADD32(0, -0X9);
    after_2:
L_600058AC:
    // 0x600058AC: jal         0x60000BB0
    // 0x600058B0: addiu       $a0, $zero, 0x189
    ctx->r4 = ADD32(0, 0X189);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_3;
    // 0x600058B0: addiu       $a0, $zero, 0x189
    ctx->r4 = ADD32(0, 0X189);
    after_3:
    // 0x600058B4: beq         $v0, $zero, L_60005904
    if (ctx->r2 == 0) {
        // 0x600058B8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60005904;
    }
    // 0x600058B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600058BC: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x600058C0: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x600058C4: lw          $t7, 0xC($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XC);
    // 0x600058C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x600058CC: bne         $t7, $zero, L_600058EC
    if (ctx->r15 != 0) {
        // 0x600058D0: addiu       $a0, $zero, 0x3
        ctx->r4 = ADD32(0, 0X3);
            goto L_600058EC;
    }
    // 0x600058D0: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x600058D4: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600058D8: addiu       $a0, $a0, 0x5840
    ctx->r4 = ADD32(ctx->r4, 0X5840);
    // 0x600058DC: jal         0x60000994
    // 0x600058E0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world8_994(rdram, ctx);
        goto after_4;
    // 0x600058E0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x600058E4: b           L_60005904
    // 0x600058E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005904;
    // 0x600058E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600058EC:
    // 0x600058EC: jal         0x600006D0
    // 0x600058F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world8_6D0(rdram, ctx);
        goto after_5;
    // 0x600058F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x600058F4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600058F8: jal         0x60000E38
    // 0x600058FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world8_E38(rdram, ctx);
        goto after_6;
    // 0x600058FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x60005900: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005904:
    // 0x60005904: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x60005908: jr          $ra
    // 0x6000590C: nop

    return;
    // 0x6000590C: nop

;}
RECOMP_FUNC void ovl_stage_world8_5910(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005910: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60005914: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60005918: jal         0x60000B98
    // 0x6000591C: addiu       $a0, $zero, 0x1A3
    ctx->r4 = ADD32(0, 0X1A3);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_0;
    // 0x6000591C: addiu       $a0, $zero, 0x1A3
    ctx->r4 = ADD32(0, 0X1A3);
    after_0:
    // 0x60005920: jal         0x60000244
    // 0x60005924: addiu       $a0, $zero, 0x9F
    ctx->r4 = ADD32(0, 0X9F);
    ovl_stage_world8_244(rdram, ctx);
        goto after_1;
    // 0x60005924: addiu       $a0, $zero, 0x9F
    ctx->r4 = ADD32(0, 0X9F);
    after_1:
    // 0x60005928: jal         0x60000E44
    // 0x6000592C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    ovl_stage_world8_E44(rdram, ctx);
        goto after_2;
    // 0x6000592C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_2:
    // 0x60005930: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005934: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60005938: jr          $ra
    // 0x6000593C: nop

    return;
    // 0x6000593C: nop

;}
RECOMP_FUNC void ovl_stage_world8_5940(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005940: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x60005944: swc1        $f24, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f24.u32l;
    // 0x60005948: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x6000594C: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x60005950: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x60005954: lui         $at, 0x43E1
    ctx->r1 = S32(0X43E1 << 16);
    // 0x60005958: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x6000595C: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x60005960: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x60005964: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x60005968: lui         $v1, 0x6001
    ctx->r3 = S32(0X6001 << 16);
    // 0x6000596C: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x60005970: lui         $s1, 0x6001
    ctx->r17 = S32(0X6001 << 16);
    // 0x60005974: lw          $v1, -0x6798($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6798);
    // 0x60005978: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x6000597C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x60005980: swc1        $f25, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x60005984: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x60005988: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x6000598C: addiu       $s1, $s1, -0x6798
    ctx->r17 = ADD32(ctx->r17, -0X6798);
    // 0x60005990: addiu       $s0, $sp, 0x40
    ctx->r16 = ADD32(ctx->r29, 0X40);
    // 0x60005994: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
L_60005998:
    // 0x60005998: sw          $t6, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r14;
    // 0x6000599C: jal         0x60000E74
    // 0x600059A0: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    ovl_stage_world8_E74(rdram, ctx);
        goto after_0;
    // 0x600059A0: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_0:
    // 0x600059A4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600059A8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x600059AC: jal         0x600006C4
    // 0x600059B0: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_1;
    // 0x600059B0: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_1:
    // 0x600059B4: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x600059B8: nop

    // 0x600059BC: c.eq.s      $f4, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f4.fl == ctx->f22.fl;
    // 0x600059C0: nop

    // 0x600059C4: bc1t        L_60005A38
    if (c1cs) {
        // 0x600059C8: nop
    
            goto L_60005A38;
    }
    // 0x600059C8: nop

    // 0x600059CC: jal         0x60000E74
    // 0x600059D0: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    ovl_stage_world8_E74(rdram, ctx);
        goto after_2;
    // 0x600059D0: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_2:
    // 0x600059D4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600059D8: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x600059DC: jal         0x600006C4
    // 0x600059E0: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_3;
    // 0x600059E0: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_3:
    // 0x600059E4: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x600059E8: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x600059EC: lwc1        $f6, 0x30($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X30);
    // 0x600059F0: nop

    // 0x600059F4: add.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f20.fl;
    // 0x600059F8: jal         0x60000E74
    // 0x600059FC: swc1        $f8, 0x30($t7)
    MEM_W(0X30, ctx->r15) = ctx->f8.u32l;
    ovl_stage_world8_E74(rdram, ctx);
        goto after_4;
    // 0x600059FC: swc1        $f8, 0x30($t7)
    MEM_W(0X30, ctx->r15) = ctx->f8.u32l;
    after_4:
    // 0x60005A00: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60005A04: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x60005A08: jal         0x600006C4
    // 0x60005A0C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_5;
    // 0x60005A0C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_5:
    // 0x60005A10: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x60005A14: nop

    // 0x60005A18: slti        $at, $v1, 0x5
    ctx->r1 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
    // 0x60005A1C: beq         $at, $zero, L_60005A48
    if (ctx->r1 == 0) {
        // 0x60005A20: nop
    
            goto L_60005A48;
    }
    // 0x60005A20: nop

    // 0x60005A24: jal         0x600009D0
    // 0x60005A28: nop

    ovl_stage_world8_9D0(rdram, ctx);
        goto after_6;
    // 0x60005A28: nop

    after_6:
    // 0x60005A2C: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x60005A30: b           L_60005998
    // 0x60005A34: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
        goto L_60005998;
    // 0x60005A34: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
L_60005A38:
    // 0x60005A38: jal         0x600009D0
    // 0x60005A3C: nop

    ovl_stage_world8_9D0(rdram, ctx);
        goto after_7;
    // 0x60005A3C: nop

    after_7:
    // 0x60005A40: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x60005A44: nop

L_60005A48:
    // 0x60005A48: beq         $v1, $zero, L_60005998
    if (ctx->r3 == 0) {
        // 0x60005A4C: addiu       $t6, $v1, 0x1
        ctx->r14 = ADD32(ctx->r3, 0X1);
            goto L_60005998;
    }
    // 0x60005A4C: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
    // 0x60005A50: jal         0x60000E74
    // 0x60005A54: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    ovl_stage_world8_E74(rdram, ctx);
        goto after_8;
    // 0x60005A54: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_8:
    // 0x60005A58: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60005A5C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x60005A60: jal         0x600006C4
    // 0x60005A64: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_9;
    // 0x60005A64: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_9:
    // 0x60005A68: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x60005A6C: nop

    // 0x60005A70: c.eq.s      $f10, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    c1cs = ctx->f10.fl == ctx->f24.fl;
    // 0x60005A74: nop

    // 0x60005A78: bc1t        L_60005AD8
    if (c1cs) {
        // 0x60005A7C: nop
    
            goto L_60005AD8;
    }
    // 0x60005A7C: nop

    // 0x60005A80: jal         0x60000E74
    // 0x60005A84: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    ovl_stage_world8_E74(rdram, ctx);
        goto after_10;
    // 0x60005A84: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_10:
    // 0x60005A88: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60005A8C: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x60005A90: jal         0x600006C4
    // 0x60005A94: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_11;
    // 0x60005A94: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_11:
    // 0x60005A98: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x60005A9C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x60005AA0: lwc1        $f16, 0x30($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X30);
    // 0x60005AA4: nop

    // 0x60005AA8: sub.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f20.fl;
    // 0x60005AAC: jal         0x60000E74
    // 0x60005AB0: swc1        $f18, 0x30($t8)
    MEM_W(0X30, ctx->r24) = ctx->f18.u32l;
    ovl_stage_world8_E74(rdram, ctx);
        goto after_12;
    // 0x60005AB0: swc1        $f18, 0x30($t8)
    MEM_W(0X30, ctx->r24) = ctx->f18.u32l;
    after_12:
    // 0x60005AB4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60005AB8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x60005ABC: jal         0x600006C4
    // 0x60005AC0: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_13;
    // 0x60005AC0: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_13:
    // 0x60005AC4: jal         0x600009D0
    // 0x60005AC8: nop

    ovl_stage_world8_9D0(rdram, ctx);
        goto after_14;
    // 0x60005AC8: nop

    after_14:
    // 0x60005ACC: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x60005AD0: b           L_60005A48
    // 0x60005AD4: nop

        goto L_60005A48;
    // 0x60005AD4: nop

L_60005AD8:
    // 0x60005AD8: jal         0x60000BA4
    // 0x60005ADC: addiu       $a0, $zero, 0x101
    ctx->r4 = ADD32(0, 0X101);
    ovl_stage_world8_BA4(rdram, ctx);
        goto after_15;
    // 0x60005ADC: addiu       $a0, $zero, 0x101
    ctx->r4 = ADD32(0, 0X101);
    after_15:
    // 0x60005AE0: jal         0x600009AC
    // 0x60005AE4: nop

    ovl_stage_world8_9AC(rdram, ctx);
        goto after_16;
    // 0x60005AE4: nop

    after_16:
    // 0x60005AE8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x60005AEC: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x60005AF0: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x60005AF4: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x60005AF8: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x60005AFC: lwc1        $f25, 0x20($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x60005B00: lwc1        $f24, 0x24($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X24);
    // 0x60005B04: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x60005B08: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x60005B0C: jr          $ra
    // 0x60005B10: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x60005B10: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_stage_world8_5B14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005B14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60005B18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60005B1C: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60005B20: sw          $zero, -0x6798($at)
    MEM_W(-0X6798, ctx->r1) = 0;
    // 0x60005B24: jal         0x60000BB0
    // 0x60005B28: addiu       $a0, $zero, 0x101
    ctx->r4 = ADD32(0, 0X101);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_0;
    // 0x60005B28: addiu       $a0, $zero, 0x101
    ctx->r4 = ADD32(0, 0X101);
    after_0:
    // 0x60005B2C: bne         $v0, $zero, L_60005B58
    if (ctx->r2 != 0) {
        // 0x60005B30: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60005B58;
    }
    // 0x60005B30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005B34: jal         0x60000B98
    // 0x60005B38: addiu       $a0, $zero, 0x101
    ctx->r4 = ADD32(0, 0X101);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_1;
    // 0x60005B38: addiu       $a0, $zero, 0x101
    ctx->r4 = ADD32(0, 0X101);
    after_1:
    // 0x60005B3C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60005B40: addiu       $a0, $a0, 0x5940
    ctx->r4 = ADD32(ctx->r4, 0X5940);
    // 0x60005B44: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60005B48: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60005B4C: jal         0x60000994
    // 0x60005B50: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world8_994(rdram, ctx);
        goto after_2;
    // 0x60005B50: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x60005B54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005B58:
    // 0x60005B58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60005B5C: jr          $ra
    // 0x60005B60: nop

    return;
    // 0x60005B60: nop

;}
RECOMP_FUNC void ovl_stage_world8_5B64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005B64: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x60005B68: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x60005B6C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x60005B70: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x60005B74: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x60005B78: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x60005B7C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x60005B80: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x60005B84: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x60005B88: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60005B8C: addiu       $s1, $sp, 0x38
    ctx->r17 = ADD32(ctx->r29, 0X38);
L_60005B90:
    // 0x60005B90: jal         0x60000E74
    // 0x60005B94: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    ovl_stage_world8_E74(rdram, ctx);
        goto after_0;
    // 0x60005B94: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_0:
    // 0x60005B98: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60005B9C: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x60005BA0: jal         0x600006C4
    // 0x60005BA4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_1;
    // 0x60005BA4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_1:
    // 0x60005BA8: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x60005BAC: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x60005BB0: lwc1        $f4, 0x30($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X30);
    // 0x60005BB4: nop

    // 0x60005BB8: add.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f20.fl;
    // 0x60005BBC: jal         0x60000E74
    // 0x60005BC0: swc1        $f6, 0x30($t6)
    MEM_W(0X30, ctx->r14) = ctx->f6.u32l;
    ovl_stage_world8_E74(rdram, ctx);
        goto after_2;
    // 0x60005BC0: swc1        $f6, 0x30($t6)
    MEM_W(0X30, ctx->r14) = ctx->f6.u32l;
    after_2:
    // 0x60005BC4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60005BC8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x60005BCC: jal         0x600006C4
    // 0x60005BD0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_3;
    // 0x60005BD0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_3:
    // 0x60005BD4: jal         0x600009D0
    // 0x60005BD8: nop

    ovl_stage_world8_9D0(rdram, ctx);
        goto after_4;
    // 0x60005BD8: nop

    after_4:
    // 0x60005BDC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60005BE0: slti        $at, $s0, 0x14
    ctx->r1 = SIGNED(ctx->r16) < 0X14 ? 1 : 0;
    // 0x60005BE4: bne         $at, $zero, L_60005B90
    if (ctx->r1 != 0) {
        // 0x60005BE8: nop
    
            goto L_60005B90;
    }
    // 0x60005BE8: nop

    // 0x60005BEC: jal         0x600009C4
    // 0x60005BF0: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    ovl_stage_world8_9C4(rdram, ctx);
        goto after_5;
    // 0x60005BF0: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    after_5:
    // 0x60005BF4: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x60005BF8: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x60005BFC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60005C00: addiu       $s2, $zero, 0xA
    ctx->r18 = ADD32(0, 0XA);
L_60005C04:
    // 0x60005C04: jal         0x60000E74
    // 0x60005C08: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    ovl_stage_world8_E74(rdram, ctx);
        goto after_6;
    // 0x60005C08: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_6:
    // 0x60005C0C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60005C10: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x60005C14: jal         0x600006C4
    // 0x60005C18: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_7;
    // 0x60005C18: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_7:
    // 0x60005C1C: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x60005C20: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x60005C24: lwc1        $f8, 0x30($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X30);
    // 0x60005C28: nop

    // 0x60005C2C: sub.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f20.fl;
    // 0x60005C30: jal         0x60000E74
    // 0x60005C34: swc1        $f10, 0x30($t7)
    MEM_W(0X30, ctx->r15) = ctx->f10.u32l;
    ovl_stage_world8_E74(rdram, ctx);
        goto after_8;
    // 0x60005C34: swc1        $f10, 0x30($t7)
    MEM_W(0X30, ctx->r15) = ctx->f10.u32l;
    after_8:
    // 0x60005C38: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60005C3C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x60005C40: jal         0x600006C4
    // 0x60005C44: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_9;
    // 0x60005C44: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_9:
    // 0x60005C48: jal         0x600009D0
    // 0x60005C4C: nop

    ovl_stage_world8_9D0(rdram, ctx);
        goto after_10;
    // 0x60005C4C: nop

    after_10:
    // 0x60005C50: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60005C54: bne         $s0, $s2, L_60005C04
    if (ctx->r16 != ctx->r18) {
        // 0x60005C58: nop
    
            goto L_60005C04;
    }
    // 0x60005C58: nop

    // 0x60005C5C: jal         0x60000BA4
    // 0x60005C60: addiu       $a0, $zero, 0x102
    ctx->r4 = ADD32(0, 0X102);
    ovl_stage_world8_BA4(rdram, ctx);
        goto after_11;
    // 0x60005C60: addiu       $a0, $zero, 0x102
    ctx->r4 = ADD32(0, 0X102);
    after_11:
    // 0x60005C64: jal         0x600009AC
    // 0x60005C68: nop

    ovl_stage_world8_9AC(rdram, ctx);
        goto after_12;
    // 0x60005C68: nop

    after_12:
    // 0x60005C6C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x60005C70: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x60005C74: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x60005C78: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x60005C7C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x60005C80: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x60005C84: jr          $ra
    // 0x60005C88: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x60005C88: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_stage_world8_5C8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005C8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60005C90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60005C94: jal         0x60000BB0
    // 0x60005C98: addiu       $a0, $zero, 0x102
    ctx->r4 = ADD32(0, 0X102);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_0;
    // 0x60005C98: addiu       $a0, $zero, 0x102
    ctx->r4 = ADD32(0, 0X102);
    after_0:
    // 0x60005C9C: bne         $v0, $zero, L_60005CD8
    if (ctx->r2 != 0) {
        // 0x60005CA0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60005CD8;
    }
    // 0x60005CA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005CA4: jal         0x60000BB0
    // 0x60005CA8: addiu       $a0, $zero, 0x103
    ctx->r4 = ADD32(0, 0X103);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_1;
    // 0x60005CA8: addiu       $a0, $zero, 0x103
    ctx->r4 = ADD32(0, 0X103);
    after_1:
    // 0x60005CAC: beq         $v0, $zero, L_60005CD8
    if (ctx->r2 == 0) {
        // 0x60005CB0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60005CD8;
    }
    // 0x60005CB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005CB4: jal         0x60000B98
    // 0x60005CB8: addiu       $a0, $zero, 0x102
    ctx->r4 = ADD32(0, 0X102);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_2;
    // 0x60005CB8: addiu       $a0, $zero, 0x102
    ctx->r4 = ADD32(0, 0X102);
    after_2:
    // 0x60005CBC: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60005CC0: addiu       $a0, $a0, 0x5B64
    ctx->r4 = ADD32(ctx->r4, 0X5B64);
    // 0x60005CC4: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60005CC8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60005CCC: jal         0x60000994
    // 0x60005CD0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world8_994(rdram, ctx);
        goto after_3;
    // 0x60005CD0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x60005CD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005CD8:
    // 0x60005CD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60005CDC: jr          $ra
    // 0x60005CE0: nop

    return;
    // 0x60005CE0: nop

;}
RECOMP_FUNC void ovl_stage_world8_5CE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005CE4: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x60005CE8: swc1        $f30, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f30.u32l;
    // 0x60005CEC: lui         $at, 0x44AF
    ctx->r1 = S32(0X44AF << 16);
    // 0x60005CF0: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x60005CF4: swc1        $f28, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f28.u32l;
    // 0x60005CF8: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60005CFC: lwc1        $f28, -0x69A4($at)
    ctx->f28.u32l = MEM_W(ctx->r1, -0X69A4);
    // 0x60005D00: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x60005D04: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x60005D08: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x60005D0C: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x60005D10: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x60005D14: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x60005D18: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x60005D1C: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x60005D20: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x60005D24: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x60005D28: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x60005D2C: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x60005D30: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x60005D34: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x60005D38: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x60005D3C: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x60005D40: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x60005D44: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x60005D48: swc1        $f31, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x60005D4C: swc1        $f29, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x60005D50: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x60005D54: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x60005D58: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x60005D5C: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x60005D60: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x60005D64: addiu       $s3, $sp, 0x64
    ctx->r19 = ADD32(ctx->r29, 0X64);
    // 0x60005D68: addiu       $s4, $sp, 0x7C
    ctx->r20 = ADD32(ctx->r29, 0X7C);
L_60005D6C:
    // 0x60005D6C: jal         0x600006DC
    // 0x60005D70: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    ovl_stage_world8_6DC(rdram, ctx);
        goto after_0;
    // 0x60005D70: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_0:
    // 0x60005D74: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x60005D78: jal         0x60000BA4
    // 0x60005D7C: addiu       $a0, $zero, 0x103
    ctx->r4 = ADD32(0, 0X103);
    ovl_stage_world8_BA4(rdram, ctx);
        goto after_1;
    // 0x60005D7C: addiu       $a0, $zero, 0x103
    ctx->r4 = ADD32(0, 0X103);
    after_1:
    // 0x60005D80: blez        $s2, L_60005E28
    if (SIGNED(ctx->r18) <= 0) {
        // 0x60005D84: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_60005E28;
    }
    // 0x60005D84: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_60005D88:
    // 0x60005D88: lw          $t6, 0x7C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X7C);
    // 0x60005D8C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x60005D90: addu        $t7, $t6, $s0
    ctx->r15 = ADD32(ctx->r14, ctx->r16);
    // 0x60005D94: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x60005D98: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x60005D9C: lw          $a0, 0x4($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X4);
    // 0x60005DA0: jal         0x600006C4
    // 0x60005DA4: nop

    ovl_stage_world8_6C4(rdram, ctx);
        goto after_2;
    // 0x60005DA4: nop

    after_2:
    // 0x60005DA8: lwc1        $f0, 0x64($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X64);
    // 0x60005DAC: nop

    // 0x60005DB0: c.le.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl <= ctx->f0.fl;
    // 0x60005DB4: nop

    // 0x60005DB8: bc1f        L_60005E18
    if (!c1cs) {
        // 0x60005DBC: nop
    
            goto L_60005E18;
    }
    // 0x60005DBC: nop

    // 0x60005DC0: c.lt.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl < ctx->f22.fl;
    // 0x60005DC4: lwc1        $f0, 0x68($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X68);
    // 0x60005DC8: bc1f        L_60005E18
    if (!c1cs) {
        // 0x60005DCC: nop
    
            goto L_60005E18;
    }
    // 0x60005DCC: nop

    // 0x60005DD0: c.le.s      $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f24.fl <= ctx->f0.fl;
    // 0x60005DD4: nop

    // 0x60005DD8: bc1f        L_60005E18
    if (!c1cs) {
        // 0x60005DDC: nop
    
            goto L_60005E18;
    }
    // 0x60005DDC: nop

    // 0x60005DE0: c.lt.s      $f0, $f26
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f0.fl < ctx->f26.fl;
    // 0x60005DE4: lwc1        $f0, 0x6C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x60005DE8: bc1f        L_60005E18
    if (!c1cs) {
        // 0x60005DEC: nop
    
            goto L_60005E18;
    }
    // 0x60005DEC: nop

    // 0x60005DF0: c.le.s      $f28, $f0
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f28.fl <= ctx->f0.fl;
    // 0x60005DF4: nop

    // 0x60005DF8: bc1f        L_60005E18
    if (!c1cs) {
        // 0x60005DFC: nop
    
            goto L_60005E18;
    }
    // 0x60005DFC: nop

    // 0x60005E00: c.lt.s      $f0, $f30
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    c1cs = ctx->f0.fl < ctx->f30.fl;
    // 0x60005E04: nop

    // 0x60005E08: bc1f        L_60005E18
    if (!c1cs) {
        // 0x60005E0C: nop
    
            goto L_60005E18;
    }
    // 0x60005E0C: nop

    // 0x60005E10: jal         0x60000B98
    // 0x60005E14: addiu       $a0, $zero, 0x103
    ctx->r4 = ADD32(0, 0X103);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_3;
    // 0x60005E14: addiu       $a0, $zero, 0x103
    ctx->r4 = ADD32(0, 0X103);
    after_3:
L_60005E18:
    // 0x60005E18: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x60005E1C: bne         $s1, $s2, L_60005D88
    if (ctx->r17 != ctx->r18) {
        // 0x60005E20: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_60005D88;
    }
    // 0x60005E20: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x60005E24: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_60005E28:
    // 0x60005E28: jal         0x600009D0
    // 0x60005E2C: nop

    ovl_stage_world8_9D0(rdram, ctx);
        goto after_4;
    // 0x60005E2C: nop

    after_4:
    // 0x60005E30: b           L_60005D6C
    // 0x60005E34: nop

        goto L_60005D6C;
    // 0x60005E34: nop

    // 0x60005E38: nop

    // 0x60005E3C: nop

    // 0x60005E40: nop

    // 0x60005E44: nop

    // 0x60005E48: nop

    // 0x60005E4C: nop

    // 0x60005E50: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x60005E54: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x60005E58: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x60005E5C: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x60005E60: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x60005E64: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x60005E68: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x60005E6C: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x60005E70: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x60005E74: lwc1        $f29, 0x38($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x60005E78: lwc1        $f28, 0x3C($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x60005E7C: lwc1        $f31, 0x40($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x60005E80: lwc1        $f30, 0x44($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X44);
    // 0x60005E84: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x60005E88: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x60005E8C: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x60005E90: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x60005E94: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x60005E98: jr          $ra
    // 0x60005E9C: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    return;
    // 0x60005E9C: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void ovl_stage_world8_5EA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005EA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60005EA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60005EA8: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60005EAC: addiu       $a0, $a0, 0x5CE4
    ctx->r4 = ADD32(ctx->r4, 0X5CE4);
    // 0x60005EB0: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60005EB4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60005EB8: jal         0x60000994
    // 0x60005EBC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world8_994(rdram, ctx);
        goto after_0;
    // 0x60005EBC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x60005EC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005EC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60005EC8: jr          $ra
    // 0x60005ECC: nop

    return;
    // 0x60005ECC: nop

;}
RECOMP_FUNC void ovl_stage_world8_5ED0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005ED0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60005ED4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60005ED8: jal         0x60000BB0
    // 0x60005EDC: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_0;
    // 0x60005EDC: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    after_0:
    // 0x60005EE0: bne         $v0, $zero, L_60005F04
    if (ctx->r2 != 0) {
        // 0x60005EE4: nop
    
            goto L_60005F04;
    }
    // 0x60005EE4: nop

    // 0x60005EE8: jal         0x60000B98
    // 0x60005EEC: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_1;
    // 0x60005EEC: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    after_1:
    // 0x60005EF0: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x60005EF4: jal         0x60000E68
    // 0x60005EF8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world8_E68(rdram, ctx);
        goto after_2;
    // 0x60005EF8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x60005EFC: b           L_60005F1C
    // 0x60005F00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60005F1C;
    // 0x60005F00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005F04:
    // 0x60005F04: jal         0x60000BA4
    // 0x60005F08: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    ovl_stage_world8_BA4(rdram, ctx);
        goto after_3;
    // 0x60005F08: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    after_3:
    // 0x60005F0C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x60005F10: jal         0x60000E68
    // 0x60005F14: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world8_E68(rdram, ctx);
        goto after_4;
    // 0x60005F14: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x60005F18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005F1C:
    // 0x60005F1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60005F20: jr          $ra
    // 0x60005F24: nop

    return;
    // 0x60005F24: nop

;}
RECOMP_FUNC void ovl_stage_world8_5F28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005F28: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x60005F2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60005F30: jal         0x60000DE4
    // 0x60005F34: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world8_DE4(rdram, ctx);
        goto after_0;
    // 0x60005F34: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x60005F38: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60005F3C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x60005F40: jal         0x600006C4
    // 0x60005F44: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_1;
    // 0x60005F44: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x60005F48: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x60005F4C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x60005F50: nop

    // 0x60005F54: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x60005F58: nop

    // 0x60005F5C: bc1f        L_60005FD0
    if (!c1cs) {
        // 0x60005F60: nop
    
            goto L_60005FD0;
    }
    // 0x60005F60: nop

    // 0x60005F64: jal         0x60000BB0
    // 0x60005F68: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_2;
    // 0x60005F68: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    after_2:
    // 0x60005F6C: beq         $v0, $zero, L_60005FD0
    if (ctx->r2 == 0) {
        // 0x60005F70: nop
    
            goto L_60005FD0;
    }
    // 0x60005F70: nop

    // 0x60005F74: jal         0x60000BB0
    // 0x60005F78: addiu       $a0, $zero, 0x18B
    ctx->r4 = ADD32(0, 0X18B);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_3;
    // 0x60005F78: addiu       $a0, $zero, 0x18B
    ctx->r4 = ADD32(0, 0X18B);
    after_3:
    // 0x60005F7C: bne         $v0, $zero, L_60005FD0
    if (ctx->r2 != 0) {
        // 0x60005F80: nop
    
            goto L_60005FD0;
    }
    // 0x60005F80: nop

    // 0x60005F84: jal         0x60000BB0
    // 0x60005F88: addiu       $a0, $zero, 0x133
    ctx->r4 = ADD32(0, 0X133);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_4;
    // 0x60005F88: addiu       $a0, $zero, 0x133
    ctx->r4 = ADD32(0, 0X133);
    after_4:
    // 0x60005F8C: bne         $v0, $zero, L_60005FD0
    if (ctx->r2 != 0) {
        // 0x60005F90: nop
    
            goto L_60005FD0;
    }
    // 0x60005F90: nop

    // 0x60005F94: jal         0x60000B98
    // 0x60005F98: addiu       $a0, $zero, 0x134
    ctx->r4 = ADD32(0, 0X134);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_5;
    // 0x60005F98: addiu       $a0, $zero, 0x134
    ctx->r4 = ADD32(0, 0X134);
    after_5:
    // 0x60005F9C: jal         0x60000B98
    // 0x60005FA0: addiu       $a0, $zero, 0x1A5
    ctx->r4 = ADD32(0, 0X1A5);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_6;
    // 0x60005FA0: addiu       $a0, $zero, 0x1A5
    ctx->r4 = ADD32(0, 0X1A5);
    after_6:
    // 0x60005FA4: jal         0x60000B98
    // 0x60005FA8: addiu       $a0, $zero, 0x18B
    ctx->r4 = ADD32(0, 0X18B);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_7;
    // 0x60005FA8: addiu       $a0, $zero, 0x18B
    ctx->r4 = ADD32(0, 0X18B);
    after_7:
    // 0x60005FAC: jal         0x60000A60
    // 0x60005FB0: addiu       $a0, $zero, 0xAA5
    ctx->r4 = ADD32(0, 0XAA5);
    ovl_stage_world8_A60(rdram, ctx);
        goto after_8;
    // 0x60005FB0: addiu       $a0, $zero, 0xAA5
    ctx->r4 = ADD32(0, 0XAA5);
    after_8:
    // 0x60005FB4: jal         0x60000244
    // 0x60005FB8: addiu       $a0, $zero, 0x1D9
    ctx->r4 = ADD32(0, 0X1D9);
    ovl_stage_world8_244(rdram, ctx);
        goto after_9;
    // 0x60005FB8: addiu       $a0, $zero, 0x1D9
    ctx->r4 = ADD32(0, 0X1D9);
    after_9:
    // 0x60005FBC: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x60005FC0: jal         0x60000E80
    // 0x60005FC4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world8_E80(rdram, ctx);
        goto after_10;
    // 0x60005FC4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_10:
    // 0x60005FC8: b           L_60006050
    // 0x60005FCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60006050;
    // 0x60005FCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005FD0:
    // 0x60005FD0: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x60005FD4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x60005FD8: nop

    // 0x60005FDC: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x60005FE0: nop

    // 0x60005FE4: bc1f        L_60006050
    if (!c1cs) {
        // 0x60005FE8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60006050;
    }
    // 0x60005FE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005FEC: jal         0x60000BB0
    // 0x60005FF0: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_11;
    // 0x60005FF0: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    after_11:
    // 0x60005FF4: bne         $v0, $zero, L_60006050
    if (ctx->r2 != 0) {
        // 0x60005FF8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60006050;
    }
    // 0x60005FF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005FFC: jal         0x60000BB0
    // 0x60006000: addiu       $a0, $zero, 0x12F
    ctx->r4 = ADD32(0, 0X12F);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_12;
    // 0x60006000: addiu       $a0, $zero, 0x12F
    ctx->r4 = ADD32(0, 0X12F);
    after_12:
    // 0x60006004: bne         $v0, $zero, L_60006050
    if (ctx->r2 != 0) {
        // 0x60006008: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60006050;
    }
    // 0x60006008: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000600C: jal         0x60000BB0
    // 0x60006010: addiu       $a0, $zero, 0x18B
    ctx->r4 = ADD32(0, 0X18B);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_13;
    // 0x60006010: addiu       $a0, $zero, 0x18B
    ctx->r4 = ADD32(0, 0X18B);
    after_13:
    // 0x60006014: bne         $v0, $zero, L_60006050
    if (ctx->r2 != 0) {
        // 0x60006018: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60006050;
    }
    // 0x60006018: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000601C: jal         0x60000BB0
    // 0x60006020: addiu       $a0, $zero, 0x133
    ctx->r4 = ADD32(0, 0X133);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_14;
    // 0x60006020: addiu       $a0, $zero, 0x133
    ctx->r4 = ADD32(0, 0X133);
    after_14:
    // 0x60006024: bne         $v0, $zero, L_60006050
    if (ctx->r2 != 0) {
        // 0x60006028: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60006050;
    }
    // 0x60006028: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000602C: jal         0x60000B98
    // 0x60006030: addiu       $a0, $zero, 0x134
    ctx->r4 = ADD32(0, 0X134);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_15;
    // 0x60006030: addiu       $a0, $zero, 0x134
    ctx->r4 = ADD32(0, 0X134);
    after_15:
    // 0x60006034: jal         0x60000B98
    // 0x60006038: addiu       $a0, $zero, 0x1A5
    ctx->r4 = ADD32(0, 0X1A5);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_16;
    // 0x60006038: addiu       $a0, $zero, 0x1A5
    ctx->r4 = ADD32(0, 0X1A5);
    after_16:
    // 0x6000603C: jal         0x60000B98
    // 0x60006040: addiu       $a0, $zero, 0x12F
    ctx->r4 = ADD32(0, 0X12F);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_17;
    // 0x60006040: addiu       $a0, $zero, 0x12F
    ctx->r4 = ADD32(0, 0X12F);
    after_17:
    // 0x60006044: jal         0x60000A60
    // 0x60006048: addiu       $a0, $zero, 0xC2D
    ctx->r4 = ADD32(0, 0XC2D);
    ovl_stage_world8_A60(rdram, ctx);
        goto after_18;
    // 0x60006048: addiu       $a0, $zero, 0xC2D
    ctx->r4 = ADD32(0, 0XC2D);
    after_18:
    // 0x6000604C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006050:
    // 0x60006050: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x60006054: jr          $ra
    // 0x60006058: nop

    return;
    // 0x60006058: nop

;}
RECOMP_FUNC void ovl_stage_world8_605C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000605C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60006060: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60006064: jal         0x60000BB0
    // 0x60006068: addiu       $a0, $zero, 0x19C
    ctx->r4 = ADD32(0, 0X19C);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_0;
    // 0x60006068: addiu       $a0, $zero, 0x19C
    ctx->r4 = ADD32(0, 0X19C);
    after_0:
    // 0x6000606C: beq         $v0, $zero, L_600060B4
    if (ctx->r2 == 0) {
        // 0x60006070: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600060B4;
    }
    // 0x60006070: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60006074: jal         0x60000BB0
    // 0x60006078: addiu       $a0, $zero, 0x19D
    ctx->r4 = ADD32(0, 0X19D);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_1;
    // 0x60006078: addiu       $a0, $zero, 0x19D
    ctx->r4 = ADD32(0, 0X19D);
    after_1:
    // 0x6000607C: beq         $v0, $zero, L_600060B4
    if (ctx->r2 == 0) {
        // 0x60006080: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600060B4;
    }
    // 0x60006080: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60006084: jal         0x60000BB0
    // 0x60006088: addiu       $a0, $zero, 0x19E
    ctx->r4 = ADD32(0, 0X19E);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_2;
    // 0x60006088: addiu       $a0, $zero, 0x19E
    ctx->r4 = ADD32(0, 0X19E);
    after_2:
    // 0x6000608C: beq         $v0, $zero, L_600060B0
    if (ctx->r2 == 0) {
        // 0x60006090: lui         $a0, 0x6001
        ctx->r4 = S32(0X6001 << 16);
            goto L_600060B0;
    }
    // 0x60006090: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60006094: lw          $a0, -0x6740($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X6740);
    // 0x60006098: jal         0x600009A0
    // 0x6000609C: nop

    ovl_stage_world8_9A0(rdram, ctx);
        goto after_3;
    // 0x6000609C: nop

    after_3:
    // 0x600060A0: jal         0x60000B98
    // 0x600060A4: addiu       $a0, $zero, 0x19F
    ctx->r4 = ADD32(0, 0X19F);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_4;
    // 0x600060A4: addiu       $a0, $zero, 0x19F
    ctx->r4 = ADD32(0, 0X19F);
    after_4:
    // 0x600060A8: jal         0x600010C0
    // 0x600060AC: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    ovl_stage_world8_10C0(rdram, ctx);
        goto after_5;
    // 0x600060AC: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_5:
L_600060B0:
    // 0x600060B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600060B4:
    // 0x600060B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600060B8: jr          $ra
    // 0x600060BC: nop

    return;
    // 0x600060BC: nop

;}
RECOMP_FUNC void ovl_stage_world8_60C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600060C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600060C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600060C8: jal         0x60000BB0
    // 0x600060CC: addiu       $a0, $zero, 0x18E
    ctx->r4 = ADD32(0, 0X18E);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_0;
    // 0x600060CC: addiu       $a0, $zero, 0x18E
    ctx->r4 = ADD32(0, 0X18E);
    after_0:
    // 0x600060D0: beq         $v0, $zero, L_600060EC
    if (ctx->r2 == 0) {
        // 0x600060D4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600060EC;
    }
    // 0x600060D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600060D8: jal         0x60000EF8
    // 0x600060DC: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    ovl_stage_world8_EF8(rdram, ctx);
        goto after_1;
    // 0x600060DC: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_1:
    // 0x600060E0: jal         0x6000605C
    // 0x600060E4: nop

    ovl_stage_world8_605C(rdram, ctx);
        goto after_2;
    // 0x600060E4: nop

    after_2:
    // 0x600060E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600060EC:
    // 0x600060EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600060F0: jr          $ra
    // 0x600060F4: nop

    return;
    // 0x600060F4: nop

;}
RECOMP_FUNC void ovl_stage_world8_60F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600060F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600060FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60006100: jal         0x60000BB0
    // 0x60006104: addiu       $a0, $zero, 0x18E
    ctx->r4 = ADD32(0, 0X18E);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_0;
    // 0x60006104: addiu       $a0, $zero, 0x18E
    ctx->r4 = ADD32(0, 0X18E);
    after_0:
    // 0x60006108: beq         $v0, $zero, L_60006124
    if (ctx->r2 == 0) {
        // 0x6000610C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60006124;
    }
    // 0x6000610C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60006110: jal         0x60000EF8
    // 0x60006114: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    ovl_stage_world8_EF8(rdram, ctx);
        goto after_1;
    // 0x60006114: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_1:
    // 0x60006118: jal         0x6000605C
    // 0x6000611C: nop

    ovl_stage_world8_605C(rdram, ctx);
        goto after_2;
    // 0x6000611C: nop

    after_2:
    // 0x60006120: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006124:
    // 0x60006124: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60006128: jr          $ra
    // 0x6000612C: nop

    return;
    // 0x6000612C: nop

;}
RECOMP_FUNC void ovl_stage_world8_6130(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60006130: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60006134: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60006138: jal         0x60000BB0
    // 0x6000613C: addiu       $a0, $zero, 0x18E
    ctx->r4 = ADD32(0, 0X18E);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_0;
    // 0x6000613C: addiu       $a0, $zero, 0x18E
    ctx->r4 = ADD32(0, 0X18E);
    after_0:
    // 0x60006140: beq         $v0, $zero, L_6000615C
    if (ctx->r2 == 0) {
        // 0x60006144: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_6000615C;
    }
    // 0x60006144: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60006148: jal         0x60000EF8
    // 0x6000614C: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    ovl_stage_world8_EF8(rdram, ctx);
        goto after_1;
    // 0x6000614C: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_1:
    // 0x60006150: jal         0x6000605C
    // 0x60006154: nop

    ovl_stage_world8_605C(rdram, ctx);
        goto after_2;
    // 0x60006154: nop

    after_2:
    // 0x60006158: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000615C:
    // 0x6000615C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60006160: jr          $ra
    // 0x60006164: nop

    return;
    // 0x60006164: nop

;}
RECOMP_FUNC void ovl_stage_world8_6168(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60006168: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x6000616C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60006170: jal         0x600009C4
    // 0x60006174: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_stage_world8_9C4(rdram, ctx);
        goto after_0;
    // 0x60006174: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_0:
    // 0x60006178: jal         0x60000BB0
    // 0x6000617C: addiu       $a0, $zero, 0x108
    ctx->r4 = ADD32(0, 0X108);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_1;
    // 0x6000617C: addiu       $a0, $zero, 0x108
    ctx->r4 = ADD32(0, 0X108);
    after_1:
    // 0x60006180: beq         $v0, $zero, L_60006198
    if (ctx->r2 == 0) {
        // 0x60006184: nop
    
            goto L_60006198;
    }
    // 0x60006184: nop

    // 0x60006188: jal         0x60000244
    // 0x6000618C: addiu       $a0, $zero, 0x9F
    ctx->r4 = ADD32(0, 0X9F);
    ovl_stage_world8_244(rdram, ctx);
        goto after_2;
    // 0x6000618C: addiu       $a0, $zero, 0x9F
    ctx->r4 = ADD32(0, 0X9F);
    after_2:
    // 0x60006190: jal         0x60000E44
    // 0x60006194: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    ovl_stage_world8_E44(rdram, ctx);
        goto after_3;
    // 0x60006194: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_3:
L_60006198:
    // 0x60006198: jal         0x60000BA4
    // 0x6000619C: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    ovl_stage_world8_BA4(rdram, ctx);
        goto after_4;
    // 0x6000619C: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    after_4:
    // 0x600061A0: jal         0x600009AC
    // 0x600061A4: nop

    ovl_stage_world8_9AC(rdram, ctx);
        goto after_5;
    // 0x600061A4: nop

    after_5:
    // 0x600061A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600061AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600061B0: jr          $ra
    // 0x600061B4: nop

    return;
    // 0x600061B4: nop

;}
