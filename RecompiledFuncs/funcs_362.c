#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_stage_world2_1028(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001028: jr          $ra
    // 0x6000102C: nop

    return;
    // 0x6000102C: nop

;}
RECOMP_FUNC void ovl_stage_world2_1030(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001030: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x60001034: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x60001038: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x6000103C: jal         0x60000C1C
    // 0x60001040: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    ovl_stage_world2_C1C(rdram, ctx);
        goto after_0;
    // 0x60001040: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x60001044: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x60001048: jal         0x600009C4
    // 0x6000104C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    ovl_stage_world2_9C4(rdram, ctx);
        goto after_1;
    // 0x6000104C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_1:
    // 0x60001050: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x60001054: lui         $s1, 0x40
    ctx->r17 = S32(0X40 << 16);
    // 0x60001058: ori         $s1, $s1, 0x800
    ctx->r17 = ctx->r17 | 0X800;
    // 0x6000105C: and         $t7, $t6, $s1
    ctx->r15 = ctx->r14 & ctx->r17;
    // 0x60001060: beq         $t7, $zero, L_60001088
    if (ctx->r15 == 0) {
        // 0x60001064: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_60001088;
    }
    // 0x60001064: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_60001068:
    // 0x60001068: jal         0x600009D0
    // 0x6000106C: nop

    ovl_stage_world2_9D0(rdram, ctx);
        goto after_2;
    // 0x6000106C: nop

    after_2:
    // 0x60001070: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x60001074: nop

    // 0x60001078: and         $t9, $t8, $s1
    ctx->r25 = ctx->r24 & ctx->r17;
    // 0x6000107C: bne         $t9, $zero, L_60001068
    if (ctx->r25 != 0) {
        // 0x60001080: nop
    
            goto L_60001068;
    }
    // 0x60001080: nop

    // 0x60001084: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_60001088:
    // 0x60001088: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x6000108C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x60001090: jr          $ra
    // 0x60001094: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x60001094: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_stage_world2_1098(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001098: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x6000109C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600010A0: jal         0x60000C1C
    // 0x600010A4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    ovl_stage_world2_C1C(rdram, ctx);
        goto after_0;
    // 0x600010A4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x600010A8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600010AC: jal         0x600007E4
    // 0x600010B0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    ovl_stage_world2_7E4(rdram, ctx);
        goto after_1;
    // 0x600010B0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x600010B4: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x600010B8: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x600010BC: beq         $t6, $zero, L_6000111C
    if (ctx->r14 == 0) {
        // 0x600010C0: lui         $at, 0x6000
        ctx->r1 = S32(0X6000 << 16);
            goto L_6000111C;
    }
    // 0x600010C0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600010C4: lw          $t7, 0x10($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X10);
    // 0x600010C8: lui         $t1, 0x6000
    ctx->r9 = S32(0X6000 << 16);
    // 0x600010CC: andi        $t8, $t7, 0x4
    ctx->r24 = ctx->r15 & 0X4;
    // 0x600010D0: sw          $t8, 0x5CB0($at)
    MEM_W(0X5CB0, ctx->r1) = ctx->r24;
    // 0x600010D4: lw          $t9, 0x10($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X10);
    // 0x600010D8: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x600010DC: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x600010E0: sw          $t0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r8;
    // 0x600010E4: lw          $t1, 0x5CB0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X5CB0);
    // 0x600010E8: lui         $at, 0xFF7F
    ctx->r1 = S32(0XFF7F << 16);
    // 0x600010EC: beq         $t1, $zero, L_60001108
    if (ctx->r9 == 0) {
        // 0x600010F0: nop
    
            goto L_60001108;
    }
    // 0x600010F0: nop

    // 0x600010F4: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x600010F8: lui         $at, 0x80
    ctx->r1 = S32(0X80 << 16);
    // 0x600010FC: or          $t3, $t2, $at
    ctx->r11 = ctx->r10 | ctx->r1;
    // 0x60001100: b           L_60001140
    // 0x60001104: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
        goto L_60001140;
    // 0x60001104: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
L_60001108:
    // 0x60001108: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x6000110C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x60001110: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x60001114: b           L_60001140
    // 0x60001118: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
        goto L_60001140;
    // 0x60001118: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
L_6000111C:
    // 0x6000111C: lui         $t6, 0x6000
    ctx->r14 = S32(0X6000 << 16);
    // 0x60001120: lw          $t6, 0x5CB0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5CB0);
    // 0x60001124: nop

    // 0x60001128: beq         $t6, $zero, L_60001144
    if (ctx->r14 == 0) {
        // 0x6000112C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60001144;
    }
    // 0x6000112C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60001130: lw          $t7, 0x10($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X10);
    // 0x60001134: nop

    // 0x60001138: ori         $t8, $t7, 0x4
    ctx->r24 = ctx->r15 | 0X4;
    // 0x6000113C: sw          $t8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r24;
L_60001140:
    // 0x60001140: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001144:
    // 0x60001144: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x60001148: jr          $ra
    // 0x6000114C: nop

    return;
    // 0x6000114C: nop

;}
RECOMP_FUNC void ovl_stage_world2_1150(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001150: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x60001154: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60001158: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x6000115C: jal         0x60000DE4
    // 0x60001160: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    ovl_stage_world2_DE4(rdram, ctx);
        goto after_0;
    // 0x60001160: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    after_0:
    // 0x60001164: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60001168: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x6000116C: jal         0x600006C4
    // 0x60001170: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world2_6C4(rdram, ctx);
        goto after_1;
    // 0x60001170: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x60001174: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x60001178: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x6000117C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x60001180: swc1        $f4, 0x18($t6)
    MEM_W(0X18, ctx->r14) = ctx->f4.u32l;
    // 0x60001184: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x60001188: nop

    // 0x6000118C: swc1        $f6, 0x14($t7)
    MEM_W(0X14, ctx->r15) = ctx->f6.u32l;
    // 0x60001190: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x60001194: jal         0x60000DE4
    // 0x60001198: nop

    ovl_stage_world2_DE4(rdram, ctx);
        goto after_2;
    // 0x60001198: nop

    after_2:
    // 0x6000119C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600011A0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x600011A4: jal         0x600006C4
    // 0x600011A8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world2_6C4(rdram, ctx);
        goto after_3;
    // 0x600011A8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_3:
    // 0x600011AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600011B0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x600011B4: jr          $ra
    // 0x600011B8: nop

    return;
    // 0x600011B8: nop

;}
RECOMP_FUNC void ovl_stage_world2_11BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600011BC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600011C0: lwc1        $f7, 0x5B90($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X5B90);
    // 0x600011C4: lwc1        $f6, 0x5B94($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X5B94);
    // 0x600011C8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x600011CC: cvt.d.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.d = CVT_D_S(ctx->f12.fl);
    // 0x600011D0: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x600011D4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x600011D8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x600011DC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x600011E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600011E4: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x600011E8: swc1        $f14, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f14.u32l;
    // 0x600011EC: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x600011F0: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x600011F4: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x600011F8: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x600011FC: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x60001200: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
    // 0x60001204: jal         0x600003D0
    // 0x60001208: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    ovl_stage_world2_3D0(rdram, ctx);
        goto after_0;
    // 0x60001208: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x6000120C: lwc1        $f12, 0x3C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x60001210: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x60001214: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x60001218: mul.s       $f0, $f4, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x6000121C: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
    // 0x60001220: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
    // 0x60001224: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x60001228: c.le.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl <= ctx->f0.fl;
    // 0x6000122C: nop

    // 0x60001230: bc1f        L_60001274
    if (!c1cs) {
        // 0x60001234: nop
    
            goto L_60001274;
    }
    // 0x60001234: nop

    // 0x60001238: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x6000123C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x60001240: nop

    // 0x60001244: add.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x60001248: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x6000124C: nop

    // 0x60001250: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x60001254: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x60001258: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x6000125C: nop

    // 0x60001260: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x60001264: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x60001268: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x6000126C: b           L_600012AC
    // 0x60001270: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
        goto L_600012AC;
    // 0x60001270: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
L_60001274:
    // 0x60001274: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x60001278: nop

    // 0x6000127C: sub.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x60001280: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x60001284: nop

    // 0x60001288: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x6000128C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x60001290: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x60001294: nop

    // 0x60001298: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x6000129C: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
    // 0x600012A0: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x600012A4: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x600012A8: nop

L_600012AC:
    // 0x600012AC: lwc1        $f18, 0x34($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X34);
    // 0x600012B0: nop

    // 0x600012B4: mul.s       $f0, $f18, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = MUL_S(ctx->f18.fl, ctx->f12.fl);
    // 0x600012B8: c.le.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl <= ctx->f0.fl;
    // 0x600012BC: nop

    // 0x600012C0: bc1f        L_600012F8
    if (!c1cs) {
        // 0x600012C4: nop
    
            goto L_600012F8;
    }
    // 0x600012C4: nop

    // 0x600012C8: add.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x600012CC: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x600012D0: nop

    // 0x600012D4: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x600012D8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x600012DC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x600012E0: nop

    // 0x600012E4: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x600012E8: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x600012EC: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x600012F0: b           L_60001328
    // 0x600012F4: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
        goto L_60001328;
    // 0x600012F4: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
L_600012F8:
    // 0x600012F8: sub.s       $f8, $f0, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x600012FC: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x60001300: nop

    // 0x60001304: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x60001308: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x6000130C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x60001310: nop

    // 0x60001314: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x60001318: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x6000131C: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x60001320: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
    // 0x60001324: nop

L_60001328:
    // 0x60001328: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000132C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x60001330: jr          $ra
    // 0x60001334: nop

    return;
    // 0x60001334: nop

;}
RECOMP_FUNC void ovl_stage_world2_1338(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001338: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x6000133C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x60001340: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x60001344: lui         $s0, 0x6000
    ctx->r16 = S32(0X6000 << 16);
    // 0x60001348: lui         $s1, 0x6000
    ctx->r17 = S32(0X6000 << 16);
    // 0x6000134C: addiu       $s1, $s1, 0x5CF8
    ctx->r17 = ADD32(ctx->r17, 0X5CF8);
    // 0x60001350: addiu       $s0, $s0, 0x5CE0
    ctx->r16 = ADD32(ctx->r16, 0X5CE0);
    // 0x60001354: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60001358: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x6000135C: addiu       $v1, $v1, 0x5D20
    ctx->r3 = ADD32(ctx->r3, 0X5D20);
    // 0x60001360: addiu       $v0, $v0, 0x5D10
    ctx->r2 = ADD32(ctx->r2, 0X5D10);
    // 0x60001364: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x60001368: lwc1        $f6, 0x4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4);
    // 0x6000136C: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x60001370: lwc1        $f10, 0x0($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X0);
    // 0x60001374: lwc1        $f16, 0x4($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X4);
    // 0x60001378: lwc1        $f18, 0x8($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X8);
    // 0x6000137C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60001380: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    // 0x60001384: swc1        $f6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f6.u32l;
    // 0x60001388: swc1        $f8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f8.u32l;
    // 0x6000138C: swc1        $f10, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f10.u32l;
    // 0x60001390: swc1        $f16, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f16.u32l;
    // 0x60001394: swc1        $f18, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f18.u32l;
    // 0x60001398: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x6000139C: lw          $a0, 0x5B44($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5B44);
    // 0x600013A0: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x600013A4: jal         0x600006C4
    // 0x600013A8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_stage_world2_6C4(rdram, ctx);
        goto after_0;
    // 0x600013A8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x600013AC: jal         0x60000DE4
    // 0x600013B0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world2_DE4(rdram, ctx);
        goto after_1;
    // 0x600013B0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x600013B4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600013B8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x600013BC: jal         0x600006C4
    // 0x600013C0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world2_6C4(rdram, ctx);
        goto after_2;
    // 0x600013C0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_2:
    // 0x600013C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x600013C8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x600013CC: jal         0x600003DC
    // 0x600013D0: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    ovl_stage_world2_3DC(rdram, ctx);
        goto after_3;
    // 0x600013D0: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    after_3:
    // 0x600013D4: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600013D8: lwc1        $f13, 0x5B98($at)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r1, 0X5B98);
    // 0x600013DC: lwc1        $f12, 0x5B9C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X5B9C);
    // 0x600013E0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600013E4: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x600013E8: lwc1        $f9, 0x5BA0($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X5BA0);
    // 0x600013EC: lwc1        $f8, 0x5BA4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X5BA4);
    // 0x600013F0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x600013F4: mul.d       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f0.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x600013F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x600013FC: c.le.d      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.d <= ctx->f0.d;
    // 0x60001400: nop

    // 0x60001404: bc1f        L_60001420
    if (!c1cs) {
        // 0x60001408: nop
    
            goto L_60001420;
    }
    // 0x60001408: nop

    // 0x6000140C: sub.d       $f10, $f0, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f10.d = ctx->f0.d - ctx->f12.d;
    // 0x60001410: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001414: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x60001418: b           L_60001454
    // 0x6000141C: swc1        $f16, 0x5CC4($at)
    MEM_W(0X5CC4, ctx->r1) = ctx->f16.u32l;
        goto L_60001454;
    // 0x6000141C: swc1        $f16, 0x5CC4($at)
    MEM_W(0X5CC4, ctx->r1) = ctx->f16.u32l;
L_60001420:
    // 0x60001420: mtc1        $zero, $f19
    ctx->f_odd[(19 - 1) * 2] = 0;
    // 0x60001424: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x60001428: nop

    // 0x6000142C: c.lt.d      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.d < ctx->f18.d;
    // 0x60001430: nop

    // 0x60001434: bc1f        L_60001444
    if (!c1cs) {
        // 0x60001438: nop
    
            goto L_60001444;
    }
    // 0x60001438: nop

    // 0x6000143C: b           L_60001448
    // 0x60001440: add.d       $f2, $f0, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f2.d = ctx->f0.d + ctx->f12.d;
        goto L_60001448;
    // 0x60001440: add.d       $f2, $f0, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f2.d = ctx->f0.d + ctx->f12.d;
L_60001444:
    // 0x60001444: mov.d       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.d = ctx->f0.d;
L_60001448:
    // 0x60001448: cvt.s.d     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f4.fl = CVT_S_D(ctx->f2.d);
    // 0x6000144C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001450: swc1        $f4, 0x5CC4($at)
    MEM_W(0X5CC4, ctx->r1) = ctx->f4.u32l;
L_60001454:
    // 0x60001454: lwc1        $f0, 0x0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X0);
    // 0x60001458: lwc1        $f2, 0x0($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X0);
    // 0x6000145C: nop

    // 0x60001460: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x60001464: nop

    // 0x60001468: bc1f        L_60001484
    if (!c1cs) {
        // 0x6000146C: nop
    
            goto L_60001484;
    }
    // 0x6000146C: nop

    // 0x60001470: sub.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x60001474: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001478: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x6000147C: b           L_60001490
    // 0x60001480: swc1        $f8, 0x5CC8($at)
    MEM_W(0X5CC8, ctx->r1) = ctx->f8.u32l;
        goto L_60001490;
    // 0x60001480: swc1        $f8, 0x5CC8($at)
    MEM_W(0X5CC8, ctx->r1) = ctx->f8.u32l;
L_60001484:
    // 0x60001484: sub.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x60001488: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000148C: swc1        $f10, 0x5CC8($at)
    MEM_W(0X5CC8, ctx->r1) = ctx->f10.u32l;
L_60001490:
    // 0x60001490: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x60001494: lwc1        $f2, 0x8($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X8);
    // 0x60001498: nop

    // 0x6000149C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x600014A0: nop

    // 0x600014A4: bc1f        L_600014C0
    if (!c1cs) {
        // 0x600014A8: nop
    
            goto L_600014C0;
    }
    // 0x600014A8: nop

    // 0x600014AC: sub.s       $f16, $f0, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x600014B0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600014B4: neg.s       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = -ctx->f16.fl;
    // 0x600014B8: b           L_600014CC
    // 0x600014BC: swc1        $f18, 0x5CCC($at)
    MEM_W(0X5CCC, ctx->r1) = ctx->f18.u32l;
        goto L_600014CC;
    // 0x600014BC: swc1        $f18, 0x5CCC($at)
    MEM_W(0X5CCC, ctx->r1) = ctx->f18.u32l;
L_600014C0:
    // 0x600014C0: sub.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x600014C4: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600014C8: swc1        $f4, 0x5CCC($at)
    MEM_W(0X5CCC, ctx->r1) = ctx->f4.u32l;
L_600014CC:
    // 0x600014CC: jal         0x60000418
    // 0x600014D0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    ovl_stage_world2_418(rdram, ctx);
        goto after_4;
    // 0x600014D0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_4:
    // 0x600014D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x600014D8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600014DC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x600014E0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x600014E4: swc1        $f0, 0x5CC0($at)
    MEM_W(0X5CC0, ctx->r1) = ctx->f0.u32l;
    // 0x600014E8: jr          $ra
    // 0x600014EC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x600014EC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_stage_world2_14F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600014F0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x600014F4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x600014F8: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600014FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60001500: lw          $a0, 0x5B44($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5B44);
    // 0x60001504: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x60001508: jal         0x600006C4
    // 0x6000150C: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    ovl_stage_world2_6C4(rdram, ctx);
        goto after_0;
    // 0x6000150C: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    after_0:
    // 0x60001510: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60001514: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x60001518: jr          $ra
    // 0x6000151C: nop

    return;
    // 0x6000151C: nop

    // 0x60001520: jr          $ra
    // 0x60001524: nop

    return;
    // 0x60001524: nop

    // 0x60001528: jr          $ra
    // 0x6000152C: nop

    return;
    // 0x6000152C: nop

;}
RECOMP_FUNC void ovl_stage_world2_1530(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001530: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60001534: addiu       $v0, $v0, 0x5D40
    ctx->r2 = ADD32(ctx->r2, 0X5D40);
    // 0x60001538: sb          $a0, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r4;
    // 0x6000153C: jr          $ra
    // 0x60001540: sb          $a1, 0x7($v0)
    MEM_B(0X7, ctx->r2) = ctx->r5;
    return;
    // 0x60001540: sb          $a1, 0x7($v0)
    MEM_B(0X7, ctx->r2) = ctx->r5;
;}
RECOMP_FUNC void ovl_stage_world2_1544(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001544: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60001548: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x6000154C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60001550: jal         0x60001530
    // 0x60001554: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world2_1530(rdram, ctx);
        goto after_0;
    // 0x60001554: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x60001558: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000155C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60001560: jr          $ra
    // 0x60001564: nop

    return;
    // 0x60001564: nop

;}
RECOMP_FUNC void ovl_stage_world2_1568(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001568: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x6000156C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60001570: jal         0x60001544
    // 0x60001574: nop

    ovl_stage_world2_1544(rdram, ctx);
        goto after_0;
    // 0x60001574: nop

    after_0:
    // 0x60001578: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000157C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60001580: jr          $ra
    // 0x60001584: nop

    return;
    // 0x60001584: nop

;}
RECOMP_FUNC void ovl_stage_world2_1588(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001588: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000158C: lwc1        $f12, 0x5CD0($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X5CD0);
    // 0x60001590: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x60001594: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x60001598: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x6000159C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x600015A0: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    // 0x600015A4: jal         0x600011BC
    // 0x600015A8: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    ovl_stage_world2_11BC(rdram, ctx);
        goto after_0;
    // 0x600015A8: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x600015AC: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x600015B0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x600015B4: jal         0x60001530
    // 0x600015B8: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    ovl_stage_world2_1530(rdram, ctx);
        goto after_1;
    // 0x600015B8: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    after_1:
    // 0x600015BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600015C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x600015C4: jr          $ra
    // 0x600015C8: nop

    return;
    // 0x600015C8: nop

;}
RECOMP_FUNC void ovl_stage_world2_15CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600015CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600015D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600015D4: jal         0x6000034C
    // 0x600015D8: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    ovl_stage_world2_34C(rdram, ctx);
        goto after_0;
    // 0x600015D8: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_0:
    // 0x600015DC: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x600015E0: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x600015E4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x600015E8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x600015EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600015F0: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x600015F4: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600015F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600015FC: jr          $ra
    // 0x60001600: swc1        $f10, 0x5CD0($at)
    MEM_W(0X5CD0, ctx->r1) = ctx->f10.u32l;
    return;
    // 0x60001600: swc1        $f10, 0x5CD0($at)
    MEM_W(0X5CD0, ctx->r1) = ctx->f10.u32l;
;}
RECOMP_FUNC void ovl_stage_world2_1604(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001604: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001608: lwc1        $f4, 0x5CCC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5CCC);
    // 0x6000160C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001610: lwc1        $f6, 0x5CC8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X5CC8);
    // 0x60001614: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001618: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x6000161C: nop

    // 0x60001620: bc1f        L_60001670
    if (!c1cs) {
        // 0x60001624: nop
    
            goto L_60001670;
    }
    // 0x60001624: nop

    // 0x60001628: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000162C: lwc1        $f8, 0x5CE0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X5CE0);
    // 0x60001630: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001634: lwc1        $f10, 0x5CF8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X5CF8);
    // 0x60001638: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x6000163C: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x60001640: nop

    // 0x60001644: bc1f        L_60001660
    if (!c1cs) {
        // 0x60001648: nop
    
            goto L_60001660;
    }
    // 0x60001648: nop

    // 0x6000164C: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x60001650: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x60001654: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001658: jr          $ra
    // 0x6000165C: swc1        $f16, 0x5CD0($at)
    MEM_W(0X5CD0, ctx->r1) = ctx->f16.u32l;
    return;
    // 0x6000165C: swc1        $f16, 0x5CD0($at)
    MEM_W(0X5CD0, ctx->r1) = ctx->f16.u32l;
L_60001660:
    // 0x60001660: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x60001664: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001668: jr          $ra
    // 0x6000166C: swc1        $f18, 0x5CD0($at)
    MEM_W(0X5CD0, ctx->r1) = ctx->f18.u32l;
    return;
    // 0x6000166C: swc1        $f18, 0x5CD0($at)
    MEM_W(0X5CD0, ctx->r1) = ctx->f18.u32l;
L_60001670:
    // 0x60001670: lwc1        $f4, 0x5CE8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5CE8);
    // 0x60001674: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001678: lwc1        $f6, 0x5D00($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X5D00);
    // 0x6000167C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x60001680: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x60001684: nop

    // 0x60001688: bc1f        L_600016A0
    if (!c1cs) {
        // 0x6000168C: nop
    
            goto L_600016A0;
    }
    // 0x6000168C: nop

    // 0x60001690: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x60001694: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001698: jr          $ra
    // 0x6000169C: swc1        $f8, 0x5CD0($at)
    MEM_W(0X5CD0, ctx->r1) = ctx->f8.u32l;
    return;
    // 0x6000169C: swc1        $f8, 0x5CD0($at)
    MEM_W(0X5CD0, ctx->r1) = ctx->f8.u32l;
L_600016A0:
    // 0x600016A0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x600016A4: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600016A8: swc1        $f10, 0x5CD0($at)
    MEM_W(0X5CD0, ctx->r1) = ctx->f10.u32l;
    // 0x600016AC: jr          $ra
    // 0x600016B0: nop

    return;
    // 0x600016B0: nop

