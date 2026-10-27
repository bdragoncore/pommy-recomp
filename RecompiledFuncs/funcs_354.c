#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_stage_world7_169C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000169C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600016A0: lwc1        $f12, 0x5BB0($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X5BB0);
    // 0x600016A4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x600016A8: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x600016AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600016B0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x600016B4: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    // 0x600016B8: jal         0x60001300
    // 0x600016BC: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    ovl_stage_world7_1300(rdram, ctx);
        goto after_0;
    // 0x600016BC: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x600016C0: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x600016C4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x600016C8: jal         0x60001644
    // 0x600016CC: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    ovl_stage_world7_1644(rdram, ctx);
        goto after_1;
    // 0x600016CC: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    after_1:
    // 0x600016D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600016D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x600016D8: jr          $ra
    // 0x600016DC: nop

    return;
    // 0x600016DC: nop

;}
RECOMP_FUNC void ovl_stage_world7_16E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600016E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600016E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600016E8: jal         0x6000034C
    // 0x600016EC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    ovl_stage_world7_34C(rdram, ctx);
        goto after_0;
    // 0x600016EC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_0:
    // 0x600016F0: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x600016F4: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x600016F8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x600016FC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x60001700: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60001704: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x60001708: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000170C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60001710: jr          $ra
    // 0x60001714: swc1        $f10, 0x5BB0($at)
    MEM_W(0X5BB0, ctx->r1) = ctx->f10.u32l;
    return;
    // 0x60001714: swc1        $f10, 0x5BB0($at)
    MEM_W(0X5BB0, ctx->r1) = ctx->f10.u32l;
;}
RECOMP_FUNC void ovl_stage_world7_1718(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001718: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000171C: lwc1        $f4, 0x5BAC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5BAC);
    // 0x60001720: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001724: lwc1        $f6, 0x5BA8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X5BA8);
    // 0x60001728: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000172C: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x60001730: nop

    // 0x60001734: bc1f        L_60001784
    if (!c1cs) {
        // 0x60001738: nop
    
            goto L_60001784;
    }
    // 0x60001738: nop

    // 0x6000173C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001740: lwc1        $f8, 0x5BC0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X5BC0);
    // 0x60001744: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001748: lwc1        $f10, 0x5BD8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X5BD8);
    // 0x6000174C: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x60001750: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x60001754: nop

    // 0x60001758: bc1f        L_60001774
    if (!c1cs) {
        // 0x6000175C: nop
    
            goto L_60001774;
    }
    // 0x6000175C: nop

    // 0x60001760: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x60001764: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x60001768: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000176C: jr          $ra
    // 0x60001770: swc1        $f16, 0x5BB0($at)
    MEM_W(0X5BB0, ctx->r1) = ctx->f16.u32l;
    return;
    // 0x60001770: swc1        $f16, 0x5BB0($at)
    MEM_W(0X5BB0, ctx->r1) = ctx->f16.u32l;
L_60001774:
    // 0x60001774: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x60001778: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000177C: jr          $ra
    // 0x60001780: swc1        $f18, 0x5BB0($at)
    MEM_W(0X5BB0, ctx->r1) = ctx->f18.u32l;
    return;
    // 0x60001780: swc1        $f18, 0x5BB0($at)
    MEM_W(0X5BB0, ctx->r1) = ctx->f18.u32l;
L_60001784:
    // 0x60001784: lwc1        $f4, 0x5BC8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5BC8);
    // 0x60001788: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000178C: lwc1        $f6, 0x5BE0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X5BE0);
    // 0x60001790: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x60001794: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x60001798: nop

    // 0x6000179C: bc1f        L_600017B4
    if (!c1cs) {
        // 0x600017A0: nop
    
            goto L_600017B4;
    }
    // 0x600017A0: nop

    // 0x600017A4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x600017A8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600017AC: jr          $ra
    // 0x600017B0: swc1        $f8, 0x5BB0($at)
    MEM_W(0X5BB0, ctx->r1) = ctx->f8.u32l;
    return;
    // 0x600017B0: swc1        $f8, 0x5BB0($at)
    MEM_W(0X5BB0, ctx->r1) = ctx->f8.u32l;
L_600017B4:
    // 0x600017B4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x600017B8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600017BC: swc1        $f10, 0x5BB0($at)
    MEM_W(0X5BB0, ctx->r1) = ctx->f10.u32l;
    // 0x600017C0: jr          $ra
    // 0x600017C4: nop

    return;
    // 0x600017C4: nop

;}
RECOMP_FUNC void ovl_stage_world7_17C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600017C8: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x600017CC: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x600017D0: addiu       $v1, $v1, 0x5BD8
    ctx->r3 = ADD32(ctx->r3, 0X5BD8);
    // 0x600017D4: addiu       $v0, $v0, 0x5BC0
    ctx->r2 = ADD32(ctx->r2, 0X5BC0);
    // 0x600017D8: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x600017DC: lwc1        $f16, 0x0($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X0);
    // 0x600017E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600017E4: c.lt.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl < ctx->f16.fl;
    // 0x600017E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600017EC: bc1f        L_60001800
    if (!c1cs) {
        // 0x600017F0: lui         $at, 0x4248
        ctx->r1 = S32(0X4248 << 16);
            goto L_60001800;
    }
    // 0x600017F0: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x600017F4: sub.s       $f0, $f14, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f14.fl - ctx->f16.fl;
    // 0x600017F8: b           L_60001804
    // 0x600017FC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_60001804;
    // 0x600017FC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_60001800:
    // 0x60001800: sub.s       $f0, $f14, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f14.fl - ctx->f16.fl;
L_60001804:
    // 0x60001804: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x60001808: nop

    // 0x6000180C: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x60001810: nop

    // 0x60001814: bc1f        L_60001858
    if (!c1cs) {
        // 0x60001818: nop
    
            goto L_60001858;
    }
    // 0x60001818: nop

    // 0x6000181C: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x60001820: lwc1        $f6, 0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8);
    // 0x60001824: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001828: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x6000182C: nop

    // 0x60001830: bc1f        L_6000184C
    if (!c1cs) {
        // 0x60001834: nop
    
            goto L_6000184C;
    }
    // 0x60001834: nop

    // 0x60001838: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x6000183C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x60001840: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001844: b           L_600018D0
    // 0x60001848: swc1        $f8, 0x5BB0($at)
    MEM_W(0X5BB0, ctx->r1) = ctx->f8.u32l;
        goto L_600018D0;
    // 0x60001848: swc1        $f8, 0x5BB0($at)
    MEM_W(0X5BB0, ctx->r1) = ctx->f8.u32l;
L_6000184C:
    // 0x6000184C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x60001850: b           L_600018D0
    // 0x60001854: swc1        $f10, 0x5BB0($at)
    MEM_W(0X5BB0, ctx->r1) = ctx->f10.u32l;
        goto L_600018D0;
    // 0x60001854: swc1        $f10, 0x5BB0($at)
    MEM_W(0X5BB0, ctx->r1) = ctx->f10.u32l;
L_60001858:
    // 0x60001858: lwc1        $f2, 0x8($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X8);
    // 0x6000185C: lwc1        $f12, 0x8($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X8);
    // 0x60001860: nop

    // 0x60001864: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x60001868: nop

    // 0x6000186C: bc1f        L_60001880
    if (!c1cs) {
        // 0x60001870: nop
    
            goto L_60001880;
    }
    // 0x60001870: nop

    // 0x60001874: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x60001878: b           L_60001884
    // 0x6000187C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_60001884;
    // 0x6000187C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_60001880:
    // 0x60001880: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
L_60001884:
    // 0x60001884: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x60001888: nop

    // 0x6000188C: bc1f        L_600018C8
    if (!c1cs) {
        // 0x60001890: nop
    
            goto L_600018C8;
    }
    // 0x60001890: nop

    // 0x60001894: c.lt.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl < ctx->f16.fl;
    // 0x60001898: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x6000189C: bc1f        L_600018B8
    if (!c1cs) {
        // 0x600018A0: nop
    
            goto L_600018B8;
    }
    // 0x600018A0: nop

    // 0x600018A4: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x600018A8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x600018AC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600018B0: b           L_600018D0
    // 0x600018B4: swc1        $f4, 0x5BB0($at)
    MEM_W(0X5BB0, ctx->r1) = ctx->f4.u32l;
        goto L_600018D0;
    // 0x600018B4: swc1        $f4, 0x5BB0($at)
    MEM_W(0X5BB0, ctx->r1) = ctx->f4.u32l;
L_600018B8:
    // 0x600018B8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x600018BC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600018C0: b           L_600018D0
    // 0x600018C4: swc1        $f6, 0x5BB0($at)
    MEM_W(0X5BB0, ctx->r1) = ctx->f6.u32l;
        goto L_600018D0;
    // 0x600018C4: swc1        $f6, 0x5BB0($at)
    MEM_W(0X5BB0, ctx->r1) = ctx->f6.u32l;
L_600018C8:
    // 0x600018C8: jal         0x60001718
    // 0x600018CC: nop

    ovl_stage_world7_1718(rdram, ctx);
        goto after_0;
    // 0x600018CC: nop

    after_0:
L_600018D0:
    // 0x600018D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600018D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600018D8: jr          $ra
    // 0x600018DC: nop

    return;
    // 0x600018DC: nop

;}
RECOMP_FUNC void ovl_stage_world7_18E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600018E0: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x600018E4: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x600018E8: addiu       $v1, $v1, 0x5BD8
    ctx->r3 = ADD32(ctx->r3, 0X5BD8);
    // 0x600018EC: addiu       $v0, $v0, 0x5BC0
    ctx->r2 = ADD32(ctx->r2, 0X5BC0);
    // 0x600018F0: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x600018F4: lwc1        $f2, 0x0($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X0);
    // 0x600018F8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600018FC: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x60001900: nop

    // 0x60001904: bc1f        L_60001918
    if (!c1cs) {
        // 0x60001908: nop
    
            goto L_60001918;
    }
    // 0x60001908: nop

    // 0x6000190C: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x60001910: b           L_6000191C
    // 0x60001914: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
        goto L_6000191C;
    // 0x60001914: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
L_60001918:
    // 0x60001918: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
L_6000191C:
    // 0x6000191C: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x60001920: lwc1        $f14, 0x8($v1)
    ctx->f14.u32l = MEM_W(ctx->r3, 0X8);
    // 0x60001924: nop

    // 0x60001928: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x6000192C: nop

    // 0x60001930: bc1f        L_60001944
    if (!c1cs) {
        // 0x60001934: nop
    
            goto L_60001944;
    }
    // 0x60001934: nop

    // 0x60001938: sub.s       $f16, $f0, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f14.fl;
    // 0x6000193C: b           L_60001948
    // 0x60001940: neg.s       $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = -ctx->f16.fl;
        goto L_60001948;
    // 0x60001940: neg.s       $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = -ctx->f16.fl;
L_60001944:
    // 0x60001944: sub.s       $f16, $f0, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f14.fl;
L_60001948:
    // 0x60001948: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    // 0x6000194C: nop

    // 0x60001950: bc1f        L_60001998
    if (!c1cs) {
        // 0x60001954: nop
    
            goto L_60001998;
    }
    // 0x60001954: nop

    // 0x60001958: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000195C: lwc1        $f4, 0x5A28($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5A28);
    // 0x60001960: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x60001964: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    // 0x60001968: nop

    // 0x6000196C: bc1f        L_60001988
    if (!c1cs) {
        // 0x60001970: nop
    
            goto L_60001988;
    }
    // 0x60001970: nop

    // 0x60001974: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x60001978: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x6000197C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001980: jr          $ra
    // 0x60001984: swc1        $f6, 0x5BB0($at)
    MEM_W(0X5BB0, ctx->r1) = ctx->f6.u32l;
    return;
    // 0x60001984: swc1        $f6, 0x5BB0($at)
    MEM_W(0X5BB0, ctx->r1) = ctx->f6.u32l;
L_60001988:
    // 0x60001988: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x6000198C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001990: jr          $ra
    // 0x60001994: swc1        $f8, 0x5BB0($at)
    MEM_W(0X5BB0, ctx->r1) = ctx->f8.u32l;
    return;
    // 0x60001994: swc1        $f8, 0x5BB0($at)
    MEM_W(0X5BB0, ctx->r1) = ctx->f8.u32l;
L_60001998:
    // 0x60001998: lwc1        $f10, 0x5A2C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X5A2C);
    // 0x6000199C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x600019A0: c.lt.s      $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f14.fl < ctx->f10.fl;
    // 0x600019A4: nop

    // 0x600019A8: bc1f        L_600019C0
    if (!c1cs) {
        // 0x600019AC: nop
    
            goto L_600019C0;
    }
    // 0x600019AC: nop

    // 0x600019B0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x600019B4: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600019B8: jr          $ra
    // 0x600019BC: swc1        $f18, 0x5BB0($at)
    MEM_W(0X5BB0, ctx->r1) = ctx->f18.u32l;
    return;
    // 0x600019BC: swc1        $f18, 0x5BB0($at)
    MEM_W(0X5BB0, ctx->r1) = ctx->f18.u32l;
L_600019C0:
    // 0x600019C0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x600019C4: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600019C8: swc1        $f4, 0x5BB0($at)
    MEM_W(0X5BB0, ctx->r1) = ctx->f4.u32l;
    // 0x600019CC: jr          $ra
    // 0x600019D0: nop

    return;
    // 0x600019D0: nop

;}
RECOMP_FUNC void ovl_stage_world7_19D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600019D4: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x600019D8: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x600019DC: addiu       $v1, $v1, 0x5BF0
    ctx->r3 = ADD32(ctx->r3, 0X5BF0);
    // 0x600019E0: addiu       $v0, $v0, 0x5BC0
    ctx->r2 = ADD32(ctx->r2, 0X5BC0);
    // 0x600019E4: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x600019E8: lwc1        $f2, 0x0($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X0);
    // 0x600019EC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x600019F0: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x600019F4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x600019F8: bc1f        L_60001A0C
    if (!c1cs) {
        // 0x600019FC: nop
    
            goto L_60001A0C;
    }
    // 0x600019FC: nop

    // 0x60001A00: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x60001A04: b           L_60001A10
    // 0x60001A08: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
        goto L_60001A10;
    // 0x60001A08: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
L_60001A0C:
    // 0x60001A0C: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
L_60001A10:
    // 0x60001A10: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x60001A14: nop

    // 0x60001A18: bc1f        L_60001AA0
    if (!c1cs) {
        // 0x60001A1C: nop
    
            goto L_60001AA0;
    }
    // 0x60001A1C: nop

    // 0x60001A20: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x60001A24: lwc1        $f2, 0x4($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X4);
    // 0x60001A28: nop

    // 0x60001A2C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x60001A30: nop

    // 0x60001A34: bc1f        L_60001A48
    if (!c1cs) {
        // 0x60001A38: nop
    
            goto L_60001A48;
    }
    // 0x60001A38: nop

    // 0x60001A3C: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x60001A40: b           L_60001A4C
    // 0x60001A44: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
        goto L_60001A4C;
    // 0x60001A44: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
L_60001A48:
    // 0x60001A48: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
L_60001A4C:
    // 0x60001A4C: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x60001A50: nop

    // 0x60001A54: bc1f        L_60001AA0
    if (!c1cs) {
        // 0x60001A58: nop
    
            goto L_60001AA0;
    }
    // 0x60001A58: nop

    // 0x60001A5C: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x60001A60: lwc1        $f2, 0x8($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X8);
    // 0x60001A64: nop

    // 0x60001A68: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x60001A6C: nop

    // 0x60001A70: bc1f        L_60001A84
    if (!c1cs) {
        // 0x60001A74: nop
    
            goto L_60001A84;
    }
    // 0x60001A74: nop

    // 0x60001A78: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x60001A7C: b           L_60001A88
    // 0x60001A80: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
        goto L_60001A88;
    // 0x60001A80: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
L_60001A84:
    // 0x60001A84: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
L_60001A88:
    // 0x60001A88: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x60001A8C: nop

    // 0x60001A90: bc1f        L_60001AA4
    if (!c1cs) {
        // 0x60001A94: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_60001AA4;
    }
    // 0x60001A94: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x60001A98: jr          $ra
    // 0x60001A9C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x60001A9C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_60001AA0:
    // 0x60001AA0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_60001AA4:
    // 0x60001AA4: jr          $ra
    // 0x60001AA8: nop

    return;
    // 0x60001AA8: nop

;}
RECOMP_FUNC void ovl_stage_world7_1AAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001AAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60001AB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60001AB4: jal         0x6000034C
    // 0x60001AB8: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    ovl_stage_world7_34C(rdram, ctx);
        goto after_0;
    // 0x60001AB8: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_0:
    // 0x60001ABC: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x60001AC0: addiu       $v1, $v1, 0x5B94
    ctx->r3 = ADD32(ctx->r3, 0X5B94);
    // 0x60001AC4: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x60001AC8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x60001ACC: beq         $a1, $t6, L_60001ADC
    if (ctx->r5 == ctx->r14) {
        // 0x60001AD0: slti        $at, $v0, 0x62
        ctx->r1 = SIGNED(ctx->r2) < 0X62 ? 1 : 0;
            goto L_60001ADC;
    }
    // 0x60001AD0: slti        $at, $v0, 0x62
    ctx->r1 = SIGNED(ctx->r2) < 0X62 ? 1 : 0;
    // 0x60001AD4: beq         $at, $zero, L_60001B9C
    if (ctx->r1 == 0) {
        // 0x60001AD8: addiu       $a0, $zero, 0xA
        ctx->r4 = ADD32(0, 0XA);
            goto L_60001B9C;
    }
    // 0x60001AD8: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
L_60001ADC:
    // 0x60001ADC: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x60001AE0: jal         0x6000034C
    // 0x60001AE4: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    ovl_stage_world7_34C(rdram, ctx);
        goto after_1;
    // 0x60001AE4: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_1:
    // 0x60001AE8: slti        $at, $v0, 0x32
    ctx->r1 = SIGNED(ctx->r2) < 0X32 ? 1 : 0;
    // 0x60001AEC: beq         $at, $zero, L_60001B00
    if (ctx->r1 == 0) {
        // 0x60001AF0: addiu       $t7, $zero, 0x3
        ctx->r15 = ADD32(0, 0X3);
            goto L_60001B00;
    }
    // 0x60001AF0: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x60001AF4: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001AF8: b           L_60001B10
    // 0x60001AFC: sw          $t7, 0x5B9C($at)
    MEM_W(0X5B9C, ctx->r1) = ctx->r15;
        goto L_60001B10;
    // 0x60001AFC: sw          $t7, 0x5B9C($at)
    MEM_W(0X5B9C, ctx->r1) = ctx->r15;
L_60001B00:
    // 0x60001B00: jal         0x6000034C
    // 0x60001B04: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    ovl_stage_world7_34C(rdram, ctx);
        goto after_2;
    // 0x60001B04: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_2:
    // 0x60001B08: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001B0C: sw          $v0, 0x5B9C($at)
    MEM_W(0X5B9C, ctx->r1) = ctx->r2;
L_60001B10:
    // 0x60001B10: jal         0x6000034C
    // 0x60001B14: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    ovl_stage_world7_34C(rdram, ctx);
        goto after_3;
    // 0x60001B14: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_3:
    // 0x60001B18: addiu       $t8, $v0, 0x1E
    ctx->r24 = ADD32(ctx->r2, 0X1E);
    // 0x60001B1C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001B20: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x60001B24: lw          $v1, 0x5B9C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X5B9C);
    // 0x60001B28: sw          $t8, 0x5B98($at)
    MEM_W(0X5B98, ctx->r1) = ctx->r24;
    // 0x60001B2C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001B30: beq         $v1, $zero, L_60001B5C
    if (ctx->r3 == 0) {
        // 0x60001B34: sw          $zero, 0x5BB8($at)
        MEM_W(0X5BB8, ctx->r1) = 0;
            goto L_60001B5C;
    }
    // 0x60001B34: sw          $zero, 0x5BB8($at)
    MEM_W(0X5BB8, ctx->r1) = 0;
    // 0x60001B38: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x60001B3C: beq         $v1, $at, L_60001B6C
    if (ctx->r3 == ctx->r1) {
        // 0x60001B40: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_60001B6C;
    }
    // 0x60001B40: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x60001B44: beq         $v1, $at, L_60001B7C
    if (ctx->r3 == ctx->r1) {
        // 0x60001B48: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_60001B7C;
    }
    // 0x60001B48: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x60001B4C: beq         $v1, $at, L_60001B8C
    if (ctx->r3 == ctx->r1) {
        // 0x60001B50: nop
    
            goto L_60001B8C;
    }
    // 0x60001B50: nop

    // 0x60001B54: b           L_60001BB4
    // 0x60001B58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60001BB4;
    // 0x60001B58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001B5C:
    // 0x60001B5C: jal         0x600016E0
    // 0x60001B60: nop

    ovl_stage_world7_16E0(rdram, ctx);
        goto after_4;
    // 0x60001B60: nop

    after_4:
    // 0x60001B64: b           L_60001BB4
    // 0x60001B68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60001BB4;
    // 0x60001B68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001B6C:
    // 0x60001B6C: jal         0x60001718
    // 0x60001B70: nop

    ovl_stage_world7_1718(rdram, ctx);
        goto after_5;
    // 0x60001B70: nop

    after_5:
    // 0x60001B74: b           L_60001BB4
    // 0x60001B78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60001BB4;
    // 0x60001B78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001B7C:
    // 0x60001B7C: jal         0x600017C8
    // 0x60001B80: nop

    ovl_stage_world7_17C8(rdram, ctx);
        goto after_6;
    // 0x60001B80: nop

    after_6:
    // 0x60001B84: b           L_60001BB4
    // 0x60001B88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60001BB4;
    // 0x60001B88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001B8C:
    // 0x60001B8C: jal         0x600018E0
    // 0x60001B90: nop

    ovl_stage_world7_18E0(rdram, ctx);
        goto after_7;
    // 0x60001B90: nop

    after_7:
    // 0x60001B94: b           L_60001BB4
    // 0x60001B98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60001BB4;
    // 0x60001B98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001B9C:
    // 0x60001B9C: jal         0x6000034C
    // 0x60001BA0: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
    ovl_stage_world7_34C(rdram, ctx);
        goto after_8;
    // 0x60001BA0: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
    after_8:
    // 0x60001BA4: addiu       $t9, $v0, 0x4
    ctx->r25 = ADD32(ctx->r2, 0X4);
    // 0x60001BA8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001BAC: sw          $t9, 0x5B98($at)
    MEM_W(0X5B98, ctx->r1) = ctx->r25;
    // 0x60001BB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001BB4:
    // 0x60001BB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60001BB8: jr          $ra
    // 0x60001BBC: nop

    return;
    // 0x60001BBC: nop

;}
RECOMP_FUNC void ovl_stage_world7_1BC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001BC0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x60001BC4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x60001BC8: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60001BCC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60001BD0: lw          $a0, 0x59A0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X59A0);
    // 0x60001BD4: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x60001BD8: jal         0x600006C4
    // 0x60001BDC: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    ovl_stage_world7_6C4(rdram, ctx);
        goto after_0;
    // 0x60001BDC: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    after_0:
    // 0x60001BE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60001BE4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x60001BE8: jr          $ra
    // 0x60001BEC: nop

    return;
    // 0x60001BEC: nop

;}
RECOMP_FUNC void ovl_stage_world7_1BF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001BF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60001BF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60001BF8: jal         0x60001BC0
    // 0x60001BFC: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    ovl_stage_world7_1BC0(rdram, ctx);
        goto after_0;
    // 0x60001BFC: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    after_0:
    // 0x60001C00: jal         0x60001658
    // 0x60001C04: nop

    ovl_stage_world7_1658(rdram, ctx);
        goto after_1;
    // 0x60001C04: nop

    after_1:
    // 0x60001C08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60001C0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60001C10: jr          $ra
    // 0x60001C14: nop

    return;
    // 0x60001C14: nop

;}
RECOMP_FUNC void ovl_stage_world7_1C18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001C18: lui         $t6, 0x6000
    ctx->r14 = S32(0X6000 << 16);
    // 0x60001C1C: lw          $t6, 0x5C14($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5C14);
    // 0x60001C20: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x60001C24: andi        $t7, $t6, 0x82B7
    ctx->r15 = ctx->r14 & 0X82B7;
    // 0x60001C28: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x60001C2C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x60001C30: bne         $t7, $zero, L_60001C40
    if (ctx->r15 != 0) {
        // 0x60001C34: sw          $s0, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r16;
            goto L_60001C40;
    }
    // 0x60001C34: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x60001C38: b           L_60001C44
    // 0x60001C3C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_60001C44;
    // 0x60001C3C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_60001C40:
    // 0x60001C40: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_60001C44:
    // 0x60001C44: beq         $v1, $zero, L_60001C5C
    if (ctx->r3 == 0) {
        // 0x60001C48: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_60001C5C;
    }
    // 0x60001C48: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60001C4C: lw          $a0, 0x59A0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X59A0);
    // 0x60001C50: jal         0x60000F28
    // 0x60001C54: nop

    ovl_stage_world7_F28(rdram, ctx);
        goto after_0;
    // 0x60001C54: nop

    after_0:
    // 0x60001C58: bne         $v0, $zero, L_60001C80
    if (ctx->r2 != 0) {
        // 0x60001C5C: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_60001C80;
    }
L_60001C5C:
    // 0x60001C5C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x60001C60: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001C64: sw          $t8, 0x5B94($at)
    MEM_W(0X5B94, ctx->r1) = ctx->r24;
    // 0x60001C68: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001C6C: addiu       $t9, $zero, 0x1E
    ctx->r25 = ADD32(0, 0X1E);
    // 0x60001C70: sw          $t9, 0x5B98($at)
    MEM_W(0X5B98, ctx->r1) = ctx->r25;
    // 0x60001C74: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001C78: b           L_600020E4
    // 0x60001C7C: sw          $zero, 0x5BB8($at)
    MEM_W(0X5BB8, ctx->r1) = 0;
        goto L_600020E4;
    // 0x60001C7C: sw          $zero, 0x5BB8($at)
    MEM_W(0X5BB8, ctx->r1) = 0;
L_60001C80:
    // 0x60001C80: jal         0x6000034C
    // 0x60001C84: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    ovl_stage_world7_34C(rdram, ctx);
        goto after_1;
    // 0x60001C84: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_1:
    // 0x60001C88: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x60001C8C: lw          $v1, 0x5C10($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X5C10);
    // 0x60001C90: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x60001C94: lw          $t0, 0x30($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X30);
    // 0x60001C98: lw          $a1, 0x2C($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X2C);
    // 0x60001C9C: div         $zero, $t0, $a2
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r6)));
    // 0x60001CA0: lui         $a3, 0x6000
    ctx->r7 = S32(0X6000 << 16);
    // 0x60001CA4: bne         $a2, $zero, L_60001CB0
    if (ctx->r6 != 0) {
        // 0x60001CA8: nop
    
            goto L_60001CB0;
    }
    // 0x60001CA8: nop

    // 0x60001CAC: break       7
    do_break(1610620076);
L_60001CB0:
    // 0x60001CB0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x60001CB4: bne         $a2, $at, L_60001CC8
    if (ctx->r6 != ctx->r1) {
        // 0x60001CB8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_60001CC8;
    }
    // 0x60001CB8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x60001CBC: bne         $t0, $at, L_60001CC8
    if (ctx->r8 != ctx->r1) {
        // 0x60001CC0: nop
    
            goto L_60001CC8;
    }
    // 0x60001CC0: nop

    // 0x60001CC4: break       6
    do_break(1610620100);
L_60001CC8:
    // 0x60001CC8: addiu       $a3, $a3, 0x5C0C
    ctx->r7 = ADD32(ctx->r7, 0X5C0C);
    // 0x60001CCC: mflo        $t1
    ctx->r9 = lo;
    // 0x60001CD0: slt         $at, $t1, $a1
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x60001CD4: bne         $at, $zero, L_60001D7C
    if (ctx->r1 != 0) {
        // 0x60001CD8: nop
    
            goto L_60001D7C;
    }
    // 0x60001CD8: nop

    // 0x60001CDC: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x60001CE0: addiu       $v1, $zero, 0x3C
    ctx->r3 = ADD32(0, 0X3C);
    // 0x60001CE4: beq         $a0, $zero, L_60001CF4
    if (ctx->r4 == 0) {
        // 0x60001CE8: lui         $s0, 0x6000
        ctx->r16 = S32(0X6000 << 16);
            goto L_60001CF4;
    }
    // 0x60001CE8: lui         $s0, 0x6000
    ctx->r16 = S32(0X6000 << 16);
    // 0x60001CEC: b           L_60001CF4
    // 0x60001CF0: addiu       $v1, $zero, 0x46
    ctx->r3 = ADD32(0, 0X46);
        goto L_60001CF4;
    // 0x60001CF0: addiu       $v1, $zero, 0x46
    ctx->r3 = ADD32(0, 0X46);
L_60001CF4:
    // 0x60001CF4: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x60001CF8: bne         $at, $zero, L_60001D7C
    if (ctx->r1 != 0) {
        // 0x60001CFC: addiu       $s0, $s0, 0x5BA0
        ctx->r16 = ADD32(ctx->r16, 0X5BA0);
            goto L_60001D7C;
    }
    // 0x60001CFC: addiu       $s0, $s0, 0x5BA0
    ctx->r16 = ADD32(ctx->r16, 0X5BA0);
    // 0x60001D00: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x60001D04: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60001D08: lwc1        $f0, 0x0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X0);
    // 0x60001D0C: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x60001D10: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x60001D14: nop

    // 0x60001D18: bc1f        L_60001D7C
    if (!c1cs) {
        // 0x60001D1C: nop
    
            goto L_60001D7C;
    }
    // 0x60001D1C: nop

    // 0x60001D20: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60001D24: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001D28: c.le.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl <= ctx->f6.fl;
    // 0x60001D2C: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x60001D30: bc1f        L_60001D7C
    if (!c1cs) {
        // 0x60001D34: addiu       $t3, $zero, 0xF
        ctx->r11 = ADD32(0, 0XF);
            goto L_60001D7C;
    }
    // 0x60001D34: addiu       $t3, $zero, 0xF
    ctx->r11 = ADD32(0, 0XF);
    // 0x60001D38: sw          $t2, 0x5B94($at)
    MEM_W(0X5B94, ctx->r1) = ctx->r10;
    // 0x60001D3C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001D40: sw          $a2, 0x5B9C($at)
    MEM_W(0X5B9C, ctx->r1) = ctx->r6;
    // 0x60001D44: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001D48: beq         $a0, $zero, L_60001D58
    if (ctx->r4 == 0) {
        // 0x60001D4C: sw          $t3, 0x5B98($at)
        MEM_W(0X5B98, ctx->r1) = ctx->r11;
            goto L_60001D58;
    }
    // 0x60001D4C: sw          $t3, 0x5B98($at)
    MEM_W(0X5B98, ctx->r1) = ctx->r11;
    // 0x60001D50: addiu       $t4, $a0, -0x1
    ctx->r12 = ADD32(ctx->r4, -0X1);
    // 0x60001D54: sw          $t4, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r12;
