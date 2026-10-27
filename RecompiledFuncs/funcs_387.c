#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_stage_world4_1158(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001158: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x6000115C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60001160: jal         0x60000C1C
    // 0x60001164: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    ovl_stage_world4_C1C(rdram, ctx);
        goto after_0;
    // 0x60001164: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x60001168: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x6000116C: jal         0x600007E4
    // 0x60001170: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    ovl_stage_world4_7E4(rdram, ctx);
        goto after_1;
    // 0x60001170: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x60001174: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x60001178: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x6000117C: beq         $t6, $zero, L_600011DC
    if (ctx->r14 == 0) {
        // 0x60001180: lui         $at, 0x6000
        ctx->r1 = S32(0X6000 << 16);
            goto L_600011DC;
    }
    // 0x60001180: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001184: lw          $t7, 0x10($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X10);
    // 0x60001188: lui         $t1, 0x6000
    ctx->r9 = S32(0X6000 << 16);
    // 0x6000118C: andi        $t8, $t7, 0x4
    ctx->r24 = ctx->r15 & 0X4;
    // 0x60001190: sw          $t8, 0x7534($at)
    MEM_W(0X7534, ctx->r1) = ctx->r24;
    // 0x60001194: lw          $t9, 0x10($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X10);
    // 0x60001198: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x6000119C: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x600011A0: sw          $t0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r8;
    // 0x600011A4: lw          $t1, 0x7534($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7534);
    // 0x600011A8: lui         $at, 0xFF7F
    ctx->r1 = S32(0XFF7F << 16);
    // 0x600011AC: beq         $t1, $zero, L_600011C8
    if (ctx->r9 == 0) {
        // 0x600011B0: nop
    
            goto L_600011C8;
    }
    // 0x600011B0: nop

    // 0x600011B4: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x600011B8: lui         $at, 0x80
    ctx->r1 = S32(0X80 << 16);
    // 0x600011BC: or          $t3, $t2, $at
    ctx->r11 = ctx->r10 | ctx->r1;
    // 0x600011C0: b           L_60001200
    // 0x600011C4: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
        goto L_60001200;
    // 0x600011C4: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
L_600011C8:
    // 0x600011C8: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x600011CC: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x600011D0: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x600011D4: b           L_60001200
    // 0x600011D8: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
        goto L_60001200;
    // 0x600011D8: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
L_600011DC:
    // 0x600011DC: lui         $t6, 0x6000
    ctx->r14 = S32(0X6000 << 16);
    // 0x600011E0: lw          $t6, 0x7534($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7534);
    // 0x600011E4: nop

    // 0x600011E8: beq         $t6, $zero, L_60001204
    if (ctx->r14 == 0) {
        // 0x600011EC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60001204;
    }
    // 0x600011EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600011F0: lw          $t7, 0x10($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X10);
    // 0x600011F4: nop

    // 0x600011F8: ori         $t8, $t7, 0x4
    ctx->r24 = ctx->r15 | 0X4;
    // 0x600011FC: sw          $t8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r24;
L_60001200:
    // 0x60001200: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001204:
    // 0x60001204: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x60001208: jr          $ra
    // 0x6000120C: nop

    return;
    // 0x6000120C: nop

;}
RECOMP_FUNC void ovl_stage_world4_1210(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001210: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x60001214: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60001218: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x6000121C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x60001220: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x60001224: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x60001228: jal         0x60000E74
    // 0x6000122C: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    ovl_stage_world4_E74(rdram, ctx);
        goto after_0;
    // 0x6000122C: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    after_0:
    // 0x60001230: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60001234: addiu       $a1, $zero, 0x23
    ctx->r5 = ADD32(0, 0X23);
    // 0x60001238: jal         0x600006C4
    // 0x6000123C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_1;
    // 0x6000123C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x60001240: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60001244: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x60001248: jr          $ra
    // 0x6000124C: nop

    return;
    // 0x6000124C: nop

;}
RECOMP_FUNC void ovl_stage_world4_1250(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001250: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001254: lwc1        $f7, 0x7330($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X7330);
    // 0x60001258: lwc1        $f6, 0x7334($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X7334);
    // 0x6000125C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x60001260: cvt.d.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.d = CVT_D_S(ctx->f12.fl);
    // 0x60001264: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x60001268: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x6000126C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x60001270: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x60001274: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60001278: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x6000127C: swc1        $f14, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f14.u32l;
    // 0x60001280: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x60001284: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x60001288: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x6000128C: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x60001290: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x60001294: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
    // 0x60001298: jal         0x600003D0
    // 0x6000129C: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    ovl_stage_world4_3D0(rdram, ctx);
        goto after_0;
    // 0x6000129C: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x600012A0: lwc1        $f12, 0x3C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x600012A4: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x600012A8: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x600012AC: mul.s       $f0, $f4, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x600012B0: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
    // 0x600012B4: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
    // 0x600012B8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x600012BC: c.le.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl <= ctx->f0.fl;
    // 0x600012C0: nop

    // 0x600012C4: bc1f        L_60001308
    if (!c1cs) {
        // 0x600012C8: nop
    
            goto L_60001308;
    }
    // 0x600012C8: nop

    // 0x600012CC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x600012D0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x600012D4: nop

    // 0x600012D8: add.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x600012DC: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x600012E0: nop

    // 0x600012E4: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x600012E8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x600012EC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x600012F0: nop

    // 0x600012F4: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x600012F8: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x600012FC: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x60001300: b           L_60001340
    // 0x60001304: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
        goto L_60001340;
    // 0x60001304: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
L_60001308:
    // 0x60001308: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x6000130C: nop

    // 0x60001310: sub.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x60001314: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x60001318: nop

    // 0x6000131C: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x60001320: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x60001324: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x60001328: nop

    // 0x6000132C: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x60001330: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
    // 0x60001334: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x60001338: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x6000133C: nop

L_60001340:
    // 0x60001340: lwc1        $f18, 0x34($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X34);
    // 0x60001344: nop

    // 0x60001348: mul.s       $f0, $f18, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = MUL_S(ctx->f18.fl, ctx->f12.fl);
    // 0x6000134C: c.le.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl <= ctx->f0.fl;
    // 0x60001350: nop

    // 0x60001354: bc1f        L_6000138C
    if (!c1cs) {
        // 0x60001358: nop
    
            goto L_6000138C;
    }
    // 0x60001358: nop

    // 0x6000135C: add.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x60001360: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x60001364: nop

    // 0x60001368: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x6000136C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x60001370: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x60001374: nop

    // 0x60001378: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x6000137C: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x60001380: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x60001384: b           L_600013BC
    // 0x60001388: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
        goto L_600013BC;
    // 0x60001388: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
L_6000138C:
    // 0x6000138C: sub.s       $f8, $f0, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x60001390: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x60001394: nop

    // 0x60001398: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x6000139C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x600013A0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x600013A4: nop

    // 0x600013A8: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x600013AC: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x600013B0: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x600013B4: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
    // 0x600013B8: nop

L_600013BC:
    // 0x600013BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600013C0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x600013C4: jr          $ra
    // 0x600013C8: nop

    return;
    // 0x600013C8: nop

;}
RECOMP_FUNC void ovl_stage_world4_13CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600013CC: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x600013D0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x600013D4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x600013D8: lui         $s0, 0x6000
    ctx->r16 = S32(0X6000 << 16);
    // 0x600013DC: lui         $s1, 0x6000
    ctx->r17 = S32(0X6000 << 16);
    // 0x600013E0: addiu       $s1, $s1, 0x7578
    ctx->r17 = ADD32(ctx->r17, 0X7578);
    // 0x600013E4: addiu       $s0, $s0, 0x7560
    ctx->r16 = ADD32(ctx->r16, 0X7560);
    // 0x600013E8: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x600013EC: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x600013F0: addiu       $v1, $v1, 0x75A0
    ctx->r3 = ADD32(ctx->r3, 0X75A0);
    // 0x600013F4: addiu       $v0, $v0, 0x7590
    ctx->r2 = ADD32(ctx->r2, 0X7590);
    // 0x600013F8: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x600013FC: lwc1        $f6, 0x4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4);
    // 0x60001400: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x60001404: lwc1        $f10, 0x0($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X0);
    // 0x60001408: lwc1        $f16, 0x4($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X4);
    // 0x6000140C: lwc1        $f18, 0x8($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X8);
    // 0x60001410: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60001414: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    // 0x60001418: swc1        $f6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f6.u32l;
    // 0x6000141C: swc1        $f8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f8.u32l;
    // 0x60001420: swc1        $f10, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f10.u32l;
    // 0x60001424: swc1        $f16, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f16.u32l;
    // 0x60001428: swc1        $f18, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f18.u32l;
    // 0x6000142C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x60001430: lw          $a0, 0x72BC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X72BC);
    // 0x60001434: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x60001438: jal         0x600006C4
    // 0x6000143C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_0;
    // 0x6000143C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x60001440: jal         0x60000DE4
    // 0x60001444: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world4_DE4(rdram, ctx);
        goto after_1;
    // 0x60001444: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x60001448: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x6000144C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x60001450: jal         0x600006C4
    // 0x60001454: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_2;
    // 0x60001454: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_2:
    // 0x60001458: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x6000145C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x60001460: jal         0x600003DC
    // 0x60001464: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    ovl_stage_world4_3DC(rdram, ctx);
        goto after_3;
    // 0x60001464: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    after_3:
    // 0x60001468: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000146C: lwc1        $f13, 0x7338($at)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r1, 0X7338);
    // 0x60001470: lwc1        $f12, 0x733C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X733C);
    // 0x60001474: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001478: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x6000147C: lwc1        $f9, 0x7340($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X7340);
    // 0x60001480: lwc1        $f8, 0x7344($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X7344);
    // 0x60001484: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x60001488: mul.d       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f0.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x6000148C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x60001490: c.le.d      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.d <= ctx->f0.d;
    // 0x60001494: nop

    // 0x60001498: bc1f        L_600014B4
    if (!c1cs) {
        // 0x6000149C: nop
    
            goto L_600014B4;
    }
    // 0x6000149C: nop

    // 0x600014A0: sub.d       $f10, $f0, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f10.d = ctx->f0.d - ctx->f12.d;
    // 0x600014A4: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600014A8: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x600014AC: b           L_600014E8
    // 0x600014B0: swc1        $f16, 0x7548($at)
    MEM_W(0X7548, ctx->r1) = ctx->f16.u32l;
        goto L_600014E8;
    // 0x600014B0: swc1        $f16, 0x7548($at)
    MEM_W(0X7548, ctx->r1) = ctx->f16.u32l;
L_600014B4:
    // 0x600014B4: mtc1        $zero, $f19
    ctx->f_odd[(19 - 1) * 2] = 0;
    // 0x600014B8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x600014BC: nop

    // 0x600014C0: c.lt.d      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.d < ctx->f18.d;
    // 0x600014C4: nop

    // 0x600014C8: bc1f        L_600014D8
    if (!c1cs) {
        // 0x600014CC: nop
    
            goto L_600014D8;
    }
    // 0x600014CC: nop

    // 0x600014D0: b           L_600014DC
    // 0x600014D4: add.d       $f2, $f0, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f2.d = ctx->f0.d + ctx->f12.d;
        goto L_600014DC;
    // 0x600014D4: add.d       $f2, $f0, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f2.d = ctx->f0.d + ctx->f12.d;
L_600014D8:
    // 0x600014D8: mov.d       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.d = ctx->f0.d;
L_600014DC:
    // 0x600014DC: cvt.s.d     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f4.fl = CVT_S_D(ctx->f2.d);
    // 0x600014E0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600014E4: swc1        $f4, 0x7548($at)
    MEM_W(0X7548, ctx->r1) = ctx->f4.u32l;
L_600014E8:
    // 0x600014E8: lwc1        $f0, 0x0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X0);
    // 0x600014EC: lwc1        $f2, 0x0($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X0);
    // 0x600014F0: nop

    // 0x600014F4: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x600014F8: nop

    // 0x600014FC: bc1f        L_60001518
    if (!c1cs) {
        // 0x60001500: nop
    
            goto L_60001518;
    }
    // 0x60001500: nop

    // 0x60001504: sub.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x60001508: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000150C: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x60001510: b           L_60001524
    // 0x60001514: swc1        $f8, 0x754C($at)
    MEM_W(0X754C, ctx->r1) = ctx->f8.u32l;
        goto L_60001524;
    // 0x60001514: swc1        $f8, 0x754C($at)
    MEM_W(0X754C, ctx->r1) = ctx->f8.u32l;
L_60001518:
    // 0x60001518: sub.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x6000151C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001520: swc1        $f10, 0x754C($at)
    MEM_W(0X754C, ctx->r1) = ctx->f10.u32l;
L_60001524:
    // 0x60001524: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x60001528: lwc1        $f2, 0x8($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X8);
    // 0x6000152C: nop

    // 0x60001530: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x60001534: nop

    // 0x60001538: bc1f        L_60001554
    if (!c1cs) {
        // 0x6000153C: nop
    
            goto L_60001554;
    }
    // 0x6000153C: nop

    // 0x60001540: sub.s       $f16, $f0, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x60001544: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001548: neg.s       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = -ctx->f16.fl;
    // 0x6000154C: b           L_60001560
    // 0x60001550: swc1        $f18, 0x7550($at)
    MEM_W(0X7550, ctx->r1) = ctx->f18.u32l;
        goto L_60001560;
    // 0x60001550: swc1        $f18, 0x7550($at)
    MEM_W(0X7550, ctx->r1) = ctx->f18.u32l;
L_60001554:
    // 0x60001554: sub.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x60001558: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000155C: swc1        $f4, 0x7550($at)
    MEM_W(0X7550, ctx->r1) = ctx->f4.u32l;
L_60001560:
    // 0x60001560: jal         0x60000418
    // 0x60001564: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    ovl_stage_world4_418(rdram, ctx);
        goto after_4;
    // 0x60001564: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_4:
    // 0x60001568: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x6000156C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001570: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x60001574: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x60001578: swc1        $f0, 0x7544($at)
    MEM_W(0X7544, ctx->r1) = ctx->f0.u32l;
    // 0x6000157C: jr          $ra
    // 0x60001580: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x60001580: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_stage_world4_1584(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001584: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001588: jr          $ra
    // 0x6000158C: sh          $a0, 0x75C2($at)
    MEM_H(0X75C2, ctx->r1) = ctx->r4;
    return;
    // 0x6000158C: sh          $a0, 0x75C2($at)
    MEM_H(0X75C2, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void ovl_stage_world4_1590(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001590: jr          $ra
    // 0x60001594: nop

    return;
    // 0x60001594: nop

;}
RECOMP_FUNC void ovl_stage_world4_1598(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001598: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x6000159C: addiu       $v0, $v0, 0x75C0
    ctx->r2 = ADD32(ctx->r2, 0X75C0);
    // 0x600015A0: sb          $a0, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r4;
    // 0x600015A4: jr          $ra
    // 0x600015A8: sb          $a1, 0x7($v0)
    MEM_B(0X7, ctx->r2) = ctx->r5;
    return;
    // 0x600015A8: sb          $a1, 0x7($v0)
    MEM_B(0X7, ctx->r2) = ctx->r5;
;}
RECOMP_FUNC void ovl_stage_world4_15AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600015AC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x600015B0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x600015B4: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600015B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600015BC: lw          $a0, 0x72BC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X72BC);
    // 0x600015C0: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x600015C4: jal         0x600006C4
    // 0x600015C8: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_0;
    // 0x600015C8: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    after_0:
    // 0x600015CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600015D0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x600015D4: jr          $ra
    // 0x600015D8: nop

    return;
    // 0x600015D8: nop

;}
RECOMP_FUNC void ovl_stage_world4_15DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600015DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600015E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600015E4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600015E8: jal         0x60001598
    // 0x600015EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world4_1598(rdram, ctx);
        goto after_0;
    // 0x600015EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x600015F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600015F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600015F8: jr          $ra
    // 0x600015FC: nop

    return;
    // 0x600015FC: nop

;}
RECOMP_FUNC void ovl_stage_world4_1600(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001600: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60001604: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60001608: jal         0x600015DC
    // 0x6000160C: nop

    ovl_stage_world4_15DC(rdram, ctx);
        goto after_0;
    // 0x6000160C: nop

    after_0:
    // 0x60001610: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60001614: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60001618: jr          $ra
    // 0x6000161C: nop

    return;
    // 0x6000161C: nop

;}
RECOMP_FUNC void ovl_stage_world4_1620(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001620: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001624: lwc1        $f12, 0x7554($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X7554);
    // 0x60001628: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x6000162C: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x60001630: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60001634: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x60001638: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    // 0x6000163C: jal         0x60001250
    // 0x60001640: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    ovl_stage_world4_1250(rdram, ctx);
        goto after_0;
    // 0x60001640: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x60001644: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x60001648: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x6000164C: jal         0x60001598
    // 0x60001650: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    ovl_stage_world4_1598(rdram, ctx);
        goto after_1;
    // 0x60001650: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    after_1:
    // 0x60001654: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60001658: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x6000165C: jr          $ra
    // 0x60001660: nop

    return;
    // 0x60001660: nop

;}
RECOMP_FUNC void ovl_stage_world4_1664(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001664: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60001668: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x6000166C: jal         0x6000034C
    // 0x60001670: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    ovl_stage_world4_34C(rdram, ctx);
        goto after_0;
    // 0x60001670: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_0:
    // 0x60001674: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x60001678: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x6000167C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x60001680: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x60001684: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60001688: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x6000168C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001690: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60001694: jr          $ra
    // 0x60001698: swc1        $f10, 0x7554($at)
    MEM_W(0X7554, ctx->r1) = ctx->f10.u32l;
    return;
    // 0x60001698: swc1        $f10, 0x7554($at)
    MEM_W(0X7554, ctx->r1) = ctx->f10.u32l;
;}
RECOMP_FUNC void ovl_stage_world4_169C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000169C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600016A0: lwc1        $f4, 0x7550($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7550);
    // 0x600016A4: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600016A8: lwc1        $f6, 0x754C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X754C);
    // 0x600016AC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600016B0: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x600016B4: nop

    // 0x600016B8: bc1f        L_60001708
    if (!c1cs) {
        // 0x600016BC: nop
    
            goto L_60001708;
    }
    // 0x600016BC: nop

    // 0x600016C0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600016C4: lwc1        $f8, 0x7560($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X7560);
    // 0x600016C8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600016CC: lwc1        $f10, 0x7578($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X7578);
    // 0x600016D0: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x600016D4: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x600016D8: nop

    // 0x600016DC: bc1f        L_600016F8
    if (!c1cs) {
        // 0x600016E0: nop
    
            goto L_600016F8;
    }
    // 0x600016E0: nop

    // 0x600016E4: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x600016E8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x600016EC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600016F0: jr          $ra
    // 0x600016F4: swc1        $f16, 0x7554($at)
    MEM_W(0X7554, ctx->r1) = ctx->f16.u32l;
    return;
    // 0x600016F4: swc1        $f16, 0x7554($at)
    MEM_W(0X7554, ctx->r1) = ctx->f16.u32l;
L_600016F8:
    // 0x600016F8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x600016FC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001700: jr          $ra
    // 0x60001704: swc1        $f18, 0x7554($at)
    MEM_W(0X7554, ctx->r1) = ctx->f18.u32l;
    return;
    // 0x60001704: swc1        $f18, 0x7554($at)
    MEM_W(0X7554, ctx->r1) = ctx->f18.u32l;
L_60001708:
    // 0x60001708: lwc1        $f4, 0x7568($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7568);
    // 0x6000170C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001710: lwc1        $f6, 0x7580($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X7580);
    // 0x60001714: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x60001718: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x6000171C: nop

    // 0x60001720: bc1f        L_60001738
    if (!c1cs) {
        // 0x60001724: nop
    
            goto L_60001738;
    }
    // 0x60001724: nop

    // 0x60001728: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x6000172C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001730: jr          $ra
    // 0x60001734: swc1        $f8, 0x7554($at)
    MEM_W(0X7554, ctx->r1) = ctx->f8.u32l;
    return;
    // 0x60001734: swc1        $f8, 0x7554($at)
    MEM_W(0X7554, ctx->r1) = ctx->f8.u32l;
L_60001738:
    // 0x60001738: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x6000173C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001740: swc1        $f10, 0x7554($at)
    MEM_W(0X7554, ctx->r1) = ctx->f10.u32l;
    // 0x60001744: jr          $ra
    // 0x60001748: nop

    return;
    // 0x60001748: nop