;}
RECOMP_FUNC void ovl_stage_world2_16B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600016B4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x600016B8: lui         $t6, 0x6000
    ctx->r14 = S32(0X6000 << 16);
    // 0x600016BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600016C0: addiu       $t6, $t6, 0x5B7C
    ctx->r14 = ADD32(ctx->r14, 0X5B7C);
    // 0x600016C4: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x600016C8: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x600016CC: sw          $at, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r1;
    // 0x600016D0: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x600016D4: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600016D8: sw          $t9, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r25;
    // 0x600016DC: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x600016E0: addiu       $a0, $a0, 0x5CE0
    ctx->r4 = ADD32(ctx->r4, 0X5CE0);
    // 0x600016E4: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x600016E8: jal         0x600003DC
    // 0x600016EC: sw          $at, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r1;
    ovl_stage_world2_3DC(rdram, ctx);
        goto after_0;
    // 0x600016EC: sw          $at, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r1;
    after_0:
    // 0x600016F0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600016F4: lwc1        $f13, 0x5BA8($at)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r1, 0X5BA8);
    // 0x600016F8: lwc1        $f12, 0x5BAC($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X5BAC);
    // 0x600016FC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001700: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x60001704: lwc1        $f9, 0x5BB0($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X5BB0);
    // 0x60001708: lwc1        $f8, 0x5BB4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X5BB4);
    // 0x6000170C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x60001710: mul.d       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f0.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x60001714: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001718: c.le.d      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.d <= ctx->f0.d;
    // 0x6000171C: nop

    // 0x60001720: bc1f        L_60001734
    if (!c1cs) {
        // 0x60001724: nop
    
            goto L_60001734;
    }
    // 0x60001724: nop

    // 0x60001728: sub.d       $f10, $f0, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f10.d = ctx->f0.d - ctx->f12.d;
    // 0x6000172C: b           L_60001760
    // 0x60001730: cvt.s.d     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f14.fl = CVT_S_D(ctx->f10.d);
        goto L_60001760;
    // 0x60001730: cvt.s.d     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f14.fl = CVT_S_D(ctx->f10.d);
L_60001734:
    // 0x60001734: mtc1        $zero, $f17
    ctx->f_odd[(17 - 1) * 2] = 0;
    // 0x60001738: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x6000173C: nop

    // 0x60001740: c.lt.d      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.d < ctx->f16.d;
    // 0x60001744: nop

    // 0x60001748: bc1f        L_60001758
    if (!c1cs) {
        // 0x6000174C: nop
    
            goto L_60001758;
    }
    // 0x6000174C: nop

    // 0x60001750: b           L_6000175C
    // 0x60001754: add.d       $f2, $f0, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f2.d = ctx->f0.d + ctx->f12.d;
        goto L_6000175C;
    // 0x60001754: add.d       $f2, $f0, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f2.d = ctx->f0.d + ctx->f12.d;
L_60001758:
    // 0x60001758: mov.d       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.d = ctx->f0.d;
L_6000175C:
    // 0x6000175C: cvt.s.d     $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f14.fl = CVT_S_D(ctx->f2.d);
L_60001760:
    // 0x60001760: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60001764: swc1        $f14, 0x5CD0($at)
    MEM_W(0X5CD0, ctx->r1) = ctx->f14.u32l;
    // 0x60001768: jr          $ra
    // 0x6000176C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x6000176C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_stage_world2_1770(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001770: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60001774: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x60001778: addiu       $v1, $v1, 0x5CF8
    ctx->r3 = ADD32(ctx->r3, 0X5CF8);
    // 0x6000177C: addiu       $v0, $v0, 0x5CE0
    ctx->r2 = ADD32(ctx->r2, 0X5CE0);
    // 0x60001780: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x60001784: lwc1        $f16, 0x0($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X0);
    // 0x60001788: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x6000178C: c.lt.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl < ctx->f16.fl;
    // 0x60001790: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60001794: bc1f        L_600017A8
    if (!c1cs) {
        // 0x60001798: lui         $at, 0x4248
        ctx->r1 = S32(0X4248 << 16);
            goto L_600017A8;
    }
    // 0x60001798: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x6000179C: sub.s       $f0, $f14, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f14.fl - ctx->f16.fl;
    // 0x600017A0: b           L_600017AC
    // 0x600017A4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_600017AC;
    // 0x600017A4: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_600017A8:
    // 0x600017A8: sub.s       $f0, $f14, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f14.fl - ctx->f16.fl;
L_600017AC:
    // 0x600017AC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x600017B0: nop

    // 0x600017B4: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x600017B8: nop

    // 0x600017BC: bc1f        L_60001800
    if (!c1cs) {
        // 0x600017C0: nop
    
            goto L_60001800;
    }
    // 0x600017C0: nop

    // 0x600017C4: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x600017C8: lwc1        $f6, 0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8);
    // 0x600017CC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600017D0: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x600017D4: nop

    // 0x600017D8: bc1f        L_600017F4
    if (!c1cs) {
        // 0x600017DC: nop
    
            goto L_600017F4;
    }
    // 0x600017DC: nop

    // 0x600017E0: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x600017E4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x600017E8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600017EC: b           L_60001878
    // 0x600017F0: swc1        $f8, 0x5CD0($at)
    MEM_W(0X5CD0, ctx->r1) = ctx->f8.u32l;
        goto L_60001878;
    // 0x600017F0: swc1        $f8, 0x5CD0($at)
    MEM_W(0X5CD0, ctx->r1) = ctx->f8.u32l;
L_600017F4:
    // 0x600017F4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x600017F8: b           L_60001878
    // 0x600017FC: swc1        $f10, 0x5CD0($at)
    MEM_W(0X5CD0, ctx->r1) = ctx->f10.u32l;
        goto L_60001878;
    // 0x600017FC: swc1        $f10, 0x5CD0($at)
    MEM_W(0X5CD0, ctx->r1) = ctx->f10.u32l;
L_60001800:
    // 0x60001800: lwc1        $f2, 0x8($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X8);
    // 0x60001804: lwc1        $f12, 0x8($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X8);
    // 0x60001808: nop

    // 0x6000180C: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x60001810: nop

    // 0x60001814: bc1f        L_60001828
    if (!c1cs) {
        // 0x60001818: nop
    
            goto L_60001828;
    }
    // 0x60001818: nop

    // 0x6000181C: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x60001820: b           L_6000182C
    // 0x60001824: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_6000182C;
    // 0x60001824: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_60001828:
    // 0x60001828: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
L_6000182C:
    // 0x6000182C: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x60001830: nop

    // 0x60001834: bc1f        L_60001870
    if (!c1cs) {
        // 0x60001838: nop
    
            goto L_60001870;
    }
    // 0x60001838: nop

    // 0x6000183C: c.lt.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl < ctx->f16.fl;
    // 0x60001840: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x60001844: bc1f        L_60001860
    if (!c1cs) {
        // 0x60001848: nop
    
            goto L_60001860;
    }
    // 0x60001848: nop

    // 0x6000184C: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x60001850: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60001854: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001858: b           L_60001878
    // 0x6000185C: swc1        $f4, 0x5CD0($at)
    MEM_W(0X5CD0, ctx->r1) = ctx->f4.u32l;
        goto L_60001878;
    // 0x6000185C: swc1        $f4, 0x5CD0($at)
    MEM_W(0X5CD0, ctx->r1) = ctx->f4.u32l;
L_60001860:
    // 0x60001860: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60001864: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001868: b           L_60001878
    // 0x6000186C: swc1        $f6, 0x5CD0($at)
    MEM_W(0X5CD0, ctx->r1) = ctx->f6.u32l;
        goto L_60001878;
    // 0x6000186C: swc1        $f6, 0x5CD0($at)
    MEM_W(0X5CD0, ctx->r1) = ctx->f6.u32l;
L_60001870:
    // 0x60001870: jal         0x60001604
    // 0x60001874: nop

    ovl_stage_world2_1604(rdram, ctx);
        goto after_0;
    // 0x60001874: nop

    after_0:
L_60001878:
    // 0x60001878: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000187C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60001880: jr          $ra
    // 0x60001884: nop

    return;
    // 0x60001884: nop

;}
RECOMP_FUNC void ovl_stage_world2_1888(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001888: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x6000188C: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x60001890: addiu       $v1, $v1, 0x5D10
    ctx->r3 = ADD32(ctx->r3, 0X5D10);
    // 0x60001894: addiu       $v0, $v0, 0x5CE0
    ctx->r2 = ADD32(ctx->r2, 0X5CE0);
    // 0x60001898: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x6000189C: lwc1        $f2, 0x0($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X0);
    // 0x600018A0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x600018A4: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x600018A8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x600018AC: bc1f        L_600018C0
    if (!c1cs) {
        // 0x600018B0: nop
    
            goto L_600018C0;
    }
    // 0x600018B0: nop

    // 0x600018B4: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x600018B8: b           L_600018C4
    // 0x600018BC: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
        goto L_600018C4;
    // 0x600018BC: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
L_600018C0:
    // 0x600018C0: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
L_600018C4:
    // 0x600018C4: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x600018C8: nop

    // 0x600018CC: bc1f        L_60001918
    if (!c1cs) {
        // 0x600018D0: nop
    
            goto L_60001918;
    }
    // 0x600018D0: nop

    // 0x600018D4: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x600018D8: lwc1        $f2, 0x8($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X8);
    // 0x600018DC: nop

    // 0x600018E0: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x600018E4: nop

    // 0x600018E8: bc1f        L_600018FC
    if (!c1cs) {
        // 0x600018EC: nop
    
            goto L_600018FC;
    }
    // 0x600018EC: nop

    // 0x600018F0: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x600018F4: b           L_60001900
    // 0x600018F8: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
        goto L_60001900;
    // 0x600018F8: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
L_600018FC:
    // 0x600018FC: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
L_60001900:
    // 0x60001900: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x60001904: nop

    // 0x60001908: bc1f        L_6000191C
    if (!c1cs) {
        // 0x6000190C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_6000191C;
    }
    // 0x6000190C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x60001910: jr          $ra
    // 0x60001914: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x60001914: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_60001918:
    // 0x60001918: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_6000191C:
    // 0x6000191C: jr          $ra
    // 0x60001920: nop

    return;
    // 0x60001920: nop

;}
RECOMP_FUNC void ovl_stage_world2_1924(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001924: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60001928: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x6000192C: jal         0x6000034C
    // 0x60001930: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    ovl_stage_world2_34C(rdram, ctx);
        goto after_0;
    // 0x60001930: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_0:
    // 0x60001934: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x60001938: addiu       $v1, $v1, 0x5CB4
    ctx->r3 = ADD32(ctx->r3, 0X5CB4);
    // 0x6000193C: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x60001940: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x60001944: beq         $a1, $t6, L_60001954
    if (ctx->r5 == ctx->r14) {
        // 0x60001948: slti        $at, $v0, 0x51
        ctx->r1 = SIGNED(ctx->r2) < 0X51 ? 1 : 0;
            goto L_60001954;
    }
    // 0x60001948: slti        $at, $v0, 0x51
    ctx->r1 = SIGNED(ctx->r2) < 0X51 ? 1 : 0;
    // 0x6000194C: beq         $at, $zero, L_60001A40
    if (ctx->r1 == 0) {
        // 0x60001950: addiu       $a0, $zero, 0x14
        ctx->r4 = ADD32(0, 0X14);
            goto L_60001A40;
    }
    // 0x60001950: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
L_60001954:
    // 0x60001954: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x60001958: lui         $t7, 0x6000
    ctx->r15 = S32(0X6000 << 16);
    // 0x6000195C: lw          $t7, 0x5D34($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X5D34);
    // 0x60001960: nop

    // 0x60001964: lw          $t8, 0x2C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X2C);
    // 0x60001968: nop

    // 0x6000196C: slti        $at, $t8, 0x4
    ctx->r1 = SIGNED(ctx->r24) < 0X4 ? 1 : 0;
    // 0x60001970: beq         $at, $zero, L_600019A4
    if (ctx->r1 == 0) {
        // 0x60001974: nop
    
            goto L_600019A4;
    }
    // 0x60001974: nop

    // 0x60001978: jal         0x6000034C
    // 0x6000197C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_stage_world2_34C(rdram, ctx);
        goto after_1;
    // 0x6000197C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_1:
    // 0x60001980: addiu       $t9, $v0, 0x1
    ctx->r25 = ADD32(ctx->r2, 0X1);
    // 0x60001984: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001988: sw          $t9, 0x5CBC($at)
    MEM_W(0X5CBC, ctx->r1) = ctx->r25;
    // 0x6000198C: jal         0x6000034C
    // 0x60001990: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_stage_world2_34C(rdram, ctx);
        goto after_2;
    // 0x60001990: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_2:
    // 0x60001994: addiu       $t0, $v0, 0x1E
    ctx->r8 = ADD32(ctx->r2, 0X1E);
    // 0x60001998: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000199C: b           L_600019C8
    // 0x600019A0: sw          $t0, 0x5CB8($at)
    MEM_W(0X5CB8, ctx->r1) = ctx->r8;
        goto L_600019C8;
    // 0x600019A0: sw          $t0, 0x5CB8($at)
    MEM_W(0X5CB8, ctx->r1) = ctx->r8;
L_600019A4:
    // 0x600019A4: jal         0x6000034C
    // 0x600019A8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_stage_world2_34C(rdram, ctx);
        goto after_3;
    // 0x600019A8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_3:
    // 0x600019AC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600019B0: sw          $v0, 0x5CBC($at)
    MEM_W(0X5CBC, ctx->r1) = ctx->r2;
    // 0x600019B4: jal         0x6000034C
    // 0x600019B8: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    ovl_stage_world2_34C(rdram, ctx);
        goto after_4;
    // 0x600019B8: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_4:
    // 0x600019BC: addiu       $t1, $v0, 0x1E
    ctx->r9 = ADD32(ctx->r2, 0X1E);
    // 0x600019C0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600019C4: sw          $t1, 0x5CB8($at)
    MEM_W(0X5CB8, ctx->r1) = ctx->r9;
L_600019C8:
    // 0x600019C8: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x600019CC: lw          $v0, 0x5CBC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5CBC);
    // 0x600019D0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600019D4: beq         $v0, $zero, L_60001A00
    if (ctx->r2 == 0) {
        // 0x600019D8: sw          $zero, 0x5CD8($at)
        MEM_W(0X5CD8, ctx->r1) = 0;
            goto L_60001A00;
    }
    // 0x600019D8: sw          $zero, 0x5CD8($at)
    MEM_W(0X5CD8, ctx->r1) = 0;
    // 0x600019DC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x600019E0: beq         $v0, $at, L_60001A10
    if (ctx->r2 == ctx->r1) {
        // 0x600019E4: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_60001A10;
    }
    // 0x600019E4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x600019E8: beq         $v0, $at, L_60001A20
    if (ctx->r2 == ctx->r1) {
        // 0x600019EC: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_60001A20;
    }
    // 0x600019EC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x600019F0: beq         $v0, $at, L_60001A30
    if (ctx->r2 == ctx->r1) {
        // 0x600019F4: nop
    
            goto L_60001A30;
    }
    // 0x600019F4: nop

    // 0x600019F8: b           L_60001A58
    // 0x600019FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60001A58;
    // 0x600019FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001A00:
    // 0x60001A00: jal         0x600015CC
    // 0x60001A04: nop

    ovl_stage_world2_15CC(rdram, ctx);
        goto after_5;
    // 0x60001A04: nop

    after_5:
    // 0x60001A08: b           L_60001A58
    // 0x60001A0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60001A58;
    // 0x60001A0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001A10:
    // 0x60001A10: jal         0x60001604
    // 0x60001A14: nop

    ovl_stage_world2_1604(rdram, ctx);
        goto after_6;
    // 0x60001A14: nop

    after_6:
    // 0x60001A18: b           L_60001A58
    // 0x60001A1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60001A58;
    // 0x60001A1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001A20:
    // 0x60001A20: jal         0x60001770
    // 0x60001A24: nop

    ovl_stage_world2_1770(rdram, ctx);
        goto after_7;
    // 0x60001A24: nop

    after_7:
    // 0x60001A28: b           L_60001A58
    // 0x60001A2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60001A58;
    // 0x60001A2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001A30:
    // 0x60001A30: jal         0x600016B4
    // 0x60001A34: nop

    ovl_stage_world2_16B4(rdram, ctx);
        goto after_8;
    // 0x60001A34: nop

    after_8:
    // 0x60001A38: b           L_60001A58
    // 0x60001A3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60001A58;
    // 0x60001A3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001A40:
    // 0x60001A40: jal         0x6000034C
    // 0x60001A44: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
    ovl_stage_world2_34C(rdram, ctx);
        goto after_9;
    // 0x60001A44: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
    after_9:
    // 0x60001A48: addiu       $t2, $v0, 0x1E
    ctx->r10 = ADD32(ctx->r2, 0X1E);
    // 0x60001A4C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001A50: sw          $t2, 0x5CB8($at)
    MEM_W(0X5CB8, ctx->r1) = ctx->r10;
    // 0x60001A54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001A58:
    // 0x60001A58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60001A5C: jr          $ra
    // 0x60001A60: nop

    return;
    // 0x60001A60: nop

;}
RECOMP_FUNC void ovl_stage_world2_1A64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001A64: lui         $t6, 0x6000
    ctx->r14 = S32(0X6000 << 16);
    // 0x60001A68: lw          $t6, 0x5D38($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5D38);
    // 0x60001A6C: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x60001A70: andi        $t7, $t6, 0x82B7
    ctx->r15 = ctx->r14 & 0X82B7;
    // 0x60001A74: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x60001A78: bne         $t7, $zero, L_60001A88
    if (ctx->r15 != 0) {
        // 0x60001A7C: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_60001A88;
    }
    // 0x60001A7C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x60001A80: b           L_60001A8C
    // 0x60001A84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_60001A8C;
    // 0x60001A84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_60001A88:
    // 0x60001A88: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_60001A8C:
    // 0x60001A8C: beq         $v0, $zero, L_60001AA4
    if (ctx->r2 == 0) {
        // 0x60001A90: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_60001AA4;
    }
    // 0x60001A90: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60001A94: lw          $a0, 0x5B44($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5B44);
    // 0x60001A98: jal         0x60000F28
    // 0x60001A9C: nop

    ovl_stage_world2_F28(rdram, ctx);
        goto after_0;
    // 0x60001A9C: nop

    after_0:
    // 0x60001AA0: bne         $v0, $zero, L_60001ACC
    if (ctx->r2 != 0) {
        // 0x60001AA4: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_60001ACC;
    }
L_60001AA4:
    // 0x60001AA4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x60001AA8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001AAC: lui         $a3, 0x6000
    ctx->r7 = S32(0X6000 << 16);
    // 0x60001AB0: sw          $t8, 0x5CB4($at)
    MEM_W(0X5CB4, ctx->r1) = ctx->r24;
    // 0x60001AB4: addiu       $a3, $a3, 0x5CB8
    ctx->r7 = ADD32(ctx->r7, 0X5CB8);
    // 0x60001AB8: addiu       $t9, $zero, 0x1E
    ctx->r25 = ADD32(0, 0X1E);
    // 0x60001ABC: sw          $t9, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r25;
    // 0x60001AC0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001AC4: b           L_60001E30
    // 0x60001AC8: sw          $zero, 0x5CD8($at)
    MEM_W(0X5CD8, ctx->r1) = 0;
        goto L_60001E30;
    // 0x60001AC8: sw          $zero, 0x5CD8($at)
    MEM_W(0X5CD8, ctx->r1) = 0;
L_60001ACC:
    // 0x60001ACC: jal         0x6000034C
    // 0x60001AD0: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    ovl_stage_world2_34C(rdram, ctx);
        goto after_1;
    // 0x60001AD0: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_1:
    // 0x60001AD4: slti        $at, $v0, 0x32
    ctx->r1 = SIGNED(ctx->r2) < 0X32 ? 1 : 0;
    // 0x60001AD8: beq         $at, $zero, L_60001B40
    if (ctx->r1 == 0) {
        // 0x60001ADC: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_60001B40;
    }
    // 0x60001ADC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x60001AE0: lui         $t0, 0x6000
    ctx->r8 = S32(0X6000 << 16);
    // 0x60001AE4: lw          $t0, 0x5CD4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X5CD4);
    // 0x60001AE8: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60001AEC: slti        $at, $t0, 0x5A
    ctx->r1 = SIGNED(ctx->r8) < 0X5A ? 1 : 0;
    // 0x60001AF0: bne         $at, $zero, L_60001B40
    if (ctx->r1 != 0) {
        // 0x60001AF4: addiu       $v0, $v0, 0x5B60
        ctx->r2 = ADD32(ctx->r2, 0X5B60);
            goto L_60001B40;
    }
    // 0x60001AF4: addiu       $v0, $v0, 0x5B60
    ctx->r2 = ADD32(ctx->r2, 0X5B60);
    // 0x60001AF8: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x60001AFC: addiu       $v1, $v1, 0x5D20
    ctx->r3 = ADD32(ctx->r3, 0X5D20);
    // 0x60001B00: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x60001B04: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x60001B08: lwc1        $f6, 0x4($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X4);
    // 0x60001B0C: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x60001B10: lwc1        $f16, 0x8($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X8);
    // 0x60001B14: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x60001B18: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    // 0x60001B1C: swc1        $f10, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f10.u32l;
    // 0x60001B20: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x60001B24: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x60001B28: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    // 0x60001B2C: swc1        $f4, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f4.u32l;
    // 0x60001B30: jal         0x600006C4
    // 0x60001B34: swc1        $f16, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f16.u32l;
    ovl_stage_world2_6C4(rdram, ctx);
        goto after_2;
    // 0x60001B34: swc1        $f16, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f16.u32l;
    after_2:
    // 0x60001B38: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001B3C: sw          $zero, 0x5CD4($at)
    MEM_W(0X5CD4, ctx->r1) = 0;
L_60001B40:
    // 0x60001B40: lui         $t1, 0x6000
    ctx->r9 = S32(0X6000 << 16);
    // 0x60001B44: lw          $t1, 0x5D34($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X5D34);
    // 0x60001B48: nop

    // 0x60001B4C: lw          $t2, 0x2C($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X2C);
    // 0x60001B50: nop

    // 0x60001B54: slti        $at, $t2, 0x4
    ctx->r1 = SIGNED(ctx->r10) < 0X4 ? 1 : 0;
    // 0x60001B58: beq         $at, $zero, L_60001B8C
    if (ctx->r1 == 0) {
        // 0x60001B5C: lui         $a2, 0x6000
        ctx->r6 = S32(0X6000 << 16);
            goto L_60001B8C;
    }
    // 0x60001B5C: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60001B60: addiu       $a2, $a2, 0x5D30
    ctx->r6 = ADD32(ctx->r6, 0X5D30);
    // 0x60001B64: lw          $t3, 0x0($a2)
    ctx->r11 = MEM_W(ctx->r6, 0X0);
    // 0x60001B68: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x60001B6C: bne         $a0, $t3, L_60001B8C
    if (ctx->r4 != ctx->r11) {
        // 0x60001B70: slti        $at, $s0, 0x29
        ctx->r1 = SIGNED(ctx->r16) < 0X29 ? 1 : 0;
            goto L_60001B8C;
    }
    // 0x60001B70: slti        $at, $s0, 0x29
    ctx->r1 = SIGNED(ctx->r16) < 0X29 ? 1 : 0;
    // 0x60001B74: bne         $at, $zero, L_60001B8C
    if (ctx->r1 != 0) {
        // 0x60001B78: slti        $at, $s0, 0x42
        ctx->r1 = SIGNED(ctx->r16) < 0X42 ? 1 : 0;
            goto L_60001B8C;
    }
    // 0x60001B78: slti        $at, $s0, 0x42
    ctx->r1 = SIGNED(ctx->r16) < 0X42 ? 1 : 0;
    // 0x60001B7C: beq         $at, $zero, L_60001B8C
    if (ctx->r1 == 0) {
        // 0x60001B80: nop
    
            goto L_60001B8C;
    }
    // 0x60001B80: nop

    // 0x60001B84: b           L_60001E30
    // 0x60001B88: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
        goto L_60001E30;
    // 0x60001B88: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
