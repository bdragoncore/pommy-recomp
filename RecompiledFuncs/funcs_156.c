#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_boss_angel_8714(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008714: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x43008718: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x4300871C: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x43008720: mtc1        $a2, $f20
    ctx->f20.u32l = ctx->r6;
    // 0x43008724: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43008728: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x4300872C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x43008730: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x43008734: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x43008738: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x4300873C: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x43008740: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x43008744: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x43008748: jal         0x430000E8
    // 0x4300874C: addiu       $a0, $zero, 0x118
    ctx->r4 = ADD32(0, 0X118);
    ovl_boss_angel_E8(rdram, ctx);
        goto after_0;
    // 0x4300874C: addiu       $a0, $zero, 0x118
    ctx->r4 = ADD32(0, 0X118);
    after_0:
    // 0x43008750: or          $s5, $v0, $zero
    ctx->r21 = ctx->r2 | 0;
    // 0x43008754: jal         0x4300B290
    // 0x43008758: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_boss_angel_B290(rdram, ctx);
        goto after_1;
    // 0x43008758: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x4300875C: sw          $v0, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r2;
    // 0x43008760: jal         0x4300B290
    // 0x43008764: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_boss_angel_B290(rdram, ctx);
        goto after_2;
    // 0x43008764: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x43008768: sw          $v0, 0x4($s5)
    MEM_W(0X4, ctx->r21) = ctx->r2;
    // 0x4300876C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x43008770: or          $s0, $s5, $zero
    ctx->r16 = ctx->r21 | 0;
    // 0x43008774: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_43008778:
    // 0x43008778: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x4300877C: sh          $v1, 0xC8($a0)
    MEM_H(0XC8, ctx->r4) = ctx->r3;
    // 0x43008780: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x43008784: slti        $at, $v1, 0xC
    ctx->r1 = SIGNED(ctx->r3) < 0XC ? 1 : 0;
    // 0x43008788: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x4300878C: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x43008790: bne         $at, $zero, L_43008778
    if (ctx->r1 != 0) {
        // 0x43008794: sh          $zero, 0xAE($a0)
        MEM_H(0XAE, ctx->r4) = 0;
            goto L_43008778;
    }
    // 0x43008794: sh          $zero, 0xAE($a0)
    MEM_H(0XAE, ctx->r4) = 0;
    // 0x43008798: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x4300879C: lui         $s1, 0x4301
    ctx->r17 = S32(0X4301 << 16);
    // 0x430087A0: lui         $s4, 0x4301
    ctx->r20 = S32(0X4301 << 16);
    // 0x430087A4: lui         $s3, 0x4301
    ctx->r19 = S32(0X4301 << 16);
    // 0x430087A8: lui         $s2, 0x4301
    ctx->r18 = S32(0X4301 << 16);
    // 0x430087AC: sw          $zero, 0xE0($s5)
    MEM_W(0XE0, ctx->r21) = 0;
    // 0x430087B0: sw          $t6, 0xF8($s5)
    MEM_W(0XF8, ctx->r21) = ctx->r14;
    // 0x430087B4: addiu       $s2, $s2, -0x43D4
    ctx->r18 = ADD32(ctx->r18, -0X43D4);
    // 0x430087B8: addiu       $s3, $s3, -0x4130
    ctx->r19 = ADD32(ctx->r19, -0X4130);
    // 0x430087BC: addiu       $s4, $s4, -0x43D8
    ctx->r20 = ADD32(ctx->r20, -0X43D8);
    // 0x430087C0: addiu       $s1, $s1, -0x43E0
    ctx->r17 = ADD32(ctx->r17, -0X43E0);
    // 0x430087C4: or          $s0, $s5, $zero
    ctx->r16 = ctx->r21 | 0;
L_430087C8:
    // 0x430087C8: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x430087CC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x430087D0: jal         0x43005E5C
    // 0x430087D4: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    ovl_boss_angel_5E5C(rdram, ctx);
        goto after_3;
    // 0x430087D4: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_3:
    // 0x430087D8: sw          $v0, 0xE4($s0)
    MEM_W(0XE4, ctx->r16) = ctx->r2;
    // 0x430087DC: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x430087E0: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x430087E4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x430087E8: bne         $s1, $s4, L_430087C8
    if (ctx->r17 != ctx->r20) {
        // 0x430087EC: sw          $t7, 0xE8($s0)
        MEM_W(0XE8, ctx->r16) = ctx->r15;
            goto L_430087C8;
    }
    // 0x430087EC: sw          $t7, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r15;
    // 0x430087F0: lui         $t8, 0x4301
    ctx->r24 = S32(0X4301 << 16);
    // 0x430087F4: lui         $t9, 0x4301
    ctx->r25 = S32(0X4301 << 16);
    // 0x430087F8: lui         $t0, 0x4301
    ctx->r8 = S32(0X4301 << 16);
    // 0x430087FC: addiu       $t8, $t8, -0x7A3C
    ctx->r24 = ADD32(ctx->r24, -0X7A3C);
    // 0x43008800: addiu       $t9, $t9, -0x7B54
    ctx->r25 = ADD32(ctx->r25, -0X7B54);
    // 0x43008804: addiu       $t0, $t0, -0x7B48
    ctx->r8 = ADD32(ctx->r8, -0X7B48);
    // 0x43008808: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x4300880C: sw          $zero, 0x108($s5)
    MEM_W(0X108, ctx->r21) = 0;
    // 0x43008810: sw          $zero, 0x104($s5)
    MEM_W(0X104, ctx->r21) = 0;
    // 0x43008814: sw          $t8, 0x10C($s5)
    MEM_W(0X10C, ctx->r21) = ctx->r24;
    // 0x43008818: sw          $t9, 0x110($s5)
    MEM_W(0X110, ctx->r21) = ctx->r25;
    // 0x4300881C: sw          $t0, 0x114($s5)
    MEM_W(0X114, ctx->r21) = ctx->r8;
    // 0x43008820: addiu       $a0, $a0, -0x7A64
    ctx->r4 = ADD32(ctx->r4, -0X7A64);
    // 0x43008824: jal         0x4300B300
    // 0x43008828: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    ovl_boss_angel_B300(rdram, ctx);
        goto after_4;
    // 0x43008828: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_4:
    // 0x4300882C: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x43008830: sw          $v0, 0x100($s5)
    MEM_W(0X100, ctx->r21) = ctx->r2;
    // 0x43008834: addiu       $a0, $a0, -0x7EA0
    ctx->r4 = ADD32(ctx->r4, -0X7EA0);
    // 0x43008838: ori         $a1, $zero, 0xFECF
    ctx->r5 = 0 | 0XFECF;
    // 0x4300883C: addiu       $a2, $zero, 0x2000
    ctx->r6 = ADD32(0, 0X2000);
    // 0x43008840: jal         0x43000820
    // 0x43008844: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_boss_angel_820(rdram, ctx);
        goto after_5;
    // 0x43008844: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
    // 0x43008848: sw          $v0, 0xFC($s5)
    MEM_W(0XFC, ctx->r21) = ctx->r2;
    // 0x4300884C: sw          $s5, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r21;
    // 0x43008850: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x43008854: or          $v0, $s5, $zero
    ctx->r2 = ctx->r21 | 0;
    // 0x43008858: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x4300885C: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x43008860: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x43008864: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x43008868: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x4300886C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x43008870: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x43008874: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x43008878: jr          $ra
    // 0x4300887C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x4300887C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_boss_angel_8880(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008880: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x43008884: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x43008888: sw          $s1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r17;
    // 0x4300888C: sw          $s0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r16;
    // 0x43008890: lw          $s0, 0x28($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X28);
    // 0x43008894: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43008898: lwc1        $f6, -0x4170($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X4170);
    // 0x4300889C: lwc1        $f2, 0x28($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X28);
    // 0x430088A0: addiu       $t7, $zero, 0x1E
    ctx->r15 = ADD32(0, 0X1E);
    // 0x430088A4: mul.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x430088A8: lwc1        $f4, 0x2C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x430088AC: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430088B0: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x430088B4: swc1        $f8, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f8.u32l;
    // 0x430088B8: lw          $t6, 0x20($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X20);
    // 0x430088BC: lwc1        $f18, -0x416C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X416C);
    // 0x430088C0: subu        $t8, $t7, $t6
    ctx->r24 = SUB32(ctx->r15, ctx->r14);
    // 0x430088C4: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x430088C8: add.s       $f12, $f2, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f4.fl;
    // 0x430088CC: lw          $a1, 0x18($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X18);
    // 0x430088D0: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x430088D4: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x430088D8: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    // 0x430088DC: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x430088E0: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    // 0x430088E4: sw          $a1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r5;
    // 0x430088E8: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x430088EC: nop

    // 0x430088F0: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x430088F4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x430088F8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x430088FC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x43008900: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x43008904: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x43008908: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x4300890C: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x43008910: cvt.d.s     $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.d = CVT_D_S(ctx->f12.fl);
    // 0x43008914: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x43008918: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x4300891C: swc1        $f11, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(11 - 1) * 2];
    // 0x43008920: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x43008924: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x43008928: swc1        $f1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x4300892C: jal         0x43000DC0
    // 0x43008930: swc1        $f1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    ovl_boss_angel_DC0(rdram, ctx);
        goto after_0;
    // 0x43008930: swc1        $f1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    after_0:
    // 0x43008934: lw          $t0, 0x20($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X20);
    // 0x43008938: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4300893C: slti        $at, $t0, 0x2
    ctx->r1 = SIGNED(ctx->r8) < 0X2 ? 1 : 0;
    // 0x43008940: beq         $at, $zero, L_430089FC
    if (ctx->r1 == 0) {
        // 0x43008944: addiu       $a1, $zero, 0x1DB
        ctx->r5 = ADD32(0, 0X1DB);
            goto L_430089FC;
    }
    // 0x43008944: addiu       $a1, $zero, 0x1DB
    ctx->r5 = ADD32(0, 0X1DB);
    // 0x43008948: lw          $t1, 0x3C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X3C);
    // 0x4300894C: addiu       $a2, $zero, 0x1DC
    ctx->r6 = ADD32(0, 0X1DC);
    // 0x43008950: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    // 0x43008954: jal         0x43008000
    // 0x43008958: sw          $t1, 0x54($s1)
    MEM_W(0X54, ctx->r17) = ctx->r9;
    ovl_boss_angel_8000(rdram, ctx);
        goto after_1;
    // 0x43008958: sw          $t1, 0x54($s1)
    MEM_W(0X54, ctx->r17) = ctx->r9;
    after_1:
    // 0x4300895C: lwc1        $f2, 0x2C($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x43008960: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x43008964: lw          $a1, 0x18($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X18);
    // 0x43008968: add.s       $f16, $f2, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f2.fl + ctx->f2.fl;
    // 0x4300896C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x43008970: cvt.d.s     $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.d = CVT_D_S(ctx->f2.fl);
    // 0x43008974: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x43008978: mfc1        $a2, $f1
    ctx->r6 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x4300897C: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x43008980: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    // 0x43008984: swc1        $f19, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(19 - 1) * 2];
    // 0x43008988: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x4300898C: swc1        $f1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x43008990: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x43008994: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x43008998: jal         0x43000DC0
    // 0x4300899C: swc1        $f2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f2.u32l;
    ovl_boss_angel_DC0(rdram, ctx);
        goto after_2;
    // 0x4300899C: swc1        $f2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f2.u32l;
    after_2:
    // 0x430089A0: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x430089A4: lwc1        $f2, 0x4C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x430089A8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x430089AC: lui         $a1, 0x4301
    ctx->r5 = S32(0X4301 << 16);
    // 0x430089B0: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x430089B4: addiu       $a1, $a1, -0x4130
    ctx->r5 = ADD32(ctx->r5, -0X4130);
    // 0x430089B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430089BC: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x430089C0: jal         0x43005E5C
    // 0x430089C4: nop

    ovl_boss_angel_5E5C(rdram, ctx);
        goto after_3;
    // 0x430089C4: nop

    after_3:
    // 0x430089C8: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x430089CC: lw          $t2, 0x54($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X54);
    // 0x430089D0: lui         $t3, 0x4301
    ctx->r11 = S32(0X4301 << 16);
    // 0x430089D4: lui         $t4, 0x4301
    ctx->r12 = S32(0X4301 << 16);
    // 0x430089D8: sw          $t2, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r10;
    // 0x430089DC: addiu       $t3, $t3, -0x759C
    ctx->r11 = ADD32(ctx->r11, -0X759C);
    // 0x430089E0: addiu       $t4, $t4, -0x75F0
    ctx->r12 = ADD32(ctx->r12, -0X75F0);
    // 0x430089E4: sw          $t3, 0x54($s1)
    MEM_W(0X54, ctx->r17) = ctx->r11;
    // 0x430089E8: sw          $s0, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->r16;
    // 0x430089EC: sw          $t4, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r12;
    // 0x430089F0: addiu       $a0, $zero, 0x33A
    ctx->r4 = ADD32(0, 0X33A);
    // 0x430089F4: jal         0x43000280
    // 0x430089F8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_boss_angel_280(rdram, ctx);
        goto after_4;
    // 0x430089F8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_4:
L_430089FC:
    // 0x430089FC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x43008A00: lw          $s0, 0x3C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X3C);
    // 0x43008A04: lw          $s1, 0x40($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X40);
    // 0x43008A08: jr          $ra
    // 0x43008A0C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x43008A0C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_boss_angel_8A10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008A10: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43008A14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43008A18: lw          $a1, 0x28($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X28);
    // 0x43008A1C: nop

    // 0x43008A20: lw          $a3, 0x1C($a1)
    ctx->r7 = MEM_W(ctx->r5, 0X1C);
    // 0x43008A24: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x43008A28: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x43008A2C: lw          $t9, 0x48($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X48);
    // 0x43008A30: nop

    // 0x43008A34: jalr        $t9
    // 0x43008A38: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43008A38: nop

    after_0:
    // 0x43008A3C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43008A40: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x43008A44: lw          $t9, 0x40($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X40);
    // 0x43008A48: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x43008A4C: jalr        $t9
    // 0x43008A50: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x43008A50: nop

    after_1:
    // 0x43008A54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43008A58: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x43008A5C: jr          $ra
    // 0x43008A60: nop

    return;
    // 0x43008A60: nop

;}
RECOMP_FUNC void ovl_boss_angel_8A64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008A64: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43008A68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43008A6C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x43008A70: lw          $a0, 0x28($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X28);
    // 0x43008A74: nop

    // 0x43008A78: lw          $t6, 0x3C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X3C);
    // 0x43008A7C: nop

    // 0x43008A80: sw          $t6, 0x54($a1)
    MEM_W(0X54, ctx->r5) = ctx->r14;
    // 0x43008A84: sw          $zero, 0x20($a0)
    MEM_W(0X20, ctx->r4) = 0;
    // 0x43008A88: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x43008A8C: lw          $t9, 0x38($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X38);
    // 0x43008A90: nop

    // 0x43008A94: jalr        $t9
    // 0x43008A98: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43008A98: nop

    after_0:
    // 0x43008A9C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43008AA0: nop

    // 0x43008AA4: lw          $t9, 0x54($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X54);
    // 0x43008AA8: nop

    // 0x43008AAC: jalr        $t9
    // 0x43008AB0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x43008AB0: nop

    after_1:
    // 0x43008AB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43008AB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43008ABC: jr          $ra
    // 0x43008AC0: nop

    return;
    // 0x43008AC0: nop

;}
RECOMP_FUNC void ovl_boss_angel_8AC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008AC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43008AC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43008ACC: lw          $a1, 0x20($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X20);
    // 0x43008AD0: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x43008AD4: beq         $a1, $zero, L_43008AF8
    if (ctx->r5 == 0) {
        // 0x43008AD8: nop
    
            goto L_43008AF8;
    }
    // 0x43008AD8: nop

    // 0x43008ADC: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x43008AE0: lw          $t9, 0x54($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X54);
    // 0x43008AE4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x43008AE8: jalr        $t9
    // 0x43008AEC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43008AEC: nop

    after_0:
    // 0x43008AF0: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x43008AF4: nop

L_43008AF8:
    // 0x43008AF8: lw          $a0, 0x1C($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X1C);
    // 0x43008AFC: nop

    // 0x43008B00: beq         $a0, $zero, L_43008B24
    if (ctx->r4 == 0) {
        // 0x43008B04: nop
    
            goto L_43008B24;
    }
    // 0x43008B04: nop

    // 0x43008B08: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x43008B0C: lw          $t9, 0x54($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X54);
    // 0x43008B10: nop

    // 0x43008B14: jalr        $t9
    // 0x43008B18: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x43008B18: nop

    after_1:
    // 0x43008B1C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x43008B20: nop

L_43008B24:
    // 0x43008B24: jal         0x430000F4
    // 0x43008B28: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    ovl_boss_angel_F4(rdram, ctx);
        goto after_2;
    // 0x43008B28: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_2:
    // 0x43008B2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43008B30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43008B34: jr          $ra
    // 0x43008B38: nop

    return;
    // 0x43008B38: nop