L_60001D58:
    // 0x60001D58: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001D5C: lwc1        $f8, 0x5BA4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X5BA4);
    // 0x60001D60: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001D64: jal         0x6000169C
    // 0x60001D68: swc1        $f8, 0x5BB0($at)
    MEM_W(0X5BB0, ctx->r1) = ctx->f8.u32l;
    ovl_stage_world7_169C(rdram, ctx);
        goto after_2;
    // 0x60001D68: swc1        $f8, 0x5BB0($at)
    MEM_W(0X5BB0, ctx->r1) = ctx->f8.u32l;
    after_2:
    // 0x60001D6C: jal         0x60001BC0
    // 0x60001D70: addiu       $a0, $zero, 0x33
    ctx->r4 = ADD32(0, 0X33);
    ovl_stage_world7_1BC0(rdram, ctx);
        goto after_3;
    // 0x60001D70: addiu       $a0, $zero, 0x33
    ctx->r4 = ADD32(0, 0X33);
    after_3:
    // 0x60001D74: b           L_600020E8
    // 0x60001D78: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_600020E8;
    // 0x60001D78: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_60001D7C:
    // 0x60001D7C: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60001D80: addiu       $v0, $v0, 0x5C20
    ctx->r2 = ADD32(ctx->r2, 0X5C20);
    // 0x60001D84: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x60001D88: lui         $a3, 0x6000
    ctx->r7 = S32(0X6000 << 16);
    // 0x60001D8C: lui         $s0, 0x6000
    ctx->r16 = S32(0X6000 << 16);
    // 0x60001D90: addiu       $s0, $s0, 0x5BA0
    ctx->r16 = ADD32(ctx->r16, 0X5BA0);
    // 0x60001D94: beq         $t5, $a1, L_60001E14
    if (ctx->r13 == ctx->r5) {
        // 0x60001D98: addiu       $a3, $a3, 0x5C0C
        ctx->r7 = ADD32(ctx->r7, 0X5C0C);
            goto L_60001E14;
    }
    // 0x60001D98: addiu       $a3, $a3, 0x5C0C
    ctx->r7 = ADD32(ctx->r7, 0X5C0C);
    // 0x60001D9C: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x60001DA0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x60001DA4: lwc1        $f10, 0x0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X0);
    // 0x60001DA8: nop

    // 0x60001DAC: c.le.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl <= ctx->f10.fl;
    // 0x60001DB0: nop

    // 0x60001DB4: bc1f        L_60001E14
    if (!c1cs) {
        // 0x60001DB8: nop
    
            goto L_60001E14;
    }
    // 0x60001DB8: nop

    // 0x60001DBC: lw          $t6, 0x0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X0);
    // 0x60001DC0: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x60001DC4: bne         $t6, $zero, L_60001E14
    if (ctx->r14 != 0) {
        // 0x60001DC8: lui         $at, 0x6000
        ctx->r1 = S32(0X6000 << 16);
            goto L_60001E14;
    }
    // 0x60001DC8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001DCC: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
    // 0x60001DD0: sw          $t7, 0x5B94($at)
    MEM_W(0X5B94, ctx->r1) = ctx->r15;
    // 0x60001DD4: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001DD8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x60001DDC: sw          $t8, 0x5B9C($at)
    MEM_W(0X5B9C, ctx->r1) = ctx->r24;
    // 0x60001DE0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001DE4: addiu       $t9, $zero, 0x2D
    ctx->r25 = ADD32(0, 0X2D);
    // 0x60001DE8: sw          $t9, 0x5B98($at)
    MEM_W(0X5B98, ctx->r1) = ctx->r25;
    // 0x60001DEC: sw          $a2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r6;
    // 0x60001DF0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001DF4: lwc1        $f18, 0x5BA4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X5BA4);
    // 0x60001DF8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001DFC: jal         0x6000169C
    // 0x60001E00: swc1        $f18, 0x5BB0($at)
    MEM_W(0X5BB0, ctx->r1) = ctx->f18.u32l;
    ovl_stage_world7_169C(rdram, ctx);
        goto after_4;
    // 0x60001E00: swc1        $f18, 0x5BB0($at)
    MEM_W(0X5BB0, ctx->r1) = ctx->f18.u32l;
    after_4:
    // 0x60001E04: jal         0x60001BC0
    // 0x60001E08: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    ovl_stage_world7_1BC0(rdram, ctx);
        goto after_5;
    // 0x60001E08: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    after_5:
    // 0x60001E0C: b           L_600020E8
    // 0x60001E10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_600020E8;
    // 0x60001E10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_60001E14:
    // 0x60001E14: lui         $t0, 0x6000
    ctx->r8 = S32(0X6000 << 16);
    // 0x60001E18: lw          $t0, 0x5B94($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X5B94);
    // 0x60001E1C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x60001E20: beq         $t0, $at, L_60001FB4
    if (ctx->r8 == ctx->r1) {
        // 0x60001E24: nop
    
            goto L_60001FB4;
    }
    // 0x60001E24: nop

    // 0x60001E28: jal         0x6000034C
    // 0x60001E2C: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    ovl_stage_world7_34C(rdram, ctx);
        goto after_6;
    // 0x60001E2C: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_6:
    // 0x60001E30: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x60001E34: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60001E38: lwc1        $f0, 0x0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X0);
    // 0x60001E3C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x60001E40: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x60001E44: addiu       $v1, $zero, 0x3C
    ctx->r3 = ADD32(0, 0X3C);
    // 0x60001E48: bc1f        L_60001E54
    if (!c1cs) {
        // 0x60001E4C: addiu       $t1, $zero, 0x14
        ctx->r9 = ADD32(0, 0X14);
            goto L_60001E54;
    }
    // 0x60001E4C: addiu       $t1, $zero, 0x14
    ctx->r9 = ADD32(0, 0X14);
    // 0x60001E50: addiu       $a1, $v0, 0x1E
    ctx->r5 = ADD32(ctx->r2, 0X1E);
L_60001E54:
    // 0x60001E54: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60001E58: addiu       $v0, $v0, 0x5C0C
    ctx->r2 = ADD32(ctx->r2, 0X5C0C);
    // 0x60001E5C: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x60001E60: nop

    // 0x60001E64: beq         $a0, $zero, L_60001E74
    if (ctx->r4 == 0) {
        // 0x60001E68: nop
    
            goto L_60001E74;
    }
    // 0x60001E68: nop

    // 0x60001E6C: b           L_60001E74
    // 0x60001E70: addiu       $v1, $zero, 0x46
    ctx->r3 = ADD32(0, 0X46);
        goto L_60001E74;
    // 0x60001E70: addiu       $v1, $zero, 0x46
    ctx->r3 = ADD32(0, 0X46);
L_60001E74:
    // 0x60001E74: slt         $at, $a1, $v1
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x60001E78: beq         $at, $zero, L_60001EC8
    if (ctx->r1 == 0) {
        // 0x60001E7C: addiu       $v1, $zero, 0x2
        ctx->r3 = ADD32(0, 0X2);
            goto L_60001EC8;
    }
    // 0x60001E7C: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x60001E80: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001E84: sw          $v1, 0x5B94($at)
    MEM_W(0X5B94, ctx->r1) = ctx->r3;
    // 0x60001E88: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001E8C: sw          $v1, 0x5B9C($at)
    MEM_W(0X5B9C, ctx->r1) = ctx->r3;
    // 0x60001E90: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001E94: beq         $a0, $zero, L_60001EA4
    if (ctx->r4 == 0) {
        // 0x60001E98: sw          $t1, 0x5B98($at)
        MEM_W(0X5B98, ctx->r1) = ctx->r9;
            goto L_60001EA4;
    }
    // 0x60001E98: sw          $t1, 0x5B98($at)
    MEM_W(0X5B98, ctx->r1) = ctx->r9;
    // 0x60001E9C: addiu       $t2, $a0, -0x1
    ctx->r10 = ADD32(ctx->r4, -0X1);
    // 0x60001EA0: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
L_60001EA4:
    // 0x60001EA4: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001EA8: lwc1        $f6, 0x5BA4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X5BA4);
    // 0x60001EAC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001EB0: jal         0x6000169C
    // 0x60001EB4: swc1        $f6, 0x5BB0($at)
    MEM_W(0X5BB0, ctx->r1) = ctx->f6.u32l;
    ovl_stage_world7_169C(rdram, ctx);
        goto after_7;
    // 0x60001EB4: swc1        $f6, 0x5BB0($at)
    MEM_W(0X5BB0, ctx->r1) = ctx->f6.u32l;
    after_7:
    // 0x60001EB8: jal         0x60001BC0
    // 0x60001EBC: addiu       $a0, $zero, 0x38
    ctx->r4 = ADD32(0, 0X38);
    ovl_stage_world7_1BC0(rdram, ctx);
        goto after_8;
    // 0x60001EBC: addiu       $a0, $zero, 0x38
    ctx->r4 = ADD32(0, 0X38);
    after_8:
    // 0x60001EC0: b           L_600020E8
    // 0x60001EC4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_600020E8;
    // 0x60001EC4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_60001EC8:
    // 0x60001EC8: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x60001ECC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x60001ED0: nop

    // 0x60001ED4: c.le.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl <= ctx->f0.fl;
    // 0x60001ED8: nop

    // 0x60001EDC: bc1f        L_60001FB4
    if (!c1cs) {
        // 0x60001EE0: nop
    
            goto L_60001FB4;
    }
    // 0x60001EE0: nop

    // 0x60001EE4: jal         0x600006DC
    // 0x60001EE8: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    ovl_stage_world7_6DC(rdram, ctx);
        goto after_9;
    // 0x60001EE8: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    after_9:
    // 0x60001EEC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x60001EF0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x60001EF4: blez        $v0, L_60001F50
    if (SIGNED(ctx->r2) <= 0) {
        // 0x60001EF8: sw          $zero, 0x58($sp)
        MEM_W(0X58, ctx->r29) = 0;
            goto L_60001F50;
    }
    // 0x60001EF8: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
    // 0x60001EFC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_60001F00:
    // 0x60001F00: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
    // 0x60001F04: lui         $a1, 0x6000
    ctx->r5 = S32(0X6000 << 16);
    // 0x60001F08: addu        $t4, $t3, $s0
    ctx->r12 = ADD32(ctx->r11, ctx->r16);
    // 0x60001F0C: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x60001F10: addiu       $a1, $a1, 0x5BF0
    ctx->r5 = ADD32(ctx->r5, 0X5BF0);
    // 0x60001F14: lw          $a0, 0x0($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X0);
    // 0x60001F18: jal         0x60000418
    // 0x60001F1C: sw          $v1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r3;
    ovl_stage_world7_418(rdram, ctx);
        goto after_10;
    // 0x60001F1C: sw          $v1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r3;
    after_10:
    // 0x60001F20: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x60001F24: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x60001F28: lw          $v1, 0x60($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X60);
    // 0x60001F2C: c.le.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl <= ctx->f10.fl;
    // 0x60001F30: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x60001F34: bc1f        L_60001F48
    if (!c1cs) {
        // 0x60001F38: slt         $at, $s1, $v1
        ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_60001F48;
    }
    // 0x60001F38: slt         $at, $s1, $v1
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x60001F3C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x60001F40: b           L_60001F50
    // 0x60001F44: sw          $t6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r14;
        goto L_60001F50;
    // 0x60001F44: sw          $t6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r14;
L_60001F48:
    // 0x60001F48: bne         $at, $zero, L_60001F00
    if (ctx->r1 != 0) {
        // 0x60001F4C: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_60001F00;
    }
    // 0x60001F4C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_60001F50:
    // 0x60001F50: lw          $t7, 0x58($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X58);
    // 0x60001F54: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x60001F58: bne         $t7, $zero, L_60001FB4
    if (ctx->r15 != 0) {
        // 0x60001F5C: lui         $at, 0x6000
        ctx->r1 = S32(0X6000 << 16);
            goto L_60001FB4;
    }
    // 0x60001F5C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001F60: sw          $t8, 0x5B94($at)
    MEM_W(0X5B94, ctx->r1) = ctx->r24;
    // 0x60001F64: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001F68: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60001F6C: lw          $a0, 0x5C0C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5C0C);
    // 0x60001F70: sw          $zero, 0x5B9C($at)
    MEM_W(0X5B9C, ctx->r1) = 0;
    // 0x60001F74: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001F78: addiu       $t9, $zero, 0x2D
    ctx->r25 = ADD32(0, 0X2D);
    // 0x60001F7C: beq         $a0, $zero, L_60001F90
    if (ctx->r4 == 0) {
        // 0x60001F80: sw          $t9, 0x5B98($at)
        MEM_W(0X5B98, ctx->r1) = ctx->r25;
            goto L_60001F90;
    }
    // 0x60001F80: sw          $t9, 0x5B98($at)
    MEM_W(0X5B98, ctx->r1) = ctx->r25;
    // 0x60001F84: addiu       $t0, $a0, -0x1
    ctx->r8 = ADD32(ctx->r4, -0X1);
    // 0x60001F88: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001F8C: sw          $t0, 0x5C0C($at)
    MEM_W(0X5C0C, ctx->r1) = ctx->r8;
L_60001F90:
    // 0x60001F90: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001F94: lwc1        $f16, 0x5BA4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X5BA4);
    // 0x60001F98: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001F9C: jal         0x6000169C
    // 0x60001FA0: swc1        $f16, 0x5BB0($at)
    MEM_W(0X5BB0, ctx->r1) = ctx->f16.u32l;
    ovl_stage_world7_169C(rdram, ctx);
        goto after_11;
    // 0x60001FA0: swc1        $f16, 0x5BB0($at)
    MEM_W(0X5BB0, ctx->r1) = ctx->f16.u32l;
    after_11:
    // 0x60001FA4: jal         0x60001BC0
    // 0x60001FA8: addiu       $a0, $zero, 0x36
    ctx->r4 = ADD32(0, 0X36);
    ovl_stage_world7_1BC0(rdram, ctx);
        goto after_12;
    // 0x60001FA8: addiu       $a0, $zero, 0x36
    ctx->r4 = ADD32(0, 0X36);
    after_12:
    // 0x60001FAC: b           L_600020E8
    // 0x60001FB0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_600020E8;
    // 0x60001FB0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_60001FB4:
    // 0x60001FB4: jal         0x600006DC
    // 0x60001FB8: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    ovl_stage_world7_6DC(rdram, ctx);
        goto after_13;
    // 0x60001FB8: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    after_13:
    // 0x60001FBC: beq         $v0, $zero, L_600020DC
    if (ctx->r2 == 0) {
        // 0x60001FC0: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_600020DC;
    }
    // 0x60001FC0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x60001FC4: blez        $v0, L_600020DC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x60001FC8: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_600020DC;
    }
    // 0x60001FC8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x60001FCC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_60001FD0:
    // 0x60001FD0: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x60001FD4: lui         $a1, 0x6000
    ctx->r5 = S32(0X6000 << 16);
    // 0x60001FD8: addu        $t2, $t1, $s0
    ctx->r10 = ADD32(ctx->r9, ctx->r16);
    // 0x60001FDC: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x60001FE0: addiu       $a1, $a1, 0x5BF0
    ctx->r5 = ADD32(ctx->r5, 0X5BF0);
    // 0x60001FE4: lw          $a0, 0x0($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X0);
    // 0x60001FE8: jal         0x60000418
    // 0x60001FEC: sw          $v1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r3;
    ovl_stage_world7_418(rdram, ctx);
        goto after_14;
    // 0x60001FEC: sw          $v1, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r3;
    after_14:
    // 0x60001FF0: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x60001FF4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x60001FF8: lw          $v1, 0x50($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X50);
    // 0x60001FFC: c.le.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl <= ctx->f18.fl;
    // 0x60002000: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x60002004: bc1f        L_600020D4
    if (!c1cs) {
        // 0x60002008: nop
    
            goto L_600020D4;
    }
    // 0x60002008: nop

    // 0x6000200C: lw          $t4, 0x54($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X54);
    // 0x60002010: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002014: addu        $t5, $t4, $s0
    ctx->r13 = ADD32(ctx->r12, ctx->r16);
    // 0x60002018: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x6000201C: addiu       $a0, $a0, 0x5BF0
    ctx->r4 = ADD32(ctx->r4, 0X5BF0);
    // 0x60002020: lw          $a1, 0x0($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X0);
    // 0x60002024: jal         0x600003DC
    // 0x60002028: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    ovl_stage_world7_3DC(rdram, ctx);
        goto after_15;
    // 0x60002028: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    after_15:
    // 0x6000202C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002030: lwc1        $f13, 0x5A30($at)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r1, 0X5A30);
    // 0x60002034: lwc1        $f12, 0x5A34($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X5A34);
    // 0x60002038: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000203C: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x60002040: lwc1        $f9, 0x5A38($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X5A38);
    // 0x60002044: lwc1        $f8, 0x5A3C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X5A3C);
    // 0x60002048: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x6000204C: mul.d       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f0.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x60002050: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x60002054: addiu       $t8, $zero, 0x1E
    ctx->r24 = ADD32(0, 0X1E);
    // 0x60002058: c.le.d      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.d <= ctx->f0.d;
    // 0x6000205C: nop

    // 0x60002060: bc1f        L_6000207C
    if (!c1cs) {
        // 0x60002064: nop
    
            goto L_6000207C;
    }
    // 0x60002064: nop

    // 0x60002068: sub.d       $f10, $f0, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f10.d = ctx->f0.d - ctx->f12.d;
    // 0x6000206C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002070: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x60002074: b           L_600020B0
    // 0x60002078: swc1        $f16, 0x5BB0($at)
    MEM_W(0X5BB0, ctx->r1) = ctx->f16.u32l;
        goto L_600020B0;
    // 0x60002078: swc1        $f16, 0x5BB0($at)
    MEM_W(0X5BB0, ctx->r1) = ctx->f16.u32l;
L_6000207C:
    // 0x6000207C: mtc1        $zero, $f19
    ctx->f_odd[(19 - 1) * 2] = 0;
    // 0x60002080: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x60002084: nop

    // 0x60002088: c.lt.d      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.d < ctx->f18.d;
    // 0x6000208C: nop

    // 0x60002090: bc1f        L_600020A0
    if (!c1cs) {
        // 0x60002094: nop
    
            goto L_600020A0;
    }
    // 0x60002094: nop

    // 0x60002098: b           L_600020A4
    // 0x6000209C: add.d       $f2, $f0, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f2.d = ctx->f0.d + ctx->f12.d;
        goto L_600020A4;
    // 0x6000209C: add.d       $f2, $f0, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f2.d = ctx->f0.d + ctx->f12.d;
L_600020A0:
    // 0x600020A0: mov.d       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.d = ctx->f0.d;
L_600020A4:
    // 0x600020A4: cvt.s.d     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f4.fl = CVT_S_D(ctx->f2.d);
    // 0x600020A8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600020AC: swc1        $f4, 0x5BB0($at)
    MEM_W(0X5BB0, ctx->r1) = ctx->f4.u32l;
L_600020B0:
    // 0x600020B0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600020B4: sw          $zero, 0x5B94($at)
    MEM_W(0X5B94, ctx->r1) = 0;
    // 0x600020B8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600020BC: sw          $t7, 0x5B9C($at)
    MEM_W(0X5B9C, ctx->r1) = ctx->r15;
    // 0x600020C0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600020C4: sw          $t8, 0x5B98($at)
    MEM_W(0X5B98, ctx->r1) = ctx->r24;
    // 0x600020C8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600020CC: b           L_600020E4
    // 0x600020D0: sw          $zero, 0x5BB8($at)
    MEM_W(0X5BB8, ctx->r1) = 0;
        goto L_600020E4;
    // 0x600020D0: sw          $zero, 0x5BB8($at)
    MEM_W(0X5BB8, ctx->r1) = 0;
L_600020D4:
    // 0x600020D4: bne         $s1, $v1, L_60001FD0
    if (ctx->r17 != ctx->r3) {
        // 0x600020D8: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_60001FD0;
    }
    // 0x600020D8: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_600020DC:
    // 0x600020DC: jal         0x60001AAC
    // 0x600020E0: nop

    ovl_stage_world7_1AAC(rdram, ctx);
        goto after_16;
    // 0x600020E0: nop

    after_16:
L_600020E4:
    // 0x600020E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_600020E8:
    // 0x600020E8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x600020EC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x600020F0: jr          $ra
    // 0x600020F4: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x600020F4: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void ovl_stage_world7_20F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600020F8: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x600020FC: addiu       $v0, $v0, 0x5BC0
    ctx->r2 = ADD32(ctx->r2, 0X5BC0);
    // 0x60002100: lwc1        $f2, 0x0($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X0);
    // 0x60002104: lwc1        $f0, 0x10($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X10);
    // 0x60002108: c.le.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl <= ctx->f12.fl;
    // 0x6000210C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x60002110: bc1f        L_6000214C
    if (!c1cs) {
        // 0x60002114: sw          $a3, 0xC($sp)
        MEM_W(0XC, ctx->r29) = ctx->r7;
            goto L_6000214C;
    }
    // 0x60002114: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x60002118: lui         $at, 0x433E
    ctx->r1 = S32(0X433E << 16);
    // 0x6000211C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60002120: lui         $at, 0x43AF
    ctx->r1 = S32(0X43AF << 16);
    // 0x60002124: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x60002128: nop

    // 0x6000212C: bc1f        L_6000214C
    if (!c1cs) {
        // 0x60002130: nop
    
            goto L_6000214C;
    }
    // 0x60002130: nop

    // 0x60002134: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60002138: nop

    // 0x6000213C: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x60002140: nop

    // 0x60002144: bc1t        L_6000221C
    if (c1cs) {
        // 0x60002148: nop
    
            goto L_6000221C;
    }
    // 0x60002148: nop

L_6000214C:
    // 0x6000214C: lwc1        $f8, 0x8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X8);
    // 0x60002150: lwc1        $f0, 0x10($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X10);
    // 0x60002154: c.le.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl <= ctx->f2.fl;
    // 0x60002158: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x6000215C: bc1f        L_60002194
    if (!c1cs) {
        // 0x60002160: nop
    
            goto L_60002194;
    }
    // 0x60002160: nop

    // 0x60002164: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x60002168: lui         $at, 0x432A
    ctx->r1 = S32(0X432A << 16);
    // 0x6000216C: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x60002170: nop

    // 0x60002174: bc1f        L_60002194
    if (!c1cs) {
        // 0x60002178: nop
    
            goto L_60002194;
    }
    // 0x60002178: nop

    // 0x6000217C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x60002180: nop

    // 0x60002184: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x60002188: nop

    // 0x6000218C: bc1t        L_6000221C
    if (c1cs) {
        // 0x60002190: nop
    
            goto L_6000221C;
    }
    // 0x60002190: nop

L_60002194:
    // 0x60002194: lwc1        $f2, 0x8($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X8);
    // 0x60002198: lwc1        $f6, 0xC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC);
    // 0x6000219C: c.le.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl <= ctx->f14.fl;
    // 0x600021A0: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x600021A4: bc1f        L_600021DC
    if (!c1cs) {
        // 0x600021A8: nop
    
            goto L_600021DC;
    }
    // 0x600021A8: nop

    // 0x600021AC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x600021B0: lui         $at, 0x4382
    ctx->r1 = S32(0X4382 << 16);
    // 0x600021B4: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x600021B8: nop

    // 0x600021BC: bc1f        L_600021DC
    if (!c1cs) {
        // 0x600021C0: nop
    
            goto L_600021DC;
    }
    // 0x600021C0: nop

    // 0x600021C4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x600021C8: nop

    // 0x600021CC: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x600021D0: nop

    // 0x600021D4: bc1t        L_6000221C
    if (c1cs) {
        // 0x600021D8: nop
    
            goto L_6000221C;
    }
    // 0x600021D8: nop

L_600021DC:
    // 0x600021DC: c.le.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl <= ctx->f2.fl;
    // 0x600021E0: lui         $at, 0x438C
    ctx->r1 = S32(0X438C << 16);
    // 0x600021E4: bc1f        L_60002224
    if (!c1cs) {
        // 0x600021E8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_60002224;
    }
    // 0x600021E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x600021EC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x600021F0: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x600021F4: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x600021F8: nop

    // 0x600021FC: bc1t        L_6000221C
    if (c1cs) {
        // 0x60002200: nop
    
            goto L_6000221C;
    }
    // 0x60002200: nop

    // 0x60002204: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x60002208: nop

    // 0x6000220C: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x60002210: nop

    // 0x60002214: bc1f        L_60002224
    if (!c1cs) {
        // 0x60002218: nop
    
            goto L_60002224;
    }
    // 0x60002218: nop

L_6000221C:
    // 0x6000221C: jr          $ra
    // 0x60002220: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x60002220: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_60002224:
    // 0x60002224: jr          $ra
    // 0x60002228: nop

    return;
    // 0x60002228: nop

;}
RECOMP_FUNC void ovl_stage_world7_222C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000222C: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x60002230: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x60002234: lui         $at, 0x410C
    ctx->r1 = S32(0X410C << 16);
    // 0x60002238: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x6000223C: swc1        $f30, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f30.u32l;
    // 0x60002240: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x60002244: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x60002248: swc1        $f28, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f28.u32l;
    // 0x6000224C: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x60002250: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x60002254: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x60002258: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000225C: lwc1        $f26, 0x5A40($at)
    ctx->f26.u32l = MEM_W(ctx->r1, 0X5A40);
    // 0x60002260: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x60002264: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x60002268: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x6000226C: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x60002270: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x60002274: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x60002278: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x6000227C: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x60002280: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x60002284: lui         $s1, 0x6000
    ctx->r17 = S32(0X6000 << 16);
    // 0x60002288: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x6000228C: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x60002290: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x60002294: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x60002298: swc1        $f31, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x6000229C: swc1        $f29, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x600022A0: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x600022A4: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x600022A8: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x600022AC: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x600022B0: addiu       $s1, $s1, 0x59A0
    ctx->r17 = ADD32(ctx->r17, 0X59A0);
    // 0x600022B4: addiu       $s2, $sp, 0x70
    ctx->r18 = ADD32(ctx->r29, 0X70);
    // 0x600022B8: addiu       $s3, $zero, -0x100
    ctx->r19 = ADD32(0, -0X100);
    // 0x600022BC: addiu       $s4, $zero, 0x8
    ctx->r20 = ADD32(0, 0X8);
    // 0x600022C0: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x600022C4: addiu       $s6, $zero, 0x2
    ctx->r22 = ADD32(0, 0X2);
    // 0x600022C8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_600022CC:
    // 0x600022CC: mul.s       $f4, $f20, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f26.fl);
    // 0x600022D0: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x600022D4: swc1        $f24, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f24.u32l;
    // 0x600022D8: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x600022DC: mul.s       $f6, $f4, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f28.fl);
    // 0x600022E0: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x600022E4: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x600022E8: nop

    // 0x600022EC: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x600022F0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x600022F4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x600022F8: nop

    // 0x600022FC: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x60002300: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x60002304: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x60002308: or          $t8, $t7, $s3
    ctx->r24 = ctx->r15 | ctx->r19;
    // 0x6000230C: jal         0x600006C4
    // 0x60002310: sw          $t8, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r24;
    ovl_stage_world7_6C4(rdram, ctx);
        goto after_0;
    // 0x60002310: sw          $t8, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r24;
    after_0:
    // 0x60002314: jal         0x600009D0
    // 0x60002318: add.s       $f20, $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f22.fl;
    ovl_stage_world7_9D0(rdram, ctx);
        goto after_1;
    // 0x60002318: add.s       $f20, $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f22.fl;
    after_1:
    // 0x6000231C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60002320: bne         $s0, $s4, L_600022CC
    if (ctx->r16 != ctx->r20) {
        // 0x60002324: nop
    
            goto L_600022CC;
    }
    // 0x60002324: nop

    // 0x60002328: neg.s       $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = -ctx->f22.fl;
    // 0x6000232C: jal         0x600009D0
    // 0x60002330: mov.s       $f20, $f30
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 30);
    ctx->f20.fl = ctx->f30.fl;
    ovl_stage_world7_9D0(rdram, ctx);
        goto after_2;
    // 0x60002330: mov.s       $f20, $f30
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 30);
    ctx->f20.fl = ctx->f30.fl;
    after_2:
    // 0x60002334: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x60002338: bne         $s5, $s6, L_600022CC
    if (ctx->r21 != ctx->r22) {
        // 0x6000233C: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_600022CC;
    }
    // 0x6000233C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60002340: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x60002344: swc1        $f24, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f24.u32l;
    // 0x60002348: sw          $zero, 0x74($sp)
    MEM_W(0X74, ctx->r29) = 0;
    // 0x6000234C: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x60002350: jal         0x600006C4
    // 0x60002354: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    ovl_stage_world7_6C4(rdram, ctx);
        goto after_3;
    // 0x60002354: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_3:
    // 0x60002358: jal         0x600009AC
    // 0x6000235C: nop

    ovl_stage_world7_9AC(rdram, ctx);
        goto after_4;
    // 0x6000235C: nop

    after_4:
    // 0x60002360: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x60002364: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x60002368: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x6000236C: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x60002370: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x60002374: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x60002378: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x6000237C: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x60002380: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x60002384: lwc1        $f29, 0x38($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x60002388: lwc1        $f28, 0x3C($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x6000238C: lwc1        $f31, 0x40($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x60002390: lwc1        $f30, 0x44($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X44);
    // 0x60002394: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x60002398: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x6000239C: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x600023A0: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x600023A4: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x600023A8: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x600023AC: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x600023B0: jr          $ra
    // 0x600023B4: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    return;
    // 0x600023B4: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void ovl_stage_world7_23B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600023B8: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x600023BC: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x600023C0: lui         $s1, 0x6000
    ctx->r17 = S32(0X6000 << 16);
    // 0x600023C4: addiu       $s1, $s1, 0x5BC0
    ctx->r17 = ADD32(ctx->r17, 0X5BC0);
    // 0x600023C8: lui         $at, 0xC2C8
    ctx->r1 = S32(0XC2C8 << 16);
    // 0x600023CC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x600023D0: lwc1        $f6, 0x4($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X4);
    // 0x600023D4: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x600023D8: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x600023DC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x600023E0: bc1f        L_600025AC
    if (!c1cs) {
        // 0x600023E4: lui         $s0, 0x6000
        ctx->r16 = S32(0X6000 << 16);
            goto L_600025AC;
    }
    // 0x600023E4: lui         $s0, 0x6000
    ctx->r16 = S32(0X6000 << 16);
    // 0x600023E8: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600023EC: lw          $a0, 0x59A0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X59A0);
    // 0x600023F0: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x600023F4: jal         0x600006C4
    // 0x600023F8: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    ovl_stage_world7_6C4(rdram, ctx);
        goto after_0;
    // 0x600023F8: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    after_0:
    // 0x600023FC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x60002400: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x60002404: jal         0x60001BF0
    // 0x60002408: swc1        $f8, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->f8.u32l;
    ovl_stage_world7_1BF0(rdram, ctx);
        goto after_1;
    // 0x60002408: swc1        $f8, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->f8.u32l;
    after_1:
    // 0x6000240C: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60002410: addiu       $a2, $a2, 0x5C18
    ctx->r6 = ADD32(ctx->r6, 0X5C18);
    // 0x60002414: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x60002418: jal         0x60000808
    // 0x6000241C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world7_808(rdram, ctx);
        goto after_2;
    // 0x6000241C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x60002420: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60002424: lui         $s0, 0x6000
    ctx->r16 = S32(0X6000 << 16);
    // 0x60002428: addiu       $s0, $s0, 0x5B94
    ctx->r16 = ADD32(ctx->r16, 0X5B94);
    // 0x6000242C: addiu       $v0, $v0, 0x5B98
    ctx->r2 = ADD32(ctx->r2, 0X5B98);
    // 0x60002430: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x60002434: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x60002438: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x6000243C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x60002440: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002444: addiu       $t9, $zero, 0x7
    ctx->r25 = ADD32(0, 0X7);
    // 0x60002448: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x6000244C: sw          $zero, 0x5BB8($at)
    MEM_W(0X5BB8, ctx->r1) = 0;
    // 0x60002450: sw          $t9, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r25;
    // 0x60002454: sw          $t0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r8;
    // 0x60002458: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x6000245C: jal         0x600007F0
    // 0x60002460: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    ovl_stage_world7_7F0(rdram, ctx);
        goto after_3;
    // 0x60002460: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    after_3:
    // 0x60002464: jal         0x60001BC0
    // 0x60002468: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    ovl_stage_world7_1BC0(rdram, ctx);
        goto after_4;
    // 0x60002468: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    after_4:
    // 0x6000246C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002470: addiu       $a0, $a0, 0x222C
    ctx->r4 = ADD32(ctx->r4, 0X222C);
    // 0x60002474: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60002478: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x6000247C: jal         0x60000994
    // 0x60002480: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world7_994(rdram, ctx);
        goto after_5;
    // 0x60002480: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
    // 0x60002484: jal         0x60000244
    // 0x60002488: addiu       $a0, $zero, 0x238
    ctx->r4 = ADD32(0, 0X238);
    ovl_stage_world7_244(rdram, ctx);
        goto after_6;
    // 0x60002488: addiu       $a0, $zero, 0x238
    ctx->r4 = ADD32(0, 0X238);
    after_6:
    // 0x6000248C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60002490: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
