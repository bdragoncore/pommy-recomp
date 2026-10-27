#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_stage_world8_61B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600061B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600061BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600061C0: jal         0x60000BB0
    // 0x600061C4: addiu       $a0, $zero, 0x19C
    ctx->r4 = ADD32(0, 0X19C);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_0;
    // 0x600061C4: addiu       $a0, $zero, 0x19C
    ctx->r4 = ADD32(0, 0X19C);
    after_0:
    // 0x600061C8: beq         $v0, $zero, L_6000625C
    if (ctx->r2 == 0) {
        // 0x600061CC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_6000625C;
    }
    // 0x600061CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600061D0: jal         0x60000BB0
    // 0x600061D4: addiu       $a0, $zero, 0x19D
    ctx->r4 = ADD32(0, 0X19D);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_1;
    // 0x600061D4: addiu       $a0, $zero, 0x19D
    ctx->r4 = ADD32(0, 0X19D);
    after_1:
    // 0x600061D8: beq         $v0, $zero, L_6000625C
    if (ctx->r2 == 0) {
        // 0x600061DC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_6000625C;
    }
    // 0x600061DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600061E0: jal         0x60000BB0
    // 0x600061E4: addiu       $a0, $zero, 0x19E
    ctx->r4 = ADD32(0, 0X19E);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_2;
    // 0x600061E4: addiu       $a0, $zero, 0x19E
    ctx->r4 = ADD32(0, 0X19E);
    after_2:
    // 0x600061E8: beq         $v0, $zero, L_6000625C
    if (ctx->r2 == 0) {
        // 0x600061EC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_6000625C;
    }
    // 0x600061EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600061F0: jal         0x60000BB0
    // 0x600061F4: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_3;
    // 0x600061F4: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    after_3:
    // 0x600061F8: bne         $v0, $zero, L_60006258
    if (ctx->r2 != 0) {
        // 0x600061FC: addiu       $a0, $zero, 0x4
        ctx->r4 = ADD32(0, 0X4);
            goto L_60006258;
    }
    // 0x600061FC: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x60006200: jal         0x60000E68
    // 0x60006204: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world8_E68(rdram, ctx);
        goto after_4;
    // 0x60006204: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x60006208: jal         0x60000B98
    // 0x6000620C: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_5;
    // 0x6000620C: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    after_5:
    // 0x60006210: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60006214: addiu       $a0, $a0, 0x6168
    ctx->r4 = ADD32(ctx->r4, 0X6168);
    // 0x60006218: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x6000621C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60006220: jal         0x60000994
    // 0x60006224: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world8_994(rdram, ctx);
        goto after_6;
    // 0x60006224: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_6:
    // 0x60006228: jal         0x60000BB0
    // 0x6000622C: addiu       $a0, $zero, 0x109
    ctx->r4 = ADD32(0, 0X109);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_7;
    // 0x6000622C: addiu       $a0, $zero, 0x109
    ctx->r4 = ADD32(0, 0X109);
    after_7:
    // 0x60006230: bne         $v0, $zero, L_60006248
    if (ctx->r2 != 0) {
        // 0x60006234: nop
    
            goto L_60006248;
    }
    // 0x60006234: nop

    // 0x60006238: jal         0x60000B98
    // 0x6000623C: addiu       $a0, $zero, 0x109
    ctx->r4 = ADD32(0, 0X109);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_8;
    // 0x6000623C: addiu       $a0, $zero, 0x109
    ctx->r4 = ADD32(0, 0X109);
    after_8:
    // 0x60006240: b           L_6000625C
    // 0x60006244: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_6000625C;
    // 0x60006244: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006248:
    // 0x60006248: jal         0x60000B98
    // 0x6000624C: addiu       $a0, $zero, 0x108
    ctx->r4 = ADD32(0, 0X108);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_9;
    // 0x6000624C: addiu       $a0, $zero, 0x108
    ctx->r4 = ADD32(0, 0X108);
    after_9:
    // 0x60006250: jal         0x60000B98
    // 0x60006254: addiu       $a0, $zero, 0x1A0
    ctx->r4 = ADD32(0, 0X1A0);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_10;
    // 0x60006254: addiu       $a0, $zero, 0x1A0
    ctx->r4 = ADD32(0, 0X1A0);
    after_10:
L_60006258:
    // 0x60006258: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000625C:
    // 0x6000625C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60006260: jr          $ra
    // 0x60006264: nop

    return;
    // 0x60006264: nop

;}
RECOMP_FUNC void ovl_stage_world8_6268(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60006268: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x6000626C: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x60006270: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x60006274: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x60006278: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x6000627C: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x60006280: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x60006284: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x60006288: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x6000628C: swc1        $f31, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x60006290: swc1        $f30, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f30.u32l;
    // 0x60006294: swc1        $f29, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x60006298: swc1        $f28, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f28.u32l;
    // 0x6000629C: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x600062A0: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x600062A4: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x600062A8: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x600062AC: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x600062B0: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x600062B4: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x600062B8: jal         0x600009DC
    // 0x600062BC: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    ovl_stage_world8_9DC(rdram, ctx);
        goto after_0;
    // 0x600062BC: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x600062C0: lw          $v1, 0x1C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X1C);
    // 0x600062C4: lui         $at, 0x40F0
    ctx->r1 = S32(0X40F0 << 16);
    // 0x600062C8: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x600062CC: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x600062D0: lw          $s4, 0xC($v1)
    ctx->r20 = MEM_W(ctx->r3, 0XC);
    // 0x600062D4: jal         0x60000244
    // 0x600062D8: addiu       $a0, $zero, 0x1ED
    ctx->r4 = ADD32(0, 0X1ED);
    ovl_stage_world8_244(rdram, ctx);
        goto after_1;
    // 0x600062D8: addiu       $a0, $zero, 0x1ED
    ctx->r4 = ADD32(0, 0X1ED);
    after_1:
    // 0x600062DC: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x600062E0: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x600062E4: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x600062E8: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x600062EC: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x600062F0: lwc1        $f26, -0x69A0($at)
    ctx->f26.u32l = MEM_W(ctx->r1, -0X69A0);
    // 0x600062F4: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x600062F8: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x600062FC: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x60006300: addiu       $s6, $zero, 0x2
    ctx->r22 = ADD32(0, 0X2);
    // 0x60006304: addiu       $s3, $zero, 0x8
    ctx->r19 = ADD32(0, 0X8);
    // 0x60006308: lui         $s2, 0xFFFF
    ctx->r18 = S32(0XFFFF << 16);
    // 0x6000630C: addiu       $s1, $sp, 0x74
    ctx->r17 = ADD32(ctx->r29, 0X74);
    // 0x60006310: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_60006314:
    // 0x60006314: mul.s       $f4, $f20, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f26.fl);
    // 0x60006318: swc1        $f24, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f24.u32l;
    // 0x6000631C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x60006320: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x60006324: mul.s       $f6, $f4, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f28.fl);
    // 0x60006328: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x6000632C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x60006330: nop

    // 0x60006334: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x60006338: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x6000633C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x60006340: nop

    // 0x60006344: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x60006348: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x6000634C: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x60006350: or          $t8, $t7, $s2
    ctx->r24 = ctx->r15 | ctx->r18;
    // 0x60006354: jal         0x600006C4
    // 0x60006358: sw          $t8, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r24;
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_2;
    // 0x60006358: sw          $t8, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r24;
    after_2:
    // 0x6000635C: jal         0x600009D0
    // 0x60006360: add.s       $f20, $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f22.fl;
    ovl_stage_world8_9D0(rdram, ctx);
        goto after_3;
    // 0x60006360: add.s       $f20, $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f22.fl;
    after_3:
    // 0x60006364: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60006368: bne         $s0, $s3, L_60006314
    if (ctx->r16 != ctx->r19) {
        // 0x6000636C: nop
    
            goto L_60006314;
    }
    // 0x6000636C: nop

    // 0x60006370: neg.s       $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = -ctx->f22.fl;
    // 0x60006374: jal         0x600009D0
    // 0x60006378: mov.s       $f20, $f30
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 30);
    ctx->f20.fl = ctx->f30.fl;
    ovl_stage_world8_9D0(rdram, ctx);
        goto after_4;
    // 0x60006378: mov.s       $f20, $f30
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 30);
    ctx->f20.fl = ctx->f30.fl;
    after_4:
    // 0x6000637C: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x60006380: bne         $s5, $s6, L_60006314
    if (ctx->r21 != ctx->r22) {
        // 0x60006384: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_60006314;
    }
    // 0x60006384: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60006388: swc1        $f24, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f24.u32l;
    // 0x6000638C: sw          $zero, 0x78($sp)
    MEM_W(0X78, ctx->r29) = 0;
    // 0x60006390: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x60006394: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x60006398: jal         0x600006C4
    // 0x6000639C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_5;
    // 0x6000639C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_5:
    // 0x600063A0: jal         0x600009AC
    // 0x600063A4: nop

    ovl_stage_world8_9AC(rdram, ctx);
        goto after_6;
    // 0x600063A4: nop

    after_6:
    // 0x600063A8: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x600063AC: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x600063B0: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x600063B4: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x600063B8: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x600063BC: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x600063C0: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x600063C4: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x600063C8: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x600063CC: lwc1        $f29, 0x38($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x600063D0: lwc1        $f28, 0x3C($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x600063D4: lwc1        $f31, 0x40($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x600063D8: lwc1        $f30, 0x44($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X44);
    // 0x600063DC: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x600063E0: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x600063E4: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x600063E8: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x600063EC: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x600063F0: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x600063F4: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x600063F8: jr          $ra
    // 0x600063FC: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    // 0x600063FC: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void ovl_stage_world8_6400(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60006400: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60006404: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x60006408: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x6000640C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60006410: addiu       $a0, $a0, 0x6268
    ctx->r4 = ADD32(ctx->r4, 0X6268);
    // 0x60006414: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60006418: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x6000641C: jal         0x60000994
    // 0x60006420: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world8_994(rdram, ctx);
        goto after_0;
    // 0x60006420: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x60006424: lw          $v1, 0x1C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X1C);
    // 0x60006428: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x6000642C: nop

    // 0x60006430: sw          $t6, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r14;
    // 0x60006434: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60006438: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x6000643C: jr          $ra
    // 0x60006440: nop

    return;
    // 0x60006440: nop

;}
RECOMP_FUNC void ovl_stage_world8_6444(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60006444: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60006448: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x6000644C: jal         0x600009C4
    // 0x60006450: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_stage_world8_9C4(rdram, ctx);
        goto after_0;
    // 0x60006450: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_0:
    // 0x60006454: jal         0x60000BA4
    // 0x60006458: addiu       $a0, $zero, 0x130
    ctx->r4 = ADD32(0, 0X130);
    ovl_stage_world8_BA4(rdram, ctx);
        goto after_1;
    // 0x60006458: addiu       $a0, $zero, 0x130
    ctx->r4 = ADD32(0, 0X130);
    after_1:
    // 0x6000645C: jal         0x600009AC
    // 0x60006460: nop

    ovl_stage_world8_9AC(rdram, ctx);
        goto after_2;
    // 0x60006460: nop

    after_2:
    // 0x60006464: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60006468: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x6000646C: jr          $ra
    // 0x60006470: nop

    return;
    // 0x60006470: nop

;}
RECOMP_FUNC void ovl_stage_world8_6474(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60006474: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60006478: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x6000647C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x60006480: jal         0x60000E68
    // 0x60006484: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world8_E68(rdram, ctx);
        goto after_0;
    // 0x60006484: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x60006488: jal         0x600009C4
    // 0x6000648C: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_stage_world8_9C4(rdram, ctx);
        goto after_1;
    // 0x6000648C: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_1:
    // 0x60006490: jal         0x60000A60
    // 0x60006494: addiu       $a0, $zero, 0xC2C
    ctx->r4 = ADD32(0, 0XC2C);
    ovl_stage_world8_A60(rdram, ctx);
        goto after_2;
    // 0x60006494: addiu       $a0, $zero, 0xC2C
    ctx->r4 = ADD32(0, 0XC2C);
    after_2:
    // 0x60006498: jal         0x600009AC
    // 0x6000649C: nop

    ovl_stage_world8_9AC(rdram, ctx);
        goto after_3;
    // 0x6000649C: nop

    after_3:
    // 0x600064A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600064A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600064A8: jr          $ra
    // 0x600064AC: nop

    return;
    // 0x600064AC: nop

;}
RECOMP_FUNC void ovl_stage_world8_64B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600064B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600064B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600064B8: jal         0x60000BB0
    // 0x600064BC: addiu       $a0, $zero, 0x130
    ctx->r4 = ADD32(0, 0X130);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_0;
    // 0x600064BC: addiu       $a0, $zero, 0x130
    ctx->r4 = ADD32(0, 0X130);
    after_0:
    // 0x600064C0: bne         $v0, $zero, L_6000663C
    if (ctx->r2 != 0) {
        // 0x600064C4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_6000663C;
    }
    // 0x600064C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600064C8: jal         0x60000BB0
    // 0x600064CC: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_1;
    // 0x600064CC: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    after_1:
    // 0x600064D0: bne         $v0, $zero, L_60006520
    if (ctx->r2 != 0) {
        // 0x600064D4: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_60006520;
    }
    // 0x600064D4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x600064D8: jal         0x60000E68
    // 0x600064DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world8_E68(rdram, ctx);
        goto after_2;
    // 0x600064DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x600064E0: jal         0x60000B98
    // 0x600064E4: addiu       $a0, $zero, 0x130
    ctx->r4 = ADD32(0, 0X130);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_3;
    // 0x600064E4: addiu       $a0, $zero, 0x130
    ctx->r4 = ADD32(0, 0X130);
    after_3:
    // 0x600064E8: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600064EC: addiu       $a0, $a0, 0x6444
    ctx->r4 = ADD32(ctx->r4, 0X6444);
    // 0x600064F0: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x600064F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x600064F8: jal         0x60000994
    // 0x600064FC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world8_994(rdram, ctx);
        goto after_4;
    // 0x600064FC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x60006500: jal         0x60000E74
    // 0x60006504: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_stage_world8_E74(rdram, ctx);
        goto after_5;
    // 0x60006504: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_5:
    // 0x60006508: jal         0x60006400
    // 0x6000650C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_stage_world8_6400(rdram, ctx);
        goto after_6;
    // 0x6000650C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_6:
    // 0x60006510: jal         0x60000B98
    // 0x60006514: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_7;
    // 0x60006514: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    after_7:
    // 0x60006518: b           L_6000663C
    // 0x6000651C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_6000663C;
    // 0x6000651C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006520:
    // 0x60006520: jal         0x60000BB0
    // 0x60006524: addiu       $a0, $zero, 0x10B
    ctx->r4 = ADD32(0, 0X10B);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_8;
    // 0x60006524: addiu       $a0, $zero, 0x10B
    ctx->r4 = ADD32(0, 0X10B);
    after_8:
    // 0x60006528: bne         $v0, $zero, L_60006578
    if (ctx->r2 != 0) {
        // 0x6000652C: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_60006578;
    }
    // 0x6000652C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x60006530: jal         0x60000E68
    // 0x60006534: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world8_E68(rdram, ctx);
        goto after_9;
    // 0x60006534: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x60006538: jal         0x60000B98
    // 0x6000653C: addiu       $a0, $zero, 0x130
    ctx->r4 = ADD32(0, 0X130);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_10;
    // 0x6000653C: addiu       $a0, $zero, 0x130
    ctx->r4 = ADD32(0, 0X130);
    after_10:
    // 0x60006540: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60006544: addiu       $a0, $a0, 0x6444
    ctx->r4 = ADD32(ctx->r4, 0X6444);
    // 0x60006548: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x6000654C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60006550: jal         0x60000994
    // 0x60006554: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world8_994(rdram, ctx);
        goto after_11;
    // 0x60006554: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_11:
    // 0x60006558: jal         0x60000E74
    // 0x6000655C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_stage_world8_E74(rdram, ctx);
        goto after_12;
    // 0x6000655C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_12:
    // 0x60006560: jal         0x60006400
    // 0x60006564: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_stage_world8_6400(rdram, ctx);
        goto after_13;
    // 0x60006564: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_13:
    // 0x60006568: jal         0x60000B98
    // 0x6000656C: addiu       $a0, $zero, 0x10B
    ctx->r4 = ADD32(0, 0X10B);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_14;
    // 0x6000656C: addiu       $a0, $zero, 0x10B
    ctx->r4 = ADD32(0, 0X10B);
    after_14:
    // 0x60006570: b           L_6000663C
    // 0x60006574: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_6000663C;
    // 0x60006574: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006578:
    // 0x60006578: jal         0x60000BB0
    // 0x6000657C: addiu       $a0, $zero, 0x18C
    ctx->r4 = ADD32(0, 0X18C);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_15;
    // 0x6000657C: addiu       $a0, $zero, 0x18C
    ctx->r4 = ADD32(0, 0X18C);
    after_15:
    // 0x60006580: bne         $v0, $zero, L_6000663C
    if (ctx->r2 != 0) {
        // 0x60006584: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_6000663C;
    }
    // 0x60006584: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60006588: jal         0x60000DE4
    // 0x6000658C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world8_DE4(rdram, ctx);
        goto after_16;
    // 0x6000658C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_16:
    // 0x60006590: jal         0x60000CC4
    // 0x60006594: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_stage_world8_CC4(rdram, ctx);
        goto after_17;
    // 0x60006594: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_17:
    // 0x60006598: jal         0x60000A6C
    // 0x6000659C: nop

    ovl_stage_world8_A6C(rdram, ctx);
        goto after_18;
    // 0x6000659C: nop

    after_18:
    // 0x600065A0: jal         0x60000B98
    // 0x600065A4: addiu       $a0, $zero, 0x130
    ctx->r4 = ADD32(0, 0X130);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_19;
    // 0x600065A4: addiu       $a0, $zero, 0x130
    ctx->r4 = ADD32(0, 0X130);
    after_19:
    // 0x600065A8: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600065AC: addiu       $a0, $a0, 0x6444
    ctx->r4 = ADD32(ctx->r4, 0X6444);
    // 0x600065B0: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x600065B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x600065B8: jal         0x60000994
    // 0x600065BC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world8_994(rdram, ctx);
        goto after_20;
    // 0x600065BC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_20:
    // 0x600065C0: jal         0x60000B98
    // 0x600065C4: addiu       $a0, $zero, 0x18C
    ctx->r4 = ADD32(0, 0X18C);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_21;
    // 0x600065C4: addiu       $a0, $zero, 0x18C
    ctx->r4 = ADD32(0, 0X18C);
    after_21:
    // 0x600065C8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600065CC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x600065D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x600065D4: jal         0x60000D18
    // 0x600065D8: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    ovl_stage_world8_D18(rdram, ctx);
        goto after_22;
    // 0x600065D8: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    after_22:
    // 0x600065DC: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x600065E0: lw          $a0, -0x673C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X673C);
    // 0x600065E4: jal         0x6000028C
    // 0x600065E8: nop

    ovl_stage_world8_28C(rdram, ctx);
        goto after_23;
    // 0x600065E8: nop

    after_23:
    // 0x600065EC: jal         0x60000BB0
    // 0x600065F0: addiu       $a0, $zero, 0x18D
    ctx->r4 = ADD32(0, 0X18D);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_24;
    // 0x600065F0: addiu       $a0, $zero, 0x18D
    ctx->r4 = ADD32(0, 0X18D);
    after_24:
    // 0x600065F4: beq         $v0, $zero, L_60006624
    if (ctx->r2 == 0) {
        // 0x600065F8: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_60006624;
    }
    // 0x600065F8: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600065FC: jal         0x60000EEC
    // 0x60006600: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_stage_world8_EEC(rdram, ctx);
        goto after_25;
    // 0x60006600: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_25:
    // 0x60006604: jal         0x60000B98
    // 0x60006608: addiu       $a0, $zero, 0x18E
    ctx->r4 = ADD32(0, 0X18E);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_26;
    // 0x60006608: addiu       $a0, $zero, 0x18E
    ctx->r4 = ADD32(0, 0X18E);
    after_26:
    // 0x6000660C: jal         0x60000B98
    // 0x60006610: addiu       $a0, $zero, 0x1A1
    ctx->r4 = ADD32(0, 0X1A1);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_27;
    // 0x60006610: addiu       $a0, $zero, 0x1A1
    ctx->r4 = ADD32(0, 0X1A1);
    after_27:
    // 0x60006614: jal         0x60000A60
    // 0x60006618: addiu       $a0, $zero, 0xAA2
    ctx->r4 = ADD32(0, 0XAA2);
    ovl_stage_world8_A60(rdram, ctx);
        goto after_28;
    // 0x60006618: addiu       $a0, $zero, 0xAA2
    ctx->r4 = ADD32(0, 0XAA2);
    after_28:
    // 0x6000661C: b           L_6000663C
    // 0x60006620: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_6000663C;
    // 0x60006620: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006624:
    // 0x60006624: addiu       $a0, $a0, 0x6474
    ctx->r4 = ADD32(ctx->r4, 0X6474);
    // 0x60006628: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x6000662C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60006630: jal         0x60000994
    // 0x60006634: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world8_994(rdram, ctx);
        goto after_29;
    // 0x60006634: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_29:
    // 0x60006638: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000663C:
    // 0x6000663C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60006640: jr          $ra
    // 0x60006644: nop

    return;
    // 0x60006644: nop

;}
RECOMP_FUNC void ovl_stage_world8_6648(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60006648: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x6000664C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60006650: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x60006654: jal         0x60000E68
    // 0x60006658: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world8_E68(rdram, ctx);
        goto after_0;
    // 0x60006658: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x6000665C: jal         0x600009C4
    // 0x60006660: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_stage_world8_9C4(rdram, ctx);
        goto after_1;
    // 0x60006660: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_1:
    // 0x60006664: jal         0x60000A60
    // 0x60006668: addiu       $a0, $zero, 0xC2B
    ctx->r4 = ADD32(0, 0XC2B);
    ovl_stage_world8_A60(rdram, ctx);
        goto after_2;
    // 0x60006668: addiu       $a0, $zero, 0xC2B
    ctx->r4 = ADD32(0, 0XC2B);
    after_2:
    // 0x6000666C: jal         0x600009AC
    // 0x60006670: nop

    ovl_stage_world8_9AC(rdram, ctx);
        goto after_3;
    // 0x60006670: nop

    after_3:
    // 0x60006674: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60006678: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x6000667C: jr          $ra
    // 0x60006680: nop

    return;
    // 0x60006680: nop

;}
RECOMP_FUNC void ovl_stage_world8_6684(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60006684: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60006688: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x6000668C: jal         0x60000BB0
    // 0x60006690: addiu       $a0, $zero, 0x130
    ctx->r4 = ADD32(0, 0X130);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_0;
    // 0x60006690: addiu       $a0, $zero, 0x130
    ctx->r4 = ADD32(0, 0X130);
    after_0:
    // 0x60006694: bne         $v0, $zero, L_60006810
    if (ctx->r2 != 0) {
        // 0x60006698: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60006810;
    }
    // 0x60006698: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000669C: jal         0x60000BB0
    // 0x600066A0: addiu       $a0, $zero, 0x10C
    ctx->r4 = ADD32(0, 0X10C);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_1;
    // 0x600066A0: addiu       $a0, $zero, 0x10C
    ctx->r4 = ADD32(0, 0X10C);
    after_1:
    // 0x600066A4: bne         $v0, $zero, L_600066F4
    if (ctx->r2 != 0) {
        // 0x600066A8: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_600066F4;
    }
    // 0x600066A8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x600066AC: jal         0x60000E68
    // 0x600066B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world8_E68(rdram, ctx);
        goto after_2;
    // 0x600066B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x600066B4: jal         0x60000B98
    // 0x600066B8: addiu       $a0, $zero, 0x130
    ctx->r4 = ADD32(0, 0X130);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_3;
    // 0x600066B8: addiu       $a0, $zero, 0x130
    ctx->r4 = ADD32(0, 0X130);
    after_3:
    // 0x600066BC: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600066C0: addiu       $a0, $a0, 0x6444
    ctx->r4 = ADD32(ctx->r4, 0X6444);
    // 0x600066C4: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x600066C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x600066CC: jal         0x60000994
    // 0x600066D0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world8_994(rdram, ctx);
        goto after_4;
    // 0x600066D0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x600066D4: jal         0x60000E74
    // 0x600066D8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_stage_world8_E74(rdram, ctx);
        goto after_5;
    // 0x600066D8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_5:
    // 0x600066DC: jal         0x60006400
    // 0x600066E0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_stage_world8_6400(rdram, ctx);
        goto after_6;
    // 0x600066E0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_6:
    // 0x600066E4: jal         0x60000B98
    // 0x600066E8: addiu       $a0, $zero, 0x10C
    ctx->r4 = ADD32(0, 0X10C);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_7;
    // 0x600066E8: addiu       $a0, $zero, 0x10C
    ctx->r4 = ADD32(0, 0X10C);
    after_7:
    // 0x600066EC: b           L_60006810
    // 0x600066F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60006810;
    // 0x600066F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600066F4:
    // 0x600066F4: jal         0x60000BB0
    // 0x600066F8: addiu       $a0, $zero, 0x10D
    ctx->r4 = ADD32(0, 0X10D);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_8;
    // 0x600066F8: addiu       $a0, $zero, 0x10D
    ctx->r4 = ADD32(0, 0X10D);
    after_8:
    // 0x600066FC: bne         $v0, $zero, L_6000674C
    if (ctx->r2 != 0) {
        // 0x60006700: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_6000674C;
    }
    // 0x60006700: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x60006704: jal         0x60000E68
    // 0x60006708: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world8_E68(rdram, ctx);
        goto after_9;
    // 0x60006708: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x6000670C: jal         0x60000B98
    // 0x60006710: addiu       $a0, $zero, 0x130
    ctx->r4 = ADD32(0, 0X130);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_10;
    // 0x60006710: addiu       $a0, $zero, 0x130
    ctx->r4 = ADD32(0, 0X130);
    after_10:
    // 0x60006714: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60006718: addiu       $a0, $a0, 0x6444
    ctx->r4 = ADD32(ctx->r4, 0X6444);
    // 0x6000671C: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60006720: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60006724: jal         0x60000994
    // 0x60006728: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world8_994(rdram, ctx);
        goto after_11;
    // 0x60006728: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_11:
    // 0x6000672C: jal         0x60000E74
    // 0x60006730: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_stage_world8_E74(rdram, ctx);
        goto after_12;
    // 0x60006730: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_12:
    // 0x60006734: jal         0x60006400
    // 0x60006738: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_stage_world8_6400(rdram, ctx);
        goto after_13;
    // 0x60006738: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_13:
    // 0x6000673C: jal         0x60000B98
    // 0x60006740: addiu       $a0, $zero, 0x10D
    ctx->r4 = ADD32(0, 0X10D);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_14;
    // 0x60006740: addiu       $a0, $zero, 0x10D
    ctx->r4 = ADD32(0, 0X10D);
    after_14:
    // 0x60006744: b           L_60006810
    // 0x60006748: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60006810;
    // 0x60006748: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000674C:
    // 0x6000674C: jal         0x60000BB0
    // 0x60006750: addiu       $a0, $zero, 0x18D
    ctx->r4 = ADD32(0, 0X18D);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_15;
    // 0x60006750: addiu       $a0, $zero, 0x18D
    ctx->r4 = ADD32(0, 0X18D);
    after_15:
    // 0x60006754: bne         $v0, $zero, L_60006810
    if (ctx->r2 != 0) {
        // 0x60006758: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60006810;
    }
    // 0x60006758: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000675C: jal         0x60000DE4
    // 0x60006760: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world8_DE4(rdram, ctx);
        goto after_16;
    // 0x60006760: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_16:
    // 0x60006764: jal         0x60000CC4
    // 0x60006768: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_stage_world8_CC4(rdram, ctx);
        goto after_17;
    // 0x60006768: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_17:
    // 0x6000676C: jal         0x60000A6C
    // 0x60006770: nop

    ovl_stage_world8_A6C(rdram, ctx);
        goto after_18;
    // 0x60006770: nop

    after_18:
    // 0x60006774: jal         0x60000B98
    // 0x60006778: addiu       $a0, $zero, 0x130
    ctx->r4 = ADD32(0, 0X130);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_19;
    // 0x60006778: addiu       $a0, $zero, 0x130
    ctx->r4 = ADD32(0, 0X130);
    after_19:
    // 0x6000677C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60006780: addiu       $a0, $a0, 0x6444
    ctx->r4 = ADD32(ctx->r4, 0X6444);
    // 0x60006784: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60006788: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x6000678C: jal         0x60000994
    // 0x60006790: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world8_994(rdram, ctx);
        goto after_20;
    // 0x60006790: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_20:
    // 0x60006794: jal         0x60000B98
    // 0x60006798: addiu       $a0, $zero, 0x18D
    ctx->r4 = ADD32(0, 0X18D);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_21;
    // 0x60006798: addiu       $a0, $zero, 0x18D
    ctx->r4 = ADD32(0, 0X18D);
    after_21:
    // 0x6000679C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600067A0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x600067A4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x600067A8: jal         0x60000D18
    // 0x600067AC: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    ovl_stage_world8_D18(rdram, ctx);
        goto after_22;
    // 0x600067AC: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    after_22:
    // 0x600067B0: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x600067B4: lw          $a0, -0x673C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X673C);
    // 0x600067B8: jal         0x6000028C
    // 0x600067BC: nop

    ovl_stage_world8_28C(rdram, ctx);
        goto after_23;
    // 0x600067BC: nop

    after_23:
    // 0x600067C0: jal         0x60000BB0
    // 0x600067C4: addiu       $a0, $zero, 0x18C
    ctx->r4 = ADD32(0, 0X18C);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_24;
    // 0x600067C4: addiu       $a0, $zero, 0x18C
    ctx->r4 = ADD32(0, 0X18C);
    after_24:
    // 0x600067C8: beq         $v0, $zero, L_600067F8
    if (ctx->r2 == 0) {
        // 0x600067CC: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_600067F8;
    }
    // 0x600067CC: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600067D0: jal         0x60000EEC
    // 0x600067D4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_stage_world8_EEC(rdram, ctx);
        goto after_25;
    // 0x600067D4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_25:
    // 0x600067D8: jal         0x60000B98
    // 0x600067DC: addiu       $a0, $zero, 0x18E
    ctx->r4 = ADD32(0, 0X18E);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_26;
    // 0x600067DC: addiu       $a0, $zero, 0x18E
    ctx->r4 = ADD32(0, 0X18E);
    after_26:
    // 0x600067E0: jal         0x60000B98
    // 0x600067E4: addiu       $a0, $zero, 0x1A1
    ctx->r4 = ADD32(0, 0X1A1);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_27;
    // 0x600067E4: addiu       $a0, $zero, 0x1A1
    ctx->r4 = ADD32(0, 0X1A1);
    after_27:
    // 0x600067E8: jal         0x60000A60
    // 0x600067EC: addiu       $a0, $zero, 0xAA1
    ctx->r4 = ADD32(0, 0XAA1);
    ovl_stage_world8_A60(rdram, ctx);
        goto after_28;
    // 0x600067EC: addiu       $a0, $zero, 0xAA1
    ctx->r4 = ADD32(0, 0XAA1);
    after_28:
    // 0x600067F0: b           L_60006810
    // 0x600067F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60006810;
    // 0x600067F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600067F8:
    // 0x600067F8: addiu       $a0, $a0, 0x6648
    ctx->r4 = ADD32(ctx->r4, 0X6648);
    // 0x600067FC: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60006800: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60006804: jal         0x60000994
    // 0x60006808: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world8_994(rdram, ctx);
        goto after_29;
    // 0x60006808: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_29:
    // 0x6000680C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006810:
    // 0x60006810: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60006814: jr          $ra
    // 0x60006818: nop

    return;
    // 0x60006818: nop

;}
RECOMP_FUNC void ovl_stage_world8_681C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000681C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60006820: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60006824: jal         0x60000C1C
    // 0x60006828: nop

    ovl_stage_world8_C1C(rdram, ctx);
        goto after_0;
    // 0x60006828: nop

    after_0:
    // 0x6000682C: lw          $t6, 0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC);
    // 0x60006830: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x60006834: beq         $t6, $at, L_600068D8
    if (ctx->r14 == ctx->r1) {
        // 0x60006838: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600068D8;
    }
    // 0x60006838: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000683C: jal         0x60000BB0
    // 0x60006840: addiu       $a0, $zero, 0x185
    ctx->r4 = ADD32(0, 0X185);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_1;
    // 0x60006840: addiu       $a0, $zero, 0x185
    ctx->r4 = ADD32(0, 0X185);
    after_1:
    // 0x60006844: beq         $v0, $zero, L_60006854
    if (ctx->r2 == 0) {
        // 0x60006848: addiu       $a0, $zero, 0x9
        ctx->r4 = ADD32(0, 0X9);
            goto L_60006854;
    }
    // 0x60006848: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x6000684C: jal         0x60000E80
    // 0x60006850: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world8_E80(rdram, ctx);
        goto after_2;
    // 0x60006850: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