;}
RECOMP_FUNC void ovl_stage_world4_174C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000174C: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60001750: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x60001754: addiu       $v1, $v1, 0x7578
    ctx->r3 = ADD32(ctx->r3, 0X7578);
    // 0x60001758: addiu       $v0, $v0, 0x7560
    ctx->r2 = ADD32(ctx->r2, 0X7560);
    // 0x6000175C: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x60001760: lwc1        $f16, 0x0($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X0);
    // 0x60001764: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60001768: c.lt.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl < ctx->f16.fl;
    // 0x6000176C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60001770: bc1f        L_60001784
    if (!c1cs) {
        // 0x60001774: lui         $at, 0x4248
        ctx->r1 = S32(0X4248 << 16);
            goto L_60001784;
    }
    // 0x60001774: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x60001778: sub.s       $f0, $f14, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f14.fl - ctx->f16.fl;
    // 0x6000177C: b           L_60001788
    // 0x60001780: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_60001788;
    // 0x60001780: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_60001784:
    // 0x60001784: sub.s       $f0, $f14, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f14.fl - ctx->f16.fl;
L_60001788:
    // 0x60001788: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x6000178C: nop

    // 0x60001790: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x60001794: nop

    // 0x60001798: bc1f        L_600017DC
    if (!c1cs) {
        // 0x6000179C: nop
    
            goto L_600017DC;
    }
    // 0x6000179C: nop

    // 0x600017A0: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x600017A4: lwc1        $f6, 0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8);
    // 0x600017A8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600017AC: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x600017B0: nop

    // 0x600017B4: bc1f        L_600017D0
    if (!c1cs) {
        // 0x600017B8: nop
    
            goto L_600017D0;
    }
    // 0x600017B8: nop

    // 0x600017BC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x600017C0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x600017C4: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600017C8: b           L_60001854
    // 0x600017CC: swc1        $f8, 0x7554($at)
    MEM_W(0X7554, ctx->r1) = ctx->f8.u32l;
        goto L_60001854;
    // 0x600017CC: swc1        $f8, 0x7554($at)
    MEM_W(0X7554, ctx->r1) = ctx->f8.u32l;
L_600017D0:
    // 0x600017D0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x600017D4: b           L_60001854
    // 0x600017D8: swc1        $f10, 0x7554($at)
    MEM_W(0X7554, ctx->r1) = ctx->f10.u32l;
        goto L_60001854;
    // 0x600017D8: swc1        $f10, 0x7554($at)
    MEM_W(0X7554, ctx->r1) = ctx->f10.u32l;
L_600017DC:
    // 0x600017DC: lwc1        $f2, 0x8($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X8);
    // 0x600017E0: lwc1        $f12, 0x8($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X8);
    // 0x600017E4: nop

    // 0x600017E8: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x600017EC: nop

    // 0x600017F0: bc1f        L_60001804
    if (!c1cs) {
        // 0x600017F4: nop
    
            goto L_60001804;
    }
    // 0x600017F4: nop

    // 0x600017F8: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x600017FC: b           L_60001808
    // 0x60001800: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_60001808;
    // 0x60001800: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_60001804:
    // 0x60001804: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
L_60001808:
    // 0x60001808: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x6000180C: nop

    // 0x60001810: bc1f        L_6000184C
    if (!c1cs) {
        // 0x60001814: nop
    
            goto L_6000184C;
    }
    // 0x60001814: nop

    // 0x60001818: c.lt.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl < ctx->f16.fl;
    // 0x6000181C: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x60001820: bc1f        L_6000183C
    if (!c1cs) {
        // 0x60001824: nop
    
            goto L_6000183C;
    }
    // 0x60001824: nop

    // 0x60001828: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x6000182C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60001830: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001834: b           L_60001854
    // 0x60001838: swc1        $f4, 0x7554($at)
    MEM_W(0X7554, ctx->r1) = ctx->f4.u32l;
        goto L_60001854;
    // 0x60001838: swc1        $f4, 0x7554($at)
    MEM_W(0X7554, ctx->r1) = ctx->f4.u32l;
L_6000183C:
    // 0x6000183C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60001840: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001844: b           L_60001854
    // 0x60001848: swc1        $f6, 0x7554($at)
    MEM_W(0X7554, ctx->r1) = ctx->f6.u32l;
        goto L_60001854;
    // 0x60001848: swc1        $f6, 0x7554($at)
    MEM_W(0X7554, ctx->r1) = ctx->f6.u32l;
L_6000184C:
    // 0x6000184C: jal         0x6000169C
    // 0x60001850: nop

    ovl_stage_world4_169C(rdram, ctx);
        goto after_0;
    // 0x60001850: nop

    after_0:
L_60001854:
    // 0x60001854: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60001858: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x6000185C: jr          $ra
    // 0x60001860: nop

    return;
    // 0x60001860: nop

;}
RECOMP_FUNC void ovl_stage_world4_1864(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001864: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60001868: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x6000186C: addiu       $v1, $v1, 0x7590
    ctx->r3 = ADD32(ctx->r3, 0X7590);
    // 0x60001870: addiu       $v0, $v0, 0x7560
    ctx->r2 = ADD32(ctx->r2, 0X7560);
    // 0x60001874: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x60001878: lwc1        $f2, 0x0($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X0);
    // 0x6000187C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x60001880: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x60001884: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x60001888: bc1f        L_6000189C
    if (!c1cs) {
        // 0x6000188C: nop
    
            goto L_6000189C;
    }
    // 0x6000188C: nop

    // 0x60001890: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x60001894: b           L_600018A0
    // 0x60001898: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
        goto L_600018A0;
    // 0x60001898: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
L_6000189C:
    // 0x6000189C: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
L_600018A0:
    // 0x600018A0: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x600018A4: nop

    // 0x600018A8: bc1f        L_60001930
    if (!c1cs) {
        // 0x600018AC: nop
    
            goto L_60001930;
    }
    // 0x600018AC: nop

    // 0x600018B0: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x600018B4: lwc1        $f2, 0x4($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X4);
    // 0x600018B8: nop

    // 0x600018BC: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x600018C0: nop

    // 0x600018C4: bc1f        L_600018D8
    if (!c1cs) {
        // 0x600018C8: nop
    
            goto L_600018D8;
    }
    // 0x600018C8: nop

    // 0x600018CC: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x600018D0: b           L_600018DC
    // 0x600018D4: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
        goto L_600018DC;
    // 0x600018D4: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
L_600018D8:
    // 0x600018D8: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
L_600018DC:
    // 0x600018DC: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x600018E0: nop

    // 0x600018E4: bc1f        L_60001930
    if (!c1cs) {
        // 0x600018E8: nop
    
            goto L_60001930;
    }
    // 0x600018E8: nop

    // 0x600018EC: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x600018F0: lwc1        $f2, 0x8($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X8);
    // 0x600018F4: nop

    // 0x600018F8: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x600018FC: nop

    // 0x60001900: bc1f        L_60001914
    if (!c1cs) {
        // 0x60001904: nop
    
            goto L_60001914;
    }
    // 0x60001904: nop

    // 0x60001908: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x6000190C: b           L_60001918
    // 0x60001910: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
        goto L_60001918;
    // 0x60001910: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
L_60001914:
    // 0x60001914: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
L_60001918:
    // 0x60001918: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x6000191C: nop

    // 0x60001920: bc1f        L_60001934
    if (!c1cs) {
        // 0x60001924: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_60001934;
    }
    // 0x60001924: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x60001928: jr          $ra
    // 0x6000192C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x6000192C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_60001930:
    // 0x60001930: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_60001934:
    // 0x60001934: jr          $ra
    // 0x60001938: nop

    return;
    // 0x60001938: nop

;}
RECOMP_FUNC void ovl_stage_world4_193C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000193C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x60001940: lui         $t6, 0x6000
    ctx->r14 = S32(0X6000 << 16);
    // 0x60001944: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60001948: addiu       $t6, $t6, 0x7314
    ctx->r14 = ADD32(ctx->r14, 0X7314);
    // 0x6000194C: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x60001950: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x60001954: sw          $at, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r1;
    // 0x60001958: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x6000195C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60001960: sw          $t9, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r25;
    // 0x60001964: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x60001968: addiu       $a0, $a0, 0x7560
    ctx->r4 = ADD32(ctx->r4, 0X7560);
    // 0x6000196C: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x60001970: jal         0x600003DC
    // 0x60001974: sw          $at, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r1;
    ovl_stage_world4_3DC(rdram, ctx);
        goto after_0;
    // 0x60001974: sw          $at, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r1;
    after_0:
    // 0x60001978: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000197C: lwc1        $f13, 0x7348($at)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r1, 0X7348);
    // 0x60001980: lwc1        $f12, 0x734C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X734C);
    // 0x60001984: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001988: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x6000198C: lwc1        $f9, 0x7350($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X7350);
    // 0x60001990: lwc1        $f8, 0x7354($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X7354);
    // 0x60001994: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x60001998: mul.d       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f0.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x6000199C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600019A0: c.le.d      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.d <= ctx->f0.d;
    // 0x600019A4: nop

    // 0x600019A8: bc1f        L_600019BC
    if (!c1cs) {
        // 0x600019AC: nop
    
            goto L_600019BC;
    }
    // 0x600019AC: nop

    // 0x600019B0: sub.d       $f10, $f0, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f10.d = ctx->f0.d - ctx->f12.d;
    // 0x600019B4: b           L_600019E8
    // 0x600019B8: cvt.s.d     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f14.fl = CVT_S_D(ctx->f10.d);
        goto L_600019E8;
    // 0x600019B8: cvt.s.d     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f14.fl = CVT_S_D(ctx->f10.d);
L_600019BC:
    // 0x600019BC: mtc1        $zero, $f17
    ctx->f_odd[(17 - 1) * 2] = 0;
    // 0x600019C0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x600019C4: nop

    // 0x600019C8: c.lt.d      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.d < ctx->f16.d;
    // 0x600019CC: nop

    // 0x600019D0: bc1f        L_600019E0
    if (!c1cs) {
        // 0x600019D4: nop
    
            goto L_600019E0;
    }
    // 0x600019D4: nop

    // 0x600019D8: b           L_600019E4
    // 0x600019DC: add.d       $f2, $f0, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f2.d = ctx->f0.d + ctx->f12.d;
        goto L_600019E4;
    // 0x600019DC: add.d       $f2, $f0, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f2.d = ctx->f0.d + ctx->f12.d;
L_600019E0:
    // 0x600019E0: mov.d       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.d = ctx->f0.d;
L_600019E4:
    // 0x600019E4: cvt.s.d     $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f14.fl = CVT_S_D(ctx->f2.d);
L_600019E8:
    // 0x600019E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600019EC: swc1        $f14, 0x7554($at)
    MEM_W(0X7554, ctx->r1) = ctx->f14.u32l;
    // 0x600019F0: jr          $ra
    // 0x600019F4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x600019F4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_stage_world4_19F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600019F8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600019FC: lwc1        $f4, 0x7548($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7548);
    // 0x60001A00: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60001A04: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x60001A08: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60001A0C: addiu       $v0, $v0, 0x7554
    ctx->r2 = ADD32(ctx->r2, 0X7554);
    // 0x60001A10: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001A14: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    // 0x60001A18: lwc1        $f8, 0x7544($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X7544);
    // 0x60001A1C: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x60001A20: c.le.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl <= ctx->f6.fl;
    // 0x60001A24: nop

    // 0x60001A28: bc1f        L_60001A8C
    if (!c1cs) {
        // 0x60001A2C: nop
    
            goto L_60001A8C;
    }
    // 0x60001A2C: nop

    // 0x60001A30: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x60001A34: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x60001A38: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x60001A3C: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x60001A40: nop

    // 0x60001A44: add.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x60001A48: c.le.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl <= ctx->f0.fl;
    // 0x60001A4C: nop

    // 0x60001A50: bc1f        L_60001A64
    if (!c1cs) {
        // 0x60001A54: nop
    
            goto L_60001A64;
    }
    // 0x60001A54: nop

    // 0x60001A58: sub.s       $f18, $f0, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x60001A5C: jr          $ra
    // 0x60001A60: swc1        $f18, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f18.u32l;
    return;
    // 0x60001A60: swc1        $f18, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f18.u32l;
L_60001A64:
    // 0x60001A64: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x60001A68: nop

    // 0x60001A6C: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x60001A70: nop

    // 0x60001A74: bc1f        L_60001A84
    if (!c1cs) {
        // 0x60001A78: nop
    
            goto L_60001A84;
    }
    // 0x60001A78: nop

    // 0x60001A7C: b           L_60001A88
    // 0x60001A80: add.s       $f2, $f0, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f12.fl;
        goto L_60001A88;
    // 0x60001A80: add.s       $f2, $f0, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f12.fl;
L_60001A84:
    // 0x60001A84: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_60001A88:
    // 0x60001A88: swc1        $f2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f2.u32l;
L_60001A8C:
    // 0x60001A8C: jr          $ra
    // 0x60001A90: nop

    return;
    // 0x60001A90: nop

;}
RECOMP_FUNC void ovl_stage_world4_1A94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001A94: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001A98: lwc1        $f0, 0x7560($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7560);
    // 0x60001A9C: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x60001AA0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60001AA4: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001AA8: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x60001AAC: nop

    // 0x60001AB0: bc1f        L_60001B0C
    if (!c1cs) {
        // 0x60001AB4: nop
    
            goto L_60001B0C;
    }
    // 0x60001AB4: nop

    // 0x60001AB8: lwc1        $f6, 0x7358($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X7358);
    // 0x60001ABC: lui         $at, 0x442F
    ctx->r1 = S32(0X442F << 16);
    // 0x60001AC0: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x60001AC4: nop

    // 0x60001AC8: bc1f        L_60001B0C
    if (!c1cs) {
        // 0x60001ACC: nop
    
            goto L_60001B0C;
    }
    // 0x60001ACC: nop

    // 0x60001AD0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x60001AD4: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x60001AD8: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x60001ADC: nop

    // 0x60001AE0: bc1f        L_60001AFC
    if (!c1cs) {
        // 0x60001AE4: nop
    
            goto L_60001AFC;
    }
    // 0x60001AE4: nop

    // 0x60001AE8: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x60001AEC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x60001AF0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001AF4: jr          $ra
    // 0x60001AF8: swc1        $f10, 0x7554($at)
    MEM_W(0X7554, ctx->r1) = ctx->f10.u32l;
    return;
    // 0x60001AF8: swc1        $f10, 0x7554($at)
    MEM_W(0X7554, ctx->r1) = ctx->f10.u32l;
L_60001AFC:
    // 0x60001AFC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x60001B00: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001B04: jr          $ra
    // 0x60001B08: swc1        $f16, 0x7554($at)
    MEM_W(0X7554, ctx->r1) = ctx->f16.u32l;
    return;
    // 0x60001B08: swc1        $f16, 0x7554($at)
    MEM_W(0X7554, ctx->r1) = ctx->f16.u32l;
L_60001B0C:
    // 0x60001B0C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x60001B10: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001B14: swc1        $f18, 0x7554($at)
    MEM_W(0X7554, ctx->r1) = ctx->f18.u32l;
    // 0x60001B18: jr          $ra
    // 0x60001B1C: nop

    return;
    // 0x60001B1C: nop

;}
RECOMP_FUNC void ovl_stage_world4_1B20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001B20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60001B24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60001B28: jal         0x6000034C
    // 0x60001B2C: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    ovl_stage_world4_34C(rdram, ctx);
        goto after_0;
    // 0x60001B2C: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_0:
    // 0x60001B30: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x60001B34: addiu       $v1, $v1, 0x7538
    ctx->r3 = ADD32(ctx->r3, 0X7538);
    // 0x60001B38: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x60001B3C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x60001B40: beq         $a1, $t6, L_60001B50
    if (ctx->r5 == ctx->r14) {
        // 0x60001B44: slti        $at, $v0, 0x5B
        ctx->r1 = SIGNED(ctx->r2) < 0X5B ? 1 : 0;
            goto L_60001B50;
    }
    // 0x60001B44: slti        $at, $v0, 0x5B
    ctx->r1 = SIGNED(ctx->r2) < 0X5B ? 1 : 0;
    // 0x60001B48: beq         $at, $zero, L_60001CA4
    if (ctx->r1 == 0) {
        // 0x60001B4C: addiu       $a0, $zero, 0x14
        ctx->r4 = ADD32(0, 0X14);
            goto L_60001CA4;
    }
    // 0x60001B4C: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
L_60001B50:
    // 0x60001B50: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x60001B54: jal         0x6000034C
    // 0x60001B58: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    ovl_stage_world4_34C(rdram, ctx);
        goto after_1;
    // 0x60001B58: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_1:
    // 0x60001B5C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001B60: sw          $v0, 0x7540($at)
    MEM_W(0X7540, ctx->r1) = ctx->r2;
    // 0x60001B64: jal         0x6000034C
    // 0x60001B68: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_stage_world4_34C(rdram, ctx);
        goto after_2;
    // 0x60001B68: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_2:
    // 0x60001B6C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60001B70: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x60001B74: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001B78: sw          $t7, 0x753C($at)
    MEM_W(0X753C, ctx->r1) = ctx->r15;
    // 0x60001B7C: addiu       $a0, $a0, 0x7560
    ctx->r4 = ADD32(ctx->r4, 0X7560);
    // 0x60001B80: lwc1        $f6, 0x4($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X4);
    // 0x60001B84: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x60001B88: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x60001B8C: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x60001B90: addiu       $v1, $v1, 0x7540
    ctx->r3 = ADD32(ctx->r3, 0X7540);
    // 0x60001B94: bc1f        L_60001BC0
    if (!c1cs) {
        // 0x60001B98: lui         $at, 0x6000
        ctx->r1 = S32(0X6000 << 16);
            goto L_60001BC0;
    }
    // 0x60001B98: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001B9C: lwc1        $f8, 0x735C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X735C);
    // 0x60001BA0: lwc1        $f10, 0x8($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X8);
    // 0x60001BA4: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x60001BA8: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x60001BAC: nop

    // 0x60001BB0: bc1f        L_60001BC0
    if (!c1cs) {
        // 0x60001BB4: nop
    
            goto L_60001BC0;
    }
    // 0x60001BB4: nop

    // 0x60001BB8: b           L_60001C00
    // 0x60001BBC: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
        goto L_60001C00;
    // 0x60001BBC: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
L_60001BC0:
    // 0x60001BC0: lui         $t9, 0x6000
    ctx->r25 = S32(0X6000 << 16);
    // 0x60001BC4: lw          $t9, 0x75B0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X75B0);
    // 0x60001BC8: nop

    // 0x60001BCC: lw          $t0, 0x2C($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X2C);
    // 0x60001BD0: nop

    // 0x60001BD4: slti        $at, $t0, 0x4
    ctx->r1 = SIGNED(ctx->r8) < 0X4 ? 1 : 0;
    // 0x60001BD8: beq         $at, $zero, L_60001C00
    if (ctx->r1 == 0) {
        // 0x60001BDC: nop
    
            goto L_60001C00;
    }
    // 0x60001BDC: nop

    // 0x60001BE0: jal         0x6000034C
    // 0x60001BE4: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    ovl_stage_world4_34C(rdram, ctx);
        goto after_3;
    // 0x60001BE4: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_3:
    // 0x60001BE8: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x60001BEC: slti        $at, $v0, 0x60
    ctx->r1 = SIGNED(ctx->r2) < 0X60 ? 1 : 0;
    // 0x60001BF0: beq         $at, $zero, L_60001C00
    if (ctx->r1 == 0) {
        // 0x60001BF4: addiu       $v1, $v1, 0x7540
        ctx->r3 = ADD32(ctx->r3, 0X7540);
            goto L_60001C00;
    }
    // 0x60001BF4: addiu       $v1, $v1, 0x7540
    ctx->r3 = ADD32(ctx->r3, 0X7540);
    // 0x60001BF8: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x60001BFC: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
L_60001C00:
    // 0x60001C00: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001C04: sw          $zero, 0x755C($at)
    MEM_W(0X755C, ctx->r1) = 0;
    // 0x60001C08: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x60001C0C: nop

    // 0x60001C10: sltiu       $at, $t2, 0x6
    ctx->r1 = ctx->r10 < 0X6 ? 1 : 0;
    // 0x60001C14: beq         $at, $zero, L_60001CB8
    if (ctx->r1 == 0) {
        // 0x60001C18: sll         $t2, $t2, 2
        ctx->r10 = S32(ctx->r10 << 2);
            goto L_60001CB8;
    }
    // 0x60001C18: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x60001C1C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001C20: addu        $at, $at, $t2
    gpr jr_addend_60001C2C = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x60001C24: lw          $t2, 0x7360($at)
    ctx->r10 = ADD32(ctx->r1, 0X7360);
    // 0x60001C28: nop

    // 0x60001C2C: jr          $t2
    // 0x60001C30: nop

    switch (jr_addend_60001C2C >> 2) {
        case 0: goto L_60001C34; break;
        case 1: goto L_60001C44; break;
        case 2: goto L_60001C54; break;
        case 3: goto L_60001C64; break;
        case 4: goto L_60001C84; break;
        case 5: goto L_60001C94; break;
        default: switch_error(__func__, 0x60001C2C, 0x60007360);
    }
    // 0x60001C30: nop