L_60001B8C:
    // 0x60001B8C: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60001B90: lui         $t4, 0x6000
    ctx->r12 = S32(0X6000 << 16);
    // 0x60001B94: lw          $t4, 0x5CB4($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X5CB4);
    // 0x60001B98: addiu       $a2, $a2, 0x5D30
    ctx->r6 = ADD32(ctx->r6, 0X5D30);
    // 0x60001B9C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x60001BA0: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x60001BA4: bne         $a1, $t4, L_60001BB0
    if (ctx->r5 != ctx->r12) {
        // 0x60001BA8: addiu       $a0, $zero, -0x1
        ctx->r4 = ADD32(0, -0X1);
            goto L_60001BB0;
    }
    // 0x60001BA8: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x60001BAC: beq         $a0, $v0, L_60001CEC
    if (ctx->r4 == ctx->r2) {
        // 0x60001BB0: lui         $v1, 0x6000
        ctx->r3 = S32(0X6000 << 16);
            goto L_60001CEC;
    }
L_60001BB0:
    // 0x60001BB0: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x60001BB4: addiu       $v1, $v1, 0x5D2C
    ctx->r3 = ADD32(ctx->r3, 0X5D2C);
    // 0x60001BB8: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x60001BBC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x60001BC0: beq         $t5, $at, L_60001BD0
    if (ctx->r13 == ctx->r1) {
        // 0x60001BC4: lui         $a3, 0x6000
        ctx->r7 = S32(0X6000 << 16);
            goto L_60001BD0;
    }
    // 0x60001BC4: lui         $a3, 0x6000
    ctx->r7 = S32(0X6000 << 16);
    // 0x60001BC8: beq         $a0, $v0, L_60001C30
    if (ctx->r4 == ctx->r2) {
        // 0x60001BCC: nop
    
            goto L_60001C30;
    }
    // 0x60001BCC: nop

L_60001BD0:
    // 0x60001BD0: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x60001BD4: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001BD8: sw          $a1, 0x5CB4($at)
    MEM_W(0X5CB4, ctx->r1) = ctx->r5;
    // 0x60001BDC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001BE0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x60001BE4: addiu       $a3, $a3, 0x5CB8
    ctx->r7 = ADD32(ctx->r7, 0X5CB8);
    // 0x60001BE8: sw          $t6, 0x5CBC($at)
    MEM_W(0X5CBC, ctx->r1) = ctx->r14;
    // 0x60001BEC: addiu       $t7, $zero, 0x2D
    ctx->r15 = ADD32(0, 0X2D);
    // 0x60001BF0: beq         $a0, $v0, L_60001C14
    if (ctx->r4 == ctx->r2) {
        // 0x60001BF4: sw          $t7, 0x0($a3)
        MEM_W(0X0, ctx->r7) = ctx->r15;
            goto L_60001C14;
    }
    // 0x60001BF4: sw          $t7, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r15;
    // 0x60001BF8: addiu       $t9, $v0, 0x1
    ctx->r25 = ADD32(ctx->r2, 0X1);
    // 0x60001BFC: addiu       $t8, $zero, 0x1E
    ctx->r24 = ADD32(0, 0X1E);
    // 0x60001C00: slti        $at, $t9, 0x3
    ctx->r1 = SIGNED(ctx->r25) < 0X3 ? 1 : 0;
    // 0x60001C04: sw          $t8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r24;
    // 0x60001C08: bne         $at, $zero, L_60001C14
    if (ctx->r1 != 0) {
        // 0x60001C0C: sw          $t9, 0x0($a2)
        MEM_W(0X0, ctx->r6) = ctx->r25;
            goto L_60001C14;
    }
    // 0x60001C0C: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x60001C10: sw          $a0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r4;
L_60001C14:
    // 0x60001C14: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x60001C18: addiu       $a0, $zero, 0x35
    ctx->r4 = ADD32(0, 0X35);
    // 0x60001C1C: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x60001C20: jal         0x600014F0
    // 0x60001C24: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
    ovl_stage_world2_14F0(rdram, ctx);
        goto after_3;
    // 0x60001C24: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
    after_3:
    // 0x60001C28: b           L_60001E34
    // 0x60001C2C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_60001E34;
    // 0x60001C2C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_60001C30:
    // 0x60001C30: jal         0x6000034C
    // 0x60001C34: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    ovl_stage_world2_34C(rdram, ctx);
        goto after_4;
    // 0x60001C34: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_4:
    // 0x60001C38: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x60001C3C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x60001C40: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001C44: lwc1        $f4, 0x5CC0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5CC0);
    // 0x60001C48: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x60001C4C: c.le.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl <= ctx->f18.fl;
    // 0x60001C50: addiu       $v1, $v1, 0x5D2C
    ctx->r3 = ADD32(ctx->r3, 0X5D2C);
    // 0x60001C54: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x60001C58: bc1f        L_60001C64
    if (!c1cs) {
        // 0x60001C5C: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_60001C64;
    }
    // 0x60001C5C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x60001C60: addiu       $s0, $v0, 0x1E
    ctx->r16 = ADD32(ctx->r2, 0X1E);
L_60001C64:
    // 0x60001C64: slti        $at, $s0, 0x1E
    ctx->r1 = SIGNED(ctx->r16) < 0X1E ? 1 : 0;
    // 0x60001C68: beq         $at, $zero, L_60001CA8
    if (ctx->r1 == 0) {
        // 0x60001C6C: lui         $a3, 0x6000
        ctx->r7 = S32(0X6000 << 16);
            goto L_60001CA8;
    }
    // 0x60001C6C: lui         $a3, 0x6000
    ctx->r7 = S32(0X6000 << 16);
    // 0x60001C70: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001C74: sw          $a1, 0x5CB4($at)
    MEM_W(0X5CB4, ctx->r1) = ctx->r5;
    // 0x60001C78: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001C7C: sw          $zero, 0x5CBC($at)
    MEM_W(0X5CBC, ctx->r1) = 0;
    // 0x60001C80: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x60001C84: addiu       $a3, $a3, 0x5CB8
    ctx->r7 = ADD32(ctx->r7, 0X5CB8);
    // 0x60001C88: addiu       $t3, $zero, 0x1E
    ctx->r11 = ADD32(0, 0X1E);
    // 0x60001C8C: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x60001C90: sw          $t3, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r11;
    // 0x60001C94: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
    // 0x60001C98: jal         0x600014F0
    // 0x60001C9C: addiu       $a0, $zero, 0x2F
    ctx->r4 = ADD32(0, 0X2F);
    ovl_stage_world2_14F0(rdram, ctx);
        goto after_5;
    // 0x60001C9C: addiu       $a0, $zero, 0x2F
    ctx->r4 = ADD32(0, 0X2F);
    after_5:
    // 0x60001CA0: b           L_60001E34
    // 0x60001CA4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_60001E34;
    // 0x60001CA4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_60001CA8:
    // 0x60001CA8: slti        $at, $s0, 0x37
    ctx->r1 = SIGNED(ctx->r16) < 0X37 ? 1 : 0;
    // 0x60001CAC: beq         $at, $zero, L_60001CEC
    if (ctx->r1 == 0) {
        // 0x60001CB0: lui         $a3, 0x6000
        ctx->r7 = S32(0X6000 << 16);
            goto L_60001CEC;
    }
    // 0x60001CB0: lui         $a3, 0x6000
    ctx->r7 = S32(0X6000 << 16);
    // 0x60001CB4: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001CB8: sw          $a1, 0x5CB4($at)
    MEM_W(0X5CB4, ctx->r1) = ctx->r5;
    // 0x60001CBC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001CC0: sw          $a1, 0x5CBC($at)
    MEM_W(0X5CBC, ctx->r1) = ctx->r5;
    // 0x60001CC4: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x60001CC8: addiu       $a3, $a3, 0x5CB8
    ctx->r7 = ADD32(ctx->r7, 0X5CB8);
    // 0x60001CCC: addiu       $t6, $zero, 0x1E
    ctx->r14 = ADD32(0, 0X1E);
    // 0x60001CD0: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x60001CD4: sw          $t6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r14;
    // 0x60001CD8: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x60001CDC: jal         0x600014F0
    // 0x60001CE0: addiu       $a0, $zero, 0x36
    ctx->r4 = ADD32(0, 0X36);
    ovl_stage_world2_14F0(rdram, ctx);
        goto after_6;
    // 0x60001CE0: addiu       $a0, $zero, 0x36
    ctx->r4 = ADD32(0, 0X36);
    after_6:
    // 0x60001CE4: b           L_60001E34
    // 0x60001CE8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_60001E34;
    // 0x60001CE8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_60001CEC:
    // 0x60001CEC: jal         0x600006DC
    // 0x60001CF0: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    ovl_stage_world2_6DC(rdram, ctx);
        goto after_7;
    // 0x60001CF0: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    after_7:
    // 0x60001CF4: beq         $v0, $zero, L_60001E28
    if (ctx->r2 == 0) {
        // 0x60001CF8: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_60001E28;
    }
    // 0x60001CF8: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x60001CFC: blez        $v0, L_60001E28
    if (SIGNED(ctx->r2) <= 0) {
        // 0x60001D00: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_60001E28;
    }
    // 0x60001D00: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x60001D04: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_60001D08:
    // 0x60001D08: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x60001D0C: lui         $a1, 0x6000
    ctx->r5 = S32(0X6000 << 16);
    // 0x60001D10: addu        $t0, $t9, $s0
    ctx->r8 = ADD32(ctx->r25, ctx->r16);
    // 0x60001D14: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x60001D18: addiu       $a1, $a1, 0x5D10
    ctx->r5 = ADD32(ctx->r5, 0X5D10);
    // 0x60001D1C: lw          $a0, 0x0($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X0);
    // 0x60001D20: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x60001D24: jal         0x60000418
    // 0x60001D28: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    ovl_stage_world2_418(rdram, ctx);
        goto after_8;
    // 0x60001D28: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    after_8:
    // 0x60001D2C: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x60001D30: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60001D34: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x60001D38: c.le.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl <= ctx->f6.fl;
    // 0x60001D3C: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x60001D40: bc1f        L_60001E20
    if (!c1cs) {
        // 0x60001D44: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_60001E20;
    }
    // 0x60001D44: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x60001D48: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x60001D4C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60001D50: addu        $t3, $t2, $s0
    ctx->r11 = ADD32(ctx->r10, ctx->r16);
    // 0x60001D54: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x60001D58: addiu       $a0, $a0, 0x5D10
    ctx->r4 = ADD32(ctx->r4, 0X5D10);
    // 0x60001D5C: lw          $a1, 0x0($t4)
    ctx->r5 = MEM_W(ctx->r12, 0X0);
    // 0x60001D60: jal         0x600003DC
    // 0x60001D64: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    ovl_stage_world2_3DC(rdram, ctx);
        goto after_9;
    // 0x60001D64: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    after_9:
    // 0x60001D68: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001D6C: lwc1        $f13, 0x5BB8($at)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r1, 0X5BB8);
    // 0x60001D70: lwc1        $f12, 0x5BBC($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X5BBC);
    // 0x60001D74: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001D78: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x60001D7C: lwc1        $f17, 0x5BC0($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X5BC0);
    // 0x60001D80: lwc1        $f16, 0x5BC4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X5BC4);
    // 0x60001D84: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x60001D88: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x60001D8C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001D90: lwc1        $f5, 0x5BC8($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X5BC8);
    // 0x60001D94: lwc1        $f4, 0x5BCC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5BCC);
    // 0x60001D98: lui         $a3, 0x6000
    ctx->r7 = S32(0X6000 << 16);
    // 0x60001D9C: add.d       $f0, $f18, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f0.d = ctx->f18.d + ctx->f4.d;
    // 0x60001DA0: addiu       $a3, $a3, 0x5CB8
    ctx->r7 = ADD32(ctx->r7, 0X5CB8);
    // 0x60001DA4: c.le.d      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.d <= ctx->f0.d;
    // 0x60001DA8: addiu       $t5, $zero, 0x1E
    ctx->r13 = ADD32(0, 0X1E);
    // 0x60001DAC: bc1f        L_60001DC8
    if (!c1cs) {
        // 0x60001DB0: nop
    
            goto L_60001DC8;
    }
    // 0x60001DB0: nop

    // 0x60001DB4: sub.d       $f6, $f0, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f6.d = ctx->f0.d - ctx->f12.d;
    // 0x60001DB8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001DBC: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x60001DC0: b           L_60001DFC
    // 0x60001DC4: swc1        $f8, 0x5CD0($at)
    MEM_W(0X5CD0, ctx->r1) = ctx->f8.u32l;
        goto L_60001DFC;
    // 0x60001DC4: swc1        $f8, 0x5CD0($at)
    MEM_W(0X5CD0, ctx->r1) = ctx->f8.u32l;
L_60001DC8:
    // 0x60001DC8: mtc1        $zero, $f11
    ctx->f_odd[(11 - 1) * 2] = 0;
    // 0x60001DCC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x60001DD0: nop

    // 0x60001DD4: c.lt.d      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.d < ctx->f10.d;
    // 0x60001DD8: nop

    // 0x60001DDC: bc1f        L_60001DEC
    if (!c1cs) {
        // 0x60001DE0: nop
    
            goto L_60001DEC;
    }
    // 0x60001DE0: nop

    // 0x60001DE4: b           L_60001DF0
    // 0x60001DE8: add.d       $f2, $f0, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f2.d = ctx->f0.d + ctx->f12.d;
        goto L_60001DF0;
    // 0x60001DE8: add.d       $f2, $f0, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f2.d = ctx->f0.d + ctx->f12.d;
L_60001DEC:
    // 0x60001DEC: mov.d       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.d = ctx->f0.d;
L_60001DF0:
    // 0x60001DF0: cvt.s.d     $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f16.fl = CVT_S_D(ctx->f2.d);
    // 0x60001DF4: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001DF8: swc1        $f16, 0x5CD0($at)
    MEM_W(0X5CD0, ctx->r1) = ctx->f16.u32l;
L_60001DFC:
    // 0x60001DFC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001E00: sw          $zero, 0x5CB4($at)
    MEM_W(0X5CB4, ctx->r1) = 0;
    // 0x60001E04: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001E08: sw          $zero, 0x5CBC($at)
    MEM_W(0X5CBC, ctx->r1) = 0;
    // 0x60001E0C: sw          $t5, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r13;
    // 0x60001E10: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001E14: b           L_60001E30
    // 0x60001E18: sw          $zero, 0x5CD8($at)
    MEM_W(0X5CD8, ctx->r1) = 0;
        goto L_60001E30;
    // 0x60001E18: sw          $zero, 0x5CD8($at)
    MEM_W(0X5CD8, ctx->r1) = 0;
    // 0x60001E1C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_60001E20:
    // 0x60001E20: bne         $v1, $a2, L_60001D08
    if (ctx->r3 != ctx->r6) {
        // 0x60001E24: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_60001D08;
    }
    // 0x60001E24: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_60001E28:
    // 0x60001E28: jal         0x60001924
    // 0x60001E2C: nop

    ovl_stage_world2_1924(rdram, ctx);
        goto after_10;
    // 0x60001E2C: nop

    after_10:
L_60001E30:
    // 0x60001E30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_60001E34:
    // 0x60001E34: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x60001E38: jr          $ra
    // 0x60001E3C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x60001E3C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void ovl_stage_world2_1E40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001E40: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60001E44: lw          $v0, 0x5CB4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5CB4);
    // 0x60001E48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60001E4C: beq         $v0, $zero, L_60001E70
    if (ctx->r2 == 0) {
        // 0x60001E50: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_60001E70;
    }
    // 0x60001E50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60001E54: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x60001E58: beq         $v0, $at, L_60001FD4
    if (ctx->r2 == ctx->r1) {
        // 0x60001E5C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_60001FD4;
    }
    // 0x60001E5C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x60001E60: beq         $v0, $at, L_60002010
    if (ctx->r2 == ctx->r1) {
        // 0x60001E64: lui         $t3, 0x6000
        ctx->r11 = S32(0X6000 << 16);
            goto L_60002010;
    }
    // 0x60001E64: lui         $t3, 0x6000
    ctx->r11 = S32(0X6000 << 16);
    // 0x60001E68: b           L_60002068
    // 0x60001E6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60002068;
    // 0x60001E6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001E70:
    // 0x60001E70: lui         $t6, 0x6000
    ctx->r14 = S32(0X6000 << 16);
    // 0x60001E74: lw          $t6, 0x5CD8($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5CD8);
    // 0x60001E78: nop

    // 0x60001E7C: slti        $at, $t6, 0x3
    ctx->r1 = SIGNED(ctx->r14) < 0X3 ? 1 : 0;
    // 0x60001E80: bne         $at, $zero, L_60001EA8
    if (ctx->r1 != 0) {
        // 0x60001E84: nop
    
            goto L_60001EA8;
    }
    // 0x60001E84: nop

    // 0x60001E88: jal         0x60001888
    // 0x60001E8C: nop

    ovl_stage_world2_1888(rdram, ctx);
        goto after_0;
    // 0x60001E8C: nop

    after_0:
    // 0x60001E90: beq         $v0, $zero, L_60001EA8
    if (ctx->r2 == 0) {
        // 0x60001E94: nop
    
            goto L_60001EA8;
    }
    // 0x60001E94: nop

    // 0x60001E98: jal         0x60001924
    // 0x60001E9C: nop

    ovl_stage_world2_1924(rdram, ctx);
        goto after_1;
    // 0x60001E9C: nop

    after_1:
    // 0x60001EA0: b           L_60002068
    // 0x60001EA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60002068;
    // 0x60001EA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001EA8:
    // 0x60001EA8: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60001EAC: addiu       $v0, $v0, 0x5CB8
    ctx->r2 = ADD32(ctx->r2, 0X5CB8);
    // 0x60001EB0: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x60001EB4: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x60001EB8: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x60001EBC: blez        $t8, L_60001FC4
    if (SIGNED(ctx->r24) <= 0) {
        // 0x60001EC0: sw          $t8, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r24;
            goto L_60001FC4;
    }
    // 0x60001EC0: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x60001EC4: addiu       $v1, $v1, 0x5D10
    ctx->r3 = ADD32(ctx->r3, 0X5D10);
    // 0x60001EC8: lui         $at, 0x4366
    ctx->r1 = S32(0X4366 << 16);
    // 0x60001ECC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60001ED0: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x60001ED4: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60001ED8: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x60001EDC: addiu       $v0, $v0, 0x5CD0
    ctx->r2 = ADD32(ctx->r2, 0X5CD0);
    // 0x60001EE0: bc1f        L_60001F00
    if (!c1cs) {
        // 0x60001EE4: lui         $at, 0x4387
        ctx->r1 = S32(0X4387 << 16);
            goto L_60001F00;
    }
    // 0x60001EE4: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x60001EE8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60001EEC: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x60001EF0: nop

    // 0x60001EF4: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x60001EF8: nop

    // 0x60001EFC: bc1t        L_60001FA4
    if (c1cs) {
        // 0x60001F00: lui         $at, 0x4466
        ctx->r1 = S32(0X4466 << 16);
            goto L_60001FA4;
    }
L_60001F00:
    // 0x60001F00: lui         $at, 0x4466
    ctx->r1 = S32(0X4466 << 16);
    // 0x60001F04: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x60001F08: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60001F0C: c.le.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl <= ctx->f0.fl;
    // 0x60001F10: addiu       $v0, $v0, 0x5CD0
    ctx->r2 = ADD32(ctx->r2, 0X5CD0);
    // 0x60001F14: bc1f        L_60001F34
    if (!c1cs) {
        // 0x60001F18: lui         $at, 0x42B4
        ctx->r1 = S32(0X42B4 << 16);
            goto L_60001F34;
    }
    // 0x60001F18: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x60001F1C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x60001F20: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x60001F24: nop

    // 0x60001F28: c.eq.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl == ctx->f18.fl;
    // 0x60001F2C: nop

    // 0x60001F30: bc1t        L_60001FA4
    if (c1cs) {
        // 0x60001F34: lui         $at, 0x6000
        ctx->r1 = S32(0X6000 << 16);
            goto L_60001FA4;
    }
L_60001F34:
    // 0x60001F34: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001F38: lwc1        $f4, 0x5BD0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5BD0);
    // 0x60001F3C: lwc1        $f0, 0x8($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X8);
    // 0x60001F40: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x60001F44: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x60001F48: nop

    // 0x60001F4C: bc1f        L_60001F70
    if (!c1cs) {
        // 0x60001F50: nop
    
            goto L_60001F70;
    }
    // 0x60001F50: nop

    // 0x60001F54: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x60001F58: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x60001F5C: nop

    // 0x60001F60: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x60001F64: nop

    // 0x60001F68: bc1t        L_60001FA4
    if (c1cs) {
        // 0x60001F6C: nop
    
            goto L_60001FA4;
    }
    // 0x60001F6C: nop

L_60001F70:
    // 0x60001F70: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x60001F74: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x60001F78: c.le.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl <= ctx->f10.fl;
    // 0x60001F7C: nop

    // 0x60001F80: bc1f        L_60001FB4
    if (!c1cs) {
        // 0x60001F84: nop
    
            goto L_60001FB4;
    }
    // 0x60001F84: nop

    // 0x60001F88: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x60001F8C: lwc1        $f18, 0x0($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X0);
    // 0x60001F90: nop

    // 0x60001F94: c.eq.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl == ctx->f18.fl;
    // 0x60001F98: nop

    // 0x60001F9C: bc1f        L_60001FB4
    if (!c1cs) {
        // 0x60001FA0: nop
    
            goto L_60001FB4;
    }
    // 0x60001FA0: nop

