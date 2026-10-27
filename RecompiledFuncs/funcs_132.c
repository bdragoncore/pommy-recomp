#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_boss_demon_66B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430066B0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x430066B4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x430066B8: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x430066BC: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x430066C0: lwc1        $f4, 0x24($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X24);
    // 0x430066C4: lw          $a3, 0x58($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X58);
    // 0x430066C8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x430066CC: jal         0x43006550
    // 0x430066D0: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    ovl_boss_demon_6550(rdram, ctx);
        goto after_0;
    // 0x430066D0: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x430066D4: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x430066D8: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x430066DC: lw          $a1, 0x18($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X18);
    // 0x430066E0: cvt.d.s     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f0.d = CVT_D_S(ctx->f6.fl);
    // 0x430066E4: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x430066E8: mfc1        $a2, $f1
    ctx->r6 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x430066EC: swc1        $f0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f0.u32l;
    // 0x430066F0: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x430066F4: swc1        $f1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x430066F8: swc1        $f1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x430066FC: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    // 0x43006700: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x43006704: jal         0x43000DC0
    // 0x43006708: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    ovl_boss_demon_DC0(rdram, ctx);
        goto after_1;
    // 0x43006708: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_1:
    // 0x4300670C: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
    // 0x43006710: lui         $t7, 0x4300
    ctx->r15 = S32(0X4300 << 16);
    // 0x43006714: lw          $t6, 0x54($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X54);
    // 0x43006718: addiu       $t7, $t7, 0x69F8
    ctx->r15 = ADD32(ctx->r15, 0X69F8);
    // 0x4300671C: sw          $t6, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r14;
    // 0x43006720: sw          $t7, 0x54($v1)
    MEM_W(0X54, ctx->r3) = ctx->r15;
    // 0x43006724: sw          $s0, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r16;
    // 0x43006728: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x4300672C: nop

    // 0x43006730: sw          $t8, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r24;
    // 0x43006734: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x43006738: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x4300673C: jr          $ra
    // 0x43006740: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x43006740: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_boss_demon_6744(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006744: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x43006748: nop

    // 0x4300674C: lw          $t6, 0x34($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X34);
    // 0x43006750: nop

    // 0x43006754: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x43006758: sw          $t7, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->r15;
    // 0x4300675C: lw          $at, 0x0($a1)
    ctx->r1 = MEM_W(ctx->r5, 0X0);
    // 0x43006760: nop

    // 0x43006764: sw          $at, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->r1;
    // 0x43006768: lw          $t9, 0x4($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X4);
    // 0x4300676C: nop

    // 0x43006770: sw          $t9, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r25;
    // 0x43006774: lw          $at, 0x8($a1)
    ctx->r1 = MEM_W(ctx->r5, 0X8);
    // 0x43006778: jr          $ra
    // 0x4300677C: sw          $at, 0x40($v0)
    MEM_W(0X40, ctx->r2) = ctx->r1;
    return;
    // 0x4300677C: sw          $at, 0x40($v0)
    MEM_W(0X40, ctx->r2) = ctx->r1;
;}
RECOMP_FUNC void ovl_boss_demon_6780(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006780: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x43006784: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x43006788: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x4300678C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x43006790: lw          $s0, 0x28($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X28);
    // 0x43006794: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x43006798: lw          $t6, 0x18($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X18);
    // 0x4300679C: nop

    // 0x430067A0: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x430067A4: lwc1        $f12, 0x20($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X20);
    // 0x430067A8: jal         0x43009E70
    // 0x430067AC: nop

    ovl_boss_demon_9E70(rdram, ctx);
        goto after_0;
    // 0x430067AC: nop

    after_0:
    // 0x430067B0: lwc1        $f6, 0x28($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X28);
    // 0x430067B4: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x430067B8: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x430067BC: lwc1        $f16, 0x4($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X4);
    // 0x430067C0: lwc1        $f18, 0x2C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x430067C4: lwc1        $f12, 0x20($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X20);
    // 0x430067C8: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x430067CC: add.s       $f6, $f16, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x430067D0: swc1        $f10, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f10.u32l;
    // 0x430067D4: jal         0x4300A030
    // 0x430067D8: swc1        $f6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f6.u32l;
    ovl_boss_demon_A030(rdram, ctx);
        goto after_1;
    // 0x430067D8: swc1        $f6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f6.u32l;
    after_1:
    // 0x430067DC: lwc1        $f8, 0x28($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X28);
    // 0x430067E0: lwc1        $f4, 0x8($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X8);
    // 0x430067E4: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x430067E8: lwc1        $f18, 0x2C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x430067EC: lwc1        $f6, 0x30($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X30);
    // 0x430067F0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x430067F4: add.s       $f16, $f4, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x430067F8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x430067FC: add.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x43006800: swc1        $f16, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f16.u32l;
    // 0x43006804: swc1        $f8, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f8.u32l;
    // 0x43006808: lw          $t9, 0x48($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X48);
    // 0x4300680C: nop

    // 0x43006810: jalr        $t9
    // 0x43006814: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x43006814: nop

    after_2:
    // 0x43006818: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x4300681C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x43006820: lw          $t9, 0x40($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X40);
    // 0x43006824: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x43006828: jalr        $t9
    // 0x4300682C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x4300682C: nop

    after_3:
    // 0x43006830: lw          $t7, 0x34($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X34);
    // 0x43006834: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43006838: beq         $t7, $zero, L_430068AC
    if (ctx->r15 == 0) {
        // 0x4300683C: addiu       $a1, $zero, 0x1DB
        ctx->r5 = ADD32(0, 0X1DB);
            goto L_430068AC;
    }
    // 0x4300683C: addiu       $a1, $zero, 0x1DB
    ctx->r5 = ADD32(0, 0X1DB);
    // 0x43006840: lw          $t8, 0x48($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X48);
    // 0x43006844: sw          $zero, 0x20($s1)
    MEM_W(0X20, ctx->r17) = 0;
    // 0x43006848: lui         $a3, 0x4300
    ctx->r7 = S32(0X4300 << 16);
    // 0x4300684C: addiu       $t0, $zero, 0x1E
    ctx->r8 = ADD32(0, 0X1E);
    // 0x43006850: sw          $t8, 0x54($s1)
    MEM_W(0X54, ctx->r17) = ctx->r24;
    // 0x43006854: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x43006858: addiu       $a3, $a3, 0x68C0
    ctx->r7 = ADD32(ctx->r7, 0X68C0);
    // 0x4300685C: jal         0x430066B0
    // 0x43006860: addiu       $a2, $zero, 0x1DC
    ctx->r6 = ADD32(0, 0X1DC);
    ovl_boss_demon_66B0(rdram, ctx);
        goto after_4;
    // 0x43006860: addiu       $a2, $zero, 0x1DC
    ctx->r6 = ADD32(0, 0X1DC);
    after_4:
    // 0x43006864: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x43006868: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4300686C: lwc1        $f10, 0x24($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X24);
    // 0x43006870: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x43006874: c.lt.s      $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f4.fl < ctx->f10.fl;
    // 0x43006878: addiu       $a0, $zero, 0x2F2
    ctx->r4 = ADD32(0, 0X2F2);
    // 0x4300687C: bc1f        L_430068A4
    if (!c1cs) {
        // 0x43006880: nop
    
            goto L_430068A4;
    }
    // 0x43006880: nop

    // 0x43006884: jal         0x43000280
    // 0x43006888: addiu       $a0, $zero, 0x2FD
    ctx->r4 = ADD32(0, 0X2FD);
    ovl_boss_demon_280(rdram, ctx);
        goto after_5;
    // 0x43006888: addiu       $a0, $zero, 0x2FD
    ctx->r4 = ADD32(0, 0X2FD);
    after_5:
    // 0x4300688C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x43006890: addiu       $a1, $zero, 0x3F
    ctx->r5 = ADD32(0, 0X3F);
    // 0x43006894: jal         0x43000CA0
    // 0x43006898: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_boss_demon_CA0(rdram, ctx);
        goto after_6;
    // 0x43006898: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_6:
    // 0x4300689C: b           L_430068B0
    // 0x430068A0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_430068B0;
    // 0x430068A0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_430068A4:
    // 0x430068A4: jal         0x43000280
    // 0x430068A8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_boss_demon_280(rdram, ctx);
        goto after_7;
    // 0x430068A8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_7:
L_430068AC:
    // 0x430068AC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_430068B0:
    // 0x430068B0: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x430068B4: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x430068B8: jr          $ra
    // 0x430068BC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x430068BC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_boss_demon_68C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430068C0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x430068C4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x430068C8: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x430068CC: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x430068D0: lw          $s0, 0x28($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X28);
    // 0x430068D4: addiu       $t9, $zero, 0x1E
    ctx->r25 = ADD32(0, 0X1E);
    // 0x430068D8: lw          $t7, 0x1C($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X1C);
    // 0x430068DC: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430068E0: lw          $t8, 0x20($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X20);
    // 0x430068E4: lwc1        $f9, -0x59C0($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X59C0);
    // 0x430068E8: subu        $t0, $t9, $t8
    ctx->r8 = SUB32(ctx->r25, ctx->r24);
    // 0x430068EC: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x430068F0: lwc1        $f8, -0x59BC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X59BC);
    // 0x430068F4: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x430068F8: lui         $at, 0x403E
    ctx->r1 = S32(0X403E << 16);
    // 0x430068FC: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x43006900: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x43006904: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x43006908: nop

    // 0x4300690C: div.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = DIV_D(ctx->f10.d, ctx->f16.d);
    // 0x43006910: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    // 0x43006914: jal         0x43009E70
    // 0x43006918: swc1        $f12, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f12.u32l;
    ovl_boss_demon_9E70(rdram, ctx);
        goto after_0;
    // 0x43006918: swc1        $f12, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x4300691C: lwc1        $f4, 0x24($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X24);
    // 0x43006920: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43006924: mul.s       $f2, $f0, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x43006928: lwc1        $f14, 0x44($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X44);
    // 0x4300692C: lwc1        $f11, -0x59B8($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X59B8);
    // 0x43006930: lwc1        $f10, -0x59B4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X59B4);
    // 0x43006934: cvt.d.s     $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f8.d = CVT_D_S(ctx->f14.fl);
    // 0x43006938: add.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f2.fl + ctx->f2.fl;
    // 0x4300693C: sub.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d - ctx->f10.d;
    // 0x43006940: swc1        $f6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f6.u32l;
    // 0x43006944: jal         0x4300A030
    // 0x43006948: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    ovl_boss_demon_A030(rdram, ctx);
        goto after_1;
    // 0x43006948: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    after_1:
    // 0x4300694C: lwc1        $f18, 0x24($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X24);
    // 0x43006950: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x43006954: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x43006958: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x4300695C: nop

    // 0x43006960: add.s       $f2, $f4, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f4.fl + ctx->f12.fl;
    // 0x43006964: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x43006968: nop

    // 0x4300696C: bc1f        L_43006994
    if (!c1cs) {
        // 0x43006970: nop
    
            goto L_43006994;
    }
    // 0x43006970: nop

    // 0x43006974: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x43006978: swc1        $f2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f2.u32l;
    // 0x4300697C: lw          $t9, 0x4C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X4C);
    // 0x43006980: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x43006984: jalr        $t9
    // 0x43006988: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x43006988: nop

    after_2:
    // 0x4300698C: lwc1        $f2, 0x3C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x43006990: nop

L_43006994:
    // 0x43006994: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x43006998: swc1        $f2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f2.u32l;
    // 0x4300699C: lw          $t9, 0x44($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X44);
    // 0x430069A0: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x430069A4: jalr        $t9
    // 0x430069A8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x430069A8: nop

    after_3:
    // 0x430069AC: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x430069B0: lwc1        $f2, 0x3C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x430069B4: lw          $a1, 0x18($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X18);
    // 0x430069B8: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x430069BC: cvt.d.s     $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.d = CVT_D_S(ctx->f2.fl);
    // 0x430069C0: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x430069C4: mfc1        $a2, $f1
    ctx->r6 = (int32_t)ctx->f_odd[(1 - 1) * 2];
    // 0x430069C8: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x430069CC: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    // 0x430069D0: swc1        $f9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(9 - 1) * 2];
    // 0x430069D4: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x430069D8: swc1        $f1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x430069DC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x430069E0: jal         0x43000DC0
    // 0x430069E4: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    ovl_boss_demon_DC0(rdram, ctx);
        goto after_4;
    // 0x430069E4: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_4:
    // 0x430069E8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x430069EC: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x430069F0: jr          $ra
    // 0x430069F4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x430069F4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_boss_demon_69F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430069F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x430069FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43006A00: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x43006A04: lw          $a0, 0x28($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X28);
    // 0x43006A08: nop

    // 0x43006A0C: lw          $t6, 0x48($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X48);
    // 0x43006A10: nop

    // 0x43006A14: sw          $t6, 0x54($a1)
    MEM_W(0X54, ctx->r5) = ctx->r14;
    // 0x43006A18: sw          $zero, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = 0;
    // 0x43006A1C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x43006A20: lw          $t9, 0x44($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X44);
    // 0x43006A24: nop

    // 0x43006A28: jalr        $t9
    // 0x43006A2C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43006A2C: nop

    after_0:
    // 0x43006A30: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43006A34: nop

    // 0x43006A38: lw          $t9, 0x54($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X54);
    // 0x43006A3C: nop

    // 0x43006A40: jalr        $t9
    // 0x43006A44: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x43006A44: nop

    after_1:
    // 0x43006A48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43006A4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43006A50: jr          $ra
    // 0x43006A54: nop

    return;
    // 0x43006A54: nop

;}
RECOMP_FUNC void ovl_boss_demon_6A58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006A58: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43006A5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43006A60: lw          $a1, 0x1C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X1C);
    // 0x43006A64: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x43006A68: beq         $a1, $zero, L_43006A8C
    if (ctx->r5 == 0) {
        // 0x43006A6C: nop
    
            goto L_43006A8C;
    }
    // 0x43006A6C: nop

    // 0x43006A70: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x43006A74: lw          $t9, 0x54($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X54);
    // 0x43006A78: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x43006A7C: jalr        $t9
    // 0x43006A80: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43006A80: nop

    after_0:
    // 0x43006A84: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x43006A88: nop

