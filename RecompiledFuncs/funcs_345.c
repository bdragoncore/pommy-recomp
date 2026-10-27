#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_stage_world6_10E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600010E0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x600010E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600010E8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x600010EC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x600010F0: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x600010F4: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x600010F8: jal         0x60000E74
    // 0x600010FC: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    ovl_stage_world6_E74(rdram, ctx);
        goto after_0;
    // 0x600010FC: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    after_0:
    // 0x60001100: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60001104: addiu       $a1, $zero, 0x23
    ctx->r5 = ADD32(0, 0X23);
    // 0x60001108: jal         0x600006C4
    // 0x6000110C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world6_6C4(rdram, ctx);
        goto after_1;
    // 0x6000110C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x60001110: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60001114: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x60001118: jr          $ra
    // 0x6000111C: nop

    return;
    // 0x6000111C: nop

;}
RECOMP_FUNC void ovl_stage_world6_1120(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001120: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x60001124: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x60001128: jal         0x60000C1C
    // 0x6000112C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    ovl_stage_world6_C1C(rdram, ctx);
        goto after_0;
    // 0x6000112C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x60001130: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x60001134: jal         0x600009C4
    // 0x60001138: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    ovl_stage_world6_9C4(rdram, ctx);
        goto after_1;
    // 0x60001138: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_1:
    // 0x6000113C: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x60001140: nop

    // 0x60001144: andi        $t7, $t6, 0x800
    ctx->r15 = ctx->r14 & 0X800;
    // 0x60001148: beq         $t7, $zero, L_60001170
    if (ctx->r15 == 0) {
        // 0x6000114C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_60001170;
    }
    // 0x6000114C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_60001150:
    // 0x60001150: jal         0x600009D0
    // 0x60001154: nop

    ovl_stage_world6_9D0(rdram, ctx);
        goto after_2;
    // 0x60001154: nop

    after_2:
    // 0x60001158: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x6000115C: nop

    // 0x60001160: andi        $t9, $t8, 0x800
    ctx->r25 = ctx->r24 & 0X800;
    // 0x60001164: bne         $t9, $zero, L_60001150
    if (ctx->r25 != 0) {
        // 0x60001168: nop
    
            goto L_60001150;
    }
    // 0x60001168: nop

    // 0x6000116C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_60001170:
    // 0x60001170: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x60001174: jr          $ra
    // 0x60001178: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x60001178: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_stage_world6_117C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000117C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x60001180: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x60001184: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x60001188: jal         0x60000C1C
    // 0x6000118C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    ovl_stage_world6_C1C(rdram, ctx);
        goto after_0;
    // 0x6000118C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x60001190: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x60001194: jal         0x600009C4
    // 0x60001198: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    ovl_stage_world6_9C4(rdram, ctx);
        goto after_1;
    // 0x60001198: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_1:
    // 0x6000119C: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x600011A0: lui         $s1, 0x40
    ctx->r17 = S32(0X40 << 16);
    // 0x600011A4: ori         $s1, $s1, 0x800
    ctx->r17 = ctx->r17 | 0X800;
    // 0x600011A8: and         $t7, $t6, $s1
    ctx->r15 = ctx->r14 & ctx->r17;
    // 0x600011AC: beq         $t7, $zero, L_600011D4
    if (ctx->r15 == 0) {
        // 0x600011B0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_600011D4;
    }
    // 0x600011B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_600011B4:
    // 0x600011B4: jal         0x600009D0
    // 0x600011B8: nop

    ovl_stage_world6_9D0(rdram, ctx);
        goto after_2;
    // 0x600011B8: nop

    after_2:
    // 0x600011BC: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x600011C0: nop

    // 0x600011C4: and         $t9, $t8, $s1
    ctx->r25 = ctx->r24 & ctx->r17;
    // 0x600011C8: bne         $t9, $zero, L_600011B4
    if (ctx->r25 != 0) {
        // 0x600011CC: nop
    
            goto L_600011B4;
    }
    // 0x600011CC: nop

    // 0x600011D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_600011D4:
    // 0x600011D4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x600011D8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x600011DC: jr          $ra
    // 0x600011E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x600011E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_stage_world6_11E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600011E4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x600011E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x600011EC: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600011F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600011F4: lw          $a0, 0x5C08($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5C08);
    // 0x600011F8: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x600011FC: jal         0x600006C4
    // 0x60001200: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    ovl_stage_world6_6C4(rdram, ctx);
        goto after_0;
    // 0x60001200: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    after_0:
    // 0x60001204: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60001208: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x6000120C: jr          $ra
    // 0x60001210: nop

    return;
    // 0x60001210: nop

;}
RECOMP_FUNC void ovl_stage_world6_1214(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001214: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001218: lwc1        $f7, 0x6440($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X6440);
    // 0x6000121C: lwc1        $f6, 0x6444($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6444);
    // 0x60001220: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x60001224: cvt.d.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.d = CVT_D_S(ctx->f12.fl);
    // 0x60001228: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x6000122C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x60001230: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x60001234: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x60001238: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x6000123C: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x60001240: swc1        $f14, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f14.u32l;
    // 0x60001244: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x60001248: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x6000124C: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x60001250: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x60001254: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x60001258: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
    // 0x6000125C: jal         0x600003D0
    // 0x60001260: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    ovl_stage_world6_3D0(rdram, ctx);
        goto after_0;
    // 0x60001260: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x60001264: lwc1        $f12, 0x3C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x60001268: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x6000126C: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x60001270: mul.s       $f0, $f4, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x60001274: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
    // 0x60001278: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
    // 0x6000127C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x60001280: c.le.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl <= ctx->f0.fl;
    // 0x60001284: nop

    // 0x60001288: bc1f        L_600012CC
    if (!c1cs) {
        // 0x6000128C: nop
    
            goto L_600012CC;
    }
    // 0x6000128C: nop

    // 0x60001290: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x60001294: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x60001298: nop

    // 0x6000129C: add.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x600012A0: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x600012A4: nop

    // 0x600012A8: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x600012AC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x600012B0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x600012B4: nop

    // 0x600012B8: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x600012BC: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x600012C0: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x600012C4: b           L_60001304
    // 0x600012C8: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
        goto L_60001304;
    // 0x600012C8: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
L_600012CC:
    // 0x600012CC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x600012D0: nop

    // 0x600012D4: sub.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x600012D8: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x600012DC: nop

    // 0x600012E0: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x600012E4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x600012E8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x600012EC: nop

    // 0x600012F0: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x600012F4: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
    // 0x600012F8: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x600012FC: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x60001300: nop

L_60001304:
    // 0x60001304: lwc1        $f18, 0x34($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X34);
    // 0x60001308: nop

    // 0x6000130C: mul.s       $f0, $f18, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = MUL_S(ctx->f18.fl, ctx->f12.fl);
    // 0x60001310: c.le.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl <= ctx->f0.fl;
    // 0x60001314: nop

    // 0x60001318: bc1f        L_60001350
    if (!c1cs) {
        // 0x6000131C: nop
    
            goto L_60001350;
    }
    // 0x6000131C: nop

    // 0x60001320: add.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x60001324: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x60001328: nop

    // 0x6000132C: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x60001330: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x60001334: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x60001338: nop

    // 0x6000133C: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x60001340: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x60001344: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x60001348: b           L_60001380
    // 0x6000134C: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
        goto L_60001380;
    // 0x6000134C: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
L_60001350:
    // 0x60001350: sub.s       $f8, $f0, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x60001354: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x60001358: nop

    // 0x6000135C: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x60001360: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x60001364: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x60001368: nop

    // 0x6000136C: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x60001370: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x60001374: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x60001378: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
    // 0x6000137C: nop

L_60001380:
    // 0x60001380: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60001384: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x60001388: jr          $ra
    // 0x6000138C: nop

    return;
    // 0x6000138C: nop

;}
RECOMP_FUNC void ovl_stage_world6_1390(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001390: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x60001394: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x60001398: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x6000139C: lui         $s0, 0x6000
    ctx->r16 = S32(0X6000 << 16);
    // 0x600013A0: lui         $s1, 0x6000
    ctx->r17 = S32(0X6000 << 16);
    // 0x600013A4: addiu       $s1, $s1, 0x66C8
    ctx->r17 = ADD32(ctx->r17, 0X66C8);
    // 0x600013A8: addiu       $s0, $s0, 0x66B0
    ctx->r16 = ADD32(ctx->r16, 0X66B0);
    // 0x600013AC: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x600013B0: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x600013B4: addiu       $v1, $v1, 0x66F0
    ctx->r3 = ADD32(ctx->r3, 0X66F0);
    // 0x600013B8: addiu       $v0, $v0, 0x66E0
    ctx->r2 = ADD32(ctx->r2, 0X66E0);
    // 0x600013BC: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x600013C0: lwc1        $f6, 0x4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4);
    // 0x600013C4: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x600013C8: lwc1        $f10, 0x0($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X0);
    // 0x600013CC: lwc1        $f16, 0x4($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X4);
    // 0x600013D0: lwc1        $f18, 0x8($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X8);
    // 0x600013D4: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600013D8: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    // 0x600013DC: swc1        $f6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f6.u32l;
    // 0x600013E0: swc1        $f8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f8.u32l;
    // 0x600013E4: swc1        $f10, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f10.u32l;
    // 0x600013E8: swc1        $f16, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f16.u32l;
    // 0x600013EC: swc1        $f18, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f18.u32l;
    // 0x600013F0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x600013F4: lw          $a0, 0x5C08($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5C08);
    // 0x600013F8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x600013FC: jal         0x600006C4
    // 0x60001400: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_stage_world6_6C4(rdram, ctx);
        goto after_0;
    // 0x60001400: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x60001404: jal         0x60000DE4
    // 0x60001408: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world6_DE4(rdram, ctx);
        goto after_1;
    // 0x60001408: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x6000140C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60001410: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x60001414: jal         0x600006C4
    // 0x60001418: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world6_6C4(rdram, ctx);
        goto after_2;
    // 0x60001418: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_2:
    // 0x6000141C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x60001420: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x60001424: jal         0x600003DC
    // 0x60001428: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    ovl_stage_world6_3DC(rdram, ctx);
        goto after_3;
    // 0x60001428: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    after_3:
    // 0x6000142C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001430: lwc1        $f13, 0x6448($at)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r1, 0X6448);
    // 0x60001434: lwc1        $f12, 0x644C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X644C);
    // 0x60001438: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000143C: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x60001440: lwc1        $f9, 0x6450($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X6450);
    // 0x60001444: lwc1        $f8, 0x6454($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X6454);
    // 0x60001448: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x6000144C: mul.d       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f0.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x60001450: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x60001454: c.le.d      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.d <= ctx->f0.d;
    // 0x60001458: nop

    // 0x6000145C: bc1f        L_60001478
    if (!c1cs) {
        // 0x60001460: nop
    
            goto L_60001478;
    }
    // 0x60001460: nop

    // 0x60001464: sub.d       $f10, $f0, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f10.d = ctx->f0.d - ctx->f12.d;
    // 0x60001468: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000146C: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x60001470: b           L_600014AC
    // 0x60001474: swc1        $f16, 0x6698($at)
    MEM_W(0X6698, ctx->r1) = ctx->f16.u32l;
        goto L_600014AC;
    // 0x60001474: swc1        $f16, 0x6698($at)
    MEM_W(0X6698, ctx->r1) = ctx->f16.u32l;
L_60001478:
    // 0x60001478: mtc1        $zero, $f19
    ctx->f_odd[(19 - 1) * 2] = 0;
    // 0x6000147C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x60001480: nop

    // 0x60001484: c.lt.d      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.d < ctx->f18.d;
    // 0x60001488: nop

    // 0x6000148C: bc1f        L_6000149C
    if (!c1cs) {
        // 0x60001490: nop
    
            goto L_6000149C;
    }
    // 0x60001490: nop

    // 0x60001494: b           L_600014A0
    // 0x60001498: add.d       $f2, $f0, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f2.d = ctx->f0.d + ctx->f12.d;
        goto L_600014A0;
    // 0x60001498: add.d       $f2, $f0, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f2.d = ctx->f0.d + ctx->f12.d;
L_6000149C:
    // 0x6000149C: mov.d       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.d = ctx->f0.d;
L_600014A0:
    // 0x600014A0: cvt.s.d     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f4.fl = CVT_S_D(ctx->f2.d);
    // 0x600014A4: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600014A8: swc1        $f4, 0x6698($at)
    MEM_W(0X6698, ctx->r1) = ctx->f4.u32l;
L_600014AC:
    // 0x600014AC: lwc1        $f0, 0x0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X0);
    // 0x600014B0: lwc1        $f2, 0x0($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X0);
    // 0x600014B4: nop

    // 0x600014B8: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x600014BC: nop

    // 0x600014C0: bc1f        L_600014DC
    if (!c1cs) {
        // 0x600014C4: nop
    
            goto L_600014DC;
    }
    // 0x600014C4: nop

    // 0x600014C8: sub.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x600014CC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600014D0: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x600014D4: b           L_600014E8
    // 0x600014D8: swc1        $f8, 0x669C($at)
    MEM_W(0X669C, ctx->r1) = ctx->f8.u32l;
        goto L_600014E8;
    // 0x600014D8: swc1        $f8, 0x669C($at)
    MEM_W(0X669C, ctx->r1) = ctx->f8.u32l;
L_600014DC:
    // 0x600014DC: sub.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x600014E0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600014E4: swc1        $f10, 0x669C($at)
    MEM_W(0X669C, ctx->r1) = ctx->f10.u32l;
L_600014E8:
    // 0x600014E8: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x600014EC: lwc1        $f2, 0x8($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X8);
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

    // 0x60001504: sub.s       $f16, $f0, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x60001508: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000150C: neg.s       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = -ctx->f16.fl;
    // 0x60001510: b           L_60001524
    // 0x60001514: swc1        $f18, 0x66A0($at)
    MEM_W(0X66A0, ctx->r1) = ctx->f18.u32l;
        goto L_60001524;
    // 0x60001514: swc1        $f18, 0x66A0($at)
    MEM_W(0X66A0, ctx->r1) = ctx->f18.u32l;
L_60001518:
    // 0x60001518: sub.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x6000151C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001520: swc1        $f4, 0x66A0($at)
    MEM_W(0X66A0, ctx->r1) = ctx->f4.u32l;
L_60001524:
    // 0x60001524: jal         0x60000418
    // 0x60001528: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    ovl_stage_world6_418(rdram, ctx);
        goto after_4;
    // 0x60001528: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_4:
    // 0x6000152C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x60001530: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001534: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x60001538: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x6000153C: swc1        $f0, 0x6694($at)
    MEM_W(0X6694, ctx->r1) = ctx->f0.u32l;
    // 0x60001540: jr          $ra
    // 0x60001544: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x60001544: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_stage_world6_1548(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001548: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000154C: jr          $ra
    // 0x60001550: sh          $a0, 0x6712($at)
    MEM_H(0X6712, ctx->r1) = ctx->r4;
    return;
    // 0x60001550: sh          $a0, 0x6712($at)
    MEM_H(0X6712, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void ovl_stage_world6_1554(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001554: jr          $ra
    // 0x60001558: nop

    return;
    // 0x60001558: nop

;}
RECOMP_FUNC void ovl_stage_world6_155C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000155C: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60001560: addiu       $v0, $v0, 0x6710
    ctx->r2 = ADD32(ctx->r2, 0X6710);
    // 0x60001564: sb          $a0, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r4;
    // 0x60001568: jr          $ra
    // 0x6000156C: sb          $a1, 0x7($v0)
    MEM_B(0X7, ctx->r2) = ctx->r5;
    return;
    // 0x6000156C: sb          $a1, 0x7($v0)
    MEM_B(0X7, ctx->r2) = ctx->r5;
;}
RECOMP_FUNC void ovl_stage_world6_1570(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001570: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60001574: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60001578: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x6000157C: jal         0x6000155C
    // 0x60001580: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world6_155C(rdram, ctx);
        goto after_0;
    // 0x60001580: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x60001584: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60001588: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x6000158C: jr          $ra
    // 0x60001590: nop

    return;
    // 0x60001590: nop

;}
RECOMP_FUNC void ovl_stage_world6_1594(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001594: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60001598: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x6000159C: jal         0x60001570
    // 0x600015A0: nop

    ovl_stage_world6_1570(rdram, ctx);
        goto after_0;
    // 0x600015A0: nop

    after_0:
    // 0x600015A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600015A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600015AC: jr          $ra
    // 0x600015B0: nop

    return;
    // 0x600015B0: nop

;}
RECOMP_FUNC void ovl_stage_world6_15B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600015B4: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600015B8: lwc1        $f12, 0x66A4($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X66A4);
    // 0x600015BC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x600015C0: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x600015C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600015C8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x600015CC: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    // 0x600015D0: jal         0x60001214
    // 0x600015D4: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    ovl_stage_world6_1214(rdram, ctx);
        goto after_0;
    // 0x600015D4: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x600015D8: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x600015DC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x600015E0: jal         0x6000155C
    // 0x600015E4: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    ovl_stage_world6_155C(rdram, ctx);
        goto after_1;
    // 0x600015E4: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    after_1:
    // 0x600015E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600015EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x600015F0: jr          $ra
    // 0x600015F4: nop

    return;
    // 0x600015F4: nop

;}
RECOMP_FUNC void ovl_stage_world6_15F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600015F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600015FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60001600: jal         0x6000034C
    // 0x60001604: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    ovl_stage_world6_34C(rdram, ctx);
        goto after_0;
    // 0x60001604: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_0:
    // 0x60001608: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x6000160C: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x60001610: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x60001614: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x60001618: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000161C: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x60001620: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001624: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60001628: jr          $ra
    // 0x6000162C: swc1        $f10, 0x66A4($at)
    MEM_W(0X66A4, ctx->r1) = ctx->f10.u32l;
    return;
    // 0x6000162C: swc1        $f10, 0x66A4($at)
    MEM_W(0X66A4, ctx->r1) = ctx->f10.u32l;
;}
RECOMP_FUNC void ovl_stage_world6_1630(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001630: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001634: lwc1        $f4, 0x66A0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X66A0);
    // 0x60001638: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000163C: lwc1        $f6, 0x669C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X669C);
    // 0x60001640: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001644: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x60001648: nop

    // 0x6000164C: bc1f        L_6000169C
    if (!c1cs) {
        // 0x60001650: nop
    
            goto L_6000169C;
    }
    // 0x60001650: nop

    // 0x60001654: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001658: lwc1        $f8, 0x66B0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X66B0);
    // 0x6000165C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001660: lwc1        $f10, 0x66C8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X66C8);
    // 0x60001664: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x60001668: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x6000166C: nop

    // 0x60001670: bc1f        L_6000168C
    if (!c1cs) {
        // 0x60001674: nop
    
            goto L_6000168C;
    }
    // 0x60001674: nop

    // 0x60001678: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x6000167C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x60001680: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001684: jr          $ra
    // 0x60001688: swc1        $f16, 0x66A4($at)
    MEM_W(0X66A4, ctx->r1) = ctx->f16.u32l;
    return;
    // 0x60001688: swc1        $f16, 0x66A4($at)
    MEM_W(0X66A4, ctx->r1) = ctx->f16.u32l;
L_6000168C:
    // 0x6000168C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x60001690: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001694: jr          $ra
    // 0x60001698: swc1        $f18, 0x66A4($at)
    MEM_W(0X66A4, ctx->r1) = ctx->f18.u32l;
    return;
    // 0x60001698: swc1        $f18, 0x66A4($at)
    MEM_W(0X66A4, ctx->r1) = ctx->f18.u32l;
L_6000169C:
    // 0x6000169C: lwc1        $f4, 0x66B8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X66B8);
    // 0x600016A0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600016A4: lwc1        $f6, 0x66D0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X66D0);
    // 0x600016A8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x600016AC: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x600016B0: nop

    // 0x600016B4: bc1f        L_600016CC
    if (!c1cs) {
        // 0x600016B8: nop
    
            goto L_600016CC;
    }
    // 0x600016B8: nop

    // 0x600016BC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x600016C0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600016C4: jr          $ra
    // 0x600016C8: swc1        $f8, 0x66A4($at)
    MEM_W(0X66A4, ctx->r1) = ctx->f8.u32l;
    return;
    // 0x600016C8: swc1        $f8, 0x66A4($at)
    MEM_W(0X66A4, ctx->r1) = ctx->f8.u32l;
L_600016CC:
    // 0x600016CC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x600016D0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600016D4: swc1        $f10, 0x66A4($at)
    MEM_W(0X66A4, ctx->r1) = ctx->f10.u32l;
    // 0x600016D8: jr          $ra
    // 0x600016DC: nop

    return;
    // 0x600016DC: nop

;}
RECOMP_FUNC void ovl_stage_world6_16E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600016E0: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x600016E4: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x600016E8: addiu       $v1, $v1, 0x66C8
    ctx->r3 = ADD32(ctx->r3, 0X66C8);
    // 0x600016EC: addiu       $v0, $v0, 0x66B0
    ctx->r2 = ADD32(ctx->r2, 0X66B0);
    // 0x600016F0: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x600016F4: lwc1        $f16, 0x0($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X0);
    // 0x600016F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600016FC: c.lt.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl < ctx->f16.fl;
    // 0x60001700: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60001704: bc1f        L_60001718
    if (!c1cs) {
        // 0x60001708: lui         $at, 0x4248
        ctx->r1 = S32(0X4248 << 16);
            goto L_60001718;
    }
    // 0x60001708: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x6000170C: sub.s       $f0, $f14, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f14.fl - ctx->f16.fl;
    // 0x60001710: b           L_6000171C
    // 0x60001714: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_6000171C;
    // 0x60001714: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_60001718:
    // 0x60001718: sub.s       $f0, $f14, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f14.fl - ctx->f16.fl;
L_6000171C:
    // 0x6000171C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x60001720: nop

    // 0x60001724: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x60001728: nop

    // 0x6000172C: bc1f        L_60001770
    if (!c1cs) {
        // 0x60001730: nop
    
            goto L_60001770;
    }
    // 0x60001730: nop

    // 0x60001734: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x60001738: lwc1        $f6, 0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8);
    // 0x6000173C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001740: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x60001744: nop

    // 0x60001748: bc1f        L_60001764
    if (!c1cs) {
        // 0x6000174C: nop
    
            goto L_60001764;
    }
    // 0x6000174C: nop

    // 0x60001750: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x60001754: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x60001758: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000175C: b           L_600017E8
    // 0x60001760: swc1        $f8, 0x66A4($at)
    MEM_W(0X66A4, ctx->r1) = ctx->f8.u32l;
        goto L_600017E8;
    // 0x60001760: swc1        $f8, 0x66A4($at)
    MEM_W(0X66A4, ctx->r1) = ctx->f8.u32l;