L_60001C34:
    // 0x60001C34: jal         0x60001664
    // 0x60001C38: nop

    ovl_stage_world4_1664(rdram, ctx);
        goto after_4;
    // 0x60001C38: nop

    after_4:
    // 0x60001C3C: b           L_60001CBC
    // 0x60001C40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60001CBC;
    // 0x60001C40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001C44:
    // 0x60001C44: jal         0x6000169C
    // 0x60001C48: nop

    ovl_stage_world4_169C(rdram, ctx);
        goto after_5;
    // 0x60001C48: nop

    after_5:
    // 0x60001C4C: b           L_60001CBC
    // 0x60001C50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60001CBC;
    // 0x60001C50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001C54:
    // 0x60001C54: jal         0x6000174C
    // 0x60001C58: nop

    ovl_stage_world4_174C(rdram, ctx);
        goto after_6;
    // 0x60001C58: nop

    after_6:
    // 0x60001C5C: b           L_60001CBC
    // 0x60001C60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60001CBC;
    // 0x60001C60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001C64:
    // 0x60001C64: jal         0x6000034C
    // 0x60001C68: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    ovl_stage_world4_34C(rdram, ctx);
        goto after_7;
    // 0x60001C68: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_7:
    // 0x60001C6C: addiu       $t3, $v0, 0x8
    ctx->r11 = ADD32(ctx->r2, 0X8);
    // 0x60001C70: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001C74: jal         0x6000193C
    // 0x60001C78: sw          $t3, 0x753C($at)
    MEM_W(0X753C, ctx->r1) = ctx->r11;
    ovl_stage_world4_193C(rdram, ctx);
        goto after_8;
    // 0x60001C78: sw          $t3, 0x753C($at)
    MEM_W(0X753C, ctx->r1) = ctx->r11;
    after_8:
    // 0x60001C7C: b           L_60001CBC
    // 0x60001C80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60001CBC;
    // 0x60001C80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001C84:
    // 0x60001C84: jal         0x600019F8
    // 0x60001C88: nop

    ovl_stage_world4_19F8(rdram, ctx);
        goto after_9;
    // 0x60001C88: nop

    after_9:
    // 0x60001C8C: b           L_60001CBC
    // 0x60001C90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60001CBC;
    // 0x60001C90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001C94:
    // 0x60001C94: jal         0x60001A94
    // 0x60001C98: nop

    ovl_stage_world4_1A94(rdram, ctx);
        goto after_10;
    // 0x60001C98: nop

    after_10:
    // 0x60001C9C: b           L_60001CBC
    // 0x60001CA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60001CBC;
    // 0x60001CA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001CA4:
    // 0x60001CA4: jal         0x6000034C
    // 0x60001CA8: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
    ovl_stage_world4_34C(rdram, ctx);
        goto after_11;
    // 0x60001CA8: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
    after_11:
    // 0x60001CAC: addiu       $t4, $v0, 0x4
    ctx->r12 = ADD32(ctx->r2, 0X4);
    // 0x60001CB0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001CB4: sw          $t4, 0x753C($at)
    MEM_W(0X753C, ctx->r1) = ctx->r12;
L_60001CB8:
    // 0x60001CB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001CBC:
    // 0x60001CBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60001CC0: jr          $ra
    // 0x60001CC4: nop

    return;
    // 0x60001CC4: nop

;}
RECOMP_FUNC void ovl_stage_world4_1CC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001CC8: lui         $t6, 0x6000
    ctx->r14 = S32(0X6000 << 16);
    // 0x60001CCC: lw          $t6, 0x75B4($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X75B4);
    // 0x60001CD0: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x60001CD4: andi        $t7, $t6, 0x82B7
    ctx->r15 = ctx->r14 & 0X82B7;
    // 0x60001CD8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x60001CDC: bne         $t7, $zero, L_60001CEC
    if (ctx->r15 != 0) {
        // 0x60001CE0: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_60001CEC;
    }
    // 0x60001CE0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x60001CE4: b           L_60001CF0
    // 0x60001CE8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_60001CF0;
    // 0x60001CE8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_60001CEC:
    // 0x60001CEC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_60001CF0:
    // 0x60001CF0: beq         $v1, $zero, L_60001D08
    if (ctx->r3 == 0) {
        // 0x60001CF4: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_60001D08;
    }
    // 0x60001CF4: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60001CF8: lw          $a0, 0x72BC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X72BC);
    // 0x60001CFC: jal         0x60000F28
    // 0x60001D00: nop

    ovl_stage_world4_F28(rdram, ctx);
        goto after_0;
    // 0x60001D00: nop

    after_0:
    // 0x60001D04: bne         $v0, $zero, L_60001D2C
    if (ctx->r2 != 0) {
        // 0x60001D08: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_60001D2C;
    }
L_60001D08:
    // 0x60001D08: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x60001D0C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001D10: sw          $t8, 0x7538($at)
    MEM_W(0X7538, ctx->r1) = ctx->r24;
    // 0x60001D14: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001D18: addiu       $t9, $zero, 0x1E
    ctx->r25 = ADD32(0, 0X1E);
    // 0x60001D1C: sw          $t9, 0x753C($at)
    MEM_W(0X753C, ctx->r1) = ctx->r25;
    // 0x60001D20: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001D24: b           L_600020BC
    // 0x60001D28: sw          $zero, 0x755C($at)
    MEM_W(0X755C, ctx->r1) = 0;
        goto L_600020BC;
    // 0x60001D28: sw          $zero, 0x755C($at)
    MEM_W(0X755C, ctx->r1) = 0;
L_60001D2C:
    // 0x60001D2C: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60001D30: addiu       $v0, $v0, 0x7538
    ctx->r2 = ADD32(ctx->r2, 0X7538);
    // 0x60001D34: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x60001D38: addiu       $s0, $zero, 0x7
    ctx->r16 = ADD32(0, 0X7);
    // 0x60001D3C: bne         $s0, $t0, L_60001D80
    if (ctx->r16 != ctx->r8) {
        // 0x60001D40: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_60001D80;
    }
    // 0x60001D40: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x60001D44: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
    // 0x60001D48: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x60001D4C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001D50: sw          $t1, 0x7540($at)
    MEM_W(0X7540, ctx->r1) = ctx->r9;
    // 0x60001D54: lui         $s0, 0x6000
    ctx->r16 = S32(0X6000 << 16);
    // 0x60001D58: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001D5C: addiu       $t2, $zero, 0xF
    ctx->r10 = ADD32(0, 0XF);
    // 0x60001D60: addiu       $s0, $s0, 0x75AC
    ctx->r16 = ADD32(ctx->r16, 0X75AC);
    // 0x60001D64: sw          $t2, 0x753C($at)
    MEM_W(0X753C, ctx->r1) = ctx->r10;
    // 0x60001D68: jal         0x600015DC
    // 0x60001D6C: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    ovl_stage_world4_15DC(rdram, ctx);
        goto after_1;
    // 0x60001D6C: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    after_1:
    // 0x60001D70: jal         0x600015AC
    // 0x60001D74: addiu       $a0, $zero, 0x33
    ctx->r4 = ADD32(0, 0X33);
    ovl_stage_world4_15AC(rdram, ctx);
        goto after_2;
    // 0x60001D74: addiu       $a0, $zero, 0x33
    ctx->r4 = ADD32(0, 0X33);
    after_2:
    // 0x60001D78: b           L_600020C0
    // 0x60001D7C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_600020C0;
    // 0x60001D7C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_60001D80:
    // 0x60001D80: jal         0x6000034C
    // 0x60001D84: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    ovl_stage_world4_34C(rdram, ctx);
        goto after_3;
    // 0x60001D84: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_3:
    // 0x60001D88: lui         $t3, 0x6000
    ctx->r11 = S32(0X6000 << 16);
    // 0x60001D8C: lw          $t3, 0x75B0($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X75B0);
    // 0x60001D90: lui         $t1, 0x6000
    ctx->r9 = S32(0X6000 << 16);
    // 0x60001D94: lw          $t4, 0x2C($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X2C);
    // 0x60001D98: nop

    // 0x60001D9C: slti        $at, $t4, 0x4
    ctx->r1 = SIGNED(ctx->r12) < 0X4 ? 1 : 0;
    // 0x60001DA0: beq         $at, $zero, L_60001E68
    if (ctx->r1 == 0) {
        // 0x60001DA4: slti        $at, $v0, 0x29
        ctx->r1 = SIGNED(ctx->r2) < 0X29 ? 1 : 0;
            goto L_60001E68;
    }
    // 0x60001DA4: slti        $at, $v0, 0x29
    ctx->r1 = SIGNED(ctx->r2) < 0X29 ? 1 : 0;
    // 0x60001DA8: bne         $at, $zero, L_60001DD0
    if (ctx->r1 != 0) {
        // 0x60001DAC: lui         $t5, 0x6000
        ctx->r13 = S32(0X6000 << 16);
            goto L_60001DD0;
    }
    // 0x60001DAC: lui         $t5, 0x6000
    ctx->r13 = S32(0X6000 << 16);
    // 0x60001DB0: lw          $t5, 0x75B8($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X75B8);
    // 0x60001DB4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x60001DB8: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x60001DBC: beq         $t6, $zero, L_60001DCC
    if (ctx->r14 == 0) {
        // 0x60001DC0: nop
    
            goto L_60001DCC;
    }
    // 0x60001DC0: nop

    // 0x60001DC4: b           L_60001DCC
    // 0x60001DC8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_60001DCC;
    // 0x60001DC8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_60001DCC:
    // 0x60001DCC: beq         $v1, $zero, L_60001E68
    if (ctx->r3 == 0) {
        // 0x60001DD0: lui         $at, 0x6000
        ctx->r1 = S32(0X6000 << 16);
            goto L_60001E68;
    }
L_60001DD0:
    // 0x60001DD0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001DD4: lwc1        $f0, 0x7544($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X7544);
    // 0x60001DD8: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x60001DDC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60001DE0: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x60001DE4: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x60001DE8: lui         $t7, 0x6000
    ctx->r15 = S32(0X6000 << 16);
    // 0x60001DEC: bc1f        L_60001E0C
    if (!c1cs) {
        // 0x60001DF0: nop
    
            goto L_60001E0C;
    }
    // 0x60001DF0: nop

    // 0x60001DF4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60001DF8: nop

    // 0x60001DFC: c.le.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl <= ctx->f6.fl;
    // 0x60001E00: nop

    // 0x60001E04: bc1t        L_60001E2C
    if (c1cs) {
        // 0x60001E08: nop
    
            goto L_60001E2C;
    }
    // 0x60001E08: nop

L_60001E0C:
    // 0x60001E0C: lw          $t7, 0x75B8($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X75B8);
    // 0x60001E10: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x60001E14: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x60001E18: beq         $t8, $zero, L_60001E28
    if (ctx->r24 == 0) {
        // 0x60001E1C: nop
    
            goto L_60001E28;
    }
    // 0x60001E1C: nop

    // 0x60001E20: b           L_60001E28
    // 0x60001E24: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_60001E28;
    // 0x60001E24: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_60001E28:
    // 0x60001E28: beq         $v1, $zero, L_60001E68
    if (ctx->r3 == 0) {
        // 0x60001E2C: lui         $at, 0x6000
        ctx->r1 = S32(0X6000 << 16);
            goto L_60001E68;
    }
L_60001E2C:
    // 0x60001E2C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001E30: sw          $s0, 0x7538($at)
    MEM_W(0X7538, ctx->r1) = ctx->r16;
    // 0x60001E34: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001E38: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x60001E3C: sw          $t9, 0x7540($at)
    MEM_W(0X7540, ctx->r1) = ctx->r25;
    // 0x60001E40: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001E44: addiu       $t0, $zero, 0xF
    ctx->r8 = ADD32(0, 0XF);
    // 0x60001E48: sw          $t0, 0x753C($at)
    MEM_W(0X753C, ctx->r1) = ctx->r8;
    // 0x60001E4C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001E50: lwc1        $f8, 0x7548($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X7548);
    // 0x60001E54: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001E58: jal         0x60001620
    // 0x60001E5C: swc1        $f8, 0x7554($at)
    MEM_W(0X7554, ctx->r1) = ctx->f8.u32l;
    ovl_stage_world4_1620(rdram, ctx);
        goto after_4;
    // 0x60001E5C: swc1        $f8, 0x7554($at)
    MEM_W(0X7554, ctx->r1) = ctx->f8.u32l;
    after_4:
    // 0x60001E60: b           L_600020C0
    // 0x60001E64: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_600020C0;
    // 0x60001E64: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_60001E68:
    // 0x60001E68: lw          $t1, 0x7538($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7538);
    // 0x60001E6C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x60001E70: beq         $a1, $t1, L_60001F88
    if (ctx->r5 == ctx->r9) {
        // 0x60001E74: lui         $s0, 0x6000
        ctx->r16 = S32(0X6000 << 16);
            goto L_60001F88;
    }
    // 0x60001E74: lui         $s0, 0x6000
    ctx->r16 = S32(0X6000 << 16);
    // 0x60001E78: addiu       $s0, $s0, 0x75AC
    ctx->r16 = ADD32(ctx->r16, 0X75AC);
    // 0x60001E7C: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x60001E80: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x60001E84: bne         $t2, $at, L_60001EC4
    if (ctx->r10 != ctx->r1) {
        // 0x60001E88: addiu       $t3, $zero, 0x2D
        ctx->r11 = ADD32(0, 0X2D);
            goto L_60001EC4;
    }
    // 0x60001E88: addiu       $t3, $zero, 0x2D
    ctx->r11 = ADD32(0, 0X2D);
    // 0x60001E8C: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x60001E90: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001E94: sw          $a1, 0x7538($at)
    MEM_W(0X7538, ctx->r1) = ctx->r5;
    // 0x60001E98: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001E9C: sw          $zero, 0x7540($at)
    MEM_W(0X7540, ctx->r1) = 0;
    // 0x60001EA0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001EA4: sw          $t3, 0x753C($at)
    MEM_W(0X753C, ctx->r1) = ctx->r11;
    // 0x60001EA8: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x60001EAC: addiu       $a0, $zero, 0x36
    ctx->r4 = ADD32(0, 0X36);
    // 0x60001EB0: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x60001EB4: jal         0x600015AC
    // 0x60001EB8: sw          $t5, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r13;
    ovl_stage_world4_15AC(rdram, ctx);
        goto after_5;
    // 0x60001EB8: sw          $t5, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r13;
    after_5:
    // 0x60001EBC: b           L_600020C0
    // 0x60001EC0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_600020C0;
    // 0x60001EC0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_60001EC4:
    // 0x60001EC4: jal         0x6000034C
    // 0x60001EC8: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    ovl_stage_world4_34C(rdram, ctx);
        goto after_6;
    // 0x60001EC8: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_6:
    // 0x60001ECC: lui         $t6, 0x6000
    ctx->r14 = S32(0X6000 << 16);
    // 0x60001ED0: lw          $t6, 0x75B0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X75B0);
    // 0x60001ED4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x60001ED8: lw          $a0, 0x2C($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X2C);
    // 0x60001EDC: addiu       $v1, $zero, 0x1E
    ctx->r3 = ADD32(0, 0X1E);
    // 0x60001EE0: slti        $at, $a0, 0x4
    ctx->r1 = SIGNED(ctx->r4) < 0X4 ? 1 : 0;
    // 0x60001EE4: beq         $at, $zero, L_60001EF4
    if (ctx->r1 == 0) {
        // 0x60001EE8: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_60001EF4;
    }
    // 0x60001EE8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x60001EEC: b           L_60001EF4
    // 0x60001EF0: addiu       $v1, $zero, 0x28
    ctx->r3 = ADD32(0, 0X28);
        goto L_60001EF4;
    // 0x60001EF0: addiu       $v1, $zero, 0x28
    ctx->r3 = ADD32(0, 0X28);
L_60001EF4:
    // 0x60001EF4: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x60001EF8: beq         $at, $zero, L_60001F34
    if (ctx->r1 == 0) {
        // 0x60001EFC: addiu       $t8, $zero, 0x14
        ctx->r24 = ADD32(0, 0X14);
            goto L_60001F34;
    }
    // 0x60001EFC: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x60001F00: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001F04: sw          $a1, 0x7538($at)
    MEM_W(0X7538, ctx->r1) = ctx->r5;
    // 0x60001F08: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001F0C: sw          $t7, 0x7540($at)
    MEM_W(0X7540, ctx->r1) = ctx->r15;
    // 0x60001F10: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001F14: sw          $t8, 0x753C($at)
    MEM_W(0X753C, ctx->r1) = ctx->r24;
    // 0x60001F18: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x60001F1C: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    // 0x60001F20: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x60001F24: jal         0x600015AC
    // 0x60001F28: sw          $t0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r8;
    ovl_stage_world4_15AC(rdram, ctx);
        goto after_7;
    // 0x60001F28: sw          $t0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r8;
    after_7:
    // 0x60001F2C: b           L_600020C0
    // 0x60001F30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_600020C0;
    // 0x60001F30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_60001F34:
    // 0x60001F34: slti        $at, $a0, 0x4
    ctx->r1 = SIGNED(ctx->r4) < 0X4 ? 1 : 0;
    // 0x60001F38: beq         $at, $zero, L_60001F48
    if (ctx->r1 == 0) {
        // 0x60001F3C: addiu       $v1, $zero, 0x3C
        ctx->r3 = ADD32(0, 0X3C);
            goto L_60001F48;
    }
    // 0x60001F3C: addiu       $v1, $zero, 0x3C
    ctx->r3 = ADD32(0, 0X3C);
    // 0x60001F40: b           L_60001F48
    // 0x60001F44: addiu       $v1, $zero, 0x50
    ctx->r3 = ADD32(0, 0X50);
        goto L_60001F48;
    // 0x60001F44: addiu       $v1, $zero, 0x50
    ctx->r3 = ADD32(0, 0X50);