L_60006854:
    // 0x60006854: jal         0x60000BB0
    // 0x60006858: addiu       $a0, $zero, 0x186
    ctx->r4 = ADD32(0, 0X186);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_3;
    // 0x60006858: addiu       $a0, $zero, 0x186
    ctx->r4 = ADD32(0, 0X186);
    after_3:
    // 0x6000685C: beq         $v0, $zero, L_6000686C
    if (ctx->r2 == 0) {
        // 0x60006860: addiu       $a0, $zero, 0x9
        ctx->r4 = ADD32(0, 0X9);
            goto L_6000686C;
    }
    // 0x60006860: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x60006864: jal         0x60000E80
    // 0x60006868: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_stage_world8_E80(rdram, ctx);
        goto after_4;
    // 0x60006868: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_4:
L_6000686C:
    // 0x6000686C: jal         0x60000BB0
    // 0x60006870: addiu       $a0, $zero, 0x184
    ctx->r4 = ADD32(0, 0X184);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_5;
    // 0x60006870: addiu       $a0, $zero, 0x184
    ctx->r4 = ADD32(0, 0X184);
    after_5:
    // 0x60006874: beq         $v0, $zero, L_60006884
    if (ctx->r2 == 0) {
        // 0x60006878: addiu       $a0, $zero, 0x9
        ctx->r4 = ADD32(0, 0X9);
            goto L_60006884;
    }
    // 0x60006878: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x6000687C: jal         0x60000E80
    // 0x60006880: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_stage_world8_E80(rdram, ctx);
        goto after_6;
    // 0x60006880: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_6:
L_60006884:
    // 0x60006884: jal         0x60000BB0
    // 0x60006888: addiu       $a0, $zero, 0x184
    ctx->r4 = ADD32(0, 0X184);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_7;
    // 0x60006888: addiu       $a0, $zero, 0x184
    ctx->r4 = ADD32(0, 0X184);
    after_7:
    // 0x6000688C: beq         $v0, $zero, L_600068D8
    if (ctx->r2 == 0) {
        // 0x60006890: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600068D8;
    }
    // 0x60006890: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60006894: jal         0x60000BB0
    // 0x60006898: addiu       $a0, $zero, 0x8F
    ctx->r4 = ADD32(0, 0X8F);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_8;
    // 0x60006898: addiu       $a0, $zero, 0x8F
    ctx->r4 = ADD32(0, 0X8F);
    after_8:
    // 0x6000689C: bne         $v0, $zero, L_600068D8
    if (ctx->r2 != 0) {
        // 0x600068A0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600068D8;
    }
    // 0x600068A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600068A4: jal         0x60000DE4
    // 0x600068A8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world8_DE4(rdram, ctx);
        goto after_9;
    // 0x600068A8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_9:
    // 0x600068AC: jal         0x60000CC4
    // 0x600068B0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_stage_world8_CC4(rdram, ctx);
        goto after_10;
    // 0x600068B0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_10:
    // 0x600068B4: jal         0x60000A6C
    // 0x600068B8: nop

    ovl_stage_world8_A6C(rdram, ctx);
        goto after_11;
    // 0x600068B8: nop

    after_11:
    // 0x600068BC: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600068C0: addiu       $a0, $a0, 0x3378
    ctx->r4 = ADD32(ctx->r4, 0X3378);
    // 0x600068C4: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x600068C8: addiu       $a2, $zero, 0x2400
    ctx->r6 = ADD32(0, 0X2400);
    // 0x600068CC: jal         0x60000994
    // 0x600068D0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world8_994(rdram, ctx);
        goto after_12;
    // 0x600068D0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_12:
    // 0x600068D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600068D8:
    // 0x600068D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600068DC: jr          $ra
    // 0x600068E0: nop

    return;
    // 0x600068E0: nop

;}
RECOMP_FUNC void ovl_stage_world8_68E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600068E4: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x600068E8: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x600068EC: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x600068F0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x600068F4: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x600068F8: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x600068FC: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x60006900: lui         $s1, 0x6001
    ctx->r17 = S32(0X6001 << 16);
    // 0x60006904: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x60006908: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x6000690C: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x60006910: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x60006914: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x60006918: addiu       $s1, $s1, -0x6738
    ctx->r17 = ADD32(ctx->r17, -0X6738);
    // 0x6000691C: addiu       $s2, $sp, 0x48
    ctx->r18 = ADD32(ctx->r29, 0X48);
    // 0x60006920: addiu       $s4, $zero, 0x1D
    ctx->r20 = ADD32(0, 0X1D);
    // 0x60006924: addiu       $s5, $zero, 0x7
    ctx->r21 = ADD32(0, 0X7);
    // 0x60006928: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
L_6000692C:
    // 0x6000692C: nop

L_60006930:
    // 0x60006930: bne         $v1, $zero, L_60006A90
    if (ctx->r3 != 0) {
        // 0x60006934: nop
    
            goto L_60006A90;
    }
    // 0x60006934: nop

    // 0x60006938: jal         0x60000BB0
    // 0x6000693C: addiu       $a0, $zero, 0x113
    ctx->r4 = ADD32(0, 0X113);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_0;
    // 0x6000693C: addiu       $a0, $zero, 0x113
    ctx->r4 = ADD32(0, 0X113);
    after_0:
    // 0x60006940: bne         $v0, $zero, L_60006A90
    if (ctx->r2 != 0) {
        // 0x60006944: addiu       $a0, $zero, 0x1DF
        ctx->r4 = ADD32(0, 0X1DF);
            goto L_60006A90;
    }
    // 0x60006944: addiu       $a0, $zero, 0x1DF
    ctx->r4 = ADD32(0, 0X1DF);
    // 0x60006948: jal         0x60000244
    // 0x6000694C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    ovl_stage_world8_244(rdram, ctx);
        goto after_1;
    // 0x6000694C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    after_1:
    // 0x60006950: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x60006954: nop

    // 0x60006958: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
L_6000695C:
    // 0x6000695C: sw          $t6, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r14;
    // 0x60006960: jal         0x60000E74
    // 0x60006964: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    ovl_stage_world8_E74(rdram, ctx);
        goto after_2;
    // 0x60006964: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_2:
    // 0x60006968: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x6000696C: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x60006970: jal         0x600006C4
    // 0x60006974: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_3;
    // 0x60006974: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_3:
    // 0x60006978: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x6000697C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x60006980: lwc1        $f4, 0x30($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X30);
    // 0x60006984: nop

    // 0x60006988: add.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f20.fl;
    // 0x6000698C: jal         0x60000E74
    // 0x60006990: swc1        $f6, 0x30($t7)
    MEM_W(0X30, ctx->r15) = ctx->f6.u32l;
    ovl_stage_world8_E74(rdram, ctx);
        goto after_4;
    // 0x60006990: swc1        $f6, 0x30($t7)
    MEM_W(0X30, ctx->r15) = ctx->f6.u32l;
    after_4:
    // 0x60006994: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60006998: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x6000699C: jal         0x600006C4
    // 0x600069A0: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_5;
    // 0x600069A0: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_5:
    // 0x600069A4: jal         0x600009D0
    // 0x600069A8: nop

    ovl_stage_world8_9D0(rdram, ctx);
        goto after_6;
    // 0x600069A8: nop

    after_6:
    // 0x600069AC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x600069B0: slti        $at, $s0, 0x32
    ctx->r1 = SIGNED(ctx->r16) < 0X32 ? 1 : 0;
    // 0x600069B4: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x600069B8: bne         $at, $zero, L_6000695C
    if (ctx->r1 != 0) {
        // 0x600069BC: addiu       $t6, $v1, 0x1
        ctx->r14 = ADD32(ctx->r3, 0X1);
            goto L_6000695C;
    }
    // 0x600069BC: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
    // 0x600069C0: jal         0x60000BB0
    // 0x600069C4: addiu       $a0, $zero, 0x10F
    ctx->r4 = ADD32(0, 0X10F);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_7;
    // 0x600069C4: addiu       $a0, $zero, 0x10F
    ctx->r4 = ADD32(0, 0X10F);
    after_7:
    // 0x600069C8: bne         $v0, $zero, L_600069E0
    if (ctx->r2 != 0) {
        // 0x600069CC: nop
    
            goto L_600069E0;
    }
    // 0x600069CC: nop

    // 0x600069D0: jal         0x60000B98
    // 0x600069D4: addiu       $a0, $zero, 0x10F
    ctx->r4 = ADD32(0, 0X10F);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_8;
    // 0x600069D4: addiu       $a0, $zero, 0x10F
    ctx->r4 = ADD32(0, 0X10F);
    after_8:
    // 0x600069D8: b           L_60006A58
    // 0x600069DC: nop

        goto L_60006A58;
    // 0x600069DC: nop

L_600069E0:
    // 0x600069E0: jal         0x60000BB0
    // 0x600069E4: addiu       $a0, $zero, 0x110
    ctx->r4 = ADD32(0, 0X110);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_9;
    // 0x600069E4: addiu       $a0, $zero, 0x110
    ctx->r4 = ADD32(0, 0X110);
    after_9:
    // 0x600069E8: bne         $v0, $zero, L_60006A00
    if (ctx->r2 != 0) {
        // 0x600069EC: nop
    
            goto L_60006A00;
    }
    // 0x600069EC: nop

    // 0x600069F0: jal         0x60000B98
    // 0x600069F4: addiu       $a0, $zero, 0x110
    ctx->r4 = ADD32(0, 0X110);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_10;
    // 0x600069F4: addiu       $a0, $zero, 0x110
    ctx->r4 = ADD32(0, 0X110);
    after_10:
    // 0x600069F8: b           L_60006A58
    // 0x600069FC: nop

        goto L_60006A58;
    // 0x600069FC: nop

L_60006A00:
    // 0x60006A00: jal         0x60000BB0
    // 0x60006A04: addiu       $a0, $zero, 0x111
    ctx->r4 = ADD32(0, 0X111);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_11;
    // 0x60006A04: addiu       $a0, $zero, 0x111
    ctx->r4 = ADD32(0, 0X111);
    after_11:
    // 0x60006A08: bne         $v0, $zero, L_60006A20
    if (ctx->r2 != 0) {
        // 0x60006A0C: nop
    
            goto L_60006A20;
    }
    // 0x60006A0C: nop

    // 0x60006A10: jal         0x60000B98
    // 0x60006A14: addiu       $a0, $zero, 0x111
    ctx->r4 = ADD32(0, 0X111);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_12;
    // 0x60006A14: addiu       $a0, $zero, 0x111
    ctx->r4 = ADD32(0, 0X111);
    after_12:
    // 0x60006A18: b           L_60006A58
    // 0x60006A1C: nop

        goto L_60006A58;
    // 0x60006A1C: nop

L_60006A20:
    // 0x60006A20: jal         0x60000BB0
    // 0x60006A24: addiu       $a0, $zero, 0x112
    ctx->r4 = ADD32(0, 0X112);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_13;
    // 0x60006A24: addiu       $a0, $zero, 0x112
    ctx->r4 = ADD32(0, 0X112);
    after_13:
    // 0x60006A28: bne         $v0, $zero, L_60006A40
    if (ctx->r2 != 0) {
        // 0x60006A2C: nop
    
            goto L_60006A40;
    }
    // 0x60006A2C: nop

    // 0x60006A30: jal         0x60000B98
    // 0x60006A34: addiu       $a0, $zero, 0x112
    ctx->r4 = ADD32(0, 0X112);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_14;
    // 0x60006A34: addiu       $a0, $zero, 0x112
    ctx->r4 = ADD32(0, 0X112);
    after_14:
    // 0x60006A38: b           L_60006A58
    // 0x60006A3C: nop

        goto L_60006A58;
    // 0x60006A3C: nop

L_60006A40:
    // 0x60006A40: jal         0x60000BB0
    // 0x60006A44: addiu       $a0, $zero, 0x113
    ctx->r4 = ADD32(0, 0X113);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_15;
    // 0x60006A44: addiu       $a0, $zero, 0x113
    ctx->r4 = ADD32(0, 0X113);
    after_15:
    // 0x60006A48: bne         $v0, $zero, L_60006A58
    if (ctx->r2 != 0) {
        // 0x60006A4C: nop
    
            goto L_60006A58;
    }
    // 0x60006A4C: nop

    // 0x60006A50: jal         0x60000B98
    // 0x60006A54: addiu       $a0, $zero, 0x113
    ctx->r4 = ADD32(0, 0X113);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_16;
    // 0x60006A54: addiu       $a0, $zero, 0x113
    ctx->r4 = ADD32(0, 0X113);
    after_16:
L_60006A58:
    // 0x60006A58: jal         0x600009C4
    // 0x60006A5C: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_stage_world8_9C4(rdram, ctx);
        goto after_17;
    // 0x60006A5C: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_17:
    // 0x60006A60: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x60006A64: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60006A68: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x60006A6C: sw          $t9, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r25;
L_60006A70:
    // 0x60006A70: jal         0x600009C4
    // 0x60006A74: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_stage_world8_9C4(rdram, ctx);
        goto after_18;
    // 0x60006A74: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_18:
    // 0x60006A78: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x60006A7C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60006A80: beq         $v1, $zero, L_60006930
    if (ctx->r3 == 0) {
        // 0x60006A84: nop
    
            goto L_60006930;
    }
    // 0x60006A84: nop

    // 0x60006A88: bne         $s0, $s4, L_60006A70
    if (ctx->r16 != ctx->r20) {
        // 0x60006A8C: nop
    
            goto L_60006A70;
    }
    // 0x60006A8C: nop

L_60006A90:
    // 0x60006A90: jal         0x600009D0
    // 0x60006A94: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    ovl_stage_world8_9D0(rdram, ctx);
        goto after_19;
    // 0x60006A94: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    after_19:
    // 0x60006A98: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    // 0x60006A9C: nop

    // 0x60006AA0: beq         $t0, $zero, L_60006C30
    if (ctx->r8 == 0) {
        // 0x60006AA4: nop
    
            goto L_60006C30;
    }
    // 0x60006AA4: nop

    // 0x60006AA8: jal         0x60000BB0
    // 0x60006AAC: addiu       $a0, $zero, 0x10F
    ctx->r4 = ADD32(0, 0X10F);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_20;
    // 0x60006AAC: addiu       $a0, $zero, 0x10F
    ctx->r4 = ADD32(0, 0X10F);
    after_20:
    // 0x60006AB0: beq         $v0, $zero, L_60006C30
    if (ctx->r2 == 0) {
        // 0x60006AB4: addiu       $a0, $zero, 0x1DF
        ctx->r4 = ADD32(0, 0X1DF);
            goto L_60006C30;
    }
    // 0x60006AB4: addiu       $a0, $zero, 0x1DF
    ctx->r4 = ADD32(0, 0X1DF);
    // 0x60006AB8: jal         0x60000244
    // 0x60006ABC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    ovl_stage_world8_244(rdram, ctx);
        goto after_21;
    // 0x60006ABC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    after_21:
    // 0x60006AC0: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x60006AC4: nop

    // 0x60006AC8: addiu       $t1, $v1, 0x1
    ctx->r9 = ADD32(ctx->r3, 0X1);
L_60006ACC:
    // 0x60006ACC: sw          $t1, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r9;
    // 0x60006AD0: jal         0x60000E74
    // 0x60006AD4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    ovl_stage_world8_E74(rdram, ctx);
        goto after_22;
    // 0x60006AD4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_22:
    // 0x60006AD8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60006ADC: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x60006AE0: jal         0x600006C4
    // 0x60006AE4: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_23;
    // 0x60006AE4: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_23:
    // 0x60006AE8: lw          $t2, 0x48($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X48);
    // 0x60006AEC: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x60006AF0: lwc1        $f8, 0x30($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X30);
    // 0x60006AF4: nop

    // 0x60006AF8: sub.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f20.fl;
    // 0x60006AFC: jal         0x60000E74
    // 0x60006B00: swc1        $f10, 0x30($t2)
    MEM_W(0X30, ctx->r10) = ctx->f10.u32l;
    ovl_stage_world8_E74(rdram, ctx);
        goto after_24;
    // 0x60006B00: swc1        $f10, 0x30($t2)
    MEM_W(0X30, ctx->r10) = ctx->f10.u32l;
    after_24:
    // 0x60006B04: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60006B08: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x60006B0C: jal         0x600006C4
    // 0x60006B10: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_25;
    // 0x60006B10: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_25:
    // 0x60006B14: jal         0x600009D0
    // 0x60006B18: nop

    ovl_stage_world8_9D0(rdram, ctx);
        goto after_26;
    // 0x60006B18: nop

    after_26:
    // 0x60006B1C: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x60006B20: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60006B24: bne         $v1, $zero, L_60006B30
    if (ctx->r3 != 0) {
        // 0x60006B28: slti        $at, $s0, 0x32
        ctx->r1 = SIGNED(ctx->r16) < 0X32 ? 1 : 0;
            goto L_60006B30;
    }
    // 0x60006B28: slti        $at, $s0, 0x32
    ctx->r1 = SIGNED(ctx->r16) < 0X32 ? 1 : 0;
    // 0x60006B2C: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
L_60006B30:
    // 0x60006B30: bne         $at, $zero, L_60006ACC
    if (ctx->r1 != 0) {
        // 0x60006B34: addiu       $t1, $v1, 0x1
        ctx->r9 = ADD32(ctx->r3, 0X1);
            goto L_60006ACC;
    }
    // 0x60006B34: addiu       $t1, $v1, 0x1
    ctx->r9 = ADD32(ctx->r3, 0X1);
    // 0x60006B38: jal         0x60000BB0
    // 0x60006B3C: addiu       $a0, $zero, 0x113
    ctx->r4 = ADD32(0, 0X113);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_27;
    // 0x60006B3C: addiu       $a0, $zero, 0x113
    ctx->r4 = ADD32(0, 0X113);
    after_27:
    // 0x60006B40: beq         $v0, $zero, L_60006B58
    if (ctx->r2 == 0) {
        // 0x60006B44: nop
    
            goto L_60006B58;
    }
    // 0x60006B44: nop

    // 0x60006B48: jal         0x60000BA4
    // 0x60006B4C: addiu       $a0, $zero, 0x113
    ctx->r4 = ADD32(0, 0X113);
    ovl_stage_world8_BA4(rdram, ctx);
        goto after_28;
    // 0x60006B4C: addiu       $a0, $zero, 0x113
    ctx->r4 = ADD32(0, 0X113);
    after_28:
    // 0x60006B50: b           L_60006BD0
    // 0x60006B54: nop

        goto L_60006BD0;
    // 0x60006B54: nop

L_60006B58:
    // 0x60006B58: jal         0x60000BB0
    // 0x60006B5C: addiu       $a0, $zero, 0x112
    ctx->r4 = ADD32(0, 0X112);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_29;
    // 0x60006B5C: addiu       $a0, $zero, 0x112
    ctx->r4 = ADD32(0, 0X112);
    after_29:
    // 0x60006B60: beq         $v0, $zero, L_60006B78
    if (ctx->r2 == 0) {
        // 0x60006B64: nop
    
            goto L_60006B78;
    }
    // 0x60006B64: nop

    // 0x60006B68: jal         0x60000BA4
    // 0x60006B6C: addiu       $a0, $zero, 0x112
    ctx->r4 = ADD32(0, 0X112);
    ovl_stage_world8_BA4(rdram, ctx);
        goto after_30;
    // 0x60006B6C: addiu       $a0, $zero, 0x112
    ctx->r4 = ADD32(0, 0X112);
    after_30:
    // 0x60006B70: b           L_60006BD0
    // 0x60006B74: nop

        goto L_60006BD0;
    // 0x60006B74: nop

L_60006B78:
    // 0x60006B78: jal         0x60000BB0
    // 0x60006B7C: addiu       $a0, $zero, 0x111
    ctx->r4 = ADD32(0, 0X111);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_31;
    // 0x60006B7C: addiu       $a0, $zero, 0x111
    ctx->r4 = ADD32(0, 0X111);
    after_31:
    // 0x60006B80: beq         $v0, $zero, L_60006B98
    if (ctx->r2 == 0) {
        // 0x60006B84: nop
    
            goto L_60006B98;
    }
    // 0x60006B84: nop

    // 0x60006B88: jal         0x60000BA4
    // 0x60006B8C: addiu       $a0, $zero, 0x111
    ctx->r4 = ADD32(0, 0X111);
    ovl_stage_world8_BA4(rdram, ctx);
        goto after_32;
    // 0x60006B8C: addiu       $a0, $zero, 0x111
    ctx->r4 = ADD32(0, 0X111);
    after_32:
    // 0x60006B90: b           L_60006BD0
    // 0x60006B94: nop

        goto L_60006BD0;
    // 0x60006B94: nop

L_60006B98:
    // 0x60006B98: jal         0x60000BB0
    // 0x60006B9C: addiu       $a0, $zero, 0x110
    ctx->r4 = ADD32(0, 0X110);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_33;
    // 0x60006B9C: addiu       $a0, $zero, 0x110
    ctx->r4 = ADD32(0, 0X110);
    after_33:
    // 0x60006BA0: beq         $v0, $zero, L_60006BB8
    if (ctx->r2 == 0) {
        // 0x60006BA4: nop
    
            goto L_60006BB8;
    }
    // 0x60006BA4: nop

    // 0x60006BA8: jal         0x60000BA4
    // 0x60006BAC: addiu       $a0, $zero, 0x110
    ctx->r4 = ADD32(0, 0X110);
    ovl_stage_world8_BA4(rdram, ctx);
        goto after_34;
    // 0x60006BAC: addiu       $a0, $zero, 0x110
    ctx->r4 = ADD32(0, 0X110);
    after_34:
    // 0x60006BB0: b           L_60006BD0
    // 0x60006BB4: nop

        goto L_60006BD0;
    // 0x60006BB4: nop

L_60006BB8:
    // 0x60006BB8: jal         0x60000BB0
    // 0x60006BBC: addiu       $a0, $zero, 0x10F
    ctx->r4 = ADD32(0, 0X10F);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_35;
    // 0x60006BBC: addiu       $a0, $zero, 0x10F
    ctx->r4 = ADD32(0, 0X10F);
    after_35:
    // 0x60006BC0: beq         $v0, $zero, L_60006BD0
    if (ctx->r2 == 0) {
        // 0x60006BC4: nop
    
            goto L_60006BD0;
    }
    // 0x60006BC4: nop

    // 0x60006BC8: jal         0x60000BA4
    // 0x60006BCC: addiu       $a0, $zero, 0x10F
    ctx->r4 = ADD32(0, 0X10F);
    ovl_stage_world8_BA4(rdram, ctx);
        goto after_36;
    // 0x60006BCC: addiu       $a0, $zero, 0x10F
    ctx->r4 = ADD32(0, 0X10F);
    after_36:
L_60006BD0:
    // 0x60006BD0: bne         $s3, $zero, L_60006BE8
    if (ctx->r19 != 0) {
        // 0x60006BD4: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_60006BE8;
    }
    // 0x60006BD4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x60006BD8: lw          $t3, 0x0($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X0);
    // 0x60006BDC: nop

    // 0x60006BE0: bne         $t3, $zero, L_60006BF0
    if (ctx->r11 != 0) {
        // 0x60006BE4: nop
    
            goto L_60006BF0;
    }
    // 0x60006BE4: nop

L_60006BE8:
    // 0x60006BE8: b           L_60006930
    // 0x60006BEC: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
        goto L_60006930;
    // 0x60006BEC: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
L_60006BF0:
    // 0x60006BF0: jal         0x600009C4
    // 0x60006BF4: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_stage_world8_9C4(rdram, ctx);
        goto after_37;
    // 0x60006BF4: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_37:
    // 0x60006BF8: lw          $t4, 0x0($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X0);
    // 0x60006BFC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60006C00: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x60006C04: sw          $t5, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r13;
L_60006C08:
    // 0x60006C08: jal         0x600009C4
    // 0x60006C0C: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_stage_world8_9C4(rdram, ctx);
        goto after_38;
    // 0x60006C0C: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_38:
    // 0x60006C10: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x60006C14: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60006C18: beq         $v1, $zero, L_60006930
    if (ctx->r3 == 0) {
        // 0x60006C1C: nop
    
            goto L_60006930;
    }
    // 0x60006C1C: nop

    // 0x60006C20: bne         $s0, $s5, L_60006C08
    if (ctx->r16 != ctx->r21) {
        // 0x60006C24: nop
    
            goto L_60006C08;
    }
    // 0x60006C24: nop

    // 0x60006C28: b           L_60006C40
    // 0x60006C2C: nop

        goto L_60006C40;
    // 0x60006C2C: nop

L_60006C30:
    // 0x60006C30: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x60006C34: nop

    // 0x60006C38: bne         $t6, $zero, L_60006C50
    if (ctx->r14 != 0) {
        // 0x60006C3C: nop
    
            goto L_60006C50;
    }
    // 0x60006C3C: nop

L_60006C40:
    // 0x60006C40: jal         0x600009D0
    // 0x60006C44: nop

    ovl_stage_world8_9D0(rdram, ctx);
        goto after_39;
    // 0x60006C44: nop

    after_39:
    // 0x60006C48: b           L_6000692C
    // 0x60006C4C: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
        goto L_6000692C;
    // 0x60006C4C: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