;}
RECOMP_FUNC void ovl_boss_angel_8B3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008B3C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x43008B40: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43008B44: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x43008B48: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x43008B4C: jal         0x430000E8
    // 0x43008B50: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    ovl_boss_angel_E8(rdram, ctx);
        goto after_0;
    // 0x43008B50: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    after_0:
    // 0x43008B54: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x43008B58: lwc1        $f0, 0x2C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x43008B5C: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x43008B60: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x43008B64: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x43008B68: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x43008B6C: addiu       $t1, $zero, 0x3C
    ctx->r9 = ADD32(0, 0X3C);
    // 0x43008B70: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x43008B74: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x43008B78: sw          $t1, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->r9;
    // 0x43008B7C: sw          $at, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r1;
    // 0x43008B80: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x43008B84: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x43008B88: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x43008B8C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x43008B90: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x43008B94: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x43008B98: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x43008B9C: swc1        $f0, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f0.u32l;
    // 0x43008BA0: swc1        $f18, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f18.u32l;
    // 0x43008BA4: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x43008BA8: swc1        $f4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f4.u32l;
    // 0x43008BAC: swc1        $f16, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f16.u32l;
    // 0x43008BB0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x43008BB4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x43008BB8: addiu       $a1, $zero, 0x76E
    ctx->r5 = ADD32(0, 0X76E);
    // 0x43008BBC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x43008BC0: jal         0x43008000
    // 0x43008BC4: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    ovl_boss_angel_8000(rdram, ctx);
        goto after_1;
    // 0x43008BC4: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    after_1:
    // 0x43008BC8: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x43008BCC: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    // 0x43008BD0: sw          $v0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r2;
    // 0x43008BD4: lw          $a1, 0x18($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X18);
    // 0x43008BD8: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x43008BDC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x43008BE0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x43008BE4: jal         0x43000DC0
    // 0x43008BE8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_boss_angel_DC0(rdram, ctx);
        goto after_2;
    // 0x43008BE8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x43008BEC: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x43008BF0: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x43008BF4: sw          $zero, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = 0;
    // 0x43008BF8: lw          $t2, 0x54($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X54);
    // 0x43008BFC: lui         $t3, 0x4301
    ctx->r11 = S32(0X4301 << 16);
    // 0x43008C00: sw          $t2, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r10;
    // 0x43008C04: lui         $t4, 0x4301
    ctx->r12 = S32(0X4301 << 16);
    // 0x43008C08: addiu       $t3, $t3, -0x759C
    ctx->r11 = ADD32(ctx->r11, -0X759C);
    // 0x43008C0C: addiu       $t4, $t4, -0x7780
    ctx->r12 = ADD32(ctx->r12, -0X7780);
    // 0x43008C10: lui         $t5, 0x4301
    ctx->r13 = S32(0X4301 << 16);
    // 0x43008C14: addiu       $t5, $t5, -0x753C
    ctx->r13 = ADD32(ctx->r13, -0X753C);
    // 0x43008C18: sw          $t3, 0x54($t0)
    MEM_W(0X54, ctx->r8) = ctx->r11;
    // 0x43008C1C: sw          $v0, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->r2;
    // 0x43008C20: sw          $t4, 0x30($t0)
    MEM_W(0X30, ctx->r8) = ctx->r12;
    // 0x43008C24: sw          $t5, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->r13;
    // 0x43008C28: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43008C2C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x43008C30: jr          $ra
    // 0x43008C34: nop

    return;
    // 0x43008C34: nop

    // 0x43008C38: nop

    // 0x43008C3C: nop

;}
RECOMP_FUNC void ovl_boss_angel_8C40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008C40: jr          $ra
    // 0x43008C44: nop

    return;
    // 0x43008C44: nop

    // 0x43008C48: jr          $ra
    // 0x43008C4C: nop

    return;
    // 0x43008C4C: nop

;}
RECOMP_FUNC void ovl_boss_angel_8C50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008C50: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x43008C54: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x43008C58: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x43008C5C: lwc1        $f10, 0x4($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X4);
    // 0x43008C60: lwc1        $f8, 0x4($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X4);
    // 0x43008C64: lwc1        $f6, 0x0($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X0);
    // 0x43008C68: lwc1        $f4, 0x0($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X0);
    // 0x43008C6C: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x43008C70: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43008C74: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x43008C78: swc1        $f16, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f16.u32l;
    // 0x43008C7C: lwc1        $f4, 0x8($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X8);
    // 0x43008C80: lwc1        $f18, 0x8($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X8);
    // 0x43008C84: mul.s       $f6, $f0, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x43008C88: sub.s       $f2, $f18, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x43008C8C: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x43008C90: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x43008C94: mul.s       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x43008C98: jal         0x4300B7E0
    // 0x43008C9C: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    ovl_boss_angel_B7E0(rdram, ctx);
        goto after_0;
    // 0x43008C9C: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    after_0:
    // 0x43008CA0: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    // 0x43008CA4: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x43008CA8: lw          $a2, 0x60($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X60);
    // 0x43008CAC: lwc1        $f10, 0x0($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X0);
    // 0x43008CB0: lwc1        $f18, 0x8($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X8);
    // 0x43008CB4: lwc1        $f16, 0x0($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X0);
    // 0x43008CB8: lwc1        $f4, 0x8($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X8);
    // 0x43008CBC: sub.s       $f12, $f10, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x43008CC0: jal         0x4300A504
    // 0x43008CC4: sub.s       $f14, $f18, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f18.fl - ctx->f4.fl;
    ovl_boss_angel_A504(rdram, ctx);
        goto after_1;
    // 0x43008CC4: sub.s       $f14, $f18, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f18.fl - ctx->f4.fl;
    after_1:
    // 0x43008CC8: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    // 0x43008CCC: swc1        $f0, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->f0.u32l;
    // 0x43008CD0: lwc1        $f14, 0x48($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X48);
    // 0x43008CD4: lwc1        $f12, 0x50($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X50);
    // 0x43008CD8: jal         0x4300A504
    // 0x43008CDC: nop

    ovl_boss_angel_A504(rdram, ctx);
        goto after_2;
    // 0x43008CDC: nop

    after_2:
    // 0x43008CE0: swc1        $f0, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->f0.u32l;
    // 0x43008CE4: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x43008CE8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x43008CEC: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x43008CF0: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
    // 0x43008CF4: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    // 0x43008CF8: lw          $t6, 0x34($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X34);
    // 0x43008CFC: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    // 0x43008D00: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x43008D04: sw          $a2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r6;
    // 0x43008D08: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x43008D0C: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    // 0x43008D10: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    // 0x43008D14: jal         0x43000DC0
    // 0x43008D18: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    ovl_boss_angel_DC0(rdram, ctx);
        goto after_3;
    // 0x43008D18: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_3:
    // 0x43008D1C: lw          $t7, 0x34($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X34);
    // 0x43008D20: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    // 0x43008D24: addiu       $a2, $s0, 0x4C
    ctx->r6 = ADD32(ctx->r16, 0X4C);
    // 0x43008D28: sw          $a2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r6;
    // 0x43008D2C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x43008D30: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    // 0x43008D34: addiu       $a3, $zero, 0x13
    ctx->r7 = ADD32(0, 0X13);
    // 0x43008D38: jal         0x43000DC0
    // 0x43008D3C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    ovl_boss_angel_DC0(rdram, ctx);
        goto after_4;
    // 0x43008D3C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_4:
    // 0x43008D40: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x43008D44: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x43008D48: jr          $ra
    // 0x43008D4C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x43008D4C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_boss_angel_8D50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008D50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43008D54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43008D58: lw          $at, 0x0($a1)
    ctx->r1 = MEM_W(ctx->r5, 0X0);
    // 0x43008D5C: addiu       $a2, $a0, 0xC
    ctx->r6 = ADD32(ctx->r4, 0XC);
    // 0x43008D60: sw          $at, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r1;
    // 0x43008D64: lw          $t8, 0x4($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X4);
    // 0x43008D68: nop

    // 0x43008D6C: sw          $t8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r24;
    // 0x43008D70: lw          $at, 0x8($a1)
    ctx->r1 = MEM_W(ctx->r5, 0X8);
    // 0x43008D74: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x43008D78: jal         0x43008C50
    // 0x43008D7C: sw          $at, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r1;
    ovl_boss_angel_8C50(rdram, ctx);
        goto after_0;
    // 0x43008D7C: sw          $at, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r1;
    after_0:
    // 0x43008D80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43008D84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43008D88: jr          $ra
    // 0x43008D8C: nop

    return;
    // 0x43008D8C: nop

;}
RECOMP_FUNC void ovl_boss_angel_8D90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008D90: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x43008D94: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43008D98: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43008D9C: lw          $t7, 0x44($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X44);
    // 0x43008DA0: lw          $t6, 0x40($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X40);
    // 0x43008DA4: lwc1        $f4, 0x18($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X18);
    // 0x43008DA8: subu        $v0, $t6, $t7
    ctx->r2 = SUB32(ctx->r14, ctx->r15);
    // 0x43008DAC: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x43008DB0: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x43008DB4: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x43008DB8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x43008DBC: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x43008DC0: mul.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x43008DC4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43008DC8: addiu       $a1, $zero, 0x785
    ctx->r5 = ADD32(0, 0X785);
    // 0x43008DCC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x43008DD0: div.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x43008DD4: bne         $v0, $at, L_43008E6C
    if (ctx->r2 != ctx->r1) {
        // 0x43008DD8: swc1        $f18, 0x54($a0)
        MEM_W(0X54, ctx->r4) = ctx->f18.u32l;
            goto L_43008E6C;
    }
    // 0x43008DD8: swc1        $f18, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->f18.u32l;
    // 0x43008DDC: lw          $t8, 0x48($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X48);
    // 0x43008DE0: addiu       $a3, $zero, 0xD
    ctx->r7 = ADD32(0, 0XD);
    // 0x43008DE4: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x43008DE8: jal         0x43008000
    // 0x43008DEC: sw          $t9, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->r25;
    ovl_boss_angel_8000(rdram, ctx);
        goto after_0;
    // 0x43008DEC: sw          $t9, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->r25;
    after_0:
    // 0x43008DF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008DF4: addiu       $a1, $zero, 0xA38
    ctx->r5 = ADD32(0, 0XA38);
    // 0x43008DF8: addiu       $a2, $zero, 0xA38
    ctx->r6 = ADD32(0, 0XA38);
    // 0x43008DFC: jal         0x43008000
    // 0x43008E00: addiu       $a3, $zero, 0xF
    ctx->r7 = ADD32(0, 0XF);
    ovl_boss_angel_8000(rdram, ctx);
        goto after_1;
    // 0x43008E00: addiu       $a3, $zero, 0xF
    ctx->r7 = ADD32(0, 0XF);
    after_1:
    // 0x43008E04: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x43008E08: lw          $t9, 0x38($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X38);
    // 0x43008E0C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x43008E10: jalr        $t9
    // 0x43008E14: addiu       $a1, $zero, 0xA39
    ctx->r5 = ADD32(0, 0XA39);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x43008E14: addiu       $a1, $zero, 0xA39
    ctx->r5 = ADD32(0, 0XA39);
    after_2:
    // 0x43008E18: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43008E1C: lwc1        $f6, 0x5C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X5C);
    // 0x43008E20: lwc1        $f9, -0x4160($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X4160);
    // 0x43008E24: lwc1        $f8, -0x415C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X415C);
    // 0x43008E28: cvt.d.s     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f4.d = CVT_D_S(ctx->f6.fl);
    // 0x43008E2C: add.d       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f4.d + ctx->f8.d;
    // 0x43008E30: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x43008E34: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43008E38: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x43008E3C: lw          $t9, 0x4C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X4C);
    // 0x43008E40: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x43008E44: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x43008E48: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x43008E4C: jalr        $t9
    // 0x43008E50: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x43008E50: nop

    after_3:
    // 0x43008E54: lui         $a1, 0x4301
    ctx->r5 = S32(0X4301 << 16);
    // 0x43008E58: addiu       $a1, $a1, -0x4130
    ctx->r5 = ADD32(ctx->r5, -0X4130);
    // 0x43008E5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008E60: jal         0x43005E5C
    // 0x43008E64: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    ovl_boss_angel_5E5C(rdram, ctx);
        goto after_4;
    // 0x43008E64: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    after_4:
    // 0x43008E68: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
L_43008E6C:
    // 0x43008E6C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43008E70: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43008E74: jr          $ra
    // 0x43008E78: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x43008E78: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_boss_angel_8E7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008E7C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43008E80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43008E84: lw          $v1, 0x44($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X44);
    // 0x43008E88: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x43008E8C: slti        $at, $v1, 0xE
    ctx->r1 = SIGNED(ctx->r3) < 0XE ? 1 : 0;
    // 0x43008E90: beq         $at, $zero, L_43008EF8
    if (ctx->r1 == 0) {
        // 0x43008E94: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43008EF8;
    }
    // 0x43008E94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43008E98: lw          $t6, 0x40($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X40);
    // 0x43008E9C: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x43008EA0: subu        $v0, $t6, $v1
    ctx->r2 = SUB32(ctx->r14, ctx->r3);
    // 0x43008EA4: bne         $v0, $at, L_43008ED0
    if (ctx->r2 != ctx->r1) {
        // 0x43008EA8: nop
    
            goto L_43008ED0;
    }
    // 0x43008EA8: nop

    // 0x43008EAC: lw          $a0, 0x1C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1C);
    // 0x43008EB0: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x43008EB4: lw          $t9, 0x54($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X54);
    // 0x43008EB8: nop

    // 0x43008EBC: jalr        $t9
    // 0x43008EC0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43008EC0: nop

    after_0:
    // 0x43008EC4: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x43008EC8: nop

    // 0x43008ECC: sw          $zero, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = 0;
L_43008ED0:
    // 0x43008ED0: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43008ED4: lwc1        $f0, -0x4158($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X4158);
    // 0x43008ED8: lwc1        $f4, 0x4C($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X4C);
    // 0x43008EDC: lwc1        $f8, 0x50($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X50);
    // 0x43008EE0: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x43008EE4: nop

    // 0x43008EE8: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x43008EEC: swc1        $f6, 0x4C($a1)
    MEM_W(0X4C, ctx->r5) = ctx->f6.u32l;
    // 0x43008EF0: swc1        $f10, 0x50($a1)
    MEM_W(0X50, ctx->r5) = ctx->f10.u32l;
    // 0x43008EF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008EF8:
    // 0x43008EF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43008EFC: jr          $ra
    // 0x43008F00: nop

    return;
    // 0x43008F00: nop

;}
RECOMP_FUNC void ovl_boss_angel_8F04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008F04: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x43008F08: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x43008F0C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x43008F10: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x43008F14: jal         0x43000868
    // 0x43008F18: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    ovl_boss_angel_868(rdram, ctx);
        goto after_0;
    // 0x43008F18: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x43008F1C: lui         $s2, 0x4301
    ctx->r18 = S32(0X4301 << 16);
    // 0x43008F20: lw          $s0, 0x1C($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X1C);
    // 0x43008F24: addiu       $s2, $s2, -0x43C0
    ctx->r18 = ADD32(ctx->r18, -0X43C0);
    // 0x43008F28: lw          $t6, 0x44($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X44);
L_43008F2C:
    // 0x43008F2C: nop

    // 0x43008F30: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x43008F34: blez        $t7, L_43008F7C
    if (SIGNED(ctx->r15) <= 0) {
        // 0x43008F38: sw          $t7, 0x44($s0)
        MEM_W(0X44, ctx->r16) = ctx->r15;
            goto L_43008F7C;
    }
    // 0x43008F38: sw          $t7, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r15;
    // 0x43008F3C: lw          $t9, 0x48($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X48);
    // 0x43008F40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008F44: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x43008F48: addu        $t1, $s2, $t0
    ctx->r9 = ADD32(ctx->r18, ctx->r8);
    // 0x43008F4C: lw          $t9, 0x0($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X0);
    // 0x43008F50: addiu       $s1, $s0, 0xC
    ctx->r17 = ADD32(ctx->r16, 0XC);
    // 0x43008F54: jalr        $t9
    // 0x43008F58: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x43008F58: nop

    after_1:
    // 0x43008F5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008F60: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x43008F64: jal         0x43008C50
    // 0x43008F68: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_boss_angel_8C50(rdram, ctx);
        goto after_2;
    // 0x43008F68: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_2:
    // 0x43008F6C: jal         0x4300A1D8
    // 0x43008F70: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_boss_angel_A1D8(rdram, ctx);
        goto after_3;
    // 0x43008F70: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x43008F74: b           L_43008F2C
    // 0x43008F78: lw          $t6, 0x44($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X44);
        goto L_43008F2C;
    // 0x43008F78: lw          $t6, 0x44($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X44);
L_43008F7C:
    // 0x43008F7C: lw          $a0, 0x68($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X68);
    // 0x43008F80: jal         0x4300B358
    // 0x43008F84: nop

    ovl_boss_angel_B358(rdram, ctx);
        goto after_4;
    // 0x43008F84: nop

    after_4:
    // 0x43008F88: lw          $t9, 0x64($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X64);
    // 0x43008F8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008F90: jalr        $t9
    // 0x43008F94: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x43008F94: nop

    after_5:
    // 0x43008F98: jal         0x43000838
    // 0x43008F9C: nop

    ovl_boss_angel_838(rdram, ctx);
        goto after_6;
    // 0x43008F9C: nop

    after_6:
    // 0x43008FA0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43008FA4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43008FA8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x43008FAC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x43008FB0: jr          $ra
    // 0x43008FB4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x43008FB4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_boss_angel_8FB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008FB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43008FBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43008FC0: jal         0x43000868
    // 0x43008FC4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_boss_angel_868(rdram, ctx);
        goto after_0;
    // 0x43008FC4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x43008FC8: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x43008FCC: nop

    // 0x43008FD0: lw          $a0, 0x20($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X20);
    // 0x43008FD4: nop

    // 0x43008FD8: beq         $v0, $a0, L_43008FF0
    if (ctx->r2 == ctx->r4) {
        // 0x43008FDC: nop
    
            goto L_43008FF0;
    }
    // 0x43008FDC: nop

    // 0x43008FE0: jal         0x4300082C
    // 0x43008FE4: nop

    ovl_boss_angel_82C(rdram, ctx);
        goto after_1;
    // 0x43008FE4: nop

    after_1:
    // 0x43008FE8: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x43008FEC: nop

L_43008FF0:
    // 0x43008FF0: lw          $t9, 0x64($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X64);
    // 0x43008FF4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x43008FF8: jalr        $t9
    // 0x43008FFC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x43008FFC: nop

    after_2:
    // 0x43009000: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43009004: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43009008: jr          $ra
    // 0x4300900C: nop

    return;
    // 0x4300900C: nop