L_60002494:
    // 0x60002494: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x60002498: lwc1        $f10, 0x4($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X4);
    // 0x6000249C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600024A0: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x600024A4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x600024A8: swc1        $f18, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f18.u32l;
    // 0x600024AC: lw          $a0, 0x59A0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X59A0);
    // 0x600024B0: jal         0x600006C4
    // 0x600024B4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world7_6C4(rdram, ctx);
        goto after_7;
    // 0x600024B4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_7:
    // 0x600024B8: jal         0x600009D0
    // 0x600024BC: nop

    ovl_stage_world7_9D0(rdram, ctx);
        goto after_8;
    // 0x600024BC: nop

    after_8:
    // 0x600024C0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x600024C4: slti        $at, $s0, 0x14
    ctx->r1 = SIGNED(ctx->r16) < 0X14 ? 1 : 0;
    // 0x600024C8: bne         $at, $zero, L_60002494
    if (ctx->r1 != 0) {
        // 0x600024CC: lui         $at, 0x4248
        ctx->r1 = S32(0X4248 << 16);
            goto L_60002494;
    }
    // 0x600024CC: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x600024D0: jal         0x60000340
    // 0x600024D4: nop

    ovl_stage_world7_340(rdram, ctx);
        goto after_9;
    // 0x600024D4: nop

    after_9:
    // 0x600024D8: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x600024DC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x600024E0: cvt.s.d     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f4.fl = CVT_S_D(ctx->f0.d);
    // 0x600024E4: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x600024E8: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x600024EC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x600024F0: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x600024F4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x600024F8: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x600024FC: swc1        $f18, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f18.u32l;
    // 0x60002500: jal         0x60000340
    // 0x60002504: swc1        $f16, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f16.u32l;
    ovl_stage_world7_340(rdram, ctx);
        goto after_10;
    // 0x60002504: swc1        $f16, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f16.u32l;
    after_10:
    // 0x60002508: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x6000250C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x60002510: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002514: lwc1        $f6, 0x5A44($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X5A44);
    // 0x60002518: cvt.s.d     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f4.fl = CVT_S_D(ctx->f0.d);
    // 0x6000251C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002520: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x60002524: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x60002528: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x6000252C: add.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f12.fl;
    // 0x60002530: swc1        $f10, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f10.u32l;
    // 0x60002534: lw          $a0, 0x59A0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X59A0);
    // 0x60002538: jal         0x600006C4
    // 0x6000253C: nop

    ovl_stage_world7_6C4(rdram, ctx);
        goto after_11;
    // 0x6000253C: nop

    after_11:
    // 0x60002540: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60002544: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
L_60002548:
    // 0x60002548: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x6000254C: lwc1        $f16, 0x4($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X4);
    // 0x60002550: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002554: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x60002558: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x6000255C: swc1        $f4, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f4.u32l;
    // 0x60002560: lw          $a0, 0x59A0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X59A0);
    // 0x60002564: jal         0x600006C4
    // 0x60002568: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world7_6C4(rdram, ctx);
        goto after_12;
    // 0x60002568: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_12:
    // 0x6000256C: jal         0x600009D0
    // 0x60002570: nop

    ovl_stage_world7_9D0(rdram, ctx);
        goto after_13;
    // 0x60002570: nop

    after_13:
    // 0x60002574: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60002578: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x6000257C: bne         $s0, $at, L_60002548
    if (ctx->r16 != ctx->r1) {
        // 0x60002580: lui         $at, 0x4248
        ctx->r1 = S32(0X4248 << 16);
            goto L_60002548;
    }
    // 0x60002580: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x60002584: addiu       $t1, $zero, 0x7
    ctx->r9 = ADD32(0, 0X7);
    // 0x60002588: sw          $t1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r9;
    // 0x6000258C: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
    // 0x60002590: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x60002594: jal         0x600007F0
    // 0x60002598: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    ovl_stage_world7_7F0(rdram, ctx);
        goto after_14;
    // 0x60002598: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    after_14:
    // 0x6000259C: jal         0x60001BC0
    // 0x600025A0: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    ovl_stage_world7_1BC0(rdram, ctx);
        goto after_15;
    // 0x600025A0: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    after_15:
    // 0x600025A4: b           L_60002954
    // 0x600025A8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_60002954;
    // 0x600025A8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_600025AC:
    // 0x600025AC: addiu       $s0, $s0, 0x5B94
    ctx->r16 = ADD32(ctx->r16, 0X5B94);
    // 0x600025B0: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x600025B4: lui         $s1, 0x6000
    ctx->r17 = S32(0X6000 << 16);
    // 0x600025B8: beq         $v0, $zero, L_600025E8
    if (ctx->r2 == 0) {
        // 0x600025BC: addiu       $s1, $s1, 0x5BB8
        ctx->r17 = ADD32(ctx->r17, 0X5BB8);
            goto L_600025E8;
    }
    // 0x600025BC: addiu       $s1, $s1, 0x5BB8
    ctx->r17 = ADD32(ctx->r17, 0X5BB8);
    // 0x600025C0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x600025C4: beq         $v0, $at, L_60002868
    if (ctx->r2 == ctx->r1) {
        // 0x600025C8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_60002868;
    }
    // 0x600025C8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x600025CC: beq         $v0, $at, L_600028A4
    if (ctx->r2 == ctx->r1) {
        // 0x600025D0: lui         $t2, 0x6000
        ctx->r10 = S32(0X6000 << 16);
            goto L_600028A4;
    }
    // 0x600025D0: lui         $t2, 0x6000
    ctx->r10 = S32(0X6000 << 16);
    // 0x600025D4: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x600025D8: beq         $v0, $at, L_60002900
    if (ctx->r2 == ctx->r1) {
        // 0x600025DC: nop
    
            goto L_60002900;
    }
    // 0x600025DC: nop

    // 0x600025E0: b           L_60002954
    // 0x600025E4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_60002954;
    // 0x600025E4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_600025E8:
    // 0x600025E8: lw          $t2, 0x0($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X0);
    // 0x600025EC: nop

    // 0x600025F0: slti        $at, $t2, 0x3
    ctx->r1 = SIGNED(ctx->r10) < 0X3 ? 1 : 0;
    // 0x600025F4: bne         $at, $zero, L_600027EC
    if (ctx->r1 != 0) {
        // 0x600025F8: nop
    
            goto L_600027EC;
    }
    // 0x600025F8: nop

    // 0x600025FC: jal         0x600019D4
    // 0x60002600: nop

    ovl_stage_world7_19D4(rdram, ctx);
        goto after_16;
    // 0x60002600: nop

    after_16:
    // 0x60002604: beq         $v0, $zero, L_600027EC
    if (ctx->r2 == 0) {
        // 0x60002608: lui         $v1, 0x6000
        ctx->r3 = S32(0X6000 << 16);
            goto L_600027EC;
    }
    // 0x60002608: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x6000260C: addiu       $v1, $v1, 0x5B9C
    ctx->r3 = ADD32(ctx->r3, 0X5B9C);
    // 0x60002610: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x60002614: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x60002618: bne         $t3, $at, L_600027DC
    if (ctx->r11 != ctx->r1) {
        // 0x6000261C: lui         $v0, 0x6000
        ctx->r2 = S32(0X6000 << 16);
            goto L_600027DC;
    }
    // 0x6000261C: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60002620: addiu       $v0, $v0, 0x5B98
    ctx->r2 = ADD32(ctx->r2, 0X5B98);
    // 0x60002624: addiu       $t4, $zero, 0x1E
    ctx->r12 = ADD32(0, 0X1E);
    // 0x60002628: addiu       $t5, $zero, -0x1E
    ctx->r13 = ADD32(0, -0X1E);
    // 0x6000262C: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x60002630: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x60002634: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x60002638: jal         0x60000340
    // 0x6000263C: sw          $t5, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r13;
    ovl_stage_world7_340(rdram, ctx);
        goto after_17;
    // 0x6000263C: sw          $t5, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r13;
    after_17:
    // 0x60002640: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002644: lwc1        $f13, 0x5A48($at)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r1, 0X5A48);
    // 0x60002648: lwc1        $f12, 0x5A4C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X5A4C);
    // 0x6000264C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002650: lwc1        $f15, 0x5A50($at)
    ctx->f_odd[(15 - 1) * 2] = MEM_W(ctx->r1, 0X5A50);
    // 0x60002654: lwc1        $f14, 0x5A54($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X5A54);
    // 0x60002658: lui         $s0, 0x6000
    ctx->r16 = S32(0X6000 << 16);
    // 0x6000265C: addiu       $s0, $s0, 0x5BB0
    ctx->r16 = ADD32(ctx->r16, 0X5BB0);
    // 0x60002660: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x60002664: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x60002668: lwc1        $f6, 0x0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X0);
    // 0x6000266C: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x60002670: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x60002674: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x60002678: mul.d       $f6, $f0, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f6.d = MUL_D(ctx->f0.d, ctx->f12.d);
    // 0x6000267C: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x60002680: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x60002684: add.d       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = ctx->f6.d + ctx->f4.d;
    // 0x60002688: c.le.d      $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f14.d <= ctx->f8.d;
    // 0x6000268C: nop

    // 0x60002690: bc1f        L_600026F0
    if (!c1cs) {
        // 0x60002694: nop
    
            goto L_600026F0;
    }
    // 0x60002694: nop

    // 0x60002698: jal         0x60000340
    // 0x6000269C: nop

    ovl_stage_world7_340(rdram, ctx);
        goto after_18;
    // 0x6000269C: nop

    after_18:
    // 0x600026A0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600026A4: lwc1        $f13, 0x5A58($at)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r1, 0X5A58);
    // 0x600026A8: lwc1        $f12, 0x5A5C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X5A5C);
    // 0x600026AC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600026B0: lwc1        $f15, 0x5A60($at)
    ctx->f_odd[(15 - 1) * 2] = MEM_W(ctx->r1, 0X5A60);
    // 0x600026B4: lwc1        $f14, 0x5A64($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X5A64);
    // 0x600026B8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x600026BC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x600026C0: lwc1        $f10, 0x0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X0);
    // 0x600026C4: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x600026C8: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x600026CC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x600026D0: mul.d       $f10, $f0, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f10.d = MUL_D(ctx->f0.d, ctx->f12.d);
    // 0x600026D4: sub.s       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x600026D8: cvt.d.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f8.d = CVT_D_S(ctx->f4.fl);
    // 0x600026DC: add.d       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f16.d = ctx->f10.d + ctx->f8.d;
    // 0x600026E0: sub.d       $f18, $f16, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f14.d); 
    ctx->f18.d = ctx->f16.d - ctx->f14.d;
    // 0x600026E4: cvt.s.d     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f6.fl = CVT_S_D(ctx->f18.d);
    // 0x600026E8: b           L_60002950
    // 0x600026EC: swc1        $f6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f6.u32l;
        goto L_60002950;
    // 0x600026EC: swc1        $f6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f6.u32l;
L_600026F0:
    // 0x600026F0: jal         0x60000340
    // 0x600026F4: nop

    ovl_stage_world7_340(rdram, ctx);
        goto after_19;
    // 0x600026F4: nop

    after_19:
    // 0x600026F8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600026FC: lwc1        $f13, 0x5A68($at)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r1, 0X5A68);
    // 0x60002700: lwc1        $f12, 0x5A6C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X5A6C);
    // 0x60002704: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x60002708: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x6000270C: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x60002710: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x60002714: add.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x60002718: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x6000271C: mul.d       $f4, $f0, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f4.d = MUL_D(ctx->f0.d, ctx->f12.d);
    // 0x60002720: sub.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x60002724: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x60002728: cvt.d.s     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f6.d = CVT_D_S(ctx->f18.fl);
    // 0x6000272C: mtc1        $zero, $f9
    ctx->f_odd[(9 - 1) * 2] = 0;
    // 0x60002730: add.d       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = ctx->f4.d + ctx->f6.d;
    // 0x60002734: c.lt.d      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.d < ctx->f8.d;
    // 0x60002738: nop

    // 0x6000273C: bc1f        L_60002794
    if (!c1cs) {
        // 0x60002740: nop
    
            goto L_60002794;
    }
    // 0x60002740: nop

    // 0x60002744: jal         0x60000340
    // 0x60002748: nop

    ovl_stage_world7_340(rdram, ctx);
        goto after_20;
    // 0x60002748: nop

    after_20:
    // 0x6000274C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002750: lwc1        $f13, 0x5A78($at)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r1, 0X5A78);
    // 0x60002754: lwc1        $f12, 0x5A7C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X5A7C);
    // 0x60002758: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000275C: lwc1        $f15, 0x5A80($at)
    ctx->f_odd[(15 - 1) * 2] = MEM_W(ctx->r1, 0X5A80);
    // 0x60002760: lwc1        $f14, 0x5A84($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X5A84);
    // 0x60002764: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x60002768: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x6000276C: lwc1        $f16, 0x0($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X0);
    // 0x60002770: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x60002774: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x60002778: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x6000277C: mul.d       $f16, $f0, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f16.d = MUL_D(ctx->f0.d, ctx->f12.d);
    // 0x60002780: sub.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x60002784: cvt.d.s     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f8.d = CVT_D_S(ctx->f10.fl);
    // 0x60002788: add.d       $f18, $f16, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f8.d); 
    ctx->f18.d = ctx->f16.d + ctx->f8.d;
    // 0x6000278C: b           L_600027D0
    // 0x60002790: add.d       $f2, $f18, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f14.d); 
    ctx->f2.d = ctx->f18.d + ctx->f14.d;
        goto L_600027D0;
    // 0x60002790: add.d       $f2, $f18, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f14.d); 
    ctx->f2.d = ctx->f18.d + ctx->f14.d;
L_60002794:
    // 0x60002794: jal         0x60000340
    // 0x60002798: nop

    ovl_stage_world7_340(rdram, ctx);
        goto after_21;
    // 0x60002798: nop

    after_21:
    // 0x6000279C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600027A0: lwc1        $f13, 0x5A88($at)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r1, 0X5A88);
    // 0x600027A4: lwc1        $f12, 0x5A8C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X5A8C);
    // 0x600027A8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x600027AC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x600027B0: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x600027B4: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x600027B8: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x600027BC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x600027C0: mul.d       $f4, $f0, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f4.d = MUL_D(ctx->f0.d, ctx->f12.d);
    // 0x600027C4: sub.s       $f8, $f10, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x600027C8: cvt.d.s     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f18.d = CVT_D_S(ctx->f8.fl);
    // 0x600027CC: add.d       $f2, $f4, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f18.d); 
    ctx->f2.d = ctx->f4.d + ctx->f18.d;
L_600027D0:
    // 0x600027D0: cvt.s.d     $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f6.fl = CVT_S_D(ctx->f2.d);
    // 0x600027D4: b           L_60002950
    // 0x600027D8: swc1        $f6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f6.u32l;
        goto L_60002950;
    // 0x600027D8: swc1        $f6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f6.u32l;
L_600027DC:
    // 0x600027DC: jal         0x60001AAC
    // 0x600027E0: nop

    ovl_stage_world7_1AAC(rdram, ctx);
        goto after_22;
    // 0x600027E0: nop

    after_22:
    // 0x600027E4: b           L_60002954
    // 0x600027E8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_60002954;
    // 0x600027E8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_600027EC:
    // 0x600027EC: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x600027F0: addiu       $v0, $v0, 0x5B98
    ctx->r2 = ADD32(ctx->r2, 0X5B98);
    // 0x600027F4: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x600027F8: lui         $s0, 0x6000
    ctx->r16 = S32(0X6000 << 16);
    // 0x600027FC: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x60002800: beq         $t7, $zero, L_60002858
    if (ctx->r15 == 0) {
        // 0x60002804: sw          $t7, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r15;
            goto L_60002858;
    }
    // 0x60002804: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x60002808: addiu       $s0, $s0, 0x5BB0
    ctx->r16 = ADD32(ctx->r16, 0X5BB0);
    // 0x6000280C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x60002810: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x60002814: lwc1        $f10, 0x0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X0);
    // 0x60002818: lui         $a3, 0x446D
    ctx->r7 = S32(0X446D << 16);
    // 0x6000281C: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x60002820: lui         $a2, 0x4461
    ctx->r6 = S32(0X4461 << 16);
    // 0x60002824: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    // 0x60002828: jal         0x600020F8
    // 0x6000282C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    ovl_stage_world7_20F8(rdram, ctx);
        goto after_23;
    // 0x6000282C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_23:
    // 0x60002830: beq         $v0, $zero, L_60002848
    if (ctx->r2 == 0) {
        // 0x60002834: nop
    
            goto L_60002848;
    }
    // 0x60002834: nop

    // 0x60002838: jal         0x60001C18
    // 0x6000283C: nop

    ovl_stage_world7_1C18(rdram, ctx);
        goto after_24;
    // 0x6000283C: nop

    after_24:
    // 0x60002840: b           L_60002954
    // 0x60002844: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_60002954;
    // 0x60002844: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_60002848:
    // 0x60002848: jal         0x6000169C
    // 0x6000284C: nop

    ovl_stage_world7_169C(rdram, ctx);
        goto after_25;
    // 0x6000284C: nop

    after_25:
    // 0x60002850: b           L_60002954
    // 0x60002854: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_60002954;
    // 0x60002854: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_60002858:
    // 0x60002858: jal         0x60001C18
    // 0x6000285C: nop

    ovl_stage_world7_1C18(rdram, ctx);
        goto after_26;
    // 0x6000285C: nop

    after_26:
    // 0x60002860: b           L_60002954
    // 0x60002864: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_60002954;
    // 0x60002864: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_60002868:
    // 0x60002868: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x6000286C: addiu       $v0, $v0, 0x5B98
    ctx->r2 = ADD32(ctx->r2, 0X5B98);
    // 0x60002870: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x60002874: nop

    // 0x60002878: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x6000287C: beq         $t0, $zero, L_60002894
    if (ctx->r8 == 0) {
        // 0x60002880: sw          $t0, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r8;
            goto L_60002894;
    }
    // 0x60002880: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x60002884: jal         0x6000167C
    // 0x60002888: nop

    ovl_stage_world7_167C(rdram, ctx);
        goto after_27;
    // 0x60002888: nop

    after_27:
    // 0x6000288C: b           L_60002954
    // 0x60002890: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_60002954;
    // 0x60002890: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_60002894:
    // 0x60002894: jal         0x60001C18
    // 0x60002898: nop

    ovl_stage_world7_1C18(rdram, ctx);
        goto after_28;
    // 0x60002898: nop

    after_28:
    // 0x6000289C: b           L_60002954
    // 0x600028A0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_60002954;
    // 0x600028A0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_600028A4:
    // 0x600028A4: lw          $t2, 0x5C14($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X5C14);
    // 0x600028A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x600028AC: andi        $t3, $t2, 0x8000
    ctx->r11 = ctx->r10 & 0X8000;
    // 0x600028B0: beq         $t3, $zero, L_600028C0
    if (ctx->r11 == 0) {
        // 0x600028B4: nop
    
            goto L_600028C0;
    }
    // 0x600028B4: nop

    // 0x600028B8: b           L_600028C0
    // 0x600028BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_600028C0;
    // 0x600028BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_600028C0:
    // 0x600028C0: bne         $v0, $zero, L_60002950
    if (ctx->r2 != 0) {
        // 0x600028C4: lui         $v0, 0x6000
        ctx->r2 = S32(0X6000 << 16);
            goto L_60002950;
    }
    // 0x600028C4: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x600028C8: addiu       $v0, $v0, 0x5B98
    ctx->r2 = ADD32(ctx->r2, 0X5B98);
    // 0x600028CC: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x600028D0: nop

    // 0x600028D4: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x600028D8: beq         $t5, $zero, L_600028F0
    if (ctx->r13 == 0) {
        // 0x600028DC: sw          $t5, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r13;
            goto L_600028F0;
    }
    // 0x600028DC: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x600028E0: jal         0x60001658
    // 0x600028E4: nop

    ovl_stage_world7_1658(rdram, ctx);
        goto after_29;
    // 0x600028E4: nop

    after_29:
    // 0x600028E8: b           L_60002954
    // 0x600028EC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_60002954;
    // 0x600028EC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_600028F0:
    // 0x600028F0: jal         0x60001C18
    // 0x600028F4: nop

    ovl_stage_world7_1C18(rdram, ctx);
        goto after_30;
    // 0x600028F4: nop

    after_30:
    // 0x600028F8: b           L_60002954
    // 0x600028FC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_60002954;
    // 0x600028FC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_60002900:
    // 0x60002900: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60002904: addiu       $v0, $v0, 0x5B98
    ctx->r2 = ADD32(ctx->r2, 0X5B98);
    // 0x60002908: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x6000290C: nop

    // 0x60002910: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x60002914: beq         $t8, $zero, L_60002948
    if (ctx->r24 == 0) {
        // 0x60002918: sw          $t8, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r24;
            goto L_60002948;
    }
    // 0x60002918: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x6000291C: slti        $at, $t8, 0x4
    ctx->r1 = SIGNED(ctx->r24) < 0X4 ? 1 : 0;
    // 0x60002920: beq         $at, $zero, L_60002938
    if (ctx->r1 == 0) {
        // 0x60002924: nop
    
            goto L_60002938;
    }
    // 0x60002924: nop

    // 0x60002928: jal         0x60001658
    // 0x6000292C: nop

    ovl_stage_world7_1658(rdram, ctx);
        goto after_31;
    // 0x6000292C: nop

    after_31:
    // 0x60002930: b           L_60002954
    // 0x60002934: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_60002954;
    // 0x60002934: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_60002938:
    // 0x60002938: jal         0x6000169C
    // 0x6000293C: nop

    ovl_stage_world7_169C(rdram, ctx);
        goto after_32;
    // 0x6000293C: nop

    after_32:
    // 0x60002940: b           L_60002954
    // 0x60002944: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_60002954;
    // 0x60002944: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_60002948:
    // 0x60002948: jal         0x60001C18
    // 0x6000294C: nop

    ovl_stage_world7_1C18(rdram, ctx);
        goto after_33;
    // 0x6000294C: nop

    after_33:
L_60002950:
    // 0x60002950: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_60002954:
    // 0x60002954: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x60002958: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x6000295C: jr          $ra
    // 0x60002960: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x60002960: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void ovl_stage_world7_2964(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002964: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60002968: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x6000296C: addiu       $a2, $a2, 0x5C18
    ctx->r6 = ADD32(ctx->r6, 0X5C18);
    // 0x60002970: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60002974: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x60002978: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
    // 0x6000297C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x60002980: jal         0x60000808
    // 0x60002984: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_stage_world7_808(rdram, ctx);
        goto after_0;
    // 0x60002984: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x60002988: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x6000298C: addiu       $a2, $a2, 0x5C18
    ctx->r6 = ADD32(ctx->r6, 0X5C18);
    // 0x60002990: sh          $zero, 0x0($a2)
    MEM_H(0X0, ctx->r6) = 0;
    // 0x60002994: sh          $zero, 0x2($a2)
    MEM_H(0X2, ctx->r6) = 0;
    // 0x60002998: sh          $zero, 0x4($a2)
    MEM_H(0X4, ctx->r6) = 0;
    // 0x6000299C: sb          $zero, 0x6($a2)
    MEM_B(0X6, ctx->r6) = 0;
    // 0x600029A0: sb          $zero, 0x7($a2)
    MEM_B(0X7, ctx->r6) = 0;
    // 0x600029A4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x600029A8: jal         0x60000808
    // 0x600029AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world7_808(rdram, ctx);
        goto after_1;
    // 0x600029AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x600029B0: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x600029B4: addiu       $v0, $v0, 0x5BB8
    ctx->r2 = ADD32(ctx->r2, 0X5BB8);
    // 0x600029B8: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x600029BC: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600029C0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600029C4: lw          $a0, 0x59A0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X59A0);
    // 0x600029C8: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x600029CC: sw          $zero, 0x5BB4($at)
    MEM_W(0X5BB4, ctx->r1) = 0;
    // 0x600029D0: addiu       $a2, $a2, 0x5BC0
    ctx->r6 = ADD32(ctx->r6, 0X5BC0);
    // 0x600029D4: jal         0x600006C4
    // 0x600029D8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_stage_world7_6C4(rdram, ctx);
        goto after_2;
    // 0x600029D8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_2:
    // 0x600029DC: jal         0x60000DE4
    // 0x600029E0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world7_DE4(rdram, ctx);
        goto after_3;
    // 0x600029E0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x600029E4: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x600029E8: addiu       $a2, $a2, 0x5BD8
    ctx->r6 = ADD32(ctx->r6, 0X5BD8);
    // 0x600029EC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600029F0: jal         0x600006C4
    // 0x600029F4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_stage_world7_6C4(rdram, ctx);
        goto after_4;
    // 0x600029F4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_4:
    // 0x600029F8: jal         0x6000147C
    // 0x600029FC: nop

    ovl_stage_world7_147C(rdram, ctx);
        goto after_5;
    // 0x600029FC: nop

    after_5:
    // 0x60002A00: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002A04: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x60002A08: sw          $zero, 0x5B9C($at)
    MEM_W(0X5B9C, ctx->r1) = 0;
    // 0x60002A0C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002A10: swc1        $f4, 0x5BB0($at)
    MEM_W(0X5BB0, ctx->r1) = ctx->f4.u32l;
    // 0x60002A14: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002A18: sw          $zero, 0x5C0C($at)
    MEM_W(0X5C0C, ctx->r1) = 0;
    // 0x60002A1C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002A20: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x60002A24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002A28: sw          $t8, 0x5B94($at)
    MEM_W(0X5B94, ctx->r1) = ctx->r24;
    // 0x60002A2C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002A30: addiu       $t9, $zero, 0xF
    ctx->r25 = ADD32(0, 0XF);
    // 0x60002A34: sw          $t9, 0x5B98($at)
    MEM_W(0X5B98, ctx->r1) = ctx->r25;
    // 0x60002A38: jr          $ra
    // 0x60002A3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x60002A3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void ovl_stage_world7_2A40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002A40: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x60002A44: beq         $a0, $zero, L_60002ACC
    if (ctx->r4 == 0) {
        // 0x60002A48: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_60002ACC;
    }
    // 0x60002A48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60002A4C: jal         0x60000DE4
    // 0x60002A50: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world7_DE4(rdram, ctx);
        goto after_0;
    // 0x60002A50: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x60002A54: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60002A58: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x60002A5C: jal         0x600006C4
    // 0x60002A60: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world7_6C4(rdram, ctx);
        goto after_1;
    // 0x60002A60: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x60002A64: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x60002A68: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x60002A6C: ori         $t7, $t6, 0x80
    ctx->r15 = ctx->r14 | 0X80;
    // 0x60002A70: jal         0x60000DE4
    // 0x60002A74: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    ovl_stage_world7_DE4(rdram, ctx);
        goto after_2;
    // 0x60002A74: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    after_2:
    // 0x60002A78: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60002A7C: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x60002A80: jal         0x600006C4
    // 0x60002A84: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world7_6C4(rdram, ctx);
        goto after_3;
    // 0x60002A84: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_3:
    // 0x60002A88: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60002A8C: addiu       $a2, $a2, 0x5C28
    ctx->r6 = ADD32(ctx->r6, 0X5C28);
    // 0x60002A90: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x60002A94: jal         0x60000808
    // 0x60002A98: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_stage_world7_808(rdram, ctx);
        goto after_4;
    // 0x60002A98: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_4:
    // 0x60002A9C: lui         $t8, 0x6000
    ctx->r24 = S32(0X6000 << 16);
    // 0x60002AA0: lw          $t8, 0x5C28($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X5C28);
    // 0x60002AA4: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002AA8: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60002AAC: ori         $t9, $t8, 0x100
    ctx->r25 = ctx->r24 | 0X100;
    // 0x60002AB0: sw          $t9, 0x5C28($at)
    MEM_W(0X5C28, ctx->r1) = ctx->r25;
    // 0x60002AB4: addiu       $a2, $a2, 0x5C28
    ctx->r6 = ADD32(ctx->r6, 0X5C28);
    // 0x60002AB8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x60002ABC: jal         0x60000808
    // 0x60002AC0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_stage_world7_808(rdram, ctx);
        goto after_5;
    // 0x60002AC0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_5:
    // 0x60002AC4: b           L_60002B50
    // 0x60002AC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60002B50;
    // 0x60002AC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60002ACC:
    // 0x60002ACC: jal         0x60000DE4
    // 0x60002AD0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world7_DE4(rdram, ctx);
        goto after_6;
    // 0x60002AD0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_6:
    // 0x60002AD4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60002AD8: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x60002ADC: jal         0x600006C4
    // 0x60002AE0: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world7_6C4(rdram, ctx);
        goto after_7;
    // 0x60002AE0: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_7:
    // 0x60002AE4: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x60002AE8: addiu       $at, $zero, -0x81
    ctx->r1 = ADD32(0, -0X81);
    // 0x60002AEC: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x60002AF0: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x60002AF4: jal         0x60000DE4
    // 0x60002AF8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world7_DE4(rdram, ctx);
        goto after_8;
    // 0x60002AF8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_8:
    // 0x60002AFC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60002B00: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x60002B04: jal         0x600006C4
    // 0x60002B08: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world7_6C4(rdram, ctx);
        goto after_9;
    // 0x60002B08: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_9:
    // 0x60002B0C: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60002B10: addiu       $a2, $a2, 0x5C28
    ctx->r6 = ADD32(ctx->r6, 0X5C28);
    // 0x60002B14: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x60002B18: jal         0x60000808
    // 0x60002B1C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_stage_world7_808(rdram, ctx);
        goto after_10;
    // 0x60002B1C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_10:
    // 0x60002B20: lui         $t2, 0x6000
    ctx->r10 = S32(0X6000 << 16);
    // 0x60002B24: lw          $t2, 0x5C28($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X5C28);
    // 0x60002B28: addiu       $at, $zero, -0x101
    ctx->r1 = ADD32(0, -0X101);
    // 0x60002B2C: and         $t3, $t2, $at
    ctx->r11 = ctx->r10 & ctx->r1;
    // 0x60002B30: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002B34: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60002B38: sw          $t3, 0x5C28($at)
    MEM_W(0X5C28, ctx->r1) = ctx->r11;
    // 0x60002B3C: addiu       $a2, $a2, 0x5C28
    ctx->r6 = ADD32(ctx->r6, 0X5C28);
    // 0x60002B40: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x60002B44: jal         0x60000808
    // 0x60002B48: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_stage_world7_808(rdram, ctx);
        goto after_11;
    // 0x60002B48: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_11:
    // 0x60002B4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60002B50:
    // 0x60002B50: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x60002B54: jr          $ra
    // 0x60002B58: nop

    return;
    // 0x60002B58: nop