L_60001FA4:
    // 0x60001FA4: jal         0x60001A64
    // 0x60001FA8: nop

    ovl_stage_world2_1A64(rdram, ctx);
        goto after_2;
    // 0x60001FA8: nop

    after_2:
    // 0x60001FAC: b           L_60002068
    // 0x60001FB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60002068;
    // 0x60001FB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001FB4:
    // 0x60001FB4: jal         0x60001588
    // 0x60001FB8: nop

    ovl_stage_world2_1588(rdram, ctx);
        goto after_3;
    // 0x60001FB8: nop

    after_3:
    // 0x60001FBC: b           L_60002068
    // 0x60001FC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60002068;
    // 0x60001FC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001FC4:
    // 0x60001FC4: jal         0x60001A64
    // 0x60001FC8: nop

    ovl_stage_world2_1A64(rdram, ctx);
        goto after_4;
    // 0x60001FC8: nop

    after_4:
    // 0x60001FCC: b           L_60002068
    // 0x60001FD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60002068;
    // 0x60001FD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001FD4:
    // 0x60001FD4: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60001FD8: addiu       $v0, $v0, 0x5CB8
    ctx->r2 = ADD32(ctx->r2, 0X5CB8);
    // 0x60001FDC: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x60001FE0: nop

    // 0x60001FE4: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x60001FE8: blez        $t1, L_60002000
    if (SIGNED(ctx->r9) <= 0) {
        // 0x60001FEC: sw          $t1, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r9;
            goto L_60002000;
    }
    // 0x60001FEC: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x60001FF0: jal         0x60001568
    // 0x60001FF4: nop

    ovl_stage_world2_1568(rdram, ctx);
        goto after_5;
    // 0x60001FF4: nop

    after_5:
    // 0x60001FF8: b           L_60002068
    // 0x60001FFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60002068;
    // 0x60001FFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60002000:
    // 0x60002000: jal         0x60001A64
    // 0x60002004: nop

    ovl_stage_world2_1A64(rdram, ctx);
        goto after_6;
    // 0x60002004: nop

    after_6:
    // 0x60002008: b           L_60002068
    // 0x6000200C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60002068;
    // 0x6000200C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60002010:
    // 0x60002010: lw          $t3, 0x5D38($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X5D38);
    // 0x60002014: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x60002018: andi        $t4, $t3, 0x8000
    ctx->r12 = ctx->r11 & 0X8000;
    // 0x6000201C: beq         $t4, $zero, L_6000202C
    if (ctx->r12 == 0) {
        // 0x60002020: nop
    
            goto L_6000202C;
    }
    // 0x60002020: nop

    // 0x60002024: b           L_6000202C
    // 0x60002028: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_6000202C;
    // 0x60002028: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_6000202C:
    // 0x6000202C: bne         $v0, $zero, L_60002064
    if (ctx->r2 != 0) {
        // 0x60002030: lui         $v0, 0x6000
        ctx->r2 = S32(0X6000 << 16);
            goto L_60002064;
    }
    // 0x60002030: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60002034: addiu       $v0, $v0, 0x5CB8
    ctx->r2 = ADD32(ctx->r2, 0X5CB8);
    // 0x60002038: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x6000203C: nop

    // 0x60002040: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x60002044: blez        $t6, L_6000205C
    if (SIGNED(ctx->r14) <= 0) {
        // 0x60002048: sw          $t6, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r14;
            goto L_6000205C;
    }
    // 0x60002048: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x6000204C: jal         0x60001544
    // 0x60002050: nop

    ovl_stage_world2_1544(rdram, ctx);
        goto after_7;
    // 0x60002050: nop

    after_7:
    // 0x60002054: b           L_60002068
    // 0x60002058: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60002068;
    // 0x60002058: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000205C:
    // 0x6000205C: jal         0x60001A64
    // 0x60002060: nop

    ovl_stage_world2_1A64(rdram, ctx);
        goto after_8;
    // 0x60002060: nop

    after_8:
L_60002064:
    // 0x60002064: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60002068:
    // 0x60002068: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x6000206C: jr          $ra
    // 0x60002070: nop

    return;
    // 0x60002070: nop

;}
RECOMP_FUNC void ovl_stage_world2_2074(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002074: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60002078: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x6000207C: addiu       $a2, $a2, 0x5D40
    ctx->r6 = ADD32(ctx->r6, 0X5D40);
    // 0x60002080: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60002084: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x60002088: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
    // 0x6000208C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x60002090: jal         0x60000808
    // 0x60002094: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_stage_world2_808(rdram, ctx);
        goto after_0;
    // 0x60002094: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x60002098: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x6000209C: addiu       $a2, $a2, 0x5D40
    ctx->r6 = ADD32(ctx->r6, 0X5D40);
    // 0x600020A0: sh          $zero, 0x0($a2)
    MEM_H(0X0, ctx->r6) = 0;
    // 0x600020A4: sh          $zero, 0x2($a2)
    MEM_H(0X2, ctx->r6) = 0;
    // 0x600020A8: sh          $zero, 0x4($a2)
    MEM_H(0X4, ctx->r6) = 0;
    // 0x600020AC: sb          $zero, 0x6($a2)
    MEM_B(0X6, ctx->r6) = 0;
    // 0x600020B0: sb          $zero, 0x7($a2)
    MEM_B(0X7, ctx->r6) = 0;
    // 0x600020B4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x600020B8: jal         0x60000808
    // 0x600020BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world2_808(rdram, ctx);
        goto after_1;
    // 0x600020BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x600020C0: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x600020C4: addiu       $v0, $v0, 0x5CD8
    ctx->r2 = ADD32(ctx->r2, 0X5CD8);
    // 0x600020C8: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x600020CC: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600020D0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600020D4: lw          $a0, 0x5B44($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5B44);
    // 0x600020D8: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x600020DC: sw          $zero, 0x5CD4($at)
    MEM_W(0X5CD4, ctx->r1) = 0;
    // 0x600020E0: addiu       $a2, $a2, 0x5CE0
    ctx->r6 = ADD32(ctx->r6, 0X5CE0);
    // 0x600020E4: jal         0x600006C4
    // 0x600020E8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_stage_world2_6C4(rdram, ctx);
        goto after_2;
    // 0x600020E8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_2:
    // 0x600020EC: jal         0x60000DE4
    // 0x600020F0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world2_DE4(rdram, ctx);
        goto after_3;
    // 0x600020F0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x600020F4: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x600020F8: addiu       $a2, $a2, 0x5CF8
    ctx->r6 = ADD32(ctx->r6, 0X5CF8);
    // 0x600020FC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60002100: jal         0x600006C4
    // 0x60002104: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_stage_world2_6C4(rdram, ctx);
        goto after_4;
    // 0x60002104: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_4:
    // 0x60002108: jal         0x60001338
    // 0x6000210C: nop

    ovl_stage_world2_1338(rdram, ctx);
        goto after_5;
    // 0x6000210C: nop

    after_5:
    // 0x60002110: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002114: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x60002118: sw          $zero, 0x5CBC($at)
    MEM_W(0X5CBC, ctx->r1) = 0;
    // 0x6000211C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002120: swc1        $f4, 0x5CD0($at)
    MEM_W(0X5CD0, ctx->r1) = ctx->f4.u32l;
    // 0x60002124: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002128: sw          $zero, 0x5D2C($at)
    MEM_W(0X5D2C, ctx->r1) = 0;
    // 0x6000212C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002130: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x60002134: sw          $t8, 0x5D30($at)
    MEM_W(0X5D30, ctx->r1) = ctx->r24;
    // 0x60002138: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000213C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x60002140: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002144: sw          $t9, 0x5CB4($at)
    MEM_W(0X5CB4, ctx->r1) = ctx->r25;
    // 0x60002148: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000214C: addiu       $t0, $zero, 0xF
    ctx->r8 = ADD32(0, 0XF);
    // 0x60002150: sw          $t0, 0x5CB8($at)
    MEM_W(0X5CB8, ctx->r1) = ctx->r8;
    // 0x60002154: jr          $ra
    // 0x60002158: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x60002158: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void ovl_stage_world2_215C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000215C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x60002160: beq         $a0, $zero, L_600021E8
    if (ctx->r4 == 0) {
        // 0x60002164: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_600021E8;
    }
    // 0x60002164: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60002168: jal         0x60000DE4
    // 0x6000216C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world2_DE4(rdram, ctx);
        goto after_0;
    // 0x6000216C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x60002170: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60002174: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x60002178: jal         0x600006C4
    // 0x6000217C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world2_6C4(rdram, ctx);
        goto after_1;
    // 0x6000217C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x60002180: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x60002184: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x60002188: ori         $t7, $t6, 0x80
    ctx->r15 = ctx->r14 | 0X80;
    // 0x6000218C: jal         0x60000DE4
    // 0x60002190: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    ovl_stage_world2_DE4(rdram, ctx);
        goto after_2;
    // 0x60002190: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    after_2:
    // 0x60002194: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60002198: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x6000219C: jal         0x600006C4
    // 0x600021A0: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world2_6C4(rdram, ctx);
        goto after_3;
    // 0x600021A0: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_3:
    // 0x600021A4: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x600021A8: addiu       $a2, $a2, 0x5D48
    ctx->r6 = ADD32(ctx->r6, 0X5D48);
    // 0x600021AC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x600021B0: jal         0x60000808
    // 0x600021B4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_stage_world2_808(rdram, ctx);
        goto after_4;
    // 0x600021B4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_4:
    // 0x600021B8: lui         $t8, 0x6000
    ctx->r24 = S32(0X6000 << 16);
    // 0x600021BC: lw          $t8, 0x5D48($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X5D48);
    // 0x600021C0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600021C4: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x600021C8: ori         $t9, $t8, 0x100
    ctx->r25 = ctx->r24 | 0X100;
    // 0x600021CC: sw          $t9, 0x5D48($at)
    MEM_W(0X5D48, ctx->r1) = ctx->r25;
    // 0x600021D0: addiu       $a2, $a2, 0x5D48
    ctx->r6 = ADD32(ctx->r6, 0X5D48);
    // 0x600021D4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x600021D8: jal         0x60000808
    // 0x600021DC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_stage_world2_808(rdram, ctx);
        goto after_5;
    // 0x600021DC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_5:
    // 0x600021E0: b           L_6000226C
    // 0x600021E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_6000226C;
    // 0x600021E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600021E8:
    // 0x600021E8: jal         0x60000DE4
    // 0x600021EC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world2_DE4(rdram, ctx);
        goto after_6;
    // 0x600021EC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_6:
    // 0x600021F0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600021F4: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x600021F8: jal         0x600006C4
    // 0x600021FC: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world2_6C4(rdram, ctx);
        goto after_7;
    // 0x600021FC: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_7:
    // 0x60002200: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x60002204: addiu       $at, $zero, -0x81
    ctx->r1 = ADD32(0, -0X81);
    // 0x60002208: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x6000220C: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x60002210: jal         0x60000DE4
    // 0x60002214: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world2_DE4(rdram, ctx);
        goto after_8;
    // 0x60002214: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_8:
    // 0x60002218: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x6000221C: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x60002220: jal         0x600006C4
    // 0x60002224: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world2_6C4(rdram, ctx);
        goto after_9;
    // 0x60002224: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_9:
    // 0x60002228: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x6000222C: addiu       $a2, $a2, 0x5D48
    ctx->r6 = ADD32(ctx->r6, 0X5D48);
    // 0x60002230: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x60002234: jal         0x60000808
    // 0x60002238: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_stage_world2_808(rdram, ctx);
        goto after_10;
    // 0x60002238: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_10:
    // 0x6000223C: lui         $t2, 0x6000
    ctx->r10 = S32(0X6000 << 16);
    // 0x60002240: lw          $t2, 0x5D48($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X5D48);
    // 0x60002244: addiu       $at, $zero, -0x101
    ctx->r1 = ADD32(0, -0X101);
    // 0x60002248: and         $t3, $t2, $at
    ctx->r11 = ctx->r10 & ctx->r1;
    // 0x6000224C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002250: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60002254: sw          $t3, 0x5D48($at)
    MEM_W(0X5D48, ctx->r1) = ctx->r11;
    // 0x60002258: addiu       $a2, $a2, 0x5D48
    ctx->r6 = ADD32(ctx->r6, 0X5D48);
    // 0x6000225C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x60002260: jal         0x60000808
    // 0x60002264: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_stage_world2_808(rdram, ctx);
        goto after_11;
    // 0x60002264: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_11:
    // 0x60002268: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000226C:
    // 0x6000226C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x60002270: jr          $ra
    // 0x60002274: nop

    return;
    // 0x60002274: nop

;}
RECOMP_FUNC void ovl_stage_world2_2278(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002278: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x6000227C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x60002280: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x60002284: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x60002288: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x6000228C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x60002290: jal         0x60000C1C
    // 0x60002294: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    ovl_stage_world2_C1C(rdram, ctx);
        goto after_0;
    // 0x60002294: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x60002298: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x6000229C: jal         0x60000E74
    // 0x600022A0: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    ovl_stage_world2_E74(rdram, ctx);
        goto after_1;
    // 0x600022A0: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_1:
    // 0x600022A4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600022A8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x600022AC: jal         0x600006C4
    // 0x600022B0: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    ovl_stage_world2_6C4(rdram, ctx);
        goto after_2;
    // 0x600022B0: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    after_2:
    // 0x600022B4: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x600022B8: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x600022BC: ori         $t7, $t6, 0x4
    ctx->r15 = ctx->r14 | 0X4;
    // 0x600022C0: jal         0x60000E74
    // 0x600022C4: sw          $t7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r15;
    ovl_stage_world2_E74(rdram, ctx);
        goto after_3;
    // 0x600022C4: sw          $t7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r15;
    after_3:
    // 0x600022C8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600022CC: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x600022D0: jal         0x600006C4
    // 0x600022D4: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    ovl_stage_world2_6C4(rdram, ctx);
        goto after_4;
    // 0x600022D4: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    after_4:
    // 0x600022D8: jal         0x600009C4
    // 0x600022DC: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    ovl_stage_world2_9C4(rdram, ctx);
        goto after_5;
    // 0x600022DC: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_5:
    // 0x600022E0: lw          $t8, 0x0($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X0);
    // 0x600022E4: nop

    // 0x600022E8: andi        $t9, $t8, 0x800
    ctx->r25 = ctx->r24 & 0X800;
    // 0x600022EC: beq         $t9, $zero, L_60002310
    if (ctx->r25 == 0) {
        // 0x600022F0: nop
    
            goto L_60002310;
    }
    // 0x600022F0: nop

L_600022F4:
    // 0x600022F4: jal         0x600009D0
    // 0x600022F8: nop

    ovl_stage_world2_9D0(rdram, ctx);
        goto after_6;
    // 0x600022F8: nop

    after_6:
    // 0x600022FC: lw          $t0, 0x0($s3)
    ctx->r8 = MEM_W(ctx->r19, 0X0);
    // 0x60002300: nop

    // 0x60002304: andi        $t1, $t0, 0x800
    ctx->r9 = ctx->r8 & 0X800;
    // 0x60002308: bne         $t1, $zero, L_600022F4
    if (ctx->r9 != 0) {
        // 0x6000230C: nop
    
            goto L_600022F4;
    }
    // 0x6000230C: nop

L_60002310:
    // 0x60002310: lui         $s4, 0x6000
    ctx->r20 = S32(0X6000 << 16);
    // 0x60002314: addiu       $s4, $s4, 0x5B44
    ctx->r20 = ADD32(ctx->r20, 0X5B44);
    // 0x60002318: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x6000231C: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x60002320: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x60002324: jal         0x600006C4
    // 0x60002328: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    ovl_stage_world2_6C4(rdram, ctx);
        goto after_7;
    // 0x60002328: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    after_7:
    // 0x6000232C: jal         0x60001098
    // 0x60002330: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world2_1098(rdram, ctx);
        goto after_8;
    // 0x60002330: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_8:
    // 0x60002334: lw          $t2, 0x0($s3)
    ctx->r10 = MEM_W(ctx->r19, 0X0);
    // 0x60002338: lui         $s0, 0x40
    ctx->r16 = S32(0X40 << 16);
    // 0x6000233C: sll         $t3, $t2, 9
    ctx->r11 = S32(ctx->r10 << 9);
    // 0x60002340: bgez        $t3, L_60002364
    if (SIGNED(ctx->r11) >= 0) {
        // 0x60002344: nop
    
            goto L_60002364;
    }
    // 0x60002344: nop

L_60002348:
    // 0x60002348: jal         0x600009D0
    // 0x6000234C: nop

    ovl_stage_world2_9D0(rdram, ctx);
        goto after_9;
    // 0x6000234C: nop

    after_9:
    // 0x60002350: lw          $t4, 0x0($s3)
    ctx->r12 = MEM_W(ctx->r19, 0X0);
    // 0x60002354: nop

    // 0x60002358: and         $t5, $t4, $s0
    ctx->r13 = ctx->r12 & ctx->r16;
    // 0x6000235C: bne         $t5, $zero, L_60002348
    if (ctx->r13 != 0) {
        // 0x60002360: nop
    
            goto L_60002348;
    }
    // 0x60002360: nop

L_60002364:
    // 0x60002364: jal         0x600009D0
    // 0x60002368: nop

    ovl_stage_world2_9D0(rdram, ctx);
        goto after_10;
    // 0x60002368: nop

    after_10:
    // 0x6000236C: jal         0x6000215C
    // 0x60002370: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world2_215C(rdram, ctx);
        goto after_11;
    // 0x60002370: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_11:
    // 0x60002374: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x60002378: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x6000237C: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
    // 0x60002380: sw          $t7, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r15;
    // 0x60002384: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x60002388: jal         0x600007F0
    // 0x6000238C: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    ovl_stage_world2_7F0(rdram, ctx);
        goto after_12;
    // 0x6000238C: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_12:
    // 0x60002390: jal         0x600007E4
    // 0x60002394: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_stage_world2_7E4(rdram, ctx);
        goto after_13;
    // 0x60002394: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_13:
    // 0x60002398: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x6000239C: addiu       $a2, $a2, 0x5D34
    ctx->r6 = ADD32(ctx->r6, 0X5D34);
    // 0x600023A0: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x600023A4: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x600023A8: sw          $t8, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r24;
    // 0x600023AC: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x600023B0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x600023B4: lw          $t0, 0x2C($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X2C);
    // 0x600023B8: nop

    // 0x600023BC: sw          $t0, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r8;
    // 0x600023C0: lw          $a1, 0x0($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X0);
    // 0x600023C4: jal         0x600007F0
    // 0x600023C8: nop

    ovl_stage_world2_7F0(rdram, ctx);
        goto after_14;
    // 0x600023C8: nop

    after_14:
    // 0x600023CC: jal         0x60002074
    // 0x600023D0: nop

    ovl_stage_world2_2074(rdram, ctx);
        goto after_15;
    // 0x600023D0: nop

    after_15:
    // 0x600023D4: jal         0x60000B98
    // 0x600023D8: addiu       $a0, $zero, 0x9D
    ctx->r4 = ADD32(0, 0X9D);
    ovl_stage_world2_B98(rdram, ctx);
        goto after_16;
    // 0x600023D8: addiu       $a0, $zero, 0x9D
    ctx->r4 = ADD32(0, 0X9D);
    after_16:
    // 0x600023DC: lui         $s2, 0x6000
    ctx->r18 = S32(0X6000 << 16);
    // 0x600023E0: lui         $s1, 0x6000
    ctx->r17 = S32(0X6000 << 16);
    // 0x600023E4: lui         $s0, 0x6000
    ctx->r16 = S32(0X6000 << 16);
    // 0x600023E8: addiu       $s0, $s0, 0x5D40
    ctx->r16 = ADD32(ctx->r16, 0X5D40);
    // 0x600023EC: addiu       $s1, $s1, 0x5CD4
    ctx->r17 = ADD32(ctx->r17, 0X5CD4);
    // 0x600023F0: addiu       $s2, $s2, 0x5CD8
    ctx->r18 = ADD32(ctx->r18, 0X5CD8);
    // 0x600023F4: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
L_600023F8:
    // 0x600023F8: nop

    // 0x600023FC: andi        $t1, $v0, 0x2000
    ctx->r9 = ctx->r2 & 0X2000;
    // 0x60002400: beq         $t1, $zero, L_60002480
    if (ctx->r9 == 0) {
        // 0x60002404: andi        $t2, $v0, 0x2
        ctx->r10 = ctx->r2 & 0X2;
            goto L_60002480;
    }
    // 0x60002404: andi        $t2, $v0, 0x2
    ctx->r10 = ctx->r2 & 0X2;
    // 0x60002408: beq         $t2, $zero, L_60002420
    if (ctx->r10 == 0) {
        // 0x6000240C: nop
    
            goto L_60002420;
    }
    // 0x6000240C: nop

    // 0x60002410: jal         0x600009AC
    // 0x60002414: nop

    ovl_stage_world2_9AC(rdram, ctx);
        goto after_17;
    // 0x60002414: nop

    after_17:
    // 0x60002418: b           L_6000242C
    // 0x6000241C: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
        goto L_6000242C;
    // 0x6000241C: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
L_60002420:
    // 0x60002420: jal         0x60000A6C
    // 0x60002424: nop

    ovl_stage_world2_A6C(rdram, ctx);
        goto after_18;
    // 0x60002424: nop

    after_18:
    // 0x60002428: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
L_6000242C:
    // 0x6000242C: addiu       $a1, $zero, 0x31
    ctx->r5 = ADD32(0, 0X31);
    // 0x60002430: jal         0x600006C4
    // 0x60002434: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    ovl_stage_world2_6C4(rdram, ctx);
        goto after_19;
    // 0x60002434: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    after_19:
    // 0x60002438: jal         0x60001098
    // 0x6000243C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world2_1098(rdram, ctx);
        goto after_20;
    // 0x6000243C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_20:
    // 0x60002440: jal         0x60000EEC
    // 0x60002444: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    ovl_stage_world2_EEC(rdram, ctx);
        goto after_21;
    // 0x60002444: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_21:
    // 0x60002448: jal         0x60000EEC
    // 0x6000244C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    ovl_stage_world2_EEC(rdram, ctx);
        goto after_22;
    // 0x6000244C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_22:
    // 0x60002450: jal         0x60000A60
    // 0x60002454: addiu       $a0, $zero, 0xABA
    ctx->r4 = ADD32(0, 0XABA);
    ovl_stage_world2_A60(rdram, ctx);
        goto after_23;
    // 0x60002454: addiu       $a0, $zero, 0xABA
    ctx->r4 = ADD32(0, 0XABA);
    after_23:
    // 0x60002458: jal         0x60000B98
    // 0x6000245C: addiu       $a0, $zero, 0x89
    ctx->r4 = ADD32(0, 0X89);
    ovl_stage_world2_B98(rdram, ctx);
        goto after_24;
    // 0x6000245C: addiu       $a0, $zero, 0x89
    ctx->r4 = ADD32(0, 0X89);
    after_24:
    // 0x60002460: jal         0x60000B98
    // 0x60002464: addiu       $a0, $zero, 0xA5
    ctx->r4 = ADD32(0, 0XA5);
    ovl_stage_world2_B98(rdram, ctx);
        goto after_25;
    // 0x60002464: addiu       $a0, $zero, 0xA5
    ctx->r4 = ADD32(0, 0XA5);
    after_25:
    // 0x60002468: jal         0x60000250
    // 0x6000246C: nop

    ovl_stage_world2_250(rdram, ctx);
        goto after_26;
    // 0x6000246C: nop

    after_26:
    // 0x60002470: jal         0x6000215C
    // 0x60002474: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world2_215C(rdram, ctx);
        goto after_27;
    // 0x60002474: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_27:
    // 0x60002478: jal         0x600009AC
    // 0x6000247C: nop

    ovl_stage_world2_9AC(rdram, ctx);
        goto after_28;
    // 0x6000247C: nop

    after_28:
L_60002480:
    // 0x60002480: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
    // 0x60002484: sh          $zero, 0x2($s0)
    MEM_H(0X2, ctx->r16) = 0;
    // 0x60002488: sh          $zero, 0x4($s0)
    MEM_H(0X4, ctx->r16) = 0;
    // 0x6000248C: sb          $zero, 0x6($s0)
    MEM_B(0X6, ctx->r16) = 0;
    // 0x60002490: jal         0x60001338
    // 0x60002494: sb          $zero, 0x7($s0)
    MEM_B(0X7, ctx->r16) = 0;
    ovl_stage_world2_1338(rdram, ctx);
        goto after_29;
    // 0x60002494: sb          $zero, 0x7($s0)
    MEM_B(0X7, ctx->r16) = 0;
    after_29:
    // 0x60002498: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    // 0x6000249C: lui         $a1, 0x6000
    ctx->r5 = S32(0X6000 << 16);
    // 0x600024A0: jal         0x60000CE8
    // 0x600024A4: addiu       $a1, $a1, 0x5D38
    ctx->r5 = ADD32(ctx->r5, 0X5D38);
    ovl_stage_world2_CE8(rdram, ctx);
        goto after_30;
    // 0x600024A4: addiu       $a1, $a1, 0x5D38
    ctx->r5 = ADD32(ctx->r5, 0X5D38);
    after_30:
    // 0x600024A8: jal         0x60001E40
    // 0x600024AC: nop

    ovl_stage_world2_1E40(rdram, ctx);
        goto after_31;
    // 0x600024AC: nop

    after_31:
    // 0x600024B0: lw          $t3, 0x0($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X0);
    // 0x600024B4: lw          $t5, 0x0($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X0);
    // 0x600024B8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x600024BC: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x600024C0: sw          $t4, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r12;
    // 0x600024C4: sw          $t6, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r14;
    // 0x600024C8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x600024CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x600024D0: jal         0x60000808
    // 0x600024D4: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_stage_world2_808(rdram, ctx);
        goto after_32;
    // 0x600024D4: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_32:
    // 0x600024D8: jal         0x600009D0
    // 0x600024DC: nop

    ovl_stage_world2_9D0(rdram, ctx);
        goto after_33;
    // 0x600024DC: nop

    after_33:
    // 0x600024E0: b           L_600023F8
    // 0x600024E4: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
        goto L_600023F8;
    // 0x600024E4: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x600024E8: nop

    // 0x600024EC: nop

    // 0x600024F0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x600024F4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x600024F8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x600024FC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x60002500: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x60002504: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x60002508: jr          $ra
    // 0x6000250C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x6000250C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void ovl_stage_world2_2510(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002510: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x60002514: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60002518: jal         0x60000C1C
    // 0x6000251C: nop

    ovl_stage_world2_C1C(rdram, ctx);
        goto after_0;
    // 0x6000251C: nop

    after_0:
    // 0x60002520: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x60002524: addiu       $a0, $zero, 0x89
    ctx->r4 = ADD32(0, 0X89);
    // 0x60002528: sll         $t7, $t6, 13
    ctx->r15 = S32(ctx->r14 << 13);
    // 0x6000252C: bltz        $t7, L_6000257C
    if (SIGNED(ctx->r15) < 0) {
        // 0x60002530: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_6000257C;
    }
    // 0x60002530: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002534: jal         0x60000BB0
    // 0x60002538: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_1;
    // 0x60002538: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x6000253C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x60002540: bne         $v0, $zero, L_60002560
    if (ctx->r2 != 0) {
        // 0x60002544: nop
    
            goto L_60002560;
    }
    // 0x60002544: nop

    // 0x60002548: lw          $t8, 0xC($v1)
    ctx->r24 = MEM_W(ctx->r3, 0XC);
    // 0x6000254C: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x60002550: beq         $t8, $at, L_60002560
    if (ctx->r24 == ctx->r1) {
        // 0x60002554: nop
    
            goto L_60002560;
    }
    // 0x60002554: nop

    // 0x60002558: jal         0x60000A60
    // 0x6000255C: addiu       $a0, $zero, 0xAB9
    ctx->r4 = ADD32(0, 0XAB9);
    ovl_stage_world2_A60(rdram, ctx);
        goto after_2;
    // 0x6000255C: addiu       $a0, $zero, 0xAB9
    ctx->r4 = ADD32(0, 0XAB9);
    after_2:
L_60002560:
    // 0x60002560: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002564: addiu       $a0, $a0, 0x2278
    ctx->r4 = ADD32(ctx->r4, 0X2278);
    // 0x60002568: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x6000256C: addiu       $a2, $zero, 0x2400
    ctx->r6 = ADD32(0, 0X2400);
    // 0x60002570: jal         0x60000994
    // 0x60002574: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world2_994(rdram, ctx);
        goto after_3;
    // 0x60002574: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x60002578: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000257C:
    // 0x6000257C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x60002580: jr          $ra
    // 0x60002584: nop

    return;
    // 0x60002584: nop

;}
RECOMP_FUNC void ovl_stage_world2_2588(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002588: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x6000258C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60002590: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60002594: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x60002598: addiu       $a2, $a2, 0x5D50
    ctx->r6 = ADD32(ctx->r6, 0X5D50);
    // 0x6000259C: jal         0x60000808
    // 0x600025A0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_stage_world2_808(rdram, ctx);
        goto after_0;
    // 0x600025A0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x600025A4: lui         $t6, 0x6000
    ctx->r14 = S32(0X6000 << 16);
    // 0x600025A8: lw          $t6, 0x5D50($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5D50);
    // 0x600025AC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600025B0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x600025B4: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x600025B8: ori         $t7, $t6, 0x100
    ctx->r15 = ctx->r14 | 0X100;
    // 0x600025BC: sw          $t7, 0x5D50($at)
    MEM_W(0X5D50, ctx->r1) = ctx->r15;
    // 0x600025C0: addiu       $a2, $a2, 0x5D50
    ctx->r6 = ADD32(ctx->r6, 0X5D50);
    // 0x600025C4: jal         0x60000808
    // 0x600025C8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_stage_world2_808(rdram, ctx);
        goto after_1;
    // 0x600025C8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x600025CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600025D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600025D4: jr          $ra
    // 0x600025D8: nop

    return;
    // 0x600025D8: nop

;}
RECOMP_FUNC void ovl_stage_world2_25DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600025DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600025E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600025E4: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x600025E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x600025EC: addiu       $a2, $a2, 0x5D58
    ctx->r6 = ADD32(ctx->r6, 0X5D58);
    // 0x600025F0: jal         0x60000808
    // 0x600025F4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_stage_world2_808(rdram, ctx);
        goto after_0;
    // 0x600025F4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x600025F8: lui         $t6, 0x6000
    ctx->r14 = S32(0X6000 << 16);
    // 0x600025FC: lw          $t6, 0x5D58($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5D58);
    // 0x60002600: addiu       $at, $zero, -0x101
    ctx->r1 = ADD32(0, -0X101);
    // 0x60002604: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x60002608: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000260C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x60002610: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60002614: sw          $t7, 0x5D58($at)
    MEM_W(0X5D58, ctx->r1) = ctx->r15;
    // 0x60002618: addiu       $a2, $a2, 0x5D58
    ctx->r6 = ADD32(ctx->r6, 0X5D58);
    // 0x6000261C: jal         0x60000808
    // 0x60002620: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_stage_world2_808(rdram, ctx);
        goto after_1;
    // 0x60002620: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x60002624: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002628: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x6000262C: jr          $ra
    // 0x60002630: nop

    return;
    // 0x60002630: nop

