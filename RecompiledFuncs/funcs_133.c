#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_boss_demon_8360(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008360: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x43008364: sw          $s7, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r23;
    // 0x43008368: swc1        $f30, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f30.u32l;
    // 0x4300836C: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43008370: lui         $s7, 0x4301
    ctx->r23 = S32(0X4301 << 16);
    // 0x43008374: lwc1        $f30, -0x5940($at)
    ctx->f30.u32l = MEM_W(ctx->r1, -0X5940);
    // 0x43008378: lw          $s7, -0x5470($s7)
    ctx->r23 = MEM_W(ctx->r23, -0X5470);
    // 0x4300837C: sw          $s5, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r21;
    // 0x43008380: swc1        $f28, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f28.u32l;
    // 0x43008384: swc1        $f26, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f26.u32l;
    // 0x43008388: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x4300838C: lui         $t6, 0x4301
    ctx->r14 = S32(0X4301 << 16);
    // 0x43008390: sw          $s6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r22;
    // 0x43008394: sw          $s4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r20;
    // 0x43008398: sw          $s3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r19;
    // 0x4300839C: addiu       $s5, $t6, -0x4FE0
    ctx->r21 = ADD32(ctx->r14, -0X4FE0);
    // 0x430083A0: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x430083A4: mtc1        $zero, $f26
    ctx->f26.u32l = 0;
    // 0x430083A8: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x430083AC: sw          $s2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r18;
    // 0x430083B0: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x430083B4: sw          $s0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r16;
    // 0x430083B8: swc1        $f31, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x430083BC: swc1        $f29, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x430083C0: swc1        $f27, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x430083C4: swc1        $f25, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x430083C8: swc1        $f24, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f24.u32l;
    // 0x430083CC: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x430083D0: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x430083D4: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x430083D8: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x430083DC: or          $s6, $s5, $zero
    ctx->r22 = ctx->r21 | 0;
    // 0x430083E0: addiu       $s3, $zero, 0x6
    ctx->r19 = ADD32(0, 0X6);
    // 0x430083E4: addiu       $s4, $sp, 0xA0
    ctx->r20 = ADD32(ctx->r29, 0XA0);
    // 0x430083E8: addiu       $s7, $s7, 0x9C
    ctx->r23 = ADD32(ctx->r23, 0X9C);
L_430083EC:
    // 0x430083EC: lui         $a1, 0x4301
    ctx->r5 = S32(0X4301 << 16);
    // 0x430083F0: sw          $zero, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = 0;
    // 0x430083F4: addiu       $a1, $a1, -0x5460
    ctx->r5 = ADD32(ctx->r5, -0X5460);
L_430083F8:
    // 0x430083F8: lhu         $t7, 0x8($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X8);
    // 0x430083FC: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x43008400: andi        $t8, $t7, 0x8000
    ctx->r24 = ctx->r15 & 0X8000;
    // 0x43008404: beq         $t8, $zero, L_43008454
    if (ctx->r24 == 0) {
        // 0x43008408: nop
    
            goto L_43008454;
    }
    // 0x43008408: nop

    // 0x4300840C: lwc1        $f0, 0x40($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X40);
    // 0x43008410: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x43008414: add.s       $f26, $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f26.fl = ctx->f26.fl + ctx->f0.fl;
L_43008418:
    // 0x43008418: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x4300841C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x43008420: beq         $v0, $zero, L_43008440
    if (ctx->r2 == 0) {
        // 0x43008424: nop
    
            goto L_43008440;
    }
    // 0x43008424: nop

    // 0x43008428: lwc1        $f4, 0x40($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X40);
    // 0x4300842C: nop

    // 0x43008430: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x43008434: nop

    // 0x43008438: bc1f        L_4300844C
    if (!c1cs) {
        // 0x4300843C: nop
    
            goto L_4300844C;
    }
    // 0x4300843C: nop

L_43008440:
    // 0x43008440: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x43008444: b           L_43008454
    // 0x43008448: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
        goto L_43008454;
    // 0x43008448: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
L_4300844C:
    // 0x4300844C: bne         $v1, $s3, L_43008418
    if (ctx->r3 != ctx->r19) {
        // 0x43008450: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_43008418;
    }
    // 0x43008450: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_43008454:
    // 0x43008454: addiu       $a1, $a1, 0x48
    ctx->r5 = ADD32(ctx->r5, 0X48);
    // 0x43008458: sltu        $at, $a1, $s5
    ctx->r1 = ctx->r5 < ctx->r21 ? 1 : 0;
    // 0x4300845C: bne         $at, $zero, L_430083F8
    if (ctx->r1 != 0) {
        // 0x43008460: nop
    
            goto L_430083F8;
    }
    // 0x43008460: nop

    // 0x43008464: nop

    // 0x43008468: div.s       $f24, $f28, $f26
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f24.fl = DIV_S(ctx->f28.fl, ctx->f26.fl);
    // 0x4300846C: lui         $a1, 0x4301
    ctx->r5 = S32(0X4301 << 16);
    // 0x43008470: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x43008474: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x43008478: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x4300847C: addiu       $a1, $a1, -0x5460
    ctx->r5 = ADD32(ctx->r5, -0X5460);
    // 0x43008480: mov.s       $f22, $f24
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    ctx->f22.fl = ctx->f24.fl;
L_43008484:
    // 0x43008484: lhu         $t9, 0x8($a1)
    ctx->r25 = MEM_HU(ctx->r5, 0X8);
    // 0x43008488: nop

    // 0x4300848C: andi        $t0, $t9, 0x8000
    ctx->r8 = ctx->r25 & 0X8000;
    // 0x43008490: beq         $t0, $zero, L_430086A8
    if (ctx->r8 == 0) {
        // 0x43008494: nop
    
            goto L_430086A8;
    }
    // 0x43008494: nop

    // 0x43008498: lbu         $t1, 0x14($a1)
    ctx->r9 = MEM_BU(ctx->r5, 0X14);
    // 0x4300849C: lwc1        $f6, 0x40($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X40);
    // 0x430084A0: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x430084A4: mul.s       $f0, $f6, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = MUL_S(ctx->f6.fl, ctx->f22.fl);
    // 0x430084A8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x430084AC: bgez        $t1, L_430084C0
    if (SIGNED(ctx->r9) >= 0) {
        // 0x430084B0: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_430084C0;
    }
    // 0x430084B0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x430084B4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x430084B8: nop

    // 0x430084BC: add.s       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f4.fl;
L_430084C0:
    // 0x430084C0: lbu         $t2, 0x15($a1)
    ctx->r10 = MEM_BU(ctx->r5, 0X15);
    // 0x430084C4: mul.s       $f2, $f10, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x430084C8: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x430084CC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x430084D0: bgez        $t2, L_430084E4
    if (SIGNED(ctx->r10) >= 0) {
        // 0x430084D4: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_430084E4;
    }
    // 0x430084D4: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x430084D8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x430084DC: nop

    // 0x430084E0: add.s       $f8, $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f4.fl;
L_430084E4:
    // 0x430084E4: lbu         $t3, 0x16($a1)
    ctx->r11 = MEM_BU(ctx->r5, 0X16);
    // 0x430084E8: mul.s       $f12, $f8, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x430084EC: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x430084F0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x430084F4: bgez        $t3, L_43008508
    if (SIGNED(ctx->r11) >= 0) {
        // 0x430084F8: cvt.s.w     $f6, $f10
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
            goto L_43008508;
    }
    // 0x430084F8: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x430084FC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x43008500: nop

    // 0x43008504: add.s       $f6, $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f4.fl;
L_43008508:
    // 0x43008508: mul.s       $f14, $f6, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x4300850C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x43008510: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x43008514: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x43008518: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x4300851C: nop

    // 0x43008520: cvt.w.s     $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    ctx->f8.u32l = CVT_W_S(ctx->f2.fl);
    // 0x43008524: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x43008528: nop

    // 0x4300852C: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x43008530: beq         $t5, $zero, L_4300857C
    if (ctx->r13 == 0) {
        // 0x43008534: nop
    
            goto L_4300857C;
    }
    // 0x43008534: nop

    // 0x43008538: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x4300853C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x43008540: sub.s       $f8, $f2, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f8.fl;
    // 0x43008544: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x43008548: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x4300854C: nop

    // 0x43008550: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x43008554: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x43008558: nop

    // 0x4300855C: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x43008560: bne         $t5, $zero, L_43008574
    if (ctx->r13 != 0) {
        // 0x43008564: nop
    
            goto L_43008574;
    }
    // 0x43008564: nop

    // 0x43008568: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
    // 0x4300856C: b           L_4300858C
    // 0x43008570: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
        goto L_4300858C;
    // 0x43008570: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
L_43008574:
    // 0x43008574: b           L_4300858C
    // 0x43008578: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
        goto L_4300858C;
    // 0x43008578: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
L_4300857C:
    // 0x4300857C: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
    // 0x43008580: nop

    // 0x43008584: bltz        $t5, L_43008574
    if (SIGNED(ctx->r13) < 0) {
        // 0x43008588: nop
    
            goto L_43008574;
    }
    // 0x43008588: nop

L_4300858C:
    // 0x4300858C: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x43008590: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x43008594: sb          $t5, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r13;
    // 0x43008598: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x4300859C: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x430085A0: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x430085A4: cvt.w.s     $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    ctx->f10.u32l = CVT_W_S(ctx->f12.fl);
    // 0x430085A8: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x430085AC: nop

    // 0x430085B0: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x430085B4: beq         $t7, $zero, L_43008600
    if (ctx->r15 == 0) {
        // 0x430085B8: nop
    
            goto L_43008600;
    }
    // 0x430085B8: nop

    // 0x430085BC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x430085C0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x430085C4: sub.s       $f10, $f12, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f12.fl - ctx->f10.fl;
    // 0x430085C8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x430085CC: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x430085D0: nop

    // 0x430085D4: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x430085D8: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x430085DC: nop

    // 0x430085E0: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x430085E4: bne         $t7, $zero, L_430085F8
    if (ctx->r15 != 0) {
        // 0x430085E8: nop
    
            goto L_430085F8;
    }
    // 0x430085E8: nop

    // 0x430085EC: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x430085F0: b           L_43008610
    // 0x430085F4: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_43008610;
    // 0x430085F4: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_430085F8:
    // 0x430085F8: b           L_43008610
    // 0x430085FC: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_43008610;
    // 0x430085FC: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
L_43008600:
    // 0x43008600: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x43008604: nop

    // 0x43008608: bltz        $t7, L_430085F8
    if (SIGNED(ctx->r15) < 0) {
        // 0x4300860C: nop
    
            goto L_430085F8;
    }
    // 0x4300860C: nop

L_43008610:
    // 0x43008610: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x43008614: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x43008618: sb          $t7, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r15;
    // 0x4300861C: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x43008620: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x43008624: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x43008628: cvt.w.s     $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    ctx->f4.u32l = CVT_W_S(ctx->f14.fl);
    // 0x4300862C: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x43008630: nop

    // 0x43008634: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x43008638: beq         $t9, $zero, L_43008684
    if (ctx->r25 == 0) {
        // 0x4300863C: nop
    
            goto L_43008684;
    }
    // 0x4300863C: nop

    // 0x43008640: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x43008644: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x43008648: sub.s       $f4, $f14, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f14.fl - ctx->f4.fl;
    // 0x4300864C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x43008650: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x43008654: nop

    // 0x43008658: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x4300865C: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x43008660: nop

    // 0x43008664: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x43008668: bne         $t9, $zero, L_4300867C
    if (ctx->r25 != 0) {
        // 0x4300866C: nop
    
            goto L_4300867C;
    }
    // 0x4300866C: nop

    // 0x43008670: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
    // 0x43008674: b           L_43008694
    // 0x43008678: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
        goto L_43008694;
    // 0x43008678: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
L_4300867C:
    // 0x4300867C: b           L_43008694
    // 0x43008680: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
        goto L_43008694;
    // 0x43008680: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
L_43008684:
    // 0x43008684: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
    // 0x43008688: nop

    // 0x4300868C: bltz        $t9, L_4300867C
    if (SIGNED(ctx->r25) < 0) {
        // 0x43008690: nop
    
            goto L_4300867C;
    }
    // 0x43008690: nop

L_43008694:
    // 0x43008694: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x43008698: sb          $t9, 0x6($a1)
    MEM_B(0X6, ctx->r5) = ctx->r25;
    // 0x4300869C: add.s       $f20, $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f2.fl;
    // 0x430086A0: add.s       $f18, $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f12.fl;
    // 0x430086A4: add.s       $f16, $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f14.fl;