;}
RECOMP_FUNC void ovl_stage_world7_2B5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002B5C: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x60002B60: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x60002B64: sw          $s7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r23;
    // 0x60002B68: sw          $s6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r22;
    // 0x60002B6C: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x60002B70: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x60002B74: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x60002B78: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x60002B7C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x60002B80: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x60002B84: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x60002B88: jal         0x60000C1C
    // 0x60002B8C: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    ovl_stage_world7_C1C(rdram, ctx);
        goto after_0;
    // 0x60002B8C: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x60002B90: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x60002B94: jal         0x600009C4
    // 0x60002B98: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    ovl_stage_world7_9C4(rdram, ctx);
        goto after_1;
    // 0x60002B98: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_1:
    // 0x60002B9C: lw          $t6, 0x0($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X0);
    // 0x60002BA0: nop

    // 0x60002BA4: andi        $t7, $t6, 0x800
    ctx->r15 = ctx->r14 & 0X800;
    // 0x60002BA8: beq         $t7, $zero, L_60002BCC
    if (ctx->r15 == 0) {
        // 0x60002BAC: nop
    
            goto L_60002BCC;
    }
    // 0x60002BAC: nop

L_60002BB0:
    // 0x60002BB0: jal         0x600009D0
    // 0x60002BB4: nop

    ovl_stage_world7_9D0(rdram, ctx);
        goto after_2;
    // 0x60002BB4: nop

    after_2:
    // 0x60002BB8: lw          $t8, 0x0($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X0);
    // 0x60002BBC: nop

    // 0x60002BC0: andi        $t9, $t8, 0x800
    ctx->r25 = ctx->r24 & 0X800;
    // 0x60002BC4: bne         $t9, $zero, L_60002BB0
    if (ctx->r25 != 0) {
        // 0x60002BC8: nop
    
            goto L_60002BB0;
    }
    // 0x60002BC8: nop

L_60002BCC:
    // 0x60002BCC: lui         $s7, 0x6000
    ctx->r23 = S32(0X6000 << 16);
    // 0x60002BD0: addiu       $s7, $s7, 0x59A0
    ctx->r23 = ADD32(ctx->r23, 0X59A0);
    // 0x60002BD4: addiu       $s1, $sp, 0x50
    ctx->r17 = ADD32(ctx->r29, 0X50);
    // 0x60002BD8: sw          $s7, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r23;
    // 0x60002BDC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x60002BE0: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x60002BE4: jal         0x600006C4
    // 0x60002BE8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world7_6C4(rdram, ctx);
        goto after_3;
    // 0x60002BE8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x60002BEC: jal         0x60001208
    // 0x60002BF0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world7_1208(rdram, ctx);
        goto after_4;
    // 0x60002BF0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
    // 0x60002BF4: lw          $t1, 0x0($s3)
    ctx->r9 = MEM_W(ctx->r19, 0X0);
    // 0x60002BF8: lui         $s0, 0x40
    ctx->r16 = S32(0X40 << 16);
    // 0x60002BFC: sll         $t2, $t1, 9
    ctx->r10 = S32(ctx->r9 << 9);
    // 0x60002C00: bgez        $t2, L_60002C24
    if (SIGNED(ctx->r10) >= 0) {
        // 0x60002C04: nop
    
            goto L_60002C24;
    }
    // 0x60002C04: nop

L_60002C08:
    // 0x60002C08: jal         0x600009D0
    // 0x60002C0C: nop

    ovl_stage_world7_9D0(rdram, ctx);
        goto after_5;
    // 0x60002C0C: nop

    after_5:
    // 0x60002C10: lw          $t3, 0x0($s3)
    ctx->r11 = MEM_W(ctx->r19, 0X0);
    // 0x60002C14: nop

    // 0x60002C18: and         $t4, $t3, $s0
    ctx->r12 = ctx->r11 & ctx->r16;
    // 0x60002C1C: bne         $t4, $zero, L_60002C08
    if (ctx->r12 != 0) {
        // 0x60002C20: nop
    
            goto L_60002C08;
    }
    // 0x60002C20: nop

L_60002C24:
    // 0x60002C24: jal         0x600009D0
    // 0x60002C28: nop

    ovl_stage_world7_9D0(rdram, ctx);
        goto after_6;
    // 0x60002C28: nop

    after_6:
    // 0x60002C2C: jal         0x60002A40
    // 0x60002C30: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world7_2A40(rdram, ctx);
        goto after_7;
    // 0x60002C30: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_7:
    // 0x60002C34: jal         0x600007E4
    // 0x60002C38: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_stage_world7_7E4(rdram, ctx);
        goto after_8;
    // 0x60002C38: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_8:
    // 0x60002C3C: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x60002C40: lui         $t0, 0x6000
    ctx->r8 = S32(0X6000 << 16);
    // 0x60002C44: addiu       $t0, $t0, 0x5C20
    ctx->r8 = ADD32(ctx->r8, 0X5C20);
    // 0x60002C48: addiu       $v1, $v1, 0x5C10
    ctx->r3 = ADD32(ctx->r3, 0X5C10);
    // 0x60002C4C: addiu       $t5, $zero, 0x8
    ctx->r13 = ADD32(0, 0X8);
    // 0x60002C50: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x60002C54: sw          $t5, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r13;
    // 0x60002C58: sw          $t5, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r13;
    // 0x60002C5C: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x60002C60: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x60002C64: sw          $t5, 0x30($t7)
    MEM_W(0X30, ctx->r15) = ctx->r13;
    // 0x60002C68: lw          $a3, 0x0($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X0);
    // 0x60002C6C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x60002C70: lw          $t8, 0x10($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X10);
    // 0x60002C74: nop

    // 0x60002C78: ori         $t9, $t8, 0x3
    ctx->r25 = ctx->r24 | 0X3;
    // 0x60002C7C: sw          $t9, 0x10($a3)
    MEM_W(0X10, ctx->r7) = ctx->r25;
    // 0x60002C80: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x60002C84: nop

    // 0x60002C88: sw          $t1, 0xC($t2)
    MEM_W(0XC, ctx->r10) = ctx->r9;
    // 0x60002C8C: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x60002C90: jal         0x600007F0
    // 0x60002C94: nop

    ovl_stage_world7_7F0(rdram, ctx);
        goto after_9;
    // 0x60002C94: nop

    after_9:
    // 0x60002C98: jal         0x60002964
    // 0x60002C9C: nop

    ovl_stage_world7_2964(rdram, ctx);
        goto after_10;
    // 0x60002C9C: nop

    after_10:
    // 0x60002CA0: jal         0x60000B98
    // 0x60002CA4: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
    ovl_stage_world7_B98(rdram, ctx);
        goto after_11;
    // 0x60002CA4: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
    after_11:
    // 0x60002CA8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002CAC: lui         $s6, 0x6000
    ctx->r22 = S32(0X6000 << 16);
    // 0x60002CB0: lui         $s5, 0x6000
    ctx->r21 = S32(0X6000 << 16);
    // 0x60002CB4: lui         $s4, 0x6000
    ctx->r20 = S32(0X6000 << 16);
    // 0x60002CB8: lwc1        $f20, 0x5A90($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X5A90);
    // 0x60002CBC: addiu       $s4, $s4, 0x5C18
    ctx->r20 = ADD32(ctx->r20, 0X5C18);
    // 0x60002CC0: addiu       $s5, $s5, 0x5BB4
    ctx->r21 = ADD32(ctx->r21, 0X5BB4);
    // 0x60002CC4: addiu       $s6, $s6, 0x5BB8
    ctx->r22 = ADD32(ctx->r22, 0X5BB8);
    // 0x60002CC8: addiu       $s2, $zero, 0x3C
    ctx->r18 = ADD32(0, 0X3C);
    // 0x60002CCC: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
L_60002CD0:
    // 0x60002CD0: nop

    // 0x60002CD4: andi        $t3, $v0, 0x2000
    ctx->r11 = ctx->r2 & 0X2000;
    // 0x60002CD8: beq         $t3, $zero, L_60002DE8
    if (ctx->r11 == 0) {
        // 0x60002CDC: andi        $t4, $v0, 0x2
        ctx->r12 = ctx->r2 & 0X2;
            goto L_60002DE8;
    }
    // 0x60002CDC: andi        $t4, $v0, 0x2
    ctx->r12 = ctx->r2 & 0X2;
    // 0x60002CE0: beq         $t4, $zero, L_60002CF8
    if (ctx->r12 == 0) {
        // 0x60002CE4: nop
    
            goto L_60002CF8;
    }
    // 0x60002CE4: nop

    // 0x60002CE8: jal         0x600009AC
    // 0x60002CEC: nop

    ovl_stage_world7_9AC(rdram, ctx);
        goto after_12;
    // 0x60002CEC: nop

    after_12:
    // 0x60002CF0: b           L_60002D00
    // 0x60002CF4: nop

        goto L_60002D00;
    // 0x60002CF4: nop

L_60002CF8:
    // 0x60002CF8: jal         0x60000A6C
    // 0x60002CFC: nop

    ovl_stage_world7_A6C(rdram, ctx);
        goto after_13;
    // 0x60002CFC: nop

    after_13:
L_60002D00:
    // 0x60002D00: jal         0x60001208
    // 0x60002D04: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world7_1208(rdram, ctx);
        goto after_14;
    // 0x60002D04: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_14:
    // 0x60002D08: lw          $a0, 0x0($s7)
    ctx->r4 = MEM_W(ctx->r23, 0X0);
    // 0x60002D0C: addiu       $a1, $zero, 0x31
    ctx->r5 = ADD32(0, 0X31);
    // 0x60002D10: jal         0x600006C4
    // 0x60002D14: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world7_6C4(rdram, ctx);
        goto after_15;
    // 0x60002D14: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_15:
    // 0x60002D18: jal         0x60000A60
    // 0x60002D1C: addiu       $a0, $zero, 0xAD9
    ctx->r4 = ADD32(0, 0XAD9);
    ovl_stage_world7_A60(rdram, ctx);
        goto after_16;
    // 0x60002D1C: addiu       $a0, $zero, 0xAD9
    ctx->r4 = ADD32(0, 0XAD9);
    after_16:
    // 0x60002D20: jal         0x60000B98
    // 0x60002D24: addiu       $a0, $zero, 0x8E
    ctx->r4 = ADD32(0, 0X8E);
    ovl_stage_world7_B98(rdram, ctx);
        goto after_17;
    // 0x60002D24: addiu       $a0, $zero, 0x8E
    ctx->r4 = ADD32(0, 0X8E);
    after_17:
    // 0x60002D28: jal         0x60000B98
    // 0x60002D2C: addiu       $a0, $zero, 0xAA
    ctx->r4 = ADD32(0, 0XAA);
    ovl_stage_world7_B98(rdram, ctx);
        goto after_18;
    // 0x60002D2C: addiu       $a0, $zero, 0xAA
    ctx->r4 = ADD32(0, 0XAA);
    after_18:
    // 0x60002D30: jal         0x600009C4
    // 0x60002D34: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    ovl_stage_world7_9C4(rdram, ctx);
        goto after_19;
    // 0x60002D34: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_19:
    // 0x60002D38: lw          $t5, 0x0($s3)
    ctx->r13 = MEM_W(ctx->r19, 0X0);
    // 0x60002D3C: nop

    // 0x60002D40: andi        $t6, $t5, 0x800
    ctx->r14 = ctx->r13 & 0X800;
    // 0x60002D44: beq         $t6, $zero, L_60002D68
    if (ctx->r14 == 0) {
        // 0x60002D48: nop
    
            goto L_60002D68;
    }
    // 0x60002D48: nop

L_60002D4C:
    // 0x60002D4C: jal         0x600009D0
    // 0x60002D50: nop

    ovl_stage_world7_9D0(rdram, ctx);
        goto after_20;
    // 0x60002D50: nop

    after_20:
    // 0x60002D54: lw          $t7, 0x0($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X0);
    // 0x60002D58: nop

    // 0x60002D5C: andi        $t8, $t7, 0x800
    ctx->r24 = ctx->r15 & 0X800;
    // 0x60002D60: bne         $t8, $zero, L_60002D4C
    if (ctx->r24 != 0) {
        // 0x60002D64: nop
    
            goto L_60002D4C;
    }
    // 0x60002D64: nop

L_60002D68:
    // 0x60002D68: jal         0x600009C4
    // 0x60002D6C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    ovl_stage_world7_9C4(rdram, ctx);
        goto after_21;
    // 0x60002D6C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_21:
    // 0x60002D70: jal         0x60000244
    // 0x60002D74: addiu       $a0, $zero, 0x1B9
    ctx->r4 = ADD32(0, 0X1B9);
    ovl_stage_world7_244(rdram, ctx);
        goto after_22;
    // 0x60002D74: addiu       $a0, $zero, 0x1B9
    ctx->r4 = ADD32(0, 0X1B9);
    after_22:
    // 0x60002D78: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_60002D7C:
    // 0x60002D7C: jal         0x60000E74
    // 0x60002D80: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world7_E74(rdram, ctx);
        goto after_23;
    // 0x60002D80: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_23:
    // 0x60002D84: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60002D88: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x60002D8C: jal         0x600006C4
    // 0x60002D90: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world7_6C4(rdram, ctx);
        goto after_24;
    // 0x60002D90: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_24:
    // 0x60002D94: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x60002D98: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x60002D9C: jal         0x60000E74
    // 0x60002DA0: swc1        $f20, 0x30($t9)
    MEM_W(0X30, ctx->r25) = ctx->f20.u32l;
    ovl_stage_world7_E74(rdram, ctx);
        goto after_25;
    // 0x60002DA0: swc1        $f20, 0x30($t9)
    MEM_W(0X30, ctx->r25) = ctx->f20.u32l;
    after_25:
    // 0x60002DA4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60002DA8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x60002DAC: jal         0x600006C4
    // 0x60002DB0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world7_6C4(rdram, ctx);
        goto after_26;
    // 0x60002DB0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_26:
    // 0x60002DB4: jal         0x600009D0
    // 0x60002DB8: nop

    ovl_stage_world7_9D0(rdram, ctx);
        goto after_27;
    // 0x60002DB8: nop

    after_27:
    // 0x60002DBC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60002DC0: bne         $s0, $s2, L_60002D7C
    if (ctx->r16 != ctx->r18) {
        // 0x60002DC4: nop
    
            goto L_60002D7C;
    }
    // 0x60002DC4: nop

    // 0x60002DC8: jal         0x60000244
    // 0x60002DCC: addiu       $a0, $zero, 0x1C6
    ctx->r4 = ADD32(0, 0X1C6);
    ovl_stage_world7_244(rdram, ctx);
        goto after_28;
    // 0x60002DCC: addiu       $a0, $zero, 0x1C6
    ctx->r4 = ADD32(0, 0X1C6);
    after_28:
    // 0x60002DD0: jal         0x60000B98
    // 0x60002DD4: addiu       $a0, $zero, 0x103
    ctx->r4 = ADD32(0, 0X103);
    ovl_stage_world7_B98(rdram, ctx);
        goto after_29;
    // 0x60002DD4: addiu       $a0, $zero, 0x103
    ctx->r4 = ADD32(0, 0X103);
    after_29:
    // 0x60002DD8: jal         0x60002A40
    // 0x60002DDC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world7_2A40(rdram, ctx);
        goto after_30;
    // 0x60002DDC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_30:
    // 0x60002DE0: jal         0x600009AC
    // 0x60002DE4: nop

    ovl_stage_world7_9AC(rdram, ctx);
        goto after_31;
    // 0x60002DE4: nop

    after_31:
L_60002DE8:
    // 0x60002DE8: sh          $zero, 0x0($s4)
    MEM_H(0X0, ctx->r20) = 0;
    // 0x60002DEC: sh          $zero, 0x2($s4)
    MEM_H(0X2, ctx->r20) = 0;
    // 0x60002DF0: sh          $zero, 0x4($s4)
    MEM_H(0X4, ctx->r20) = 0;
    // 0x60002DF4: sb          $zero, 0x6($s4)
    MEM_B(0X6, ctx->r20) = 0;
    // 0x60002DF8: jal         0x6000147C
    // 0x60002DFC: sb          $zero, 0x7($s4)
    MEM_B(0X7, ctx->r20) = 0;
    ovl_stage_world7_147C(rdram, ctx);
        goto after_32;
    // 0x60002DFC: sb          $zero, 0x7($s4)
    MEM_B(0X7, ctx->r20) = 0;
    after_32:
    // 0x60002E00: lw          $a0, 0x0($s7)
    ctx->r4 = MEM_W(ctx->r23, 0X0);
    // 0x60002E04: lui         $a1, 0x6000
    ctx->r5 = S32(0X6000 << 16);
    // 0x60002E08: jal         0x60000CE8
    // 0x60002E0C: addiu       $a1, $a1, 0x5C14
    ctx->r5 = ADD32(ctx->r5, 0X5C14);
    ovl_stage_world7_CE8(rdram, ctx);
        goto after_33;
    // 0x60002E0C: addiu       $a1, $a1, 0x5C14
    ctx->r5 = ADD32(ctx->r5, 0X5C14);
    after_33:
    // 0x60002E10: jal         0x600023B8
    // 0x60002E14: nop

    ovl_stage_world7_23B8(rdram, ctx);
        goto after_34;
    // 0x60002E14: nop

    after_34:
    // 0x60002E18: lw          $t1, 0x0($s5)
    ctx->r9 = MEM_W(ctx->r21, 0X0);
    // 0x60002E1C: lw          $t3, 0x0($s6)
    ctx->r11 = MEM_W(ctx->r22, 0X0);
    // 0x60002E20: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x60002E24: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x60002E28: sw          $t2, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r10;
    // 0x60002E2C: sw          $t4, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r12;
    // 0x60002E30: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x60002E34: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x60002E38: jal         0x60000808
    // 0x60002E3C: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    ovl_stage_world7_808(rdram, ctx);
        goto after_35;
    // 0x60002E3C: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_35:
    // 0x60002E40: jal         0x600009D0
    // 0x60002E44: nop

    ovl_stage_world7_9D0(rdram, ctx);
        goto after_36;
    // 0x60002E44: nop

    after_36:
    // 0x60002E48: b           L_60002CD0
    // 0x60002E4C: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
        goto L_60002CD0;
    // 0x60002E4C: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x60002E50: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x60002E54: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x60002E58: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x60002E5C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x60002E60: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x60002E64: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x60002E68: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x60002E6C: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x60002E70: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x60002E74: lw          $s6, 0x34($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X34);
    // 0x60002E78: lw          $s7, 0x38($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X38);
    // 0x60002E7C: jr          $ra
    // 0x60002E80: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x60002E80: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void ovl_stage_world7_2E84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002E84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60002E88: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60002E8C: jal         0x60000C1C
    // 0x60002E90: nop

    ovl_stage_world7_C1C(rdram, ctx);
        goto after_0;
    // 0x60002E90: nop

    after_0:
    // 0x60002E94: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x60002E98: nop

    // 0x60002E9C: sll         $t7, $t6, 13
    ctx->r15 = S32(ctx->r14 << 13);
    // 0x60002EA0: bltz        $t7, L_60002EDC
    if (SIGNED(ctx->r15) < 0) {
        // 0x60002EA4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60002EDC;
    }
    // 0x60002EA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002EA8: jal         0x60000BB0
    // 0x60002EAC: addiu       $a0, $zero, 0x8E
    ctx->r4 = ADD32(0, 0X8E);
    ovl_stage_world7_BB0(rdram, ctx);
        goto after_1;
    // 0x60002EAC: addiu       $a0, $zero, 0x8E
    ctx->r4 = ADD32(0, 0X8E);
    after_1:
    // 0x60002EB0: bne         $v0, $zero, L_60002EC0
    if (ctx->r2 != 0) {
        // 0x60002EB4: nop
    
            goto L_60002EC0;
    }
    // 0x60002EB4: nop

    // 0x60002EB8: jal         0x60000A60
    // 0x60002EBC: addiu       $a0, $zero, 0xAD8
    ctx->r4 = ADD32(0, 0XAD8);
    ovl_stage_world7_A60(rdram, ctx);
        goto after_2;
    // 0x60002EBC: addiu       $a0, $zero, 0xAD8
    ctx->r4 = ADD32(0, 0XAD8);
    after_2:
L_60002EC0:
    // 0x60002EC0: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002EC4: addiu       $a0, $a0, 0x2B5C
    ctx->r4 = ADD32(ctx->r4, 0X2B5C);
    // 0x60002EC8: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60002ECC: addiu       $a2, $zero, 0x2400
    ctx->r6 = ADD32(0, 0X2400);
    // 0x60002ED0: jal         0x60000994
    // 0x60002ED4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world7_994(rdram, ctx);
        goto after_3;
    // 0x60002ED4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x60002ED8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60002EDC:
    // 0x60002EDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60002EE0: jr          $ra
    // 0x60002EE4: nop

    return;
    // 0x60002EE4: nop

;}
RECOMP_FUNC void ovl_stage_world7_2EE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002EE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60002EEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60002EF0: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60002EF4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x60002EF8: addiu       $a2, $a2, 0x5C30
    ctx->r6 = ADD32(ctx->r6, 0X5C30);
    // 0x60002EFC: jal         0x60000808
    // 0x60002F00: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_stage_world7_808(rdram, ctx);
        goto after_0;
    // 0x60002F00: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x60002F04: lui         $t6, 0x6000
    ctx->r14 = S32(0X6000 << 16);
    // 0x60002F08: lw          $t6, 0x5C30($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5C30);
    // 0x60002F0C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002F10: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x60002F14: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60002F18: ori         $t7, $t6, 0x100
    ctx->r15 = ctx->r14 | 0X100;
    // 0x60002F1C: sw          $t7, 0x5C30($at)
    MEM_W(0X5C30, ctx->r1) = ctx->r15;
    // 0x60002F20: addiu       $a2, $a2, 0x5C30
    ctx->r6 = ADD32(ctx->r6, 0X5C30);
    // 0x60002F24: jal         0x60000808
    // 0x60002F28: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_stage_world7_808(rdram, ctx);
        goto after_1;
    // 0x60002F28: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x60002F2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002F30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60002F34: jr          $ra
    // 0x60002F38: nop

    return;
    // 0x60002F38: nop

;}
RECOMP_FUNC void ovl_stage_world7_2F3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002F3C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60002F40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60002F44: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60002F48: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x60002F4C: addiu       $a2, $a2, 0x5C38
    ctx->r6 = ADD32(ctx->r6, 0X5C38);
    // 0x60002F50: jal         0x60000808
    // 0x60002F54: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_stage_world7_808(rdram, ctx);
        goto after_0;
    // 0x60002F54: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x60002F58: lui         $t6, 0x6000
    ctx->r14 = S32(0X6000 << 16);
    // 0x60002F5C: lw          $t6, 0x5C38($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5C38);
    // 0x60002F60: addiu       $at, $zero, -0x101
    ctx->r1 = ADD32(0, -0X101);
    // 0x60002F64: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x60002F68: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002F6C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x60002F70: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60002F74: sw          $t7, 0x5C38($at)
    MEM_W(0X5C38, ctx->r1) = ctx->r15;
    // 0x60002F78: addiu       $a2, $a2, 0x5C38
    ctx->r6 = ADD32(ctx->r6, 0X5C38);
    // 0x60002F7C: jal         0x60000808
    // 0x60002F80: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_stage_world7_808(rdram, ctx);
        goto after_1;
    // 0x60002F80: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x60002F84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002F88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60002F8C: jr          $ra
    // 0x60002F90: nop

    return;
    // 0x60002F90: nop

;}
RECOMP_FUNC void ovl_stage_world7_2F94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002F94: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x60002F98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60002F9C: beq         $a1, $zero, L_60002FD0
    if (ctx->r5 == 0) {
        // 0x60002FA0: sw          $a0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r4;
            goto L_60002FD0;
    }
    // 0x60002FA0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x60002FA4: jal         0x60002EE8
    // 0x60002FA8: nop

    ovl_stage_world7_2EE8(rdram, ctx);
        goto after_0;
    // 0x60002FA8: nop

    after_0:
    // 0x60002FAC: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x60002FB0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x60002FB4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x60002FB8: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x60002FBC: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x60002FC0: jal         0x600007F0
    // 0x60002FC4: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    ovl_stage_world7_7F0(rdram, ctx);
        goto after_1;
    // 0x60002FC4: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x60002FC8: b           L_60002FF8
    // 0x60002FCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60002FF8;
    // 0x60002FCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60002FD0:
    // 0x60002FD0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x60002FD4: jal         0x60002F3C
    // 0x60002FD8: nop

    ovl_stage_world7_2F3C(rdram, ctx);
        goto after_2;
    // 0x60002FD8: nop

    after_2:
    // 0x60002FDC: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x60002FE0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x60002FE4: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x60002FE8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x60002FEC: jal         0x600007F0
    // 0x60002FF0: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    ovl_stage_world7_7F0(rdram, ctx);
        goto after_3;
    // 0x60002FF0: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_3:
    // 0x60002FF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60002FF8:
    // 0x60002FF8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x60002FFC: jr          $ra
    // 0x60003000: nop

    return;
    // 0x60003000: nop

;}
RECOMP_FUNC void ovl_stage_world7_3004(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003004: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x60003008: swc1        $f24, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f24.u32l;
    // 0x6000300C: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x60003010: mtc1        $a1, $f22
    ctx->f22.u32l = ctx->r5;
    // 0x60003014: mtc1        $a2, $f24
    ctx->f24.u32l = ctx->r6;
    // 0x60003018: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x6000301C: sw          $s5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r21;
    // 0x60003020: sw          $s4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r20;
    // 0x60003024: sw          $s3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r19;
    // 0x60003028: sw          $s2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r18;
    // 0x6000302C: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x60003030: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x60003034: swc1        $f25, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x60003038: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x6000303C: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x60003040: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x60003044: jal         0x60000DE4
    // 0x60003048: sw          $a0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r4;
    ovl_stage_world7_DE4(rdram, ctx);
        goto after_0;
    // 0x60003048: sw          $a0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r4;
    after_0:
    // 0x6000304C: addiu       $s4, $sp, 0x88
    ctx->r20 = ADD32(ctx->r29, 0X88);
    // 0x60003050: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x60003054: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x60003058: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x6000305C: jal         0x600006C4
    // 0x60003060: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    ovl_stage_world7_6C4(rdram, ctx);
        goto after_1;
    // 0x60003060: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    after_1:
    // 0x60003064: lw          $t6, 0x88($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X88);
    // 0x60003068: addiu       $s5, $sp, 0x70
    ctx->r21 = ADD32(ctx->r29, 0X70);
    // 0x6000306C: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x60003070: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x60003074: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x60003078: jal         0x600006C4
    // 0x6000307C: swc1        $f22, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->f22.u32l;
    ovl_stage_world7_6C4(rdram, ctx);
        goto after_2;
    // 0x6000307C: swc1        $f22, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->f22.u32l;
    after_2:
    // 0x60003080: lw          $a0, 0xA0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA0);
    // 0x60003084: jal         0x600007E4
    // 0x60003088: nop

    ovl_stage_world7_7E4(rdram, ctx);
        goto after_3;
    // 0x60003088: nop

    after_3:
    // 0x6000308C: lw          $t7, 0x10($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X10);
    // 0x60003090: lui         $at, 0x20
    ctx->r1 = S32(0X20 << 16);
    // 0x60003094: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x60003098: lui         $at, 0x10
    ctx->r1 = S32(0X10 << 16);
    // 0x6000309C: or          $t0, $t8, $at
    ctx->r8 = ctx->r24 | ctx->r1;
    // 0x600030A0: sw          $t8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r24;
    // 0x600030A4: sw          $t0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r8;
    // 0x600030A8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600030AC: lwc1        $f4, 0x5A94($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5A94);
    // 0x600030B0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x600030B4: div.s       $f6, $f24, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f24.fl, ctx->f4.fl);
    // 0x600030B8: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x600030BC: nop

    // 0x600030C0: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x600030C4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x600030C8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x600030CC: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x600030D0: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x600030D4: mfc1        $s3, $f8
    ctx->r19 = (int32_t)ctx->f8.u32l;
    // 0x600030D8: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x600030DC: blez        $s3, L_60003148
    if (SIGNED(ctx->r19) <= 0) {
        // 0x600030E0: lw          $a0, 0xA0($sp)
        ctx->r4 = MEM_W(ctx->r29, 0XA0);
            goto L_60003148;
    }
    // 0x600030E0: lw          $a0, 0xA0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA0);
    // 0x600030E4: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x600030E8: addiu       $s1, $sp, 0x58
    ctx->r17 = ADD32(ctx->r29, 0X58);
    // 0x600030EC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_600030F0:
    // 0x600030F0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x600030F4: jal         0x600006C4
    // 0x600030F8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world7_6C4(rdram, ctx);
        goto after_4;
    // 0x600030F8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_4:
    // 0x600030FC: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x60003100: jal         0x60000418
    // 0x60003104: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    ovl_stage_world7_418(rdram, ctx);
        goto after_5;
    // 0x60003104: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_5:
    // 0x60003108: c.lt.s      $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f24.fl < ctx->f0.fl;
    // 0x6000310C: lw          $t2, 0x88($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X88);
    // 0x60003110: bc1t        L_60003144
    if (c1cs) {
        // 0x60003114: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_60003144;
    }
    // 0x60003114: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x60003118: swc1        $f22, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->f22.u32l;
    // 0x6000311C: lw          $t3, 0x88($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X88);
    // 0x60003120: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x60003124: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x60003128: jal         0x600006C4
    // 0x6000312C: swc1        $f20, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->f20.u32l;
    ovl_stage_world7_6C4(rdram, ctx);
        goto after_6;
    // 0x6000312C: swc1        $f20, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->f20.u32l;
    after_6:
    // 0x60003130: jal         0x600009D0
    // 0x60003134: nop

    ovl_stage_world7_9D0(rdram, ctx);
        goto after_7;
    // 0x60003134: nop

    after_7:
    // 0x60003138: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x6000313C: bne         $s0, $s3, L_600030F0
    if (ctx->r16 != ctx->r19) {
        // 0x60003140: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_600030F0;
    }
    // 0x60003140: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_60003144:
    // 0x60003144: lw          $a0, 0xA0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA0);
L_60003148:
    // 0x60003148: jal         0x600007E4
    // 0x6000314C: nop

    ovl_stage_world7_7E4(rdram, ctx);
        goto after_8;
    // 0x6000314C: nop

    after_8:
    // 0x60003150: lw          $t4, 0x10($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X10);
    // 0x60003154: lui         $at, 0xFFDF
    ctx->r1 = S32(0XFFDF << 16);
    // 0x60003158: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x6000315C: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x60003160: lui         $at, 0xFFEF
    ctx->r1 = S32(0XFFEF << 16);
    // 0x60003164: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x60003168: sw          $t5, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r13;
    // 0x6000316C: and         $t7, $t5, $at
    ctx->r15 = ctx->r13 & ctx->r1;
    // 0x60003170: sw          $t7, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r15;
    // 0x60003174: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x60003178: lw          $s5, 0x40($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X40);
    // 0x6000317C: lw          $s4, 0x3C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X3C);
    // 0x60003180: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x60003184: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x60003188: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x6000318C: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x60003190: lwc1        $f24, 0x24($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X24);
    // 0x60003194: lwc1        $f25, 0x20($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x60003198: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x6000319C: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x600031A0: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x600031A4: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x600031A8: jr          $ra
    // 0x600031AC: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    // 0x600031AC: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void ovl_stage_world7_31B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600031B0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x600031B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600031B8: jal         0x60000DE4
    // 0x600031BC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world7_DE4(rdram, ctx);
        goto after_0;
    // 0x600031BC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x600031C0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600031C4: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x600031C8: jal         0x600006C4
    // 0x600031CC: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    ovl_stage_world7_6C4(rdram, ctx);
        goto after_1;
    // 0x600031CC: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_1:
    // 0x600031D0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600031D4: jal         0x60000E98
    // 0x600031D8: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    ovl_stage_world7_E98(rdram, ctx);
        goto after_2;
    // 0x600031D8: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_2:
    // 0x600031DC: lwc1        $f2, 0x24($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X24);
    // 0x600031E0: lwc1        $f14, 0x30($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X30);
    // 0x600031E4: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x600031E8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x600031EC: sub.s       $f0, $f14, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f14.fl - ctx->f2.fl;
    // 0x600031F0: c.le.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl <= ctx->f0.fl;
    // 0x600031F4: nop

    // 0x600031F8: bc1f        L_6000320C
    if (!c1cs) {
        // 0x600031FC: nop
    
            goto L_6000320C;
    }
    // 0x600031FC: nop

    // 0x60003200: sub.s       $f14, $f0, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x60003204: b           L_6000322C
    // 0x60003208: swc1        $f14, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f14.u32l;
        goto L_6000322C;
    // 0x60003208: swc1        $f14, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f14.u32l;
L_6000320C:
    // 0x6000320C: c.lt.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl < ctx->f2.fl;
    // 0x60003210: nop

    // 0x60003214: bc1f        L_60003224
    if (!c1cs) {
        // 0x60003218: nop
    
            goto L_60003224;
    }
    // 0x60003218: nop

    // 0x6000321C: b           L_60003228
    // 0x60003220: add.s       $f2, $f0, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f12.fl;
        goto L_60003228;
    // 0x60003220: add.s       $f2, $f0, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f12.fl;
L_60003224:
    // 0x60003224: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_60003228:
    // 0x60003228: swc1        $f2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f2.u32l;
L_6000322C:
    // 0x6000322C: jal         0x60000BB0
    // 0x60003230: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    ovl_stage_world7_BB0(rdram, ctx);
        goto after_3;
    // 0x60003230: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    after_3:
    // 0x60003234: bne         $v0, $zero, L_600032A0
    if (ctx->r2 != 0) {
        // 0x60003238: lui         $at, 0x4334
        ctx->r1 = S32(0X4334 << 16);
            goto L_600032A0;
    }
    // 0x60003238: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x6000323C: lwc1        $f14, 0x30($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X30);
    // 0x60003240: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60003244: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x60003248: c.le.s      $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f4.fl <= ctx->f14.fl;
    // 0x6000324C: nop

    // 0x60003250: bc1f        L_600032A4
    if (!c1cs) {
        // 0x60003254: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600032A4;
    }
    // 0x60003254: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003258: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x6000325C: swc1        $f14, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f14.u32l;
    // 0x60003260: c.le.s      $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f14.fl <= ctx->f6.fl;
    // 0x60003264: nop

    // 0x60003268: bc1f        L_600032A4
    if (!c1cs) {
        // 0x6000326C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600032A4;
    }
    // 0x6000326C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003270: jal         0x60000EEC
    // 0x60003274: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    ovl_stage_world7_EEC(rdram, ctx);
        goto after_4;
    // 0x60003274: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_4:
    // 0x60003278: jal         0x60000B98
    // 0x6000327C: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    ovl_stage_world7_B98(rdram, ctx);
        goto after_5;
    // 0x6000327C: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    after_5:
    // 0x60003280: jal         0x60000A60
    // 0x60003284: addiu       $a0, $zero, 0xA8E
    ctx->r4 = ADD32(0, 0XA8E);
    ovl_stage_world7_A60(rdram, ctx);
        goto after_6;
    // 0x60003284: addiu       $a0, $zero, 0xA8E
    ctx->r4 = ADD32(0, 0XA8E);
    after_6:
    // 0x60003288: jal         0x60000E44
    // 0x6000328C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    ovl_stage_world7_E44(rdram, ctx);
        goto after_7;
    // 0x6000328C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_7:
    // 0x60003290: jal         0x60000E44
    // 0x60003294: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    ovl_stage_world7_E44(rdram, ctx);
        goto after_8;
    // 0x60003294: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_8:
    // 0x60003298: jal         0x60000E44
    // 0x6000329C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_stage_world7_E44(rdram, ctx);
        goto after_9;
    // 0x6000329C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_9:
L_600032A0:
    // 0x600032A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600032A4:
    // 0x600032A4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x600032A8: jr          $ra
    // 0x600032AC: nop

    return;
    // 0x600032AC: nop

;}
RECOMP_FUNC void ovl_stage_world7_32B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600032B0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x600032B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600032B8: jal         0x60000DE4
    // 0x600032BC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world7_DE4(rdram, ctx);
        goto after_0;
    // 0x600032BC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x600032C0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600032C4: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x600032C8: jal         0x600006C4
    // 0x600032CC: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    ovl_stage_world7_6C4(rdram, ctx);
        goto after_1;
    // 0x600032CC: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_1:
    // 0x600032D0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600032D4: jal         0x60000E98
    // 0x600032D8: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    ovl_stage_world7_E98(rdram, ctx);
        goto after_2;
    // 0x600032D8: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_2:
    // 0x600032DC: lwc1        $f2, 0x24($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X24);
    // 0x600032E0: lwc1        $f14, 0x30($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X30);
    // 0x600032E4: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x600032E8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x600032EC: sub.s       $f0, $f14, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f14.fl - ctx->f2.fl;
    // 0x600032F0: c.le.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl <= ctx->f0.fl;
    // 0x600032F4: nop

    // 0x600032F8: bc1f        L_6000330C
    if (!c1cs) {
        // 0x600032FC: nop
    
            goto L_6000330C;
    }
    // 0x600032FC: nop

    // 0x60003300: sub.s       $f14, $f0, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x60003304: b           L_6000332C
    // 0x60003308: swc1        $f14, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f14.u32l;
        goto L_6000332C;
    // 0x60003308: swc1        $f14, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f14.u32l;