L_60001F48:
    // 0x60001F48: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x60001F4C: beq         $at, $zero, L_60001F88
    if (ctx->r1 == 0) {
        // 0x60001F50: addiu       $t1, $zero, 0x1E
        ctx->r9 = ADD32(0, 0X1E);
            goto L_60001F88;
    }
    // 0x60001F50: addiu       $t1, $zero, 0x1E
    ctx->r9 = ADD32(0, 0X1E);
    // 0x60001F54: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001F58: sw          $a1, 0x7538($at)
    MEM_W(0X7538, ctx->r1) = ctx->r5;
    // 0x60001F5C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001F60: sw          $a1, 0x7540($at)
    MEM_W(0X7540, ctx->r1) = ctx->r5;
    // 0x60001F64: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001F68: sw          $t1, 0x753C($at)
    MEM_W(0X753C, ctx->r1) = ctx->r9;
    // 0x60001F6C: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x60001F70: addiu       $a0, $zero, 0x38
    ctx->r4 = ADD32(0, 0X38);
    // 0x60001F74: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x60001F78: jal         0x600015AC
    // 0x60001F7C: sw          $t3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r11;
    ovl_stage_world4_15AC(rdram, ctx);
        goto after_8;
    // 0x60001F7C: sw          $t3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r11;
    after_8:
    // 0x60001F80: b           L_600020C0
    // 0x60001F84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_600020C0;
    // 0x60001F84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_60001F88:
    // 0x60001F88: jal         0x600006DC
    // 0x60001F8C: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    ovl_stage_world4_6DC(rdram, ctx);
        goto after_9;
    // 0x60001F8C: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    after_9:
    // 0x60001F90: beq         $v0, $zero, L_600020B4
    if (ctx->r2 == 0) {
        // 0x60001F94: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_600020B4;
    }
    // 0x60001F94: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x60001F98: blez        $v0, L_600020B4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x60001F9C: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_600020B4;
    }
    // 0x60001F9C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x60001FA0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_60001FA4:
    // 0x60001FA4: lw          $t4, 0x50($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X50);
    // 0x60001FA8: lui         $a1, 0x6000
    ctx->r5 = S32(0X6000 << 16);
    // 0x60001FAC: addu        $t5, $t4, $s0
    ctx->r13 = ADD32(ctx->r12, ctx->r16);
    // 0x60001FB0: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x60001FB4: addiu       $a1, $a1, 0x7590
    ctx->r5 = ADD32(ctx->r5, 0X7590);
    // 0x60001FB8: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    // 0x60001FBC: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x60001FC0: jal         0x60000418
    // 0x60001FC4: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    ovl_stage_world4_418(rdram, ctx);
        goto after_10;
    // 0x60001FC4: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    after_10:
    // 0x60001FC8: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x60001FCC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x60001FD0: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x60001FD4: c.le.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl <= ctx->f10.fl;
    // 0x60001FD8: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x60001FDC: bc1f        L_600020AC
    if (!c1cs) {
        // 0x60001FE0: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_600020AC;
    }
    // 0x60001FE0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x60001FE4: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x60001FE8: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60001FEC: addu        $t8, $t7, $s0
    ctx->r24 = ADD32(ctx->r15, ctx->r16);
    // 0x60001FF0: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x60001FF4: addiu       $a0, $a0, 0x7590
    ctx->r4 = ADD32(ctx->r4, 0X7590);
    // 0x60001FF8: lw          $a1, 0x0($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X0);
    // 0x60001FFC: jal         0x600003DC
    // 0x60002000: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    ovl_stage_world4_3DC(rdram, ctx);
        goto after_11;
    // 0x60002000: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    after_11:
    // 0x60002004: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002008: lwc1        $f13, 0x7378($at)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r1, 0X7378);
    // 0x6000200C: lwc1        $f12, 0x737C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X737C);
    // 0x60002010: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002014: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    // 0x60002018: lwc1        $f5, 0x7380($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X7380);
    // 0x6000201C: lwc1        $f4, 0x7384($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7384);
    // 0x60002020: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x60002024: mul.d       $f0, $f18, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f0.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x60002028: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x6000202C: addiu       $t1, $zero, 0x1E
    ctx->r9 = ADD32(0, 0X1E);
    // 0x60002030: c.le.d      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.d <= ctx->f0.d;
    // 0x60002034: nop

    // 0x60002038: bc1f        L_60002054
    if (!c1cs) {
        // 0x6000203C: nop
    
            goto L_60002054;
    }
    // 0x6000203C: nop

    // 0x60002040: sub.d       $f6, $f0, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f6.d = ctx->f0.d - ctx->f12.d;
    // 0x60002044: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002048: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x6000204C: b           L_60002088
    // 0x60002050: swc1        $f8, 0x7554($at)
    MEM_W(0X7554, ctx->r1) = ctx->f8.u32l;
        goto L_60002088;
    // 0x60002050: swc1        $f8, 0x7554($at)
    MEM_W(0X7554, ctx->r1) = ctx->f8.u32l;
L_60002054:
    // 0x60002054: mtc1        $zero, $f11
    ctx->f_odd[(11 - 1) * 2] = 0;
    // 0x60002058: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x6000205C: nop

    // 0x60002060: c.lt.d      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.d < ctx->f10.d;
    // 0x60002064: nop

    // 0x60002068: bc1f        L_60002078
    if (!c1cs) {
        // 0x6000206C: nop
    
            goto L_60002078;
    }
    // 0x6000206C: nop

    // 0x60002070: b           L_6000207C
    // 0x60002074: add.d       $f2, $f0, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f2.d = ctx->f0.d + ctx->f12.d;
        goto L_6000207C;
    // 0x60002074: add.d       $f2, $f0, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f2.d = ctx->f0.d + ctx->f12.d;
L_60002078:
    // 0x60002078: mov.d       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.d = ctx->f0.d;
L_6000207C:
    // 0x6000207C: cvt.s.d     $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f16.fl = CVT_S_D(ctx->f2.d);
    // 0x60002080: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002084: swc1        $f16, 0x7554($at)
    MEM_W(0X7554, ctx->r1) = ctx->f16.u32l;
L_60002088:
    // 0x60002088: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000208C: sw          $zero, 0x7538($at)
    MEM_W(0X7538, ctx->r1) = 0;
    // 0x60002090: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002094: sw          $t0, 0x7540($at)
    MEM_W(0X7540, ctx->r1) = ctx->r8;
    // 0x60002098: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000209C: sw          $t1, 0x753C($at)
    MEM_W(0X753C, ctx->r1) = ctx->r9;
    // 0x600020A0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600020A4: b           L_600020BC
    // 0x600020A8: sw          $zero, 0x755C($at)
    MEM_W(0X755C, ctx->r1) = 0;
        goto L_600020BC;
    // 0x600020A8: sw          $zero, 0x755C($at)
    MEM_W(0X755C, ctx->r1) = 0;
L_600020AC:
    // 0x600020AC: bne         $v1, $a2, L_60001FA4
    if (ctx->r3 != ctx->r6) {
        // 0x600020B0: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_60001FA4;
    }
    // 0x600020B0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_600020B4:
    // 0x600020B4: jal         0x60001B20
    // 0x600020B8: nop

    ovl_stage_world4_1B20(rdram, ctx);
        goto after_12;
    // 0x600020B8: nop

    after_12:
L_600020BC:
    // 0x600020BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_600020C0:
    // 0x600020C0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x600020C4: jr          $ra
    // 0x600020C8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x600020C8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_stage_world4_20CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600020CC: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x600020D0: addiu       $v0, $v0, 0x7590
    ctx->r2 = ADD32(ctx->r2, 0X7590);
    // 0x600020D4: lwc1        $f2, 0x0($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X0);
    // 0x600020D8: lwc1        $f0, 0x10($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X10);
    // 0x600020DC: c.le.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl <= ctx->f12.fl;
    // 0x600020E0: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x600020E4: bc1f        L_60002120
    if (!c1cs) {
        // 0x600020E8: sw          $a3, 0xC($sp)
        MEM_W(0XC, ctx->r29) = ctx->r7;
            goto L_60002120;
    }
    // 0x600020E8: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x600020EC: lui         $at, 0x433E
    ctx->r1 = S32(0X433E << 16);
    // 0x600020F0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x600020F4: lui         $at, 0x43AF
    ctx->r1 = S32(0X43AF << 16);
    // 0x600020F8: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x600020FC: nop

    // 0x60002100: bc1f        L_60002120
    if (!c1cs) {
        // 0x60002104: nop
    
            goto L_60002120;
    }
    // 0x60002104: nop

    // 0x60002108: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x6000210C: nop

    // 0x60002110: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x60002114: nop

    // 0x60002118: bc1t        L_600021F0
    if (c1cs) {
        // 0x6000211C: nop
    
            goto L_600021F0;
    }
    // 0x6000211C: nop

L_60002120:
    // 0x60002120: lwc1        $f8, 0x8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X8);
    // 0x60002124: lwc1        $f0, 0x10($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X10);
    // 0x60002128: c.le.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl <= ctx->f2.fl;
    // 0x6000212C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x60002130: bc1f        L_60002168
    if (!c1cs) {
        // 0x60002134: nop
    
            goto L_60002168;
    }
    // 0x60002134: nop

    // 0x60002138: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x6000213C: lui         $at, 0x432A
    ctx->r1 = S32(0X432A << 16);
    // 0x60002140: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x60002144: nop

    // 0x60002148: bc1f        L_60002168
    if (!c1cs) {
        // 0x6000214C: nop
    
            goto L_60002168;
    }
    // 0x6000214C: nop

    // 0x60002150: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x60002154: nop

    // 0x60002158: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x6000215C: nop

    // 0x60002160: bc1t        L_600021F0
    if (c1cs) {
        // 0x60002164: nop
    
            goto L_600021F0;
    }
    // 0x60002164: nop

L_60002168:
    // 0x60002168: lwc1        $f2, 0x8($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X8);
    // 0x6000216C: lwc1        $f6, 0xC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC);
    // 0x60002170: c.le.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl <= ctx->f14.fl;
    // 0x60002174: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x60002178: bc1f        L_600021B0
    if (!c1cs) {
        // 0x6000217C: nop
    
            goto L_600021B0;
    }
    // 0x6000217C: nop

    // 0x60002180: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x60002184: lui         $at, 0x4382
    ctx->r1 = S32(0X4382 << 16);
    // 0x60002188: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x6000218C: nop

    // 0x60002190: bc1f        L_600021B0
    if (!c1cs) {
        // 0x60002194: nop
    
            goto L_600021B0;
    }
    // 0x60002194: nop

    // 0x60002198: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x6000219C: nop

    // 0x600021A0: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x600021A4: nop

    // 0x600021A8: bc1t        L_600021F0
    if (c1cs) {
        // 0x600021AC: nop
    
            goto L_600021F0;
    }
    // 0x600021AC: nop

L_600021B0:
    // 0x600021B0: c.le.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl <= ctx->f2.fl;
    // 0x600021B4: lui         $at, 0x438C
    ctx->r1 = S32(0X438C << 16);
    // 0x600021B8: bc1f        L_600021F8
    if (!c1cs) {
        // 0x600021BC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_600021F8;
    }
    // 0x600021BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x600021C0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x600021C4: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x600021C8: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x600021CC: nop

    // 0x600021D0: bc1t        L_600021F0
    if (c1cs) {
        // 0x600021D4: nop
    
            goto L_600021F0;
    }
    // 0x600021D4: nop

    // 0x600021D8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x600021DC: nop

    // 0x600021E0: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x600021E4: nop

    // 0x600021E8: bc1f        L_600021F8
    if (!c1cs) {
        // 0x600021EC: nop
    
            goto L_600021F8;
    }
    // 0x600021EC: nop

L_600021F0:
    // 0x600021F0: jr          $ra
    // 0x600021F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x600021F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_600021F8:
    // 0x600021F8: jr          $ra
    // 0x600021FC: nop

    return;
    // 0x600021FC: nop