L_430086A8:
    // 0x430086A8: addiu       $a1, $a1, 0x48
    ctx->r5 = ADD32(ctx->r5, 0X48);
    // 0x430086AC: sltu        $at, $a1, $s6
    ctx->r1 = ctx->r5 < ctx->r22 ? 1 : 0;
    // 0x430086B0: bne         $at, $zero, L_43008484
    if (ctx->r1 != 0) {
        // 0x430086B4: nop
    
            goto L_43008484;
    }
    // 0x430086B4: nop

    // 0x430086B8: lui         $at, 0xC248
    ctx->r1 = S32(0XC248 << 16);
    // 0x430086BC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x430086C0: sll         $t7, $zero, 3
    ctx->r15 = S32(0 << 3);
    // 0x430086C4: mul.s       $f8, $f6, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f24.fl);
    // 0x430086C8: subu        $t7, $t7, $zero
    ctx->r15 = SUB32(ctx->r15, 0);
    // 0x430086CC: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x430086D0: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x430086D4: add.s       $f2, $f8, $f28
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f2.fl = ctx->f8.fl + ctx->f28.fl;
    // 0x430086D8: addu        $s0, $s7, $t7
    ctx->r16 = ADD32(ctx->r23, ctx->r15);
    // 0x430086DC: c.lt.s      $f30, $f2
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f30.fl < ctx->f2.fl;
    // 0x430086E0: nop

    // 0x430086E4: bc1f        L_430086F0
    if (!c1cs) {
        // 0x430086E8: nop
    
            goto L_430086F0;
    }
    // 0x430086E8: nop

    // 0x430086EC: mov.s       $f2, $f30
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 30);
    ctx->f2.fl = ctx->f30.fl;
L_430086F0:
    // 0x430086F0: mul.s       $f10, $f20, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f2.fl);
    // 0x430086F4: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x430086F8: addiu       $v0, $s7, 0x188
    ctx->r2 = ADD32(ctx->r23, 0X188);
    // 0x430086FC: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x43008700: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x43008704: nop

    // 0x43008708: cvt.w.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = CVT_W_S(ctx->f10.fl);
    // 0x4300870C: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x43008710: nop

    // 0x43008714: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x43008718: beq         $t1, $zero, L_43008764
    if (ctx->r9 == 0) {
        // 0x4300871C: nop
    
            goto L_43008764;
    }
    // 0x4300871C: nop

    // 0x43008720: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x43008724: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x43008728: sub.s       $f4, $f10, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x4300872C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x43008730: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x43008734: nop

    // 0x43008738: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x4300873C: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x43008740: nop

    // 0x43008744: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x43008748: bne         $t1, $zero, L_4300875C
    if (ctx->r9 != 0) {
        // 0x4300874C: nop
    
            goto L_4300875C;
    }
    // 0x4300874C: nop

    // 0x43008750: mfc1        $t1, $f4
    ctx->r9 = (int32_t)ctx->f4.u32l;
    // 0x43008754: b           L_43008774
    // 0x43008758: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
        goto L_43008774;
    // 0x43008758: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
L_4300875C:
    // 0x4300875C: b           L_43008774
    // 0x43008760: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
        goto L_43008774;
    // 0x43008760: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
L_43008764:
    // 0x43008764: mfc1        $t1, $f4
    ctx->r9 = (int32_t)ctx->f4.u32l;
    // 0x43008768: nop

    // 0x4300876C: bltz        $t1, L_4300875C
    if (SIGNED(ctx->r9) < 0) {
        // 0x43008770: nop
    
            goto L_4300875C;
    }
    // 0x43008770: nop

L_43008774:
    // 0x43008774: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x43008778: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x4300877C: mul.s       $f6, $f18, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x43008780: sb          $t1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r9;
    // 0x43008784: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x43008788: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x4300878C: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x43008790: nop

    // 0x43008794: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x43008798: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x4300879C: nop

    // 0x430087A0: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x430087A4: beq         $t3, $zero, L_430087F0
    if (ctx->r11 == 0) {
        // 0x430087A8: nop
    
            goto L_430087F0;
    }
    // 0x430087A8: nop

    // 0x430087AC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x430087B0: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x430087B4: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x430087B8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x430087BC: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x430087C0: nop

    // 0x430087C4: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x430087C8: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x430087CC: nop

    // 0x430087D0: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x430087D4: bne         $t3, $zero, L_430087E8
    if (ctx->r11 != 0) {
        // 0x430087D8: nop
    
            goto L_430087E8;
    }
    // 0x430087D8: nop

    // 0x430087DC: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
    // 0x430087E0: b           L_43008800
    // 0x430087E4: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
        goto L_43008800;
    // 0x430087E4: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
L_430087E8:
    // 0x430087E8: b           L_43008800
    // 0x430087EC: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
        goto L_43008800;
    // 0x430087EC: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
L_430087F0:
    // 0x430087F0: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
    // 0x430087F4: nop

    // 0x430087F8: bltz        $t3, L_430087E8
    if (SIGNED(ctx->r11) < 0) {
        // 0x430087FC: nop
    
            goto L_430087E8;
    }
    // 0x430087FC: nop

L_43008800:
    // 0x43008800: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x43008804: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x43008808: mul.s       $f10, $f16, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x4300880C: sb          $t3, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r11;
    // 0x43008810: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x43008814: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x43008818: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x4300881C: nop

    // 0x43008820: cvt.w.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = CVT_W_S(ctx->f10.fl);
    // 0x43008824: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x43008828: nop

    // 0x4300882C: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x43008830: beq         $t5, $zero, L_4300887C
    if (ctx->r13 == 0) {
        // 0x43008834: nop
    
            goto L_4300887C;
    }
    // 0x43008834: nop

    // 0x43008838: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4300883C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x43008840: sub.s       $f4, $f10, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x43008844: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x43008848: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x4300884C: nop

    // 0x43008850: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x43008854: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x43008858: nop

    // 0x4300885C: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x43008860: bne         $t5, $zero, L_43008874
    if (ctx->r13 != 0) {
        // 0x43008864: nop
    
            goto L_43008874;
    }
    // 0x43008864: nop

    // 0x43008868: mfc1        $t5, $f4
    ctx->r13 = (int32_t)ctx->f4.u32l;
    // 0x4300886C: b           L_4300888C
    // 0x43008870: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
        goto L_4300888C;
    // 0x43008870: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
L_43008874:
    // 0x43008874: b           L_4300888C
    // 0x43008878: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
        goto L_4300888C;
    // 0x43008878: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
L_4300887C:
    // 0x4300887C: mfc1        $t5, $f4
    ctx->r13 = (int32_t)ctx->f4.u32l;
    // 0x43008880: nop

    // 0x43008884: bltz        $t5, L_43008874
    if (SIGNED(ctx->r13) < 0) {
        // 0x43008888: nop
    
            goto L_43008874;
    }
    // 0x43008888: nop

L_4300888C:
    // 0x4300888C: sb          $t5, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r13;
    // 0x43008890: lw          $s2, 0xA0($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XA0);
    // 0x43008894: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x43008898: beq         $s2, $zero, L_430088D4
    if (ctx->r18 == 0) {
        // 0x4300889C: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_430088D4;
    }
    // 0x4300889C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x430088A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_430088A4:
    // 0x430088A4: addiu       $a1, $s2, 0x8
    ctx->r5 = ADD32(ctx->r18, 0X8);
    // 0x430088A8: jal         0x43008AC0
    // 0x430088AC: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    ovl_boss_demon_8AC0(rdram, ctx);
        goto after_0;
    // 0x430088AC: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    after_0:
    // 0x430088B0: lw          $t8, 0x4($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X4);
    // 0x430088B4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x430088B8: sw          $t8, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r24;
    // 0x430088BC: lw          $s2, 0x0($s2)
    ctx->r18 = MEM_W(ctx->r18, 0X0);
    // 0x430088C0: addiu       $s0, $s0, 0x38
    ctx->r16 = ADD32(ctx->r16, 0X38);
    // 0x430088C4: beq         $s2, $zero, L_430088D8
    if (ctx->r18 == 0) {
        // 0x430088C8: slti        $at, $s1, 0x7
        ctx->r1 = SIGNED(ctx->r17) < 0X7 ? 1 : 0;
            goto L_430088D8;
    }
    // 0x430088C8: slti        $at, $s1, 0x7
    ctx->r1 = SIGNED(ctx->r17) < 0X7 ? 1 : 0;
    // 0x430088CC: bne         $s1, $s3, L_430088A4
    if (ctx->r17 != ctx->r19) {
        // 0x430088D0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_430088A4;
    }
    // 0x430088D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_430088D4:
    // 0x430088D4: slti        $at, $s1, 0x7
    ctx->r1 = SIGNED(ctx->r17) < 0X7 ? 1 : 0;
L_430088D8:
    // 0x430088D8: beq         $at, $zero, L_43008904
    if (ctx->r1 == 0) {
        // 0x430088DC: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_43008904;
    }
    // 0x430088DC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x430088E0: sll         $t9, $s1, 3
    ctx->r25 = S32(ctx->r17 << 3);
    // 0x430088E4: subu        $t9, $t9, $s1
    ctx->r25 = SUB32(ctx->r25, ctx->r17);
    // 0x430088E8: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x430088EC: addu        $s0, $s7, $t9
    ctx->r16 = ADD32(ctx->r23, ctx->r25);
L_430088F0:
    // 0x430088F0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x430088F4: slti        $at, $s1, 0x7
    ctx->r1 = SIGNED(ctx->r17) < 0X7 ? 1 : 0;
    // 0x430088F8: addiu       $s0, $s0, 0x38
    ctx->r16 = ADD32(ctx->r16, 0X38);
    // 0x430088FC: bne         $at, $zero, L_430088F0
    if (ctx->r1 != 0) {
        // 0x43008900: sh          $zero, -0x38($s0)
        MEM_H(-0X38, ctx->r16) = 0;
            goto L_430088F0;
    }
    // 0x43008900: sh          $zero, -0x38($s0)
    MEM_H(-0X38, ctx->r16) = 0;
L_43008904:
    // 0x43008904: mtc1        $zero, $f26
    ctx->f26.u32l = 0;
    // 0x43008908: jal         0x43008B98
    // 0x4300890C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    ovl_boss_demon_8B98(rdram, ctx);
        goto after_1;
    // 0x4300890C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    after_1:
    // 0x43008910: b           L_430083EC
    // 0x43008914: nop

        goto L_430083EC;
    // 0x43008914: nop

    // 0x43008918: nop

    // 0x4300891C: nop

    // 0x43008920: nop

    // 0x43008924: nop

    // 0x43008928: nop

    // 0x4300892C: nop

    // 0x43008930: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x43008934: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x43008938: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x4300893C: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x43008940: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x43008944: lwc1        $f25, 0x20($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x43008948: lwc1        $f24, 0x24($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X24);
    // 0x4300894C: lwc1        $f27, 0x28($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x43008950: lwc1        $f26, 0x2C($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x43008954: lwc1        $f29, 0x30($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x43008958: lwc1        $f28, 0x34($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X34);
    // 0x4300895C: lwc1        $f31, 0x38($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x43008960: lwc1        $f30, 0x3C($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x43008964: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
    // 0x43008968: lw          $s1, 0x48($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X48);
    // 0x4300896C: lw          $s2, 0x4C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X4C);
    // 0x43008970: lw          $s3, 0x50($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X50);
    // 0x43008974: lw          $s4, 0x54($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X54);
    // 0x43008978: lw          $s5, 0x58($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X58);
    // 0x4300897C: lw          $s6, 0x5C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X5C);
    // 0x43008980: lw          $s7, 0x60($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X60);
    // 0x43008984: jr          $ra
    // 0x43008988: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    // 0x43008988: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void ovl_boss_demon_898C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300898C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43008990: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x43008994: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43008998: lw          $a0, -0x5468($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5468);
    // 0x4300899C: jal         0x4300082C
    // 0x430089A0: nop

    ovl_boss_demon_82C(rdram, ctx);
        goto after_0;
    // 0x430089A0: nop

    after_0:
    // 0x430089A4: lui         $a2, 0x4301
    ctx->r6 = S32(0X4301 << 16);
    // 0x430089A8: lw          $a2, -0x546C($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X546C);
    // 0x430089AC: addiu       $a0, $zero, 0x31
    ctx->r4 = ADD32(0, 0X31);
    // 0x430089B0: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x430089B4: jal         0x43000DC0
    // 0x430089B8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_boss_demon_DC0(rdram, ctx);
        goto after_1;
    // 0x430089B8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x430089BC: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x430089C0: lw          $a0, -0x5470($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5470);
    // 0x430089C4: jal         0x430000F4
    // 0x430089C8: nop

    ovl_boss_demon_F4(rdram, ctx);
        goto after_2;
    // 0x430089C8: nop

    after_2:
    // 0x430089CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430089D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x430089D4: jr          $ra
    // 0x430089D8: nop

    return;
    // 0x430089D8: nop