L_43006A8C:
    // 0x43006A8C: lw          $a0, 0x18($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X18);
    // 0x43006A90: nop

    // 0x43006A94: beq         $a0, $zero, L_43006AB8
    if (ctx->r4 == 0) {
        // 0x43006A98: nop
    
            goto L_43006AB8;
    }
    // 0x43006A98: nop

    // 0x43006A9C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x43006AA0: lw          $t9, 0x54($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X54);
    // 0x43006AA4: nop

    // 0x43006AA8: jalr        $t9
    // 0x43006AAC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x43006AAC: nop

    after_1:
    // 0x43006AB0: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x43006AB4: nop

L_43006AB8:
    // 0x43006AB8: jal         0x430000F4
    // 0x43006ABC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    ovl_boss_demon_F4(rdram, ctx);
        goto after_2;
    // 0x43006ABC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_2:
    // 0x43006AC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43006AC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43006AC8: jr          $ra
    // 0x43006ACC: nop

    return;
    // 0x43006ACC: nop

;}
RECOMP_FUNC void ovl_boss_demon_6AD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006AD0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x43006AD4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x43006AD8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x43006ADC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x43006AE0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x43006AE4: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x43006AE8: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x43006AEC: jal         0x430000E8
    // 0x43006AF0: addiu       $a0, $zero, 0x4C
    ctx->r4 = ADD32(0, 0X4C);
    ovl_boss_demon_E8(rdram, ctx);
        goto after_0;
    // 0x43006AF0: addiu       $a0, $zero, 0x4C
    ctx->r4 = ADD32(0, 0X4C);
    after_0:
    // 0x43006AF4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x43006AF8: lwc1        $f0, 0x2C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x43006AFC: lw          $at, 0x0($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X0);
    // 0x43006B00: lui         $a1, 0x4301
    ctx->r5 = S32(0X4301 << 16);
    // 0x43006B04: sw          $at, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r1;
    // 0x43006B08: lw          $t8, 0x4($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X4);
    // 0x43006B0C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x43006B10: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x43006B14: lw          $at, 0x8($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X8);
    // 0x43006B18: addiu       $a1, $a1, -0x5930
    ctx->r5 = ADD32(ctx->r5, -0X5930);
    // 0x43006B1C: sw          $at, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r1;
    // 0x43006B20: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x43006B24: swc1        $f0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f0.u32l;
    // 0x43006B28: swc1        $f4, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f4.u32l;
    // 0x43006B2C: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x43006B30: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x43006B34: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x43006B38: swc1        $f6, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f6.u32l;
    // 0x43006B3C: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x43006B40: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x43006B44: nop

    // 0x43006B48: swc1        $f8, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f8.u32l;
    // 0x43006B4C: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x43006B50: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x43006B54: sw          $zero, 0x34($v0)
    MEM_W(0X34, ctx->r2) = 0;
    // 0x43006B58: jal         0x4300501C
    // 0x43006B5C: swc1        $f10, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->f10.u32l;
    ovl_boss_demon_501C(rdram, ctx);
        goto after_1;
    // 0x43006B5C: swc1        $f10, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->f10.u32l;
    after_1:
    // 0x43006B60: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x43006B64: lui         $t9, 0x4300
    ctx->r25 = S32(0X4300 << 16);
    // 0x43006B68: addiu       $t9, $t9, 0x6744
    ctx->r25 = ADD32(ctx->r25, 0X6744);
    // 0x43006B6C: sw          $s0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r16;
    // 0x43006B70: sw          $t9, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r25;
    // 0x43006B74: lui         $a3, 0x4300
    ctx->r7 = S32(0X4300 << 16);
    // 0x43006B78: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x43006B7C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x43006B80: addiu       $a3, $a3, 0x6780
    ctx->r7 = ADD32(ctx->r7, 0X6780);
    // 0x43006B84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43006B88: addiu       $a1, $zero, 0xA2E
    ctx->r5 = ADD32(0, 0XA2E);
    // 0x43006B8C: jal         0x430066B0
    // 0x43006B90: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_boss_demon_66B0(rdram, ctx);
        goto after_2;
    // 0x43006B90: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x43006B94: lui         $t1, 0x4300
    ctx->r9 = S32(0X4300 << 16);
    // 0x43006B98: addiu       $t1, $t1, 0x6A58
    ctx->r9 = ADD32(ctx->r9, 0X6A58);
    // 0x43006B9C: sw          $t1, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r9;
    // 0x43006BA0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43006BA4: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x43006BA8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x43006BAC: jr          $ra
    // 0x43006BB0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x43006BB0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x43006BB4: nop

    // 0x43006BB8: nop

    // 0x43006BBC: nop

;}
RECOMP_FUNC void ovl_boss_demon_6BC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006BC0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x43006BC4: jr          $ra
    // 0x43006BC8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x43006BC8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void ovl_boss_demon_6BCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006BCC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43006BD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43006BD4: jal         0x43001320
    // 0x43006BD8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    ovl_boss_demon_1320(rdram, ctx);
        goto after_0;
    // 0x43006BD8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x43006BDC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x43006BE0: sw          $t6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r14;
    // 0x43006BE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43006BE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43006BEC: jr          $ra
    // 0x43006BF0: nop

    return;
    // 0x43006BF0: nop

;}
RECOMP_FUNC void ovl_boss_demon_6BF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006BF4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x43006BF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43006BFC: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x43006C00: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x43006C04: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x43006C08: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x43006C0C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x43006C10: beq         $t6, $at, L_43006C70
    if (ctx->r14 == ctx->r1) {
        // 0x43006C14: sw          $t6, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r14;
            goto L_43006C70;
    }
    // 0x43006C14: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x43006C18: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x43006C1C: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x43006C20: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x43006C24: jal         0x430006C4
    // 0x43006C28: sw          $a3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r7;
    ovl_boss_demon_6C4(rdram, ctx);
        goto after_0;
    // 0x43006C28: sw          $a3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r7;
    after_0:
    // 0x43006C2C: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x43006C30: bne         $v0, $zero, L_43006C74
    if (ctx->r2 != 0) {
        // 0x43006C34: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43006C74;
    }
    // 0x43006C34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43006C38: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x43006C3C: nop

    // 0x43006C40: lwc1        $f4, 0x14($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X14);
    // 0x43006C44: nop

    // 0x43006C48: swc1        $f4, 0x2C($a3)
    MEM_W(0X2C, ctx->r7) = ctx->f4.u32l;
    // 0x43006C4C: lwc1        $f6, 0x18($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X18);
    // 0x43006C50: nop

    // 0x43006C54: swc1        $f6, 0x30($a3)
    MEM_W(0X30, ctx->r7) = ctx->f6.u32l;
    // 0x43006C58: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x43006C5C: nop

    // 0x43006C60: swc1        $f8, 0x14($t8)
    MEM_W(0X14, ctx->r24) = ctx->f8.u32l;
    // 0x43006C64: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x43006C68: nop

    // 0x43006C6C: swc1        $f10, 0x18($t8)
    MEM_W(0X18, ctx->r24) = ctx->f10.u32l;
L_43006C70:
    // 0x43006C70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43006C74:
    // 0x43006C74: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x43006C78: jr          $ra
    // 0x43006C7C: nop

    return;
    // 0x43006C7C: nop

;}
RECOMP_FUNC void ovl_boss_demon_6C80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006C80: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43006C84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43006C88: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43006C8C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x43006C90: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x43006C94: jal         0x43006BF4
    // 0x43006C98: nop

    ovl_boss_demon_6BF4(rdram, ctx);
        goto after_0;
    // 0x43006C98: nop

    after_0:
    // 0x43006C9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43006CA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43006CA4: jr          $ra
    // 0x43006CA8: nop

    return;
    // 0x43006CA8: nop

;}
RECOMP_FUNC void ovl_boss_demon_6CAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006CAC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x43006CB0: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x43006CB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43006CB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43006CBC: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x43006CC0: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x43006CC4: jal         0x43006BF4
    // 0x43006CC8: nop

    ovl_boss_demon_6BF4(rdram, ctx);
        goto after_0;
    // 0x43006CC8: nop

    after_0:
    // 0x43006CCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43006CD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43006CD4: jr          $ra
    // 0x43006CD8: nop

    return;
    // 0x43006CD8: nop

;}
RECOMP_FUNC void ovl_boss_demon_6CDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006CDC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43006CE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43006CE4: lw          $a2, 0x30($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X30);
    // 0x43006CE8: lw          $a1, 0x2C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X2C);
    // 0x43006CEC: jal         0x43006BF4
    // 0x43006CF0: nop

    ovl_boss_demon_6BF4(rdram, ctx);
        goto after_0;
    // 0x43006CF0: nop

    after_0:
    // 0x43006CF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43006CF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43006CFC: jr          $ra
    // 0x43006D00: nop

    return;
    // 0x43006D00: nop

;}
RECOMP_FUNC void ovl_boss_demon_6D04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006D04: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x43006D08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43006D0C: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x43006D10: lw          $a3, 0x4($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X4);
    // 0x43006D14: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x43006D18: beq         $a3, $at, L_43006D78
    if (ctx->r7 == ctx->r1) {
        // 0x43006D1C: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_43006D78;
    }
    // 0x43006D1C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x43006D20: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x43006D24: jal         0x430006C4
    // 0x43006D28: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_boss_demon_6C4(rdram, ctx);
        goto after_0;
    // 0x43006D28: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_0:
    // 0x43006D2C: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
    // 0x43006D30: bne         $v0, $zero, L_43006D7C
    if (ctx->r2 != 0) {
        // 0x43006D34: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43006D7C;
    }
    // 0x43006D34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43006D38: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x43006D3C: lwc1        $f6, 0x0($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X0);
    // 0x43006D40: lwc1        $f4, 0x2C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x43006D44: lwc1        $f10, 0x30($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X30);
    // 0x43006D48: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x43006D4C: lwc1        $f4, 0x34($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X34);
    // 0x43006D50: swc1        $f8, 0x2C($t6)
    MEM_W(0X2C, ctx->r14) = ctx->f8.u32l;
    // 0x43006D54: lwc1        $f16, 0x4($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X4);
    // 0x43006D58: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43006D5C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x43006D60: swc1        $f18, 0x30($t6)
    MEM_W(0X30, ctx->r14) = ctx->f18.u32l;
    // 0x43006D64: lwc1        $f6, 0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8);
    // 0x43006D68: swc1        $f0, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->f0.u32l;
    // 0x43006D6C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x43006D70: swc1        $f0, 0x18($t6)
    MEM_W(0X18, ctx->r14) = ctx->f0.u32l;
    // 0x43006D74: swc1        $f8, 0x34($t6)
    MEM_W(0X34, ctx->r14) = ctx->f8.u32l;
L_43006D78:
    // 0x43006D78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43006D7C:
    // 0x43006D7C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x43006D80: jr          $ra
    // 0x43006D84: nop

    return;
    // 0x43006D84: nop

;}
RECOMP_FUNC void ovl_boss_demon_6D88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006D88: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x43006D8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43006D90: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x43006D94: lw          $at, 0x0($a1)
    ctx->r1 = MEM_W(ctx->r5, 0X0);
    // 0x43006D98: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x43006D9C: sw          $at, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r1;
    // 0x43006DA0: lw          $t8, 0x4($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X4);
    // 0x43006DA4: nop

    // 0x43006DA8: sw          $t8, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r24;
    // 0x43006DAC: lw          $at, 0x8($a1)
    ctx->r1 = MEM_W(ctx->r5, 0X8);
    // 0x43006DB0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x43006DB4: sw          $at, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r1;
    // 0x43006DB8: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x43006DBC: nop

    // 0x43006DC0: lw          $a0, 0x4($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X4);
    // 0x43006DC4: jal         0x430006C4
    // 0x43006DC8: nop

    ovl_boss_demon_6C4(rdram, ctx);
        goto after_0;
    // 0x43006DC8: nop

    after_0:
    // 0x43006DCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43006DD0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x43006DD4: jr          $ra
    // 0x43006DD8: nop

    return;
    // 0x43006DD8: nop

;}
RECOMP_FUNC void ovl_boss_demon_6DDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006DDC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x43006DE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43006DE4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x43006DE8: lw          $a0, 0x4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4);
    // 0x43006DEC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x43006DF0: jal         0x430006C4
    // 0x43006DF4: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_boss_demon_6C4(rdram, ctx);
        goto after_0;
    // 0x43006DF4: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x43006DF8: addiu       $t7, $sp, 0x18
    ctx->r15 = ADD32(ctx->r29, 0X18);
    // 0x43006DFC: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x43006E00: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x43006E04: nop

    // 0x43006E08: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x43006E0C: lw          $t0, 0x4($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X4);
    // 0x43006E10: nop

    // 0x43006E14: sw          $t0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r8;
    // 0x43006E18: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x43006E1C: nop

    // 0x43006E20: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x43006E24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43006E28: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x43006E2C: jr          $ra
    // 0x43006E30: nop

    return;
    // 0x43006E30: nop

;}
RECOMP_FUNC void ovl_boss_demon_6E34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006E34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43006E38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43006E3C: jal         0x43000868
    // 0x43006E40: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_boss_demon_868(rdram, ctx);
        goto after_0;
    // 0x43006E40: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x43006E44: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x43006E48: nop

    // 0x43006E4C: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    // 0x43006E50: nop

    // 0x43006E54: beq         $v0, $a0, L_43006E68
    if (ctx->r2 == ctx->r4) {
        // 0x43006E58: lw          $t7, 0x18($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X18);
            goto L_43006E68;
    }
    // 0x43006E58: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x43006E5C: jal         0x4300082C
    // 0x43006E60: nop

    ovl_boss_demon_82C(rdram, ctx);
        goto after_1;
    // 0x43006E60: nop

    after_1:
    // 0x43006E64: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
L_43006E68:
    // 0x43006E68: nop

    // 0x43006E6C: lw          $a0, 0x4($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X4);
    // 0x43006E70: jal         0x430012B0
    // 0x43006E74: nop

    ovl_boss_demon_12B0(rdram, ctx);
        goto after_2;
    // 0x43006E74: nop

    after_2:
    // 0x43006E78: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43006E7C: jal         0x430000F4
    // 0x43006E80: nop

    ovl_boss_demon_F4(rdram, ctx);
        goto after_3;
    // 0x43006E80: nop

    after_3:
    // 0x43006E84: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x43006E88: addiu       $v0, $v0, -0x5480
    ctx->r2 = ADD32(ctx->r2, -0X5480);
    // 0x43006E8C: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x43006E90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43006E94: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x43006E98: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x43006E9C: jr          $ra
    // 0x43006EA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x43006EA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void ovl_boss_demon_6EA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006EA4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x43006EA8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x43006EAC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x43006EB0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x43006EB4: jal         0x43000868
    // 0x43006EB8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    ovl_boss_demon_868(rdram, ctx);
        goto after_0;
    // 0x43006EB8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x43006EBC: lw          $s0, 0x1C($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X1C);
    // 0x43006EC0: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x43006EC4: addiu       $s1, $sp, 0x28
    ctx->r17 = ADD32(ctx->r29, 0X28);
    // 0x43006EC8: lw          $t9, 0x4C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X4C);