;}
RECOMP_FUNC void ovl_stage_world2_2634(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002634: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x60002638: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x6000263C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x60002640: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x60002644: jal         0x60000DE4
    // 0x60002648: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    ovl_stage_world2_DE4(rdram, ctx);
        goto after_0;
    // 0x60002648: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x6000264C: beq         $s1, $zero, L_600026BC
    if (ctx->r17 == 0) {
        // 0x60002650: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_600026BC;
    }
    // 0x60002650: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x60002654: addiu       $s1, $sp, 0x28
    ctx->r17 = ADD32(ctx->r29, 0X28);
    // 0x60002658: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x6000265C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60002660: jal         0x600006C4
    // 0x60002664: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    ovl_stage_world2_6C4(rdram, ctx);
        goto after_1;
    // 0x60002664: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    after_1:
    // 0x60002668: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x6000266C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x60002670: ori         $t7, $t6, 0x30
    ctx->r15 = ctx->r14 | 0X30;
    // 0x60002674: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x60002678: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x6000267C: jal         0x600006C4
    // 0x60002680: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world2_6C4(rdram, ctx);
        goto after_2;
    // 0x60002680: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_2:
    // 0x60002684: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x60002688: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x6000268C: jal         0x600006C4
    // 0x60002690: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world2_6C4(rdram, ctx);
        goto after_3;
    // 0x60002690: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_3:
    // 0x60002694: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x60002698: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x6000269C: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x600026A0: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x600026A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x600026A8: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x600026AC: jal         0x600006C4
    // 0x600026B0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world2_6C4(rdram, ctx);
        goto after_4;
    // 0x600026B0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_4:
    // 0x600026B4: b           L_60002728
    // 0x600026B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_60002728;
    // 0x600026B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_600026BC:
    // 0x600026BC: addiu       $s1, $sp, 0x28
    ctx->r17 = ADD32(ctx->r29, 0X28);
    // 0x600026C0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x600026C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x600026C8: jal         0x600006C4
    // 0x600026CC: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    ovl_stage_world2_6C4(rdram, ctx);
        goto after_5;
    // 0x600026CC: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    after_5:
    // 0x600026D0: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x600026D4: addiu       $at, $zero, -0x11
    ctx->r1 = ADD32(0, -0X11);
    // 0x600026D8: and         $t0, $v1, $at
    ctx->r8 = ctx->r3 & ctx->r1;
    // 0x600026DC: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x600026E0: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x600026E4: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    // 0x600026E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x600026EC: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x600026F0: jal         0x600006C4
    // 0x600026F4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world2_6C4(rdram, ctx);
        goto after_6;
    // 0x600026F4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_6:
    // 0x600026F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x600026FC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x60002700: jal         0x600006C4
    // 0x60002704: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world2_6C4(rdram, ctx);
        goto after_7;
    // 0x60002704: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_7:
    // 0x60002708: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x6000270C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x60002710: ori         $t3, $t2, 0x4
    ctx->r11 = ctx->r10 | 0X4;
    // 0x60002714: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    // 0x60002718: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x6000271C: jal         0x600006C4
    // 0x60002720: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world2_6C4(rdram, ctx);
        goto after_8;
    // 0x60002720: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_8:
    // 0x60002724: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_60002728:
    // 0x60002728: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x6000272C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x60002730: jr          $ra
    // 0x60002734: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x60002734: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_stage_world2_2738(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002738: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x6000273C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x60002740: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x60002744: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x60002748: jal         0x60000DE4
    // 0x6000274C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    ovl_stage_world2_DE4(rdram, ctx);
        goto after_0;
    // 0x6000274C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    after_0:
    // 0x60002750: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x60002754: nop

    // 0x60002758: beq         $t6, $zero, L_6000278C
    if (ctx->r14 == 0) {
        // 0x6000275C: nop
    
            goto L_6000278C;
    }
    // 0x6000275C: nop

    // 0x60002760: jal         0x60002588
    // 0x60002764: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_stage_world2_2588(rdram, ctx);
        goto after_1;
    // 0x60002764: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x60002768: addiu       $t7, $zero, 0x7
    ctx->r15 = ADD32(0, 0X7);
    // 0x6000276C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x60002770: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x60002774: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x60002778: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x6000277C: jal         0x600007F0
    // 0x60002780: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    ovl_stage_world2_7F0(rdram, ctx);
        goto after_2;
    // 0x60002780: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_2:
    // 0x60002784: b           L_600027B0
    // 0x60002788: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_600027B0;
    // 0x60002788: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_6000278C:
    // 0x6000278C: jal         0x600025DC
    // 0x60002790: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_stage_world2_25DC(rdram, ctx);
        goto after_3;
    // 0x60002790: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x60002794: addiu       $t9, $zero, 0x7
    ctx->r25 = ADD32(0, 0X7);
    // 0x60002798: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x6000279C: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x600027A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x600027A4: jal         0x600007F0
    // 0x600027A8: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    ovl_stage_world2_7F0(rdram, ctx);
        goto after_4;
    // 0x600027A8: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_4:
    // 0x600027AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_600027B0:
    // 0x600027B0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x600027B4: jr          $ra
    // 0x600027B8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x600027B8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_stage_world2_27BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600027BC: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x600027C0: swc1        $f24, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f24.u32l;
    // 0x600027C4: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x600027C8: mtc1        $a1, $f22
    ctx->f22.u32l = ctx->r5;
    // 0x600027CC: mtc1        $a2, $f24
    ctx->f24.u32l = ctx->r6;
    // 0x600027D0: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x600027D4: sw          $s5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r21;
    // 0x600027D8: sw          $s4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r20;
    // 0x600027DC: sw          $s3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r19;
    // 0x600027E0: sw          $s2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r18;
    // 0x600027E4: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x600027E8: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x600027EC: swc1        $f25, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x600027F0: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x600027F4: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x600027F8: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x600027FC: jal         0x60000DE4
    // 0x60002800: sw          $a0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r4;
    ovl_stage_world2_DE4(rdram, ctx);
        goto after_0;
    // 0x60002800: sw          $a0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r4;
    after_0:
    // 0x60002804: addiu       $s4, $sp, 0x88
    ctx->r20 = ADD32(ctx->r29, 0X88);
    // 0x60002808: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x6000280C: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x60002810: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60002814: jal         0x600006C4
    // 0x60002818: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    ovl_stage_world2_6C4(rdram, ctx);
        goto after_1;
    // 0x60002818: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    after_1:
    // 0x6000281C: lw          $t6, 0x88($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X88);
    // 0x60002820: addiu       $s5, $sp, 0x70
    ctx->r21 = ADD32(ctx->r29, 0X70);
    // 0x60002824: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x60002828: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x6000282C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x60002830: jal         0x600006C4
    // 0x60002834: swc1        $f22, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->f22.u32l;
    ovl_stage_world2_6C4(rdram, ctx);
        goto after_2;
    // 0x60002834: swc1        $f22, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->f22.u32l;
    after_2:
    // 0x60002838: lw          $a0, 0xA0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA0);
    // 0x6000283C: jal         0x600007E4
    // 0x60002840: nop

    ovl_stage_world2_7E4(rdram, ctx);
        goto after_3;
    // 0x60002840: nop

    after_3:
    // 0x60002844: lw          $t7, 0x10($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X10);
    // 0x60002848: lui         $at, 0x20
    ctx->r1 = S32(0X20 << 16);
    // 0x6000284C: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x60002850: lui         $at, 0x10
    ctx->r1 = S32(0X10 << 16);
    // 0x60002854: or          $t0, $t8, $at
    ctx->r8 = ctx->r24 | ctx->r1;
    // 0x60002858: sw          $t8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r24;
    // 0x6000285C: sw          $t0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r8;
    // 0x60002860: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002864: lwc1        $f4, 0x5BD4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5BD4);
    // 0x60002868: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x6000286C: div.s       $f6, $f24, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f24.fl, ctx->f4.fl);
    // 0x60002870: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x60002874: nop

    // 0x60002878: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x6000287C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x60002880: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x60002884: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x60002888: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x6000288C: mfc1        $s3, $f8
    ctx->r19 = (int32_t)ctx->f8.u32l;
    // 0x60002890: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x60002894: blez        $s3, L_60002900
    if (SIGNED(ctx->r19) <= 0) {
        // 0x60002898: lw          $a0, 0xA0($sp)
        ctx->r4 = MEM_W(ctx->r29, 0XA0);
            goto L_60002900;
    }
    // 0x60002898: lw          $a0, 0xA0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA0);
    // 0x6000289C: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x600028A0: addiu       $s1, $sp, 0x58
    ctx->r17 = ADD32(ctx->r29, 0X58);
    // 0x600028A4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_600028A8:
    // 0x600028A8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x600028AC: jal         0x600006C4
    // 0x600028B0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world2_6C4(rdram, ctx);
        goto after_4;
    // 0x600028B0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_4:
    // 0x600028B4: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x600028B8: jal         0x60000418
    // 0x600028BC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    ovl_stage_world2_418(rdram, ctx);
        goto after_5;
    // 0x600028BC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_5:
    // 0x600028C0: c.lt.s      $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f24.fl < ctx->f0.fl;
    // 0x600028C4: lw          $t2, 0x88($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X88);
    // 0x600028C8: bc1t        L_600028FC
    if (c1cs) {
        // 0x600028CC: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_600028FC;
    }
    // 0x600028CC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x600028D0: swc1        $f22, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->f22.u32l;
    // 0x600028D4: lw          $t3, 0x88($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X88);
    // 0x600028D8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x600028DC: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x600028E0: jal         0x600006C4
    // 0x600028E4: swc1        $f20, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->f20.u32l;
    ovl_stage_world2_6C4(rdram, ctx);
        goto after_6;
    // 0x600028E4: swc1        $f20, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->f20.u32l;
    after_6:
    // 0x600028E8: jal         0x600009D0
    // 0x600028EC: nop

    ovl_stage_world2_9D0(rdram, ctx);
        goto after_7;
    // 0x600028EC: nop

    after_7:
    // 0x600028F0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x600028F4: bne         $s0, $s3, L_600028A8
    if (ctx->r16 != ctx->r19) {
        // 0x600028F8: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_600028A8;
    }
    // 0x600028F8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_600028FC:
    // 0x600028FC: lw          $a0, 0xA0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA0);
L_60002900:
    // 0x60002900: jal         0x600007E4
    // 0x60002904: nop

    ovl_stage_world2_7E4(rdram, ctx);
        goto after_8;
    // 0x60002904: nop

    after_8:
    // 0x60002908: lw          $t4, 0x10($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X10);
    // 0x6000290C: lui         $at, 0xFFDF
    ctx->r1 = S32(0XFFDF << 16);
    // 0x60002910: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x60002914: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x60002918: lui         $at, 0xFFEF
    ctx->r1 = S32(0XFFEF << 16);
    // 0x6000291C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x60002920: sw          $t5, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r13;
    // 0x60002924: and         $t7, $t5, $at
    ctx->r15 = ctx->r13 & ctx->r1;
    // 0x60002928: sw          $t7, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r15;
    // 0x6000292C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x60002930: lw          $s5, 0x40($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X40);
    // 0x60002934: lw          $s4, 0x3C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X3C);
    // 0x60002938: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x6000293C: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x60002940: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x60002944: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x60002948: lwc1        $f24, 0x24($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X24);
    // 0x6000294C: lwc1        $f25, 0x20($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x60002950: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x60002954: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x60002958: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x6000295C: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x60002960: jr          $ra
    // 0x60002964: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    // 0x60002964: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void ovl_stage_world2_2968(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002968: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x6000296C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60002970: jal         0x60000C1C
    // 0x60002974: nop

    ovl_stage_world2_C1C(rdram, ctx);
        goto after_0;
    // 0x60002974: nop

    after_0:
    // 0x60002978: jal         0x60000A6C
    // 0x6000297C: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    ovl_stage_world2_A6C(rdram, ctx);
        goto after_1;
    // 0x6000297C: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    after_1:
    // 0x60002980: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60002984: jal         0x60002738
    // 0x60002988: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world2_2738(rdram, ctx);
        goto after_2;
    // 0x60002988: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x6000298C: jal         0x60000DE4
    // 0x60002990: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world2_DE4(rdram, ctx);
        goto after_3;
    // 0x60002990: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x60002994: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60002998: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x6000299C: jal         0x600006C4
    // 0x600029A0: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    ovl_stage_world2_6C4(rdram, ctx);
        goto after_4;
    // 0x600029A0: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    after_4:
    // 0x600029A4: lui         $at, 0x441B
    ctx->r1 = S32(0X441B << 16);
    // 0x600029A8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x600029AC: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x600029B0: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x600029B4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x600029B8: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    // 0x600029BC: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x600029C0: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    // 0x600029C4: swc1        $f4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f4.u32l;
    // 0x600029C8: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    // 0x600029CC: jal         0x600003DC
    // 0x600029D0: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    ovl_stage_world2_3DC(rdram, ctx);
        goto after_5;
    // 0x600029D0: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    after_5:
    // 0x600029D4: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600029D8: lwc1        $f15, 0x5BD8($at)
    ctx->f_odd[(15 - 1) * 2] = MEM_W(ctx->r1, 0X5BD8);
    // 0x600029DC: lwc1        $f14, 0x5BDC($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X5BDC);
    // 0x600029E0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600029E4: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x600029E8: lwc1        $f19, 0x5BE0($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X5BE0);
    // 0x600029EC: lwc1        $f18, 0x5BE4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X5BE4);
    // 0x600029F0: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x600029F4: mul.d       $f0, $f16, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f0.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x600029F8: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    // 0x600029FC: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x60002A00: c.le.d      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.d <= ctx->f0.d;
    // 0x60002A04: nop

    // 0x60002A08: bc1f        L_60002A18
    if (!c1cs) {
        // 0x60002A0C: nop
    
            goto L_60002A18;
    }
    // 0x60002A0C: nop

    // 0x60002A10: b           L_60002A44
    // 0x60002A14: sub.d       $f2, $f0, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f14.d); 
    ctx->f2.d = ctx->f0.d - ctx->f14.d;
        goto L_60002A44;
    // 0x60002A14: sub.d       $f2, $f0, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f14.d); 
    ctx->f2.d = ctx->f0.d - ctx->f14.d;
L_60002A18:
    // 0x60002A18: mtc1        $zero, $f5
    ctx->f_odd[(5 - 1) * 2] = 0;
    // 0x60002A1C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x60002A20: nop

    // 0x60002A24: c.lt.d      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.d < ctx->f4.d;
    // 0x60002A28: nop

    // 0x60002A2C: bc1f        L_60002A3C
    if (!c1cs) {
        // 0x60002A30: nop
    
            goto L_60002A3C;
    }
    // 0x60002A30: nop

    // 0x60002A34: b           L_60002A40
    // 0x60002A38: add.d       $f12, $f0, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f14.d); 
    ctx->f12.d = ctx->f0.d + ctx->f14.d;
        goto L_60002A40;
    // 0x60002A38: add.d       $f12, $f0, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f14.d); 
    ctx->f12.d = ctx->f0.d + ctx->f14.d;
L_60002A3C:
    // 0x60002A3C: mov.d       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.d = ctx->f0.d;
L_60002A40:
    // 0x60002A40: mov.d       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.d = ctx->f12.d;
L_60002A44:
    // 0x60002A44: swc1        $f3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
    // 0x60002A48: jal         0x60000418
    // 0x60002A4C: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    ovl_stage_world2_418(rdram, ctx);
        goto after_6;
    // 0x60002A4C: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    after_6:
    // 0x60002A50: lwc1        $f3, 0x28($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x60002A54: lwc1        $f2, 0x2C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x60002A58: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x60002A5C: cvt.s.d     $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f6.fl = CVT_S_D(ctx->f2.d);
    // 0x60002A60: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60002A64: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x60002A68: jal         0x600027BC
    // 0x60002A6C: nop

    ovl_stage_world2_27BC(rdram, ctx);
        goto after_7;
    // 0x60002A6C: nop

    after_7:
    // 0x60002A70: jal         0x600009C4
    // 0x60002A74: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_stage_world2_9C4(rdram, ctx);
        goto after_8;
    // 0x60002A74: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_8:
    // 0x60002A78: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60002A7C: jal         0x60002738
    // 0x60002A80: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world2_2738(rdram, ctx);
        goto after_9;
    // 0x60002A80: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x60002A84: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x60002A88: lui         $at, 0xFFFE
    ctx->r1 = S32(0XFFFE << 16);
    // 0x60002A8C: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x60002A90: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x60002A94: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x60002A98: addiu       $a0, $zero, 0x836
    ctx->r4 = ADD32(0, 0X836);
    // 0x60002A9C: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x60002AA0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60002AA4: jal         0x60000C10
    // 0x60002AA8: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    ovl_stage_world2_C10(rdram, ctx);
        goto after_10;
    // 0x60002AA8: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    after_10:
    // 0x60002AAC: jal         0x600009AC
    // 0x60002AB0: nop

    ovl_stage_world2_9AC(rdram, ctx);
        goto after_11;
    // 0x60002AB0: nop

    after_11:
    // 0x60002AB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002AB8: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x60002ABC: jr          $ra
    // 0x60002AC0: nop

    return;
    // 0x60002AC0: nop

;}
RECOMP_FUNC void ovl_stage_world2_2AC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002AC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60002AC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60002ACC: jal         0x60000C1C
    // 0x60002AD0: nop

    ovl_stage_world2_C1C(rdram, ctx);
        goto after_0;
    // 0x60002AD0: nop

    after_0:
    // 0x60002AD4: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x60002AD8: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x60002ADC: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x60002AE0: jal         0x60000A90
    // 0x60002AE4: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    ovl_stage_world2_A90(rdram, ctx);
        goto after_1;
    // 0x60002AE4: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    after_1:
    // 0x60002AE8: jal         0x60000DE4
    // 0x60002AEC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world2_DE4(rdram, ctx);
        goto after_2;
    // 0x60002AEC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x60002AF0: jal         0x60000CC4
    // 0x60002AF4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_stage_world2_CC4(rdram, ctx);
        goto after_3;
    // 0x60002AF4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_3:
    // 0x60002AF8: jal         0x60000A6C
    // 0x60002AFC: nop

    ovl_stage_world2_A6C(rdram, ctx);
        goto after_4;
    // 0x60002AFC: nop

    after_4:
    // 0x60002B00: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002B04: addiu       $a0, $a0, 0x2968
    ctx->r4 = ADD32(ctx->r4, 0X2968);
    // 0x60002B08: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60002B0C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60002B10: jal         0x60000994
    // 0x60002B14: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world2_994(rdram, ctx);
        goto after_5;
    // 0x60002B14: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
    // 0x60002B18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002B1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60002B20: jr          $ra
    // 0x60002B24: nop

    return;
    // 0x60002B24: nop