;}
RECOMP_FUNC void ovl_boss_demon_89DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430089DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x430089E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430089E4: jal         0x430000E8
    // 0x430089E8: addiu       $a0, $zero, 0x230
    ctx->r4 = ADD32(0, 0X230);
    ovl_boss_demon_E8(rdram, ctx);
        goto after_0;
    // 0x430089E8: addiu       $a0, $zero, 0x230
    ctx->r4 = ADD32(0, 0X230);
    after_0:
    // 0x430089EC: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x430089F0: addiu       $v1, $v1, -0x5470
    ctx->r3 = ADD32(ctx->r3, -0X5470);
    // 0x430089F4: lui         $a1, 0x4301
    ctx->r5 = S32(0X4301 << 16);
    // 0x430089F8: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x430089FC: addiu       $a1, $a1, -0x546C
    ctx->r5 = ADD32(ctx->r5, -0X546C);
    // 0x43008A00: addiu       $a0, $zero, 0x31
    ctx->r4 = ADD32(0, 0X31);
    // 0x43008A04: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x43008A08: jal         0x43000DC0
    // 0x43008A0C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_boss_demon_DC0(rdram, ctx);
        goto after_1;
    // 0x43008A0C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x43008A10: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x43008A14: lui         $a1, 0x4301
    ctx->r5 = S32(0X4301 << 16);
    // 0x43008A18: lw          $a1, -0x546C($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X546C);
    // 0x43008A1C: lw          $a0, -0x5470($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5470);
    // 0x43008A20: jal         0x43008AC0
    // 0x43008A24: addiu       $a2, $zero, 0x8C
    ctx->r6 = ADD32(0, 0X8C);
    ovl_boss_demon_8AC0(rdram, ctx);
        goto after_2;
    // 0x43008A24: addiu       $a2, $zero, 0x8C
    ctx->r6 = ADD32(0, 0X8C);
    after_2:
    // 0x43008A28: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x43008A2C: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x43008A30: addiu       $a0, $a0, -0x4FE0
    ctx->r4 = ADD32(ctx->r4, -0X4FE0);
    // 0x43008A34: addiu       $v0, $v0, -0x5460
    ctx->r2 = ADD32(ctx->r2, -0X5460);
    // 0x43008A38: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x43008A3C: addiu       $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
L_43008A40:
    // 0x43008A40: addiu       $a1, $v1, 0x1
    ctx->r5 = ADD32(ctx->r3, 0X1);
    // 0x43008A44: addiu       $a2, $v1, 0x2
    ctx->r6 = ADD32(ctx->r3, 0X2);
    // 0x43008A48: addiu       $a3, $v1, 0x3
    ctx->r7 = ADD32(ctx->r3, 0X3);
    // 0x43008A4C: sw          $v1, 0x44($v0)
    MEM_W(0X44, ctx->r2) = ctx->r3;
    // 0x43008A50: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x43008A54: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x43008A58: sw          $a3, 0x11C($v0)
    MEM_W(0X11C, ctx->r2) = ctx->r7;
    // 0x43008A5C: sw          $a3, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r7;
    // 0x43008A60: sw          $a2, 0xD4($v0)
    MEM_W(0XD4, ctx->r2) = ctx->r6;
    // 0x43008A64: sw          $a2, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r6;
    // 0x43008A68: sw          $a1, 0x8C($v0)
    MEM_W(0X8C, ctx->r2) = ctx->r5;
    // 0x43008A6C: sw          $a1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r5;
    // 0x43008A70: sh          $zero, 0x50($v0)
    MEM_H(0X50, ctx->r2) = 0;
    // 0x43008A74: sh          $zero, 0x98($v0)
    MEM_H(0X98, ctx->r2) = 0;
    // 0x43008A78: sh          $zero, 0xE0($v0)
    MEM_H(0XE0, ctx->r2) = 0;
    // 0x43008A7C: addiu       $v0, $v0, 0x120
    ctx->r2 = ADD32(ctx->r2, 0X120);
    // 0x43008A80: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x43008A84: bne         $v1, $t0, L_43008A40
    if (ctx->r3 != ctx->r8) {
        // 0x43008A88: sh          $zero, -0x118($v0)
        MEM_H(-0X118, ctx->r2) = 0;
            goto L_43008A40;
    }
    // 0x43008A88: sh          $zero, -0x118($v0)
    MEM_H(-0X118, ctx->r2) = 0;
    // 0x43008A8C: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43008A90: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x43008A94: sw          $zero, -0x4FA0($at)
    MEM_W(-0X4FA0, ctx->r1) = 0;
    // 0x43008A98: addiu       $a0, $a0, -0x7CA0
    ctx->r4 = ADD32(ctx->r4, -0X7CA0);
    // 0x43008A9C: ori         $a1, $zero, 0xFECE
    ctx->r5 = 0 | 0XFECE;
    // 0x43008AA0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x43008AA4: jal         0x43000820
    // 0x43008AA8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_boss_demon_820(rdram, ctx);
        goto after_3;
    // 0x43008AA8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x43008AAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43008AB0: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43008AB4: sw          $v0, -0x5468($at)
    MEM_W(-0X5468, ctx->r1) = ctx->r2;
    // 0x43008AB8: jr          $ra
    // 0x43008ABC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x43008ABC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void ovl_boss_demon_8AC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008AC0: blez        $a2, L_43008B24
    if (SIGNED(ctx->r6) <= 0) {
        // 0x43008AC4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_43008B24;
    }
    // 0x43008AC4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x43008AC8: andi        $a3, $a2, 0x3
    ctx->r7 = ctx->r6 & 0X3;
    // 0x43008ACC: beq         $a3, $zero, L_43008AF4
    if (ctx->r7 == 0) {
        // 0x43008AD0: or          $v1, $a3, $zero
        ctx->r3 = ctx->r7 | 0;
            goto L_43008AF4;
    }
    // 0x43008AD0: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
L_43008AD4:
    // 0x43008AD4: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x43008AD8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x43008ADC: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x43008AE0: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x43008AE4: bne         $v1, $v0, L_43008AD4
    if (ctx->r3 != ctx->r2) {
        // 0x43008AE8: sw          $t6, -0x4($a0)
        MEM_W(-0X4, ctx->r4) = ctx->r14;
            goto L_43008AD4;
    }
    // 0x43008AE8: sw          $t6, -0x4($a0)
    MEM_W(-0X4, ctx->r4) = ctx->r14;
    // 0x43008AEC: beq         $v0, $a2, L_43008B24
    if (ctx->r2 == ctx->r6) {
        // 0x43008AF0: nop
    
            goto L_43008B24;
    }
    // 0x43008AF0: nop

L_43008AF4:
    // 0x43008AF4: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x43008AF8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x43008AFC: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x43008B00: lw          $t8, 0x4($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X4);
    // 0x43008B04: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x43008B08: sw          $t8, -0xC($a0)
    MEM_W(-0XC, ctx->r4) = ctx->r24;
    // 0x43008B0C: lw          $t9, 0x8($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X8);
    // 0x43008B10: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x43008B14: sw          $t9, -0x8($a0)
    MEM_W(-0X8, ctx->r4) = ctx->r25;
    // 0x43008B18: lw          $t0, -0x4($a1)
    ctx->r8 = MEM_W(ctx->r5, -0X4);
    // 0x43008B1C: bne         $v0, $a2, L_43008AF4
    if (ctx->r2 != ctx->r6) {
        // 0x43008B20: sw          $t0, -0x4($a0)
        MEM_W(-0X4, ctx->r4) = ctx->r8;
            goto L_43008AF4;
    }
    // 0x43008B20: sw          $t0, -0x4($a0)
    MEM_W(-0X4, ctx->r4) = ctx->r8;
L_43008B24:
    // 0x43008B24: jr          $ra
    // 0x43008B28: nop

    return;
    // 0x43008B28: nop

;}
RECOMP_FUNC void ovl_boss_demon_8B2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008B2C: blez        $a2, L_43008B90
    if (SIGNED(ctx->r6) <= 0) {
        // 0x43008B30: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_43008B90;
    }
    // 0x43008B30: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x43008B34: andi        $a3, $a2, 0x3
    ctx->r7 = ctx->r6 & 0X3;
    // 0x43008B38: beq         $a3, $zero, L_43008B60
    if (ctx->r7 == 0) {
        // 0x43008B3C: or          $v1, $a3, $zero
        ctx->r3 = ctx->r7 | 0;
            goto L_43008B60;
    }
    // 0x43008B3C: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
L_43008B40:
    // 0x43008B40: lhu         $t6, 0x0($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X0);
    // 0x43008B44: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x43008B48: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x43008B4C: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x43008B50: bne         $v1, $v0, L_43008B40
    if (ctx->r3 != ctx->r2) {
        // 0x43008B54: sh          $t6, -0x2($a0)
        MEM_H(-0X2, ctx->r4) = ctx->r14;
            goto L_43008B40;
    }
    // 0x43008B54: sh          $t6, -0x2($a0)
    MEM_H(-0X2, ctx->r4) = ctx->r14;
    // 0x43008B58: beq         $v0, $a2, L_43008B90
    if (ctx->r2 == ctx->r6) {
        // 0x43008B5C: nop
    
            goto L_43008B90;
    }
    // 0x43008B5C: nop

L_43008B60:
    // 0x43008B60: lhu         $t7, 0x0($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X0);
    // 0x43008B64: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x43008B68: sh          $t7, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r15;
    // 0x43008B6C: lhu         $t8, 0x2($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X2);
    // 0x43008B70: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x43008B74: sh          $t8, -0x6($a0)
    MEM_H(-0X6, ctx->r4) = ctx->r24;
    // 0x43008B78: lhu         $t9, 0x4($a1)
    ctx->r25 = MEM_HU(ctx->r5, 0X4);
    // 0x43008B7C: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x43008B80: sh          $t9, -0x4($a0)
    MEM_H(-0X4, ctx->r4) = ctx->r25;
    // 0x43008B84: lhu         $t0, -0x2($a1)
    ctx->r8 = MEM_HU(ctx->r5, -0X2);
    // 0x43008B88: bne         $v0, $a2, L_43008B60
    if (ctx->r2 != ctx->r6) {
        // 0x43008B8C: sh          $t0, -0x2($a0)
        MEM_H(-0X2, ctx->r4) = ctx->r8;
            goto L_43008B60;
    }
    // 0x43008B8C: sh          $t0, -0x2($a0)
    MEM_H(-0X2, ctx->r4) = ctx->r8;
L_43008B90:
    // 0x43008B90: jr          $ra
    // 0x43008B94: nop

    return;
    // 0x43008B94: nop

;}
RECOMP_FUNC void ovl_boss_demon_8B98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008B98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43008B9C: beq         $a0, $zero, L_43008BB4
    if (ctx->r4 == 0) {
        // 0x43008BA0: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_43008BB4;
    }
    // 0x43008BA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43008BA4: jal         0x43000850
    // 0x43008BA8: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    ovl_boss_demon_850(rdram, ctx);
        goto after_0;
    // 0x43008BA8: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    after_0:
    // 0x43008BAC: b           L_43008BC0
    // 0x43008BB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008BC0;
    // 0x43008BB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008BB4:
    // 0x43008BB4: jal         0x4300085C
    // 0x43008BB8: nop

    ovl_boss_demon_85C(rdram, ctx);
        goto after_1;
    // 0x43008BB8: nop

    after_1:
    // 0x43008BBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008BC0:
    // 0x43008BC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43008BC4: jr          $ra
    // 0x43008BC8: nop

    return;
    // 0x43008BC8: nop

;}
RECOMP_FUNC void ovl_boss_demon_8BCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008BCC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x43008BD0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x43008BD4: addiu       $t6, $zero, 0x64
    ctx->r14 = ADD32(0, 0X64);
    // 0x43008BD8: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x43008BDC: c.lt.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl < ctx->f12.fl;
    // 0x43008BE0: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x43008BE4: bc1f        L_43008BF8
    if (!c1cs) {
        // 0x43008BE8: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_43008BF8;
    }
    // 0x43008BE8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x43008BEC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x43008BF0: b           L_43008C1C
    // 0x43008BF4: div.s       $f12, $f14, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = DIV_S(ctx->f14.fl, ctx->f12.fl);
        goto L_43008C1C;
    // 0x43008BF4: div.s       $f12, $f14, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = DIV_S(ctx->f14.fl, ctx->f12.fl);