L_43006ECC:
    // 0x43006ECC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43006ED0: jalr        $t9
    // 0x43006ED4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x43006ED4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_1:
    // 0x43006ED8: lw          $t6, 0xC($s0)
    ctx->r14 = MEM_W(ctx->r16, 0XC);
    // 0x43006EDC: nop

    // 0x43006EE0: bne         $s2, $t6, L_43006F00
    if (ctx->r18 != ctx->r14) {
        // 0x43006EE4: nop
    
            goto L_43006F00;
    }
    // 0x43006EE4: nop

    // 0x43006EE8: lw          $t9, 0x34($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X34);
    // 0x43006EEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43006EF0: jalr        $t9
    // 0x43006EF4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x43006EF4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_2:
    // 0x43006EF8: b           L_43006F14
    // 0x43006EFC: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
        goto L_43006F14;
    // 0x43006EFC: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
L_43006F00:
    // 0x43006F00: jal         0x43008B98
    // 0x43006F04: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_boss_demon_8B98(rdram, ctx);
        goto after_3;
    // 0x43006F04: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x43006F08: b           L_43006ECC
    // 0x43006F0C: lw          $t9, 0x4C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X4C);
        goto L_43006ECC;
    // 0x43006F0C: lw          $t9, 0x4C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X4C);
    // 0x43006F10: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
L_43006F14:
    // 0x43006F14: jal         0x43009D18
    // 0x43006F18: nop

    ovl_boss_demon_9D18(rdram, ctx);
        goto after_4;
    // 0x43006F18: nop

    after_4:
    // 0x43006F1C: lw          $t9, 0x50($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X50);
    // 0x43006F20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43006F24: jalr        $t9
    // 0x43006F28: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x43006F28: nop

    after_5:
    // 0x43006F2C: jal         0x43000838
    // 0x43006F30: nop

    ovl_boss_demon_838(rdram, ctx);
        goto after_6;
    // 0x43006F30: nop

    after_6:
    // 0x43006F34: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43006F38: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43006F3C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x43006F40: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x43006F44: jr          $ra
    // 0x43006F48: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x43006F48: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_boss_demon_6F4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006F4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43006F50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43006F54: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x43006F58: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x43006F5C: jal         0x4300082C
    // 0x43006F60: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    ovl_boss_demon_82C(rdram, ctx);
        goto after_0;
    // 0x43006F60: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x43006F64: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43006F68: nop

    // 0x43006F6C: lw          $t9, 0x50($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X50);
    // 0x43006F70: nop

    // 0x43006F74: jalr        $t9
    // 0x43006F78: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x43006F78: nop

    after_1:
    // 0x43006F7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43006F80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43006F84: jr          $ra
    // 0x43006F88: nop

    return;
    // 0x43006F88: nop

;}
RECOMP_FUNC void ovl_boss_demon_6F8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43006F8C: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x43006F90: addiu       $v1, $v1, -0x5480
    ctx->r3 = ADD32(ctx->r3, -0X5480);
    // 0x43006F94: lui         $t7, 0x4301
    ctx->r15 = S32(0X4301 << 16);
    // 0x43006F98: lw          $t7, -0x5BE0($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X5BE0);
    // 0x43006F9C: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x43006FA0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x43006FA4: slt         $at, $t6, $t7
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x43006FA8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43006FAC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43006FB0: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x43006FB4: bne         $at, $zero, L_43006FC4
    if (ctx->r1 != 0) {
        // 0x43006FB8: sw          $a1, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->r5;
            goto L_43006FC4;
    }
    // 0x43006FB8: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x43006FBC: b           L_43007158
    // 0x43006FC0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_43007158;
    // 0x43006FC0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_43006FC4:
    // 0x43006FC4: jal         0x430000E8
    // 0x43006FC8: addiu       $a0, $zero, 0x54
    ctx->r4 = ADD32(0, 0X54);
    ovl_boss_demon_E8(rdram, ctx);
        goto after_0;
    // 0x43006FC8: addiu       $a0, $zero, 0x54
    ctx->r4 = ADD32(0, 0X54);
    after_0:
    // 0x43006FCC: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x43006FD0: addiu       $v1, $v1, -0x5480
    ctx->r3 = ADD32(ctx->r3, -0X5480);
    // 0x43006FD4: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x43006FD8: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x43006FDC: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x43006FE0: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x43006FE4: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x43006FE8: lui         $t0, 0x4301
    ctx->r8 = S32(0X4301 << 16);
    // 0x43006FEC: addiu       $t0, $t0, -0x5BD0
    ctx->r8 = ADD32(ctx->r8, -0X5BD0);
    // 0x43006FF0: sw          $at, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r1;
    // 0x43006FF4: lw          $t3, 0x4($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X4);
    // 0x43006FF8: lui         $t6, 0x4301
    ctx->r14 = S32(0X4301 << 16);
    // 0x43006FFC: sw          $t3, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r11;
    // 0x43007000: lw          $at, 0x8($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X8);
    // 0x43007004: addiu       $t6, $t6, -0x5BDC
    ctx->r14 = ADD32(ctx->r14, -0X5BDC);
    // 0x43007008: sw          $at, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r1;
    // 0x4300700C: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x43007010: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43007014: addiu       $t5, $t4, 0x111
    ctx->r13 = ADD32(ctx->r12, 0X111);
    // 0x43007018: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x4300701C: sw          $t5, -0x5BC4($at)
    MEM_W(-0X5BC4, ctx->r1) = ctx->r13;
    // 0x43007020: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x43007024: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x43007028: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x4300702C: jal         0x430006C4
    // 0x43007030: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_boss_demon_6C4(rdram, ctx);
        goto after_1;
    // 0x43007030: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_1:
    // 0x43007034: lui         $t7, 0x4301
    ctx->r15 = S32(0X4301 << 16);
    // 0x43007038: lw          $a0, -0x5BDC($t7)
    ctx->r4 = MEM_W(ctx->r15, -0X5BDC);
    // 0x4300703C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x43007040: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x43007044: jal         0x43001260
    // 0x43007048: sw          $a0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r4;
    ovl_boss_demon_1260(rdram, ctx);
        goto after_2;
    // 0x43007048: sw          $a0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r4;
    after_2:
    // 0x4300704C: jal         0x430090B4
    // 0x43007050: nop

    ovl_boss_demon_90B4(rdram, ctx);
        goto after_3;
    // 0x43007050: nop

    after_3:
    // 0x43007054: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x43007058: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4300705C: nop

    // 0x43007060: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x43007064: jal         0x430090B4
    // 0x43007068: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    ovl_boss_demon_90B4(rdram, ctx);
        goto after_4;
    // 0x43007068: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    after_4:
    // 0x4300706C: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x43007070: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x43007074: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x43007078: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x4300707C: swc1        $f16, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f16.u32l;
    // 0x43007080: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x43007084: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x43007088: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x4300708C: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x43007090: jal         0x430006C4
    // 0x43007094: nop

    ovl_boss_demon_6C4(rdram, ctx);
        goto after_5;
    // 0x43007094: nop

    after_5:
    // 0x43007098: lui         $t9, 0x4300
    ctx->r25 = S32(0X4300 << 16);
    // 0x4300709C: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x430070A0: addiu       $t9, $t9, 0x6BCC
    ctx->r25 = ADD32(ctx->r25, 0X6BCC);
    // 0x430070A4: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x430070A8: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x430070AC: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x430070B0: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    // 0x430070B4: jal         0x430006C4
    // 0x430070B8: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_boss_demon_6C4(rdram, ctx);
        goto after_6;
    // 0x430070B8: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_6:
    // 0x430070BC: lui         $t2, 0x4300
    ctx->r10 = S32(0X4300 << 16);
    // 0x430070C0: lui         $t0, 0x4300
    ctx->r8 = S32(0X4300 << 16);
    // 0x430070C4: lui         $t1, 0x4300
    ctx->r9 = S32(0X4300 << 16);
    // 0x430070C8: lui         $t3, 0x4300
    ctx->r11 = S32(0X4300 << 16);
    // 0x430070CC: lui         $t4, 0x4300
    ctx->r12 = S32(0X4300 << 16);
    // 0x430070D0: lui         $t5, 0x4300
    ctx->r13 = S32(0X4300 << 16);
    // 0x430070D4: lui         $t6, 0x4300
    ctx->r14 = S32(0X4300 << 16);
    // 0x430070D8: lui         $t7, 0x4300
    ctx->r15 = S32(0X4300 << 16);
    // 0x430070DC: addiu       $t2, $t2, 0x6BC0
    ctx->r10 = ADD32(ctx->r10, 0X6BC0);
    // 0x430070E0: addiu       $t0, $t0, 0x6C80
    ctx->r8 = ADD32(ctx->r8, 0X6C80);
    // 0x430070E4: addiu       $t1, $t1, 0x6CDC
    ctx->r9 = ADD32(ctx->r9, 0X6CDC);
    // 0x430070E8: addiu       $t3, $t3, 0x6CAC
    ctx->r11 = ADD32(ctx->r11, 0X6CAC);
    // 0x430070EC: addiu       $t4, $t4, 0x6D04
    ctx->r12 = ADD32(ctx->r12, 0X6D04);
    // 0x430070F0: addiu       $t5, $t5, 0x6D88
    ctx->r13 = ADD32(ctx->r13, 0X6D88);
    // 0x430070F4: addiu       $t6, $t6, 0x6DDC
    ctx->r14 = ADD32(ctx->r14, 0X6DDC);
    // 0x430070F8: addiu       $t7, $t7, 0x6E34
    ctx->r15 = ADD32(ctx->r15, 0X6E34);
    // 0x430070FC: lui         $a0, 0x4300
    ctx->r4 = S32(0X4300 << 16);
    // 0x43007100: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    // 0x43007104: sw          $t2, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r10;
    // 0x43007108: sw          $t0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r8;
    // 0x4300710C: sw          $t1, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r9;
    // 0x43007110: sw          $t3, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r11;
    // 0x43007114: sw          $t4, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r12;
    // 0x43007118: sw          $t5, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r13;
    // 0x4300711C: sw          $t6, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->r14;
    // 0x43007120: sw          $t7, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->r15;
    // 0x43007124: addiu       $a0, $a0, 0x6EA4
    ctx->r4 = ADD32(ctx->r4, 0X6EA4);
    // 0x43007128: ori         $a1, $zero, 0xFECF
    ctx->r5 = 0 | 0XFECF;
    // 0x4300712C: addiu       $a2, $zero, 0x2800
    ctx->r6 = ADD32(0, 0X2800);
    // 0x43007130: jal         0x43000820
    // 0x43007134: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_boss_demon_820(rdram, ctx);
        goto after_7;
    // 0x43007134: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_7:
    // 0x43007138: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x4300713C: lui         $a0, 0x4300
    ctx->r4 = S32(0X4300 << 16);
    // 0x43007140: sw          $s0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r16;
    // 0x43007144: addiu       $a0, $a0, 0x6F4C
    ctx->r4 = ADD32(ctx->r4, 0X6F4C);
    // 0x43007148: jal         0x43009CC0
    // 0x4300714C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_boss_demon_9CC0(rdram, ctx);
        goto after_8;
    // 0x4300714C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_8:
    // 0x43007150: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x43007154: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_43007158:
    // 0x43007158: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4300715C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43007160: jr          $ra
    // 0x43007164: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x43007164: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_boss_demon_7168(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007168: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x4300716C: sw          $a0, -0x5BE0($at)
    MEM_W(-0X5BE0, ctx->r1) = ctx->r4;
    // 0x43007170: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43007174: jr          $ra
    // 0x43007178: sw          $zero, -0x5480($at)
    MEM_W(-0X5480, ctx->r1) = 0;
    return;
    // 0x43007178: sw          $zero, -0x5480($at)
    MEM_W(-0X5480, ctx->r1) = 0;
;}
RECOMP_FUNC void ovl_boss_demon_717C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300717C: lui         $t6, 0x4301
    ctx->r14 = S32(0X4301 << 16);
    // 0x43007180: lui         $t7, 0x4301
    ctx->r15 = S32(0X4301 << 16);
    // 0x43007184: lw          $t7, -0x5480($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X5480);
    // 0x43007188: lw          $t6, -0x5BE0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X5BE0);
    // 0x4300718C: jr          $ra
    // 0x43007190: subu        $v0, $t6, $t7
    ctx->r2 = SUB32(ctx->r14, ctx->r15);
    return;
    // 0x43007190: subu        $v0, $t6, $t7
    ctx->r2 = SUB32(ctx->r14, ctx->r15);
    // 0x43007194: nop

    // 0x43007198: nop

    // 0x4300719C: nop

;}
RECOMP_FUNC void ovl_boss_demon_71A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430071A0: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x430071A4: nop

    // 0x430071A8: lw          $v0, 0xC4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XC4);
    // 0x430071AC: jr          $ra
    // 0x430071B0: nop

    return;
    // 0x430071B0: nop