;}
RECOMP_FUNC void ovl_stage_world2_2B28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002B28: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x60002B2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60002B30: jal         0x60000C1C
    // 0x60002B34: nop

    ovl_stage_world2_C1C(rdram, ctx);
        goto after_0;
    // 0x60002B34: nop

    after_0:
    // 0x60002B38: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x60002B3C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60002B40: jal         0x60002738
    // 0x60002B44: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world2_2738(rdram, ctx);
        goto after_1;
    // 0x60002B44: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x60002B48: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x60002B4C: jal         0x60002738
    // 0x60002B50: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world2_2738(rdram, ctx);
        goto after_2;
    // 0x60002B50: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x60002B54: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x60002B58: jal         0x60002634
    // 0x60002B5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world2_2634(rdram, ctx);
        goto after_3;
    // 0x60002B5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x60002B60: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x60002B64: jal         0x60000E68
    // 0x60002B68: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world2_E68(rdram, ctx);
        goto after_4;
    // 0x60002B68: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x60002B6C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x60002B70: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002B74: lwc1        $f4, 0x5BE8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5BE8);
    // 0x60002B78: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60002B7C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x60002B80: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x60002B84: jal         0x60000DE4
    // 0x60002B88: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    ovl_stage_world2_DE4(rdram, ctx);
        goto after_5;
    // 0x60002B88: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    after_5:
    // 0x60002B8C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60002B90: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x60002B94: jal         0x600006C4
    // 0x60002B98: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world2_6C4(rdram, ctx);
        goto after_6;
    // 0x60002B98: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_6:
    // 0x60002B9C: jal         0x600009C4
    // 0x60002BA0: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    ovl_stage_world2_9C4(rdram, ctx);
        goto after_7;
    // 0x60002BA0: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_7:
    // 0x60002BA4: lui         $a1, 0x439D
    ctx->r5 = S32(0X439D << 16);
    // 0x60002BA8: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x60002BAC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60002BB0: jal         0x600027BC
    // 0x60002BB4: lui         $a2, 0x4348
    ctx->r6 = S32(0X4348 << 16);
    ovl_stage_world2_27BC(rdram, ctx);
        goto after_8;
    // 0x60002BB4: lui         $a2, 0x4348
    ctx->r6 = S32(0X4348 << 16);
    after_8:
    // 0x60002BB8: jal         0x60000814
    // 0x60002BBC: nop

    ovl_stage_world2_814(rdram, ctx);
        goto after_9;
    // 0x60002BBC: nop

    after_9:
    // 0x60002BC0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x60002BC4: jal         0x60002634
    // 0x60002BC8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world2_2634(rdram, ctx);
        goto after_10;
    // 0x60002BC8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_10:
    // 0x60002BCC: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x60002BD0: jal         0x60000E68
    // 0x60002BD4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world2_E68(rdram, ctx);
        goto after_11;
    // 0x60002BD4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_11:
    // 0x60002BD8: jal         0x600009C4
    // 0x60002BDC: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_stage_world2_9C4(rdram, ctx);
        goto after_12;
    // 0x60002BDC: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_12:
    // 0x60002BE0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60002BE4: jal         0x60002738
    // 0x60002BE8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world2_2738(rdram, ctx);
        goto after_13;
    // 0x60002BE8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_13:
    // 0x60002BEC: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x60002BF0: lui         $at, 0xFFFE
    ctx->r1 = S32(0XFFFE << 16);
    // 0x60002BF4: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x60002BF8: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x60002BFC: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x60002C00: jal         0x60000A78
    // 0x60002C04: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    ovl_stage_world2_A78(rdram, ctx);
        goto after_14;
    // 0x60002C04: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    after_14:
    // 0x60002C08: jal         0x600009AC
    // 0x60002C0C: nop

    ovl_stage_world2_9AC(rdram, ctx);
        goto after_15;
    // 0x60002C0C: nop

    after_15:
    // 0x60002C10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002C14: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x60002C18: jr          $ra
    // 0x60002C1C: nop

    return;
    // 0x60002C1C: nop

;}
RECOMP_FUNC void ovl_stage_world2_2C20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002C20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60002C24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60002C28: jal         0x60000C1C
    // 0x60002C2C: nop

    ovl_stage_world2_C1C(rdram, ctx);
        goto after_0;
    // 0x60002C2C: nop

    after_0:
    // 0x60002C30: lw          $t6, 0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC);
    // 0x60002C34: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x60002C38: bne         $t6, $at, L_60002C64
    if (ctx->r14 != ctx->r1) {
        // 0x60002C3C: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_60002C64;
    }
    // 0x60002C3C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002C40: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x60002C44: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x60002C48: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x60002C4C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x60002C50: addiu       $a0, $a0, 0x2B28
    ctx->r4 = ADD32(ctx->r4, 0X2B28);
    // 0x60002C54: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60002C58: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60002C5C: jal         0x60000994
    // 0x60002C60: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world2_994(rdram, ctx);
        goto after_1;
    // 0x60002C60: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
L_60002C64:
    // 0x60002C64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002C68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60002C6C: jr          $ra
    // 0x60002C70: nop

    return;
    // 0x60002C70: nop

    // 0x60002C74: jr          $ra
    // 0x60002C78: nop

    return;
    // 0x60002C78: nop

;}
RECOMP_FUNC void ovl_stage_world2_2C7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002C7C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60002C80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60002C84: jal         0x60000BB0
    // 0x60002C88: addiu       $a0, $zero, 0x197
    ctx->r4 = ADD32(0, 0X197);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_0;
    // 0x60002C88: addiu       $a0, $zero, 0x197
    ctx->r4 = ADD32(0, 0X197);
    after_0:
    // 0x60002C8C: beq         $v0, $zero, L_60002CFC
    if (ctx->r2 == 0) {
        // 0x60002C90: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60002CFC;
    }
    // 0x60002C90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002C94: jal         0x60000BB0
    // 0x60002C98: addiu       $a0, $zero, 0x185
    ctx->r4 = ADD32(0, 0X185);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_1;
    // 0x60002C98: addiu       $a0, $zero, 0x185
    ctx->r4 = ADD32(0, 0X185);
    after_1:
    // 0x60002C9C: bne         $v0, $zero, L_60002CFC
    if (ctx->r2 != 0) {
        // 0x60002CA0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60002CFC;
    }
    // 0x60002CA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002CA4: jal         0x60000DE4
    // 0x60002CA8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world2_DE4(rdram, ctx);
        goto after_2;
    // 0x60002CA8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x60002CAC: jal         0x60000CC4
    // 0x60002CB0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_stage_world2_CC4(rdram, ctx);
        goto after_3;
    // 0x60002CB0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_3:
    // 0x60002CB4: jal         0x60000A6C
    // 0x60002CB8: nop

    ovl_stage_world2_A6C(rdram, ctx);
        goto after_4;
    // 0x60002CB8: nop

    after_4:
    // 0x60002CBC: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x60002CC0: jal         0x600006D0
    // 0x60002CC4: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    ovl_stage_world2_6D0(rdram, ctx);
        goto after_5;
    // 0x60002CC4: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_5:
    // 0x60002CC8: jal         0x60000B98
    // 0x60002CCC: addiu       $a0, $zero, 0x183
    ctx->r4 = ADD32(0, 0X183);
    ovl_stage_world2_B98(rdram, ctx);
        goto after_6;
    // 0x60002CCC: addiu       $a0, $zero, 0x183
    ctx->r4 = ADD32(0, 0X183);
    after_6:
    // 0x60002CD0: jal         0x60000B98
    // 0x60002CD4: addiu       $a0, $zero, 0x185
    ctx->r4 = ADD32(0, 0X185);
    ovl_stage_world2_B98(rdram, ctx);
        goto after_7;
    // 0x60002CD4: addiu       $a0, $zero, 0x185
    ctx->r4 = ADD32(0, 0X185);
    after_7:
    // 0x60002CD8: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    // 0x60002CDC: jal         0x60000E68
    // 0x60002CE0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world2_E68(rdram, ctx);
        goto after_8;
    // 0x60002CE0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x60002CE4: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x60002CE8: jal         0x60000E68
    // 0x60002CEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world2_E68(rdram, ctx);
        goto after_9;
    // 0x60002CEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x60002CF0: jal         0x60000A60
    // 0x60002CF4: addiu       $a0, $zero, 0xA4D
    ctx->r4 = ADD32(0, 0XA4D);
    ovl_stage_world2_A60(rdram, ctx);
        goto after_10;
    // 0x60002CF4: addiu       $a0, $zero, 0xA4D
    ctx->r4 = ADD32(0, 0XA4D);
    after_10:
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
RECOMP_FUNC void ovl_stage_world2_2D08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002D08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60002D0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60002D10: jal         0x600009C4
    // 0x60002D14: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    ovl_stage_world2_9C4(rdram, ctx);
        goto after_0;
    // 0x60002D14: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_0:
    // 0x60002D18: jal         0x60000A60
    // 0x60002D1C: addiu       $a0, $zero, 0xA4E
    ctx->r4 = ADD32(0, 0XA4E);
    ovl_stage_world2_A60(rdram, ctx);
        goto after_1;
    // 0x60002D1C: addiu       $a0, $zero, 0xA4E
    ctx->r4 = ADD32(0, 0XA4E);
    after_1:
    // 0x60002D20: jal         0x600009AC
    // 0x60002D24: nop

    ovl_stage_world2_9AC(rdram, ctx);
        goto after_2;
    // 0x60002D24: nop

    after_2:
    // 0x60002D28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002D2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60002D30: jr          $ra
    // 0x60002D34: nop

    return;
    // 0x60002D34: nop

;}
RECOMP_FUNC void ovl_stage_world2_2D38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002D38: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60002D3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60002D40: jal         0x60000C1C
    // 0x60002D44: nop

    ovl_stage_world2_C1C(rdram, ctx);
        goto after_0;
    // 0x60002D44: nop

    after_0:
    // 0x60002D48: jal         0x60000BB0
    // 0x60002D4C: addiu       $a0, $zero, 0x180
    ctx->r4 = ADD32(0, 0X180);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_1;
    // 0x60002D4C: addiu       $a0, $zero, 0x180
    ctx->r4 = ADD32(0, 0X180);
    after_1:
    // 0x60002D50: bne         $v0, $zero, L_60002DB4
    if (ctx->r2 != 0) {
        // 0x60002D54: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60002DB4;
    }
    // 0x60002D54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002D58: jal         0x60000A90
    // 0x60002D5C: nop

    ovl_stage_world2_A90(rdram, ctx);
        goto after_2;
    // 0x60002D5C: nop

    after_2:
    // 0x60002D60: jal         0x60000DE4
    // 0x60002D64: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world2_DE4(rdram, ctx);
        goto after_3;
    // 0x60002D64: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x60002D68: jal         0x60000CC4
    // 0x60002D6C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_stage_world2_CC4(rdram, ctx);
        goto after_4;
    // 0x60002D6C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_4:
    // 0x60002D70: jal         0x60000A6C
    // 0x60002D74: nop

    ovl_stage_world2_A6C(rdram, ctx);
        goto after_5;
    // 0x60002D74: nop

    after_5:
    // 0x60002D78: jal         0x60000B98
    // 0x60002D7C: addiu       $a0, $zero, 0x180
    ctx->r4 = ADD32(0, 0X180);
    ovl_stage_world2_B98(rdram, ctx);
        goto after_6;
    // 0x60002D7C: addiu       $a0, $zero, 0x180
    ctx->r4 = ADD32(0, 0X180);
    after_6:
    // 0x60002D80: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002D84: addiu       $a0, $a0, 0x2D08
    ctx->r4 = ADD32(ctx->r4, 0X2D08);
    // 0x60002D88: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60002D8C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60002D90: jal         0x60000994
    // 0x60002D94: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world2_994(rdram, ctx);
        goto after_7;
    // 0x60002D94: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_7:
    // 0x60002D98: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x60002D9C: jal         0x60000E68
    // 0x60002DA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world2_E68(rdram, ctx);
        goto after_8;
    // 0x60002DA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x60002DA4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x60002DA8: jal         0x60000E68
    // 0x60002DAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world2_E68(rdram, ctx);
        goto after_9;
    // 0x60002DAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x60002DB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60002DB4:
    // 0x60002DB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60002DB8: jr          $ra
    // 0x60002DBC: nop

    return;
    // 0x60002DBC: nop

;}
RECOMP_FUNC void ovl_stage_world2_2DC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002DC0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x60002DC4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x60002DC8: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x60002DCC: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x60002DD0: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x60002DD4: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x60002DD8: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x60002DDC: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x60002DE0: jal         0x600009C4
    // 0x60002DE4: addiu       $a0, $zero, 0x50
    ctx->r4 = ADD32(0, 0X50);
    ovl_stage_world2_9C4(rdram, ctx);
        goto after_0;
    // 0x60002DE4: addiu       $a0, $zero, 0x50
    ctx->r4 = ADD32(0, 0X50);
    after_0:
    // 0x60002DE8: jal         0x60000E74
    // 0x60002DEC: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    ovl_stage_world2_E74(rdram, ctx);
        goto after_1;
    // 0x60002DEC: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_1:
    // 0x60002DF0: addiu       $s3, $sp, 0x38
    ctx->r19 = ADD32(ctx->r29, 0X38);
    // 0x60002DF4: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x60002DF8: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x60002DFC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60002E00: jal         0x600006C4
    // 0x60002E04: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_stage_world2_6C4(rdram, ctx);
        goto after_2;
    // 0x60002E04: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_2:
    // 0x60002E08: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x60002E0C: jal         0x60000E68
    // 0x60002E10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world2_E68(rdram, ctx);
        goto after_3;
    // 0x60002E10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x60002E14: jal         0x600009C4
    // 0x60002E18: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    ovl_stage_world2_9C4(rdram, ctx);
        goto after_4;
    // 0x60002E18: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    after_4:
    // 0x60002E1C: jal         0x60000244
    // 0x60002E20: addiu       $a0, $zero, 0x137
    ctx->r4 = ADD32(0, 0X137);
    ovl_stage_world2_244(rdram, ctx);
        goto after_5;
    // 0x60002E20: addiu       $a0, $zero, 0x137
    ctx->r4 = ADD32(0, 0X137);
    after_5:
    // 0x60002E24: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002E28: lwc1        $f20, 0x5BEC($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X5BEC);
    // 0x60002E2C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60002E30: addiu       $s1, $zero, 0x78
    ctx->r17 = ADD32(0, 0X78);
L_60002E34:
    // 0x60002E34: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x60002E38: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x60002E3C: sub.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f20.fl;
    // 0x60002E40: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x60002E44: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
    // 0x60002E48: jal         0x600006C4
    // 0x60002E4C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    ovl_stage_world2_6C4(rdram, ctx);
        goto after_6;
    // 0x60002E4C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_6:
    // 0x60002E50: jal         0x600009D0
    // 0x60002E54: nop

    ovl_stage_world2_9D0(rdram, ctx);
        goto after_7;
    // 0x60002E54: nop

    after_7:
    // 0x60002E58: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60002E5C: bne         $s0, $s1, L_60002E34
    if (ctx->r16 != ctx->r17) {
        // 0x60002E60: nop
    
            goto L_60002E34;
    }
    // 0x60002E60: nop

    // 0x60002E64: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x60002E68: addiu       $a1, $zero, 0x31
    ctx->r5 = ADD32(0, 0X31);
    // 0x60002E6C: jal         0x600006C4
    // 0x60002E70: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    ovl_stage_world2_6C4(rdram, ctx);
        goto after_8;
    // 0x60002E70: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_8:
    // 0x60002E74: jal         0x600009AC
    // 0x60002E78: nop

    ovl_stage_world2_9AC(rdram, ctx);
        goto after_9;
    // 0x60002E78: nop

    after_9:
    // 0x60002E7C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x60002E80: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x60002E84: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x60002E88: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x60002E8C: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x60002E90: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x60002E94: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x60002E98: jr          $ra
    // 0x60002E9C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x60002E9C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_stage_world2_2EA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002EA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60002EA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60002EA8: jal         0x60000BB0
    // 0x60002EAC: addiu       $a0, $zero, 0x188
    ctx->r4 = ADD32(0, 0X188);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_0;
    // 0x60002EAC: addiu       $a0, $zero, 0x188
    ctx->r4 = ADD32(0, 0X188);
    after_0:
    // 0x60002EB0: beq         $v0, $zero, L_60002F04
    if (ctx->r2 == 0) {
        // 0x60002EB4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60002F04;
    }
    // 0x60002EB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002EB8: jal         0x60000BB0
    // 0x60002EBC: addiu       $a0, $zero, 0x189
    ctx->r4 = ADD32(0, 0X189);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_1;
    // 0x60002EBC: addiu       $a0, $zero, 0x189
    ctx->r4 = ADD32(0, 0X189);
    after_1:
    // 0x60002EC0: beq         $v0, $zero, L_60002F04
    if (ctx->r2 == 0) {
        // 0x60002EC4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60002F04;
    }
    // 0x60002EC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002EC8: jal         0x60000BB0
    // 0x60002ECC: addiu       $a0, $zero, 0x18A
    ctx->r4 = ADD32(0, 0X18A);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_2;
    // 0x60002ECC: addiu       $a0, $zero, 0x18A
    ctx->r4 = ADD32(0, 0X18A);
    after_2:
    // 0x60002ED0: bne         $v0, $zero, L_60002F04
    if (ctx->r2 != 0) {
        // 0x60002ED4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60002F04;
    }
    // 0x60002ED4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002ED8: jal         0x60000B98
    // 0x60002EDC: addiu       $a0, $zero, 0x18A
    ctx->r4 = ADD32(0, 0X18A);
    ovl_stage_world2_B98(rdram, ctx);
        goto after_3;
    // 0x60002EDC: addiu       $a0, $zero, 0x18A
    ctx->r4 = ADD32(0, 0X18A);
    after_3:
    // 0x60002EE0: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002EE4: addiu       $a0, $a0, 0x2DC0
    ctx->r4 = ADD32(ctx->r4, 0X2DC0);
    // 0x60002EE8: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60002EEC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60002EF0: jal         0x60000994
    // 0x60002EF4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world2_994(rdram, ctx);
        goto after_4;
    // 0x60002EF4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x60002EF8: jal         0x60000A60
    // 0x60002EFC: addiu       $a0, $zero, 0xA4F
    ctx->r4 = ADD32(0, 0XA4F);
    ovl_stage_world2_A60(rdram, ctx);
        goto after_5;
    // 0x60002EFC: addiu       $a0, $zero, 0xA4F
    ctx->r4 = ADD32(0, 0XA4F);
    after_5:
    // 0x60002F00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60002F04:
    // 0x60002F04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60002F08: jr          $ra
    // 0x60002F0C: nop

    return;
    // 0x60002F0C: nop