L_60001764:
    // 0x60001764: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x60001768: b           L_600017E8
    // 0x6000176C: swc1        $f10, 0x66A4($at)
    MEM_W(0X66A4, ctx->r1) = ctx->f10.u32l;
        goto L_600017E8;
    // 0x6000176C: swc1        $f10, 0x66A4($at)
    MEM_W(0X66A4, ctx->r1) = ctx->f10.u32l;
L_60001770:
    // 0x60001770: lwc1        $f2, 0x8($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X8);
    // 0x60001774: lwc1        $f12, 0x8($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X8);
    // 0x60001778: nop

    // 0x6000177C: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x60001780: nop

    // 0x60001784: bc1f        L_60001798
    if (!c1cs) {
        // 0x60001788: nop
    
            goto L_60001798;
    }
    // 0x60001788: nop

    // 0x6000178C: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x60001790: b           L_6000179C
    // 0x60001794: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_6000179C;
    // 0x60001794: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_60001798:
    // 0x60001798: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
L_6000179C:
    // 0x6000179C: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x600017A0: nop

    // 0x600017A4: bc1f        L_600017E0
    if (!c1cs) {
        // 0x600017A8: nop
    
            goto L_600017E0;
    }
    // 0x600017A8: nop

    // 0x600017AC: c.lt.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl < ctx->f16.fl;
    // 0x600017B0: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x600017B4: bc1f        L_600017D0
    if (!c1cs) {
        // 0x600017B8: nop
    
            goto L_600017D0;
    }
    // 0x600017B8: nop

    // 0x600017BC: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x600017C0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x600017C4: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600017C8: b           L_600017E8
    // 0x600017CC: swc1        $f4, 0x66A4($at)
    MEM_W(0X66A4, ctx->r1) = ctx->f4.u32l;
        goto L_600017E8;
    // 0x600017CC: swc1        $f4, 0x66A4($at)
    MEM_W(0X66A4, ctx->r1) = ctx->f4.u32l;
L_600017D0:
    // 0x600017D0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x600017D4: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600017D8: b           L_600017E8
    // 0x600017DC: swc1        $f6, 0x66A4($at)
    MEM_W(0X66A4, ctx->r1) = ctx->f6.u32l;
        goto L_600017E8;
    // 0x600017DC: swc1        $f6, 0x66A4($at)
    MEM_W(0X66A4, ctx->r1) = ctx->f6.u32l;
L_600017E0:
    // 0x600017E0: jal         0x60001630
    // 0x600017E4: nop

    ovl_stage_world6_1630(rdram, ctx);
        goto after_0;
    // 0x600017E4: nop

    after_0:
L_600017E8:
    // 0x600017E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600017EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600017F0: jr          $ra
    // 0x600017F4: nop

    return;
    // 0x600017F4: nop

;}
RECOMP_FUNC void ovl_stage_world6_17F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600017F8: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x600017FC: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x60001800: addiu       $v1, $v1, 0x66E0
    ctx->r3 = ADD32(ctx->r3, 0X66E0);
    // 0x60001804: addiu       $v0, $v0, 0x66B0
    ctx->r2 = ADD32(ctx->r2, 0X66B0);
    // 0x60001808: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x6000180C: lwc1        $f2, 0x0($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X0);
    // 0x60001810: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x60001814: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x60001818: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x6000181C: bc1f        L_60001830
    if (!c1cs) {
        // 0x60001820: nop
    
            goto L_60001830;
    }
    // 0x60001820: nop

    // 0x60001824: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x60001828: b           L_60001834
    // 0x6000182C: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
        goto L_60001834;
    // 0x6000182C: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
L_60001830:
    // 0x60001830: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
L_60001834:
    // 0x60001834: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x60001838: nop

    // 0x6000183C: bc1f        L_600018C4
    if (!c1cs) {
        // 0x60001840: nop
    
            goto L_600018C4;
    }
    // 0x60001840: nop

    // 0x60001844: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x60001848: lwc1        $f2, 0x4($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X4);
    // 0x6000184C: nop

    // 0x60001850: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x60001854: nop

    // 0x60001858: bc1f        L_6000186C
    if (!c1cs) {
        // 0x6000185C: nop
    
            goto L_6000186C;
    }
    // 0x6000185C: nop

    // 0x60001860: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x60001864: b           L_60001870
    // 0x60001868: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
        goto L_60001870;
    // 0x60001868: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
L_6000186C:
    // 0x6000186C: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
L_60001870:
    // 0x60001870: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x60001874: nop

    // 0x60001878: bc1f        L_600018C4
    if (!c1cs) {
        // 0x6000187C: nop
    
            goto L_600018C4;
    }
    // 0x6000187C: nop

    // 0x60001880: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x60001884: lwc1        $f2, 0x8($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X8);
    // 0x60001888: nop

    // 0x6000188C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x60001890: nop

    // 0x60001894: bc1f        L_600018A8
    if (!c1cs) {
        // 0x60001898: nop
    
            goto L_600018A8;
    }
    // 0x60001898: nop

    // 0x6000189C: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x600018A0: b           L_600018AC
    // 0x600018A4: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
        goto L_600018AC;
    // 0x600018A4: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
L_600018A8:
    // 0x600018A8: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
L_600018AC:
    // 0x600018AC: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x600018B0: nop

    // 0x600018B4: bc1f        L_600018C8
    if (!c1cs) {
        // 0x600018B8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_600018C8;
    }
    // 0x600018B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x600018BC: jr          $ra
    // 0x600018C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x600018C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_600018C4:
    // 0x600018C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_600018C8:
    // 0x600018C8: jr          $ra
    // 0x600018CC: nop

    return;
    // 0x600018CC: nop

;}
RECOMP_FUNC void ovl_stage_world6_18D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600018D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600018D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600018D8: jal         0x6000034C
    // 0x600018DC: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    ovl_stage_world6_34C(rdram, ctx);
        goto after_0;
    // 0x600018DC: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_0:
    // 0x600018E0: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x600018E4: addiu       $v1, $v1, 0x6688
    ctx->r3 = ADD32(ctx->r3, 0X6688);
    // 0x600018E8: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x600018EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x600018F0: beq         $a1, $t6, L_60001900
    if (ctx->r5 == ctx->r14) {
        // 0x600018F4: slti        $at, $v0, 0x51
        ctx->r1 = SIGNED(ctx->r2) < 0X51 ? 1 : 0;
            goto L_60001900;
    }
    // 0x600018F4: slti        $at, $v0, 0x51
    ctx->r1 = SIGNED(ctx->r2) < 0X51 ? 1 : 0;
    // 0x600018F8: beq         $at, $zero, L_60001988
    if (ctx->r1 == 0) {
        // 0x600018FC: addiu       $a0, $zero, 0x14
        ctx->r4 = ADD32(0, 0X14);
            goto L_60001988;
    }
    // 0x600018FC: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
L_60001900:
    // 0x60001900: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x60001904: jal         0x6000034C
    // 0x60001908: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_stage_world6_34C(rdram, ctx);
        goto after_1;
    // 0x60001908: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_1:
    // 0x6000190C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001910: sw          $v0, 0x6690($at)
    MEM_W(0X6690, ctx->r1) = ctx->r2;
    // 0x60001914: jal         0x6000034C
    // 0x60001918: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    ovl_stage_world6_34C(rdram, ctx);
        goto after_2;
    // 0x60001918: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_2:
    // 0x6000191C: addiu       $t7, $v0, 0x1E
    ctx->r15 = ADD32(ctx->r2, 0X1E);
    // 0x60001920: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001924: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x60001928: lw          $v1, 0x6690($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6690);
    // 0x6000192C: sw          $t7, 0x668C($at)
    MEM_W(0X668C, ctx->r1) = ctx->r15;
    // 0x60001930: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001934: beq         $v1, $zero, L_60001958
    if (ctx->r3 == 0) {
        // 0x60001938: sw          $zero, 0x66AC($at)
        MEM_W(0X66AC, ctx->r1) = 0;
            goto L_60001958;
    }
    // 0x60001938: sw          $zero, 0x66AC($at)
    MEM_W(0X66AC, ctx->r1) = 0;
    // 0x6000193C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x60001940: beq         $v1, $at, L_60001968
    if (ctx->r3 == ctx->r1) {
        // 0x60001944: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_60001968;
    }
    // 0x60001944: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x60001948: beq         $v1, $at, L_60001978
    if (ctx->r3 == ctx->r1) {
        // 0x6000194C: nop
    
            goto L_60001978;
    }
    // 0x6000194C: nop

    // 0x60001950: b           L_600019A0
    // 0x60001954: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600019A0;
    // 0x60001954: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001958:
    // 0x60001958: jal         0x600015F8
    // 0x6000195C: nop

    ovl_stage_world6_15F8(rdram, ctx);
        goto after_3;
    // 0x6000195C: nop

    after_3:
    // 0x60001960: b           L_600019A0
    // 0x60001964: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600019A0;
    // 0x60001964: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001968:
    // 0x60001968: jal         0x60001630
    // 0x6000196C: nop

    ovl_stage_world6_1630(rdram, ctx);
        goto after_4;
    // 0x6000196C: nop

    after_4:
    // 0x60001970: b           L_600019A0
    // 0x60001974: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600019A0;
    // 0x60001974: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001978:
    // 0x60001978: jal         0x600016E0
    // 0x6000197C: nop

    ovl_stage_world6_16E0(rdram, ctx);
        goto after_5;
    // 0x6000197C: nop

    after_5:
    // 0x60001980: b           L_600019A0
    // 0x60001984: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600019A0;
    // 0x60001984: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001988:
    // 0x60001988: jal         0x6000034C
    // 0x6000198C: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
    ovl_stage_world6_34C(rdram, ctx);
        goto after_6;
    // 0x6000198C: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
    after_6:
    // 0x60001990: addiu       $t8, $v0, 0x4
    ctx->r24 = ADD32(ctx->r2, 0X4);
    // 0x60001994: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001998: sw          $t8, 0x668C($at)
    MEM_W(0X668C, ctx->r1) = ctx->r24;
    // 0x6000199C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600019A0:
    // 0x600019A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600019A4: jr          $ra
    // 0x600019A8: nop

    return;
    // 0x600019A8: nop

;}
RECOMP_FUNC void ovl_stage_world6_19AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600019AC: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x600019B0: addiu       $v0, $v0, 0x66B0
    ctx->r2 = ADD32(ctx->r2, 0X66B0);
    // 0x600019B4: lwc1        $f2, 0x0($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X0);
    // 0x600019B8: lwc1        $f0, 0x10($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X10);
    // 0x600019BC: c.le.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl <= ctx->f12.fl;
    // 0x600019C0: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x600019C4: bc1f        L_60001A00
    if (!c1cs) {
        // 0x600019C8: sw          $a3, 0xC($sp)
        MEM_W(0XC, ctx->r29) = ctx->r7;
            goto L_60001A00;
    }
    // 0x600019C8: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x600019CC: lui         $at, 0x433E
    ctx->r1 = S32(0X433E << 16);
    // 0x600019D0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x600019D4: lui         $at, 0x43AF
    ctx->r1 = S32(0X43AF << 16);
    // 0x600019D8: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x600019DC: nop

    // 0x600019E0: bc1f        L_60001A00
    if (!c1cs) {
        // 0x600019E4: nop
    
            goto L_60001A00;
    }
    // 0x600019E4: nop

    // 0x600019E8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x600019EC: nop

    // 0x600019F0: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x600019F4: nop

    // 0x600019F8: bc1t        L_60001AD0
    if (c1cs) {
        // 0x600019FC: nop
    
            goto L_60001AD0;
    }
    // 0x600019FC: nop

L_60001A00:
    // 0x60001A00: lwc1        $f8, 0x8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X8);
    // 0x60001A04: lwc1        $f0, 0x10($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X10);
    // 0x60001A08: c.le.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl <= ctx->f2.fl;
    // 0x60001A0C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x60001A10: bc1f        L_60001A48
    if (!c1cs) {
        // 0x60001A14: nop
    
            goto L_60001A48;
    }
    // 0x60001A14: nop

    // 0x60001A18: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x60001A1C: lui         $at, 0x432A
    ctx->r1 = S32(0X432A << 16);
    // 0x60001A20: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x60001A24: nop

    // 0x60001A28: bc1f        L_60001A48
    if (!c1cs) {
        // 0x60001A2C: nop
    
            goto L_60001A48;
    }
    // 0x60001A2C: nop

    // 0x60001A30: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x60001A34: nop

    // 0x60001A38: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x60001A3C: nop

    // 0x60001A40: bc1t        L_60001AD0
    if (c1cs) {
        // 0x60001A44: nop
    
            goto L_60001AD0;
    }
    // 0x60001A44: nop

L_60001A48:
    // 0x60001A48: lwc1        $f2, 0x8($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X8);
    // 0x60001A4C: lwc1        $f6, 0xC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC);
    // 0x60001A50: c.le.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl <= ctx->f14.fl;
    // 0x60001A54: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x60001A58: bc1f        L_60001A90
    if (!c1cs) {
        // 0x60001A5C: nop
    
            goto L_60001A90;
    }
    // 0x60001A5C: nop

    // 0x60001A60: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x60001A64: lui         $at, 0x4382
    ctx->r1 = S32(0X4382 << 16);
    // 0x60001A68: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x60001A6C: nop

    // 0x60001A70: bc1f        L_60001A90
    if (!c1cs) {
        // 0x60001A74: nop
    
            goto L_60001A90;
    }
    // 0x60001A74: nop

    // 0x60001A78: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60001A7C: nop

    // 0x60001A80: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x60001A84: nop

    // 0x60001A88: bc1t        L_60001AD0
    if (c1cs) {
        // 0x60001A8C: nop
    
            goto L_60001AD0;
    }
    // 0x60001A8C: nop

L_60001A90:
    // 0x60001A90: c.le.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl <= ctx->f2.fl;
    // 0x60001A94: lui         $at, 0x438C
    ctx->r1 = S32(0X438C << 16);
    // 0x60001A98: bc1f        L_60001AD8
    if (!c1cs) {
        // 0x60001A9C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_60001AD8;
    }
    // 0x60001A9C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x60001AA0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x60001AA4: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x60001AA8: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x60001AAC: nop

    // 0x60001AB0: bc1t        L_60001AD0
    if (c1cs) {
        // 0x60001AB4: nop
    
            goto L_60001AD0;
    }
    // 0x60001AB4: nop

    // 0x60001AB8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x60001ABC: nop

    // 0x60001AC0: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x60001AC4: nop

    // 0x60001AC8: bc1f        L_60001AD8
    if (!c1cs) {
        // 0x60001ACC: nop
    
            goto L_60001AD8;
    }
    // 0x60001ACC: nop

L_60001AD0:
    // 0x60001AD0: jr          $ra
    // 0x60001AD4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x60001AD4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_60001AD8:
    // 0x60001AD8: jr          $ra
    // 0x60001ADC: nop

    return;
    // 0x60001ADC: nop

;}
RECOMP_FUNC void ovl_stage_world6_1AE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001AE0: lui         $t6, 0x6000
    ctx->r14 = S32(0X6000 << 16);
    // 0x60001AE4: lw          $t6, 0x6704($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X6704);
    // 0x60001AE8: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x60001AEC: andi        $t7, $t6, 0x82B7
    ctx->r15 = ctx->r14 & 0X82B7;
    // 0x60001AF0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x60001AF4: bne         $t7, $zero, L_60001B04
    if (ctx->r15 != 0) {
        // 0x60001AF8: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_60001B04;
    }
    // 0x60001AF8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x60001AFC: b           L_60001B08
    // 0x60001B00: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_60001B08;
    // 0x60001B00: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_60001B04:
    // 0x60001B04: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_60001B08:
    // 0x60001B08: beq         $v0, $zero, L_60001B20
    if (ctx->r2 == 0) {
        // 0x60001B0C: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_60001B20;
    }
    // 0x60001B0C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60001B10: lw          $a0, 0x5C08($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5C08);
    // 0x60001B14: jal         0x60000F28
    // 0x60001B18: nop

    ovl_stage_world6_F28(rdram, ctx);
        goto after_0;
    // 0x60001B18: nop

    after_0:
    // 0x60001B1C: bne         $v0, $zero, L_60001B44
    if (ctx->r2 != 0) {
        // 0x60001B20: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_60001B44;
    }
L_60001B20:
    // 0x60001B20: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x60001B24: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001B28: sw          $t8, 0x6688($at)
    MEM_W(0X6688, ctx->r1) = ctx->r24;
    // 0x60001B2C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001B30: addiu       $t9, $zero, 0x1E
    ctx->r25 = ADD32(0, 0X1E);
    // 0x60001B34: sw          $t9, 0x668C($at)
    MEM_W(0X668C, ctx->r1) = ctx->r25;
    // 0x60001B38: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001B3C: b           L_60001F3C
    // 0x60001B40: sw          $zero, 0x66AC($at)
    MEM_W(0X66AC, ctx->r1) = 0;
        goto L_60001F3C;
    // 0x60001B40: sw          $zero, 0x66AC($at)
    MEM_W(0X66AC, ctx->r1) = 0;
L_60001B44:
    // 0x60001B44: jal         0x6000034C
    // 0x60001B48: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    ovl_stage_world6_34C(rdram, ctx);
        goto after_1;
    // 0x60001B48: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_1:
    // 0x60001B4C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x60001B50: jal         0x60000DE4
    // 0x60001B54: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world6_DE4(rdram, ctx);
        goto after_2;
    // 0x60001B54: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x60001B58: lui         $a1, 0x6000
    ctx->r5 = S32(0X6000 << 16);
    // 0x60001B5C: addiu       $a1, $a1, 0x6708
    ctx->r5 = ADD32(ctx->r5, 0X6708);
    // 0x60001B60: jal         0x60000CE8
    // 0x60001B64: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_stage_world6_CE8(rdram, ctx);
        goto after_3;
    // 0x60001B64: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_3:
    // 0x60001B68: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60001B6C: lw          $v0, 0x6700($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6700);
    // 0x60001B70: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    // 0x60001B74: lw          $t0, 0x30($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X30);
    // 0x60001B78: lw          $a0, 0x2C($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X2C);
    // 0x60001B7C: div         $zero, $t0, $a3
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r7))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r7)));
    // 0x60001B80: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60001B84: bne         $a3, $zero, L_60001B90
    if (ctx->r7 != 0) {
        // 0x60001B88: nop
    
            goto L_60001B90;
    }
    // 0x60001B88: nop

    // 0x60001B8C: break       7
    do_break(1610619788);
L_60001B90:
    // 0x60001B90: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x60001B94: bne         $a3, $at, L_60001BA8
    if (ctx->r7 != ctx->r1) {
        // 0x60001B98: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_60001BA8;
    }
    // 0x60001B98: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x60001B9C: bne         $t0, $at, L_60001BA8
    if (ctx->r8 != ctx->r1) {
        // 0x60001BA0: nop
    
            goto L_60001BA8;
    }
    // 0x60001BA0: nop

    // 0x60001BA4: break       6
    do_break(1610619812);