L_43008BF8:
    // 0x43008BF8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x43008BFC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x43008C00: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x43008C04: nop

    // 0x43008C08: bc1f        L_43008C1C
    if (!c1cs) {
        // 0x43008C0C: nop
    
            goto L_43008C1C;
    }
    // 0x43008C0C: nop

    // 0x43008C10: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x43008C14: b           L_43008C1C
    // 0x43008C18: div.s       $f12, $f14, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = DIV_S(ctx->f14.fl, ctx->f12.fl);
        goto L_43008C1C;
    // 0x43008C18: div.s       $f12, $f14, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = DIV_S(ctx->f14.fl, ctx->f12.fl);
L_43008C1C:
    // 0x43008C1C: mul.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x43008C20: addiu       $t7, $zero, 0x15
    ctx->r15 = ADD32(0, 0X15);
    // 0x43008C24: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x43008C28: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43008C2C: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x43008C30: addiu       $t8, $zero, 0x51
    ctx->r24 = ADD32(0, 0X51);
    // 0x43008C34: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x43008C38: mul.s       $f16, $f10, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x43008C3C: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x43008C40: addiu       $t9, $zero, 0x13
    ctx->r25 = ADD32(0, 0X13);
    // 0x43008C44: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x43008C48: div.s       $f2, $f16, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = DIV_S(ctx->f16.fl, ctx->f6.fl);
    // 0x43008C4C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x43008C50: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x43008C54: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x43008C58: mul.s       $f18, $f10, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x43008C5C: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    // 0x43008C60: addiu       $t0, $zero, 0xD
    ctx->r8 = ADD32(0, 0XD);
    // 0x43008C64: addiu       $t2, $zero, 0xB
    ctx->r10 = ADD32(0, 0XB);
    // 0x43008C68: cvt.s.w     $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    ctx->f6.fl = CVT_S_W(ctx->f16.u32l);
    // 0x43008C6C: mul.s       $f4, $f18, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f12.fl);
    // 0x43008C70: add.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f2.fl;
    // 0x43008C74: nop

    // 0x43008C78: div.s       $f2, $f4, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
L_43008C7C:
    // 0x43008C7C: multu       $v1, $v1
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x43008C80: addiu       $a1, $v1, -0x1
    ctx->r5 = ADD32(ctx->r3, -0X1);
    // 0x43008C84: mtc1        $a0, $f4
    ctx->f4.u32l = ctx->r4;
    // 0x43008C88: addiu       $a3, $v1, -0x2
    ctx->r7 = ADD32(ctx->r3, -0X2);
    // 0x43008C8C: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x43008C90: addiu       $t1, $v1, -0x3
    ctx->r9 = ADD32(ctx->r3, -0X3);
    // 0x43008C94: addiu       $v1, $v1, -0x4
    ctx->r3 = ADD32(ctx->r3, -0X4);
    // 0x43008C98: addiu       $a0, $a0, -0x8
    ctx->r4 = ADD32(ctx->r4, -0X8);
    // 0x43008C9C: mflo        $t3
    ctx->r11 = lo;
    // 0x43008CA0: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x43008CA4: nop

    // 0x43008CA8: multu       $a1, $a1
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x43008CAC: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x43008CB0: mul.s       $f16, $f18, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f18.fl, ctx->f12.fl);
    // 0x43008CB4: add.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f2.fl;
    // 0x43008CB8: mul.s       $f6, $f16, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x43008CBC: mflo        $t4
    ctx->r12 = lo;
    // 0x43008CC0: div.s       $f2, $f6, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x43008CC4: mtc1        $t4, $f18
    ctx->f18.u32l = ctx->r12;
    // 0x43008CC8: multu       $a3, $a3
    result = U64(U32(ctx->r7)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x43008CCC: cvt.s.w     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.fl = CVT_S_W(ctx->f18.u32l);
    // 0x43008CD0: mtc1        $a2, $f6
    ctx->f6.u32l = ctx->r6;
    // 0x43008CD4: addiu       $a2, $a2, -0x8
    ctx->r6 = ADD32(ctx->r6, -0X8);
    // 0x43008CD8: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x43008CDC: mul.s       $f4, $f16, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x43008CE0: add.s       $f18, $f10, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x43008CE4: mflo        $t5
    ctx->r13 = lo;
    // 0x43008CE8: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x43008CEC: mul.s       $f8, $f4, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x43008CF0: nop

    // 0x43008CF4: div.s       $f2, $f8, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = DIV_S(ctx->f8.fl, ctx->f18.fl);
    // 0x43008CF8: multu       $t1, $t1
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x43008CFC: cvt.s.w     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
    // 0x43008D00: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x43008D04: addiu       $t0, $t0, -0x8
    ctx->r8 = ADD32(ctx->r8, -0X8);
    // 0x43008D08: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x43008D0C: cvt.s.w     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.fl = CVT_S_W(ctx->f8.u32l);
    // 0x43008D10: mflo        $t6
    ctx->r14 = lo;
    // 0x43008D14: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x43008D18: mul.s       $f10, $f6, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x43008D1C: add.s       $f16, $f18, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x43008D20: nop

    // 0x43008D24: div.s       $f2, $f10, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x43008D28: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x43008D2C: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x43008D30: addiu       $t2, $t2, -0x8
    ctx->r10 = ADD32(ctx->r10, -0X8);
    // 0x43008D34: mul.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x43008D38: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x43008D3C: mul.s       $f18, $f8, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x43008D40: add.s       $f4, $f16, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f2.fl;
    // 0x43008D44: bne         $v1, $zero, L_43008C7C
    if (ctx->r3 != 0) {
        // 0x43008D48: div.s       $f2, $f18, $f4
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
            goto L_43008C7C;
    }
    // 0x43008D48: div.s       $f2, $f18, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
    // 0x43008D4C: blez        $v0, L_43008D78
    if (SIGNED(ctx->r2) <= 0) {
        // 0x43008D50: nop
    
            goto L_43008D78;
    }
    // 0x43008D50: nop

    // 0x43008D54: add.s       $f8, $f14, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f14.fl + ctx->f2.fl;
    // 0x43008D58: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43008D5C: div.s       $f10, $f12, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f12.fl, ctx->f8.fl);
    // 0x43008D60: lwc1        $f7, -0x5920($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X5920);
    // 0x43008D64: lwc1        $f6, -0x591C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X591C);
    // 0x43008D68: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x43008D6C: sub.d       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f6.d - ctx->f16.d;
    // 0x43008D70: jr          $ra
    // 0x43008D74: cvt.s.d     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f0.fl = CVT_S_D(ctx->f18.d);
    return;
    // 0x43008D74: cvt.s.d     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f0.fl = CVT_S_D(ctx->f18.d);
L_43008D78:
    // 0x43008D78: bgez        $v0, L_43008DA4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x43008D7C: nop
    
            goto L_43008DA4;
    }
    // 0x43008D7C: nop

    // 0x43008D80: add.s       $f8, $f14, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f14.fl + ctx->f2.fl;
    // 0x43008D84: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43008D88: div.s       $f10, $f12, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f12.fl, ctx->f8.fl);
    // 0x43008D8C: lwc1        $f5, -0x5918($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X5918);
    // 0x43008D90: lwc1        $f4, -0x5914($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X5914);
    // 0x43008D94: cvt.d.s     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f6.d = CVT_D_S(ctx->f10.fl);
    // 0x43008D98: sub.d       $f16, $f4, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f16.d = ctx->f4.d - ctx->f6.d;
    // 0x43008D9C: jr          $ra
    // 0x43008DA0: cvt.s.d     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f0.fl = CVT_S_D(ctx->f16.d);
    return;
    // 0x43008DA0: cvt.s.d     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f0.fl = CVT_S_D(ctx->f16.d);
L_43008DA4:
    // 0x43008DA4: add.s       $f18, $f14, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f14.fl + ctx->f2.fl;
    // 0x43008DA8: nop

    // 0x43008DAC: div.s       $f0, $f12, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = DIV_S(ctx->f12.fl, ctx->f18.fl);
    // 0x43008DB0: jr          $ra
    // 0x43008DB4: nop

    return;
    // 0x43008DB4: nop

;}
RECOMP_FUNC void ovl_boss_demon_8DB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008DB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43008DBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43008DC0: lwc1        $f6, 0x0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X0);
    // 0x43008DC4: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x43008DC8: lwc1        $f10, 0x8($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X8);
    // 0x43008DCC: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x43008DD0: lwc1        $f8, 0x8($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X8);
    // 0x43008DD4: mul.s       $f16, $f0, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x43008DD8: sub.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x43008DDC: mul.s       $f18, $f2, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x43008DE0: jal         0x4300A1A0
    // 0x43008DE4: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
    ovl_boss_demon_A1A0(rdram, ctx);
        goto after_0;
    // 0x43008DE4: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
    after_0:
    // 0x43008DE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43008DEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43008DF0: jr          $ra
    // 0x43008DF4: nop

    return;
    // 0x43008DF4: nop

;}
RECOMP_FUNC void ovl_boss_demon_8DF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008DF8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43008DFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43008E00: lwc1        $f6, 0x0($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X0);
    // 0x43008E04: lwc1        $f4, 0x0($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X0);
    // 0x43008E08: lwc1        $f10, 0x8($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X8);
    // 0x43008E0C: sub.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x43008E10: lwc1        $f8, 0x8($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X8);
    // 0x43008E14: mul.s       $f4, $f14, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x43008E18: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x43008E1C: mtc1        $zero, $f19
    ctx->f_odd[(19 - 1) * 2] = 0;
    // 0x43008E20: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x43008E24: mul.s       $f6, $f16, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x43008E28: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x43008E2C: cvt.d.s     $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f8.d = CVT_D_S(ctx->f12.fl);
    // 0x43008E30: c.eq.d      $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f18.d == ctx->f8.d;
    // 0x43008E34: nop

    // 0x43008E38: bc1t        L_43008EA0
    if (c1cs) {
        // 0x43008E3C: nop
    
            goto L_43008EA0;
    }
    // 0x43008E3C: nop

    // 0x43008E40: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x43008E44: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    // 0x43008E48: jal         0x4300A1A0
    // 0x43008E4C: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    ovl_boss_demon_A1A0(rdram, ctx);
        goto after_0;
    // 0x43008E4C: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    after_0:
    // 0x43008E50: mtc1        $zero, $f19
    ctx->f_odd[(19 - 1) * 2] = 0;
    // 0x43008E54: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x43008E58: cvt.d.s     $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.d = CVT_D_S(ctx->f0.fl);
    // 0x43008E5C: c.eq.d      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.d == ctx->f2.d;
    // 0x43008E60: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x43008E64: lwc1        $f14, 0x1C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x43008E68: lwc1        $f16, 0x18($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X18);
    // 0x43008E6C: bc1t        L_43008EA0
    if (c1cs) {
        // 0x43008E70: lui         $at, 0x3FF0
        ctx->r1 = S32(0X3FF0 << 16);
            goto L_43008EA0;
    }
    // 0x43008E70: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x43008E74: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x43008E78: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x43008E7C: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
    // 0x43008E80: div.d       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f2.d); 
    ctx->f4.d = DIV_D(ctx->f10.d, ctx->f2.d);
    // 0x43008E84: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    // 0x43008E88: mul.s       $f6, $f14, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f12.fl);
    // 0x43008E8C: swc1        $f12, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f12.u32l;
    // 0x43008E90: mul.s       $f8, $f16, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x43008E94: swc1        $f6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f6.u32l;
    // 0x43008E98: b           L_43008EB4
    // 0x43008E9C: swc1        $f8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f8.u32l;
        goto L_43008EB4;
    // 0x43008E9C: swc1        $f8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f8.u32l;
L_43008EA0:
    // 0x43008EA0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43008EA4: nop

    // 0x43008EA8: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
    // 0x43008EAC: swc1        $f0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f0.u32l;
    // 0x43008EB0: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
L_43008EB4:
    // 0x43008EB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43008EB8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x43008EBC: jr          $ra
    // 0x43008EC0: nop

    return;
    // 0x43008EC0: nop