;}
RECOMP_FUNC void ovl_stage_world4_2200(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002200: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x60002204: lw          $v1, 0x75B4($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X75B4);
    // 0x60002208: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x6000220C: andi        $t6, $v1, 0x1
    ctx->r14 = ctx->r3 & 0X1;
    // 0x60002210: beq         $t6, $zero, L_60002220
    if (ctx->r14 == 0) {
        // 0x60002214: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_60002220;
    }
    // 0x60002214: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x60002218: b           L_60002224
    // 0x6000221C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_60002224;
    // 0x6000221C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_60002220:
    // 0x60002220: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_60002224:
    // 0x60002224: beq         $v0, $zero, L_60002288
    if (ctx->r2 == 0) {
        // 0x60002228: nop
    
            goto L_60002288;
    }
    // 0x60002228: nop

    // 0x6000222C: jal         0x600015DC
    // 0x60002230: nop

    ovl_stage_world4_15DC(rdram, ctx);
        goto after_0;
    // 0x60002230: nop

    after_0:
    // 0x60002234: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x60002238: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x6000223C: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60002240: addiu       $v0, $v0, 0x7320
    ctx->r2 = ADD32(ctx->r2, 0X7320);
    // 0x60002244: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002248: lwc1        $f6, 0x7388($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X7388);
    // 0x6000224C: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x60002250: ori         $a0, $zero, 0x8000
    ctx->r4 = 0 | 0X8000;
    // 0x60002254: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x60002258: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
    // 0x6000225C: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x60002260: nop

    // 0x60002264: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x60002268: nop

    // 0x6000226C: bc1f        L_600026B0
    if (!c1cs) {
        // 0x60002270: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_600026B0;
    }
    // 0x60002270: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x60002274: sub.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x60002278: jal         0x60001584
    // 0x6000227C: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
    ovl_stage_world4_1584(rdram, ctx);
        goto after_1;
    // 0x6000227C: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
    after_1:
    // 0x60002280: b           L_600026B0
    // 0x60002284: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_600026B0;
    // 0x60002284: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_60002288:
    // 0x60002288: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x6000228C: lw          $v0, 0x7538($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7538);
    // 0x60002290: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x60002294: beq         $v0, $zero, L_600022C0
    if (ctx->r2 == 0) {
        // 0x60002298: lui         $t7, 0x6000
        ctx->r15 = S32(0X6000 << 16);
            goto L_600022C0;
    }
    // 0x60002298: lui         $t7, 0x6000
    ctx->r15 = S32(0X6000 << 16);
    // 0x6000229C: beq         $v0, $at, L_600025D0
    if (ctx->r2 == ctx->r1) {
        // 0x600022A0: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_600025D0;
    }
    // 0x600022A0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x600022A4: beq         $v0, $at, L_6000260C
    if (ctx->r2 == ctx->r1) {
        // 0x600022A8: andi        $t8, $v1, 0x8000
        ctx->r24 = ctx->r3 & 0X8000;
            goto L_6000260C;
    }
    // 0x600022A8: andi        $t8, $v1, 0x8000
    ctx->r24 = ctx->r3 & 0X8000;
    // 0x600022AC: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x600022B0: beq         $v0, $at, L_6000265C
    if (ctx->r2 == ctx->r1) {
        // 0x600022B4: nop
    
            goto L_6000265C;
    }
    // 0x600022B4: nop

    // 0x600022B8: b           L_600026B0
    // 0x600022BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_600026B0;
    // 0x600022BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_600022C0:
    // 0x600022C0: lw          $t7, 0x755C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X755C);
    // 0x600022C4: nop

    // 0x600022C8: slti        $at, $t7, 0x3
    ctx->r1 = SIGNED(ctx->r15) < 0X3 ? 1 : 0;
    // 0x600022CC: bne         $at, $zero, L_600024EC
    if (ctx->r1 != 0) {
        // 0x600022D0: nop
    
            goto L_600024EC;
    }
    // 0x600022D0: nop

    // 0x600022D4: jal         0x60001864
    // 0x600022D8: nop

    ovl_stage_world4_1864(rdram, ctx);
        goto after_2;
    // 0x600022D8: nop

    after_2:
    // 0x600022DC: beq         $v0, $zero, L_600024EC
    if (ctx->r2 == 0) {
        // 0x600022E0: lui         $v1, 0x6000
        ctx->r3 = S32(0X6000 << 16);
            goto L_600024EC;
    }
    // 0x600022E0: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x600022E4: addiu       $v1, $v1, 0x7540
    ctx->r3 = ADD32(ctx->r3, 0X7540);
    // 0x600022E8: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x600022EC: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x600022F0: bne         $t8, $at, L_600024DC
    if (ctx->r24 != ctx->r1) {
        // 0x600022F4: lui         $v0, 0x6000
        ctx->r2 = S32(0X6000 << 16);
            goto L_600024DC;
    }
    // 0x600022F4: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x600022F8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600022FC: sw          $zero, 0x7538($at)
    MEM_W(0X7538, ctx->r1) = 0;
    // 0x60002300: addiu       $v0, $v0, 0x753C
    ctx->r2 = ADD32(ctx->r2, 0X753C);
    // 0x60002304: addiu       $t9, $zero, 0x1E
    ctx->r25 = ADD32(0, 0X1E);
    // 0x60002308: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x6000230C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x60002310: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002314: addiu       $t0, $zero, -0x1E
    ctx->r8 = ADD32(0, -0X1E);
    // 0x60002318: jal         0x60000340
    // 0x6000231C: sw          $t0, 0x755C($at)
    MEM_W(0X755C, ctx->r1) = ctx->r8;
    ovl_stage_world4_340(rdram, ctx);
        goto after_3;
    // 0x6000231C: sw          $t0, 0x755C($at)
    MEM_W(0X755C, ctx->r1) = ctx->r8;
    after_3:
    // 0x60002320: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002324: lwc1        $f13, 0x7390($at)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r1, 0X7390);
    // 0x60002328: lwc1        $f12, 0x7394($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X7394);
    // 0x6000232C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002330: lwc1        $f15, 0x7398($at)
    ctx->f_odd[(15 - 1) * 2] = MEM_W(ctx->r1, 0X7398);
    // 0x60002334: lwc1        $f14, 0x739C($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X739C);
    // 0x60002338: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x6000233C: addiu       $v0, $v0, 0x7554
    ctx->r2 = ADD32(ctx->r2, 0X7554);
    // 0x60002340: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x60002344: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x60002348: lwc1        $f16, 0x0($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X0);
    // 0x6000234C: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x60002350: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x60002354: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60002358: mul.d       $f16, $f0, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f16.d = MUL_D(ctx->f0.d, ctx->f12.d);
    // 0x6000235C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x60002360: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x60002364: add.d       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = ctx->f16.d + ctx->f10.d;
    // 0x60002368: c.le.d      $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f14.d <= ctx->f18.d;
    // 0x6000236C: nop

    // 0x60002370: bc1f        L_600023D8
    if (!c1cs) {
        // 0x60002374: nop
    
            goto L_600023D8;
    }
    // 0x60002374: nop

    // 0x60002378: jal         0x60000340
    // 0x6000237C: nop

    ovl_stage_world4_340(rdram, ctx);
        goto after_4;
    // 0x6000237C: nop

    after_4:
    // 0x60002380: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002384: lwc1        $f13, 0x73A0($at)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r1, 0X73A0);
    // 0x60002388: lwc1        $f12, 0x73A4($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X73A4);
    // 0x6000238C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002390: lwc1        $f15, 0x73A8($at)
    ctx->f_odd[(15 - 1) * 2] = MEM_W(ctx->r1, 0X73A8);
    // 0x60002394: lwc1        $f14, 0x73AC($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X73AC);
    // 0x60002398: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x6000239C: addiu       $v0, $v0, 0x7554
    ctx->r2 = ADD32(ctx->r2, 0X7554);
    // 0x600023A0: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x600023A4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x600023A8: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x600023AC: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x600023B0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x600023B4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x600023B8: mul.d       $f4, $f0, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f4.d = MUL_D(ctx->f0.d, ctx->f12.d);
    // 0x600023BC: sub.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x600023C0: cvt.d.s     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f18.d = CVT_D_S(ctx->f10.fl);
    // 0x600023C4: add.d       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f18.d); 
    ctx->f6.d = ctx->f4.d + ctx->f18.d;
    // 0x600023C8: sub.d       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f14.d); 
    ctx->f8.d = ctx->f6.d - ctx->f14.d;
    // 0x600023CC: cvt.s.d     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f16.fl = CVT_S_D(ctx->f8.d);
    // 0x600023D0: b           L_600026AC
    // 0x600023D4: swc1        $f16, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f16.u32l;
        goto L_600026AC;
    // 0x600023D4: swc1        $f16, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f16.u32l;
L_600023D8:
    // 0x600023D8: jal         0x60000340
    // 0x600023DC: nop

    ovl_stage_world4_340(rdram, ctx);
        goto after_5;
    // 0x600023DC: nop

    after_5:
    // 0x600023E0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600023E4: lwc1        $f13, 0x73B0($at)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r1, 0X73B0);
    // 0x600023E8: lwc1        $f12, 0x73B4($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X73B4);
    // 0x600023EC: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x600023F0: addiu       $v0, $v0, 0x7554
    ctx->r2 = ADD32(ctx->r2, 0X7554);
    // 0x600023F4: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x600023F8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x600023FC: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x60002400: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x60002404: add.s       $f18, $f10, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x60002408: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x6000240C: mul.d       $f10, $f0, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f10.d = MUL_D(ctx->f0.d, ctx->f12.d);
    // 0x60002410: sub.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x60002414: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x60002418: cvt.d.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f16.d = CVT_D_S(ctx->f8.fl);
    // 0x6000241C: mtc1        $zero, $f19
    ctx->f_odd[(19 - 1) * 2] = 0;
    // 0x60002420: add.d       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f4.d = ctx->f10.d + ctx->f16.d;
    // 0x60002424: c.lt.d      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.d < ctx->f18.d;
    // 0x60002428: nop

    // 0x6000242C: bc1f        L_6000248C
    if (!c1cs) {
        // 0x60002430: nop
    
            goto L_6000248C;
    }
    // 0x60002430: nop

    // 0x60002434: jal         0x60000340
    // 0x60002438: nop

    ovl_stage_world4_340(rdram, ctx);
        goto after_6;
    // 0x60002438: nop

    after_6:
    // 0x6000243C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002440: lwc1        $f13, 0x73C0($at)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r1, 0X73C0);
    // 0x60002444: lwc1        $f12, 0x73C4($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X73C4);
    // 0x60002448: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000244C: lwc1        $f15, 0x73C8($at)
    ctx->f_odd[(15 - 1) * 2] = MEM_W(ctx->r1, 0X73C8);
    // 0x60002450: lwc1        $f14, 0x73CC($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X73CC);
    // 0x60002454: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60002458: addiu       $v0, $v0, 0x7554
    ctx->r2 = ADD32(ctx->r2, 0X7554);
    // 0x6000245C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x60002460: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x60002464: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x60002468: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x6000246C: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x60002470: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x60002474: mul.d       $f6, $f0, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f6.d = MUL_D(ctx->f0.d, ctx->f12.d);
    // 0x60002478: sub.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x6000247C: cvt.d.s     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f18.d = CVT_D_S(ctx->f4.fl);
    // 0x60002480: add.d       $f8, $f6, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f18.d); 
    ctx->f8.d = ctx->f6.d + ctx->f18.d;
    // 0x60002484: b           L_600024D0
    // 0x60002488: add.d       $f2, $f8, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f14.d); 
    ctx->f2.d = ctx->f8.d + ctx->f14.d;
        goto L_600024D0;
    // 0x60002488: add.d       $f2, $f8, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f14.d); 
    ctx->f2.d = ctx->f8.d + ctx->f14.d;
L_6000248C:
    // 0x6000248C: jal         0x60000340
    // 0x60002490: nop

    ovl_stage_world4_340(rdram, ctx);
        goto after_7;
    // 0x60002490: nop

    after_7:
    // 0x60002494: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002498: lwc1        $f13, 0x73D0($at)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r1, 0X73D0);
    // 0x6000249C: lwc1        $f12, 0x73D4($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X73D4);
    // 0x600024A0: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x600024A4: addiu       $v0, $v0, 0x7554
    ctx->r2 = ADD32(ctx->r2, 0X7554);
    // 0x600024A8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x600024AC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x600024B0: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x600024B4: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x600024B8: add.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x600024BC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x600024C0: mul.d       $f10, $f0, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f10.d = MUL_D(ctx->f0.d, ctx->f12.d);
    // 0x600024C4: sub.s       $f18, $f4, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x600024C8: cvt.d.s     $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f8.d = CVT_D_S(ctx->f18.fl);
    // 0x600024CC: add.d       $f2, $f10, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f2.d = ctx->f10.d + ctx->f8.d;
L_600024D0:
    // 0x600024D0: cvt.s.d     $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f16.fl = CVT_S_D(ctx->f2.d);
    // 0x600024D4: b           L_600026AC
    // 0x600024D8: swc1        $f16, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f16.u32l;
        goto L_600026AC;
    // 0x600024D8: swc1        $f16, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f16.u32l;
L_600024DC:
    // 0x600024DC: jal         0x60001B20
    // 0x600024E0: nop

    ovl_stage_world4_1B20(rdram, ctx);
        goto after_8;
    // 0x600024E0: nop

    after_8:
    // 0x600024E4: b           L_600026B0
    // 0x600024E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_600026B0;
    // 0x600024E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_600024EC:
    // 0x600024EC: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x600024F0: addiu       $v0, $v0, 0x753C
    ctx->r2 = ADD32(ctx->r2, 0X753C);
    // 0x600024F4: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x600024F8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600024FC: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x60002500: blez        $t2, L_600025C0
    if (SIGNED(ctx->r10) <= 0) {
        // 0x60002504: sw          $t2, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r10;
            goto L_600025C0;
    }
    // 0x60002504: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x60002508: lwc1        $f4, 0x7564($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X7564);
    // 0x6000250C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x60002510: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60002514: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60002518: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x6000251C: addiu       $v0, $v0, 0x7554
    ctx->r2 = ADD32(ctx->r2, 0X7554);
    // 0x60002520: bc1f        L_60002568
    if (!c1cs) {
        // 0x60002524: lui         $at, 0x6000
        ctx->r1 = S32(0X6000 << 16);
            goto L_60002568;
    }
    // 0x60002524: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002528: lwc1        $f0, 0x73D8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X73D8);
    // 0x6000252C: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x60002530: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x60002534: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x60002538: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x6000253C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x60002540: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x60002544: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x60002548: jal         0x600020CC
    // 0x6000254C: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    ovl_stage_world4_20CC(rdram, ctx);
        goto after_9;
    // 0x6000254C: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_9:
    // 0x60002550: beq         $v0, $zero, L_60002568
    if (ctx->r2 == 0) {
        // 0x60002554: nop
    
            goto L_60002568;
    }
    // 0x60002554: nop

    // 0x60002558: jal         0x60001CC8
    // 0x6000255C: nop

    ovl_stage_world4_1CC8(rdram, ctx);
        goto after_10;
    // 0x6000255C: nop

    after_10:
    // 0x60002560: b           L_600026B0
    // 0x60002564: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_600026B0;
    // 0x60002564: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_60002568:
    // 0x60002568: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x6000256C: addiu       $v1, $v1, 0x7540
    ctx->r3 = ADD32(ctx->r3, 0X7540);
    // 0x60002570: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x60002574: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x60002578: bne         $t4, $at, L_600025B0
    if (ctx->r12 != ctx->r1) {
        // 0x6000257C: lui         $at, 0x43C8
        ctx->r1 = S32(0X43C8 << 16);
            goto L_600025B0;
    }
    // 0x6000257C: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x60002580: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x60002584: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002588: lwc1        $f8, 0x7544($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X7544);
    // 0x6000258C: nop

    // 0x60002590: c.le.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl <= ctx->f10.fl;
    // 0x60002594: nop

    // 0x60002598: bc1f        L_600025B0
    if (!c1cs) {
        // 0x6000259C: nop
    
            goto L_600025B0;
    }
    // 0x6000259C: nop

    // 0x600025A0: jal         0x60001CC8
    // 0x600025A4: nop

    ovl_stage_world4_1CC8(rdram, ctx);
        goto after_11;
    // 0x600025A4: nop

    after_11:
    // 0x600025A8: b           L_600026B0
    // 0x600025AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_600026B0;
    // 0x600025AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_600025B0:
    // 0x600025B0: jal         0x60001620
    // 0x600025B4: nop

    ovl_stage_world4_1620(rdram, ctx);
        goto after_12;
    // 0x600025B4: nop

    after_12:
    // 0x600025B8: b           L_600026B0
    // 0x600025BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_600026B0;
    // 0x600025BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_600025C0:
    // 0x600025C0: jal         0x60001CC8
    // 0x600025C4: nop

    ovl_stage_world4_1CC8(rdram, ctx);
        goto after_13;
    // 0x600025C4: nop

    after_13:
    // 0x600025C8: b           L_600026B0
    // 0x600025CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_600026B0;
    // 0x600025CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_600025D0:
    // 0x600025D0: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x600025D4: addiu       $v0, $v0, 0x753C
    ctx->r2 = ADD32(ctx->r2, 0X753C);
    // 0x600025D8: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x600025DC: nop

    // 0x600025E0: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x600025E4: blez        $t6, L_600025FC
    if (SIGNED(ctx->r14) <= 0) {
        // 0x600025E8: sw          $t6, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r14;
            goto L_600025FC;
    }
    // 0x600025E8: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x600025EC: jal         0x60001600
    // 0x600025F0: nop

    ovl_stage_world4_1600(rdram, ctx);
        goto after_14;
    // 0x600025F0: nop

    after_14:
    // 0x600025F4: b           L_600026B0
    // 0x600025F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_600026B0;
    // 0x600025F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_600025FC:
    // 0x600025FC: jal         0x60001CC8
    // 0x60002600: nop

    ovl_stage_world4_1CC8(rdram, ctx);
        goto after_15;
    // 0x60002600: nop

    after_15:
    // 0x60002604: b           L_600026B0
    // 0x60002608: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_600026B0;
    // 0x60002608: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_6000260C:
    // 0x6000260C: beq         $t8, $zero, L_6000261C
    if (ctx->r24 == 0) {
        // 0x60002610: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_6000261C;
    }
    // 0x60002610: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x60002614: b           L_6000261C
    // 0x60002618: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_6000261C;
    // 0x60002618: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_6000261C:
    // 0x6000261C: bne         $v0, $zero, L_600026AC
    if (ctx->r2 != 0) {
        // 0x60002620: lui         $v0, 0x6000
        ctx->r2 = S32(0X6000 << 16);
            goto L_600026AC;
    }
    // 0x60002620: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60002624: addiu       $v0, $v0, 0x753C
    ctx->r2 = ADD32(ctx->r2, 0X753C);
    // 0x60002628: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x6000262C: nop

    // 0x60002630: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x60002634: blez        $t0, L_6000264C
    if (SIGNED(ctx->r8) <= 0) {
        // 0x60002638: sw          $t0, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r8;
            goto L_6000264C;
    }
    // 0x60002638: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x6000263C: jal         0x600015DC
    // 0x60002640: nop

    ovl_stage_world4_15DC(rdram, ctx);
        goto after_16;
    // 0x60002640: nop

    after_16:
    // 0x60002644: b           L_600026B0
    // 0x60002648: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_600026B0;
    // 0x60002648: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_6000264C:
    // 0x6000264C: jal         0x60001CC8
    // 0x60002650: nop

    ovl_stage_world4_1CC8(rdram, ctx);
        goto after_17;
    // 0x60002650: nop

    after_17:
    // 0x60002654: b           L_600026B0
    // 0x60002658: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_600026B0;
    // 0x60002658: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_6000265C:
    // 0x6000265C: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60002660: addiu       $v0, $v0, 0x753C
    ctx->r2 = ADD32(ctx->r2, 0X753C);
    // 0x60002664: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x60002668: nop

    // 0x6000266C: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x60002670: blez        $t3, L_600026A4
    if (SIGNED(ctx->r11) <= 0) {
        // 0x60002674: sw          $t3, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r11;
            goto L_600026A4;
    }
    // 0x60002674: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x60002678: slti        $at, $t3, 0x4
    ctx->r1 = SIGNED(ctx->r11) < 0X4 ? 1 : 0;
    // 0x6000267C: beq         $at, $zero, L_60002694
    if (ctx->r1 == 0) {
        // 0x60002680: nop
    
            goto L_60002694;
    }
    // 0x60002680: nop

    // 0x60002684: jal         0x600015DC
    // 0x60002688: nop

    ovl_stage_world4_15DC(rdram, ctx);
        goto after_18;
    // 0x60002688: nop

    after_18:
    // 0x6000268C: b           L_600026B0
    // 0x60002690: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_600026B0;
    // 0x60002690: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_60002694:
    // 0x60002694: jal         0x60001620
    // 0x60002698: nop

    ovl_stage_world4_1620(rdram, ctx);
        goto after_19;
    // 0x60002698: nop

    after_19:
    // 0x6000269C: b           L_600026B0
    // 0x600026A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_600026B0;
    // 0x600026A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_600026A4:
    // 0x600026A4: jal         0x60001CC8
    // 0x600026A8: nop

    ovl_stage_world4_1CC8(rdram, ctx);
        goto after_20;
    // 0x600026A8: nop

    after_20:
L_600026AC:
    // 0x600026AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_600026B0:
    // 0x600026B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x600026B4: jr          $ra
    // 0x600026B8: nop

    return;
    // 0x600026B8: nop

;}
RECOMP_FUNC void ovl_stage_world4_26BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600026BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600026C0: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x600026C4: addiu       $a2, $a2, 0x75C0
    ctx->r6 = ADD32(ctx->r6, 0X75C0);
    // 0x600026C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600026CC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x600026D0: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
    // 0x600026D4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x600026D8: jal         0x60000808
    // 0x600026DC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_stage_world4_808(rdram, ctx);
        goto after_0;
    // 0x600026DC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x600026E0: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x600026E4: addiu       $a2, $a2, 0x75C0
    ctx->r6 = ADD32(ctx->r6, 0X75C0);
    // 0x600026E8: sh          $zero, 0x0($a2)
    MEM_H(0X0, ctx->r6) = 0;
    // 0x600026EC: sh          $zero, 0x2($a2)
    MEM_H(0X2, ctx->r6) = 0;
    // 0x600026F0: sh          $zero, 0x4($a2)
    MEM_H(0X4, ctx->r6) = 0;
    // 0x600026F4: sb          $zero, 0x6($a2)
    MEM_B(0X6, ctx->r6) = 0;
    // 0x600026F8: sb          $zero, 0x7($a2)
    MEM_B(0X7, ctx->r6) = 0;
    // 0x600026FC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x60002700: jal         0x60000808
    // 0x60002704: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world4_808(rdram, ctx);
        goto after_1;
    // 0x60002704: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x60002708: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x6000270C: addiu       $v0, $v0, 0x755C
    ctx->r2 = ADD32(ctx->r2, 0X755C);
    // 0x60002710: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x60002714: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002718: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000271C: lw          $a0, 0x72BC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X72BC);
    // 0x60002720: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60002724: sw          $zero, 0x7558($at)
    MEM_W(0X7558, ctx->r1) = 0;
    // 0x60002728: addiu       $a2, $a2, 0x7560
    ctx->r6 = ADD32(ctx->r6, 0X7560);
    // 0x6000272C: jal         0x600006C4
    // 0x60002730: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_2;
    // 0x60002730: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_2:
    // 0x60002734: jal         0x60000DE4
    // 0x60002738: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world4_DE4(rdram, ctx);
        goto after_3;
    // 0x60002738: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x6000273C: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60002740: addiu       $a2, $a2, 0x7578
    ctx->r6 = ADD32(ctx->r6, 0X7578);
    // 0x60002744: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60002748: jal         0x600006C4
    // 0x6000274C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_4;
    // 0x6000274C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_4:
    // 0x60002750: jal         0x600013CC
    // 0x60002754: nop

    ovl_stage_world4_13CC(rdram, ctx);
        goto after_5;
    // 0x60002754: nop

    after_5:
    // 0x60002758: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000275C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x60002760: sw          $zero, 0x7540($at)
    MEM_W(0X7540, ctx->r1) = 0;
    // 0x60002764: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002768: swc1        $f4, 0x7554($at)
    MEM_W(0X7554, ctx->r1) = ctx->f4.u32l;
    // 0x6000276C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002770: sw          $zero, 0x75AC($at)
    MEM_W(0X75AC, ctx->r1) = 0;
    // 0x60002774: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002778: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x6000277C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002780: sw          $t8, 0x7538($at)
    MEM_W(0X7538, ctx->r1) = ctx->r24;
    // 0x60002784: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002788: addiu       $t9, $zero, 0xF
    ctx->r25 = ADD32(0, 0XF);
    // 0x6000278C: sw          $t9, 0x753C($at)
    MEM_W(0X753C, ctx->r1) = ctx->r25;
    // 0x60002790: jr          $ra
    // 0x60002794: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x60002794: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void ovl_stage_world4_2798(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002798: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x6000279C: beq         $a0, $zero, L_60002824
    if (ctx->r4 == 0) {
        // 0x600027A0: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_60002824;
    }
    // 0x600027A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600027A4: jal         0x60000DE4
    // 0x600027A8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world4_DE4(rdram, ctx);
        goto after_0;
    // 0x600027A8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x600027AC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600027B0: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x600027B4: jal         0x600006C4
    // 0x600027B8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_1;
    // 0x600027B8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x600027BC: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x600027C0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x600027C4: ori         $t7, $t6, 0x80
    ctx->r15 = ctx->r14 | 0X80;
    // 0x600027C8: jal         0x60000DE4
    // 0x600027CC: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    ovl_stage_world4_DE4(rdram, ctx);
        goto after_2;
    // 0x600027CC: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    after_2:
    // 0x600027D0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600027D4: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x600027D8: jal         0x600006C4
    // 0x600027DC: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_3;
    // 0x600027DC: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_3:
    // 0x600027E0: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x600027E4: addiu       $a2, $a2, 0x75C8
    ctx->r6 = ADD32(ctx->r6, 0X75C8);
    // 0x600027E8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x600027EC: jal         0x60000808
    // 0x600027F0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_stage_world4_808(rdram, ctx);
        goto after_4;
    // 0x600027F0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_4:
    // 0x600027F4: lui         $t8, 0x6000
    ctx->r24 = S32(0X6000 << 16);
    // 0x600027F8: lw          $t8, 0x75C8($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X75C8);
    // 0x600027FC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002800: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60002804: ori         $t9, $t8, 0x100
    ctx->r25 = ctx->r24 | 0X100;
    // 0x60002808: sw          $t9, 0x75C8($at)
    MEM_W(0X75C8, ctx->r1) = ctx->r25;
    // 0x6000280C: addiu       $a2, $a2, 0x75C8
    ctx->r6 = ADD32(ctx->r6, 0X75C8);
    // 0x60002810: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x60002814: jal         0x60000808
    // 0x60002818: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_stage_world4_808(rdram, ctx);
        goto after_5;
    // 0x60002818: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_5:
    // 0x6000281C: b           L_600028A8
    // 0x60002820: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600028A8;
    // 0x60002820: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60002824:
    // 0x60002824: jal         0x60000DE4
    // 0x60002828: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world4_DE4(rdram, ctx);
        goto after_6;
    // 0x60002828: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_6:
    // 0x6000282C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60002830: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x60002834: jal         0x600006C4
    // 0x60002838: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_7;
    // 0x60002838: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_7:
    // 0x6000283C: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x60002840: addiu       $at, $zero, -0x81
    ctx->r1 = ADD32(0, -0X81);
    // 0x60002844: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x60002848: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x6000284C: jal         0x60000DE4
    // 0x60002850: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world4_DE4(rdram, ctx);
        goto after_8;
    // 0x60002850: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_8:
    // 0x60002854: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60002858: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x6000285C: jal         0x600006C4
    // 0x60002860: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_9;
    // 0x60002860: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_9:
    // 0x60002864: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60002868: addiu       $a2, $a2, 0x75C8
    ctx->r6 = ADD32(ctx->r6, 0X75C8);
    // 0x6000286C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x60002870: jal         0x60000808
    // 0x60002874: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_stage_world4_808(rdram, ctx);
        goto after_10;
    // 0x60002874: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_10:
    // 0x60002878: lui         $t2, 0x6000
    ctx->r10 = S32(0X6000 << 16);
    // 0x6000287C: lw          $t2, 0x75C8($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X75C8);
    // 0x60002880: addiu       $at, $zero, -0x101
    ctx->r1 = ADD32(0, -0X101);
    // 0x60002884: and         $t3, $t2, $at
    ctx->r11 = ctx->r10 & ctx->r1;
    // 0x60002888: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000288C: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60002890: sw          $t3, 0x75C8($at)
    MEM_W(0X75C8, ctx->r1) = ctx->r11;
    // 0x60002894: addiu       $a2, $a2, 0x75C8
    ctx->r6 = ADD32(ctx->r6, 0X75C8);
    // 0x60002898: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x6000289C: jal         0x60000808
    // 0x600028A0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_stage_world4_808(rdram, ctx);
        goto after_11;
    // 0x600028A0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_11:
    // 0x600028A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600028A8:
    // 0x600028A8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x600028AC: jr          $ra
    // 0x600028B0: nop

    return;
    // 0x600028B0: nop

;}
RECOMP_FUNC void ovl_stage_world4_28B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600028B4: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x600028B8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x600028BC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x600028C0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x600028C4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x600028C8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x600028CC: jal         0x60000C1C
    // 0x600028D0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    ovl_stage_world4_C1C(rdram, ctx);
        goto after_0;
    // 0x600028D0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x600028D4: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x600028D8: jal         0x600009C4
    // 0x600028DC: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    ovl_stage_world4_9C4(rdram, ctx);
        goto after_1;
    // 0x600028DC: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_1:
    // 0x600028E0: lw          $t6, 0x0($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X0);
    // 0x600028E4: nop

    // 0x600028E8: andi        $t7, $t6, 0x800
    ctx->r15 = ctx->r14 & 0X800;
    // 0x600028EC: beq         $t7, $zero, L_60002910
    if (ctx->r15 == 0) {
        // 0x600028F0: nop
    
            goto L_60002910;
    }
    // 0x600028F0: nop

L_600028F4:
    // 0x600028F4: jal         0x600009D0
    // 0x600028F8: nop

    ovl_stage_world4_9D0(rdram, ctx);
        goto after_2;
    // 0x600028F8: nop

    after_2:
    // 0x600028FC: lw          $t8, 0x0($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X0);
    // 0x60002900: nop

    // 0x60002904: andi        $t9, $t8, 0x800
    ctx->r25 = ctx->r24 & 0X800;
    // 0x60002908: bne         $t9, $zero, L_600028F4
    if (ctx->r25 != 0) {
        // 0x6000290C: nop
    
            goto L_600028F4;
    }
    // 0x6000290C: nop