;}
RECOMP_FUNC void ovl_boss_angel_9010(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43009010: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x43009014: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x43009018: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x4300901C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x43009020: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x43009024: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x43009028: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x4300902C: lw          $a3, 0x34($s3)
    ctx->r7 = MEM_W(ctx->r19, 0X34);
    // 0x43009030: lw          $a1, 0x30($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X30);
    // 0x43009034: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x43009038: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x4300903C: jal         0x43000DC0
    // 0x43009040: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    ovl_boss_angel_DC0(rdram, ctx);
        goto after_0;
    // 0x43009040: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_0:
    // 0x43009044: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x43009048: or          $s1, $s3, $zero
    ctx->r17 = ctx->r19 | 0;
    // 0x4300904C: addiu       $s2, $zero, 0xC
    ctx->r18 = ADD32(0, 0XC);
L_43009050:
    // 0x43009050: lw          $a0, 0x24($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X24);
    // 0x43009054: jal         0x4300B2BC
    // 0x43009058: nop

    ovl_boss_angel_B2BC(rdram, ctx);
        goto after_1;
    // 0x43009058: nop

    after_1:
    // 0x4300905C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x43009060: bne         $s0, $s2, L_43009050
    if (ctx->r16 != ctx->r18) {
        // 0x43009064: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_43009050;
    }
    // 0x43009064: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x43009068: lw          $a0, 0x1C($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X1C);
    // 0x4300906C: nop

    // 0x43009070: beq         $a0, $zero, L_4300908C
    if (ctx->r4 == 0) {
        // 0x43009074: nop
    
            goto L_4300908C;
    }
    // 0x43009074: nop

    // 0x43009078: lw          $t9, 0x54($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X54);
    // 0x4300907C: nop

    // 0x43009080: jalr        $t9
    // 0x43009084: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x43009084: nop

    after_2:
    // 0x43009088: sw          $zero, 0x1C($s3)
    MEM_W(0X1C, ctx->r19) = 0;
L_4300908C:
    // 0x4300908C: jal         0x430000F4
    // 0x43009090: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    ovl_boss_angel_F4(rdram, ctx);
        goto after_3;
    // 0x43009090: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_3:
    // 0x43009094: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x43009098: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x4300909C: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x430090A0: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x430090A4: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x430090A8: jr          $ra
    // 0x430090AC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x430090AC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_boss_angel_90B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430090B0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x430090B4: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x430090B8: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x430090BC: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x430090C0: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x430090C4: subu        $t8, $t7, $v0
    ctx->r24 = SUB32(ctx->r15, ctx->r2);
    // 0x430090C8: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x430090CC: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x430090D0: cvt.s.w     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = CVT_S_W(ctx->f4.u32l);
    // 0x430090D4: lw          $a1, 0x18($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X18);
    // 0x430090D8: sll         $a2, $v0, 5
    ctx->r6 = S32(ctx->r2 << 5);
    // 0x430090DC: cvt.d.s     $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.d = CVT_D_S(ctx->f2.fl);
    // 0x430090E0: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x430090E4: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x430090E8: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x430090EC: swc1        $f1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x430090F0: swc1        $f1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x430090F4: swc1        $f1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x430090F8: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x430090FC: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    // 0x43009100: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    // 0x43009104: subu        $a2, $a2, $v0
    ctx->r6 = SUB32(ctx->r6, ctx->r2);
    // 0x43009108: jal         0x43000DC0
    // 0x4300910C: sw          $a1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r5;
    ovl_boss_angel_DC0(rdram, ctx);
        goto after_0;
    // 0x4300910C: sw          $a1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r5;
    after_0:
    // 0x43009110: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x43009114: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x43009118: jr          $ra
    // 0x4300911C: nop

    return;
    // 0x4300911C: nop

;}
RECOMP_FUNC void ovl_boss_angel_9120(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43009120: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x43009124: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43009128: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x4300912C: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x43009130: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x43009134: addiu       $a1, $zero, 0x9FB
    ctx->r5 = ADD32(0, 0X9FB);
    // 0x43009138: jal         0x43008000
    // 0x4300913C: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    ovl_boss_angel_8000(rdram, ctx);
        goto after_0;
    // 0x4300913C: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    after_0:
    // 0x43009140: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x43009144: lw          $t9, 0x4C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4C);
    // 0x43009148: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x4300914C: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x43009150: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x43009154: jalr        $t9
    // 0x43009158: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x43009158: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_1:
    // 0x4300915C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x43009160: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    // 0x43009164: lw          $a1, 0x18($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X18);
    // 0x43009168: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x4300916C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x43009170: jal         0x43000DC0
    // 0x43009174: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    ovl_boss_angel_DC0(rdram, ctx);
        goto after_2;
    // 0x43009174: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_2:
    // 0x43009178: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x4300917C: lui         $t7, 0x4301
    ctx->r15 = S32(0X4301 << 16);
    // 0x43009180: addiu       $t7, $t7, -0x6F50
    ctx->r15 = ADD32(ctx->r15, -0X6F50);
    // 0x43009184: sw          $t7, 0x30($t8)
    MEM_W(0X30, ctx->r24) = ctx->r15;
    // 0x43009188: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4300918C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x43009190: jr          $ra
    // 0x43009194: nop

    return;
    // 0x43009194: nop

;}
RECOMP_FUNC void ovl_boss_angel_9198(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43009198: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x4300919C: lui         $t7, 0x4301
    ctx->r15 = S32(0X4301 << 16);
    // 0x430091A0: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x430091A4: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x430091A8: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x430091AC: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x430091B0: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x430091B4: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x430091B8: sw          $a1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r5;
    // 0x430091BC: sw          $a2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r6;
    // 0x430091C0: addiu       $t7, $t7, -0x43B8
    ctx->r15 = ADD32(ctx->r15, -0X43B8);
    // 0x430091C4: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x430091C8: addiu       $t6, $sp, 0x70
    ctx->r14 = ADD32(ctx->r29, 0X70);
    // 0x430091CC: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x430091D0: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x430091D4: lw          $t0, 0x4($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X4);
    // 0x430091D8: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x430091DC: addiu       $a0, $zero, 0x6C
    ctx->r4 = ADD32(0, 0X6C);
    // 0x430091E0: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x430091E4: jal         0x430000E8
    // 0x430091E8: sw          $t0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r8;
    ovl_boss_angel_E8(rdram, ctx);
        goto after_0;
    // 0x430091E8: sw          $t0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r8;
    after_0:
    // 0x430091EC: lui         $s0, 0x4301
    ctx->r16 = S32(0X4301 << 16);
    // 0x430091F0: lui         $s3, 0x4301
    ctx->r19 = S32(0X4301 << 16);
    // 0x430091F4: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x430091F8: addiu       $s3, $s3, -0x43A0
    ctx->r19 = ADD32(ctx->r19, -0X43A0);
    // 0x430091FC: addiu       $s0, $s0, -0x43AC
    ctx->r16 = ADD32(ctx->r16, -0X43AC);
    // 0x43009200: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
L_43009204:
    // 0x43009204: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x43009208: jal         0x4300B290
    // 0x4300920C: nop

    ovl_boss_angel_B290(rdram, ctx);
        goto after_1;
    // 0x4300920C: nop

    after_1:
    // 0x43009210: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x43009214: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x43009218: bne         $s0, $s3, L_43009204
    if (ctx->r16 != ctx->r19) {
        // 0x4300921C: sw          $v0, 0x20($s1)
        MEM_W(0X20, ctx->r17) = ctx->r2;
            goto L_43009204;
    }
    // 0x4300921C: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x43009220: lw          $a2, 0x24($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X24);
    // 0x43009224: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x43009228: addiu       $t2, $s2, 0x34
    ctx->r10 = ADD32(ctx->r18, 0X34);
    // 0x4300922C: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x43009230: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x43009234: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x43009238: lw          $t3, 0x28($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X28);
    // 0x4300923C: addiu       $t4, $zero, 0x1D
    ctx->r12 = ADD32(0, 0X1D);
    // 0x43009240: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x43009244: addiu       $t9, $zero, 0x7F
    ctx->r25 = ADD32(0, 0X7F);
    // 0x43009248: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x4300924C: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x43009250: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x43009254: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x43009258: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x4300925C: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x43009260: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x43009264: addiu       $a1, $s2, 0x30
    ctx->r5 = ADD32(ctx->r18, 0X30);
    // 0x43009268: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x4300926C: jal         0x43000DC0
    // 0x43009270: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    ovl_boss_angel_DC0(rdram, ctx);
        goto after_2;
    // 0x43009270: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    after_2:
    // 0x43009274: lw          $a2, 0x30($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X30);
    // 0x43009278: addiu       $a1, $s2, 0x38
    ctx->r5 = ADD32(ctx->r18, 0X38);
    // 0x4300927C: addiu       $t8, $zero, 0x2B
    ctx->r24 = ADD32(0, 0X2B);
    // 0x43009280: addiu       $t6, $s2, 0x24
    ctx->r14 = ADD32(ctx->r18, 0X24);
    // 0x43009284: addiu       $t7, $zero, 0x11
    ctx->r15 = ADD32(0, 0X11);
    // 0x43009288: addiu       $t0, $zero, 0x11
    ctx->r8 = ADD32(0, 0X11);
    // 0x4300928C: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x43009290: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x43009294: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x43009298: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x4300929C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x430092A0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x430092A4: sw          $a2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r6;
    // 0x430092A8: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    // 0x430092AC: lw          $t1, 0x34($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X34);
    // 0x430092B0: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x430092B4: sw          $s4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r20;
    // 0x430092B8: addiu       $a0, $zero, 0x2A
    ctx->r4 = ADD32(0, 0X2A);
    // 0x430092BC: addiu       $a3, $s2, 0x2C
    ctx->r7 = ADD32(ctx->r18, 0X2C);
    // 0x430092C0: jal         0x43000DC0
    // 0x430092C4: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    ovl_boss_angel_DC0(rdram, ctx);
        goto after_3;
    // 0x430092C4: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    after_3:
    // 0x430092C8: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    // 0x430092CC: lw          $v0, 0x88($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X88);
    // 0x430092D0: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x430092D4: addiu       $a0, $s2, 0xC
    ctx->r4 = ADD32(ctx->r18, 0XC);
    // 0x430092D8: sw          $at, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r1;
    // 0x430092DC: lw          $t4, 0x4($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X4);
    // 0x430092E0: addiu       $t8, $sp, 0x70
    ctx->r24 = ADD32(ctx->r29, 0X70);
    // 0x430092E4: sw          $t4, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r12;
    // 0x430092E8: lw          $at, 0x8($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X8);
    // 0x430092EC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x430092F0: sw          $at, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r1;
    // 0x430092F4: lw          $at, 0x0($s4)
    ctx->r1 = MEM_W(ctx->r20, 0X0);
    // 0x430092F8: nop

    // 0x430092FC: sw          $at, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r1;
    // 0x43009300: lw          $t9, 0x4($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X4);
    // 0x43009304: nop

    // 0x43009308: sw          $t9, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r25;
    // 0x4300930C: lw          $at, 0x8($s4)
    ctx->r1 = MEM_W(ctx->r20, 0X8);
    // 0x43009310: nop

    // 0x43009314: sw          $at, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r1;
    // 0x43009318: sw          $v0, 0x40($s2)
    MEM_W(0X40, ctx->r18) = ctx->r2;
    // 0x4300931C: sw          $v0, 0x44($s2)
    MEM_W(0X44, ctx->r18) = ctx->r2;
    // 0x43009320: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x43009324: nop

    // 0x43009328: sw          $at, 0x4C($s2)
    MEM_W(0X4C, ctx->r18) = ctx->r1;
    // 0x4300932C: lw          $t7, 0x4($t8)
    ctx->r15 = MEM_W(ctx->r24, 0X4);
    // 0x43009330: nop

    // 0x43009334: sw          $t7, 0x50($s2)
    MEM_W(0X50, ctx->r18) = ctx->r15;
    // 0x43009338: lw          $at, 0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X8);
    // 0x4300933C: jal         0x4300A3F8
    // 0x43009340: sw          $at, 0x54($s2)
    MEM_W(0X54, ctx->r18) = ctx->r1;
    ovl_boss_angel_A3F8(rdram, ctx);
        goto after_4;
    // 0x43009340: sw          $at, 0x54($s2)
    MEM_W(0X54, ctx->r18) = ctx->r1;
    after_4:
    // 0x43009344: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43009348: lwc1        $f4, -0x4154($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X4154);
    // 0x4300934C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x43009350: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x43009354: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x43009358: swc1        $f6, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->f6.u32l;
    // 0x4300935C: lw          $a1, 0x84($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X84);
    // 0x43009360: jal         0x43008C50
    // 0x43009364: nop

    ovl_boss_angel_8C50(rdram, ctx);
        goto after_5;
    // 0x43009364: nop

    after_5:
    // 0x43009368: lw          $a1, 0x58($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X58);
    // 0x4300936C: lw          $a2, 0x5C($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X5C);
    // 0x43009370: jal         0x43009120
    // 0x43009374: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    ovl_boss_angel_9120(rdram, ctx);
        goto after_6;
    // 0x43009374: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_6:
    // 0x43009378: lui         $t0, 0x4301
    ctx->r8 = S32(0X4301 << 16);
    // 0x4300937C: lui         $t1, 0x4301
    ctx->r9 = S32(0X4301 << 16);
    // 0x43009380: addiu       $t0, $t0, -0x72B0
    ctx->r8 = ADD32(ctx->r8, -0X72B0);
    // 0x43009384: addiu       $t1, $t1, -0x6FF0
    ctx->r9 = ADD32(ctx->r9, -0X6FF0);
    // 0x43009388: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x4300938C: sw          $zero, 0x48($s2)
    MEM_W(0X48, ctx->r18) = 0;
    // 0x43009390: sw          $t0, 0x60($s2)
    MEM_W(0X60, ctx->r18) = ctx->r8;
    // 0x43009394: sw          $t1, 0x64($s2)
    MEM_W(0X64, ctx->r18) = ctx->r9;
    // 0x43009398: sw          $zero, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = 0;
    // 0x4300939C: addiu       $a0, $a0, -0x7048
    ctx->r4 = ADD32(ctx->r4, -0X7048);
    // 0x430093A0: jal         0x4300B300
    // 0x430093A4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    ovl_boss_angel_B300(rdram, ctx);
        goto after_7;
    // 0x430093A4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_7:
    // 0x430093A8: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x430093AC: sw          $v0, 0x68($s2)
    MEM_W(0X68, ctx->r18) = ctx->r2;
    // 0x430093B0: addiu       $a0, $a0, -0x70FC
    ctx->r4 = ADD32(ctx->r4, -0X70FC);
    // 0x430093B4: ori         $a1, $zero, 0xFECF
    ctx->r5 = 0 | 0XFECF;
    // 0x430093B8: addiu       $a2, $zero, 0x2000
    ctx->r6 = ADD32(0, 0X2000);
    // 0x430093BC: jal         0x43000820
    // 0x430093C0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_boss_angel_820(rdram, ctx);
        goto after_8;
    // 0x430093C0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_8:
    // 0x430093C4: sw          $v0, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->r2;
    // 0x430093C8: sw          $s2, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r18;
    // 0x430093CC: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x430093D0: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x430093D4: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x430093D8: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x430093DC: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x430093E0: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x430093E4: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x430093E8: jr          $ra
    // 0x430093EC: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x430093EC: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void ovl_boss_angel_93F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430093F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x430093F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430093F8: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x430093FC: lw          $a2, 0x24($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X24);
    // 0x43009400: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x43009404: bne         $a1, $at, L_43009420
    if (ctx->r5 != ctx->r1) {
        // 0x43009408: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43009420;
    }
    // 0x43009408: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4300940C: lw          $t9, 0x30($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X30);
    // 0x43009410: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x43009414: jalr        $t9
    // 0x43009418: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43009418: nop

    after_0:
    // 0x4300941C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43009420:
    // 0x43009420: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43009424: jr          $ra
    // 0x43009428: nop

    return;
    // 0x43009428: nop

;}
RECOMP_FUNC void ovl_boss_angel_942C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300942C: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x43009430: jr          $ra
    // 0x43009434: sw          $t6, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r14;
    return;
    // 0x43009434: sw          $t6, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void ovl_boss_angel_9438(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43009438: jr          $ra
    // 0x4300943C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x4300943C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void ovl_boss_angel_9440(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43009440: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43009444: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43009448: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x4300944C: lw          $t6, 0x10($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X10);
    // 0x43009450: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x43009454: beq         $t6, $at, L_4300946C
    if (ctx->r14 == ctx->r1) {
        // 0x43009458: or          $s0, $a0, $zero
        ctx->r16 = ctx->r4 | 0;
            goto L_4300946C;
    }
    // 0x43009458: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4300945C: addiu       $a0, $zero, 0x38
    ctx->r4 = ADD32(0, 0X38);
    // 0x43009460: addiu       $a1, $s0, 0x10
    ctx->r5 = ADD32(ctx->r16, 0X10);
    // 0x43009464: jal         0x43000DC0
    // 0x43009468: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_boss_angel_DC0(rdram, ctx);
        goto after_0;
    // 0x43009468: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
L_4300946C:
    // 0x4300946C: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x43009470: nop

    // 0x43009474: beq         $a0, $zero, L_4300948C
    if (ctx->r4 == 0) {
        // 0x43009478: nop
    
            goto L_4300948C;
    }
    // 0x43009478: nop

    // 0x4300947C: lw          $t9, 0x54($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X54);
    // 0x43009480: nop

    // 0x43009484: jalr        $t9
    // 0x43009488: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x43009488: nop

    after_1:
L_4300948C:
    // 0x4300948C: jal         0x43000868
    // 0x43009490: nop

    ovl_boss_angel_868(rdram, ctx);
        goto after_2;
    // 0x43009490: nop

    after_2:
    // 0x43009494: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    // 0x43009498: nop

    // 0x4300949C: beq         $v0, $a0, L_430094B8
    if (ctx->r2 == ctx->r4) {
        // 0x430094A0: nop
    
            goto L_430094B8;
    }
    // 0x430094A0: nop

    // 0x430094A4: jal         0x4300082C
    // 0x430094A8: nop

    ovl_boss_angel_82C(rdram, ctx);
        goto after_3;
    // 0x430094A8: nop

    after_3:
    // 0x430094AC: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    // 0x430094B0: jal         0x4300B358
    // 0x430094B4: nop

    ovl_boss_angel_B358(rdram, ctx);
        goto after_4;
    // 0x430094B4: nop

    after_4:
L_430094B8:
    // 0x430094B8: jal         0x430000F4
    // 0x430094BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_boss_angel_F4(rdram, ctx);
        goto after_5;
    // 0x430094BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x430094C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x430094C4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x430094C8: jr          $ra
    // 0x430094CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x430094CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_boss_angel_94D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430094D0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x430094D4: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x430094D8: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x430094DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430094E0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x430094E4: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x430094E8: jal         0x4300A438
    // 0x430094EC: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    ovl_boss_angel_A438(rdram, ctx);
        goto after_0;
    // 0x430094EC: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    after_0:
    // 0x430094F0: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x430094F4: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x430094F8: beq         $a3, $zero, L_43009530
    if (ctx->r7 == 0) {
        // 0x430094FC: nop
    
            goto L_43009530;
    }
    // 0x430094FC: nop

    // 0x43009500: swc1        $f4, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f4.u32l;
    // 0x43009504: lwc1        $f8, 0x0($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X0);
    // 0x43009508: mtc1        $zero, $f7
    ctx->f_odd[(7 - 1) * 2] = 0;
    // 0x4300950C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x43009510: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x43009514: c.eq.d      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.d == ctx->f10.d;
    // 0x43009518: nop

    // 0x4300951C: bc1f        L_43009530
    if (!c1cs) {
        // 0x43009520: nop
    
            goto L_43009530;
    }
    // 0x43009520: nop

    // 0x43009524: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43009528: b           L_4300954C
    // 0x4300952C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4300954C;
    // 0x4300952C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43009530:
    // 0x43009530: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    // 0x43009534: lwc1        $f14, 0x24($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
    // 0x43009538: jal         0x4300A504
    // 0x4300953C: nop

    ovl_boss_angel_A504(rdram, ctx);
        goto after_1;
    // 0x4300953C: nop

    after_1:
    // 0x43009540: jal         0x4300A8B4
    // 0x43009544: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    ovl_boss_angel_A8B4(rdram, ctx);
        goto after_2;
    // 0x43009544: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_2:
    // 0x43009548: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4300954C:
    // 0x4300954C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x43009550: jr          $ra
    // 0x43009554: nop

    return;
    // 0x43009554: nop