L_6000330C:
    // 0x6000330C: c.lt.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl < ctx->f2.fl;
    // 0x60003310: nop

    // 0x60003314: bc1f        L_60003324
    if (!c1cs) {
        // 0x60003318: nop
    
            goto L_60003324;
    }
    // 0x60003318: nop

    // 0x6000331C: b           L_60003328
    // 0x60003320: add.s       $f2, $f0, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f12.fl;
        goto L_60003328;
    // 0x60003320: add.s       $f2, $f0, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f12.fl;
L_60003324:
    // 0x60003324: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_60003328:
    // 0x60003328: swc1        $f2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f2.u32l;
L_6000332C:
    // 0x6000332C: jal         0x60000BB0
    // 0x60003330: addiu       $a0, $zero, 0x182
    ctx->r4 = ADD32(0, 0X182);
    ovl_stage_world7_BB0(rdram, ctx);
        goto after_3;
    // 0x60003330: addiu       $a0, $zero, 0x182
    ctx->r4 = ADD32(0, 0X182);
    after_3:
    // 0x60003334: bne         $v0, $zero, L_6000339C
    if (ctx->r2 != 0) {
        // 0x60003338: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_6000339C;
    }
    // 0x60003338: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000333C: jal         0x60000BB0
    // 0x60003340: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    ovl_stage_world7_BB0(rdram, ctx);
        goto after_4;
    // 0x60003340: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    after_4:
    // 0x60003344: beq         $v0, $zero, L_60003398
    if (ctx->r2 == 0) {
        // 0x60003348: lui         $at, 0x4334
        ctx->r1 = S32(0X4334 << 16);
            goto L_60003398;
    }
    // 0x60003348: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x6000334C: lwc1        $f14, 0x30($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X30);
    // 0x60003350: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60003354: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x60003358: c.le.s      $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f4.fl <= ctx->f14.fl;
    // 0x6000335C: nop

    // 0x60003360: bc1f        L_6000339C
    if (!c1cs) {
        // 0x60003364: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_6000339C;
    }
    // 0x60003364: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003368: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x6000336C: swc1        $f14, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f14.u32l;
    // 0x60003370: c.le.s      $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f14.fl <= ctx->f6.fl;
    // 0x60003374: nop

    // 0x60003378: bc1f        L_6000339C
    if (!c1cs) {
        // 0x6000337C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_6000339C;
    }
    // 0x6000337C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003380: jal         0x60000EEC
    // 0x60003384: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    ovl_stage_world7_EEC(rdram, ctx);
        goto after_5;
    // 0x60003384: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_5:
    // 0x60003388: jal         0x60000B98
    // 0x6000338C: addiu       $a0, $zero, 0x182
    ctx->r4 = ADD32(0, 0X182);
    ovl_stage_world7_B98(rdram, ctx);
        goto after_6;
    // 0x6000338C: addiu       $a0, $zero, 0x182
    ctx->r4 = ADD32(0, 0X182);
    after_6:
    // 0x60003390: jal         0x60000A60
    // 0x60003394: addiu       $a0, $zero, 0xA8F
    ctx->r4 = ADD32(0, 0XA8F);
    ovl_stage_world7_A60(rdram, ctx);
        goto after_7;
    // 0x60003394: addiu       $a0, $zero, 0xA8F
    ctx->r4 = ADD32(0, 0XA8F);
    after_7:
L_60003398:
    // 0x60003398: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000339C:
    // 0x6000339C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x600033A0: jr          $ra
    // 0x600033A4: nop

    return;
    // 0x600033A4: nop

;}
RECOMP_FUNC void ovl_stage_world7_33A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600033A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600033AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600033B0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x600033B4: jal         0x600006D0
    // 0x600033B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world7_6D0(rdram, ctx);
        goto after_0;
    // 0x600033B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x600033BC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600033C0: jal         0x60000E38
    // 0x600033C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world7_E38(rdram, ctx);
        goto after_1;
    // 0x600033C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x600033C8: jal         0x600009C4
    // 0x600033CC: addiu       $a0, $zero, 0xF0
    ctx->r4 = ADD32(0, 0XF0);
    ovl_stage_world7_9C4(rdram, ctx);
        goto after_2;
    // 0x600033CC: addiu       $a0, $zero, 0xF0
    ctx->r4 = ADD32(0, 0XF0);
    after_2:
    // 0x600033D0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x600033D4: jal         0x600006D0
    // 0x600033D8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    ovl_stage_world7_6D0(rdram, ctx);
        goto after_3;
    // 0x600033D8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_3:
    // 0x600033DC: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x600033E0: jal         0x60000E38
    // 0x600033E4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world7_E38(rdram, ctx);
        goto after_4;
    // 0x600033E4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x600033E8: jal         0x60000BA4
    // 0x600033EC: addiu       $a0, $zero, 0x101
    ctx->r4 = ADD32(0, 0X101);
    ovl_stage_world7_BA4(rdram, ctx);
        goto after_5;
    // 0x600033EC: addiu       $a0, $zero, 0x101
    ctx->r4 = ADD32(0, 0X101);
    after_5:
    // 0x600033F0: jal         0x600009AC
    // 0x600033F4: nop

    ovl_stage_world7_9AC(rdram, ctx);
        goto after_6;
    // 0x600033F4: nop

    after_6:
    // 0x600033F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600033FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60003400: jr          $ra
    // 0x60003404: nop

    return;
    // 0x60003404: nop

;}
RECOMP_FUNC void ovl_stage_world7_3408(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003408: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x6000340C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003410: jal         0x60000BB0
    // 0x60003414: addiu       $a0, $zero, 0x101
    ctx->r4 = ADD32(0, 0X101);
    ovl_stage_world7_BB0(rdram, ctx);
        goto after_0;
    // 0x60003414: addiu       $a0, $zero, 0x101
    ctx->r4 = ADD32(0, 0X101);
    after_0:
    // 0x60003418: bne         $v0, $zero, L_60003444
    if (ctx->r2 != 0) {
        // 0x6000341C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003444;
    }
    // 0x6000341C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003420: jal         0x60000B98
    // 0x60003424: addiu       $a0, $zero, 0x101
    ctx->r4 = ADD32(0, 0X101);
    ovl_stage_world7_B98(rdram, ctx);
        goto after_1;
    // 0x60003424: addiu       $a0, $zero, 0x101
    ctx->r4 = ADD32(0, 0X101);
    after_1:
    // 0x60003428: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x6000342C: addiu       $a0, $a0, 0x33A8
    ctx->r4 = ADD32(ctx->r4, 0X33A8);
    // 0x60003430: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60003434: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60003438: jal         0x60000994
    // 0x6000343C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world7_994(rdram, ctx);
        goto after_2;
    // 0x6000343C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x60003440: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003444:
    // 0x60003444: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60003448: jr          $ra
    // 0x6000344C: nop

    return;
    // 0x6000344C: nop

;}
RECOMP_FUNC void ovl_stage_world7_3450(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003450: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x60003454: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x60003458: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x6000345C: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x60003460: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x60003464: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x60003468: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x6000346C: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x60003470: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x60003474: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x60003478: jal         0x60000E74
    // 0x6000347C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_stage_world7_E74(rdram, ctx);
        goto after_0;
    // 0x6000347C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_0:
    // 0x60003480: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x60003484: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60003488: swc1        $f0, 0x5C40($at)
    MEM_W(0X5C40, ctx->r1) = ctx->f0.u32l;
    // 0x6000348C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60003490: swc1        $f0, 0x5C48($at)
    MEM_W(0X5C48, ctx->r1) = ctx->f0.u32l;
    // 0x60003494: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60003498: swc1        $f0, 0x5C50($at)
    MEM_W(0X5C50, ctx->r1) = ctx->f0.u32l;
    // 0x6000349C: swc1        $f0, 0x5C54($at)
    MEM_W(0X5C54, ctx->r1) = ctx->f0.u32l;
    // 0x600034A0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600034A4: swc1        $f0, 0x5C58($at)
    MEM_W(0X5C58, ctx->r1) = ctx->f0.u32l;
    // 0x600034A8: swc1        $f0, 0x5C5C($at)
    MEM_W(0X5C5C, ctx->r1) = ctx->f0.u32l;
    // 0x600034AC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600034B0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x600034B4: sw          $t7, 0x5C78($at)
    MEM_W(0X5C78, ctx->r1) = ctx->r15;
    // 0x600034B8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600034BC: swc1        $f0, 0x5C60($at)
    MEM_W(0X5C60, ctx->r1) = ctx->f0.u32l;
    // 0x600034C0: swc1        $f0, 0x5C64($at)
    MEM_W(0X5C64, ctx->r1) = ctx->f0.u32l;
    // 0x600034C4: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600034C8: swc1        $f0, 0x5C68($at)
    MEM_W(0X5C68, ctx->r1) = ctx->f0.u32l;
    // 0x600034CC: swc1        $f0, 0x5C6C($at)
    MEM_W(0X5C6C, ctx->r1) = ctx->f0.u32l;
    // 0x600034D0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600034D4: swc1        $f0, 0x5C70($at)
    MEM_W(0X5C70, ctx->r1) = ctx->f0.u32l;
    // 0x600034D8: swc1        $f0, 0x5C74($at)
    MEM_W(0X5C74, ctx->r1) = ctx->f0.u32l;
    // 0x600034DC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600034E0: swc1        $f0, 0x5C44($at)
    MEM_W(0X5C44, ctx->r1) = ctx->f0.u32l;
    // 0x600034E4: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600034E8: swc1        $f0, 0x5C4C($at)
    MEM_W(0X5C4C, ctx->r1) = ctx->f0.u32l;
    // 0x600034EC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600034F0: lwc1        $f22, 0x5A98($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X5A98);
    // 0x600034F4: lui         $t6, 0x6000
    ctx->r14 = S32(0X6000 << 16);
    // 0x600034F8: lui         $at, 0xC198
    ctx->r1 = S32(0XC198 << 16);
    // 0x600034FC: addiu       $t6, $t6, 0x5C40
    ctx->r14 = ADD32(ctx->r14, 0X5C40);
    // 0x60003500: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x60003504: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x60003508: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
    // 0x6000350C: addiu       $s3, $zero, 0x64
    ctx->r19 = ADD32(0, 0X64);
    // 0x60003510: addiu       $s2, $sp, 0x3C
    ctx->r18 = ADD32(ctx->r29, 0X3C);
L_60003514:
    // 0x60003514: jal         0x600009C4
    // 0x60003518: addiu       $a0, $zero, 0x78
    ctx->r4 = ADD32(0, 0X78);
    ovl_stage_world7_9C4(rdram, ctx);
        goto after_1;
    // 0x60003518: addiu       $a0, $zero, 0x78
    ctx->r4 = ADD32(0, 0X78);
    after_1:
    // 0x6000351C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_60003520:
    // 0x60003520: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60003524: swc1        $f20, 0x5C70($at)
    MEM_W(0X5C70, ctx->r1) = ctx->f20.u32l;
    // 0x60003528: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x6000352C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x60003530: jal         0x600006C4
    // 0x60003534: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    ovl_stage_world7_6C4(rdram, ctx);
        goto after_2;
    // 0x60003534: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_2:
    // 0x60003538: jal         0x600009D0
    // 0x6000353C: nop

    ovl_stage_world7_9D0(rdram, ctx);
        goto after_3;
    // 0x6000353C: nop

    after_3:
    // 0x60003540: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60003544: slti        $at, $s0, 0x14
    ctx->r1 = SIGNED(ctx->r16) < 0X14 ? 1 : 0;
    // 0x60003548: bne         $at, $zero, L_60003520
    if (ctx->r1 != 0) {
        // 0x6000354C: nop
    
            goto L_60003520;
    }
    // 0x6000354C: nop

    // 0x60003550: jal         0x60000244
    // 0x60003554: addiu       $a0, $zero, 0x1BB
    ctx->r4 = ADD32(0, 0X1BB);
    ovl_stage_world7_244(rdram, ctx);
        goto after_4;
    // 0x60003554: addiu       $a0, $zero, 0x1BB
    ctx->r4 = ADD32(0, 0X1BB);
    after_4:
    // 0x60003558: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    // 0x6000355C: jal         0x600006D0
    // 0x60003560: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    ovl_stage_world7_6D0(rdram, ctx);
        goto after_5;
    // 0x60003560: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    after_5:
    // 0x60003564: jal         0x600009C4
    // 0x60003568: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    ovl_stage_world7_9C4(rdram, ctx);
        goto after_6;
    // 0x60003568: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_6:
    // 0x6000356C: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    // 0x60003570: jal         0x600006D0
    // 0x60003574: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world7_6D0(rdram, ctx);
        goto after_7;
    // 0x60003574: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x60003578: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_6000357C:
    // 0x6000357C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60003580: swc1        $f22, 0x5C70($at)
    MEM_W(0X5C70, ctx->r1) = ctx->f22.u32l;
    // 0x60003584: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x60003588: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x6000358C: jal         0x600006C4
    // 0x60003590: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    ovl_stage_world7_6C4(rdram, ctx);
        goto after_8;
    // 0x60003590: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_8:
    // 0x60003594: jal         0x600009D0
    // 0x60003598: nop

    ovl_stage_world7_9D0(rdram, ctx);
        goto after_9;
    // 0x60003598: nop

    after_9:
    // 0x6000359C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x600035A0: bne         $s0, $s3, L_6000357C
    if (ctx->r16 != ctx->r19) {
        // 0x600035A4: nop
    
            goto L_6000357C;
    }
    // 0x600035A4: nop

    // 0x600035A8: b           L_60003514
    // 0x600035AC: nop

        goto L_60003514;
    // 0x600035AC: nop

    // 0x600035B0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x600035B4: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x600035B8: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x600035BC: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x600035C0: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x600035C4: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x600035C8: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x600035CC: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x600035D0: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x600035D4: jr          $ra
    // 0x600035D8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x600035D8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_stage_world7_35DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600035DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600035E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600035E4: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    // 0x600035E8: jal         0x600006D0
    // 0x600035EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world7_6D0(rdram, ctx);
        goto after_0;
    // 0x600035EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x600035F0: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600035F4: addiu       $a0, $a0, 0x3450
    ctx->r4 = ADD32(ctx->r4, 0X3450);
    // 0x600035F8: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x600035FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60003600: jal         0x60000994
    // 0x60003604: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world7_994(rdram, ctx);
        goto after_1;
    // 0x60003604: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x60003608: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000360C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60003610: jr          $ra
    // 0x60003614: nop

    return;
    // 0x60003614: nop

;}
RECOMP_FUNC void ovl_stage_world7_3618(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003618: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x6000361C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003620: jal         0x60000BB0
    // 0x60003624: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    ovl_stage_world7_BB0(rdram, ctx);
        goto after_0;
    // 0x60003624: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    after_0:
    // 0x60003628: beq         $v0, $zero, L_6000369C
    if (ctx->r2 == 0) {
        // 0x6000362C: nop
    
            goto L_6000369C;
    }
    // 0x6000362C: nop

    // 0x60003630: jal         0x60000BB0
    // 0x60003634: addiu       $a0, $zero, 0x185
    ctx->r4 = ADD32(0, 0X185);
    ovl_stage_world7_BB0(rdram, ctx);
        goto after_1;
    // 0x60003634: addiu       $a0, $zero, 0x185
    ctx->r4 = ADD32(0, 0X185);
    after_1:
    // 0x60003638: bne         $v0, $zero, L_6000369C
    if (ctx->r2 != 0) {
        // 0x6000363C: nop
    
            goto L_6000369C;
    }
    // 0x6000363C: nop

    // 0x60003640: jal         0x60000BB0
    // 0x60003644: addiu       $a0, $zero, 0x182
    ctx->r4 = ADD32(0, 0X182);
    ovl_stage_world7_BB0(rdram, ctx);
        goto after_2;
    // 0x60003644: addiu       $a0, $zero, 0x182
    ctx->r4 = ADD32(0, 0X182);
    after_2:
    // 0x60003648: beq         $v0, $zero, L_6000369C
    if (ctx->r2 == 0) {
        // 0x6000364C: nop
    
            goto L_6000369C;
    }
    // 0x6000364C: nop

    // 0x60003650: jal         0x60000BB0
    // 0x60003654: addiu       $a0, $zero, 0x186
    ctx->r4 = ADD32(0, 0X186);
    ovl_stage_world7_BB0(rdram, ctx);
        goto after_3;
    // 0x60003654: addiu       $a0, $zero, 0x186
    ctx->r4 = ADD32(0, 0X186);
    after_3:
    // 0x60003658: bne         $v0, $zero, L_6000369C
    if (ctx->r2 != 0) {
        // 0x6000365C: nop
    
            goto L_6000369C;
    }
    // 0x6000365C: nop

    // 0x60003660: jal         0x60000B98
    // 0x60003664: addiu       $a0, $zero, 0x185
    ctx->r4 = ADD32(0, 0X185);
    ovl_stage_world7_B98(rdram, ctx);
        goto after_4;
    // 0x60003664: addiu       $a0, $zero, 0x185
    ctx->r4 = ADD32(0, 0X185);
    after_4:
    // 0x60003668: jal         0x60000B98
    // 0x6000366C: addiu       $a0, $zero, 0x186
    ctx->r4 = ADD32(0, 0X186);
    ovl_stage_world7_B98(rdram, ctx);
        goto after_5;
    // 0x6000366C: addiu       $a0, $zero, 0x186
    ctx->r4 = ADD32(0, 0X186);
    after_5:
    // 0x60003670: jal         0x60000A60
    // 0x60003674: addiu       $a0, $zero, 0xA92
    ctx->r4 = ADD32(0, 0XA92);
    ovl_stage_world7_A60(rdram, ctx);
        goto after_6;
    // 0x60003674: addiu       $a0, $zero, 0xA92
    ctx->r4 = ADD32(0, 0XA92);
    after_6:
    // 0x60003678: jal         0x600009C4
    // 0x6000367C: addiu       $a0, $zero, 0x4B
    ctx->r4 = ADD32(0, 0X4B);
    ovl_stage_world7_9C4(rdram, ctx);
        goto after_7;
    // 0x6000367C: addiu       $a0, $zero, 0x4B
    ctx->r4 = ADD32(0, 0X4B);
    after_7:
    // 0x60003680: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x60003684: jal         0x60000E68
    // 0x60003688: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world7_E68(rdram, ctx);
        goto after_8;
    // 0x60003688: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x6000368C: jal         0x60000B98
    // 0x60003690: addiu       $a0, $zero, 0x187
    ctx->r4 = ADD32(0, 0X187);
    ovl_stage_world7_B98(rdram, ctx);
        goto after_9;
    // 0x60003690: addiu       $a0, $zero, 0x187
    ctx->r4 = ADD32(0, 0X187);
    after_9:
    // 0x60003694: b           L_6000377C
    // 0x60003698: nop

        goto L_6000377C;
    // 0x60003698: nop

L_6000369C:
    // 0x6000369C: jal         0x60000BB0
    // 0x600036A0: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    ovl_stage_world7_BB0(rdram, ctx);
        goto after_10;
    // 0x600036A0: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    after_10:
    // 0x600036A4: beq         $v0, $zero, L_60003710
    if (ctx->r2 == 0) {
        // 0x600036A8: nop
    
            goto L_60003710;
    }
    // 0x600036A8: nop

    // 0x600036AC: jal         0x60000BB0
    // 0x600036B0: addiu       $a0, $zero, 0x185
    ctx->r4 = ADD32(0, 0X185);
    ovl_stage_world7_BB0(rdram, ctx);
        goto after_11;
    // 0x600036B0: addiu       $a0, $zero, 0x185
    ctx->r4 = ADD32(0, 0X185);
    after_11:
    // 0x600036B4: bne         $v0, $zero, L_60003710
    if (ctx->r2 != 0) {
        // 0x600036B8: nop
    
            goto L_60003710;
    }
    // 0x600036B8: nop

    // 0x600036BC: jal         0x60000B98
    // 0x600036C0: addiu       $a0, $zero, 0x185
    ctx->r4 = ADD32(0, 0X185);
    ovl_stage_world7_B98(rdram, ctx);
        goto after_12;
    // 0x600036C0: addiu       $a0, $zero, 0x185
    ctx->r4 = ADD32(0, 0X185);
    after_12:
    // 0x600036C4: jal         0x60000A60
    // 0x600036C8: addiu       $a0, $zero, 0xA90
    ctx->r4 = ADD32(0, 0XA90);
    ovl_stage_world7_A60(rdram, ctx);
        goto after_13;
    // 0x600036C8: addiu       $a0, $zero, 0xA90
    ctx->r4 = ADD32(0, 0XA90);
    after_13:
    // 0x600036CC: jal         0x60000BB0
    // 0x600036D0: addiu       $a0, $zero, 0x185
    ctx->r4 = ADD32(0, 0X185);
    ovl_stage_world7_BB0(rdram, ctx);
        goto after_14;
    // 0x600036D0: addiu       $a0, $zero, 0x185
    ctx->r4 = ADD32(0, 0X185);
    after_14:
    // 0x600036D4: beq         $v0, $zero, L_6000377C
    if (ctx->r2 == 0) {
        // 0x600036D8: nop
    
            goto L_6000377C;
    }
    // 0x600036D8: nop

    // 0x600036DC: jal         0x60000BB0
    // 0x600036E0: addiu       $a0, $zero, 0x186
    ctx->r4 = ADD32(0, 0X186);
    ovl_stage_world7_BB0(rdram, ctx);
        goto after_15;
    // 0x600036E0: addiu       $a0, $zero, 0x186
    ctx->r4 = ADD32(0, 0X186);
    after_15:
    // 0x600036E4: beq         $v0, $zero, L_6000377C
    if (ctx->r2 == 0) {
        // 0x600036E8: nop
    
            goto L_6000377C;
    }
    // 0x600036E8: nop

    // 0x600036EC: jal         0x600009C4
    // 0x600036F0: addiu       $a0, $zero, 0x4B
    ctx->r4 = ADD32(0, 0X4B);
    ovl_stage_world7_9C4(rdram, ctx);
        goto after_16;
    // 0x600036F0: addiu       $a0, $zero, 0x4B
    ctx->r4 = ADD32(0, 0X4B);
    after_16:
    // 0x600036F4: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x600036F8: jal         0x60000E68
    // 0x600036FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world7_E68(rdram, ctx);
        goto after_17;
    // 0x600036FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_17:
    // 0x60003700: jal         0x60000B98
    // 0x60003704: addiu       $a0, $zero, 0x187
    ctx->r4 = ADD32(0, 0X187);
    ovl_stage_world7_B98(rdram, ctx);
        goto after_18;
    // 0x60003704: addiu       $a0, $zero, 0x187
    ctx->r4 = ADD32(0, 0X187);
    after_18:
    // 0x60003708: b           L_6000377C
    // 0x6000370C: nop

        goto L_6000377C;
    // 0x6000370C: nop

L_60003710:
    // 0x60003710: jal         0x60000BB0
    // 0x60003714: addiu       $a0, $zero, 0x182
    ctx->r4 = ADD32(0, 0X182);
    ovl_stage_world7_BB0(rdram, ctx);
        goto after_19;
    // 0x60003714: addiu       $a0, $zero, 0x182
    ctx->r4 = ADD32(0, 0X182);
    after_19:
    // 0x60003718: beq         $v0, $zero, L_6000377C
    if (ctx->r2 == 0) {
        // 0x6000371C: nop
    
            goto L_6000377C;
    }
    // 0x6000371C: nop

    // 0x60003720: jal         0x60000BB0
    // 0x60003724: addiu       $a0, $zero, 0x186
    ctx->r4 = ADD32(0, 0X186);
    ovl_stage_world7_BB0(rdram, ctx);
        goto after_20;
    // 0x60003724: addiu       $a0, $zero, 0x186
    ctx->r4 = ADD32(0, 0X186);
    after_20:
    // 0x60003728: bne         $v0, $zero, L_6000377C
    if (ctx->r2 != 0) {
        // 0x6000372C: nop
    
            goto L_6000377C;
    }
    // 0x6000372C: nop

    // 0x60003730: jal         0x60000B98
    // 0x60003734: addiu       $a0, $zero, 0x186
    ctx->r4 = ADD32(0, 0X186);
    ovl_stage_world7_B98(rdram, ctx);
        goto after_21;
    // 0x60003734: addiu       $a0, $zero, 0x186
    ctx->r4 = ADD32(0, 0X186);
    after_21:
    // 0x60003738: jal         0x60000A60
    // 0x6000373C: addiu       $a0, $zero, 0xA91
    ctx->r4 = ADD32(0, 0XA91);
    ovl_stage_world7_A60(rdram, ctx);
        goto after_22;
    // 0x6000373C: addiu       $a0, $zero, 0xA91
    ctx->r4 = ADD32(0, 0XA91);
    after_22:
    // 0x60003740: jal         0x60000BB0
    // 0x60003744: addiu       $a0, $zero, 0x185
    ctx->r4 = ADD32(0, 0X185);
    ovl_stage_world7_BB0(rdram, ctx);
        goto after_23;
    // 0x60003744: addiu       $a0, $zero, 0x185
    ctx->r4 = ADD32(0, 0X185);
    after_23:
    // 0x60003748: beq         $v0, $zero, L_6000377C
    if (ctx->r2 == 0) {
        // 0x6000374C: nop
    
            goto L_6000377C;
    }
    // 0x6000374C: nop

    // 0x60003750: jal         0x60000BB0
    // 0x60003754: addiu       $a0, $zero, 0x186
    ctx->r4 = ADD32(0, 0X186);
    ovl_stage_world7_BB0(rdram, ctx);
        goto after_24;
    // 0x60003754: addiu       $a0, $zero, 0x186
    ctx->r4 = ADD32(0, 0X186);
    after_24:
    // 0x60003758: beq         $v0, $zero, L_6000377C
    if (ctx->r2 == 0) {
        // 0x6000375C: nop
    
            goto L_6000377C;
    }
    // 0x6000375C: nop

    // 0x60003760: jal         0x600009C4
    // 0x60003764: addiu       $a0, $zero, 0x4B
    ctx->r4 = ADD32(0, 0X4B);
    ovl_stage_world7_9C4(rdram, ctx);
        goto after_25;
    // 0x60003764: addiu       $a0, $zero, 0x4B
    ctx->r4 = ADD32(0, 0X4B);
    after_25:
    // 0x60003768: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x6000376C: jal         0x60000E68
    // 0x60003770: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world7_E68(rdram, ctx);
        goto after_26;
    // 0x60003770: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_26:
    // 0x60003774: jal         0x60000B98
    // 0x60003778: addiu       $a0, $zero, 0x187
    ctx->r4 = ADD32(0, 0X187);
    ovl_stage_world7_B98(rdram, ctx);
        goto after_27;
    // 0x60003778: addiu       $a0, $zero, 0x187
    ctx->r4 = ADD32(0, 0X187);
    after_27:
L_6000377C:
    // 0x6000377C: jal         0x600009AC
    // 0x60003780: nop

    ovl_stage_world7_9AC(rdram, ctx);
        goto after_28;
    // 0x60003780: nop

    after_28:
    // 0x60003784: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003788: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x6000378C: jr          $ra
    // 0x60003790: nop

    return;
    // 0x60003790: nop

;}
RECOMP_FUNC void ovl_stage_world7_3794(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003794: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x60003798: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x6000379C: jal         0x60000DE4
    // 0x600037A0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world7_DE4(rdram, ctx);
        goto after_0;
    // 0x600037A0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x600037A4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600037A8: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x600037AC: jal         0x600006C4
    // 0x600037B0: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    ovl_stage_world7_6C4(rdram, ctx);
        goto after_1;
    // 0x600037B0: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_1:
    // 0x600037B4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600037B8: jal         0x60000E98
    // 0x600037BC: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    ovl_stage_world7_E98(rdram, ctx);
        goto after_2;
    // 0x600037BC: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_2:
    // 0x600037C0: lwc1        $f2, 0x30($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X30);
    // 0x600037C4: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x600037C8: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x600037CC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x600037D0: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x600037D4: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x600037D8: c.le.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl <= ctx->f0.fl;
    // 0x600037DC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x600037E0: bc1f        L_600037F0
    if (!c1cs) {
        // 0x600037E4: nop
    
            goto L_600037F0;
    }
    // 0x600037E4: nop

    // 0x600037E8: b           L_60003810
    // 0x600037EC: sub.s       $f2, $f0, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f14.fl;
        goto L_60003810;
    // 0x600037EC: sub.s       $f2, $f0, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f14.fl;
L_600037F0:
    // 0x600037F0: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x600037F4: nop

    // 0x600037F8: bc1f        L_60003808
    if (!c1cs) {
        // 0x600037FC: nop
    
            goto L_60003808;
    }
    // 0x600037FC: nop

    // 0x60003800: b           L_6000380C
    // 0x60003804: add.s       $f12, $f0, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f14.fl;
        goto L_6000380C;
    // 0x60003804: add.s       $f12, $f0, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f14.fl;
L_60003808:
    // 0x60003808: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_6000380C:
    // 0x6000380C: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
L_60003810:
    // 0x60003810: c.eq.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl == ctx->f4.fl;
    // 0x60003814: swc1        $f2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f2.u32l;
    // 0x60003818: bc1f        L_60003878
    if (!c1cs) {
        // 0x6000381C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003878;
    }
    // 0x6000381C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003820: jal         0x60000BB0
    // 0x60003824: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    ovl_stage_world7_BB0(rdram, ctx);
        goto after_3;
    // 0x60003824: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    after_3:
    // 0x60003828: beq         $v0, $zero, L_60003840
    if (ctx->r2 == 0) {
        // 0x6000382C: nop
    
            goto L_60003840;
    }
    // 0x6000382C: nop

    // 0x60003830: jal         0x60000BB0
    // 0x60003834: addiu       $a0, $zero, 0x185
    ctx->r4 = ADD32(0, 0X185);
    ovl_stage_world7_BB0(rdram, ctx);
        goto after_4;
    // 0x60003834: addiu       $a0, $zero, 0x185
    ctx->r4 = ADD32(0, 0X185);
    after_4:
    // 0x60003838: beq         $v0, $zero, L_6000385C
    if (ctx->r2 == 0) {
        // 0x6000383C: nop
    
            goto L_6000385C;
    }
    // 0x6000383C: nop

L_60003840:
    // 0x60003840: jal         0x60000BB0
    // 0x60003844: addiu       $a0, $zero, 0x182
    ctx->r4 = ADD32(0, 0X182);
    ovl_stage_world7_BB0(rdram, ctx);
        goto after_5;
    // 0x60003844: addiu       $a0, $zero, 0x182
    ctx->r4 = ADD32(0, 0X182);
    after_5:
    // 0x60003848: beq         $v0, $zero, L_60003878
    if (ctx->r2 == 0) {
        // 0x6000384C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003878;
    }
    // 0x6000384C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003850: jal         0x60000BB0
    // 0x60003854: addiu       $a0, $zero, 0x186
    ctx->r4 = ADD32(0, 0X186);
    ovl_stage_world7_BB0(rdram, ctx);
        goto after_6;
    // 0x60003854: addiu       $a0, $zero, 0x186
    ctx->r4 = ADD32(0, 0X186);
    after_6:
    // 0x60003858: bne         $v0, $zero, L_60003874
    if (ctx->r2 != 0) {
        // 0x6000385C: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_60003874;
    }
L_6000385C:
    // 0x6000385C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003860: addiu       $a0, $a0, 0x3618
    ctx->r4 = ADD32(ctx->r4, 0X3618);
    // 0x60003864: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60003868: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x6000386C: jal         0x60000994
    // 0x60003870: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world7_994(rdram, ctx);
        goto after_7;
    // 0x60003870: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_7:
L_60003874:
    // 0x60003874: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003878:
    // 0x60003878: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x6000387C: jr          $ra
    // 0x60003880: nop

    return;
    // 0x60003880: nop

;}
RECOMP_FUNC void ovl_stage_world7_3884(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003884: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x60003888: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x6000388C: jal         0x60000E74
    // 0x60003890: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    ovl_stage_world7_E74(rdram, ctx);
        goto after_0;
    // 0x60003890: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_0:
    // 0x60003894: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60003898: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x6000389C: jal         0x600006C4
    // 0x600038A0: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world7_6C4(rdram, ctx);
        goto after_1;
    // 0x600038A0: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x600038A4: lui         $at, 0x433E
    ctx->r1 = S32(0X433E << 16);
    // 0x600038A8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x600038AC: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x600038B0: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x600038B4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x600038B8: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x600038BC: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x600038C0: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x600038C4: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x600038C8: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x600038CC: jal         0x60000E74
    // 0x600038D0: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
    ovl_stage_world7_E74(rdram, ctx);
        goto after_2;
    // 0x600038D0: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
    after_2:
    // 0x600038D4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600038D8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x600038DC: jal         0x600006C4
    // 0x600038E0: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world7_6C4(rdram, ctx);
        goto after_3;
    // 0x600038E0: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_3:
    // 0x600038E4: jal         0x60000E74
    // 0x600038E8: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    ovl_stage_world7_E74(rdram, ctx);
        goto after_4;
    // 0x600038E8: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_4:
    // 0x600038EC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600038F0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x600038F4: jal         0x600006C4
    // 0x600038F8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world7_6C4(rdram, ctx);
        goto after_5;
    // 0x600038F8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_5:
    // 0x600038FC: lui         $at, 0x433E
    ctx->r1 = S32(0X433E << 16);
    // 0x60003900: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60003904: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x60003908: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x6000390C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x60003910: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x60003914: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x60003918: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x6000391C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x60003920: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x60003924: jal         0x60000E74
    // 0x60003928: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
    ovl_stage_world7_E74(rdram, ctx);
        goto after_6;
    // 0x60003928: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
    after_6:
    // 0x6000392C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60003930: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x60003934: jal         0x600006C4
    // 0x60003938: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world7_6C4(rdram, ctx);
        goto after_7;
    // 0x60003938: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_7:
    // 0x6000393C: jal         0x600009AC
    // 0x60003940: nop

    ovl_stage_world7_9AC(rdram, ctx);
        goto after_8;
    // 0x60003940: nop

    after_8:
    // 0x60003944: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003948: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x6000394C: jr          $ra
    // 0x60003950: nop

    return;
    // 0x60003950: nop

;}
RECOMP_FUNC void ovl_stage_world7_3954(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003954: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60003958: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x6000395C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003960: addiu       $a0, $a0, 0x3884
    ctx->r4 = ADD32(ctx->r4, 0X3884);
    // 0x60003964: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60003968: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x6000396C: jal         0x60000994
    // 0x60003970: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world7_994(rdram, ctx);
        goto after_0;
    // 0x60003970: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x60003974: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003978: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x6000397C: jr          $ra
    // 0x60003980: nop

    return;
    // 0x60003980: nop

;}
RECOMP_FUNC void ovl_stage_world7_3984(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003984: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x60003988: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x6000398C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x60003990: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x60003994: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x60003998: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x6000399C: jal         0x600009DC
    // 0x600039A0: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    ovl_stage_world7_9DC(rdram, ctx);
        goto after_0;
    // 0x600039A0: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x600039A4: lw          $v1, 0x1C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X1C);
    // 0x600039A8: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    // 0x600039AC: lw          $t6, 0xC($v1)
    ctx->r14 = MEM_W(ctx->r3, 0XC);
    // 0x600039B0: jal         0x600009C4
    // 0x600039B4: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    ovl_stage_world7_9C4(rdram, ctx);
        goto after_1;
    // 0x600039B4: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    after_1:
    // 0x600039B8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600039BC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x600039C0: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x600039C4: jal         0x60000D18
    // 0x600039C8: addiu       $a3, $zero, 0x28
    ctx->r7 = ADD32(0, 0X28);
    ovl_stage_world7_D18(rdram, ctx);
        goto after_2;
    // 0x600039C8: addiu       $a3, $zero, 0x28
    ctx->r7 = ADD32(0, 0X28);
    after_2:
    // 0x600039CC: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x600039D0: jal         0x60000E20
    // 0x600039D4: lui         $a1, 0x4160
    ctx->r5 = S32(0X4160 << 16);
    ovl_stage_world7_E20(rdram, ctx);
        goto after_3;
    // 0x600039D4: lui         $a1, 0x4160
    ctx->r5 = S32(0X4160 << 16);
    after_3:
    // 0x600039D8: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x600039DC: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x600039E0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x600039E4: addiu       $s2, $zero, 0x8
    ctx->r18 = ADD32(0, 0X8);
    // 0x600039E8: addiu       $s1, $zero, 0x7
    ctx->r17 = ADD32(0, 0X7);
L_600039EC:
    // 0x600039EC: bne         $s0, $s1, L_600039FC
    if (ctx->r16 != ctx->r17) {
        // 0x600039F0: nop
    
            goto L_600039FC;
    }
    // 0x600039F0: nop

    // 0x600039F4: jal         0x60000244
    // 0x600039F8: addiu       $a0, $zero, 0x1CC
    ctx->r4 = ADD32(0, 0X1CC);
    ovl_stage_world7_244(rdram, ctx);
        goto after_4;
    // 0x600039F8: addiu       $a0, $zero, 0x1CC
    ctx->r4 = ADD32(0, 0X1CC);
    after_4:
L_600039FC:
    // 0x600039FC: jal         0x600009C4
    // 0x60003A00: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    ovl_stage_world7_9C4(rdram, ctx);
        goto after_5;
    // 0x60003A00: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    after_5:
    // 0x60003A04: sll         $a2, $s1, 16
    ctx->r6 = S32(ctx->r17 << 16);
    // 0x60003A08: sra         $t7, $a2, 16
    ctx->r15 = S32(SIGNED(ctx->r6) >> 16);
    // 0x60003A0C: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x60003A10: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60003A14: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x60003A18: jal         0x60000D18
    // 0x60003A1C: addiu       $a3, $zero, 0x28
    ctx->r7 = ADD32(0, 0X28);
    ovl_stage_world7_D18(rdram, ctx);
        goto after_6;
    // 0x60003A1C: addiu       $a3, $zero, 0x28
    ctx->r7 = ADD32(0, 0X28);
    after_6:
    // 0x60003A20: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x60003A24: jal         0x60000E20
    // 0x60003A28: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    ovl_stage_world7_E20(rdram, ctx);
        goto after_7;
    // 0x60003A28: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_7:
    // 0x60003A2C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60003A30: bne         $s0, $s2, L_600039EC
    if (ctx->r16 != ctx->r18) {
        // 0x60003A34: nop
    
            goto L_600039EC;
    }
    // 0x60003A34: nop

    // 0x60003A38: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60003A3C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x60003A40: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x60003A44: jal         0x60000D18
    // 0x60003A48: addiu       $a3, $zero, 0x28
    ctx->r7 = ADD32(0, 0X28);
    ovl_stage_world7_D18(rdram, ctx);
        goto after_8;
    // 0x60003A48: addiu       $a3, $zero, 0x28
    ctx->r7 = ADD32(0, 0X28);
    after_8:
    // 0x60003A4C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x60003A50: jal         0x60000E20
    // 0x60003A54: lui         $a1, 0x4160
    ctx->r5 = S32(0X4160 << 16);
    ovl_stage_world7_E20(rdram, ctx);
        goto after_9;
    // 0x60003A54: lui         $a1, 0x4160
    ctx->r5 = S32(0X4160 << 16);
    after_9:
    // 0x60003A58: jal         0x600009C4
    // 0x60003A5C: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_stage_world7_9C4(rdram, ctx);
        goto after_10;
    // 0x60003A5C: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_10:
    // 0x60003A60: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x60003A64: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x60003A68: bne         $t8, $at, L_60003A84
    if (ctx->r24 != ctx->r1) {
        // 0x60003A6C: addiu       $a0, $zero, 0x6
        ctx->r4 = ADD32(0, 0X6);
            goto L_60003A84;
    }
    // 0x60003A6C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x60003A70: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x60003A74: jal         0x60000E68
    // 0x60003A78: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world7_E68(rdram, ctx);
        goto after_11;
    // 0x60003A78: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_11:
    // 0x60003A7C: b           L_60003A8C
    // 0x60003A80: nop

        goto L_60003A8C;
    // 0x60003A80: nop

L_60003A84:
    // 0x60003A84: jal         0x60000E68
    // 0x60003A88: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world7_E68(rdram, ctx);
        goto after_12;
    // 0x60003A88: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_12:
L_60003A8C:
    // 0x60003A8C: jal         0x600009AC
    // 0x60003A90: nop

    ovl_stage_world7_9AC(rdram, ctx);
        goto after_13;
    // 0x60003A90: nop

    after_13:
    // 0x60003A94: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x60003A98: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x60003A9C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x60003AA0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x60003AA4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x60003AA8: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x60003AAC: jr          $ra
    // 0x60003AB0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x60003AB0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_stage_world7_3AB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003AB4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x60003AB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003ABC: jal         0x60000C1C
    // 0x60003AC0: nop

    ovl_stage_world7_C1C(rdram, ctx);
        goto after_0;
    // 0x60003AC0: nop

    after_0:
    // 0x60003AC4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x60003AC8: jal         0x60000244
    // 0x60003ACC: addiu       $a0, $zero, 0x1CB
    ctx->r4 = ADD32(0, 0X1CB);
    ovl_stage_world7_244(rdram, ctx);
        goto after_1;
    // 0x60003ACC: addiu       $a0, $zero, 0x1CB
    ctx->r4 = ADD32(0, 0X1CB);
    after_1:
    // 0x60003AD0: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003AD4: addiu       $a0, $a0, 0x3984
    ctx->r4 = ADD32(ctx->r4, 0X3984);
    // 0x60003AD8: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60003ADC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60003AE0: jal         0x60000994
    // 0x60003AE4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world7_994(rdram, ctx);
        goto after_2;
    // 0x60003AE4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x60003AE8: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x60003AEC: lw          $v1, 0x1C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X1C);
    // 0x60003AF0: lw          $t7, 0xC($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XC);
    // 0x60003AF4: nop

    // 0x60003AF8: sw          $t7, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r15;
    // 0x60003AFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003B00: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x60003B04: jr          $ra
    // 0x60003B08: nop

    return;
    // 0x60003B08: nop

;}
RECOMP_FUNC void ovl_stage_world7_3B0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003B0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60003B10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003B14: jal         0x60000BB0
    // 0x60003B18: addiu       $a0, $zero, 0x105
    ctx->r4 = ADD32(0, 0X105);
    ovl_stage_world7_BB0(rdram, ctx);
        goto after_0;
    // 0x60003B18: addiu       $a0, $zero, 0x105
    ctx->r4 = ADD32(0, 0X105);
    after_0:
    // 0x60003B1C: bne         $v0, $zero, L_60003B38
    if (ctx->r2 != 0) {
        // 0x60003B20: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003B38;
    }
    // 0x60003B20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003B24: jal         0x60000A60
    // 0x60003B28: addiu       $a0, $zero, 0xA93
    ctx->r4 = ADD32(0, 0XA93);
    ovl_stage_world7_A60(rdram, ctx);
        goto after_1;
    // 0x60003B28: addiu       $a0, $zero, 0xA93
    ctx->r4 = ADD32(0, 0XA93);
    after_1:
    // 0x60003B2C: jal         0x60000B98
    // 0x60003B30: addiu       $a0, $zero, 0x105
    ctx->r4 = ADD32(0, 0X105);
    ovl_stage_world7_B98(rdram, ctx);
        goto after_2;
    // 0x60003B30: addiu       $a0, $zero, 0x105
    ctx->r4 = ADD32(0, 0X105);
    after_2:
    // 0x60003B34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003B38:
    // 0x60003B38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60003B3C: jr          $ra
    // 0x60003B40: nop

    return;
    // 0x60003B40: nop