;}
RECOMP_FUNC void ovl_boss_demon_71B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430071B4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x430071B8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x430071BC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x430071C0: lw          $t6, 0x10($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X10);
    // 0x430071C4: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x430071C8: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
    // 0x430071CC: lw          $t7, 0x24($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X24);
    // 0x430071D0: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x430071D4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x430071D8: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x430071DC: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x430071E0: lui         $t1, 0x4301
    ctx->r9 = S32(0X4301 << 16);
    // 0x430071E4: lw          $t9, 0x28($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X28);
    // 0x430071E8: addiu       $t1, $t1, -0x5BC0
    ctx->r9 = ADD32(ctx->r9, -0X5BC0);
    // 0x430071EC: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x430071F0: addu        $t0, $t9, $v0
    ctx->r8 = ADD32(ctx->r25, ctx->r2);
    // 0x430071F4: sw          $at, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r1;
    // 0x430071F8: lw          $t4, 0x4($t1)
    ctx->r12 = MEM_W(ctx->r9, 0X4);
    // 0x430071FC: sll         $v1, $a1, 2
    ctx->r3 = S32(ctx->r5 << 2);
    // 0x43007200: sw          $t4, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r12;
    // 0x43007204: lw          $at, 0x8($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X8);
    // 0x43007208: addiu       $t5, $zero, -0xE0
    ctx->r13 = ADD32(0, -0XE0);
    // 0x4300720C: sw          $at, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r1;
    // 0x43007210: lw          $t6, 0x2C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X2C);
    // 0x43007214: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43007218: addu        $t7, $t6, $v1
    ctx->r15 = ADD32(ctx->r14, ctx->r3);
    // 0x4300721C: sw          $t5, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r13;
    // 0x43007220: jal         0x430090B4
    // 0x43007224: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    ovl_boss_demon_90B4(rdram, ctx);
        goto after_0;
    // 0x43007224: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    after_0:
    // 0x43007228: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x4300722C: lwc1        $f15, -0x59B0($at)
    ctx->f_odd[(15 - 1) * 2] = MEM_W(ctx->r1, -0X59B0);
    // 0x43007230: lwc1        $f14, -0x59AC($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X59AC);
    // 0x43007234: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43007238: lwc1        $f7, -0x59A8($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X59A8);
    // 0x4300723C: lwc1        $f6, -0x59A4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X59A4);
    // 0x43007240: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x43007244: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x43007248: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x4300724C: lwc1        $f5, -0x59A0($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X59A0);
    // 0x43007250: lwc1        $f4, -0x599C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X599C);
    // 0x43007254: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x43007258: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x4300725C: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43007260: swc1        $f10, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f10.u32l;
    // 0x43007264: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x43007268: lwc1        $f8, 0xC8($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0XC8);
    // 0x4300726C: lwc1        $f16, 0x4($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X4);
    // 0x43007270: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x43007274: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x43007278: mul.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x4300727C: lwc1        $f4, -0x5994($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X5994);
    // 0x43007280: lwc1        $f5, -0x5998($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X5998);
    // 0x43007284: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43007288: div.d       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = DIV_D(ctx->f6.d, ctx->f10.d);
    // 0x4300728C: sub.d       $f18, $f14, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f14.d - ctx->f16.d;
    // 0x43007290: cvt.s.d     $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f12.fl = CVT_S_D(ctx->f18.d);
    // 0x43007294: cvt.d.s     $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f2.d = CVT_D_S(ctx->f12.fl);
    // 0x43007298: c.lt.d      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.d < ctx->f4.d;
    // 0x4300729C: nop

    // 0x430072A0: bc1f        L_430072B4
    if (!c1cs) {
        // 0x430072A4: nop
    
            goto L_430072B4;
    }
    // 0x430072A4: nop

    // 0x430072A8: lwc1        $f12, -0x5990($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X5990);
    // 0x430072AC: nop

    // 0x430072B0: cvt.d.s     $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f2.d = CVT_D_S(ctx->f12.fl);
L_430072B4:
    // 0x430072B4: swc1        $f3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(3 - 1) * 2];
    // 0x430072B8: jal         0x430090B4
    // 0x430072BC: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    ovl_boss_demon_90B4(rdram, ctx);
        goto after_1;
    // 0x430072BC: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    after_1:
    // 0x430072C0: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430072C4: lwc1        $f15, -0x5988($at)
    ctx->f_odd[(15 - 1) * 2] = MEM_W(ctx->r1, -0X5988);
    // 0x430072C8: lwc1        $f14, -0x5984($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X5984);
    // 0x430072CC: lwc1        $f3, 0x20($sp)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x430072D0: lwc1        $f2, 0x24($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X24);
    // 0x430072D4: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x430072D8: sub.d       $f6, $f14, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.d); NAN_CHECK(ctx->f2.d); 
    ctx->f6.d = ctx->f14.d - ctx->f2.d;
    // 0x430072DC: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x430072E0: mul.d       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f6.d);
    // 0x430072E4: lwc1        $f18, 0xC8($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0XC8);
    // 0x430072E8: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    // 0x430072EC: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x430072F0: add.d       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f2.d); 
    ctx->f16.d = ctx->f10.d + ctx->f2.d;
    // 0x430072F4: mul.d       $f8, $f16, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = MUL_D(ctx->f16.d, ctx->f4.d);
    // 0x430072F8: cvt.s.d     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f6.fl = CVT_S_D(ctx->f8.d);
    // 0x430072FC: jal         0x43009E70
    // 0x43007300: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    ovl_boss_demon_9E70(rdram, ctx);
        goto after_2;
    // 0x43007300: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x43007304: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x43007308: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x4300730C: mul.s       $f18, $f0, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x43007310: lwc1        $f16, 0x0($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X0);
    // 0x43007314: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x43007318: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x4300731C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x43007320: add.s       $f4, $f18, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x43007324: swc1        $f8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f8.u32l;
    // 0x43007328: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    // 0x4300732C: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    // 0x43007330: jal         0x4300A030
    // 0x43007334: nop

    ovl_boss_demon_A030(rdram, ctx);
        goto after_3;
    // 0x43007334: nop

    after_3:
    // 0x43007338: lwc1        $f2, 0x34($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X34);
    // 0x4300733C: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x43007340: mul.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x43007344: lwc1        $f10, 0x8($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X8);
    // 0x43007348: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x4300734C: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43007350: add.s       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x43007354: swc1        $f18, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->f18.u32l;
    // 0x43007358: lwc1        $f4, -0x597C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X597C);
    // 0x4300735C: lwc1        $f5, -0x5980($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X5980);
    // 0x43007360: cvt.d.s     $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f16.d = CVT_D_S(ctx->f2.fl);
    // 0x43007364: mul.d       $f8, $f16, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = MUL_D(ctx->f16.d, ctx->f4.d);
    // 0x43007368: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x4300736C: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x43007370: nop

    // 0x43007374: addu        $t5, $t4, $t6
    ctx->r13 = ADD32(ctx->r12, ctx->r14);
    // 0x43007378: cvt.s.d     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f6.fl = CVT_S_D(ctx->f8.d);
    // 0x4300737C: swc1        $f6, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->f6.u32l;
    // 0x43007380: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43007384: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43007388: jr          $ra
    // 0x4300738C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x4300738C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_boss_demon_7390(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007390: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x43007394: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43007398: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x4300739C: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x430073A0: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x430073A4: sll         $t6, $a2, 2
    ctx->r14 = S32(ctx->r6 << 2);
    // 0x430073A8: lw          $t7, 0x24($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X24);
    // 0x430073AC: subu        $t6, $t6, $a2
    ctx->r14 = SUB32(ctx->r14, ctx->r6);
    // 0x430073B0: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x430073B4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x430073B8: addu        $v0, $t7, $t6
    ctx->r2 = ADD32(ctx->r15, ctx->r14);
    // 0x430073BC: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x430073C0: lwc1        $f6, 0x0($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X0);
    // 0x430073C4: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x430073C8: sub.s       $f16, $f4, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x430073CC: lwc1        $f10, 0x8($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X8);
    // 0x430073D0: mul.s       $f4, $f16, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x430073D4: sub.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x430073D8: swc1        $f16, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f16.u32l;
    // 0x430073DC: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    // 0x430073E0: mul.s       $f6, $f18, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x430073E4: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x430073E8: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x430073EC: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x430073F0: jal         0x4300A1A0
    // 0x430073F4: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    ovl_boss_demon_A1A0(rdram, ctx);
        goto after_0;
    // 0x430073F4: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_0:
    // 0x430073F8: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x430073FC: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x43007400: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x43007404: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x43007408: add.d       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = ctx->f8.d + ctx->f10.d;
    // 0x4300740C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x43007410: cvt.s.d     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f2.fl = CVT_S_D(ctx->f4.d);
    // 0x43007414: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43007418: swc1        $f2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f2.u32l;
    // 0x4300741C: lwc1        $f8, -0x5978($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X5978);
    // 0x43007420: lwc1        $f6, 0xC8($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0XC8);
    // 0x43007424: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43007428: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x4300742C: lwc1        $f11, -0x5970($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X5970);
    // 0x43007430: lwc1        $f16, 0x34($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X34);
    // 0x43007434: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x43007438: swc1        $f10, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f10.u32l;
    // 0x4300743C: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x43007440: lwc1        $f10, -0x596C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X596C);
    // 0x43007444: sub.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f2.fl;
    // 0x43007448: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x4300744C: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x43007450: mul.d       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x43007454: nop

    // 0x43007458: div.s       $f8, $f16, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = DIV_S(ctx->f16.fl, ctx->f2.fl);
    // 0x4300745C: lw          $t8, 0x24($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X24);
    // 0x43007460: lwc1        $f18, 0x30($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X30);
    // 0x43007464: addu        $v0, $t8, $a3
    ctx->r2 = ADD32(ctx->r24, ctx->r7);
    // 0x43007468: cvt.s.d     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f14.fl = CVT_S_D(ctx->f4.d);
    // 0x4300746C: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x43007470: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x43007474: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x43007478: mov.s       $f20, $f14
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    ctx->f20.fl = ctx->f14.fl;
    // 0x4300747C: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43007480: mul.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x43007484: add.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x43007488: nop

    // 0x4300748C: div.s       $f6, $f18, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = DIV_S(ctx->f18.fl, ctx->f2.fl);
    // 0x43007490: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    // 0x43007494: lw          $t9, 0x24($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X24);
    // 0x43007498: nop

    // 0x4300749C: addu        $v0, $t9, $a3
    ctx->r2 = ADD32(ctx->r25, ctx->r7);
    // 0x430074A0: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x430074A4: mul.s       $f10, $f6, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f14.fl);
    // 0x430074A8: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x430074AC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x430074B0: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
    // 0x430074B4: lw          $t0, 0x0($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X0);
    // 0x430074B8: nop

    // 0x430074BC: lwc1        $f6, 0x4($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X4);
    // 0x430074C0: nop

    // 0x430074C4: cvt.d.s     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f12.d = CVT_D_S(ctx->f6.fl);
    // 0x430074C8: c.lt.d      $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f8.d < ctx->f12.d;
    // 0x430074CC: nop

    // 0x430074D0: bc1f        L_430074F4
    if (!c1cs) {
        // 0x430074D4: nop
    
            goto L_430074F4;
    }
    // 0x430074D4: nop

    // 0x430074D8: lwc1        $f17, -0x5968($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X5968);
    // 0x430074DC: lwc1        $f16, -0x5964($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X5964);
    // 0x430074E0: cvt.d.s     $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f10.d = CVT_D_S(ctx->f14.fl);
    // 0x430074E4: mul.d       $f4, $f12, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f16.d); 
    ctx->f4.d = MUL_D(ctx->f12.d, ctx->f16.d);
    // 0x430074E8: nop

    // 0x430074EC: div.d       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = DIV_D(ctx->f10.d, ctx->f4.d);
    // 0x430074F0: cvt.s.d     $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f20.fl = CVT_S_D(ctx->f6.d);
L_430074F4:
    // 0x430074F4: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430074F8: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x430074FC: lwc1        $f17, -0x5960($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X5960);
    // 0x43007500: lwc1        $f16, -0x595C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X595C);
    // 0x43007504: cvt.d.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.d = CVT_D_S(ctx->f10.fl);
    // 0x43007508: mul.d       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f16.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f16.d);
    // 0x4300750C: cvt.d.s     $f8, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f8.d = CVT_D_S(ctx->f20.fl);
    // 0x43007510: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x43007514: nop

    // 0x43007518: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x4300751C: add.d       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = ctx->f8.d + ctx->f6.d;
    // 0x43007520: addu        $v0, $a0, $t2
    ctx->r2 = ADD32(ctx->r4, ctx->r10);
    // 0x43007524: cvt.s.d     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f4.fl = CVT_S_D(ctx->f10.d);
    // 0x43007528: swc1        $f4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f4.u32l;
    // 0x4300752C: lw          $t3, 0x0($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X0);
    // 0x43007530: lwc1        $f2, 0xC8($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0XC8);
    // 0x43007534: lwc1        $f0, 0x4($t3)
    ctx->f0.u32l = MEM_W(ctx->r11, 0X4);
    // 0x43007538: nop

    // 0x4300753C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x43007540: nop

    // 0x43007544: bc1f        L_43007554
    if (!c1cs) {
        // 0x43007548: nop
    
            goto L_43007554;
    }
    // 0x43007548: nop

    // 0x4300754C: b           L_43007558
    // 0x43007550: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
        goto L_43007558;
    // 0x43007550: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
L_43007554:
    // 0x43007554: mov.s       $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    ctx->f20.fl = ctx->f2.fl;
L_43007558:
    // 0x43007558: cvt.d.s     $f8, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f8.d = CVT_D_S(ctx->f20.fl);
    // 0x4300755C: mul.d       $f6, $f8, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f6.d = MUL_D(ctx->f8.d, ctx->f16.d);
    // 0x43007560: cvt.d.s     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
    // 0x43007564: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43007568: lwc1        $f9, -0x5958($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X5958);
    // 0x4300756C: lwc1        $f8, -0x5954($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X5954);
    // 0x43007570: div.d       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = DIV_D(ctx->f6.d, ctx->f10.d);
    // 0x43007574: sub.d       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f8.d - ctx->f4.d;
    // 0x43007578: cvt.s.d     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f10.fl = CVT_S_D(ctx->f6.d);
    // 0x4300757C: swc1        $f10, 0x44($v0)
    MEM_W(0X44, ctx->r2) = ctx->f10.u32l;
    // 0x43007580: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43007584: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x43007588: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x4300758C: lwc1        $f0, 0x2C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x43007590: jr          $ra
    // 0x43007594: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x43007594: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_boss_demon_7598(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007598: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x4300759C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x430075A0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x430075A4: lw          $a3, 0x10($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X10);
    // 0x430075A8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x430075AC: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x430075B0: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    // 0x430075B4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x430075B8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x430075BC: jal         0x43007390
    // 0x430075C0: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    ovl_boss_demon_7390(rdram, ctx);
        goto after_0;
    // 0x430075C0: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_0:
    // 0x430075C4: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x430075C8: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x430075CC: lw          $t6, 0x2C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X2C);
    // 0x430075D0: sll         $t0, $a2, 2
    ctx->r8 = S32(ctx->r6 << 2);
    // 0x430075D4: lwc1        $f4, 0xC8($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0XC8);
    // 0x430075D8: addu        $t7, $t6, $t0
    ctx->r15 = ADD32(ctx->r14, ctx->r8);
    // 0x430075DC: lw          $a1, 0x0($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X0);
    // 0x430075E0: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x430075E4: addu        $a0, $a3, $t0
    ctx->r4 = ADD32(ctx->r7, ctx->r8);
    // 0x430075E8: lwc1        $f2, 0x4($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X4);
    // 0x430075EC: andi        $t8, $a1, 0xFF
    ctx->r24 = ctx->r5 & 0XFF;
    // 0x430075F0: bc1f        L_4300760C
    if (!c1cs) {
        // 0x430075F4: or          $a1, $t8, $zero
        ctx->r5 = ctx->r24 | 0;
            goto L_4300760C;
    }
    // 0x430075F4: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x430075F8: sll         $v1, $a2, 2
    ctx->r3 = S32(ctx->r6 << 2);
    // 0x430075FC: subu        $v1, $v1, $a2
    ctx->r3 = SUB32(ctx->r3, ctx->r6);
    // 0x43007600: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x43007604: b           L_43007660
    // 0x43007608: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
        goto L_43007660;
    // 0x43007608: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