L_60001BA8:
    // 0x60001BA8: lui         $t1, 0x6000
    ctx->r9 = S32(0X6000 << 16);
    // 0x60001BAC: addiu       $a2, $a2, 0x6688
    ctx->r6 = ADD32(ctx->r6, 0X6688);
    // 0x60001BB0: mflo        $v1
    ctx->r3 = lo;
    // 0x60001BB4: slt         $at, $v1, $a0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x60001BB8: bne         $at, $zero, L_60001C18
    if (ctx->r1 != 0) {
        // 0x60001BBC: nop
    
            goto L_60001C18;
    }
    // 0x60001BBC: nop

    // 0x60001BC0: lw          $t1, 0x6708($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X6708);
    // 0x60001BC4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x60001BC8: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x60001BCC: beq         $t2, $zero, L_60001BDC
    if (ctx->r10 == 0) {
        // 0x60001BD0: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_60001BDC;
    }
    // 0x60001BD0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x60001BD4: b           L_60001BDC
    // 0x60001BD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_60001BDC;
    // 0x60001BD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_60001BDC:
    // 0x60001BDC: beq         $v0, $zero, L_60001C18
    if (ctx->r2 == 0) {
        // 0x60001BE0: lui         $at, 0x6000
        ctx->r1 = S32(0X6000 << 16);
            goto L_60001C18;
    }
    // 0x60001BE0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001BE4: sw          $a1, 0x6688($at)
    MEM_W(0X6688, ctx->r1) = ctx->r5;
    // 0x60001BE8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001BEC: sw          $a3, 0x6690($at)
    MEM_W(0X6690, ctx->r1) = ctx->r7;
    // 0x60001BF0: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60001BF4: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001BF8: addiu       $t3, $zero, 0x3C
    ctx->r11 = ADD32(0, 0X3C);
    // 0x60001BFC: addiu       $v0, $v0, 0x66FC
    ctx->r2 = ADD32(ctx->r2, 0X66FC);
    // 0x60001C00: sw          $t3, 0x668C($at)
    MEM_W(0X668C, ctx->r1) = ctx->r11;
    // 0x60001C04: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x60001C08: jal         0x600011E4
    // 0x60001C0C: addiu       $a0, $zero, 0x33
    ctx->r4 = ADD32(0, 0X33);
    ovl_stage_world6_11E4(rdram, ctx);
        goto after_4;
    // 0x60001C0C: addiu       $a0, $zero, 0x33
    ctx->r4 = ADD32(0, 0X33);
    after_4:
    // 0x60001C10: b           L_60001F40
    // 0x60001C14: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_60001F40;
    // 0x60001C14: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_60001C18:
    // 0x60001C18: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x60001C1C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x60001C20: bne         $a1, $v0, L_60001C80
    if (ctx->r5 != ctx->r2) {
        // 0x60001C24: lui         $t4, 0x6000
        ctx->r12 = S32(0X6000 << 16);
            goto L_60001C80;
    }
    // 0x60001C24: lui         $t4, 0x6000
    ctx->r12 = S32(0X6000 << 16);
    // 0x60001C28: lw          $t4, 0x6690($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X6690);
    // 0x60001C2C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001C30: beq         $t4, $zero, L_60001C80
    if (ctx->r12 == 0) {
        // 0x60001C34: addiu       $t5, $zero, 0x1E
        ctx->r13 = ADD32(0, 0X1E);
            goto L_60001C80;
    }
    // 0x60001C34: addiu       $t5, $zero, 0x1E
    ctx->r13 = ADD32(0, 0X1E);
    // 0x60001C38: sw          $a1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r5;
    // 0x60001C3C: sw          $zero, 0x6690($at)
    MEM_W(0X6690, ctx->r1) = 0;
    // 0x60001C40: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60001C44: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001C48: addiu       $v0, $v0, 0x66FC
    ctx->r2 = ADD32(ctx->r2, 0X66FC);
    // 0x60001C4C: sw          $t5, 0x668C($at)
    MEM_W(0X668C, ctx->r1) = ctx->r13;
    // 0x60001C50: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x60001C54: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001C58: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x60001C5C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x60001C60: lwc1        $f4, 0x6698($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6698);
    // 0x60001C64: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001C68: jal         0x600015B4
    // 0x60001C6C: swc1        $f4, 0x66A4($at)
    MEM_W(0X66A4, ctx->r1) = ctx->f4.u32l;
    ovl_stage_world6_15B4(rdram, ctx);
        goto after_5;
    // 0x60001C6C: swc1        $f4, 0x66A4($at)
    MEM_W(0X66A4, ctx->r1) = ctx->f4.u32l;
    after_5:
    // 0x60001C70: jal         0x600011E4
    // 0x60001C74: addiu       $a0, $zero, 0x36
    ctx->r4 = ADD32(0, 0X36);
    ovl_stage_world6_11E4(rdram, ctx);
        goto after_6;
    // 0x60001C74: addiu       $a0, $zero, 0x36
    ctx->r4 = ADD32(0, 0X36);
    after_6:
    // 0x60001C78: b           L_60001F40
    // 0x60001C7C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_60001F40;
    // 0x60001C7C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_60001C80:
    // 0x60001C80: slt         $at, $v1, $a0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x60001C84: bne         $at, $zero, L_60001D0C
    if (ctx->r1 != 0) {
        // 0x60001C88: slti        $at, $s0, 0x29
        ctx->r1 = SIGNED(ctx->r16) < 0X29 ? 1 : 0;
            goto L_60001D0C;
    }
    // 0x60001C88: slti        $at, $s0, 0x29
    ctx->r1 = SIGNED(ctx->r16) < 0X29 ? 1 : 0;
    // 0x60001C8C: beq         $at, $zero, L_60001D0C
    if (ctx->r1 == 0) {
        // 0x60001C90: lui         $at, 0x6000
        ctx->r1 = S32(0X6000 << 16);
            goto L_60001D0C;
    }
    // 0x60001C90: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001C94: lwc1        $f0, 0x6694($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6694);
    // 0x60001C98: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x60001C9C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60001CA0: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x60001CA4: c.le.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl <= ctx->f0.fl;
    // 0x60001CA8: nop

    // 0x60001CAC: bc1f        L_60001D0C
    if (!c1cs) {
        // 0x60001CB0: nop
    
            goto L_60001D0C;
    }
    // 0x60001CB0: nop

    // 0x60001CB4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x60001CB8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001CBC: c.le.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl <= ctx->f8.fl;
    // 0x60001CC0: addiu       $t8, $zero, 0x3C
    ctx->r24 = ADD32(0, 0X3C);
    // 0x60001CC4: bc1f        L_60001D0C
    if (!c1cs) {
        // 0x60001CC8: nop
    
            goto L_60001D0C;
    }
    // 0x60001CC8: nop

    // 0x60001CCC: sw          $a1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r5;
    // 0x60001CD0: sw          $a3, 0x6690($at)
    MEM_W(0X6690, ctx->r1) = ctx->r7;
    // 0x60001CD4: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001CD8: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60001CDC: sw          $t8, 0x668C($at)
    MEM_W(0X668C, ctx->r1) = ctx->r24;
    // 0x60001CE0: addiu       $v0, $v0, 0x66FC
    ctx->r2 = ADD32(ctx->r2, 0X66FC);
    // 0x60001CE4: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x60001CE8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001CEC: lwc1        $f10, 0x6698($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X6698);
    // 0x60001CF0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001CF4: jal         0x600015B4
    // 0x60001CF8: swc1        $f10, 0x66A4($at)
    MEM_W(0X66A4, ctx->r1) = ctx->f10.u32l;
    ovl_stage_world6_15B4(rdram, ctx);
        goto after_7;
    // 0x60001CF8: swc1        $f10, 0x66A4($at)
    MEM_W(0X66A4, ctx->r1) = ctx->f10.u32l;
    after_7:
    // 0x60001CFC: jal         0x600011E4
    // 0x60001D00: addiu       $a0, $zero, 0x33
    ctx->r4 = ADD32(0, 0X33);
    ovl_stage_world6_11E4(rdram, ctx);
        goto after_8;
    // 0x60001D00: addiu       $a0, $zero, 0x33
    ctx->r4 = ADD32(0, 0X33);
    after_8:
    // 0x60001D04: b           L_60001F40
    // 0x60001D08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_60001F40;
    // 0x60001D08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_60001D0C:
    // 0x60001D0C: beq         $a1, $v0, L_60001E08
    if (ctx->r5 == ctx->r2) {
        // 0x60001D10: nop
    
            goto L_60001E08;
    }
    // 0x60001D10: nop

    // 0x60001D14: jal         0x6000034C
    // 0x60001D18: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    ovl_stage_world6_34C(rdram, ctx);
        goto after_9;
    // 0x60001D18: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_9:
    // 0x60001D1C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001D20: lwc1        $f16, 0x6694($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X6694);
    // 0x60001D24: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x60001D28: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x60001D2C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x60001D30: c.le.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl <= ctx->f16.fl;
    // 0x60001D34: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x60001D38: bc1f        L_60001D50
    if (!c1cs) {
        // 0x60001D3C: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_60001D50;
    }
    // 0x60001D3C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x60001D40: addiu       $s0, $v0, -0x1E
    ctx->r16 = ADD32(ctx->r2, -0X1E);
    // 0x60001D44: bgez        $s0, L_60001D54
    if (SIGNED(ctx->r16) >= 0) {
        // 0x60001D48: slti        $at, $s0, 0x28
        ctx->r1 = SIGNED(ctx->r16) < 0X28 ? 1 : 0;
            goto L_60001D54;
    }
    // 0x60001D48: slti        $at, $s0, 0x28
    ctx->r1 = SIGNED(ctx->r16) < 0X28 ? 1 : 0;
    // 0x60001D4C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_60001D50:
    // 0x60001D50: slti        $at, $s0, 0x28
    ctx->r1 = SIGNED(ctx->r16) < 0X28 ? 1 : 0;
L_60001D54:
    // 0x60001D54: beq         $at, $zero, L_60001DAC
    if (ctx->r1 == 0) {
        // 0x60001D58: lui         $v0, 0x6000
        ctx->r2 = S32(0X6000 << 16);
            goto L_60001DAC;
    }
    // 0x60001D58: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60001D5C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001D60: sw          $a1, 0x6688($at)
    MEM_W(0X6688, ctx->r1) = ctx->r5;
    // 0x60001D64: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001D68: sw          $t9, 0x6690($at)
    MEM_W(0X6690, ctx->r1) = ctx->r25;
    // 0x60001D6C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001D70: addiu       $t0, $zero, 0x1E
    ctx->r8 = ADD32(0, 0X1E);
    // 0x60001D74: addiu       $v0, $v0, 0x66FC
    ctx->r2 = ADD32(ctx->r2, 0X66FC);
    // 0x60001D78: sw          $t0, 0x668C($at)
    MEM_W(0X668C, ctx->r1) = ctx->r8;
    // 0x60001D7C: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x60001D80: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001D84: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x60001D88: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x60001D8C: lwc1        $f4, 0x6698($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6698);
    // 0x60001D90: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001D94: jal         0x600015B4
    // 0x60001D98: swc1        $f4, 0x66A4($at)
    MEM_W(0X66A4, ctx->r1) = ctx->f4.u32l;
    ovl_stage_world6_15B4(rdram, ctx);
        goto after_10;
    // 0x60001D98: swc1        $f4, 0x66A4($at)
    MEM_W(0X66A4, ctx->r1) = ctx->f4.u32l;
    after_10:
    // 0x60001D9C: jal         0x600011E4
    // 0x60001DA0: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    ovl_stage_world6_11E4(rdram, ctx);
        goto after_11;
    // 0x60001DA0: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    after_11:
    // 0x60001DA4: b           L_60001F40
    // 0x60001DA8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_60001F40;
    // 0x60001DA8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_60001DAC:
    // 0x60001DAC: slti        $at, $s0, 0x46
    ctx->r1 = SIGNED(ctx->r16) < 0X46 ? 1 : 0;
    // 0x60001DB0: beq         $at, $zero, L_60001E08
    if (ctx->r1 == 0) {
        // 0x60001DB4: lui         $v0, 0x6000
        ctx->r2 = S32(0X6000 << 16);
            goto L_60001E08;
    }
    // 0x60001DB4: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60001DB8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001DBC: sw          $a1, 0x6688($at)
    MEM_W(0X6688, ctx->r1) = ctx->r5;
    // 0x60001DC0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001DC4: sw          $a1, 0x6690($at)
    MEM_W(0X6690, ctx->r1) = ctx->r5;
    // 0x60001DC8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001DCC: addiu       $t3, $zero, 0x1E
    ctx->r11 = ADD32(0, 0X1E);
    // 0x60001DD0: addiu       $v0, $v0, 0x66FC
    ctx->r2 = ADD32(ctx->r2, 0X66FC);
    // 0x60001DD4: sw          $t3, 0x668C($at)
    MEM_W(0X668C, ctx->r1) = ctx->r11;
    // 0x60001DD8: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x60001DDC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001DE0: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x60001DE4: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x60001DE8: lwc1        $f6, 0x6698($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6698);
    // 0x60001DEC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001DF0: jal         0x600015B4
    // 0x60001DF4: swc1        $f6, 0x66A4($at)
    MEM_W(0X66A4, ctx->r1) = ctx->f6.u32l;
    ovl_stage_world6_15B4(rdram, ctx);
        goto after_12;
    // 0x60001DF4: swc1        $f6, 0x66A4($at)
    MEM_W(0X66A4, ctx->r1) = ctx->f6.u32l;
    after_12:
    // 0x60001DF8: jal         0x600011E4
    // 0x60001DFC: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    ovl_stage_world6_11E4(rdram, ctx);
        goto after_13;
    // 0x60001DFC: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    after_13:
    // 0x60001E00: b           L_60001F40
    // 0x60001E04: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_60001F40;
    // 0x60001E04: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_60001E08:
    // 0x60001E08: jal         0x600006DC
    // 0x60001E0C: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    ovl_stage_world6_6DC(rdram, ctx);
        goto after_14;
    // 0x60001E0C: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    after_14:
    // 0x60001E10: beq         $v0, $zero, L_60001F34
    if (ctx->r2 == 0) {
        // 0x60001E14: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_60001F34;
    }
    // 0x60001E14: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x60001E18: blez        $v0, L_60001F34
    if (SIGNED(ctx->r2) <= 0) {
        // 0x60001E1C: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_60001F34;
    }
    // 0x60001E1C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x60001E20: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_60001E24:
    // 0x60001E24: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x60001E28: lui         $a1, 0x6000
    ctx->r5 = S32(0X6000 << 16);
    // 0x60001E2C: addu        $t7, $t6, $s0
    ctx->r15 = ADD32(ctx->r14, ctx->r16);
    // 0x60001E30: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x60001E34: addiu       $a1, $a1, 0x66E0
    ctx->r5 = ADD32(ctx->r5, 0X66E0);
    // 0x60001E38: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    // 0x60001E3C: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x60001E40: jal         0x60000418
    // 0x60001E44: sw          $v1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r3;
    ovl_stage_world6_418(rdram, ctx);
        goto after_15;
    // 0x60001E44: sw          $v1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r3;
    after_15:
    // 0x60001E48: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x60001E4C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x60001E50: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
    // 0x60001E54: c.le.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl <= ctx->f8.fl;
    // 0x60001E58: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x60001E5C: bc1f        L_60001F2C
    if (!c1cs) {
        // 0x60001E60: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_60001F2C;
    }
    // 0x60001E60: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x60001E64: lw          $t9, 0x58($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X58);
    // 0x60001E68: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60001E6C: addu        $t0, $t9, $s0
    ctx->r8 = ADD32(ctx->r25, ctx->r16);
    // 0x60001E70: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x60001E74: addiu       $a0, $a0, 0x66E0
    ctx->r4 = ADD32(ctx->r4, 0X66E0);
    // 0x60001E78: lw          $a1, 0x0($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X0);
    // 0x60001E7C: jal         0x600003DC
    // 0x60001E80: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    ovl_stage_world6_3DC(rdram, ctx);
        goto after_16;
    // 0x60001E80: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    after_16:
    // 0x60001E84: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001E88: lwc1        $f13, 0x6458($at)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r1, 0X6458);
    // 0x60001E8C: lwc1        $f12, 0x645C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X645C);
    // 0x60001E90: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001E94: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x60001E98: lwc1        $f19, 0x6460($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X6460);
    // 0x60001E9C: lwc1        $f18, 0x6464($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X6464);
    // 0x60001EA0: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x60001EA4: mul.d       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f0.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x60001EA8: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x60001EAC: addiu       $t3, $zero, 0x1E
    ctx->r11 = ADD32(0, 0X1E);
    // 0x60001EB0: c.le.d      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.d <= ctx->f0.d;
    // 0x60001EB4: nop

    // 0x60001EB8: bc1f        L_60001ED4
    if (!c1cs) {
        // 0x60001EBC: nop
    
            goto L_60001ED4;
    }
    // 0x60001EBC: nop

    // 0x60001EC0: sub.d       $f4, $f0, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f4.d = ctx->f0.d - ctx->f12.d;
    // 0x60001EC4: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001EC8: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x60001ECC: b           L_60001F08
    // 0x60001ED0: swc1        $f6, 0x66A4($at)
    MEM_W(0X66A4, ctx->r1) = ctx->f6.u32l;
        goto L_60001F08;
    // 0x60001ED0: swc1        $f6, 0x66A4($at)
    MEM_W(0X66A4, ctx->r1) = ctx->f6.u32l;
L_60001ED4:
    // 0x60001ED4: mtc1        $zero, $f9
    ctx->f_odd[(9 - 1) * 2] = 0;
    // 0x60001ED8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x60001EDC: nop

    // 0x60001EE0: c.lt.d      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.d < ctx->f8.d;
    // 0x60001EE4: nop

    // 0x60001EE8: bc1f        L_60001EF8
    if (!c1cs) {
        // 0x60001EEC: nop
    
            goto L_60001EF8;
    }
    // 0x60001EEC: nop

    // 0x60001EF0: b           L_60001EFC
    // 0x60001EF4: add.d       $f2, $f0, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f2.d = ctx->f0.d + ctx->f12.d;
        goto L_60001EFC;
    // 0x60001EF4: add.d       $f2, $f0, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f2.d = ctx->f0.d + ctx->f12.d;
L_60001EF8:
    // 0x60001EF8: mov.d       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.d = ctx->f0.d;
L_60001EFC:
    // 0x60001EFC: cvt.s.d     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f10.fl = CVT_S_D(ctx->f2.d);
    // 0x60001F00: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001F04: swc1        $f10, 0x66A4($at)
    MEM_W(0X66A4, ctx->r1) = ctx->f10.u32l;
L_60001F08:
    // 0x60001F08: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001F0C: sw          $zero, 0x6688($at)
    MEM_W(0X6688, ctx->r1) = 0;
    // 0x60001F10: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001F14: sw          $t2, 0x6690($at)
    MEM_W(0X6690, ctx->r1) = ctx->r10;
    // 0x60001F18: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001F1C: sw          $t3, 0x668C($at)
    MEM_W(0X668C, ctx->r1) = ctx->r11;
    // 0x60001F20: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001F24: b           L_60001F3C
    // 0x60001F28: sw          $zero, 0x66AC($at)
    MEM_W(0X66AC, ctx->r1) = 0;
        goto L_60001F3C;
    // 0x60001F28: sw          $zero, 0x66AC($at)
    MEM_W(0X66AC, ctx->r1) = 0;
L_60001F2C:
    // 0x60001F2C: bne         $v1, $a2, L_60001E24
    if (ctx->r3 != ctx->r6) {
        // 0x60001F30: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_60001E24;
    }
    // 0x60001F30: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_60001F34:
    // 0x60001F34: jal         0x600018D0
    // 0x60001F38: nop

    ovl_stage_world6_18D0(rdram, ctx);
        goto after_17;
    // 0x60001F38: nop

    after_17:
L_60001F3C:
    // 0x60001F3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_60001F40:
    // 0x60001F40: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x60001F44: jr          $ra
    // 0x60001F48: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x60001F48: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void ovl_stage_world6_1F4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001F4C: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x60001F50: lw          $v1, 0x6704($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6704);
    // 0x60001F54: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x60001F58: andi        $t6, $v1, 0x1
    ctx->r14 = ctx->r3 & 0X1;
    // 0x60001F5C: beq         $t6, $zero, L_60001F6C
    if (ctx->r14 == 0) {
        // 0x60001F60: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_60001F6C;
    }
    // 0x60001F60: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x60001F64: b           L_60001F70
    // 0x60001F68: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_60001F70;
    // 0x60001F68: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_60001F6C:
    // 0x60001F6C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_60001F70:
    // 0x60001F70: beq         $v0, $zero, L_60001FD4
    if (ctx->r2 == 0) {
        // 0x60001F74: nop
    
            goto L_60001FD4;
    }
    // 0x60001F74: nop

    // 0x60001F78: jal         0x60001570
    // 0x60001F7C: nop

    ovl_stage_world6_1570(rdram, ctx);
        goto after_0;
    // 0x60001F7C: nop

    after_0:
    // 0x60001F80: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x60001F84: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x60001F88: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60001F8C: addiu       $v0, $v0, 0x5C44
    ctx->r2 = ADD32(ctx->r2, 0X5C44);
    // 0x60001F90: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001F94: lwc1        $f6, 0x6468($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6468);
    // 0x60001F98: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x60001F9C: ori         $a0, $zero, 0x8000
    ctx->r4 = 0 | 0X8000;
    // 0x60001FA0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x60001FA4: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
    // 0x60001FA8: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x60001FAC: nop

    // 0x60001FB0: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x60001FB4: nop

    // 0x60001FB8: bc1f        L_6000239C
    if (!c1cs) {
        // 0x60001FBC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_6000239C;
    }
    // 0x60001FBC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x60001FC0: sub.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x60001FC4: jal         0x60001548
    // 0x60001FC8: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
    ovl_stage_world6_1548(rdram, ctx);
        goto after_1;
    // 0x60001FC8: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
    after_1:
    // 0x60001FCC: b           L_6000239C
    // 0x60001FD0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_6000239C;
    // 0x60001FD0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_60001FD4:
    // 0x60001FD4: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60001FD8: lw          $v0, 0x6688($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6688);
    // 0x60001FDC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x60001FE0: beq         $v0, $zero, L_6000200C
    if (ctx->r2 == 0) {
        // 0x60001FE4: lui         $t7, 0x6000
        ctx->r15 = S32(0X6000 << 16);
            goto L_6000200C;
    }
    // 0x60001FE4: lui         $t7, 0x6000
    ctx->r15 = S32(0X6000 << 16);
    // 0x60001FE8: beq         $v0, $at, L_600022BC
    if (ctx->r2 == ctx->r1) {
        // 0x60001FEC: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_600022BC;
    }
    // 0x60001FEC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x60001FF0: beq         $v0, $at, L_600022F8
    if (ctx->r2 == ctx->r1) {
        // 0x60001FF4: andi        $t7, $v1, 0x8000
        ctx->r15 = ctx->r3 & 0X8000;
            goto L_600022F8;
    }
    // 0x60001FF4: andi        $t7, $v1, 0x8000
    ctx->r15 = ctx->r3 & 0X8000;
    // 0x60001FF8: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x60001FFC: beq         $v0, $at, L_60002348
    if (ctx->r2 == ctx->r1) {
        // 0x60002000: nop
    
            goto L_60002348;
    }
    // 0x60002000: nop

    // 0x60002004: b           L_6000239C
    // 0x60002008: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_6000239C;
    // 0x60002008: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_6000200C:
    // 0x6000200C: lw          $t7, 0x66AC($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X66AC);
    // 0x60002010: nop

    // 0x60002014: slti        $at, $t7, 0x3
    ctx->r1 = SIGNED(ctx->r15) < 0X3 ? 1 : 0;
    // 0x60002018: bne         $at, $zero, L_60002238
    if (ctx->r1 != 0) {
        // 0x6000201C: nop
    
            goto L_60002238;
    }
    // 0x6000201C: nop

    // 0x60002020: jal         0x600017F8
    // 0x60002024: nop

    ovl_stage_world6_17F8(rdram, ctx);
        goto after_2;
    // 0x60002024: nop

    after_2:
    // 0x60002028: beq         $v0, $zero, L_60002238
    if (ctx->r2 == 0) {
        // 0x6000202C: lui         $v1, 0x6000
        ctx->r3 = S32(0X6000 << 16);
            goto L_60002238;
    }
    // 0x6000202C: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x60002030: addiu       $v1, $v1, 0x6690
    ctx->r3 = ADD32(ctx->r3, 0X6690);
    // 0x60002034: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x60002038: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x6000203C: bne         $t8, $at, L_60002228
    if (ctx->r24 != ctx->r1) {
        // 0x60002040: lui         $v0, 0x6000
        ctx->r2 = S32(0X6000 << 16);
            goto L_60002228;
    }
    // 0x60002040: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60002044: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002048: sw          $zero, 0x6688($at)
    MEM_W(0X6688, ctx->r1) = 0;
    // 0x6000204C: addiu       $v0, $v0, 0x668C
    ctx->r2 = ADD32(ctx->r2, 0X668C);
    // 0x60002050: addiu       $t9, $zero, 0x1E
    ctx->r25 = ADD32(0, 0X1E);
    // 0x60002054: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x60002058: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x6000205C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002060: addiu       $t0, $zero, -0x1E
    ctx->r8 = ADD32(0, -0X1E);
    // 0x60002064: jal         0x60000340
    // 0x60002068: sw          $t0, 0x66AC($at)
    MEM_W(0X66AC, ctx->r1) = ctx->r8;
    ovl_stage_world6_340(rdram, ctx);
        goto after_3;
    // 0x60002068: sw          $t0, 0x66AC($at)
    MEM_W(0X66AC, ctx->r1) = ctx->r8;
    after_3:
    // 0x6000206C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002070: lwc1        $f13, 0x6470($at)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r1, 0X6470);
    // 0x60002074: lwc1        $f12, 0x6474($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X6474);
    // 0x60002078: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000207C: lwc1        $f15, 0x6478($at)
    ctx->f_odd[(15 - 1) * 2] = MEM_W(ctx->r1, 0X6478);
    // 0x60002080: lwc1        $f14, 0x647C($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X647C);
    // 0x60002084: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60002088: addiu       $v0, $v0, 0x66A4
    ctx->r2 = ADD32(ctx->r2, 0X66A4);
    // 0x6000208C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x60002090: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x60002094: lwc1        $f16, 0x0($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X0);
    // 0x60002098: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x6000209C: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x600020A0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x600020A4: mul.d       $f16, $f0, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f16.d = MUL_D(ctx->f0.d, ctx->f12.d);
    // 0x600020A8: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x600020AC: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x600020B0: add.d       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f10.d); 
    ctx->f18.d = ctx->f16.d + ctx->f10.d;
    // 0x600020B4: c.le.d      $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f14.d <= ctx->f18.d;
    // 0x600020B8: nop

    // 0x600020BC: bc1f        L_60002124
    if (!c1cs) {
        // 0x600020C0: nop
    
            goto L_60002124;
    }
    // 0x600020C0: nop

    // 0x600020C4: jal         0x60000340
    // 0x600020C8: nop

    ovl_stage_world6_340(rdram, ctx);
        goto after_4;
    // 0x600020C8: nop

    after_4:
    // 0x600020CC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600020D0: lwc1        $f13, 0x6480($at)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r1, 0X6480);
    // 0x600020D4: lwc1        $f12, 0x6484($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X6484);
    // 0x600020D8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600020DC: lwc1        $f15, 0x6488($at)
    ctx->f_odd[(15 - 1) * 2] = MEM_W(ctx->r1, 0X6488);
    // 0x600020E0: lwc1        $f14, 0x648C($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X648C);
    // 0x600020E4: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x600020E8: addiu       $v0, $v0, 0x66A4
    ctx->r2 = ADD32(ctx->r2, 0X66A4);
    // 0x600020EC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x600020F0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x600020F4: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x600020F8: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x600020FC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x60002100: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x60002104: mul.d       $f4, $f0, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f4.d = MUL_D(ctx->f0.d, ctx->f12.d);
    // 0x60002108: sub.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x6000210C: cvt.d.s     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f18.d = CVT_D_S(ctx->f10.fl);
    // 0x60002110: add.d       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f18.d); 
    ctx->f6.d = ctx->f4.d + ctx->f18.d;
    // 0x60002114: sub.d       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f14.d); 
    ctx->f8.d = ctx->f6.d - ctx->f14.d;
    // 0x60002118: cvt.s.d     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f16.fl = CVT_S_D(ctx->f8.d);
    // 0x6000211C: b           L_60002398
    // 0x60002120: swc1        $f16, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f16.u32l;
        goto L_60002398;
    // 0x60002120: swc1        $f16, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f16.u32l;