;}
RECOMP_FUNC void ovl_stage_world7_3B44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003B44: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x60003B48: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x60003B4C: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x60003B50: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x60003B54: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x60003B58: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x60003B5C: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x60003B60: jal         0x60000C1C
    // 0x60003B64: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    ovl_stage_world7_C1C(rdram, ctx);
        goto after_0;
    // 0x60003B64: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x60003B68: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x60003B6C: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x60003B70: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x60003B74: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x60003B78: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x60003B7C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x60003B80: jal         0x60000E68
    // 0x60003B84: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world7_E68(rdram, ctx);
        goto after_1;
    // 0x60003B84: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x60003B88: jal         0x600009C4
    // 0x60003B8C: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_stage_world7_9C4(rdram, ctx);
        goto after_2;
    // 0x60003B8C: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_2:
    // 0x60003B90: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60003B94: jal         0x60002F94
    // 0x60003B98: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world7_2F94(rdram, ctx);
        goto after_3;
    // 0x60003B98: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x60003B9C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60003BA0: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    // 0x60003BA4: jal         0x60003004
    // 0x60003BA8: lui         $a2, 0x42DC
    ctx->r6 = S32(0X42DC << 16);
    ovl_stage_world7_3004(rdram, ctx);
        goto after_4;
    // 0x60003BA8: lui         $a2, 0x42DC
    ctx->r6 = S32(0X42DC << 16);
    after_4:
    // 0x60003BAC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60003BB0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x60003BB4: jal         0x60003004
    // 0x60003BB8: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    ovl_stage_world7_3004(rdram, ctx);
        goto after_5;
    // 0x60003BB8: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    after_5:
    // 0x60003BBC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x60003BC0: jal         0x60000E68
    // 0x60003BC4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world7_E68(rdram, ctx);
        goto after_6;
    // 0x60003BC4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x60003BC8: jal         0x600009C4
    // 0x60003BCC: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_stage_world7_9C4(rdram, ctx);
        goto after_7;
    // 0x60003BCC: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_7:
    // 0x60003BD0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60003BD4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x60003BD8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x60003BDC: jal         0x60000D18
    // 0x60003BE0: addiu       $a3, $zero, 0xF0
    ctx->r7 = ADD32(0, 0XF0);
    ovl_stage_world7_D18(rdram, ctx);
        goto after_8;
    // 0x60003BE0: addiu       $a3, $zero, 0xF0
    ctx->r7 = ADD32(0, 0XF0);
    after_8:
    // 0x60003BE4: jal         0x60000244
    // 0x60003BE8: addiu       $a0, $zero, 0x1B9
    ctx->r4 = ADD32(0, 0X1B9);
    ovl_stage_world7_244(rdram, ctx);
        goto after_9;
    // 0x60003BE8: addiu       $a0, $zero, 0x1B9
    ctx->r4 = ADD32(0, 0X1B9);
    after_9:
    // 0x60003BEC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60003BF0: lwc1        $f20, 0x5A9C($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X5A9C);
    // 0x60003BF4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60003BF8: addiu       $s3, $zero, 0x78
    ctx->r19 = ADD32(0, 0X78);
    // 0x60003BFC: addiu       $s2, $sp, 0x40
    ctx->r18 = ADD32(ctx->r29, 0X40);
    // 0x60003C00: addiu       $s1, $sp, 0x58
    ctx->r17 = ADD32(ctx->r29, 0X58);
L_60003C04:
    // 0x60003C04: jal         0x60000DE4
    // 0x60003C08: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world7_DE4(rdram, ctx);
        goto after_10;
    // 0x60003C08: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_10:
    // 0x60003C0C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60003C10: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x60003C14: jal         0x600006C4
    // 0x60003C18: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world7_6C4(rdram, ctx);
        goto after_11;
    // 0x60003C18: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_11:
    // 0x60003C1C: jal         0x60000E74
    // 0x60003C20: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_stage_world7_E74(rdram, ctx);
        goto after_12;
    // 0x60003C20: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_12:
    // 0x60003C24: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60003C28: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x60003C2C: jal         0x600006C4
    // 0x60003C30: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    ovl_stage_world7_6C4(rdram, ctx);
        goto after_13;
    // 0x60003C30: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_13:
    // 0x60003C34: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x60003C38: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x60003C3C: add.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f20.fl;
    // 0x60003C40: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60003C44: add.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f20.fl;
    // 0x60003C48: swc1        $f6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f6.u32l;
    // 0x60003C4C: jal         0x60000DE4
    // 0x60003C50: swc1        $f10, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f10.u32l;
    ovl_stage_world7_DE4(rdram, ctx);
        goto after_14;
    // 0x60003C50: swc1        $f10, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f10.u32l;
    after_14:
    // 0x60003C54: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60003C58: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x60003C5C: jal         0x600006C4
    // 0x60003C60: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world7_6C4(rdram, ctx);
        goto after_15;
    // 0x60003C60: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_15:
    // 0x60003C64: jal         0x60000E74
    // 0x60003C68: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_stage_world7_E74(rdram, ctx);
        goto after_16;
    // 0x60003C68: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_16:
    // 0x60003C6C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60003C70: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x60003C74: jal         0x600006C4
    // 0x60003C78: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    ovl_stage_world7_6C4(rdram, ctx);
        goto after_17;
    // 0x60003C78: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_17:
    // 0x60003C7C: jal         0x600009D0
    // 0x60003C80: nop

    ovl_stage_world7_9D0(rdram, ctx);
        goto after_18;
    // 0x60003C80: nop

    after_18:
    // 0x60003C84: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60003C88: bne         $s0, $s3, L_60003C04
    if (ctx->r16 != ctx->r19) {
        // 0x60003C8C: nop
    
            goto L_60003C04;
    }
    // 0x60003C8C: nop

    // 0x60003C90: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x60003C94: lui         $at, 0xFFFE
    ctx->r1 = S32(0XFFFE << 16);
    // 0x60003C98: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x60003C9C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x60003CA0: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x60003CA4: addiu       $a0, $zero, 0x8B1
    ctx->r4 = ADD32(0, 0X8B1);
    // 0x60003CA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60003CAC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60003CB0: jal         0x60000C10
    // 0x60003CB4: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    ovl_stage_world7_C10(rdram, ctx);
        goto after_19;
    // 0x60003CB4: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    after_19:
    // 0x60003CB8: jal         0x600009AC
    // 0x60003CBC: nop

    ovl_stage_world7_9AC(rdram, ctx);
        goto after_20;
    // 0x60003CBC: nop

    after_20:
    // 0x60003CC0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x60003CC4: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x60003CC8: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x60003CCC: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x60003CD0: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x60003CD4: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x60003CD8: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x60003CDC: jr          $ra
    // 0x60003CE0: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x60003CE0: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void ovl_stage_world7_3CE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003CE4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x60003CE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003CEC: jal         0x60000DE4
    // 0x60003CF0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world7_DE4(rdram, ctx);
        goto after_0;
    // 0x60003CF0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x60003CF4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60003CF8: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x60003CFC: jal         0x600006C4
    // 0x60003D00: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    ovl_stage_world7_6C4(rdram, ctx);
        goto after_1;
    // 0x60003D00: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_1:
    // 0x60003D04: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60003D08: jal         0x60000E98
    // 0x60003D0C: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    ovl_stage_world7_E98(rdram, ctx);
        goto after_2;
    // 0x60003D0C: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_2:
    // 0x60003D10: lwc1        $f2, 0x24($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X24);
    // 0x60003D14: lwc1        $f14, 0x30($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X30);
    // 0x60003D18: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x60003D1C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x60003D20: sub.s       $f0, $f14, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f14.fl - ctx->f2.fl;
    // 0x60003D24: c.le.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl <= ctx->f0.fl;
    // 0x60003D28: nop

    // 0x60003D2C: bc1f        L_60003D40
    if (!c1cs) {
        // 0x60003D30: nop
    
            goto L_60003D40;
    }
    // 0x60003D30: nop

    // 0x60003D34: sub.s       $f14, $f0, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x60003D38: b           L_60003D60
    // 0x60003D3C: swc1        $f14, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f14.u32l;
        goto L_60003D60;
    // 0x60003D3C: swc1        $f14, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f14.u32l;
L_60003D40:
    // 0x60003D40: c.lt.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl < ctx->f2.fl;
    // 0x60003D44: nop

    // 0x60003D48: bc1f        L_60003D58
    if (!c1cs) {
        // 0x60003D4C: nop
    
            goto L_60003D58;
    }
    // 0x60003D4C: nop

    // 0x60003D50: b           L_60003D5C
    // 0x60003D54: add.s       $f2, $f0, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f12.fl;
        goto L_60003D5C;
    // 0x60003D54: add.s       $f2, $f0, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f12.fl;
L_60003D58:
    // 0x60003D58: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_60003D5C:
    // 0x60003D5C: swc1        $f2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f2.u32l;
L_60003D60:
    // 0x60003D60: jal         0x60000BB0
    // 0x60003D64: addiu       $a0, $zero, 0x102
    ctx->r4 = ADD32(0, 0X102);
    ovl_stage_world7_BB0(rdram, ctx);
        goto after_3;
    // 0x60003D64: addiu       $a0, $zero, 0x102
    ctx->r4 = ADD32(0, 0X102);
    after_3:
    // 0x60003D68: bne         $v0, $zero, L_60003DE4
    if (ctx->r2 != 0) {
        // 0x60003D6C: lui         $at, 0x4334
        ctx->r1 = S32(0X4334 << 16);
            goto L_60003DE4;
    }
    // 0x60003D6C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x60003D70: lwc1        $f14, 0x30($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X30);
    // 0x60003D74: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60003D78: nop

    // 0x60003D7C: c.eq.s      $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f14.fl == ctx->f4.fl;
    // 0x60003D80: nop

    // 0x60003D84: bc1f        L_60003DE8
    if (!c1cs) {
        // 0x60003D88: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003DE8;
    }
    // 0x60003D88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003D8C: jal         0x60000B98
    // 0x60003D90: addiu       $a0, $zero, 0x102
    ctx->r4 = ADD32(0, 0X102);
    ovl_stage_world7_B98(rdram, ctx);
        goto after_4;
    // 0x60003D90: addiu       $a0, $zero, 0x102
    ctx->r4 = ADD32(0, 0X102);
    after_4:
    // 0x60003D94: jal         0x60000DE4
    // 0x60003D98: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world7_DE4(rdram, ctx);
        goto after_5;
    // 0x60003D98: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_5:
    // 0x60003D9C: jal         0x60000CC4
    // 0x60003DA0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_stage_world7_CC4(rdram, ctx);
        goto after_6;
    // 0x60003DA0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_6:
    // 0x60003DA4: jal         0x60000A6C
    // 0x60003DA8: nop

    ovl_stage_world7_A6C(rdram, ctx);
        goto after_7;
    // 0x60003DA8: nop

    after_7:
    // 0x60003DAC: jal         0x60000A90
    // 0x60003DB0: nop

    ovl_stage_world7_A90(rdram, ctx);
        goto after_8;
    // 0x60003DB0: nop

    after_8:
    // 0x60003DB4: lui         $a1, 0x409C
    ctx->r5 = S32(0X409C << 16);
    // 0x60003DB8: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x60003DBC: jal         0x6000112C
    // 0x60003DC0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world7_112C(rdram, ctx);
        goto after_9;
    // 0x60003DC0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_9:
    // 0x60003DC4: jal         0x60000814
    // 0x60003DC8: nop

    ovl_stage_world7_814(rdram, ctx);
        goto after_10;
    // 0x60003DC8: nop

    after_10:
    // 0x60003DCC: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003DD0: addiu       $a0, $a0, 0x3B44
    ctx->r4 = ADD32(ctx->r4, 0X3B44);
    // 0x60003DD4: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60003DD8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60003DDC: jal         0x60000994
    // 0x60003DE0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world7_994(rdram, ctx);
        goto after_11;
    // 0x60003DE0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_11:
L_60003DE4:
    // 0x60003DE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003DE8:
    // 0x60003DE8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x60003DEC: jr          $ra
    // 0x60003DF0: nop

    return;
    // 0x60003DF0: nop