L_4300760C:
    // 0x4300760C: slti        $at, $a1, 0x10
    ctx->r1 = SIGNED(ctx->r5) < 0X10 ? 1 : 0;
    // 0x43007610: beq         $at, $zero, L_43007620
    if (ctx->r1 == 0) {
        // 0x43007614: addiu       $a3, $zero, -0x10
        ctx->r7 = ADD32(0, -0X10);
            goto L_43007620;
    }
    // 0x43007614: addiu       $a3, $zero, -0x10
    ctx->r7 = ADD32(0, -0X10);
    // 0x43007618: b           L_430076EC
    // 0x4300761C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_430076EC;
    // 0x4300761C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_43007620:
    // 0x43007620: lui         $at, 0x3FD0
    ctx->r1 = S32(0X3FD0 << 16);
    // 0x43007624: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x43007628: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x4300762C: sll         $v1, $a2, 2
    ctx->r3 = S32(ctx->r6 << 2);
    // 0x43007630: lw          $t9, 0x24($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X24);
    // 0x43007634: subu        $v1, $v1, $a2
    ctx->r3 = SUB32(ctx->r3, ctx->r6);
    // 0x43007638: cvt.d.s     $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f6.d = CVT_D_S(ctx->f2.fl);
    // 0x4300763C: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x43007640: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x43007644: addu        $v0, $t9, $v1
    ctx->r2 = ADD32(ctx->r25, ctx->r3);
    // 0x43007648: lwc1        $f16, 0x4($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X4);
    // 0x4300764C: nop

    // 0x43007650: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x43007654: add.d       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = ctx->f18.d + ctx->f10.d;
    // 0x43007658: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x4300765C: swc1        $f6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f6.u32l;
L_43007660:
    // 0x43007660: lw          $t1, 0x28($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X28);
    // 0x43007664: lwc1        $f16, 0x44($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X44);
    // 0x43007668: addu        $v0, $t1, $v1
    ctx->r2 = ADD32(ctx->r9, ctx->r3);
    // 0x4300766C: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x43007670: addu        $a1, $a1, $a3
    ctx->r5 = ADD32(ctx->r5, ctx->r7);
    // 0x43007674: add.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x43007678: slti        $at, $a1, 0x81
    ctx->r1 = SIGNED(ctx->r5) < 0X81 ? 1 : 0;
    // 0x4300767C: swc1        $f18, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f18.u32l;
    // 0x43007680: lw          $t2, 0x28($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X28);
    // 0x43007684: lwc1        $f4, 0x44($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X44);
    // 0x43007688: addu        $v0, $t2, $v1
    ctx->r2 = ADD32(ctx->r10, ctx->r3);
    // 0x4300768C: lwc1        $f10, 0x4($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X4);
    // 0x43007690: nop

    // 0x43007694: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x43007698: swc1        $f6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f6.u32l;
    // 0x4300769C: lw          $t3, 0x28($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X28);
    // 0x430076A0: lwc1        $f16, 0x44($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X44);
    // 0x430076A4: addu        $v0, $t3, $v1
    ctx->r2 = ADD32(ctx->r11, ctx->r3);
    // 0x430076A8: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x430076AC: nop

    // 0x430076B0: add.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x430076B4: bne         $at, $zero, L_430076C0
    if (ctx->r1 != 0) {
        // 0x430076B8: swc1        $f18, 0x8($v0)
        MEM_W(0X8, ctx->r2) = ctx->f18.u32l;
            goto L_430076C0;
    }
    // 0x430076B8: swc1        $f18, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f18.u32l;
    // 0x430076BC: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
L_430076C0:
    // 0x430076C0: bgez        $a1, L_430076CC
    if (SIGNED(ctx->r5) >= 0) {
        // 0x430076C4: nop
    
            goto L_430076CC;
    }
    // 0x430076C4: nop

    // 0x430076C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_430076CC:
    // 0x430076CC: lw          $t4, 0x2C($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X2C);
    // 0x430076D0: addiu       $at, $zero, -0x100
    ctx->r1 = ADD32(0, -0X100);
    // 0x430076D4: addu        $v1, $t4, $t0
    ctx->r3 = ADD32(ctx->r12, ctx->r8);
    // 0x430076D8: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x430076DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x430076E0: and         $t6, $t5, $at
    ctx->r14 = ctx->r13 & ctx->r1;
    // 0x430076E4: or          $t7, $t6, $a1
    ctx->r15 = ctx->r14 | ctx->r5;
    // 0x430076E8: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
L_430076EC:
    // 0x430076EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x430076F0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x430076F4: jr          $ra
    // 0x430076F8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x430076F8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_boss_demon_76FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430076FC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x43007700: jr          $ra
    // 0x43007704: sw          $t6, 0xC4($a0)
    MEM_W(0XC4, ctx->r4) = ctx->r14;
    return;
    // 0x43007704: sw          $t6, 0xC4($a0)
    MEM_W(0XC4, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void ovl_boss_demon_7708(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007708: jr          $ra
    // 0x4300770C: sw          $zero, 0xC4($a0)
    MEM_W(0XC4, ctx->r4) = 0;
    return;
    // 0x4300770C: sw          $zero, 0xC4($a0)
    MEM_W(0XC4, ctx->r4) = 0;
;}
RECOMP_FUNC void ovl_boss_demon_7710(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007710: jr          $ra
    // 0x43007714: sw          $a1, 0xC4($a0)
    MEM_W(0XC4, ctx->r4) = ctx->r5;
    return;
    // 0x43007714: sw          $a1, 0xC4($a0)
    MEM_W(0XC4, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void ovl_boss_demon_7718(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007718: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4300771C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43007720: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x43007724: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x43007728: nop

    // 0x4300772C: lw          $t9, 0x50($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X50);
    // 0x43007730: nop

    // 0x43007734: jalr        $t9
    // 0x43007738: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43007738: nop

    after_0:
    // 0x4300773C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43007740: jal         0x430000F4
    // 0x43007744: nop

    ovl_boss_demon_F4(rdram, ctx);
        goto after_1;
    // 0x43007744: nop

    after_1:
    // 0x43007748: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4300774C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43007750: jr          $ra
    // 0x43007754: nop

    return;
    // 0x43007754: nop

;}
RECOMP_FUNC void ovl_boss_demon_7758(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007758: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4300775C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43007760: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x43007764: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x43007768: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x4300776C: jal         0x430000E8
    // 0x43007770: addiu       $a0, $zero, 0xDC
    ctx->r4 = ADD32(0, 0XDC);
    ovl_boss_demon_E8(rdram, ctx);
        goto after_0;
    // 0x43007770: addiu       $a0, $zero, 0xDC
    ctx->r4 = ADD32(0, 0XDC);
    after_0:
    // 0x43007774: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x43007778: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x4300777C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x43007780: jal         0x43007E94
    // 0x43007784: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    ovl_boss_demon_7E94(rdram, ctx);
        goto after_1;
    // 0x43007784: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_1:
    // 0x43007788: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4300778C: lui         $t6, 0x4300
    ctx->r14 = S32(0X4300 << 16);
    // 0x43007790: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x43007794: lui         $t7, 0x4300
    ctx->r15 = S32(0X4300 << 16);
    // 0x43007798: lui         $t8, 0x4300
    ctx->r24 = S32(0X4300 << 16);
    // 0x4300779C: addiu       $t6, $t6, 0x71A0
    ctx->r14 = ADD32(ctx->r14, 0X71A0);
    // 0x430077A0: addiu       $t7, $t7, 0x71B4
    ctx->r15 = ADD32(ctx->r15, 0X71B4);
    // 0x430077A4: addiu       $t8, $t8, 0x7598
    ctx->r24 = ADD32(ctx->r24, 0X7598);
    // 0x430077A8: sw          $t6, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r14;
    // 0x430077AC: sw          $t7, 0x40($v0)
    MEM_W(0X40, ctx->r2) = ctx->r15;
    // 0x430077B0: sw          $t8, 0x44($v0)
    MEM_W(0X44, ctx->r2) = ctx->r24;
    // 0x430077B4: sw          $a0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r4;
    // 0x430077B8: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x430077BC: lui         $t9, 0x4300
    ctx->r25 = S32(0X4300 << 16);
    // 0x430077C0: lui         $v1, 0x4300
    ctx->r3 = S32(0X4300 << 16);
    // 0x430077C4: lui         $t0, 0x4300
    ctx->r8 = S32(0X4300 << 16);
    // 0x430077C8: lui         $t1, 0x4300
    ctx->r9 = S32(0X4300 << 16);
    // 0x430077CC: addiu       $t9, $t9, 0x76FC
    ctx->r25 = ADD32(ctx->r25, 0X76FC);
    // 0x430077D0: addiu       $v1, $v1, 0x7708
    ctx->r3 = ADD32(ctx->r3, 0X7708);
    // 0x430077D4: addiu       $t0, $t0, 0x7710
    ctx->r8 = ADD32(ctx->r8, 0X7710);
    // 0x430077D8: addiu       $t1, $t1, 0x7718
    ctx->r9 = ADD32(ctx->r9, 0X7718);
    // 0x430077DC: sw          $t9, 0xD0($a0)
    MEM_W(0XD0, ctx->r4) = ctx->r25;
    // 0x430077E0: sw          $v1, 0xD4($a0)
    MEM_W(0XD4, ctx->r4) = ctx->r3;
    // 0x430077E4: sw          $t0, 0xCC($a0)
    MEM_W(0XCC, ctx->r4) = ctx->r8;
    // 0x430077E8: sw          $t1, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = ctx->r9;
    // 0x430077EC: jalr        $v1
    // 0x430077F0: swc1        $f4, 0xC8($a0)
    MEM_W(0XC8, ctx->r4) = ctx->f4.u32l;
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_2;
    // 0x430077F0: swc1        $f4, 0xC8($a0)
    MEM_W(0XC8, ctx->r4) = ctx->f4.u32l;
    after_2:
    // 0x430077F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430077F8: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x430077FC: jr          $ra
    // 0x43007800: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x43007800: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x43007804: nop

    // 0x43007808: nop

    // 0x4300780C: nop

;}
RECOMP_FUNC void ovl_boss_demon_7810(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007810: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x43007814: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x43007818: lw          $a1, 0xC($v1)
    ctx->r5 = MEM_W(ctx->r3, 0XC);
    // 0x4300781C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x43007820: bltz        $a1, L_43007834
    if (SIGNED(ctx->r5) < 0) {
        // 0x43007824: nop
    
            goto L_43007834;
    }
    // 0x43007824: nop

    // 0x43007828: subu        $v0, $t6, $a1
    ctx->r2 = SUB32(ctx->r14, ctx->r5);
    // 0x4300782C: jr          $ra
    // 0x43007830: sw          $v0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r2;
    return;
    // 0x43007830: sw          $v0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r2;
L_43007834:
    // 0x43007834: jr          $ra
    // 0x43007838: nop

    return;
    // 0x43007838: nop

;}
RECOMP_FUNC void ovl_boss_demon_783C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300783C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x43007840: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43007844: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43007848: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x4300784C: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x43007850: lw          $t7, 0x24($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X24);
    // 0x43007854: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x43007858: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x4300785C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x43007860: addu        $t8, $t7, $t6
    ctx->r24 = ADD32(ctx->r15, ctx->r14);
    // 0x43007864: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x43007868: lwc1        $f12, 0x10($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X10);
    // 0x4300786C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43007870: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x43007874: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x43007878: jal         0x43009088
    // 0x4300787C: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    ovl_boss_demon_9088(rdram, ctx);
        goto after_0;
    // 0x4300787C: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x43007880: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x43007884: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x43007888: lwc1        $f4, 0x0($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X0);
    // 0x4300788C: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    // 0x43007890: add.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x43007894: jal         0x43009088
    // 0x43007898: swc1        $f6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f6.u32l;
    ovl_boss_demon_9088(rdram, ctx);
        goto after_1;
    // 0x43007898: swc1        $f6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f6.u32l;
    after_1:
    // 0x4300789C: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x430078A0: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    // 0x430078A4: lwc1        $f8, 0x4($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X4);
    // 0x430078A8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x430078AC: add.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f12.fl;
    // 0x430078B0: add.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f0.fl + ctx->f10.fl;
    // 0x430078B4: jal         0x43009088
    // 0x430078B8: swc1        $f16, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->f16.u32l;
    ovl_boss_demon_9088(rdram, ctx);
        goto after_2;
    // 0x430078B8: swc1        $f16, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->f16.u32l;
    after_2:
    // 0x430078BC: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x430078C0: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x430078C4: lwc1        $f18, 0x8($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0X8);
    // 0x430078C8: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x430078CC: add.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f18.fl;
    // 0x430078D0: lui         $t8, 0x4301
    ctx->r24 = S32(0X4301 << 16);
    // 0x430078D4: swc1        $f4, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->f4.u32l;
    // 0x430078D8: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x430078DC: lw          $t5, 0x28($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X28);
    // 0x430078E0: addiu       $t8, $t8, -0x5BB0
    ctx->r24 = ADD32(ctx->r24, -0X5BB0);
    // 0x430078E4: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x430078E8: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x430078EC: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x430078F0: lw          $t0, 0x4($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X4);
    // 0x430078F4: sll         $t3, $v0, 2
    ctx->r11 = S32(ctx->r2 << 2);
    // 0x430078F8: sw          $t0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r8;
    // 0x430078FC: lw          $at, 0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X8);
    // 0x43007900: addiu       $t1, $zero, 0x80
    ctx->r9 = ADD32(0, 0X80);
    // 0x43007904: sw          $at, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r1;
    // 0x43007908: lw          $t2, 0x2C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X2C);
    // 0x4300790C: nop

    // 0x43007910: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x43007914: sw          $t1, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r9;
    // 0x43007918: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x4300791C: nop

    // 0x43007920: addu        $t6, $t5, $v0
    ctx->r14 = ADD32(ctx->r13, ctx->r2);
    // 0x43007924: sb          $zero, 0x4($t6)
    MEM_B(0X4, ctx->r14) = 0;
    // 0x43007928: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4300792C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43007930: jr          $ra
    // 0x43007934: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x43007934: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_boss_demon_7938(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007938: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4300793C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43007940: lw          $a2, 0x10($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X10);
    // 0x43007944: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x43007948: addu        $v0, $a2, $a1
    ctx->r2 = ADD32(ctx->r6, ctx->r5);
    // 0x4300794C: lb          $t0, 0x4($v0)
    ctx->r8 = MEM_B(ctx->r2, 0X4);
    // 0x43007950: nop

    // 0x43007954: addiu       $t6, $t0, 0x1
    ctx->r14 = ADD32(ctx->r8, 0X1);
    // 0x43007958: slti        $at, $t0, 0x10
    ctx->r1 = SIGNED(ctx->r8) < 0X10 ? 1 : 0;
    // 0x4300795C: bne         $at, $zero, L_4300796C
    if (ctx->r1 != 0) {
        // 0x43007960: sb          $t6, 0x4($v0)
        MEM_B(0X4, ctx->r2) = ctx->r14;
            goto L_4300796C;
    }
    // 0x43007960: sb          $t6, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r14;
    // 0x43007964: b           L_430079F4
    // 0x43007968: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_430079F4;
    // 0x43007968: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_4300796C:
    // 0x4300796C: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x43007970: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43007974: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x43007978: lwc1        $f11, -0x5950($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X5950);
    // 0x4300797C: lwc1        $f10, -0x594C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X594C);
    // 0x43007980: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x43007984: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x43007988: lui         $at, 0x403E
    ctx->r1 = S32(0X403E << 16);
    // 0x4300798C: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x43007990: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x43007994: lw          $t7, 0x28($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X28);
    // 0x43007998: div.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = DIV_D(ctx->f16.d, ctx->f18.d);
    // 0x4300799C: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x430079A0: subu        $t8, $t8, $a1
    ctx->r24 = SUB32(ctx->r24, ctx->r5);
    // 0x430079A4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x430079A8: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    // 0x430079AC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x430079B0: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    // 0x430079B4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x430079B8: jal         0x43009E70
    // 0x430079BC: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    ovl_boss_demon_9E70(rdram, ctx);
        goto after_0;
    // 0x430079BC: cvt.s.d     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f12.fl = CVT_S_D(ctx->f4.d);
    after_0:
    // 0x430079C0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x430079C4: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x430079C8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x430079CC: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
    // 0x430079D0: swc1        $f0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f0.u32l;
    // 0x430079D4: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
    // 0x430079D8: lw          $t9, 0x2C($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X2C);
    // 0x430079DC: sll         $t1, $a1, 2
    ctx->r9 = S32(ctx->r5 << 2);
    // 0x430079E0: addu        $v1, $t9, $t1
    ctx->r3 = ADD32(ctx->r25, ctx->r9);
    // 0x430079E4: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x430079E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x430079EC: addiu       $t3, $t2, -0x6
    ctx->r11 = ADD32(ctx->r10, -0X6);
    // 0x430079F0: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
L_430079F4:
    // 0x430079F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430079F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x430079FC: jr          $ra
    // 0x43007A00: nop

    return;
    // 0x43007A00: nop

;}
RECOMP_FUNC void ovl_boss_demon_7A04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007A04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43007A08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43007A0C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x43007A10: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x43007A14: nop

    // 0x43007A18: lw          $t9, 0x50($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X50);
    // 0x43007A1C: nop

    // 0x43007A20: jalr        $t9
    // 0x43007A24: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43007A24: nop

    after_0:
    // 0x43007A28: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43007A2C: jal         0x430000F4
    // 0x43007A30: nop

    ovl_boss_demon_F4(rdram, ctx);
        goto after_1;
    // 0x43007A30: nop

    after_1:
    // 0x43007A34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43007A38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43007A3C: jr          $ra
    // 0x43007A40: nop

    return;
    // 0x43007A40: nop

;}
RECOMP_FUNC void ovl_boss_demon_7A44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007A44: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43007A48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43007A4C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x43007A50: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x43007A54: jal         0x430000E8
    // 0x43007A58: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    ovl_boss_demon_E8(rdram, ctx);
        goto after_0;
    // 0x43007A58: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    after_0:
    // 0x43007A5C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x43007A60: addiu       $a1, $zero, 0x764
    ctx->r5 = ADD32(0, 0X764);
    // 0x43007A64: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x43007A68: jal         0x43007E94
    // 0x43007A6C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    ovl_boss_demon_7E94(rdram, ctx);
        goto after_1;
    // 0x43007A6C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_1:
    // 0x43007A70: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x43007A74: lui         $t6, 0x4300
    ctx->r14 = S32(0X4300 << 16);
    // 0x43007A78: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x43007A7C: lui         $t7, 0x4300
    ctx->r15 = S32(0X4300 << 16);
    // 0x43007A80: lui         $t8, 0x4300
    ctx->r24 = S32(0X4300 << 16);
    // 0x43007A84: addiu       $t6, $t6, 0x7810
    ctx->r14 = ADD32(ctx->r14, 0X7810);
    // 0x43007A88: addiu       $t7, $t7, 0x783C
    ctx->r15 = ADD32(ctx->r15, 0X783C);
    // 0x43007A8C: addiu       $t8, $t8, 0x7938
    ctx->r24 = ADD32(ctx->r24, 0X7938);
    // 0x43007A90: sw          $t6, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r14;
    // 0x43007A94: sw          $t7, 0x40($v0)
    MEM_W(0X40, ctx->r2) = ctx->r15;
    // 0x43007A98: sw          $t8, 0x44($v0)
    MEM_W(0X44, ctx->r2) = ctx->r24;
    // 0x43007A9C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x43007AA0: sw          $v1, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r3;
    // 0x43007AA4: sw          $t9, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r25;
    // 0x43007AA8: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x43007AAC: lui         $t0, 0x4300
    ctx->r8 = S32(0X4300 << 16);
    // 0x43007AB0: addiu       $t0, $t0, 0x7A04
    ctx->r8 = ADD32(ctx->r8, 0X7A04);
    // 0x43007AB4: sw          $t0, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r8;
    // 0x43007AB8: swc1        $f4, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f4.u32l;
    // 0x43007ABC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43007AC0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x43007AC4: jr          $ra
    // 0x43007AC8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x43007AC8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x43007ACC: nop

;}
RECOMP_FUNC void ovl_boss_demon_7AD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007AD0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x43007AD4: jr          $ra
    // 0x43007AD8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x43007AD8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void ovl_boss_demon_7ADC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007ADC: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x43007AE0: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x43007AE4: lw          $t6, 0x24($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X24);
    // 0x43007AE8: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x43007AEC: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x43007AF0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x43007AF4: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x43007AF8: sw          $at, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r1;
    // 0x43007AFC: lw          $t1, 0x4($t8)
    ctx->r9 = MEM_W(ctx->r24, 0X4);
    // 0x43007B00: lui         $t4, 0x4301
    ctx->r12 = S32(0X4301 << 16);
    // 0x43007B04: sw          $t1, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r9;
    // 0x43007B08: lw          $at, 0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X8);
    // 0x43007B0C: addiu       $t4, $t4, -0x5BA0
    ctx->r12 = ADD32(ctx->r12, -0X5BA0);
    // 0x43007B10: sw          $at, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r1;
    // 0x43007B14: lw          $t2, 0x28($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X28);
    // 0x43007B18: lw          $at, 0x0($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X0);
    // 0x43007B1C: addu        $t3, $t2, $v0
    ctx->r11 = ADD32(ctx->r10, ctx->r2);
    // 0x43007B20: sw          $at, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r1;
    // 0x43007B24: lw          $t0, 0x4($t4)
    ctx->r8 = MEM_W(ctx->r12, 0X4);
    // 0x43007B28: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x43007B2C: sw          $t0, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r8;
    // 0x43007B30: lw          $at, 0x8($t4)
    ctx->r1 = MEM_W(ctx->r12, 0X8);
    // 0x43007B34: nop

    // 0x43007B38: sw          $at, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r1;
    // 0x43007B3C: lw          $t9, 0x2C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X2C);
    // 0x43007B40: nop

    // 0x43007B44: addu        $t8, $t9, $t7
    ctx->r24 = ADD32(ctx->r25, ctx->r15);
    // 0x43007B48: jr          $ra
    // 0x43007B4C: sw          $zero, 0x0($t8)
    MEM_W(0X0, ctx->r24) = 0;
    return;
    // 0x43007B4C: sw          $zero, 0x0($t8)
    MEM_W(0X0, ctx->r24) = 0;