L_60002124:
    // 0x60002124: jal         0x60000340
    // 0x60002128: nop

    ovl_stage_world6_340(rdram, ctx);
        goto after_5;
    // 0x60002128: nop

    after_5:
    // 0x6000212C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002130: lwc1        $f13, 0x6490($at)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r1, 0X6490);
    // 0x60002134: lwc1        $f12, 0x6494($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X6494);
    // 0x60002138: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x6000213C: addiu       $v0, $v0, 0x66A4
    ctx->r2 = ADD32(ctx->r2, 0X66A4);
    // 0x60002140: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x60002144: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60002148: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x6000214C: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x60002150: add.s       $f18, $f10, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x60002154: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60002158: mul.d       $f10, $f0, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f10.d = MUL_D(ctx->f0.d, ctx->f12.d);
    // 0x6000215C: sub.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x60002160: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x60002164: cvt.d.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f16.d = CVT_D_S(ctx->f8.fl);
    // 0x60002168: mtc1        $zero, $f19
    ctx->f_odd[(19 - 1) * 2] = 0;
    // 0x6000216C: add.d       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f4.d = ctx->f10.d + ctx->f16.d;
    // 0x60002170: c.lt.d      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.d < ctx->f18.d;
    // 0x60002174: nop

    // 0x60002178: bc1f        L_600021D8
    if (!c1cs) {
        // 0x6000217C: nop
    
            goto L_600021D8;
    }
    // 0x6000217C: nop

    // 0x60002180: jal         0x60000340
    // 0x60002184: nop

    ovl_stage_world6_340(rdram, ctx);
        goto after_6;
    // 0x60002184: nop

    after_6:
    // 0x60002188: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000218C: lwc1        $f13, 0x64A0($at)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r1, 0X64A0);
    // 0x60002190: lwc1        $f12, 0x64A4($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X64A4);
    // 0x60002194: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002198: lwc1        $f15, 0x64A8($at)
    ctx->f_odd[(15 - 1) * 2] = MEM_W(ctx->r1, 0X64A8);
    // 0x6000219C: lwc1        $f14, 0x64AC($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X64AC);
    // 0x600021A0: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x600021A4: addiu       $v0, $v0, 0x66A4
    ctx->r2 = ADD32(ctx->r2, 0X66A4);
    // 0x600021A8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x600021AC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x600021B0: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x600021B4: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x600021B8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x600021BC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x600021C0: mul.d       $f6, $f0, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f6.d = MUL_D(ctx->f0.d, ctx->f12.d);
    // 0x600021C4: sub.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x600021C8: cvt.d.s     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f18.d = CVT_D_S(ctx->f4.fl);
    // 0x600021CC: add.d       $f8, $f6, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f18.d); 
    ctx->f8.d = ctx->f6.d + ctx->f18.d;
    // 0x600021D0: b           L_6000221C
    // 0x600021D4: add.d       $f2, $f8, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f14.d); 
    ctx->f2.d = ctx->f8.d + ctx->f14.d;
        goto L_6000221C;
    // 0x600021D4: add.d       $f2, $f8, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f14.d); 
    ctx->f2.d = ctx->f8.d + ctx->f14.d;
L_600021D8:
    // 0x600021D8: jal         0x60000340
    // 0x600021DC: nop

    ovl_stage_world6_340(rdram, ctx);
        goto after_7;
    // 0x600021DC: nop

    after_7:
    // 0x600021E0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600021E4: lwc1        $f13, 0x64B0($at)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r1, 0X64B0);
    // 0x600021E8: lwc1        $f12, 0x64B4($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X64B4);
    // 0x600021EC: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x600021F0: addiu       $v0, $v0, 0x66A4
    ctx->r2 = ADD32(ctx->r2, 0X66A4);
    // 0x600021F4: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x600021F8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x600021FC: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x60002200: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x60002204: add.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x60002208: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x6000220C: mul.d       $f10, $f0, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f10.d = MUL_D(ctx->f0.d, ctx->f12.d);
    // 0x60002210: sub.s       $f18, $f4, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x60002214: cvt.d.s     $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f8.d = CVT_D_S(ctx->f18.fl);
    // 0x60002218: add.d       $f2, $f10, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f2.d = ctx->f10.d + ctx->f8.d;
L_6000221C:
    // 0x6000221C: cvt.s.d     $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f16.fl = CVT_S_D(ctx->f2.d);
    // 0x60002220: b           L_60002398
    // 0x60002224: swc1        $f16, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f16.u32l;
        goto L_60002398;
    // 0x60002224: swc1        $f16, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f16.u32l;
L_60002228:
    // 0x60002228: jal         0x600018D0
    // 0x6000222C: nop

    ovl_stage_world6_18D0(rdram, ctx);
        goto after_8;
    // 0x6000222C: nop

    after_8:
    // 0x60002230: b           L_6000239C
    // 0x60002234: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_6000239C;
    // 0x60002234: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_60002238:
    // 0x60002238: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x6000223C: addiu       $v0, $v0, 0x668C
    ctx->r2 = ADD32(ctx->r2, 0X668C);
    // 0x60002240: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x60002244: lui         $at, 0x43AF
    ctx->r1 = S32(0X43AF << 16);
    // 0x60002248: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x6000224C: beq         $t2, $zero, L_600022AC
    if (ctx->r10 == 0) {
        // 0x60002250: sw          $t2, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r10;
            goto L_600022AC;
    }
    // 0x60002250: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x60002254: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60002258: addiu       $v0, $v0, 0x66A4
    ctx->r2 = ADD32(ctx->r2, 0X66A4);
    // 0x6000225C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x60002260: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x60002264: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002268: lwc1        $f14, 0x64B8($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X64B8);
    // 0x6000226C: lui         $a2, 0x448F
    ctx->r6 = S32(0X448F << 16);
    // 0x60002270: lui         $a3, 0x449C
    ctx->r7 = S32(0X449C << 16);
    // 0x60002274: ori         $a3, $a3, 0x4000
    ctx->r7 = ctx->r7 | 0X4000;
    // 0x60002278: ori         $a2, $a2, 0xC000
    ctx->r6 = ctx->r6 | 0XC000;
    // 0x6000227C: jal         0x600019AC
    // 0x60002280: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_stage_world6_19AC(rdram, ctx);
        goto after_9;
    // 0x60002280: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_9:
    // 0x60002284: beq         $v0, $zero, L_6000229C
    if (ctx->r2 == 0) {
        // 0x60002288: nop
    
            goto L_6000229C;
    }
    // 0x60002288: nop

    // 0x6000228C: jal         0x60001AE0
    // 0x60002290: nop

    ovl_stage_world6_1AE0(rdram, ctx);
        goto after_10;
    // 0x60002290: nop

    after_10:
    // 0x60002294: b           L_6000239C
    // 0x60002298: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_6000239C;
    // 0x60002298: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_6000229C:
    // 0x6000229C: jal         0x600015B4
    // 0x600022A0: nop

    ovl_stage_world6_15B4(rdram, ctx);
        goto after_11;
    // 0x600022A0: nop

    after_11:
    // 0x600022A4: b           L_6000239C
    // 0x600022A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_6000239C;
    // 0x600022A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_600022AC:
    // 0x600022AC: jal         0x60001AE0
    // 0x600022B0: nop

    ovl_stage_world6_1AE0(rdram, ctx);
        goto after_12;
    // 0x600022B0: nop

    after_12:
    // 0x600022B4: b           L_6000239C
    // 0x600022B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_6000239C;
    // 0x600022B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_600022BC:
    // 0x600022BC: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x600022C0: addiu       $v0, $v0, 0x668C
    ctx->r2 = ADD32(ctx->r2, 0X668C);
    // 0x600022C4: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x600022C8: nop

    // 0x600022CC: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x600022D0: beq         $t5, $zero, L_600022E8
    if (ctx->r13 == 0) {
        // 0x600022D4: sw          $t5, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r13;
            goto L_600022E8;
    }
    // 0x600022D4: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x600022D8: jal         0x60001594
    // 0x600022DC: nop

    ovl_stage_world6_1594(rdram, ctx);
        goto after_13;
    // 0x600022DC: nop

    after_13:
    // 0x600022E0: b           L_6000239C
    // 0x600022E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_6000239C;
    // 0x600022E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_600022E8:
    // 0x600022E8: jal         0x60001AE0
    // 0x600022EC: nop

    ovl_stage_world6_1AE0(rdram, ctx);
        goto after_14;
    // 0x600022EC: nop

    after_14:
    // 0x600022F0: b           L_6000239C
    // 0x600022F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_6000239C;
    // 0x600022F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_600022F8:
    // 0x600022F8: beq         $t7, $zero, L_60002308
    if (ctx->r15 == 0) {
        // 0x600022FC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_60002308;
    }
    // 0x600022FC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x60002300: b           L_60002308
    // 0x60002304: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_60002308;
    // 0x60002304: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_60002308:
    // 0x60002308: bne         $v0, $zero, L_60002398
    if (ctx->r2 != 0) {
        // 0x6000230C: lui         $v0, 0x6000
        ctx->r2 = S32(0X6000 << 16);
            goto L_60002398;
    }
    // 0x6000230C: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60002310: addiu       $v0, $v0, 0x668C
    ctx->r2 = ADD32(ctx->r2, 0X668C);
    // 0x60002314: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x60002318: nop

    // 0x6000231C: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x60002320: beq         $t9, $zero, L_60002338
    if (ctx->r25 == 0) {
        // 0x60002324: sw          $t9, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r25;
            goto L_60002338;
    }
    // 0x60002324: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x60002328: jal         0x60001570
    // 0x6000232C: nop

    ovl_stage_world6_1570(rdram, ctx);
        goto after_15;
    // 0x6000232C: nop

    after_15:
    // 0x60002330: b           L_6000239C
    // 0x60002334: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_6000239C;
    // 0x60002334: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_60002338:
    // 0x60002338: jal         0x60001AE0
    // 0x6000233C: nop

    ovl_stage_world6_1AE0(rdram, ctx);
        goto after_16;
    // 0x6000233C: nop

    after_16:
    // 0x60002340: b           L_6000239C
    // 0x60002344: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_6000239C;
    // 0x60002344: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_60002348:
    // 0x60002348: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x6000234C: addiu       $v0, $v0, 0x668C
    ctx->r2 = ADD32(ctx->r2, 0X668C);
    // 0x60002350: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x60002354: nop

    // 0x60002358: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x6000235C: beq         $t2, $zero, L_60002390
    if (ctx->r10 == 0) {
        // 0x60002360: sw          $t2, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r10;
            goto L_60002390;
    }
    // 0x60002360: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x60002364: slti        $at, $t2, 0x4
    ctx->r1 = SIGNED(ctx->r10) < 0X4 ? 1 : 0;
    // 0x60002368: beq         $at, $zero, L_60002380
    if (ctx->r1 == 0) {
        // 0x6000236C: nop
    
            goto L_60002380;
    }
    // 0x6000236C: nop

    // 0x60002370: jal         0x60001570
    // 0x60002374: nop

    ovl_stage_world6_1570(rdram, ctx);
        goto after_17;
    // 0x60002374: nop

    after_17:
    // 0x60002378: b           L_6000239C
    // 0x6000237C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_6000239C;
    // 0x6000237C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_60002380:
    // 0x60002380: jal         0x600015B4
    // 0x60002384: nop

    ovl_stage_world6_15B4(rdram, ctx);
        goto after_18;
    // 0x60002384: nop

    after_18:
    // 0x60002388: b           L_6000239C
    // 0x6000238C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_6000239C;
    // 0x6000238C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_60002390:
    // 0x60002390: jal         0x60001AE0
    // 0x60002394: nop

    ovl_stage_world6_1AE0(rdram, ctx);
        goto after_19;
    // 0x60002394: nop

    after_19:
L_60002398:
    // 0x60002398: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_6000239C:
    // 0x6000239C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x600023A0: jr          $ra
    // 0x600023A4: nop

    return;
    // 0x600023A4: nop

;}
RECOMP_FUNC void ovl_stage_world6_23A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600023A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600023AC: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x600023B0: addiu       $a2, $a2, 0x6710
    ctx->r6 = ADD32(ctx->r6, 0X6710);
    // 0x600023B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600023B8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x600023BC: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
    // 0x600023C0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x600023C4: jal         0x60000808
    // 0x600023C8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_stage_world6_808(rdram, ctx);
        goto after_0;
    // 0x600023C8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x600023CC: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x600023D0: addiu       $a2, $a2, 0x6710
    ctx->r6 = ADD32(ctx->r6, 0X6710);
    // 0x600023D4: sh          $zero, 0x0($a2)
    MEM_H(0X0, ctx->r6) = 0;
    // 0x600023D8: sh          $zero, 0x2($a2)
    MEM_H(0X2, ctx->r6) = 0;
    // 0x600023DC: sh          $zero, 0x4($a2)
    MEM_H(0X4, ctx->r6) = 0;
    // 0x600023E0: sb          $zero, 0x6($a2)
    MEM_B(0X6, ctx->r6) = 0;
    // 0x600023E4: sb          $zero, 0x7($a2)
    MEM_B(0X7, ctx->r6) = 0;
    // 0x600023E8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x600023EC: jal         0x60000808
    // 0x600023F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world6_808(rdram, ctx);
        goto after_1;
    // 0x600023F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x600023F4: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x600023F8: addiu       $v0, $v0, 0x66AC
    ctx->r2 = ADD32(ctx->r2, 0X66AC);
    // 0x600023FC: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x60002400: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002404: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002408: lw          $a0, 0x5C08($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5C08);
    // 0x6000240C: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60002410: sw          $zero, 0x66A8($at)
    MEM_W(0X66A8, ctx->r1) = 0;
    // 0x60002414: addiu       $a2, $a2, 0x66B0
    ctx->r6 = ADD32(ctx->r6, 0X66B0);
    // 0x60002418: jal         0x600006C4
    // 0x6000241C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_stage_world6_6C4(rdram, ctx);
        goto after_2;
    // 0x6000241C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_2:
    // 0x60002420: jal         0x60000DE4
    // 0x60002424: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world6_DE4(rdram, ctx);
        goto after_3;
    // 0x60002424: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x60002428: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x6000242C: addiu       $a2, $a2, 0x66C8
    ctx->r6 = ADD32(ctx->r6, 0X66C8);
    // 0x60002430: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60002434: jal         0x600006C4
    // 0x60002438: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_stage_world6_6C4(rdram, ctx);
        goto after_4;
    // 0x60002438: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_4:
    // 0x6000243C: jal         0x60001390
    // 0x60002440: nop

    ovl_stage_world6_1390(rdram, ctx);
        goto after_5;
    // 0x60002440: nop

    after_5:
    // 0x60002444: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002448: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x6000244C: sw          $zero, 0x6690($at)
    MEM_W(0X6690, ctx->r1) = 0;
    // 0x60002450: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002454: swc1        $f4, 0x66A4($at)
    MEM_W(0X66A4, ctx->r1) = ctx->f4.u32l;
    // 0x60002458: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000245C: sw          $zero, 0x66FC($at)
    MEM_W(0X66FC, ctx->r1) = 0;
    // 0x60002460: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002464: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x60002468: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000246C: sw          $t8, 0x6688($at)
    MEM_W(0X6688, ctx->r1) = ctx->r24;
    // 0x60002470: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002474: addiu       $t9, $zero, 0xF
    ctx->r25 = ADD32(0, 0XF);
    // 0x60002478: sw          $t9, 0x668C($at)
    MEM_W(0X668C, ctx->r1) = ctx->r25;
    // 0x6000247C: jr          $ra
    // 0x60002480: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x60002480: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void ovl_stage_world6_2484(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002484: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x60002488: beq         $a0, $zero, L_60002510
    if (ctx->r4 == 0) {
        // 0x6000248C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_60002510;
    }
    // 0x6000248C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60002490: jal         0x60000DE4
    // 0x60002494: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world6_DE4(rdram, ctx);
        goto after_0;
    // 0x60002494: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x60002498: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x6000249C: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x600024A0: jal         0x600006C4
    // 0x600024A4: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world6_6C4(rdram, ctx);
        goto after_1;
    // 0x600024A4: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x600024A8: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x600024AC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x600024B0: ori         $t7, $t6, 0x80
    ctx->r15 = ctx->r14 | 0X80;
    // 0x600024B4: jal         0x60000DE4
    // 0x600024B8: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    ovl_stage_world6_DE4(rdram, ctx);
        goto after_2;
    // 0x600024B8: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    after_2:
    // 0x600024BC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600024C0: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x600024C4: jal         0x600006C4
    // 0x600024C8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world6_6C4(rdram, ctx);
        goto after_3;
    // 0x600024C8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_3:
    // 0x600024CC: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x600024D0: addiu       $a2, $a2, 0x6718
    ctx->r6 = ADD32(ctx->r6, 0X6718);
    // 0x600024D4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x600024D8: jal         0x60000808
    // 0x600024DC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_stage_world6_808(rdram, ctx);
        goto after_4;
    // 0x600024DC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_4:
    // 0x600024E0: lui         $t8, 0x6000
    ctx->r24 = S32(0X6000 << 16);
    // 0x600024E4: lw          $t8, 0x6718($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X6718);
    // 0x600024E8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600024EC: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x600024F0: ori         $t9, $t8, 0x100
    ctx->r25 = ctx->r24 | 0X100;
    // 0x600024F4: sw          $t9, 0x6718($at)
    MEM_W(0X6718, ctx->r1) = ctx->r25;
    // 0x600024F8: addiu       $a2, $a2, 0x6718
    ctx->r6 = ADD32(ctx->r6, 0X6718);
    // 0x600024FC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x60002500: jal         0x60000808
    // 0x60002504: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_stage_world6_808(rdram, ctx);
        goto after_5;
    // 0x60002504: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_5:
    // 0x60002508: b           L_60002594
    // 0x6000250C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60002594;
    // 0x6000250C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60002510:
    // 0x60002510: jal         0x60000DE4
    // 0x60002514: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world6_DE4(rdram, ctx);
        goto after_6;
    // 0x60002514: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_6:
    // 0x60002518: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x6000251C: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x60002520: jal         0x600006C4
    // 0x60002524: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world6_6C4(rdram, ctx);
        goto after_7;
    // 0x60002524: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_7:
    // 0x60002528: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x6000252C: addiu       $at, $zero, -0x81
    ctx->r1 = ADD32(0, -0X81);
    // 0x60002530: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x60002534: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x60002538: jal         0x60000DE4
    // 0x6000253C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world6_DE4(rdram, ctx);
        goto after_8;
    // 0x6000253C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_8:
    // 0x60002540: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60002544: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x60002548: jal         0x600006C4
    // 0x6000254C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world6_6C4(rdram, ctx);
        goto after_9;
    // 0x6000254C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_9:
    // 0x60002550: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60002554: addiu       $a2, $a2, 0x6718
    ctx->r6 = ADD32(ctx->r6, 0X6718);
    // 0x60002558: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x6000255C: jal         0x60000808
    // 0x60002560: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_stage_world6_808(rdram, ctx);
        goto after_10;
    // 0x60002560: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_10:
    // 0x60002564: lui         $t2, 0x6000
    ctx->r10 = S32(0X6000 << 16);
    // 0x60002568: lw          $t2, 0x6718($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X6718);
    // 0x6000256C: addiu       $at, $zero, -0x101
    ctx->r1 = ADD32(0, -0X101);
    // 0x60002570: and         $t3, $t2, $at
    ctx->r11 = ctx->r10 & ctx->r1;
    // 0x60002574: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002578: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x6000257C: sw          $t3, 0x6718($at)
    MEM_W(0X6718, ctx->r1) = ctx->r11;
    // 0x60002580: addiu       $a2, $a2, 0x6718
    ctx->r6 = ADD32(ctx->r6, 0X6718);
    // 0x60002584: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x60002588: jal         0x60000808
    // 0x6000258C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_stage_world6_808(rdram, ctx);
        goto after_11;
    // 0x6000258C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_11:
    // 0x60002590: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60002594:
    // 0x60002594: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x60002598: jr          $ra
    // 0x6000259C: nop

    return;
    // 0x6000259C: nop