;}
RECOMP_FUNC void ovl_stage_world2_2F10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002F10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60002F14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60002F18: jal         0x60000BB0
    // 0x60002F1C: addiu       $a0, $zero, 0x18A
    ctx->r4 = ADD32(0, 0X18A);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_0;
    // 0x60002F1C: addiu       $a0, $zero, 0x18A
    ctx->r4 = ADD32(0, 0X18A);
    after_0:
    // 0x60002F20: bne         $v0, $zero, L_60002F84
    if (ctx->r2 != 0) {
        // 0x60002F24: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60002F84;
    }
    // 0x60002F24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002F28: jal         0x60000BB0
    // 0x60002F2C: addiu       $a0, $zero, 0x188
    ctx->r4 = ADD32(0, 0X188);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_1;
    // 0x60002F2C: addiu       $a0, $zero, 0x188
    ctx->r4 = ADD32(0, 0X188);
    after_1:
    // 0x60002F30: bne         $v0, $zero, L_60002F6C
    if (ctx->r2 != 0) {
        // 0x60002F34: nop
    
            goto L_60002F6C;
    }
    // 0x60002F34: nop

    // 0x60002F38: jal         0x60000B98
    // 0x60002F3C: addiu       $a0, $zero, 0x188
    ctx->r4 = ADD32(0, 0X188);
    ovl_stage_world2_B98(rdram, ctx);
        goto after_2;
    // 0x60002F3C: addiu       $a0, $zero, 0x188
    ctx->r4 = ADD32(0, 0X188);
    after_2:
    // 0x60002F40: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    // 0x60002F44: jal         0x60000E68
    // 0x60002F48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world2_E68(rdram, ctx);
        goto after_3;
    // 0x60002F48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x60002F4C: jal         0x60000BB0
    // 0x60002F50: addiu       $a0, $zero, 0x189
    ctx->r4 = ADD32(0, 0X189);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_4;
    // 0x60002F50: addiu       $a0, $zero, 0x189
    ctx->r4 = ADD32(0, 0X189);
    after_4:
    // 0x60002F54: beq         $v0, $zero, L_60002F84
    if (ctx->r2 == 0) {
        // 0x60002F58: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60002F84;
    }
    // 0x60002F58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002F5C: jal         0x60002EA0
    // 0x60002F60: nop

    ovl_stage_world2_2EA0(rdram, ctx);
        goto after_5;
    // 0x60002F60: nop

    after_5:
    // 0x60002F64: b           L_60002F84
    // 0x60002F68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60002F84;
    // 0x60002F68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60002F6C:
    // 0x60002F6C: jal         0x60000BA4
    // 0x60002F70: addiu       $a0, $zero, 0x188
    ctx->r4 = ADD32(0, 0X188);
    ovl_stage_world2_BA4(rdram, ctx);
        goto after_6;
    // 0x60002F70: addiu       $a0, $zero, 0x188
    ctx->r4 = ADD32(0, 0X188);
    after_6:
    // 0x60002F74: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    // 0x60002F78: jal         0x60000E68
    // 0x60002F7C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world2_E68(rdram, ctx);
        goto after_7;
    // 0x60002F7C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
    // 0x60002F80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60002F84:
    // 0x60002F84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60002F88: jr          $ra
    // 0x60002F8C: nop

    return;
    // 0x60002F8C: nop

;}
RECOMP_FUNC void ovl_stage_world2_2F90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002F90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60002F94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60002F98: jal         0x60000BB0
    // 0x60002F9C: addiu       $a0, $zero, 0x18A
    ctx->r4 = ADD32(0, 0X18A);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_0;
    // 0x60002F9C: addiu       $a0, $zero, 0x18A
    ctx->r4 = ADD32(0, 0X18A);
    after_0:
    // 0x60002FA0: bne         $v0, $zero, L_60003004
    if (ctx->r2 != 0) {
        // 0x60002FA4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003004;
    }
    // 0x60002FA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002FA8: jal         0x60000BB0
    // 0x60002FAC: addiu       $a0, $zero, 0x189
    ctx->r4 = ADD32(0, 0X189);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_1;
    // 0x60002FAC: addiu       $a0, $zero, 0x189
    ctx->r4 = ADD32(0, 0X189);
    after_1:
    // 0x60002FB0: bne         $v0, $zero, L_60002FEC
    if (ctx->r2 != 0) {
        // 0x60002FB4: nop
    
            goto L_60002FEC;
    }
    // 0x60002FB4: nop

    // 0x60002FB8: jal         0x60000B98
    // 0x60002FBC: addiu       $a0, $zero, 0x189
    ctx->r4 = ADD32(0, 0X189);
    ovl_stage_world2_B98(rdram, ctx);
        goto after_2;
    // 0x60002FBC: addiu       $a0, $zero, 0x189
    ctx->r4 = ADD32(0, 0X189);
    after_2:
    // 0x60002FC0: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x60002FC4: jal         0x60000E68
    // 0x60002FC8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world2_E68(rdram, ctx);
        goto after_3;
    // 0x60002FC8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x60002FCC: jal         0x60000BB0
    // 0x60002FD0: addiu       $a0, $zero, 0x188
    ctx->r4 = ADD32(0, 0X188);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_4;
    // 0x60002FD0: addiu       $a0, $zero, 0x188
    ctx->r4 = ADD32(0, 0X188);
    after_4:
    // 0x60002FD4: beq         $v0, $zero, L_60003004
    if (ctx->r2 == 0) {
        // 0x60002FD8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003004;
    }
    // 0x60002FD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002FDC: jal         0x60002EA0
    // 0x60002FE0: nop

    ovl_stage_world2_2EA0(rdram, ctx);
        goto after_5;
    // 0x60002FE0: nop

    after_5:
    // 0x60002FE4: b           L_60003004
    // 0x60002FE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60003004;
    // 0x60002FE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60002FEC:
    // 0x60002FEC: jal         0x60000BA4
    // 0x60002FF0: addiu       $a0, $zero, 0x189
    ctx->r4 = ADD32(0, 0X189);
    ovl_stage_world2_BA4(rdram, ctx);
        goto after_6;
    // 0x60002FF0: addiu       $a0, $zero, 0x189
    ctx->r4 = ADD32(0, 0X189);
    after_6:
    // 0x60002FF4: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x60002FF8: jal         0x60000E68
    // 0x60002FFC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world2_E68(rdram, ctx);
        goto after_7;
    // 0x60002FFC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
    // 0x60003000: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003004:
    // 0x60003004: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60003008: jr          $ra
    // 0x6000300C: nop

    return;
    // 0x6000300C: nop

;}
RECOMP_FUNC void ovl_stage_world2_3010(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003010: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x60003014: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x60003018: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x6000301C: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x60003020: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x60003024: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x60003028: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x6000302C: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x60003030: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x60003034: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x60003038: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x6000303C: jal         0x60000BB0
    // 0x60003040: addiu       $a0, $zero, 0x18B
    ctx->r4 = ADD32(0, 0X18B);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_0;
    // 0x60003040: addiu       $a0, $zero, 0x18B
    ctx->r4 = ADD32(0, 0X18B);
    after_0:
    // 0x60003044: beq         $v0, $zero, L_60003050
    if (ctx->r2 == 0) {
        // 0x60003048: nop
    
            goto L_60003050;
    }
    // 0x60003048: nop

    // 0x6000304C: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
L_60003050:
    // 0x60003050: jal         0x60000BB0
    // 0x60003054: addiu       $a0, $zero, 0x18C
    ctx->r4 = ADD32(0, 0X18C);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_1;
    // 0x60003054: addiu       $a0, $zero, 0x18C
    ctx->r4 = ADD32(0, 0X18C);
    after_1:
    // 0x60003058: beq         $v0, $zero, L_60003064
    if (ctx->r2 == 0) {
        // 0x6000305C: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_60003064;
    }
    // 0x6000305C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x60003060: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_60003064:
    // 0x60003064: bne         $s3, $at, L_6000308C
    if (ctx->r19 != ctx->r1) {
        // 0x60003068: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_6000308C;
    }
    // 0x60003068: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x6000306C: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x60003070: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x60003074: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x60003078: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x6000307C: jal         0x60000D18
    // 0x60003080: addiu       $a3, $zero, 0x78
    ctx->r7 = ADD32(0, 0X78);
    ovl_stage_world2_D18(rdram, ctx);
        goto after_2;
    // 0x60003080: addiu       $a3, $zero, 0x78
    ctx->r7 = ADD32(0, 0X78);
    after_2:
    // 0x60003084: b           L_600030B4
    // 0x60003088: swc1        $f20, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f20.u32l;
        goto L_600030B4;
    // 0x60003088: swc1        $f20, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f20.u32l;
L_6000308C:
    // 0x6000308C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x60003090: bne         $s3, $at, L_600030B4
    if (ctx->r19 != ctx->r1) {
        // 0x60003094: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_600030B4;
    }
    // 0x60003094: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60003098: lui         $at, 0xC2C8
    ctx->r1 = S32(0XC2C8 << 16);
    // 0x6000309C: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x600030A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x600030A4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x600030A8: jal         0x60000D18
    // 0x600030AC: addiu       $a3, $zero, 0x3C
    ctx->r7 = ADD32(0, 0X3C);
    ovl_stage_world2_D18(rdram, ctx);
        goto after_3;
    // 0x600030AC: addiu       $a3, $zero, 0x3C
    ctx->r7 = ADD32(0, 0X3C);
    after_3:
    // 0x600030B0: swc1        $f20, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f20.u32l;
L_600030B4:
    // 0x600030B4: lwc1        $f20, 0x48($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X48);
    // 0x600030B8: jal         0x60000244
    // 0x600030BC: addiu       $a0, $zero, 0x137
    ctx->r4 = ADD32(0, 0X137);
    ovl_stage_world2_244(rdram, ctx);
        goto after_4;
    // 0x600030BC: addiu       $a0, $zero, 0x137
    ctx->r4 = ADD32(0, 0X137);
    after_4:
    // 0x600030C0: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x600030C4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x600030C8: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    // 0x600030CC: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x600030D0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x600030D4: addiu       $s2, $zero, 0x3C
    ctx->r18 = ADD32(0, 0X3C);
    // 0x600030D8: addiu       $s1, $sp, 0x50
    ctx->r17 = ADD32(ctx->r29, 0X50);
    // 0x600030DC: add.s       $f20, $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f4.fl;
L_600030E0:
    // 0x600030E0: jal         0x60000E74
    // 0x600030E4: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    ovl_stage_world2_E74(rdram, ctx);
        goto after_5;
    // 0x600030E4: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_5:
    // 0x600030E8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600030EC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x600030F0: jal         0x600006C4
    // 0x600030F4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world2_6C4(rdram, ctx);
        goto after_6;
    // 0x600030F4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_6:
    // 0x600030F8: swc1        $f20, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f20.u32l;
    // 0x600030FC: sub.s       $f20, $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f22.fl;
    // 0x60003100: jal         0x60000E74
    // 0x60003104: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    ovl_stage_world2_E74(rdram, ctx);
        goto after_7;
    // 0x60003104: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_7:
    // 0x60003108: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x6000310C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x60003110: jal         0x600006C4
    // 0x60003114: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world2_6C4(rdram, ctx);
        goto after_8;
    // 0x60003114: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_8:
    // 0x60003118: jal         0x600009D0
    // 0x6000311C: nop

    ovl_stage_world2_9D0(rdram, ctx);
        goto after_9;
    // 0x6000311C: nop

    after_9:
    // 0x60003120: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60003124: bne         $s0, $s2, L_600030E0
    if (ctx->r16 != ctx->r18) {
        // 0x60003128: nop
    
            goto L_600030E0;
    }
    // 0x60003128: nop

    // 0x6000312C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x60003130: bne         $s3, $at, L_60003140
    if (ctx->r19 != ctx->r1) {
        // 0x60003134: nop
    
            goto L_60003140;
    }
    // 0x60003134: nop

    // 0x60003138: jal         0x60000244
    // 0x6000313C: addiu       $a0, $zero, 0x8B
    ctx->r4 = ADD32(0, 0X8B);
    ovl_stage_world2_244(rdram, ctx);
        goto after_10;
    // 0x6000313C: addiu       $a0, $zero, 0x8B
    ctx->r4 = ADD32(0, 0X8B);
    after_10:
L_60003140:
    // 0x60003140: jal         0x600009AC
    // 0x60003144: nop

    ovl_stage_world2_9AC(rdram, ctx);
        goto after_11;
    // 0x60003144: nop

    after_11:
    // 0x60003148: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x6000314C: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x60003150: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x60003154: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x60003158: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x6000315C: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x60003160: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x60003164: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x60003168: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x6000316C: jr          $ra
    // 0x60003170: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x60003170: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void ovl_stage_world2_3174(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003174: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60003178: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x6000317C: jal         0x60000EEC
    // 0x60003180: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    ovl_stage_world2_EEC(rdram, ctx);
        goto after_0;
    // 0x60003180: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_0:
    // 0x60003184: jal         0x60000EEC
    // 0x60003188: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    ovl_stage_world2_EEC(rdram, ctx);
        goto after_1;
    // 0x60003188: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_1:
    // 0x6000318C: jal         0x60000EEC
    // 0x60003190: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    ovl_stage_world2_EEC(rdram, ctx);
        goto after_2;
    // 0x60003190: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    after_2:
    // 0x60003194: jal         0x60000EEC
    // 0x60003198: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    ovl_stage_world2_EEC(rdram, ctx);
        goto after_3;
    // 0x60003198: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    after_3:
    // 0x6000319C: jal         0x600009AC
    // 0x600031A0: nop

    ovl_stage_world2_9AC(rdram, ctx);
        goto after_4;
    // 0x600031A0: nop

    after_4:
    // 0x600031A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600031A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600031AC: jr          $ra
    // 0x600031B0: nop

    return;
    // 0x600031B0: nop

;}
RECOMP_FUNC void ovl_stage_world2_31B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600031B4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x600031B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600031BC: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x600031C0: jal         0x60000BB0
    // 0x600031C4: addiu       $a0, $zero, 0x19E
    ctx->r4 = ADD32(0, 0X19E);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_0;
    // 0x600031C4: addiu       $a0, $zero, 0x19E
    ctx->r4 = ADD32(0, 0X19E);
    after_0:
    // 0x600031C8: beq         $v0, $zero, L_60003200
    if (ctx->r2 == 0) {
        // 0x600031CC: nop
    
            goto L_60003200;
    }
    // 0x600031CC: nop

    // 0x600031D0: jal         0x60000BB0
    // 0x600031D4: addiu       $a0, $zero, 0x19F
    ctx->r4 = ADD32(0, 0X19F);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_1;
    // 0x600031D4: addiu       $a0, $zero, 0x19F
    ctx->r4 = ADD32(0, 0X19F);
    after_1:
    // 0x600031D8: beq         $v0, $zero, L_600031E8
    if (ctx->r2 == 0) {
        // 0x600031DC: nop
    
            goto L_600031E8;
    }
    // 0x600031DC: nop

    // 0x600031E0: jal         0x60000BA4
    // 0x600031E4: addiu       $a0, $zero, 0x19F
    ctx->r4 = ADD32(0, 0X19F);
    ovl_stage_world2_BA4(rdram, ctx);
        goto after_2;
    // 0x600031E4: addiu       $a0, $zero, 0x19F
    ctx->r4 = ADD32(0, 0X19F);
    after_2:
L_600031E8:
    // 0x600031E8: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600031EC: addiu       $a0, $a0, 0x3174
    ctx->r4 = ADD32(ctx->r4, 0X3174);
    // 0x600031F0: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x600031F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x600031F8: jal         0x60000994
    // 0x600031FC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world2_994(rdram, ctx);
        goto after_3;
    // 0x600031FC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
L_60003200:
    // 0x60003200: jal         0x60000BB0
    // 0x60003204: addiu       $a0, $zero, 0x81
    ctx->r4 = ADD32(0, 0X81);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_4;
    // 0x60003204: addiu       $a0, $zero, 0x81
    ctx->r4 = ADD32(0, 0X81);
    after_4:
    // 0x60003208: bne         $v0, $zero, L_60003330
    if (ctx->r2 != 0) {
        // 0x6000320C: nop
    
            goto L_60003330;
    }
    // 0x6000320C: nop

    // 0x60003210: jal         0x60000E74
    // 0x60003214: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    ovl_stage_world2_E74(rdram, ctx);
        goto after_5;
    // 0x60003214: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_5:
    // 0x60003218: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x6000321C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60003220: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x60003224: jal         0x600006C4
    // 0x60003228: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_stage_world2_6C4(rdram, ctx);
        goto after_6;
    // 0x60003228: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_6:
    // 0x6000322C: jal         0x60000BB0
    // 0x60003230: addiu       $a0, $zero, 0x18B
    ctx->r4 = ADD32(0, 0X18B);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_7;
    // 0x60003230: addiu       $a0, $zero, 0x18B
    ctx->r4 = ADD32(0, 0X18B);
    after_7:
    // 0x60003234: beq         $v0, $zero, L_60003240
    if (ctx->r2 == 0) {
        // 0x60003238: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_60003240;
    }
    // 0x60003238: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x6000323C: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
L_60003240:
    // 0x60003240: jal         0x60000BB0
    // 0x60003244: addiu       $a0, $zero, 0x18C
    ctx->r4 = ADD32(0, 0X18C);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_8;
    // 0x60003244: addiu       $a0, $zero, 0x18C
    ctx->r4 = ADD32(0, 0X18C);
    after_8:
    // 0x60003248: beq         $v0, $zero, L_60003264
    if (ctx->r2 == 0) {
        // 0x6000324C: lw          $v0, 0x34($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X34);
            goto L_60003264;
    }
    // 0x6000324C: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x60003250: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x60003254: nop

    // 0x60003258: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x6000325C: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x60003260: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
L_60003264:
    // 0x60003264: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x60003268: bne         $v0, $at, L_6000327C
    if (ctx->r2 != ctx->r1) {
        // 0x6000326C: lui         $at, 0x4316
        ctx->r1 = S32(0X4316 << 16);
            goto L_6000327C;
    }
    // 0x6000326C: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x60003270: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60003274: b           L_60003294
    // 0x60003278: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
        goto L_60003294;
    // 0x60003278: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
L_6000327C:
    // 0x6000327C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x60003280: bne         $v0, $at, L_60003294
    if (ctx->r2 != ctx->r1) {
        // 0x60003284: lui         $at, 0xC2C8
        ctx->r1 = S32(0XC2C8 << 16);
            goto L_60003294;
    }
    // 0x60003284: lui         $at, 0xC2C8
    ctx->r1 = S32(0XC2C8 << 16);
    // 0x60003288: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x6000328C: nop

    // 0x60003290: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
L_60003294:
    // 0x60003294: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x60003298: beq         $at, $zero, L_600032BC
    if (ctx->r1 == 0) {
        // 0x6000329C: lw          $a0, 0x30($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X30);
            goto L_600032BC;
    }
    // 0x6000329C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x600032A0: jal         0x60000EEC
    // 0x600032A4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    ovl_stage_world2_EEC(rdram, ctx);
        goto after_9;
    // 0x600032A4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_9:
    // 0x600032A8: jal         0x60000EEC
    // 0x600032AC: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    ovl_stage_world2_EEC(rdram, ctx);
        goto after_10;
    // 0x600032AC: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_10:
    // 0x600032B0: jal         0x60000EEC
    // 0x600032B4: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    ovl_stage_world2_EEC(rdram, ctx);
        goto after_11;
    // 0x600032B4: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_11:
    // 0x600032B8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
L_600032BC:
    // 0x600032BC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x600032C0: jal         0x600006C4
    // 0x600032C4: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_stage_world2_6C4(rdram, ctx);
        goto after_12;
    // 0x600032C4: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_12:
    // 0x600032C8: jal         0x60000C1C
    // 0x600032CC: nop

    ovl_stage_world2_C1C(rdram, ctx);
        goto after_13;
    // 0x600032CC: nop

    after_13:
    // 0x600032D0: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x600032D4: nop

    // 0x600032D8: andi        $t8, $t7, 0x800
    ctx->r24 = ctx->r15 & 0X800;
    // 0x600032DC: beq         $t8, $zero, L_60003344
    if (ctx->r24 == 0) {
        // 0x600032E0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003344;
    }
    // 0x600032E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600032E4: jal         0x60000BB0
    // 0x600032E8: addiu       $a0, $zero, 0x18E
    ctx->r4 = ADD32(0, 0X18E);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_14;
    // 0x600032E8: addiu       $a0, $zero, 0x18E
    ctx->r4 = ADD32(0, 0X18E);
    after_14:
    // 0x600032EC: bne         $v0, $zero, L_60003344
    if (ctx->r2 != 0) {
        // 0x600032F0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003344;
    }
    // 0x600032F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600032F4: jal         0x60000BB0
    // 0x600032F8: addiu       $a0, $zero, 0x18B
    ctx->r4 = ADD32(0, 0X18B);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_15;
    // 0x600032F8: addiu       $a0, $zero, 0x18B
    ctx->r4 = ADD32(0, 0X18B);
    after_15:
    // 0x600032FC: bne         $v0, $zero, L_60003310
    if (ctx->r2 != 0) {
        // 0x60003300: nop
    
            goto L_60003310;
    }
    // 0x60003300: nop

    // 0x60003304: jal         0x60000BB0
    // 0x60003308: addiu       $a0, $zero, 0x18C
    ctx->r4 = ADD32(0, 0X18C);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_16;
    // 0x60003308: addiu       $a0, $zero, 0x18C
    ctx->r4 = ADD32(0, 0X18C);
    after_16:
    // 0x6000330C: beq         $v0, $zero, L_60003340
    if (ctx->r2 == 0) {
        // 0x60003310: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_60003340;
    }
L_60003310:
    // 0x60003310: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003314: addiu       $a0, $a0, 0x3010
    ctx->r4 = ADD32(ctx->r4, 0X3010);
    // 0x60003318: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x6000331C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60003320: jal         0x60000994
    // 0x60003324: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world2_994(rdram, ctx);
        goto after_17;
    // 0x60003324: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_17:
    // 0x60003328: b           L_60003344
    // 0x6000332C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60003344;
    // 0x6000332C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003330:
    // 0x60003330: jal         0x60000EEC
    // 0x60003334: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    ovl_stage_world2_EEC(rdram, ctx);
        goto after_18;
    // 0x60003334: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_18:
    // 0x60003338: jal         0x60000EEC
    // 0x6000333C: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    ovl_stage_world2_EEC(rdram, ctx);
        goto after_19;
    // 0x6000333C: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_19:
L_60003340:
    // 0x60003340: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003344:
    // 0x60003344: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x60003348: jr          $ra
    // 0x6000334C: nop

    return;
    // 0x6000334C: nop