;}
RECOMP_FUNC void ovl_boss_demon_7B50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007B50: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x43007B54: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x43007B58: jr          $ra
    // 0x43007B5C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x43007B5C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void ovl_boss_demon_7B60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007B60: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x43007B64: jr          $ra
    // 0x43007B68: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x43007B68: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void ovl_boss_demon_7B6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007B6C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x43007B70: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x43007B74: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x43007B78: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x43007B7C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43007B80: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x43007B84: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x43007B88: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x43007B8C: blez        $a1, L_43007C04
    if (SIGNED(ctx->r5) <= 0) {
        // 0x43007B90: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_43007C04;
    }
    // 0x43007B90: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x43007B94: addiu       $s2, $zero, 0xC
    ctx->r18 = ADD32(0, 0XC);
L_43007B98:
    // 0x43007B98: lw          $v0, 0x38($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X38);
    // 0x43007B9C: lw          $t6, 0x30($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X30);
    // 0x43007BA0: nop

    // 0x43007BA4: slt         $at, $v0, $t6
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x43007BA8: beq         $at, $zero, L_43007BF8
    if (ctx->r1 == 0) {
        // 0x43007BAC: nop
    
            goto L_43007BF8;
    }
    // 0x43007BAC: nop

    // 0x43007BB0: lw          $t7, 0x34($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X34);
    // 0x43007BB4: lw          $t0, 0x24($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X24);
    // 0x43007BB8: addu        $t8, $v0, $t7
    ctx->r24 = ADD32(ctx->r2, ctx->r15);
    // 0x43007BBC: lbu         $a1, 0x0($t8)
    ctx->r5 = MEM_BU(ctx->r24, 0X0);
    // 0x43007BC0: lw          $t3, 0x1C($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X1C);
    // 0x43007BC4: multu       $a1, $s2
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x43007BC8: addiu       $t9, $v0, 0x1
    ctx->r25 = ADD32(ctx->r2, 0X1);
    // 0x43007BCC: sll         $t4, $a1, 2
    ctx->r12 = S32(ctx->r5 << 2);
    // 0x43007BD0: sw          $t9, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r25;
    // 0x43007BD4: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x43007BD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43007BDC: mflo        $t1
    ctx->r9 = lo;
    // 0x43007BE0: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x43007BE4: sw          $t2, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r10;
    // 0x43007BE8: lw          $t9, 0x40($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X40);
    // 0x43007BEC: nop

    // 0x43007BF0: jalr        $t9
    // 0x43007BF4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43007BF4: nop

    after_0:
L_43007BF8:
    // 0x43007BF8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x43007BFC: bne         $s1, $s3, L_43007B98
    if (ctx->r17 != ctx->r19) {
        // 0x43007C00: nop
    
            goto L_43007B98;
    }
    // 0x43007C00: nop

L_43007C04:
    // 0x43007C04: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43007C08: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x43007C0C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x43007C10: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x43007C14: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x43007C18: jr          $ra
    // 0x43007C1C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x43007C1C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_boss_demon_7C20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007C20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43007C24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43007C28: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x43007C2C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x43007C30: lw          $t9, 0x48($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X48);
    // 0x43007C34: nop

    // 0x43007C38: jalr        $t9
    // 0x43007C3C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43007C3C: nop

    after_0:
    // 0x43007C40: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43007C44: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x43007C48: lw          $t6, 0x1C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X1C);
    // 0x43007C4C: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x43007C50: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x43007C54: sw          $zero, 0x0($t8)
    MEM_W(0X0, ctx->r24) = 0;
    // 0x43007C58: lw          $t0, 0x38($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X38);
    // 0x43007C5C: lw          $t2, 0x34($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X34);
    // 0x43007C60: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x43007C64: sw          $t1, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->r9;
    // 0x43007C68: addu        $t4, $t2, $t1
    ctx->r12 = ADD32(ctx->r10, ctx->r9);
    // 0x43007C6C: sb          $a1, 0x0($t4)
    MEM_B(0X0, ctx->r12) = ctx->r5;
    // 0x43007C70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43007C74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43007C78: jr          $ra
    // 0x43007C7C: nop

    return;
    // 0x43007C7C: nop

;}
RECOMP_FUNC void ovl_boss_demon_7C80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007C80: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x43007C84: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x43007C88: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x43007C8C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x43007C90: jal         0x43000868
    // 0x43007C94: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    ovl_boss_demon_868(rdram, ctx);
        goto after_0;
    // 0x43007C94: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x43007C98: lw          $s2, 0x1C($v0)
    ctx->r18 = MEM_W(ctx->r2, 0X1C);
    // 0x43007C9C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x43007CA0: lw          $v1, 0x38($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X38);
    // 0x43007CA4: nop

L_43007CA8:
    // 0x43007CA8: lw          $t6, 0x30($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X30);
    // 0x43007CAC: nop

    // 0x43007CB0: slt         $at, $v1, $t6
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x43007CB4: beq         $at, $zero, L_43007CE4
    if (ctx->r1 == 0) {
        // 0x43007CB8: nop
    
            goto L_43007CE4;
    }
    // 0x43007CB8: nop

    // 0x43007CBC: lw          $t9, 0x3C($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X3C);
    // 0x43007CC0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x43007CC4: jalr        $t9
    // 0x43007CC8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x43007CC8: nop

    after_1:
    // 0x43007CCC: beq         $v0, $zero, L_43007CE4
    if (ctx->r2 == 0) {
        // 0x43007CD0: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_43007CE4;
    }
    // 0x43007CD0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x43007CD4: lw          $t9, 0x4C($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X4C);
    // 0x43007CD8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x43007CDC: jalr        $t9
    // 0x43007CE0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x43007CE0: nop

    after_2:
L_43007CE4:
    // 0x43007CE4: lw          $t7, 0x30($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X30);
    // 0x43007CE8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x43007CEC: blez        $t7, L_43007D44
    if (SIGNED(ctx->r15) <= 0) {
        // 0x43007CF0: nop
    
            goto L_43007D44;
    }
    // 0x43007CF0: nop

L_43007CF4:
    // 0x43007CF4: lw          $t8, 0x1C($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X1C);
    // 0x43007CF8: nop

    // 0x43007CFC: addu        $t0, $t8, $s0
    ctx->r8 = ADD32(ctx->r24, ctx->r16);
    // 0x43007D00: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x43007D04: nop

    // 0x43007D08: beq         $t1, $zero, L_43007D30
    if (ctx->r9 == 0) {
        // 0x43007D0C: nop
    
            goto L_43007D30;
    }
    // 0x43007D0C: nop

    // 0x43007D10: lw          $t9, 0x44($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X44);
    // 0x43007D14: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x43007D18: jalr        $t9
    // 0x43007D1C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x43007D1C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_3:
    // 0x43007D20: beq         $v0, $zero, L_43007D30
    if (ctx->r2 == 0) {
        // 0x43007D24: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_43007D30;
    }
    // 0x43007D24: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x43007D28: jal         0x43007C20
    // 0x43007D2C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    ovl_boss_demon_7C20(rdram, ctx);
        goto after_4;
    // 0x43007D2C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_4:
L_43007D30:
    // 0x43007D30: lw          $t2, 0x30($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X30);
    // 0x43007D34: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x43007D38: slt         $at, $s1, $t2
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x43007D3C: bne         $at, $zero, L_43007CF4
    if (ctx->r1 != 0) {
        // 0x43007D40: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_43007CF4;
    }
    // 0x43007D40: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_43007D44:
    // 0x43007D44: jal         0x43008B98
    // 0x43007D48: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_boss_demon_8B98(rdram, ctx);
        goto after_5;
    // 0x43007D48: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_5:
    // 0x43007D4C: lw          $t3, 0x14($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X14);
    // 0x43007D50: nop

    // 0x43007D54: beq         $t3, $zero, L_43007D6C
    if (ctx->r11 == 0) {
        // 0x43007D58: nop
    
            goto L_43007D6C;
    }
    // 0x43007D58: nop

    // 0x43007D5C: lw          $t4, 0x38($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X38);
    // 0x43007D60: nop

    // 0x43007D64: beq         $t4, $zero, L_43007D78
    if (ctx->r12 == 0) {
        // 0x43007D68: nop
    
            goto L_43007D78;
    }
    // 0x43007D68: nop

L_43007D6C:
    // 0x43007D6C: lw          $v1, 0x38($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X38);
    // 0x43007D70: b           L_43007CA8
    // 0x43007D74: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
        goto L_43007CA8;
    // 0x43007D74: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_43007D78:
    // 0x43007D78: lw          $a0, 0x18($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X18);
    // 0x43007D7C: jal         0x43009D18
    // 0x43007D80: nop

    ovl_boss_demon_9D18(rdram, ctx);
        goto after_6;
    // 0x43007D80: nop

    after_6:
    // 0x43007D84: lw          $t9, 0x50($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X50);
    // 0x43007D88: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x43007D8C: jalr        $t9
    // 0x43007D90: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x43007D90: nop

    after_7:
    // 0x43007D94: jal         0x43000838
    // 0x43007D98: nop

    ovl_boss_demon_838(rdram, ctx);
        goto after_8;
    // 0x43007D98: nop

    after_8:
    // 0x43007D9C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43007DA0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43007DA4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x43007DA8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x43007DAC: jr          $ra
    // 0x43007DB0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x43007DB0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_boss_demon_7DB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007DB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43007DB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43007DBC: lw          $t9, 0x50($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X50);
    // 0x43007DC0: nop

    // 0x43007DC4: jalr        $t9
    // 0x43007DC8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43007DC8: nop

    after_0:
    // 0x43007DCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43007DD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43007DD4: jr          $ra
    // 0x43007DD8: nop

    return;
    // 0x43007DD8: nop

;}
RECOMP_FUNC void ovl_boss_demon_7DDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007DDC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43007DE0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43007DE4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43007DE8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43007DEC: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x43007DF0: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x43007DF4: jal         0x43000DC0
    // 0x43007DF8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_boss_demon_DC0(rdram, ctx);
        goto after_0;
    // 0x43007DF8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x43007DFC: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x43007E00: jal         0x43009C7C
    // 0x43007E04: nop

    ovl_boss_demon_9C7C(rdram, ctx);
        goto after_1;
    // 0x43007E04: nop

    after_1:
    // 0x43007E08: jal         0x43000868
    // 0x43007E0C: nop

    ovl_boss_demon_868(rdram, ctx);
        goto after_2;
    // 0x43007E0C: nop

    after_2:
    // 0x43007E10: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x43007E14: nop

    // 0x43007E18: beq         $v0, $a0, L_43007E34
    if (ctx->r2 == ctx->r4) {
        // 0x43007E1C: nop
    
            goto L_43007E34;
    }
    // 0x43007E1C: nop

    // 0x43007E20: jal         0x4300082C
    // 0x43007E24: nop

    ovl_boss_demon_82C(rdram, ctx);
        goto after_3;
    // 0x43007E24: nop

    after_3:
    // 0x43007E28: lw          $a0, 0x18($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X18);
    // 0x43007E2C: jal         0x43009D18
    // 0x43007E30: nop

    ovl_boss_demon_9D18(rdram, ctx);
        goto after_4;
    // 0x43007E30: nop

    after_4:
L_43007E34:
    // 0x43007E34: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x43007E38: jal         0x430000F4
    // 0x43007E3C: nop

    ovl_boss_demon_F4(rdram, ctx);
        goto after_5;
    // 0x43007E3C: nop

    after_5:
    // 0x43007E40: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    // 0x43007E44: jal         0x430000F4
    // 0x43007E48: nop

    ovl_boss_demon_F4(rdram, ctx);
        goto after_6;
    // 0x43007E48: nop

    after_6:
    // 0x43007E4C: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    // 0x43007E50: jal         0x430000F4
    // 0x43007E54: nop

    ovl_boss_demon_F4(rdram, ctx);
        goto after_7;
    // 0x43007E54: nop

    after_7:
    // 0x43007E58: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    // 0x43007E5C: jal         0x430000F4
    // 0x43007E60: nop

    ovl_boss_demon_F4(rdram, ctx);
        goto after_8;
    // 0x43007E60: nop

    after_8:
    // 0x43007E64: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    // 0x43007E68: jal         0x430000F4
    // 0x43007E6C: nop

    ovl_boss_demon_F4(rdram, ctx);
        goto after_9;
    // 0x43007E6C: nop

    after_9:
    // 0x43007E70: lw          $a0, 0x34($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X34);
    // 0x43007E74: jal         0x430000F4
    // 0x43007E78: nop

    ovl_boss_demon_F4(rdram, ctx);
        goto after_10;
    // 0x43007E78: nop

    after_10:
    // 0x43007E7C: jal         0x430000F4
    // 0x43007E80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_boss_demon_F4(rdram, ctx);
        goto after_11;
    // 0x43007E80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x43007E84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43007E88: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43007E8C: jr          $ra
    // 0x43007E90: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x43007E90: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_boss_demon_7E94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007E94: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x43007E98: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x43007E9C: sw          $s1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r17;
    // 0x43007EA0: sw          $a0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r4;
    // 0x43007EA4: or          $s1, $a2, $zero
    ctx->r17 = ctx->r6 | 0;
    // 0x43007EA8: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x43007EAC: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    // 0x43007EB0: jal         0x430000E8
    // 0x43007EB4: addiu       $a0, $zero, 0x54
    ctx->r4 = ADD32(0, 0X54);
    ovl_boss_demon_E8(rdram, ctx);
        goto after_0;
    // 0x43007EB4: addiu       $a0, $zero, 0x54
    ctx->r4 = ADD32(0, 0X54);
    after_0:
    // 0x43007EB8: lw          $t6, 0x70($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X70);
    // 0x43007EBC: sw          $s1, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->r17;
    // 0x43007EC0: sll         $a0, $s1, 2
    ctx->r4 = S32(ctx->r17 << 2);
    // 0x43007EC4: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x43007EC8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x43007ECC: jal         0x430000E8
    // 0x43007ED0: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    ovl_boss_demon_E8(rdram, ctx);
        goto after_1;
    // 0x43007ED0: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    after_1:
    // 0x43007ED4: sw          $v0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r2;
    // 0x43007ED8: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x43007EDC: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x43007EE0: jal         0x430000E8
    // 0x43007EE4: nop

    ovl_boss_demon_E8(rdram, ctx);
        goto after_2;
    // 0x43007EE4: nop

    after_2:
    // 0x43007EE8: sll         $a0, $s1, 2
    ctx->r4 = S32(ctx->r17 << 2);
    // 0x43007EEC: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    // 0x43007EF0: subu        $a0, $a0, $s1
    ctx->r4 = SUB32(ctx->r4, ctx->r17);
    // 0x43007EF4: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x43007EF8: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x43007EFC: jal         0x430000E8
    // 0x43007F00: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    ovl_boss_demon_E8(rdram, ctx);
        goto after_3;
    // 0x43007F00: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    after_3:
    // 0x43007F04: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x43007F08: jal         0x430000E8
    // 0x43007F0C: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    ovl_boss_demon_E8(rdram, ctx);
        goto after_4;
    // 0x43007F0C: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    after_4:
    // 0x43007F10: sw          $v0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r2;
    // 0x43007F14: sw          $v0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r2;
    // 0x43007F18: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x43007F1C: jal         0x430000E8
    // 0x43007F20: nop

    ovl_boss_demon_E8(rdram, ctx);
        goto after_5;
    // 0x43007F20: nop

    after_5:
    // 0x43007F24: sw          $v0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r2;
    // 0x43007F28: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x43007F2C: jal         0x430000E8
    // 0x43007F30: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_boss_demon_E8(rdram, ctx);
        goto after_6;
    // 0x43007F30: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_6:
    // 0x43007F34: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    // 0x43007F38: sw          $v0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r2;
    // 0x43007F3C: lw          $a0, 0x74($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X74);
    // 0x43007F40: jal         0x43009C50
    // 0x43007F44: nop

    ovl_boss_demon_9C50(rdram, ctx);
        goto after_7;
    // 0x43007F44: nop

    after_7:
    // 0x43007F48: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x43007F4C: lui         $t8, 0x4301
    ctx->r24 = S32(0X4301 << 16);
    // 0x43007F50: addiu       $t8, $t8, -0x5B90
    ctx->r24 = ADD32(ctx->r24, -0X5B90);
    // 0x43007F54: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x43007F58: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x43007F5C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x43007F60: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x43007F64: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x43007F68: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x43007F6C: lw          $t5, 0x1C($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X1C);
    // 0x43007F70: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x43007F74: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x43007F78: lw          $t6, 0x20($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X20);
    // 0x43007F7C: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x43007F80: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x43007F84: addiu       $a1, $s0, 0x8
    ctx->r5 = ADD32(ctx->r16, 0X8);
    // 0x43007F88: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x43007F8C: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    // 0x43007F90: jal         0x43000DC0
    // 0x43007F94: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    ovl_boss_demon_DC0(rdram, ctx);
        goto after_8;
    // 0x43007F94: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    after_8:
    // 0x43007F98: lw          $t4, 0x68($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X68);
    // 0x43007F9C: lw          $t7, 0x8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X8);
    // 0x43007FA0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x43007FA4: blez        $s1, L_430080CC
    if (SIGNED(ctx->r17) <= 0) {
        // 0x43007FA8: sw          $t4, 0xB0($t7)
        MEM_W(0XB0, ctx->r15) = ctx->r12;
            goto L_430080CC;
    }
    // 0x43007FA8: sw          $t4, 0xB0($t7)
    MEM_W(0XB0, ctx->r15) = ctx->r12;
    // 0x43007FAC: andi        $t1, $s1, 0x3
    ctx->r9 = ctx->r17 & 0X3;
    // 0x43007FB0: beq         $t1, $zero, L_43008018
    if (ctx->r9 == 0) {
        // 0x43007FB4: or          $t0, $t1, $zero
        ctx->r8 = ctx->r9 | 0;
            goto L_43008018;
    }
    // 0x43007FB4: or          $t0, $t1, $zero
    ctx->r8 = ctx->r9 | 0;
    // 0x43007FB8: sll         $t3, $zero, 2
    ctx->r11 = S32(0 << 2);
    // 0x43007FBC: sll         $t5, $zero, 2
    ctx->r13 = S32(0 << 2);
    // 0x43007FC0: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x43007FC4: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x43007FC8: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x43007FCC: subu        $t5, $t5, $zero
    ctx->r13 = SUB32(ctx->r13, 0);
    // 0x43007FD0: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x43007FD4: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x43007FD8: addu        $a0, $t4, $t3
    ctx->r4 = ADD32(ctx->r12, ctx->r11);
    // 0x43007FDC: addu        $v0, $t8, $t3
    ctx->r2 = ADD32(ctx->r24, ctx->r11);
    // 0x43007FE0: addu        $v1, $t9, $t3
    ctx->r3 = ADD32(ctx->r25, ctx->r11);
    // 0x43007FE4: addu        $a3, $t5, $t6
    ctx->r7 = ADD32(ctx->r13, ctx->r14);
L_43007FE8:
    // 0x43007FE8: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x43007FEC: sw          $a3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r7;
    // 0x43007FF0: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x43007FF4: sb          $a2, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r6;
    // 0x43007FF8: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x43007FFC: addiu       $a3, $a3, 0xC
    ctx->r7 = ADD32(ctx->r7, 0XC);
    // 0x43008000: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x43008004: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x43008008: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x4300800C: bne         $t0, $a2, L_43007FE8
    if (ctx->r8 != ctx->r6) {
        // 0x43008010: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_43007FE8;
    }
    // 0x43008010: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x43008014: beq         $a2, $s1, L_430080CC
    if (ctx->r6 == ctx->r17) {
        // 0x43008018: sll         $t5, $a2, 2
        ctx->r13 = S32(ctx->r6 << 2);
            goto L_430080CC;
    }