L_60002910:
    // 0x60002910: lui         $t0, 0x6000
    ctx->r8 = S32(0X6000 << 16);
    // 0x60002914: addiu       $s0, $sp, 0x40
    ctx->r16 = ADD32(ctx->r29, 0X40);
    // 0x60002918: addiu       $t0, $t0, 0x72D8
    ctx->r8 = ADD32(ctx->r8, 0X72D8);
    // 0x6000291C: sw          $t0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r8;
    // 0x60002920: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x60002924: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x60002928: jal         0x600006C4
    // 0x6000292C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_3;
    // 0x6000292C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x60002930: lui         $s4, 0x6000
    ctx->r20 = S32(0X6000 << 16);
    // 0x60002934: addiu       $s4, $s4, 0x72BC
    ctx->r20 = ADD32(ctx->r20, 0X72BC);
    // 0x60002938: lw          $a0, 0x1C($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X1C);
    // 0x6000293C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x60002940: jal         0x600006C4
    // 0x60002944: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_4;
    // 0x60002944: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_4:
    // 0x60002948: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000294C: lwc1        $f4, 0x73DC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X73DC);
    // 0x60002950: lw          $a0, 0x1C($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X1C);
    // 0x60002954: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x60002958: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x6000295C: jal         0x600006C4
    // 0x60002960: swc1        $f4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f4.u32l;
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_5;
    // 0x60002960: swc1        $f4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f4.u32l;
    after_5:
    // 0x60002964: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x60002968: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x6000296C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x60002970: jal         0x600006C4
    // 0x60002974: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_6;
    // 0x60002974: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_6:
    // 0x60002978: jal         0x60001158
    // 0x6000297C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world4_1158(rdram, ctx);
        goto after_7;
    // 0x6000297C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_7:
    // 0x60002980: lw          $t1, 0x0($s3)
    ctx->r9 = MEM_W(ctx->r19, 0X0);
    // 0x60002984: lui         $s0, 0x40
    ctx->r16 = S32(0X40 << 16);
    // 0x60002988: sll         $t2, $t1, 9
    ctx->r10 = S32(ctx->r9 << 9);
    // 0x6000298C: bgez        $t2, L_600029B0
    if (SIGNED(ctx->r10) >= 0) {
        // 0x60002990: nop
    
            goto L_600029B0;
    }
    // 0x60002990: nop

L_60002994:
    // 0x60002994: jal         0x600009D0
    // 0x60002998: nop

    ovl_stage_world4_9D0(rdram, ctx);
        goto after_8;
    // 0x60002998: nop

    after_8:
    // 0x6000299C: lw          $t3, 0x0($s3)
    ctx->r11 = MEM_W(ctx->r19, 0X0);
    // 0x600029A0: nop

    // 0x600029A4: and         $t4, $t3, $s0
    ctx->r12 = ctx->r11 & ctx->r16;
    // 0x600029A8: bne         $t4, $zero, L_60002994
    if (ctx->r12 != 0) {
        // 0x600029AC: nop
    
            goto L_60002994;
    }
    // 0x600029AC: nop

L_600029B0:
    // 0x600029B0: jal         0x600009D0
    // 0x600029B4: nop

    ovl_stage_world4_9D0(rdram, ctx);
        goto after_9;
    // 0x600029B4: nop

    after_9:
    // 0x600029B8: jal         0x60002798
    // 0x600029BC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world4_2798(rdram, ctx);
        goto after_10;
    // 0x600029BC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_10:
    // 0x600029C0: jal         0x600007E4
    // 0x600029C4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_stage_world4_7E4(rdram, ctx);
        goto after_11;
    // 0x600029C4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_11:
    // 0x600029C8: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x600029CC: addiu       $a2, $a2, 0x75B0
    ctx->r6 = ADD32(ctx->r6, 0X75B0);
    // 0x600029D0: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x600029D4: addiu       $t5, $zero, 0x6
    ctx->r13 = ADD32(0, 0X6);
    // 0x600029D8: sw          $t5, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r13;
    // 0x600029DC: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x600029E0: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x600029E4: lw          $t7, 0x2C($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X2C);
    // 0x600029E8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x600029EC: sw          $t7, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r15;
    // 0x600029F0: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x600029F4: nop

    // 0x600029F8: lw          $t8, 0x10($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X10);
    // 0x600029FC: nop

    // 0x60002A00: ori         $t9, $t8, 0x1
    ctx->r25 = ctx->r24 | 0X1;
    // 0x60002A04: sw          $t9, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r25;
    // 0x60002A08: lw          $t1, 0x0($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X0);
    // 0x60002A0C: nop

    // 0x60002A10: sw          $t0, 0xC($t1)
    MEM_W(0XC, ctx->r9) = ctx->r8;
    // 0x60002A14: lw          $a1, 0x0($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X0);
    // 0x60002A18: jal         0x600007F0
    // 0x60002A1C: nop

    ovl_stage_world4_7F0(rdram, ctx);
        goto after_12;
    // 0x60002A1C: nop

    after_12:
    // 0x60002A20: jal         0x600026BC
    // 0x60002A24: nop

    ovl_stage_world4_26BC(rdram, ctx);
        goto after_13;
    // 0x60002A24: nop

    after_13:
    // 0x60002A28: jal         0x60000B98
    // 0x60002A2C: addiu       $a0, $zero, 0x9F
    ctx->r4 = ADD32(0, 0X9F);
    ovl_stage_world4_B98(rdram, ctx);
        goto after_14;
    // 0x60002A2C: addiu       $a0, $zero, 0x9F
    ctx->r4 = ADD32(0, 0X9F);
    after_14:
    // 0x60002A30: lui         $s2, 0x6000
    ctx->r18 = S32(0X6000 << 16);
    // 0x60002A34: lui         $s1, 0x6000
    ctx->r17 = S32(0X6000 << 16);
    // 0x60002A38: lui         $s0, 0x6000
    ctx->r16 = S32(0X6000 << 16);
    // 0x60002A3C: addiu       $s0, $s0, 0x75C0
    ctx->r16 = ADD32(ctx->r16, 0X75C0);
    // 0x60002A40: addiu       $s1, $s1, 0x7558
    ctx->r17 = ADD32(ctx->r17, 0X7558);
    // 0x60002A44: addiu       $s2, $s2, 0x755C
    ctx->r18 = ADD32(ctx->r18, 0X755C);
    // 0x60002A48: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
L_60002A4C:
    // 0x60002A4C: nop

    // 0x60002A50: andi        $t2, $v0, 0x2000
    ctx->r10 = ctx->r2 & 0X2000;
    // 0x60002A54: beq         $t2, $zero, L_60002AAC
    if (ctx->r10 == 0) {
        // 0x60002A58: andi        $t3, $v0, 0x2
        ctx->r11 = ctx->r2 & 0X2;
            goto L_60002AAC;
    }
    // 0x60002A58: andi        $t3, $v0, 0x2
    ctx->r11 = ctx->r2 & 0X2;
    // 0x60002A5C: beq         $t3, $zero, L_60002A74
    if (ctx->r11 == 0) {
        // 0x60002A60: nop
    
            goto L_60002A74;
    }
    // 0x60002A60: nop

    // 0x60002A64: jal         0x600009AC
    // 0x60002A68: nop

    ovl_stage_world4_9AC(rdram, ctx);
        goto after_15;
    // 0x60002A68: nop

    after_15:
    // 0x60002A6C: b           L_60002A7C
    // 0x60002A70: nop

        goto L_60002A7C;
    // 0x60002A70: nop

L_60002A74:
    // 0x60002A74: jal         0x60000A6C
    // 0x60002A78: nop

    ovl_stage_world4_A6C(rdram, ctx);
        goto after_16;
    // 0x60002A78: nop

    after_16:
L_60002A7C:
    // 0x60002A7C: jal         0x60001158
    // 0x60002A80: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world4_1158(rdram, ctx);
        goto after_17;
    // 0x60002A80: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_17:
    // 0x60002A84: addiu       $a0, $zero, 0x86F
    ctx->r4 = ADD32(0, 0X86F);
    // 0x60002A88: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x60002A8C: jal         0x60000C10
    // 0x60002A90: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_stage_world4_C10(rdram, ctx);
        goto after_18;
    // 0x60002A90: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_18:
    // 0x60002A94: jal         0x60000B98
    // 0x60002A98: addiu       $a0, $zero, 0xA7
    ctx->r4 = ADD32(0, 0XA7);
    ovl_stage_world4_B98(rdram, ctx);
        goto after_19;
    // 0x60002A98: addiu       $a0, $zero, 0xA7
    ctx->r4 = ADD32(0, 0XA7);
    after_19:
    // 0x60002A9C: jal         0x60002798
    // 0x60002AA0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world4_2798(rdram, ctx);
        goto after_20;
    // 0x60002AA0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_20:
    // 0x60002AA4: jal         0x600009AC
    // 0x60002AA8: nop

    ovl_stage_world4_9AC(rdram, ctx);
        goto after_21;
    // 0x60002AA8: nop

    after_21:
L_60002AAC:
    // 0x60002AAC: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
    // 0x60002AB0: sh          $zero, 0x2($s0)
    MEM_H(0X2, ctx->r16) = 0;
    // 0x60002AB4: sh          $zero, 0x4($s0)
    MEM_H(0X4, ctx->r16) = 0;
    // 0x60002AB8: sb          $zero, 0x6($s0)
    MEM_B(0X6, ctx->r16) = 0;
    // 0x60002ABC: jal         0x600013CC
    // 0x60002AC0: sb          $zero, 0x7($s0)
    MEM_B(0X7, ctx->r16) = 0;
    ovl_stage_world4_13CC(rdram, ctx);
        goto after_22;
    // 0x60002AC0: sb          $zero, 0x7($s0)
    MEM_B(0X7, ctx->r16) = 0;
    after_22:
    // 0x60002AC4: jal         0x60000DE4
    // 0x60002AC8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world4_DE4(rdram, ctx);
        goto after_23;
    // 0x60002AC8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_23:
    // 0x60002ACC: lui         $a1, 0x6000
    ctx->r5 = S32(0X6000 << 16);
    // 0x60002AD0: addiu       $a1, $a1, 0x75B8
    ctx->r5 = ADD32(ctx->r5, 0X75B8);
    // 0x60002AD4: jal         0x60000CE8
    // 0x60002AD8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_stage_world4_CE8(rdram, ctx);
        goto after_24;
    // 0x60002AD8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_24:
    // 0x60002ADC: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    // 0x60002AE0: lui         $a1, 0x6000
    ctx->r5 = S32(0X6000 << 16);
    // 0x60002AE4: jal         0x60000CE8
    // 0x60002AE8: addiu       $a1, $a1, 0x75B4
    ctx->r5 = ADD32(ctx->r5, 0X75B4);
    ovl_stage_world4_CE8(rdram, ctx);
        goto after_25;
    // 0x60002AE8: addiu       $a1, $a1, 0x75B4
    ctx->r5 = ADD32(ctx->r5, 0X75B4);
    after_25:
    // 0x60002AEC: jal         0x60002200
    // 0x60002AF0: nop

    ovl_stage_world4_2200(rdram, ctx);
        goto after_26;
    // 0x60002AF0: nop

    after_26:
    // 0x60002AF4: lw          $t4, 0x0($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X0);
    // 0x60002AF8: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    // 0x60002AFC: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x60002B00: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x60002B04: sw          $t5, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r13;
    // 0x60002B08: sw          $t7, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r15;
    // 0x60002B0C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x60002B10: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x60002B14: jal         0x60000808
    // 0x60002B18: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_stage_world4_808(rdram, ctx);
        goto after_27;
    // 0x60002B18: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_27:
    // 0x60002B1C: jal         0x600009D0
    // 0x60002B20: nop

    ovl_stage_world4_9D0(rdram, ctx);
        goto after_28;
    // 0x60002B20: nop

    after_28:
    // 0x60002B24: b           L_60002A4C
    // 0x60002B28: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
        goto L_60002A4C;
    // 0x60002B28: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x60002B2C: nop

    // 0x60002B30: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x60002B34: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x60002B38: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x60002B3C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x60002B40: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x60002B44: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x60002B48: jr          $ra
    // 0x60002B4C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x60002B4C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_stage_world4_2B50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002B50: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x60002B54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60002B58: jal         0x60000C1C
    // 0x60002B5C: nop

    ovl_stage_world4_C1C(rdram, ctx);
        goto after_0;
    // 0x60002B5C: nop

    after_0:
    // 0x60002B60: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x60002B64: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x60002B68: nop

    // 0x60002B6C: sll         $t7, $t6, 13
    ctx->r15 = S32(ctx->r14 << 13);
    // 0x60002B70: bltz        $t7, L_60002C04
    if (SIGNED(ctx->r15) < 0) {
        // 0x60002B74: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60002C04;
    }
    // 0x60002B74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002B78: lw          $t8, 0xC($v0)
    ctx->r24 = MEM_W(ctx->r2, 0XC);
    // 0x60002B7C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x60002B80: beq         $t8, $at, L_60002BA4
    if (ctx->r24 == ctx->r1) {
        // 0x60002B84: lw          $t9, 0x1C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X1C);
            goto L_60002BA4;
    }
    // 0x60002B84: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x60002B88: jal         0x60000BB0
    // 0x60002B8C: addiu       $a0, $zero, 0x8B
    ctx->r4 = ADD32(0, 0X8B);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_1;
    // 0x60002B8C: addiu       $a0, $zero, 0x8B
    ctx->r4 = ADD32(0, 0X8B);
    after_1:
    // 0x60002B90: bne         $v0, $zero, L_60002BA4
    if (ctx->r2 != 0) {
        // 0x60002B94: lw          $t9, 0x1C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X1C);
            goto L_60002BA4;
    }
    // 0x60002B94: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x60002B98: jal         0x60000A60
    // 0x60002B9C: addiu       $a0, $zero, 0xAC7
    ctx->r4 = ADD32(0, 0XAC7);
    ovl_stage_world4_A60(rdram, ctx);
        goto after_2;
    // 0x60002B9C: addiu       $a0, $zero, 0xAC7
    ctx->r4 = ADD32(0, 0XAC7);
    after_2:
    // 0x60002BA0: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
L_60002BA4:
    // 0x60002BA4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x60002BA8: lw          $t0, 0xC($t9)
    ctx->r8 = MEM_W(ctx->r25, 0XC);
    // 0x60002BAC: nop

    // 0x60002BB0: bne         $t0, $at, L_60002BDC
    if (ctx->r8 != ctx->r1) {
        // 0x60002BB4: nop
    
            goto L_60002BDC;
    }
    // 0x60002BB4: nop

    // 0x60002BB8: jal         0x60000A60
    // 0x60002BBC: addiu       $a0, $zero, 0xAC8
    ctx->r4 = ADD32(0, 0XAC8);
    ovl_stage_world4_A60(rdram, ctx);
        goto after_3;
    // 0x60002BBC: addiu       $a0, $zero, 0xAC8
    ctx->r4 = ADD32(0, 0XAC8);
    after_3:
    // 0x60002BC0: jal         0x60000B98
    // 0x60002BC4: addiu       $a0, $zero, 0x8B
    ctx->r4 = ADD32(0, 0X8B);
    ovl_stage_world4_B98(rdram, ctx);
        goto after_4;
    // 0x60002BC4: addiu       $a0, $zero, 0x8B
    ctx->r4 = ADD32(0, 0X8B);
    after_4:
    // 0x60002BC8: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x60002BCC: jal         0x60000E80
    // 0x60002BD0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world4_E80(rdram, ctx);
        goto after_5;
    // 0x60002BD0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x60002BD4: b           L_60002C04
    // 0x60002BD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60002C04;
    // 0x60002BD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60002BDC:
    // 0x60002BDC: jal         0x60000BB0
    // 0x60002BE0: addiu       $a0, $zero, 0x8B
    ctx->r4 = ADD32(0, 0X8B);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_6;
    // 0x60002BE0: addiu       $a0, $zero, 0x8B
    ctx->r4 = ADD32(0, 0X8B);
    after_6:
    // 0x60002BE4: bne         $v0, $zero, L_60002C00
    if (ctx->r2 != 0) {
        // 0x60002BE8: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_60002C00;
    }
    // 0x60002BE8: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002BEC: addiu       $a0, $a0, 0x28B4
    ctx->r4 = ADD32(ctx->r4, 0X28B4);
    // 0x60002BF0: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60002BF4: addiu       $a2, $zero, 0x2400
    ctx->r6 = ADD32(0, 0X2400);
    // 0x60002BF8: jal         0x60000994
    // 0x60002BFC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world4_994(rdram, ctx);
        goto after_7;
    // 0x60002BFC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_7:
L_60002C00:
    // 0x60002C00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60002C04:
    // 0x60002C04: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x60002C08: jr          $ra
    // 0x60002C0C: nop

    return;
    // 0x60002C0C: nop

;}
RECOMP_FUNC void ovl_stage_world4_2C10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002C10: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x60002C14: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x60002C18: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x60002C1C: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x60002C20: jal         0x60000DE4
    // 0x60002C24: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    ovl_stage_world4_DE4(rdram, ctx);
        goto after_0;
    // 0x60002C24: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x60002C28: beq         $s1, $zero, L_60002C98
    if (ctx->r17 == 0) {
        // 0x60002C2C: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_60002C98;
    }
    // 0x60002C2C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x60002C30: addiu       $s1, $sp, 0x28
    ctx->r17 = ADD32(ctx->r29, 0X28);
    // 0x60002C34: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x60002C38: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60002C3C: jal         0x600006C4
    // 0x60002C40: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_1;
    // 0x60002C40: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    after_1:
    // 0x60002C44: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x60002C48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x60002C4C: ori         $t7, $t6, 0x30
    ctx->r15 = ctx->r14 | 0X30;
    // 0x60002C50: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x60002C54: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x60002C58: jal         0x600006C4
    // 0x60002C5C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_2;
    // 0x60002C5C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_2:
    // 0x60002C60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x60002C64: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x60002C68: jal         0x600006C4
    // 0x60002C6C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_3;
    // 0x60002C6C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_3:
    // 0x60002C70: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x60002C74: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x60002C78: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x60002C7C: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x60002C80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x60002C84: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x60002C88: jal         0x600006C4
    // 0x60002C8C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_4;
    // 0x60002C8C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_4:
    // 0x60002C90: b           L_60002D04
    // 0x60002C94: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_60002D04;
    // 0x60002C94: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_60002C98:
    // 0x60002C98: addiu       $s1, $sp, 0x28
    ctx->r17 = ADD32(ctx->r29, 0X28);
    // 0x60002C9C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x60002CA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x60002CA4: jal         0x600006C4
    // 0x60002CA8: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_5;
    // 0x60002CA8: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    after_5:
    // 0x60002CAC: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x60002CB0: addiu       $at, $zero, -0x11
    ctx->r1 = ADD32(0, -0X11);
    // 0x60002CB4: and         $t0, $v1, $at
    ctx->r8 = ctx->r3 & ctx->r1;
    // 0x60002CB8: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x60002CBC: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x60002CC0: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    // 0x60002CC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x60002CC8: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x60002CCC: jal         0x600006C4
    // 0x60002CD0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_6;
    // 0x60002CD0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_6:
    // 0x60002CD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x60002CD8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x60002CDC: jal         0x600006C4
    // 0x60002CE0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_7;
    // 0x60002CE0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_7:
    // 0x60002CE4: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x60002CE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x60002CEC: ori         $t3, $t2, 0x4
    ctx->r11 = ctx->r10 | 0X4;
    // 0x60002CF0: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    // 0x60002CF4: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x60002CF8: jal         0x600006C4
    // 0x60002CFC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_8;
    // 0x60002CFC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_8:
    // 0x60002D00: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_60002D04:
    // 0x60002D04: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x60002D08: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x60002D0C: jr          $ra
    // 0x60002D10: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x60002D10: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_stage_world4_2D14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002D14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60002D18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60002D1C: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60002D20: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x60002D24: addiu       $a2, $a2, 0x75D0
    ctx->r6 = ADD32(ctx->r6, 0X75D0);
    // 0x60002D28: jal         0x60000808
    // 0x60002D2C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_stage_world4_808(rdram, ctx);
        goto after_0;
    // 0x60002D2C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x60002D30: lui         $t6, 0x6000
    ctx->r14 = S32(0X6000 << 16);
    // 0x60002D34: lw          $t6, 0x75D0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X75D0);
    // 0x60002D38: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002D3C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x60002D40: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60002D44: ori         $t7, $t6, 0x100
    ctx->r15 = ctx->r14 | 0X100;
    // 0x60002D48: sw          $t7, 0x75D0($at)
    MEM_W(0X75D0, ctx->r1) = ctx->r15;
    // 0x60002D4C: addiu       $a2, $a2, 0x75D0
    ctx->r6 = ADD32(ctx->r6, 0X75D0);
    // 0x60002D50: jal         0x60000808
    // 0x60002D54: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_stage_world4_808(rdram, ctx);
        goto after_1;
    // 0x60002D54: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x60002D58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002D5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60002D60: jr          $ra
    // 0x60002D64: nop

    return;
    // 0x60002D64: nop