;}
RECOMP_FUNC void ovl_boss_angel_9558(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43009558: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x4300955C: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x43009560: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x43009564: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x43009568: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x4300956C: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x43009570: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x43009574: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x43009578: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x4300957C: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x43009580: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x43009584: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x43009588: jal         0x43000868
    // 0x4300958C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    ovl_boss_angel_868(rdram, ctx);
        goto after_0;
    // 0x4300958C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x43009590: lw          $s1, 0x1C($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X1C);
    // 0x43009594: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x43009598: addiu       $s3, $sp, 0x58
    ctx->r19 = ADD32(ctx->r29, 0X58);
    // 0x4300959C: addiu       $s4, $s1, 0x10
    ctx->r20 = ADD32(ctx->r17, 0X10);
L_430095A0:
    // 0x430095A0: jal         0x4300A1D8
    // 0x430095A4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_boss_angel_A1D8(rdram, ctx);
        goto after_1;
    // 0x430095A4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x430095A8: lw          $v0, 0x1C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1C);
    // 0x430095AC: nop

    // 0x430095B0: bltz        $v0, L_430096D8
    if (SIGNED(ctx->r2) < 0) {
        // 0x430095B4: addiu       $t6, $v0, 0x1
        ctx->r14 = ADD32(ctx->r2, 0X1);
            goto L_430096D8;
    }
    // 0x430095B4: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x430095B8: slti        $at, $t6, 0x4B
    ctx->r1 = SIGNED(ctx->r14) < 0X4B ? 1 : 0;
    // 0x430095BC: bne         $at, $zero, L_430095A0
    if (ctx->r1 != 0) {
        // 0x430095C0: sw          $t6, 0x1C($s1)
        MEM_W(0X1C, ctx->r17) = ctx->r14;
            goto L_430095A0;
    }
    // 0x430095C0: sw          $t6, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r14;
    // 0x430095C4: addiu       $at, $zero, 0x4B
    ctx->r1 = ADD32(0, 0X4B);
    // 0x430095C8: bne         $t6, $at, L_430095FC
    if (ctx->r14 != ctx->r1) {
        // 0x430095CC: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_430095FC;
    }
    // 0x430095CC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x430095D0: lui         $a1, 0x4301
    ctx->r5 = S32(0X4301 << 16);
    // 0x430095D4: lui         $s2, 0x4301
    ctx->r18 = S32(0X4301 << 16);
    // 0x430095D8: addiu       $s2, $s2, -0x6C10
    ctx->r18 = ADD32(ctx->r18, -0X6C10);
    // 0x430095DC: addiu       $a1, $a1, -0x4150
    ctx->r5 = ADD32(ctx->r5, -0X4150);
    // 0x430095E0: jal         0x43005E5C
    // 0x430095E4: lui         $a2, 0x437A
    ctx->r6 = S32(0X437A << 16);
    ovl_boss_angel_5E5C(rdram, ctx);
        goto after_2;
    // 0x430095E4: lui         $a2, 0x437A
    ctx->r6 = S32(0X437A << 16);
    after_2:
    // 0x430095E8: sw          $v0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r2;
    // 0x430095EC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x430095F0: sw          $s1, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r17;
    // 0x430095F4: b           L_43009604
    // 0x430095F8: sw          $s2, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->r18;
        goto L_43009604;
    // 0x430095F8: sw          $s2, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->r18;
L_430095FC:
    // 0x430095FC: lw          $s0, 0xC($s1)
    ctx->r16 = MEM_W(ctx->r17, 0XC);
    // 0x43009600: nop

L_43009604:
    // 0x43009604: lwc1        $f20, 0x14($s1)
    ctx->f20.u32l = MEM_W(ctx->r17, 0X14);
    // 0x43009608: lwc1        $f22, 0x18($s1)
    ctx->f22.u32l = MEM_W(ctx->r17, 0X18);
    // 0x4300960C: jal         0x4300B4B0
    // 0x43009610: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    ovl_boss_angel_B4B0(rdram, ctx);
        goto after_3;
    // 0x43009610: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_3:
    // 0x43009614: mul.s       $f6, $f0, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x43009618: lwc1        $f4, 0x0($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X0);
    // 0x4300961C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x43009620: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x43009624: jal         0x4300B670
    // 0x43009628: swc1        $f8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f8.u32l;
    ovl_boss_angel_B670(rdram, ctx);
        goto after_4;
    // 0x43009628: swc1        $f8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f8.u32l;
    after_4:
    // 0x4300962C: mul.s       $f16, $f0, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x43009630: lwc1        $f10, 0x8($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X8);
    // 0x43009634: lui         $a2, 0x4301
    ctx->r6 = S32(0X4301 << 16);
    // 0x43009638: addiu       $a2, $a2, -0x4130
    ctx->r6 = ADD32(ctx->r6, -0X4130);
    // 0x4300963C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x43009640: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x43009644: swc1        $f18, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f18.u32l;
    // 0x43009648: jal         0x430094D0
    // 0x4300964C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    ovl_boss_angel_94D0(rdram, ctx);
        goto after_5;
    // 0x4300964C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_5:
    // 0x43009650: lui         $at, 0x445C
    ctx->r1 = S32(0X445C << 16);
    // 0x43009654: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x43009658: lwc1        $f6, 0x58($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X58);
    // 0x4300965C: nop

    // 0x43009660: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x43009664: nop

    // 0x43009668: bc1f        L_430096A4
    if (!c1cs) {
        // 0x4300966C: addiu       $a0, $zero, 0x37
        ctx->r4 = ADD32(0, 0X37);
            goto L_430096A4;
    }
    // 0x4300966C: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    // 0x43009670: lw          $t9, 0x28($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X28);
    // 0x43009674: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x43009678: jalr        $t9
    // 0x4300967C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x4300967C: nop

    after_6:
    // 0x43009680: lui         $a2, 0x4301
    ctx->r6 = S32(0X4301 << 16);
    // 0x43009684: addiu       $a2, $a2, -0x4008
    ctx->r6 = ADD32(ctx->r6, -0X4008);
    // 0x43009688: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x4300968C: jal         0x430094D0
    // 0x43009690: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    ovl_boss_angel_94D0(rdram, ctx);
        goto after_7;
    // 0x43009690: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_7:
    // 0x43009694: jal         0x4300A8B4
    // 0x43009698: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    ovl_boss_angel_A8B4(rdram, ctx);
        goto after_8;
    // 0x43009698: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_8:
    // 0x4300969C: swc1        $f0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->f0.u32l;
    // 0x430096A0: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
L_430096A4:
    // 0x430096A4: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x430096A8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x430096AC: jal         0x43000DC0
    // 0x430096B0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_boss_angel_DC0(rdram, ctx);
        goto after_9;
    // 0x430096B0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_9:
    // 0x430096B4: beq         $s0, $zero, L_430095A0
    if (ctx->r16 == 0) {
        // 0x430096B8: nop
    
            goto L_430095A0;
    }
    // 0x430096B8: nop

    // 0x430096BC: lw          $t9, 0x40($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X40);
    // 0x430096C0: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x430096C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430096C8: jalr        $t9
    // 0x430096CC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x430096CC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_10:
    // 0x430096D0: b           L_430095A0
    // 0x430096D4: nop

        goto L_430095A0;
    // 0x430096D4: nop

L_430096D8:
    // 0x430096D8: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x430096DC: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x430096E0: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x430096E4: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x430096E8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_430096EC:
    // 0x430096EC: addiu       $s2, $s0, 0x1
    ctx->r18 = ADD32(ctx->r16, 0X1);
    // 0x430096F0: mtc1        $s2, $f8
    ctx->f8.u32l = ctx->r18;
    // 0x430096F4: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x430096F8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x430096FC: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x43009700: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x43009704: div.s       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = DIV_S(ctx->f10.fl, ctx->f20.fl);
    // 0x43009708: mul.s       $f18, $f16, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f22.fl);
    // 0x4300970C: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x43009710: jal         0x43000214
    // 0x43009714: nop

    ovl_boss_angel_214(rdram, ctx);
        goto after_11;
    // 0x43009714: nop

    after_11:
    // 0x43009718: jal         0x4300A1D8
    // 0x4300971C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_boss_angel_A1D8(rdram, ctx);
        goto after_12;
    // 0x4300971C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_12:
    // 0x43009720: slti        $at, $s2, 0xF
    ctx->r1 = SIGNED(ctx->r18) < 0XF ? 1 : 0;
    // 0x43009724: bne         $at, $zero, L_430096EC
    if (ctx->r1 != 0) {
        // 0x43009728: or          $s0, $s2, $zero
        ctx->r16 = ctx->r18 | 0;
            goto L_430096EC;
    }
    // 0x43009728: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
    // 0x4300972C: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x43009730: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x43009734: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x43009738: jal         0x43000214
    // 0x4300973C: lui         $a3, 0x437F
    ctx->r7 = S32(0X437F << 16);
    ovl_boss_angel_214(rdram, ctx);
        goto after_13;
    // 0x4300973C: lui         $a3, 0x437F
    ctx->r7 = S32(0X437F << 16);
    after_13:
    // 0x43009740: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    // 0x43009744: nop

    // 0x43009748: lw          $t9, 0x54($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X54);
    // 0x4300974C: nop

    // 0x43009750: jalr        $t9
    // 0x43009754: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x43009754: nop

    after_14:
    // 0x43009758: sw          $zero, 0xC($s1)
    MEM_W(0XC, ctx->r17) = 0;
    // 0x4300975C: addiu       $a0, $zero, 0x38
    ctx->r4 = ADD32(0, 0X38);
    // 0x43009760: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x43009764: jal         0x43000DC0
    // 0x43009768: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_boss_angel_DC0(rdram, ctx);
        goto after_15;
    // 0x43009768: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_15:
    // 0x4300976C: lw          $t9, 0x2C($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X2C);
    // 0x43009770: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x43009774: sw          $t7, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r15;
    // 0x43009778: jalr        $t9
    // 0x4300977C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x4300977C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_16:
    // 0x43009780: addiu       $s0, $zero, 0xE
    ctx->r16 = ADD32(0, 0XE);
    // 0x43009784: addiu       $t8, $s0, 0x1
    ctx->r24 = ADD32(ctx->r16, 0X1);
L_43009788:
    // 0x43009788: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x4300978C: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x43009790: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x43009794: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x43009798: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x4300979C: div.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f20.fl);
    // 0x430097A0: mul.s       $f10, $f8, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f22.fl);
    // 0x430097A4: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x430097A8: jal         0x43000214
    // 0x430097AC: nop

    ovl_boss_angel_214(rdram, ctx);
        goto after_17;
    // 0x430097AC: nop

    after_17:
    // 0x430097B0: jal         0x4300A1D8
    // 0x430097B4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_boss_angel_A1D8(rdram, ctx);
        goto after_18;
    // 0x430097B4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_18:
    // 0x430097B8: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x430097BC: bgez        $s0, L_43009788
    if (SIGNED(ctx->r16) >= 0) {
        // 0x430097C0: addiu       $t8, $s0, 0x1
        ctx->r24 = ADD32(ctx->r16, 0X1);
            goto L_43009788;
    }
    // 0x430097C0: addiu       $t8, $s0, 0x1
    ctx->r24 = ADD32(ctx->r16, 0X1);
    // 0x430097C4: mfc1        $a3, $f24
    ctx->r7 = (int32_t)ctx->f24.u32l;
    // 0x430097C8: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x430097CC: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x430097D0: jal         0x43000214
    // 0x430097D4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    ovl_boss_angel_214(rdram, ctx);
        goto after_19;
    // 0x430097D4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_19:
    // 0x430097D8: lw          $a0, 0x24($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X24);
    // 0x430097DC: jal         0x4300B358
    // 0x430097E0: nop

    ovl_boss_angel_B358(rdram, ctx);
        goto after_20;
    // 0x430097E0: nop

    after_20:
    // 0x430097E4: lw          $t9, 0x34($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X34);
    // 0x430097E8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x430097EC: jalr        $t9
    // 0x430097F0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_21;
    // 0x430097F0: nop

    after_21:
    // 0x430097F4: jal         0x43000838
    // 0x430097F8: nop

    ovl_boss_angel_838(rdram, ctx);
        goto after_22;
    // 0x430097F8: nop

    after_22:
    // 0x430097FC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x43009800: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x43009804: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x43009808: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x4300980C: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x43009810: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x43009814: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x43009818: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x4300981C: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x43009820: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x43009824: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x43009828: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x4300982C: jr          $ra
    // 0x43009830: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x43009830: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void ovl_boss_angel_9834(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43009834: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43009838: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4300983C: lw          $t9, 0x34($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X34);
    // 0x43009840: nop

    // 0x43009844: jalr        $t9
    // 0x43009848: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43009848: nop

    after_0:
    // 0x4300984C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43009850: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43009854: jr          $ra
    // 0x43009858: nop

    return;
    // 0x43009858: nop

;}
RECOMP_FUNC void ovl_boss_angel_985C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300985C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x43009860: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x43009864: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x43009868: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x4300986C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x43009870: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x43009874: jal         0x430000E8
    // 0x43009878: addiu       $a0, $zero, 0x38
    ctx->r4 = ADD32(0, 0X38);
    ovl_boss_angel_E8(rdram, ctx);
        goto after_0;
    // 0x43009878: addiu       $a0, $zero, 0x38
    ctx->r4 = ADD32(0, 0X38);
    after_0:
    // 0x4300987C: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x43009880: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x43009884: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x43009888: jal         0x4300A100
    // 0x4300988C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    ovl_boss_angel_A100(rdram, ctx);
        goto after_1;
    // 0x4300988C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_1:
    // 0x43009890: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x43009894: addiu       $a0, $zero, 0x36
    ctx->r4 = ADD32(0, 0X36);
    // 0x43009898: addiu       $a1, $s0, 0x10
    ctx->r5 = ADD32(ctx->r16, 0X10);
    // 0x4300989C: addiu       $a2, $zero, 0xAC
    ctx->r6 = ADD32(0, 0XAC);
    // 0x430098A0: jal         0x43000DC0
    // 0x430098A4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_boss_angel_DC0(rdram, ctx);
        goto after_2;
    // 0x430098A4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x430098A8: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x430098AC: addiu       $v0, $v0, -0x6BC8
    ctx->r2 = ADD32(ctx->r2, -0X6BC8);
    // 0x430098B0: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    // 0x430098B4: sw          $v0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r2;
    // 0x430098B8: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x430098BC: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x430098C0: lui         $t6, 0x4301
    ctx->r14 = S32(0X4301 << 16);
    // 0x430098C4: swc1        $f4, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f4.u32l;
    // 0x430098C8: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x430098CC: lui         $t7, 0x4301
    ctx->r15 = S32(0X4301 << 16);
    // 0x430098D0: addiu       $t6, $t6, -0x6BD4
    ctx->r14 = ADD32(ctx->r14, -0X6BD4);
    // 0x430098D4: addiu       $t7, $t7, -0x6BC0
    ctx->r15 = ADD32(ctx->r15, -0X6BC0);
    // 0x430098D8: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x430098DC: sw          $zero, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = 0;
    // 0x430098E0: sw          $t6, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r14;
    // 0x430098E4: sw          $t7, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r15;
    // 0x430098E8: addiu       $a0, $a0, -0x67CC
    ctx->r4 = ADD32(ctx->r4, -0X67CC);
    // 0x430098EC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x430098F0: jal         0x4300B300
    // 0x430098F4: swc1        $f6, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f6.u32l;
    ovl_boss_angel_B300(rdram, ctx);
        goto after_3;
    // 0x430098F4: swc1        $f6, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f6.u32l;
    after_3:
    // 0x430098F8: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x430098FC: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    // 0x43009900: addiu       $a0, $a0, -0x6AA8
    ctx->r4 = ADD32(ctx->r4, -0X6AA8);
    // 0x43009904: ori         $a1, $zero, 0xFECF
    ctx->r5 = 0 | 0XFECF;
    // 0x43009908: addiu       $a2, $zero, 0x2000
    ctx->r6 = ADD32(0, 0X2000);
    // 0x4300990C: jal         0x43000820
    // 0x43009910: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_boss_angel_820(rdram, ctx);
        goto after_4;
    // 0x43009910: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x43009914: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x43009918: sw          $s0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r16;
    // 0x4300991C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43009920: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x43009924: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x43009928: jr          $ra
    // 0x4300992C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x4300992C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_boss_angel_9930(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43009930: lui         $a1, 0x4301
    ctx->r5 = S32(0X4301 << 16);
    // 0x43009934: addiu       $a1, $a1, -0x3740
    ctx->r5 = ADD32(ctx->r5, -0X3740);
    // 0x43009938: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x4300993C: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x43009940: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x43009944: addu        $v1, $v1, $t6
    ctx->r3 = ADD32(ctx->r3, ctx->r14);
    // 0x43009948: lw          $v1, -0x3780($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3780);
    // 0x4300994C: lui         $t9, 0x4301
    ctx->r25 = S32(0X4301 << 16);
    // 0x43009950: sll         $t8, $v1, 3
    ctx->r24 = S32(ctx->r3 << 3);
    // 0x43009954: addu        $t8, $t8, $v1
    ctx->r24 = ADD32(ctx->r24, ctx->r3);
    // 0x43009958: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x4300995C: addiu       $t9, $t9, -0x3C00
    ctx->r25 = ADD32(ctx->r25, -0X3C00);
    // 0x43009960: addiu       $t7, $a0, 0x1
    ctx->r15 = ADD32(ctx->r4, 0X1);
    // 0x43009964: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x43009968: jr          $ra
    // 0x4300996C: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    return;
    // 0x4300996C: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