;}
RECOMP_FUNC void ovl_boss_demon_8EC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008EC4: mtc1        $zero, $f5
    ctx->f_odd[(5 - 1) * 2] = 0;
    // 0x43008EC8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x43008ECC: cvt.d.s     $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f6.d = CVT_D_S(ctx->f14.fl);
    // 0x43008ED0: c.eq.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d == ctx->f6.d;
    // 0x43008ED4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43008ED8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43008EDC: bc1f        L_43008F28
    if (!c1cs) {
        // 0x43008EE0: swc1        $f12, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
            goto L_43008F28;
    }
    // 0x43008EE0: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    // 0x43008EE4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x43008EE8: lwc1        $f8, 0x18($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X18);
    // 0x43008EEC: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43008EF0: c.lt.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl < ctx->f2.fl;
    // 0x43008EF4: nop

    // 0x43008EF8: bc1f        L_43008F14
    if (!c1cs) {
        // 0x43008EFC: nop
    
            goto L_43008F14;
    }
    // 0x43008EFC: nop

    // 0x43008F00: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43008F04: lwc1        $f3, -0x5910($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, -0X5910);
    // 0x43008F08: lwc1        $f2, -0x590C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X590C);
    // 0x43008F0C: b           L_43008F94
    // 0x43008F10: cvt.s.d     $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f0.fl = CVT_S_D(ctx->f2.d);
        goto L_43008F94;
    // 0x43008F10: cvt.s.d     $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f0.fl = CVT_S_D(ctx->f2.d);
L_43008F14:
    // 0x43008F14: lwc1        $f3, -0x5908($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, -0X5908);
    // 0x43008F18: lwc1        $f2, -0x5904($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X5904);
    // 0x43008F1C: nop

    // 0x43008F20: b           L_43008F94
    // 0x43008F24: cvt.s.d     $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f0.fl = CVT_S_D(ctx->f2.d);
        goto L_43008F94;
    // 0x43008F24: cvt.s.d     $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f0.fl = CVT_S_D(ctx->f2.d);
L_43008F28:
    // 0x43008F28: lwc1        $f10, 0x18($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X18);
    // 0x43008F2C: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    // 0x43008F30: jal         0x43008BCC
    // 0x43008F34: div.s       $f12, $f10, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = DIV_S(ctx->f10.fl, ctx->f14.fl);
    ovl_boss_demon_8BCC(rdram, ctx);
        goto after_0;
    // 0x43008F34: div.s       $f12, $f10, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = DIV_S(ctx->f10.fl, ctx->f14.fl);
    after_0:
    // 0x43008F38: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x43008F3C: lwc1        $f14, 0x1C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x43008F40: lwc1        $f16, 0x18($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X18);
    // 0x43008F44: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
    // 0x43008F48: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x43008F4C: bc1f        L_43008F5C
    if (!c1cs) {
        // 0x43008F50: nop
    
            goto L_43008F5C;
    }
    // 0x43008F50: nop

    // 0x43008F54: b           L_43008F98
    // 0x43008F58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43008F98;
    // 0x43008F58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008F5C:
    // 0x43008F5C: c.lt.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl < ctx->f2.fl;
    // 0x43008F60: cvt.d.s     $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f18.d = CVT_D_S(ctx->f12.fl);
    // 0x43008F64: bc1f        L_43008F80
    if (!c1cs) {
        // 0x43008F68: lui         $at, 0x4301
        ctx->r1 = S32(0X4301 << 16);
            goto L_43008F80;
    }
    // 0x43008F68: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43008F6C: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43008F70: lwc1        $f3, -0x5900($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, -0X5900);
    // 0x43008F74: lwc1        $f2, -0x58FC($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X58FC);
    // 0x43008F78: b           L_43008F90
    // 0x43008F7C: add.d       $f4, $f2, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f2.d + ctx->f18.d;
        goto L_43008F90;
    // 0x43008F7C: add.d       $f4, $f2, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f2.d + ctx->f18.d;
L_43008F80:
    // 0x43008F80: lwc1        $f3, -0x58F8($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, -0X58F8);
    // 0x43008F84: lwc1        $f2, -0x58F4($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X58F4);
    // 0x43008F88: nop

    // 0x43008F8C: add.d       $f4, $f2, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f2.d + ctx->f18.d;
L_43008F90:
    // 0x43008F90: cvt.s.d     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f0.fl = CVT_S_D(ctx->f4.d);
L_43008F94:
    // 0x43008F94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008F98:
    // 0x43008F98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43008F9C: jr          $ra
    // 0x43008FA0: nop

    return;
    // 0x43008FA0: nop

;}
RECOMP_FUNC void ovl_boss_demon_8FA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008FA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43008FA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43008FAC: jal         0x43009E60
    // 0x43008FB0: nop

    ovl_boss_demon_9E60(rdram, ctx);
        goto after_0;
    // 0x43008FB0: nop

    after_0:
    // 0x43008FB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43008FB8: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43008FBC: sw          $v0, -0x4F90($at)
    MEM_W(-0X4F90, ctx->r1) = ctx->r2;
    // 0x43008FC0: jr          $ra
    // 0x43008FC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x43008FC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void ovl_boss_demon_8FC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008FC8: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x43008FCC: addiu       $a0, $a0, -0x4F90
    ctx->r4 = ADD32(ctx->r4, -0X4F90);
    // 0x43008FD0: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x43008FD4: lui         $at, 0x5D58
    ctx->r1 = S32(0X5D58 << 16);
    // 0x43008FD8: ori         $at, $at, 0x8B66
    ctx->r1 = ctx->r1 | 0X8B66;
    // 0x43008FDC: multu       $t6, $at
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r1)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x43008FE0: lui         $at, 0x300
    ctx->r1 = S32(0X300 << 16);
    // 0x43008FE4: ori         $at, $at, 0x100
    ctx->r1 = ctx->r1 | 0X100;
    // 0x43008FE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43008FEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43008FF0: mflo        $v1
    ctx->r3 = lo;
    // 0x43008FF4: and         $t8, $v1, $at
    ctx->r24 = ctx->r3 & ctx->r1;
    // 0x43008FF8: bne         $t8, $zero, L_43009020
    if (ctx->r24 != 0) {
        // 0x43008FFC: sw          $v1, 0x0($a0)
        MEM_W(0X0, ctx->r4) = ctx->r3;
            goto L_43009020;
    }
    // 0x43008FFC: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x43009000: jal         0x43009E60
    // 0x43009004: nop

    ovl_boss_demon_9E60(rdram, ctx);
        goto after_0;
    // 0x43009004: nop

    after_0:
    // 0x43009008: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x4300900C: addiu       $a0, $a0, -0x4F90
    ctx->r4 = ADD32(ctx->r4, -0X4F90);
    // 0x43009010: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x43009014: nop

    // 0x43009018: subu        $v1, $t9, $v0
    ctx->r3 = SUB32(ctx->r25, ctx->r2);
    // 0x4300901C: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
L_43009020:
    // 0x43009020: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43009024: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43009028: jr          $ra
    // 0x4300902C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x4300902C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_boss_demon_9030(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43009030: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43009034: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43009038: jal         0x43008FC8
    // 0x4300903C: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    ovl_boss_demon_8FC8(rdram, ctx);
        goto after_0;
    // 0x4300903C: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x43009040: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x43009044: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x43009048: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x4300904C: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x43009050: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x43009054: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x43009058: cvt.d.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.d = CVT_D_W(ctx->f16.u32l);
    // 0x4300905C: bgez        $v0, L_43009074
    if (SIGNED(ctx->r2) >= 0) {
        // 0x43009060: cvt.d.s     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
            goto L_43009074;
    }
    // 0x43009060: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x43009064: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x43009068: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x4300906C: nop

    // 0x43009070: add.d       $f18, $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f18.d = ctx->f18.d + ctx->f4.d;
L_43009074:
    // 0x43009074: mul.d       $f6, $f18, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f10.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f10.d);
    // 0x43009078: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4300907C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43009080: jr          $ra
    // 0x43009084: cvt.s.d     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f0.fl = CVT_S_D(ctx->f6.d);
    return;
    // 0x43009084: cvt.s.d     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f0.fl = CVT_S_D(ctx->f6.d);
;}
RECOMP_FUNC void ovl_boss_demon_9088(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43009088: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4300908C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43009090: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    // 0x43009094: swc1        $f14, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f14.u32l;
    // 0x43009098: jal         0x43009030
    // 0x4300909C: add.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f12.fl;
    ovl_boss_demon_9030(rdram, ctx);
        goto after_0;
    // 0x4300909C: add.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f12.fl;
    after_0:
    // 0x430090A0: lwc1        $f14, 0x18($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X18);
    // 0x430090A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430090A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x430090AC: jr          $ra
    // 0x430090B0: sub.s       $f0, $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f14.fl;
    return;
    // 0x430090B0: sub.s       $f0, $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f14.fl;
;}
RECOMP_FUNC void ovl_boss_demon_90B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430090B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x430090B8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x430090BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430090C0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x430090C4: jal         0x43009030
    // 0x430090C8: nop

    ovl_boss_demon_9030(rdram, ctx);
        goto after_0;
    // 0x430090C8: nop

    after_0:
    // 0x430090CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430090D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x430090D4: jr          $ra
    // 0x430090D8: nop

    return;
    // 0x430090D8: nop

;}
RECOMP_FUNC void ovl_boss_demon_90DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430090DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x430090E0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x430090E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430090E8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x430090EC: jal         0x43009088
    // 0x430090F0: nop

    ovl_boss_demon_9088(rdram, ctx);
        goto after_0;
    // 0x430090F0: nop

    after_0:
    // 0x430090F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430090F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x430090FC: jr          $ra
    // 0x43009100: nop

    return;
    // 0x43009100: nop