;}
RECOMP_FUNC void ovl_stage_world4_2D68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002D68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60002D6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60002D70: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60002D74: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x60002D78: addiu       $a2, $a2, 0x75D8
    ctx->r6 = ADD32(ctx->r6, 0X75D8);
    // 0x60002D7C: jal         0x60000808
    // 0x60002D80: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_stage_world4_808(rdram, ctx);
        goto after_0;
    // 0x60002D80: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x60002D84: lui         $t6, 0x6000
    ctx->r14 = S32(0X6000 << 16);
    // 0x60002D88: lw          $t6, 0x75D8($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X75D8);
    // 0x60002D8C: addiu       $at, $zero, -0x101
    ctx->r1 = ADD32(0, -0X101);
    // 0x60002D90: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x60002D94: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002D98: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x60002D9C: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60002DA0: sw          $t7, 0x75D8($at)
    MEM_W(0X75D8, ctx->r1) = ctx->r15;
    // 0x60002DA4: addiu       $a2, $a2, 0x75D8
    ctx->r6 = ADD32(ctx->r6, 0X75D8);
    // 0x60002DA8: jal         0x60000808
    // 0x60002DAC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_stage_world4_808(rdram, ctx);
        goto after_1;
    // 0x60002DAC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x60002DB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002DB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60002DB8: jr          $ra
    // 0x60002DBC: nop

    return;
    // 0x60002DBC: nop

;}
RECOMP_FUNC void ovl_stage_world4_2DC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002DC0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x60002DC4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x60002DC8: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x60002DCC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x60002DD0: jal         0x60000DE4
    // 0x60002DD4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world4_DE4(rdram, ctx);
        goto after_0;
    // 0x60002DD4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x60002DD8: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x60002DDC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x60002DE0: beq         $t6, $zero, L_60002E40
    if (ctx->r14 == 0) {
        // 0x60002DE4: nop
    
            goto L_60002E40;
    }
    // 0x60002DE4: nop

    // 0x60002DE8: jal         0x60002D14
    // 0x60002DEC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world4_2D14(rdram, ctx);
        goto after_1;
    // 0x60002DEC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x60002DF0: addiu       $t7, $zero, 0x7
    ctx->r15 = ADD32(0, 0X7);
    // 0x60002DF4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x60002DF8: sw          $t7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r15;
    // 0x60002DFC: sw          $t8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r24;
    // 0x60002E00: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60002E04: jal         0x600007F0
    // 0x60002E08: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    ovl_stage_world4_7F0(rdram, ctx);
        goto after_2;
    // 0x60002E08: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_2:
    // 0x60002E0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x60002E10: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x60002E14: jal         0x600006C4
    // 0x60002E18: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_3;
    // 0x60002E18: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_3:
    // 0x60002E1C: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x60002E20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x60002E24: ori         $t0, $t9, 0x40
    ctx->r8 = ctx->r25 | 0X40;
    // 0x60002E28: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x60002E2C: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x60002E30: jal         0x600006C4
    // 0x60002E34: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_4;
    // 0x60002E34: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_4:
    // 0x60002E38: b           L_60002E94
    // 0x60002E3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_60002E94;
    // 0x60002E3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_60002E40:
    // 0x60002E40: jal         0x60002D68
    // 0x60002E44: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world4_2D68(rdram, ctx);
        goto after_5;
    // 0x60002E44: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_5:
    // 0x60002E48: addiu       $t1, $zero, 0x7
    ctx->r9 = ADD32(0, 0X7);
    // 0x60002E4C: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x60002E50: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x60002E54: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60002E58: jal         0x600007F0
    // 0x60002E5C: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    ovl_stage_world4_7F0(rdram, ctx);
        goto after_6;
    // 0x60002E5C: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_6:
    // 0x60002E60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x60002E64: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x60002E68: jal         0x600006C4
    // 0x60002E6C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_7;
    // 0x60002E6C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_7:
    // 0x60002E70: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x60002E74: addiu       $at, $zero, -0x41
    ctx->r1 = ADD32(0, -0X41);
    // 0x60002E78: and         $t3, $t2, $at
    ctx->r11 = ctx->r10 & ctx->r1;
    // 0x60002E7C: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x60002E80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x60002E84: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x60002E88: jal         0x600006C4
    // 0x60002E8C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_8;
    // 0x60002E8C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_8:
    // 0x60002E90: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_60002E94:
    // 0x60002E94: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x60002E98: jr          $ra
    // 0x60002E9C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x60002E9C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_stage_world4_2EA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002EA0: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x60002EA4: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x60002EA8: swc1        $f25, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x60002EAC: swc1        $f24, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f24.u32l;
    // 0x60002EB0: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x60002EB4: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x60002EB8: mov.s       $f22, $f12
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 12);
    ctx->f22.fl = ctx->f12.fl;
    // 0x60002EBC: mov.s       $f24, $f14
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 14);
    ctx->f24.fl = ctx->f14.fl;
    // 0x60002EC0: sw          $s5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r21;
    // 0x60002EC4: sw          $s4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r20;
    // 0x60002EC8: sw          $s3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r19;
    // 0x60002ECC: sw          $s2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r18;
    // 0x60002ED0: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x60002ED4: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x60002ED8: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x60002EDC: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x60002EE0: jal         0x60000DE4
    // 0x60002EE4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world4_DE4(rdram, ctx);
        goto after_0;
    // 0x60002EE4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x60002EE8: addiu       $s4, $sp, 0x8C
    ctx->r20 = ADD32(ctx->r29, 0X8C);
    // 0x60002EEC: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x60002EF0: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x60002EF4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60002EF8: jal         0x600006C4
    // 0x60002EFC: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_1;
    // 0x60002EFC: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    after_1:
    // 0x60002F00: lw          $t6, 0x8C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X8C);
    // 0x60002F04: addiu       $s5, $sp, 0x74
    ctx->r21 = ADD32(ctx->r29, 0X74);
    // 0x60002F08: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x60002F0C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x60002F10: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x60002F14: jal         0x600006C4
    // 0x60002F18: swc1        $f22, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->f22.u32l;
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_2;
    // 0x60002F18: swc1        $f22, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->f22.u32l;
    after_2:
    // 0x60002F1C: jal         0x600007E4
    // 0x60002F20: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world4_7E4(rdram, ctx);
        goto after_3;
    // 0x60002F20: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x60002F24: lw          $t7, 0x10($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X10);
    // 0x60002F28: lui         $at, 0x20
    ctx->r1 = S32(0X20 << 16);
    // 0x60002F2C: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x60002F30: lui         $at, 0x10
    ctx->r1 = S32(0X10 << 16);
    // 0x60002F34: or          $t0, $t8, $at
    ctx->r8 = ctx->r24 | ctx->r1;
    // 0x60002F38: sw          $t8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r24;
    // 0x60002F3C: sw          $t0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r8;
    // 0x60002F40: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002F44: lwc1        $f4, 0x73E0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X73E0);
    // 0x60002F48: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60002F4C: div.s       $f6, $f24, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f24.fl, ctx->f4.fl);
    // 0x60002F50: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x60002F54: nop

    // 0x60002F58: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x60002F5C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x60002F60: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x60002F64: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x60002F68: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x60002F6C: mfc1        $s3, $f8
    ctx->r19 = (int32_t)ctx->f8.u32l;
    // 0x60002F70: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x60002F74: blez        $s3, L_60002FDC
    if (SIGNED(ctx->r19) <= 0) {
        // 0x60002F78: nop
    
            goto L_60002FDC;
    }
    // 0x60002F78: nop

    // 0x60002F7C: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x60002F80: addiu       $s1, $sp, 0x5C
    ctx->r17 = ADD32(ctx->r29, 0X5C);
    // 0x60002F84: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_60002F88:
    // 0x60002F88: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x60002F8C: jal         0x600006C4
    // 0x60002F90: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_4;
    // 0x60002F90: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_4:
    // 0x60002F94: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x60002F98: jal         0x60000418
    // 0x60002F9C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    ovl_stage_world4_418(rdram, ctx);
        goto after_5;
    // 0x60002F9C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_5:
    // 0x60002FA0: c.lt.s      $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f24.fl < ctx->f0.fl;
    // 0x60002FA4: lw          $t2, 0x8C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X8C);
    // 0x60002FA8: bc1t        L_60002FDC
    if (c1cs) {
        // 0x60002FAC: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_60002FDC;
    }
    // 0x60002FAC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x60002FB0: swc1        $f22, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->f22.u32l;
    // 0x60002FB4: lw          $t3, 0x8C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X8C);
    // 0x60002FB8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x60002FBC: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x60002FC0: jal         0x600006C4
    // 0x60002FC4: swc1        $f20, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->f20.u32l;
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_6;
    // 0x60002FC4: swc1        $f20, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->f20.u32l;
    after_6:
    // 0x60002FC8: jal         0x600009D0
    // 0x60002FCC: nop

    ovl_stage_world4_9D0(rdram, ctx);
        goto after_7;
    // 0x60002FCC: nop

    after_7:
    // 0x60002FD0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60002FD4: bne         $s0, $s3, L_60002F88
    if (ctx->r16 != ctx->r19) {
        // 0x60002FD8: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_60002F88;
    }
    // 0x60002FD8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_60002FDC:
    // 0x60002FDC: jal         0x600007E4
    // 0x60002FE0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world4_7E4(rdram, ctx);
        goto after_8;
    // 0x60002FE0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_8:
    // 0x60002FE4: lw          $t4, 0x10($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X10);
    // 0x60002FE8: lui         $at, 0xFFDF
    ctx->r1 = S32(0XFFDF << 16);
    // 0x60002FEC: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x60002FF0: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x60002FF4: lui         $at, 0xFFEF
    ctx->r1 = S32(0XFFEF << 16);
    // 0x60002FF8: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x60002FFC: sw          $t5, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r13;
    // 0x60003000: and         $t7, $t5, $at
    ctx->r15 = ctx->r13 & ctx->r1;
    // 0x60003004: sw          $t7, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r15;
    // 0x60003008: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x6000300C: lw          $s5, 0x40($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X40);
    // 0x60003010: lw          $s4, 0x3C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X3C);
    // 0x60003014: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x60003018: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x6000301C: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x60003020: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x60003024: lwc1        $f24, 0x24($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X24);
    // 0x60003028: lwc1        $f25, 0x20($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x6000302C: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x60003030: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x60003034: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x60003038: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x6000303C: jr          $ra
    // 0x60003040: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    return;
    // 0x60003040: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
;}
RECOMP_FUNC void ovl_stage_world4_3044(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003044: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60003048: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x6000304C: addiu       $a0, $zero, 0xF3
    ctx->r4 = ADD32(0, 0XF3);
    // 0x60003050: jal         0x60000E38
    // 0x60003054: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world4_E38(rdram, ctx);
        goto after_0;
    // 0x60003054: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x60003058: addiu       $a0, $zero, 0xF5
    ctx->r4 = ADD32(0, 0XF5);
    // 0x6000305C: jal         0x60000E38
    // 0x60003060: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world4_E38(rdram, ctx);
        goto after_1;
    // 0x60003060: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x60003064: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003068: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x6000306C: jr          $ra
    // 0x60003070: nop

    return;
    // 0x60003070: nop

;}
RECOMP_FUNC void ovl_stage_world4_3074(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003074: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60003078: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x6000307C: addiu       $a0, $zero, 0xF3
    ctx->r4 = ADD32(0, 0XF3);
    // 0x60003080: jal         0x60000E38
    // 0x60003084: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world4_E38(rdram, ctx);
        goto after_0;
    // 0x60003084: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x60003088: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000308C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60003090: jr          $ra
    // 0x60003094: nop

    return;
    // 0x60003094: nop

;}
RECOMP_FUNC void ovl_stage_world4_3098(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003098: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x6000309C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600030A0: addiu       $a0, $zero, 0xF7
    ctx->r4 = ADD32(0, 0XF7);
    // 0x600030A4: jal         0x60000E38
    // 0x600030A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world4_E38(rdram, ctx);
        goto after_0;
    // 0x600030A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x600030AC: addiu       $a0, $zero, 0xF3
    ctx->r4 = ADD32(0, 0XF3);
    // 0x600030B0: jal         0x60000E38
    // 0x600030B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world4_E38(rdram, ctx);
        goto after_1;
    // 0x600030B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x600030B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600030BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600030C0: jr          $ra
    // 0x600030C4: nop

    return;
    // 0x600030C4: nop

;}
RECOMP_FUNC void ovl_stage_world4_30C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600030C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600030CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600030D0: addiu       $a0, $zero, 0xF8
    ctx->r4 = ADD32(0, 0XF8);
    // 0x600030D4: jal         0x60000E38
    // 0x600030D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world4_E38(rdram, ctx);
        goto after_0;
    // 0x600030D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x600030DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600030E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600030E4: jr          $ra
    // 0x600030E8: nop

    return;
    // 0x600030E8: nop

;}
RECOMP_FUNC void ovl_stage_world4_30EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600030EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600030F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600030F4: addiu       $a0, $zero, 0xF6
    ctx->r4 = ADD32(0, 0XF6);
    // 0x600030F8: jal         0x60000E38
    // 0x600030FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world4_E38(rdram, ctx);
        goto after_0;
    // 0x600030FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x60003100: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003104: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60003108: jr          $ra
    // 0x6000310C: nop

    return;
    // 0x6000310C: nop

;}
RECOMP_FUNC void ovl_stage_world4_3110(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003110: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60003114: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003118: lui         $a1, 0x441D
    ctx->r5 = S32(0X441D << 16);
    // 0x6000311C: lui         $a3, 0x442C
    ctx->r7 = S32(0X442C << 16);
    // 0x60003120: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x60003124: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x60003128: addiu       $a0, $zero, 0x16B
    ctx->r4 = ADD32(0, 0X16B);
    // 0x6000312C: jal         0x60000274
    // 0x60003130: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    ovl_stage_world4_274(rdram, ctx);
        goto after_0;
    // 0x60003130: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_0:
    // 0x60003134: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60003138: jal         0x600009AC
    // 0x6000313C: sw          $v0, 0x7530($at)
    MEM_W(0X7530, ctx->r1) = ctx->r2;
    ovl_stage_world4_9AC(rdram, ctx);
        goto after_1;
    // 0x6000313C: sw          $v0, 0x7530($at)
    MEM_W(0X7530, ctx->r1) = ctx->r2;
    after_1:
    // 0x60003140: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003144: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60003148: jr          $ra
    // 0x6000314C: nop

    return;
    // 0x6000314C: nop

;}
RECOMP_FUNC void ovl_stage_world4_3150(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003150: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60003154: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003158: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x6000315C: addiu       $a0, $a0, 0x3110
    ctx->r4 = ADD32(ctx->r4, 0X3110);
    // 0x60003160: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60003164: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60003168: jal         0x60000994
    // 0x6000316C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world4_994(rdram, ctx);
        goto after_0;
    // 0x6000316C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x60003170: addiu       $a0, $zero, 0xF8
    ctx->r4 = ADD32(0, 0XF8);
    // 0x60003174: jal         0x60000E38
    // 0x60003178: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world4_E38(rdram, ctx);
        goto after_1;
    // 0x60003178: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x6000317C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003180: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60003184: jr          $ra
    // 0x60003188: nop

    return;
    // 0x60003188: nop

;}
RECOMP_FUNC void ovl_stage_world4_318C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000318C: jr          $ra
    // 0x60003190: nop

    return;
    // 0x60003190: nop

;}
RECOMP_FUNC void ovl_stage_world4_3194(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003194: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60003198: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x6000319C: addiu       $a0, $zero, 0xFB
    ctx->r4 = ADD32(0, 0XFB);
    // 0x600031A0: jal         0x60000E38
    // 0x600031A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world4_E38(rdram, ctx);
        goto after_0;
    // 0x600031A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x600031A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600031AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600031B0: jr          $ra
    // 0x600031B4: nop

    return;
    // 0x600031B4: nop

;}
RECOMP_FUNC void ovl_stage_world4_31B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600031B8: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x600031BC: swc1        $f30, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f30.u32l;
    // 0x600031C0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600031C4: lwc1        $f30, 0x73E4($at)
    ctx->f30.u32l = MEM_W(ctx->r1, 0X73E4);
    // 0x600031C8: swc1        $f28, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f28.u32l;
    // 0x600031CC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600031D0: lwc1        $f28, 0x73E8($at)
    ctx->f28.u32l = MEM_W(ctx->r1, 0X73E8);
    // 0x600031D4: swc1        $f26, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f26.u32l;
    // 0x600031D8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600031DC: lwc1        $f26, 0x73EC($at)
    ctx->f26.u32l = MEM_W(ctx->r1, 0X73EC);
    // 0x600031E0: swc1        $f24, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f24.u32l;
    // 0x600031E4: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x600031E8: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x600031EC: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x600031F0: lui         $at, 0xC313
    ctx->r1 = S32(0XC313 << 16);
    // 0x600031F4: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x600031F8: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x600031FC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60003200: sw          $s3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r19;
    // 0x60003204: sw          $s2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r18;
    // 0x60003208: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x6000320C: lwc1        $f20, 0x73F0($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X73F0);
    // 0x60003210: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x60003214: sw          $s0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r16;
    // 0x60003218: swc1        $f31, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x6000321C: swc1        $f29, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x60003220: swc1        $f27, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x60003224: swc1        $f25, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x60003228: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x6000322C: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x60003230: addiu       $s1, $sp, 0x68
    ctx->r17 = ADD32(ctx->r29, 0X68);
    // 0x60003234: addiu       $s2, $sp, 0x5C
    ctx->r18 = ADD32(ctx->r29, 0X5C);
    // 0x60003238: addiu       $s3, $zero, 0x1E
    ctx->r19 = ADD32(0, 0X1E);
    // 0x6000323C: lui         $at, 0x439F
    ctx->r1 = S32(0X439F << 16);
L_60003240:
    // 0x60003240: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60003244: swc1        $f22, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f22.u32l;
    // 0x60003248: swc1        $f24, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f24.u32l;
    // 0x6000324C: swc1        $f26, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f26.u32l;
    // 0x60003250: swc1        $f28, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f28.u32l;
    // 0x60003254: swc1        $f30, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f30.u32l;
    // 0x60003258: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x6000325C: swc1        $f4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f4.u32l;
    // 0x60003260: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
L_60003264:
    // 0x60003264: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60003268: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x6000326C: jal         0x60000DC0
    // 0x60003270: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world4_DC0(rdram, ctx);
        goto after_0;
    // 0x60003270: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x60003274: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    // 0x60003278: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x6000327C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x60003280: jal         0x60000DC0
    // 0x60003284: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world4_DC0(rdram, ctx);
        goto after_1;
    // 0x60003284: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x60003288: lwc1        $f6, 0x68($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X68);
    // 0x6000328C: lwc1        $f10, 0x5C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x60003290: add.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f20.fl;
    // 0x60003294: sub.s       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f20.fl;
    // 0x60003298: swc1        $f8, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f8.u32l;
    // 0x6000329C: jal         0x600009D0
    // 0x600032A0: swc1        $f16, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f16.u32l;
    ovl_stage_world4_9D0(rdram, ctx);
        goto after_2;
    // 0x600032A0: swc1        $f16, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x600032A4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x600032A8: slti        $at, $s0, 0x1E
    ctx->r1 = SIGNED(ctx->r16) < 0X1E ? 1 : 0;
    // 0x600032AC: bne         $at, $zero, L_60003264
    if (ctx->r1 != 0) {
        // 0x600032B0: addiu       $a0, $zero, 0x23
        ctx->r4 = ADD32(0, 0X23);
            goto L_60003264;
    }
    // 0x600032B0: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    // 0x600032B4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x600032B8: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