;}
RECOMP_FUNC void ovl_boss_angel_9970(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43009970: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x43009974: addiu       $v1, $v1, -0x3740
    ctx->r3 = ADD32(ctx->r3, -0X3740);
    // 0x43009978: sh          $zero, 0x8($a0)
    MEM_H(0X8, ctx->r4) = 0;
    // 0x4300997C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x43009980: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43009984: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x43009988: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x4300998C: lw          $t6, 0x44($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X44);
    // 0x43009990: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x43009994: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x43009998: jr          $ra
    // 0x4300999C: sw          $t6, -0x3780($at)
    MEM_W(-0X3780, ctx->r1) = ctx->r14;
    return;
    // 0x4300999C: sw          $t6, -0x3780($at)
    MEM_W(-0X3780, ctx->r1) = ctx->r14;
;}
RECOMP_FUNC void ovl_boss_angel_99A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430099A0: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x430099A4: sw          $s7, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r23;
    // 0x430099A8: swc1        $f30, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f30.u32l;
    // 0x430099AC: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430099B0: lui         $s7, 0x4301
    ctx->r23 = S32(0X4301 << 16);
    // 0x430099B4: lwc1        $f30, -0x4140($at)
    ctx->f30.u32l = MEM_W(ctx->r1, -0X4140);
    // 0x430099B8: lw          $s7, -0x3C10($s7)
    ctx->r23 = MEM_W(ctx->r23, -0X3C10);
    // 0x430099BC: sw          $s5, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r21;
    // 0x430099C0: swc1        $f28, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f28.u32l;
    // 0x430099C4: swc1        $f26, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f26.u32l;
    // 0x430099C8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x430099CC: lui         $t6, 0x4301
    ctx->r14 = S32(0X4301 << 16);
    // 0x430099D0: sw          $s6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r22;
    // 0x430099D4: sw          $s4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r20;
    // 0x430099D8: sw          $s3, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r19;
    // 0x430099DC: addiu       $s5, $t6, -0x3780
    ctx->r21 = ADD32(ctx->r14, -0X3780);
    // 0x430099E0: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x430099E4: mtc1        $zero, $f26
    ctx->f26.u32l = 0;
    // 0x430099E8: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x430099EC: sw          $s2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r18;
    // 0x430099F0: sw          $s1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r17;
    // 0x430099F4: sw          $s0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r16;
    // 0x430099F8: swc1        $f31, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x430099FC: swc1        $f29, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x43009A00: swc1        $f27, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x43009A04: swc1        $f25, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x43009A08: swc1        $f24, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f24.u32l;
    // 0x43009A0C: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x43009A10: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x43009A14: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x43009A18: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x43009A1C: or          $s6, $s5, $zero
    ctx->r22 = ctx->r21 | 0;
    // 0x43009A20: addiu       $s3, $zero, 0x6
    ctx->r19 = ADD32(0, 0X6);
    // 0x43009A24: addiu       $s4, $sp, 0xA0
    ctx->r20 = ADD32(ctx->r29, 0XA0);
    // 0x43009A28: addiu       $s7, $s7, 0x9C
    ctx->r23 = ADD32(ctx->r23, 0X9C);
L_43009A2C:
    // 0x43009A2C: lui         $a1, 0x4301
    ctx->r5 = S32(0X4301 << 16);
    // 0x43009A30: sw          $zero, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = 0;
    // 0x43009A34: addiu       $a1, $a1, -0x3C00
    ctx->r5 = ADD32(ctx->r5, -0X3C00);
L_43009A38:
    // 0x43009A38: lhu         $t7, 0x8($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X8);
    // 0x43009A3C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x43009A40: andi        $t8, $t7, 0x8000
    ctx->r24 = ctx->r15 & 0X8000;
    // 0x43009A44: beq         $t8, $zero, L_43009A94
    if (ctx->r24 == 0) {
        // 0x43009A48: nop
    
            goto L_43009A94;
    }
    // 0x43009A48: nop

    // 0x43009A4C: lwc1        $f0, 0x40($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X40);
    // 0x43009A50: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x43009A54: add.s       $f26, $f26, $f0
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f26.fl = ctx->f26.fl + ctx->f0.fl;
L_43009A58:
    // 0x43009A58: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x43009A5C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x43009A60: beq         $v0, $zero, L_43009A80
    if (ctx->r2 == 0) {
        // 0x43009A64: nop
    
            goto L_43009A80;
    }
    // 0x43009A64: nop

    // 0x43009A68: lwc1        $f4, 0x40($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X40);
    // 0x43009A6C: nop

    // 0x43009A70: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x43009A74: nop

    // 0x43009A78: bc1f        L_43009A8C
    if (!c1cs) {
        // 0x43009A7C: nop
    
            goto L_43009A8C;
    }
    // 0x43009A7C: nop

L_43009A80:
    // 0x43009A80: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x43009A84: b           L_43009A94
    // 0x43009A88: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
        goto L_43009A94;
    // 0x43009A88: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
L_43009A8C:
    // 0x43009A8C: bne         $v1, $s3, L_43009A58
    if (ctx->r3 != ctx->r19) {
        // 0x43009A90: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_43009A58;
    }
    // 0x43009A90: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_43009A94:
    // 0x43009A94: addiu       $a1, $a1, 0x48
    ctx->r5 = ADD32(ctx->r5, 0X48);
    // 0x43009A98: sltu        $at, $a1, $s5
    ctx->r1 = ctx->r5 < ctx->r21 ? 1 : 0;
    // 0x43009A9C: bne         $at, $zero, L_43009A38
    if (ctx->r1 != 0) {
        // 0x43009AA0: nop
    
            goto L_43009A38;
    }
    // 0x43009AA0: nop

    // 0x43009AA4: nop

    // 0x43009AA8: div.s       $f24, $f28, $f26
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f24.fl = DIV_S(ctx->f28.fl, ctx->f26.fl);
    // 0x43009AAC: lui         $a1, 0x4301
    ctx->r5 = S32(0X4301 << 16);
    // 0x43009AB0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x43009AB4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x43009AB8: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x43009ABC: addiu       $a1, $a1, -0x3C00
    ctx->r5 = ADD32(ctx->r5, -0X3C00);
    // 0x43009AC0: mov.s       $f22, $f24
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    ctx->f22.fl = ctx->f24.fl;
L_43009AC4:
    // 0x43009AC4: lhu         $t9, 0x8($a1)
    ctx->r25 = MEM_HU(ctx->r5, 0X8);
    // 0x43009AC8: nop

    // 0x43009ACC: andi        $t0, $t9, 0x8000
    ctx->r8 = ctx->r25 & 0X8000;
    // 0x43009AD0: beq         $t0, $zero, L_43009CE8
    if (ctx->r8 == 0) {
        // 0x43009AD4: nop
    
            goto L_43009CE8;
    }
    // 0x43009AD4: nop

    // 0x43009AD8: lbu         $t1, 0x14($a1)
    ctx->r9 = MEM_BU(ctx->r5, 0X14);
    // 0x43009ADC: lwc1        $f6, 0x40($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X40);
    // 0x43009AE0: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x43009AE4: mul.s       $f0, $f6, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = MUL_S(ctx->f6.fl, ctx->f22.fl);
    // 0x43009AE8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x43009AEC: bgez        $t1, L_43009B00
    if (SIGNED(ctx->r9) >= 0) {
        // 0x43009AF0: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_43009B00;
    }
    // 0x43009AF0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x43009AF4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x43009AF8: nop

    // 0x43009AFC: add.s       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f4.fl;
L_43009B00:
    // 0x43009B00: lbu         $t2, 0x15($a1)
    ctx->r10 = MEM_BU(ctx->r5, 0X15);
    // 0x43009B04: mul.s       $f2, $f10, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x43009B08: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x43009B0C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x43009B10: bgez        $t2, L_43009B24
    if (SIGNED(ctx->r10) >= 0) {
        // 0x43009B14: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_43009B24;
    }
    // 0x43009B14: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x43009B18: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x43009B1C: nop

    // 0x43009B20: add.s       $f8, $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f4.fl;
L_43009B24:
    // 0x43009B24: lbu         $t3, 0x16($a1)
    ctx->r11 = MEM_BU(ctx->r5, 0X16);
    // 0x43009B28: mul.s       $f12, $f8, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x43009B2C: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x43009B30: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x43009B34: bgez        $t3, L_43009B48
    if (SIGNED(ctx->r11) >= 0) {
        // 0x43009B38: cvt.s.w     $f6, $f10
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
            goto L_43009B48;
    }
    // 0x43009B38: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x43009B3C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x43009B40: nop

    // 0x43009B44: add.s       $f6, $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f4.fl;
L_43009B48:
    // 0x43009B48: mul.s       $f14, $f6, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x43009B4C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x43009B50: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x43009B54: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x43009B58: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x43009B5C: nop

    // 0x43009B60: cvt.w.s     $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    ctx->f8.u32l = CVT_W_S(ctx->f2.fl);
    // 0x43009B64: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x43009B68: nop

    // 0x43009B6C: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x43009B70: beq         $t5, $zero, L_43009BBC
    if (ctx->r13 == 0) {
        // 0x43009B74: nop
    
            goto L_43009BBC;
    }
    // 0x43009B74: nop

    // 0x43009B78: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x43009B7C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x43009B80: sub.s       $f8, $f2, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f8.fl;
    // 0x43009B84: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x43009B88: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x43009B8C: nop

    // 0x43009B90: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x43009B94: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x43009B98: nop

    // 0x43009B9C: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x43009BA0: bne         $t5, $zero, L_43009BB4
    if (ctx->r13 != 0) {
        // 0x43009BA4: nop
    
            goto L_43009BB4;
    }
    // 0x43009BA4: nop

    // 0x43009BA8: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
    // 0x43009BAC: b           L_43009BCC
    // 0x43009BB0: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
        goto L_43009BCC;
    // 0x43009BB0: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
L_43009BB4:
    // 0x43009BB4: b           L_43009BCC
    // 0x43009BB8: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
        goto L_43009BCC;
    // 0x43009BB8: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
L_43009BBC:
    // 0x43009BBC: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
    // 0x43009BC0: nop

    // 0x43009BC4: bltz        $t5, L_43009BB4
    if (SIGNED(ctx->r13) < 0) {
        // 0x43009BC8: nop
    
            goto L_43009BB4;
    }
    // 0x43009BC8: nop

L_43009BCC:
    // 0x43009BCC: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x43009BD0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x43009BD4: sb          $t5, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r13;
    // 0x43009BD8: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x43009BDC: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x43009BE0: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x43009BE4: cvt.w.s     $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    ctx->f10.u32l = CVT_W_S(ctx->f12.fl);
    // 0x43009BE8: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x43009BEC: nop

    // 0x43009BF0: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x43009BF4: beq         $t7, $zero, L_43009C40
    if (ctx->r15 == 0) {
        // 0x43009BF8: nop
    
            goto L_43009C40;
    }
    // 0x43009BF8: nop

    // 0x43009BFC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x43009C00: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x43009C04: sub.s       $f10, $f12, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f12.fl - ctx->f10.fl;
    // 0x43009C08: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x43009C0C: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x43009C10: nop

    // 0x43009C14: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x43009C18: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x43009C1C: nop

    // 0x43009C20: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x43009C24: bne         $t7, $zero, L_43009C38
    if (ctx->r15 != 0) {
        // 0x43009C28: nop
    
            goto L_43009C38;
    }
    // 0x43009C28: nop

    // 0x43009C2C: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x43009C30: b           L_43009C50
    // 0x43009C34: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_43009C50;
    // 0x43009C34: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_43009C38:
    // 0x43009C38: b           L_43009C50
    // 0x43009C3C: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_43009C50;
    // 0x43009C3C: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
L_43009C40:
    // 0x43009C40: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x43009C44: nop

    // 0x43009C48: bltz        $t7, L_43009C38
    if (SIGNED(ctx->r15) < 0) {
        // 0x43009C4C: nop
    
            goto L_43009C38;
    }
    // 0x43009C4C: nop

L_43009C50:
    // 0x43009C50: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x43009C54: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x43009C58: sb          $t7, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r15;
    // 0x43009C5C: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x43009C60: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x43009C64: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x43009C68: cvt.w.s     $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    ctx->f4.u32l = CVT_W_S(ctx->f14.fl);
    // 0x43009C6C: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x43009C70: nop

    // 0x43009C74: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x43009C78: beq         $t9, $zero, L_43009CC4
    if (ctx->r25 == 0) {
        // 0x43009C7C: nop
    
            goto L_43009CC4;
    }
    // 0x43009C7C: nop

    // 0x43009C80: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x43009C84: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x43009C88: sub.s       $f4, $f14, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f14.fl - ctx->f4.fl;
    // 0x43009C8C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x43009C90: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x43009C94: nop

    // 0x43009C98: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x43009C9C: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x43009CA0: nop

    // 0x43009CA4: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x43009CA8: bne         $t9, $zero, L_43009CBC
    if (ctx->r25 != 0) {
        // 0x43009CAC: nop
    
            goto L_43009CBC;
    }
    // 0x43009CAC: nop

    // 0x43009CB0: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
    // 0x43009CB4: b           L_43009CD4
    // 0x43009CB8: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
        goto L_43009CD4;
    // 0x43009CB8: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
L_43009CBC:
    // 0x43009CBC: b           L_43009CD4
    // 0x43009CC0: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
        goto L_43009CD4;
    // 0x43009CC0: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
L_43009CC4:
    // 0x43009CC4: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
    // 0x43009CC8: nop

    // 0x43009CCC: bltz        $t9, L_43009CBC
    if (SIGNED(ctx->r25) < 0) {
        // 0x43009CD0: nop
    
            goto L_43009CBC;
    }
    // 0x43009CD0: nop

L_43009CD4:
    // 0x43009CD4: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x43009CD8: sb          $t9, 0x6($a1)
    MEM_B(0X6, ctx->r5) = ctx->r25;
    // 0x43009CDC: add.s       $f20, $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f2.fl;
    // 0x43009CE0: add.s       $f18, $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f12.fl;
    // 0x43009CE4: add.s       $f16, $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f14.fl;
L_43009CE8:
    // 0x43009CE8: addiu       $a1, $a1, 0x48
    ctx->r5 = ADD32(ctx->r5, 0X48);
    // 0x43009CEC: sltu        $at, $a1, $s6
    ctx->r1 = ctx->r5 < ctx->r22 ? 1 : 0;
    // 0x43009CF0: bne         $at, $zero, L_43009AC4
    if (ctx->r1 != 0) {
        // 0x43009CF4: nop
    
            goto L_43009AC4;
    }
    // 0x43009CF4: nop

    // 0x43009CF8: lui         $at, 0xC248
    ctx->r1 = S32(0XC248 << 16);
    // 0x43009CFC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x43009D00: sll         $t7, $zero, 3
    ctx->r15 = S32(0 << 3);
    // 0x43009D04: mul.s       $f8, $f6, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f24.fl);
    // 0x43009D08: subu        $t7, $t7, $zero
    ctx->r15 = SUB32(ctx->r15, 0);
    // 0x43009D0C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x43009D10: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x43009D14: add.s       $f2, $f8, $f28
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f2.fl = ctx->f8.fl + ctx->f28.fl;
    // 0x43009D18: addu        $s0, $s7, $t7
    ctx->r16 = ADD32(ctx->r23, ctx->r15);
    // 0x43009D1C: c.lt.s      $f30, $f2
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f30.fl < ctx->f2.fl;
    // 0x43009D20: nop

    // 0x43009D24: bc1f        L_43009D30
    if (!c1cs) {
        // 0x43009D28: nop
    
            goto L_43009D30;
    }
    // 0x43009D28: nop

    // 0x43009D2C: mov.s       $f2, $f30
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 30);
    ctx->f2.fl = ctx->f30.fl;
L_43009D30:
    // 0x43009D30: mul.s       $f10, $f20, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f2.fl);
    // 0x43009D34: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x43009D38: addiu       $v0, $s7, 0x188
    ctx->r2 = ADD32(ctx->r23, 0X188);
    // 0x43009D3C: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x43009D40: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x43009D44: nop

    // 0x43009D48: cvt.w.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = CVT_W_S(ctx->f10.fl);
    // 0x43009D4C: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x43009D50: nop

    // 0x43009D54: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x43009D58: beq         $t1, $zero, L_43009DA4
    if (ctx->r9 == 0) {
        // 0x43009D5C: nop
    
            goto L_43009DA4;
    }
    // 0x43009D5C: nop

    // 0x43009D60: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x43009D64: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x43009D68: sub.s       $f4, $f10, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x43009D6C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x43009D70: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x43009D74: nop

    // 0x43009D78: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x43009D7C: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x43009D80: nop

    // 0x43009D84: andi        $t1, $t1, 0x78
    ctx->r9 = ctx->r9 & 0X78;
    // 0x43009D88: bne         $t1, $zero, L_43009D9C
    if (ctx->r9 != 0) {
        // 0x43009D8C: nop
    
            goto L_43009D9C;
    }
    // 0x43009D8C: nop

    // 0x43009D90: mfc1        $t1, $f4
    ctx->r9 = (int32_t)ctx->f4.u32l;
    // 0x43009D94: b           L_43009DB4
    // 0x43009D98: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
        goto L_43009DB4;
    // 0x43009D98: or          $t1, $t1, $at
    ctx->r9 = ctx->r9 | ctx->r1;
L_43009D9C:
    // 0x43009D9C: b           L_43009DB4
    // 0x43009DA0: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
        goto L_43009DB4;
    // 0x43009DA0: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
L_43009DA4:
    // 0x43009DA4: mfc1        $t1, $f4
    ctx->r9 = (int32_t)ctx->f4.u32l;
    // 0x43009DA8: nop

    // 0x43009DAC: bltz        $t1, L_43009D9C
    if (SIGNED(ctx->r9) < 0) {
        // 0x43009DB0: nop
    
            goto L_43009D9C;
    }
    // 0x43009DB0: nop