L_60006C50:
    // 0x60006C50: jal         0x60000BA4
    // 0x60006C54: addiu       $a0, $zero, 0x10E
    ctx->r4 = ADD32(0, 0X10E);
    ovl_stage_world8_BA4(rdram, ctx);
        goto after_40;
    // 0x60006C54: addiu       $a0, $zero, 0x10E
    ctx->r4 = ADD32(0, 0X10E);
    after_40:
    // 0x60006C58: jal         0x600009AC
    // 0x60006C5C: nop

    ovl_stage_world8_9AC(rdram, ctx);
        goto after_41;
    // 0x60006C5C: nop

    after_41:
    // 0x60006C60: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x60006C64: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x60006C68: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x60006C6C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x60006C70: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x60006C74: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x60006C78: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x60006C7C: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x60006C80: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x60006C84: jr          $ra
    // 0x60006C88: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x60006C88: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void ovl_stage_world8_6C8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60006C8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60006C90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60006C94: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60006C98: sw          $zero, -0x6738($at)
    MEM_W(-0X6738, ctx->r1) = 0;
    // 0x60006C9C: jal         0x60000BB0
    // 0x60006CA0: addiu       $a0, $zero, 0x10E
    ctx->r4 = ADD32(0, 0X10E);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_0;
    // 0x60006CA0: addiu       $a0, $zero, 0x10E
    ctx->r4 = ADD32(0, 0X10E);
    after_0:
    // 0x60006CA4: bne         $v0, $zero, L_60006CD0
    if (ctx->r2 != 0) {
        // 0x60006CA8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60006CD0;
    }
    // 0x60006CA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60006CAC: jal         0x60000B98
    // 0x60006CB0: addiu       $a0, $zero, 0x10E
    ctx->r4 = ADD32(0, 0X10E);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_1;
    // 0x60006CB0: addiu       $a0, $zero, 0x10E
    ctx->r4 = ADD32(0, 0X10E);
    after_1:
    // 0x60006CB4: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60006CB8: addiu       $a0, $a0, 0x68E4
    ctx->r4 = ADD32(ctx->r4, 0X68E4);
    // 0x60006CBC: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60006CC0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60006CC4: jal         0x60000994
    // 0x60006CC8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world8_994(rdram, ctx);
        goto after_2;
    // 0x60006CC8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x60006CCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006CD0:
    // 0x60006CD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60006CD4: jr          $ra
    // 0x60006CD8: nop

    return;
    // 0x60006CD8: nop

;}
RECOMP_FUNC void ovl_stage_world8_6CDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60006CDC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60006CE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60006CE4: jal         0x600009C4
    // 0x60006CE8: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    ovl_stage_world8_9C4(rdram, ctx);
        goto after_0;
    // 0x60006CE8: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_0:
    // 0x60006CEC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x60006CF0: jal         0x60000E80
    // 0x60006CF4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world8_E80(rdram, ctx);
        goto after_1;
    // 0x60006CF4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x60006CF8: jal         0x600009AC
    // 0x60006CFC: nop

    ovl_stage_world8_9AC(rdram, ctx);
        goto after_2;
    // 0x60006CFC: nop

    after_2:
    // 0x60006D00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60006D04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60006D08: jr          $ra
    // 0x60006D0C: nop

    return;
    // 0x60006D0C: nop

;}
RECOMP_FUNC void ovl_stage_world8_6D10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60006D10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60006D14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60006D18: jal         0x600009C4
    // 0x60006D1C: addiu       $a0, $zero, 0x2D
    ctx->r4 = ADD32(0, 0X2D);
    ovl_stage_world8_9C4(rdram, ctx);
        goto after_0;
    // 0x60006D1C: addiu       $a0, $zero, 0x2D
    ctx->r4 = ADD32(0, 0X2D);
    after_0:
    // 0x60006D20: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x60006D24: jal         0x60000E80
    // 0x60006D28: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_stage_world8_E80(rdram, ctx);
        goto after_1;
    // 0x60006D28: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x60006D2C: jal         0x600009AC
    // 0x60006D30: nop

    ovl_stage_world8_9AC(rdram, ctx);
        goto after_2;
    // 0x60006D30: nop

    after_2:
    // 0x60006D34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60006D38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60006D3C: jr          $ra
    // 0x60006D40: nop

    return;
    // 0x60006D40: nop

;}
RECOMP_FUNC void ovl_stage_world8_6D44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60006D44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60006D48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60006D4C: jal         0x60000F1C
    // 0x60006D50: nop

    ovl_stage_world8_F1C(rdram, ctx);
        goto after_0;
    // 0x60006D50: nop

    after_0:
    // 0x60006D54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60006D58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60006D5C: jr          $ra
    // 0x60006D60: nop

    return;
    // 0x60006D60: nop

;}
RECOMP_FUNC void ovl_stage_world8_6D64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60006D64: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x60006D68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60006D6C: jal         0x60000C1C
    // 0x60006D70: nop

    ovl_stage_world8_C1C(rdram, ctx);
        goto after_0;
    // 0x60006D70: nop

    after_0:
    // 0x60006D74: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x60006D78: jal         0x60000DE4
    // 0x60006D7C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world8_DE4(rdram, ctx);
        goto after_1;
    // 0x60006D7C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x60006D80: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60006D84: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x60006D88: jal         0x600006C4
    // 0x60006D8C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_2;
    // 0x60006D8C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_2:
    // 0x60006D90: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x60006D94: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60006D98: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x60006D9C: nop

    // 0x60006DA0: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x60006DA4: nop

    // 0x60006DA8: bc1f        L_60006E88
    if (!c1cs) {
        // 0x60006DAC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60006E88;
    }
    // 0x60006DAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60006DB0: jal         0x60000BB0
    // 0x60006DB4: addiu       $a0, $zero, 0x190
    ctx->r4 = ADD32(0, 0X190);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_3;
    // 0x60006DB4: addiu       $a0, $zero, 0x190
    ctx->r4 = ADD32(0, 0X190);
    after_3:
    // 0x60006DB8: bne         $v0, $zero, L_60006E88
    if (ctx->r2 != 0) {
        // 0x60006DBC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60006E88;
    }
    // 0x60006DBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60006DC0: jal         0x60000BB0
    // 0x60006DC4: addiu       $a0, $zero, 0x191
    ctx->r4 = ADD32(0, 0X191);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_4;
    // 0x60006DC4: addiu       $a0, $zero, 0x191
    ctx->r4 = ADD32(0, 0X191);
    after_4:
    // 0x60006DC8: bne         $v0, $zero, L_60006E88
    if (ctx->r2 != 0) {
        // 0x60006DCC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60006E88;
    }
    // 0x60006DCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60006DD0: jal         0x60000DE4
    // 0x60006DD4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world8_DE4(rdram, ctx);
        goto after_5;
    // 0x60006DD4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_5:
    // 0x60006DD8: jal         0x60000CC4
    // 0x60006DDC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_stage_world8_CC4(rdram, ctx);
        goto after_6;
    // 0x60006DDC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_6:
    // 0x60006DE0: jal         0x60000A6C
    // 0x60006DE4: nop

    ovl_stage_world8_A6C(rdram, ctx);
        goto after_7;
    // 0x60006DE4: nop

    after_7:
    // 0x60006DE8: jal         0x60000B98
    // 0x60006DEC: addiu       $a0, $zero, 0x191
    ctx->r4 = ADD32(0, 0X191);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_8;
    // 0x60006DEC: addiu       $a0, $zero, 0x191
    ctx->r4 = ADD32(0, 0X191);
    after_8:
    // 0x60006DF0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x60006DF4: jal         0x60000E80
    // 0x60006DF8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world8_E80(rdram, ctx);
        goto after_9;
    // 0x60006DF8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_9:
    // 0x60006DFC: jal         0x60000BB0
    // 0x60006E00: addiu       $a0, $zero, 0x192
    ctx->r4 = ADD32(0, 0X192);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_10;
    // 0x60006E00: addiu       $a0, $zero, 0x192
    ctx->r4 = ADD32(0, 0X192);
    after_10:
    // 0x60006E04: beq         $v0, $zero, L_60006E44
    if (ctx->r2 == 0) {
        // 0x60006E08: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_60006E44;
    }
    // 0x60006E08: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60006E0C: jal         0x60000BA4
    // 0x60006E10: addiu       $a0, $zero, 0x18F
    ctx->r4 = ADD32(0, 0X18F);
    ovl_stage_world8_BA4(rdram, ctx);
        goto after_11;
    // 0x60006E10: addiu       $a0, $zero, 0x18F
    ctx->r4 = ADD32(0, 0X18F);
    after_11:
    // 0x60006E14: jal         0x60000B98
    // 0x60006E18: addiu       $a0, $zero, 0x190
    ctx->r4 = ADD32(0, 0X190);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_12;
    // 0x60006E18: addiu       $a0, $zero, 0x190
    ctx->r4 = ADD32(0, 0X190);
    after_12:
    // 0x60006E1C: jal         0x60000A60
    // 0x60006E20: addiu       $a0, $zero, 0xAA9
    ctx->r4 = ADD32(0, 0XAA9);
    ovl_stage_world8_A60(rdram, ctx);
        goto after_13;
    // 0x60006E20: addiu       $a0, $zero, 0xAA9
    ctx->r4 = ADD32(0, 0XAA9);
    after_13:
    // 0x60006E24: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60006E28: addiu       $a0, $a0, 0x6CDC
    ctx->r4 = ADD32(ctx->r4, 0X6CDC);
    // 0x60006E2C: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60006E30: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60006E34: jal         0x60000994
    // 0x60006E38: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world8_994(rdram, ctx);
        goto after_14;
    // 0x60006E38: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_14:
    // 0x60006E3C: b           L_60006E88
    // 0x60006E40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60006E88;
    // 0x60006E40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006E44:
    // 0x60006E44: addiu       $a0, $a0, 0x6D10
    ctx->r4 = ADD32(ctx->r4, 0X6D10);
    // 0x60006E48: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60006E4C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60006E50: jal         0x60000994
    // 0x60006E54: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world8_994(rdram, ctx);
        goto after_15;
    // 0x60006E54: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_15:
    // 0x60006E58: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x60006E5C: addiu       $t6, $zero, 0x1518
    ctx->r14 = ADD32(0, 0X1518);
    // 0x60006E60: addiu       $a0, $zero, 0x18F
    ctx->r4 = ADD32(0, 0X18F);
    // 0x60006E64: jal         0x60000B98
    // 0x60006E68: sw          $t6, 0x14($t7)
    MEM_W(0X14, ctx->r15) = ctx->r14;
    ovl_stage_world8_B98(rdram, ctx);
        goto after_16;
    // 0x60006E68: sw          $t6, 0x14($t7)
    MEM_W(0X14, ctx->r15) = ctx->r14;
    after_16:
    // 0x60006E6C: jal         0x60000A60
    // 0x60006E70: addiu       $a0, $zero, 0xAA8
    ctx->r4 = ADD32(0, 0XAA8);
    ovl_stage_world8_A60(rdram, ctx);
        goto after_17;
    // 0x60006E70: addiu       $a0, $zero, 0xAA8
    ctx->r4 = ADD32(0, 0XAA8);
    after_17:
    // 0x60006E74: jal         0x60006D44
    // 0x60006E78: addiu       $a0, $zero, 0x8F6
    ctx->r4 = ADD32(0, 0X8F6);
    ovl_stage_world8_6D44(rdram, ctx);
        goto after_18;
    // 0x60006E78: addiu       $a0, $zero, 0x8F6
    ctx->r4 = ADD32(0, 0X8F6);
    after_18:
    // 0x60006E7C: jal         0x60007354
    // 0x60006E80: nop

    ovl_stage_world8_7354(rdram, ctx);
        goto after_19;
    // 0x60006E80: nop

    after_19:
    // 0x60006E84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006E88:
    // 0x60006E88: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x60006E8C: jr          $ra
    // 0x60006E90: nop

    return;
    // 0x60006E90: nop

;}
RECOMP_FUNC void ovl_stage_world8_6E94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60006E94: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x60006E98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60006E9C: jal         0x60000C1C
    // 0x60006EA0: nop

    ovl_stage_world8_C1C(rdram, ctx);
        goto after_0;
    // 0x60006EA0: nop

    after_0:
    // 0x60006EA4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x60006EA8: jal         0x60000DE4
    // 0x60006EAC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world8_DE4(rdram, ctx);
        goto after_1;
    // 0x60006EAC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x60006EB0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60006EB4: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x60006EB8: jal         0x600006C4
    // 0x60006EBC: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_2;
    // 0x60006EBC: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_2:
    // 0x60006EC0: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x60006EC4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60006EC8: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x60006ECC: nop

    // 0x60006ED0: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x60006ED4: nop

    // 0x60006ED8: bc1f        L_60006FB8
    if (!c1cs) {
        // 0x60006EDC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60006FB8;
    }
    // 0x60006EDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60006EE0: jal         0x60000BB0
    // 0x60006EE4: addiu       $a0, $zero, 0x190
    ctx->r4 = ADD32(0, 0X190);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_3;
    // 0x60006EE4: addiu       $a0, $zero, 0x190
    ctx->r4 = ADD32(0, 0X190);
    after_3:
    // 0x60006EE8: bne         $v0, $zero, L_60006FB8
    if (ctx->r2 != 0) {
        // 0x60006EEC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60006FB8;
    }
    // 0x60006EEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60006EF0: jal         0x60000BB0
    // 0x60006EF4: addiu       $a0, $zero, 0x192
    ctx->r4 = ADD32(0, 0X192);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_4;
    // 0x60006EF4: addiu       $a0, $zero, 0x192
    ctx->r4 = ADD32(0, 0X192);
    after_4:
    // 0x60006EF8: bne         $v0, $zero, L_60006FB8
    if (ctx->r2 != 0) {
        // 0x60006EFC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60006FB8;
    }
    // 0x60006EFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60006F00: jal         0x60000DE4
    // 0x60006F04: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world8_DE4(rdram, ctx);
        goto after_5;
    // 0x60006F04: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_5:
    // 0x60006F08: jal         0x60000CC4
    // 0x60006F0C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_stage_world8_CC4(rdram, ctx);
        goto after_6;
    // 0x60006F0C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_6:
    // 0x60006F10: jal         0x60000A6C
    // 0x60006F14: nop

    ovl_stage_world8_A6C(rdram, ctx);
        goto after_7;
    // 0x60006F14: nop

    after_7:
    // 0x60006F18: jal         0x60000B98
    // 0x60006F1C: addiu       $a0, $zero, 0x192
    ctx->r4 = ADD32(0, 0X192);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_8;
    // 0x60006F1C: addiu       $a0, $zero, 0x192
    ctx->r4 = ADD32(0, 0X192);
    after_8:
    // 0x60006F20: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x60006F24: jal         0x60000E80
    // 0x60006F28: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world8_E80(rdram, ctx);
        goto after_9;
    // 0x60006F28: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_9:
    // 0x60006F2C: jal         0x60000BB0
    // 0x60006F30: addiu       $a0, $zero, 0x191
    ctx->r4 = ADD32(0, 0X191);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_10;
    // 0x60006F30: addiu       $a0, $zero, 0x191
    ctx->r4 = ADD32(0, 0X191);
    after_10:
    // 0x60006F34: beq         $v0, $zero, L_60006F74
    if (ctx->r2 == 0) {
        // 0x60006F38: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_60006F74;
    }
    // 0x60006F38: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60006F3C: jal         0x60000BA4
    // 0x60006F40: addiu       $a0, $zero, 0x18F
    ctx->r4 = ADD32(0, 0X18F);
    ovl_stage_world8_BA4(rdram, ctx);
        goto after_11;
    // 0x60006F40: addiu       $a0, $zero, 0x18F
    ctx->r4 = ADD32(0, 0X18F);
    after_11:
    // 0x60006F44: jal         0x60000B98
    // 0x60006F48: addiu       $a0, $zero, 0x190
    ctx->r4 = ADD32(0, 0X190);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_12;
    // 0x60006F48: addiu       $a0, $zero, 0x190
    ctx->r4 = ADD32(0, 0X190);
    after_12:
    // 0x60006F4C: jal         0x60000A60
    // 0x60006F50: addiu       $a0, $zero, 0xAA9
    ctx->r4 = ADD32(0, 0XAA9);
    ovl_stage_world8_A60(rdram, ctx);
        goto after_13;
    // 0x60006F50: addiu       $a0, $zero, 0xAA9
    ctx->r4 = ADD32(0, 0XAA9);
    after_13:
    // 0x60006F54: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60006F58: addiu       $a0, $a0, 0x6CDC
    ctx->r4 = ADD32(ctx->r4, 0X6CDC);
    // 0x60006F5C: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60006F60: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60006F64: jal         0x60000994
    // 0x60006F68: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world8_994(rdram, ctx);
        goto after_14;
    // 0x60006F68: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_14:
    // 0x60006F6C: b           L_60006FB8
    // 0x60006F70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60006FB8;
    // 0x60006F70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006F74:
    // 0x60006F74: addiu       $a0, $a0, 0x6D10
    ctx->r4 = ADD32(ctx->r4, 0X6D10);
    // 0x60006F78: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60006F7C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60006F80: jal         0x60000994
    // 0x60006F84: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world8_994(rdram, ctx);
        goto after_15;
    // 0x60006F84: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_15:
    // 0x60006F88: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x60006F8C: addiu       $t6, $zero, 0x1518
    ctx->r14 = ADD32(0, 0X1518);
    // 0x60006F90: addiu       $a0, $zero, 0x18F
    ctx->r4 = ADD32(0, 0X18F);
    // 0x60006F94: jal         0x60000B98
    // 0x60006F98: sw          $t6, 0x14($t7)
    MEM_W(0X14, ctx->r15) = ctx->r14;
    ovl_stage_world8_B98(rdram, ctx);
        goto after_16;
    // 0x60006F98: sw          $t6, 0x14($t7)
    MEM_W(0X14, ctx->r15) = ctx->r14;
    after_16:
    // 0x60006F9C: jal         0x60000A60
    // 0x60006FA0: addiu       $a0, $zero, 0xAA8
    ctx->r4 = ADD32(0, 0XAA8);
    ovl_stage_world8_A60(rdram, ctx);
        goto after_17;
    // 0x60006FA0: addiu       $a0, $zero, 0xAA8
    ctx->r4 = ADD32(0, 0XAA8);
    after_17:
    // 0x60006FA4: jal         0x60006D44
    // 0x60006FA8: addiu       $a0, $zero, 0x8F6
    ctx->r4 = ADD32(0, 0X8F6);
    ovl_stage_world8_6D44(rdram, ctx);
        goto after_18;
    // 0x60006FA8: addiu       $a0, $zero, 0x8F6
    ctx->r4 = ADD32(0, 0X8F6);
    after_18:
    // 0x60006FAC: jal         0x60007354
    // 0x60006FB0: nop

    ovl_stage_world8_7354(rdram, ctx);
        goto after_19;
    // 0x60006FB0: nop

    after_19:
    // 0x60006FB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60006FB8:
    // 0x60006FB8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x60006FBC: jr          $ra
    // 0x60006FC0: nop

    return;
    // 0x60006FC0: nop

;}
RECOMP_FUNC void ovl_stage_world8_6FC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60006FC4: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x60006FC8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x60006FCC: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x60006FD0: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x60006FD4: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x60006FD8: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x60006FDC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x60006FE0: jal         0x60000C1C
    // 0x60006FE4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    ovl_stage_world8_C1C(rdram, ctx);
        goto after_0;
    // 0x60006FE4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x60006FE8: or          $s5, $v0, $zero
    ctx->r21 = ctx->r2 | 0;
    // 0x60006FEC: jal         0x600009C4
    // 0x60006FF0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_stage_world8_9C4(rdram, ctx);
        goto after_1;
    // 0x60006FF0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_1:
    // 0x60006FF4: lw          $t6, 0x0($s5)
    ctx->r14 = MEM_W(ctx->r21, 0X0);
    // 0x60006FF8: nop

    // 0x60006FFC: andi        $t7, $t6, 0x800
    ctx->r15 = ctx->r14 & 0X800;
    // 0x60007000: beq         $t7, $zero, L_60007024
    if (ctx->r15 == 0) {
        // 0x60007004: nop
    
            goto L_60007024;
    }
    // 0x60007004: nop

L_60007008:
    // 0x60007008: jal         0x600009D0
    // 0x6000700C: nop

    ovl_stage_world8_9D0(rdram, ctx);
        goto after_2;
    // 0x6000700C: nop

    after_2:
    // 0x60007010: lw          $t8, 0x0($s5)
    ctx->r24 = MEM_W(ctx->r21, 0X0);
    // 0x60007014: nop

    // 0x60007018: andi        $t9, $t8, 0x800
    ctx->r25 = ctx->r24 & 0X800;
    // 0x6000701C: bne         $t9, $zero, L_60007008
    if (ctx->r25 != 0) {
        // 0x60007020: nop
    
            goto L_60007008;
    }
    // 0x60007020: nop

L_60007024:
    // 0x60007024: lw          $v0, 0x8($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X8);
    // 0x60007028: addiu       $at, $zero, 0x8A8
    ctx->r1 = ADD32(0, 0X8A8);
    // 0x6000702C: bne         $v0, $at, L_60007048
    if (ctx->r2 != ctx->r1) {
        // 0x60007030: addiu       $at, $zero, 0x8A7
        ctx->r1 = ADD32(0, 0X8A7);
            goto L_60007048;
    }
    // 0x60007030: addiu       $at, $zero, 0x8A7
    ctx->r1 = ADD32(0, 0X8A7);
    // 0x60007034: jal         0x60006D44
    // 0x60007038: addiu       $a0, $zero, 0x8F6
    ctx->r4 = ADD32(0, 0X8F6);
    ovl_stage_world8_6D44(rdram, ctx);
        goto after_3;
    // 0x60007038: addiu       $a0, $zero, 0x8F6
    ctx->r4 = ADD32(0, 0X8F6);
    after_3:
    // 0x6000703C: b           L_60007058
    // 0x60007040: nop

        goto L_60007058;
    // 0x60007040: nop

    // 0x60007044: addiu       $at, $zero, 0x8A7
    ctx->r1 = ADD32(0, 0X8A7);
L_60007048:
    // 0x60007048: bne         $v0, $at, L_60007058
    if (ctx->r2 != ctx->r1) {
        // 0x6000704C: nop
    
            goto L_60007058;
    }
    // 0x6000704C: nop

    // 0x60007050: jal         0x60006D44
    // 0x60007054: addiu       $a0, $zero, 0x8F5
    ctx->r4 = ADD32(0, 0X8F5);
    ovl_stage_world8_6D44(rdram, ctx);
        goto after_4;
    // 0x60007054: addiu       $a0, $zero, 0x8F5
    ctx->r4 = ADD32(0, 0X8F5);
    after_4:
L_60007058:
    // 0x60007058: lui         $a1, 0x6001
    ctx->r5 = S32(0X6001 << 16);
    // 0x6000705C: lw          $a2, 0x14($s5)
    ctx->r6 = MEM_W(ctx->r21, 0X14);
    // 0x60007060: addiu       $a1, $a1, -0x6AB0
    ctx->r5 = ADD32(ctx->r5, -0X6AB0);
    // 0x60007064: jal         0x60000028
    // 0x60007068: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    ovl_stage_world8_28(rdram, ctx);
        goto after_5;
    // 0x60007068: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    after_5:
    // 0x6000706C: lui         $s0, 0x6001
    ctx->r16 = S32(0X6001 << 16);
    // 0x60007070: addiu       $s0, $s0, -0x6728
    ctx->r16 = ADD32(ctx->r16, -0X6728);
    // 0x60007074: addiu       $s2, $zero, 0x100
    ctx->r18 = ADD32(0, 0X100);
    // 0x60007078: addiu       $s1, $sp, 0x4C
    ctx->r17 = ADD32(ctx->r29, 0X4C);
    // 0x6000707C: addiu       $s3, $sp, 0x50
    ctx->r19 = ADD32(ctx->r29, 0X50);
L_60007080:
    // 0x60007080: addiu       $a0, $zero, 0x904
    ctx->r4 = ADD32(0, 0X904);
    // 0x60007084: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x60007088: jal         0x60000538
    // 0x6000708C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_stage_world8_538(rdram, ctx);
        goto after_6;
    // 0x6000708C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x60007090: mtc1        $s2, $f4
    ctx->f4.u32l = ctx->r18;
    // 0x60007094: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x60007098: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x6000709C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600070A0: lui         $a2, 0x4240
    ctx->r6 = S32(0X4240 << 16);
    // 0x600070A4: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x600070A8: jal         0x6000055C
    // 0x600070AC: nop

    ovl_stage_world8_55C(rdram, ctx);
        goto after_7;
    // 0x600070AC: nop

    after_7:
    // 0x600070B0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x600070B4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x600070B8: jal         0x6000061C
    // 0x600070BC: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    ovl_stage_world8_61C(rdram, ctx);
        goto after_8;
    // 0x600070BC: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_8:
    // 0x600070C0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x600070C4: jal         0x60000604
    // 0x600070C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world8_604(rdram, ctx);
        goto after_9;
    // 0x600070C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x600070CC: lbu         $a1, 0x0($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X0);
    // 0x600070D0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x600070D4: sll         $t0, $a1, 3
    ctx->r8 = S32(ctx->r5 << 3);
    // 0x600070D8: addiu       $a1, $t0, -0x180
    ctx->r5 = ADD32(ctx->r8, -0X180);
    // 0x600070DC: jal         0x60000634
    // 0x600070E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_stage_world8_634(rdram, ctx);
        goto after_10;
    // 0x600070E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_10:
    // 0x600070E4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x600070E8: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x600070EC: bne         $s1, $s3, L_60007080
    if (ctx->r17 != ctx->r19) {
        // 0x600070F0: addiu       $s2, $s2, 0x8
        ctx->r18 = ADD32(ctx->r18, 0X8);
            goto L_60007080;
    }
    // 0x600070F0: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x600070F4: addiu       $s4, $sp, 0x50
    ctx->r20 = ADD32(ctx->r29, 0X50);
    // 0x600070F8: addiu       $s3, $sp, 0x44
    ctx->r19 = ADD32(ctx->r29, 0X44);
    // 0x600070FC: addiu       $s2, $sp, 0x48
    ctx->r18 = ADD32(ctx->r29, 0X48);
L_60007100:
    // 0x60007100: jal         0x60000BB0
    // 0x60007104: addiu       $a0, $zero, 0x190
    ctx->r4 = ADD32(0, 0X190);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_11;
    // 0x60007104: addiu       $a0, $zero, 0x190
    ctx->r4 = ADD32(0, 0X190);
    after_11:
    // 0x60007108: bne         $v0, $zero, L_600072A4
    if (ctx->r2 != 0) {
        // 0x6000710C: addiu       $at, $zero, 0x28
        ctx->r1 = ADD32(0, 0X28);
            goto L_600072A4;
    }
    // 0x6000710C: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x60007110: lw          $t1, 0x0($s5)
    ctx->r9 = MEM_W(ctx->r21, 0X0);
    // 0x60007114: nop

    // 0x60007118: andi        $t2, $t1, 0x3
    ctx->r10 = ctx->r9 & 0X3;
    // 0x6000711C: bne         $t2, $zero, L_600072A4
    if (ctx->r10 != 0) {
        // 0x60007120: nop
    
            goto L_600072A4;
    }
    // 0x60007120: nop

    // 0x60007124: lw          $t3, 0x14($s5)
    ctx->r11 = MEM_W(ctx->r21, 0X14);
    // 0x60007128: nop

    // 0x6000712C: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x60007130: sw          $t4, 0x14($s5)
    MEM_W(0X14, ctx->r21) = ctx->r12;
    // 0x60007134: beq         $t4, $zero, L_6000715C
    if (ctx->r12 == 0) {
        // 0x60007138: or          $a2, $t4, $zero
        ctx->r6 = ctx->r12 | 0;
            goto L_6000715C;
    }
    // 0x60007138: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    // 0x6000713C: div         $zero, $t4, $at
    lo = S32(S64(S32(ctx->r12)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r12)) % S64(S32(ctx->r1)));
    // 0x60007140: mfhi        $t5
    ctx->r13 = hi;
    // 0x60007144: bne         $t5, $zero, L_6000715C
    if (ctx->r13 != 0) {
        // 0x60007148: nop
    
            goto L_6000715C;
    }
    // 0x60007148: nop

    // 0x6000714C: jal         0x60000244
    // 0x60007150: addiu       $a0, $zero, 0x1F0
    ctx->r4 = ADD32(0, 0X1F0);
    ovl_stage_world8_244(rdram, ctx);
        goto after_12;
    // 0x60007150: addiu       $a0, $zero, 0x1F0
    ctx->r4 = ADD32(0, 0X1F0);
    after_12:
    // 0x60007154: lw          $a2, 0x14($s5)
    ctx->r6 = MEM_W(ctx->r21, 0X14);
    // 0x60007158: nop

L_6000715C:
    // 0x6000715C: lui         $a1, 0x6001
    ctx->r5 = S32(0X6001 << 16);
    // 0x60007160: addiu       $a1, $a1, -0x6AA8
    ctx->r5 = ADD32(ctx->r5, -0X6AA8);
    // 0x60007164: jal         0x60000028
    // 0x60007168: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    ovl_stage_world8_28(rdram, ctx);
        goto after_13;
    // 0x60007168: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    after_13:
    // 0x6000716C: lui         $s0, 0x6001
    ctx->r16 = S32(0X6001 << 16);
    // 0x60007170: addiu       $s0, $s0, -0x6728
    ctx->r16 = ADD32(ctx->r16, -0X6728);
    // 0x60007174: addiu       $s1, $sp, 0x4C
    ctx->r17 = ADD32(ctx->r29, 0X4C);