;}
RECOMP_FUNC void ovl_stage_world6_25A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600025A0: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x600025A4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x600025A8: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x600025AC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x600025B0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x600025B4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x600025B8: jal         0x60000C1C
    // 0x600025BC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    ovl_stage_world6_C1C(rdram, ctx);
        goto after_0;
    // 0x600025BC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x600025C0: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x600025C4: jal         0x600009C4
    // 0x600025C8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    ovl_stage_world6_9C4(rdram, ctx);
        goto after_1;
    // 0x600025C8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_1:
    // 0x600025CC: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x600025D0: nop

    // 0x600025D4: andi        $t7, $t6, 0x800
    ctx->r15 = ctx->r14 & 0X800;
    // 0x600025D8: beq         $t7, $zero, L_600025FC
    if (ctx->r15 == 0) {
        // 0x600025DC: nop
    
            goto L_600025FC;
    }
    // 0x600025DC: nop

L_600025E0:
    // 0x600025E0: jal         0x600009D0
    // 0x600025E4: nop

    ovl_stage_world6_9D0(rdram, ctx);
        goto after_2;
    // 0x600025E4: nop

    after_2:
    // 0x600025E8: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x600025EC: nop

    // 0x600025F0: andi        $t9, $t8, 0x800
    ctx->r25 = ctx->r24 & 0X800;
    // 0x600025F4: bne         $t9, $zero, L_600025E0
    if (ctx->r25 != 0) {
        // 0x600025F8: nop
    
            goto L_600025E0;
    }
    // 0x600025F8: nop

L_600025FC:
    // 0x600025FC: lui         $s4, 0x6000
    ctx->r20 = S32(0X6000 << 16);
    // 0x60002600: addiu       $s4, $s4, 0x5C08
    ctx->r20 = ADD32(ctx->r20, 0X5C08);
    // 0x60002604: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x60002608: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x6000260C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x60002610: jal         0x600006C4
    // 0x60002614: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    ovl_stage_world6_6C4(rdram, ctx);
        goto after_3;
    // 0x60002614: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    after_3:
    // 0x60002618: jal         0x60001028
    // 0x6000261C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world6_1028(rdram, ctx);
        goto after_4;
    // 0x6000261C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
    // 0x60002620: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    // 0x60002624: lui         $s0, 0x40
    ctx->r16 = S32(0X40 << 16);
    // 0x60002628: sll         $t1, $t0, 9
    ctx->r9 = S32(ctx->r8 << 9);
    // 0x6000262C: bgez        $t1, L_60002650
    if (SIGNED(ctx->r9) >= 0) {
        // 0x60002630: nop
    
            goto L_60002650;
    }
    // 0x60002630: nop

L_60002634:
    // 0x60002634: jal         0x600009D0
    // 0x60002638: nop

    ovl_stage_world6_9D0(rdram, ctx);
        goto after_5;
    // 0x60002638: nop

    after_5:
    // 0x6000263C: lw          $t2, 0x0($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X0);
    // 0x60002640: nop

    // 0x60002644: and         $t3, $t2, $s0
    ctx->r11 = ctx->r10 & ctx->r16;
    // 0x60002648: bne         $t3, $zero, L_60002634
    if (ctx->r11 != 0) {
        // 0x6000264C: nop
    
            goto L_60002634;
    }
    // 0x6000264C: nop

L_60002650:
    // 0x60002650: jal         0x600009D0
    // 0x60002654: nop

    ovl_stage_world6_9D0(rdram, ctx);
        goto after_6;
    // 0x60002654: nop

    after_6:
    // 0x60002658: jal         0x60002484
    // 0x6000265C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world6_2484(rdram, ctx);
        goto after_7;
    // 0x6000265C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_7:
    // 0x60002660: addiu       $t4, $zero, 0x7
    ctx->r12 = ADD32(0, 0X7);
    // 0x60002664: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x60002668: sw          $t4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r12;
    // 0x6000266C: sw          $t5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r13;
    // 0x60002670: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x60002674: jal         0x600007F0
    // 0x60002678: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    ovl_stage_world6_7F0(rdram, ctx);
        goto after_8;
    // 0x60002678: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_8:
    // 0x6000267C: jal         0x600007E4
    // 0x60002680: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_stage_world6_7E4(rdram, ctx);
        goto after_9;
    // 0x60002680: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_9:
    // 0x60002684: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60002688: addiu       $a2, $a2, 0x6700
    ctx->r6 = ADD32(ctx->r6, 0X6700);
    // 0x6000268C: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x60002690: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x60002694: sw          $t6, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r14;
    // 0x60002698: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x6000269C: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x600026A0: lw          $t8, 0x2C($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X2C);
    // 0x600026A4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x600026A8: sw          $t8, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r24;
    // 0x600026AC: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x600026B0: nop

    // 0x600026B4: lw          $t9, 0x10($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X10);
    // 0x600026B8: nop

    // 0x600026BC: ori         $t0, $t9, 0x3
    ctx->r8 = ctx->r25 | 0X3;
    // 0x600026C0: sw          $t0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r8;
    // 0x600026C4: lw          $t2, 0x0($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X0);
    // 0x600026C8: nop

    // 0x600026CC: sw          $t1, 0xC($t2)
    MEM_W(0XC, ctx->r10) = ctx->r9;
    // 0x600026D0: lw          $a1, 0x0($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X0);
    // 0x600026D4: jal         0x600007F0
    // 0x600026D8: nop

    ovl_stage_world6_7F0(rdram, ctx);
        goto after_10;
    // 0x600026D8: nop

    after_10:
    // 0x600026DC: jal         0x600023A8
    // 0x600026E0: nop

    ovl_stage_world6_23A8(rdram, ctx);
        goto after_11;
    // 0x600026E0: nop

    after_11:
    // 0x600026E4: jal         0x60000B98
    // 0x600026E8: addiu       $a0, $zero, 0xA1
    ctx->r4 = ADD32(0, 0XA1);
    ovl_stage_world6_B98(rdram, ctx);
        goto after_12;
    // 0x600026E8: addiu       $a0, $zero, 0xA1
    ctx->r4 = ADD32(0, 0XA1);
    after_12:
    // 0x600026EC: lui         $s3, 0x6000
    ctx->r19 = S32(0X6000 << 16);
    // 0x600026F0: lui         $s2, 0x6000
    ctx->r18 = S32(0X6000 << 16);
    // 0x600026F4: lui         $s0, 0x6000
    ctx->r16 = S32(0X6000 << 16);
    // 0x600026F8: addiu       $s0, $s0, 0x6710
    ctx->r16 = ADD32(ctx->r16, 0X6710);
    // 0x600026FC: addiu       $s2, $s2, 0x66A8
    ctx->r18 = ADD32(ctx->r18, 0X66A8);
    // 0x60002700: addiu       $s3, $s3, 0x66AC
    ctx->r19 = ADD32(ctx->r19, 0X66AC);
    // 0x60002704: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
L_60002708:
    // 0x60002708: nop

    // 0x6000270C: andi        $t3, $v0, 0x2000
    ctx->r11 = ctx->r2 & 0X2000;
    // 0x60002710: beq         $t3, $zero, L_600027AC
    if (ctx->r11 == 0) {
        // 0x60002714: andi        $t4, $v0, 0x2
        ctx->r12 = ctx->r2 & 0X2;
            goto L_600027AC;
    }
    // 0x60002714: andi        $t4, $v0, 0x2
    ctx->r12 = ctx->r2 & 0X2;
    // 0x60002718: beq         $t4, $zero, L_60002730
    if (ctx->r12 == 0) {
        // 0x6000271C: nop
    
            goto L_60002730;
    }
    // 0x6000271C: nop

    // 0x60002720: jal         0x600009AC
    // 0x60002724: nop

    ovl_stage_world6_9AC(rdram, ctx);
        goto after_13;
    // 0x60002724: nop

    after_13:
    // 0x60002728: b           L_60002738
    // 0x6000272C: nop

        goto L_60002738;
    // 0x6000272C: nop

L_60002730:
    // 0x60002730: jal         0x60000A6C
    // 0x60002734: nop

    ovl_stage_world6_A6C(rdram, ctx);
        goto after_14;
    // 0x60002734: nop

    after_14:
L_60002738:
    // 0x60002738: jal         0x60001028
    // 0x6000273C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world6_1028(rdram, ctx);
        goto after_15;
    // 0x6000273C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_15:
    // 0x60002740: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    // 0x60002744: addiu       $a1, $zero, 0x31
    ctx->r5 = ADD32(0, 0X31);
    // 0x60002748: jal         0x600006C4
    // 0x6000274C: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    ovl_stage_world6_6C4(rdram, ctx);
        goto after_16;
    // 0x6000274C: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    after_16:
    // 0x60002750: jal         0x60000A60
    // 0x60002754: addiu       $a0, $zero, 0xAD4
    ctx->r4 = ADD32(0, 0XAD4);
    ovl_stage_world6_A60(rdram, ctx);
        goto after_17;
    // 0x60002754: addiu       $a0, $zero, 0xAD4
    ctx->r4 = ADD32(0, 0XAD4);
    after_17:
    // 0x60002758: jal         0x60000B98
    // 0x6000275C: addiu       $a0, $zero, 0x8D
    ctx->r4 = ADD32(0, 0X8D);
    ovl_stage_world6_B98(rdram, ctx);
        goto after_18;
    // 0x6000275C: addiu       $a0, $zero, 0x8D
    ctx->r4 = ADD32(0, 0X8D);
    after_18:
    // 0x60002760: jal         0x60000B98
    // 0x60002764: addiu       $a0, $zero, 0xA9
    ctx->r4 = ADD32(0, 0XA9);
    ovl_stage_world6_B98(rdram, ctx);
        goto after_19;
    // 0x60002764: addiu       $a0, $zero, 0xA9
    ctx->r4 = ADD32(0, 0XA9);
    after_19:
    // 0x60002768: jal         0x6000117C
    // 0x6000276C: nop

    ovl_stage_world6_117C(rdram, ctx);
        goto after_20;
    // 0x6000276C: nop

    after_20:
    // 0x60002770: lw          $t5, 0x14($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X14);
    // 0x60002774: addiu       $a0, $zero, 0x874
    ctx->r4 = ADD32(0, 0X874);
    // 0x60002778: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x6000277C: slti        $at, $t6, 0x18
    ctx->r1 = SIGNED(ctx->r14) < 0X18 ? 1 : 0;
    // 0x60002780: bne         $at, $zero, L_60002790
    if (ctx->r1 != 0) {
        // 0x60002784: sw          $t6, 0x14($s1)
        MEM_W(0X14, ctx->r17) = ctx->r14;
            goto L_60002790;
    }
    // 0x60002784: sw          $t6, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r14;
    // 0x60002788: addiu       $t7, $t6, -0x18
    ctx->r15 = ADD32(ctx->r14, -0X18);
    // 0x6000278C: sw          $t7, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r15;
L_60002790:
    // 0x60002790: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x60002794: jal         0x60000C10
    // 0x60002798: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_stage_world6_C10(rdram, ctx);
        goto after_21;
    // 0x60002798: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_21:
    // 0x6000279C: jal         0x60002484
    // 0x600027A0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world6_2484(rdram, ctx);
        goto after_22;
    // 0x600027A0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_22:
    // 0x600027A4: jal         0x600009AC
    // 0x600027A8: nop

    ovl_stage_world6_9AC(rdram, ctx);
        goto after_23;
    // 0x600027A8: nop

    after_23:
L_600027AC:
    // 0x600027AC: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
    // 0x600027B0: sh          $zero, 0x2($s0)
    MEM_H(0X2, ctx->r16) = 0;
    // 0x600027B4: sh          $zero, 0x4($s0)
    MEM_H(0X4, ctx->r16) = 0;
    // 0x600027B8: sb          $zero, 0x6($s0)
    MEM_B(0X6, ctx->r16) = 0;
    // 0x600027BC: jal         0x60001390
    // 0x600027C0: sb          $zero, 0x7($s0)
    MEM_B(0X7, ctx->r16) = 0;
    ovl_stage_world6_1390(rdram, ctx);
        goto after_24;
    // 0x600027C0: sb          $zero, 0x7($s0)
    MEM_B(0X7, ctx->r16) = 0;
    after_24:
    // 0x600027C4: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    // 0x600027C8: lui         $a1, 0x6000
    ctx->r5 = S32(0X6000 << 16);
    // 0x600027CC: jal         0x60000CE8
    // 0x600027D0: addiu       $a1, $a1, 0x6704
    ctx->r5 = ADD32(ctx->r5, 0X6704);
    ovl_stage_world6_CE8(rdram, ctx);
        goto after_25;
    // 0x600027D0: addiu       $a1, $a1, 0x6704
    ctx->r5 = ADD32(ctx->r5, 0X6704);
    after_25:
    // 0x600027D4: jal         0x60001F4C
    // 0x600027D8: nop

    ovl_stage_world6_1F4C(rdram, ctx);
        goto after_26;
    // 0x600027D8: nop

    after_26:
    // 0x600027DC: lw          $t8, 0x0($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X0);
    // 0x600027E0: lw          $t0, 0x0($s3)
    ctx->r8 = MEM_W(ctx->r19, 0X0);
    // 0x600027E4: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x600027E8: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x600027EC: sw          $t9, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r25;
    // 0x600027F0: sw          $t1, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r9;
    // 0x600027F4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x600027F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x600027FC: jal         0x60000808
    // 0x60002800: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_stage_world6_808(rdram, ctx);
        goto after_27;
    // 0x60002800: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_27:
    // 0x60002804: jal         0x600009D0
    // 0x60002808: nop

    ovl_stage_world6_9D0(rdram, ctx);
        goto after_28;
    // 0x60002808: nop

    after_28:
    // 0x6000280C: b           L_60002708
    // 0x60002810: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
        goto L_60002708;
    // 0x60002810: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x60002814: nop

    // 0x60002818: nop

    // 0x6000281C: nop

    // 0x60002820: nop

    // 0x60002824: nop

    // 0x60002828: nop

    // 0x6000282C: nop

    // 0x60002830: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x60002834: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x60002838: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x6000283C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x60002840: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x60002844: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x60002848: jr          $ra
    // 0x6000284C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x6000284C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_stage_world6_2850(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002850: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60002854: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60002858: jal         0x60000C1C
    // 0x6000285C: nop

    ovl_stage_world6_C1C(rdram, ctx);
        goto after_0;
    // 0x6000285C: nop

    after_0:
    // 0x60002860: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x60002864: nop

    // 0x60002868: sll         $t7, $t6, 13
    ctx->r15 = S32(ctx->r14 << 13);
    // 0x6000286C: bltz        $t7, L_600028A8
    if (SIGNED(ctx->r15) < 0) {
        // 0x60002870: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600028A8;
    }
    // 0x60002870: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002874: jal         0x60000BB0
    // 0x60002878: addiu       $a0, $zero, 0x8D
    ctx->r4 = ADD32(0, 0X8D);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_1;
    // 0x60002878: addiu       $a0, $zero, 0x8D
    ctx->r4 = ADD32(0, 0X8D);
    after_1:
    // 0x6000287C: bne         $v0, $zero, L_6000288C
    if (ctx->r2 != 0) {
        // 0x60002880: nop
    
            goto L_6000288C;
    }
    // 0x60002880: nop

    // 0x60002884: jal         0x60000A60
    // 0x60002888: addiu       $a0, $zero, 0xAD3
    ctx->r4 = ADD32(0, 0XAD3);
    ovl_stage_world6_A60(rdram, ctx);
        goto after_2;
    // 0x60002888: addiu       $a0, $zero, 0xAD3
    ctx->r4 = ADD32(0, 0XAD3);
    after_2:
L_6000288C:
    // 0x6000288C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002890: addiu       $a0, $a0, 0x25A0
    ctx->r4 = ADD32(ctx->r4, 0X25A0);
    // 0x60002894: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60002898: addiu       $a2, $zero, 0x2400
    ctx->r6 = ADD32(0, 0X2400);
    // 0x6000289C: jal         0x60000994
    // 0x600028A0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world6_994(rdram, ctx);
        goto after_3;
    // 0x600028A0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x600028A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600028A8:
    // 0x600028A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600028AC: jr          $ra
    // 0x600028B0: nop

    return;
    // 0x600028B0: nop

;}
RECOMP_FUNC void ovl_stage_world6_28B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600028B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600028B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600028BC: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    // 0x600028C0: jal         0x60000E80
    // 0x600028C4: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    ovl_stage_world6_E80(rdram, ctx);
        goto after_0;
    // 0x600028C4: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    after_0:
    // 0x600028C8: jal         0x60000A60
    // 0x600028CC: addiu       $a0, $zero, 0xA82
    ctx->r4 = ADD32(0, 0XA82);
    ovl_stage_world6_A60(rdram, ctx);
        goto after_1;
    // 0x600028CC: addiu       $a0, $zero, 0xA82
    ctx->r4 = ADD32(0, 0XA82);
    after_1:
    // 0x600028D0: jal         0x600009C4
    // 0x600028D4: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    ovl_stage_world6_9C4(rdram, ctx);
        goto after_2;
    // 0x600028D4: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_2:
    // 0x600028D8: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    // 0x600028DC: jal         0x60000E68
    // 0x600028E0: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    ovl_stage_world6_E68(rdram, ctx);
        goto after_3;
    // 0x600028E0: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    after_3:
    // 0x600028E4: jal         0x600009C4
    // 0x600028E8: addiu       $a0, $zero, 0x50
    ctx->r4 = ADD32(0, 0X50);
    ovl_stage_world6_9C4(rdram, ctx);
        goto after_4;
    // 0x600028E8: addiu       $a0, $zero, 0x50
    ctx->r4 = ADD32(0, 0X50);
    after_4:
    // 0x600028EC: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x600028F0: jal         0x60000E68
    // 0x600028F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world6_E68(rdram, ctx);
        goto after_5;
    // 0x600028F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x600028F8: jal         0x600009AC
    // 0x600028FC: nop

    ovl_stage_world6_9AC(rdram, ctx);
        goto after_6;
    // 0x600028FC: nop

    after_6:
    // 0x60002900: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002904: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60002908: jr          $ra
    // 0x6000290C: nop

    return;
    // 0x6000290C: nop

;}
RECOMP_FUNC void ovl_stage_world6_2910(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002910: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x60002914: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60002918: jal         0x60000C1C
    // 0x6000291C: nop

    ovl_stage_world6_C1C(rdram, ctx);
        goto after_0;
    // 0x6000291C: nop

    after_0:
    // 0x60002920: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x60002924: jal         0x600009C4
    // 0x60002928: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    ovl_stage_world6_9C4(rdram, ctx);
        goto after_1;
    // 0x60002928: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_1:
    // 0x6000292C: jal         0x60000244
    // 0x60002930: addiu       $a0, $zero, 0x18E
    ctx->r4 = ADD32(0, 0X18E);
    ovl_stage_world6_244(rdram, ctx);
        goto after_2;
    // 0x60002930: addiu       $a0, $zero, 0x18E
    ctx->r4 = ADD32(0, 0X18E);
    after_2:
    // 0x60002934: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x60002938: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x6000293C: lw          $t7, 0x14($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X14);
    // 0x60002940: nop

    // 0x60002944: bne         $t7, $at, L_6000295C
    if (ctx->r15 != ctx->r1) {
        // 0x60002948: nop
    
            goto L_6000295C;
    }
    // 0x60002948: nop

    // 0x6000294C: jal         0x600009C4
    // 0x60002950: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    ovl_stage_world6_9C4(rdram, ctx);
        goto after_3;
    // 0x60002950: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_3:
    // 0x60002954: jal         0x60000244
    // 0x60002958: addiu       $a0, $zero, 0x19E
    ctx->r4 = ADD32(0, 0X19E);
    ovl_stage_world6_244(rdram, ctx);
        goto after_4;
    // 0x60002958: addiu       $a0, $zero, 0x19E
    ctx->r4 = ADD32(0, 0X19E);
    after_4:
L_6000295C:
    // 0x6000295C: jal         0x600009AC
    // 0x60002960: nop

    ovl_stage_world6_9AC(rdram, ctx);
        goto after_5;
    // 0x60002960: nop

    after_5:
    // 0x60002964: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002968: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x6000296C: jr          $ra
    // 0x60002970: nop

    return;
    // 0x60002970: nop

;}
RECOMP_FUNC void ovl_stage_world6_2974(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002974: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60002978: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x6000297C: jal         0x600009C4
    // 0x60002980: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    ovl_stage_world6_9C4(rdram, ctx);
        goto after_0;
    // 0x60002980: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_0:
    // 0x60002984: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    // 0x60002988: jal         0x60000E68
    // 0x6000298C: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    ovl_stage_world6_E68(rdram, ctx);
        goto after_1;
    // 0x6000298C: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    after_1:
    // 0x60002990: jal         0x600009AC
    // 0x60002994: nop

    ovl_stage_world6_9AC(rdram, ctx);
        goto after_2;
    // 0x60002994: nop

    after_2:
    // 0x60002998: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000299C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600029A0: jr          $ra
    // 0x600029A4: nop

    return;
    // 0x600029A4: nop

;}
RECOMP_FUNC void ovl_stage_world6_29A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600029A8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x600029AC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x600029B0: jal         0x60000C1C
    // 0x600029B4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    ovl_stage_world6_C1C(rdram, ctx);
        goto after_0;
    // 0x600029B4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x600029B8: lw          $t6, 0x8($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X8);
    // 0x600029BC: addiu       $at, $zero, 0x881
    ctx->r1 = ADD32(0, 0X881);
    // 0x600029C0: bne         $t6, $at, L_600029E0
    if (ctx->r14 != ctx->r1) {
        // 0x600029C4: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_600029E0;
    }
    // 0x600029C4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x600029C8: lw          $t7, 0xC($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XC);
    // 0x600029CC: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x600029D0: bne         $t7, $at, L_600029E0
    if (ctx->r15 != ctx->r1) {
        // 0x600029D4: nop
    
            goto L_600029E0;
    }
    // 0x600029D4: nop

    // 0x600029D8: jal         0x6000025C
    // 0x600029DC: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    ovl_stage_world6_25C(rdram, ctx);
        goto after_1;
    // 0x600029DC: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    after_1:
L_600029E0:
    // 0x600029E0: jal         0x60000BB0
    // 0x600029E4: addiu       $a0, $zero, 0x101
    ctx->r4 = ADD32(0, 0X101);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_2;
    // 0x600029E4: addiu       $a0, $zero, 0x101
    ctx->r4 = ADD32(0, 0X101);
    after_2:
    // 0x600029E8: bne         $v0, $zero, L_60002B1C
    if (ctx->r2 != 0) {
        // 0x600029EC: addiu       $t8, $zero, 0xC
        ctx->r24 = ADD32(0, 0XC);
            goto L_60002B1C;
    }
    // 0x600029EC: addiu       $t8, $zero, 0xC
    ctx->r24 = ADD32(0, 0XC);
    // 0x600029F0: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x600029F4: addiu       $at, $zero, 0x873
    ctx->r1 = ADD32(0, 0X873);
    // 0x600029F8: bne         $v0, $at, L_60002A1C
    if (ctx->r2 != ctx->r1) {
        // 0x600029FC: addiu       $at, $zero, 0x874
        ctx->r1 = ADD32(0, 0X874);
            goto L_60002A1C;
    }
    // 0x600029FC: addiu       $at, $zero, 0x874
    ctx->r1 = ADD32(0, 0X874);
    // 0x60002A00: lw          $t8, 0xC($s0)
    ctx->r24 = MEM_W(ctx->r16, 0XC);
    // 0x60002A04: addiu       $t9, $zero, 0x11
    ctx->r25 = ADD32(0, 0X11);
    // 0x60002A08: bne         $t8, $zero, L_60002A1C
    if (ctx->r24 != 0) {
        // 0x60002A0C: addiu       $at, $zero, 0x874
        ctx->r1 = ADD32(0, 0X874);
            goto L_60002A1C;
    }
    // 0x60002A0C: addiu       $at, $zero, 0x874
    ctx->r1 = ADD32(0, 0X874);
    // 0x60002A10: b           L_60002B20
    // 0x60002A14: sw          $t9, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r25;
        goto L_60002B20;
    // 0x60002A14: sw          $t9, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r25;
    // 0x60002A18: addiu       $at, $zero, 0x874
    ctx->r1 = ADD32(0, 0X874);
L_60002A1C:
    // 0x60002A1C: bne         $v0, $at, L_60002AE4
    if (ctx->r2 != ctx->r1) {
        // 0x60002A20: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_60002AE4;
    }
    // 0x60002A20: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002A24: lw          $v1, 0x14($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X14);
    // 0x60002A28: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x60002A2C: bne         $v1, $at, L_60002A8C
    if (ctx->r3 != ctx->r1) {
        // 0x60002A30: addiu       $t0, $v1, 0x1
        ctx->r8 = ADD32(ctx->r3, 0X1);
            goto L_60002A8C;
    }
    // 0x60002A30: addiu       $t0, $v1, 0x1
    ctx->r8 = ADD32(ctx->r3, 0X1);
    // 0x60002A34: sw          $t0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r8;
    // 0x60002A38: jal         0x60000B98
    // 0x60002A3C: addiu       $a0, $zero, 0x101
    ctx->r4 = ADD32(0, 0X101);
    ovl_stage_world6_B98(rdram, ctx);
        goto after_3;
    // 0x60002A3C: addiu       $a0, $zero, 0x101
    ctx->r4 = ADD32(0, 0X101);
    after_3:
    // 0x60002A40: jal         0x60000BB0
    // 0x60002A44: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_4;
    // 0x60002A44: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    after_4:
    // 0x60002A48: beq         $v0, $zero, L_60002A70
    if (ctx->r2 == 0) {
        // 0x60002A4C: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_60002A70;
    }
    // 0x60002A4C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002A50: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002A54: addiu       $a0, $a0, 0x2910
    ctx->r4 = ADD32(ctx->r4, 0X2910);
    // 0x60002A58: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60002A5C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60002A60: jal         0x60000994
    // 0x60002A64: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world6_994(rdram, ctx);
        goto after_5;
    // 0x60002A64: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
    // 0x60002A68: b           L_60002B24
    // 0x60002A6C: lw          $t9, 0x8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X8);
        goto L_60002B24;
    // 0x60002A6C: lw          $t9, 0x8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X8);
L_60002A70:
    // 0x60002A70: addiu       $a0, $a0, 0x28B4
    ctx->r4 = ADD32(ctx->r4, 0X28B4);
    // 0x60002A74: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60002A78: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60002A7C: jal         0x60000994
    // 0x60002A80: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world6_994(rdram, ctx);
        goto after_6;
    // 0x60002A80: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_6:
    // 0x60002A84: b           L_60002B24
    // 0x60002A88: lw          $t9, 0x8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X8);
        goto L_60002B24;
    // 0x60002A88: lw          $t9, 0x8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X8);
L_60002A8C:
    // 0x60002A8C: lw          $t1, 0xC($s0)
    ctx->r9 = MEM_W(ctx->r16, 0XC);
    // 0x60002A90: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x60002A94: bne         $t1, $at, L_60002AA8
    if (ctx->r9 != ctx->r1) {
        // 0x60002A98: nop
    
            goto L_60002AA8;
    }
    // 0x60002A98: nop

    // 0x60002A9C: jal         0x60000BB0
    // 0x60002AA0: addiu       $a0, $zero, 0x182
    ctx->r4 = ADD32(0, 0X182);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_7;
    // 0x60002AA0: addiu       $a0, $zero, 0x182
    ctx->r4 = ADD32(0, 0X182);
    after_7:
    // 0x60002AA4: beq         $v0, $zero, L_60002AC0
    if (ctx->r2 == 0) {
        // 0x60002AA8: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_60002AC0;
    }
L_60002AA8:
    // 0x60002AA8: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002AAC: addiu       $a0, $a0, 0x2910
    ctx->r4 = ADD32(ctx->r4, 0X2910);
    // 0x60002AB0: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60002AB4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60002AB8: jal         0x60000994
    // 0x60002ABC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world6_994(rdram, ctx);
        goto after_8;
    // 0x60002ABC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_8:
L_60002AC0:
    // 0x60002AC0: lw          $t2, 0x14($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X14);
    // 0x60002AC4: nop

    // 0x60002AC8: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x60002ACC: slti        $at, $t3, 0x18
    ctx->r1 = SIGNED(ctx->r11) < 0X18 ? 1 : 0;
    // 0x60002AD0: bne         $at, $zero, L_60002B20
    if (ctx->r1 != 0) {
        // 0x60002AD4: sw          $t3, 0x14($s0)
        MEM_W(0X14, ctx->r16) = ctx->r11;
            goto L_60002B20;
    }
    // 0x60002AD4: sw          $t3, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r11;
    // 0x60002AD8: addiu       $t4, $t3, -0x18
    ctx->r12 = ADD32(ctx->r11, -0X18);
    // 0x60002ADC: b           L_60002B20
    // 0x60002AE0: sw          $t4, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r12;
        goto L_60002B20;
    // 0x60002AE0: sw          $t4, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r12;
L_60002AE4:
    // 0x60002AE4: addiu       $a0, $a0, 0x2910
    ctx->r4 = ADD32(ctx->r4, 0X2910);
    // 0x60002AE8: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60002AEC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60002AF0: jal         0x60000994
    // 0x60002AF4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world6_994(rdram, ctx);
        goto after_9;
    // 0x60002AF4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_9:
    // 0x60002AF8: lw          $t5, 0x14($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X14);
    // 0x60002AFC: nop

    // 0x60002B00: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x60002B04: slti        $at, $t6, 0x18
    ctx->r1 = SIGNED(ctx->r14) < 0X18 ? 1 : 0;
    // 0x60002B08: bne         $at, $zero, L_60002B20
    if (ctx->r1 != 0) {
        // 0x60002B0C: sw          $t6, 0x14($s0)
        MEM_W(0X14, ctx->r16) = ctx->r14;
            goto L_60002B20;
    }
    // 0x60002B0C: sw          $t6, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r14;
    // 0x60002B10: addiu       $t7, $t6, -0x18
    ctx->r15 = ADD32(ctx->r14, -0X18);
    // 0x60002B14: b           L_60002B20
    // 0x60002B18: sw          $t7, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r15;
        goto L_60002B20;
    // 0x60002B18: sw          $t7, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r15;
L_60002B1C:
    // 0x60002B1C: sw          $t8, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r24;
L_60002B20:
    // 0x60002B20: lw          $t9, 0x8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X8);
L_60002B24:
    // 0x60002B24: addiu       $at, $zero, 0x874
    ctx->r1 = ADD32(0, 0X874);
    // 0x60002B28: bne         $t9, $at, L_60002B90
    if (ctx->r25 != ctx->r1) {
        // 0x60002B2C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_60002B90;
    }
    // 0x60002B2C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x60002B30: lw          $a1, 0x14($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X14);
    // 0x60002B34: jal         0x60000E80
    // 0x60002B38: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    ovl_stage_world6_E80(rdram, ctx);
        goto after_10;
    // 0x60002B38: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_10:
    // 0x60002B3C: lw          $t0, 0xC($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC);
    // 0x60002B40: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x60002B44: bne         $t0, $at, L_60002B90
    if (ctx->r8 != ctx->r1) {
        // 0x60002B48: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_60002B90;
    }
    // 0x60002B48: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x60002B4C: jal         0x60000BB0
    // 0x60002B50: addiu       $a0, $zero, 0x182
    ctx->r4 = ADD32(0, 0X182);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_11;
    // 0x60002B50: addiu       $a0, $zero, 0x182
    ctx->r4 = ADD32(0, 0X182);
    after_11:
    // 0x60002B54: bne         $v0, $zero, L_60002B8C
    if (ctx->r2 != 0) {
        // 0x60002B58: addiu       $a0, $zero, 0xF
        ctx->r4 = ADD32(0, 0XF);
            goto L_60002B8C;
    }
    // 0x60002B58: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    // 0x60002B5C: jal         0x60000E80
    // 0x60002B60: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    ovl_stage_world6_E80(rdram, ctx);
        goto after_12;
    // 0x60002B60: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    after_12:
    // 0x60002B64: jal         0x60000B98
    // 0x60002B68: addiu       $a0, $zero, 0x182
    ctx->r4 = ADD32(0, 0X182);
    ovl_stage_world6_B98(rdram, ctx);
        goto after_13;
    // 0x60002B68: addiu       $a0, $zero, 0x182
    ctx->r4 = ADD32(0, 0X182);
    after_13:
    // 0x60002B6C: jal         0x60000A60
    // 0x60002B70: addiu       $a0, $zero, 0xA88
    ctx->r4 = ADD32(0, 0XA88);
    ovl_stage_world6_A60(rdram, ctx);
        goto after_14;
    // 0x60002B70: addiu       $a0, $zero, 0xA88
    ctx->r4 = ADD32(0, 0XA88);
    after_14:
    // 0x60002B74: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002B78: addiu       $a0, $a0, 0x2974
    ctx->r4 = ADD32(ctx->r4, 0X2974);
    // 0x60002B7C: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60002B80: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60002B84: jal         0x60000994
    // 0x60002B88: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world6_994(rdram, ctx);
        goto after_15;
    // 0x60002B88: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_15:
L_60002B8C:
    // 0x60002B8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_60002B90:
    // 0x60002B90: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x60002B94: jr          $ra
    // 0x60002B98: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x60002B98: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_stage_world6_2B9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002B9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60002BA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60002BA4: jal         0x600009C4
    // 0x60002BA8: addiu       $a0, $zero, 0xF0
    ctx->r4 = ADD32(0, 0XF0);
    ovl_stage_world6_9C4(rdram, ctx);
        goto after_0;
    // 0x60002BA8: addiu       $a0, $zero, 0xF0
    ctx->r4 = ADD32(0, 0XF0);
    after_0:
    // 0x60002BAC: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x60002BB0: jal         0x60000E68
    // 0x60002BB4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world6_E68(rdram, ctx);
        goto after_1;
    // 0x60002BB4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x60002BB8: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x60002BBC: jal         0x60000E68
    // 0x60002BC0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world6_E68(rdram, ctx);
        goto after_2;
    // 0x60002BC0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x60002BC4: jal         0x60000BA4
    // 0x60002BC8: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    ovl_stage_world6_BA4(rdram, ctx);
        goto after_3;
    // 0x60002BC8: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    after_3:
    // 0x60002BCC: jal         0x600009AC
    // 0x60002BD0: nop

    ovl_stage_world6_9AC(rdram, ctx);
        goto after_4;
    // 0x60002BD0: nop

    after_4:
    // 0x60002BD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002BD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60002BDC: jr          $ra
    // 0x60002BE0: nop

    return;
    // 0x60002BE0: nop

;}
RECOMP_FUNC void ovl_stage_world6_2BE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002BE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60002BE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60002BEC: jal         0x60000BB0
    // 0x60002BF0: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_0;
    // 0x60002BF0: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    after_0:
    // 0x60002BF4: bne         $v0, $zero, L_60002C30
    if (ctx->r2 != 0) {
        // 0x60002BF8: addiu       $a0, $zero, 0x6
        ctx->r4 = ADD32(0, 0X6);
            goto L_60002C30;
    }
    // 0x60002BF8: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x60002BFC: jal         0x60000E68
    // 0x60002C00: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_stage_world6_E68(rdram, ctx);
        goto after_1;
    // 0x60002C00: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x60002C04: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x60002C08: jal         0x60000E68
    // 0x60002C0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world6_E68(rdram, ctx);
        goto after_2;
    // 0x60002C0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x60002C10: jal         0x60000B98
    // 0x60002C14: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    ovl_stage_world6_B98(rdram, ctx);
        goto after_3;
    // 0x60002C14: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    after_3:
    // 0x60002C18: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002C1C: addiu       $a0, $a0, 0x2B9C
    ctx->r4 = ADD32(ctx->r4, 0X2B9C);
    // 0x60002C20: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60002C24: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60002C28: jal         0x60000994
    // 0x60002C2C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world6_994(rdram, ctx);
        goto after_4;
    // 0x60002C2C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
L_60002C30:
    // 0x60002C30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002C34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60002C38: jr          $ra
    // 0x60002C3C: nop

    return;
    // 0x60002C3C: nop

;}
RECOMP_FUNC void ovl_stage_world6_2C40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002C40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60002C44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60002C48: jal         0x60000A60
    // 0x60002C4C: addiu       $a0, $zero, 0xC1D
    ctx->r4 = ADD32(0, 0XC1D);
    ovl_stage_world6_A60(rdram, ctx);
        goto after_0;
    // 0x60002C4C: addiu       $a0, $zero, 0xC1D
    ctx->r4 = ADD32(0, 0XC1D);
    after_0:
    // 0x60002C50: jal         0x60001120
    // 0x60002C54: nop

    ovl_stage_world6_1120(rdram, ctx);
        goto after_1;
    // 0x60002C54: nop

    after_1:
    // 0x60002C58: jal         0x60000BA4
    // 0x60002C5C: addiu       $a0, $zero, 0x12D
    ctx->r4 = ADD32(0, 0X12D);
    ovl_stage_world6_BA4(rdram, ctx);
        goto after_2;
    // 0x60002C5C: addiu       $a0, $zero, 0x12D
    ctx->r4 = ADD32(0, 0X12D);
    after_2:
    // 0x60002C60: jal         0x600009AC
    // 0x60002C64: nop

    ovl_stage_world6_9AC(rdram, ctx);
        goto after_3;
    // 0x60002C64: nop

    after_3:
    // 0x60002C68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002C6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60002C70: jr          $ra
    // 0x60002C74: nop

    return;
    // 0x60002C74: nop

;}
RECOMP_FUNC void ovl_stage_world6_2C78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002C78: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60002C7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60002C80: jal         0x60000BB0
    // 0x60002C84: addiu       $a0, $zero, 0x8D
    ctx->r4 = ADD32(0, 0X8D);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_0;
    // 0x60002C84: addiu       $a0, $zero, 0x8D
    ctx->r4 = ADD32(0, 0X8D);
    after_0:
    // 0x60002C88: beq         $v0, $zero, L_60002CB8
    if (ctx->r2 == 0) {
        // 0x60002C8C: nop
    
            goto L_60002CB8;
    }
    // 0x60002C8C: nop

    // 0x60002C90: jal         0x60000BB0
    // 0x60002C94: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_1;
    // 0x60002C94: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    after_1:
    // 0x60002C98: bne         $v0, $zero, L_60002CB8
    if (ctx->r2 != 0) {
        // 0x60002C9C: addiu       $a0, $zero, 0xE
        ctx->r4 = ADD32(0, 0XE);
            goto L_60002CB8;
    }
    // 0x60002C9C: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x60002CA0: jal         0x60000E68
    // 0x60002CA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world6_E68(rdram, ctx);
        goto after_2;
    // 0x60002CA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x60002CA8: jal         0x60000B98
    // 0x60002CAC: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    ovl_stage_world6_B98(rdram, ctx);
        goto after_3;
    // 0x60002CAC: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    after_3:
    // 0x60002CB0: b           L_60002CFC
    // 0x60002CB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60002CFC;
    // 0x60002CB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60002CB8:
    // 0x60002CB8: jal         0x60000BB0
    // 0x60002CBC: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_4;
    // 0x60002CBC: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    after_4:
    // 0x60002CC0: bne         $v0, $zero, L_60002CFC
    if (ctx->r2 != 0) {
        // 0x60002CC4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60002CFC;
    }
    // 0x60002CC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002CC8: jal         0x60000BB0
    // 0x60002CCC: addiu       $a0, $zero, 0x12D
    ctx->r4 = ADD32(0, 0X12D);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_5;
    // 0x60002CCC: addiu       $a0, $zero, 0x12D
    ctx->r4 = ADD32(0, 0X12D);
    after_5:
    // 0x60002CD0: bne         $v0, $zero, L_60002CFC
    if (ctx->r2 != 0) {
        // 0x60002CD4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60002CFC;
    }
    // 0x60002CD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002CD8: jal         0x60000B98
    // 0x60002CDC: addiu       $a0, $zero, 0x12D
    ctx->r4 = ADD32(0, 0X12D);
    ovl_stage_world6_B98(rdram, ctx);
        goto after_6;
    // 0x60002CDC: addiu       $a0, $zero, 0x12D
    ctx->r4 = ADD32(0, 0X12D);
    after_6:
    // 0x60002CE0: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002CE4: addiu       $a0, $a0, 0x2C40
    ctx->r4 = ADD32(ctx->r4, 0X2C40);
    // 0x60002CE8: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60002CEC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60002CF0: jal         0x60000994
    // 0x60002CF4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world6_994(rdram, ctx);
        goto after_7;
    // 0x60002CF4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_7:
    // 0x60002CF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60002CFC:
    // 0x60002CFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60002D00: jr          $ra
    // 0x60002D04: nop

    return;
    // 0x60002D04: nop

;}
RECOMP_FUNC void ovl_stage_world6_2D08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002D08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60002D0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60002D10: jal         0x60000BB0
    // 0x60002D14: addiu       $a0, $zero, 0x184
    ctx->r4 = ADD32(0, 0X184);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_0;
    // 0x60002D14: addiu       $a0, $zero, 0x184
    ctx->r4 = ADD32(0, 0X184);
    after_0:
    // 0x60002D18: bne         $v0, $zero, L_60002D6C
    if (ctx->r2 != 0) {
        // 0x60002D1C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60002D6C;
    }
    // 0x60002D1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002D20: jal         0x60000BB0
    // 0x60002D24: addiu       $a0, $zero, 0x102
    ctx->r4 = ADD32(0, 0X102);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_1;
    // 0x60002D24: addiu       $a0, $zero, 0x102
    ctx->r4 = ADD32(0, 0X102);
    after_1:
    // 0x60002D28: bne         $v0, $zero, L_60002D38
    if (ctx->r2 != 0) {
        // 0x60002D2C: nop
    
            goto L_60002D38;
    }
    // 0x60002D2C: nop

    // 0x60002D30: jal         0x60000B98
    // 0x60002D34: addiu       $a0, $zero, 0x102
    ctx->r4 = ADD32(0, 0X102);
    ovl_stage_world6_B98(rdram, ctx);
        goto after_2;
    // 0x60002D34: addiu       $a0, $zero, 0x102
    ctx->r4 = ADD32(0, 0X102);
    after_2:
L_60002D38:
    // 0x60002D38: jal         0x60000BB0
    // 0x60002D3C: addiu       $a0, $zero, 0x102
    ctx->r4 = ADD32(0, 0X102);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_3;
    // 0x60002D3C: addiu       $a0, $zero, 0x102
    ctx->r4 = ADD32(0, 0X102);
    after_3:
    // 0x60002D40: beq         $v0, $zero, L_60002D6C
    if (ctx->r2 == 0) {
        // 0x60002D44: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60002D6C;
    }
    // 0x60002D44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002D48: jal         0x60000BB0
    // 0x60002D4C: addiu       $a0, $zero, 0x103
    ctx->r4 = ADD32(0, 0X103);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_4;
    // 0x60002D4C: addiu       $a0, $zero, 0x103
    ctx->r4 = ADD32(0, 0X103);
    after_4:
    // 0x60002D50: beq         $v0, $zero, L_60002D68
    if (ctx->r2 == 0) {
        // 0x60002D54: addiu       $a0, $zero, 0x6
        ctx->r4 = ADD32(0, 0X6);
            goto L_60002D68;
    }
    // 0x60002D54: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x60002D58: jal         0x60000E68
    // 0x60002D5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world6_E68(rdram, ctx);
        goto after_5;
    // 0x60002D5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x60002D60: jal         0x60000B98
    // 0x60002D64: addiu       $a0, $zero, 0x184
    ctx->r4 = ADD32(0, 0X184);
    ovl_stage_world6_B98(rdram, ctx);
        goto after_6;
    // 0x60002D64: addiu       $a0, $zero, 0x184
    ctx->r4 = ADD32(0, 0X184);
    after_6:
L_60002D68:
    // 0x60002D68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60002D6C:
    // 0x60002D6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60002D70: jr          $ra
    // 0x60002D74: nop

    return;
    // 0x60002D74: nop