;}
RECOMP_FUNC void ovl_boss_demon_9104(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43009104: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x43009108: swc1        $f12, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f12.u32l;
    // 0x4300910C: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x43009110: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x43009114: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x43009118: sub.s       $f6, $f14, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f14.fl - ctx->f4.fl;
    // 0x4300911C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43009120: mul.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x43009124: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x43009128: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x4300912C: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x43009130: mov.s       $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    ctx->f20.fl = ctx->f12.fl;
    // 0x43009134: jal         0x43009E28
    // 0x43009138: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    ovl_boss_demon_9E28(rdram, ctx);
        goto after_0;
    // 0x43009138: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x4300913C: lwc1        $f2, 0x40($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X40);
    // 0x43009140: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x43009144: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x43009148: nop

    // 0x4300914C: bc1f        L_43009188
    if (!c1cs) {
        // 0x43009150: nop
    
            goto L_43009188;
    }
    // 0x43009150: nop

    // 0x43009154: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x43009158: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x4300915C: c.lt.s      $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f12.fl < ctx->f10.fl;
    // 0x43009160: nop

    // 0x43009164: bc1f        L_43009174
    if (!c1cs) {
        // 0x43009168: nop
    
            goto L_43009174;
    }
    // 0x43009168: nop

    // 0x4300916C: b           L_43009174
    // 0x43009170: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_43009174;
    // 0x43009170: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_43009174:
    // 0x43009174: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x43009178: nop

    // 0x4300917C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x43009180: mul.s       $f20, $f18, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x43009184: nop

L_43009188:
    // 0x43009188: jal         0x43009E28
    // 0x4300918C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    ovl_boss_demon_9E28(rdram, ctx);
        goto after_1;
    // 0x4300918C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_1:
    // 0x43009190: lwc1        $f2, 0x3C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x43009194: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x43009198: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x4300919C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x430091A0: bc1f        L_430091DC
    if (!c1cs) {
        // 0x430091A4: nop
    
            goto L_430091DC;
    }
    // 0x430091A4: nop

    // 0x430091A8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x430091AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x430091B0: c.lt.s      $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f20.fl < ctx->f4.fl;
    // 0x430091B4: nop

    // 0x430091B8: bc1f        L_430091C8
    if (!c1cs) {
        // 0x430091BC: nop
    
            goto L_430091C8;
    }
    // 0x430091BC: nop

    // 0x430091C0: b           L_430091C8
    // 0x430091C4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_430091C8;
    // 0x430091C4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_430091C8:
    // 0x430091C8: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x430091CC: nop

    // 0x430091D0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x430091D4: mul.s       $f20, $f8, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x430091D8: nop

L_430091DC:
    // 0x430091DC: add.s       $f0, $f10, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f20.fl;
    // 0x430091E0: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x430091E4: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x430091E8: jr          $ra
    // 0x430091EC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x430091EC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_boss_demon_91F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430091F0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x430091F4: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430091F8: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x430091FC: nop

    // 0x43009200: bc1f        L_43009230
    if (!c1cs) {
        // 0x43009204: nop
    
            goto L_43009230;
    }
    // 0x43009204: nop

    // 0x43009208: lwc1        $f3, -0x58F0($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, -0X58F0);
    // 0x4300920C: lwc1        $f2, -0x58EC($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X58EC);
    // 0x43009210: nop

L_43009214:
    // 0x43009214: cvt.d.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.d = CVT_D_S(ctx->f12.fl);
    // 0x43009218: add.d       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f2.d); 
    ctx->f6.d = ctx->f4.d + ctx->f2.d;
    // 0x4300921C: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    // 0x43009220: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x43009224: nop

    // 0x43009228: bc1t        L_43009214
    if (c1cs) {
        // 0x4300922C: nop
    
            goto L_43009214;
    }
    // 0x4300922C: nop

L_43009230:
    // 0x43009230: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43009234: lwc1        $f3, -0x58E8($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, -0X58E8);
    // 0x43009238: lwc1        $f2, -0x58E4($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X58E4);
    // 0x4300923C: cvt.d.s     $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.d = CVT_D_S(ctx->f12.fl);
    // 0x43009240: c.lt.d      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.d < ctx->f0.d;
    // 0x43009244: nop

    // 0x43009248: bc1f        L_4300926C
    if (!c1cs) {
        // 0x4300924C: nop
    
            goto L_4300926C;
    }
    // 0x4300924C: nop

L_43009250:
    // 0x43009250: sub.d       $f8, $f0, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f8.d = ctx->f0.d - ctx->f2.d;
    // 0x43009254: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    // 0x43009258: cvt.d.s     $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.d = CVT_D_S(ctx->f12.fl);
    // 0x4300925C: c.lt.d      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.d < ctx->f0.d;
    // 0x43009260: nop

    // 0x43009264: bc1t        L_43009250
    if (c1cs) {
        // 0x43009268: nop
    
            goto L_43009250;
    }
    // 0x43009268: nop

L_4300926C:
    // 0x4300926C: jr          $ra
    // 0x43009270: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    return;
    // 0x43009270: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
;}
RECOMP_FUNC void ovl_boss_demon_9274(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43009274: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43009278: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4300927C: jal         0x430091F0
    // 0x43009280: nop

    ovl_boss_demon_91F0(rdram, ctx);
        goto after_0;
    // 0x43009280: nop

    after_0:
    // 0x43009284: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43009288: lwc1        $f5, -0x58E0($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X58E0);
    // 0x4300928C: lwc1        $f4, -0x58DC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X58DC);
    // 0x43009290: cvt.d.s     $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.d = CVT_D_S(ctx->f0.fl);
    // 0x43009294: c.lt.d      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.d < ctx->f2.d;
    // 0x43009298: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4300929C: bc1f        L_430092BC
    if (!c1cs) {
        // 0x430092A0: mov.s       $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
            goto L_430092BC;
    }
    // 0x430092A0: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x430092A4: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430092A8: lwc1        $f7, -0x58D8($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X58D8);
    // 0x430092AC: lwc1        $f6, -0x58D4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X58D4);
    // 0x430092B0: nop

    // 0x430092B4: sub.d       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f2.d - ctx->f6.d;
    // 0x430092B8: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
L_430092BC:
    // 0x430092BC: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    // 0x430092C0: jr          $ra
    // 0x430092C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x430092C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void ovl_boss_demon_92C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430092C8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x430092CC: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    // 0x430092D0: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x430092D4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x430092D8: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x430092DC: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x430092E0: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x430092E4: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x430092E8: jal         0x43009274
    // 0x430092EC: sub.s       $f12, $f14, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f14.fl - ctx->f4.fl;
    ovl_boss_demon_9274(rdram, ctx);
        goto after_0;
    // 0x430092EC: sub.s       $f12, $f14, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f14.fl - ctx->f4.fl;
    after_0:
    // 0x430092F0: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x430092F4: jal         0x43009E28
    // 0x430092F8: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    ovl_boss_demon_9E28(rdram, ctx);
        goto after_1;
    // 0x430092F8: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_1:
    // 0x430092FC: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x43009300: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    // 0x43009304: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x43009308: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x4300930C: bc1f        L_4300932C
    if (!c1cs) {
        // 0x43009310: addiu       $a3, $zero, 0x0
        ctx->r7 = ADD32(0, 0X0);
            goto L_4300932C;
    }
    // 0x43009310: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x43009314: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x43009318: add.s       $f14, $f12, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f14.fl = ctx->f12.fl + ctx->f20.fl;
    // 0x4300931C: jal         0x43009104
    // 0x43009320: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    ovl_boss_demon_9104(rdram, ctx);
        goto after_2;
    // 0x43009320: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x43009324: b           L_43009334
    // 0x43009328: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
        goto L_43009334;
    // 0x43009328: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
L_4300932C:
    // 0x4300932C: lwc1        $f20, 0x28($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X28);
    // 0x43009330: nop

L_43009334:
    // 0x43009334: jal         0x430091F0
    // 0x43009338: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    ovl_boss_demon_91F0(rdram, ctx);
        goto after_3;
    // 0x43009338: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_3:
    // 0x4300933C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43009340: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x43009344: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x43009348: jr          $ra
    // 0x4300934C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x4300934C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_boss_demon_9350(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43009350: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x43009354: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43009358: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x4300935C: addiu       $t6, $zero, 0xC
    ctx->r14 = ADD32(0, 0XC);
    // 0x43009360: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x43009364: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x43009368: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x4300936C: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    // 0x43009370: jal         0x430006C4
    // 0x43009374: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_boss_demon_6C4(rdram, ctx);
        goto after_0;
    // 0x43009374: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x43009378: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4300937C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x43009380: jr          $ra
    // 0x43009384: nop

    return;
    // 0x43009384: nop

;}
RECOMP_FUNC void ovl_boss_demon_9388(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43009388: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4300938C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43009390: jal         0x43009350
    // 0x43009394: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    ovl_boss_demon_9350(rdram, ctx);
        goto after_0;
    // 0x43009394: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    after_0:
    // 0x43009398: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4300939C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x430093A0: jr          $ra
    // 0x430093A4: nop

    return;
    // 0x430093A4: nop

;}
RECOMP_FUNC void ovl_boss_demon_93A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430093A8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x430093AC: lui         $t7, 0x4301
    ctx->r15 = S32(0X4301 << 16);
    // 0x430093B0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x430093B4: lw          $t7, -0x5B40($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X5B40);
    // 0x430093B8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x430093BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430093C0: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x430093C4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x430093C8: jal         0x43008AC0
    // 0x430093CC: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    ovl_boss_demon_8AC0(rdram, ctx);
        goto after_0;
    // 0x430093CC: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    after_0:
    // 0x430093D0: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x430093D4: addiu       $t8, $zero, 0xC
    ctx->r24 = ADD32(0, 0XC);
    // 0x430093D8: lw          $a0, -0x5810($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5810);
    // 0x430093DC: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
    // 0x430093E0: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x430093E4: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    // 0x430093E8: jal         0x430006C4
    // 0x430093EC: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_boss_demon_6C4(rdram, ctx);
        goto after_1;
    // 0x430093EC: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x430093F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430093F4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x430093F8: jr          $ra
    // 0x430093FC: nop

    return;
    // 0x430093FC: nop

;}
RECOMP_FUNC void ovl_boss_demon_9400(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43009400: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43009404: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x43009408: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4300940C: lw          $a0, -0x5810($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5810);
    // 0x43009410: jal         0x43009350
    // 0x43009414: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    ovl_boss_demon_9350(rdram, ctx);
        goto after_0;
    // 0x43009414: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    after_0:
    // 0x43009418: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4300941C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43009420: jr          $ra
    // 0x43009424: nop

    return;
    // 0x43009424: nop

;}
RECOMP_FUNC void ovl_boss_demon_9428(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43009428: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4300942C: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x43009430: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43009434: lw          $a0, -0x5810($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5810);
    // 0x43009438: jal         0x43009350
    // 0x4300943C: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    ovl_boss_demon_9350(rdram, ctx);
        goto after_0;
    // 0x4300943C: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    after_0:
    // 0x43009440: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43009444: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43009448: jr          $ra
    // 0x4300944C: nop

    return;
    // 0x4300944C: nop

;}
RECOMP_FUNC void ovl_boss_demon_9450(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43009450: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x43009454: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x43009458: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x4300945C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43009460: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x43009464: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x43009468: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    // 0x4300946C: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x43009470: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x43009474: jal         0x43000DC0
    // 0x43009478: sllv        $a3, $t7, $t6
    ctx->r7 = S32(ctx->r15 << (ctx->r14 & 31));
    ovl_boss_demon_DC0(rdram, ctx);
        goto after_0;
    // 0x43009478: sllv        $a3, $t7, $t6
    ctx->r7 = S32(ctx->r15 << (ctx->r14 & 31));
    after_0:
    // 0x4300947C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43009480: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x43009484: jr          $ra
    // 0x43009488: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x43009488: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_boss_demon_948C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300948C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43009490: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43009494: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x43009498: addiu       $a0, $zero, 0x33
    ctx->r4 = ADD32(0, 0X33);
    // 0x4300949C: jal         0x43000DC0
    // 0x430094A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_boss_demon_DC0(rdram, ctx);
        goto after_0;
    // 0x430094A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x430094A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430094A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x430094AC: jr          $ra
    // 0x430094B0: nop

    return;
    // 0x430094B0: nop

;}
RECOMP_FUNC void ovl_boss_demon_94B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430094B4: sll         $t7, $a2, 2
    ctx->r15 = S32(ctx->r6 << 2);
    // 0x430094B8: lw          $t6, 0x8($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X8);
    // 0x430094BC: subu        $t7, $t7, $a2
    ctx->r15 = SUB32(ctx->r15, ctx->r6);
    // 0x430094C0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x430094C4: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x430094C8: lh          $t8, 0x0($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X0);
    // 0x430094CC: lh          $t9, 0x2($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X2);
    // 0x430094D0: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x430094D4: lw          $v1, 0x4($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X4);
    // 0x430094D8: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x430094DC: lh          $t0, 0x4($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X4);
    // 0x430094E0: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x430094E4: lwc1        $f10, 0x0($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X0);
    // 0x430094E8: cvt.s.w     $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    ctx->f2.fl = CVT_S_W(ctx->f6.u32l);
    // 0x430094EC: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x430094F0: lwc1        $f18, 0x10($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X10);
    // 0x430094F4: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x430094F8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x430094FC: cvt.s.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
    // 0x43009500: lwc1        $f8, 0x20($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X20);
    // 0x43009504: mul.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x43009508: nop

    // 0x4300950C: mul.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x43009510: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x43009514: lwc1        $f16, 0x30($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X30);
    // 0x43009518: add.s       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x4300951C: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x43009520: swc1        $f4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f4.u32l;
    // 0x43009524: lwc1        $f8, 0x4($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X4);
    // 0x43009528: lwc1        $f10, 0x14($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X14);
    // 0x4300952C: mul.s       $f6, $f8, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x43009530: lwc1        $f4, 0x24($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X24);
    // 0x43009534: mul.s       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x43009538: nop

    // 0x4300953C: mul.s       $f8, $f4, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x43009540: add.s       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x43009544: lwc1        $f6, 0x34($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X34);
    // 0x43009548: add.s       $f10, $f18, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x4300954C: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x43009550: swc1        $f16, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f16.u32l;
    // 0x43009554: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x43009558: lwc1        $f8, 0x18($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X18);
    // 0x4300955C: mul.s       $f18, $f4, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x43009560: lwc1        $f16, 0x28($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X28);
    // 0x43009564: mul.s       $f6, $f8, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x43009568: nop

    // 0x4300956C: mul.s       $f4, $f16, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x43009570: add.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x43009574: lwc1        $f18, 0x38($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X38);
    // 0x43009578: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x4300957C: add.s       $f6, $f18, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x43009580: jr          $ra
    // 0x43009584: swc1        $f6, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f6.u32l;
    return;
    // 0x43009584: swc1        $f6, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f6.u32l;