L_43009DB4:
    // 0x43009DB4: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x43009DB8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x43009DBC: mul.s       $f6, $f18, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x43009DC0: sb          $t1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r9;
    // 0x43009DC4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x43009DC8: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x43009DCC: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x43009DD0: nop

    // 0x43009DD4: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x43009DD8: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x43009DDC: nop

    // 0x43009DE0: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x43009DE4: beq         $t3, $zero, L_43009E30
    if (ctx->r11 == 0) {
        // 0x43009DE8: nop
    
            goto L_43009E30;
    }
    // 0x43009DE8: nop

    // 0x43009DEC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x43009DF0: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x43009DF4: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x43009DF8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x43009DFC: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x43009E00: nop

    // 0x43009E04: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x43009E08: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x43009E0C: nop

    // 0x43009E10: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x43009E14: bne         $t3, $zero, L_43009E28
    if (ctx->r11 != 0) {
        // 0x43009E18: nop
    
            goto L_43009E28;
    }
    // 0x43009E18: nop

    // 0x43009E1C: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
    // 0x43009E20: b           L_43009E40
    // 0x43009E24: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
        goto L_43009E40;
    // 0x43009E24: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
L_43009E28:
    // 0x43009E28: b           L_43009E40
    // 0x43009E2C: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
        goto L_43009E40;
    // 0x43009E2C: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
L_43009E30:
    // 0x43009E30: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
    // 0x43009E34: nop

    // 0x43009E38: bltz        $t3, L_43009E28
    if (SIGNED(ctx->r11) < 0) {
        // 0x43009E3C: nop
    
            goto L_43009E28;
    }
    // 0x43009E3C: nop

L_43009E40:
    // 0x43009E40: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x43009E44: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x43009E48: mul.s       $f10, $f16, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x43009E4C: sb          $t3, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r11;
    // 0x43009E50: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x43009E54: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x43009E58: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x43009E5C: nop

    // 0x43009E60: cvt.w.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = CVT_W_S(ctx->f10.fl);
    // 0x43009E64: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x43009E68: nop

    // 0x43009E6C: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x43009E70: beq         $t5, $zero, L_43009EBC
    if (ctx->r13 == 0) {
        // 0x43009E74: nop
    
            goto L_43009EBC;
    }
    // 0x43009E74: nop

    // 0x43009E78: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x43009E7C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x43009E80: sub.s       $f4, $f10, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x43009E84: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x43009E88: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x43009E8C: nop

    // 0x43009E90: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x43009E94: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x43009E98: nop

    // 0x43009E9C: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x43009EA0: bne         $t5, $zero, L_43009EB4
    if (ctx->r13 != 0) {
        // 0x43009EA4: nop
    
            goto L_43009EB4;
    }
    // 0x43009EA4: nop

    // 0x43009EA8: mfc1        $t5, $f4
    ctx->r13 = (int32_t)ctx->f4.u32l;
    // 0x43009EAC: b           L_43009ECC
    // 0x43009EB0: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
        goto L_43009ECC;
    // 0x43009EB0: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
L_43009EB4:
    // 0x43009EB4: b           L_43009ECC
    // 0x43009EB8: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
        goto L_43009ECC;
    // 0x43009EB8: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
L_43009EBC:
    // 0x43009EBC: mfc1        $t5, $f4
    ctx->r13 = (int32_t)ctx->f4.u32l;
    // 0x43009EC0: nop

    // 0x43009EC4: bltz        $t5, L_43009EB4
    if (SIGNED(ctx->r13) < 0) {
        // 0x43009EC8: nop
    
            goto L_43009EB4;
    }
    // 0x43009EC8: nop

L_43009ECC:
    // 0x43009ECC: sb          $t5, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r13;
    // 0x43009ED0: lw          $s2, 0xA0($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XA0);
    // 0x43009ED4: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x43009ED8: beq         $s2, $zero, L_43009F14
    if (ctx->r18 == 0) {
        // 0x43009EDC: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_43009F14;
    }
    // 0x43009EDC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x43009EE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43009EE4:
    // 0x43009EE4: addiu       $a1, $s2, 0x8
    ctx->r5 = ADD32(ctx->r18, 0X8);
    // 0x43009EE8: jal         0x4300A100
    // 0x43009EEC: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    ovl_boss_angel_A100(rdram, ctx);
        goto after_0;
    // 0x43009EEC: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    after_0:
    // 0x43009EF0: lw          $t8, 0x4($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X4);
    // 0x43009EF4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x43009EF8: sw          $t8, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r24;
    // 0x43009EFC: lw          $s2, 0x0($s2)
    ctx->r18 = MEM_W(ctx->r18, 0X0);
    // 0x43009F00: addiu       $s0, $s0, 0x38
    ctx->r16 = ADD32(ctx->r16, 0X38);
    // 0x43009F04: beq         $s2, $zero, L_43009F18
    if (ctx->r18 == 0) {
        // 0x43009F08: slti        $at, $s1, 0x7
        ctx->r1 = SIGNED(ctx->r17) < 0X7 ? 1 : 0;
            goto L_43009F18;
    }
    // 0x43009F08: slti        $at, $s1, 0x7
    ctx->r1 = SIGNED(ctx->r17) < 0X7 ? 1 : 0;
    // 0x43009F0C: bne         $s1, $s3, L_43009EE4
    if (ctx->r17 != ctx->r19) {
        // 0x43009F10: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43009EE4;
    }
    // 0x43009F10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43009F14:
    // 0x43009F14: slti        $at, $s1, 0x7
    ctx->r1 = SIGNED(ctx->r17) < 0X7 ? 1 : 0;
L_43009F18:
    // 0x43009F18: beq         $at, $zero, L_43009F44
    if (ctx->r1 == 0) {
        // 0x43009F1C: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_43009F44;
    }
    // 0x43009F1C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x43009F20: sll         $t9, $s1, 3
    ctx->r25 = S32(ctx->r17 << 3);
    // 0x43009F24: subu        $t9, $t9, $s1
    ctx->r25 = SUB32(ctx->r25, ctx->r17);
    // 0x43009F28: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x43009F2C: addu        $s0, $s7, $t9
    ctx->r16 = ADD32(ctx->r23, ctx->r25);
L_43009F30:
    // 0x43009F30: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x43009F34: slti        $at, $s1, 0x7
    ctx->r1 = SIGNED(ctx->r17) < 0X7 ? 1 : 0;
    // 0x43009F38: addiu       $s0, $s0, 0x38
    ctx->r16 = ADD32(ctx->r16, 0X38);
    // 0x43009F3C: bne         $at, $zero, L_43009F30
    if (ctx->r1 != 0) {
        // 0x43009F40: sh          $zero, -0x38($s0)
        MEM_H(-0X38, ctx->r16) = 0;
            goto L_43009F30;
    }
    // 0x43009F40: sh          $zero, -0x38($s0)
    MEM_H(-0X38, ctx->r16) = 0;
L_43009F44:
    // 0x43009F44: mtc1        $zero, $f26
    ctx->f26.u32l = 0;
    // 0x43009F48: jal         0x4300A1D8
    // 0x43009F4C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    ovl_boss_angel_A1D8(rdram, ctx);
        goto after_1;
    // 0x43009F4C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    after_1:
    // 0x43009F50: b           L_43009A2C
    // 0x43009F54: nop

        goto L_43009A2C;
    // 0x43009F54: nop

    // 0x43009F58: nop

    // 0x43009F5C: nop

    // 0x43009F60: nop

    // 0x43009F64: nop

    // 0x43009F68: nop

    // 0x43009F6C: nop

    // 0x43009F70: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x43009F74: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x43009F78: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x43009F7C: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x43009F80: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x43009F84: lwc1        $f25, 0x20($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x43009F88: lwc1        $f24, 0x24($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X24);
    // 0x43009F8C: lwc1        $f27, 0x28($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x43009F90: lwc1        $f26, 0x2C($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x43009F94: lwc1        $f29, 0x30($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x43009F98: lwc1        $f28, 0x34($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X34);
    // 0x43009F9C: lwc1        $f31, 0x38($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x43009FA0: lwc1        $f30, 0x3C($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x43009FA4: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
    // 0x43009FA8: lw          $s1, 0x48($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X48);
    // 0x43009FAC: lw          $s2, 0x4C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X4C);
    // 0x43009FB0: lw          $s3, 0x50($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X50);
    // 0x43009FB4: lw          $s4, 0x54($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X54);
    // 0x43009FB8: lw          $s5, 0x58($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X58);
    // 0x43009FBC: lw          $s6, 0x5C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X5C);
    // 0x43009FC0: lw          $s7, 0x60($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X60);
    // 0x43009FC4: jr          $ra
    // 0x43009FC8: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    // 0x43009FC8: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void ovl_boss_angel_9FCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43009FCC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43009FD0: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x43009FD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43009FD8: lw          $a0, -0x3C08($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3C08);
    // 0x43009FDC: jal         0x4300082C
    // 0x43009FE0: nop

    ovl_boss_angel_82C(rdram, ctx);
        goto after_0;
    // 0x43009FE0: nop

    after_0:
    // 0x43009FE4: lui         $a2, 0x4301
    ctx->r6 = S32(0X4301 << 16);
    // 0x43009FE8: lw          $a2, -0x3C0C($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3C0C);
    // 0x43009FEC: addiu       $a0, $zero, 0x31
    ctx->r4 = ADD32(0, 0X31);
    // 0x43009FF0: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x43009FF4: jal         0x43000DC0
    // 0x43009FF8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_boss_angel_DC0(rdram, ctx);
        goto after_1;
    // 0x43009FF8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x43009FFC: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x4300A000: lw          $a0, -0x3C10($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3C10);
    // 0x4300A004: jal         0x430000F4
    // 0x4300A008: nop

    ovl_boss_angel_F4(rdram, ctx);
        goto after_2;
    // 0x4300A008: nop

    after_2:
    // 0x4300A00C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4300A010: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4300A014: jr          $ra
    // 0x4300A018: nop

    return;
    // 0x4300A018: nop

;}
RECOMP_FUNC void ovl_boss_angel_A01C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300A01C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4300A020: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4300A024: jal         0x430000E8
    // 0x4300A028: addiu       $a0, $zero, 0x230
    ctx->r4 = ADD32(0, 0X230);
    ovl_boss_angel_E8(rdram, ctx);
        goto after_0;
    // 0x4300A028: addiu       $a0, $zero, 0x230
    ctx->r4 = ADD32(0, 0X230);
    after_0:
    // 0x4300A02C: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x4300A030: addiu       $v1, $v1, -0x3C10
    ctx->r3 = ADD32(ctx->r3, -0X3C10);
    // 0x4300A034: lui         $a1, 0x4301
    ctx->r5 = S32(0X4301 << 16);
    // 0x4300A038: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x4300A03C: addiu       $a1, $a1, -0x3C0C
    ctx->r5 = ADD32(ctx->r5, -0X3C0C);
    // 0x4300A040: addiu       $a0, $zero, 0x31
    ctx->r4 = ADD32(0, 0X31);
    // 0x4300A044: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x4300A048: jal         0x43000DC0
    // 0x4300A04C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_boss_angel_DC0(rdram, ctx);
        goto after_1;
    // 0x4300A04C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x4300A050: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x4300A054: lui         $a1, 0x4301
    ctx->r5 = S32(0X4301 << 16);
    // 0x4300A058: lw          $a1, -0x3C0C($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3C0C);
    // 0x4300A05C: lw          $a0, -0x3C10($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3C10);
    // 0x4300A060: jal         0x4300A100
    // 0x4300A064: addiu       $a2, $zero, 0x8C
    ctx->r6 = ADD32(0, 0X8C);
    ovl_boss_angel_A100(rdram, ctx);
        goto after_2;
    // 0x4300A064: addiu       $a2, $zero, 0x8C
    ctx->r6 = ADD32(0, 0X8C);
    after_2:
    // 0x4300A068: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x4300A06C: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x4300A070: addiu       $a0, $a0, -0x3780
    ctx->r4 = ADD32(ctx->r4, -0X3780);
    // 0x4300A074: addiu       $v0, $v0, -0x3C00
    ctx->r2 = ADD32(ctx->r2, -0X3C00);
    // 0x4300A078: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x4300A07C: addiu       $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
L_4300A080:
    // 0x4300A080: addiu       $a1, $v1, 0x1
    ctx->r5 = ADD32(ctx->r3, 0X1);
    // 0x4300A084: addiu       $a2, $v1, 0x2
    ctx->r6 = ADD32(ctx->r3, 0X2);
    // 0x4300A088: addiu       $a3, $v1, 0x3
    ctx->r7 = ADD32(ctx->r3, 0X3);
    // 0x4300A08C: sw          $v1, 0x44($v0)
    MEM_W(0X44, ctx->r2) = ctx->r3;
    // 0x4300A090: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x4300A094: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x4300A098: sw          $a3, 0x11C($v0)
    MEM_W(0X11C, ctx->r2) = ctx->r7;
    // 0x4300A09C: sw          $a3, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r7;
    // 0x4300A0A0: sw          $a2, 0xD4($v0)
    MEM_W(0XD4, ctx->r2) = ctx->r6;
    // 0x4300A0A4: sw          $a2, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r6;
    // 0x4300A0A8: sw          $a1, 0x8C($v0)
    MEM_W(0X8C, ctx->r2) = ctx->r5;
    // 0x4300A0AC: sw          $a1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r5;
    // 0x4300A0B0: sh          $zero, 0x50($v0)
    MEM_H(0X50, ctx->r2) = 0;
    // 0x4300A0B4: sh          $zero, 0x98($v0)
    MEM_H(0X98, ctx->r2) = 0;
    // 0x4300A0B8: sh          $zero, 0xE0($v0)
    MEM_H(0XE0, ctx->r2) = 0;
    // 0x4300A0BC: addiu       $v0, $v0, 0x120
    ctx->r2 = ADD32(ctx->r2, 0X120);
    // 0x4300A0C0: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x4300A0C4: bne         $v1, $t0, L_4300A080
    if (ctx->r3 != ctx->r8) {
        // 0x4300A0C8: sh          $zero, -0x118($v0)
        MEM_H(-0X118, ctx->r2) = 0;
            goto L_4300A080;
    }
    // 0x4300A0C8: sh          $zero, -0x118($v0)
    MEM_H(-0X118, ctx->r2) = 0;
    // 0x4300A0CC: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x4300A0D0: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x4300A0D4: sw          $zero, -0x3740($at)
    MEM_W(-0X3740, ctx->r1) = 0;
    // 0x4300A0D8: addiu       $a0, $a0, -0x6660
    ctx->r4 = ADD32(ctx->r4, -0X6660);
    // 0x4300A0DC: ori         $a1, $zero, 0xFECE
    ctx->r5 = 0 | 0XFECE;
    // 0x4300A0E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x4300A0E4: jal         0x43000820
    // 0x4300A0E8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_boss_angel_820(rdram, ctx);
        goto after_3;
    // 0x4300A0E8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x4300A0EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4300A0F0: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x4300A0F4: sw          $v0, -0x3C08($at)
    MEM_W(-0X3C08, ctx->r1) = ctx->r2;
    // 0x4300A0F8: jr          $ra
    // 0x4300A0FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x4300A0FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void ovl_boss_angel_A100(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300A100: blez        $a2, L_4300A164
    if (SIGNED(ctx->r6) <= 0) {
        // 0x4300A104: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_4300A164;
    }
    // 0x4300A104: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x4300A108: andi        $a3, $a2, 0x3
    ctx->r7 = ctx->r6 & 0X3;
    // 0x4300A10C: beq         $a3, $zero, L_4300A134
    if (ctx->r7 == 0) {
        // 0x4300A110: or          $v1, $a3, $zero
        ctx->r3 = ctx->r7 | 0;
            goto L_4300A134;
    }
    // 0x4300A110: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
L_4300A114:
    // 0x4300A114: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x4300A118: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x4300A11C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x4300A120: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x4300A124: bne         $v1, $v0, L_4300A114
    if (ctx->r3 != ctx->r2) {
        // 0x4300A128: sw          $t6, -0x4($a0)
        MEM_W(-0X4, ctx->r4) = ctx->r14;
            goto L_4300A114;
    }
    // 0x4300A128: sw          $t6, -0x4($a0)
    MEM_W(-0X4, ctx->r4) = ctx->r14;
    // 0x4300A12C: beq         $v0, $a2, L_4300A164
    if (ctx->r2 == ctx->r6) {
        // 0x4300A130: nop
    
            goto L_4300A164;
    }
    // 0x4300A130: nop

L_4300A134:
    // 0x4300A134: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x4300A138: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x4300A13C: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x4300A140: lw          $t8, 0x4($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X4);
    // 0x4300A144: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x4300A148: sw          $t8, -0xC($a0)
    MEM_W(-0XC, ctx->r4) = ctx->r24;
    // 0x4300A14C: lw          $t9, 0x8($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X8);
    // 0x4300A150: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x4300A154: sw          $t9, -0x8($a0)
    MEM_W(-0X8, ctx->r4) = ctx->r25;
    // 0x4300A158: lw          $t0, -0x4($a1)
    ctx->r8 = MEM_W(ctx->r5, -0X4);
    // 0x4300A15C: bne         $v0, $a2, L_4300A134
    if (ctx->r2 != ctx->r6) {
        // 0x4300A160: sw          $t0, -0x4($a0)
        MEM_W(-0X4, ctx->r4) = ctx->r8;
            goto L_4300A134;
    }
    // 0x4300A160: sw          $t0, -0x4($a0)
    MEM_W(-0X4, ctx->r4) = ctx->r8;
L_4300A164:
    // 0x4300A164: jr          $ra
    // 0x4300A168: nop

    return;
    // 0x4300A168: nop

;}
RECOMP_FUNC void ovl_boss_angel_A16C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300A16C: blez        $a2, L_4300A1D0
    if (SIGNED(ctx->r6) <= 0) {
        // 0x4300A170: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_4300A1D0;
    }
    // 0x4300A170: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x4300A174: andi        $a3, $a2, 0x3
    ctx->r7 = ctx->r6 & 0X3;
    // 0x4300A178: beq         $a3, $zero, L_4300A1A0
    if (ctx->r7 == 0) {
        // 0x4300A17C: or          $v1, $a3, $zero
        ctx->r3 = ctx->r7 | 0;
            goto L_4300A1A0;
    }
    // 0x4300A17C: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
L_4300A180:
    // 0x4300A180: lhu         $t6, 0x0($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X0);
    // 0x4300A184: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x4300A188: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x4300A18C: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x4300A190: bne         $v1, $v0, L_4300A180
    if (ctx->r3 != ctx->r2) {
        // 0x4300A194: sh          $t6, -0x2($a0)
        MEM_H(-0X2, ctx->r4) = ctx->r14;
            goto L_4300A180;
    }
    // 0x4300A194: sh          $t6, -0x2($a0)
    MEM_H(-0X2, ctx->r4) = ctx->r14;
    // 0x4300A198: beq         $v0, $a2, L_4300A1D0
    if (ctx->r2 == ctx->r6) {
        // 0x4300A19C: nop
    
            goto L_4300A1D0;
    }
    // 0x4300A19C: nop