;}
RECOMP_FUNC void ovl_stage_world6_2D78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002D78: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60002D7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60002D80: jal         0x60000BB0
    // 0x60002D84: addiu       $a0, $zero, 0x184
    ctx->r4 = ADD32(0, 0X184);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_0;
    // 0x60002D84: addiu       $a0, $zero, 0x184
    ctx->r4 = ADD32(0, 0X184);
    after_0:
    // 0x60002D88: bne         $v0, $zero, L_60002DDC
    if (ctx->r2 != 0) {
        // 0x60002D8C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60002DDC;
    }
    // 0x60002D8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002D90: jal         0x60000BB0
    // 0x60002D94: addiu       $a0, $zero, 0x103
    ctx->r4 = ADD32(0, 0X103);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_1;
    // 0x60002D94: addiu       $a0, $zero, 0x103
    ctx->r4 = ADD32(0, 0X103);
    after_1:
    // 0x60002D98: bne         $v0, $zero, L_60002DA8
    if (ctx->r2 != 0) {
        // 0x60002D9C: nop
    
            goto L_60002DA8;
    }
    // 0x60002D9C: nop

    // 0x60002DA0: jal         0x60000B98
    // 0x60002DA4: addiu       $a0, $zero, 0x103
    ctx->r4 = ADD32(0, 0X103);
    ovl_stage_world6_B98(rdram, ctx);
        goto after_2;
    // 0x60002DA4: addiu       $a0, $zero, 0x103
    ctx->r4 = ADD32(0, 0X103);
    after_2:
L_60002DA8:
    // 0x60002DA8: jal         0x60000BB0
    // 0x60002DAC: addiu       $a0, $zero, 0x102
    ctx->r4 = ADD32(0, 0X102);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_3;
    // 0x60002DAC: addiu       $a0, $zero, 0x102
    ctx->r4 = ADD32(0, 0X102);
    after_3:
    // 0x60002DB0: beq         $v0, $zero, L_60002DDC
    if (ctx->r2 == 0) {
        // 0x60002DB4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60002DDC;
    }
    // 0x60002DB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002DB8: jal         0x60000BB0
    // 0x60002DBC: addiu       $a0, $zero, 0x103
    ctx->r4 = ADD32(0, 0X103);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_4;
    // 0x60002DBC: addiu       $a0, $zero, 0x103
    ctx->r4 = ADD32(0, 0X103);
    after_4:
    // 0x60002DC0: beq         $v0, $zero, L_60002DD8
    if (ctx->r2 == 0) {
        // 0x60002DC4: addiu       $a0, $zero, 0x6
        ctx->r4 = ADD32(0, 0X6);
            goto L_60002DD8;
    }
    // 0x60002DC4: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x60002DC8: jal         0x60000E68
    // 0x60002DCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world6_E68(rdram, ctx);
        goto after_5;
    // 0x60002DCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x60002DD0: jal         0x60000B98
    // 0x60002DD4: addiu       $a0, $zero, 0x184
    ctx->r4 = ADD32(0, 0X184);
    ovl_stage_world6_B98(rdram, ctx);
        goto after_6;
    // 0x60002DD4: addiu       $a0, $zero, 0x184
    ctx->r4 = ADD32(0, 0X184);
    after_6:
L_60002DD8:
    // 0x60002DD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60002DDC:
    // 0x60002DDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60002DE0: jr          $ra
    // 0x60002DE4: nop

    return;
    // 0x60002DE4: nop

;}
RECOMP_FUNC void ovl_stage_world6_2DE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002DE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60002DEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60002DF0: jal         0x60000244
    // 0x60002DF4: addiu       $a0, $zero, 0x193
    ctx->r4 = ADD32(0, 0X193);
    ovl_stage_world6_244(rdram, ctx);
        goto after_0;
    // 0x60002DF4: addiu       $a0, $zero, 0x193
    ctx->r4 = ADD32(0, 0X193);
    after_0:
    // 0x60002DF8: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x60002DFC: jal         0x60000E80
    // 0x60002E00: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world6_E80(rdram, ctx);
        goto after_1;
    // 0x60002E00: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x60002E04: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x60002E08: jal         0x600006D0
    // 0x60002E0C: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    ovl_stage_world6_6D0(rdram, ctx);
        goto after_2;
    // 0x60002E0C: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    after_2:
    // 0x60002E10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002E14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60002E18: jr          $ra
    // 0x60002E1C: nop

    return;
    // 0x60002E1C: nop

;}
RECOMP_FUNC void ovl_stage_world6_2E20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002E20: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x60002E24: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x60002E28: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x60002E2C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x60002E30: lui         $s4, 0x6000
    ctx->r20 = S32(0X6000 << 16);
    // 0x60002E34: lui         $s5, 0x6000
    ctx->r21 = S32(0X6000 << 16);
    // 0x60002E38: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x60002E3C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x60002E40: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x60002E44: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x60002E48: addiu       $s5, $s5, 0x5C6C
    ctx->r21 = ADD32(ctx->r21, 0X5C6C);
    // 0x60002E4C: addiu       $s4, $s4, 0x5C5C
    ctx->r20 = ADD32(ctx->r20, 0X5C5C);
    // 0x60002E50: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
L_60002E54:
    // 0x60002E54: lui         $s1, 0x6000
    ctx->r17 = S32(0X6000 << 16);
    // 0x60002E58: addiu       $s1, $s1, 0x5C4C
    ctx->r17 = ADD32(ctx->r17, 0X5C4C);
    // 0x60002E5C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_60002E60:
    // 0x60002E60: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x60002E64: nop

    // 0x60002E68: beq         $s2, $a0, L_60002E7C
    if (ctx->r18 == ctx->r4) {
        // 0x60002E6C: addu        $s0, $s4, $s3
        ctx->r16 = ADD32(ctx->r20, ctx->r19);
            goto L_60002E7C;
    }
    // 0x60002E6C: addu        $s0, $s4, $s3
    ctx->r16 = ADD32(ctx->r20, ctx->r19);
    // 0x60002E70: jal         0x60000E68
    // 0x60002E74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world6_E68(rdram, ctx);
        goto after_0;
    // 0x60002E74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x60002E78: addu        $s0, $s4, $s3
    ctx->r16 = ADD32(ctx->r20, ctx->r19);
L_60002E7C:
    // 0x60002E7C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x60002E80: nop

    // 0x60002E84: beq         $s2, $a0, L_60002E94
    if (ctx->r18 == ctx->r4) {
        // 0x60002E88: nop
    
            goto L_60002E94;
    }
    // 0x60002E88: nop

    // 0x60002E8C: jal         0x60000E68
    // 0x60002E90: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world6_E68(rdram, ctx);
        goto after_1;
    // 0x60002E90: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_60002E94:
    // 0x60002E94: jal         0x600009C4
    // 0x60002E98: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    ovl_stage_world6_9C4(rdram, ctx);
        goto after_2;
    // 0x60002E98: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    after_2:
    // 0x60002E9C: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x60002EA0: nop

    // 0x60002EA4: beq         $s2, $a0, L_60002EB4
    if (ctx->r18 == ctx->r4) {
        // 0x60002EA8: nop
    
            goto L_60002EB4;
    }
    // 0x60002EA8: nop

    // 0x60002EAC: jal         0x60000E68
    // 0x60002EB0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world6_E68(rdram, ctx);
        goto after_3;
    // 0x60002EB0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
L_60002EB4:
    // 0x60002EB4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x60002EB8: nop

    // 0x60002EBC: beq         $s2, $a0, L_60002ECC
    if (ctx->r18 == ctx->r4) {
        // 0x60002EC0: nop
    
            goto L_60002ECC;
    }
    // 0x60002EC0: nop

    // 0x60002EC4: jal         0x60000E68
    // 0x60002EC8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world6_E68(rdram, ctx);
        goto after_4;
    // 0x60002EC8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
L_60002ECC:
    // 0x60002ECC: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x60002ED0: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x60002ED4: bne         $s0, $s5, L_60002E60
    if (ctx->r16 != ctx->r21) {
        // 0x60002ED8: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_60002E60;
    }
    // 0x60002ED8: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x60002EDC: jal         0x600009D0
    // 0x60002EE0: nop

    ovl_stage_world6_9D0(rdram, ctx);
        goto after_5;
    // 0x60002EE0: nop

    after_5:
    // 0x60002EE4: b           L_60002E54
    // 0x60002EE8: nop

        goto L_60002E54;
    // 0x60002EE8: nop

    // 0x60002EEC: nop

    // 0x60002EF0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x60002EF4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x60002EF8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x60002EFC: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x60002F00: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x60002F04: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x60002F08: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x60002F0C: jr          $ra
    // 0x60002F10: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x60002F10: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_stage_world6_2F14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002F14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60002F18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60002F1C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002F20: addiu       $a0, $a0, 0x2E20
    ctx->r4 = ADD32(ctx->r4, 0X2E20);
    // 0x60002F24: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60002F28: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60002F2C: jal         0x60000994
    // 0x60002F30: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world6_994(rdram, ctx);
        goto after_0;
    // 0x60002F30: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x60002F34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002F38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60002F3C: jr          $ra
    // 0x60002F40: nop

    return;
    // 0x60002F40: nop

;}
RECOMP_FUNC void ovl_stage_world6_2F44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002F44: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60002F48: addiu       $v0, $v0, 0x5C48
    ctx->r2 = ADD32(ctx->r2, 0X5C48);
    // 0x60002F4C: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x60002F50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60002F54: beq         $t6, $zero, L_60002F80
    if (ctx->r14 == 0) {
        // 0x60002F58: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_60002F80;
    }
    // 0x60002F58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60002F5C: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x60002F60: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x60002F64: jal         0x60000E68
    // 0x60002F68: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world6_E68(rdram, ctx);
        goto after_0;
    // 0x60002F68: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x60002F6C: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x60002F70: jal         0x60000E68
    // 0x60002F74: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world6_E68(rdram, ctx);
        goto after_1;
    // 0x60002F74: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x60002F78: b           L_60002FA4
    // 0x60002F7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60002FA4;
    // 0x60002F7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60002F80:
    // 0x60002F80: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x60002F84: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x60002F88: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x60002F8C: jal         0x60000E68
    // 0x60002F90: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world6_E68(rdram, ctx);
        goto after_2;
    // 0x60002F90: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x60002F94: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x60002F98: jal         0x60000E68
    // 0x60002F9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world6_E68(rdram, ctx);
        goto after_3;
    // 0x60002F9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x60002FA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60002FA4:
    // 0x60002FA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60002FA8: jr          $ra
    // 0x60002FAC: nop

    return;
    // 0x60002FAC: nop

;}
RECOMP_FUNC void ovl_stage_world6_2FB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002FB0: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x60002FB4: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x60002FB8: sw          $s3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r19;
    // 0x60002FBC: sw          $s2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r18;
    // 0x60002FC0: sw          $s1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r17;
    // 0x60002FC4: sw          $s0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r16;
    // 0x60002FC8: swc1        $f29, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x60002FCC: swc1        $f28, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f28.u32l;
    // 0x60002FD0: swc1        $f27, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x60002FD4: swc1        $f26, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f26.u32l;
    // 0x60002FD8: swc1        $f25, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x60002FDC: swc1        $f24, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f24.u32l;
    // 0x60002FE0: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x60002FE4: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x60002FE8: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x60002FEC: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x60002FF0: jal         0x60000E74
    // 0x60002FF4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    ovl_stage_world6_E74(rdram, ctx);
        goto after_0;
    // 0x60002FF4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_0:
    // 0x60002FF8: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x60002FFC: jal         0x600009C4
    // 0x60003000: addiu       $a0, $zero, 0x78
    ctx->r4 = ADD32(0, 0X78);
    ovl_stage_world6_9C4(rdram, ctx);
        goto after_1;
    // 0x60003000: addiu       $a0, $zero, 0x78
    ctx->r4 = ADD32(0, 0X78);
    after_1:
    // 0x60003004: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x60003008: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x6000300C: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x60003010: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x60003014: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60003018: lwc1        $f22, 0x64BC($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X64BC);
    // 0x6000301C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60003020: lwc1        $f20, 0x64C0($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X64C0);
    // 0x60003024: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x60003028: addiu       $s3, $zero, 0x5A
    ctx->r19 = ADD32(0, 0X5A);
    // 0x6000302C: addiu       $s2, $sp, 0x58
    ctx->r18 = ADD32(ctx->r29, 0X58);
    // 0x60003030: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_60003034:
    // 0x60003034: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_60003038:
    // 0x60003038: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x6000303C: jal         0x600006C4
    // 0x60003040: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    ovl_stage_world6_6C4(rdram, ctx);
        goto after_2;
    // 0x60003040: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_2:
    // 0x60003044: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x60003048: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x6000304C: sub.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f20.fl;
    // 0x60003050: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x60003054: swc1        $f6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f6.u32l;
    // 0x60003058: jal         0x600006C4
    // 0x6000305C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    ovl_stage_world6_6C4(rdram, ctx);
        goto after_3;
    // 0x6000305C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_3:
    // 0x60003060: jal         0x600009D0
    // 0x60003064: nop

    ovl_stage_world6_9D0(rdram, ctx);
        goto after_4;
    // 0x60003064: nop

    after_4:
    // 0x60003068: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x6000306C: slti        $at, $s0, 0xF
    ctx->r1 = SIGNED(ctx->r16) < 0XF ? 1 : 0;
    // 0x60003070: bne         $at, $zero, L_60003038
    if (ctx->r1 != 0) {
        // 0x60003074: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_60003038;
    }
    // 0x60003074: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x60003078: swc1        $f24, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f24.u32l;
    // 0x6000307C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x60003080: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x60003084: jal         0x600006C4
    // 0x60003088: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    ovl_stage_world6_6C4(rdram, ctx);
        goto after_5;
    // 0x60003088: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_5:
    // 0x6000308C: jal         0x60000244
    // 0x60003090: addiu       $a0, $zero, 0x191
    ctx->r4 = ADD32(0, 0X191);
    ovl_stage_world6_244(rdram, ctx);
        goto after_6;
    // 0x60003090: addiu       $a0, $zero, 0x191
    ctx->r4 = ADD32(0, 0X191);
    after_6:
    // 0x60003094: mfc1        $a1, $f26
    ctx->r5 = (int32_t)ctx->f26.u32l;
    // 0x60003098: jal         0x60000E20
    // 0x6000309C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    ovl_stage_world6_E20(rdram, ctx);
        goto after_7;
    // 0x6000309C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_7:
    // 0x600030A0: jal         0x600009C4
    // 0x600030A4: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    ovl_stage_world6_9C4(rdram, ctx);
        goto after_8;
    // 0x600030A4: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_8:
    // 0x600030A8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x600030AC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_600030B0:
    // 0x600030B0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x600030B4: jal         0x600006C4
    // 0x600030B8: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    ovl_stage_world6_6C4(rdram, ctx);
        goto after_9;
    // 0x600030B8: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_9:
    // 0x600030BC: lwc1        $f8, 0x5C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x600030C0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x600030C4: add.s       $f10, $f8, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f22.fl;
    // 0x600030C8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x600030CC: swc1        $f10, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f10.u32l;
    // 0x600030D0: jal         0x600006C4
    // 0x600030D4: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    ovl_stage_world6_6C4(rdram, ctx);
        goto after_10;
    // 0x600030D4: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_10:
    // 0x600030D8: jal         0x600009D0
    // 0x600030DC: nop

    ovl_stage_world6_9D0(rdram, ctx);
        goto after_11;
    // 0x600030DC: nop

    after_11:
    // 0x600030E0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x600030E4: bne         $s0, $s3, L_600030B0
    if (ctx->r16 != ctx->r19) {
        // 0x600030E8: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_600030B0;
    }
    // 0x600030E8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x600030EC: swc1        $f28, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f28.u32l;
    // 0x600030F0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x600030F4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x600030F8: jal         0x600006C4
    // 0x600030FC: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    ovl_stage_world6_6C4(rdram, ctx);
        goto after_12;
    // 0x600030FC: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_12:
    // 0x60003100: jal         0x600009C4
    // 0x60003104: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    ovl_stage_world6_9C4(rdram, ctx);
        goto after_13;
    // 0x60003104: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_13:
    // 0x60003108: b           L_60003034
    // 0x6000310C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
        goto L_60003034;
    // 0x6000310C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60003110: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x60003114: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x60003118: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x6000311C: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x60003120: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x60003124: lwc1        $f25, 0x20($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x60003128: lwc1        $f24, 0x24($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X24);
    // 0x6000312C: lwc1        $f27, 0x28($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x60003130: lwc1        $f26, 0x2C($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x60003134: lwc1        $f29, 0x30($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x60003138: lwc1        $f28, 0x34($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X34);
    // 0x6000313C: lw          $s0, 0x3C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X3C);
    // 0x60003140: lw          $s1, 0x40($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X40);
    // 0x60003144: lw          $s2, 0x44($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X44);
    // 0x60003148: lw          $s3, 0x48($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X48);
    // 0x6000314C: jr          $ra
    // 0x60003150: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x60003150: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void ovl_stage_world6_3154(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003154: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x60003158: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x6000315C: jal         0x60000E74
    // 0x60003160: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    ovl_stage_world6_E74(rdram, ctx);
        goto after_0;
    // 0x60003160: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_0:
    // 0x60003164: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60003168: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x6000316C: jal         0x600006C4
    // 0x60003170: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world6_6C4(rdram, ctx);
        goto after_1;
    // 0x60003170: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x60003174: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x60003178: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x6000317C: ori         $t7, $t6, 0x4
    ctx->r15 = ctx->r14 | 0X4;
    // 0x60003180: jal         0x60000E74
    // 0x60003184: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    ovl_stage_world6_E74(rdram, ctx);
        goto after_2;
    // 0x60003184: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    after_2:
    // 0x60003188: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x6000318C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x60003190: jal         0x600006C4
    // 0x60003194: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world6_6C4(rdram, ctx);
        goto after_3;
    // 0x60003194: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_3:
    // 0x60003198: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x6000319C: addiu       $a0, $a0, 0x2FB0
    ctx->r4 = ADD32(ctx->r4, 0X2FB0);
    // 0x600031A0: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x600031A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x600031A8: jal         0x60000994
    // 0x600031AC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world6_994(rdram, ctx);
        goto after_4;
    // 0x600031AC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x600031B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600031B4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x600031B8: jr          $ra
    // 0x600031BC: nop

    return;
    // 0x600031BC: nop

;}
RECOMP_FUNC void ovl_stage_world6_31C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600031C0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x600031C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600031C8: jal         0x60000B98
    // 0x600031CC: addiu       $a0, $zero, 0x130
    ctx->r4 = ADD32(0, 0X130);
    ovl_stage_world6_B98(rdram, ctx);
        goto after_0;
    // 0x600031CC: addiu       $a0, $zero, 0x130
    ctx->r4 = ADD32(0, 0X130);
    after_0:
    // 0x600031D0: jal         0x60000E74
    // 0x600031D4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    ovl_stage_world6_E74(rdram, ctx);
        goto after_1;
    // 0x600031D4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_1:
    // 0x600031D8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600031DC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x600031E0: jal         0x600006C4
    // 0x600031E4: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world6_6C4(rdram, ctx);
        goto after_2;
    // 0x600031E4: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_2:
    // 0x600031E8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x600031EC: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x600031F0: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x600031F4: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x600031F8: jal         0x60000E74
    // 0x600031FC: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    ovl_stage_world6_E74(rdram, ctx);
        goto after_3;
    // 0x600031FC: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_3:
    // 0x60003200: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60003204: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x60003208: jal         0x600006C4
    // 0x6000320C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world6_6C4(rdram, ctx);
        goto after_4;
    // 0x6000320C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_4:
    // 0x60003210: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003214: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x60003218: jr          $ra
    // 0x6000321C: nop

    return;
    // 0x6000321C: nop

;}
RECOMP_FUNC void ovl_stage_world6_3220(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003220: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x60003224: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003228: jal         0x60000C1C
    // 0x6000322C: nop

    ovl_stage_world6_C1C(rdram, ctx);
        goto after_0;
    // 0x6000322C: nop

    after_0:
    // 0x60003230: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x60003234: jal         0x60000BB0
    // 0x60003238: addiu       $a0, $zero, 0x187
    ctx->r4 = ADD32(0, 0X187);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_1;
    // 0x60003238: addiu       $a0, $zero, 0x187
    ctx->r4 = ADD32(0, 0X187);
    after_1:
    // 0x6000323C: beq         $v0, $zero, L_60003298
    if (ctx->r2 == 0) {
        // 0x60003240: lw          $t8, 0x1C($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X1C);
            goto L_60003298;
    }
    // 0x60003240: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x60003244: jal         0x60000BB0
    // 0x60003248: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_2;
    // 0x60003248: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    after_2:
    // 0x6000324C: bne         $v0, $zero, L_60003298
    if (ctx->r2 != 0) {
        // 0x60003250: lw          $t8, 0x1C($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X1C);
            goto L_60003298;
    }
    // 0x60003250: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x60003254: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x60003258: addiu       $at, $zero, 0x877
    ctx->r1 = ADD32(0, 0X877);
    // 0x6000325C: lw          $t7, 0x8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8);
    // 0x60003260: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60003264: bne         $t7, $at, L_6000327C
    if (ctx->r15 != ctx->r1) {
        // 0x60003268: addiu       $a0, $zero, 0x7
        ctx->r4 = ADD32(0, 0X7);
            goto L_6000327C;
    }
    // 0x60003268: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x6000326C: jal         0x60000E68
    // 0x60003270: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    ovl_stage_world6_E68(rdram, ctx);
        goto after_3;
    // 0x60003270: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_3:
    // 0x60003274: b           L_60003284
    // 0x60003278: nop

        goto L_60003284;
    // 0x60003278: nop

L_6000327C:
    // 0x6000327C: jal         0x60000E68
    // 0x60003280: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world6_E68(rdram, ctx);
        goto after_4;
    // 0x60003280: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
L_60003284:
    // 0x60003284: jal         0x60000B98
    // 0x60003288: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    ovl_stage_world6_B98(rdram, ctx);
        goto after_5;
    // 0x60003288: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    after_5:
    // 0x6000328C: b           L_600032E0
    // 0x60003290: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600032E0;
    // 0x60003290: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003294: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
L_60003298:
    // 0x60003298: addiu       $at, $zero, 0x87C
    ctx->r1 = ADD32(0, 0X87C);
    // 0x6000329C: lw          $t9, 0x8($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X8);
    // 0x600032A0: nop

    // 0x600032A4: bne         $t9, $at, L_600032E0
    if (ctx->r25 != ctx->r1) {
        // 0x600032A8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600032E0;
    }
    // 0x600032A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600032AC: jal         0x60000BB0
    // 0x600032B0: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_6;
    // 0x600032B0: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    after_6:
    // 0x600032B4: bne         $v0, $zero, L_600032E0
    if (ctx->r2 != 0) {
        // 0x600032B8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600032E0;
    }
    // 0x600032B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600032BC: jal         0x60000BB0
    // 0x600032C0: addiu       $a0, $zero, 0x18B
    ctx->r4 = ADD32(0, 0X18B);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_7;
    // 0x600032C0: addiu       $a0, $zero, 0x18B
    ctx->r4 = ADD32(0, 0X18B);
    after_7:
    // 0x600032C4: bne         $v0, $zero, L_600032E0
    if (ctx->r2 != 0) {
        // 0x600032C8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600032E0;
    }
    // 0x600032C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600032CC: jal         0x60000B98
    // 0x600032D0: addiu       $a0, $zero, 0x18B
    ctx->r4 = ADD32(0, 0X18B);
    ovl_stage_world6_B98(rdram, ctx);
        goto after_8;
    // 0x600032D0: addiu       $a0, $zero, 0x18B
    ctx->r4 = ADD32(0, 0X18B);
    after_8:
    // 0x600032D4: jal         0x60000A60
    // 0x600032D8: addiu       $a0, $zero, 0xC1E
    ctx->r4 = ADD32(0, 0XC1E);
    ovl_stage_world6_A60(rdram, ctx);
        goto after_9;
    // 0x600032D8: addiu       $a0, $zero, 0xC1E
    ctx->r4 = ADD32(0, 0XC1E);
    after_9:
    // 0x600032DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600032E0:
    // 0x600032E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x600032E4: jr          $ra
    // 0x600032E8: nop

    return;
    // 0x600032E8: nop

;}
RECOMP_FUNC void ovl_stage_world6_32EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600032EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600032F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600032F4: jal         0x60000A60
    // 0x600032F8: addiu       $a0, $zero, 0xA83
    ctx->r4 = ADD32(0, 0XA83);
    ovl_stage_world6_A60(rdram, ctx);
        goto after_0;
    // 0x600032F8: addiu       $a0, $zero, 0xA83
    ctx->r4 = ADD32(0, 0XA83);
    after_0:
    // 0x600032FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003300: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60003304: jr          $ra
    // 0x60003308: nop

    return;
    // 0x60003308: nop