L_60007178:
    // 0x60007178: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x6000717C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x60007180: jal         0x60000628
    // 0x60007184: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    ovl_stage_world8_628(rdram, ctx);
        goto after_14;
    // 0x60007184: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_14:
    // 0x60007188: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x6000718C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x60007190: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60007194: jal         0x60000634
    // 0x60007198: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    ovl_stage_world8_634(rdram, ctx);
        goto after_15;
    // 0x60007198: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    after_15:
    // 0x6000719C: lbu         $a1, 0x0($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X0);
    // 0x600071A0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x600071A4: sll         $t6, $a1, 3
    ctx->r14 = S32(ctx->r5 << 3);
    // 0x600071A8: addiu       $a1, $t6, -0x180
    ctx->r5 = ADD32(ctx->r14, -0X180);
    // 0x600071AC: jal         0x60000634
    // 0x600071B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_stage_world8_634(rdram, ctx);
        goto after_16;
    // 0x600071B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_16:
    // 0x600071B4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x600071B8: bne         $s1, $s4, L_60007178
    if (ctx->r17 != ctx->r20) {
        // 0x600071BC: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_60007178;
    }
    // 0x600071BC: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x600071C0: lw          $t7, 0x14($s5)
    ctx->r15 = MEM_W(ctx->r21, 0X14);
    // 0x600071C4: nop

    // 0x600071C8: bne         $t7, $zero, L_60007294
    if (ctx->r15 != 0) {
        // 0x600071CC: nop
    
            goto L_60007294;
    }
    // 0x600071CC: nop

    // 0x600071D0: jal         0x60000244
    // 0x600071D4: addiu       $a0, $zero, 0x1F1
    ctx->r4 = ADD32(0, 0X1F1);
    ovl_stage_world8_244(rdram, ctx);
        goto after_17;
    // 0x600071D4: addiu       $a0, $zero, 0x1F1
    ctx->r4 = ADD32(0, 0X1F1);
    after_17:
    // 0x600071D8: jal         0x60000BA4
    // 0x600071DC: addiu       $a0, $zero, 0x191
    ctx->r4 = ADD32(0, 0X191);
    ovl_stage_world8_BA4(rdram, ctx);
        goto after_18;
    // 0x600071DC: addiu       $a0, $zero, 0x191
    ctx->r4 = ADD32(0, 0X191);
    after_18:
    // 0x600071E0: jal         0x60000BA4
    // 0x600071E4: addiu       $a0, $zero, 0x192
    ctx->r4 = ADD32(0, 0X192);
    ovl_stage_world8_BA4(rdram, ctx);
        goto after_19;
    // 0x600071E4: addiu       $a0, $zero, 0x192
    ctx->r4 = ADD32(0, 0X192);
    after_19:
    // 0x600071E8: jal         0x60000BA4
    // 0x600071EC: addiu       $a0, $zero, 0x18F
    ctx->r4 = ADD32(0, 0X18F);
    ovl_stage_world8_BA4(rdram, ctx);
        goto after_20;
    // 0x600071EC: addiu       $a0, $zero, 0x18F
    ctx->r4 = ADD32(0, 0X18F);
    after_20:
    // 0x600071F0: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x600071F4: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x600071F8: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x600071FC: jal         0x60000238
    // 0x60007200: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    ovl_stage_world8_238(rdram, ctx);
        goto after_21;
    // 0x60007200: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    after_21:
    // 0x60007204: jal         0x60000208
    // 0x60007208: nop

    ovl_stage_world8_208(rdram, ctx);
        goto after_22;
    // 0x60007208: nop

    after_22:
    // 0x6000720C: lw          $v0, 0x8($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X8);
    // 0x60007210: addiu       $at, $zero, 0x8A7
    ctx->r1 = ADD32(0, 0X8A7);
    // 0x60007214: bne         $v0, $at, L_6000723C
    if (ctx->r2 != ctx->r1) {
        // 0x60007218: addiu       $at, $zero, 0x8A8
        ctx->r1 = ADD32(0, 0X8A8);
            goto L_6000723C;
    }
    // 0x60007218: addiu       $at, $zero, 0x8A8
    ctx->r1 = ADD32(0, 0X8A8);
    // 0x6000721C: jal         0x60006D44
    // 0x60007220: addiu       $a0, $zero, 0x8D3
    ctx->r4 = ADD32(0, 0X8D3);
    ovl_stage_world8_6D44(rdram, ctx);
        goto after_23;
    // 0x60007220: addiu       $a0, $zero, 0x8D3
    ctx->r4 = ADD32(0, 0X8D3);
    after_23:
    // 0x60007224: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x60007228: jal         0x60000E68
    // 0x6000722C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world8_E68(rdram, ctx);
        goto after_24;
    // 0x6000722C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_24:
    // 0x60007230: b           L_60007274
    // 0x60007234: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
        goto L_60007274;
    // 0x60007234: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x60007238: addiu       $at, $zero, 0x8A8
    ctx->r1 = ADD32(0, 0X8A8);
L_6000723C:
    // 0x6000723C: bne         $v0, $at, L_60007274
    if (ctx->r2 != ctx->r1) {
        // 0x60007240: addiu       $a0, $zero, 0xFF
        ctx->r4 = ADD32(0, 0XFF);
            goto L_60007274;
    }
    // 0x60007240: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x60007244: jal         0x60006D44
    // 0x60007248: addiu       $a0, $zero, 0x8E3
    ctx->r4 = ADD32(0, 0X8E3);
    ovl_stage_world8_6D44(rdram, ctx);
        goto after_25;
    // 0x60007248: addiu       $a0, $zero, 0x8E3
    ctx->r4 = ADD32(0, 0X8E3);
    after_25:
    // 0x6000724C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x60007250: jal         0x60000E80
    // 0x60007254: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world8_E80(rdram, ctx);
        goto after_26;
    // 0x60007254: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_26:
    // 0x60007258: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x6000725C: jal         0x60000E80
    // 0x60007260: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world8_E80(rdram, ctx);
        goto after_27;
    // 0x60007260: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_27:
    // 0x60007264: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x60007268: jal         0x60000E80
    // 0x6000726C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world8_E80(rdram, ctx);
        goto after_28;
    // 0x6000726C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_28:
    // 0x60007270: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
L_60007274:
    // 0x60007274: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x60007278: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x6000727C: jal         0x60000220
    // 0x60007280: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    ovl_stage_world8_220(rdram, ctx);
        goto after_29;
    // 0x60007280: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    after_29:
    // 0x60007284: jal         0x60000208
    // 0x60007288: nop

    ovl_stage_world8_208(rdram, ctx);
        goto after_30;
    // 0x60007288: nop

    after_30:
    // 0x6000728C: b           L_600072A4
    // 0x60007290: nop

        goto L_600072A4;
    // 0x60007290: nop

L_60007294:
    // 0x60007294: jal         0x600009D0
    // 0x60007298: nop

    ovl_stage_world8_9D0(rdram, ctx);
        goto after_31;
    // 0x60007298: nop

    after_31:
    // 0x6000729C: b           L_60007100
    // 0x600072A0: nop

        goto L_60007100;
    // 0x600072A0: nop

L_600072A4:
    // 0x600072A4: lui         $s0, 0x6001
    ctx->r16 = S32(0X6001 << 16);
    // 0x600072A8: lui         $s1, 0x6001
    ctx->r17 = S32(0X6001 << 16);
    // 0x600072AC: addiu       $s1, $s1, -0x6718
    ctx->r17 = ADD32(ctx->r17, -0X6718);
    // 0x600072B0: addiu       $s0, $s0, -0x6728
    ctx->r16 = ADD32(ctx->r16, -0X6728);
L_600072B4:
    // 0x600072B4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x600072B8: jal         0x60000550
    // 0x600072BC: nop

    ovl_stage_world8_550(rdram, ctx);
        goto after_32;
    // 0x600072BC: nop

    after_32:
    // 0x600072C0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x600072C4: bne         $s0, $s1, L_600072B4
    if (ctx->r16 != ctx->r17) {
        // 0x600072C8: nop
    
            goto L_600072B4;
    }
    // 0x600072C8: nop

    // 0x600072CC: jal         0x600009AC
    // 0x600072D0: nop

    ovl_stage_world8_9AC(rdram, ctx);
        goto after_33;
    // 0x600072D0: nop

    after_33:
    // 0x600072D4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x600072D8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x600072DC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x600072E0: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x600072E4: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x600072E8: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x600072EC: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x600072F0: jr          $ra
    // 0x600072F4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x600072F4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_stage_world8_72F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600072F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600072FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60007300: jal         0x60000C1C
    // 0x60007304: nop

    ovl_stage_world8_C1C(rdram, ctx);
        goto after_0;
    // 0x60007304: nop

    after_0:
    // 0x60007308: lw          $v1, 0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8);
    // 0x6000730C: addiu       $at, $zero, 0x8A8
    ctx->r1 = ADD32(0, 0X8A8);
    // 0x60007310: bne         $v1, $at, L_6000732C
    if (ctx->r3 != ctx->r1) {
        // 0x60007314: addiu       $at, $zero, 0x8A7
        ctx->r1 = ADD32(0, 0X8A7);
            goto L_6000732C;
    }
    // 0x60007314: addiu       $at, $zero, 0x8A7
    ctx->r1 = ADD32(0, 0X8A7);
    // 0x60007318: jal         0x60006D44
    // 0x6000731C: addiu       $a0, $zero, 0x8F6
    ctx->r4 = ADD32(0, 0X8F6);
    ovl_stage_world8_6D44(rdram, ctx);
        goto after_1;
    // 0x6000731C: addiu       $a0, $zero, 0x8F6
    ctx->r4 = ADD32(0, 0X8F6);
    after_1:
    // 0x60007320: b           L_6000733C
    // 0x60007324: nop

        goto L_6000733C;
    // 0x60007324: nop

    // 0x60007328: addiu       $at, $zero, 0x8A7
    ctx->r1 = ADD32(0, 0X8A7);
L_6000732C:
    // 0x6000732C: bne         $v1, $at, L_6000733C
    if (ctx->r3 != ctx->r1) {
        // 0x60007330: nop
    
            goto L_6000733C;
    }
    // 0x60007330: nop

    // 0x60007334: jal         0x60006D44
    // 0x60007338: addiu       $a0, $zero, 0x8F5
    ctx->r4 = ADD32(0, 0X8F5);
    ovl_stage_world8_6D44(rdram, ctx);
        goto after_2;
    // 0x60007338: addiu       $a0, $zero, 0x8F5
    ctx->r4 = ADD32(0, 0X8F5);
    after_2:
L_6000733C:
    // 0x6000733C: jal         0x600009AC
    // 0x60007340: nop

    ovl_stage_world8_9AC(rdram, ctx);
        goto after_3;
    // 0x60007340: nop

    after_3:
    // 0x60007344: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60007348: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x6000734C: jr          $ra
    // 0x60007350: nop

    return;
    // 0x60007350: nop

;}
RECOMP_FUNC void ovl_stage_world8_7354(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60007354: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x60007358: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x6000735C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x60007360: jal         0x60000C1C
    // 0x60007364: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    ovl_stage_world8_C1C(rdram, ctx);
        goto after_0;
    // 0x60007364: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x60007368: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x6000736C: lw          $t6, 0x8($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X8);
    // 0x60007370: addiu       $at, $zero, 0x8A8
    ctx->r1 = ADD32(0, 0X8A8);
    // 0x60007374: bne         $t6, $at, L_600073A8
    if (ctx->r14 != ctx->r1) {
        // 0x60007378: lw          $t9, 0x20($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X20);
            goto L_600073A8;
    }
    // 0x60007378: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x6000737C: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x60007380: addiu       $s0, $zero, 0x6
    ctx->r16 = ADD32(0, 0X6);
    // 0x60007384: andi        $t8, $t7, 0x800
    ctx->r24 = ctx->r15 & 0X800;
    // 0x60007388: beq         $t8, $zero, L_600073A4
    if (ctx->r24 == 0) {
        // 0x6000738C: addiu       $s1, $zero, 0xC
        ctx->r17 = ADD32(0, 0XC);
            goto L_600073A4;
    }
    // 0x6000738C: addiu       $s1, $zero, 0xC
    ctx->r17 = ADD32(0, 0XC);
L_60007390:
    // 0x60007390: jal         0x60000EEC
    // 0x60007394: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_stage_world8_EEC(rdram, ctx);
        goto after_1;
    // 0x60007394: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x60007398: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x6000739C: bne         $s0, $s1, L_60007390
    if (ctx->r16 != ctx->r17) {
        // 0x600073A0: nop
    
            goto L_60007390;
    }
    // 0x600073A0: nop

L_600073A4:
    // 0x600073A4: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
L_600073A8:
    // 0x600073A8: addiu       $s0, $zero, 0x8A7
    ctx->r16 = ADD32(0, 0X8A7);
    // 0x600073AC: lw          $t0, 0x8($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X8);
    // 0x600073B0: nop

    // 0x600073B4: bne         $s0, $t0, L_600073F4
    if (ctx->r16 != ctx->r8) {
        // 0x600073B8: nop
    
            goto L_600073F4;
    }
    // 0x600073B8: nop

    // 0x600073BC: lw          $t1, 0xC($t9)
    ctx->r9 = MEM_W(ctx->r25, 0XC);
    // 0x600073C0: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x600073C4: bne         $t1, $at, L_600073F4
    if (ctx->r9 != ctx->r1) {
        // 0x600073C8: addiu       $a0, $zero, 0x18F
        ctx->r4 = ADD32(0, 0X18F);
            goto L_600073F4;
    }
    // 0x600073C8: addiu       $a0, $zero, 0x18F
    ctx->r4 = ADD32(0, 0X18F);
    // 0x600073CC: jal         0x60000BA4
    // 0x600073D0: sw          $zero, 0x14($t9)
    MEM_W(0X14, ctx->r25) = 0;
    ovl_stage_world8_BA4(rdram, ctx);
        goto after_2;
    // 0x600073D0: sw          $zero, 0x14($t9)
    MEM_W(0X14, ctx->r25) = 0;
    after_2:
    // 0x600073D4: jal         0x60000BB0
    // 0x600073D8: addiu       $a0, $zero, 0x190
    ctx->r4 = ADD32(0, 0X190);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_3;
    // 0x600073D8: addiu       $a0, $zero, 0x190
    ctx->r4 = ADD32(0, 0X190);
    after_3:
    // 0x600073DC: bne         $v0, $zero, L_600073F4
    if (ctx->r2 != 0) {
        // 0x600073E0: nop
    
            goto L_600073F4;
    }
    // 0x600073E0: nop

    // 0x600073E4: jal         0x60000BA4
    // 0x600073E8: addiu       $a0, $zero, 0x191
    ctx->r4 = ADD32(0, 0X191);
    ovl_stage_world8_BA4(rdram, ctx);
        goto after_4;
    // 0x600073E8: addiu       $a0, $zero, 0x191
    ctx->r4 = ADD32(0, 0X191);
    after_4:
    // 0x600073EC: jal         0x60000BA4
    // 0x600073F0: addiu       $a0, $zero, 0x192
    ctx->r4 = ADD32(0, 0X192);
    ovl_stage_world8_BA4(rdram, ctx);
        goto after_5;
    // 0x600073F0: addiu       $a0, $zero, 0x192
    ctx->r4 = ADD32(0, 0X192);
    after_5:
L_600073F4:
    // 0x600073F4: jal         0x60000BB0
    // 0x600073F8: addiu       $a0, $zero, 0x1A2
    ctx->r4 = ADD32(0, 0X1A2);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_6;
    // 0x600073F8: addiu       $a0, $zero, 0x1A2
    ctx->r4 = ADD32(0, 0X1A2);
    after_6:
    // 0x600073FC: bne         $v0, $zero, L_60007414
    if (ctx->r2 != 0) {
        // 0x60007400: nop
    
            goto L_60007414;
    }
    // 0x60007400: nop

    // 0x60007404: jal         0x60000B98
    // 0x60007408: addiu       $a0, $zero, 0x1A2
    ctx->r4 = ADD32(0, 0X1A2);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_7;
    // 0x60007408: addiu       $a0, $zero, 0x1A2
    ctx->r4 = ADD32(0, 0X1A2);
    after_7:
    // 0x6000740C: jal         0x60000A60
    // 0x60007410: addiu       $a0, $zero, 0xC2E
    ctx->r4 = ADD32(0, 0XC2E);
    ovl_stage_world8_A60(rdram, ctx);
        goto after_8;
    // 0x60007410: addiu       $a0, $zero, 0xC2E
    ctx->r4 = ADD32(0, 0XC2E);
    after_8:
L_60007414:
    // 0x60007414: jal         0x60000BB0
    // 0x60007418: addiu       $a0, $zero, 0x18F
    ctx->r4 = ADD32(0, 0X18F);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_9;
    // 0x60007418: addiu       $a0, $zero, 0x18F
    ctx->r4 = ADD32(0, 0X18F);
    after_9:
    // 0x6000741C: beq         $v0, $zero, L_60007438
    if (ctx->r2 == 0) {
        // 0x60007420: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_60007438;
    }
    // 0x60007420: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60007424: addiu       $a0, $a0, 0x6FC4
    ctx->r4 = ADD32(ctx->r4, 0X6FC4);
    // 0x60007428: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x6000742C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60007430: jal         0x60000994
    // 0x60007434: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world8_994(rdram, ctx);
        goto after_10;
    // 0x60007434: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_10:
L_60007438:
    // 0x60007438: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x6000743C: addiu       $at, $zero, 0x8A8
    ctx->r1 = ADD32(0, 0X8A8);
    // 0x60007440: lw          $v0, 0x8($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X8);
    // 0x60007444: nop

    // 0x60007448: beq         $s0, $v0, L_60007458
    if (ctx->r16 == ctx->r2) {
        // 0x6000744C: nop
    
            goto L_60007458;
    }
    // 0x6000744C: nop

    // 0x60007450: bne         $v0, $at, L_60007480
    if (ctx->r2 != ctx->r1) {
        // 0x60007454: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_60007480;
    }
    // 0x60007454: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_60007458:
    // 0x60007458: jal         0x60000BB0
    // 0x6000745C: addiu       $a0, $zero, 0x190
    ctx->r4 = ADD32(0, 0X190);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_11;
    // 0x6000745C: addiu       $a0, $zero, 0x190
    ctx->r4 = ADD32(0, 0X190);
    after_11:
    // 0x60007460: beq         $v0, $zero, L_6000747C
    if (ctx->r2 == 0) {
        // 0x60007464: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_6000747C;
    }
    // 0x60007464: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60007468: addiu       $a0, $a0, 0x72F8
    ctx->r4 = ADD32(ctx->r4, 0X72F8);
    // 0x6000746C: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60007470: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60007474: jal         0x60000994
    // 0x60007478: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world8_994(rdram, ctx);
        goto after_12;
    // 0x60007478: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_12:
L_6000747C:
    // 0x6000747C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_60007480:
    // 0x60007480: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x60007484: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x60007488: jr          $ra
    // 0x6000748C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x6000748C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_stage_world8_7490(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60007490: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60007494: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60007498: jal         0x60000BB0
    // 0x6000749C: addiu       $a0, $zero, 0x115
    ctx->r4 = ADD32(0, 0X115);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_0;
    // 0x6000749C: addiu       $a0, $zero, 0x115
    ctx->r4 = ADD32(0, 0X115);
    after_0:
    // 0x600074A0: beq         $v0, $zero, L_60007504
    if (ctx->r2 == 0) {
        // 0x600074A4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60007504;
    }
    // 0x600074A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600074A8: jal         0x60000BB0
    // 0x600074AC: addiu       $a0, $zero, 0x116
    ctx->r4 = ADD32(0, 0X116);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_1;
    // 0x600074AC: addiu       $a0, $zero, 0x116
    ctx->r4 = ADD32(0, 0X116);
    after_1:
    // 0x600074B0: beq         $v0, $zero, L_60007504
    if (ctx->r2 == 0) {
        // 0x600074B4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60007504;
    }
    // 0x600074B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600074B8: jal         0x60000BB0
    // 0x600074BC: addiu       $a0, $zero, 0x117
    ctx->r4 = ADD32(0, 0X117);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_2;
    // 0x600074BC: addiu       $a0, $zero, 0x117
    ctx->r4 = ADD32(0, 0X117);
    after_2:
    // 0x600074C0: beq         $v0, $zero, L_60007504
    if (ctx->r2 == 0) {
        // 0x600074C4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60007504;
    }
    // 0x600074C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600074C8: jal         0x60000BB0
    // 0x600074CC: addiu       $a0, $zero, 0x118
    ctx->r4 = ADD32(0, 0X118);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_3;
    // 0x600074CC: addiu       $a0, $zero, 0x118
    ctx->r4 = ADD32(0, 0X118);
    after_3:
    // 0x600074D0: beq         $v0, $zero, L_60007504
    if (ctx->r2 == 0) {
        // 0x600074D4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60007504;
    }
    // 0x600074D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600074D8: jal         0x60000BB0
    // 0x600074DC: addiu       $a0, $zero, 0x119
    ctx->r4 = ADD32(0, 0X119);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_4;
    // 0x600074DC: addiu       $a0, $zero, 0x119
    ctx->r4 = ADD32(0, 0X119);
    after_4:
    // 0x600074E0: beq         $v0, $zero, L_60007504
    if (ctx->r2 == 0) {
        // 0x600074E4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60007504;
    }
    // 0x600074E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600074E8: jal         0x60000BB0
    // 0x600074EC: addiu       $a0, $zero, 0x11A
    ctx->r4 = ADD32(0, 0X11A);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_5;
    // 0x600074EC: addiu       $a0, $zero, 0x11A
    ctx->r4 = ADD32(0, 0X11A);
    after_5:
    // 0x600074F0: beq         $v0, $zero, L_60007504
    if (ctx->r2 == 0) {
        // 0x600074F4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60007504;
    }
    // 0x600074F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600074F8: jal         0x60000B98
    // 0x600074FC: addiu       $a0, $zero, 0x193
    ctx->r4 = ADD32(0, 0X193);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_6;
    // 0x600074FC: addiu       $a0, $zero, 0x193
    ctx->r4 = ADD32(0, 0X193);
    after_6:
    // 0x60007500: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60007504:
    // 0x60007504: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60007508: jr          $ra
    // 0x6000750C: nop

    return;
    // 0x6000750C: nop

;}
RECOMP_FUNC void ovl_stage_world8_7510(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60007510: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x60007514: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x60007518: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x6000751C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x60007520: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x60007524: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x60007528: jal         0x60000C1C
    // 0x6000752C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    ovl_stage_world8_C1C(rdram, ctx);
        goto after_0;
    // 0x6000752C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x60007530: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x60007534: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x60007538: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x6000753C: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x60007540: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x60007544: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60007548: jal         0x600011AC
    // 0x6000754C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world8_11AC(rdram, ctx);
        goto after_1;
    // 0x6000754C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x60007550: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60007554: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x60007558: jal         0x6000121C
    // 0x6000755C: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    ovl_stage_world8_121C(rdram, ctx);
        goto after_2;
    // 0x6000755C: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    after_2:
    // 0x60007560: jal         0x60000244
    // 0x60007564: addiu       $a0, $zero, 0x1D3
    ctx->r4 = ADD32(0, 0X1D3);
    ovl_stage_world8_244(rdram, ctx);
        goto after_3;
    // 0x60007564: addiu       $a0, $zero, 0x1D3
    ctx->r4 = ADD32(0, 0X1D3);
    after_3:
    // 0x60007568: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x6000756C: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x60007570: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x60007574: addiu       $s2, $zero, 0xA0
    ctx->r18 = ADD32(0, 0XA0);
    // 0x60007578: addiu       $s0, $sp, 0x40
    ctx->r16 = ADD32(ctx->r29, 0X40);
L_6000757C:
    // 0x6000757C: jal         0x60000DE4
    // 0x60007580: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world8_DE4(rdram, ctx);
        goto after_4;
    // 0x60007580: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_4:
    // 0x60007584: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60007588: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x6000758C: jal         0x600006C4
    // 0x60007590: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_5;
    // 0x60007590: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_5:
    // 0x60007594: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x60007598: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x6000759C: lwc1        $f4, 0x30($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X30);
    // 0x600075A0: nop

    // 0x600075A4: add.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f20.fl;
    // 0x600075A8: jal         0x60000DE4
    // 0x600075AC: swc1        $f6, 0x30($t8)
    MEM_W(0X30, ctx->r24) = ctx->f6.u32l;
    ovl_stage_world8_DE4(rdram, ctx);
        goto after_6;
    // 0x600075AC: swc1        $f6, 0x30($t8)
    MEM_W(0X30, ctx->r24) = ctx->f6.u32l;
    after_6:
    // 0x600075B0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600075B4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x600075B8: jal         0x600006C4
    // 0x600075BC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_7;
    // 0x600075BC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_7:
    // 0x600075C0: jal         0x60000E74
    // 0x600075C4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_stage_world8_E74(rdram, ctx);
        goto after_8;
    // 0x600075C4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_8:
    // 0x600075C8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600075CC: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x600075D0: jal         0x600006C4
    // 0x600075D4: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_9;
    // 0x600075D4: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_9:
    // 0x600075D8: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x600075DC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x600075E0: lwc1        $f8, 0x30($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X30);
    // 0x600075E4: nop

    // 0x600075E8: add.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f20.fl;
    // 0x600075EC: jal         0x60000E74
    // 0x600075F0: swc1        $f10, 0x30($t9)
    MEM_W(0X30, ctx->r25) = ctx->f10.u32l;
    ovl_stage_world8_E74(rdram, ctx);
        goto after_10;
    // 0x600075F0: swc1        $f10, 0x30($t9)
    MEM_W(0X30, ctx->r25) = ctx->f10.u32l;
    after_10:
    // 0x600075F4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600075F8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x600075FC: jal         0x600006C4
    // 0x60007600: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_11;
    // 0x60007600: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_11:
    // 0x60007604: jal         0x600009D0
    // 0x60007608: nop

    ovl_stage_world8_9D0(rdram, ctx);
        goto after_12;
    // 0x60007608: nop

    after_12:
    // 0x6000760C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x60007610: bne         $s1, $s2, L_6000757C
    if (ctx->r17 != ctx->r18) {
        // 0x60007614: nop
    
            goto L_6000757C;
    }
    // 0x60007614: nop

    // 0x60007618: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x6000761C: lui         $at, 0xFFFE
    ctx->r1 = S32(0XFFFE << 16);
    // 0x60007620: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x60007624: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x60007628: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x6000762C: addiu       $a0, $zero, 0x8B9
    ctx->r4 = ADD32(0, 0X8B9);
    // 0x60007630: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60007634: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60007638: jal         0x60000C10
    // 0x6000763C: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    ovl_stage_world8_C10(rdram, ctx);
        goto after_13;
    // 0x6000763C: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    after_13:
    // 0x60007640: jal         0x600009AC
    // 0x60007644: nop

    ovl_stage_world8_9AC(rdram, ctx);
        goto after_14;
    // 0x60007644: nop

    after_14:
    // 0x60007648: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x6000764C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x60007650: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x60007654: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x60007658: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x6000765C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x60007660: jr          $ra
    // 0x60007664: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x60007664: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_stage_world8_7668(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60007668: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x6000766C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60007670: jal         0x60000BB0
    // 0x60007674: addiu       $a0, $zero, 0x193
    ctx->r4 = ADD32(0, 0X193);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_0;
    // 0x60007674: addiu       $a0, $zero, 0x193
    ctx->r4 = ADD32(0, 0X193);
    after_0:
    // 0x60007678: beq         $v0, $zero, L_600076E4
    if (ctx->r2 == 0) {
        // 0x6000767C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600076E4;
    }
    // 0x6000767C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60007680: jal         0x60000BB0
    // 0x60007684: addiu       $a0, $zero, 0x114
    ctx->r4 = ADD32(0, 0X114);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_1;
    // 0x60007684: addiu       $a0, $zero, 0x114
    ctx->r4 = ADD32(0, 0X114);
    after_1:
    // 0x60007688: bne         $v0, $zero, L_600076E4
    if (ctx->r2 != 0) {
        // 0x6000768C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600076E4;
    }
    // 0x6000768C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60007690: jal         0x60000DE4
    // 0x60007694: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world8_DE4(rdram, ctx);
        goto after_2;
    // 0x60007694: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x60007698: jal         0x60000CC4
    // 0x6000769C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_stage_world8_CC4(rdram, ctx);
        goto after_3;
    // 0x6000769C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_3:
    // 0x600076A0: jal         0x60000A90
    // 0x600076A4: nop

    ovl_stage_world8_A90(rdram, ctx);
        goto after_4;
    // 0x600076A4: nop

    after_4:
    // 0x600076A8: lui         $a1, 0x409C
    ctx->r5 = S32(0X409C << 16);
    // 0x600076AC: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x600076B0: jal         0x60004178
    // 0x600076B4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world8_4178(rdram, ctx);
        goto after_5;
    // 0x600076B4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_5:
    // 0x600076B8: jal         0x60000A6C
    // 0x600076BC: nop

    ovl_stage_world8_A6C(rdram, ctx);
        goto after_6;
    // 0x600076BC: nop

    after_6:
    // 0x600076C0: jal         0x60000B98
    // 0x600076C4: addiu       $a0, $zero, 0x114
    ctx->r4 = ADD32(0, 0X114);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_7;
    // 0x600076C4: addiu       $a0, $zero, 0x114
    ctx->r4 = ADD32(0, 0X114);
    after_7:
    // 0x600076C8: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600076CC: addiu       $a0, $a0, 0x7510
    ctx->r4 = ADD32(ctx->r4, 0X7510);
    // 0x600076D0: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x600076D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x600076D8: jal         0x60000994
    // 0x600076DC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world8_994(rdram, ctx);
        goto after_8;
    // 0x600076DC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_8:
    // 0x600076E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600076E4:
    // 0x600076E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600076E8: jr          $ra
    // 0x600076EC: nop

    return;
    // 0x600076EC: nop

;}
RECOMP_FUNC void ovl_stage_world8_76F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600076F0: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x600076F4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x600076F8: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x600076FC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x60007700: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x60007704: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x60007708: jal         0x60000C1C
    // 0x6000770C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    ovl_stage_world8_C1C(rdram, ctx);
        goto after_0;
    // 0x6000770C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x60007710: jal         0x60000A6C
    // 0x60007714: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    ovl_stage_world8_A6C(rdram, ctx);
        goto after_1;
    // 0x60007714: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    after_1:
    // 0x60007718: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x6000771C: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x60007720: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x60007724: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60007728: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x6000772C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x60007730: jal         0x600011AC
    // 0x60007734: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    ovl_stage_world8_11AC(rdram, ctx);
        goto after_2;
    // 0x60007734: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    after_2:
    // 0x60007738: jal         0x600009D0
    // 0x6000773C: nop

    ovl_stage_world8_9D0(rdram, ctx);
        goto after_3;
    // 0x6000773C: nop

    after_3:
    // 0x60007740: jal         0x60000E74
    // 0x60007744: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_stage_world8_E74(rdram, ctx);
        goto after_4;
    // 0x60007744: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_4:
    // 0x60007748: addiu       $s0, $sp, 0x40
    ctx->r16 = ADD32(ctx->r29, 0X40);
    // 0x6000774C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x60007750: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60007754: jal         0x600006C4
    // 0x60007758: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_5;
    // 0x60007758: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_5:
    // 0x6000775C: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x60007760: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60007764: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x60007768: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x6000776C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x60007770: jal         0x60000E74
    // 0x60007774: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    ovl_stage_world8_E74(rdram, ctx);
        goto after_6;
    // 0x60007774: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    after_6:
    // 0x60007778: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x6000777C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x60007780: jal         0x600006C4
    // 0x60007784: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_7;
    // 0x60007784: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_7:
    // 0x60007788: jal         0x60000244
    // 0x6000778C: addiu       $a0, $zero, 0x1D3
    ctx->r4 = ADD32(0, 0X1D3);
    ovl_stage_world8_244(rdram, ctx);
        goto after_8;
    // 0x6000778C: addiu       $a0, $zero, 0x1D3
    ctx->r4 = ADD32(0, 0X1D3);
    after_8:
    // 0x60007790: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x60007794: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x60007798: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x6000779C: addiu       $s2, $zero, 0xA0
    ctx->r18 = ADD32(0, 0XA0);