;}
RECOMP_FUNC void ovl_boss_demon_9588(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43009588: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4300958C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x43009590: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43009594: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x43009598: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x4300959C: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x430095A0: jal         0x43009450
    // 0x430095A4: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    ovl_boss_demon_9450(rdram, ctx);
        goto after_0;
    // 0x430095A4: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_0:
    // 0x430095A8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x430095AC: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x430095B0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x430095B4: jal         0x430094B4
    // 0x430095B8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    ovl_boss_demon_94B4(rdram, ctx);
        goto after_1;
    // 0x430095B8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_1:
    // 0x430095BC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x430095C0: jal         0x4300948C
    // 0x430095C4: nop

    ovl_boss_demon_948C(rdram, ctx);
        goto after_2;
    // 0x430095C4: nop

    after_2:
    // 0x430095C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430095CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x430095D0: jr          $ra
    // 0x430095D4: nop

    return;
    // 0x430095D4: nop

;}
RECOMP_FUNC void ovl_boss_demon_95D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430095D8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x430095DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430095E0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x430095E4: lw          $at, 0x0($a1)
    ctx->r1 = MEM_W(ctx->r5, 0X0);
    // 0x430095E8: lui         $t6, 0x4301
    ctx->r14 = S32(0X4301 << 16);
    // 0x430095EC: addiu       $t6, $t6, -0x5B20
    ctx->r14 = ADD32(ctx->r14, -0X5B20);
    // 0x430095F0: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x430095F4: lw          $t9, 0x4($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X4);
    // 0x430095F8: lui         $t1, 0x4301
    ctx->r9 = S32(0X4301 << 16);
    // 0x430095FC: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    // 0x43009600: lw          $at, 0x8($a1)
    ctx->r1 = MEM_W(ctx->r5, 0X8);
    // 0x43009604: addiu       $t1, $t1, -0x5B2C
    ctx->r9 = ADD32(ctx->r9, -0X5B2C);
    // 0x43009608: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x4300960C: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x43009610: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43009614: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x43009618: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x4300961C: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x43009620: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x43009624: jal         0x430006C4
    // 0x43009628: sw          $t0, -0x5B14($at)
    MEM_W(-0X5B14, ctx->r1) = ctx->r8;
    ovl_boss_demon_6C4(rdram, ctx);
        goto after_0;
    // 0x43009628: sw          $t0, -0x5B14($at)
    MEM_W(-0X5B14, ctx->r1) = ctx->r8;
    after_0:
    // 0x4300962C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43009630: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x43009634: jr          $ra
    // 0x43009638: nop

    return;
    // 0x43009638: nop

;}
RECOMP_FUNC void ovl_boss_demon_963C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300963C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43009640: nop

    // 0x43009644: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
    // 0x43009648: swc1        $f0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f0.u32l;
    // 0x4300964C: jr          $ra
    // 0x43009650: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
    return;
    // 0x43009650: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void ovl_boss_demon_9654(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43009654: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x43009658: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x4300965C: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x43009660: swc1        $f12, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f12.u32l;
    // 0x43009664: swc1        $f14, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f14.u32l;
    // 0x43009668: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x4300966C: jr          $ra
    // 0x43009670: swc1        $f4, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f4.u32l;
    return;
    // 0x43009670: swc1        $f4, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void ovl_boss_demon_9674(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43009674: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x43009678: lwc1        $f6, 0x0($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X0);
    // 0x4300967C: nop

    // 0x43009680: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x43009684: swc1        $f8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f8.u32l;
    // 0x43009688: lwc1        $f16, 0x4($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X4);
    // 0x4300968C: lwc1        $f10, 0x4($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X4);
    // 0x43009690: nop

    // 0x43009694: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x43009698: swc1        $f18, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f18.u32l;
    // 0x4300969C: lwc1        $f6, 0x8($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X8);
    // 0x430096A0: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
    // 0x430096A4: nop

    // 0x430096A8: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x430096AC: jr          $ra
    // 0x430096B0: swc1        $f8, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f8.u32l;
    return;
    // 0x430096B0: swc1        $f8, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f8.u32l;
;}
RECOMP_FUNC void ovl_boss_demon_96B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430096B4: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x430096B8: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x430096BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x430096C0: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
L_430096C4:
    // 0x430096C4: lwc1        $f4, 0x0($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X0);
    // 0x430096C8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x430096CC: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x430096D0: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x430096D4: bne         $v0, $a0, L_430096C4
    if (ctx->r2 != ctx->r4) {
        // 0x430096D8: swc1        $f4, -0x4($v1)
        MEM_W(-0X4, ctx->r3) = ctx->f4.u32l;
            goto L_430096C4;
    }
    // 0x430096D8: swc1        $f4, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->f4.u32l;
    // 0x430096DC: jr          $ra
    // 0x430096E0: nop

    return;
    // 0x430096E0: nop

;}
RECOMP_FUNC void ovl_boss_demon_96E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430096E4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x430096E8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x430096EC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x430096F0: lwc1        $f4, 0x4($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X4);
    // 0x430096F4: lwc1        $f6, 0x8($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X8);
    // 0x430096F8: lwc1        $f10, 0x4($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X4);
    // 0x430096FC: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x43009700: lwc1        $f16, 0x8($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X8);
    // 0x43009704: nop

    // 0x43009708: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x4300970C: sub.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f18.fl;
    // 0x43009710: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x43009714: lwc1        $f10, 0x0($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X0);
    // 0x43009718: lwc1        $f6, 0x8($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X8);
    // 0x4300971C: lwc1        $f18, 0x0($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X0);
    // 0x43009720: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x43009724: lwc1        $f8, 0x8($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X8);
    // 0x43009728: nop

    // 0x4300972C: mul.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x43009730: sub.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x43009734: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    // 0x43009738: lwc1        $f8, 0x4($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X4);
    // 0x4300973C: lwc1        $f10, 0x0($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X0);
    // 0x43009740: lwc1        $f4, 0x4($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X4);
    // 0x43009744: mul.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x43009748: lwc1        $f16, 0x0($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X0);
    // 0x4300974C: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x43009750: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x43009754: mul.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x43009758: sub.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x4300975C: jal         0x430096B4
    // 0x43009760: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    ovl_boss_demon_96B4(rdram, ctx);
        goto after_0;
    // 0x43009760: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    after_0:
    // 0x43009764: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43009768: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x4300976C: jr          $ra
    // 0x43009770: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x43009770: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_boss_demon_9774(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43009774: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43009778: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4300977C: lwc1        $f2, 0x0($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X0);
    // 0x43009780: lwc1        $f14, 0x4($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X4);
    // 0x43009784: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x43009788: lwc1        $f0, 0x8($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X8);
    // 0x4300978C: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x43009790: nop

    // 0x43009794: mul.s       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x43009798: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x4300979C: jal         0x4300A1A0
    // 0x430097A0: add.s       $f12, $f10, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f8.fl;
    ovl_boss_demon_A1A0(rdram, ctx);
        goto after_0;
    // 0x430097A0: add.s       $f12, $f10, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f8.fl;
    after_0:
    // 0x430097A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430097A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x430097AC: jr          $ra
    // 0x430097B0: nop

    return;
    // 0x430097B0: nop

;}
RECOMP_FUNC void ovl_boss_demon_97B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430097B4: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x430097B8: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x430097BC: lwc1        $f8, 0x4($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X4);
    // 0x430097C0: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x430097C4: lwc1        $f16, 0x8($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X8);
    // 0x430097C8: mul.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x430097CC: swc1        $f6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f6.u32l;
    // 0x430097D0: mul.s       $f18, $f16, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x430097D4: swc1        $f10, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f10.u32l;
    // 0x430097D8: jr          $ra
    // 0x430097DC: swc1        $f18, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f18.u32l;
    return;
    // 0x430097DC: swc1        $f18, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f18.u32l;
;}
RECOMP_FUNC void ovl_boss_demon_97E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430097E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x430097E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430097E8: jal         0x43009774
    // 0x430097EC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_boss_demon_9774(rdram, ctx);
        goto after_0;
    // 0x430097EC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x430097F0: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x430097F4: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x430097F8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x430097FC: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x43009800: nop

    // 0x43009804: div.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = DIV_D(ctx->f4.d, ctx->f6.d);
    // 0x43009808: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4300980C: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x43009810: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x43009814: jal         0x430097B4
    // 0x43009818: nop

    ovl_boss_demon_97B4(rdram, ctx);
        goto after_1;
    // 0x43009818: nop

    after_1:
    // 0x4300981C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43009820: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43009824: jr          $ra
    // 0x43009828: nop

    return;
    // 0x43009828: nop

;}
RECOMP_FUNC void ovl_boss_demon_982C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300982C: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x43009830: lwc1        $f6, 0x0($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X0);
    // 0x43009834: lwc1        $f10, 0x4($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X4);
    // 0x43009838: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x4300983C: lwc1        $f16, 0x4($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X4);
    // 0x43009840: lwc1        $f6, 0x8($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X8);
    // 0x43009844: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x43009848: lwc1        $f10, 0x8($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X8);
    // 0x4300984C: nop

    // 0x43009850: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x43009854: add.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x43009858: jr          $ra
    // 0x4300985C: add.s       $f0, $f16, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f16.fl + ctx->f4.fl;
    return;
    // 0x4300985C: add.s       $f0, $f16, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f16.fl + ctx->f4.fl;
;}
RECOMP_FUNC void ovl_boss_demon_9860(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43009860: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x43009864: lwc1        $f6, 0x0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X0);
    // 0x43009868: nop

    // 0x4300986C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x43009870: swc1        $f8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f8.u32l;
    // 0x43009874: lwc1        $f16, 0x4($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X4);
    // 0x43009878: lwc1        $f10, 0x4($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X4);
    // 0x4300987C: nop

    // 0x43009880: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x43009884: swc1        $f18, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f18.u32l;
    // 0x43009888: lwc1        $f6, 0x8($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X8);
    // 0x4300988C: lwc1        $f4, 0x8($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X8);
    // 0x43009890: nop

    // 0x43009894: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x43009898: jr          $ra
    // 0x4300989C: swc1        $f8, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f8.u32l;
    return;
    // 0x4300989C: swc1        $f8, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f8.u32l;
;}
RECOMP_FUNC void ovl_boss_demon_98A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430098A0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x430098A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430098A8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x430098AC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x430098B0: jal         0x430097E0
    // 0x430098B4: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    ovl_boss_demon_97E0(rdram, ctx);
        goto after_0;
    // 0x430098B4: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    after_0:
    // 0x430098B8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x430098BC: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x430098C0: jal         0x430096B4
    // 0x430098C4: nop

    ovl_boss_demon_96B4(rdram, ctx);
        goto after_1;
    // 0x430098C4: nop

    after_1:
    // 0x430098C8: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x430098CC: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x430098D0: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x430098D4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x430098D8: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x430098DC: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x430098E0: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    // 0x430098E4: jal         0x43009E70
    // 0x430098E8: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    ovl_boss_demon_9E70(rdram, ctx);
        goto after_2;
    // 0x430098E8: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    after_2:
    // 0x430098EC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x430098F0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x430098F4: jal         0x430097B4
    // 0x430098F8: nop

    ovl_boss_demon_97B4(rdram, ctx);
        goto after_3;
    // 0x430098F8: nop

    after_3:
    // 0x430098FC: lwc1        $f12, 0x18($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X18);
    // 0x43009900: jal         0x4300A030
    // 0x43009904: nop

    ovl_boss_demon_A030(rdram, ctx);
        goto after_4;
    // 0x43009904: nop

    after_4:
    // 0x43009908: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x4300990C: nop

    // 0x43009910: swc1        $f0, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->f0.u32l;
    // 0x43009914: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43009918: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4300991C: jr          $ra
    // 0x43009920: nop

    return;
    // 0x43009920: nop