;}
RECOMP_FUNC void ovl_stage_world7_3DF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003DF4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x60003DF8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x60003DFC: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x60003E00: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60003E04: ori         $a2, $zero, 0x8000
    ctx->r6 = 0 | 0X8000;
    // 0x60003E08: jal         0x60000DC0
    // 0x60003E0C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world7_DC0(rdram, ctx);
        goto after_0;
    // 0x60003E0C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x60003E10: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60003E14: addiu       $a2, $a2, 0x59E0
    ctx->r6 = ADD32(ctx->r6, 0X59E0);
    // 0x60003E18: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    // 0x60003E1C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60003E20: jal         0x60000DC0
    // 0x60003E24: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world7_DC0(rdram, ctx);
        goto after_1;
    // 0x60003E24: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x60003E28: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60003E2C: lui         $t6, 0x6000
    ctx->r14 = S32(0X6000 << 16);
    // 0x60003E30: addiu       $v0, $v0, 0x5C80
    ctx->r2 = ADD32(ctx->r2, 0X5C80);
    // 0x60003E34: addiu       $t6, $t6, 0x59DC
    ctx->r14 = ADD32(ctx->r14, 0X59DC);
    // 0x60003E38: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x60003E3C: lw          $a2, 0x0($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X0);
    // 0x60003E40: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    // 0x60003E44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x60003E48: jal         0x60000DC0
    // 0x60003E4C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world7_DC0(rdram, ctx);
        goto after_2;
    // 0x60003E4C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x60003E50: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x60003E54: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x60003E58: ori         $a2, $zero, 0x8003
    ctx->r6 = 0 | 0X8003;
    // 0x60003E5C: jal         0x60000DC0
    // 0x60003E60: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world7_DC0(rdram, ctx);
        goto after_3;
    // 0x60003E60: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x60003E64: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60003E68: addiu       $a2, $a2, 0x59F0
    ctx->r6 = ADD32(ctx->r6, 0X59F0);
    // 0x60003E6C: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    // 0x60003E70: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x60003E74: jal         0x60000DC0
    // 0x60003E78: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world7_DC0(rdram, ctx);
        goto after_4;
    // 0x60003E78: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x60003E7C: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60003E80: lui         $t8, 0x6000
    ctx->r24 = S32(0X6000 << 16);
    // 0x60003E84: addiu       $v0, $v0, 0x5C80
    ctx->r2 = ADD32(ctx->r2, 0X5C80);
    // 0x60003E88: addiu       $t8, $t8, 0x59EC
    ctx->r24 = ADD32(ctx->r24, 0X59EC);
    // 0x60003E8C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x60003E90: lw          $a2, 0x0($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X0);
    // 0x60003E94: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    // 0x60003E98: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x60003E9C: jal         0x60000DC0
    // 0x60003EA0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world7_DC0(rdram, ctx);
        goto after_5;
    // 0x60003EA0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
    // 0x60003EA4: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x60003EA8: lui         $t0, 0x6000
    ctx->r8 = S32(0X6000 << 16);
    // 0x60003EAC: addiu       $v1, $v1, 0x5C84
    ctx->r3 = ADD32(ctx->r3, 0X5C84);
    // 0x60003EB0: addiu       $v0, $t0, 0x59FC
    ctx->r2 = ADD32(ctx->r8, 0X59FC);
    // 0x60003EB4: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x60003EB8: lw          $t1, 0x8($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X8);
    // 0x60003EBC: lw          $a3, 0x4($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X4);
    // 0x60003EC0: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x60003EC4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x60003EC8: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    // 0x60003ECC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x60003ED0: jal         0x60000DC0
    // 0x60003ED4: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    ovl_stage_world7_DC0(rdram, ctx);
        goto after_6;
    // 0x60003ED4: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_6:
    // 0x60003ED8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x60003EDC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x60003EE0: jr          $ra
    // 0x60003EE4: nop

    return;
    // 0x60003EE4: nop

;}
RECOMP_FUNC void ovl_stage_world7_3EE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003EE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60003EEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003EF0: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x60003EF4: jal         0x60000E80
    // 0x60003EF8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world7_E80(rdram, ctx);
        goto after_0;
    // 0x60003EF8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x60003EFC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x60003F00: jal         0x60000E80
    // 0x60003F04: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_stage_world7_E80(rdram, ctx);
        goto after_1;
    // 0x60003F04: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x60003F08: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x60003F0C: jal         0x60000E80
    // 0x60003F10: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    ovl_stage_world7_E80(rdram, ctx);
        goto after_2;
    // 0x60003F10: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_2:
    // 0x60003F14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003F18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60003F1C: jr          $ra
    // 0x60003F20: nop

    return;
    // 0x60003F20: nop

;}
RECOMP_FUNC void ovl_stage_world7_3F24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003F24: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x60003F28: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x60003F2C: jal         0x60000C1C
    // 0x60003F30: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    ovl_stage_world7_C1C(rdram, ctx);
        goto after_0;
    // 0x60003F30: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x60003F34: lbu         $t6, 0x20($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X20);
    // 0x60003F38: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x60003F3C: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x60003F40: lw          $t7, 0xC($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XC);
    // 0x60003F44: nop

    // 0x60003F48: bne         $t7, $zero, L_60004064
    if (ctx->r15 != 0) {
        // 0x60003F4C: nop
    
            goto L_60004064;
    }
    // 0x60003F4C: nop

    // 0x60003F50: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x60003F54: nop

    // 0x60003F58: andi        $t9, $t8, 0x800
    ctx->r25 = ctx->r24 & 0X800;
    // 0x60003F5C: bne         $t9, $zero, L_60004064
    if (ctx->r25 != 0) {
        // 0x60003F60: nop
    
            goto L_60004064;
    }
    // 0x60003F60: nop

    // 0x60003F64: jal         0x60000BB0
    // 0x60003F68: addiu       $a0, $zero, 0x9A
    ctx->r4 = ADD32(0, 0X9A);
    ovl_stage_world7_BB0(rdram, ctx);
        goto after_1;
    // 0x60003F68: addiu       $a0, $zero, 0x9A
    ctx->r4 = ADD32(0, 0X9A);
    after_1:
    // 0x60003F6C: bne         $v0, $zero, L_60003FFC
    if (ctx->r2 != 0) {
        // 0x60003F70: nop
    
            goto L_60003FFC;
    }
    // 0x60003F70: nop

    // 0x60003F74: jal         0x60000BB0
    // 0x60003F78: addiu       $a0, $zero, 0xFC
    ctx->r4 = ADD32(0, 0XFC);
    ovl_stage_world7_BB0(rdram, ctx);
        goto after_2;
    // 0x60003F78: addiu       $a0, $zero, 0xFC
    ctx->r4 = ADD32(0, 0XFC);
    after_2:
    // 0x60003F7C: bne         $v0, $zero, L_60003F9C
    if (ctx->r2 != 0) {
        // 0x60003F80: nop
    
            goto L_60003F9C;
    }
    // 0x60003F80: nop

    // 0x60003F84: jal         0x60000B98
    // 0x60003F88: addiu       $a0, $zero, 0xFC
    ctx->r4 = ADD32(0, 0XFC);
    ovl_stage_world7_B98(rdram, ctx);
        goto after_3;
    // 0x60003F88: addiu       $a0, $zero, 0xFC
    ctx->r4 = ADD32(0, 0XFC);
    after_3:
    // 0x60003F8C: jal         0x60000B38
    // 0x60003F90: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_stage_world7_B38(rdram, ctx);
        goto after_4;
    // 0x60003F90: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_4:
    // 0x60003F94: jal         0x60000B5C
    // 0x60003F98: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_stage_world7_B5C(rdram, ctx);
        goto after_5;
    // 0x60003F98: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_5:
L_60003F9C:
    // 0x60003F9C: jal         0x60000B98
    // 0x60003FA0: addiu       $a0, $zero, 0x9A
    ctx->r4 = ADD32(0, 0X9A);
    ovl_stage_world7_B98(rdram, ctx);
        goto after_6;
    // 0x60003FA0: addiu       $a0, $zero, 0x9A
    ctx->r4 = ADD32(0, 0X9A);
    after_6:
    // 0x60003FA4: jal         0x60000EEC
    // 0x60003FA8: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    ovl_stage_world7_EEC(rdram, ctx);
        goto after_7;
    // 0x60003FA8: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_7:
    // 0x60003FAC: jal         0x60000A60
    // 0x60003FB0: addiu       $a0, $zero, 0xAEF
    ctx->r4 = ADD32(0, 0XAEF);
    ovl_stage_world7_A60(rdram, ctx);
        goto after_8;
    // 0x60003FB0: addiu       $a0, $zero, 0xAEF
    ctx->r4 = ADD32(0, 0XAEF);
    after_8:
    // 0x60003FB4: jal         0x600009D0
    // 0x60003FB8: nop

    ovl_stage_world7_9D0(rdram, ctx);
        goto after_9;
    // 0x60003FB8: nop

    after_9:
    // 0x60003FBC: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x60003FC0: nop

    // 0x60003FC4: andi        $t1, $t0, 0x800
    ctx->r9 = ctx->r8 & 0X800;
    // 0x60003FC8: beq         $t1, $zero, L_60003FEC
    if (ctx->r9 == 0) {
        // 0x60003FCC: nop
    
            goto L_60003FEC;
    }
    // 0x60003FCC: nop

L_60003FD0:
    // 0x60003FD0: jal         0x600009D0
    // 0x60003FD4: nop

    ovl_stage_world7_9D0(rdram, ctx);
        goto after_10;
    // 0x60003FD4: nop

    after_10:
    // 0x60003FD8: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x60003FDC: nop

    // 0x60003FE0: andi        $t3, $t2, 0x800
    ctx->r11 = ctx->r10 & 0X800;
    // 0x60003FE4: bne         $t3, $zero, L_60003FD0
    if (ctx->r11 != 0) {
        // 0x60003FE8: nop
    
            goto L_60003FD0;
    }
    // 0x60003FE8: nop

L_60003FEC:
    // 0x60003FEC: jal         0x600009C4
    // 0x60003FF0: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    ovl_stage_world7_9C4(rdram, ctx);
        goto after_11;
    // 0x60003FF0: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_11:
    // 0x60003FF4: b           L_60004004
    // 0x60003FF8: nop

        goto L_60004004;
    // 0x60003FF8: nop

L_60003FFC:
    // 0x60003FFC: jal         0x60003EE8
    // 0x60004000: nop

    ovl_stage_world7_3EE8(rdram, ctx);
        goto after_12;
    // 0x60004000: nop

    after_12:
L_60004004:
    // 0x60004004: jal         0x60000EE0
    // 0x60004008: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world7_EE0(rdram, ctx);
        goto after_13;
    // 0x60004008: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_13:
    // 0x6000400C: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x60004010: nop

    // 0x60004014: beq         $v0, $t4, L_6000406C
    if (ctx->r2 == ctx->r12) {
        // 0x60004018: nop
    
            goto L_6000406C;
    }
    // 0x60004018: nop

    // 0x6000401C: jal         0x60000A60
    // 0x60004020: addiu       $a0, $zero, 0xAF7
    ctx->r4 = ADD32(0, 0XAF7);
    ovl_stage_world7_A60(rdram, ctx);
        goto after_14;
    // 0x60004020: addiu       $a0, $zero, 0xAF7
    ctx->r4 = ADD32(0, 0XAF7);
    after_14:
    // 0x60004024: jal         0x600009D0
    // 0x60004028: nop

    ovl_stage_world7_9D0(rdram, ctx);
        goto after_15;
    // 0x60004028: nop

    after_15:
    // 0x6000402C: lw          $t5, 0x0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X0);
    // 0x60004030: nop

    // 0x60004034: andi        $t6, $t5, 0x800
    ctx->r14 = ctx->r13 & 0X800;
    // 0x60004038: beq         $t6, $zero, L_6000406C
    if (ctx->r14 == 0) {
        // 0x6000403C: nop
    
            goto L_6000406C;
    }
    // 0x6000403C: nop

L_60004040:
    // 0x60004040: jal         0x600009D0
    // 0x60004044: nop

    ovl_stage_world7_9D0(rdram, ctx);
        goto after_16;
    // 0x60004044: nop

    after_16:
    // 0x60004048: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x6000404C: nop

    // 0x60004050: andi        $t8, $t7, 0x800
    ctx->r24 = ctx->r15 & 0X800;
    // 0x60004054: bne         $t8, $zero, L_60004040
    if (ctx->r24 != 0) {
        // 0x60004058: nop
    
            goto L_60004040;
    }
    // 0x60004058: nop

    // 0x6000405C: b           L_6000406C
    // 0x60004060: nop

        goto L_6000406C;
    // 0x60004060: nop

L_60004064:
    // 0x60004064: jal         0x60003EE8
    // 0x60004068: nop

    ovl_stage_world7_3EE8(rdram, ctx);
        goto after_17;
    // 0x60004068: nop

    after_17:
L_6000406C:
    // 0x6000406C: jal         0x600009AC
    // 0x60004070: nop

    ovl_stage_world7_9AC(rdram, ctx);
        goto after_18;
    // 0x60004070: nop

    after_18:
    // 0x60004074: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x60004078: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x6000407C: jr          $ra
    // 0x60004080: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x60004080: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_stage_world7_4084(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004084: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60004088: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x6000408C: jal         0x60000C1C
    // 0x60004090: nop

    ovl_stage_world7_C1C(rdram, ctx);
        goto after_0;
    // 0x60004090: nop

    after_0:
    // 0x60004094: lw          $t6, 0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC);
    // 0x60004098: nop

    // 0x6000409C: bne         $t6, $zero, L_600040BC
    if (ctx->r14 != 0) {
        // 0x600040A0: nop
    
            goto L_600040BC;
    }
    // 0x600040A0: nop

    // 0x600040A4: jal         0x60000BB0
    // 0x600040A8: addiu       $a0, $zero, 0x86
    ctx->r4 = ADD32(0, 0X86);
    ovl_stage_world7_BB0(rdram, ctx);
        goto after_1;
    // 0x600040A8: addiu       $a0, $zero, 0x86
    ctx->r4 = ADD32(0, 0X86);
    after_1:
    // 0x600040AC: beq         $v0, $zero, L_600040BC
    if (ctx->r2 == 0) {
        // 0x600040B0: nop
    
            goto L_600040BC;
    }
    // 0x600040B0: nop

    // 0x600040B4: jal         0x60000F50
    // 0x600040B8: nop

    ovl_stage_world7_F50(rdram, ctx);
        goto after_2;
    // 0x600040B8: nop

    after_2:
L_600040BC:
    // 0x600040BC: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600040C0: addiu       $a0, $a0, 0x3F24
    ctx->r4 = ADD32(ctx->r4, 0X3F24);
    // 0x600040C4: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x600040C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x600040CC: jal         0x60000994
    // 0x600040D0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world7_994(rdram, ctx);
        goto after_3;
    // 0x600040D0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x600040D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600040D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600040DC: jr          $ra
    // 0x600040E0: nop

    return;
    // 0x600040E0: nop

;}
RECOMP_FUNC void ovl_stage_world7_40E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600040E4: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x600040E8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x600040EC: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x600040F0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x600040F4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x600040F8: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x600040FC: jal         0x60000C1C
    // 0x60004100: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    ovl_stage_world7_C1C(rdram, ctx);
        goto after_0;
    // 0x60004100: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x60004104: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x60004108: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x6000410C: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x60004110: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x60004114: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x60004118: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x6000411C: jal         0x60002F94
    // 0x60004120: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world7_2F94(rdram, ctx);
        goto after_1;
    // 0x60004120: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x60004124: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x60004128: jal         0x60000E68
    // 0x6000412C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world7_E68(rdram, ctx);
        goto after_2;
    // 0x6000412C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x60004130: jal         0x600009C4
    // 0x60004134: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_stage_world7_9C4(rdram, ctx);
        goto after_3;
    // 0x60004134: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_3:
    // 0x60004138: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x6000413C: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    // 0x60004140: jal         0x60003004
    // 0x60004144: lui         $a2, 0x42DC
    ctx->r6 = S32(0X42DC << 16);
    ovl_stage_world7_3004(rdram, ctx);
        goto after_4;
    // 0x60004144: lui         $a2, 0x42DC
    ctx->r6 = S32(0X42DC << 16);
    after_4:
    // 0x60004148: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x6000414C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x60004150: jal         0x60003004
    // 0x60004154: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    ovl_stage_world7_3004(rdram, ctx);
        goto after_5;
    // 0x60004154: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    after_5:
    // 0x60004158: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x6000415C: jal         0x60000E68
    // 0x60004160: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world7_E68(rdram, ctx);
        goto after_6;
    // 0x60004160: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x60004164: jal         0x600009C4
    // 0x60004168: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_stage_world7_9C4(rdram, ctx);
        goto after_7;
    // 0x60004168: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_7:
    // 0x6000416C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60004170: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x60004174: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x60004178: jal         0x60000D18
    // 0x6000417C: addiu       $a3, $zero, 0x78
    ctx->r7 = ADD32(0, 0X78);
    ovl_stage_world7_D18(rdram, ctx);
        goto after_8;
    // 0x6000417C: addiu       $a3, $zero, 0x78
    ctx->r7 = ADD32(0, 0X78);
    after_8:
    // 0x60004180: jal         0x60000244
    // 0x60004184: addiu       $a0, $zero, 0x1B9
    ctx->r4 = ADD32(0, 0X1B9);
    ovl_stage_world7_244(rdram, ctx);
        goto after_9;
    // 0x60004184: addiu       $a0, $zero, 0x1B9
    ctx->r4 = ADD32(0, 0X1B9);
    after_9:
    // 0x60004188: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000418C: lwc1        $f20, 0x5AA0($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X5AA0);
    // 0x60004190: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x60004194: addiu       $s2, $zero, 0x3C
    ctx->r18 = ADD32(0, 0X3C);
    // 0x60004198: addiu       $s0, $sp, 0x40
    ctx->r16 = ADD32(ctx->r29, 0X40);
L_6000419C:
    // 0x6000419C: jal         0x60000DE4
    // 0x600041A0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world7_DE4(rdram, ctx);
        goto after_10;
    // 0x600041A0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_10:
    // 0x600041A4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600041A8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x600041AC: jal         0x600006C4
    // 0x600041B0: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_stage_world7_6C4(rdram, ctx);
        goto after_11;
    // 0x600041B0: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_11:
    // 0x600041B4: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x600041B8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600041BC: sub.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f20.fl;
    // 0x600041C0: jal         0x60000DE4
    // 0x600041C4: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    ovl_stage_world7_DE4(rdram, ctx);
        goto after_12;
    // 0x600041C4: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    after_12:
    // 0x600041C8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600041CC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x600041D0: jal         0x600006C4
    // 0x600041D4: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_stage_world7_6C4(rdram, ctx);
        goto after_13;
    // 0x600041D4: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_13:
    // 0x600041D8: jal         0x60000E74
    // 0x600041DC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world7_E74(rdram, ctx);
        goto after_14;
    // 0x600041DC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_14:
    // 0x600041E0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600041E4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x600041E8: jal         0x600006C4
    // 0x600041EC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_stage_world7_6C4(rdram, ctx);
        goto after_15;
    // 0x600041EC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_15:
    // 0x600041F0: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x600041F4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x600041F8: sub.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f20.fl;
    // 0x600041FC: jal         0x60000E74
    // 0x60004200: swc1        $f10, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f10.u32l;
    ovl_stage_world7_E74(rdram, ctx);
        goto after_16;
    // 0x60004200: swc1        $f10, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f10.u32l;
    after_16:
    // 0x60004204: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60004208: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x6000420C: jal         0x600006C4
    // 0x60004210: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_stage_world7_6C4(rdram, ctx);
        goto after_17;
    // 0x60004210: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_17:
    // 0x60004214: jal         0x600009D0
    // 0x60004218: nop

    ovl_stage_world7_9D0(rdram, ctx);
        goto after_18;
    // 0x60004218: nop

    after_18:
    // 0x6000421C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x60004220: bne         $s1, $s2, L_6000419C
    if (ctx->r17 != ctx->r18) {
        // 0x60004224: nop
    
            goto L_6000419C;
    }
    // 0x60004224: nop

    // 0x60004228: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x6000422C: lui         $at, 0xFFFE
    ctx->r1 = S32(0XFFFE << 16);
    // 0x60004230: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x60004234: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x60004238: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x6000423C: addiu       $a0, $zero, 0x898
    ctx->r4 = ADD32(0, 0X898);
    // 0x60004240: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x60004244: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60004248: jal         0x60000C10
    // 0x6000424C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    ovl_stage_world7_C10(rdram, ctx);
        goto after_19;
    // 0x6000424C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    after_19:
    // 0x60004250: jal         0x600009AC
    // 0x60004254: nop

    ovl_stage_world7_9AC(rdram, ctx);
        goto after_20;
    // 0x60004254: nop

    after_20:
    // 0x60004258: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x6000425C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x60004260: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x60004264: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x60004268: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x6000426C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x60004270: jr          $ra
    // 0x60004274: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x60004274: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_stage_world7_4278(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004278: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x6000427C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60004280: jal         0x60000DE4
    // 0x60004284: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world7_DE4(rdram, ctx);
        goto after_0;
    // 0x60004284: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x60004288: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x6000428C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x60004290: jal         0x600006C4
    // 0x60004294: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    ovl_stage_world7_6C4(rdram, ctx);
        goto after_1;
    // 0x60004294: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_1:
    // 0x60004298: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x6000429C: jal         0x60000E98
    // 0x600042A0: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    ovl_stage_world7_E98(rdram, ctx);
        goto after_2;
    // 0x600042A0: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_2:
    // 0x600042A4: lwc1        $f2, 0x24($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X24);
    // 0x600042A8: lwc1        $f14, 0x30($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X30);
    // 0x600042AC: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x600042B0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x600042B4: sub.s       $f0, $f14, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f14.fl - ctx->f2.fl;
    // 0x600042B8: c.le.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl <= ctx->f0.fl;
    // 0x600042BC: nop

    // 0x600042C0: bc1f        L_600042D4
    if (!c1cs) {
        // 0x600042C4: nop
    
            goto L_600042D4;
    }
    // 0x600042C4: nop

    // 0x600042C8: sub.s       $f14, $f0, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x600042CC: b           L_600042F4
    // 0x600042D0: swc1        $f14, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f14.u32l;
        goto L_600042F4;
    // 0x600042D0: swc1        $f14, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f14.u32l;
L_600042D4:
    // 0x600042D4: c.lt.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl < ctx->f2.fl;
    // 0x600042D8: nop

    // 0x600042DC: bc1f        L_600042EC
    if (!c1cs) {
        // 0x600042E0: nop
    
            goto L_600042EC;
    }
    // 0x600042E0: nop

    // 0x600042E4: b           L_600042F0
    // 0x600042E8: add.s       $f2, $f0, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f12.fl;
        goto L_600042F0;
    // 0x600042E8: add.s       $f2, $f0, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f12.fl;
L_600042EC:
    // 0x600042EC: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_600042F0:
    // 0x600042F0: swc1        $f2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f2.u32l;
L_600042F4:
    // 0x600042F4: jal         0x60000BB0
    // 0x600042F8: addiu       $a0, $zero, 0x103
    ctx->r4 = ADD32(0, 0X103);
    ovl_stage_world7_BB0(rdram, ctx);
        goto after_3;
    // 0x600042F8: addiu       $a0, $zero, 0x103
    ctx->r4 = ADD32(0, 0X103);
    after_3:
    // 0x600042FC: beq         $v0, $zero, L_60004378
    if (ctx->r2 == 0) {
        // 0x60004300: lui         $at, 0x4334
        ctx->r1 = S32(0X4334 << 16);
            goto L_60004378;
    }
    // 0x60004300: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x60004304: lwc1        $f14, 0x30($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X30);
    // 0x60004308: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x6000430C: nop

    // 0x60004310: c.eq.s      $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f14.fl == ctx->f4.fl;
    // 0x60004314: nop

    // 0x60004318: bc1f        L_6000437C
    if (!c1cs) {
        // 0x6000431C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_6000437C;
    }
    // 0x6000431C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004320: jal         0x60000DE4
    // 0x60004324: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world7_DE4(rdram, ctx);
        goto after_4;
    // 0x60004324: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_4:
    // 0x60004328: jal         0x60000CC4
    // 0x6000432C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_stage_world7_CC4(rdram, ctx);
        goto after_5;
    // 0x6000432C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_5:
    // 0x60004330: jal         0x60000A90
    // 0x60004334: nop

    ovl_stage_world7_A90(rdram, ctx);
        goto after_6;
    // 0x60004334: nop

    after_6:
    // 0x60004338: lui         $a1, 0x409C
    ctx->r5 = S32(0X409C << 16);
    // 0x6000433C: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x60004340: jal         0x6000112C
    // 0x60004344: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world7_112C(rdram, ctx);
        goto after_7;
    // 0x60004344: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_7:
    // 0x60004348: jal         0x60000A6C
    // 0x6000434C: nop

    ovl_stage_world7_A6C(rdram, ctx);
        goto after_8;
    // 0x6000434C: nop

    after_8:
    // 0x60004350: jal         0x60000814
    // 0x60004354: nop

    ovl_stage_world7_814(rdram, ctx);
        goto after_9;
    // 0x60004354: nop

    after_9:
    // 0x60004358: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x6000435C: addiu       $a0, $a0, 0x40E4
    ctx->r4 = ADD32(ctx->r4, 0X40E4);
    // 0x60004360: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60004364: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60004368: jal         0x60000994
    // 0x6000436C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world7_994(rdram, ctx);
        goto after_10;
    // 0x6000436C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_10:
    // 0x60004370: jal         0x60000BA4
    // 0x60004374: addiu       $a0, $zero, 0x103
    ctx->r4 = ADD32(0, 0X103);
    ovl_stage_world7_BA4(rdram, ctx);
        goto after_11;
    // 0x60004374: addiu       $a0, $zero, 0x103
    ctx->r4 = ADD32(0, 0X103);
    after_11:
L_60004378:
    // 0x60004378: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000437C:
    // 0x6000437C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x60004380: jr          $ra
    // 0x60004384: nop

    return;
    // 0x60004384: nop