L_600077A0:
    // 0x600077A0: jal         0x60000DE4
    // 0x600077A4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world8_DE4(rdram, ctx);
        goto after_9;
    // 0x600077A4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_9:
    // 0x600077A8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600077AC: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x600077B0: jal         0x600006C4
    // 0x600077B4: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_10;
    // 0x600077B4: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_10:
    // 0x600077B8: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x600077BC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600077C0: lwc1        $f10, 0x30($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X30);
    // 0x600077C4: nop

    // 0x600077C8: sub.s       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f20.fl;
    // 0x600077CC: jal         0x60000DE4
    // 0x600077D0: swc1        $f16, 0x30($t8)
    MEM_W(0X30, ctx->r24) = ctx->f16.u32l;
    ovl_stage_world8_DE4(rdram, ctx);
        goto after_11;
    // 0x600077D0: swc1        $f16, 0x30($t8)
    MEM_W(0X30, ctx->r24) = ctx->f16.u32l;
    after_11:
    // 0x600077D4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600077D8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x600077DC: jal         0x600006C4
    // 0x600077E0: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_12;
    // 0x600077E0: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_12:
    // 0x600077E4: jal         0x60000E74
    // 0x600077E8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_stage_world8_E74(rdram, ctx);
        goto after_13;
    // 0x600077E8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_13:
    // 0x600077EC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600077F0: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x600077F4: jal         0x600006C4
    // 0x600077F8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_14;
    // 0x600077F8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_14:
    // 0x600077FC: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x60007800: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x60007804: lwc1        $f18, 0x30($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0X30);
    // 0x60007808: nop

    // 0x6000780C: sub.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f20.fl;
    // 0x60007810: jal         0x60000E74
    // 0x60007814: swc1        $f4, 0x30($t9)
    MEM_W(0X30, ctx->r25) = ctx->f4.u32l;
    ovl_stage_world8_E74(rdram, ctx);
        goto after_15;
    // 0x60007814: swc1        $f4, 0x30($t9)
    MEM_W(0X30, ctx->r25) = ctx->f4.u32l;
    after_15:
    // 0x60007818: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x6000781C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x60007820: jal         0x600006C4
    // 0x60007824: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_16;
    // 0x60007824: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_16:
    // 0x60007828: jal         0x600009D0
    // 0x6000782C: nop

    ovl_stage_world8_9D0(rdram, ctx);
        goto after_17;
    // 0x6000782C: nop

    after_17:
    // 0x60007830: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x60007834: bne         $s1, $s2, L_600077A0
    if (ctx->r17 != ctx->r18) {
        // 0x60007838: nop
    
            goto L_600077A0;
    }
    // 0x60007838: nop

    // 0x6000783C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60007840: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x60007844: jal         0x6000121C
    // 0x60007848: lui         $a2, 0x4316
    ctx->r6 = S32(0X4316 << 16);
    ovl_stage_world8_121C(rdram, ctx);
        goto after_18;
    // 0x60007848: lui         $a2, 0x4316
    ctx->r6 = S32(0X4316 << 16);
    after_18:
    // 0x6000784C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60007850: jal         0x600011AC
    // 0x60007854: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world8_11AC(rdram, ctx);
        goto after_19;
    // 0x60007854: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_19:
    // 0x60007858: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x6000785C: lwc1        $f20, -0x699C($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X699C);
    // 0x60007860: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60007864: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x60007868: jal         0x60004178
    // 0x6000786C: nop

    ovl_stage_world8_4178(rdram, ctx);
        goto after_20;
    // 0x6000786C: nop

    after_20:
    // 0x60007870: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x60007874: jal         0x60004178
    // 0x60007878: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world8_4178(rdram, ctx);
        goto after_21;
    // 0x60007878: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_21:
    // 0x6000787C: jal         0x60000A78
    // 0x60007880: nop

    ovl_stage_world8_A78(rdram, ctx);
        goto after_22;
    // 0x60007880: nop

    after_22:
    // 0x60007884: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x60007888: lui         $at, 0xFFFE
    ctx->r1 = S32(0XFFFE << 16);
    // 0x6000788C: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x60007890: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x60007894: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x60007898: addiu       $a0, $zero, 0x114
    ctx->r4 = ADD32(0, 0X114);
    // 0x6000789C: jal         0x60000BA4
    // 0x600078A0: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    ovl_stage_world8_BA4(rdram, ctx);
        goto after_23;
    // 0x600078A0: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    after_23:
    // 0x600078A4: jal         0x600009AC
    // 0x600078A8: nop

    ovl_stage_world8_9AC(rdram, ctx);
        goto after_24;
    // 0x600078A8: nop

    after_24:
    // 0x600078AC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x600078B0: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x600078B4: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x600078B8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x600078BC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x600078C0: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x600078C4: jr          $ra
    // 0x600078C8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x600078C8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_stage_world8_78CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600078CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600078D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600078D4: jal         0x60000C1C
    // 0x600078D8: nop

    ovl_stage_world8_C1C(rdram, ctx);
        goto after_0;
    // 0x600078D8: nop

    after_0:
    // 0x600078DC: lw          $t6, 0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC);
    // 0x600078E0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x600078E4: bne         $t6, $at, L_60007918
    if (ctx->r14 != ctx->r1) {
        // 0x600078E8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60007918;
    }
    // 0x600078E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600078EC: jal         0x60000A6C
    // 0x600078F0: nop

    ovl_stage_world8_A6C(rdram, ctx);
        goto after_1;
    // 0x600078F0: nop

    after_1:
    // 0x600078F4: jal         0x60000B98
    // 0x600078F8: addiu       $a0, $zero, 0x114
    ctx->r4 = ADD32(0, 0X114);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_2;
    // 0x600078F8: addiu       $a0, $zero, 0x114
    ctx->r4 = ADD32(0, 0X114);
    after_2:
    // 0x600078FC: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60007900: addiu       $a0, $a0, 0x76F0
    ctx->r4 = ADD32(ctx->r4, 0X76F0);
    // 0x60007904: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60007908: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x6000790C: jal         0x60000994
    // 0x60007910: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world8_994(rdram, ctx);
        goto after_3;
    // 0x60007910: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x60007914: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60007918:
    // 0x60007918: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x6000791C: jr          $ra
    // 0x60007920: nop

    return;
    // 0x60007920: nop

;}
RECOMP_FUNC void ovl_stage_world8_7924(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60007924: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x60007928: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x6000792C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x60007930: jal         0x60000C1C
    // 0x60007934: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    ovl_stage_world8_C1C(rdram, ctx);
        goto after_0;
    // 0x60007934: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    after_0:
    // 0x60007938: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x6000793C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60007940: jal         0x600011AC
    // 0x60007944: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world8_11AC(rdram, ctx);
        goto after_1;
    // 0x60007944: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x60007948: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x6000794C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x60007950: jal         0x6000121C
    // 0x60007954: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    ovl_stage_world8_121C(rdram, ctx);
        goto after_2;
    // 0x60007954: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    after_2:
    // 0x60007958: jal         0x60000A60
    // 0x6000795C: addiu       $a0, $zero, 0xAAA
    ctx->r4 = ADD32(0, 0XAAA);
    ovl_stage_world8_A60(rdram, ctx);
        goto after_3;
    // 0x6000795C: addiu       $a0, $zero, 0xAAA
    ctx->r4 = ADD32(0, 0XAAA);
    after_3:
    // 0x60007960: jal         0x60001064
    // 0x60007964: nop

    ovl_stage_world8_1064(rdram, ctx);
        goto after_4;
    // 0x60007964: nop

    after_4:
    // 0x60007968: jal         0x60000A6C
    // 0x6000796C: nop

    ovl_stage_world8_A6C(rdram, ctx);
        goto after_5;
    // 0x6000796C: nop

    after_5:
    // 0x60007970: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
    // 0x60007974: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x60007978: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x6000797C: addiu       $a0, $zero, 0x7EE
    ctx->r4 = ADD32(0, 0X7EE);
    // 0x60007980: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x60007984: jal         0x60000118
    // 0x60007988: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    ovl_stage_world8_118(rdram, ctx);
        goto after_6;
    // 0x60007988: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    after_6:
    // 0x6000798C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x60007990: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x60007994: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x60007998: addiu       $a1, $zero, 0xB6
    ctx->r5 = ADD32(0, 0XB6);
    // 0x6000799C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x600079A0: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    // 0x600079A4: jal         0x600006B8
    // 0x600079A8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    ovl_stage_world8_6B8(rdram, ctx);
        goto after_7;
    // 0x600079A8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_7:
    // 0x600079AC: lui         $t9, 0x6001
    ctx->r25 = S32(0X6001 << 16);
    // 0x600079B0: lw          $t9, -0x6AC0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X6AC0);
    // 0x600079B4: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x600079B8: lui         $a2, 0x6001
    ctx->r6 = S32(0X6001 << 16);
    // 0x600079BC: addiu       $t0, $zero, 0x9
    ctx->r8 = ADD32(0, 0X9);
    // 0x600079C0: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x600079C4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x600079C8: addiu       $a2, $a2, -0x6718
    ctx->r6 = ADD32(ctx->r6, -0X6718);
    // 0x600079CC: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x600079D0: addiu       $a1, $zero, 0xA6
    ctx->r5 = ADD32(0, 0XA6);
    // 0x600079D4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x600079D8: jal         0x600006A0
    // 0x600079DC: sw          $t9, -0x6718($at)
    MEM_W(-0X6718, ctx->r1) = ctx->r25;
    ovl_stage_world8_6A0(rdram, ctx);
        goto after_8;
    // 0x600079DC: sw          $t9, -0x6718($at)
    MEM_W(-0X6718, ctx->r1) = ctx->r25;
    after_8:
    // 0x600079E0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x600079E4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x600079E8: jal         0x60000640
    // 0x600079EC: addiu       $a1, $zero, 0x101
    ctx->r5 = ADD32(0, 0X101);
    ovl_stage_world8_640(rdram, ctx);
        goto after_9;
    // 0x600079EC: addiu       $a1, $zero, 0x101
    ctx->r5 = ADD32(0, 0X101);
    after_9:
    // 0x600079F0: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x600079F4: addiu       $a0, $a0, -0x6AF8
    ctx->r4 = ADD32(ctx->r4, -0X6AF8);
    // 0x600079F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x600079FC: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x60007A00: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x60007A04: jal         0x60000D30
    // 0x60007A08: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_stage_world8_D30(rdram, ctx);
        goto after_10;
    // 0x60007A08: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_10:
    // 0x60007A0C: jal         0x60000D3C
    // 0x60007A10: nop

    ovl_stage_world8_D3C(rdram, ctx);
        goto after_11;
    // 0x60007A10: nop

    after_11:
    // 0x60007A14: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x60007A18: jal         0x600006AC
    // 0x60007A1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_stage_world8_6AC(rdram, ctx);
        goto after_12;
    // 0x60007A1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x60007A20: jal         0x600006AC
    // 0x60007A24: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_stage_world8_6AC(rdram, ctx);
        goto after_13;
    // 0x60007A24: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_13:
    // 0x60007A28: jal         0x60000124
    // 0x60007A2C: addiu       $a0, $zero, 0x7EE
    ctx->r4 = ADD32(0, 0X7EE);
    ovl_stage_world8_124(rdram, ctx);
        goto after_14;
    // 0x60007A2C: addiu       $a0, $zero, 0x7EE
    ctx->r4 = ADD32(0, 0X7EE);
    after_14:
    // 0x60007A30: jal         0x600009C4
    // 0x60007A34: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    ovl_stage_world8_9C4(rdram, ctx);
        goto after_15;
    // 0x60007A34: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_15:
    // 0x60007A38: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x60007A3C: lui         $at, 0xFFFE
    ctx->r1 = S32(0XFFFE << 16);
    // 0x60007A40: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x60007A44: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x60007A48: and         $t3, $t2, $at
    ctx->r11 = ctx->r10 & ctx->r1;
    // 0x60007A4C: sw          $t3, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r11;
    // 0x60007A50: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x60007A54: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x60007A58: bne         $t4, $zero, L_60007A80
    if (ctx->r12 != 0) {
        // 0x60007A5C: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_60007A80;
    }
    // 0x60007A5C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x60007A60: jal         0x60000A60
    // 0x60007A64: addiu       $a0, $zero, 0xAAC
    ctx->r4 = ADD32(0, 0XAAC);
    ovl_stage_world8_A60(rdram, ctx);
        goto after_16;
    // 0x60007A64: addiu       $a0, $zero, 0xAAC
    ctx->r4 = ADD32(0, 0XAAC);
    after_16:
    // 0x60007A68: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x60007A6C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60007A70: addiu       $t5, $zero, 0xA0
    ctx->r13 = ADD32(0, 0XA0);
    // 0x60007A74: sw          $t5, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r13;
    // 0x60007A78: b           L_60007AA4
    // 0x60007A7C: swc1        $f4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f4.u32l;
        goto L_60007AA4;
    // 0x60007A7C: swc1        $f4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f4.u32l;
L_60007A80:
    // 0x60007A80: bne         $t6, $at, L_60007AA4
    if (ctx->r14 != ctx->r1) {
        // 0x60007A84: nop
    
            goto L_60007AA4;
    }
    // 0x60007A84: nop

    // 0x60007A88: jal         0x60000A60
    // 0x60007A8C: addiu       $a0, $zero, 0xAAB
    ctx->r4 = ADD32(0, 0XAAB);
    ovl_stage_world8_A60(rdram, ctx);
        goto after_17;
    // 0x60007A8C: addiu       $a0, $zero, 0xAAB
    ctx->r4 = ADD32(0, 0XAAB);
    after_17:
    // 0x60007A90: lui         $at, 0xC396
    ctx->r1 = S32(0XC396 << 16);
    // 0x60007A94: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60007A98: addiu       $t7, $zero, 0x3C
    ctx->r15 = ADD32(0, 0X3C);
    // 0x60007A9C: sw          $t7, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r15;
    // 0x60007AA0: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
L_60007AA4:
    // 0x60007AA4: jal         0x60001064
    // 0x60007AA8: nop

    ovl_stage_world8_1064(rdram, ctx);
        goto after_18;
    // 0x60007AA8: nop

    after_18:
    // 0x60007AAC: jal         0x60000A6C
    // 0x60007AB0: nop

    ovl_stage_world8_A6C(rdram, ctx);
        goto after_19;
    // 0x60007AB0: nop

    after_19:
    // 0x60007AB4: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x60007AB8: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x60007ABC: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x60007AC0: nop

    // 0x60007AC4: or          $t0, $t9, $at
    ctx->r8 = ctx->r25 | ctx->r1;
    // 0x60007AC8: sw          $t0, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r8;
    // 0x60007ACC: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x60007AD0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x60007AD4: beq         $t2, $at, L_60007B6C
    if (ctx->r10 == ctx->r1) {
        // 0x60007AD8: lw          $t4, 0x40($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X40);
            goto L_60007B6C;
    }
    // 0x60007AD8: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x60007ADC: jal         0x60000244
    // 0x60007AE0: addiu       $a0, $zero, 0x1D3
    ctx->r4 = ADD32(0, 0X1D3);
    ovl_stage_world8_244(rdram, ctx);
        goto after_20;
    // 0x60007AE0: addiu       $a0, $zero, 0x1D3
    ctx->r4 = ADD32(0, 0X1D3);
    after_20:
    // 0x60007AE4: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x60007AE8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60007AEC: blez        $v1, L_60007B6C
    if (SIGNED(ctx->r3) <= 0) {
        // 0x60007AF0: lw          $t4, 0x40($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X40);
            goto L_60007B6C;
    }
    // 0x60007AF0: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x60007AF4: mtc1        $v1, $f10
    ctx->f10.u32l = ctx->r3;
    // 0x60007AF8: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x60007AFC: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x60007B00: addiu       $s1, $sp, 0x50
    ctx->r17 = ADD32(ctx->r29, 0X50);
    // 0x60007B04: div.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f8.fl, ctx->f16.fl);
    // 0x60007B08: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
L_60007B0C:
    // 0x60007B0C: jal         0x60000E74
    // 0x60007B10: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world8_E74(rdram, ctx);
        goto after_21;
    // 0x60007B10: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_21:
    // 0x60007B14: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60007B18: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x60007B1C: jal         0x600006C4
    // 0x60007B20: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_22;
    // 0x60007B20: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_22:
    // 0x60007B24: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x60007B28: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x60007B2C: lwc1        $f4, 0x30($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X30);
    // 0x60007B30: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x60007B34: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x60007B38: jal         0x60000E74
    // 0x60007B3C: swc1        $f10, 0x30($t3)
    MEM_W(0X30, ctx->r11) = ctx->f10.u32l;
    ovl_stage_world8_E74(rdram, ctx);
        goto after_23;
    // 0x60007B3C: swc1        $f10, 0x30($t3)
    MEM_W(0X30, ctx->r11) = ctx->f10.u32l;
    after_23:
    // 0x60007B40: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60007B44: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x60007B48: jal         0x600006C4
    // 0x60007B4C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_24;
    // 0x60007B4C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_24:
    // 0x60007B50: jal         0x600009D0
    // 0x60007B54: nop

    ovl_stage_world8_9D0(rdram, ctx);
        goto after_25;
    // 0x60007B54: nop

    after_25:
    // 0x60007B58: lw          $t1, 0x48($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X48);
    // 0x60007B5C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60007B60: bne         $s0, $t1, L_60007B0C
    if (ctx->r16 != ctx->r9) {
        // 0x60007B64: nop
    
            goto L_60007B0C;
    }
    // 0x60007B64: nop

    // 0x60007B68: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
L_60007B6C:
    // 0x60007B6C: lui         $at, 0xFFFE
    ctx->r1 = S32(0XFFFE << 16);
    // 0x60007B70: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x60007B74: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x60007B78: and         $t6, $t5, $at
    ctx->r14 = ctx->r13 & ctx->r1;
    // 0x60007B7C: sw          $t6, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r14;
    // 0x60007B80: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x60007B84: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x60007B88: beq         $t7, $at, L_60007BD0
    if (ctx->r15 == ctx->r1) {
        // 0x60007B8C: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_60007BD0;
    }
    // 0x60007B8C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60007B90: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x60007B94: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    // 0x60007B98: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60007B9C: c.lt.s      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.fl < ctx->f16.fl;
    // 0x60007BA0: addiu       $a0, $zero, 0x8B8
    ctx->r4 = ADD32(0, 0X8B8);
    // 0x60007BA4: bc1f        L_60007BC0
    if (!c1cs) {
        // 0x60007BA8: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_60007BC0;
    }
    // 0x60007BA8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x60007BAC: addiu       $a0, $zero, 0x8BA
    ctx->r4 = ADD32(0, 0X8BA);
    // 0x60007BB0: jal         0x60000C10
    // 0x60007BB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world8_C10(rdram, ctx);
        goto after_26;
    // 0x60007BB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_26:
    // 0x60007BB8: b           L_60007BE0
    // 0x60007BBC: nop

        goto L_60007BE0;
    // 0x60007BBC: nop

L_60007BC0:
    // 0x60007BC0: jal         0x60000C10
    // 0x60007BC4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_stage_world8_C10(rdram, ctx);
        goto after_27;
    // 0x60007BC4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_27:
    // 0x60007BC8: b           L_60007BE0
    // 0x60007BCC: nop

        goto L_60007BE0;
    // 0x60007BCC: nop

L_60007BD0:
    // 0x60007BD0: jal         0x600011AC
    // 0x60007BD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world8_11AC(rdram, ctx);
        goto after_28;
    // 0x60007BD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_28:
    // 0x60007BD8: jal         0x60000A78
    // 0x60007BDC: nop

    ovl_stage_world8_A78(rdram, ctx);
        goto after_29;
    // 0x60007BDC: nop

    after_29:
L_60007BE0:
    // 0x60007BE0: jal         0x600009AC
    // 0x60007BE4: nop

    ovl_stage_world8_9AC(rdram, ctx);
        goto after_30;
    // 0x60007BE4: nop

    after_30:
    // 0x60007BE8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x60007BEC: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x60007BF0: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x60007BF4: jr          $ra
    // 0x60007BF8: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x60007BF8: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void ovl_stage_world8_7BFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60007BFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60007C00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60007C04: jal         0x60000BB0
    // 0x60007C08: addiu       $a0, $zero, 0x11F
    ctx->r4 = ADD32(0, 0X11F);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_0;
    // 0x60007C08: addiu       $a0, $zero, 0x11F
    ctx->r4 = ADD32(0, 0X11F);
    after_0:
    // 0x60007C0C: bne         $v0, $zero, L_60007C58
    if (ctx->r2 != 0) {
        // 0x60007C10: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60007C58;
    }
    // 0x60007C10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60007C14: jal         0x60000BB0
    // 0x60007C18: addiu       $a0, $zero, 0x194
    ctx->r4 = ADD32(0, 0X194);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_1;
    // 0x60007C18: addiu       $a0, $zero, 0x194
    ctx->r4 = ADD32(0, 0X194);
    after_1:
    // 0x60007C1C: beq         $v0, $zero, L_60007C58
    if (ctx->r2 == 0) {
        // 0x60007C20: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60007C58;
    }
    // 0x60007C20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60007C24: jal         0x60000A6C
    // 0x60007C28: nop

    ovl_stage_world8_A6C(rdram, ctx);
        goto after_2;
    // 0x60007C28: nop

    after_2:
    // 0x60007C2C: jal         0x60000A90
    // 0x60007C30: nop

    ovl_stage_world8_A90(rdram, ctx);
        goto after_3;
    // 0x60007C30: nop

    after_3:
    // 0x60007C34: jal         0x60000B98
    // 0x60007C38: addiu       $a0, $zero, 0x11F
    ctx->r4 = ADD32(0, 0X11F);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_4;
    // 0x60007C38: addiu       $a0, $zero, 0x11F
    ctx->r4 = ADD32(0, 0X11F);
    after_4:
    // 0x60007C3C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60007C40: addiu       $a0, $a0, 0x7924
    ctx->r4 = ADD32(ctx->r4, 0X7924);
    // 0x60007C44: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60007C48: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60007C4C: jal         0x60000994
    // 0x60007C50: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world8_994(rdram, ctx);
        goto after_5;
    // 0x60007C50: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
    // 0x60007C54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60007C58:
    // 0x60007C58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60007C5C: jr          $ra
    // 0x60007C60: nop

    return;
    // 0x60007C60: nop

;}
RECOMP_FUNC void ovl_stage_world8_7C64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60007C64: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x60007C68: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x60007C6C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x60007C70: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x60007C74: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x60007C78: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x60007C7C: jal         0x60000C1C
    // 0x60007C80: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    ovl_stage_world8_C1C(rdram, ctx);
        goto after_0;
    // 0x60007C80: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x60007C84: jal         0x60000A6C
    // 0x60007C88: sw          $v0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r2;
    ovl_stage_world8_A6C(rdram, ctx);
        goto after_1;
    // 0x60007C88: sw          $v0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r2;
    after_1:
    // 0x60007C8C: lw          $v0, 0x6C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X6C);
    // 0x60007C90: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x60007C94: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x60007C98: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60007C9C: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x60007CA0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x60007CA4: jal         0x600011AC
    // 0x60007CA8: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    ovl_stage_world8_11AC(rdram, ctx);
        goto after_2;
    // 0x60007CA8: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    after_2:
    // 0x60007CAC: lw          $t8, 0x6C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X6C);
    // 0x60007CB0: nop

    // 0x60007CB4: lw          $t9, 0xC($t8)
    ctx->r25 = MEM_W(ctx->r24, 0XC);
    // 0x60007CB8: nop

    // 0x60007CBC: bne         $t9, $zero, L_60007CD4
    if (ctx->r25 != 0) {
        // 0x60007CC0: lui         $at, 0xC396
        ctx->r1 = S32(0XC396 << 16);
            goto L_60007CD4;
    }
    // 0x60007CC0: lui         $at, 0xC396
    ctx->r1 = S32(0XC396 << 16);
    // 0x60007CC4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60007CC8: addiu       $s2, $zero, 0x3C
    ctx->r18 = ADD32(0, 0X3C);
    // 0x60007CCC: b           L_60007CE4
    // 0x60007CD0: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
        goto L_60007CE4;
    // 0x60007CD0: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
L_60007CD4:
    // 0x60007CD4: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x60007CD8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60007CDC: addiu       $s2, $zero, 0xA0
    ctx->r18 = ADD32(0, 0XA0);
    // 0x60007CE0: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
L_60007CE4:
    // 0x60007CE4: jal         0x600009D0
    // 0x60007CE8: nop

    ovl_stage_world8_9D0(rdram, ctx);
        goto after_3;
    // 0x60007CE8: nop

    after_3:
    // 0x60007CEC: jal         0x60000E74
    // 0x60007CF0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world8_E74(rdram, ctx);
        goto after_4;
    // 0x60007CF0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
    // 0x60007CF4: addiu       $s0, $sp, 0x54
    ctx->r16 = ADD32(ctx->r29, 0X54);
    // 0x60007CF8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x60007CFC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60007D00: jal         0x600006C4
    // 0x60007D04: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_5;
    // 0x60007D04: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_5:
    // 0x60007D08: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
    // 0x60007D0C: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x60007D10: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x60007D14: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x60007D18: jal         0x60000E74
    // 0x60007D1C: swc1        $f16, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f16.u32l;
    ovl_stage_world8_E74(rdram, ctx);
        goto after_6;
    // 0x60007D1C: swc1        $f16, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f16.u32l;
    after_6:
    // 0x60007D20: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60007D24: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x60007D28: jal         0x600006C4
    // 0x60007D2C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_7;
    // 0x60007D2C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_7:
    // 0x60007D30: jal         0x60000244
    // 0x60007D34: addiu       $a0, $zero, 0x1D3
    ctx->r4 = ADD32(0, 0X1D3);
    ovl_stage_world8_244(rdram, ctx);
        goto after_8;
    // 0x60007D34: addiu       $a0, $zero, 0x1D3
    ctx->r4 = ADD32(0, 0X1D3);
    after_8:
    // 0x60007D38: blez        $s2, L_60007DF0
    if (SIGNED(ctx->r18) <= 0) {
        // 0x60007D3C: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_60007DF0;
    }
    // 0x60007D3C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x60007D40: mtc1        $s2, $f4
    ctx->f4.u32l = ctx->r18;
    // 0x60007D44: lwc1        $f18, 0x3C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x60007D48: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x60007D4C: nop

    // 0x60007D50: div.s       $f20, $f18, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f20.fl = DIV_S(ctx->f18.fl, ctx->f6.fl);