L_4300A1A0:
    // 0x4300A1A0: lhu         $t7, 0x0($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X0);
    // 0x4300A1A4: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x4300A1A8: sh          $t7, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r15;
    // 0x4300A1AC: lhu         $t8, 0x2($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X2);
    // 0x4300A1B0: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x4300A1B4: sh          $t8, -0x6($a0)
    MEM_H(-0X6, ctx->r4) = ctx->r24;
    // 0x4300A1B8: lhu         $t9, 0x4($a1)
    ctx->r25 = MEM_HU(ctx->r5, 0X4);
    // 0x4300A1BC: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x4300A1C0: sh          $t9, -0x4($a0)
    MEM_H(-0X4, ctx->r4) = ctx->r25;
    // 0x4300A1C4: lhu         $t0, -0x2($a1)
    ctx->r8 = MEM_HU(ctx->r5, -0X2);
    // 0x4300A1C8: bne         $v0, $a2, L_4300A1A0
    if (ctx->r2 != ctx->r6) {
        // 0x4300A1CC: sh          $t0, -0x2($a0)
        MEM_H(-0X2, ctx->r4) = ctx->r8;
            goto L_4300A1A0;
    }
    // 0x4300A1CC: sh          $t0, -0x2($a0)
    MEM_H(-0X2, ctx->r4) = ctx->r8;
L_4300A1D0:
    // 0x4300A1D0: jr          $ra
    // 0x4300A1D4: nop

    return;
    // 0x4300A1D4: nop

;}
RECOMP_FUNC void ovl_boss_angel_A1D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300A1D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4300A1DC: beq         $a0, $zero, L_4300A1F4
    if (ctx->r4 == 0) {
        // 0x4300A1E0: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_4300A1F4;
    }
    // 0x4300A1E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4300A1E4: jal         0x43000850
    // 0x4300A1E8: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    ovl_boss_angel_850(rdram, ctx);
        goto after_0;
    // 0x4300A1E8: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    after_0:
    // 0x4300A1EC: b           L_4300A200
    // 0x4300A1F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4300A200;
    // 0x4300A1F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4300A1F4:
    // 0x4300A1F4: jal         0x4300085C
    // 0x4300A1F8: nop

    ovl_boss_angel_85C(rdram, ctx);
        goto after_1;
    // 0x4300A1F8: nop

    after_1:
    // 0x4300A1FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4300A200:
    // 0x4300A200: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4300A204: jr          $ra
    // 0x4300A208: nop

    return;
    // 0x4300A208: nop

;}
RECOMP_FUNC void ovl_boss_angel_A20C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300A20C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x4300A210: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x4300A214: addiu       $t6, $zero, 0x64
    ctx->r14 = ADD32(0, 0X64);
    // 0x4300A218: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x4300A21C: c.lt.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl < ctx->f12.fl;
    // 0x4300A220: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x4300A224: bc1f        L_4300A238
    if (!c1cs) {
        // 0x4300A228: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_4300A238;
    }
    // 0x4300A228: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x4300A22C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x4300A230: b           L_4300A25C
    // 0x4300A234: div.s       $f12, $f14, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = DIV_S(ctx->f14.fl, ctx->f12.fl);
        goto L_4300A25C;
    // 0x4300A234: div.s       $f12, $f14, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = DIV_S(ctx->f14.fl, ctx->f12.fl);
L_4300A238:
    // 0x4300A238: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4300A23C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x4300A240: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x4300A244: nop

    // 0x4300A248: bc1f        L_4300A25C
    if (!c1cs) {
        // 0x4300A24C: nop
    
            goto L_4300A25C;
    }
    // 0x4300A24C: nop

    // 0x4300A250: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x4300A254: b           L_4300A25C
    // 0x4300A258: div.s       $f12, $f14, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = DIV_S(ctx->f14.fl, ctx->f12.fl);
        goto L_4300A25C;
    // 0x4300A258: div.s       $f12, $f14, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = DIV_S(ctx->f14.fl, ctx->f12.fl);
L_4300A25C:
    // 0x4300A25C: mul.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x4300A260: addiu       $t7, $zero, 0x15
    ctx->r15 = ADD32(0, 0X15);
    // 0x4300A264: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x4300A268: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4300A26C: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x4300A270: addiu       $t8, $zero, 0x51
    ctx->r24 = ADD32(0, 0X51);
    // 0x4300A274: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x4300A278: mul.s       $f16, $f10, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x4300A27C: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x4300A280: addiu       $t9, $zero, 0x13
    ctx->r25 = ADD32(0, 0X13);
    // 0x4300A284: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x4300A288: div.s       $f2, $f16, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = DIV_S(ctx->f16.fl, ctx->f6.fl);
    // 0x4300A28C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x4300A290: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x4300A294: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x4300A298: mul.s       $f18, $f10, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x4300A29C: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    // 0x4300A2A0: addiu       $t0, $zero, 0xD
    ctx->r8 = ADD32(0, 0XD);
    // 0x4300A2A4: addiu       $t2, $zero, 0xB
    ctx->r10 = ADD32(0, 0XB);
    // 0x4300A2A8: cvt.s.w     $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    ctx->f6.fl = CVT_S_W(ctx->f16.u32l);
    // 0x4300A2AC: mul.s       $f4, $f18, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f12.fl);
    // 0x4300A2B0: add.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f2.fl;
    // 0x4300A2B4: nop

    // 0x4300A2B8: div.s       $f2, $f4, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
L_4300A2BC:
    // 0x4300A2BC: multu       $v1, $v1
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x4300A2C0: addiu       $a1, $v1, -0x1
    ctx->r5 = ADD32(ctx->r3, -0X1);
    // 0x4300A2C4: mtc1        $a0, $f4
    ctx->f4.u32l = ctx->r4;
    // 0x4300A2C8: addiu       $a3, $v1, -0x2
    ctx->r7 = ADD32(ctx->r3, -0X2);
    // 0x4300A2CC: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x4300A2D0: addiu       $t1, $v1, -0x3
    ctx->r9 = ADD32(ctx->r3, -0X3);
    // 0x4300A2D4: addiu       $v1, $v1, -0x4
    ctx->r3 = ADD32(ctx->r3, -0X4);
    // 0x4300A2D8: addiu       $a0, $a0, -0x8
    ctx->r4 = ADD32(ctx->r4, -0X8);
    // 0x4300A2DC: mflo        $t3
    ctx->r11 = lo;
    // 0x4300A2E0: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x4300A2E4: nop

    // 0x4300A2E8: multu       $a1, $a1
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x4300A2EC: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x4300A2F0: mul.s       $f16, $f18, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f18.fl, ctx->f12.fl);
    // 0x4300A2F4: add.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f2.fl;
    // 0x4300A2F8: mul.s       $f6, $f16, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x4300A2FC: mflo        $t4
    ctx->r12 = lo;
    // 0x4300A300: div.s       $f2, $f6, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x4300A304: mtc1        $t4, $f18
    ctx->f18.u32l = ctx->r12;
    // 0x4300A308: multu       $a3, $a3
    result = U64(U32(ctx->r7)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x4300A30C: cvt.s.w     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.fl = CVT_S_W(ctx->f18.u32l);
    // 0x4300A310: mtc1        $a2, $f6
    ctx->f6.u32l = ctx->r6;
    // 0x4300A314: addiu       $a2, $a2, -0x8
    ctx->r6 = ADD32(ctx->r6, -0X8);
    // 0x4300A318: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x4300A31C: mul.s       $f4, $f16, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x4300A320: add.s       $f18, $f10, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x4300A324: mflo        $t5
    ctx->r13 = lo;
    // 0x4300A328: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x4300A32C: mul.s       $f8, $f4, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x4300A330: nop

    // 0x4300A334: div.s       $f2, $f8, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = DIV_S(ctx->f8.fl, ctx->f18.fl);
    // 0x4300A338: multu       $t1, $t1
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x4300A33C: cvt.s.w     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
    // 0x4300A340: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x4300A344: addiu       $t0, $t0, -0x8
    ctx->r8 = ADD32(ctx->r8, -0X8);
    // 0x4300A348: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x4300A34C: cvt.s.w     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.fl = CVT_S_W(ctx->f8.u32l);
    // 0x4300A350: mflo        $t6
    ctx->r14 = lo;
    // 0x4300A354: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x4300A358: mul.s       $f10, $f6, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x4300A35C: add.s       $f16, $f18, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x4300A360: nop

    // 0x4300A364: div.s       $f2, $f10, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x4300A368: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x4300A36C: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x4300A370: addiu       $t2, $t2, -0x8
    ctx->r10 = ADD32(ctx->r10, -0X8);
    // 0x4300A374: mul.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x4300A378: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x4300A37C: mul.s       $f18, $f8, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x4300A380: add.s       $f4, $f16, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f2.fl;
    // 0x4300A384: bne         $v1, $zero, L_4300A2BC
    if (ctx->r3 != 0) {
        // 0x4300A388: div.s       $f2, $f18, $f4
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
            goto L_4300A2BC;
    }
    // 0x4300A388: div.s       $f2, $f18, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
    // 0x4300A38C: blez        $v0, L_4300A3B8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x4300A390: nop
    
            goto L_4300A3B8;
    }
    // 0x4300A390: nop

    // 0x4300A394: add.s       $f8, $f14, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f14.fl + ctx->f2.fl;
    // 0x4300A398: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x4300A39C: div.s       $f10, $f12, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f12.fl, ctx->f8.fl);
    // 0x4300A3A0: lwc1        $f7, -0x4120($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X4120);
    // 0x4300A3A4: lwc1        $f6, -0x411C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X411C);
    // 0x4300A3A8: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x4300A3AC: sub.d       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f6.d - ctx->f16.d;
    // 0x4300A3B0: jr          $ra
    // 0x4300A3B4: cvt.s.d     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f0.fl = CVT_S_D(ctx->f18.d);
    return;
    // 0x4300A3B4: cvt.s.d     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f0.fl = CVT_S_D(ctx->f18.d);
L_4300A3B8:
    // 0x4300A3B8: bgez        $v0, L_4300A3E4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x4300A3BC: nop
    
            goto L_4300A3E4;
    }
    // 0x4300A3BC: nop

    // 0x4300A3C0: add.s       $f8, $f14, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f14.fl + ctx->f2.fl;
    // 0x4300A3C4: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x4300A3C8: div.s       $f10, $f12, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f12.fl, ctx->f8.fl);
    // 0x4300A3CC: lwc1        $f5, -0x4118($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X4118);
    // 0x4300A3D0: lwc1        $f4, -0x4114($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X4114);
    // 0x4300A3D4: cvt.d.s     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f6.d = CVT_D_S(ctx->f10.fl);
    // 0x4300A3D8: sub.d       $f16, $f4, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f16.d = ctx->f4.d - ctx->f6.d;
    // 0x4300A3DC: jr          $ra
    // 0x4300A3E0: cvt.s.d     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f0.fl = CVT_S_D(ctx->f16.d);
    return;
    // 0x4300A3E0: cvt.s.d     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f0.fl = CVT_S_D(ctx->f16.d);
L_4300A3E4:
    // 0x4300A3E4: add.s       $f18, $f14, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f14.fl + ctx->f2.fl;
    // 0x4300A3E8: nop

    // 0x4300A3EC: div.s       $f0, $f12, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = DIV_S(ctx->f12.fl, ctx->f18.fl);
    // 0x4300A3F0: jr          $ra
    // 0x4300A3F4: nop

    return;
    // 0x4300A3F4: nop

;}
RECOMP_FUNC void ovl_boss_angel_A3F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300A3F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4300A3FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4300A400: lwc1        $f6, 0x0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X0);
    // 0x4300A404: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x4300A408: lwc1        $f10, 0x8($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X8);
    // 0x4300A40C: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x4300A410: lwc1        $f8, 0x8($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X8);
    // 0x4300A414: mul.s       $f16, $f0, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x4300A418: sub.s       $f2, $f8, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x4300A41C: mul.s       $f18, $f2, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x4300A420: jal         0x4300B7E0
    // 0x4300A424: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
    ovl_boss_angel_B7E0(rdram, ctx);
        goto after_0;
    // 0x4300A424: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
    after_0:
    // 0x4300A428: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4300A42C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4300A430: jr          $ra
    // 0x4300A434: nop

    return;
    // 0x4300A434: nop

;}
RECOMP_FUNC void ovl_boss_angel_A438(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300A438: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4300A43C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4300A440: lwc1        $f6, 0x0($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X0);
    // 0x4300A444: lwc1        $f4, 0x0($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X0);
    // 0x4300A448: lwc1        $f10, 0x8($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X8);
    // 0x4300A44C: sub.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x4300A450: lwc1        $f8, 0x8($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X8);
    // 0x4300A454: mul.s       $f4, $f14, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x4300A458: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x4300A45C: mtc1        $zero, $f19
    ctx->f_odd[(19 - 1) * 2] = 0;
    // 0x4300A460: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x4300A464: mul.s       $f6, $f16, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x4300A468: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x4300A46C: cvt.d.s     $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f8.d = CVT_D_S(ctx->f12.fl);
    // 0x4300A470: c.eq.d      $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f18.d == ctx->f8.d;
    // 0x4300A474: nop

    // 0x4300A478: bc1t        L_4300A4E0
    if (c1cs) {
        // 0x4300A47C: nop
    
            goto L_4300A4E0;
    }
    // 0x4300A47C: nop

    // 0x4300A480: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x4300A484: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    // 0x4300A488: jal         0x4300B7E0
    // 0x4300A48C: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    ovl_boss_angel_B7E0(rdram, ctx);
        goto after_0;
    // 0x4300A48C: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    after_0:
    // 0x4300A490: mtc1        $zero, $f19
    ctx->f_odd[(19 - 1) * 2] = 0;
    // 0x4300A494: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x4300A498: cvt.d.s     $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.d = CVT_D_S(ctx->f0.fl);
    // 0x4300A49C: c.eq.d      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.d == ctx->f2.d;
    // 0x4300A4A0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x4300A4A4: lwc1        $f14, 0x1C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x4300A4A8: lwc1        $f16, 0x18($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X18);
    // 0x4300A4AC: bc1t        L_4300A4E0
    if (c1cs) {
        // 0x4300A4B0: lui         $at, 0x3FF0
        ctx->r1 = S32(0X3FF0 << 16);
            goto L_4300A4E0;
    }
    // 0x4300A4B0: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x4300A4B4: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x4300A4B8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x4300A4BC: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
    // 0x4300A4C0: div.d       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f2.d); 
    ctx->f4.d = DIV_D(ctx->f10.d, ctx->f2.d);
    // 0x4300A4C4: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    // 0x4300A4C8: mul.s       $f6, $f14, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f12.fl);
    // 0x4300A4CC: swc1        $f12, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f12.u32l;
    // 0x4300A4D0: mul.s       $f8, $f16, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x4300A4D4: swc1        $f6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f6.u32l;
    // 0x4300A4D8: b           L_4300A4F4
    // 0x4300A4DC: swc1        $f8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f8.u32l;
        goto L_4300A4F4;
    // 0x4300A4DC: swc1        $f8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f8.u32l;
L_4300A4E0:
    // 0x4300A4E0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4300A4E4: nop

    // 0x4300A4E8: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
    // 0x4300A4EC: swc1        $f0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f0.u32l;
    // 0x4300A4F0: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
L_4300A4F4:
    // 0x4300A4F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4300A4F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4300A4FC: jr          $ra
    // 0x4300A500: nop

    return;
    // 0x4300A500: nop

;}
RECOMP_FUNC void ovl_boss_angel_A504(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300A504: mtc1        $zero, $f5
    ctx->f_odd[(5 - 1) * 2] = 0;
    // 0x4300A508: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x4300A50C: cvt.d.s     $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f6.d = CVT_D_S(ctx->f14.fl);
    // 0x4300A510: c.eq.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d == ctx->f6.d;
    // 0x4300A514: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4300A518: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4300A51C: bc1f        L_4300A568
    if (!c1cs) {
        // 0x4300A520: swc1        $f12, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
            goto L_4300A568;
    }
    // 0x4300A520: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    // 0x4300A524: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x4300A528: lwc1        $f8, 0x18($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X18);
    // 0x4300A52C: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x4300A530: c.lt.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl < ctx->f2.fl;
    // 0x4300A534: nop

    // 0x4300A538: bc1f        L_4300A554
    if (!c1cs) {
        // 0x4300A53C: nop
    
            goto L_4300A554;
    }
    // 0x4300A53C: nop

    // 0x4300A540: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x4300A544: lwc1        $f3, -0x4110($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, -0X4110);
    // 0x4300A548: lwc1        $f2, -0x410C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X410C);
    // 0x4300A54C: b           L_4300A5D4
    // 0x4300A550: cvt.s.d     $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f0.fl = CVT_S_D(ctx->f2.d);
        goto L_4300A5D4;
    // 0x4300A550: cvt.s.d     $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f0.fl = CVT_S_D(ctx->f2.d);
L_4300A554:
    // 0x4300A554: lwc1        $f3, -0x4108($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, -0X4108);
    // 0x4300A558: lwc1        $f2, -0x4104($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X4104);
    // 0x4300A55C: nop

    // 0x4300A560: b           L_4300A5D4
    // 0x4300A564: cvt.s.d     $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f0.fl = CVT_S_D(ctx->f2.d);
        goto L_4300A5D4;
    // 0x4300A564: cvt.s.d     $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f0.fl = CVT_S_D(ctx->f2.d);
L_4300A568:
    // 0x4300A568: lwc1        $f10, 0x18($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X18);
    // 0x4300A56C: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    // 0x4300A570: jal         0x4300A20C
    // 0x4300A574: div.s       $f12, $f10, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = DIV_S(ctx->f10.fl, ctx->f14.fl);
    ovl_boss_angel_A20C(rdram, ctx);
        goto after_0;
    // 0x4300A574: div.s       $f12, $f10, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = DIV_S(ctx->f10.fl, ctx->f14.fl);
    after_0:
    // 0x4300A578: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x4300A57C: lwc1        $f14, 0x1C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x4300A580: lwc1        $f16, 0x18($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X18);
    // 0x4300A584: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
    // 0x4300A588: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x4300A58C: bc1f        L_4300A59C
    if (!c1cs) {
        // 0x4300A590: nop
    
            goto L_4300A59C;
    }
    // 0x4300A590: nop

    // 0x4300A594: b           L_4300A5D8
    // 0x4300A598: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4300A5D8;
    // 0x4300A598: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4300A59C:
    // 0x4300A59C: c.lt.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl < ctx->f2.fl;
    // 0x4300A5A0: cvt.d.s     $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f18.d = CVT_D_S(ctx->f12.fl);
    // 0x4300A5A4: bc1f        L_4300A5C0
    if (!c1cs) {
        // 0x4300A5A8: lui         $at, 0x4301
        ctx->r1 = S32(0X4301 << 16);
            goto L_4300A5C0;
    }
    // 0x4300A5A8: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x4300A5AC: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x4300A5B0: lwc1        $f3, -0x4100($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, -0X4100);
    // 0x4300A5B4: lwc1        $f2, -0x40FC($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X40FC);
    // 0x4300A5B8: b           L_4300A5D0
    // 0x4300A5BC: add.d       $f4, $f2, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f2.d + ctx->f18.d;
        goto L_4300A5D0;
    // 0x4300A5BC: add.d       $f4, $f2, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f2.d + ctx->f18.d;
L_4300A5C0:
    // 0x4300A5C0: lwc1        $f3, -0x40F8($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, -0X40F8);
    // 0x4300A5C4: lwc1        $f2, -0x40F4($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X40F4);
    // 0x4300A5C8: nop

    // 0x4300A5CC: add.d       $f4, $f2, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f2.d + ctx->f18.d;
L_4300A5D0:
    // 0x4300A5D0: cvt.s.d     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f0.fl = CVT_S_D(ctx->f4.d);
L_4300A5D4:
    // 0x4300A5D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4300A5D8:
    // 0x4300A5D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4300A5DC: jr          $ra
    // 0x4300A5E0: nop

    return;
    // 0x4300A5E0: nop

;}
RECOMP_FUNC void ovl_boss_angel_A5E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300A5E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4300A5E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4300A5EC: jal         0x4300B4A0
    // 0x4300A5F0: nop

    ovl_boss_angel_B4A0(rdram, ctx);
        goto after_0;
    // 0x4300A5F0: nop

    after_0:
    // 0x4300A5F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4300A5F8: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x4300A5FC: sw          $v0, -0x3730($at)
    MEM_W(-0X3730, ctx->r1) = ctx->r2;
    // 0x4300A600: jr          $ra
    // 0x4300A604: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x4300A604: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void ovl_boss_angel_A608(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300A608: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x4300A60C: addiu       $a0, $a0, -0x3730
    ctx->r4 = ADD32(ctx->r4, -0X3730);
    // 0x4300A610: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x4300A614: lui         $at, 0x5D58
    ctx->r1 = S32(0X5D58 << 16);
    // 0x4300A618: ori         $at, $at, 0x8B66
    ctx->r1 = ctx->r1 | 0X8B66;
    // 0x4300A61C: multu       $t6, $at
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r1)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x4300A620: lui         $at, 0x300
    ctx->r1 = S32(0X300 << 16);
    // 0x4300A624: ori         $at, $at, 0x100
    ctx->r1 = ctx->r1 | 0X100;
    // 0x4300A628: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4300A62C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4300A630: mflo        $v1
    ctx->r3 = lo;
    // 0x4300A634: and         $t8, $v1, $at
    ctx->r24 = ctx->r3 & ctx->r1;
    // 0x4300A638: bne         $t8, $zero, L_4300A660
    if (ctx->r24 != 0) {
        // 0x4300A63C: sw          $v1, 0x0($a0)
        MEM_W(0X0, ctx->r4) = ctx->r3;
            goto L_4300A660;
    }
    // 0x4300A63C: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x4300A640: jal         0x4300B4A0
    // 0x4300A644: nop

    ovl_boss_angel_B4A0(rdram, ctx);
        goto after_0;
    // 0x4300A644: nop

    after_0:
    // 0x4300A648: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x4300A64C: addiu       $a0, $a0, -0x3730
    ctx->r4 = ADD32(ctx->r4, -0X3730);
    // 0x4300A650: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x4300A654: nop

    // 0x4300A658: subu        $v1, $t9, $v0
    ctx->r3 = SUB32(ctx->r25, ctx->r2);
    // 0x4300A65C: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