;}
RECOMP_FUNC void ovl_stage_world7_4388(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004388: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x6000438C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x60004390: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x60004394: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x60004398: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x6000439C: jal         0x60000C1C
    // 0x600043A0: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    ovl_stage_world7_C1C(rdram, ctx);
        goto after_0;
    // 0x600043A0: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x600043A4: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x600043A8: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x600043AC: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x600043B0: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x600043B4: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x600043B8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600043BC: jal         0x60002F94
    // 0x600043C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world7_2F94(rdram, ctx);
        goto after_1;
    // 0x600043C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x600043C4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x600043C8: jal         0x60002F94
    // 0x600043CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world7_2F94(rdram, ctx);
        goto after_2;
    // 0x600043CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x600043D0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x600043D4: jal         0x60001028
    // 0x600043D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world7_1028(rdram, ctx);
        goto after_3;
    // 0x600043D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x600043DC: jal         0x60000DE4
    // 0x600043E0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world7_DE4(rdram, ctx);
        goto after_4;
    // 0x600043E0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_4:
    // 0x600043E4: addiu       $s1, $sp, 0x38
    ctx->r17 = ADD32(ctx->r29, 0X38);
    // 0x600043E8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x600043EC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600043F0: jal         0x600006C4
    // 0x600043F4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_stage_world7_6C4(rdram, ctx);
        goto after_5;
    // 0x600043F4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_5:
    // 0x600043F8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600043FC: lwc1        $f0, 0x5AA4($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X5AA4);
    // 0x60004400: lui         $at, 0xC37A
    ctx->r1 = S32(0XC37A << 16);
    // 0x60004404: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60004408: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x6000440C: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x60004410: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x60004414: jal         0x60000DE4
    // 0x60004418: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    ovl_stage_world7_DE4(rdram, ctx);
        goto after_6;
    // 0x60004418: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    after_6:
    // 0x6000441C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60004420: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x60004424: jal         0x600006C4
    // 0x60004428: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world7_6C4(rdram, ctx);
        goto after_7;
    // 0x60004428: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_7:
    // 0x6000442C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60004430: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x60004434: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x60004438: jal         0x60000D18
    // 0x6000443C: addiu       $a3, $zero, 0x78
    ctx->r7 = ADD32(0, 0X78);
    ovl_stage_world7_D18(rdram, ctx);
        goto after_8;
    // 0x6000443C: addiu       $a3, $zero, 0x78
    ctx->r7 = ADD32(0, 0X78);
    after_8:
    // 0x60004440: jal         0x60000244
    // 0x60004444: addiu       $a0, $zero, 0x1B9
    ctx->r4 = ADD32(0, 0X1B9);
    ovl_stage_world7_244(rdram, ctx);
        goto after_9;
    // 0x60004444: addiu       $a0, $zero, 0x1B9
    ctx->r4 = ADD32(0, 0X1B9);
    after_9:
    // 0x60004448: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000444C: lwc1        $f20, 0x5AA8($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X5AA8);
    // 0x60004450: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_60004454:
    // 0x60004454: jal         0x60000DE4
    // 0x60004458: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world7_DE4(rdram, ctx);
        goto after_10;
    // 0x60004458: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_10:
    // 0x6000445C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60004460: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x60004464: jal         0x600006C4
    // 0x60004468: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world7_6C4(rdram, ctx);
        goto after_11;
    // 0x60004468: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_11:
    // 0x6000446C: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x60004470: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60004474: add.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f20.fl;
    // 0x60004478: jal         0x60000DE4
    // 0x6000447C: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    ovl_stage_world7_DE4(rdram, ctx);
        goto after_12;
    // 0x6000447C: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    after_12:
    // 0x60004480: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60004484: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x60004488: jal         0x600006C4
    // 0x6000448C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world7_6C4(rdram, ctx);
        goto after_13;
    // 0x6000448C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_13:
    // 0x60004490: jal         0x60000E74
    // 0x60004494: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world7_E74(rdram, ctx);
        goto after_14;
    // 0x60004494: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_14:
    // 0x60004498: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x6000449C: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x600044A0: jal         0x600006C4
    // 0x600044A4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world7_6C4(rdram, ctx);
        goto after_15;
    // 0x600044A4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_15:
    // 0x600044A8: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x600044AC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x600044B0: jal         0x60000E74
    // 0x600044B4: swc1        $f20, 0x30($t8)
    MEM_W(0X30, ctx->r24) = ctx->f20.u32l;
    ovl_stage_world7_E74(rdram, ctx);
        goto after_16;
    // 0x600044B4: swc1        $f20, 0x30($t8)
    MEM_W(0X30, ctx->r24) = ctx->f20.u32l;
    after_16:
    // 0x600044B8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600044BC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x600044C0: jal         0x600006C4
    // 0x600044C4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world7_6C4(rdram, ctx);
        goto after_17;
    // 0x600044C4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_17:
    // 0x600044C8: jal         0x600009D0
    // 0x600044CC: nop

    ovl_stage_world7_9D0(rdram, ctx);
        goto after_18;
    // 0x600044CC: nop

    after_18:
    // 0x600044D0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x600044D4: slti        $at, $s0, 0x3C
    ctx->r1 = SIGNED(ctx->r16) < 0X3C ? 1 : 0;
    // 0x600044D8: bne         $at, $zero, L_60004454
    if (ctx->r1 != 0) {
        // 0x600044DC: nop
    
            goto L_60004454;
    }
    // 0x600044DC: nop

    // 0x600044E0: jal         0x60000244
    // 0x600044E4: addiu       $a0, $zero, 0x1C6
    ctx->r4 = ADD32(0, 0X1C6);
    ovl_stage_world7_244(rdram, ctx);
        goto after_19;
    // 0x600044E4: addiu       $a0, $zero, 0x1C6
    ctx->r4 = ADD32(0, 0X1C6);
    after_19:
    // 0x600044E8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600044EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x600044F0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x600044F4: jal         0x60000D18
    // 0x600044F8: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    ovl_stage_world7_D18(rdram, ctx);
        goto after_20;
    // 0x600044F8: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    after_20:
    // 0x600044FC: jal         0x60000B98
    // 0x60004500: addiu       $a0, $zero, 0x103
    ctx->r4 = ADD32(0, 0X103);
    ovl_stage_world7_B98(rdram, ctx);
        goto after_21;
    // 0x60004500: addiu       $a0, $zero, 0x103
    ctx->r4 = ADD32(0, 0X103);
    after_21:
    // 0x60004504: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x60004508: jal         0x60000E68
    // 0x6000450C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world7_E68(rdram, ctx);
        goto after_22;
    // 0x6000450C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_22:
    // 0x60004510: jal         0x600009C4
    // 0x60004514: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_stage_world7_9C4(rdram, ctx);
        goto after_23;
    // 0x60004514: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_23:
    // 0x60004518: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x6000451C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x60004520: jal         0x60003004
    // 0x60004524: lui         $a2, 0x4316
    ctx->r6 = S32(0X4316 << 16);
    ovl_stage_world7_3004(rdram, ctx);
        goto after_24;
    // 0x60004524: lui         $a2, 0x4316
    ctx->r6 = S32(0X4316 << 16);
    after_24:
    // 0x60004528: jal         0x60000814
    // 0x6000452C: nop

    ovl_stage_world7_814(rdram, ctx);
        goto after_25;
    // 0x6000452C: nop

    after_25:
    // 0x60004530: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x60004534: jal         0x60001028
    // 0x60004538: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world7_1028(rdram, ctx);
        goto after_26;
    // 0x60004538: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_26:
    // 0x6000453C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x60004540: jal         0x60000E68
    // 0x60004544: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world7_E68(rdram, ctx);
        goto after_27;
    // 0x60004544: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_27:
    // 0x60004548: jal         0x600009C4
    // 0x6000454C: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_stage_world7_9C4(rdram, ctx);
        goto after_28;
    // 0x6000454C: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_28:
    // 0x60004550: jal         0x60000BB0
    // 0x60004554: addiu       $a0, $zero, 0x8E
    ctx->r4 = ADD32(0, 0X8E);
    ovl_stage_world7_BB0(rdram, ctx);
        goto after_29;
    // 0x60004554: addiu       $a0, $zero, 0x8E
    ctx->r4 = ADD32(0, 0X8E);
    after_29:
    // 0x60004558: bne         $v0, $zero, L_600045D8
    if (ctx->r2 != 0) {
        // 0x6000455C: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_600045D8;
    }
    // 0x6000455C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60004560: jal         0x60000244
    // 0x60004564: addiu       $a0, $zero, 0x1B9
    ctx->r4 = ADD32(0, 0X1B9);
    ovl_stage_world7_244(rdram, ctx);
        goto after_30;
    // 0x60004564: addiu       $a0, $zero, 0x1B9
    ctx->r4 = ADD32(0, 0X1B9);
    after_30:
    // 0x60004568: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000456C: lwc1        $f20, 0x5AAC($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X5AAC);
    // 0x60004570: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_60004574:
    // 0x60004574: jal         0x60000E74
    // 0x60004578: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world7_E74(rdram, ctx);
        goto after_31;
    // 0x60004578: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_31:
    // 0x6000457C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60004580: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x60004584: jal         0x600006C4
    // 0x60004588: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world7_6C4(rdram, ctx);
        goto after_32;
    // 0x60004588: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_32:
    // 0x6000458C: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x60004590: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x60004594: jal         0x60000E74
    // 0x60004598: swc1        $f20, 0x30($t9)
    MEM_W(0X30, ctx->r25) = ctx->f20.u32l;
    ovl_stage_world7_E74(rdram, ctx);
        goto after_33;
    // 0x60004598: swc1        $f20, 0x30($t9)
    MEM_W(0X30, ctx->r25) = ctx->f20.u32l;
    after_33:
    // 0x6000459C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600045A0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x600045A4: jal         0x600006C4
    // 0x600045A8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world7_6C4(rdram, ctx);
        goto after_34;
    // 0x600045A8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_34:
    // 0x600045AC: jal         0x600009D0
    // 0x600045B0: nop

    ovl_stage_world7_9D0(rdram, ctx);
        goto after_35;
    // 0x600045B0: nop

    after_35:
    // 0x600045B4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x600045B8: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x600045BC: bne         $s0, $at, L_60004574
    if (ctx->r16 != ctx->r1) {
        // 0x600045C0: nop
    
            goto L_60004574;
    }
    // 0x600045C0: nop

    // 0x600045C4: jal         0x60000244
    // 0x600045C8: addiu       $a0, $zero, 0x1C6
    ctx->r4 = ADD32(0, 0X1C6);
    ovl_stage_world7_244(rdram, ctx);
        goto after_36;
    // 0x600045C8: addiu       $a0, $zero, 0x1C6
    ctx->r4 = ADD32(0, 0X1C6);
    after_36:
    // 0x600045CC: jal         0x60000BA4
    // 0x600045D0: addiu       $a0, $zero, 0x103
    ctx->r4 = ADD32(0, 0X103);
    ovl_stage_world7_BA4(rdram, ctx);
        goto after_37;
    // 0x600045D0: addiu       $a0, $zero, 0x103
    ctx->r4 = ADD32(0, 0X103);
    after_37:
    // 0x600045D4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_600045D8:
    // 0x600045D8: jal         0x60002F94
    // 0x600045DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world7_2F94(rdram, ctx);
        goto after_38;
    // 0x600045DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_38:
    // 0x600045E0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600045E4: lwc1        $f20, 0x5AB0($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X5AB0);
    // 0x600045E8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600045EC: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x600045F0: jal         0x6000112C
    // 0x600045F4: nop

    ovl_stage_world7_112C(rdram, ctx);
        goto after_39;
    // 0x600045F4: nop

    after_39:
    // 0x600045F8: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x600045FC: jal         0x6000112C
    // 0x60004600: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world7_112C(rdram, ctx);
        goto after_40;
    // 0x60004600: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_40:
    // 0x60004604: jal         0x60000A78
    // 0x60004608: nop

    ovl_stage_world7_A78(rdram, ctx);
        goto after_41;
    // 0x60004608: nop

    after_41:
    // 0x6000460C: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x60004610: lui         $at, 0xFFFE
    ctx->r1 = S32(0XFFFE << 16);
    // 0x60004614: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x60004618: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x6000461C: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x60004620: addiu       $a0, $zero, 0x8E
    ctx->r4 = ADD32(0, 0X8E);
    // 0x60004624: jal         0x60000BB0
    // 0x60004628: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    ovl_stage_world7_BB0(rdram, ctx);
        goto after_42;
    // 0x60004628: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    after_42:
    // 0x6000462C: bne         $v0, $zero, L_6000463C
    if (ctx->r2 != 0) {
        // 0x60004630: nop
    
            goto L_6000463C;
    }
    // 0x60004630: nop

    // 0x60004634: jal         0x60002E84
    // 0x60004638: nop

    ovl_stage_world7_2E84(rdram, ctx);
        goto after_43;
    // 0x60004638: nop

    after_43:
L_6000463C:
    // 0x6000463C: jal         0x600009AC
    // 0x60004640: nop

    ovl_stage_world7_9AC(rdram, ctx);
        goto after_44;
    // 0x60004640: nop

    after_44:
    // 0x60004644: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x60004648: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x6000464C: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x60004650: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x60004654: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x60004658: jr          $ra
    // 0x6000465C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x6000465C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_stage_world7_4660(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004660: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60004664: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60004668: jal         0x60000C1C
    // 0x6000466C: nop

    ovl_stage_world7_C1C(rdram, ctx);
        goto after_0;
    // 0x6000466C: nop

    after_0:
    // 0x60004670: lw          $t6, 0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC);
    // 0x60004674: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x60004678: beq         $t6, $at, L_600046CC
    if (ctx->r14 == ctx->r1) {
        // 0x6000467C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600046CC;
    }
    // 0x6000467C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004680: jal         0x60000DE4
    // 0x60004684: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world7_DE4(rdram, ctx);
        goto after_1;
    // 0x60004684: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x60004688: jal         0x60000CC4
    // 0x6000468C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_stage_world7_CC4(rdram, ctx);
        goto after_2;
    // 0x6000468C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x60004690: jal         0x60000A90
    // 0x60004694: nop

    ovl_stage_world7_A90(rdram, ctx);
        goto after_3;
    // 0x60004694: nop

    after_3:
    // 0x60004698: lui         $a1, 0x409C
    ctx->r5 = S32(0X409C << 16);
    // 0x6000469C: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x600046A0: jal         0x6000112C
    // 0x600046A4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world7_112C(rdram, ctx);
        goto after_4;
    // 0x600046A4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
    // 0x600046A8: jal         0x60000A6C
    // 0x600046AC: nop

    ovl_stage_world7_A6C(rdram, ctx);
        goto after_5;
    // 0x600046AC: nop

    after_5:
    // 0x600046B0: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600046B4: addiu       $a0, $a0, 0x4388
    ctx->r4 = ADD32(ctx->r4, 0X4388);
    // 0x600046B8: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x600046BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x600046C0: jal         0x60000994
    // 0x600046C4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world7_994(rdram, ctx);
        goto after_6;
    // 0x600046C4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_6:
    // 0x600046C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600046CC:
    // 0x600046CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600046D0: jr          $ra
    // 0x600046D4: nop

    return;
    // 0x600046D4: nop

;}
RECOMP_FUNC void ovl_stage_world7_46D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600046D8: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x600046DC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x600046E0: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x600046E4: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x600046E8: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x600046EC: jal         0x60000C1C
    // 0x600046F0: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    ovl_stage_world7_C1C(rdram, ctx);
        goto after_0;
    // 0x600046F0: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x600046F4: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x600046F8: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x600046FC: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x60004700: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x60004704: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x60004708: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x6000470C: jal         0x60002F94
    // 0x60004710: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world7_2F94(rdram, ctx);
        goto after_1;
    // 0x60004710: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x60004714: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x60004718: jal         0x60002F94
    // 0x6000471C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world7_2F94(rdram, ctx);
        goto after_2;
    // 0x6000471C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x60004720: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x60004724: jal         0x60001028
    // 0x60004728: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world7_1028(rdram, ctx);
        goto after_3;
    // 0x60004728: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x6000472C: jal         0x60000DE4
    // 0x60004730: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world7_DE4(rdram, ctx);
        goto after_4;
    // 0x60004730: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_4:
    // 0x60004734: addiu       $s1, $sp, 0x38
    ctx->r17 = ADD32(ctx->r29, 0X38);
    // 0x60004738: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x6000473C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60004740: jal         0x600006C4
    // 0x60004744: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_stage_world7_6C4(rdram, ctx);
        goto after_5;
    // 0x60004744: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_5:
    // 0x60004748: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x6000474C: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x60004750: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60004754: lwc1        $f4, 0x5AB4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5AB4);
    // 0x60004758: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x6000475C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60004760: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60004764: swc1        $f20, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f20.u32l;
    // 0x60004768: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    // 0x6000476C: jal         0x60000DE4
    // 0x60004770: swc1        $f6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f6.u32l;
    ovl_stage_world7_DE4(rdram, ctx);
        goto after_6;
    // 0x60004770: swc1        $f6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f6.u32l;
    after_6:
    // 0x60004774: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60004778: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x6000477C: jal         0x600006C4
    // 0x60004780: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world7_6C4(rdram, ctx);
        goto after_7;
    // 0x60004780: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_7:
    // 0x60004784: jal         0x60000E74
    // 0x60004788: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_stage_world7_E74(rdram, ctx);
        goto after_8;
    // 0x60004788: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_8:
    // 0x6000478C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60004790: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x60004794: jal         0x600006C4
    // 0x60004798: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world7_6C4(rdram, ctx);
        goto after_9;
    // 0x60004798: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_9:
    // 0x6000479C: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x600047A0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x600047A4: add.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f20.fl;
    // 0x600047A8: jal         0x60000E74
    // 0x600047AC: swc1        $f10, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f10.u32l;
    ovl_stage_world7_E74(rdram, ctx);
        goto after_10;
    // 0x600047AC: swc1        $f10, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f10.u32l;
    after_10:
    // 0x600047B0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600047B4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x600047B8: jal         0x600006C4
    // 0x600047BC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world7_6C4(rdram, ctx);
        goto after_11;
    // 0x600047BC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_11:
    // 0x600047C0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600047C4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x600047C8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x600047CC: jal         0x60000D18
    // 0x600047D0: addiu       $a3, $zero, 0xF0
    ctx->r7 = ADD32(0, 0XF0);
    ovl_stage_world7_D18(rdram, ctx);
        goto after_12;
    // 0x600047D0: addiu       $a3, $zero, 0xF0
    ctx->r7 = ADD32(0, 0XF0);
    after_12:
    // 0x600047D4: jal         0x60000244
    // 0x600047D8: addiu       $a0, $zero, 0x1B9
    ctx->r4 = ADD32(0, 0X1B9);
    ovl_stage_world7_244(rdram, ctx);
        goto after_13;
    // 0x600047D8: addiu       $a0, $zero, 0x1B9
    ctx->r4 = ADD32(0, 0X1B9);
    after_13:
    // 0x600047DC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600047E0: lwc1        $f20, 0x5AB8($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X5AB8);
    // 0x600047E4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_600047E8:
    // 0x600047E8: jal         0x60000DE4
    // 0x600047EC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world7_DE4(rdram, ctx);
        goto after_14;
    // 0x600047EC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_14:
    // 0x600047F0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600047F4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x600047F8: jal         0x600006C4
    // 0x600047FC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world7_6C4(rdram, ctx);
        goto after_15;
    // 0x600047FC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_15:
    // 0x60004800: lwc1        $f16, 0x3C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x60004804: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60004808: sub.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f20.fl;
    // 0x6000480C: jal         0x60000DE4
    // 0x60004810: swc1        $f18, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f18.u32l;
    ovl_stage_world7_DE4(rdram, ctx);
        goto after_16;
    // 0x60004810: swc1        $f18, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f18.u32l;
    after_16:
    // 0x60004814: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60004818: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x6000481C: jal         0x600006C4
    // 0x60004820: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world7_6C4(rdram, ctx);
        goto after_17;
    // 0x60004820: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_17:
    // 0x60004824: jal         0x60000E74
    // 0x60004828: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_stage_world7_E74(rdram, ctx);
        goto after_18;
    // 0x60004828: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_18:
    // 0x6000482C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60004830: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x60004834: jal         0x600006C4
    // 0x60004838: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world7_6C4(rdram, ctx);
        goto after_19;
    // 0x60004838: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_19:
    // 0x6000483C: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x60004840: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x60004844: sub.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f20.fl;
    // 0x60004848: jal         0x60000E74
    // 0x6000484C: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
    ovl_stage_world7_E74(rdram, ctx);
        goto after_20;
    // 0x6000484C: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
    after_20:
    // 0x60004850: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60004854: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x60004858: jal         0x600006C4
    // 0x6000485C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world7_6C4(rdram, ctx);
        goto after_21;
    // 0x6000485C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_21:
    // 0x60004860: jal         0x600009D0
    // 0x60004864: nop

    ovl_stage_world7_9D0(rdram, ctx);
        goto after_22;
    // 0x60004864: nop

    after_22:
    // 0x60004868: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x6000486C: addiu       $at, $zero, 0x78
    ctx->r1 = ADD32(0, 0X78);
    // 0x60004870: bne         $s0, $at, L_600047E8
    if (ctx->r16 != ctx->r1) {
        // 0x60004874: nop
    
            goto L_600047E8;
    }
    // 0x60004874: nop

    // 0x60004878: jal         0x60000244
    // 0x6000487C: addiu       $a0, $zero, 0x1C6
    ctx->r4 = ADD32(0, 0X1C6);
    ovl_stage_world7_244(rdram, ctx);
        goto after_23;
    // 0x6000487C: addiu       $a0, $zero, 0x1C6
    ctx->r4 = ADD32(0, 0X1C6);
    after_23:
    // 0x60004880: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60004884: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x60004888: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x6000488C: jal         0x60000D18
    // 0x60004890: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    ovl_stage_world7_D18(rdram, ctx);
        goto after_24;
    // 0x60004890: addiu       $a3, $zero, 0x1E
    ctx->r7 = ADD32(0, 0X1E);
    after_24:
    // 0x60004894: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x60004898: jal         0x60000E68
    // 0x6000489C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world7_E68(rdram, ctx);
        goto after_25;
    // 0x6000489C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_25:
    // 0x600048A0: jal         0x600009C4
    // 0x600048A4: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_stage_world7_9C4(rdram, ctx);
        goto after_26;
    // 0x600048A4: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_26:
    // 0x600048A8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600048AC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x600048B0: jal         0x60003004
    // 0x600048B4: lui         $a2, 0x4316
    ctx->r6 = S32(0X4316 << 16);
    ovl_stage_world7_3004(rdram, ctx);
        goto after_27;
    // 0x600048B4: lui         $a2, 0x4316
    ctx->r6 = S32(0X4316 << 16);
    after_27:
    // 0x600048B8: jal         0x60000814
    // 0x600048BC: nop

    ovl_stage_world7_814(rdram, ctx);
        goto after_28;
    // 0x600048BC: nop

    after_28:
    // 0x600048C0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x600048C4: jal         0x60001028
    // 0x600048C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world7_1028(rdram, ctx);
        goto after_29;
    // 0x600048C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_29:
    // 0x600048CC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x600048D0: jal         0x60000E68
    // 0x600048D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world7_E68(rdram, ctx);
        goto after_30;
    // 0x600048D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_30:
    // 0x600048D8: jal         0x600009C4
    // 0x600048DC: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_stage_world7_9C4(rdram, ctx);
        goto after_31;
    // 0x600048DC: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_31:
    // 0x600048E0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600048E4: jal         0x60002F94
    // 0x600048E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world7_2F94(rdram, ctx);
        goto after_32;
    // 0x600048E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_32:
    // 0x600048EC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x600048F0: jal         0x60002F94
    // 0x600048F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world7_2F94(rdram, ctx);
        goto after_33;
    // 0x600048F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_33:
    // 0x600048F8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600048FC: lwc1        $f20, 0x5ABC($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X5ABC);
    // 0x60004900: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60004904: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x60004908: jal         0x6000112C
    // 0x6000490C: nop

    ovl_stage_world7_112C(rdram, ctx);
        goto after_34;
    // 0x6000490C: nop

    after_34:
    // 0x60004910: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x60004914: jal         0x6000112C
    // 0x60004918: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world7_112C(rdram, ctx);
        goto after_35;
    // 0x60004918: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_35:
    // 0x6000491C: jal         0x60000A78
    // 0x60004920: nop

    ovl_stage_world7_A78(rdram, ctx);
        goto after_36;
    // 0x60004920: nop

    after_36:
    // 0x60004924: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x60004928: lui         $at, 0xFFFE
    ctx->r1 = S32(0XFFFE << 16);
    // 0x6000492C: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x60004930: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x60004934: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x60004938: jal         0x600009AC
    // 0x6000493C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    ovl_stage_world7_9AC(rdram, ctx);
        goto after_37;
    // 0x6000493C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    after_37:
    // 0x60004940: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x60004944: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x60004948: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x6000494C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x60004950: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x60004954: jr          $ra
    // 0x60004958: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x60004958: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_stage_world7_495C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000495C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x60004960: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x60004964: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x60004968: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x6000496C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x60004970: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x60004974: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x60004978: jal         0x60000E74
    // 0x6000497C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_stage_world7_E74(rdram, ctx);
        goto after_0;
    // 0x6000497C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_0:
    // 0x60004980: addiu       $s1, $sp, 0x38
    ctx->r17 = ADD32(ctx->r29, 0X38);
    // 0x60004984: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x60004988: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x6000498C: jal         0x600006C4
    // 0x60004990: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_stage_world7_6C4(rdram, ctx);
        goto after_1;
    // 0x60004990: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_1:
    // 0x60004994: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x60004998: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x6000499C: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x600049A0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x600049A4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x600049A8: jal         0x60000E74
    // 0x600049AC: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    ovl_stage_world7_E74(rdram, ctx);
        goto after_2;
    // 0x600049AC: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    after_2:
    // 0x600049B0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600049B4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x600049B8: jal         0x600006C4
    // 0x600049BC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world7_6C4(rdram, ctx);
        goto after_3;
    // 0x600049BC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_3:
    // 0x600049C0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600049C4: lwc1        $f20, 0x5AC0($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X5AC0);
    // 0x600049C8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x600049CC: addiu       $s2, $zero, 0x78
    ctx->r18 = ADD32(0, 0X78);
L_600049D0:
    // 0x600049D0: jal         0x60000E74
    // 0x600049D4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_stage_world7_E74(rdram, ctx);
        goto after_4;
    // 0x600049D4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_4:
    // 0x600049D8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600049DC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x600049E0: jal         0x600006C4
    // 0x600049E4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world7_6C4(rdram, ctx);
        goto after_5;
    // 0x600049E4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_5:
    // 0x600049E8: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x600049EC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x600049F0: sub.s       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f20.fl;
    // 0x600049F4: jal         0x60000E74
    // 0x600049F8: swc1        $f16, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f16.u32l;
    ovl_stage_world7_E74(rdram, ctx);
        goto after_6;
    // 0x600049F8: swc1        $f16, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f16.u32l;
    after_6:
    // 0x600049FC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60004A00: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x60004A04: jal         0x600006C4
    // 0x60004A08: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world7_6C4(rdram, ctx);
        goto after_7;
    // 0x60004A08: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_7:
    // 0x60004A0C: jal         0x600009D0
    // 0x60004A10: nop

    ovl_stage_world7_9D0(rdram, ctx);
        goto after_8;
    // 0x60004A10: nop

    after_8:
    // 0x60004A14: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60004A18: bne         $s0, $s2, L_600049D0
    if (ctx->r16 != ctx->r18) {
        // 0x60004A1C: nop
    
            goto L_600049D0;
    }
    // 0x60004A1C: nop

    // 0x60004A20: jal         0x600009C4
    // 0x60004A24: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_stage_world7_9C4(rdram, ctx);
        goto after_9;
    // 0x60004A24: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_9:
    // 0x60004A28: jal         0x600009AC
    // 0x60004A2C: nop

    ovl_stage_world7_9AC(rdram, ctx);
        goto after_10;
    // 0x60004A2C: nop

    after_10:
    // 0x60004A30: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x60004A34: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x60004A38: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x60004A3C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x60004A40: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x60004A44: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x60004A48: jr          $ra
    // 0x60004A4C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x60004A4C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_stage_world7_4A50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004A50: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x60004A54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60004A58: jal         0x60000C1C
    // 0x60004A5C: nop

    ovl_stage_world7_C1C(rdram, ctx);
        goto after_0;
    // 0x60004A5C: nop

    after_0:
    // 0x60004A60: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x60004A64: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x60004A68: bne         $v1, $at, L_60004AC4
    if (ctx->r3 != ctx->r1) {
        // 0x60004A6C: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_60004AC4;
    }
    // 0x60004A6C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x60004A70: jal         0x60000DE4
    // 0x60004A74: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world7_DE4(rdram, ctx);
        goto after_1;
    // 0x60004A74: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x60004A78: jal         0x60000CC4
    // 0x60004A7C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_stage_world7_CC4(rdram, ctx);
        goto after_2;
    // 0x60004A7C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x60004A80: jal         0x60000A90
    // 0x60004A84: nop

    ovl_stage_world7_A90(rdram, ctx);
        goto after_3;
    // 0x60004A84: nop

    after_3:
    // 0x60004A88: lui         $a1, 0x409C
    ctx->r5 = S32(0X409C << 16);
    // 0x60004A8C: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x60004A90: jal         0x6000112C
    // 0x60004A94: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world7_112C(rdram, ctx);
        goto after_4;
    // 0x60004A94: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
    // 0x60004A98: jal         0x60000A6C
    // 0x60004A9C: nop

    ovl_stage_world7_A6C(rdram, ctx);
        goto after_5;
    // 0x60004A9C: nop

    after_5:
    // 0x60004AA0: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60004AA4: addiu       $a0, $a0, 0x46D8
    ctx->r4 = ADD32(ctx->r4, 0X46D8);
    // 0x60004AA8: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60004AAC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60004AB0: jal         0x60000994
    // 0x60004AB4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world7_994(rdram, ctx);
        goto after_6;
    // 0x60004AB4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_6:
    // 0x60004AB8: b           L_60004B40
    // 0x60004ABC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60004B40;
    // 0x60004ABC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004AC0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
L_60004AC4:
    // 0x60004AC4: bne         $v1, $at, L_60004AE8
    if (ctx->r3 != ctx->r1) {
        // 0x60004AC8: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_60004AE8;
    }
    // 0x60004AC8: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60004ACC: addiu       $a0, $a0, 0x495C
    ctx->r4 = ADD32(ctx->r4, 0X495C);
    // 0x60004AD0: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60004AD4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60004AD8: jal         0x60000994
    // 0x60004ADC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world7_994(rdram, ctx);
        goto after_7;
    // 0x60004ADC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_7:
    // 0x60004AE0: b           L_60004B40
    // 0x60004AE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60004B40;
    // 0x60004AE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60004AE8:
    // 0x60004AE8: jal         0x60000BB0
    // 0x60004AEC: addiu       $a0, $zero, 0x184
    ctx->r4 = ADD32(0, 0X184);
    ovl_stage_world7_BB0(rdram, ctx);
        goto after_8;
    // 0x60004AEC: addiu       $a0, $zero, 0x184
    ctx->r4 = ADD32(0, 0X184);
    after_8:
    // 0x60004AF0: bne         $v0, $zero, L_60004B40
    if (ctx->r2 != 0) {
        // 0x60004AF4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60004B40;
    }
    // 0x60004AF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004AF8: jal         0x60000E74
    // 0x60004AFC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_stage_world7_E74(rdram, ctx);
        goto after_9;
    // 0x60004AFC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_9:
    // 0x60004B00: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60004B04: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x60004B08: jal         0x600006C4
    // 0x60004B0C: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_stage_world7_6C4(rdram, ctx);
        goto after_10;
    // 0x60004B0C: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_10:
    // 0x60004B10: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x60004B14: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60004B18: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x60004B1C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x60004B20: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x60004B24: jal         0x60000E74
    // 0x60004B28: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    ovl_stage_world7_E74(rdram, ctx);
        goto after_11;
    // 0x60004B28: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    after_11:
    // 0x60004B2C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60004B30: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x60004B34: jal         0x600006C4
    // 0x60004B38: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_stage_world7_6C4(rdram, ctx);
        goto after_12;
    // 0x60004B38: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_12:
    // 0x60004B3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60004B40:
    // 0x60004B40: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x60004B44: jr          $ra
    // 0x60004B48: nop

    return;
    // 0x60004B48: nop

;}
RECOMP_FUNC void ovl_stage_world7_4B4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004B4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60004B50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60004B54: jal         0x600009C4
    // 0x60004B58: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_stage_world7_9C4(rdram, ctx);
        goto after_0;
    // 0x60004B58: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_0:
    // 0x60004B5C: jal         0x60000BA4
    // 0x60004B60: addiu       $a0, $zero, 0x105
    ctx->r4 = ADD32(0, 0X105);
    ovl_stage_world7_BA4(rdram, ctx);
        goto after_1;
    // 0x60004B60: addiu       $a0, $zero, 0x105
    ctx->r4 = ADD32(0, 0X105);
    after_1:
    // 0x60004B64: jal         0x600009AC
    // 0x60004B68: nop

    ovl_stage_world7_9AC(rdram, ctx);
        goto after_2;
    // 0x60004B68: nop

    after_2:
    // 0x60004B6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004B70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60004B74: jr          $ra
    // 0x60004B78: nop

    return;
    // 0x60004B78: nop

;}
RECOMP_FUNC void ovl_stage_world7_4B7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004B7C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60004B80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60004B84: jal         0x60000BB0
    // 0x60004B88: addiu       $a0, $zero, 0x180
    ctx->r4 = ADD32(0, 0X180);
    ovl_stage_world7_BB0(rdram, ctx);
        goto after_0;
    // 0x60004B88: addiu       $a0, $zero, 0x180
    ctx->r4 = ADD32(0, 0X180);
    after_0:
    // 0x60004B8C: bne         $v0, $zero, L_60004C18
    if (ctx->r2 != 0) {
        // 0x60004B90: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60004C18;
    }
    // 0x60004B90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004B94: jal         0x60000BB0
    // 0x60004B98: addiu       $a0, $zero, 0x105
    ctx->r4 = ADD32(0, 0X105);
    ovl_stage_world7_BB0(rdram, ctx);
        goto after_1;
    // 0x60004B98: addiu       $a0, $zero, 0x105
    ctx->r4 = ADD32(0, 0X105);
    after_1:
    // 0x60004B9C: bne         $v0, $zero, L_60004C18
    if (ctx->r2 != 0) {
        // 0x60004BA0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60004C18;
    }
    // 0x60004BA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004BA4: jal         0x60000B98
    // 0x60004BA8: addiu       $a0, $zero, 0x105
    ctx->r4 = ADD32(0, 0X105);
    ovl_stage_world7_B98(rdram, ctx);
        goto after_2;
    // 0x60004BA8: addiu       $a0, $zero, 0x105
    ctx->r4 = ADD32(0, 0X105);
    after_2:
    // 0x60004BAC: jal         0x60000244
    // 0x60004BB0: addiu       $a0, $zero, 0xDA
    ctx->r4 = ADD32(0, 0XDA);
    ovl_stage_world7_244(rdram, ctx);
        goto after_3;
    // 0x60004BB0: addiu       $a0, $zero, 0xDA
    ctx->r4 = ADD32(0, 0XDA);
    after_3:
    // 0x60004BB4: jal         0x60000BB0
    // 0x60004BB8: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    ovl_stage_world7_BB0(rdram, ctx);
        goto after_4;
    // 0x60004BB8: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    after_4:
    // 0x60004BBC: bne         $v0, $zero, L_60004BF8
    if (ctx->r2 != 0) {
        // 0x60004BC0: nop
    
            goto L_60004BF8;
    }
    // 0x60004BC0: nop

    // 0x60004BC4: jal         0x60000B98
    // 0x60004BC8: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    ovl_stage_world7_B98(rdram, ctx);
        goto after_5;
    // 0x60004BC8: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    after_5:
    // 0x60004BCC: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x60004BD0: jal         0x60000E80
    // 0x60004BD4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world7_E80(rdram, ctx);
        goto after_6;
    // 0x60004BD4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x60004BD8: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60004BDC: addiu       $a0, $a0, 0x4B4C
    ctx->r4 = ADD32(ctx->r4, 0X4B4C);
    // 0x60004BE0: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60004BE4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60004BE8: jal         0x60000994
    // 0x60004BEC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world7_994(rdram, ctx);
        goto after_7;
    // 0x60004BEC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_7:
    // 0x60004BF0: b           L_60004C18
    // 0x60004BF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60004C18;
    // 0x60004BF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60004BF8:
    // 0x60004BF8: jal         0x60000A60
    // 0x60004BFC: addiu       $a0, $zero, 0xA8D
    ctx->r4 = ADD32(0, 0XA8D);
    ovl_stage_world7_A60(rdram, ctx);
        goto after_8;
    // 0x60004BFC: addiu       $a0, $zero, 0xA8D
    ctx->r4 = ADD32(0, 0XA8D);
    after_8:
    // 0x60004C00: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x60004C04: jal         0x60000E80
    // 0x60004C08: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_stage_world7_E80(rdram, ctx);
        goto after_9;
    // 0x60004C08: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_9:
    // 0x60004C0C: jal         0x60000B98
    // 0x60004C10: addiu       $a0, $zero, 0x180
    ctx->r4 = ADD32(0, 0X180);
    ovl_stage_world7_B98(rdram, ctx);
        goto after_10;
    // 0x60004C10: addiu       $a0, $zero, 0x180
    ctx->r4 = ADD32(0, 0X180);
    after_10:
    // 0x60004C14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60004C18:
    // 0x60004C18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60004C1C: jr          $ra
    // 0x60004C20: nop

    return;
    // 0x60004C20: nop

;}
RECOMP_FUNC void ovl_stage_world7_4C24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004C24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60004C28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60004C2C: jal         0x60000DE4
    // 0x60004C30: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world7_DE4(rdram, ctx);
        goto after_0;
    // 0x60004C30: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x60004C34: jal         0x60000CC4
    // 0x60004C38: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_stage_world7_CC4(rdram, ctx);
        goto after_1;
    // 0x60004C38: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x60004C3C: jal         0x60000A6C
    // 0x60004C40: nop

    ovl_stage_world7_A6C(rdram, ctx);
        goto after_2;
    // 0x60004C40: nop

    after_2:
    // 0x60004C44: jal         0x60000A60
    // 0x60004C48: addiu       $a0, $zero, 0xA94
    ctx->r4 = ADD32(0, 0XA94);
    ovl_stage_world7_A60(rdram, ctx);
        goto after_3;
    // 0x60004C48: addiu       $a0, $zero, 0xA94
    ctx->r4 = ADD32(0, 0XA94);
    after_3:
    // 0x60004C4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004C50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60004C54: jr          $ra
    // 0x60004C58: nop

    return;
    // 0x60004C58: nop

;}