L_60007D54:
    // 0x60007D54: jal         0x60000DE4
    // 0x60007D58: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world8_DE4(rdram, ctx);
        goto after_9;
    // 0x60007D58: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_9:
    // 0x60007D5C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60007D60: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x60007D64: jal         0x600006C4
    // 0x60007D68: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_10;
    // 0x60007D68: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_10:
    // 0x60007D6C: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x60007D70: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60007D74: lwc1        $f8, 0x30($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X30);
    // 0x60007D78: nop

    // 0x60007D7C: sub.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f20.fl;
    // 0x60007D80: jal         0x60000DE4
    // 0x60007D84: swc1        $f10, 0x30($t0)
    MEM_W(0X30, ctx->r8) = ctx->f10.u32l;
    ovl_stage_world8_DE4(rdram, ctx);
        goto after_11;
    // 0x60007D84: swc1        $f10, 0x30($t0)
    MEM_W(0X30, ctx->r8) = ctx->f10.u32l;
    after_11:
    // 0x60007D88: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60007D8C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x60007D90: jal         0x600006C4
    // 0x60007D94: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_12;
    // 0x60007D94: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_12:
    // 0x60007D98: jal         0x60000E74
    // 0x60007D9C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world8_E74(rdram, ctx);
        goto after_13;
    // 0x60007D9C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_13:
    // 0x60007DA0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60007DA4: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x60007DA8: jal         0x600006C4
    // 0x60007DAC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_14;
    // 0x60007DAC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_14:
    // 0x60007DB0: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x60007DB4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x60007DB8: lwc1        $f16, 0x30($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X30);
    // 0x60007DBC: nop

    // 0x60007DC0: sub.s       $f4, $f16, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f20.fl;
    // 0x60007DC4: jal         0x60000E74
    // 0x60007DC8: swc1        $f4, 0x30($t1)
    MEM_W(0X30, ctx->r9) = ctx->f4.u32l;
    ovl_stage_world8_E74(rdram, ctx);
        goto after_15;
    // 0x60007DC8: swc1        $f4, 0x30($t1)
    MEM_W(0X30, ctx->r9) = ctx->f4.u32l;
    after_15:
    // 0x60007DCC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60007DD0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x60007DD4: jal         0x600006C4
    // 0x60007DD8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_16;
    // 0x60007DD8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_16:
    // 0x60007DDC: jal         0x600009D0
    // 0x60007DE0: nop

    ovl_stage_world8_9D0(rdram, ctx);
        goto after_17;
    // 0x60007DE0: nop

    after_17:
    // 0x60007DE4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x60007DE8: bne         $s1, $s2, L_60007D54
    if (ctx->r17 != ctx->r18) {
        // 0x60007DEC: nop
    
            goto L_60007D54;
    }
    // 0x60007DEC: nop

L_60007DF0:
    // 0x60007DF0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60007DF4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x60007DF8: jal         0x6000121C
    // 0x60007DFC: lui         $a2, 0x4316
    ctx->r6 = S32(0X4316 << 16);
    ovl_stage_world8_121C(rdram, ctx);
        goto after_18;
    // 0x60007DFC: lui         $a2, 0x4316
    ctx->r6 = S32(0X4316 << 16);
    after_18:
    // 0x60007E00: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60007E04: jal         0x600011AC
    // 0x60007E08: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world8_11AC(rdram, ctx);
        goto after_19;
    // 0x60007E08: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_19:
    // 0x60007E0C: jal         0x60000A78
    // 0x60007E10: nop

    ovl_stage_world8_A78(rdram, ctx);
        goto after_20;
    // 0x60007E10: nop

    after_20:
    // 0x60007E14: lw          $v0, 0x6C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X6C);
    // 0x60007E18: lui         $at, 0xFFFE
    ctx->r1 = S32(0XFFFE << 16);
    // 0x60007E1C: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x60007E20: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x60007E24: and         $t3, $t2, $at
    ctx->r11 = ctx->r10 & ctx->r1;
    // 0x60007E28: addiu       $a0, $zero, 0x11F
    ctx->r4 = ADD32(0, 0X11F);
    // 0x60007E2C: jal         0x60000BA4
    // 0x60007E30: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    ovl_stage_world8_BA4(rdram, ctx);
        goto after_21;
    // 0x60007E30: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    after_21:
    // 0x60007E34: lw          $t4, 0x6C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X6C);
    // 0x60007E38: nop

    // 0x60007E3C: lw          $t5, 0xC($t4)
    ctx->r13 = MEM_W(ctx->r12, 0XC);
    // 0x60007E40: nop

    // 0x60007E44: bne         $t5, $zero, L_60007F58
    if (ctx->r13 != 0) {
        // 0x60007E48: nop
    
            goto L_60007F58;
    }
    // 0x60007E48: nop

    // 0x60007E4C: jal         0x60000BB0
    // 0x60007E50: addiu       $a0, $zero, 0x194
    ctx->r4 = ADD32(0, 0X194);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_22;
    // 0x60007E50: addiu       $a0, $zero, 0x194
    ctx->r4 = ADD32(0, 0X194);
    after_22:
    // 0x60007E54: bne         $v0, $zero, L_60007F58
    if (ctx->r2 != 0) {
        // 0x60007E58: nop
    
            goto L_60007F58;
    }
    // 0x60007E58: nop

    // 0x60007E5C: jal         0x60000BB0
    // 0x60007E60: addiu       $a0, $zero, 0x132
    ctx->r4 = ADD32(0, 0X132);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_23;
    // 0x60007E60: addiu       $a0, $zero, 0x132
    ctx->r4 = ADD32(0, 0X132);
    after_23:
    // 0x60007E64: bne         $v0, $zero, L_60007F58
    if (ctx->r2 != 0) {
        // 0x60007E68: nop
    
            goto L_60007F58;
    }
    // 0x60007E68: nop

    // 0x60007E6C: jal         0x60000A60
    // 0x60007E70: addiu       $a0, $zero, 0xAE1
    ctx->r4 = ADD32(0, 0XAE1);
    ovl_stage_world8_A60(rdram, ctx);
        goto after_24;
    // 0x60007E70: addiu       $a0, $zero, 0xAE1
    ctx->r4 = ADD32(0, 0XAE1);
    after_24:
    // 0x60007E74: jal         0x60001064
    // 0x60007E78: nop

    ovl_stage_world8_1064(rdram, ctx);
        goto after_25;
    // 0x60007E78: nop

    after_25:
    // 0x60007E7C: jal         0x600007E4
    // 0x60007E80: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world8_7E4(rdram, ctx);
        goto after_26;
    // 0x60007E80: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_26:
    // 0x60007E84: addiu       $t6, $zero, 0xE
    ctx->r14 = ADD32(0, 0XE);
    // 0x60007E88: sw          $t6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r14;
    // 0x60007E8C: lw          $t7, 0x30($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X30);
    // 0x60007E90: addiu       $s0, $sp, 0x4C
    ctx->r16 = ADD32(ctx->r29, 0X4C);
    // 0x60007E94: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x60007E98: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60007E9C: jal         0x600007F0
    // 0x60007EA0: sw          $t7, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r15;
    ovl_stage_world8_7F0(rdram, ctx);
        goto after_27;
    // 0x60007EA0: sw          $t7, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r15;
    after_27:
    // 0x60007EA4: addiu       $t8, $zero, 0x6
    ctx->r24 = ADD32(0, 0X6);
    // 0x60007EA8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x60007EAC: sw          $t8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r24;
    // 0x60007EB0: sw          $t9, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r25;
    // 0x60007EB4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60007EB8: jal         0x600007F0
    // 0x60007EBC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_stage_world8_7F0(rdram, ctx);
        goto after_28;
    // 0x60007EBC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_28:
    // 0x60007EC0: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
    // 0x60007EC4: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x60007EC8: sw          $t0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r8;
    // 0x60007ECC: sw          $t1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r9;
    // 0x60007ED0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60007ED4: jal         0x600007F0
    // 0x60007ED8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_stage_world8_7F0(rdram, ctx);
        goto after_29;
    // 0x60007ED8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_29:
    // 0x60007EDC: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x60007EE0: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x60007EE4: sw          $t2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r10;
    // 0x60007EE8: sw          $t3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r11;
    // 0x60007EEC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60007EF0: jal         0x600007F0
    // 0x60007EF4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_stage_world8_7F0(rdram, ctx);
        goto after_30;
    // 0x60007EF4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_30:
    // 0x60007EF8: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x60007EFC: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x60007F00: sw          $t4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r12;
    // 0x60007F04: sw          $t5, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r13;
    // 0x60007F08: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60007F0C: jal         0x600007F0
    // 0x60007F10: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_stage_world8_7F0(rdram, ctx);
        goto after_31;
    // 0x60007F10: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_31:
    // 0x60007F14: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x60007F18: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    // 0x60007F1C: sw          $t6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r14;
    // 0x60007F20: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60007F24: jal         0x600007F0
    // 0x60007F28: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_stage_world8_7F0(rdram, ctx);
        goto after_32;
    // 0x60007F28: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_32:
    // 0x60007F2C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x60007F30: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x60007F34: sw          $t7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r15;
    // 0x60007F38: sw          $t8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r24;
    // 0x60007F3C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60007F40: jal         0x600007F0
    // 0x60007F44: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_stage_world8_7F0(rdram, ctx);
        goto after_33;
    // 0x60007F44: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_33:
    // 0x60007F48: jal         0x600009C4
    // 0x60007F4C: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_stage_world8_9C4(rdram, ctx);
        goto after_34;
    // 0x60007F4C: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_34:
    // 0x60007F50: jal         0x60000B98
    // 0x60007F54: addiu       $a0, $zero, 0x132
    ctx->r4 = ADD32(0, 0X132);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_35;
    // 0x60007F54: addiu       $a0, $zero, 0x132
    ctx->r4 = ADD32(0, 0X132);
    after_35:
L_60007F58:
    // 0x60007F58: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60007F5C: lwc1        $f20, -0x6998($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X6998);
    // 0x60007F60: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60007F64: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x60007F68: jal         0x60004178
    // 0x60007F6C: nop

    ovl_stage_world8_4178(rdram, ctx);
        goto after_36;
    // 0x60007F6C: nop

    after_36:
    // 0x60007F70: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x60007F74: jal         0x60004178
    // 0x60007F78: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world8_4178(rdram, ctx);
        goto after_37;
    // 0x60007F78: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_37:
    // 0x60007F7C: jal         0x600009AC
    // 0x60007F80: nop

    ovl_stage_world8_9AC(rdram, ctx);
        goto after_38;
    // 0x60007F80: nop

    after_38:
    // 0x60007F84: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x60007F88: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x60007F8C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x60007F90: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x60007F94: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x60007F98: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x60007F9C: jr          $ra
    // 0x60007FA0: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x60007FA0: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void ovl_stage_world8_7FA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60007FA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60007FA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60007FAC: jal         0x60000C1C
    // 0x60007FB0: nop

    ovl_stage_world8_C1C(rdram, ctx);
        goto after_0;
    // 0x60007FB0: nop

    after_0:
    // 0x60007FB4: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x60007FB8: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x60007FBC: beq         $v1, $zero, L_60007FCC
    if (ctx->r3 == 0) {
        // 0x60007FC0: nop
    
            goto L_60007FCC;
    }
    // 0x60007FC0: nop

    // 0x60007FC4: bne         $v1, $at, L_60008008
    if (ctx->r3 != ctx->r1) {
        // 0x60007FC8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60008008;
    }
    // 0x60007FC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60007FCC:
    // 0x60007FCC: jal         0x60000DE4
    // 0x60007FD0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world8_DE4(rdram, ctx);
        goto after_1;
    // 0x60007FD0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x60007FD4: jal         0x60000CC4
    // 0x60007FD8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_stage_world8_CC4(rdram, ctx);
        goto after_2;
    // 0x60007FD8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x60007FDC: jal         0x60000A6C
    // 0x60007FE0: nop

    ovl_stage_world8_A6C(rdram, ctx);
        goto after_3;
    // 0x60007FE0: nop

    after_3:
    // 0x60007FE4: jal         0x60000B98
    // 0x60007FE8: addiu       $a0, $zero, 0x11F
    ctx->r4 = ADD32(0, 0X11F);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_4;
    // 0x60007FE8: addiu       $a0, $zero, 0x11F
    ctx->r4 = ADD32(0, 0X11F);
    after_4:
    // 0x60007FEC: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60007FF0: addiu       $a0, $a0, 0x7C64
    ctx->r4 = ADD32(ctx->r4, 0X7C64);
    // 0x60007FF4: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60007FF8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60007FFC: jal         0x60000994
    // 0x60008000: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world8_994(rdram, ctx);
        goto after_5;
    // 0x60008000: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
    // 0x60008004: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60008008:
    // 0x60008008: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x6000800C: jr          $ra
    // 0x60008010: nop

    return;
    // 0x60008010: nop

;}
RECOMP_FUNC void ovl_stage_world8_8014(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60008014: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60008018: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x6000801C: jal         0x60000BB0
    // 0x60008020: addiu       $a0, $zero, 0x194
    ctx->r4 = ADD32(0, 0X194);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_0;
    // 0x60008020: addiu       $a0, $zero, 0x194
    ctx->r4 = ADD32(0, 0X194);
    after_0:
    // 0x60008024: bne         $v0, $zero, L_60008048
    if (ctx->r2 != 0) {
        // 0x60008028: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60008048;
    }
    // 0x60008028: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000802C: jal         0x60000BB0
    // 0x60008030: addiu       $a0, $zero, 0x132
    ctx->r4 = ADD32(0, 0X132);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_1;
    // 0x60008030: addiu       $a0, $zero, 0x132
    ctx->r4 = ADD32(0, 0X132);
    after_1:
    // 0x60008034: beq         $v0, $zero, L_60008048
    if (ctx->r2 == 0) {
        // 0x60008038: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60008048;
    }
    // 0x60008038: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000803C: jal         0x60000B98
    // 0x60008040: addiu       $a0, $zero, 0x194
    ctx->r4 = ADD32(0, 0X194);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_2;
    // 0x60008040: addiu       $a0, $zero, 0x194
    ctx->r4 = ADD32(0, 0X194);
    after_2:
    // 0x60008044: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60008048:
    // 0x60008048: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x6000804C: jr          $ra
    // 0x60008050: nop

    return;
    // 0x60008050: nop

;}
RECOMP_FUNC void ovl_stage_world8_8054(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60008054: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x60008058: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x6000805C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x60008060: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x60008064: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x60008068: jal         0x60000C1C
    // 0x6000806C: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    ovl_stage_world8_C1C(rdram, ctx);
        goto after_0;
    // 0x6000806C: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x60008070: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x60008074: jal         0x60000E74
    // 0x60008078: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    ovl_stage_world8_E74(rdram, ctx);
        goto after_1;
    // 0x60008078: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_1:
    // 0x6000807C: addiu       $s1, $sp, 0x40
    ctx->r17 = ADD32(ctx->r29, 0X40);
    // 0x60008080: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x60008084: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60008088: jal         0x600006C4
    // 0x6000808C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_2;
    // 0x6000808C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_2:
    // 0x60008090: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x60008094: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x60008098: ori         $t7, $t6, 0x4
    ctx->r15 = ctx->r14 | 0X4;
    // 0x6000809C: jal         0x60000E74
    // 0x600080A0: sw          $t7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r15;
    ovl_stage_world8_E74(rdram, ctx);
        goto after_3;
    // 0x600080A0: sw          $t7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r15;
    after_3:
    // 0x600080A4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600080A8: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x600080AC: jal         0x600006C4
    // 0x600080B0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_4;
    // 0x600080B0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_4:
    // 0x600080B4: jal         0x60000A6C
    // 0x600080B8: nop

    ovl_stage_world8_A6C(rdram, ctx);
        goto after_5;
    // 0x600080B8: nop

    after_5:
    // 0x600080BC: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x600080C0: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x600080C4: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x600080C8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600080CC: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x600080D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x600080D4: jal         0x600011AC
    // 0x600080D8: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    ovl_stage_world8_11AC(rdram, ctx);
        goto after_6;
    // 0x600080D8: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    after_6:
    // 0x600080DC: lui         $t0, 0x6001
    ctx->r8 = S32(0X6001 << 16);
    // 0x600080E0: lw          $t0, -0x6714($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X6714);
    // 0x600080E4: nop

    // 0x600080E8: beq         $t0, $zero, L_6000810C
    if (ctx->r8 == 0) {
        // 0x600080EC: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_6000810C;
    }
    // 0x600080EC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600080F0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x600080F4: jal         0x6000121C
    // 0x600080F8: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    ovl_stage_world8_121C(rdram, ctx);
        goto after_7;
    // 0x600080F8: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    after_7:
    // 0x600080FC: lui         $at, 0xC396
    ctx->r1 = S32(0XC396 << 16);
    // 0x60008100: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x60008104: b           L_60008118
    // 0x60008108: nop

        goto L_60008118;
    // 0x60008108: nop

L_6000810C:
    // 0x6000810C: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x60008110: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x60008114: nop

L_60008118:
    // 0x60008118: jal         0x600009D0
    // 0x6000811C: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    ovl_stage_world8_9D0(rdram, ctx);
        goto after_8;
    // 0x6000811C: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    after_8:
    // 0x60008120: jal         0x60000244
    // 0x60008124: addiu       $a0, $zero, 0x1D3
    ctx->r4 = ADD32(0, 0X1D3);
    ovl_stage_world8_244(rdram, ctx);
        goto after_9;
    // 0x60008124: addiu       $a0, $zero, 0x1D3
    ctx->r4 = ADD32(0, 0X1D3);
    after_9:
    // 0x60008128: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x6000812C: lwc1        $f0, 0x38($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X38);
    // 0x60008130: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60008134: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60008138: div.s       $f20, $f0, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = DIV_S(ctx->f0.fl, ctx->f4.fl);
L_6000813C:
    // 0x6000813C: jal         0x60000DE4
    // 0x60008140: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world8_DE4(rdram, ctx);
        goto after_10;
    // 0x60008140: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_10:
    // 0x60008144: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60008148: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x6000814C: jal         0x600006C4
    // 0x60008150: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_11;
    // 0x60008150: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_11:
    // 0x60008154: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x60008158: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x6000815C: lwc1        $f6, 0x30($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X30);
    // 0x60008160: nop

    // 0x60008164: add.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f20.fl;
    // 0x60008168: jal         0x60000DE4
    // 0x6000816C: swc1        $f8, 0x30($t1)
    MEM_W(0X30, ctx->r9) = ctx->f8.u32l;
    ovl_stage_world8_DE4(rdram, ctx);
        goto after_12;
    // 0x6000816C: swc1        $f8, 0x30($t1)
    MEM_W(0X30, ctx->r9) = ctx->f8.u32l;
    after_12:
    // 0x60008170: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60008174: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x60008178: jal         0x600006C4
    // 0x6000817C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_13;
    // 0x6000817C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_13:
    // 0x60008180: jal         0x60000E74
    // 0x60008184: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world8_E74(rdram, ctx);
        goto after_14;
    // 0x60008184: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_14:
    // 0x60008188: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x6000818C: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x60008190: jal         0x600006C4
    // 0x60008194: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_15;
    // 0x60008194: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_15:
    // 0x60008198: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x6000819C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x600081A0: lwc1        $f10, 0x30($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X30);
    // 0x600081A4: nop

    // 0x600081A8: add.s       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f20.fl;
    // 0x600081AC: jal         0x60000E74
    // 0x600081B0: swc1        $f16, 0x30($t2)
    MEM_W(0X30, ctx->r10) = ctx->f16.u32l;
    ovl_stage_world8_E74(rdram, ctx);
        goto after_16;
    // 0x600081B0: swc1        $f16, 0x30($t2)
    MEM_W(0X30, ctx->r10) = ctx->f16.u32l;
    after_16:
    // 0x600081B4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600081B8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x600081BC: jal         0x600006C4
    // 0x600081C0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_17;
    // 0x600081C0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_17:
    // 0x600081C4: jal         0x600009D0
    // 0x600081C8: nop

    ovl_stage_world8_9D0(rdram, ctx);
        goto after_18;
    // 0x600081C8: nop

    after_18:
    // 0x600081CC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x600081D0: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x600081D4: bne         $s0, $at, L_6000813C
    if (ctx->r16 != ctx->r1) {
        // 0x600081D8: nop
    
            goto L_6000813C;
    }
    // 0x600081D8: nop

    // 0x600081DC: lui         $t3, 0x6001
    ctx->r11 = S32(0X6001 << 16);
    // 0x600081E0: lw          $t3, -0x6714($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X6714);
    // 0x600081E4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600081E8: bne         $t3, $zero, L_600081F8
    if (ctx->r11 != 0) {
        // 0x600081EC: lui         $a1, 0x4334
        ctx->r5 = S32(0X4334 << 16);
            goto L_600081F8;
    }
    // 0x600081EC: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    // 0x600081F0: jal         0x6000121C
    // 0x600081F4: lui         $a2, 0x4316
    ctx->r6 = S32(0X4316 << 16);
    ovl_stage_world8_121C(rdram, ctx);
        goto after_19;
    // 0x600081F4: lui         $a2, 0x4316
    ctx->r6 = S32(0X4316 << 16);
    after_19:
L_600081F8:
    // 0x600081F8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600081FC: jal         0x600011AC
    // 0x60008200: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world8_11AC(rdram, ctx);
        goto after_20;
    // 0x60008200: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_20:
    // 0x60008204: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60008208: lwc1        $f20, -0x6994($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X6994);
    // 0x6000820C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60008210: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x60008214: jal         0x60004178
    // 0x60008218: nop

    ovl_stage_world8_4178(rdram, ctx);
        goto after_21;
    // 0x60008218: nop

    after_21:
    // 0x6000821C: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x60008220: jal         0x60004178
    // 0x60008224: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world8_4178(rdram, ctx);
        goto after_22;
    // 0x60008224: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_22:
    // 0x60008228: jal         0x60000A78
    // 0x6000822C: nop

    ovl_stage_world8_A78(rdram, ctx);
        goto after_23;
    // 0x6000822C: nop

    after_23:
    // 0x60008230: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x60008234: lui         $at, 0xFFFE
    ctx->r1 = S32(0XFFFE << 16);
    // 0x60008238: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x6000823C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x60008240: and         $t6, $t5, $at
    ctx->r14 = ctx->r13 & ctx->r1;
    // 0x60008244: lui         $t7, 0x6001
    ctx->r15 = S32(0X6001 << 16);
    // 0x60008248: sw          $t6, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r14;
    // 0x6000824C: lw          $t7, -0x6714($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X6714);
    // 0x60008250: addiu       $a0, $zero, 0x8B9
    ctx->r4 = ADD32(0, 0X8B9);
    // 0x60008254: beq         $t7, $zero, L_6000826C
    if (ctx->r15 == 0) {
        // 0x60008258: addiu       $a1, $zero, 0x8
        ctx->r5 = ADD32(0, 0X8);
            goto L_6000826C;
    }
    // 0x60008258: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x6000825C: jal         0x60000C10
    // 0x60008260: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_stage_world8_C10(rdram, ctx);
        goto after_24;
    // 0x60008260: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_24:
    // 0x60008264: b           L_600082A4
    // 0x60008268: nop

        goto L_600082A4;
    // 0x60008268: nop

L_6000826C:
    // 0x6000826C: jal         0x60000BA4
    // 0x60008270: addiu       $a0, $zero, 0x120
    ctx->r4 = ADD32(0, 0X120);
    ovl_stage_world8_BA4(rdram, ctx);
        goto after_25;
    // 0x60008270: addiu       $a0, $zero, 0x120
    ctx->r4 = ADD32(0, 0X120);
    after_25:
    // 0x60008274: jal         0x60000A6C
    // 0x60008278: nop

    ovl_stage_world8_A6C(rdram, ctx);
        goto after_26;
    // 0x60008278: nop

    after_26:
    // 0x6000827C: jal         0x60000B98
    // 0x60008280: addiu       $a0, $zero, 0x196
    ctx->r4 = ADD32(0, 0X196);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_27;
    // 0x60008280: addiu       $a0, $zero, 0x196
    ctx->r4 = ADD32(0, 0X196);
    after_27:
    // 0x60008284: jal         0x60000A60
    // 0x60008288: addiu       $a0, $zero, 0xAE2
    ctx->r4 = ADD32(0, 0XAE2);
    ovl_stage_world8_A60(rdram, ctx);
        goto after_28;
    // 0x60008288: addiu       $a0, $zero, 0xAE2
    ctx->r4 = ADD32(0, 0XAE2);
    after_28:
    // 0x6000828C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60008290: addiu       $a0, $a0, 0x3788
    ctx->r4 = ADD32(ctx->r4, 0X3788);
    // 0x60008294: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60008298: addiu       $a2, $zero, 0x2400
    ctx->r6 = ADD32(0, 0X2400);
    // 0x6000829C: jal         0x60000994
    // 0x600082A0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world8_994(rdram, ctx);
        goto after_29;
    // 0x600082A0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_29:
L_600082A4:
    // 0x600082A4: jal         0x600009AC
    // 0x600082A8: nop

    ovl_stage_world8_9AC(rdram, ctx);
        goto after_30;
    // 0x600082A8: nop

    after_30:
    // 0x600082AC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x600082B0: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x600082B4: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x600082B8: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x600082BC: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x600082C0: jr          $ra
    // 0x600082C4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x600082C4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_stage_world8_82C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600082C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600082CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600082D0: jal         0x60000C1C
    // 0x600082D4: nop

    ovl_stage_world8_C1C(rdram, ctx);
        goto after_0;
    // 0x600082D4: nop

    after_0:
    // 0x600082D8: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x600082DC: nop

    // 0x600082E0: sll         $t7, $t6, 13
    ctx->r15 = S32(ctx->r14 << 13);
    // 0x600082E4: bltz        $t7, L_60008340
    if (SIGNED(ctx->r15) < 0) {
        // 0x600082E8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60008340;
    }
    // 0x600082E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600082EC: lw          $t8, 0xC($v0)
    ctx->r24 = MEM_W(ctx->r2, 0XC);
    // 0x600082F0: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x600082F4: beq         $t8, $at, L_60008340
    if (ctx->r24 == ctx->r1) {
        // 0x600082F8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60008340;
    }
    // 0x600082F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600082FC: jal         0x60000DE4
    // 0x60008300: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world8_DE4(rdram, ctx);
        goto after_1;
    // 0x60008300: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x60008304: jal         0x60000CC4
    // 0x60008308: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_stage_world8_CC4(rdram, ctx);
        goto after_2;
    // 0x60008308: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x6000830C: jal         0x60000A6C
    // 0x60008310: nop

    ovl_stage_world8_A6C(rdram, ctx);
        goto after_3;
    // 0x60008310: nop

    after_3:
    // 0x60008314: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60008318: sw          $zero, -0x6714($at)
    MEM_W(-0X6714, ctx->r1) = 0;
    // 0x6000831C: jal         0x60000B98
    // 0x60008320: addiu       $a0, $zero, 0x120
    ctx->r4 = ADD32(0, 0X120);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_4;
    // 0x60008320: addiu       $a0, $zero, 0x120
    ctx->r4 = ADD32(0, 0X120);
    after_4:
    // 0x60008324: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60008328: addiu       $a0, $a0, -0x7FAC
    ctx->r4 = ADD32(ctx->r4, -0X7FAC);
    // 0x6000832C: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60008330: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60008334: jal         0x60000994
    // 0x60008338: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world8_994(rdram, ctx);
        goto after_5;
    // 0x60008338: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
    // 0x6000833C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60008340:
    // 0x60008340: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60008344: jr          $ra
    // 0x60008348: nop

    return;
    // 0x60008348: nop

;}
RECOMP_FUNC void ovl_stage_world8_834C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000834C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60008350: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60008354: jal         0x60000BB0
    // 0x60008358: addiu       $a0, $zero, 0x120
    ctx->r4 = ADD32(0, 0X120);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_0;
    // 0x60008358: addiu       $a0, $zero, 0x120
    ctx->r4 = ADD32(0, 0X120);
    after_0:
    // 0x6000835C: bne         $v0, $zero, L_600083AC
    if (ctx->r2 != 0) {
        // 0x60008360: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600083AC;
    }
    // 0x60008360: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60008364: jal         0x60000DE4
    // 0x60008368: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world8_DE4(rdram, ctx);
        goto after_1;
    // 0x60008368: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x6000836C: jal         0x60000CC4
    // 0x60008370: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_stage_world8_CC4(rdram, ctx);
        goto after_2;
    // 0x60008370: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x60008374: jal         0x60000A6C
    // 0x60008378: nop

    ovl_stage_world8_A6C(rdram, ctx);
        goto after_3;
    // 0x60008378: nop

    after_3:
    // 0x6000837C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x60008380: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60008384: sw          $t6, -0x6714($at)
    MEM_W(-0X6714, ctx->r1) = ctx->r14;
    // 0x60008388: jal         0x60000B98
    // 0x6000838C: addiu       $a0, $zero, 0x120
    ctx->r4 = ADD32(0, 0X120);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_4;
    // 0x6000838C: addiu       $a0, $zero, 0x120
    ctx->r4 = ADD32(0, 0X120);
    after_4:
    // 0x60008390: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60008394: addiu       $a0, $a0, -0x7FAC
    ctx->r4 = ADD32(ctx->r4, -0X7FAC);
    // 0x60008398: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x6000839C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x600083A0: jal         0x60000994
    // 0x600083A4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world8_994(rdram, ctx);
        goto after_5;
    // 0x600083A4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
    // 0x600083A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600083AC:
    // 0x600083AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600083B0: jr          $ra
    // 0x600083B4: nop

    return;
    // 0x600083B4: nop