L_4300A660:
    // 0x4300A660: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4300A664: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4300A668: jr          $ra
    // 0x4300A66C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x4300A66C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_boss_angel_A670(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300A670: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4300A674: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4300A678: jal         0x4300A608
    // 0x4300A67C: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    ovl_boss_angel_A608(rdram, ctx);
        goto after_0;
    // 0x4300A67C: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x4300A680: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x4300A684: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x4300A688: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x4300A68C: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x4300A690: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x4300A694: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x4300A698: cvt.d.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.d = CVT_D_W(ctx->f16.u32l);
    // 0x4300A69C: bgez        $v0, L_4300A6B4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x4300A6A0: cvt.d.s     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
            goto L_4300A6B4;
    }
    // 0x4300A6A0: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x4300A6A4: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x4300A6A8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x4300A6AC: nop

    // 0x4300A6B0: add.d       $f18, $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f18.d = ctx->f18.d + ctx->f4.d;
L_4300A6B4:
    // 0x4300A6B4: mul.d       $f6, $f18, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f10.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f10.d);
    // 0x4300A6B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4300A6BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4300A6C0: jr          $ra
    // 0x4300A6C4: cvt.s.d     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f0.fl = CVT_S_D(ctx->f6.d);
    return;
    // 0x4300A6C4: cvt.s.d     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f0.fl = CVT_S_D(ctx->f6.d);
;}
RECOMP_FUNC void ovl_boss_angel_A6C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300A6C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4300A6CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4300A6D0: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    // 0x4300A6D4: swc1        $f14, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f14.u32l;
    // 0x4300A6D8: jal         0x4300A670
    // 0x4300A6DC: add.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f12.fl;
    ovl_boss_angel_A670(rdram, ctx);
        goto after_0;
    // 0x4300A6DC: add.s       $f12, $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f12.fl;
    after_0:
    // 0x4300A6E0: lwc1        $f14, 0x18($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X18);
    // 0x4300A6E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4300A6E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4300A6EC: jr          $ra
    // 0x4300A6F0: sub.s       $f0, $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f14.fl;
    return;
    // 0x4300A6F0: sub.s       $f0, $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f14.fl;
;}
RECOMP_FUNC void ovl_boss_angel_A6F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300A6F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4300A6F8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x4300A6FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4300A700: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x4300A704: jal         0x4300A670
    // 0x4300A708: nop

    ovl_boss_angel_A670(rdram, ctx);
        goto after_0;
    // 0x4300A708: nop

    after_0:
    // 0x4300A70C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4300A710: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4300A714: jr          $ra
    // 0x4300A718: nop

    return;
    // 0x4300A718: nop

;}
RECOMP_FUNC void ovl_boss_angel_A71C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300A71C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4300A720: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x4300A724: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4300A728: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x4300A72C: jal         0x4300A6C8
    // 0x4300A730: nop

    ovl_boss_angel_A6C8(rdram, ctx);
        goto after_0;
    // 0x4300A730: nop

    after_0:
    // 0x4300A734: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4300A738: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4300A73C: jr          $ra
    // 0x4300A740: nop

    return;
    // 0x4300A740: nop

;}
RECOMP_FUNC void ovl_boss_angel_A744(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300A744: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x4300A748: swc1        $f12, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f12.u32l;
    // 0x4300A74C: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x4300A750: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x4300A754: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x4300A758: sub.s       $f6, $f14, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f14.fl - ctx->f4.fl;
    // 0x4300A75C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4300A760: mul.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x4300A764: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x4300A768: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x4300A76C: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x4300A770: mov.s       $f20, $f12
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    ctx->f20.fl = ctx->f12.fl;
    // 0x4300A774: jal         0x4300B468
    // 0x4300A778: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    ovl_boss_angel_B468(rdram, ctx);
        goto after_0;
    // 0x4300A778: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x4300A77C: lwc1        $f2, 0x40($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X40);
    // 0x4300A780: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x4300A784: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x4300A788: nop

    // 0x4300A78C: bc1f        L_4300A7C8
    if (!c1cs) {
        // 0x4300A790: nop
    
            goto L_4300A7C8;
    }
    // 0x4300A790: nop

    // 0x4300A794: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x4300A798: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x4300A79C: c.lt.s      $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f12.fl < ctx->f10.fl;
    // 0x4300A7A0: nop

    // 0x4300A7A4: bc1f        L_4300A7B4
    if (!c1cs) {
        // 0x4300A7A8: nop
    
            goto L_4300A7B4;
    }
    // 0x4300A7A8: nop

    // 0x4300A7AC: b           L_4300A7B4
    // 0x4300A7B0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_4300A7B4;
    // 0x4300A7B0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_4300A7B4:
    // 0x4300A7B4: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x4300A7B8: nop

    // 0x4300A7BC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x4300A7C0: mul.s       $f20, $f18, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = MUL_S(ctx->f18.fl, ctx->f2.fl);
    // 0x4300A7C4: nop

L_4300A7C8:
    // 0x4300A7C8: jal         0x4300B468
    // 0x4300A7CC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    ovl_boss_angel_B468(rdram, ctx);
        goto after_1;
    // 0x4300A7CC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_1:
    // 0x4300A7D0: lwc1        $f2, 0x3C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x4300A7D4: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x4300A7D8: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x4300A7DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4300A7E0: bc1f        L_4300A81C
    if (!c1cs) {
        // 0x4300A7E4: nop
    
            goto L_4300A81C;
    }
    // 0x4300A7E4: nop

    // 0x4300A7E8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x4300A7EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x4300A7F0: c.lt.s      $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f20.fl < ctx->f4.fl;
    // 0x4300A7F4: nop

    // 0x4300A7F8: bc1f        L_4300A808
    if (!c1cs) {
        // 0x4300A7FC: nop
    
            goto L_4300A808;
    }
    // 0x4300A7FC: nop

    // 0x4300A800: b           L_4300A808
    // 0x4300A804: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_4300A808;
    // 0x4300A804: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_4300A808:
    // 0x4300A808: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x4300A80C: nop

    // 0x4300A810: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x4300A814: mul.s       $f20, $f8, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x4300A818: nop

L_4300A81C:
    // 0x4300A81C: add.s       $f0, $f10, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = ctx->f10.fl + ctx->f20.fl;
    // 0x4300A820: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x4300A824: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x4300A828: jr          $ra
    // 0x4300A82C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x4300A82C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_boss_angel_A830(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300A830: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4300A834: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x4300A838: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x4300A83C: nop

    // 0x4300A840: bc1f        L_4300A870
    if (!c1cs) {
        // 0x4300A844: nop
    
            goto L_4300A870;
    }
    // 0x4300A844: nop

    // 0x4300A848: lwc1        $f3, -0x40F0($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, -0X40F0);
    // 0x4300A84C: lwc1        $f2, -0x40EC($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X40EC);
    // 0x4300A850: nop

L_4300A854:
    // 0x4300A854: cvt.d.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.d = CVT_D_S(ctx->f12.fl);
    // 0x4300A858: add.d       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f2.d); 
    ctx->f6.d = ctx->f4.d + ctx->f2.d;
    // 0x4300A85C: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    // 0x4300A860: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x4300A864: nop

    // 0x4300A868: bc1t        L_4300A854
    if (c1cs) {
        // 0x4300A86C: nop
    
            goto L_4300A854;
    }
    // 0x4300A86C: nop

L_4300A870:
    // 0x4300A870: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x4300A874: lwc1        $f3, -0x40E8($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, -0X40E8);
    // 0x4300A878: lwc1        $f2, -0x40E4($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X40E4);
    // 0x4300A87C: cvt.d.s     $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.d = CVT_D_S(ctx->f12.fl);
    // 0x4300A880: c.lt.d      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.d < ctx->f0.d;
    // 0x4300A884: nop

    // 0x4300A888: bc1f        L_4300A8AC
    if (!c1cs) {
        // 0x4300A88C: nop
    
            goto L_4300A8AC;
    }
    // 0x4300A88C: nop

L_4300A890:
    // 0x4300A890: sub.d       $f8, $f0, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f8.d = ctx->f0.d - ctx->f2.d;
    // 0x4300A894: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    // 0x4300A898: cvt.d.s     $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.d = CVT_D_S(ctx->f12.fl);
    // 0x4300A89C: c.lt.d      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.d < ctx->f0.d;
    // 0x4300A8A0: nop

    // 0x4300A8A4: bc1t        L_4300A890
    if (c1cs) {
        // 0x4300A8A8: nop
    
            goto L_4300A890;
    }
    // 0x4300A8A8: nop

L_4300A8AC:
    // 0x4300A8AC: jr          $ra
    // 0x4300A8B0: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    return;
    // 0x4300A8B0: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
;}
RECOMP_FUNC void ovl_boss_angel_A8B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300A8B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4300A8B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4300A8BC: jal         0x4300A830
    // 0x4300A8C0: nop

    ovl_boss_angel_A830(rdram, ctx);
        goto after_0;
    // 0x4300A8C0: nop

    after_0:
    // 0x4300A8C4: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x4300A8C8: lwc1        $f5, -0x40E0($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X40E0);
    // 0x4300A8CC: lwc1        $f4, -0x40DC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X40DC);
    // 0x4300A8D0: cvt.d.s     $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.d = CVT_D_S(ctx->f0.fl);
    // 0x4300A8D4: c.lt.d      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.d < ctx->f2.d;
    // 0x4300A8D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4300A8DC: bc1f        L_4300A8FC
    if (!c1cs) {
        // 0x4300A8E0: mov.s       $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
            goto L_4300A8FC;
    }
    // 0x4300A8E0: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x4300A8E4: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x4300A8E8: lwc1        $f7, -0x40D8($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X40D8);
    // 0x4300A8EC: lwc1        $f6, -0x40D4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X40D4);
    // 0x4300A8F0: nop

    // 0x4300A8F4: sub.d       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f2.d - ctx->f6.d;
    // 0x4300A8F8: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
L_4300A8FC:
    // 0x4300A8FC: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    // 0x4300A900: jr          $ra
    // 0x4300A904: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x4300A904: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void ovl_boss_angel_A908(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300A908: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x4300A90C: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    // 0x4300A910: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x4300A914: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x4300A918: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x4300A91C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x4300A920: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x4300A924: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x4300A928: jal         0x4300A8B4
    // 0x4300A92C: sub.s       $f12, $f14, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f14.fl - ctx->f4.fl;
    ovl_boss_angel_A8B4(rdram, ctx);
        goto after_0;
    // 0x4300A92C: sub.s       $f12, $f14, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f14.fl - ctx->f4.fl;
    after_0:
    // 0x4300A930: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x4300A934: jal         0x4300B468
    // 0x4300A938: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    ovl_boss_angel_B468(rdram, ctx);
        goto after_1;
    // 0x4300A938: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_1:
    // 0x4300A93C: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x4300A940: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    // 0x4300A944: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x4300A948: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x4300A94C: bc1f        L_4300A96C
    if (!c1cs) {
        // 0x4300A950: addiu       $a3, $zero, 0x0
        ctx->r7 = ADD32(0, 0X0);
            goto L_4300A96C;
    }
    // 0x4300A950: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x4300A954: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x4300A958: add.s       $f14, $f12, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f14.fl = ctx->f12.fl + ctx->f20.fl;
    // 0x4300A95C: jal         0x4300A744
    // 0x4300A960: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    ovl_boss_angel_A744(rdram, ctx);
        goto after_2;
    // 0x4300A960: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x4300A964: b           L_4300A974
    // 0x4300A968: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
        goto L_4300A974;
    // 0x4300A968: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
L_4300A96C:
    // 0x4300A96C: lwc1        $f20, 0x28($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X28);
    // 0x4300A970: nop

L_4300A974:
    // 0x4300A974: jal         0x4300A830
    // 0x4300A978: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    ovl_boss_angel_A830(rdram, ctx);
        goto after_3;
    // 0x4300A978: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_3:
    // 0x4300A97C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x4300A980: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x4300A984: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x4300A988: jr          $ra
    // 0x4300A98C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x4300A98C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_boss_angel_A990(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300A990: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x4300A994: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4300A998: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x4300A99C: addiu       $t6, $zero, 0xC
    ctx->r14 = ADD32(0, 0XC);
    // 0x4300A9A0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x4300A9A4: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x4300A9A8: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x4300A9AC: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    // 0x4300A9B0: jal         0x430006C4
    // 0x4300A9B4: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_boss_angel_6C4(rdram, ctx);
        goto after_0;
    // 0x4300A9B4: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x4300A9B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4300A9BC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x4300A9C0: jr          $ra
    // 0x4300A9C4: nop

    return;
    // 0x4300A9C4: nop

;}
RECOMP_FUNC void ovl_boss_angel_A9C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300A9C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4300A9CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4300A9D0: jal         0x4300A990
    // 0x4300A9D4: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    ovl_boss_angel_A990(rdram, ctx);
        goto after_0;
    // 0x4300A9D4: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    after_0:
    // 0x4300A9D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4300A9DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4300A9E0: jr          $ra
    // 0x4300A9E4: nop

    return;
    // 0x4300A9E4: nop

;}
RECOMP_FUNC void ovl_boss_angel_A9E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300A9E8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x4300A9EC: lui         $t7, 0x4301
    ctx->r15 = S32(0X4301 << 16);
    // 0x4300A9F0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x4300A9F4: lw          $t7, -0x43A0($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X43A0);
    // 0x4300A9F8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x4300A9FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4300AA00: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x4300AA04: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x4300AA08: jal         0x4300A100
    // 0x4300AA0C: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    ovl_boss_angel_A100(rdram, ctx);
        goto after_0;
    // 0x4300AA0C: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    after_0:
    // 0x4300AA10: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x4300AA14: addiu       $t8, $zero, 0xC
    ctx->r24 = ADD32(0, 0XC);
    // 0x4300AA18: lw          $a0, -0x4010($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4010);
    // 0x4300AA1C: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
    // 0x4300AA20: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x4300AA24: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    // 0x4300AA28: jal         0x430006C4
    // 0x4300AA2C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_boss_angel_6C4(rdram, ctx);
        goto after_1;
    // 0x4300AA2C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x4300AA30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4300AA34: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x4300AA38: jr          $ra
    // 0x4300AA3C: nop

    return;
    // 0x4300AA3C: nop

;}