L_43008018:
    // 0x43008018: sll         $t5, $a2, 2
    ctx->r13 = S32(ctx->r6 << 2);
    // 0x4300801C: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x43008020: subu        $t5, $t5, $a2
    ctx->r13 = SUB32(ctx->r13, ctx->r6);
    // 0x43008024: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x43008028: sll         $t3, $a2, 2
    ctx->r11 = S32(ctx->r6 << 2);
    // 0x4300802C: addu        $a3, $t5, $t6
    ctx->r7 = ADD32(ctx->r13, ctx->r14);
    // 0x43008030: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x43008034: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x43008038: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x4300803C: addiu       $t0, $a3, 0xC
    ctx->r8 = ADD32(ctx->r7, 0XC);
    // 0x43008040: addiu       $t1, $a3, 0x18
    ctx->r9 = ADD32(ctx->r7, 0X18);
    // 0x43008044: addiu       $t2, $a3, 0x24
    ctx->r10 = ADD32(ctx->r7, 0X24);
    // 0x43008048: addu        $a0, $t4, $t3
    ctx->r4 = ADD32(ctx->r12, ctx->r11);
    // 0x4300804C: addu        $v0, $t8, $t3
    ctx->r2 = ADD32(ctx->r24, ctx->r11);
    // 0x43008050: addu        $v1, $t9, $t3
    ctx->r3 = ADD32(ctx->r25, ctx->r11);
    // 0x43008054: addu        $a1, $t7, $a2
    ctx->r5 = ADD32(ctx->r15, ctx->r6);
L_43008058:
    // 0x43008058: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x4300805C: sw          $a3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r7;
    // 0x43008060: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x43008064: sb          $a2, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r6;
    // 0x43008068: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x4300806C: sw          $t0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r8;
    // 0x43008070: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x43008074: addiu       $t8, $a2, 0x1
    ctx->r24 = ADD32(ctx->r6, 0X1);
    // 0x43008078: sb          $t8, 0x1($a1)
    MEM_B(0X1, ctx->r5) = ctx->r24;
    // 0x4300807C: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
    // 0x43008080: sw          $t1, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r9;
    // 0x43008084: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
    // 0x43008088: addiu       $t9, $a2, 0x2
    ctx->r25 = ADD32(ctx->r6, 0X2);
    // 0x4300808C: sb          $t9, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r25;
    // 0x43008090: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
    // 0x43008094: sw          $t2, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r10;
    // 0x43008098: addiu       $t5, $a2, 0x3
    ctx->r13 = ADD32(ctx->r6, 0X3);
    // 0x4300809C: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x430080A0: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x430080A4: sb          $t5, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r13;
    // 0x430080A8: addiu       $t2, $t2, 0x30
    ctx->r10 = ADD32(ctx->r10, 0X30);
    // 0x430080AC: addiu       $t1, $t1, 0x30
    ctx->r9 = ADD32(ctx->r9, 0X30);
    // 0x430080B0: addiu       $t0, $t0, 0x30
    ctx->r8 = ADD32(ctx->r8, 0X30);
    // 0x430080B4: addiu       $a3, $a3, 0x30
    ctx->r7 = ADD32(ctx->r7, 0X30);
    // 0x430080B8: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x430080BC: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x430080C0: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x430080C4: bne         $a2, $s1, L_43008058
    if (ctx->r6 != ctx->r17) {
        // 0x430080C8: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_43008058;
    }
    // 0x430080C8: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
L_430080CC:
    // 0x430080CC: lui         $t6, 0x4300
    ctx->r14 = S32(0X4300 << 16);
    // 0x430080D0: addiu       $t6, $t6, 0x7AD0
    ctx->r14 = ADD32(ctx->r14, 0X7AD0);
    // 0x430080D4: sw          $t6, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r14;
    // 0x430080D8: lui         $t7, 0x4300
    ctx->r15 = S32(0X4300 << 16);
    // 0x430080DC: lui         $t8, 0x4300
    ctx->r24 = S32(0X4300 << 16);
    // 0x430080E0: lui         $t9, 0x4300
    ctx->r25 = S32(0X4300 << 16);
    // 0x430080E4: lui         $t5, 0x4300
    ctx->r13 = S32(0X4300 << 16);
    // 0x430080E8: lui         $t6, 0x4300
    ctx->r14 = S32(0X4300 << 16);
    // 0x430080EC: addiu       $t7, $t7, 0x7ADC
    ctx->r15 = ADD32(ctx->r15, 0X7ADC);
    // 0x430080F0: addiu       $t8, $t8, 0x7B50
    ctx->r24 = ADD32(ctx->r24, 0X7B50);
    // 0x430080F4: addiu       $t9, $t9, 0x7B60
    ctx->r25 = ADD32(ctx->r25, 0X7B60);
    // 0x430080F8: addiu       $t5, $t5, 0x7B6C
    ctx->r13 = ADD32(ctx->r13, 0X7B6C);
    // 0x430080FC: addiu       $t6, $t6, 0x7DDC
    ctx->r14 = ADD32(ctx->r14, 0X7DDC);
    // 0x43008100: lui         $a0, 0x4300
    ctx->r4 = S32(0X4300 << 16);
    // 0x43008104: sw          $zero, 0x38($s0)
    MEM_W(0X38, ctx->r16) = 0;
    // 0x43008108: sw          $t7, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r15;
    // 0x4300810C: sw          $t8, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r24;
    // 0x43008110: sw          $t9, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r25;
    // 0x43008114: sw          $t5, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->r13;
    // 0x43008118: sw          $t6, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->r14;
    // 0x4300811C: sw          $zero, 0x14($s0)
    MEM_W(0X14, ctx->r16) = 0;
    // 0x43008120: addiu       $a0, $a0, 0x7DB4
    ctx->r4 = ADD32(ctx->r4, 0X7DB4);
    // 0x43008124: jal         0x43009CC0
    // 0x43008128: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_boss_demon_9CC0(rdram, ctx);
        goto after_9;
    // 0x43008128: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_9:
    // 0x4300812C: lui         $a0, 0x4300
    ctx->r4 = S32(0X4300 << 16);
    // 0x43008130: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x43008134: addiu       $a0, $a0, 0x7C80
    ctx->r4 = ADD32(ctx->r4, 0X7C80);
    // 0x43008138: ori         $a1, $zero, 0xFECF
    ctx->r5 = 0 | 0XFECF;
    // 0x4300813C: addiu       $a2, $zero, 0x2000
    ctx->r6 = ADD32(0, 0X2000);
    // 0x43008140: jal         0x43000820
    // 0x43008144: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_boss_demon_820(rdram, ctx);
        goto after_10;
    // 0x43008144: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_10:
    // 0x43008148: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x4300814C: sw          $s0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r16;
    // 0x43008150: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x43008154: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x43008158: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x4300815C: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x43008160: jr          $ra
    // 0x43008164: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x43008164: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x43008168: nop

    // 0x4300816C: nop

;}
RECOMP_FUNC void ovl_boss_demon_8170(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008170: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x43008174: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43008178: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4300817C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43008180: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x43008184: jal         0x43000724
    // 0x43008188: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_boss_demon_724(rdram, ctx);
        goto after_0;
    // 0x43008188: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x4300818C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x43008190: jal         0x430012B0
    // 0x43008194: nop

    ovl_boss_demon_12B0(rdram, ctx);
        goto after_1;
    // 0x43008194: nop

    after_1:
    // 0x43008198: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x4300819C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x430081A0: jal         0x43000280
    // 0x430081A4: addiu       $a0, $zero, 0x2FA
    ctx->r4 = ADD32(0, 0X2FA);
    ovl_boss_demon_280(rdram, ctx);
        goto after_2;
    // 0x430081A4: addiu       $a0, $zero, 0x2FA
    ctx->r4 = ADD32(0, 0X2FA);
    after_2:
    // 0x430081A8: lw          $t6, 0x10($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X10);
    // 0x430081AC: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x430081B0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x430081B4: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x430081B8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x430081BC: lw          $a0, -0x5B80($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X5B80);
    // 0x430081C0: jal         0x430095D8
    // 0x430081C4: nop

    ovl_boss_demon_95D8(rdram, ctx);
        goto after_3;
    // 0x430081C4: nop

    after_3:
    // 0x430081C8: jal         0x430000F4
    // 0x430081CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_boss_demon_F4(rdram, ctx);
        goto after_4;
    // 0x430081CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x430081D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x430081D4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x430081D8: jr          $ra
    // 0x430081DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x430081DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_boss_demon_81E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430081E0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x430081E4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x430081E8: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x430081EC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x430081F0: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x430081F4: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x430081F8: jal         0x430000E8
    // 0x430081FC: addiu       $a0, $zero, 0x38
    ctx->r4 = ADD32(0, 0X38);
    ovl_boss_demon_E8(rdram, ctx);
        goto after_0;
    // 0x430081FC: addiu       $a0, $zero, 0x38
    ctx->r4 = ADD32(0, 0X38);
    after_0:
    // 0x43008200: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x43008204: lui         $t0, 0x4301
    ctx->r8 = S32(0X4301 << 16);
    // 0x43008208: lw          $at, 0x0($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X0);
    // 0x4300820C: addiu       $t0, $t0, -0x5B54
    ctx->r8 = ADD32(ctx->r8, -0X5B54);
    // 0x43008210: sw          $at, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r1;
    // 0x43008214: lw          $t8, 0x4($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X4);
    // 0x43008218: lui         $t4, 0x4301
    ctx->r12 = S32(0X4301 << 16);
    // 0x4300821C: sw          $t8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r24;
    // 0x43008220: lw          $at, 0x8($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X8);
    // 0x43008224: addiu       $t3, $zero, 0x115
    ctx->r11 = ADD32(0, 0X115);
    // 0x43008228: sw          $at, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r1;
    // 0x4300822C: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x43008230: addiu       $t4, $t4, -0x5B60
    ctx->r12 = ADD32(ctx->r12, -0X5B60);
    // 0x43008234: swc1        $f4, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f4.u32l;
    // 0x43008238: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x4300823C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x43008240: sw          $t9, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r25;
    // 0x43008244: lw          $at, 0x0($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X0);
    // 0x43008248: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x4300824C: sw          $at, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r1;
    // 0x43008250: lw          $t2, 0x4($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X4);
    // 0x43008254: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x43008258: sw          $t2, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r10;
    // 0x4300825C: lw          $at, 0x8($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X8);
    // 0x43008260: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x43008264: sw          $at, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r1;
    // 0x43008268: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x4300826C: sw          $t3, -0x5B48($at)
    MEM_W(-0X5B48, ctx->r1) = ctx->r11;
    // 0x43008270: jal         0x430006C4
    // 0x43008274: sw          $t4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r12;
    ovl_boss_demon_6C4(rdram, ctx);
        goto after_1;
    // 0x43008274: sw          $t4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r12;
    after_1:
    // 0x43008278: lui         $t5, 0x4301
    ctx->r13 = S32(0X4301 << 16);
    // 0x4300827C: lw          $a0, -0x5B60($t5)
    ctx->r4 = MEM_W(ctx->r13, -0X5B60);
    // 0x43008280: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x43008284: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x43008288: jal         0x43001260
    // 0x4300828C: sw          $a0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r4;
    ovl_boss_demon_1260(rdram, ctx);
        goto after_2;
    // 0x4300828C: sw          $a0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r4;
    after_2:
    // 0x43008290: lwc1        $f2, 0x4C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x43008294: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x43008298: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x4300829C: c.eq.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl == ctx->f6.fl;
    // 0x430082A0: nop

    // 0x430082A4: bc1t        L_430082C8
    if (c1cs) {
        // 0x430082A8: nop
    
            goto L_430082C8;
    }
    // 0x430082A8: nop

    // 0x430082AC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x430082B0: swc1        $f2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f2.u32l;
    // 0x430082B4: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x430082B8: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x430082BC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x430082C0: jal         0x43000754
    // 0x430082C4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_boss_demon_754(rdram, ctx);
        goto after_3;
    // 0x430082C4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
L_430082C8:
    // 0x430082C8: lui         $t7, 0x4301
    ctx->r15 = S32(0X4301 << 16);
    // 0x430082CC: addiu       $t7, $t7, -0x7E90
    ctx->r15 = ADD32(ctx->r15, -0X7E90);
    // 0x430082D0: sw          $zero, 0x30($s0)
    MEM_W(0X30, ctx->r16) = 0;
    // 0x430082D4: sw          $t7, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r15;
    // 0x430082D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x430082DC: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x430082E0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x430082E4: jr          $ra
    // 0x430082E8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x430082E8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x430082EC: nop

;}
RECOMP_FUNC void ovl_boss_demon_82F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430082F0: lui         $a1, 0x4301
    ctx->r5 = S32(0X4301 << 16);
    // 0x430082F4: addiu       $a1, $a1, -0x4FA0
    ctx->r5 = ADD32(ctx->r5, -0X4FA0);
    // 0x430082F8: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x430082FC: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x43008300: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x43008304: addu        $v1, $v1, $t6
    ctx->r3 = ADD32(ctx->r3, ctx->r14);
    // 0x43008308: lw          $v1, -0x4FE0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X4FE0);
    // 0x4300830C: lui         $t9, 0x4301
    ctx->r25 = S32(0X4301 << 16);
    // 0x43008310: sll         $t8, $v1, 3
    ctx->r24 = S32(ctx->r3 << 3);
    // 0x43008314: addu        $t8, $t8, $v1
    ctx->r24 = ADD32(ctx->r24, ctx->r3);
    // 0x43008318: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x4300831C: addiu       $t9, $t9, -0x5460
    ctx->r25 = ADD32(ctx->r25, -0X5460);
    // 0x43008320: addiu       $t7, $a0, 0x1
    ctx->r15 = ADD32(ctx->r4, 0X1);
    // 0x43008324: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x43008328: jr          $ra
    // 0x4300832C: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    return;
    // 0x4300832C: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
;}
RECOMP_FUNC void ovl_boss_demon_8330(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008330: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x43008334: addiu       $v1, $v1, -0x4FA0
    ctx->r3 = ADD32(ctx->r3, -0X4FA0);
    // 0x43008338: sh          $zero, 0x8($a0)
    MEM_H(0X8, ctx->r4) = 0;
    // 0x4300833C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x43008340: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43008344: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x43008348: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x4300834C: lw          $t6, 0x44($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X44);
    // 0x43008350: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x43008354: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x43008358: jr          $ra
    // 0x4300835C: sw          $t6, -0x4FE0($at)
    MEM_W(-0X4FE0, ctx->r1) = ctx->r14;
    return;
    // 0x4300835C: sw          $t6, -0x4FE0($at)
    MEM_W(-0X4FE0, ctx->r1) = ctx->r14;
;}