;}
RECOMP_FUNC void ovl_stage_world8_83B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600083B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600083BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600083C0: jal         0x60000A60
    // 0x600083C4: addiu       $a0, $zero, 0xAA3
    ctx->r4 = ADD32(0, 0XAA3);
    ovl_stage_world8_A60(rdram, ctx);
        goto after_0;
    // 0x600083C4: addiu       $a0, $zero, 0xAA3
    ctx->r4 = ADD32(0, 0XAA3);
    after_0:
    // 0x600083C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600083CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600083D0: jr          $ra
    // 0x600083D4: nop

    return;
    // 0x600083D4: nop

;}
RECOMP_FUNC void ovl_stage_world8_83D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600083D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600083DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600083E0: jal         0x60000BB0
    // 0x600083E4: addiu       $a0, $zero, 0x101
    ctx->r4 = ADD32(0, 0X101);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_0;
    // 0x600083E4: addiu       $a0, $zero, 0x101
    ctx->r4 = ADD32(0, 0X101);
    after_0:
    // 0x600083E8: bne         $v0, $zero, L_6000840C
    if (ctx->r2 != 0) {
        // 0x600083EC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_6000840C;
    }
    // 0x600083EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600083F0: jal         0x60000BA4
    // 0x600083F4: addiu       $a0, $zero, 0x1A3
    ctx->r4 = ADD32(0, 0X1A3);
    ovl_stage_world8_BA4(rdram, ctx);
        goto after_1;
    // 0x600083F4: addiu       $a0, $zero, 0x1A3
    ctx->r4 = ADD32(0, 0X1A3);
    after_1:
    // 0x600083F8: jal         0x60000B98
    // 0x600083FC: addiu       $a0, $zero, 0x101
    ctx->r4 = ADD32(0, 0X101);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_2;
    // 0x600083FC: addiu       $a0, $zero, 0x101
    ctx->r4 = ADD32(0, 0X101);
    after_2:
    // 0x60008400: jal         0x60000A60
    // 0x60008404: addiu       $a0, $zero, 0xAA4
    ctx->r4 = ADD32(0, 0XAA4);
    ovl_stage_world8_A60(rdram, ctx);
        goto after_3;
    // 0x60008404: addiu       $a0, $zero, 0xAA4
    ctx->r4 = ADD32(0, 0XAA4);
    after_3:
    // 0x60008408: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000840C:
    // 0x6000840C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60008410: jr          $ra
    // 0x60008414: nop

    return;
    // 0x60008414: nop

;}
RECOMP_FUNC void ovl_stage_world8_8418(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60008418: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x6000841C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60008420: jal         0x60000BB0
    // 0x60008424: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_0;
    // 0x60008424: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    after_0:
    // 0x60008428: bne         $v0, $zero, L_60008444
    if (ctx->r2 != 0) {
        // 0x6000842C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60008444;
    }
    // 0x6000842C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60008430: jal         0x60000B98
    // 0x60008434: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_1;
    // 0x60008434: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    after_1:
    // 0x60008438: jal         0x60000A60
    // 0x6000843C: addiu       $a0, $zero, 0xAA6
    ctx->r4 = ADD32(0, 0XAA6);
    ovl_stage_world8_A60(rdram, ctx);
        goto after_2;
    // 0x6000843C: addiu       $a0, $zero, 0xAA6
    ctx->r4 = ADD32(0, 0XAA6);
    after_2:
    // 0x60008440: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60008444:
    // 0x60008444: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60008448: jr          $ra
    // 0x6000844C: nop

    return;
    // 0x6000844C: nop

;}
RECOMP_FUNC void ovl_stage_world8_8450(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60008450: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60008454: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60008458: jal         0x600009C4
    // 0x6000845C: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_stage_world8_9C4(rdram, ctx);
        goto after_0;
    // 0x6000845C: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_0:
    // 0x60008460: jal         0x60000A60
    // 0x60008464: addiu       $a0, $zero, 0xAA7
    ctx->r4 = ADD32(0, 0XAA7);
    ovl_stage_world8_A60(rdram, ctx);
        goto after_1;
    // 0x60008464: addiu       $a0, $zero, 0xAA7
    ctx->r4 = ADD32(0, 0XAA7);
    after_1:
    // 0x60008468: jal         0x600009AC
    // 0x6000846C: nop

    ovl_stage_world8_9AC(rdram, ctx);
        goto after_2;
    // 0x6000846C: nop

    after_2:
    // 0x60008470: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60008474: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60008478: jr          $ra
    // 0x6000847C: nop

    return;
    // 0x6000847C: nop

;}
RECOMP_FUNC void ovl_stage_world8_8480(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60008480: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60008484: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60008488: jal         0x60000BB0
    // 0x6000848C: addiu       $a0, $zero, 0x18A
    ctx->r4 = ADD32(0, 0X18A);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_0;
    // 0x6000848C: addiu       $a0, $zero, 0x18A
    ctx->r4 = ADD32(0, 0X18A);
    after_0:
    // 0x60008490: bne         $v0, $zero, L_600084F8
    if (ctx->r2 != 0) {
        // 0x60008494: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600084F8;
    }
    // 0x60008494: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60008498: jal         0x60000BB0
    // 0x6000849C: addiu       $a0, $zero, 0x134
    ctx->r4 = ADD32(0, 0X134);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_1;
    // 0x6000849C: addiu       $a0, $zero, 0x134
    ctx->r4 = ADD32(0, 0X134);
    after_1:
    // 0x600084A0: bne         $v0, $zero, L_600084F8
    if (ctx->r2 != 0) {
        // 0x600084A4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600084F8;
    }
    // 0x600084A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600084A8: jal         0x60000B98
    // 0x600084AC: addiu       $a0, $zero, 0x18A
    ctx->r4 = ADD32(0, 0X18A);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_2;
    // 0x600084AC: addiu       $a0, $zero, 0x18A
    ctx->r4 = ADD32(0, 0X18A);
    after_2:
    // 0x600084B0: jal         0x60000B98
    // 0x600084B4: addiu       $a0, $zero, 0x133
    ctx->r4 = ADD32(0, 0X133);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_3;
    // 0x600084B4: addiu       $a0, $zero, 0x133
    ctx->r4 = ADD32(0, 0X133);
    after_3:
    // 0x600084B8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x600084BC: jal         0x60000E68
    // 0x600084C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world8_E68(rdram, ctx);
        goto after_4;
    // 0x600084C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x600084C4: jal         0x60000DE4
    // 0x600084C8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world8_DE4(rdram, ctx);
        goto after_5;
    // 0x600084C8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_5:
    // 0x600084CC: jal         0x60000CC4
    // 0x600084D0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_stage_world8_CC4(rdram, ctx);
        goto after_6;
    // 0x600084D0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_6:
    // 0x600084D4: jal         0x60000A6C
    // 0x600084D8: nop

    ovl_stage_world8_A6C(rdram, ctx);
        goto after_7;
    // 0x600084D8: nop

    after_7:
    // 0x600084DC: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x600084E0: addiu       $a0, $a0, -0x7BB0
    ctx->r4 = ADD32(ctx->r4, -0X7BB0);
    // 0x600084E4: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x600084E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x600084EC: jal         0x60000994
    // 0x600084F0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world8_994(rdram, ctx);
        goto after_8;
    // 0x600084F0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_8:
    // 0x600084F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600084F8:
    // 0x600084F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600084FC: jr          $ra
    // 0x60008500: nop

    return;
    // 0x60008500: nop

;}
RECOMP_FUNC void ovl_stage_world8_8504(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60008504: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x60008508: swc1        $f24, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f24.u32l;
    // 0x6000850C: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60008510: lwc1        $f24, -0x6990($at)
    ctx->f24.u32l = MEM_W(ctx->r1, -0X6990);
    // 0x60008514: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x60008518: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x6000851C: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x60008520: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x60008524: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x60008528: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x6000852C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x60008530: swc1        $f25, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x60008534: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x60008538: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x6000853C: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
L_60008540:
    // 0x60008540: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x60008544: mfc1        $a3, $f24
    ctx->r7 = (int32_t)ctx->f24.u32l;
    // 0x60008548: jal         0x60000274
    // 0x6000854C: addiu       $a0, $zero, 0x1F4
    ctx->r4 = ADD32(0, 0X1F4);
    ovl_stage_world8_274(rdram, ctx);
        goto after_0;
    // 0x6000854C: addiu       $a0, $zero, 0x1F4
    ctx->r4 = ADD32(0, 0X1F4);
    after_0:
    // 0x60008550: jal         0x600009C4
    // 0x60008554: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    ovl_stage_world8_9C4(rdram, ctx);
        goto after_1;
    // 0x60008554: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_1:
    // 0x60008558: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x6000855C: mfc1        $a2, $f22
    ctx->r6 = (int32_t)ctx->f22.u32l;
    // 0x60008560: mfc1        $a3, $f24
    ctx->r7 = (int32_t)ctx->f24.u32l;
    // 0x60008564: jal         0x60000274
    // 0x60008568: addiu       $a0, $zero, 0x1F5
    ctx->r4 = ADD32(0, 0X1F5);
    ovl_stage_world8_274(rdram, ctx);
        goto after_2;
    // 0x60008568: addiu       $a0, $zero, 0x1F5
    ctx->r4 = ADD32(0, 0X1F5);
    after_2:
    // 0x6000856C: jal         0x600009C4
    // 0x60008570: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    ovl_stage_world8_9C4(rdram, ctx);
        goto after_3;
    // 0x60008570: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_3:
    // 0x60008574: b           L_60008540
    // 0x60008578: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
        goto L_60008540;
    // 0x60008578: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x6000857C: nop

    // 0x60008580: nop

    // 0x60008584: nop

    // 0x60008588: nop

    // 0x6000858C: nop

    // 0x60008590: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x60008594: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x60008598: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x6000859C: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x600085A0: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x600085A4: lwc1        $f25, 0x20($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x600085A8: lwc1        $f24, 0x24($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X24);
    // 0x600085AC: jr          $ra
    // 0x600085B0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x600085B0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_stage_world8_85B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600085B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600085B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600085BC: jal         0x60000C1C
    // 0x600085C0: nop

    ovl_stage_world8_C1C(rdram, ctx);
        goto after_0;
    // 0x600085C0: nop

    after_0:
    // 0x600085C4: jal         0x60000BB0
    // 0x600085C8: addiu       $a0, $zero, 0x18E
    ctx->r4 = ADD32(0, 0X18E);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_1;
    // 0x600085C8: addiu       $a0, $zero, 0x18E
    ctx->r4 = ADD32(0, 0X18E);
    after_1:
    // 0x600085CC: beq         $v0, $zero, L_60008624
    if (ctx->r2 == 0) {
        // 0x600085D0: nop
    
            goto L_60008624;
    }
    // 0x600085D0: nop

    // 0x600085D4: jal         0x60000EEC
    // 0x600085D8: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    ovl_stage_world8_EEC(rdram, ctx);
        goto after_2;
    // 0x600085D8: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_2:
    // 0x600085DC: jal         0x60000EEC
    // 0x600085E0: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    ovl_stage_world8_EEC(rdram, ctx);
        goto after_3;
    // 0x600085E0: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    after_3:
    // 0x600085E4: jal         0x60000EEC
    // 0x600085E8: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    ovl_stage_world8_EEC(rdram, ctx);
        goto after_4;
    // 0x600085E8: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    after_4:
    // 0x600085EC: jal         0x60000BB0
    // 0x600085F0: addiu       $a0, $zero, 0x1A1
    ctx->r4 = ADD32(0, 0X1A1);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_5;
    // 0x600085F0: addiu       $a0, $zero, 0x1A1
    ctx->r4 = ADD32(0, 0X1A1);
    after_5:
    // 0x600085F4: beq         $v0, $zero, L_6000863C
    if (ctx->r2 == 0) {
        // 0x600085F8: nop
    
            goto L_6000863C;
    }
    // 0x600085F8: nop

    // 0x600085FC: jal         0x60000BA4
    // 0x60008600: addiu       $a0, $zero, 0x1A1
    ctx->r4 = ADD32(0, 0X1A1);
    ovl_stage_world8_BA4(rdram, ctx);
        goto after_6;
    // 0x60008600: addiu       $a0, $zero, 0x1A1
    ctx->r4 = ADD32(0, 0X1A1);
    after_6:
    // 0x60008604: jal         0x60000EEC
    // 0x60008608: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    ovl_stage_world8_EEC(rdram, ctx);
        goto after_7;
    // 0x60008608: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_7:
    // 0x6000860C: jal         0x60000EEC
    // 0x60008610: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    ovl_stage_world8_EEC(rdram, ctx);
        goto after_8;
    // 0x60008610: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_8:
    // 0x60008614: jal         0x60000EEC
    // 0x60008618: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    ovl_stage_world8_EEC(rdram, ctx);
        goto after_9;
    // 0x60008618: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_9:
    // 0x6000861C: b           L_6000863C
    // 0x60008620: nop

        goto L_6000863C;
    // 0x60008620: nop

L_60008624:
    // 0x60008624: jal         0x60000EEC
    // 0x60008628: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    ovl_stage_world8_EEC(rdram, ctx);
        goto after_10;
    // 0x60008628: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_10:
    // 0x6000862C: jal         0x60000EEC
    // 0x60008630: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    ovl_stage_world8_EEC(rdram, ctx);
        goto after_11;
    // 0x60008630: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_11:
    // 0x60008634: jal         0x60000EEC
    // 0x60008638: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    ovl_stage_world8_EEC(rdram, ctx);
        goto after_12;
    // 0x60008638: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_12:
L_6000863C:
    // 0x6000863C: jal         0x60000BB0
    // 0x60008640: addiu       $a0, $zero, 0x1A0
    ctx->r4 = ADD32(0, 0X1A0);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_13;
    // 0x60008640: addiu       $a0, $zero, 0x1A0
    ctx->r4 = ADD32(0, 0X1A0);
    after_13:
    // 0x60008644: beq         $v0, $zero, L_60008664
    if (ctx->r2 == 0) {
        // 0x60008648: nop
    
            goto L_60008664;
    }
    // 0x60008648: nop

    // 0x6000864C: jal         0x60000BB0
    // 0x60008650: addiu       $a0, $zero, 0x180
    ctx->r4 = ADD32(0, 0X180);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_14;
    // 0x60008650: addiu       $a0, $zero, 0x180
    ctx->r4 = ADD32(0, 0X180);
    after_14:
    // 0x60008654: beq         $v0, $zero, L_60008664
    if (ctx->r2 == 0) {
        // 0x60008658: nop
    
            goto L_60008664;
    }
    // 0x60008658: nop

    // 0x6000865C: jal         0x60000EEC
    // 0x60008660: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    ovl_stage_world8_EEC(rdram, ctx);
        goto after_15;
    // 0x60008660: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_15:
L_60008664:
    // 0x60008664: jal         0x60000BB0
    // 0x60008668: addiu       $a0, $zero, 0x19F
    ctx->r4 = ADD32(0, 0X19F);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_16;
    // 0x60008668: addiu       $a0, $zero, 0x19F
    ctx->r4 = ADD32(0, 0X19F);
    after_16:
    // 0x6000866C: bne         $v0, $zero, L_60008690
    if (ctx->r2 != 0) {
        // 0x60008670: lui         $a0, 0x6001
        ctx->r4 = S32(0X6001 << 16);
            goto L_60008690;
    }
    // 0x60008670: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60008674: addiu       $a0, $a0, -0x7AFC
    ctx->r4 = ADD32(ctx->r4, -0X7AFC);
    // 0x60008678: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x6000867C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60008680: jal         0x60000994
    // 0x60008684: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world8_994(rdram, ctx);
        goto after_17;
    // 0x60008684: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_17:
    // 0x60008688: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x6000868C: sw          $v0, -0x6740($at)
    MEM_W(-0X6740, ctx->r1) = ctx->r2;
L_60008690:
    // 0x60008690: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60008694: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60008698: jr          $ra
    // 0x6000869C: nop

    return;
    // 0x6000869C: nop

;}
RECOMP_FUNC void ovl_stage_world8_86A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600086A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600086A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600086A8: jal         0x60000C1C
    // 0x600086AC: nop

    ovl_stage_world8_C1C(rdram, ctx);
        goto after_0;
    // 0x600086AC: nop

    after_0:
    // 0x600086B0: lw          $t6, 0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC);
    // 0x600086B4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x600086B8: bne         $t6, $at, L_600086CC
    if (ctx->r14 != ctx->r1) {
        // 0x600086BC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600086CC;
    }
    // 0x600086BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600086C0: jal         0x600010C0
    // 0x600086C4: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    ovl_stage_world8_10C0(rdram, ctx);
        goto after_1;
    // 0x600086C4: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_1:
    // 0x600086C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600086CC:
    // 0x600086CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600086D0: jr          $ra
    // 0x600086D4: nop

    return;
    // 0x600086D4: nop

;}
RECOMP_FUNC void ovl_stage_world8_86D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600086D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600086DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600086E0: jal         0x60000C1C
    // 0x600086E4: nop

    ovl_stage_world8_C1C(rdram, ctx);
        goto after_0;
    // 0x600086E4: nop

    after_0:
    // 0x600086E8: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x600086EC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x600086F0: bne         $v1, $zero, L_600087CC
    if (ctx->r3 != 0) {
        // 0x600086F4: nop
    
            goto L_600087CC;
    }
    // 0x600086F4: nop

    // 0x600086F8: jal         0x60000BB0
    // 0x600086FC: addiu       $a0, $zero, 0x85
    ctx->r4 = ADD32(0, 0X85);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_1;
    // 0x600086FC: addiu       $a0, $zero, 0x85
    ctx->r4 = ADD32(0, 0X85);
    after_1:
    // 0x60008700: beq         $v0, $zero, L_60008760
    if (ctx->r2 == 0) {
        // 0x60008704: nop
    
            goto L_60008760;
    }
    // 0x60008704: nop

    // 0x60008708: jal         0x60000BB0
    // 0x6000870C: addiu       $a0, $zero, 0x86
    ctx->r4 = ADD32(0, 0X86);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_2;
    // 0x6000870C: addiu       $a0, $zero, 0x86
    ctx->r4 = ADD32(0, 0X86);
    after_2:
    // 0x60008710: beq         $v0, $zero, L_60008760
    if (ctx->r2 == 0) {
        // 0x60008714: nop
    
            goto L_60008760;
    }
    // 0x60008714: nop

    // 0x60008718: jal         0x60000BB0
    // 0x6000871C: addiu       $a0, $zero, 0xFE
    ctx->r4 = ADD32(0, 0XFE);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_3;
    // 0x6000871C: addiu       $a0, $zero, 0xFE
    ctx->r4 = ADD32(0, 0XFE);
    after_3:
    // 0x60008720: bne         $v0, $zero, L_60008760
    if (ctx->r2 != 0) {
        // 0x60008724: nop
    
            goto L_60008760;
    }
    // 0x60008724: nop

    // 0x60008728: jal         0x60000BB0
    // 0x6000872C: addiu       $a0, $zero, 0x1BE
    ctx->r4 = ADD32(0, 0X1BE);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_4;
    // 0x6000872C: addiu       $a0, $zero, 0x1BE
    ctx->r4 = ADD32(0, 0X1BE);
    after_4:
    // 0x60008730: beq         $v0, $zero, L_60008748
    if (ctx->r2 == 0) {
        // 0x60008734: nop
    
            goto L_60008748;
    }
    // 0x60008734: nop

    // 0x60008738: jal         0x60000A60
    // 0x6000873C: addiu       $a0, $zero, 0xAB1
    ctx->r4 = ADD32(0, 0XAB1);
    ovl_stage_world8_A60(rdram, ctx);
        goto after_5;
    // 0x6000873C: addiu       $a0, $zero, 0xAB1
    ctx->r4 = ADD32(0, 0XAB1);
    after_5:
    // 0x60008740: b           L_60008750
    // 0x60008744: nop

        goto L_60008750;
    // 0x60008744: nop

L_60008748:
    // 0x60008748: jal         0x60000A60
    // 0x6000874C: addiu       $a0, $zero, 0xAE4
    ctx->r4 = ADD32(0, 0XAE4);
    ovl_stage_world8_A60(rdram, ctx);
        goto after_6;
    // 0x6000874C: addiu       $a0, $zero, 0xAE4
    ctx->r4 = ADD32(0, 0XAE4);
    after_6:
L_60008750:
    // 0x60008750: jal         0x60000B98
    // 0x60008754: addiu       $a0, $zero, 0x1BE
    ctx->r4 = ADD32(0, 0X1BE);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_7;
    // 0x60008754: addiu       $a0, $zero, 0x1BE
    ctx->r4 = ADD32(0, 0X1BE);
    after_7:
    // 0x60008758: b           L_60008768
    // 0x6000875C: nop

        goto L_60008768;
    // 0x6000875C: nop

L_60008760:
    // 0x60008760: jal         0x60000A60
    // 0x60008764: addiu       $a0, $zero, 0xAE5
    ctx->r4 = ADD32(0, 0XAE5);
    ovl_stage_world8_A60(rdram, ctx);
        goto after_8;
    // 0x60008764: addiu       $a0, $zero, 0xAE5
    ctx->r4 = ADD32(0, 0XAE5);
    after_8:
L_60008768:
    // 0x60008768: jal         0x60001064
    // 0x6000876C: nop

    ovl_stage_world8_1064(rdram, ctx);
        goto after_9;
    // 0x6000876C: nop

    after_9:
    // 0x60008770: jal         0x60000BB0
    // 0x60008774: addiu       $a0, $zero, 0x85
    ctx->r4 = ADD32(0, 0X85);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_10;
    // 0x60008774: addiu       $a0, $zero, 0x85
    ctx->r4 = ADD32(0, 0X85);
    after_10:
    // 0x60008778: beq         $v0, $zero, L_600087B8
    if (ctx->r2 == 0) {
        // 0x6000877C: addiu       $a0, $zero, 0x8BC
        ctx->r4 = ADD32(0, 0X8BC);
            goto L_600087B8;
    }
    // 0x6000877C: addiu       $a0, $zero, 0x8BC
    ctx->r4 = ADD32(0, 0X8BC);
    // 0x60008780: jal         0x60000BB0
    // 0x60008784: addiu       $a0, $zero, 0x86
    ctx->r4 = ADD32(0, 0X86);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_11;
    // 0x60008784: addiu       $a0, $zero, 0x86
    ctx->r4 = ADD32(0, 0X86);
    after_11:
    // 0x60008788: beq         $v0, $zero, L_600087B8
    if (ctx->r2 == 0) {
        // 0x6000878C: addiu       $a0, $zero, 0x8BC
        ctx->r4 = ADD32(0, 0X8BC);
            goto L_600087B8;
    }
    // 0x6000878C: addiu       $a0, $zero, 0x8BC
    ctx->r4 = ADD32(0, 0X8BC);
    // 0x60008790: jal         0x60000BB0
    // 0x60008794: addiu       $a0, $zero, 0xFE
    ctx->r4 = ADD32(0, 0XFE);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_12;
    // 0x60008794: addiu       $a0, $zero, 0xFE
    ctx->r4 = ADD32(0, 0XFE);
    after_12:
    // 0x60008798: bne         $v0, $zero, L_600087B4
    if (ctx->r2 != 0) {
        // 0x6000879C: addiu       $a0, $zero, 0x8BD
        ctx->r4 = ADD32(0, 0X8BD);
            goto L_600087B4;
    }
    // 0x6000879C: addiu       $a0, $zero, 0x8BD
    ctx->r4 = ADD32(0, 0X8BD);
    // 0x600087A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x600087A4: jal         0x60000C10
    // 0x600087A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_stage_world8_C10(rdram, ctx);
        goto after_13;
    // 0x600087A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_13:
    // 0x600087AC: b           L_60008834
    // 0x600087B0: nop

        goto L_60008834;
    // 0x600087B0: nop

L_600087B4:
    // 0x600087B4: addiu       $a0, $zero, 0x8BC
    ctx->r4 = ADD32(0, 0X8BC);
L_600087B8:
    // 0x600087B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x600087BC: jal         0x60000C10
    // 0x600087C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_stage_world8_C10(rdram, ctx);
        goto after_14;
    // 0x600087C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_14:
    // 0x600087C4: b           L_60008834
    // 0x600087C8: nop

        goto L_60008834;
    // 0x600087C8: nop

L_600087CC:
    // 0x600087CC: bne         $v1, $at, L_60008834
    if (ctx->r3 != ctx->r1) {
        // 0x600087D0: nop
    
            goto L_60008834;
    }
    // 0x600087D0: nop

    // 0x600087D4: jal         0x60000BB0
    // 0x600087D8: addiu       $a0, $zero, 0x85
    ctx->r4 = ADD32(0, 0X85);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_15;
    // 0x600087D8: addiu       $a0, $zero, 0x85
    ctx->r4 = ADD32(0, 0X85);
    after_15:
    // 0x600087DC: beq         $v0, $zero, L_60008814
    if (ctx->r2 == 0) {
        // 0x600087E0: nop
    
            goto L_60008814;
    }
    // 0x600087E0: nop

    // 0x600087E4: jal         0x60000BB0
    // 0x600087E8: addiu       $a0, $zero, 0x86
    ctx->r4 = ADD32(0, 0X86);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_16;
    // 0x600087E8: addiu       $a0, $zero, 0x86
    ctx->r4 = ADD32(0, 0X86);
    after_16:
    // 0x600087EC: beq         $v0, $zero, L_60008814
    if (ctx->r2 == 0) {
        // 0x600087F0: nop
    
            goto L_60008814;
    }
    // 0x600087F0: nop

    // 0x600087F4: jal         0x60000BB0
    // 0x600087F8: addiu       $a0, $zero, 0xFE
    ctx->r4 = ADD32(0, 0XFE);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_17;
    // 0x600087F8: addiu       $a0, $zero, 0xFE
    ctx->r4 = ADD32(0, 0XFE);
    after_17:
    // 0x600087FC: bne         $v0, $zero, L_60008814
    if (ctx->r2 != 0) {
        // 0x60008800: nop
    
            goto L_60008814;
    }
    // 0x60008800: nop

    // 0x60008804: jal         0x60000A60
    // 0x60008808: addiu       $a0, $zero, 0xAE6
    ctx->r4 = ADD32(0, 0XAE6);
    ovl_stage_world8_A60(rdram, ctx);
        goto after_18;
    // 0x60008808: addiu       $a0, $zero, 0xAE6
    ctx->r4 = ADD32(0, 0XAE6);
    after_18:
    // 0x6000880C: b           L_6000881C
    // 0x60008810: nop

        goto L_6000881C;
    // 0x60008810: nop

L_60008814:
    // 0x60008814: jal         0x60000A60
    // 0x60008818: addiu       $a0, $zero, 0xAE7
    ctx->r4 = ADD32(0, 0XAE7);
    ovl_stage_world8_A60(rdram, ctx);
        goto after_19;
    // 0x60008818: addiu       $a0, $zero, 0xAE7
    ctx->r4 = ADD32(0, 0XAE7);
    after_19:
L_6000881C:
    // 0x6000881C: jal         0x60001064
    // 0x60008820: nop

    ovl_stage_world8_1064(rdram, ctx);
        goto after_20;
    // 0x60008820: nop

    after_20:
    // 0x60008824: addiu       $a0, $zero, 0x89A
    ctx->r4 = ADD32(0, 0X89A);
    // 0x60008828: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x6000882C: jal         0x60000C10
    // 0x60008830: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_stage_world8_C10(rdram, ctx);
        goto after_21;
    // 0x60008830: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_21:
L_60008834:
    // 0x60008834: jal         0x600009AC
    // 0x60008838: nop

    ovl_stage_world8_9AC(rdram, ctx);
        goto after_22;
    // 0x60008838: nop

    after_22:
    // 0x6000883C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60008840: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60008844: jr          $ra
    // 0x60008848: nop

    return;
    // 0x60008848: nop

;}
RECOMP_FUNC void ovl_stage_world8_884C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000884C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60008850: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60008854: jal         0x60000DE4
    // 0x60008858: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world8_DE4(rdram, ctx);
        goto after_0;
    // 0x60008858: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x6000885C: jal         0x60000CC4
    // 0x60008860: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_stage_world8_CC4(rdram, ctx);
        goto after_1;
    // 0x60008860: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x60008864: jal         0x60000A6C
    // 0x60008868: nop

    ovl_stage_world8_A6C(rdram, ctx);
        goto after_2;
    // 0x60008868: nop

    after_2:
    // 0x6000886C: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60008870: addiu       $a0, $a0, -0x7928
    ctx->r4 = ADD32(ctx->r4, -0X7928);
    // 0x60008874: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60008878: addiu       $a2, $zero, 0x2000
    ctx->r6 = ADD32(0, 0X2000);
    // 0x6000887C: jal         0x60000994
    // 0x60008880: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world8_994(rdram, ctx);
        goto after_3;
    // 0x60008880: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x60008884: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60008888: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x6000888C: jr          $ra
    // 0x60008890: nop

    return;
    // 0x60008890: nop