L_600032BC:
    // 0x600032BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x600032C0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x600032C4: jal         0x60000DC0
    // 0x600032C8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world4_DC0(rdram, ctx);
        goto after_3;
    // 0x600032C8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x600032CC: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    // 0x600032D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x600032D4: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x600032D8: jal         0x60000DC0
    // 0x600032DC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world4_DC0(rdram, ctx);
        goto after_4;
    // 0x600032DC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x600032E0: lwc1        $f18, 0x68($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X68);
    // 0x600032E4: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x600032E8: sub.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f20.fl;
    // 0x600032EC: add.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f20.fl;
    // 0x600032F0: swc1        $f4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f4.u32l;
    // 0x600032F4: jal         0x600009D0
    // 0x600032F8: swc1        $f8, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f8.u32l;
    ovl_stage_world4_9D0(rdram, ctx);
        goto after_5;
    // 0x600032F8: swc1        $f8, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f8.u32l;
    after_5:
    // 0x600032FC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60003300: bne         $s0, $s3, L_600032BC
    if (ctx->r16 != ctx->r19) {
        // 0x60003304: addiu       $a0, $zero, 0x23
        ctx->r4 = ADD32(0, 0X23);
            goto L_600032BC;
    }
    // 0x60003304: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    // 0x60003308: b           L_60003240
    // 0x6000330C: lui         $at, 0x439F
    ctx->r1 = S32(0X439F << 16);
        goto L_60003240;
    // 0x6000330C: lui         $at, 0x439F
    ctx->r1 = S32(0X439F << 16);
    // 0x60003310: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x60003314: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x60003318: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x6000331C: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x60003320: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x60003324: lwc1        $f25, 0x20($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x60003328: lwc1        $f24, 0x24($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X24);
    // 0x6000332C: lwc1        $f27, 0x28($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x60003330: lwc1        $f26, 0x2C($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x60003334: lwc1        $f29, 0x30($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x60003338: lwc1        $f28, 0x34($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X34);
    // 0x6000333C: lwc1        $f31, 0x38($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x60003340: lwc1        $f30, 0x3C($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x60003344: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
    // 0x60003348: lw          $s1, 0x48($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X48);
    // 0x6000334C: lw          $s2, 0x4C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X4C);
    // 0x60003350: lw          $s3, 0x50($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X50);
    // 0x60003354: jr          $ra
    // 0x60003358: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x60003358: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void ovl_stage_world4_335C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000335C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60003360: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003364: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003368: addiu       $a0, $a0, 0x31B8
    ctx->r4 = ADD32(ctx->r4, 0X31B8);
    // 0x6000336C: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60003370: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60003374: jal         0x60000994
    // 0x60003378: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world4_994(rdram, ctx);
        goto after_0;
    // 0x60003378: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x6000337C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003380: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60003384: jr          $ra
    // 0x60003388: nop

    return;
    // 0x60003388: nop

;}
RECOMP_FUNC void ovl_stage_world4_338C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000338C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60003390: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003394: jal         0x60000BB0
    // 0x60003398: addiu       $a0, $zero, 0x83
    ctx->r4 = ADD32(0, 0X83);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_0;
    // 0x60003398: addiu       $a0, $zero, 0x83
    ctx->r4 = ADD32(0, 0X83);
    after_0:
    // 0x6000339C: beq         $v0, $zero, L_600033B4
    if (ctx->r2 == 0) {
        // 0x600033A0: nop
    
            goto L_600033B4;
    }
    // 0x600033A0: nop

    // 0x600033A4: jal         0x60000C7C
    // 0x600033A8: nop

    ovl_stage_world4_C7C(rdram, ctx);
        goto after_1;
    // 0x600033A8: nop

    after_1:
    // 0x600033AC: b           L_600033C8
    // 0x600033B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600033C8;
    // 0x600033B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600033B4:
    // 0x600033B4: jal         0x60000B98
    // 0x600033B8: addiu       $a0, $zero, 0x83
    ctx->r4 = ADD32(0, 0X83);
    ovl_stage_world4_B98(rdram, ctx);
        goto after_2;
    // 0x600033B8: addiu       $a0, $zero, 0x83
    ctx->r4 = ADD32(0, 0X83);
    after_2:
    // 0x600033BC: jal         0x60000C7C
    // 0x600033C0: nop

    ovl_stage_world4_C7C(rdram, ctx);
        goto after_3;
    // 0x600033C0: nop

    after_3:
    // 0x600033C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600033C8:
    // 0x600033C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600033CC: jr          $ra
    // 0x600033D0: nop

    return;
    // 0x600033D0: nop

;}
RECOMP_FUNC void ovl_stage_world4_33D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600033D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600033D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600033DC: jal         0x60000BB0
    // 0x600033E0: addiu       $a0, $zero, 0x193
    ctx->r4 = ADD32(0, 0X193);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_0;
    // 0x600033E0: addiu       $a0, $zero, 0x193
    ctx->r4 = ADD32(0, 0X193);
    after_0:
    // 0x600033E4: beq         $v0, $zero, L_600033F4
    if (ctx->r2 == 0) {
        // 0x600033E8: nop
    
            goto L_600033F4;
    }
    // 0x600033E8: nop

    // 0x600033EC: jal         0x60000EEC
    // 0x600033F0: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    ovl_stage_world4_EEC(rdram, ctx);
        goto after_1;
    // 0x600033F0: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    after_1:
L_600033F4:
    // 0x600033F4: jal         0x60000BB0
    // 0x600033F8: addiu       $a0, $zero, 0x18F
    ctx->r4 = ADD32(0, 0X18F);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_2;
    // 0x600033F8: addiu       $a0, $zero, 0x18F
    ctx->r4 = ADD32(0, 0X18F);
    after_2:
    // 0x600033FC: beq         $v0, $zero, L_60003410
    if (ctx->r2 == 0) {
        // 0x60003400: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003410;
    }
    // 0x60003400: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003404: jal         0x60000EEC
    // 0x60003408: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    ovl_stage_world4_EEC(rdram, ctx);
        goto after_3;
    // 0x60003408: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_3:
    // 0x6000340C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003410:
    // 0x60003410: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60003414: jr          $ra
    // 0x60003418: nop

    return;
    // 0x60003418: nop

;}
RECOMP_FUNC void ovl_stage_world4_341C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000341C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60003420: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003424: jal         0x60000244
    // 0x60003428: addiu       $a0, $zero, 0x9F
    ctx->r4 = ADD32(0, 0X9F);
    ovl_stage_world4_244(rdram, ctx);
        goto after_0;
    // 0x60003428: addiu       $a0, $zero, 0x9F
    ctx->r4 = ADD32(0, 0X9F);
    after_0:
    // 0x6000342C: jal         0x60000E44
    // 0x60003430: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    ovl_stage_world4_E44(rdram, ctx);
        goto after_1;
    // 0x60003430: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_1:
    // 0x60003434: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003438: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x6000343C: jr          $ra
    // 0x60003440: nop

    return;
    // 0x60003440: nop

;}
RECOMP_FUNC void ovl_stage_world4_3444(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003444: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60003448: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x6000344C: jal         0x60000A60
    // 0x60003450: addiu       $a0, $zero, 0xA6B
    ctx->r4 = ADD32(0, 0XA6B);
    ovl_stage_world4_A60(rdram, ctx);
        goto after_0;
    // 0x60003450: addiu       $a0, $zero, 0xA6B
    ctx->r4 = ADD32(0, 0XA6B);
    after_0:
    // 0x60003454: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003458: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x6000345C: jr          $ra
    // 0x60003460: nop

    return;
    // 0x60003460: nop

;}
RECOMP_FUNC void ovl_stage_world4_3464(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003464: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60003468: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x6000346C: jal         0x60000BB0
    // 0x60003470: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_0;
    // 0x60003470: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    after_0:
    // 0x60003474: beq         $v0, $zero, L_600034A0
    if (ctx->r2 == 0) {
        // 0x60003478: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600034A0;
    }
    // 0x60003478: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000347C: jal         0x60000BB0
    // 0x60003480: addiu       $a0, $zero, 0x101
    ctx->r4 = ADD32(0, 0X101);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_1;
    // 0x60003480: addiu       $a0, $zero, 0x101
    ctx->r4 = ADD32(0, 0X101);
    after_1:
    // 0x60003484: beq         $v0, $zero, L_600034A0
    if (ctx->r2 == 0) {
        // 0x60003488: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600034A0;
    }
    // 0x60003488: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000348C: jal         0x60000B98
    // 0x60003490: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    ovl_stage_world4_B98(rdram, ctx);
        goto after_2;
    // 0x60003490: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    after_2:
    // 0x60003494: jal         0x60000EEC
    // 0x60003498: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    ovl_stage_world4_EEC(rdram, ctx);
        goto after_3;
    // 0x60003498: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    after_3:
    // 0x6000349C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600034A0:
    // 0x600034A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600034A4: jr          $ra
    // 0x600034A8: nop

    return;
    // 0x600034A8: nop

;}
RECOMP_FUNC void ovl_stage_world4_34AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600034AC: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x600034B0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x600034B4: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x600034B8: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x600034BC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x600034C0: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x600034C4: jal         0x60000C1C
    // 0x600034C8: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    ovl_stage_world4_C1C(rdram, ctx);
        goto after_0;
    // 0x600034C8: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x600034CC: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    // 0x600034D0: jal         0x60000E68
    // 0x600034D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world4_E68(rdram, ctx);
        goto after_1;
    // 0x600034D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x600034D8: jal         0x600009C4
    // 0x600034DC: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    ovl_stage_world4_9C4(rdram, ctx);
        goto after_2;
    // 0x600034DC: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_2:
    // 0x600034E0: jal         0x60000E74
    // 0x600034E4: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    ovl_stage_world4_E74(rdram, ctx);
        goto after_3;
    // 0x600034E4: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_3:
    // 0x600034E8: addiu       $s2, $sp, 0x3C
    ctx->r18 = ADD32(ctx->r29, 0X3C);
    // 0x600034EC: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x600034F0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600034F4: jal         0x600006C4
    // 0x600034F8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_4;
    // 0x600034F8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_4:
    // 0x600034FC: jal         0x60000244
    // 0x60003500: addiu       $a0, $zero, 0x165
    ctx->r4 = ADD32(0, 0X165);
    ovl_stage_world4_244(rdram, ctx);
        goto after_5;
    // 0x60003500: addiu       $a0, $zero, 0x165
    ctx->r4 = ADD32(0, 0X165);
    after_5:
    // 0x60003504: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x60003508: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x6000350C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60003510: addiu       $s1, $zero, 0x3C
    ctx->r17 = ADD32(0, 0X3C);
L_60003514:
    // 0x60003514: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x60003518: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x6000351C: add.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f20.fl;
    // 0x60003520: jal         0x60000E74
    // 0x60003524: swc1        $f6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f6.u32l;
    ovl_stage_world4_E74(rdram, ctx);
        goto after_6;
    // 0x60003524: swc1        $f6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f6.u32l;
    after_6:
    // 0x60003528: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x6000352C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x60003530: jal         0x600006C4
    // 0x60003534: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_7;
    // 0x60003534: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_7:
    // 0x60003538: jal         0x600009D0
    // 0x6000353C: nop

    ovl_stage_world4_9D0(rdram, ctx);
        goto after_8;
    // 0x6000353C: nop

    after_8:
    // 0x60003540: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60003544: bne         $s0, $s1, L_60003514
    if (ctx->r16 != ctx->r17) {
        // 0x60003548: nop
    
            goto L_60003514;
    }
    // 0x60003548: nop

    // 0x6000354C: jal         0x60001094
    // 0x60003550: nop

    ovl_stage_world4_1094(rdram, ctx);
        goto after_9;
    // 0x60003550: nop

    after_9:
    // 0x60003554: jal         0x600009AC
    // 0x60003558: nop

    ovl_stage_world4_9AC(rdram, ctx);
        goto after_10;
    // 0x60003558: nop

    after_10:
    // 0x6000355C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x60003560: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x60003564: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x60003568: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x6000356C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x60003570: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x60003574: jr          $ra
    // 0x60003578: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x60003578: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_stage_world4_357C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000357C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60003580: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003584: jal         0x60000C1C
    // 0x60003588: nop

    ovl_stage_world4_C1C(rdram, ctx);
        goto after_0;
    // 0x60003588: nop

    after_0:
    // 0x6000358C: jal         0x60000BB0
    // 0x60003590: addiu       $a0, $zero, 0x182
    ctx->r4 = ADD32(0, 0X182);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_1;
    // 0x60003590: addiu       $a0, $zero, 0x182
    ctx->r4 = ADD32(0, 0X182);
    after_1:
    // 0x60003594: beq         $v0, $zero, L_60003644
    if (ctx->r2 == 0) {
        // 0x60003598: nop
    
            goto L_60003644;
    }
    // 0x60003598: nop

    // 0x6000359C: jal         0x60000BB0
    // 0x600035A0: addiu       $a0, $zero, 0x183
    ctx->r4 = ADD32(0, 0X183);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_2;
    // 0x600035A0: addiu       $a0, $zero, 0x183
    ctx->r4 = ADD32(0, 0X183);
    after_2:
    // 0x600035A4: beq         $v0, $zero, L_60003644
    if (ctx->r2 == 0) {
        // 0x600035A8: nop
    
            goto L_60003644;
    }
    // 0x600035A8: nop

    // 0x600035AC: jal         0x60000BB0
    // 0x600035B0: addiu       $a0, $zero, 0x184
    ctx->r4 = ADD32(0, 0X184);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_3;
    // 0x600035B0: addiu       $a0, $zero, 0x184
    ctx->r4 = ADD32(0, 0X184);
    after_3:
    // 0x600035B4: beq         $v0, $zero, L_60003644
    if (ctx->r2 == 0) {
        // 0x600035B8: nop
    
            goto L_60003644;
    }
    // 0x600035B8: nop

    // 0x600035BC: jal         0x60000BB0
    // 0x600035C0: addiu       $a0, $zero, 0x185
    ctx->r4 = ADD32(0, 0X185);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_4;
    // 0x600035C0: addiu       $a0, $zero, 0x185
    ctx->r4 = ADD32(0, 0X185);
    after_4:
    // 0x600035C4: beq         $v0, $zero, L_60003644
    if (ctx->r2 == 0) {
        // 0x600035C8: nop
    
            goto L_60003644;
    }
    // 0x600035C8: nop

    // 0x600035CC: jal         0x60000BB0
    // 0x600035D0: addiu       $a0, $zero, 0x102
    ctx->r4 = ADD32(0, 0X102);
    ovl_stage_world4_BB0(rdram, ctx);
        goto after_5;
    // 0x600035D0: addiu       $a0, $zero, 0x102
    ctx->r4 = ADD32(0, 0X102);
    after_5:
    // 0x600035D4: bne         $v0, $zero, L_60003644
    if (ctx->r2 != 0) {
        // 0x600035D8: nop
    
            goto L_60003644;
    }
    // 0x600035D8: nop

    // 0x600035DC: jal         0x60000B98
    // 0x600035E0: addiu       $a0, $zero, 0x102
    ctx->r4 = ADD32(0, 0X102);
    ovl_stage_world4_B98(rdram, ctx);
        goto after_6;
    // 0x600035E0: addiu       $a0, $zero, 0x102
    ctx->r4 = ADD32(0, 0X102);
    after_6:
    // 0x600035E4: jal         0x60001094
    // 0x600035E8: nop

    ovl_stage_world4_1094(rdram, ctx);
        goto after_7;
    // 0x600035E8: nop

    after_7:
    // 0x600035EC: jal         0x60000DE4
    // 0x600035F0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world4_DE4(rdram, ctx);
        goto after_8;
    // 0x600035F0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_8:
    // 0x600035F4: jal         0x60000CC4
    // 0x600035F8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_stage_world4_CC4(rdram, ctx);
        goto after_9;
    // 0x600035F8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_9:
    // 0x600035FC: jal         0x60000A90
    // 0x60003600: nop

    ovl_stage_world4_A90(rdram, ctx);
        goto after_10;
    // 0x60003600: nop

    after_10:
    // 0x60003604: lui         $a1, 0x409C
    ctx->r5 = S32(0X409C << 16);
    // 0x60003608: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x6000360C: jal         0x60001028
    // 0x60003610: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world4_1028(rdram, ctx);
        goto after_11;
    // 0x60003610: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_11:
    // 0x60003614: jal         0x60000A6C
    // 0x60003618: nop

    ovl_stage_world4_A6C(rdram, ctx);
        goto after_12;
    // 0x60003618: nop

    after_12:
    // 0x6000361C: jal         0x60000A60
    // 0x60003620: addiu       $a0, $zero, 0xA73
    ctx->r4 = ADD32(0, 0XA73);
    ovl_stage_world4_A60(rdram, ctx);
        goto after_13;
    // 0x60003620: addiu       $a0, $zero, 0xA73
    ctx->r4 = ADD32(0, 0XA73);
    after_13:
    // 0x60003624: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003628: addiu       $a0, $a0, 0x34AC
    ctx->r4 = ADD32(ctx->r4, 0X34AC);
    // 0x6000362C: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60003630: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60003634: jal         0x60000994
    // 0x60003638: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world4_994(rdram, ctx);
        goto after_14;
    // 0x60003638: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_14:
    // 0x6000363C: b           L_60003650
    // 0x60003640: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60003650;
    // 0x60003640: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003644:
    // 0x60003644: jal         0x60001094
    // 0x60003648: nop

    ovl_stage_world4_1094(rdram, ctx);
        goto after_15;
    // 0x60003648: nop

    after_15:
    // 0x6000364C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003650:
    // 0x60003650: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60003654: jr          $ra
    // 0x60003658: nop

    return;
    // 0x60003658: nop

;}
RECOMP_FUNC void ovl_stage_world4_365C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000365C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x60003660: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x60003664: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x60003668: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x6000366C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x60003670: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x60003674: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x60003678: jal         0x60000244
    // 0x6000367C: addiu       $a0, $zero, 0x165
    ctx->r4 = ADD32(0, 0X165);
    ovl_stage_world4_244(rdram, ctx);
        goto after_0;
    // 0x6000367C: addiu       $a0, $zero, 0x165
    ctx->r4 = ADD32(0, 0X165);
    after_0:
    // 0x60003680: jal         0x60000E74
    // 0x60003684: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    ovl_stage_world4_E74(rdram, ctx);
        goto after_1;
    // 0x60003684: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    after_1:
    // 0x60003688: addiu       $s2, $sp, 0x34
    ctx->r18 = ADD32(ctx->r29, 0X34);
    // 0x6000368C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x60003690: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60003694: jal         0x600006C4
    // 0x60003698: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_2;
    // 0x60003698: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_2:
    // 0x6000369C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600036A0: lwc1        $f20, 0x73F4($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X73F4);
    // 0x600036A4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x600036A8: addiu       $s1, $zero, 0x3C
    ctx->r17 = ADD32(0, 0X3C);
L_600036AC:
    // 0x600036AC: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x600036B0: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x600036B4: add.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f20.fl;
    // 0x600036B8: jal         0x60000E74
    // 0x600036BC: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
    ovl_stage_world4_E74(rdram, ctx);
        goto after_3;
    // 0x600036BC: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x600036C0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600036C4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x600036C8: jal         0x600006C4
    // 0x600036CC: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    ovl_stage_world4_6C4(rdram, ctx);
        goto after_4;
    // 0x600036CC: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_4:
    // 0x600036D0: jal         0x600009D0
    // 0x600036D4: nop

    ovl_stage_world4_9D0(rdram, ctx);
        goto after_5;
    // 0x600036D4: nop

    after_5:
    // 0x600036D8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x600036DC: bne         $s0, $s1, L_600036AC
    if (ctx->r16 != ctx->r17) {
        // 0x600036E0: nop
    
            goto L_600036AC;
    }
    // 0x600036E0: nop

    // 0x600036E4: jal         0x60000244
    // 0x600036E8: addiu       $a0, $zero, 0xD4
    ctx->r4 = ADD32(0, 0XD4);
    ovl_stage_world4_244(rdram, ctx);
        goto after_6;
    // 0x600036E8: addiu       $a0, $zero, 0xD4
    ctx->r4 = ADD32(0, 0XD4);
    after_6:
    // 0x600036EC: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x600036F0: jal         0x60000E68
    // 0x600036F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world4_E68(rdram, ctx);
        goto after_7;
    // 0x600036F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x600036F8: jal         0x60000E44
    // 0x600036FC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world4_E44(rdram, ctx);
        goto after_8;
    // 0x600036FC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_8:
    // 0x60003700: jal         0x60000B98
    // 0x60003704: addiu       $a0, $zero, 0x103
    ctx->r4 = ADD32(0, 0X103);
    ovl_stage_world4_B98(rdram, ctx);
        goto after_9;
    // 0x60003704: addiu       $a0, $zero, 0x103
    ctx->r4 = ADD32(0, 0X103);
    after_9:
    // 0x60003708: jal         0x600009AC
    // 0x6000370C: nop

    ovl_stage_world4_9AC(rdram, ctx);
        goto after_10;
    // 0x6000370C: nop

    after_10:
    // 0x60003710: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x60003714: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x60003718: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x6000371C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x60003720: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x60003724: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x60003728: jr          $ra
    // 0x6000372C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x6000372C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