;}
RECOMP_FUNC void ovl_boss_demon_9924(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43009924: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x43009928: swc1        $f21, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x4300992C: swc1        $f20, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->f20.u32l;
    // 0x43009930: lwc1        $f20, 0x0($a1)
    ctx->f20.u32l = MEM_W(ctx->r5, 0X0);
    // 0x43009934: lwc1        $f12, 0x4($a1)
    ctx->f12.u32l = MEM_W(ctx->r5, 0X4);
    // 0x43009938: mul.s       $f4, $f20, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f20.fl);
    // 0x4300993C: lwc1        $f0, 0x8($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X8);
    // 0x43009940: lwc1        $f2, 0xC($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0XC);
    // 0x43009944: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x43009948: mul.s       $f6, $f12, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x4300994C: addiu       $v0, $a0, 0x3C
    ctx->r2 = ADD32(ctx->r4, 0X3C);
    // 0x43009950: mul.s       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x43009954: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x43009958: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x4300995C: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x43009960: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x43009964: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x43009968: add.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x4300996C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x43009970: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x43009974: nop

    // 0x43009978: div.d       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = DIV_D(ctx->f6.d, ctx->f10.d);
    // 0x4300997C: cvt.s.d     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f18.fl = CVT_S_D(ctx->f4.d);
    // 0x43009980: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x43009984: mul.s       $f14, $f20, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = MUL_S(ctx->f20.fl, ctx->f18.fl);
    // 0x43009988: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x4300998C: mul.s       $f16, $f12, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = MUL_S(ctx->f12.fl, ctx->f18.fl);
    // 0x43009990: nop

    // 0x43009994: mul.s       $f8, $f0, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x43009998: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x4300999C: mul.s       $f6, $f20, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f20.fl, ctx->f14.fl);
    // 0x430099A0: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    // 0x430099A4: mul.s       $f10, $f12, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x430099A8: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    // 0x430099AC: mul.s       $f4, $f0, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f14.fl);
    // 0x430099B0: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x430099B4: mul.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f14.fl);
    // 0x430099B8: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x430099BC: mul.s       $f6, $f12, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f16.fl);
    // 0x430099C0: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x430099C4: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x430099C8: mul.s       $f10, $f0, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x430099CC: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x430099D0: mul.s       $f4, $f2, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x430099D4: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x430099D8: mul.s       $f6, $f0, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x430099DC: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x430099E0: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x430099E4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x430099E8: mul.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x430099EC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x430099F0: lwc1        $f6, 0x14($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X14);
    // 0x430099F4: nop

    // 0x430099F8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x430099FC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x43009A00: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x43009A04: sub.d       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = ctx->f18.d - ctx->f10.d;
    // 0x43009A08: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x43009A0C: swc1        $f6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f6.u32l;
    // 0x43009A10: lwc1        $f10, 0x10($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X10);
    // 0x43009A14: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x43009A18: nop

    // 0x43009A1C: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x43009A20: swc1        $f4, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f4.u32l;
    // 0x43009A24: lwc1        $f20, 0x18($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X18);
    // 0x43009A28: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    // 0x43009A2C: lwc1        $f16, 0x1C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x43009A30: lwc1        $f14, 0x24($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
    // 0x43009A34: lwc1        $f2, 0x30($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X30);
    // 0x43009A38: add.s       $f6, $f12, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f12.fl + ctx->f20.fl;
    // 0x43009A3C: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
    // 0x43009A40: swc1        $f6, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f6.u32l;
    // 0x43009A44: lwc1        $f10, 0x10($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X10);
    // 0x43009A48: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x43009A4C: nop

    // 0x43009A50: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x43009A54: swc1        $f4, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f4.u32l;
    // 0x43009A58: lwc1        $f6, 0x14($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X14);
    // 0x43009A5C: swc1        $f0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f0.u32l;
    // 0x43009A60: add.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f6.fl;
    // 0x43009A64: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x43009A68: sub.d       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = ctx->f18.d - ctx->f10.d;
    // 0x43009A6C: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x43009A70: sub.s       $f10, $f12, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f12.fl - ctx->f20.fl;
    // 0x43009A74: swc1        $f6, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f6.u32l;
    // 0x43009A78: sub.s       $f8, $f16, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f16.fl - ctx->f14.fl;
    // 0x43009A7C: swc1        $f10, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f10.u32l;
    // 0x43009A80: add.s       $f4, $f16, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f14.fl;
    // 0x43009A84: swc1        $f8, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f8.u32l;
    // 0x43009A88: swc1        $f4, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f4.u32l;
    // 0x43009A8C: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x43009A90: swc1        $f0, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f0.u32l;
    // 0x43009A94: add.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f6.fl;
    // 0x43009A98: swc1        $f0, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f0.u32l;
    // 0x43009A9C: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x43009AA0: sub.d       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = ctx->f18.d - ctx->f10.d;
    // 0x43009AA4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x43009AA8: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x43009AAC: swc1        $f0, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->f0.u32l;
    // 0x43009AB0: swc1        $f6, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f6.u32l;
    // 0x43009AB4: swc1        $f0, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f0.u32l;
    // 0x43009AB8: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
    // 0x43009ABC: lwc1        $f20, 0xC($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0XC);
    // 0x43009AC0: lwc1        $f21, 0x8($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X8);
    // 0x43009AC4: jr          $ra
    // 0x43009AC8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x43009AC8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_boss_demon_9ACC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43009ACC: lui         $at, 0x40F0
    ctx->r1 = S32(0X40F0 << 16);
    // 0x43009AD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43009AD4: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x43009AD8: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x43009ADC: addiu       $a2, $a1, 0x20
    ctx->r6 = ADD32(ctx->r5, 0X20);
    // 0x43009AE0: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x43009AE4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43009AE8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x43009AEC: addiu       $a0, $sp, 0x14
    ctx->r4 = ADD32(ctx->r29, 0X14);
    // 0x43009AF0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
L_43009AF4:
    // 0x43009AF4: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x43009AF8: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x43009AFC: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x43009B00: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x43009B04: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x43009B08: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x43009B0C: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x43009B10: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x43009B14: nop

    // 0x43009B18: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x43009B1C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x43009B20: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x43009B24: nop

    // 0x43009B28: cvt.w.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_D(ctx->f8.d);
    // 0x43009B2C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x43009B30: lh          $t7, 0x0($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X0);
    // 0x43009B34: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x43009B38: sh          $t7, -0x8($v1)
    MEM_H(-0X8, ctx->r3) = ctx->r15;
    // 0x43009B3C: lh          $t8, 0x2($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X2);
    // 0x43009B40: nop

    // 0x43009B44: sh          $t8, -0x8($a2)
    MEM_H(-0X8, ctx->r6) = ctx->r24;
    // 0x43009B48: lwc1        $f16, -0xC($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, -0XC);
    // 0x43009B4C: nop

    // 0x43009B50: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x43009B54: mul.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f0.d);
    // 0x43009B58: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x43009B5C: nop

    // 0x43009B60: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x43009B64: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x43009B68: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x43009B6C: nop

    // 0x43009B70: cvt.w.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_D(ctx->f4.d);
    // 0x43009B74: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x43009B78: lh          $t0, 0x0($a0)
    ctx->r8 = MEM_H(ctx->r4, 0X0);
    // 0x43009B7C: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x43009B80: sh          $t0, -0x6($v1)
    MEM_H(-0X6, ctx->r3) = ctx->r8;
    // 0x43009B84: lh          $t1, 0x2($a0)
    ctx->r9 = MEM_H(ctx->r4, 0X2);
    // 0x43009B88: nop

    // 0x43009B8C: sh          $t1, -0x6($a2)
    MEM_H(-0X6, ctx->r6) = ctx->r9;
    // 0x43009B90: lwc1        $f8, -0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, -0X8);
    // 0x43009B94: nop

    // 0x43009B98: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x43009B9C: mul.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f0.d);
    // 0x43009BA0: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x43009BA4: nop

    // 0x43009BA8: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x43009BAC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x43009BB0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x43009BB4: nop

    // 0x43009BB8: cvt.w.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_D(ctx->f16.d);
    // 0x43009BBC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x43009BC0: lh          $t3, 0x0($a0)
    ctx->r11 = MEM_H(ctx->r4, 0X0);
    // 0x43009BC4: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x43009BC8: sh          $t3, -0x4($v1)
    MEM_H(-0X4, ctx->r3) = ctx->r11;
    // 0x43009BCC: lh          $t4, 0x2($a0)
    ctx->r12 = MEM_H(ctx->r4, 0X2);
    // 0x43009BD0: nop

    // 0x43009BD4: sh          $t4, -0x4($a2)
    MEM_H(-0X4, ctx->r6) = ctx->r12;
    // 0x43009BD8: lwc1        $f4, -0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, -0X4);
    // 0x43009BDC: nop

    // 0x43009BE0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x43009BE4: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x43009BE8: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x43009BEC: nop

    // 0x43009BF0: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x43009BF4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x43009BF8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x43009BFC: nop

    // 0x43009C00: cvt.w.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_D(ctx->f8.d);
    // 0x43009C04: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x43009C08: lh          $t6, 0x0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X0);
    // 0x43009C0C: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x43009C10: sh          $t6, -0x2($v1)
    MEM_H(-0X2, ctx->r3) = ctx->r14;
    // 0x43009C14: lh          $t7, 0x2($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X2);
    // 0x43009C18: bne         $a3, $a1, L_43009AF4
    if (ctx->r7 != ctx->r5) {
        // 0x43009C1C: sh          $t7, -0x2($a2)
        MEM_H(-0X2, ctx->r6) = ctx->r15;
            goto L_43009AF4;
    }
    // 0x43009C1C: sh          $t7, -0x2($a2)
    MEM_H(-0X2, ctx->r6) = ctx->r15;
    // 0x43009C20: jr          $ra
    // 0x43009C24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x43009C24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void ovl_boss_demon_9C28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43009C28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43009C2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43009C30: jal         0x43009D58
    // 0x43009C34: nop

    ovl_boss_demon_9D58(rdram, ctx);
        goto after_0;
    // 0x43009C34: nop

    after_0:
    // 0x43009C38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43009C3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43009C40: jr          $ra
    // 0x43009C44: nop

    return;
    // 0x43009C44: nop

    // 0x43009C48: nop

    // 0x43009C4C: nop

;}
RECOMP_FUNC void ovl_boss_demon_9C50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43009C50: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43009C54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43009C58: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x43009C5C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x43009C60: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x43009C64: jal         0x43000DC0
    // 0x43009C68: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_boss_demon_DC0(rdram, ctx);
        goto after_0;
    // 0x43009C68: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x43009C6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43009C70: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x43009C74: jr          $ra
    // 0x43009C78: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x43009C78: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_boss_demon_9C7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43009C7C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43009C80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43009C84: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x43009C88: addiu       $a0, $zero, 0x35
    ctx->r4 = ADD32(0, 0X35);
    // 0x43009C8C: jal         0x43000DC0
    // 0x43009C90: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_boss_demon_DC0(rdram, ctx);
        goto after_0;
    // 0x43009C90: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x43009C94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43009C98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43009C9C: jr          $ra
    // 0x43009CA0: nop

    return;
    // 0x43009CA0: nop

;}
RECOMP_FUNC void ovl_boss_demon_9CA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43009CA4: jr          $ra
    // 0x43009CA8: nop

    return;
    // 0x43009CA8: nop

;}
RECOMP_FUNC void ovl_boss_demon_9CAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43009CAC: jr          $ra
    // 0x43009CB0: nop

    return;
    // 0x43009CB0: nop

    // 0x43009CB4: nop

    // 0x43009CB8: nop

    // 0x43009CBC: nop

;}
RECOMP_FUNC void ovl_boss_demon_9CC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43009CC0: lui         $t0, 0x4301
    ctx->r8 = S32(0X4301 << 16);
    // 0x43009CC4: addiu       $t0, $t0, -0x4CE0
    ctx->r8 = ADD32(ctx->r8, -0X4CE0);
    // 0x43009CC8: lw          $v1, 0x0($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X0);
    // 0x43009CCC: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x43009CD0: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x43009CD4: sll         $t6, $v1, 1
    ctx->r14 = S32(ctx->r3 << 1);
    // 0x43009CD8: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x43009CDC: lhu         $v0, -0x4D20($a0)
    ctx->r2 = MEM_HU(ctx->r4, -0X4D20);
    // 0x43009CE0: lui         $t9, 0x4301
    ctx->r25 = S32(0X4301 << 16);
    // 0x43009CE4: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x43009CE8: subu        $t8, $t8, $v0
    ctx->r24 = SUB32(ctx->r24, ctx->r2);
    // 0x43009CEC: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x43009CF0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x43009CF4: addiu       $t9, $t9, -0x4EA0
    ctx->r25 = ADD32(ctx->r25, -0X4EA0);
    // 0x43009CF8: addu        $a1, $t8, $t9
    ctx->r5 = ADD32(ctx->r24, ctx->r25);
    // 0x43009CFC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x43009D00: addiu       $t7, $v1, 0x1
    ctx->r15 = ADD32(ctx->r3, 0X1);
    // 0x43009D04: sw          $t7, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r15;
    // 0x43009D08: sw          $a2, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r6;
    // 0x43009D0C: sw          $a3, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r7;
    // 0x43009D10: jr          $ra
    // 0x43009D14: sw          $t1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r9;
    return;
    // 0x43009D14: sw          $t1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r9;
;}
RECOMP_FUNC void ovl_boss_demon_9D18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43009D18: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x43009D1C: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x43009D20: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x43009D24: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43009D28: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x43009D2C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x43009D30: addiu       $v1, $v1, -0x4CE0
    ctx->r3 = ADD32(ctx->r3, -0X4CE0);
    // 0x43009D34: sw          $zero, -0x4EA0($at)
    MEM_W(-0X4EA0, ctx->r1) = 0;
    // 0x43009D38: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x43009D3C: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43009D40: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x43009D44: sll         $t7, $v0, 1
    ctx->r15 = S32(ctx->r2 << 1);
    // 0x43009D48: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x43009D4C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x43009D50: jr          $ra
    // 0x43009D54: sh          $a0, -0x4D20($at)
    MEM_H(-0X4D20, ctx->r1) = ctx->r4;
    return;
    // 0x43009D54: sh          $a0, -0x4D20($at)
    MEM_H(-0X4D20, ctx->r1) = ctx->r4;
;}