;}
RECOMP_FUNC void ovl_stage_world8_8894(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60008894: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x60008898: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x6000889C: jal         0x60000C1C
    // 0x600088A0: nop

    ovl_stage_world8_C1C(rdram, ctx);
        goto after_0;
    // 0x600088A0: nop

    after_0:
    // 0x600088A4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x600088A8: jal         0x60000EEC
    // 0x600088AC: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    ovl_stage_world8_EEC(rdram, ctx);
        goto after_1;
    // 0x600088AC: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    after_1:
    // 0x600088B0: jal         0x60000BB0
    // 0x600088B4: addiu       $a0, $zero, 0x85
    ctx->r4 = ADD32(0, 0X85);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_2;
    // 0x600088B4: addiu       $a0, $zero, 0x85
    ctx->r4 = ADD32(0, 0X85);
    after_2:
    // 0x600088B8: beq         $v0, $zero, L_600088F0
    if (ctx->r2 == 0) {
        // 0x600088BC: nop
    
            goto L_600088F0;
    }
    // 0x600088BC: nop

    // 0x600088C0: jal         0x60000BB0
    // 0x600088C4: addiu       $a0, $zero, 0x86
    ctx->r4 = ADD32(0, 0X86);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_3;
    // 0x600088C4: addiu       $a0, $zero, 0x86
    ctx->r4 = ADD32(0, 0X86);
    after_3:
    // 0x600088C8: beq         $v0, $zero, L_600088F0
    if (ctx->r2 == 0) {
        // 0x600088CC: nop
    
            goto L_600088F0;
    }
    // 0x600088CC: nop

    // 0x600088D0: jal         0x60000BB0
    // 0x600088D4: addiu       $a0, $zero, 0xFE
    ctx->r4 = ADD32(0, 0XFE);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_4;
    // 0x600088D4: addiu       $a0, $zero, 0xFE
    ctx->r4 = ADD32(0, 0XFE);
    after_4:
    // 0x600088D8: bne         $v0, $zero, L_600088F0
    if (ctx->r2 != 0) {
        // 0x600088DC: nop
    
            goto L_600088F0;
    }
    // 0x600088DC: nop

    // 0x600088E0: jal         0x60000A60
    // 0x600088E4: addiu       $a0, $zero, 0xAE8
    ctx->r4 = ADD32(0, 0XAE8);
    ovl_stage_world8_A60(rdram, ctx);
        goto after_5;
    // 0x600088E4: addiu       $a0, $zero, 0xAE8
    ctx->r4 = ADD32(0, 0XAE8);
    after_5:
    // 0x600088E8: b           L_600088F8
    // 0x600088EC: nop

        goto L_600088F8;
    // 0x600088EC: nop

L_600088F0:
    // 0x600088F0: jal         0x60000A60
    // 0x600088F4: addiu       $a0, $zero, 0xAE9
    ctx->r4 = ADD32(0, 0XAE9);
    ovl_stage_world8_A60(rdram, ctx);
        goto after_6;
    // 0x600088F4: addiu       $a0, $zero, 0xAE9
    ctx->r4 = ADD32(0, 0XAE9);
    after_6:
L_600088F8:
    // 0x600088F8: jal         0x60001064
    // 0x600088FC: nop

    ovl_stage_world8_1064(rdram, ctx);
        goto after_7;
    // 0x600088FC: nop

    after_7:
    // 0x60008900: jal         0x60000B98
    // 0x60008904: addiu       $a0, $zero, 0x87
    ctx->r4 = ADD32(0, 0X87);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_8;
    // 0x60008904: addiu       $a0, $zero, 0x87
    ctx->r4 = ADD32(0, 0X87);
    after_8:
    // 0x60008908: jal         0x60000BA4
    // 0x6000890C: addiu       $a0, $zero, 0x8F
    ctx->r4 = ADD32(0, 0X8F);
    ovl_stage_world8_BA4(rdram, ctx);
        goto after_9;
    // 0x6000890C: addiu       $a0, $zero, 0x8F
    ctx->r4 = ADD32(0, 0X8F);
    after_9:
    // 0x60008910: jal         0x60000BA4
    // 0x60008914: addiu       $a0, $zero, 0x9B
    ctx->r4 = ADD32(0, 0X9B);
    ovl_stage_world8_BA4(rdram, ctx);
        goto after_10;
    // 0x60008914: addiu       $a0, $zero, 0x9B
    ctx->r4 = ADD32(0, 0X9B);
    after_10:
    // 0x60008918: jal         0x60000BA4
    // 0x6000891C: addiu       $a0, $zero, 0xB3
    ctx->r4 = ADD32(0, 0XB3);
    ovl_stage_world8_BA4(rdram, ctx);
        goto after_11;
    // 0x6000891C: addiu       $a0, $zero, 0xB3
    ctx->r4 = ADD32(0, 0XB3);
    after_11:
    // 0x60008920: jal         0x60000BA4
    // 0x60008924: addiu       $a0, $zero, 0xB4
    ctx->r4 = ADD32(0, 0XB4);
    ovl_stage_world8_BA4(rdram, ctx);
        goto after_12;
    // 0x60008924: addiu       $a0, $zero, 0xB4
    ctx->r4 = ADD32(0, 0XB4);
    after_12:
    // 0x60008928: jal         0x60000BB0
    // 0x6000892C: addiu       $a0, $zero, 0x85
    ctx->r4 = ADD32(0, 0X85);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_13;
    // 0x6000892C: addiu       $a0, $zero, 0x85
    ctx->r4 = ADD32(0, 0X85);
    after_13:
    // 0x60008930: beq         $v0, $zero, L_60008968
    if (ctx->r2 == 0) {
        // 0x60008934: nop
    
            goto L_60008968;
    }
    // 0x60008934: nop

    // 0x60008938: jal         0x60000BB0
    // 0x6000893C: addiu       $a0, $zero, 0x86
    ctx->r4 = ADD32(0, 0X86);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_14;
    // 0x6000893C: addiu       $a0, $zero, 0x86
    ctx->r4 = ADD32(0, 0X86);
    after_14:
    // 0x60008940: beq         $v0, $zero, L_60008968
    if (ctx->r2 == 0) {
        // 0x60008944: nop
    
            goto L_60008968;
    }
    // 0x60008944: nop

    // 0x60008948: jal         0x60000BB0
    // 0x6000894C: addiu       $a0, $zero, 0xFE
    ctx->r4 = ADD32(0, 0XFE);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_15;
    // 0x6000894C: addiu       $a0, $zero, 0xFE
    ctx->r4 = ADD32(0, 0XFE);
    after_15:
    // 0x60008950: bne         $v0, $zero, L_60008968
    if (ctx->r2 != 0) {
        // 0x60008954: nop
    
            goto L_60008968;
    }
    // 0x60008954: nop

    // 0x60008958: jal         0x60000B98
    // 0x6000895C: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_16;
    // 0x6000895C: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    after_16:
    // 0x60008960: b           L_60008970
    // 0x60008964: nop

        goto L_60008970;
    // 0x60008964: nop

L_60008968:
    // 0x60008968: jal         0x60000B98
    // 0x6000896C: addiu       $a0, $zero, 0xAB
    ctx->r4 = ADD32(0, 0XAB);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_17;
    // 0x6000896C: addiu       $a0, $zero, 0xAB
    ctx->r4 = ADD32(0, 0XAB);
    after_17:
L_60008970:
    // 0x60008970: jal         0x60000B38
    // 0x60008974: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_stage_world8_B38(rdram, ctx);
        goto after_18;
    // 0x60008974: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_18:
    // 0x60008978: jal         0x60000B5C
    // 0x6000897C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_stage_world8_B5C(rdram, ctx);
        goto after_19;
    // 0x6000897C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_19:
    // 0x60008980: jal         0x60000BEC
    // 0x60008984: nop

    ovl_stage_world8_BEC(rdram, ctx);
        goto after_20;
    // 0x60008984: nop

    after_20:
    // 0x60008988: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x6000898C: jal         0x60000BB0
    // 0x60008990: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_21;
    // 0x60008990: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_21:
    // 0x60008994: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x60008998: beq         $v0, $zero, L_600089B0
    if (ctx->r2 == 0) {
        // 0x6000899C: addiu       $a0, $zero, 0xAB
        ctx->r4 = ADD32(0, 0XAB);
            goto L_600089B0;
    }
    // 0x6000899C: addiu       $a0, $zero, 0xAB
    ctx->r4 = ADD32(0, 0XAB);
    // 0x600089A0: lbu         $t6, 0x3($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X3);
    // 0x600089A4: nop

    // 0x600089A8: ori         $t7, $t6, 0x1
    ctx->r15 = ctx->r14 | 0X1;
    // 0x600089AC: sb          $t7, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r15;
L_600089B0:
    // 0x600089B0: jal         0x60000BB0
    // 0x600089B4: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_22;
    // 0x600089B4: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_22:
    // 0x600089B8: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x600089BC: beq         $v0, $zero, L_600089D4
    if (ctx->r2 == 0) {
        // 0x600089C0: nop
    
            goto L_600089D4;
    }
    // 0x600089C0: nop

    // 0x600089C4: lbu         $t8, 0x3($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X3);
    // 0x600089C8: nop

    // 0x600089CC: ori         $t9, $t8, 0x4
    ctx->r25 = ctx->r24 | 0X4;
    // 0x600089D0: sb          $t9, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r25;
L_600089D4:
    // 0x600089D4: jal         0x60000B38
    // 0x600089D8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world8_B38(rdram, ctx);
        goto after_23;
    // 0x600089D8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_23:
    // 0x600089DC: jal         0x60000B5C
    // 0x600089E0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world8_B5C(rdram, ctx);
        goto after_24;
    // 0x600089E0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_24:
    // 0x600089E4: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x600089E8: lui         $at, 0x8
    ctx->r1 = S32(0X8 << 16);
    // 0x600089EC: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x600089F0: ori         $at, $at, 0x4000
    ctx->r1 = ctx->r1 | 0X4000;
    // 0x600089F4: or          $t1, $t0, $at
    ctx->r9 = ctx->r8 | ctx->r1;
    // 0x600089F8: jal         0x600009AC
    // 0x600089FC: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    ovl_stage_world8_9AC(rdram, ctx);
        goto after_25;
    // 0x600089FC: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    after_25:
    // 0x60008A00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60008A04: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x60008A08: jr          $ra
    // 0x60008A0C: nop

    return;
    // 0x60008A0C: nop

;}
RECOMP_FUNC void ovl_stage_world8_8A10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60008A10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60008A14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60008A18: jal         0x60000C1C
    // 0x60008A1C: nop

    ovl_stage_world8_C1C(rdram, ctx);
        goto after_0;
    // 0x60008A1C: nop

    after_0:
    // 0x60008A20: lw          $t6, 0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC);
    // 0x60008A24: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x60008A28: bne         $t6, $at, L_60008ABC
    if (ctx->r14 != ctx->r1) {
        // 0x60008A2C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60008ABC;
    }
    // 0x60008A2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60008A30: jal         0x60000EEC
    // 0x60008A34: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_stage_world8_EEC(rdram, ctx);
        goto after_1;
    // 0x60008A34: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_1:
    // 0x60008A38: jal         0x60000EEC
    // 0x60008A3C: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    ovl_stage_world8_EEC(rdram, ctx);
        goto after_2;
    // 0x60008A3C: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    after_2:
    // 0x60008A40: jal         0x60000EEC
    // 0x60008A44: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    ovl_stage_world8_EEC(rdram, ctx);
        goto after_3;
    // 0x60008A44: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_3:
    // 0x60008A48: jal         0x60000EEC
    // 0x60008A4C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    ovl_stage_world8_EEC(rdram, ctx);
        goto after_4;
    // 0x60008A4C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_4:
    // 0x60008A50: jal         0x60000EEC
    // 0x60008A54: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    ovl_stage_world8_EEC(rdram, ctx);
        goto after_5;
    // 0x60008A54: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_5:
    // 0x60008A58: jal         0x60000EEC
    // 0x60008A5C: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    ovl_stage_world8_EEC(rdram, ctx);
        goto after_6;
    // 0x60008A5C: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    after_6:
    // 0x60008A60: jal         0x60000EEC
    // 0x60008A64: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    ovl_stage_world8_EEC(rdram, ctx);
        goto after_7;
    // 0x60008A64: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    after_7:
    // 0x60008A68: jal         0x60000EEC
    // 0x60008A6C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    ovl_stage_world8_EEC(rdram, ctx);
        goto after_8;
    // 0x60008A6C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_8:
    // 0x60008A70: jal         0x60000EEC
    // 0x60008A74: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    ovl_stage_world8_EEC(rdram, ctx);
        goto after_9;
    // 0x60008A74: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_9:
    // 0x60008A78: jal         0x60000EEC
    // 0x60008A7C: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    ovl_stage_world8_EEC(rdram, ctx);
        goto after_10;
    // 0x60008A7C: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_10:
    // 0x60008A80: jal         0x60000EEC
    // 0x60008A84: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    ovl_stage_world8_EEC(rdram, ctx);
        goto after_11;
    // 0x60008A84: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    after_11:
    // 0x60008A88: jal         0x60000DE4
    // 0x60008A8C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world8_DE4(rdram, ctx);
        goto after_12;
    // 0x60008A8C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_12:
    // 0x60008A90: jal         0x60000CC4
    // 0x60008A94: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_stage_world8_CC4(rdram, ctx);
        goto after_13;
    // 0x60008A94: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_13:
    // 0x60008A98: jal         0x60000A6C
    // 0x60008A9C: nop

    ovl_stage_world8_A6C(rdram, ctx);
        goto after_14;
    // 0x60008A9C: nop

    after_14:
    // 0x60008AA0: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60008AA4: addiu       $a0, $a0, -0x776C
    ctx->r4 = ADD32(ctx->r4, -0X776C);
    // 0x60008AA8: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60008AAC: addiu       $a2, $zero, 0x2000
    ctx->r6 = ADD32(0, 0X2000);
    // 0x60008AB0: jal         0x60000994
    // 0x60008AB4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world8_994(rdram, ctx);
        goto after_15;
    // 0x60008AB4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_15:
    // 0x60008AB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60008ABC:
    // 0x60008ABC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60008AC0: jr          $ra
    // 0x60008AC4: nop

    return;
    // 0x60008AC4: nop

;}
RECOMP_FUNC void ovl_stage_world8_8AC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60008AC8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x60008ACC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60008AD0: jal         0x60000C1C
    // 0x60008AD4: nop

    ovl_stage_world8_C1C(rdram, ctx);
        goto after_0;
    // 0x60008AD4: nop

    after_0:
    // 0x60008AD8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x60008ADC: jal         0x60000BB0
    // 0x60008AE0: addiu       $a0, $zero, 0x198
    ctx->r4 = ADD32(0, 0X198);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_1;
    // 0x60008AE0: addiu       $a0, $zero, 0x198
    ctx->r4 = ADD32(0, 0X198);
    after_1:
    // 0x60008AE4: bne         $v0, $zero, L_60008B18
    if (ctx->r2 != 0) {
        // 0x60008AE8: nop
    
            goto L_60008B18;
    }
    // 0x60008AE8: nop

    // 0x60008AEC: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x60008AF0: nop

    // 0x60008AF4: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x60008AF8: nop

    // 0x60008AFC: andi        $t8, $t7, 0x800
    ctx->r24 = ctx->r15 & 0X800;
    // 0x60008B00: bne         $t8, $zero, L_60008B18
    if (ctx->r24 != 0) {
        // 0x60008B04: nop
    
            goto L_60008B18;
    }
    // 0x60008B04: nop

    // 0x60008B08: jal         0x60000B98
    // 0x60008B0C: addiu       $a0, $zero, 0x198
    ctx->r4 = ADD32(0, 0X198);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_2;
    // 0x60008B0C: addiu       $a0, $zero, 0x198
    ctx->r4 = ADD32(0, 0X198);
    after_2:
    // 0x60008B10: jal         0x60000A60
    // 0x60008B14: addiu       $a0, $zero, 0xC2A
    ctx->r4 = ADD32(0, 0XC2A);
    ovl_stage_world8_A60(rdram, ctx);
        goto after_3;
    // 0x60008B14: addiu       $a0, $zero, 0xC2A
    ctx->r4 = ADD32(0, 0XC2A);
    after_3:
L_60008B18:
    // 0x60008B18: jal         0x60000BB0
    // 0x60008B1C: addiu       $a0, $zero, 0x18D
    ctx->r4 = ADD32(0, 0X18D);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_4;
    // 0x60008B1C: addiu       $a0, $zero, 0x18D
    ctx->r4 = ADD32(0, 0X18D);
    after_4:
    // 0x60008B20: bne         $v0, $zero, L_60008B48
    if (ctx->r2 != 0) {
        // 0x60008B24: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60008B48;
    }
    // 0x60008B24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60008B28: jal         0x60000244
    // 0x60008B2C: addiu       $a0, $zero, 0x1EF
    ctx->r4 = ADD32(0, 0X1EF);
    ovl_stage_world8_244(rdram, ctx);
        goto after_5;
    // 0x60008B2C: addiu       $a0, $zero, 0x1EF
    ctx->r4 = ADD32(0, 0X1EF);
    after_5:
    // 0x60008B30: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60008B34: sw          $v0, -0x673C($at)
    MEM_W(-0X673C, ctx->r1) = ctx->r2;
    // 0x60008B38: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x60008B3C: jal         0x60000F04
    // 0x60008B40: addiu       $a1, $zero, -0x11
    ctx->r5 = ADD32(0, -0X11);
    ovl_stage_world8_F04(rdram, ctx);
        goto after_6;
    // 0x60008B40: addiu       $a1, $zero, -0x11
    ctx->r5 = ADD32(0, -0X11);
    after_6:
    // 0x60008B44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60008B48:
    // 0x60008B48: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x60008B4C: jr          $ra
    // 0x60008B50: nop

    return;
    // 0x60008B50: nop

;}
RECOMP_FUNC void ovl_stage_world8_8B54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60008B54: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x60008B58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60008B5C: jal         0x60000C1C
    // 0x60008B60: nop

    ovl_stage_world8_C1C(rdram, ctx);
        goto after_0;
    // 0x60008B60: nop

    after_0:
    // 0x60008B64: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x60008B68: jal         0x60000BB0
    // 0x60008B6C: addiu       $a0, $zero, 0x199
    ctx->r4 = ADD32(0, 0X199);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_1;
    // 0x60008B6C: addiu       $a0, $zero, 0x199
    ctx->r4 = ADD32(0, 0X199);
    after_1:
    // 0x60008B70: bne         $v0, $zero, L_60008BA4
    if (ctx->r2 != 0) {
        // 0x60008B74: nop
    
            goto L_60008BA4;
    }
    // 0x60008B74: nop

    // 0x60008B78: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x60008B7C: nop

    // 0x60008B80: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x60008B84: nop

    // 0x60008B88: andi        $t8, $t7, 0x800
    ctx->r24 = ctx->r15 & 0X800;
    // 0x60008B8C: bne         $t8, $zero, L_60008BA4
    if (ctx->r24 != 0) {
        // 0x60008B90: nop
    
            goto L_60008BA4;
    }
    // 0x60008B90: nop

    // 0x60008B94: jal         0x60000B98
    // 0x60008B98: addiu       $a0, $zero, 0x199
    ctx->r4 = ADD32(0, 0X199);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_2;
    // 0x60008B98: addiu       $a0, $zero, 0x199
    ctx->r4 = ADD32(0, 0X199);
    after_2:
    // 0x60008B9C: jal         0x60000A60
    // 0x60008BA0: addiu       $a0, $zero, 0xC2A
    ctx->r4 = ADD32(0, 0XC2A);
    ovl_stage_world8_A60(rdram, ctx);
        goto after_3;
    // 0x60008BA0: addiu       $a0, $zero, 0xC2A
    ctx->r4 = ADD32(0, 0XC2A);
    after_3:
L_60008BA4:
    // 0x60008BA4: jal         0x60000BB0
    // 0x60008BA8: addiu       $a0, $zero, 0x18C
    ctx->r4 = ADD32(0, 0X18C);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_4;
    // 0x60008BA8: addiu       $a0, $zero, 0x18C
    ctx->r4 = ADD32(0, 0X18C);
    after_4:
    // 0x60008BAC: bne         $v0, $zero, L_60008BD4
    if (ctx->r2 != 0) {
        // 0x60008BB0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60008BD4;
    }
    // 0x60008BB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60008BB4: jal         0x60000244
    // 0x60008BB8: addiu       $a0, $zero, 0x1EF
    ctx->r4 = ADD32(0, 0X1EF);
    ovl_stage_world8_244(rdram, ctx);
        goto after_5;
    // 0x60008BB8: addiu       $a0, $zero, 0x1EF
    ctx->r4 = ADD32(0, 0X1EF);
    after_5:
    // 0x60008BBC: lui         $at, 0x6001
    ctx->r1 = S32(0X6001 << 16);
    // 0x60008BC0: sw          $v0, -0x673C($at)
    MEM_W(-0X673C, ctx->r1) = ctx->r2;
    // 0x60008BC4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x60008BC8: jal         0x60000F04
    // 0x60008BCC: addiu       $a1, $zero, -0x11
    ctx->r5 = ADD32(0, -0X11);
    ovl_stage_world8_F04(rdram, ctx);
        goto after_6;
    // 0x60008BCC: addiu       $a1, $zero, -0x11
    ctx->r5 = ADD32(0, -0X11);
    after_6:
    // 0x60008BD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60008BD4:
    // 0x60008BD4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x60008BD8: jr          $ra
    // 0x60008BDC: nop

    return;
    // 0x60008BDC: nop

;}
RECOMP_FUNC void ovl_stage_world8_8BE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60008BE0: jr          $ra
    // 0x60008BE4: nop

    return;
    // 0x60008BE4: nop

;}
RECOMP_FUNC void ovl_stage_world8_8BE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60008BE8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x60008BEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60008BF0: jal         0x60000BB0
    // 0x60008BF4: addiu       $a0, $zero, 0x19A
    ctx->r4 = ADD32(0, 0X19A);
    ovl_stage_world8_BB0(rdram, ctx);
        goto after_0;
    // 0x60008BF4: addiu       $a0, $zero, 0x19A
    ctx->r4 = ADD32(0, 0X19A);
    after_0:
    // 0x60008BF8: beq         $v0, $zero, L_60008C48
    if (ctx->r2 == 0) {
        // 0x60008BFC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60008C48;
    }
    // 0x60008BFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60008C00: jal         0x60000E74
    // 0x60008C04: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    ovl_stage_world8_E74(rdram, ctx);
        goto after_1;
    // 0x60008C04: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_1:
    // 0x60008C08: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60008C0C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x60008C10: jal         0x600006C4
    // 0x60008C14: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_2;
    // 0x60008C14: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_2:
    // 0x60008C18: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x60008C1C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60008C20: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x60008C24: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x60008C28: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x60008C2C: jal         0x60000E74
    // 0x60008C30: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    ovl_stage_world8_E74(rdram, ctx);
        goto after_3;
    // 0x60008C30: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x60008C34: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60008C38: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x60008C3C: jal         0x600006C4
    // 0x60008C40: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world8_6C4(rdram, ctx);
        goto after_4;
    // 0x60008C40: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_4:
    // 0x60008C44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60008C48:
    // 0x60008C48: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x60008C4C: jr          $ra
    // 0x60008C50: nop

    return;
    // 0x60008C50: nop

;}
RECOMP_FUNC void ovl_stage_world8_8C54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60008C54: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x60008C58: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x60008C5C: jal         0x60000C1C
    // 0x60008C60: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    ovl_stage_world8_C1C(rdram, ctx);
        goto after_0;
    // 0x60008C60: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x60008C64: lw          $t6, 0x8($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X8);
    // 0x60008C68: addiu       $at, $zero, 0x89E
    ctx->r1 = ADD32(0, 0X89E);
    // 0x60008C6C: bne         $t6, $at, L_60008C84
    if (ctx->r14 != ctx->r1) {
        // 0x60008C70: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_60008C84;
    }
    // 0x60008C70: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x60008C74: jal         0x60000A60
    // 0x60008C78: addiu       $a0, $zero, 0xB21
    ctx->r4 = ADD32(0, 0XB21);
    ovl_stage_world8_A60(rdram, ctx);
        goto after_1;
    // 0x60008C78: addiu       $a0, $zero, 0xB21
    ctx->r4 = ADD32(0, 0XB21);
    after_1:
    // 0x60008C7C: b           L_60008C8C
    // 0x60008C80: nop

        goto L_60008C8C;
    // 0x60008C80: nop

L_60008C84:
    // 0x60008C84: jal         0x60000A60
    // 0x60008C88: addiu       $a0, $zero, 0xB22
    ctx->r4 = ADD32(0, 0XB22);
    ovl_stage_world8_A60(rdram, ctx);
        goto after_2;
    // 0x60008C88: addiu       $a0, $zero, 0xB22
    ctx->r4 = ADD32(0, 0XB22);
    after_2:
L_60008C8C:
    // 0x60008C8C: jal         0x600009D0
    // 0x60008C90: nop

    ovl_stage_world8_9D0(rdram, ctx);
        goto after_3;
    // 0x60008C90: nop

    after_3:
    // 0x60008C94: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x60008C98: nop

    // 0x60008C9C: andi        $t8, $t7, 0x800
    ctx->r24 = ctx->r15 & 0X800;
    // 0x60008CA0: beq         $t8, $zero, L_60008CC4
    if (ctx->r24 == 0) {
        // 0x60008CA4: nop
    
            goto L_60008CC4;
    }
    // 0x60008CA4: nop

L_60008CA8:
    // 0x60008CA8: jal         0x600009D0
    // 0x60008CAC: nop

    ovl_stage_world8_9D0(rdram, ctx);
        goto after_4;
    // 0x60008CAC: nop

    after_4:
    // 0x60008CB0: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x60008CB4: nop

    // 0x60008CB8: andi        $t0, $t9, 0x800
    ctx->r8 = ctx->r25 & 0X800;
    // 0x60008CBC: bne         $t0, $zero, L_60008CA8
    if (ctx->r8 != 0) {
        // 0x60008CC0: nop
    
            goto L_60008CA8;
    }
    // 0x60008CC0: nop

L_60008CC4:
    // 0x60008CC4: jal         0x600009C4
    // 0x60008CC8: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    ovl_stage_world8_9C4(rdram, ctx);
        goto after_5;
    // 0x60008CC8: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_5:
    // 0x60008CCC: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x60008CD0: nop

    // 0x60008CD4: ori         $t2, $t1, 0x200
    ctx->r10 = ctx->r9 | 0X200;
    // 0x60008CD8: jal         0x600009AC
    // 0x60008CDC: sw          $t2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r10;
    ovl_stage_world8_9AC(rdram, ctx);
        goto after_6;
    // 0x60008CDC: sw          $t2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r10;
    after_6:
    // 0x60008CE0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x60008CE4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x60008CE8: jr          $ra
    // 0x60008CEC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x60008CEC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_stage_world8_8CF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60008CF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60008CF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60008CF8: jal         0x60000C1C
    // 0x60008CFC: nop

    ovl_stage_world8_C1C(rdram, ctx);
        goto after_0;
    // 0x60008CFC: nop

    after_0:
    // 0x60008D00: lw          $t6, 0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC);
    // 0x60008D04: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x60008D08: bne         $t6, $at, L_60008D2C
    if (ctx->r14 != ctx->r1) {
        // 0x60008D0C: lui         $a0, 0x6001
        ctx->r4 = S32(0X6001 << 16);
            goto L_60008D2C;
    }
    // 0x60008D0C: lui         $a0, 0x6001
    ctx->r4 = S32(0X6001 << 16);
    // 0x60008D10: addiu       $a0, $a0, -0x73AC
    ctx->r4 = ADD32(ctx->r4, -0X73AC);
    // 0x60008D14: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60008D18: addiu       $a2, $zero, 0x2000
    ctx->r6 = ADD32(0, 0X2000);
    // 0x60008D1C: jal         0x60000994
    // 0x60008D20: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world8_994(rdram, ctx);
        goto after_1;
    // 0x60008D20: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x60008D24: b           L_60008D48
    // 0x60008D28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60008D48;
    // 0x60008D28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60008D2C:
    // 0x60008D2C: lw          $t7, 0x8($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X8);
    // 0x60008D30: addiu       $at, $zero, 0x89E
    ctx->r1 = ADD32(0, 0X89E);
    // 0x60008D34: bne         $t7, $at, L_60008D48
    if (ctx->r15 != ctx->r1) {
        // 0x60008D38: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60008D48;
    }
    // 0x60008D38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60008D3C: jal         0x60000B98
    // 0x60008D40: addiu       $a0, $zero, 0x1BF
    ctx->r4 = ADD32(0, 0X1BF);
    ovl_stage_world8_B98(rdram, ctx);
        goto after_2;
    // 0x60008D40: addiu       $a0, $zero, 0x1BF
    ctx->r4 = ADD32(0, 0X1BF);
    after_2:
    // 0x60008D44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60008D48:
    // 0x60008D48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60008D4C: jr          $ra
    // 0x60008D50: nop

    return;
    // 0x60008D50: nop

;}