;}
RECOMP_FUNC void ovl_stage_world6_330C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000330C: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x60003310: lui         $t6, 0x6000
    ctx->r14 = S32(0X6000 << 16);
    // 0x60003314: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x60003318: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x6000331C: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x60003320: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x60003324: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x60003328: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x6000332C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x60003330: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x60003334: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x60003338: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x6000333C: addiu       $t6, $t6, 0x5C6C
    ctx->r14 = ADD32(ctx->r14, 0X5C6C);
    // 0x60003340: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x60003344: addiu       $s2, $sp, 0x4C
    ctx->r18 = ADD32(ctx->r29, 0X4C);
    // 0x60003348: sw          $at, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r1;
    // 0x6000334C: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x60003350: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x60003354: sw          $t9, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r25;
    // 0x60003358: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x6000335C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x60003360: sw          $at, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r1;
    // 0x60003364: lw          $t9, 0xC($t6)
    ctx->r25 = MEM_W(ctx->r14, 0XC);
    // 0x60003368: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000336C: sw          $t9, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r25;
    // 0x60003370: swc1        $f0, 0x6720($at)
    MEM_W(0X6720, ctx->r1) = ctx->f0.u32l;
    // 0x60003374: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60003378: swc1        $f0, 0x6728($at)
    MEM_W(0X6728, ctx->r1) = ctx->f0.u32l;
    // 0x6000337C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60003380: swc1        $f0, 0x6730($at)
    MEM_W(0X6730, ctx->r1) = ctx->f0.u32l;
    // 0x60003384: swc1        $f0, 0x6734($at)
    MEM_W(0X6734, ctx->r1) = ctx->f0.u32l;
    // 0x60003388: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000338C: swc1        $f0, 0x6738($at)
    MEM_W(0X6738, ctx->r1) = ctx->f0.u32l;
    // 0x60003390: swc1        $f0, 0x673C($at)
    MEM_W(0X673C, ctx->r1) = ctx->f0.u32l;
    // 0x60003394: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60003398: sw          $t1, 0x6758($at)
    MEM_W(0X6758, ctx->r1) = ctx->r9;
    // 0x6000339C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600033A0: swc1        $f0, 0x6740($at)
    MEM_W(0X6740, ctx->r1) = ctx->f0.u32l;
    // 0x600033A4: swc1        $f0, 0x6744($at)
    MEM_W(0X6744, ctx->r1) = ctx->f0.u32l;
    // 0x600033A8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600033AC: swc1        $f0, 0x6748($at)
    MEM_W(0X6748, ctx->r1) = ctx->f0.u32l;
    // 0x600033B0: swc1        $f0, 0x674C($at)
    MEM_W(0X674C, ctx->r1) = ctx->f0.u32l;
    // 0x600033B4: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600033B8: swc1        $f0, 0x6750($at)
    MEM_W(0X6750, ctx->r1) = ctx->f0.u32l;
    // 0x600033BC: swc1        $f0, 0x6754($at)
    MEM_W(0X6754, ctx->r1) = ctx->f0.u32l;
    // 0x600033C0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600033C4: swc1        $f0, 0x6724($at)
    MEM_W(0X6724, ctx->r1) = ctx->f0.u32l;
    // 0x600033C8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600033CC: swc1        $f0, 0x672C($at)
    MEM_W(0X672C, ctx->r1) = ctx->f0.u32l;
    // 0x600033D0: lui         $t0, 0x6000
    ctx->r8 = S32(0X6000 << 16);
    // 0x600033D4: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x600033D8: addiu       $t0, $t0, 0x6720
    ctx->r8 = ADD32(ctx->r8, 0X6720);
    // 0x600033DC: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x600033E0: sw          $t0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r8;
    // 0x600033E4: addiu       $s3, $zero, 0x4
    ctx->r19 = ADD32(0, 0X4);
    // 0x600033E8: addiu       $s4, $sp, 0x5C
    ctx->r20 = ADD32(ctx->r29, 0X5C);
    // 0x600033EC: addiu       $s6, $zero, 0x32
    ctx->r22 = ADD32(0, 0X32);
    // 0x600033F0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_600033F4:
    // 0x600033F4: jal         0x600009C4
    // 0x600033F8: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    ovl_stage_world6_9C4(rdram, ctx);
        goto after_0;
    // 0x600033F8: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_0:
    // 0x600033FC: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x60003400: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_60003404:
    // 0x60003404: andi        $t2, $s0, 0x1
    ctx->r10 = ctx->r16 & 0X1;
L_60003408:
    // 0x60003408: beq         $t2, $zero, L_60003424
    if (ctx->r10 == 0) {
        // 0x6000340C: sll         $t5, $s1, 2
        ctx->r13 = S32(ctx->r17 << 2);
            goto L_60003424;
    }
    // 0x6000340C: sll         $t5, $s1, 2
    ctx->r13 = S32(ctx->r17 << 2);
    // 0x60003410: sll         $t3, $s1, 2
    ctx->r11 = S32(ctx->r17 << 2);
    // 0x60003414: addu        $t4, $s2, $t3
    ctx->r12 = ADD32(ctx->r18, ctx->r11);
    // 0x60003418: lwc1        $f0, 0x0($t4)
    ctx->f0.u32l = MEM_W(ctx->r12, 0X0);
    // 0x6000341C: b           L_60003430
    // 0x60003420: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_60003430;
    // 0x60003420: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_60003424:
    // 0x60003424: addu        $t8, $s2, $t5
    ctx->r24 = ADD32(ctx->r18, ctx->r13);
    // 0x60003428: lwc1        $f0, 0x0($t8)
    ctx->f0.u32l = MEM_W(ctx->r24, 0X0);
    // 0x6000342C: nop

L_60003430:
    // 0x60003430: mul.s       $f4, $f0, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x60003434: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60003438: addiu       $a0, $s0, 0x5
    ctx->r4 = ADD32(ctx->r16, 0X5);
    // 0x6000343C: jal         0x60000E74
    // 0x60003440: swc1        $f4, 0x6750($at)
    MEM_W(0X6750, ctx->r1) = ctx->f4.u32l;
    ovl_stage_world6_E74(rdram, ctx);
        goto after_1;
    // 0x60003440: swc1        $f4, 0x6750($at)
    MEM_W(0X6750, ctx->r1) = ctx->f4.u32l;
    after_1:
    // 0x60003444: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60003448: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x6000344C: jal         0x600006C4
    // 0x60003450: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    ovl_stage_world6_6C4(rdram, ctx);
        goto after_2;
    // 0x60003450: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_2:
    // 0x60003454: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60003458: bne         $s0, $s3, L_60003408
    if (ctx->r16 != ctx->r19) {
        // 0x6000345C: andi        $t2, $s0, 0x1
        ctx->r10 = ctx->r16 & 0X1;
            goto L_60003408;
    }
    // 0x6000345C: andi        $t2, $s0, 0x1
    ctx->r10 = ctx->r16 & 0X1;
    // 0x60003460: jal         0x60000BB0
    // 0x60003464: addiu       $a0, $zero, 0x12F
    ctx->r4 = ADD32(0, 0X12F);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_3;
    // 0x60003464: addiu       $a0, $zero, 0x12F
    ctx->r4 = ADD32(0, 0X12F);
    after_3:
    // 0x60003468: beq         $v0, $zero, L_60003488
    if (ctx->r2 == 0) {
        // 0x6000346C: nop
    
            goto L_60003488;
    }
    // 0x6000346C: nop

L_60003470:
    // 0x60003470: jal         0x600009D0
    // 0x60003474: nop

    ovl_stage_world6_9D0(rdram, ctx);
        goto after_4;
    // 0x60003474: nop

    after_4:
    // 0x60003478: jal         0x60000BB0
    // 0x6000347C: addiu       $a0, $zero, 0x12F
    ctx->r4 = ADD32(0, 0X12F);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_5;
    // 0x6000347C: addiu       $a0, $zero, 0x12F
    ctx->r4 = ADD32(0, 0X12F);
    after_5:
    // 0x60003480: bne         $v0, $zero, L_60003470
    if (ctx->r2 != 0) {
        // 0x60003484: nop
    
            goto L_60003470;
    }
    // 0x60003484: nop

L_60003488:
    // 0x60003488: jal         0x600009D0
    // 0x6000348C: nop

    ovl_stage_world6_9D0(rdram, ctx);
        goto after_6;
    // 0x6000348C: nop

    after_6:
    // 0x60003490: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x60003494: bne         $s5, $s6, L_60003404
    if (ctx->r21 != ctx->r22) {
        // 0x60003498: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_60003404;
    }
    // 0x60003498: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x6000349C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x600034A0: bne         $s1, $s3, L_600033F4
    if (ctx->r17 != ctx->r19) {
        // 0x600034A4: nop
    
            goto L_600033F4;
    }
    // 0x600034A4: nop

    // 0x600034A8: b           L_600033F4
    // 0x600034AC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
        goto L_600033F4;
    // 0x600034AC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x600034B0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x600034B4: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x600034B8: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x600034BC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x600034C0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x600034C4: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x600034C8: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x600034CC: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x600034D0: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x600034D4: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x600034D8: jr          $ra
    // 0x600034DC: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x600034DC: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void ovl_stage_world6_34E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600034E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600034E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600034E8: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600034EC: addiu       $a0, $a0, 0x330C
    ctx->r4 = ADD32(ctx->r4, 0X330C);
    // 0x600034F0: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x600034F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x600034F8: jal         0x60000994
    // 0x600034FC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world6_994(rdram, ctx);
        goto after_0;
    // 0x600034FC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x60003500: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003504: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60003508: jr          $ra
    // 0x6000350C: nop

    return;
    // 0x6000350C: nop

;}
RECOMP_FUNC void ovl_stage_world6_3510(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003510: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60003514: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003518: jal         0x600009C4
    // 0x6000351C: addiu       $a0, $zero, 0x1E0
    ctx->r4 = ADD32(0, 0X1E0);
    ovl_stage_world6_9C4(rdram, ctx);
        goto after_0;
    // 0x6000351C: addiu       $a0, $zero, 0x1E0
    ctx->r4 = ADD32(0, 0X1E0);
    after_0:
    // 0x60003520: jal         0x60000BA4
    // 0x60003524: addiu       $a0, $zero, 0x12F
    ctx->r4 = ADD32(0, 0X12F);
    ovl_stage_world6_BA4(rdram, ctx);
        goto after_1;
    // 0x60003524: addiu       $a0, $zero, 0x12F
    ctx->r4 = ADD32(0, 0X12F);
    after_1:
    // 0x60003528: jal         0x600009AC
    // 0x6000352C: nop

    ovl_stage_world6_9AC(rdram, ctx);
        goto after_2;
    // 0x6000352C: nop

    after_2:
    // 0x60003530: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003534: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60003538: jr          $ra
    // 0x6000353C: nop

    return;
    // 0x6000353C: nop

;}
RECOMP_FUNC void ovl_stage_world6_3540(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003540: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60003544: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003548: jal         0x60000BB0
    // 0x6000354C: addiu       $a0, $zero, 0x12F
    ctx->r4 = ADD32(0, 0X12F);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_0;
    // 0x6000354C: addiu       $a0, $zero, 0x12F
    ctx->r4 = ADD32(0, 0X12F);
    after_0:
    // 0x60003550: bne         $v0, $zero, L_6000357C
    if (ctx->r2 != 0) {
        // 0x60003554: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_6000357C;
    }
    // 0x60003554: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003558: jal         0x60000B98
    // 0x6000355C: addiu       $a0, $zero, 0x12F
    ctx->r4 = ADD32(0, 0X12F);
    ovl_stage_world6_B98(rdram, ctx);
        goto after_1;
    // 0x6000355C: addiu       $a0, $zero, 0x12F
    ctx->r4 = ADD32(0, 0X12F);
    after_1:
    // 0x60003560: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003564: addiu       $a0, $a0, 0x3510
    ctx->r4 = ADD32(ctx->r4, 0X3510);
    // 0x60003568: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x6000356C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60003570: jal         0x60000994
    // 0x60003574: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world6_994(rdram, ctx);
        goto after_2;
    // 0x60003574: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x60003578: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000357C:
    // 0x6000357C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60003580: jr          $ra
    // 0x60003584: nop

    return;
    // 0x60003584: nop

;}
RECOMP_FUNC void ovl_stage_world6_3588(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003588: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x6000358C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003590: jal         0x600009C4
    // 0x60003594: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    ovl_stage_world6_9C4(rdram, ctx);
        goto after_0;
    // 0x60003594: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_0:
    // 0x60003598: jal         0x60000244
    // 0x6000359C: addiu       $a0, $zero, 0xB0
    ctx->r4 = ADD32(0, 0XB0);
    ovl_stage_world6_244(rdram, ctx);
        goto after_1;
    // 0x6000359C: addiu       $a0, $zero, 0xB0
    ctx->r4 = ADD32(0, 0XB0);
    after_1:
    // 0x600035A0: jal         0x600009AC
    // 0x600035A4: nop

    ovl_stage_world6_9AC(rdram, ctx);
        goto after_2;
    // 0x600035A4: nop

    after_2:
    // 0x600035A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600035AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600035B0: jr          $ra
    // 0x600035B4: nop

    return;
    // 0x600035B4: nop

;}
RECOMP_FUNC void ovl_stage_world6_35B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600035B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600035BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600035C0: jal         0x60000BB0
    // 0x600035C4: addiu       $a0, $zero, 0x105
    ctx->r4 = ADD32(0, 0X105);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_0;
    // 0x600035C4: addiu       $a0, $zero, 0x105
    ctx->r4 = ADD32(0, 0X105);
    after_0:
    // 0x600035C8: bne         $v0, $zero, L_60003610
    if (ctx->r2 != 0) {
        // 0x600035CC: nop
    
            goto L_60003610;
    }
    // 0x600035CC: nop

    // 0x600035D0: jal         0x60000BB0
    // 0x600035D4: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_1;
    // 0x600035D4: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    after_1:
    // 0x600035D8: bne         $v0, $zero, L_60003610
    if (ctx->r2 != 0) {
        // 0x600035DC: nop
    
            goto L_60003610;
    }
    // 0x600035DC: nop

    // 0x600035E0: jal         0x60000BB0
    // 0x600035E4: addiu       $a0, $zero, 0x107
    ctx->r4 = ADD32(0, 0X107);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_2;
    // 0x600035E4: addiu       $a0, $zero, 0x107
    ctx->r4 = ADD32(0, 0X107);
    after_2:
    // 0x600035E8: bne         $v0, $zero, L_60003610
    if (ctx->r2 != 0) {
        // 0x600035EC: nop
    
            goto L_60003610;
    }
    // 0x600035EC: nop

    // 0x600035F0: jal         0x60000BB0
    // 0x600035F4: addiu       $a0, $zero, 0x188
    ctx->r4 = ADD32(0, 0X188);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_3;
    // 0x600035F4: addiu       $a0, $zero, 0x188
    ctx->r4 = ADD32(0, 0X188);
    after_3:
    // 0x600035F8: bne         $v0, $zero, L_60003610
    if (ctx->r2 != 0) {
        // 0x600035FC: nop
    
            goto L_60003610;
    }
    // 0x600035FC: nop

    // 0x60003600: jal         0x60000B98
    // 0x60003604: addiu       $a0, $zero, 0x105
    ctx->r4 = ADD32(0, 0X105);
    ovl_stage_world6_B98(rdram, ctx);
        goto after_4;
    // 0x60003604: addiu       $a0, $zero, 0x105
    ctx->r4 = ADD32(0, 0X105);
    after_4:
    // 0x60003608: b           L_60003644
    // 0x6000360C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60003644;
    // 0x6000360C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003610:
    // 0x60003610: jal         0x60000BB0
    // 0x60003614: addiu       $a0, $zero, 0x12E
    ctx->r4 = ADD32(0, 0X12E);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_5;
    // 0x60003614: addiu       $a0, $zero, 0x12E
    ctx->r4 = ADD32(0, 0X12E);
    after_5:
    // 0x60003618: bne         $v0, $zero, L_60003644
    if (ctx->r2 != 0) {
        // 0x6000361C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003644;
    }
    // 0x6000361C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003620: jal         0x60000B98
    // 0x60003624: addiu       $a0, $zero, 0x12E
    ctx->r4 = ADD32(0, 0X12E);
    ovl_stage_world6_B98(rdram, ctx);
        goto after_6;
    // 0x60003624: addiu       $a0, $zero, 0x12E
    ctx->r4 = ADD32(0, 0X12E);
    after_6:
    // 0x60003628: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x6000362C: addiu       $a0, $a0, 0x3588
    ctx->r4 = ADD32(ctx->r4, 0X3588);
    // 0x60003630: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60003634: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60003638: jal         0x60000994
    // 0x6000363C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world6_994(rdram, ctx);
        goto after_7;
    // 0x6000363C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_7:
    // 0x60003640: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003644:
    // 0x60003644: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60003648: jr          $ra
    // 0x6000364C: nop

    return;
    // 0x6000364C: nop

;}
RECOMP_FUNC void ovl_stage_world6_3650(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003650: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60003654: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003658: jal         0x60000BB0
    // 0x6000365C: addiu       $a0, $zero, 0x105
    ctx->r4 = ADD32(0, 0X105);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_0;
    // 0x6000365C: addiu       $a0, $zero, 0x105
    ctx->r4 = ADD32(0, 0X105);
    after_0:
    // 0x60003660: beq         $v0, $zero, L_600036A8
    if (ctx->r2 == 0) {
        // 0x60003664: nop
    
            goto L_600036A8;
    }
    // 0x60003664: nop

    // 0x60003668: jal         0x60000BB0
    // 0x6000366C: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_1;
    // 0x6000366C: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    after_1:
    // 0x60003670: bne         $v0, $zero, L_600036A8
    if (ctx->r2 != 0) {
        // 0x60003674: nop
    
            goto L_600036A8;
    }
    // 0x60003674: nop

    // 0x60003678: jal         0x60000BB0
    // 0x6000367C: addiu       $a0, $zero, 0x107
    ctx->r4 = ADD32(0, 0X107);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_2;
    // 0x6000367C: addiu       $a0, $zero, 0x107
    ctx->r4 = ADD32(0, 0X107);
    after_2:
    // 0x60003680: bne         $v0, $zero, L_600036A8
    if (ctx->r2 != 0) {
        // 0x60003684: nop
    
            goto L_600036A8;
    }
    // 0x60003684: nop

    // 0x60003688: jal         0x60000BB0
    // 0x6000368C: addiu       $a0, $zero, 0x188
    ctx->r4 = ADD32(0, 0X188);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_3;
    // 0x6000368C: addiu       $a0, $zero, 0x188
    ctx->r4 = ADD32(0, 0X188);
    after_3:
    // 0x60003690: bne         $v0, $zero, L_600036A8
    if (ctx->r2 != 0) {
        // 0x60003694: nop
    
            goto L_600036A8;
    }
    // 0x60003694: nop

    // 0x60003698: jal         0x60000B98
    // 0x6000369C: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    ovl_stage_world6_B98(rdram, ctx);
        goto after_4;
    // 0x6000369C: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    after_4:
    // 0x600036A0: b           L_600036DC
    // 0x600036A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600036DC;
    // 0x600036A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600036A8:
    // 0x600036A8: jal         0x60000BB0
    // 0x600036AC: addiu       $a0, $zero, 0x12E
    ctx->r4 = ADD32(0, 0X12E);
    ovl_stage_world6_BB0(rdram, ctx);
        goto after_5;
    // 0x600036AC: addiu       $a0, $zero, 0x12E
    ctx->r4 = ADD32(0, 0X12E);
    after_5:
    // 0x600036B0: bne         $v0, $zero, L_600036DC
    if (ctx->r2 != 0) {
        // 0x600036B4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600036DC;
    }
    // 0x600036B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600036B8: jal         0x60000B98
    // 0x600036BC: addiu       $a0, $zero, 0x12E
    ctx->r4 = ADD32(0, 0X12E);
    ovl_stage_world6_B98(rdram, ctx);
        goto after_6;
    // 0x600036BC: addiu       $a0, $zero, 0x12E
    ctx->r4 = ADD32(0, 0X12E);
    after_6:
    // 0x600036C0: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600036C4: addiu       $a0, $a0, 0x3588
    ctx->r4 = ADD32(ctx->r4, 0X3588);
    // 0x600036C8: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x600036CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x600036D0: jal         0x60000994
    // 0x600036D4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world6_994(rdram, ctx);
        goto after_7;
    // 0x600036D4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_7:
    // 0x600036D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600036DC:
    // 0x600036DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600036E0: jr          $ra
    // 0x600036E4: nop

    return;
    // 0x600036E4: nop

;}