;}
RECOMP_FUNC void ovl_stage_world2_3350(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003350: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x60003354: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x60003358: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x6000335C: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x60003360: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x60003364: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x60003368: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x6000336C: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x60003370: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x60003374: sw          $t6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r14;
    // 0x60003378: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    // 0x6000337C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60003380: jal         0x60000808
    // 0x60003384: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_stage_world2_808(rdram, ctx);
        goto after_0;
    // 0x60003384: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x60003388: jal         0x60000E74
    // 0x6000338C: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    ovl_stage_world2_E74(rdram, ctx);
        goto after_1;
    // 0x6000338C: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_1:
    // 0x60003390: addiu       $s3, $sp, 0x38
    ctx->r19 = ADD32(ctx->r29, 0X38);
    // 0x60003394: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x60003398: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x6000339C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600033A0: jal         0x600006C4
    // 0x600033A4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_stage_world2_6C4(rdram, ctx);
        goto after_2;
    // 0x600033A4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_2:
    // 0x600033A8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600033AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x600033B0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x600033B4: jal         0x60000D18
    // 0x600033B8: addiu       $a3, $zero, 0x78
    ctx->r7 = ADD32(0, 0X78);
    ovl_stage_world2_D18(rdram, ctx);
        goto after_3;
    // 0x600033B8: addiu       $a3, $zero, 0x78
    ctx->r7 = ADD32(0, 0X78);
    after_3:
    // 0x600033BC: jal         0x60000244
    // 0x600033C0: addiu       $a0, $zero, 0x137
    ctx->r4 = ADD32(0, 0X137);
    ovl_stage_world2_244(rdram, ctx);
        goto after_4;
    // 0x600033C0: addiu       $a0, $zero, 0x137
    ctx->r4 = ADD32(0, 0X137);
    after_4:
    // 0x600033C4: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600033C8: lwc1        $f20, 0x5BF0($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X5BF0);
    // 0x600033CC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x600033D0: addiu       $s1, $zero, 0x3C
    ctx->r17 = ADD32(0, 0X3C);
L_600033D4:
    // 0x600033D4: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x600033D8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x600033DC: sub.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f20.fl;
    // 0x600033E0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x600033E4: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
    // 0x600033E8: jal         0x600006C4
    // 0x600033EC: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    ovl_stage_world2_6C4(rdram, ctx);
        goto after_5;
    // 0x600033EC: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_5:
    // 0x600033F0: jal         0x600009D0
    // 0x600033F4: nop

    ovl_stage_world2_9D0(rdram, ctx);
        goto after_6;
    // 0x600033F4: nop

    after_6:
    // 0x600033F8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x600033FC: bne         $s0, $s1, L_600033D4
    if (ctx->r16 != ctx->r17) {
        // 0x60003400: nop
    
            goto L_600033D4;
    }
    // 0x60003400: nop

    // 0x60003404: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x60003408: addiu       $a1, $zero, 0x31
    ctx->r5 = ADD32(0, 0X31);
    // 0x6000340C: jal         0x600006C4
    // 0x60003410: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    ovl_stage_world2_6C4(rdram, ctx);
        goto after_7;
    // 0x60003410: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_7:
    // 0x60003414: sw          $zero, 0x50($sp)
    MEM_W(0X50, ctx->r29) = 0;
    // 0x60003418: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x6000341C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x60003420: jal         0x60000808
    // 0x60003424: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    ovl_stage_world2_808(rdram, ctx);
        goto after_8;
    // 0x60003424: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    after_8:
    // 0x60003428: jal         0x600009AC
    // 0x6000342C: nop

    ovl_stage_world2_9AC(rdram, ctx);
        goto after_9;
    // 0x6000342C: nop

    after_9:
    // 0x60003430: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x60003434: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x60003438: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x6000343C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x60003440: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x60003444: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x60003448: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x6000344C: jr          $ra
    // 0x60003450: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x60003450: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_stage_world2_3454(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003454: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60003458: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x6000345C: jal         0x60000BB0
    // 0x60003460: addiu       $a0, $zero, 0x190
    ctx->r4 = ADD32(0, 0X190);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_0;
    // 0x60003460: addiu       $a0, $zero, 0x190
    ctx->r4 = ADD32(0, 0X190);
    after_0:
    // 0x60003464: beq         $v0, $zero, L_600034D0
    if (ctx->r2 == 0) {
        // 0x60003468: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600034D0;
    }
    // 0x60003468: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000346C: jal         0x60000BB0
    // 0x60003470: addiu       $a0, $zero, 0x192
    ctx->r4 = ADD32(0, 0X192);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_1;
    // 0x60003470: addiu       $a0, $zero, 0x192
    ctx->r4 = ADD32(0, 0X192);
    after_1:
    // 0x60003474: beq         $v0, $zero, L_600034D0
    if (ctx->r2 == 0) {
        // 0x60003478: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600034D0;
    }
    // 0x60003478: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000347C: jal         0x60000BB0
    // 0x60003480: addiu       $a0, $zero, 0x193
    ctx->r4 = ADD32(0, 0X193);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_2;
    // 0x60003480: addiu       $a0, $zero, 0x193
    ctx->r4 = ADD32(0, 0X193);
    after_2:
    // 0x60003484: beq         $v0, $zero, L_600034D0
    if (ctx->r2 == 0) {
        // 0x60003488: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600034D0;
    }
    // 0x60003488: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000348C: jal         0x60000BB0
    // 0x60003490: addiu       $a0, $zero, 0x194
    ctx->r4 = ADD32(0, 0X194);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_3;
    // 0x60003490: addiu       $a0, $zero, 0x194
    ctx->r4 = ADD32(0, 0X194);
    after_3:
    // 0x60003494: beq         $v0, $zero, L_600034D0
    if (ctx->r2 == 0) {
        // 0x60003498: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600034D0;
    }
    // 0x60003498: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000349C: jal         0x60000BB0
    // 0x600034A0: addiu       $a0, $zero, 0x195
    ctx->r4 = ADD32(0, 0X195);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_4;
    // 0x600034A0: addiu       $a0, $zero, 0x195
    ctx->r4 = ADD32(0, 0X195);
    after_4:
    // 0x600034A4: bne         $v0, $zero, L_600034D0
    if (ctx->r2 != 0) {
        // 0x600034A8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600034D0;
    }
    // 0x600034A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600034AC: jal         0x60000B98
    // 0x600034B0: addiu       $a0, $zero, 0x195
    ctx->r4 = ADD32(0, 0X195);
    ovl_stage_world2_B98(rdram, ctx);
        goto after_5;
    // 0x600034B0: addiu       $a0, $zero, 0x195
    ctx->r4 = ADD32(0, 0X195);
    after_5:
    // 0x600034B4: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600034B8: addiu       $a0, $a0, 0x3350
    ctx->r4 = ADD32(ctx->r4, 0X3350);
    // 0x600034BC: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x600034C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x600034C4: jal         0x60000994
    // 0x600034C8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world2_994(rdram, ctx);
        goto after_6;
    // 0x600034C8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_6:
    // 0x600034CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600034D0:
    // 0x600034D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600034D4: jr          $ra
    // 0x600034D8: nop

    return;
    // 0x600034D8: nop

;}
RECOMP_FUNC void ovl_stage_world2_34DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600034DC: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x600034E0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x600034E4: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x600034E8: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x600034EC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x600034F0: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x600034F4: jal         0x60000C1C
    // 0x600034F8: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    ovl_stage_world2_C1C(rdram, ctx);
        goto after_0;
    // 0x600034F8: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x600034FC: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x60003500: jal         0x600009C4
    // 0x60003504: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    ovl_stage_world2_9C4(rdram, ctx);
        goto after_1;
    // 0x60003504: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_1:
    // 0x60003508: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x6000350C: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    // 0x60003510: jal         0x600027BC
    // 0x60003514: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    ovl_stage_world2_27BC(rdram, ctx);
        goto after_2;
    // 0x60003514: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    after_2:
    // 0x60003518: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x6000351C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x60003520: jal         0x600027BC
    // 0x60003524: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    ovl_stage_world2_27BC(rdram, ctx);
        goto after_3;
    // 0x60003524: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_3:
    // 0x60003528: jal         0x60000814
    // 0x6000352C: nop

    ovl_stage_world2_814(rdram, ctx);
        goto after_4;
    // 0x6000352C: nop

    after_4:
    // 0x60003530: jal         0x600009C4
    // 0x60003534: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    ovl_stage_world2_9C4(rdram, ctx);
        goto after_5;
    // 0x60003534: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_5:
    // 0x60003538: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x6000353C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x60003540: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x60003544: jal         0x60000D18
    // 0x60003548: addiu       $a3, $zero, 0xB4
    ctx->r7 = ADD32(0, 0XB4);
    ovl_stage_world2_D18(rdram, ctx);
        goto after_6;
    // 0x60003548: addiu       $a3, $zero, 0xB4
    ctx->r7 = ADD32(0, 0XB4);
    after_6:
    // 0x6000354C: jal         0x60000244
    // 0x60003550: addiu       $a0, $zero, 0x135
    ctx->r4 = ADD32(0, 0X135);
    ovl_stage_world2_244(rdram, ctx);
        goto after_7;
    // 0x60003550: addiu       $a0, $zero, 0x135
    ctx->r4 = ADD32(0, 0X135);
    after_7:
    // 0x60003554: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x60003558: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x6000355C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x60003560: addiu       $s2, $zero, 0x28
    ctx->r18 = ADD32(0, 0X28);
    // 0x60003564: addiu       $s0, $sp, 0x3C
    ctx->r16 = ADD32(ctx->r29, 0X3C);
L_60003568:
    // 0x60003568: jal         0x60000DE4
    // 0x6000356C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world2_DE4(rdram, ctx);
        goto after_8;
    // 0x6000356C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_8:
    // 0x60003570: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60003574: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x60003578: jal         0x600006C4
    // 0x6000357C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_stage_world2_6C4(rdram, ctx);
        goto after_9;
    // 0x6000357C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_9:
    // 0x60003580: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x60003584: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60003588: sub.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f20.fl;
    // 0x6000358C: jal         0x60000DE4
    // 0x60003590: swc1        $f6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f6.u32l;
    ovl_stage_world2_DE4(rdram, ctx);
        goto after_10;
    // 0x60003590: swc1        $f6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f6.u32l;
    after_10:
    // 0x60003594: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60003598: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x6000359C: jal         0x600006C4
    // 0x600035A0: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_stage_world2_6C4(rdram, ctx);
        goto after_11;
    // 0x600035A0: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_11:
    // 0x600035A4: jal         0x60000DE4
    // 0x600035A8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world2_DE4(rdram, ctx);
        goto after_12;
    // 0x600035A8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_12:
    // 0x600035AC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600035B0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x600035B4: jal         0x600006C4
    // 0x600035B8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_stage_world2_6C4(rdram, ctx);
        goto after_13;
    // 0x600035B8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_13:
    // 0x600035BC: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x600035C0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x600035C4: sub.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f20.fl;
    // 0x600035C8: jal         0x60000DE4
    // 0x600035CC: swc1        $f10, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f10.u32l;
    ovl_stage_world2_DE4(rdram, ctx);
        goto after_14;
    // 0x600035CC: swc1        $f10, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f10.u32l;
    after_14:
    // 0x600035D0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600035D4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x600035D8: jal         0x600006C4
    // 0x600035DC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_stage_world2_6C4(rdram, ctx);
        goto after_15;
    // 0x600035DC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_15:
    // 0x600035E0: jal         0x60000E74
    // 0x600035E4: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    ovl_stage_world2_E74(rdram, ctx);
        goto after_16;
    // 0x600035E4: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_16:
    // 0x600035E8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600035EC: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x600035F0: jal         0x600006C4
    // 0x600035F4: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_stage_world2_6C4(rdram, ctx);
        goto after_17;
    // 0x600035F4: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_17:
    // 0x600035F8: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x600035FC: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x60003600: lwc1        $f16, 0x30($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X30);
    // 0x60003604: nop

    // 0x60003608: sub.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f20.fl;
    // 0x6000360C: jal         0x60000E74
    // 0x60003610: swc1        $f18, 0x30($t6)
    MEM_W(0X30, ctx->r14) = ctx->f18.u32l;
    ovl_stage_world2_E74(rdram, ctx);
        goto after_18;
    // 0x60003610: swc1        $f18, 0x30($t6)
    MEM_W(0X30, ctx->r14) = ctx->f18.u32l;
    after_18:
    // 0x60003614: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60003618: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x6000361C: jal         0x600006C4
    // 0x60003620: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_stage_world2_6C4(rdram, ctx);
        goto after_19;
    // 0x60003620: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_19:
    // 0x60003624: jal         0x600009D0
    // 0x60003628: nop

    ovl_stage_world2_9D0(rdram, ctx);
        goto after_20;
    // 0x60003628: nop

    after_20:
    // 0x6000362C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x60003630: bne         $s1, $s2, L_60003568
    if (ctx->r17 != ctx->r18) {
        // 0x60003634: nop
    
            goto L_60003568;
    }
    // 0x60003634: nop

    // 0x60003638: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x6000363C: lui         $at, 0xFFFE
    ctx->r1 = S32(0XFFFE << 16);
    // 0x60003640: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x60003644: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x60003648: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x6000364C: addiu       $a0, $zero, 0x83D
    ctx->r4 = ADD32(0, 0X83D);
    // 0x60003650: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x60003654: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60003658: jal         0x60000C10
    // 0x6000365C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    ovl_stage_world2_C10(rdram, ctx);
        goto after_21;
    // 0x6000365C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    after_21:
    // 0x60003660: jal         0x600009AC
    // 0x60003664: nop

    ovl_stage_world2_9AC(rdram, ctx);
        goto after_22;
    // 0x60003664: nop

    after_22:
    // 0x60003668: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x6000366C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x60003670: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x60003674: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x60003678: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x6000367C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x60003680: jr          $ra
    // 0x60003684: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x60003684: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_stage_world2_3688(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003688: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x6000368C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003690: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    // 0x60003694: jal         0x60000E68
    // 0x60003698: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world2_E68(rdram, ctx);
        goto after_0;
    // 0x60003698: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x6000369C: jal         0x600009C4
    // 0x600036A0: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    ovl_stage_world2_9C4(rdram, ctx);
        goto after_1;
    // 0x600036A0: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    after_1:
    // 0x600036A4: jal         0x60000B98
    // 0x600036A8: addiu       $a0, $zero, 0x19F
    ctx->r4 = ADD32(0, 0X19F);
    ovl_stage_world2_B98(rdram, ctx);
        goto after_2;
    // 0x600036A8: addiu       $a0, $zero, 0x19F
    ctx->r4 = ADD32(0, 0X19F);
    after_2:
    // 0x600036AC: jal         0x60000EEC
    // 0x600036B0: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    ovl_stage_world2_EEC(rdram, ctx);
        goto after_3;
    // 0x600036B0: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_3:
    // 0x600036B4: jal         0x60000EEC
    // 0x600036B8: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    ovl_stage_world2_EEC(rdram, ctx);
        goto after_4;
    // 0x600036B8: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_4:
    // 0x600036BC: jal         0x60000EEC
    // 0x600036C0: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    ovl_stage_world2_EEC(rdram, ctx);
        goto after_5;
    // 0x600036C0: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    after_5:
    // 0x600036C4: jal         0x60000EEC
    // 0x600036C8: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    ovl_stage_world2_EEC(rdram, ctx);
        goto after_6;
    // 0x600036C8: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    after_6:
    // 0x600036CC: jal         0x60000A60
    // 0x600036D0: addiu       $a0, $zero, 0xA55
    ctx->r4 = ADD32(0, 0XA55);
    ovl_stage_world2_A60(rdram, ctx);
        goto after_7;
    // 0x600036D0: addiu       $a0, $zero, 0xA55
    ctx->r4 = ADD32(0, 0XA55);
    after_7:
    // 0x600036D4: jal         0x60000B98
    // 0x600036D8: addiu       $a0, $zero, 0x19E
    ctx->r4 = ADD32(0, 0X19E);
    ovl_stage_world2_B98(rdram, ctx);
        goto after_8;
    // 0x600036D8: addiu       $a0, $zero, 0x19E
    ctx->r4 = ADD32(0, 0X19E);
    after_8:
    // 0x600036DC: jal         0x600009AC
    // 0x600036E0: nop

    ovl_stage_world2_9AC(rdram, ctx);
        goto after_9;
    // 0x600036E0: nop

    after_9:
    // 0x600036E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600036E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600036EC: jr          $ra
    // 0x600036F0: nop

    return;
    // 0x600036F0: nop

;}
RECOMP_FUNC void ovl_stage_world2_36F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600036F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600036F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600036FC: jal         0x60000DE4
    // 0x60003700: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world2_DE4(rdram, ctx);
        goto after_0;
    // 0x60003700: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x60003704: jal         0x60000CC4
    // 0x60003708: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_stage_world2_CC4(rdram, ctx);
        goto after_1;
    // 0x60003708: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x6000370C: jal         0x60000A6C
    // 0x60003710: nop

    ovl_stage_world2_A6C(rdram, ctx);
        goto after_2;
    // 0x60003710: nop

    after_2:
    // 0x60003714: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003718: addiu       $a0, $a0, 0x3688
    ctx->r4 = ADD32(ctx->r4, 0X3688);
    // 0x6000371C: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60003720: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60003724: jal         0x60000994
    // 0x60003728: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world2_994(rdram, ctx);
        goto after_3;
    // 0x60003728: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x6000372C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003730: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60003734: jr          $ra
    // 0x60003738: nop

    return;
    // 0x60003738: nop

;}
RECOMP_FUNC void ovl_stage_world2_373C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000373C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x60003740: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003744: jal         0x60000C1C
    // 0x60003748: nop

    ovl_stage_world2_C1C(rdram, ctx);
        goto after_0;
    // 0x60003748: nop

    after_0:
    // 0x6000374C: lui         $t6, 0x6000
    ctx->r14 = S32(0X6000 << 16);
    // 0x60003750: lw          $t6, 0x5D68($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5D68);
    // 0x60003754: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x60003758: bne         $t6, $zero, L_6000382C
    if (ctx->r14 != 0) {
        // 0x6000375C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_6000382C;
    }
    // 0x6000375C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003760: jal         0x60000BB0
    // 0x60003764: addiu       $a0, $zero, 0x10E
    ctx->r4 = ADD32(0, 0X10E);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_1;
    // 0x60003764: addiu       $a0, $zero, 0x10E
    ctx->r4 = ADD32(0, 0X10E);
    after_1:
    // 0x60003768: bne         $v0, $zero, L_6000382C
    if (ctx->r2 != 0) {
        // 0x6000376C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_6000382C;
    }
    // 0x6000376C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003770: jal         0x60000B98
    // 0x60003774: addiu       $a0, $zero, 0x10E
    ctx->r4 = ADD32(0, 0X10E);
    ovl_stage_world2_B98(rdram, ctx);
        goto after_2;
    // 0x60003774: addiu       $a0, $zero, 0x10E
    ctx->r4 = ADD32(0, 0X10E);
    after_2:
    // 0x60003778: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    // 0x6000377C: jal         0x600006D0
    // 0x60003780: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world2_6D0(rdram, ctx);
        goto after_3;
    // 0x60003780: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x60003784: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60003788: jal         0x60002738
    // 0x6000378C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world2_2738(rdram, ctx);
        goto after_4;
    // 0x6000378C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x60003790: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x60003794: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x60003798: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x6000379C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600037A0: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x600037A4: jal         0x60000DE4
    // 0x600037A8: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    ovl_stage_world2_DE4(rdram, ctx);
        goto after_5;
    // 0x600037A8: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    after_5:
    // 0x600037AC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600037B0: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x600037B4: jal         0x600006C4
    // 0x600037B8: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    ovl_stage_world2_6C4(rdram, ctx);
        goto after_6;
    // 0x600037B8: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    after_6:
    // 0x600037BC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x600037C0: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x600037C4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600037C8: jal         0x60000DE4
    // 0x600037CC: swc1        $f4, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->f4.u32l;
    ovl_stage_world2_DE4(rdram, ctx);
        goto after_7;
    // 0x600037CC: swc1        $f4, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->f4.u32l;
    after_7:
    // 0x600037D0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600037D4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x600037D8: jal         0x600006C4
    // 0x600037DC: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    ovl_stage_world2_6C4(rdram, ctx);
        goto after_8;
    // 0x600037DC: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    after_8:
    // 0x600037E0: jal         0x60000DE4
    // 0x600037E4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world2_DE4(rdram, ctx);
        goto after_9;
    // 0x600037E4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_9:
    // 0x600037E8: jal         0x60000CC4
    // 0x600037EC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_stage_world2_CC4(rdram, ctx);
        goto after_10;
    // 0x600037EC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_10:
    // 0x600037F0: jal         0x60000A6C
    // 0x600037F4: nop

    ovl_stage_world2_A6C(rdram, ctx);
        goto after_11;
    // 0x600037F4: nop

    after_11:
    // 0x600037F8: lui         $a1, 0x409C
    ctx->r5 = S32(0X409C << 16);
    // 0x600037FC: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x60003800: jal         0x60001150
    // 0x60003804: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world2_1150(rdram, ctx);
        goto after_12;
    // 0x60003804: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_12:
    // 0x60003808: jal         0x60000A90
    // 0x6000380C: nop

    ovl_stage_world2_A90(rdram, ctx);
        goto after_13;
    // 0x6000380C: nop

    after_13:
    // 0x60003810: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003814: addiu       $a0, $a0, 0x34DC
    ctx->r4 = ADD32(ctx->r4, 0X34DC);
    // 0x60003818: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x6000381C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60003820: jal         0x60000994
    // 0x60003824: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world2_994(rdram, ctx);
        goto after_14;
    // 0x60003824: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_14:
    // 0x60003828: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000382C:
    // 0x6000382C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x60003830: jr          $ra
    // 0x60003834: nop

    return;
    // 0x60003834: nop

;}
RECOMP_FUNC void ovl_stage_world2_3838(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003838: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x6000383C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003840: jal         0x60000B98
    // 0x60003844: addiu       $a0, $zero, 0x18E
    ctx->r4 = ADD32(0, 0X18E);
    ovl_stage_world2_B98(rdram, ctx);
        goto after_0;
    // 0x60003844: addiu       $a0, $zero, 0x18E
    ctx->r4 = ADD32(0, 0X18E);
    after_0:
    // 0x60003848: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x6000384C: jal         0x60000E68
    // 0x60003850: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world2_E68(rdram, ctx);
        goto after_1;
    // 0x60003850: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x60003854: jal         0x60000A60
    // 0x60003858: addiu       $a0, $zero, 0xA51
    ctx->r4 = ADD32(0, 0XA51);
    ovl_stage_world2_A60(rdram, ctx);
        goto after_2;
    // 0x60003858: addiu       $a0, $zero, 0xA51
    ctx->r4 = ADD32(0, 0XA51);
    after_2:
    // 0x6000385C: jal         0x600009AC
    // 0x60003860: nop

    ovl_stage_world2_9AC(rdram, ctx);
        goto after_3;
    // 0x60003860: nop

    after_3:
    // 0x60003864: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003868: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x6000386C: jr          $ra
    // 0x60003870: nop

    return;
    // 0x60003870: nop

;}
RECOMP_FUNC void ovl_stage_world2_3874(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003874: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60003878: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x6000387C: jal         0x60000BB0
    // 0x60003880: addiu       $a0, $zero, 0x18B
    ctx->r4 = ADD32(0, 0X18B);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_0;
    // 0x60003880: addiu       $a0, $zero, 0x18B
    ctx->r4 = ADD32(0, 0X18B);
    after_0:
    // 0x60003884: beq         $v0, $zero, L_600038B4
    if (ctx->r2 == 0) {
        // 0x60003888: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600038B4;
    }
    // 0x60003888: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000388C: jal         0x60000BB0
    // 0x60003890: addiu       $a0, $zero, 0x18C
    ctx->r4 = ADD32(0, 0X18C);
    ovl_stage_world2_BB0(rdram, ctx);
        goto after_1;
    // 0x60003890: addiu       $a0, $zero, 0x18C
    ctx->r4 = ADD32(0, 0X18C);
    after_1:
    // 0x60003894: beq         $v0, $zero, L_600038B0
    if (ctx->r2 == 0) {
        // 0x60003898: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_600038B0;
    }
    // 0x60003898: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x6000389C: addiu       $a0, $a0, 0x3838
    ctx->r4 = ADD32(ctx->r4, 0X3838);
    // 0x600038A0: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x600038A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x600038A8: jal         0x60000994
    // 0x600038AC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world2_994(rdram, ctx);
        goto after_2;
    // 0x600038AC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
L_600038B0:
    // 0x600038B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600038B4:
    // 0x600038B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600038B8: jr          $ra
    // 0x600038BC: nop

    return;
    // 0x600038BC: nop

;}
