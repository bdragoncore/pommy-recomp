#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_stage_world3_19D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600019D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600019D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600019D8: jal         0x6000034C
    // 0x600019DC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    ovl_stage_world3_34C(rdram, ctx);
        goto after_0;
    // 0x600019DC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_0:
    // 0x600019E0: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x600019E4: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x600019E8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x600019EC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x600019F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600019F4: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x600019F8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600019FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60001A00: jr          $ra
    // 0x60001A04: swc1        $f10, 0x6AE0($at)
    MEM_W(0X6AE0, ctx->r1) = ctx->f10.u32l;
    return;
    // 0x60001A04: swc1        $f10, 0x6AE0($at)
    MEM_W(0X6AE0, ctx->r1) = ctx->f10.u32l;
;}
RECOMP_FUNC void ovl_stage_world3_1A08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001A08: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001A0C: lwc1        $f4, 0x6ADC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6ADC);
    // 0x60001A10: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001A14: lwc1        $f6, 0x6AD8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6AD8);
    // 0x60001A18: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001A1C: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x60001A20: nop

    // 0x60001A24: bc1f        L_60001A74
    if (!c1cs) {
        // 0x60001A28: nop
    
            goto L_60001A74;
    }
    // 0x60001A28: nop

    // 0x60001A2C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001A30: lwc1        $f8, 0x6AF0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X6AF0);
    // 0x60001A34: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001A38: lwc1        $f10, 0x6B08($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X6B08);
    // 0x60001A3C: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x60001A40: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x60001A44: nop

    // 0x60001A48: bc1f        L_60001A64
    if (!c1cs) {
        // 0x60001A4C: nop
    
            goto L_60001A64;
    }
    // 0x60001A4C: nop

    // 0x60001A50: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x60001A54: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x60001A58: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001A5C: jr          $ra
    // 0x60001A60: swc1        $f16, 0x6AE0($at)
    MEM_W(0X6AE0, ctx->r1) = ctx->f16.u32l;
    return;
    // 0x60001A60: swc1        $f16, 0x6AE0($at)
    MEM_W(0X6AE0, ctx->r1) = ctx->f16.u32l;
L_60001A64:
    // 0x60001A64: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x60001A68: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001A6C: jr          $ra
    // 0x60001A70: swc1        $f18, 0x6AE0($at)
    MEM_W(0X6AE0, ctx->r1) = ctx->f18.u32l;
    return;
    // 0x60001A70: swc1        $f18, 0x6AE0($at)
    MEM_W(0X6AE0, ctx->r1) = ctx->f18.u32l;
L_60001A74:
    // 0x60001A74: lwc1        $f4, 0x6AF8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6AF8);
    // 0x60001A78: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001A7C: lwc1        $f6, 0x6B10($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6B10);
    // 0x60001A80: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x60001A84: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x60001A88: nop

    // 0x60001A8C: bc1f        L_60001AA4
    if (!c1cs) {
        // 0x60001A90: nop
    
            goto L_60001AA4;
    }
    // 0x60001A90: nop

    // 0x60001A94: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x60001A98: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001A9C: jr          $ra
    // 0x60001AA0: swc1        $f8, 0x6AE0($at)
    MEM_W(0X6AE0, ctx->r1) = ctx->f8.u32l;
    return;
    // 0x60001AA0: swc1        $f8, 0x6AE0($at)
    MEM_W(0X6AE0, ctx->r1) = ctx->f8.u32l;
L_60001AA4:
    // 0x60001AA4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x60001AA8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001AAC: swc1        $f10, 0x6AE0($at)
    MEM_W(0X6AE0, ctx->r1) = ctx->f10.u32l;
    // 0x60001AB0: jr          $ra
    // 0x60001AB4: nop

    return;
    // 0x60001AB4: nop

;}
RECOMP_FUNC void ovl_stage_world3_1AB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001AB8: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60001ABC: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x60001AC0: addiu       $v1, $v1, 0x6B08
    ctx->r3 = ADD32(ctx->r3, 0X6B08);
    // 0x60001AC4: addiu       $v0, $v0, 0x6AF0
    ctx->r2 = ADD32(ctx->r2, 0X6AF0);
    // 0x60001AC8: lwc1        $f14, 0x0($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X0);
    // 0x60001ACC: lwc1        $f16, 0x0($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X0);
    // 0x60001AD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60001AD4: c.lt.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl < ctx->f16.fl;
    // 0x60001AD8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60001ADC: bc1f        L_60001AF0
    if (!c1cs) {
        // 0x60001AE0: lui         $at, 0x4248
        ctx->r1 = S32(0X4248 << 16);
            goto L_60001AF0;
    }
    // 0x60001AE0: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x60001AE4: sub.s       $f0, $f14, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f14.fl - ctx->f16.fl;
    // 0x60001AE8: b           L_60001AF4
    // 0x60001AEC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_60001AF4;
    // 0x60001AEC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_60001AF0:
    // 0x60001AF0: sub.s       $f0, $f14, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = ctx->f14.fl - ctx->f16.fl;
L_60001AF4:
    // 0x60001AF4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x60001AF8: nop

    // 0x60001AFC: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x60001B00: nop

    // 0x60001B04: bc1f        L_60001B48
    if (!c1cs) {
        // 0x60001B08: nop
    
            goto L_60001B48;
    }
    // 0x60001B08: nop

    // 0x60001B0C: lwc1        $f4, 0x8($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X8);
    // 0x60001B10: lwc1        $f6, 0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8);
    // 0x60001B14: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001B18: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x60001B1C: nop

    // 0x60001B20: bc1f        L_60001B3C
    if (!c1cs) {
        // 0x60001B24: nop
    
            goto L_60001B3C;
    }
    // 0x60001B24: nop

    // 0x60001B28: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x60001B2C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x60001B30: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001B34: b           L_60001BC0
    // 0x60001B38: swc1        $f8, 0x6AE0($at)
    MEM_W(0X6AE0, ctx->r1) = ctx->f8.u32l;
        goto L_60001BC0;
    // 0x60001B38: swc1        $f8, 0x6AE0($at)
    MEM_W(0X6AE0, ctx->r1) = ctx->f8.u32l;
L_60001B3C:
    // 0x60001B3C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x60001B40: b           L_60001BC0
    // 0x60001B44: swc1        $f10, 0x6AE0($at)
    MEM_W(0X6AE0, ctx->r1) = ctx->f10.u32l;
        goto L_60001BC0;
    // 0x60001B44: swc1        $f10, 0x6AE0($at)
    MEM_W(0X6AE0, ctx->r1) = ctx->f10.u32l;
L_60001B48:
    // 0x60001B48: lwc1        $f2, 0x8($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X8);
    // 0x60001B4C: lwc1        $f12, 0x8($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X8);
    // 0x60001B50: nop

    // 0x60001B54: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x60001B58: nop

    // 0x60001B5C: bc1f        L_60001B70
    if (!c1cs) {
        // 0x60001B60: nop
    
            goto L_60001B70;
    }
    // 0x60001B60: nop

    // 0x60001B64: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x60001B68: b           L_60001B74
    // 0x60001B6C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_60001B74;
    // 0x60001B6C: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_60001B70:
    // 0x60001B70: sub.s       $f0, $f2, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f12.fl;
L_60001B74:
    // 0x60001B74: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x60001B78: nop

    // 0x60001B7C: bc1f        L_60001BB8
    if (!c1cs) {
        // 0x60001B80: nop
    
            goto L_60001BB8;
    }
    // 0x60001B80: nop

    // 0x60001B84: c.lt.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl < ctx->f16.fl;
    // 0x60001B88: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x60001B8C: bc1f        L_60001BA8
    if (!c1cs) {
        // 0x60001B90: nop
    
            goto L_60001BA8;
    }
    // 0x60001B90: nop

    // 0x60001B94: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x60001B98: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60001B9C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001BA0: b           L_60001BC0
    // 0x60001BA4: swc1        $f4, 0x6AE0($at)
    MEM_W(0X6AE0, ctx->r1) = ctx->f4.u32l;
        goto L_60001BC0;
    // 0x60001BA4: swc1        $f4, 0x6AE0($at)
    MEM_W(0X6AE0, ctx->r1) = ctx->f4.u32l;
L_60001BA8:
    // 0x60001BA8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60001BAC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001BB0: b           L_60001BC0
    // 0x60001BB4: swc1        $f6, 0x6AE0($at)
    MEM_W(0X6AE0, ctx->r1) = ctx->f6.u32l;
        goto L_60001BC0;
    // 0x60001BB4: swc1        $f6, 0x6AE0($at)
    MEM_W(0X6AE0, ctx->r1) = ctx->f6.u32l;
L_60001BB8:
    // 0x60001BB8: jal         0x60001A08
    // 0x60001BBC: nop

    ovl_stage_world3_1A08(rdram, ctx);
        goto after_0;
    // 0x60001BBC: nop

    after_0:
L_60001BC0:
    // 0x60001BC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60001BC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60001BC8: jr          $ra
    // 0x60001BCC: nop

    return;
    // 0x60001BCC: nop

;}
RECOMP_FUNC void ovl_stage_world3_1BD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001BD0: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60001BD4: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x60001BD8: addiu       $v1, $v1, 0x6B20
    ctx->r3 = ADD32(ctx->r3, 0X6B20);
    // 0x60001BDC: addiu       $v0, $v0, 0x6AF0
    ctx->r2 = ADD32(ctx->r2, 0X6AF0);
    // 0x60001BE0: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x60001BE4: lwc1        $f2, 0x0($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X0);
    // 0x60001BE8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x60001BEC: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x60001BF0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x60001BF4: bc1f        L_60001C08
    if (!c1cs) {
        // 0x60001BF8: nop
    
            goto L_60001C08;
    }
    // 0x60001BF8: nop

    // 0x60001BFC: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x60001C00: b           L_60001C0C
    // 0x60001C04: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
        goto L_60001C0C;
    // 0x60001C04: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
L_60001C08:
    // 0x60001C08: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
L_60001C0C:
    // 0x60001C0C: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x60001C10: nop

    // 0x60001C14: bc1f        L_60001C60
    if (!c1cs) {
        // 0x60001C18: nop
    
            goto L_60001C60;
    }
    // 0x60001C18: nop

    // 0x60001C1C: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x60001C20: lwc1        $f2, 0x8($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X8);
    // 0x60001C24: nop

    // 0x60001C28: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x60001C2C: nop

    // 0x60001C30: bc1f        L_60001C44
    if (!c1cs) {
        // 0x60001C34: nop
    
            goto L_60001C44;
    }
    // 0x60001C34: nop

    // 0x60001C38: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x60001C3C: b           L_60001C48
    // 0x60001C40: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
        goto L_60001C48;
    // 0x60001C40: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
L_60001C44:
    // 0x60001C44: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
L_60001C48:
    // 0x60001C48: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x60001C4C: nop

    // 0x60001C50: bc1f        L_60001C64
    if (!c1cs) {
        // 0x60001C54: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_60001C64;
    }
    // 0x60001C54: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x60001C58: jr          $ra
    // 0x60001C5C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x60001C5C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_60001C60:
    // 0x60001C60: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_60001C64:
    // 0x60001C64: jr          $ra
    // 0x60001C68: nop

    return;
    // 0x60001C68: nop

;}
RECOMP_FUNC void ovl_stage_world3_1C6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001C6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60001C70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60001C74: jal         0x6000034C
    // 0x60001C78: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    ovl_stage_world3_34C(rdram, ctx);
        goto after_0;
    // 0x60001C78: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_0:
    // 0x60001C7C: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x60001C80: addiu       $v1, $v1, 0x6AC4
    ctx->r3 = ADD32(ctx->r3, 0X6AC4);
    // 0x60001C84: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x60001C88: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x60001C8C: beq         $a1, $t6, L_60001C9C
    if (ctx->r5 == ctx->r14) {
        // 0x60001C90: slti        $at, $v0, 0x51
        ctx->r1 = SIGNED(ctx->r2) < 0X51 ? 1 : 0;
            goto L_60001C9C;
    }
    // 0x60001C90: slti        $at, $v0, 0x51
    ctx->r1 = SIGNED(ctx->r2) < 0X51 ? 1 : 0;
    // 0x60001C94: beq         $at, $zero, L_60001D64
    if (ctx->r1 == 0) {
        // 0x60001C98: lui         $at, 0x4248
        ctx->r1 = S32(0X4248 << 16);
            goto L_60001D64;
    }
    // 0x60001C98: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
L_60001C9C:
    // 0x60001C9C: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x60001CA0: jal         0x6000034C
    // 0x60001CA4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_stage_world3_34C(rdram, ctx);
        goto after_1;
    // 0x60001CA4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_1:
    // 0x60001CA8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001CAC: sw          $v0, 0x6ACC($at)
    MEM_W(0X6ACC, ctx->r1) = ctx->r2;
    // 0x60001CB0: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x60001CB4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60001CB8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001CBC: lwc1        $f6, 0x6B34($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6B34);
    // 0x60001CC0: nop

    // 0x60001CC4: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x60001CC8: nop

    // 0x60001CCC: bc1f        L_60001CEC
    if (!c1cs) {
        // 0x60001CD0: nop
    
            goto L_60001CEC;
    }
    // 0x60001CD0: nop

    // 0x60001CD4: jal         0x6000034C
    // 0x60001CD8: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_stage_world3_34C(rdram, ctx);
        goto after_2;
    // 0x60001CD8: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_2:
    // 0x60001CDC: addiu       $t7, $v0, 0x7
    ctx->r15 = ADD32(ctx->r2, 0X7);
    // 0x60001CE0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001CE4: b           L_60001D00
    // 0x60001CE8: sw          $t7, 0x6AC8($at)
    MEM_W(0X6AC8, ctx->r1) = ctx->r15;
        goto L_60001D00;
    // 0x60001CE8: sw          $t7, 0x6AC8($at)
    MEM_W(0X6AC8, ctx->r1) = ctx->r15;
L_60001CEC:
    // 0x60001CEC: jal         0x6000034C
    // 0x60001CF0: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    ovl_stage_world3_34C(rdram, ctx);
        goto after_3;
    // 0x60001CF0: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_3:
    // 0x60001CF4: addiu       $t8, $v0, 0x1E
    ctx->r24 = ADD32(ctx->r2, 0X1E);
    // 0x60001CF8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001CFC: sw          $t8, 0x6AC8($at)
    MEM_W(0X6AC8, ctx->r1) = ctx->r24;
L_60001D00:
    // 0x60001D00: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60001D04: lw          $v0, 0x6ACC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6ACC);
    // 0x60001D08: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001D0C: beq         $v0, $zero, L_60001D30
    if (ctx->r2 == 0) {
        // 0x60001D10: sw          $zero, 0x6AE8($at)
        MEM_W(0X6AE8, ctx->r1) = 0;
            goto L_60001D30;
    }
    // 0x60001D10: sw          $zero, 0x6AE8($at)
    MEM_W(0X6AE8, ctx->r1) = 0;
    // 0x60001D14: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x60001D18: beq         $v0, $at, L_60001D40
    if (ctx->r2 == ctx->r1) {
        // 0x60001D1C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_60001D40;
    }
    // 0x60001D1C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x60001D20: beq         $v0, $at, L_60001D50
    if (ctx->r2 == ctx->r1) {
        // 0x60001D24: nop
    
            goto L_60001D50;
    }
    // 0x60001D24: nop

    // 0x60001D28: b           L_60001DA8
    // 0x60001D2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60001DA8;
    // 0x60001D2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001D30:
    // 0x60001D30: jal         0x600019D0
    // 0x60001D34: nop

    ovl_stage_world3_19D0(rdram, ctx);
        goto after_4;
    // 0x60001D34: nop

    after_4:
    // 0x60001D38: b           L_60001DA8
    // 0x60001D3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60001DA8;
    // 0x60001D3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001D40:
    // 0x60001D40: jal         0x60001A08
    // 0x60001D44: nop

    ovl_stage_world3_1A08(rdram, ctx);
        goto after_5;
    // 0x60001D44: nop

    after_5:
    // 0x60001D48: b           L_60001DA8
    // 0x60001D4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60001DA8;
    // 0x60001D4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001D50:
    // 0x60001D50: jal         0x60001AB8
    // 0x60001D54: nop

    ovl_stage_world3_1AB8(rdram, ctx);
        goto after_6;
    // 0x60001D54: nop

    after_6:
    // 0x60001D58: b           L_60001DA8
    // 0x60001D5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60001DA8;
    // 0x60001D5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60001D60: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
L_60001D64:
    // 0x60001D64: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x60001D68: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
    // 0x60001D6C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001D70: lwc1        $f10, 0x6B34($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X6B34);
    // 0x60001D74: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001D78: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x60001D7C: addiu       $t9, $zero, 0x8
    ctx->r25 = ADD32(0, 0X8);
    // 0x60001D80: bc1f        L_60001D90
    if (!c1cs) {
        // 0x60001D84: nop
    
            goto L_60001D90;
    }
    // 0x60001D84: nop

    // 0x60001D88: b           L_60001DA4
    // 0x60001D8C: sw          $t9, 0x6AC8($at)
    MEM_W(0X6AC8, ctx->r1) = ctx->r25;
        goto L_60001DA4;
    // 0x60001D8C: sw          $t9, 0x6AC8($at)
    MEM_W(0X6AC8, ctx->r1) = ctx->r25;
L_60001D90:
    // 0x60001D90: jal         0x6000034C
    // 0x60001D94: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_stage_world3_34C(rdram, ctx);
        goto after_7;
    // 0x60001D94: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_7:
    // 0x60001D98: addiu       $t0, $v0, 0xF
    ctx->r8 = ADD32(ctx->r2, 0XF);
    // 0x60001D9C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001DA0: sw          $t0, 0x6AC8($at)
    MEM_W(0X6AC8, ctx->r1) = ctx->r8;
L_60001DA4:
    // 0x60001DA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001DA8:
    // 0x60001DA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60001DAC: jr          $ra
    // 0x60001DB0: nop

    return;
    // 0x60001DB0: nop

;}
RECOMP_FUNC void ovl_stage_world3_1DB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001DB4: lui         $t6, 0x6000
    ctx->r14 = S32(0X6000 << 16);
    // 0x60001DB8: lw          $t6, 0x6B48($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X6B48);
    // 0x60001DBC: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x60001DC0: andi        $t7, $t6, 0x82B7
    ctx->r15 = ctx->r14 & 0X82B7;
    // 0x60001DC4: bne         $t7, $zero, L_60001DD4
    if (ctx->r15 != 0) {
        // 0x60001DC8: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_60001DD4;
    }
    // 0x60001DC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60001DCC: b           L_60001DD8
    // 0x60001DD0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_60001DD8;
    // 0x60001DD0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_60001DD4:
    // 0x60001DD4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_60001DD8:
    // 0x60001DD8: beq         $v0, $zero, L_60001E14
    if (ctx->r2 == 0) {
        // 0x60001DDC: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_60001E14;
    }
    // 0x60001DDC: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60001DE0: lw          $a0, 0x6880($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6880);
    // 0x60001DE4: jal         0x60000F28
    // 0x60001DE8: nop

    ovl_stage_world3_F28(rdram, ctx);
        goto after_0;
    // 0x60001DE8: nop

    after_0:
    // 0x60001DEC: beq         $v0, $zero, L_60001E14
    if (ctx->r2 == 0) {
        // 0x60001DF0: lui         $t8, 0x6000
        ctx->r24 = S32(0X6000 << 16);
            goto L_60001E14;
    }
    // 0x60001DF0: lui         $t8, 0x6000
    ctx->r24 = S32(0X6000 << 16);
    // 0x60001DF4: lw          $t8, 0x6B48($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X6B48);
    // 0x60001DF8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x60001DFC: andi        $t9, $t8, 0x80
    ctx->r25 = ctx->r24 & 0X80;
    // 0x60001E00: beq         $t9, $zero, L_60001E10
    if (ctx->r25 == 0) {
        // 0x60001E04: nop
    
            goto L_60001E10;
    }
    // 0x60001E04: nop

    // 0x60001E08: b           L_60001E10
    // 0x60001E0C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_60001E10;
    // 0x60001E0C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_60001E10:
    // 0x60001E10: beq         $v0, $zero, L_60001E58
    if (ctx->r2 == 0) {
        // 0x60001E14: lui         $v1, 0x6000
        ctx->r3 = S32(0X6000 << 16);
            goto L_60001E58;
    }
L_60001E14:
    // 0x60001E14: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x60001E18: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x60001E1C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001E20: addiu       $v1, $v1, 0x6B40
    ctx->r3 = ADD32(ctx->r3, 0X6B40);
    // 0x60001E24: sw          $a3, 0x6AC4($at)
    MEM_W(0X6AC4, ctx->r1) = ctx->r7;
    // 0x60001E28: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x60001E2C: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x60001E30: beq         $t0, $t2, L_60001E44
    if (ctx->r8 == ctx->r10) {
        // 0x60001E34: addiu       $t3, $zero, 0x1E
        ctx->r11 = ADD32(0, 0X1E);
            goto L_60001E44;
    }
    // 0x60001E34: addiu       $t3, $zero, 0x1E
    ctx->r11 = ADD32(0, 0X1E);
    // 0x60001E38: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001E3C: b           L_60001E4C
    // 0x60001E40: sw          $a3, 0x6AC8($at)
    MEM_W(0X6AC8, ctx->r1) = ctx->r7;
        goto L_60001E4C;
    // 0x60001E40: sw          $a3, 0x6AC8($at)
    MEM_W(0X6AC8, ctx->r1) = ctx->r7;
L_60001E44:
    // 0x60001E44: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001E48: sw          $t3, 0x6AC8($at)
    MEM_W(0X6AC8, ctx->r1) = ctx->r11;
L_60001E4C:
    // 0x60001E4C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001E50: b           L_60002268
    // 0x60001E54: sw          $zero, 0x6AE8($at)
    MEM_W(0X6AE8, ctx->r1) = 0;
        goto L_60002268;
    // 0x60001E54: sw          $zero, 0x6AE8($at)
    MEM_W(0X6AE8, ctx->r1) = 0;
L_60001E58:
    // 0x60001E58: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60001E5C: addiu       $v0, $v0, 0x6AC4
    ctx->r2 = ADD32(ctx->r2, 0X6AC4);
    // 0x60001E60: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x60001E64: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x60001E68: bne         $t4, $at, L_60001EBC
    if (ctx->r12 != ctx->r1) {
        // 0x60001E6C: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_60001EBC;
    }
    // 0x60001E6C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x60001E70: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
    // 0x60001E74: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x60001E78: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001E7C: jal         0x600018F0
    // 0x60001E80: sw          $t5, 0x6AC8($at)
    MEM_W(0X6AC8, ctx->r1) = ctx->r13;
    ovl_stage_world3_18F0(rdram, ctx);
        goto after_1;
    // 0x60001E80: sw          $t5, 0x6AC8($at)
    MEM_W(0X6AC8, ctx->r1) = ctx->r13;
    after_1:
    // 0x60001E84: lui         $t6, 0x6000
    ctx->r14 = S32(0X6000 << 16);
    // 0x60001E88: lw          $t6, 0x6ACC($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X6ACC);
    // 0x60001E8C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x60001E90: bne         $t6, $at, L_60001EA8
    if (ctx->r14 != ctx->r1) {
        // 0x60001E94: nop
    
            goto L_60001EA8;
    }
    // 0x60001E94: nop

    // 0x60001E98: jal         0x60001914
    // 0x60001E9C: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    ovl_stage_world3_1914(rdram, ctx);
        goto after_2;
    // 0x60001E9C: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    after_2:
    // 0x60001EA0: b           L_60001EB0
    // 0x60001EA4: nop

        goto L_60001EB0;
    // 0x60001EA4: nop

L_60001EA8:
    // 0x60001EA8: jal         0x60001914
    // 0x60001EAC: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    ovl_stage_world3_1914(rdram, ctx);
        goto after_3;
    // 0x60001EAC: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    after_3:
L_60001EB0:
    // 0x60001EB0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001EB4: b           L_60002268
    // 0x60001EB8: sw          $zero, 0x6AE8($at)
    MEM_W(0X6AE8, ctx->r1) = 0;
        goto L_60002268;
    // 0x60001EB8: sw          $zero, 0x6AE8($at)
    MEM_W(0X6AE8, ctx->r1) = 0;
L_60001EBC:
    // 0x60001EBC: jal         0x6000034C
    // 0x60001EC0: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    ovl_stage_world3_34C(rdram, ctx);
        goto after_4;
    // 0x60001EC0: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_4:
    // 0x60001EC4: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60001EC8: lw          $a2, 0x6AC4($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X6AC4);
    // 0x60001ECC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x60001ED0: bne         $a3, $a2, L_60001EFC
    if (ctx->r7 != ctx->r6) {
        // 0x60001ED4: lui         $at, 0x6000
        ctx->r1 = S32(0X6000 << 16);
            goto L_60001EFC;
    }
    // 0x60001ED4: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001ED8: lwc1        $f4, 0x6AD0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6AD0);
    // 0x60001EDC: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x60001EE0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60001EE4: slti        $at, $v0, 0x47
    ctx->r1 = SIGNED(ctx->r2) < 0X47 ? 1 : 0;
    // 0x60001EE8: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x60001EEC: nop

    // 0x60001EF0: bc1f        L_60001EFC
    if (!c1cs) {
        // 0x60001EF4: nop
    
            goto L_60001EFC;
    }
    // 0x60001EF4: nop

    // 0x60001EF8: bne         $at, $zero, L_60001F10
    if (ctx->r1 != 0) {
        // 0x60001EFC: lui         $t1, 0x6000
        ctx->r9 = S32(0X6000 << 16);
            goto L_60001F10;
    }
L_60001EFC:
    // 0x60001EFC: lui         $t1, 0x6000
    ctx->r9 = S32(0X6000 << 16);
    // 0x60001F00: addiu       $t1, $t1, 0x6B3C
    ctx->r9 = ADD32(ctx->r9, 0X6B3C);
    // 0x60001F04: lw          $t7, 0x0($t1)
    ctx->r15 = MEM_W(ctx->r9, 0X0);
    // 0x60001F08: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x60001F0C: bne         $t7, $at, L_60001F2C
    if (ctx->r15 != ctx->r1) {
        // 0x60001F10: lui         $v1, 0x6000
        ctx->r3 = S32(0X6000 << 16);
            goto L_60001F2C;
    }
L_60001F10:
    // 0x60001F10: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x60001F14: addiu       $v1, $v1, 0x6B40
    ctx->r3 = ADD32(ctx->r3, 0X6B40);
    // 0x60001F18: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x60001F1C: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x60001F20: lui         $t1, 0x6000
    ctx->r9 = S32(0X6000 << 16);
    // 0x60001F24: beq         $t0, $a0, L_60001F44
    if (ctx->r8 == ctx->r4) {
        // 0x60001F28: addiu       $t1, $t1, 0x6B3C
        ctx->r9 = ADD32(ctx->r9, 0X6B3C);
            goto L_60001F44;
    }
    // 0x60001F28: addiu       $t1, $t1, 0x6B3C
    ctx->r9 = ADD32(ctx->r9, 0X6B3C);
L_60001F2C:
    // 0x60001F2C: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x60001F30: addiu       $v1, $v1, 0x6B40
    ctx->r3 = ADD32(ctx->r3, 0X6B40);
    // 0x60001F34: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x60001F38: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x60001F3C: beq         $t0, $a0, L_60001FC8
    if (ctx->r8 == ctx->r4) {
        // 0x60001F40: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_60001FC8;
    }
    // 0x60001F40: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
L_60001F44:
    // 0x60001F44: bne         $t0, $a0, L_60001F70
    if (ctx->r8 != ctx->r4) {
        // 0x60001F48: sw          $zero, 0x0($t1)
        MEM_W(0X0, ctx->r9) = 0;
            goto L_60001F70;
    }
    // 0x60001F48: sw          $zero, 0x0($t1)
    MEM_W(0X0, ctx->r9) = 0;
    // 0x60001F4C: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x60001F50: jal         0x6000034C
    // 0x60001F54: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    ovl_stage_world3_34C(rdram, ctx);
        goto after_5;
    // 0x60001F54: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_5:
    // 0x60001F58: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x60001F5C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001F60: sw          $v0, 0x6B58($at)
    MEM_W(0X6B58, ctx->r1) = ctx->r2;
    // 0x60001F64: addiu       $v1, $v1, 0x6B40
    ctx->r3 = ADD32(ctx->r3, 0X6B40);
    // 0x60001F68: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x60001F6C: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
L_60001F70:
    // 0x60001F70: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x60001F74: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001F78: sw          $t8, 0x6AC4($at)
    MEM_W(0X6AC4, ctx->r1) = ctx->r24;
    // 0x60001F7C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001F80: sw          $zero, 0x6ACC($at)
    MEM_W(0X6ACC, ctx->r1) = 0;
    // 0x60001F84: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x60001F88: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001F8C: sw          $a1, 0x6AC8($at)
    MEM_W(0X6AC8, ctx->r1) = ctx->r5;
    // 0x60001F90: addiu       $t9, $a0, 0x1
    ctx->r25 = ADD32(ctx->r4, 0X1);
    // 0x60001F94: slti        $at, $t9, 0x3
    ctx->r1 = SIGNED(ctx->r25) < 0X3 ? 1 : 0;
    // 0x60001F98: bne         $at, $zero, L_60001FA4
    if (ctx->r1 != 0) {
        // 0x60001F9C: sw          $t9, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r25;
            goto L_60001FA4;
    }
    // 0x60001F9C: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x60001FA0: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
L_60001FA4:
    // 0x60001FA4: jal         0x60001710
    // 0x60001FA8: nop

    ovl_stage_world3_1710(rdram, ctx);
        goto after_6;
    // 0x60001FA8: nop

    after_6:
    // 0x60001FAC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001FB0: lwc1        $f8, 0x6AD4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X6AD4);
    // 0x60001FB4: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001FB8: jal         0x6000198C
    // 0x60001FBC: swc1        $f8, 0x6AE0($at)
    MEM_W(0X6AE0, ctx->r1) = ctx->f8.u32l;
    ovl_stage_world3_198C(rdram, ctx);
        goto after_7;
    // 0x60001FBC: swc1        $f8, 0x6AE0($at)
    MEM_W(0X6AE0, ctx->r1) = ctx->f8.u32l;
    after_7:
    // 0x60001FC0: b           L_6000226C
    // 0x60001FC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_6000226C;
    // 0x60001FC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60001FC8:
    // 0x60001FC8: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x60001FCC: lw          $v1, 0x6B44($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6B44);
    // 0x60001FD0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x60001FD4: lw          $t3, 0x30($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X30);
    // 0x60001FD8: lw          $t5, 0x2C($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X2C);
    // 0x60001FDC: div         $zero, $t3, $at
    lo = S32(S64(S32(ctx->r11)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r11)) % S64(S32(ctx->r1)));
    // 0x60001FE0: mflo        $t4
    ctx->r12 = lo;
    // 0x60001FE4: slt         $at, $t4, $t5
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x60001FE8: bne         $at, $zero, L_60002018
    if (ctx->r1 != 0) {
        // 0x60001FEC: slti        $at, $v0, 0x29
        ctx->r1 = SIGNED(ctx->r2) < 0X29 ? 1 : 0;
            goto L_60002018;
    }
    // 0x60001FEC: slti        $at, $v0, 0x29
    ctx->r1 = SIGNED(ctx->r2) < 0X29 ? 1 : 0;
    // 0x60001FF0: beq         $at, $zero, L_60002018
    if (ctx->r1 == 0) {
        // 0x60001FF4: lui         $at, 0x4248
        ctx->r1 = S32(0X4248 << 16);
            goto L_60002018;
    }
    // 0x60001FF4: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x60001FF8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x60001FFC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002000: lwc1        $f16, 0x6B34($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X6B34);
    // 0x60002004: nop

    // 0x60002008: c.le.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl <= ctx->f10.fl;
    // 0x6000200C: nop

    // 0x60002010: bc1f        L_60002018
    if (!c1cs) {
        // 0x60002014: nop
    
            goto L_60002018;
    }
    // 0x60002014: nop

L_60002018:
    // 0x60002018: bne         $a1, $a2, L_60002028
    if (ctx->r5 != ctx->r6) {
        // 0x6000201C: nop
    
            goto L_60002028;
    }
    // 0x6000201C: nop

    // 0x60002020: bne         $t0, $a0, L_6000212C
    if (ctx->r8 != ctx->r4) {
        // 0x60002024: nop
    
            goto L_6000212C;
    }
    // 0x60002024: nop

L_60002028:
    // 0x60002028: jal         0x6000034C
    // 0x6000202C: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    ovl_stage_world3_34C(rdram, ctx);
        goto after_8;
    // 0x6000202C: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_8:
    // 0x60002030: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x60002034: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x60002038: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x6000203C: lui         $t1, 0x6000
    ctx->r9 = S32(0X6000 << 16);
    // 0x60002040: slti        $at, $v0, 0x1B
    ctx->r1 = SIGNED(ctx->r2) < 0X1B ? 1 : 0;
    // 0x60002044: addiu       $t1, $t1, 0x6B3C
    ctx->r9 = ADD32(ctx->r9, 0X6B3C);
    // 0x60002048: addiu       $v1, $v1, 0x6B30
    ctx->r3 = ADD32(ctx->r3, 0X6B30);
    // 0x6000204C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x60002050: bne         $at, $zero, L_60002074
    if (ctx->r1 != 0) {
        // 0x60002054: addiu       $a3, $zero, 0x1
        ctx->r7 = ADD32(0, 0X1);
            goto L_60002074;
    }
    // 0x60002054: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x60002058: lwc1        $f18, 0x4($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X4);
    // 0x6000205C: slti        $at, $v0, 0x3C
    ctx->r1 = SIGNED(ctx->r2) < 0X3C ? 1 : 0;
    // 0x60002060: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x60002064: nop

    // 0x60002068: bc1f        L_600020DC
    if (!c1cs) {
        // 0x6000206C: nop
    
            goto L_600020DC;
    }
    // 0x6000206C: nop

    // 0x60002070: beq         $at, $zero, L_600020DC
    if (ctx->r1 == 0) {
        // 0x60002074: lui         $at, 0x6000
        ctx->r1 = S32(0X6000 << 16);
            goto L_600020DC;
    }
L_60002074:
    // 0x60002074: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002078: sw          $a1, 0x6AC4($at)
    MEM_W(0X6AC4, ctx->r1) = ctx->r5;
    // 0x6000207C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002080: sw          $a3, 0x6ACC($at)
    MEM_W(0X6ACC, ctx->r1) = ctx->r7;
    // 0x60002084: lwc1        $f4, 0x4($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X4);
    // 0x60002088: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x6000208C: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x60002090: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002094: bc1f        L_600020A8
    if (!c1cs) {
        // 0x60002098: nop
    
            goto L_600020A8;
    }
    // 0x60002098: nop

    // 0x6000209C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600020A0: b           L_600020AC
    // 0x600020A4: sw          $t6, 0x6AC8($at)
    MEM_W(0X6AC8, ctx->r1) = ctx->r14;
        goto L_600020AC;
    // 0x600020A4: sw          $t6, 0x6AC8($at)
    MEM_W(0X6AC8, ctx->r1) = ctx->r14;
L_600020A8:
    // 0x600020A8: sw          $a3, 0x6AC8($at)
    MEM_W(0X6AC8, ctx->r1) = ctx->r7;
L_600020AC:
    // 0x600020AC: lw          $t7, 0x0($t1)
    ctx->r15 = MEM_W(ctx->r9, 0X0);
    // 0x600020B0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600020B4: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x600020B8: sw          $t8, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r24;
    // 0x600020BC: lwc1        $f6, 0x6AD4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6AD4);
    // 0x600020C0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600020C4: jal         0x6000198C
    // 0x600020C8: swc1        $f6, 0x6AE0($at)
    MEM_W(0X6AE0, ctx->r1) = ctx->f6.u32l;
    ovl_stage_world3_198C(rdram, ctx);
        goto after_9;
    // 0x600020C8: swc1        $f6, 0x6AE0($at)
    MEM_W(0X6AE0, ctx->r1) = ctx->f6.u32l;
    after_9:
    // 0x600020CC: jal         0x60001914
    // 0x600020D0: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    ovl_stage_world3_1914(rdram, ctx);
        goto after_10;
    // 0x600020D0: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    after_10:
    // 0x600020D4: b           L_6000226C
    // 0x600020D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_6000226C;
    // 0x600020D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600020DC:
    // 0x600020DC: slti        $at, $v0, 0x36
    ctx->r1 = SIGNED(ctx->r2) < 0X36 ? 1 : 0;
    // 0x600020E0: beq         $at, $zero, L_6000212C
    if (ctx->r1 == 0) {
        // 0x600020E4: lui         $at, 0x6000
        ctx->r1 = S32(0X6000 << 16);
            goto L_6000212C;
    }
    // 0x600020E4: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600020E8: sw          $a1, 0x6AC4($at)
    MEM_W(0X6AC4, ctx->r1) = ctx->r5;
    // 0x600020EC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600020F0: sw          $a1, 0x6ACC($at)
    MEM_W(0X6ACC, ctx->r1) = ctx->r5;
    // 0x600020F4: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600020F8: sw          $a3, 0x6AC8($at)
    MEM_W(0X6AC8, ctx->r1) = ctx->r7;
    // 0x600020FC: lw          $t9, 0x0($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X0);
    // 0x60002100: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002104: addiu       $t2, $t9, 0x1
    ctx->r10 = ADD32(ctx->r25, 0X1);
    // 0x60002108: sw          $t2, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r10;
    // 0x6000210C: lwc1        $f8, 0x6AD4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X6AD4);
    // 0x60002110: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002114: jal         0x6000198C
    // 0x60002118: swc1        $f8, 0x6AE0($at)
    MEM_W(0X6AE0, ctx->r1) = ctx->f8.u32l;
    ovl_stage_world3_198C(rdram, ctx);
        goto after_11;
    // 0x60002118: swc1        $f8, 0x6AE0($at)
    MEM_W(0X6AE0, ctx->r1) = ctx->f8.u32l;
    after_11:
    // 0x6000211C: jal         0x60001914
    // 0x60002120: addiu       $a0, $zero, 0x38
    ctx->r4 = ADD32(0, 0X38);
    ovl_stage_world3_1914(rdram, ctx);
        goto after_12;
    // 0x60002120: addiu       $a0, $zero, 0x38
    ctx->r4 = ADD32(0, 0X38);
    after_12:
    // 0x60002124: b           L_6000226C
    // 0x60002128: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_6000226C;
    // 0x60002128: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000212C:
    // 0x6000212C: jal         0x600006DC
    // 0x60002130: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    ovl_stage_world3_6DC(rdram, ctx);
        goto after_13;
    // 0x60002130: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    after_13:
    // 0x60002134: beq         $v0, $zero, L_60002260
    if (ctx->r2 == 0) {
        // 0x60002138: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_60002260;
    }
    // 0x60002138: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x6000213C: blez        $v0, L_60002260
    if (SIGNED(ctx->r2) <= 0) {
        // 0x60002140: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_60002260;
    }
    // 0x60002140: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x60002144: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_60002148:
    // 0x60002148: lw          $t3, 0x58($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X58);
    // 0x6000214C: lui         $a1, 0x6000
    ctx->r5 = S32(0X6000 << 16);
    // 0x60002150: addu        $t4, $t3, $v0
    ctx->r12 = ADD32(ctx->r11, ctx->r2);
    // 0x60002154: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x60002158: addiu       $a1, $a1, 0x6B20
    ctx->r5 = ADD32(ctx->r5, 0X6B20);
    // 0x6000215C: lw          $a0, 0x0($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X0);
    // 0x60002160: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x60002164: sw          $v1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r3;
    // 0x60002168: jal         0x60000418
    // 0x6000216C: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    ovl_stage_world3_418(rdram, ctx);
        goto after_14;
    // 0x6000216C: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_14:
    // 0x60002170: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x60002174: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x60002178: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
    // 0x6000217C: c.le.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl <= ctx->f10.fl;
    // 0x60002180: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x60002184: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x60002188: bc1f        L_60002258
    if (!c1cs) {
        // 0x6000218C: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_60002258;
    }
    // 0x6000218C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x60002190: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x60002194: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002198: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x6000219C: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x600021A0: addiu       $a0, $a0, 0x6B20
    ctx->r4 = ADD32(ctx->r4, 0X6B20);
    // 0x600021A4: lw          $a1, 0x0($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X0);
    // 0x600021A8: jal         0x600003DC
    // 0x600021AC: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    ovl_stage_world3_3DC(rdram, ctx);
        goto after_15;
    // 0x600021AC: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    after_15:
    // 0x600021B0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600021B4: lwc1        $f13, 0x6928($at)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r1, 0X6928);
    // 0x600021B8: lwc1        $f12, 0x692C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X692C);
    // 0x600021BC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600021C0: lwc1        $f16, 0x4C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x600021C4: lwc1        $f5, 0x6930($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X6930);
    // 0x600021C8: lwc1        $f4, 0x6934($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6934);
    // 0x600021CC: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x600021D0: mul.d       $f0, $f18, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f0.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x600021D4: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x600021D8: addiu       $t2, $zero, 0x1E
    ctx->r10 = ADD32(0, 0X1E);
    // 0x600021DC: c.le.d      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.d <= ctx->f0.d;
    // 0x600021E0: nop

    // 0x600021E4: bc1f        L_60002200
    if (!c1cs) {
        // 0x600021E8: nop
    
            goto L_60002200;
    }
    // 0x600021E8: nop

    // 0x600021EC: sub.d       $f6, $f0, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f6.d = ctx->f0.d - ctx->f12.d;
    // 0x600021F0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600021F4: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x600021F8: b           L_60002234
    // 0x600021FC: swc1        $f8, 0x6AE0($at)
    MEM_W(0X6AE0, ctx->r1) = ctx->f8.u32l;
        goto L_60002234;
    // 0x600021FC: swc1        $f8, 0x6AE0($at)
    MEM_W(0X6AE0, ctx->r1) = ctx->f8.u32l;
L_60002200:
    // 0x60002200: mtc1        $zero, $f11
    ctx->f_odd[(11 - 1) * 2] = 0;
    // 0x60002204: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x60002208: nop

    // 0x6000220C: c.lt.d      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.d < ctx->f10.d;
    // 0x60002210: nop

    // 0x60002214: bc1f        L_60002224
    if (!c1cs) {
        // 0x60002218: nop
    
            goto L_60002224;
    }
    // 0x60002218: nop

    // 0x6000221C: b           L_60002228
    // 0x60002220: add.d       $f2, $f0, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f2.d = ctx->f0.d + ctx->f12.d;
        goto L_60002228;
    // 0x60002220: add.d       $f2, $f0, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f2.d = ctx->f0.d + ctx->f12.d;
L_60002224:
    // 0x60002224: mov.d       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.d = ctx->f0.d;
L_60002228:
    // 0x60002228: cvt.s.d     $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f16.fl = CVT_S_D(ctx->f2.d);
    // 0x6000222C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002230: swc1        $f16, 0x6AE0($at)
    MEM_W(0X6AE0, ctx->r1) = ctx->f16.u32l;
L_60002234:
    // 0x60002234: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002238: sw          $zero, 0x6AC4($at)
    MEM_W(0X6AC4, ctx->r1) = 0;
    // 0x6000223C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002240: sw          $t9, 0x6ACC($at)
    MEM_W(0X6ACC, ctx->r1) = ctx->r25;
    // 0x60002244: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002248: sw          $t2, 0x6AC8($at)
    MEM_W(0X6AC8, ctx->r1) = ctx->r10;
    // 0x6000224C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002250: b           L_60002268
    // 0x60002254: sw          $zero, 0x6AE8($at)
    MEM_W(0X6AE8, ctx->r1) = 0;
        goto L_60002268;
    // 0x60002254: sw          $zero, 0x6AE8($at)
    MEM_W(0X6AE8, ctx->r1) = 0;
L_60002258:
    // 0x60002258: bne         $v1, $a2, L_60002148
    if (ctx->r3 != ctx->r6) {
        // 0x6000225C: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_60002148;
    }
    // 0x6000225C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
L_60002260:
    // 0x60002260: jal         0x60001C6C
    // 0x60002264: nop

    ovl_stage_world3_1C6C(rdram, ctx);
        goto after_16;
    // 0x60002264: nop

    after_16:
L_60002268:
    // 0x60002268: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000226C:
    // 0x6000226C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x60002270: jr          $ra
    // 0x60002274: nop

    return;
    // 0x60002274: nop

;}
RECOMP_FUNC void ovl_stage_world3_2278(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002278: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x6000227C: addiu       $v0, $v0, 0x6AF0
    ctx->r2 = ADD32(ctx->r2, 0X6AF0);
    // 0x60002280: lwc1        $f2, 0x0($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X0);
    // 0x60002284: lwc1        $f0, 0x10($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X10);
    // 0x60002288: c.le.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl <= ctx->f12.fl;
    // 0x6000228C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x60002290: bc1f        L_600022CC
    if (!c1cs) {
        // 0x60002294: sw          $a3, 0xC($sp)
        MEM_W(0XC, ctx->r29) = ctx->r7;
            goto L_600022CC;
    }
    // 0x60002294: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x60002298: lui         $at, 0x433E
    ctx->r1 = S32(0X433E << 16);
    // 0x6000229C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x600022A0: lui         $at, 0x43AF
    ctx->r1 = S32(0X43AF << 16);
    // 0x600022A4: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x600022A8: nop

    // 0x600022AC: bc1f        L_600022CC
    if (!c1cs) {
        // 0x600022B0: nop
    
            goto L_600022CC;
    }
    // 0x600022B0: nop

    // 0x600022B4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x600022B8: nop

    // 0x600022BC: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x600022C0: nop

    // 0x600022C4: bc1t        L_6000239C
    if (c1cs) {
        // 0x600022C8: nop
    
            goto L_6000239C;
    }
    // 0x600022C8: nop

L_600022CC:
    // 0x600022CC: lwc1        $f8, 0x8($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X8);
    // 0x600022D0: lwc1        $f0, 0x10($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X10);
    // 0x600022D4: c.le.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl <= ctx->f2.fl;
    // 0x600022D8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x600022DC: bc1f        L_60002314
    if (!c1cs) {
        // 0x600022E0: nop
    
            goto L_60002314;
    }
    // 0x600022E0: nop

    // 0x600022E4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x600022E8: lui         $at, 0x432A
    ctx->r1 = S32(0X432A << 16);
    // 0x600022EC: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x600022F0: nop

    // 0x600022F4: bc1f        L_60002314
    if (!c1cs) {
        // 0x600022F8: nop
    
            goto L_60002314;
    }
    // 0x600022F8: nop

    // 0x600022FC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x60002300: nop

    // 0x60002304: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x60002308: nop

    // 0x6000230C: bc1t        L_6000239C
    if (c1cs) {
        // 0x60002310: nop
    
            goto L_6000239C;
    }
    // 0x60002310: nop

L_60002314:
    // 0x60002314: lwc1        $f2, 0x8($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X8);
    // 0x60002318: lwc1        $f6, 0xC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC);
    // 0x6000231C: c.le.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl <= ctx->f14.fl;
    // 0x60002320: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x60002324: bc1f        L_6000235C
    if (!c1cs) {
        // 0x60002328: nop
    
            goto L_6000235C;
    }
    // 0x60002328: nop

    // 0x6000232C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x60002330: lui         $at, 0x4382
    ctx->r1 = S32(0X4382 << 16);
    // 0x60002334: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x60002338: nop

    // 0x6000233C: bc1f        L_6000235C
    if (!c1cs) {
        // 0x60002340: nop
    
            goto L_6000235C;
    }
    // 0x60002340: nop

    // 0x60002344: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60002348: nop

    // 0x6000234C: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x60002350: nop

    // 0x60002354: bc1t        L_6000239C
    if (c1cs) {
        // 0x60002358: nop
    
            goto L_6000239C;
    }
    // 0x60002358: nop

L_6000235C:
    // 0x6000235C: c.le.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl <= ctx->f2.fl;
    // 0x60002360: lui         $at, 0x438C
    ctx->r1 = S32(0X438C << 16);
    // 0x60002364: bc1f        L_600023A4
    if (!c1cs) {
        // 0x60002368: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_600023A4;
    }
    // 0x60002368: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x6000236C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x60002370: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x60002374: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x60002378: nop

    // 0x6000237C: bc1t        L_6000239C
    if (c1cs) {
        // 0x60002380: nop
    
            goto L_6000239C;
    }
    // 0x60002380: nop

    // 0x60002384: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x60002388: nop

    // 0x6000238C: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x60002390: nop

    // 0x60002394: bc1f        L_600023A4
    if (!c1cs) {
        // 0x60002398: nop
    
            goto L_600023A4;
    }
    // 0x60002398: nop

L_6000239C:
    // 0x6000239C: jr          $ra
    // 0x600023A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x600023A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_600023A4:
    // 0x600023A4: jr          $ra
    // 0x600023A8: nop

    return;
    // 0x600023A8: nop

;}
RECOMP_FUNC void ovl_stage_world3_23AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600023AC: lui         $t6, 0x6000
    ctx->r14 = S32(0X6000 << 16);
    // 0x600023B0: lui         $t7, 0x6000
    ctx->r15 = S32(0X6000 << 16);
    // 0x600023B4: lw          $t7, 0x6B58($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X6B58);
    // 0x600023B8: lw          $t6, 0x6B40($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X6B40);
    // 0x600023BC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x600023C0: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x600023C4: andi        $t9, $t8, 0x3
    ctx->r25 = ctx->r24 & 0X3;
    // 0x600023C8: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x600023CC: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x600023D0: lui         $t1, 0x6000
    ctx->r9 = S32(0X6000 << 16);
    // 0x600023D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600023D8: addiu       $t1, $t1, 0x68BC
    ctx->r9 = ADD32(ctx->r9, 0X68BC);
    // 0x600023DC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x600023E0: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600023E4: addiu       $a0, $a0, 0x6AF0
    ctx->r4 = ADD32(ctx->r4, 0X6AF0);
    // 0x600023E8: addu        $a1, $t0, $t1
    ctx->r5 = ADD32(ctx->r8, ctx->r9);
    // 0x600023EC: jal         0x600003DC
    // 0x600023F0: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    ovl_stage_world3_3DC(rdram, ctx);
        goto after_0;
    // 0x600023F0: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    after_0:
    // 0x600023F4: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600023F8: lwc1        $f15, 0x6938($at)
    ctx->f_odd[(15 - 1) * 2] = MEM_W(ctx->r1, 0X6938);
    // 0x600023FC: lwc1        $f14, 0x693C($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X693C);
    // 0x60002400: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002404: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x60002408: lwc1        $f9, 0x6940($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X6940);
    // 0x6000240C: lwc1        $f8, 0x6944($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X6944);
    // 0x60002410: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x60002414: mul.d       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f0.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x60002418: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000241C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x60002420: c.le.d      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.d <= ctx->f0.d;
    // 0x60002424: nop

    // 0x60002428: bc1f        L_60002438
    if (!c1cs) {
        // 0x6000242C: nop
    
            goto L_60002438;
    }
    // 0x6000242C: nop

    // 0x60002430: b           L_60002464
    // 0x60002434: sub.d       $f2, $f0, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f14.d); 
    ctx->f2.d = ctx->f0.d - ctx->f14.d;
        goto L_60002464;
    // 0x60002434: sub.d       $f2, $f0, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f14.d); 
    ctx->f2.d = ctx->f0.d - ctx->f14.d;
L_60002438:
    // 0x60002438: mtc1        $zero, $f11
    ctx->f_odd[(11 - 1) * 2] = 0;
    // 0x6000243C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x60002440: nop

    // 0x60002444: c.lt.d      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.d < ctx->f10.d;
    // 0x60002448: nop

    // 0x6000244C: bc1f        L_6000245C
    if (!c1cs) {
        // 0x60002450: nop
    
            goto L_6000245C;
    }
    // 0x60002450: nop

    // 0x60002454: b           L_60002460
    // 0x60002458: add.d       $f12, $f0, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f14.d); 
    ctx->f12.d = ctx->f0.d + ctx->f14.d;
        goto L_60002460;
    // 0x60002458: add.d       $f12, $f0, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f14.d); 
    ctx->f12.d = ctx->f0.d + ctx->f14.d;
L_6000245C:
    // 0x6000245C: mov.d       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.d = ctx->f0.d;
L_60002460:
    // 0x60002460: mov.d       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.d = ctx->f12.d;
L_60002464:
    // 0x60002464: jr          $ra
    // 0x60002468: cvt.s.d     $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f0.fl = CVT_S_D(ctx->f2.d);
    return;
    // 0x60002468: cvt.s.d     $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f0.fl = CVT_S_D(ctx->f2.d);
;}
RECOMP_FUNC void ovl_stage_world3_246C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000246C: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x60002470: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x60002474: lui         $at, 0x410C
    ctx->r1 = S32(0X410C << 16);
    // 0x60002478: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x6000247C: swc1        $f30, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f30.u32l;
    // 0x60002480: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x60002484: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x60002488: swc1        $f28, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f28.u32l;
    // 0x6000248C: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x60002490: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x60002494: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x60002498: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000249C: lwc1        $f26, 0x6948($at)
    ctx->f26.u32l = MEM_W(ctx->r1, 0X6948);
    // 0x600024A0: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x600024A4: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x600024A8: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x600024AC: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x600024B0: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x600024B4: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x600024B8: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x600024BC: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x600024C0: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x600024C4: lui         $s1, 0x6000
    ctx->r17 = S32(0X6000 << 16);
    // 0x600024C8: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x600024CC: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x600024D0: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x600024D4: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x600024D8: swc1        $f31, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x600024DC: swc1        $f29, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x600024E0: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x600024E4: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x600024E8: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x600024EC: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x600024F0: addiu       $s1, $s1, 0x6880
    ctx->r17 = ADD32(ctx->r17, 0X6880);
    // 0x600024F4: addiu       $s2, $sp, 0x70
    ctx->r18 = ADD32(ctx->r29, 0X70);
    // 0x600024F8: addiu       $s3, $zero, -0x100
    ctx->r19 = ADD32(0, -0X100);
    // 0x600024FC: addiu       $s4, $zero, 0x8
    ctx->r20 = ADD32(0, 0X8);
    // 0x60002500: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x60002504: addiu       $s6, $zero, 0x2
    ctx->r22 = ADD32(0, 0X2);
    // 0x60002508: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_6000250C:
    // 0x6000250C: mul.s       $f4, $f20, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f26.fl);
    // 0x60002510: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x60002514: swc1        $f24, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f24.u32l;
    // 0x60002518: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x6000251C: mul.s       $f6, $f4, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f28.fl);
    // 0x60002520: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x60002524: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x60002528: nop

    // 0x6000252C: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x60002530: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x60002534: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x60002538: nop

    // 0x6000253C: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x60002540: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x60002544: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x60002548: or          $t8, $t7, $s3
    ctx->r24 = ctx->r15 | ctx->r19;
    // 0x6000254C: jal         0x600006C4
    // 0x60002550: sw          $t8, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r24;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_0;
    // 0x60002550: sw          $t8, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r24;
    after_0:
    // 0x60002554: jal         0x600009D0
    // 0x60002558: add.s       $f20, $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f22.fl;
    ovl_stage_world3_9D0(rdram, ctx);
        goto after_1;
    // 0x60002558: add.s       $f20, $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f22.fl;
    after_1:
    // 0x6000255C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60002560: bne         $s0, $s4, L_6000250C
    if (ctx->r16 != ctx->r20) {
        // 0x60002564: nop
    
            goto L_6000250C;
    }
    // 0x60002564: nop

    // 0x60002568: neg.s       $f22, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = -ctx->f22.fl;
    // 0x6000256C: jal         0x600009D0
    // 0x60002570: mov.s       $f20, $f30
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 30);
    ctx->f20.fl = ctx->f30.fl;
    ovl_stage_world3_9D0(rdram, ctx);
        goto after_2;
    // 0x60002570: mov.s       $f20, $f30
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 30);
    ctx->f20.fl = ctx->f30.fl;
    after_2:
    // 0x60002574: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x60002578: bne         $s5, $s6, L_6000250C
    if (ctx->r21 != ctx->r22) {
        // 0x6000257C: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_6000250C;
    }
    // 0x6000257C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60002580: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x60002584: swc1        $f24, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f24.u32l;
    // 0x60002588: sw          $zero, 0x74($sp)
    MEM_W(0X74, ctx->r29) = 0;
    // 0x6000258C: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x60002590: jal         0x600006C4
    // 0x60002594: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_3;
    // 0x60002594: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_3:
    // 0x60002598: jal         0x600009AC
    // 0x6000259C: nop

    ovl_stage_world3_9AC(rdram, ctx);
        goto after_4;
    // 0x6000259C: nop

    after_4:
    // 0x600025A0: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x600025A4: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x600025A8: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x600025AC: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x600025B0: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x600025B4: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x600025B8: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x600025BC: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x600025C0: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x600025C4: lwc1        $f29, 0x38($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x600025C8: lwc1        $f28, 0x3C($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x600025CC: lwc1        $f31, 0x40($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x600025D0: lwc1        $f30, 0x44($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X44);
    // 0x600025D4: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x600025D8: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x600025DC: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x600025E0: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x600025E4: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x600025E8: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x600025EC: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x600025F0: jr          $ra
    // 0x600025F4: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    return;
    // 0x600025F4: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void ovl_stage_world3_25F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600025F8: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x600025FC: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x60002600: lui         $s1, 0x6000
    ctx->r17 = S32(0X6000 << 16);
    // 0x60002604: addiu       $s1, $s1, 0x6AF0
    ctx->r17 = ADD32(ctx->r17, 0X6AF0);
    // 0x60002608: lui         $at, 0xC2C8
    ctx->r1 = S32(0XC2C8 << 16);
    // 0x6000260C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60002610: lwc1        $f6, 0x4($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X4);
    // 0x60002614: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x60002618: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x6000261C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x60002620: bc1f        L_600027D8
    if (!c1cs) {
        // 0x60002624: lui         $a0, 0x6000
        ctx->r4 = S32(0X6000 << 16);
            goto L_600027D8;
    }
    // 0x60002624: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002628: lw          $a0, 0x6880($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6880);
    // 0x6000262C: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x60002630: jal         0x600006C4
    // 0x60002634: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_0;
    // 0x60002634: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    after_0:
    // 0x60002638: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x6000263C: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x60002640: jal         0x60001944
    // 0x60002644: swc1        $f8, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->f8.u32l;
    ovl_stage_world3_1944(rdram, ctx);
        goto after_1;
    // 0x60002644: swc1        $f8, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->f8.u32l;
    after_1:
    // 0x60002648: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x6000264C: addiu       $a2, $a2, 0x6B50
    ctx->r6 = ADD32(ctx->r6, 0X6B50);
    // 0x60002650: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x60002654: jal         0x60000808
    // 0x60002658: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world3_808(rdram, ctx);
        goto after_2;
    // 0x60002658: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x6000265C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x60002660: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002664: sw          $t7, 0x6AC4($at)
    MEM_W(0X6AC4, ctx->r1) = ctx->r15;
    // 0x60002668: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000266C: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x60002670: sw          $t8, 0x6AC8($at)
    MEM_W(0X6AC8, ctx->r1) = ctx->r24;
    // 0x60002674: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002678: addiu       $t9, $zero, 0x7
    ctx->r25 = ADD32(0, 0X7);
    // 0x6000267C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x60002680: sw          $zero, 0x6AE8($at)
    MEM_W(0X6AE8, ctx->r1) = 0;
    // 0x60002684: sw          $t9, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r25;
    // 0x60002688: sw          $t0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r8;
    // 0x6000268C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x60002690: jal         0x600007F0
    // 0x60002694: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    ovl_stage_world3_7F0(rdram, ctx);
        goto after_3;
    // 0x60002694: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    after_3:
    // 0x60002698: jal         0x60001914
    // 0x6000269C: addiu       $a0, $zero, 0x34
    ctx->r4 = ADD32(0, 0X34);
    ovl_stage_world3_1914(rdram, ctx);
        goto after_4;
    // 0x6000269C: addiu       $a0, $zero, 0x34
    ctx->r4 = ADD32(0, 0X34);
    after_4:
    // 0x600026A0: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600026A4: addiu       $a0, $a0, 0x246C
    ctx->r4 = ADD32(ctx->r4, 0X246C);
    // 0x600026A8: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x600026AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x600026B0: jal         0x60000994
    // 0x600026B4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world3_994(rdram, ctx);
        goto after_5;
    // 0x600026B4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
    // 0x600026B8: jal         0x60000244
    // 0x600026BC: addiu       $a0, $zero, 0x238
    ctx->r4 = ADD32(0, 0X238);
    ovl_stage_world3_244(rdram, ctx);
        goto after_6;
    // 0x600026BC: addiu       $a0, $zero, 0x238
    ctx->r4 = ADD32(0, 0X238);
    after_6:
    // 0x600026C0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x600026C4: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
L_600026C8:
    // 0x600026C8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x600026CC: lwc1        $f10, 0x4($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X4);
    // 0x600026D0: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600026D4: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x600026D8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x600026DC: swc1        $f18, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f18.u32l;
    // 0x600026E0: lw          $a0, 0x6880($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6880);
    // 0x600026E4: jal         0x600006C4
    // 0x600026E8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_7;
    // 0x600026E8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_7:
    // 0x600026EC: jal         0x600009D0
    // 0x600026F0: nop

    ovl_stage_world3_9D0(rdram, ctx);
        goto after_8;
    // 0x600026F0: nop

    after_8:
    // 0x600026F4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x600026F8: slti        $at, $s0, 0x14
    ctx->r1 = SIGNED(ctx->r16) < 0X14 ? 1 : 0;
    // 0x600026FC: bne         $at, $zero, L_600026C8
    if (ctx->r1 != 0) {
        // 0x60002700: lui         $at, 0x4248
        ctx->r1 = S32(0X4248 << 16);
            goto L_600026C8;
    }
    // 0x60002700: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x60002704: jal         0x60000340
    // 0x60002708: nop

    ovl_stage_world3_340(rdram, ctx);
        goto after_9;
    // 0x60002708: nop

    after_9:
    // 0x6000270C: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x60002710: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60002714: cvt.s.d     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f4.fl = CVT_S_D(ctx->f0.d);
    // 0x60002718: lui         $at, 0x43AF
    ctx->r1 = S32(0X43AF << 16);
    // 0x6000271C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x60002720: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x60002724: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x60002728: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x6000272C: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x60002730: swc1        $f18, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f18.u32l;
    // 0x60002734: jal         0x60000340
    // 0x60002738: swc1        $f16, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f16.u32l;
    ovl_stage_world3_340(rdram, ctx);
        goto after_10;
    // 0x60002738: swc1        $f16, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f16.u32l;
    after_10:
    // 0x6000273C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002740: lwc1        $f6, 0x694C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X694C);
    // 0x60002744: cvt.s.d     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f4.fl = CVT_S_D(ctx->f0.d);
    // 0x60002748: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000274C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x60002750: lwc1        $f10, 0x6950($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X6950);
    // 0x60002754: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002758: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x6000275C: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x60002760: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x60002764: swc1        $f16, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f16.u32l;
    // 0x60002768: lw          $a0, 0x6880($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6880);
    // 0x6000276C: jal         0x600006C4
    // 0x60002770: nop

    ovl_stage_world3_6C4(rdram, ctx);
        goto after_11;
    // 0x60002770: nop

    after_11:
    // 0x60002774: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60002778: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
L_6000277C:
    // 0x6000277C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60002780: lwc1        $f18, 0x4($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X4);
    // 0x60002784: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002788: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x6000278C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x60002790: swc1        $f6, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f6.u32l;
    // 0x60002794: lw          $a0, 0x6880($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6880);
    // 0x60002798: jal         0x600006C4
    // 0x6000279C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_12;
    // 0x6000279C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_12:
    // 0x600027A0: jal         0x600009D0
    // 0x600027A4: nop

    ovl_stage_world3_9D0(rdram, ctx);
        goto after_13;
    // 0x600027A4: nop

    after_13:
    // 0x600027A8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x600027AC: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x600027B0: bne         $s0, $at, L_6000277C
    if (ctx->r16 != ctx->r1) {
        // 0x600027B4: lui         $at, 0x4248
        ctx->r1 = S32(0X4248 << 16);
            goto L_6000277C;
    }
    // 0x600027B4: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x600027B8: addiu       $t1, $zero, 0x7
    ctx->r9 = ADD32(0, 0X7);
    // 0x600027BC: sw          $t1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r9;
    // 0x600027C0: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
    // 0x600027C4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x600027C8: jal         0x600007F0
    // 0x600027CC: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    ovl_stage_world3_7F0(rdram, ctx);
        goto after_14;
    // 0x600027CC: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    after_14:
    // 0x600027D0: jal         0x60001914
    // 0x600027D4: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    ovl_stage_world3_1914(rdram, ctx);
        goto after_15;
    // 0x600027D4: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    after_15:
L_600027D8:
    // 0x600027D8: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x600027DC: lw          $v1, 0x6B48($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6B48);
    // 0x600027E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x600027E4: andi        $t2, $v1, 0x1
    ctx->r10 = ctx->r3 & 0X1;
    // 0x600027E8: beq         $t2, $zero, L_600027F8
    if (ctx->r10 == 0) {
        // 0x600027EC: lui         $a2, 0x6000
        ctx->r6 = S32(0X6000 << 16);
            goto L_600027F8;
    }
    // 0x600027EC: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x600027F0: b           L_600027F8
    // 0x600027F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_600027F8;
    // 0x600027F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_600027F8:
    // 0x600027F8: beq         $v0, $zero, L_6000285C
    if (ctx->r2 == 0) {
        // 0x600027FC: addiu       $a2, $a2, 0x6AC4
        ctx->r6 = ADD32(ctx->r6, 0X6AC4);
            goto L_6000285C;
    }
    // 0x600027FC: addiu       $a2, $a2, 0x6AC4
    ctx->r6 = ADD32(ctx->r6, 0X6AC4);
    // 0x60002800: jal         0x600018F0
    // 0x60002804: nop

    ovl_stage_world3_18F0(rdram, ctx);
        goto after_16;
    // 0x60002804: nop

    after_16:
    // 0x60002808: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x6000280C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x60002810: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60002814: addiu       $v0, $v0, 0x68EC
    ctx->r2 = ADD32(ctx->r2, 0X68EC);
    // 0x60002818: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000281C: lwc1        $f10, 0x6954($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X6954);
    // 0x60002820: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x60002824: ori         $a0, $zero, 0x8000
    ctx->r4 = 0 | 0X8000;
    // 0x60002828: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x6000282C: swc1        $f16, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f16.u32l;
    // 0x60002830: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x60002834: nop

    // 0x60002838: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x6000283C: nop

    // 0x60002840: bc1f        L_60002D9C
    if (!c1cs) {
        // 0x60002844: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_60002D9C;
    }
    // 0x60002844: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x60002848: sub.s       $f18, $f0, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x6000284C: jal         0x600018C8
    // 0x60002850: swc1        $f18, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f18.u32l;
    ovl_stage_world3_18C8(rdram, ctx);
        goto after_17;
    // 0x60002850: swc1        $f18, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f18.u32l;
    after_17:
    // 0x60002854: b           L_60002D9C
    // 0x60002858: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_60002D9C;
    // 0x60002858: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_6000285C:
    // 0x6000285C: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x60002860: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x60002864: beq         $v0, $zero, L_60002890
    if (ctx->r2 == 0) {
        // 0x60002868: lui         $t3, 0x6000
        ctx->r11 = S32(0X6000 << 16);
            goto L_60002890;
    }
    // 0x60002868: lui         $t3, 0x6000
    ctx->r11 = S32(0X6000 << 16);
    // 0x6000286C: beq         $v0, $at, L_60002B18
    if (ctx->r2 == ctx->r1) {
        // 0x60002870: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_60002B18;
    }
    // 0x60002870: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x60002874: beq         $v0, $a1, L_60002B54
    if (ctx->r2 == ctx->r5) {
        // 0x60002878: andi        $t3, $v1, 0x8000
        ctx->r11 = ctx->r3 & 0X8000;
            goto L_60002B54;
    }
    // 0x60002878: andi        $t3, $v1, 0x8000
    ctx->r11 = ctx->r3 & 0X8000;
    // 0x6000287C: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x60002880: beq         $v0, $at, L_60002D10
    if (ctx->r2 == ctx->r1) {
        // 0x60002884: lui         $v1, 0x6000
        ctx->r3 = S32(0X6000 << 16);
            goto L_60002D10;
    }
    // 0x60002884: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x60002888: b           L_60002D9C
    // 0x6000288C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_60002D9C;
    // 0x6000288C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_60002890:
    // 0x60002890: lw          $t3, 0x6AE8($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X6AE8);
    // 0x60002894: nop

    // 0x60002898: slti        $at, $t3, 0x3
    ctx->r1 = SIGNED(ctx->r11) < 0X3 ? 1 : 0;
    // 0x6000289C: bne         $at, $zero, L_60002A98
    if (ctx->r1 != 0) {
        // 0x600028A0: nop
    
            goto L_60002A98;
    }
    // 0x600028A0: nop

    // 0x600028A4: jal         0x60001BD0
    // 0x600028A8: nop

    ovl_stage_world3_1BD0(rdram, ctx);
        goto after_18;
    // 0x600028A8: nop

    after_18:
    // 0x600028AC: beq         $v0, $zero, L_60002A98
    if (ctx->r2 == 0) {
        // 0x600028B0: lui         $v1, 0x6000
        ctx->r3 = S32(0X6000 << 16);
            goto L_60002A98;
    }
    // 0x600028B0: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x600028B4: addiu       $v1, $v1, 0x6ACC
    ctx->r3 = ADD32(ctx->r3, 0X6ACC);
    // 0x600028B8: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x600028BC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x600028C0: bne         $t4, $at, L_60002A88
    if (ctx->r12 != ctx->r1) {
        // 0x600028C4: addiu       $t5, $zero, 0x1E
        ctx->r13 = ADD32(0, 0X1E);
            goto L_60002A88;
    }
    // 0x600028C4: addiu       $t5, $zero, 0x1E
    ctx->r13 = ADD32(0, 0X1E);
    // 0x600028C8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600028CC: sw          $zero, 0x6AC4($at)
    MEM_W(0X6AC4, ctx->r1) = 0;
    // 0x600028D0: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x600028D4: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600028D8: sw          $t5, 0x6AC8($at)
    MEM_W(0X6AC8, ctx->r1) = ctx->r13;
    // 0x600028DC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600028E0: addiu       $t6, $zero, -0x1E
    ctx->r14 = ADD32(0, -0X1E);
    // 0x600028E4: jal         0x60000340
    // 0x600028E8: sw          $t6, 0x6AE8($at)
    MEM_W(0X6AE8, ctx->r1) = ctx->r14;
    ovl_stage_world3_340(rdram, ctx);
        goto after_19;
    // 0x600028E8: sw          $t6, 0x6AE8($at)
    MEM_W(0X6AE8, ctx->r1) = ctx->r14;
    after_19:
    // 0x600028EC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600028F0: lwc1        $f13, 0x6958($at)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r1, 0X6958);
    // 0x600028F4: lwc1        $f12, 0x695C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X695C);
    // 0x600028F8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600028FC: lwc1        $f15, 0x6960($at)
    ctx->f_odd[(15 - 1) * 2] = MEM_W(ctx->r1, 0X6960);
    // 0x60002900: lwc1        $f14, 0x6964($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X6964);
    // 0x60002904: lui         $s0, 0x6000
    ctx->r16 = S32(0X6000 << 16);
    // 0x60002908: addiu       $s0, $s0, 0x6AE0
    ctx->r16 = ADD32(ctx->r16, 0X6AE0);
    // 0x6000290C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x60002910: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60002914: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x60002918: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x6000291C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x60002920: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x60002924: mul.d       $f4, $f0, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f4.d = MUL_D(ctx->f0.d, ctx->f12.d);
    // 0x60002928: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x6000292C: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x60002930: add.d       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f18.d); 
    ctx->f6.d = ctx->f4.d + ctx->f18.d;
    // 0x60002934: c.le.d      $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f14.d <= ctx->f6.d;
    // 0x60002938: nop

    // 0x6000293C: bc1f        L_6000299C
    if (!c1cs) {
        // 0x60002940: nop
    
            goto L_6000299C;
    }
    // 0x60002940: nop

    // 0x60002944: jal         0x60000340
    // 0x60002948: nop

    ovl_stage_world3_340(rdram, ctx);
        goto after_20;
    // 0x60002948: nop

    after_20:
    // 0x6000294C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002950: lwc1        $f13, 0x6968($at)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r1, 0X6968);
    // 0x60002954: lwc1        $f12, 0x696C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X696C);
    // 0x60002958: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000295C: lwc1        $f15, 0x6970($at)
    ctx->f_odd[(15 - 1) * 2] = MEM_W(ctx->r1, 0X6970);
    // 0x60002960: lwc1        $f14, 0x6974($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X6974);
    // 0x60002964: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x60002968: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x6000296C: lwc1        $f8, 0x0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X0);
    // 0x60002970: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x60002974: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x60002978: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x6000297C: mul.d       $f8, $f0, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f8.d = MUL_D(ctx->f0.d, ctx->f12.d);
    // 0x60002980: sub.s       $f18, $f16, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x60002984: cvt.d.s     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f6.d = CVT_D_S(ctx->f18.fl);
    // 0x60002988: add.d       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = ctx->f8.d + ctx->f6.d;
    // 0x6000298C: sub.d       $f16, $f10, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f14.d); 
    ctx->f16.d = ctx->f10.d - ctx->f14.d;
    // 0x60002990: cvt.s.d     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f4.fl = CVT_S_D(ctx->f16.d);
    // 0x60002994: b           L_60002D98
    // 0x60002998: swc1        $f4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f4.u32l;
        goto L_60002D98;
    // 0x60002998: swc1        $f4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f4.u32l;
L_6000299C:
    // 0x6000299C: jal         0x60000340
    // 0x600029A0: nop

    ovl_stage_world3_340(rdram, ctx);
        goto after_21;
    // 0x600029A0: nop

    after_21:
    // 0x600029A4: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600029A8: lwc1        $f13, 0x6978($at)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r1, 0X6978);
    // 0x600029AC: lwc1        $f12, 0x697C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X697C);
    // 0x600029B0: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x600029B4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x600029B8: lwc1        $f18, 0x0($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X0);
    // 0x600029BC: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x600029C0: add.s       $f6, $f18, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x600029C4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x600029C8: mul.d       $f18, $f0, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f18.d = MUL_D(ctx->f0.d, ctx->f12.d);
    // 0x600029CC: sub.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x600029D0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x600029D4: cvt.d.s     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f4.d = CVT_D_S(ctx->f16.fl);
    // 0x600029D8: mtc1        $zero, $f7
    ctx->f_odd[(7 - 1) * 2] = 0;
    // 0x600029DC: add.d       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = ctx->f18.d + ctx->f4.d;
    // 0x600029E0: c.lt.d      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.d < ctx->f6.d;
    // 0x600029E4: nop

    // 0x600029E8: bc1f        L_60002A40
    if (!c1cs) {
        // 0x600029EC: nop
    
            goto L_60002A40;
    }
    // 0x600029EC: nop

    // 0x600029F0: jal         0x60000340
    // 0x600029F4: nop

    ovl_stage_world3_340(rdram, ctx);
        goto after_22;
    // 0x600029F4: nop

    after_22:
    // 0x600029F8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600029FC: lwc1        $f13, 0x6988($at)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r1, 0X6988);
    // 0x60002A00: lwc1        $f12, 0x698C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X698C);
    // 0x60002A04: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002A08: lwc1        $f15, 0x6990($at)
    ctx->f_odd[(15 - 1) * 2] = MEM_W(ctx->r1, 0X6990);
    // 0x60002A0C: lwc1        $f14, 0x6994($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X6994);
    // 0x60002A10: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x60002A14: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x60002A18: lwc1        $f10, 0x0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X0);
    // 0x60002A1C: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x60002A20: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x60002A24: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60002A28: mul.d       $f10, $f0, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f10.d = MUL_D(ctx->f0.d, ctx->f12.d);
    // 0x60002A2C: sub.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x60002A30: cvt.d.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f6.d = CVT_D_S(ctx->f8.fl);
    // 0x60002A34: add.d       $f16, $f10, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f6.d); 
    ctx->f16.d = ctx->f10.d + ctx->f6.d;
    // 0x60002A38: b           L_60002A7C
    // 0x60002A3C: add.d       $f2, $f16, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f14.d); 
    ctx->f2.d = ctx->f16.d + ctx->f14.d;
        goto L_60002A7C;
    // 0x60002A3C: add.d       $f2, $f16, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f14.d); 
    ctx->f2.d = ctx->f16.d + ctx->f14.d;
L_60002A40:
    // 0x60002A40: jal         0x60000340
    // 0x60002A44: nop

    ovl_stage_world3_340(rdram, ctx);
        goto after_23;
    // 0x60002A44: nop

    after_23:
    // 0x60002A48: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002A4C: lwc1        $f13, 0x6998($at)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r1, 0X6998);
    // 0x60002A50: lwc1        $f12, 0x699C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X699C);
    // 0x60002A54: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x60002A58: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60002A5C: lwc1        $f18, 0x0($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X0);
    // 0x60002A60: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x60002A64: add.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x60002A68: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x60002A6C: mul.d       $f18, $f0, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f18.d = MUL_D(ctx->f0.d, ctx->f12.d);
    // 0x60002A70: sub.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x60002A74: cvt.d.s     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f16.d = CVT_D_S(ctx->f6.fl);
    // 0x60002A78: add.d       $f2, $f18, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f16.d); 
    ctx->f2.d = ctx->f18.d + ctx->f16.d;
L_60002A7C:
    // 0x60002A7C: cvt.s.d     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f4.fl = CVT_S_D(ctx->f2.d);
    // 0x60002A80: b           L_60002D98
    // 0x60002A84: swc1        $f4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f4.u32l;
        goto L_60002D98;
    // 0x60002A84: swc1        $f4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f4.u32l;
L_60002A88:
    // 0x60002A88: jal         0x60001C6C
    // 0x60002A8C: nop

    ovl_stage_world3_1C6C(rdram, ctx);
        goto after_24;
    // 0x60002A8C: nop

    after_24:
    // 0x60002A90: b           L_60002D9C
    // 0x60002A94: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_60002D9C;
    // 0x60002A94: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_60002A98:
    // 0x60002A98: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60002A9C: addiu       $v0, $v0, 0x6AC8
    ctx->r2 = ADD32(ctx->r2, 0X6AC8);
    // 0x60002AA0: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x60002AA4: lui         $s0, 0x6000
    ctx->r16 = S32(0X6000 << 16);
    // 0x60002AA8: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x60002AAC: beq         $t8, $zero, L_60002B08
    if (ctx->r24 == 0) {
        // 0x60002AB0: sw          $t8, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r24;
            goto L_60002B08;
    }
    // 0x60002AB0: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x60002AB4: lui         $at, 0x43C3
    ctx->r1 = S32(0X43C3 << 16);
    // 0x60002AB8: addiu       $s0, $s0, 0x6AE0
    ctx->r16 = ADD32(ctx->r16, 0X6AE0);
    // 0x60002ABC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x60002AC0: lwc1        $f8, 0x0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X0);
    // 0x60002AC4: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002AC8: lwc1        $f14, 0x69A0($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X69A0);
    // 0x60002ACC: lui         $a2, 0x4463
    ctx->r6 = S32(0X4463 << 16);
    // 0x60002AD0: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x60002AD4: lui         $a3, 0x44AA
    ctx->r7 = S32(0X44AA << 16);
    // 0x60002AD8: jal         0x60002278
    // 0x60002ADC: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    ovl_stage_world3_2278(rdram, ctx);
        goto after_25;
    // 0x60002ADC: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_25:
    // 0x60002AE0: beq         $v0, $zero, L_60002AF8
    if (ctx->r2 == 0) {
        // 0x60002AE4: nop
    
            goto L_60002AF8;
    }
    // 0x60002AE4: nop

    // 0x60002AE8: jal         0x60001DB4
    // 0x60002AEC: nop

    ovl_stage_world3_1DB4(rdram, ctx);
        goto after_26;
    // 0x60002AEC: nop

    after_26:
    // 0x60002AF0: b           L_60002D9C
    // 0x60002AF4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_60002D9C;
    // 0x60002AF4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_60002AF8:
    // 0x60002AF8: jal         0x6000198C
    // 0x60002AFC: nop

    ovl_stage_world3_198C(rdram, ctx);
        goto after_27;
    // 0x60002AFC: nop

    after_27:
    // 0x60002B00: b           L_60002D9C
    // 0x60002B04: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_60002D9C;
    // 0x60002B04: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_60002B08:
    // 0x60002B08: jal         0x60001DB4
    // 0x60002B0C: nop

    ovl_stage_world3_1DB4(rdram, ctx);
        goto after_28;
    // 0x60002B0C: nop

    after_28:
    // 0x60002B10: b           L_60002D9C
    // 0x60002B14: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_60002D9C;
    // 0x60002B14: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_60002B18:
    // 0x60002B18: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60002B1C: addiu       $v0, $v0, 0x6AC8
    ctx->r2 = ADD32(ctx->r2, 0X6AC8);
    // 0x60002B20: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x60002B24: nop

    // 0x60002B28: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x60002B2C: beq         $t1, $zero, L_60002B44
    if (ctx->r9 == 0) {
        // 0x60002B30: sw          $t1, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r9;
            goto L_60002B44;
    }
    // 0x60002B30: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x60002B34: jal         0x6000196C
    // 0x60002B38: nop

    ovl_stage_world3_196C(rdram, ctx);
        goto after_29;
    // 0x60002B38: nop

    after_29:
    // 0x60002B3C: b           L_60002D9C
    // 0x60002B40: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_60002D9C;
    // 0x60002B40: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_60002B44:
    // 0x60002B44: jal         0x60001DB4
    // 0x60002B48: nop

    ovl_stage_world3_1DB4(rdram, ctx);
        goto after_30;
    // 0x60002B48: nop

    after_30:
    // 0x60002B4C: b           L_60002D9C
    // 0x60002B50: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_60002D9C;
    // 0x60002B50: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_60002B54:
    // 0x60002B54: beq         $t3, $zero, L_60002B64
    if (ctx->r11 == 0) {
        // 0x60002B58: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_60002B64;
    }
    // 0x60002B58: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x60002B5C: b           L_60002B64
    // 0x60002B60: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_60002B64;
    // 0x60002B60: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_60002B64:
    // 0x60002B64: beq         $v0, $zero, L_60002C18
    if (ctx->r2 == 0) {
        // 0x60002B68: lui         $v1, 0x6000
        ctx->r3 = S32(0X6000 << 16);
            goto L_60002C18;
    }
    // 0x60002B68: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x60002B6C: addiu       $v1, $v1, 0x6ACC
    ctx->r3 = ADD32(ctx->r3, 0X6ACC);
    // 0x60002B70: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x60002B74: lui         $s0, 0x6000
    ctx->r16 = S32(0X6000 << 16);
    // 0x60002B78: bne         $t4, $zero, L_60002D98
    if (ctx->r12 != 0) {
        // 0x60002B7C: addiu       $s0, $s0, 0x6AE0
        ctx->r16 = ADD32(ctx->r16, 0X6AE0);
            goto L_60002D98;
    }
    // 0x60002B7C: addiu       $s0, $s0, 0x6AE0
    ctx->r16 = ADD32(ctx->r16, 0X6AE0);
    // 0x60002B80: lui         $at, 0x43B9
    ctx->r1 = S32(0X43B9 << 16);
    // 0x60002B84: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x60002B88: lwc1        $f10, 0x0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X0);
    // 0x60002B8C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002B90: lwc1        $f14, 0x69A4($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X69A4);
    // 0x60002B94: lui         $a2, 0x4468
    ctx->r6 = S32(0X4468 << 16);
    // 0x60002B98: lui         $a3, 0x44AC
    ctx->r7 = S32(0X44AC << 16);
    // 0x60002B9C: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x60002BA0: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x60002BA4: jal         0x60002278
    // 0x60002BA8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    ovl_stage_world3_2278(rdram, ctx);
        goto after_31;
    // 0x60002BA8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_31:
    // 0x60002BAC: beq         $v0, $zero, L_60002BC4
    if (ctx->r2 == 0) {
        // 0x60002BB0: lui         $t5, 0x6000
        ctx->r13 = S32(0X6000 << 16);
            goto L_60002BC4;
    }
    // 0x60002BB0: lui         $t5, 0x6000
    ctx->r13 = S32(0X6000 << 16);
    // 0x60002BB4: jal         0x60001944
    // 0x60002BB8: nop

    ovl_stage_world3_1944(rdram, ctx);
        goto after_32;
    // 0x60002BB8: nop

    after_32:
    // 0x60002BBC: b           L_60002D9C
    // 0x60002BC0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_60002D9C;
    // 0x60002BC0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_60002BC4:
    // 0x60002BC4: lw          $t5, 0x6AE8($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X6AE8);
    // 0x60002BC8: nop

    // 0x60002BCC: slti        $at, $t5, 0xB
    ctx->r1 = SIGNED(ctx->r13) < 0XB ? 1 : 0;
    // 0x60002BD0: bne         $at, $zero, L_60002C00
    if (ctx->r1 != 0) {
        // 0x60002BD4: nop
    
            goto L_60002C00;
    }
    // 0x60002BD4: nop

    // 0x60002BD8: jal         0x60001BD0
    // 0x60002BDC: nop

    ovl_stage_world3_1BD0(rdram, ctx);
        goto after_33;
    // 0x60002BDC: nop

    after_33:
    // 0x60002BE0: beq         $v0, $zero, L_60002C00
    if (ctx->r2 == 0) {
        // 0x60002BE4: nop
    
            goto L_60002C00;
    }
    // 0x60002BE4: nop

    // 0x60002BE8: jal         0x60001944
    // 0x60002BEC: nop

    ovl_stage_world3_1944(rdram, ctx);
        goto after_34;
    // 0x60002BEC: nop

    after_34:
    // 0x60002BF0: jal         0x60001DB4
    // 0x60002BF4: nop

    ovl_stage_world3_1DB4(rdram, ctx);
        goto after_35;
    // 0x60002BF4: nop

    after_35:
    // 0x60002BF8: b           L_60002D9C
    // 0x60002BFC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_60002D9C;
    // 0x60002BFC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_60002C00:
    // 0x60002C00: jal         0x600023AC
    // 0x60002C04: nop

    ovl_stage_world3_23AC(rdram, ctx);
        goto after_36;
    // 0x60002C04: nop

    after_36:
    // 0x60002C08: jal         0x6000198C
    // 0x60002C0C: swc1        $f0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
    ovl_stage_world3_198C(rdram, ctx);
        goto after_37;
    // 0x60002C0C: swc1        $f0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
    after_37:
    // 0x60002C10: b           L_60002D9C
    // 0x60002C14: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_60002D9C;
    // 0x60002C14: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_60002C18:
    // 0x60002C18: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60002C1C: addiu       $v0, $v0, 0x6AC8
    ctx->r2 = ADD32(ctx->r2, 0X6AC8);
    // 0x60002C20: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x60002C24: lui         $t0, 0x6000
    ctx->r8 = S32(0X6000 << 16);
    // 0x60002C28: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x60002C2C: beq         $t7, $zero, L_60002CC0
    if (ctx->r15 == 0) {
        // 0x60002C30: sw          $t7, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r15;
            goto L_60002CC0;
    }
    // 0x60002C30: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x60002C34: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x60002C38: addiu       $v1, $v1, 0x6ACC
    ctx->r3 = ADD32(ctx->r3, 0X6ACC);
    // 0x60002C3C: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x60002C40: lui         $s0, 0x6000
    ctx->r16 = S32(0X6000 << 16);
    // 0x60002C44: bne         $t9, $zero, L_60002CB0
    if (ctx->r25 != 0) {
        // 0x60002C48: addiu       $s0, $s0, 0x6AE0
        ctx->r16 = ADD32(ctx->r16, 0X6AE0);
            goto L_60002CB0;
    }
    // 0x60002C48: addiu       $s0, $s0, 0x6AE0
    ctx->r16 = ADD32(ctx->r16, 0X6AE0);
    // 0x60002C4C: lui         $at, 0x43B9
    ctx->r1 = S32(0X43B9 << 16);
    // 0x60002C50: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x60002C54: lwc1        $f6, 0x0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X0);
    // 0x60002C58: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002C5C: lwc1        $f14, 0x69A8($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X69A8);
    // 0x60002C60: lui         $a2, 0x4468
    ctx->r6 = S32(0X4468 << 16);
    // 0x60002C64: lui         $a3, 0x44AC
    ctx->r7 = S32(0X44AC << 16);
    // 0x60002C68: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x60002C6C: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x60002C70: jal         0x60002278
    // 0x60002C74: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    ovl_stage_world3_2278(rdram, ctx);
        goto after_38;
    // 0x60002C74: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_38:
    // 0x60002C78: beq         $v0, $zero, L_60002C98
    if (ctx->r2 == 0) {
        // 0x60002C7C: nop
    
            goto L_60002C98;
    }
    // 0x60002C7C: nop

    // 0x60002C80: jal         0x60001944
    // 0x60002C84: nop

    ovl_stage_world3_1944(rdram, ctx);
        goto after_39;
    // 0x60002C84: nop

    after_39:
    // 0x60002C88: jal         0x60001DB4
    // 0x60002C8C: nop

    ovl_stage_world3_1DB4(rdram, ctx);
        goto after_40;
    // 0x60002C8C: nop

    after_40:
    // 0x60002C90: b           L_60002D9C
    // 0x60002C94: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_60002D9C;
    // 0x60002C94: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_60002C98:
    // 0x60002C98: jal         0x600023AC
    // 0x60002C9C: nop

    ovl_stage_world3_23AC(rdram, ctx);
        goto after_41;
    // 0x60002C9C: nop

    after_41:
    // 0x60002CA0: jal         0x6000198C
    // 0x60002CA4: swc1        $f0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
    ovl_stage_world3_198C(rdram, ctx);
        goto after_42;
    // 0x60002CA4: swc1        $f0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
    after_42:
    // 0x60002CA8: b           L_60002D9C
    // 0x60002CAC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_60002D9C;
    // 0x60002CAC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_60002CB0:
    // 0x60002CB0: jal         0x600018F0
    // 0x60002CB4: nop

    ovl_stage_world3_18F0(rdram, ctx);
        goto after_43;
    // 0x60002CB4: nop

    after_43:
    // 0x60002CB8: b           L_60002D9C
    // 0x60002CBC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_60002D9C;
    // 0x60002CBC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_60002CC0:
    // 0x60002CC0: lw          $t0, 0x6B40($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X6B40);
    // 0x60002CC4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x60002CC8: bne         $t0, $at, L_60002D00
    if (ctx->r8 != ctx->r1) {
        // 0x60002CCC: lui         $v1, 0x6000
        ctx->r3 = S32(0X6000 << 16);
            goto L_60002D00;
    }
    // 0x60002CCC: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x60002CD0: addiu       $v1, $v1, 0x6ACC
    ctx->r3 = ADD32(ctx->r3, 0X6ACC);
    // 0x60002CD4: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x60002CD8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x60002CDC: bne         $t1, $zero, L_60002D00
    if (ctx->r9 != 0) {
        // 0x60002CE0: addiu       $t3, $zero, 0xF
        ctx->r11 = ADD32(0, 0XF);
            goto L_60002D00;
    }
    // 0x60002CE0: addiu       $t3, $zero, 0xF
    ctx->r11 = ADD32(0, 0XF);
    // 0x60002CE4: sw          $a1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r5;
    // 0x60002CE8: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
    // 0x60002CEC: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x60002CF0: jal         0x60001914
    // 0x60002CF4: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    ovl_stage_world3_1914(rdram, ctx);
        goto after_44;
    // 0x60002CF4: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    after_44:
    // 0x60002CF8: b           L_60002D9C
    // 0x60002CFC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_60002D9C;
    // 0x60002CFC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_60002D00:
    // 0x60002D00: jal         0x60001DB4
    // 0x60002D04: nop

    ovl_stage_world3_1DB4(rdram, ctx);
        goto after_45;
    // 0x60002D04: nop

    after_45:
    // 0x60002D08: b           L_60002D9C
    // 0x60002D0C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_60002D9C;
    // 0x60002D0C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_60002D10:
    // 0x60002D10: addiu       $v1, $v1, 0x6AC8
    ctx->r3 = ADD32(ctx->r3, 0X6AC8);
    // 0x60002D14: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x60002D18: nop

    // 0x60002D1C: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x60002D20: beq         $t5, $zero, L_60002D90
    if (ctx->r13 == 0) {
        // 0x60002D24: sw          $t5, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r13;
            goto L_60002D90;
    }
    // 0x60002D24: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
    // 0x60002D28: slti        $at, $t5, 0x4
    ctx->r1 = SIGNED(ctx->r13) < 0X4 ? 1 : 0;
    // 0x60002D2C: beq         $at, $zero, L_60002D58
    if (ctx->r1 == 0) {
        // 0x60002D30: lui         $v1, 0x6000
        ctx->r3 = S32(0X6000 << 16);
            goto L_60002D58;
    }
    // 0x60002D30: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x60002D34: addiu       $v1, $v1, 0x6ACC
    ctx->r3 = ADD32(ctx->r3, 0X6ACC);
    // 0x60002D38: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x60002D3C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x60002D40: bne         $t6, $at, L_60002D58
    if (ctx->r14 != ctx->r1) {
        // 0x60002D44: nop
    
            goto L_60002D58;
    }
    // 0x60002D44: nop

    // 0x60002D48: jal         0x600018F0
    // 0x60002D4C: nop

    ovl_stage_world3_18F0(rdram, ctx);
        goto after_46;
    // 0x60002D4C: nop

    after_46:
    // 0x60002D50: b           L_60002D9C
    // 0x60002D54: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_60002D9C;
    // 0x60002D54: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_60002D58:
    // 0x60002D58: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x60002D5C: addiu       $v1, $v1, 0x6ACC
    ctx->r3 = ADD32(ctx->r3, 0X6ACC);
    // 0x60002D60: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x60002D64: nop

    // 0x60002D68: bne         $t7, $zero, L_60002D9C
    if (ctx->r15 != 0) {
        // 0x60002D6C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_60002D9C;
    }
    // 0x60002D6C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x60002D70: jal         0x600023AC
    // 0x60002D74: nop

    ovl_stage_world3_23AC(rdram, ctx);
        goto after_47;
    // 0x60002D74: nop

    after_47:
    // 0x60002D78: lui         $s0, 0x6000
    ctx->r16 = S32(0X6000 << 16);
    // 0x60002D7C: addiu       $s0, $s0, 0x6AE0
    ctx->r16 = ADD32(ctx->r16, 0X6AE0);
    // 0x60002D80: jal         0x6000198C
    // 0x60002D84: swc1        $f0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
    ovl_stage_world3_198C(rdram, ctx);
        goto after_48;
    // 0x60002D84: swc1        $f0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f0.u32l;
    after_48:
    // 0x60002D88: b           L_60002D9C
    // 0x60002D8C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_60002D9C;
    // 0x60002D8C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_60002D90:
    // 0x60002D90: jal         0x60001DB4
    // 0x60002D94: nop

    ovl_stage_world3_1DB4(rdram, ctx);
        goto after_49;
    // 0x60002D94: nop

    after_49:
L_60002D98:
    // 0x60002D98: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_60002D9C:
    // 0x60002D9C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x60002DA0: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x60002DA4: jr          $ra
    // 0x60002DA8: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x60002DA8: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void ovl_stage_world3_2DAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002DAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60002DB0: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60002DB4: addiu       $a2, $a2, 0x6B50
    ctx->r6 = ADD32(ctx->r6, 0X6B50);
    // 0x60002DB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60002DBC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x60002DC0: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
    // 0x60002DC4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x60002DC8: jal         0x60000808
    // 0x60002DCC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_stage_world3_808(rdram, ctx);
        goto after_0;
    // 0x60002DCC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x60002DD0: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60002DD4: addiu       $a2, $a2, 0x6B50
    ctx->r6 = ADD32(ctx->r6, 0X6B50);
    // 0x60002DD8: sh          $zero, 0x0($a2)
    MEM_H(0X0, ctx->r6) = 0;
    // 0x60002DDC: sh          $zero, 0x2($a2)
    MEM_H(0X2, ctx->r6) = 0;
    // 0x60002DE0: sh          $zero, 0x4($a2)
    MEM_H(0X4, ctx->r6) = 0;
    // 0x60002DE4: sb          $zero, 0x6($a2)
    MEM_B(0X6, ctx->r6) = 0;
    // 0x60002DE8: sb          $zero, 0x7($a2)
    MEM_B(0X7, ctx->r6) = 0;
    // 0x60002DEC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x60002DF0: jal         0x60000808
    // 0x60002DF4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world3_808(rdram, ctx);
        goto after_1;
    // 0x60002DF4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x60002DF8: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60002DFC: addiu       $v0, $v0, 0x6AE8
    ctx->r2 = ADD32(ctx->r2, 0X6AE8);
    // 0x60002E00: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x60002E04: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60002E08: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002E0C: lw          $a0, 0x6880($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6880);
    // 0x60002E10: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60002E14: sw          $zero, 0x6AE4($at)
    MEM_W(0X6AE4, ctx->r1) = 0;
    // 0x60002E18: addiu       $a2, $a2, 0x6AF0
    ctx->r6 = ADD32(ctx->r6, 0X6AF0);
    // 0x60002E1C: jal         0x600006C4
    // 0x60002E20: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_2;
    // 0x60002E20: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_2:
    // 0x60002E24: jal         0x60000DE4
    // 0x60002E28: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world3_DE4(rdram, ctx);
        goto after_3;
    // 0x60002E28: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x60002E2C: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60002E30: addiu       $a2, $a2, 0x6B08
    ctx->r6 = ADD32(ctx->r6, 0X6B08);
    // 0x60002E34: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60002E38: jal         0x600006C4
    // 0x60002E3C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_4;
    // 0x60002E3C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_4:
    // 0x60002E40: jal         0x60001710
    // 0x60002E44: nop

    ovl_stage_world3_1710(rdram, ctx);
        goto after_5;
    // 0x60002E44: nop

    after_5:
    // 0x60002E48: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002E4C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x60002E50: sw          $zero, 0x6ACC($at)
    MEM_W(0X6ACC, ctx->r1) = 0;
    // 0x60002E54: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002E58: swc1        $f4, 0x6AE0($at)
    MEM_W(0X6AE0, ctx->r1) = ctx->f4.u32l;
    // 0x60002E5C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002E60: sw          $zero, 0x6B3C($at)
    MEM_W(0X6B3C, ctx->r1) = 0;
    // 0x60002E64: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002E68: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x60002E6C: sw          $t8, 0x6B40($at)
    MEM_W(0X6B40, ctx->r1) = ctx->r24;
    // 0x60002E70: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002E74: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x60002E78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60002E7C: sw          $t9, 0x6AC4($at)
    MEM_W(0X6AC4, ctx->r1) = ctx->r25;
    // 0x60002E80: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002E84: addiu       $t0, $zero, 0xF
    ctx->r8 = ADD32(0, 0XF);
    // 0x60002E88: sw          $t0, 0x6AC8($at)
    MEM_W(0X6AC8, ctx->r1) = ctx->r8;
    // 0x60002E8C: jr          $ra
    // 0x60002E90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x60002E90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void ovl_stage_world3_2E94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002E94: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x60002E98: beq         $a0, $zero, L_60002F20
    if (ctx->r4 == 0) {
        // 0x60002E9C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_60002F20;
    }
    // 0x60002E9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60002EA0: jal         0x60000DE4
    // 0x60002EA4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world3_DE4(rdram, ctx);
        goto after_0;
    // 0x60002EA4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x60002EA8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60002EAC: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x60002EB0: jal         0x600006C4
    // 0x60002EB4: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_1;
    // 0x60002EB4: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x60002EB8: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x60002EBC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x60002EC0: ori         $t7, $t6, 0x80
    ctx->r15 = ctx->r14 | 0X80;
    // 0x60002EC4: jal         0x60000DE4
    // 0x60002EC8: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    ovl_stage_world3_DE4(rdram, ctx);
        goto after_2;
    // 0x60002EC8: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    after_2:
    // 0x60002ECC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60002ED0: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x60002ED4: jal         0x600006C4
    // 0x60002ED8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_3;
    // 0x60002ED8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_3:
    // 0x60002EDC: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60002EE0: addiu       $a2, $a2, 0x6B60
    ctx->r6 = ADD32(ctx->r6, 0X6B60);
    // 0x60002EE4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x60002EE8: jal         0x60000808
    // 0x60002EEC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_stage_world3_808(rdram, ctx);
        goto after_4;
    // 0x60002EEC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_4:
    // 0x60002EF0: lui         $t8, 0x6000
    ctx->r24 = S32(0X6000 << 16);
    // 0x60002EF4: lw          $t8, 0x6B60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X6B60);
    // 0x60002EF8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002EFC: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60002F00: ori         $t9, $t8, 0x100
    ctx->r25 = ctx->r24 | 0X100;
    // 0x60002F04: sw          $t9, 0x6B60($at)
    MEM_W(0X6B60, ctx->r1) = ctx->r25;
    // 0x60002F08: addiu       $a2, $a2, 0x6B60
    ctx->r6 = ADD32(ctx->r6, 0X6B60);
    // 0x60002F0C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x60002F10: jal         0x60000808
    // 0x60002F14: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_stage_world3_808(rdram, ctx);
        goto after_5;
    // 0x60002F14: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_5:
    // 0x60002F18: b           L_60002FA4
    // 0x60002F1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60002FA4;
    // 0x60002F1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60002F20:
    // 0x60002F20: jal         0x60000DE4
    // 0x60002F24: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world3_DE4(rdram, ctx);
        goto after_6;
    // 0x60002F24: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_6:
    // 0x60002F28: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60002F2C: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x60002F30: jal         0x600006C4
    // 0x60002F34: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_7;
    // 0x60002F34: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_7:
    // 0x60002F38: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x60002F3C: addiu       $at, $zero, -0x81
    ctx->r1 = ADD32(0, -0X81);
    // 0x60002F40: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x60002F44: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x60002F48: jal         0x60000DE4
    // 0x60002F4C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world3_DE4(rdram, ctx);
        goto after_8;
    // 0x60002F4C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_8:
    // 0x60002F50: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60002F54: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x60002F58: jal         0x600006C4
    // 0x60002F5C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_9;
    // 0x60002F5C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_9:
    // 0x60002F60: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60002F64: addiu       $a2, $a2, 0x6B60
    ctx->r6 = ADD32(ctx->r6, 0X6B60);
    // 0x60002F68: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x60002F6C: jal         0x60000808
    // 0x60002F70: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_stage_world3_808(rdram, ctx);
        goto after_10;
    // 0x60002F70: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_10:
    // 0x60002F74: lui         $t2, 0x6000
    ctx->r10 = S32(0X6000 << 16);
    // 0x60002F78: lw          $t2, 0x6B60($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X6B60);
    // 0x60002F7C: addiu       $at, $zero, -0x101
    ctx->r1 = ADD32(0, -0X101);
    // 0x60002F80: and         $t3, $t2, $at
    ctx->r11 = ctx->r10 & ctx->r1;
    // 0x60002F84: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60002F88: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60002F8C: sw          $t3, 0x6B60($at)
    MEM_W(0X6B60, ctx->r1) = ctx->r11;
    // 0x60002F90: addiu       $a2, $a2, 0x6B60
    ctx->r6 = ADD32(ctx->r6, 0X6B60);
    // 0x60002F94: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x60002F98: jal         0x60000808
    // 0x60002F9C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_stage_world3_808(rdram, ctx);
        goto after_11;
    // 0x60002F9C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_11:
    // 0x60002FA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60002FA4:
    // 0x60002FA4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x60002FA8: jr          $ra
    // 0x60002FAC: nop

    return;
    // 0x60002FAC: nop

;}
RECOMP_FUNC void ovl_stage_world3_2FB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60002FB0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x60002FB4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x60002FB8: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x60002FBC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x60002FC0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x60002FC4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x60002FC8: jal         0x60000C1C
    // 0x60002FCC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    ovl_stage_world3_C1C(rdram, ctx);
        goto after_0;
    // 0x60002FCC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x60002FD0: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x60002FD4: jal         0x600009C4
    // 0x60002FD8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    ovl_stage_world3_9C4(rdram, ctx);
        goto after_1;
    // 0x60002FD8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_1:
    // 0x60002FDC: lw          $t6, 0x0($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X0);
    // 0x60002FE0: nop

    // 0x60002FE4: andi        $t7, $t6, 0x800
    ctx->r15 = ctx->r14 & 0X800;
    // 0x60002FE8: beq         $t7, $zero, L_6000300C
    if (ctx->r15 == 0) {
        // 0x60002FEC: nop
    
            goto L_6000300C;
    }
    // 0x60002FEC: nop

L_60002FF0:
    // 0x60002FF0: jal         0x600009D0
    // 0x60002FF4: nop

    ovl_stage_world3_9D0(rdram, ctx);
        goto after_2;
    // 0x60002FF4: nop

    after_2:
    // 0x60002FF8: lw          $t8, 0x0($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X0);
    // 0x60002FFC: nop

    // 0x60003000: andi        $t9, $t8, 0x800
    ctx->r25 = ctx->r24 & 0X800;
    // 0x60003004: bne         $t9, $zero, L_60002FF0
    if (ctx->r25 != 0) {
        // 0x60003008: nop
    
            goto L_60002FF0;
    }
    // 0x60003008: nop

L_6000300C:
    // 0x6000300C: lui         $s4, 0x6000
    ctx->r20 = S32(0X6000 << 16);
    // 0x60003010: addiu       $s4, $s4, 0x6880
    ctx->r20 = ADD32(ctx->r20, 0X6880);
    // 0x60003014: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x60003018: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x6000301C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x60003020: jal         0x600006C4
    // 0x60003024: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_3;
    // 0x60003024: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    after_3:
    // 0x60003028: jal         0x60001104
    // 0x6000302C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world3_1104(rdram, ctx);
        goto after_4;
    // 0x6000302C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
    // 0x60003030: lw          $t0, 0x0($s3)
    ctx->r8 = MEM_W(ctx->r19, 0X0);
    // 0x60003034: lui         $s0, 0x40
    ctx->r16 = S32(0X40 << 16);
    // 0x60003038: sll         $t1, $t0, 9
    ctx->r9 = S32(ctx->r8 << 9);
    // 0x6000303C: bgez        $t1, L_60003060
    if (SIGNED(ctx->r9) >= 0) {
        // 0x60003040: nop
    
            goto L_60003060;
    }
    // 0x60003040: nop

L_60003044:
    // 0x60003044: jal         0x600009D0
    // 0x60003048: nop

    ovl_stage_world3_9D0(rdram, ctx);
        goto after_5;
    // 0x60003048: nop

    after_5:
    // 0x6000304C: lw          $t2, 0x0($s3)
    ctx->r10 = MEM_W(ctx->r19, 0X0);
    // 0x60003050: nop

    // 0x60003054: and         $t3, $t2, $s0
    ctx->r11 = ctx->r10 & ctx->r16;
    // 0x60003058: bne         $t3, $zero, L_60003044
    if (ctx->r11 != 0) {
        // 0x6000305C: nop
    
            goto L_60003044;
    }
    // 0x6000305C: nop

L_60003060:
    // 0x60003060: jal         0x600009D0
    // 0x60003064: nop

    ovl_stage_world3_9D0(rdram, ctx);
        goto after_6;
    // 0x60003064: nop

    after_6:
    // 0x60003068: jal         0x60002E94
    // 0x6000306C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world3_2E94(rdram, ctx);
        goto after_7;
    // 0x6000306C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_7:
    // 0x60003070: jal         0x600007E4
    // 0x60003074: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_stage_world3_7E4(rdram, ctx);
        goto after_8;
    // 0x60003074: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_8:
    // 0x60003078: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x6000307C: addiu       $a2, $a2, 0x6B44
    ctx->r6 = ADD32(ctx->r6, 0X6B44);
    // 0x60003080: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x60003084: addiu       $t4, $zero, 0x6
    ctx->r12 = ADD32(0, 0X6);
    // 0x60003088: sw          $t4, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r12;
    // 0x6000308C: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x60003090: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x60003094: lw          $t6, 0x2C($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X2C);
    // 0x60003098: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x6000309C: sw          $t6, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r14;
    // 0x600030A0: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x600030A4: nop

    // 0x600030A8: lw          $t7, 0x10($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X10);
    // 0x600030AC: nop

    // 0x600030B0: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x600030B4: sw          $t8, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r24;
    // 0x600030B8: lw          $t0, 0x0($a2)
    ctx->r8 = MEM_W(ctx->r6, 0X0);
    // 0x600030BC: nop

    // 0x600030C0: sw          $t9, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r25;
    // 0x600030C4: lw          $a1, 0x0($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X0);
    // 0x600030C8: jal         0x600007F0
    // 0x600030CC: nop

    ovl_stage_world3_7F0(rdram, ctx);
        goto after_9;
    // 0x600030CC: nop

    after_9:
    // 0x600030D0: jal         0x60002DAC
    // 0x600030D4: nop

    ovl_stage_world3_2DAC(rdram, ctx);
        goto after_10;
    // 0x600030D4: nop

    after_10:
    // 0x600030D8: jal         0x60000B98
    // 0x600030DC: addiu       $a0, $zero, 0x9E
    ctx->r4 = ADD32(0, 0X9E);
    ovl_stage_world3_B98(rdram, ctx);
        goto after_11;
    // 0x600030DC: addiu       $a0, $zero, 0x9E
    ctx->r4 = ADD32(0, 0X9E);
    after_11:
    // 0x600030E0: lui         $s2, 0x6000
    ctx->r18 = S32(0X6000 << 16);
    // 0x600030E4: lui         $s1, 0x6000
    ctx->r17 = S32(0X6000 << 16);
    // 0x600030E8: lui         $s0, 0x6000
    ctx->r16 = S32(0X6000 << 16);
    // 0x600030EC: addiu       $s0, $s0, 0x6B50
    ctx->r16 = ADD32(ctx->r16, 0X6B50);
    // 0x600030F0: addiu       $s1, $s1, 0x6AE4
    ctx->r17 = ADD32(ctx->r17, 0X6AE4);
    // 0x600030F4: addiu       $s2, $s2, 0x6AE8
    ctx->r18 = ADD32(ctx->r18, 0X6AE8);
    // 0x600030F8: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
L_600030FC:
    // 0x600030FC: nop

    // 0x60003100: andi        $t1, $v0, 0x2000
    ctx->r9 = ctx->r2 & 0X2000;
    // 0x60003104: beq         $t1, $zero, L_6000319C
    if (ctx->r9 == 0) {
        // 0x60003108: andi        $t2, $v0, 0x2
        ctx->r10 = ctx->r2 & 0X2;
            goto L_6000319C;
    }
    // 0x60003108: andi        $t2, $v0, 0x2
    ctx->r10 = ctx->r2 & 0X2;
    // 0x6000310C: beq         $t2, $zero, L_60003124
    if (ctx->r10 == 0) {
        // 0x60003110: nop
    
            goto L_60003124;
    }
    // 0x60003110: nop

    // 0x60003114: jal         0x600009AC
    // 0x60003118: nop

    ovl_stage_world3_9AC(rdram, ctx);
        goto after_12;
    // 0x60003118: nop

    after_12:
    // 0x6000311C: b           L_6000312C
    // 0x60003120: nop

        goto L_6000312C;
    // 0x60003120: nop

L_60003124:
    // 0x60003124: jal         0x60000A6C
    // 0x60003128: nop

    ovl_stage_world3_A6C(rdram, ctx);
        goto after_13;
    // 0x60003128: nop

    after_13:
L_6000312C:
    // 0x6000312C: jal         0x60001104
    // 0x60003130: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world3_1104(rdram, ctx);
        goto after_14;
    // 0x60003130: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_14:
    // 0x60003134: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    // 0x60003138: addiu       $a1, $zero, 0x31
    ctx->r5 = ADD32(0, 0X31);
    // 0x6000313C: jal         0x600006C4
    // 0x60003140: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_15;
    // 0x60003140: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    after_15:
    // 0x60003144: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x60003148: jal         0x60000E68
    // 0x6000314C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world3_E68(rdram, ctx);
        goto after_16;
    // 0x6000314C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_16:
    // 0x60003150: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x60003154: jal         0x60000E68
    // 0x60003158: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world3_E68(rdram, ctx);
        goto after_17;
    // 0x60003158: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_17:
    // 0x6000315C: jal         0x60000A60
    // 0x60003160: addiu       $a0, $zero, 0xAC1
    ctx->r4 = ADD32(0, 0XAC1);
    ovl_stage_world3_A60(rdram, ctx);
        goto after_18;
    // 0x60003160: addiu       $a0, $zero, 0xAC1
    ctx->r4 = ADD32(0, 0XAC1);
    after_18:
    // 0x60003164: jal         0x60000B98
    // 0x60003168: addiu       $a0, $zero, 0x8A
    ctx->r4 = ADD32(0, 0X8A);
    ovl_stage_world3_B98(rdram, ctx);
        goto after_19;
    // 0x60003168: addiu       $a0, $zero, 0x8A
    ctx->r4 = ADD32(0, 0X8A);
    after_19:
    // 0x6000316C: jal         0x60000B98
    // 0x60003170: addiu       $a0, $zero, 0xA6
    ctx->r4 = ADD32(0, 0XA6);
    ovl_stage_world3_B98(rdram, ctx);
        goto after_20;
    // 0x60003170: addiu       $a0, $zero, 0xA6
    ctx->r4 = ADD32(0, 0XA6);
    after_20:
    // 0x60003174: jal         0x60000E44
    // 0x60003178: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    ovl_stage_world3_E44(rdram, ctx);
        goto after_21;
    // 0x60003178: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_21:
    // 0x6000317C: jal         0x60000E44
    // 0x60003180: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    ovl_stage_world3_E44(rdram, ctx);
        goto after_22;
    // 0x60003180: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_22:
    // 0x60003184: jal         0x60000E44
    // 0x60003188: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    ovl_stage_world3_E44(rdram, ctx);
        goto after_23;
    // 0x60003188: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_23:
    // 0x6000318C: jal         0x60002E94
    // 0x60003190: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world3_2E94(rdram, ctx);
        goto after_24;
    // 0x60003190: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_24:
    // 0x60003194: jal         0x600009AC
    // 0x60003198: nop

    ovl_stage_world3_9AC(rdram, ctx);
        goto after_25;
    // 0x60003198: nop

    after_25:
L_6000319C:
    // 0x6000319C: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
    // 0x600031A0: sh          $zero, 0x2($s0)
    MEM_H(0X2, ctx->r16) = 0;
    // 0x600031A4: sh          $zero, 0x4($s0)
    MEM_H(0X4, ctx->r16) = 0;
    // 0x600031A8: sb          $zero, 0x6($s0)
    MEM_B(0X6, ctx->r16) = 0;
    // 0x600031AC: jal         0x60001710
    // 0x600031B0: sb          $zero, 0x7($s0)
    MEM_B(0X7, ctx->r16) = 0;
    ovl_stage_world3_1710(rdram, ctx);
        goto after_26;
    // 0x600031B0: sb          $zero, 0x7($s0)
    MEM_B(0X7, ctx->r16) = 0;
    after_26:
    // 0x600031B4: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    // 0x600031B8: lui         $a1, 0x6000
    ctx->r5 = S32(0X6000 << 16);
    // 0x600031BC: jal         0x60000CE8
    // 0x600031C0: addiu       $a1, $a1, 0x6B48
    ctx->r5 = ADD32(ctx->r5, 0X6B48);
    ovl_stage_world3_CE8(rdram, ctx);
        goto after_27;
    // 0x600031C0: addiu       $a1, $a1, 0x6B48
    ctx->r5 = ADD32(ctx->r5, 0X6B48);
    after_27:
    // 0x600031C4: jal         0x600025F8
    // 0x600031C8: nop

    ovl_stage_world3_25F8(rdram, ctx);
        goto after_28;
    // 0x600031C8: nop

    after_28:
    // 0x600031CC: lw          $t3, 0x0($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X0);
    // 0x600031D0: lw          $t5, 0x0($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X0);
    // 0x600031D4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x600031D8: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x600031DC: sw          $t4, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r12;
    // 0x600031E0: sw          $t6, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r14;
    // 0x600031E4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x600031E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x600031EC: jal         0x60000808
    // 0x600031F0: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_stage_world3_808(rdram, ctx);
        goto after_29;
    // 0x600031F0: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_29:
    // 0x600031F4: jal         0x600009D0
    // 0x600031F8: nop

    ovl_stage_world3_9D0(rdram, ctx);
        goto after_30;
    // 0x600031F8: nop

    after_30:
    // 0x600031FC: b           L_600030FC
    // 0x60003200: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
        goto L_600030FC;
    // 0x60003200: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x60003204: nop

    // 0x60003208: nop

    // 0x6000320C: nop

    // 0x60003210: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x60003214: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x60003218: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x6000321C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x60003220: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x60003224: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x60003228: jr          $ra
    // 0x6000322C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x6000322C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_stage_world3_3230(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003230: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60003234: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003238: jal         0x60000C1C
    // 0x6000323C: nop

    ovl_stage_world3_C1C(rdram, ctx);
        goto after_0;
    // 0x6000323C: nop

    after_0:
    // 0x60003240: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x60003244: nop

    // 0x60003248: sll         $t7, $t6, 13
    ctx->r15 = S32(ctx->r14 << 13);
    // 0x6000324C: bltz        $t7, L_60003288
    if (SIGNED(ctx->r15) < 0) {
        // 0x60003250: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003288;
    }
    // 0x60003250: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003254: jal         0x60000BB0
    // 0x60003258: addiu       $a0, $zero, 0x8A
    ctx->r4 = ADD32(0, 0X8A);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_1;
    // 0x60003258: addiu       $a0, $zero, 0x8A
    ctx->r4 = ADD32(0, 0X8A);
    after_1:
    // 0x6000325C: bne         $v0, $zero, L_6000326C
    if (ctx->r2 != 0) {
        // 0x60003260: nop
    
            goto L_6000326C;
    }
    // 0x60003260: nop

    // 0x60003264: jal         0x60000A60
    // 0x60003268: addiu       $a0, $zero, 0xAC0
    ctx->r4 = ADD32(0, 0XAC0);
    ovl_stage_world3_A60(rdram, ctx);
        goto after_2;
    // 0x60003268: addiu       $a0, $zero, 0xAC0
    ctx->r4 = ADD32(0, 0XAC0);
    after_2:
L_6000326C:
    // 0x6000326C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003270: addiu       $a0, $a0, 0x2FB0
    ctx->r4 = ADD32(ctx->r4, 0X2FB0);
    // 0x60003274: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60003278: addiu       $a2, $zero, 0x2400
    ctx->r6 = ADD32(0, 0X2400);
    // 0x6000327C: jal         0x60000994
    // 0x60003280: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world3_994(rdram, ctx);
        goto after_3;
    // 0x60003280: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x60003284: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003288:
    // 0x60003288: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x6000328C: jr          $ra
    // 0x60003290: nop

    return;
    // 0x60003290: nop

;}
RECOMP_FUNC void ovl_stage_world3_3294(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003294: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60003298: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x6000329C: jal         0x60000BB0
    // 0x600032A0: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_0;
    // 0x600032A0: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    after_0:
    // 0x600032A4: beq         $v0, $zero, L_60003304
    if (ctx->r2 == 0) {
        // 0x600032A8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003304;
    }
    // 0x600032A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600032AC: jal         0x60000BB0
    // 0x600032B0: addiu       $a0, $zero, 0x101
    ctx->r4 = ADD32(0, 0X101);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_1;
    // 0x600032B0: addiu       $a0, $zero, 0x101
    ctx->r4 = ADD32(0, 0X101);
    after_1:
    // 0x600032B4: beq         $v0, $zero, L_60003304
    if (ctx->r2 == 0) {
        // 0x600032B8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003304;
    }
    // 0x600032B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600032BC: jal         0x60000BB0
    // 0x600032C0: addiu       $a0, $zero, 0x102
    ctx->r4 = ADD32(0, 0X102);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_2;
    // 0x600032C0: addiu       $a0, $zero, 0x102
    ctx->r4 = ADD32(0, 0X102);
    after_2:
    // 0x600032C4: beq         $v0, $zero, L_60003304
    if (ctx->r2 == 0) {
        // 0x600032C8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003304;
    }
    // 0x600032C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600032CC: jal         0x60000BB0
    // 0x600032D0: addiu       $a0, $zero, 0x103
    ctx->r4 = ADD32(0, 0X103);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_3;
    // 0x600032D0: addiu       $a0, $zero, 0x103
    ctx->r4 = ADD32(0, 0X103);
    after_3:
    // 0x600032D4: beq         $v0, $zero, L_60003304
    if (ctx->r2 == 0) {
        // 0x600032D8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003304;
    }
    // 0x600032D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600032DC: jal         0x60000BB0
    // 0x600032E0: addiu       $a0, $zero, 0x113
    ctx->r4 = ADD32(0, 0X113);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_4;
    // 0x600032E0: addiu       $a0, $zero, 0x113
    ctx->r4 = ADD32(0, 0X113);
    after_4:
    // 0x600032E4: bne         $v0, $zero, L_60003304
    if (ctx->r2 != 0) {
        // 0x600032E8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003304;
    }
    // 0x600032E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600032EC: jal         0x60000B98
    // 0x600032F0: addiu       $a0, $zero, 0x113
    ctx->r4 = ADD32(0, 0X113);
    ovl_stage_world3_B98(rdram, ctx);
        goto after_5;
    // 0x600032F0: addiu       $a0, $zero, 0x113
    ctx->r4 = ADD32(0, 0X113);
    after_5:
    // 0x600032F4: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x600032F8: jal         0x60000E68
    // 0x600032FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world3_E68(rdram, ctx);
        goto after_6;
    // 0x600032FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x60003300: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003304:
    // 0x60003304: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60003308: jr          $ra
    // 0x6000330C: nop

    return;
    // 0x6000330C: nop

;}
RECOMP_FUNC void ovl_stage_world3_3310(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003310: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x60003314: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003318: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x6000331C: jal         0x60000BB0
    // 0x60003320: addiu       $a0, $zero, 0x113
    ctx->r4 = ADD32(0, 0X113);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_0;
    // 0x60003320: addiu       $a0, $zero, 0x113
    ctx->r4 = ADD32(0, 0X113);
    after_0:
    // 0x60003324: bne         $v0, $zero, L_60003390
    if (ctx->r2 != 0) {
        // 0x60003328: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003390;
    }
    // 0x60003328: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000332C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x60003330: nop

    // 0x60003334: addiu       $a0, $a0, 0x100
    ctx->r4 = ADD32(ctx->r4, 0X100);
    // 0x60003338: jal         0x60000BB0
    // 0x6000333C: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_1;
    // 0x6000333C: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_1:
    // 0x60003340: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x60003344: bne         $v0, $zero, L_60003374
    if (ctx->r2 != 0) {
        // 0x60003348: nop
    
            goto L_60003374;
    }
    // 0x60003348: nop

    // 0x6000334C: jal         0x60000B98
    // 0x60003350: nop

    ovl_stage_world3_B98(rdram, ctx);
        goto after_2;
    // 0x60003350: nop

    after_2:
    // 0x60003354: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x60003358: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x6000335C: jal         0x60000E68
    // 0x60003360: addiu       $a0, $a0, 0x5
    ctx->r4 = ADD32(ctx->r4, 0X5);
    ovl_stage_world3_E68(rdram, ctx);
        goto after_3;
    // 0x60003360: addiu       $a0, $a0, 0x5
    ctx->r4 = ADD32(ctx->r4, 0X5);
    after_3:
    // 0x60003364: jal         0x60003294
    // 0x60003368: nop

    ovl_stage_world3_3294(rdram, ctx);
        goto after_4;
    // 0x60003368: nop

    after_4:
    // 0x6000336C: b           L_60003390
    // 0x60003370: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60003390;
    // 0x60003370: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003374:
    // 0x60003374: jal         0x60000BA4
    // 0x60003378: nop

    ovl_stage_world3_BA4(rdram, ctx);
        goto after_5;
    // 0x60003378: nop

    after_5:
    // 0x6000337C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x60003380: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x60003384: jal         0x60000E68
    // 0x60003388: addiu       $a0, $a0, 0x5
    ctx->r4 = ADD32(ctx->r4, 0X5);
    ovl_stage_world3_E68(rdram, ctx);
        goto after_6;
    // 0x60003388: addiu       $a0, $a0, 0x5
    ctx->r4 = ADD32(ctx->r4, 0X5);
    after_6:
    // 0x6000338C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003390:
    // 0x60003390: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x60003394: jr          $ra
    // 0x60003398: nop

    return;
    // 0x60003398: nop

;}
RECOMP_FUNC void ovl_stage_world3_339C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000339C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600033A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600033A4: jal         0x60000BB0
    // 0x600033A8: addiu       $a0, $zero, 0x182
    ctx->r4 = ADD32(0, 0X182);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_0;
    // 0x600033A8: addiu       $a0, $zero, 0x182
    ctx->r4 = ADD32(0, 0X182);
    after_0:
    // 0x600033AC: beq         $v0, $zero, L_600033C4
    if (ctx->r2 == 0) {
        // 0x600033B0: addiu       $a0, $zero, 0x9
        ctx->r4 = ADD32(0, 0X9);
            goto L_600033C4;
    }
    // 0x600033B0: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x600033B4: jal         0x60000E68
    // 0x600033B8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_stage_world3_E68(rdram, ctx);
        goto after_1;
    // 0x600033B8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x600033BC: b           L_60003420
    // 0x600033C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60003420;
    // 0x600033C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600033C4:
    // 0x600033C4: jal         0x60000BB0
    // 0x600033C8: addiu       $a0, $zero, 0x180
    ctx->r4 = ADD32(0, 0X180);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_2;
    // 0x600033C8: addiu       $a0, $zero, 0x180
    ctx->r4 = ADD32(0, 0X180);
    after_2:
    // 0x600033CC: beq         $v0, $zero, L_600033F4
    if (ctx->r2 == 0) {
        // 0x600033D0: nop
    
            goto L_600033F4;
    }
    // 0x600033D0: nop

    // 0x600033D4: jal         0x60000BB0
    // 0x600033D8: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_3;
    // 0x600033D8: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    after_3:
    // 0x600033DC: beq         $v0, $zero, L_600033F4
    if (ctx->r2 == 0) {
        // 0x600033E0: addiu       $a0, $zero, 0x9
        ctx->r4 = ADD32(0, 0X9);
            goto L_600033F4;
    }
    // 0x600033E0: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x600033E4: jal         0x60000E68
    // 0x600033E8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_stage_world3_E68(rdram, ctx);
        goto after_4;
    // 0x600033E8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_4:
    // 0x600033EC: b           L_60003420
    // 0x600033F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60003420;
    // 0x600033F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600033F4:
    // 0x600033F4: jal         0x60000BB0
    // 0x600033F8: addiu       $a0, $zero, 0x180
    ctx->r4 = ADD32(0, 0X180);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_5;
    // 0x600033F8: addiu       $a0, $zero, 0x180
    ctx->r4 = ADD32(0, 0X180);
    after_5:
    // 0x600033FC: bne         $v0, $zero, L_60003414
    if (ctx->r2 != 0) {
        // 0x60003400: addiu       $a0, $zero, 0x9
        ctx->r4 = ADD32(0, 0X9);
            goto L_60003414;
    }
    // 0x60003400: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x60003404: jal         0x60000BB0
    // 0x60003408: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_6;
    // 0x60003408: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    after_6:
    // 0x6000340C: beq         $v0, $zero, L_6000341C
    if (ctx->r2 == 0) {
        // 0x60003410: addiu       $a0, $zero, 0x9
        ctx->r4 = ADD32(0, 0X9);
            goto L_6000341C;
    }
    // 0x60003410: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
L_60003414:
    // 0x60003414: jal         0x60000E68
    // 0x60003418: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world3_E68(rdram, ctx);
        goto after_7;
    // 0x60003418: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
L_6000341C:
    // 0x6000341C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003420:
    // 0x60003420: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60003424: jr          $ra
    // 0x60003428: nop

    return;
    // 0x60003428: nop

;}
RECOMP_FUNC void ovl_stage_world3_342C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000342C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x60003430: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x60003434: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x60003438: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    // 0x6000343C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x60003440: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x60003444: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x60003448: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x6000344C: jal         0x60000BB0
    // 0x60003450: addiu       $a0, $zero, 0x18B
    ctx->r4 = ADD32(0, 0X18B);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_0;
    // 0x60003450: addiu       $a0, $zero, 0x18B
    ctx->r4 = ADD32(0, 0X18B);
    after_0:
    // 0x60003454: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x60003458: beq         $v0, $zero, L_60003470
    if (ctx->r2 == 0) {
        // 0x6000345C: addiu       $a0, $zero, 0x18C
        ctx->r4 = ADD32(0, 0X18C);
            goto L_60003470;
    }
    // 0x6000345C: addiu       $a0, $zero, 0x18C
    ctx->r4 = ADD32(0, 0X18C);
    // 0x60003460: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x60003464: nop

    // 0x60003468: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x6000346C: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
L_60003470:
    // 0x60003470: jal         0x60000BB0
    // 0x60003474: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_1;
    // 0x60003474: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_1:
    // 0x60003478: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x6000347C: beq         $v0, $zero, L_60003494
    if (ctx->r2 == 0) {
        // 0x60003480: addiu       $a0, $zero, 0x18D
        ctx->r4 = ADD32(0, 0X18D);
            goto L_60003494;
    }
    // 0x60003480: addiu       $a0, $zero, 0x18D
    ctx->r4 = ADD32(0, 0X18D);
    // 0x60003484: lw          $t8, 0x0($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X0);
    // 0x60003488: nop

    // 0x6000348C: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x60003490: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
L_60003494:
    // 0x60003494: jal         0x60000BB0
    // 0x60003498: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_2;
    // 0x60003498: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_2:
    // 0x6000349C: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x600034A0: beq         $v0, $zero, L_600034B8
    if (ctx->r2 == 0) {
        // 0x600034A4: nop
    
            goto L_600034B8;
    }
    // 0x600034A4: nop

    // 0x600034A8: lw          $t0, 0x0($a2)
    ctx->r8 = MEM_W(ctx->r6, 0X0);
    // 0x600034AC: nop

    // 0x600034B0: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x600034B4: sw          $t1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r9;
L_600034B8:
    // 0x600034B8: jal         0x60000BB0
    // 0x600034BC: addiu       $a0, $zero, 0x193
    ctx->r4 = ADD32(0, 0X193);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_3;
    // 0x600034BC: addiu       $a0, $zero, 0x193
    ctx->r4 = ADD32(0, 0X193);
    after_3:
    // 0x600034C0: beq         $v0, $zero, L_600034D8
    if (ctx->r2 == 0) {
        // 0x600034C4: nop
    
            goto L_600034D8;
    }
    // 0x600034C4: nop

    // 0x600034C8: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x600034CC: nop

    // 0x600034D0: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x600034D4: sw          $t3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r11;
L_600034D8:
    // 0x600034D8: jal         0x60000BB0
    // 0x600034DC: addiu       $a0, $zero, 0x196
    ctx->r4 = ADD32(0, 0X196);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_4;
    // 0x600034DC: addiu       $a0, $zero, 0x196
    ctx->r4 = ADD32(0, 0X196);
    after_4:
    // 0x600034E0: beq         $v0, $zero, L_600034F8
    if (ctx->r2 == 0) {
        // 0x600034E4: nop
    
            goto L_600034F8;
    }
    // 0x600034E4: nop

    // 0x600034E8: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x600034EC: nop

    // 0x600034F0: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x600034F4: sw          $t5, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r13;
L_600034F8:
    // 0x600034F8: jal         0x60000BB0
    // 0x600034FC: addiu       $a0, $zero, 0x197
    ctx->r4 = ADD32(0, 0X197);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_5;
    // 0x600034FC: addiu       $a0, $zero, 0x197
    ctx->r4 = ADD32(0, 0X197);
    after_5:
    // 0x60003500: beq         $v0, $zero, L_6000351C
    if (ctx->r2 == 0) {
        // 0x60003504: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_6000351C;
    }
    // 0x60003504: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x60003508: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x6000350C: nop

    // 0x60003510: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x60003514: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x60003518: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_6000351C:
    // 0x6000351C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x60003520: jr          $ra
    // 0x60003524: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x60003524: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_stage_world3_3528(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003528: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x6000352C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003530: jal         0x60000BB0
    // 0x60003534: addiu       $a0, $zero, 0x180
    ctx->r4 = ADD32(0, 0X180);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_0;
    // 0x60003534: addiu       $a0, $zero, 0x180
    ctx->r4 = ADD32(0, 0X180);
    after_0:
    // 0x60003538: bne         $v0, $zero, L_60003598
    if (ctx->r2 != 0) {
        // 0x6000353C: nop
    
            goto L_60003598;
    }
    // 0x6000353C: nop

    // 0x60003540: jal         0x60000BB0
    // 0x60003544: addiu       $a0, $zero, 0x187
    ctx->r4 = ADD32(0, 0X187);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_1;
    // 0x60003544: addiu       $a0, $zero, 0x187
    ctx->r4 = ADD32(0, 0X187);
    after_1:
    // 0x60003548: beq         $v0, $zero, L_60003598
    if (ctx->r2 == 0) {
        // 0x6000354C: nop
    
            goto L_60003598;
    }
    // 0x6000354C: nop

    // 0x60003550: jal         0x60000BB0
    // 0x60003554: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_2;
    // 0x60003554: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    after_2:
    // 0x60003558: bne         $v0, $zero, L_60003598
    if (ctx->r2 != 0) {
        // 0x6000355C: nop
    
            goto L_60003598;
    }
    // 0x6000355C: nop

    // 0x60003560: jal         0x60000BB0
    // 0x60003564: addiu       $a0, $zero, 0x188
    ctx->r4 = ADD32(0, 0X188);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_3;
    // 0x60003564: addiu       $a0, $zero, 0x188
    ctx->r4 = ADD32(0, 0X188);
    after_3:
    // 0x60003568: beq         $v0, $zero, L_60003598
    if (ctx->r2 == 0) {
        // 0x6000356C: nop
    
            goto L_60003598;
    }
    // 0x6000356C: nop

    // 0x60003570: jal         0x60000B98
    // 0x60003574: addiu       $a0, $zero, 0x180
    ctx->r4 = ADD32(0, 0X180);
    ovl_stage_world3_B98(rdram, ctx);
        goto after_4;
    // 0x60003574: addiu       $a0, $zero, 0x180
    ctx->r4 = ADD32(0, 0X180);
    after_4:
    // 0x60003578: jal         0x60000B98
    // 0x6000357C: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    ovl_stage_world3_B98(rdram, ctx);
        goto after_5;
    // 0x6000357C: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    after_5:
    // 0x60003580: jal         0x60000244
    // 0x60003584: addiu       $a0, $zero, 0x14B
    ctx->r4 = ADD32(0, 0X14B);
    ovl_stage_world3_244(rdram, ctx);
        goto after_6;
    // 0x60003584: addiu       $a0, $zero, 0x14B
    ctx->r4 = ADD32(0, 0X14B);
    after_6:
    // 0x60003588: jal         0x60000A60
    // 0x6000358C: addiu       $a0, $zero, 0xA59
    ctx->r4 = ADD32(0, 0XA59);
    ovl_stage_world3_A60(rdram, ctx);
        goto after_7;
    // 0x6000358C: addiu       $a0, $zero, 0xA59
    ctx->r4 = ADD32(0, 0XA59);
    after_7:
    // 0x60003590: b           L_60003770
    // 0x60003594: nop

        goto L_60003770;
    // 0x60003594: nop

L_60003598:
    // 0x60003598: jal         0x60000BB0
    // 0x6000359C: addiu       $a0, $zero, 0x180
    ctx->r4 = ADD32(0, 0X180);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_8;
    // 0x6000359C: addiu       $a0, $zero, 0x180
    ctx->r4 = ADD32(0, 0X180);
    after_8:
    // 0x600035A0: bne         $v0, $zero, L_600035F8
    if (ctx->r2 != 0) {
        // 0x600035A4: nop
    
            goto L_600035F8;
    }
    // 0x600035A4: nop

    // 0x600035A8: jal         0x60000BB0
    // 0x600035AC: addiu       $a0, $zero, 0x187
    ctx->r4 = ADD32(0, 0X187);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_9;
    // 0x600035AC: addiu       $a0, $zero, 0x187
    ctx->r4 = ADD32(0, 0X187);
    after_9:
    // 0x600035B0: beq         $v0, $zero, L_600035F8
    if (ctx->r2 == 0) {
        // 0x600035B4: nop
    
            goto L_600035F8;
    }
    // 0x600035B4: nop

    // 0x600035B8: jal         0x60000B98
    // 0x600035BC: addiu       $a0, $zero, 0x180
    ctx->r4 = ADD32(0, 0X180);
    ovl_stage_world3_B98(rdram, ctx);
        goto after_10;
    // 0x600035BC: addiu       $a0, $zero, 0x180
    ctx->r4 = ADD32(0, 0X180);
    after_10:
    // 0x600035C0: jal         0x60000244
    // 0x600035C4: addiu       $a0, $zero, 0x14B
    ctx->r4 = ADD32(0, 0X14B);
    ovl_stage_world3_244(rdram, ctx);
        goto after_11;
    // 0x600035C4: addiu       $a0, $zero, 0x14B
    ctx->r4 = ADD32(0, 0X14B);
    after_11:
    // 0x600035C8: jal         0x60000BB0
    // 0x600035CC: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_12;
    // 0x600035CC: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    after_12:
    // 0x600035D0: beq         $v0, $zero, L_600035E8
    if (ctx->r2 == 0) {
        // 0x600035D4: nop
    
            goto L_600035E8;
    }
    // 0x600035D4: nop

    // 0x600035D8: jal         0x60000A60
    // 0x600035DC: addiu       $a0, $zero, 0xA58
    ctx->r4 = ADD32(0, 0XA58);
    ovl_stage_world3_A60(rdram, ctx);
        goto after_13;
    // 0x600035DC: addiu       $a0, $zero, 0xA58
    ctx->r4 = ADD32(0, 0XA58);
    after_13:
    // 0x600035E0: b           L_60003770
    // 0x600035E4: nop

        goto L_60003770;
    // 0x600035E4: nop

L_600035E8:
    // 0x600035E8: jal         0x60000A60
    // 0x600035EC: addiu       $a0, $zero, 0xA57
    ctx->r4 = ADD32(0, 0XA57);
    ovl_stage_world3_A60(rdram, ctx);
        goto after_14;
    // 0x600035EC: addiu       $a0, $zero, 0xA57
    ctx->r4 = ADD32(0, 0XA57);
    after_14:
    // 0x600035F0: b           L_60003770
    // 0x600035F4: nop

        goto L_60003770;
    // 0x600035F4: nop

L_600035F8:
    // 0x600035F8: jal         0x60000BB0
    // 0x600035FC: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_15;
    // 0x600035FC: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    after_15:
    // 0x60003600: bne         $v0, $zero, L_60003658
    if (ctx->r2 != 0) {
        // 0x60003604: nop
    
            goto L_60003658;
    }
    // 0x60003604: nop

    // 0x60003608: jal         0x60000BB0
    // 0x6000360C: addiu       $a0, $zero, 0x188
    ctx->r4 = ADD32(0, 0X188);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_16;
    // 0x6000360C: addiu       $a0, $zero, 0x188
    ctx->r4 = ADD32(0, 0X188);
    after_16:
    // 0x60003610: beq         $v0, $zero, L_60003658
    if (ctx->r2 == 0) {
        // 0x60003614: nop
    
            goto L_60003658;
    }
    // 0x60003614: nop

    // 0x60003618: jal         0x60000B98
    // 0x6000361C: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    ovl_stage_world3_B98(rdram, ctx);
        goto after_17;
    // 0x6000361C: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    after_17:
    // 0x60003620: jal         0x60000244
    // 0x60003624: addiu       $a0, $zero, 0x14B
    ctx->r4 = ADD32(0, 0X14B);
    ovl_stage_world3_244(rdram, ctx);
        goto after_18;
    // 0x60003624: addiu       $a0, $zero, 0x14B
    ctx->r4 = ADD32(0, 0X14B);
    after_18:
    // 0x60003628: jal         0x60000BB0
    // 0x6000362C: addiu       $a0, $zero, 0x180
    ctx->r4 = ADD32(0, 0X180);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_19;
    // 0x6000362C: addiu       $a0, $zero, 0x180
    ctx->r4 = ADD32(0, 0X180);
    after_19:
    // 0x60003630: beq         $v0, $zero, L_60003648
    if (ctx->r2 == 0) {
        // 0x60003634: nop
    
            goto L_60003648;
    }
    // 0x60003634: nop

    // 0x60003638: jal         0x60000A60
    // 0x6000363C: addiu       $a0, $zero, 0xA58
    ctx->r4 = ADD32(0, 0XA58);
    ovl_stage_world3_A60(rdram, ctx);
        goto after_20;
    // 0x6000363C: addiu       $a0, $zero, 0xA58
    ctx->r4 = ADD32(0, 0XA58);
    after_20:
    // 0x60003640: b           L_60003770
    // 0x60003644: nop

        goto L_60003770;
    // 0x60003644: nop

L_60003648:
    // 0x60003648: jal         0x60000A60
    // 0x6000364C: addiu       $a0, $zero, 0xA57
    ctx->r4 = ADD32(0, 0XA57);
    ovl_stage_world3_A60(rdram, ctx);
        goto after_21;
    // 0x6000364C: addiu       $a0, $zero, 0xA57
    ctx->r4 = ADD32(0, 0XA57);
    after_21:
    // 0x60003650: b           L_60003770
    // 0x60003654: nop

        goto L_60003770;
    // 0x60003654: nop

L_60003658:
    // 0x60003658: jal         0x60000BB0
    // 0x6000365C: addiu       $a0, $zero, 0x182
    ctx->r4 = ADD32(0, 0X182);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_22;
    // 0x6000365C: addiu       $a0, $zero, 0x182
    ctx->r4 = ADD32(0, 0X182);
    after_22:
    // 0x60003660: bne         $v0, $zero, L_60003698
    if (ctx->r2 != 0) {
        // 0x60003664: nop
    
            goto L_60003698;
    }
    // 0x60003664: nop

    // 0x60003668: jal         0x60000BB0
    // 0x6000366C: addiu       $a0, $zero, 0x18E
    ctx->r4 = ADD32(0, 0X18E);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_23;
    // 0x6000366C: addiu       $a0, $zero, 0x18E
    ctx->r4 = ADD32(0, 0X18E);
    after_23:
    // 0x60003670: beq         $v0, $zero, L_60003698
    if (ctx->r2 == 0) {
        // 0x60003674: nop
    
            goto L_60003698;
    }
    // 0x60003674: nop

    // 0x60003678: jal         0x60000B98
    // 0x6000367C: addiu       $a0, $zero, 0x182
    ctx->r4 = ADD32(0, 0X182);
    ovl_stage_world3_B98(rdram, ctx);
        goto after_24;
    // 0x6000367C: addiu       $a0, $zero, 0x182
    ctx->r4 = ADD32(0, 0X182);
    after_24:
    // 0x60003680: jal         0x60000244
    // 0x60003684: addiu       $a0, $zero, 0x14B
    ctx->r4 = ADD32(0, 0X14B);
    ovl_stage_world3_244(rdram, ctx);
        goto after_25;
    // 0x60003684: addiu       $a0, $zero, 0x14B
    ctx->r4 = ADD32(0, 0X14B);
    after_25:
    // 0x60003688: jal         0x60000A60
    // 0x6000368C: addiu       $a0, $zero, 0xA5A
    ctx->r4 = ADD32(0, 0XA5A);
    ovl_stage_world3_A60(rdram, ctx);
        goto after_26;
    // 0x6000368C: addiu       $a0, $zero, 0xA5A
    ctx->r4 = ADD32(0, 0XA5A);
    after_26:
    // 0x60003690: b           L_60003770
    // 0x60003694: nop

        goto L_60003770;
    // 0x60003694: nop

L_60003698:
    // 0x60003698: jal         0x60000BB0
    // 0x6000369C: addiu       $a0, $zero, 0x180
    ctx->r4 = ADD32(0, 0X180);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_27;
    // 0x6000369C: addiu       $a0, $zero, 0x180
    ctx->r4 = ADD32(0, 0X180);
    after_27:
    // 0x600036A0: bne         $v0, $zero, L_60003720
    if (ctx->r2 != 0) {
        // 0x600036A4: nop
    
            goto L_60003720;
    }
    // 0x600036A4: nop

    // 0x600036A8: jal         0x60000BB0
    // 0x600036AC: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_28;
    // 0x600036AC: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    after_28:
    // 0x600036B0: bne         $v0, $zero, L_60003720
    if (ctx->r2 != 0) {
        // 0x600036B4: nop
    
            goto L_60003720;
    }
    // 0x600036B4: nop

    // 0x600036B8: jal         0x60000BB0
    // 0x600036BC: addiu       $a0, $zero, 0x182
    ctx->r4 = ADD32(0, 0X182);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_29;
    // 0x600036BC: addiu       $a0, $zero, 0x182
    ctx->r4 = ADD32(0, 0X182);
    after_29:
    // 0x600036C0: bne         $v0, $zero, L_60003720
    if (ctx->r2 != 0) {
        // 0x600036C4: nop
    
            goto L_60003720;
    }
    // 0x600036C4: nop

    // 0x600036C8: jal         0x60000BB0
    // 0x600036CC: addiu       $a0, $zero, 0x187
    ctx->r4 = ADD32(0, 0X187);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_30;
    // 0x600036CC: addiu       $a0, $zero, 0x187
    ctx->r4 = ADD32(0, 0X187);
    after_30:
    // 0x600036D0: bne         $v0, $zero, L_60003720
    if (ctx->r2 != 0) {
        // 0x600036D4: nop
    
            goto L_60003720;
    }
    // 0x600036D4: nop

    // 0x600036D8: jal         0x60000BB0
    // 0x600036DC: addiu       $a0, $zero, 0x188
    ctx->r4 = ADD32(0, 0X188);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_31;
    // 0x600036DC: addiu       $a0, $zero, 0x188
    ctx->r4 = ADD32(0, 0X188);
    after_31:
    // 0x600036E0: bne         $v0, $zero, L_60003720
    if (ctx->r2 != 0) {
        // 0x600036E4: nop
    
            goto L_60003720;
    }
    // 0x600036E4: nop

    // 0x600036E8: jal         0x60000BB0
    // 0x600036EC: addiu       $a0, $zero, 0x18E
    ctx->r4 = ADD32(0, 0X18E);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_32;
    // 0x600036EC: addiu       $a0, $zero, 0x18E
    ctx->r4 = ADD32(0, 0X18E);
    after_32:
    // 0x600036F0: bne         $v0, $zero, L_60003720
    if (ctx->r2 != 0) {
        // 0x600036F4: nop
    
            goto L_60003720;
    }
    // 0x600036F4: nop

    // 0x600036F8: jal         0x60000BB0
    // 0x600036FC: addiu       $a0, $zero, 0x199
    ctx->r4 = ADD32(0, 0X199);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_33;
    // 0x600036FC: addiu       $a0, $zero, 0x199
    ctx->r4 = ADD32(0, 0X199);
    after_33:
    // 0x60003700: bne         $v0, $zero, L_60003720
    if (ctx->r2 != 0) {
        // 0x60003704: nop
    
            goto L_60003720;
    }
    // 0x60003704: nop

    // 0x60003708: jal         0x60000B98
    // 0x6000370C: addiu       $a0, $zero, 0x199
    ctx->r4 = ADD32(0, 0X199);
    ovl_stage_world3_B98(rdram, ctx);
        goto after_34;
    // 0x6000370C: addiu       $a0, $zero, 0x199
    ctx->r4 = ADD32(0, 0X199);
    after_34:
    // 0x60003710: jal         0x60000A60
    // 0x60003714: addiu       $a0, $zero, 0xC0F
    ctx->r4 = ADD32(0, 0XC0F);
    ovl_stage_world3_A60(rdram, ctx);
        goto after_35;
    // 0x60003714: addiu       $a0, $zero, 0xC0F
    ctx->r4 = ADD32(0, 0XC0F);
    after_35:
    // 0x60003718: b           L_60003770
    // 0x6000371C: nop

        goto L_60003770;
    // 0x6000371C: nop

L_60003720:
    // 0x60003720: jal         0x60000BB0
    // 0x60003724: addiu       $a0, $zero, 0x19A
    ctx->r4 = ADD32(0, 0X19A);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_36;
    // 0x60003724: addiu       $a0, $zero, 0x19A
    ctx->r4 = ADD32(0, 0X19A);
    after_36:
    // 0x60003728: bne         $v0, $zero, L_60003770
    if (ctx->r2 != 0) {
        // 0x6000372C: nop
    
            goto L_60003770;
    }
    // 0x6000372C: nop

    // 0x60003730: jal         0x60000BB0
    // 0x60003734: addiu       $a0, $zero, 0x182
    ctx->r4 = ADD32(0, 0X182);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_37;
    // 0x60003734: addiu       $a0, $zero, 0x182
    ctx->r4 = ADD32(0, 0X182);
    after_37:
    // 0x60003738: bne         $v0, $zero, L_60003770
    if (ctx->r2 != 0) {
        // 0x6000373C: addiu       $a0, $sp, 0x1C
        ctx->r4 = ADD32(ctx->r29, 0X1C);
            goto L_60003770;
    }
    // 0x6000373C: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x60003740: jal         0x6000342C
    // 0x60003744: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    ovl_stage_world3_342C(rdram, ctx);
        goto after_38;
    // 0x60003744: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_38:
    // 0x60003748: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x6000374C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x60003750: beq         $v0, $zero, L_60003770
    if (ctx->r2 == 0) {
        // 0x60003754: slt         $at, $t6, $v0
        ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_60003770;
    }
    // 0x60003754: slt         $at, $t6, $v0
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x60003758: beq         $at, $zero, L_60003770
    if (ctx->r1 == 0) {
        // 0x6000375C: nop
    
            goto L_60003770;
    }
    // 0x6000375C: nop

    // 0x60003760: jal         0x60000B98
    // 0x60003764: addiu       $a0, $zero, 0x19A
    ctx->r4 = ADD32(0, 0X19A);
    ovl_stage_world3_B98(rdram, ctx);
        goto after_39;
    // 0x60003764: addiu       $a0, $zero, 0x19A
    ctx->r4 = ADD32(0, 0X19A);
    after_39:
    // 0x60003768: jal         0x60000A60
    // 0x6000376C: addiu       $a0, $zero, 0xC10
    ctx->r4 = ADD32(0, 0XC10);
    ovl_stage_world3_A60(rdram, ctx);
        goto after_40;
    // 0x6000376C: addiu       $a0, $zero, 0xC10
    ctx->r4 = ADD32(0, 0XC10);
    after_40:
L_60003770:
    // 0x60003770: jal         0x6000339C
    // 0x60003774: nop

    ovl_stage_world3_339C(rdram, ctx);
        goto after_41;
    // 0x60003774: nop

    after_41:
    // 0x60003778: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000377C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x60003780: jr          $ra
    // 0x60003784: nop

    return;
    // 0x60003784: nop

;}
RECOMP_FUNC void ovl_stage_world3_3788(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003788: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x6000378C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003790: jal         0x60000BB0
    // 0x60003794: addiu       $a0, $zero, 0x187
    ctx->r4 = ADD32(0, 0X187);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_0;
    // 0x60003794: addiu       $a0, $zero, 0x187
    ctx->r4 = ADD32(0, 0X187);
    after_0:
    // 0x60003798: bne         $v0, $zero, L_600037CC
    if (ctx->r2 != 0) {
        // 0x6000379C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600037CC;
    }
    // 0x6000379C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600037A0: jal         0x60000B98
    // 0x600037A4: addiu       $a0, $zero, 0x187
    ctx->r4 = ADD32(0, 0X187);
    ovl_stage_world3_B98(rdram, ctx);
        goto after_1;
    // 0x600037A4: addiu       $a0, $zero, 0x187
    ctx->r4 = ADD32(0, 0X187);
    after_1:
    // 0x600037A8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x600037AC: jal         0x60000E68
    // 0x600037B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world3_E68(rdram, ctx);
        goto after_2;
    // 0x600037B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x600037B4: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x600037B8: jal         0x60000E68
    // 0x600037BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world3_E68(rdram, ctx);
        goto after_3;
    // 0x600037BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x600037C0: jal         0x60000A60
    // 0x600037C4: addiu       $a0, $zero, 0xA5B
    ctx->r4 = ADD32(0, 0XA5B);
    ovl_stage_world3_A60(rdram, ctx);
        goto after_4;
    // 0x600037C4: addiu       $a0, $zero, 0xA5B
    ctx->r4 = ADD32(0, 0XA5B);
    after_4:
    // 0x600037C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600037CC:
    // 0x600037CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600037D0: jr          $ra
    // 0x600037D4: nop

    return;
    // 0x600037D4: nop

;}
RECOMP_FUNC void ovl_stage_world3_37D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600037D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600037DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600037E0: jal         0x60000BB0
    // 0x600037E4: addiu       $a0, $zero, 0x188
    ctx->r4 = ADD32(0, 0X188);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_0;
    // 0x600037E4: addiu       $a0, $zero, 0x188
    ctx->r4 = ADD32(0, 0X188);
    after_0:
    // 0x600037E8: bne         $v0, $zero, L_6000382C
    if (ctx->r2 != 0) {
        // 0x600037EC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_6000382C;
    }
    // 0x600037EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600037F0: jal         0x60000B98
    // 0x600037F4: addiu       $a0, $zero, 0x188
    ctx->r4 = ADD32(0, 0X188);
    ovl_stage_world3_B98(rdram, ctx);
        goto after_1;
    // 0x600037F4: addiu       $a0, $zero, 0x188
    ctx->r4 = ADD32(0, 0X188);
    after_1:
    // 0x600037F8: jal         0x60000E44
    // 0x600037FC: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    ovl_stage_world3_E44(rdram, ctx);
        goto after_2;
    // 0x600037FC: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_2:
    // 0x60003800: jal         0x60000E44
    // 0x60003804: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    ovl_stage_world3_E44(rdram, ctx);
        goto after_3;
    // 0x60003804: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_3:
    // 0x60003808: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x6000380C: jal         0x60000E68
    // 0x60003810: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world3_E68(rdram, ctx);
        goto after_4;
    // 0x60003810: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x60003814: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x60003818: jal         0x60000E68
    // 0x6000381C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world3_E68(rdram, ctx);
        goto after_5;
    // 0x6000381C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x60003820: jal         0x60000A60
    // 0x60003824: addiu       $a0, $zero, 0xA5C
    ctx->r4 = ADD32(0, 0XA5C);
    ovl_stage_world3_A60(rdram, ctx);
        goto after_6;
    // 0x60003824: addiu       $a0, $zero, 0xA5C
    ctx->r4 = ADD32(0, 0XA5C);
    after_6:
    // 0x60003828: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000382C:
    // 0x6000382C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60003830: jr          $ra
    // 0x60003834: nop

    return;
    // 0x60003834: nop

;}
RECOMP_FUNC void ovl_stage_world3_3838(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003838: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x6000383C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003840: jal         0x60000BB0
    // 0x60003844: addiu       $a0, $zero, 0x19B
    ctx->r4 = ADD32(0, 0X19B);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_0;
    // 0x60003844: addiu       $a0, $zero, 0x19B
    ctx->r4 = ADD32(0, 0X19B);
    after_0:
    // 0x60003848: bne         $v0, $zero, L_60003864
    if (ctx->r2 != 0) {
        // 0x6000384C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003864;
    }
    // 0x6000384C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003850: jal         0x60000B98
    // 0x60003854: addiu       $a0, $zero, 0x19B
    ctx->r4 = ADD32(0, 0X19B);
    ovl_stage_world3_B98(rdram, ctx);
        goto after_1;
    // 0x60003854: addiu       $a0, $zero, 0x19B
    ctx->r4 = ADD32(0, 0X19B);
    after_1:
    // 0x60003858: jal         0x60000A60
    // 0x6000385C: addiu       $a0, $zero, 0xC11
    ctx->r4 = ADD32(0, 0XC11);
    ovl_stage_world3_A60(rdram, ctx);
        goto after_2;
    // 0x6000385C: addiu       $a0, $zero, 0xC11
    ctx->r4 = ADD32(0, 0XC11);
    after_2:
    // 0x60003860: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003864:
    // 0x60003864: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60003868: jr          $ra
    // 0x6000386C: nop

    return;
    // 0x6000386C: nop

;}
RECOMP_FUNC void ovl_stage_world3_3870(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003870: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x60003874: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x60003878: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x6000387C: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x60003880: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x60003884: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x60003888: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x6000388C: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x60003890: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x60003894: jal         0x600009C4
    // 0x60003898: addiu       $a0, $zero, 0x41
    ctx->r4 = ADD32(0, 0X41);
    ovl_stage_world3_9C4(rdram, ctx);
        goto after_0;
    // 0x60003898: addiu       $a0, $zero, 0x41
    ctx->r4 = ADD32(0, 0X41);
    after_0:
    // 0x6000389C: jal         0x60000E74
    // 0x600038A0: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    ovl_stage_world3_E74(rdram, ctx);
        goto after_1;
    // 0x600038A0: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_1:
    // 0x600038A4: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x600038A8: jal         0x60000E74
    // 0x600038AC: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    ovl_stage_world3_E74(rdram, ctx);
        goto after_2;
    // 0x600038AC: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    after_2:
    // 0x600038B0: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x600038B4: jal         0x60000244
    // 0x600038B8: addiu       $a0, $zero, 0x151
    ctx->r4 = ADD32(0, 0X151);
    ovl_stage_world3_244(rdram, ctx);
        goto after_3;
    // 0x600038B8: addiu       $a0, $zero, 0x151
    ctx->r4 = ADD32(0, 0X151);
    after_3:
    // 0x600038BC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600038C0: lwc1        $f20, 0x69AC($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X69AC);
    // 0x600038C4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600038C8: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x600038CC: jal         0x60001028
    // 0x600038D0: nop

    ovl_stage_world3_1028(rdram, ctx);
        goto after_4;
    // 0x600038D0: nop

    after_4:
    // 0x600038D4: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x600038D8: jal         0x60001028
    // 0x600038DC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world3_1028(rdram, ctx);
        goto after_5;
    // 0x600038DC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_5:
    // 0x600038E0: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x600038E4: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x600038E8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x600038EC: addiu       $s4, $zero, 0x78
    ctx->r20 = ADD32(0, 0X78);
    // 0x600038F0: addiu       $s0, $sp, 0x3C
    ctx->r16 = ADD32(ctx->r29, 0X3C);
    // 0x600038F4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_600038F8:
    // 0x600038F8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x600038FC: jal         0x600006C4
    // 0x60003900: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_6;
    // 0x60003900: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_6:
    // 0x60003904: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x60003908: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x6000390C: sub.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f20.fl;
    // 0x60003910: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x60003914: swc1        $f6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f6.u32l;
    // 0x60003918: jal         0x600006C4
    // 0x6000391C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_7;
    // 0x6000391C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_7:
    // 0x60003920: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x60003924: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x60003928: jal         0x600006C4
    // 0x6000392C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_8;
    // 0x6000392C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_8:
    // 0x60003930: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x60003934: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x60003938: sub.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f20.fl;
    // 0x6000393C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x60003940: swc1        $f10, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f10.u32l;
    // 0x60003944: jal         0x600006C4
    // 0x60003948: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_9;
    // 0x60003948: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_9:
    // 0x6000394C: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x60003950: jal         0x60000E68
    // 0x60003954: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_stage_world3_E68(rdram, ctx);
        goto after_10;
    // 0x60003954: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_10:
    // 0x60003958: jal         0x600009D0
    // 0x6000395C: nop

    ovl_stage_world3_9D0(rdram, ctx);
        goto after_11;
    // 0x6000395C: nop

    after_11:
    // 0x60003960: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x60003964: bne         $s1, $s4, L_600038F8
    if (ctx->r17 != ctx->r20) {
        // 0x60003968: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_600038F8;
    }
    // 0x60003968: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x6000396C: jal         0x600009AC
    // 0x60003970: nop

    ovl_stage_world3_9AC(rdram, ctx);
        goto after_12;
    // 0x60003970: nop

    after_12:
    // 0x60003974: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x60003978: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x6000397C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x60003980: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x60003984: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x60003988: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x6000398C: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x60003990: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x60003994: jr          $ra
    // 0x60003998: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x60003998: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void ovl_stage_world3_399C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000399C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x600039A0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x600039A4: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x600039A8: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x600039AC: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x600039B0: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x600039B4: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x600039B8: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x600039BC: jal         0x60000E74
    // 0x600039C0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    ovl_stage_world3_E74(rdram, ctx);
        goto after_0;
    // 0x600039C0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_0:
    // 0x600039C4: addiu       $s2, $sp, 0x34
    ctx->r18 = ADD32(ctx->r29, 0X34);
    // 0x600039C8: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x600039CC: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x600039D0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600039D4: jal         0x600006C4
    // 0x600039D8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_1;
    // 0x600039D8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_1:
    // 0x600039DC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600039E0: lwc1        $f20, 0x69B0($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X69B0);
    // 0x600039E4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x600039E8: addiu       $s3, $zero, 0x3C
    ctx->r19 = ADD32(0, 0X3C);
L_600039EC:
    // 0x600039EC: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x600039F0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x600039F4: add.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f20.fl;
    // 0x600039F8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x600039FC: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
    // 0x60003A00: jal         0x600006C4
    // 0x60003A04: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_2;
    // 0x60003A04: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_2:
    // 0x60003A08: jal         0x600009D0
    // 0x60003A0C: nop

    ovl_stage_world3_9D0(rdram, ctx);
        goto after_3;
    // 0x60003A0C: nop

    after_3:
    // 0x60003A10: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60003A14: bne         $s0, $s3, L_600039EC
    if (ctx->r16 != ctx->r19) {
        // 0x60003A18: nop
    
            goto L_600039EC;
    }
    // 0x60003A18: nop

    // 0x60003A1C: jal         0x600009C4
    // 0x60003A20: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_stage_world3_9C4(rdram, ctx);
        goto after_4;
    // 0x60003A20: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_4:
    // 0x60003A24: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x60003A28: jal         0x60000E68
    // 0x60003A2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world3_E68(rdram, ctx);
        goto after_5;
    // 0x60003A2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x60003A30: jal         0x60000E44
    // 0x60003A34: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    ovl_stage_world3_E44(rdram, ctx);
        goto after_6;
    // 0x60003A34: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_6:
    // 0x60003A38: jal         0x600009AC
    // 0x60003A3C: nop

    ovl_stage_world3_9AC(rdram, ctx);
        goto after_7;
    // 0x60003A3C: nop

    after_7:
    // 0x60003A40: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x60003A44: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x60003A48: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x60003A4C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x60003A50: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x60003A54: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x60003A58: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x60003A5C: jr          $ra
    // 0x60003A60: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x60003A60: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_stage_world3_3A64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003A64: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60003A68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003A6C: jal         0x60000BB0
    // 0x60003A70: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_0;
    // 0x60003A70: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    after_0:
    // 0x60003A74: bne         $v0, $zero, L_60003AA0
    if (ctx->r2 != 0) {
        // 0x60003A78: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003AA0;
    }
    // 0x60003A78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003A7C: jal         0x60000B98
    // 0x60003A80: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    ovl_stage_world3_B98(rdram, ctx);
        goto after_1;
    // 0x60003A80: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    after_1:
    // 0x60003A84: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003A88: addiu       $a0, $a0, 0x399C
    ctx->r4 = ADD32(ctx->r4, 0X399C);
    // 0x60003A8C: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60003A90: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60003A94: jal         0x60000994
    // 0x60003A98: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world3_994(rdram, ctx);
        goto after_2;
    // 0x60003A98: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x60003A9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003AA0:
    // 0x60003AA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60003AA4: jr          $ra
    // 0x60003AA8: nop

    return;
    // 0x60003AA8: nop

;}
RECOMP_FUNC void ovl_stage_world3_3AAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003AAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60003AB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003AB4: jal         0x60000BB0
    // 0x60003AB8: addiu       $a0, $zero, 0x107
    ctx->r4 = ADD32(0, 0X107);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_0;
    // 0x60003AB8: addiu       $a0, $zero, 0x107
    ctx->r4 = ADD32(0, 0X107);
    after_0:
    // 0x60003ABC: bne         $v0, $zero, L_60003AE8
    if (ctx->r2 != 0) {
        // 0x60003AC0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003AE8;
    }
    // 0x60003AC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003AC4: jal         0x60000B98
    // 0x60003AC8: addiu       $a0, $zero, 0x107
    ctx->r4 = ADD32(0, 0X107);
    ovl_stage_world3_B98(rdram, ctx);
        goto after_1;
    // 0x60003AC8: addiu       $a0, $zero, 0x107
    ctx->r4 = ADD32(0, 0X107);
    after_1:
    // 0x60003ACC: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60003AD0: addiu       $a0, $a0, 0x3870
    ctx->r4 = ADD32(ctx->r4, 0X3870);
    // 0x60003AD4: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60003AD8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60003ADC: jal         0x60000994
    // 0x60003AE0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world3_994(rdram, ctx);
        goto after_2;
    // 0x60003AE0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x60003AE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003AE8:
    // 0x60003AE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60003AEC: jr          $ra
    // 0x60003AF0: nop

    return;
    // 0x60003AF0: nop

;}
RECOMP_FUNC void ovl_stage_world3_3AF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003AF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60003AF8: bne         $a0, $zero, L_60003B10
    if (ctx->r4 != 0) {
        // 0x60003AFC: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_60003B10;
    }
    // 0x60003AFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003B00: jal         0x60000A60
    // 0x60003B04: addiu       $a0, $a1, 0xA67
    ctx->r4 = ADD32(ctx->r5, 0XA67);
    ovl_stage_world3_A60(rdram, ctx);
        goto after_0;
    // 0x60003B04: addiu       $a0, $a1, 0xA67
    ctx->r4 = ADD32(ctx->r5, 0XA67);
    after_0:
    // 0x60003B08: b           L_60003B44
    // 0x60003B0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60003B44;
    // 0x60003B0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003B10:
    // 0x60003B10: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x60003B14: bne         $a0, $at, L_60003B30
    if (ctx->r4 != ctx->r1) {
        // 0x60003B18: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_60003B30;
    }
    // 0x60003B18: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x60003B1C: jal         0x60000A60
    // 0x60003B20: addiu       $a0, $a1, 0xA76
    ctx->r4 = ADD32(ctx->r5, 0XA76);
    ovl_stage_world3_A60(rdram, ctx);
        goto after_1;
    // 0x60003B20: addiu       $a0, $a1, 0xA76
    ctx->r4 = ADD32(ctx->r5, 0XA76);
    after_1:
    // 0x60003B24: b           L_60003B44
    // 0x60003B28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_60003B44;
    // 0x60003B28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003B2C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_60003B30:
    // 0x60003B30: bne         $a0, $at, L_60003B44
    if (ctx->r4 != ctx->r1) {
        // 0x60003B34: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003B44;
    }
    // 0x60003B34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003B38: jal         0x60000A60
    // 0x60003B3C: addiu       $a0, $zero, 0xA61
    ctx->r4 = ADD32(0, 0XA61);
    ovl_stage_world3_A60(rdram, ctx);
        goto after_2;
    // 0x60003B3C: addiu       $a0, $zero, 0xA61
    ctx->r4 = ADD32(0, 0XA61);
    after_2:
    // 0x60003B40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003B44:
    // 0x60003B44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60003B48: jr          $ra
    // 0x60003B4C: nop

    return;
    // 0x60003B4C: nop

;}
RECOMP_FUNC void ovl_stage_world3_3B50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003B50: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x60003B54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003B58: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x60003B5C: jal         0x6000342C
    // 0x60003B60: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    ovl_stage_world3_342C(rdram, ctx);
        goto after_0;
    // 0x60003B60: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x60003B64: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x60003B68: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x60003B6C: nop

    // 0x60003B70: slt         $at, $t6, $t7
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x60003B74: beq         $at, $zero, L_60003BC0
    if (ctx->r1 == 0) {
        // 0x60003B78: lw          $t0, 0x1C($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X1C);
            goto L_60003BC0;
    }
    // 0x60003B78: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x60003B7C: jal         0x60000BB0
    // 0x60003B80: addiu       $a0, $zero, 0x18B
    ctx->r4 = ADD32(0, 0X18B);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_1;
    // 0x60003B80: addiu       $a0, $zero, 0x18B
    ctx->r4 = ADD32(0, 0X18B);
    after_1:
    // 0x60003B84: bne         $v0, $zero, L_60003BC0
    if (ctx->r2 != 0) {
        // 0x60003B88: lw          $t0, 0x1C($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X1C);
            goto L_60003BC0;
    }
    // 0x60003B88: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x60003B8C: jal         0x60000B98
    // 0x60003B90: addiu       $a0, $zero, 0x18B
    ctx->r4 = ADD32(0, 0X18B);
    ovl_stage_world3_B98(rdram, ctx);
        goto after_2;
    // 0x60003B90: addiu       $a0, $zero, 0x18B
    ctx->r4 = ADD32(0, 0X18B);
    after_2:
    // 0x60003B94: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x60003B98: jal         0x60000E68
    // 0x60003B9C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world3_E68(rdram, ctx);
        goto after_3;
    // 0x60003B9C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x60003BA0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x60003BA4: jal         0x60003AF4
    // 0x60003BA8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_stage_world3_3AF4(rdram, ctx);
        goto after_4;
    // 0x60003BA8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_4:
    // 0x60003BAC: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x60003BB0: nop

    // 0x60003BB4: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x60003BB8: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x60003BBC: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
L_60003BC0:
    // 0x60003BC0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x60003BC4: bne         $t0, $at, L_60003BD8
    if (ctx->r8 != ctx->r1) {
        // 0x60003BC8: lw          $t1, 0x1C($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X1C);
            goto L_60003BD8;
    }
    // 0x60003BC8: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x60003BCC: jal         0x60003AAC
    // 0x60003BD0: nop

    ovl_stage_world3_3AAC(rdram, ctx);
        goto after_5;
    // 0x60003BD0: nop

    after_5:
    // 0x60003BD4: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
L_60003BD8:
    // 0x60003BD8: nop

    // 0x60003BDC: slti        $at, $t1, 0x2
    ctx->r1 = SIGNED(ctx->r9) < 0X2 ? 1 : 0;
    // 0x60003BE0: bne         $at, $zero, L_60003C04
    if (ctx->r1 != 0) {
        // 0x60003BE4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003C04;
    }
    // 0x60003BE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003BE8: jal         0x60000BB0
    // 0x60003BEC: addiu       $a0, $zero, 0x18B
    ctx->r4 = ADD32(0, 0X18B);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_6;
    // 0x60003BEC: addiu       $a0, $zero, 0x18B
    ctx->r4 = ADD32(0, 0X18B);
    after_6:
    // 0x60003BF0: beq         $v0, $zero, L_60003C04
    if (ctx->r2 == 0) {
        // 0x60003BF4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003C04;
    }
    // 0x60003BF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003BF8: jal         0x60003A64
    // 0x60003BFC: nop

    ovl_stage_world3_3A64(rdram, ctx);
        goto after_7;
    // 0x60003BFC: nop

    after_7:
    // 0x60003C00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003C04:
    // 0x60003C04: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x60003C08: jr          $ra
    // 0x60003C0C: nop

    return;
    // 0x60003C0C: nop

;}
RECOMP_FUNC void ovl_stage_world3_3C10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003C10: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x60003C14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003C18: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x60003C1C: jal         0x6000342C
    // 0x60003C20: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    ovl_stage_world3_342C(rdram, ctx);
        goto after_0;
    // 0x60003C20: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x60003C24: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x60003C28: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x60003C2C: nop

    // 0x60003C30: slt         $at, $t6, $t7
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x60003C34: beq         $at, $zero, L_60003C80
    if (ctx->r1 == 0) {
        // 0x60003C38: lw          $t0, 0x1C($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X1C);
            goto L_60003C80;
    }
    // 0x60003C38: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x60003C3C: jal         0x60000BB0
    // 0x60003C40: addiu       $a0, $zero, 0x18C
    ctx->r4 = ADD32(0, 0X18C);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_1;
    // 0x60003C40: addiu       $a0, $zero, 0x18C
    ctx->r4 = ADD32(0, 0X18C);
    after_1:
    // 0x60003C44: bne         $v0, $zero, L_60003C80
    if (ctx->r2 != 0) {
        // 0x60003C48: lw          $t0, 0x1C($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X1C);
            goto L_60003C80;
    }
    // 0x60003C48: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x60003C4C: jal         0x60000B98
    // 0x60003C50: addiu       $a0, $zero, 0x18C
    ctx->r4 = ADD32(0, 0X18C);
    ovl_stage_world3_B98(rdram, ctx);
        goto after_2;
    // 0x60003C50: addiu       $a0, $zero, 0x18C
    ctx->r4 = ADD32(0, 0X18C);
    after_2:
    // 0x60003C54: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x60003C58: jal         0x60000E68
    // 0x60003C5C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world3_E68(rdram, ctx);
        goto after_3;
    // 0x60003C5C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x60003C60: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x60003C64: jal         0x60003AF4
    // 0x60003C68: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world3_3AF4(rdram, ctx);
        goto after_4;
    // 0x60003C68: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x60003C6C: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x60003C70: nop

    // 0x60003C74: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x60003C78: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x60003C7C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
L_60003C80:
    // 0x60003C80: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x60003C84: bne         $t0, $at, L_60003C98
    if (ctx->r8 != ctx->r1) {
        // 0x60003C88: lw          $t1, 0x1C($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X1C);
            goto L_60003C98;
    }
    // 0x60003C88: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x60003C8C: jal         0x60003AAC
    // 0x60003C90: nop

    ovl_stage_world3_3AAC(rdram, ctx);
        goto after_5;
    // 0x60003C90: nop

    after_5:
    // 0x60003C94: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
L_60003C98:
    // 0x60003C98: nop

    // 0x60003C9C: slti        $at, $t1, 0x2
    ctx->r1 = SIGNED(ctx->r9) < 0X2 ? 1 : 0;
    // 0x60003CA0: bne         $at, $zero, L_60003CC4
    if (ctx->r1 != 0) {
        // 0x60003CA4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003CC4;
    }
    // 0x60003CA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003CA8: jal         0x60000BB0
    // 0x60003CAC: addiu       $a0, $zero, 0x18C
    ctx->r4 = ADD32(0, 0X18C);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_6;
    // 0x60003CAC: addiu       $a0, $zero, 0x18C
    ctx->r4 = ADD32(0, 0X18C);
    after_6:
    // 0x60003CB0: beq         $v0, $zero, L_60003CC4
    if (ctx->r2 == 0) {
        // 0x60003CB4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003CC4;
    }
    // 0x60003CB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003CB8: jal         0x60003A64
    // 0x60003CBC: nop

    ovl_stage_world3_3A64(rdram, ctx);
        goto after_7;
    // 0x60003CBC: nop

    after_7:
    // 0x60003CC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003CC4:
    // 0x60003CC4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x60003CC8: jr          $ra
    // 0x60003CCC: nop

    return;
    // 0x60003CCC: nop

;}
RECOMP_FUNC void ovl_stage_world3_3CD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003CD0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x60003CD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60003CD8: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x60003CDC: jal         0x6000342C
    // 0x60003CE0: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    ovl_stage_world3_342C(rdram, ctx);
        goto after_0;
    // 0x60003CE0: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x60003CE4: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x60003CE8: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x60003CEC: nop

    // 0x60003CF0: slt         $at, $t6, $t7
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x60003CF4: beq         $at, $zero, L_60003D40
    if (ctx->r1 == 0) {
        // 0x60003CF8: lw          $t0, 0x1C($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X1C);
            goto L_60003D40;
    }
    // 0x60003CF8: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x60003CFC: jal         0x60000BB0
    // 0x60003D00: addiu       $a0, $zero, 0x18D
    ctx->r4 = ADD32(0, 0X18D);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_1;
    // 0x60003D00: addiu       $a0, $zero, 0x18D
    ctx->r4 = ADD32(0, 0X18D);
    after_1:
    // 0x60003D04: bne         $v0, $zero, L_60003D40
    if (ctx->r2 != 0) {
        // 0x60003D08: lw          $t0, 0x1C($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X1C);
            goto L_60003D40;
    }
    // 0x60003D08: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x60003D0C: jal         0x60000B98
    // 0x60003D10: addiu       $a0, $zero, 0x18D
    ctx->r4 = ADD32(0, 0X18D);
    ovl_stage_world3_B98(rdram, ctx);
        goto after_2;
    // 0x60003D10: addiu       $a0, $zero, 0x18D
    ctx->r4 = ADD32(0, 0X18D);
    after_2:
    // 0x60003D14: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x60003D18: jal         0x60000E68
    // 0x60003D1C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world3_E68(rdram, ctx);
        goto after_3;
    // 0x60003D1C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x60003D20: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x60003D24: jal         0x60003AF4
    // 0x60003D28: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world3_3AF4(rdram, ctx);
        goto after_4;
    // 0x60003D28: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x60003D2C: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x60003D30: nop

    // 0x60003D34: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x60003D38: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x60003D3C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
L_60003D40:
    // 0x60003D40: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x60003D44: bne         $t0, $at, L_60003D58
    if (ctx->r8 != ctx->r1) {
        // 0x60003D48: lw          $t1, 0x1C($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X1C);
            goto L_60003D58;
    }
    // 0x60003D48: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x60003D4C: jal         0x60003AAC
    // 0x60003D50: nop

    ovl_stage_world3_3AAC(rdram, ctx);
        goto after_5;
    // 0x60003D50: nop

    after_5:
    // 0x60003D54: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
L_60003D58:
    // 0x60003D58: nop

    // 0x60003D5C: slti        $at, $t1, 0x2
    ctx->r1 = SIGNED(ctx->r9) < 0X2 ? 1 : 0;
    // 0x60003D60: bne         $at, $zero, L_60003D84
    if (ctx->r1 != 0) {
        // 0x60003D64: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003D84;
    }
    // 0x60003D64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003D68: jal         0x60000BB0
    // 0x60003D6C: addiu       $a0, $zero, 0x18D
    ctx->r4 = ADD32(0, 0X18D);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_6;
    // 0x60003D6C: addiu       $a0, $zero, 0x18D
    ctx->r4 = ADD32(0, 0X18D);
    after_6:
    // 0x60003D70: beq         $v0, $zero, L_60003D84
    if (ctx->r2 == 0) {
        // 0x60003D74: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60003D84;
    }
    // 0x60003D74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60003D78: jal         0x60003A64
    // 0x60003D7C: nop

    ovl_stage_world3_3A64(rdram, ctx);
        goto after_7;
    // 0x60003D7C: nop

    after_7:
    // 0x60003D80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60003D84:
    // 0x60003D84: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x60003D88: jr          $ra
    // 0x60003D8C: nop

    return;
    // 0x60003D8C: nop

;}
RECOMP_FUNC void ovl_stage_world3_3D90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60003D90: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x60003D94: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x60003D98: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x60003D9C: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x60003DA0: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x60003DA4: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x60003DA8: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x60003DAC: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x60003DB0: jal         0x60000E74
    // 0x60003DB4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    ovl_stage_world3_E74(rdram, ctx);
        goto after_0;
    // 0x60003DB4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_0:
    // 0x60003DB8: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x60003DBC: jal         0x60000DE4
    // 0x60003DC0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world3_DE4(rdram, ctx);
        goto after_1;
    // 0x60003DC0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x60003DC4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x60003DC8: jal         0x60000DE4
    // 0x60003DCC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world3_DE4(rdram, ctx);
        goto after_2;
    // 0x60003DCC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x60003DD0: jal         0x60000C1C
    // 0x60003DD4: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    ovl_stage_world3_C1C(rdram, ctx);
        goto after_3;
    // 0x60003DD4: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    after_3:
    // 0x60003DD8: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x60003DDC: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x60003DE0: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x60003DE4: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x60003DE8: addiu       $s2, $sp, 0x38
    ctx->r18 = ADD32(ctx->r29, 0X38);
    // 0x60003DEC: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x60003DF0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x60003DF4: sw          $t8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r24;
    // 0x60003DF8: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x60003DFC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60003E00: jal         0x60000808
    // 0x60003E04: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_stage_world3_808(rdram, ctx);
        goto after_4;
    // 0x60003E04: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_4:
    // 0x60003E08: jal         0x60000A90
    // 0x60003E0C: nop

    ovl_stage_world3_A90(rdram, ctx);
        goto after_5;
    // 0x60003E0C: nop

    after_5:
    // 0x60003E10: jal         0x60000A6C
    // 0x60003E14: nop

    ovl_stage_world3_A6C(rdram, ctx);
        goto after_6;
    // 0x60003E14: nop

    after_6:
    // 0x60003E18: addiu       $t9, $zero, -0x28
    ctx->r25 = ADD32(0, -0X28);
    // 0x60003E1C: sh          $zero, 0x38($sp)
    MEM_H(0X38, ctx->r29) = 0;
    // 0x60003E20: sh          $zero, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = 0;
    // 0x60003E24: sh          $zero, 0x3C($sp)
    MEM_H(0X3C, ctx->r29) = 0;
    // 0x60003E28: sb          $zero, 0x3E($sp)
    MEM_B(0X3E, ctx->r29) = 0;
    // 0x60003E2C: sb          $t9, 0x3F($sp)
    MEM_B(0X3F, ctx->r29) = ctx->r25;
    // 0x60003E30: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60003E34: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x60003E38: jal         0x60000808
    // 0x60003E3C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    ovl_stage_world3_808(rdram, ctx);
        goto after_7;
    // 0x60003E3C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_7:
    // 0x60003E40: jal         0x600009C4
    // 0x60003E44: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    ovl_stage_world3_9C4(rdram, ctx);
        goto after_8;
    // 0x60003E44: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_8:
    // 0x60003E48: addiu       $s2, $sp, 0x50
    ctx->r18 = ADD32(ctx->r29, 0X50);
    // 0x60003E4C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x60003E50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x60003E54: jal         0x600006C4
    // 0x60003E58: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_9;
    // 0x60003E58: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    after_9:
    // 0x60003E5C: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x60003E60: addiu       $at, $zero, -0x11
    ctx->r1 = ADD32(0, -0X11);
    // 0x60003E64: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x60003E68: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x60003E6C: and         $t2, $t1, $at
    ctx->r10 = ctx->r9 & ctx->r1;
    // 0x60003E70: sw          $t1, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r9;
    // 0x60003E74: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x60003E78: sw          $t2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r10;
    // 0x60003E7C: and         $t3, $t2, $at
    ctx->r11 = ctx->r10 & ctx->r1;
    // 0x60003E80: sw          $t3, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r11;
    // 0x60003E84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x60003E88: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x60003E8C: jal         0x600006C4
    // 0x60003E90: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_10;
    // 0x60003E90: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_10:
    // 0x60003E94: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x60003E98: jal         0x60000E68
    // 0x60003E9C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world3_E68(rdram, ctx);
        goto after_11;
    // 0x60003E9C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_11:
    // 0x60003EA0: jal         0x600009C4
    // 0x60003EA4: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_stage_world3_9C4(rdram, ctx);
        goto after_12;
    // 0x60003EA4: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_12:
    // 0x60003EA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x60003EAC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x60003EB0: jal         0x600006C4
    // 0x60003EB4: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_13;
    // 0x60003EB4: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_13:
    // 0x60003EB8: lw          $t4, 0x54($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X54);
    // 0x60003EBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x60003EC0: ori         $t5, $t4, 0x4
    ctx->r13 = ctx->r12 | 0X4;
    // 0x60003EC4: sw          $t5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r13;
    // 0x60003EC8: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x60003ECC: jal         0x600006C4
    // 0x60003ED0: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_14;
    // 0x60003ED0: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_14:
    // 0x60003ED4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x60003ED8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x60003EDC: jal         0x600006C4
    // 0x60003EE0: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_15;
    // 0x60003EE0: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_15:
    // 0x60003EE4: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x60003EE8: lwc1        $f0, 0x50($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X50);
    // 0x60003EEC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60003EF0: lui         $at, 0x442F
    ctx->r1 = S32(0X442F << 16);
    // 0x60003EF4: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x60003EF8: nop

    // 0x60003EFC: bc1f        L_60003FEC
    if (!c1cs) {
        // 0x60003F00: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_60003FEC;
    }
    // 0x60003F00: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x60003F04: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60003F08: lwc1        $f8, 0x54($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X54);
    // 0x60003F0C: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x60003F10: nop

    // 0x60003F14: bc1f        L_60003FEC
    if (!c1cs) {
        // 0x60003F18: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_60003FEC;
    }
    // 0x60003F18: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x60003F1C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x60003F20: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x60003F24: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x60003F28: nop

    // 0x60003F2C: bc1f        L_60003FEC
    if (!c1cs) {
        // 0x60003F30: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_60003FEC;
    }
    // 0x60003F30: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x60003F34: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x60003F38: lwc1        $f18, 0x58($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X58);
    // 0x60003F3C: c.lt.s      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.fl < ctx->f16.fl;
    // 0x60003F40: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x60003F44: bc1f        L_60003FEC
    if (!c1cs) {
        // 0x60003F48: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_60003FEC;
    }
    // 0x60003F48: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x60003F4C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x60003F50: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x60003F54: c.le.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl <= ctx->f18.fl;
    // 0x60003F58: nop

    // 0x60003F5C: bc1f        L_60003FEC
    if (!c1cs) {
        // 0x60003F60: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_60003FEC;
    }
    // 0x60003F60: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x60003F64: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60003F68: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x60003F6C: c.lt.s      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.fl < ctx->f6.fl;
    // 0x60003F70: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x60003F74: bc1f        L_60003FE8
    if (!c1cs) {
        // 0x60003F78: nop
    
            goto L_60003FE8;
    }
    // 0x60003F78: nop

    // 0x60003F7C: jal         0x600006C4
    // 0x60003F80: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_16;
    // 0x60003F80: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_16:
    // 0x60003F84: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x60003F88: addiu       $at, $zero, -0x11
    ctx->r1 = ADD32(0, -0X11);
    // 0x60003F8C: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x60003F90: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x60003F94: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x60003F98: sw          $t7, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r15;
    // 0x60003F9C: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x60003FA0: sw          $t8, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r24;
    // 0x60003FA4: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x60003FA8: sw          $t9, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r25;
    // 0x60003FAC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x60003FB0: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x60003FB4: jal         0x600006C4
    // 0x60003FB8: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_17;
    // 0x60003FB8: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_17:
    // 0x60003FBC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x60003FC0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x60003FC4: jal         0x600006C4
    // 0x60003FC8: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_18;
    // 0x60003FC8: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_18:
    // 0x60003FCC: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x60003FD0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x60003FD4: ori         $t1, $t0, 0x4
    ctx->r9 = ctx->r8 | 0X4;
    // 0x60003FD8: sw          $t1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r9;
    // 0x60003FDC: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x60003FE0: jal         0x600006C4
    // 0x60003FE4: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_19;
    // 0x60003FE4: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_19:
L_60003FE8:
    // 0x60003FE8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
L_60003FEC:
    // 0x60003FEC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x60003FF0: jal         0x600006C4
    // 0x60003FF4: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_20;
    // 0x60003FF4: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_20:
    // 0x60003FF8: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x60003FFC: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x60004000: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60004004: addiu       $s1, $zero, 0x3C
    ctx->r17 = ADD32(0, 0X3C);
L_60004008:
    // 0x60004008: lwc1        $f10, 0x54($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X54);
    // 0x6000400C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x60004010: sub.s       $f8, $f10, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f20.fl;
    // 0x60004014: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x60004018: swc1        $f8, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f8.u32l;
    // 0x6000401C: jal         0x600006C4
    // 0x60004020: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_21;
    // 0x60004020: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_21:
    // 0x60004024: jal         0x600009D0
    // 0x60004028: nop

    ovl_stage_world3_9D0(rdram, ctx);
        goto after_22;
    // 0x60004028: nop

    after_22:
    // 0x6000402C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60004030: bne         $s0, $s1, L_60004008
    if (ctx->r16 != ctx->r17) {
        // 0x60004034: nop
    
            goto L_60004008;
    }
    // 0x60004034: nop

    // 0x60004038: jal         0x600009C4
    // 0x6000403C: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_stage_world3_9C4(rdram, ctx);
        goto after_23;
    // 0x6000403C: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_23:
    // 0x60004040: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x60004044: lui         $at, 0xFFFE
    ctx->r1 = S32(0XFFFE << 16);
    // 0x60004048: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x6000404C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x60004050: and         $t3, $t2, $at
    ctx->r11 = ctx->r10 & ctx->r1;
    // 0x60004054: addiu       $a0, $zero, 0x863
    ctx->r4 = ADD32(0, 0X863);
    // 0x60004058: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x6000405C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60004060: jal         0x60000C10
    // 0x60004064: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    ovl_stage_world3_C10(rdram, ctx);
        goto after_24;
    // 0x60004064: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    after_24:
    // 0x60004068: jal         0x600009AC
    // 0x6000406C: nop

    ovl_stage_world3_9AC(rdram, ctx);
        goto after_25;
    // 0x6000406C: nop

    after_25:
    // 0x60004070: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x60004074: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x60004078: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x6000407C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x60004080: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x60004084: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x60004088: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x6000408C: jr          $ra
    // 0x60004090: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x60004090: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void ovl_stage_world3_4094(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004094: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60004098: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x6000409C: jal         0x60000DE4
    // 0x600040A0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world3_DE4(rdram, ctx);
        goto after_0;
    // 0x600040A0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x600040A4: jal         0x60000CC4
    // 0x600040A8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_stage_world3_CC4(rdram, ctx);
        goto after_1;
    // 0x600040A8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x600040AC: lui         $a1, 0x409C
    ctx->r5 = S32(0X409C << 16);
    // 0x600040B0: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x600040B4: jal         0x60001028
    // 0x600040B8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world3_1028(rdram, ctx);
        goto after_2;
    // 0x600040B8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x600040BC: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600040C0: addiu       $a0, $a0, 0x3D90
    ctx->r4 = ADD32(ctx->r4, 0X3D90);
    // 0x600040C4: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x600040C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x600040CC: jal         0x60000994
    // 0x600040D0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world3_994(rdram, ctx);
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
RECOMP_FUNC void ovl_stage_world3_40E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600040E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600040E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600040EC: jal         0x60000BB0
    // 0x600040F0: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_0;
    // 0x600040F0: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    after_0:
    // 0x600040F4: bne         $v0, $zero, L_60004148
    if (ctx->r2 != 0) {
        // 0x600040F8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60004148;
    }
    // 0x600040F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600040FC: jal         0x60000B98
    // 0x60004100: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    ovl_stage_world3_B98(rdram, ctx);
        goto after_1;
    // 0x60004100: addiu       $a0, $zero, 0x106
    ctx->r4 = ADD32(0, 0X106);
    after_1:
    // 0x60004104: jal         0x60000BB0
    // 0x60004108: addiu       $a0, $zero, 0x197
    ctx->r4 = ADD32(0, 0X197);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_2;
    // 0x60004108: addiu       $a0, $zero, 0x197
    ctx->r4 = ADD32(0, 0X197);
    after_2:
    // 0x6000410C: bne         $v0, $zero, L_60004128
    if (ctx->r2 != 0) {
        // 0x60004110: addiu       $a0, $zero, 0x4
        ctx->r4 = ADD32(0, 0X4);
            goto L_60004128;
    }
    // 0x60004110: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x60004114: jal         0x60000B98
    // 0x60004118: addiu       $a0, $zero, 0x197
    ctx->r4 = ADD32(0, 0X197);
    ovl_stage_world3_B98(rdram, ctx);
        goto after_3;
    // 0x60004118: addiu       $a0, $zero, 0x197
    ctx->r4 = ADD32(0, 0X197);
    after_3:
    // 0x6000411C: jal         0x60000A60
    // 0x60004120: addiu       $a0, $zero, 0xA66
    ctx->r4 = ADD32(0, 0XA66);
    ovl_stage_world3_A60(rdram, ctx);
        goto after_4;
    // 0x60004120: addiu       $a0, $zero, 0xA66
    ctx->r4 = ADD32(0, 0XA66);
    after_4:
    // 0x60004124: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
L_60004128:
    // 0x60004128: jal         0x60000E68
    // 0x6000412C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world3_E68(rdram, ctx);
        goto after_5;
    // 0x6000412C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x60004130: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x60004134: jal         0x60000E68
    // 0x60004138: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world3_E68(rdram, ctx);
        goto after_6;
    // 0x60004138: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x6000413C: jal         0x60000E44
    // 0x60004140: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    ovl_stage_world3_E44(rdram, ctx);
        goto after_7;
    // 0x60004140: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_7:
    // 0x60004144: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60004148:
    // 0x60004148: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x6000414C: jr          $ra
    // 0x60004150: nop

    return;
    // 0x60004150: nop

;}
RECOMP_FUNC void ovl_stage_world3_4154(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004154: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x60004158: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x6000415C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x60004160: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x60004164: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x60004168: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x6000416C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x60004170: jal         0x60000E74
    // 0x60004174: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_stage_world3_E74(rdram, ctx);
        goto after_0;
    // 0x60004174: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_0:
    // 0x60004178: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x6000417C: jal         0x60000DE4
    // 0x60004180: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world3_DE4(rdram, ctx);
        goto after_1;
    // 0x60004180: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x60004184: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    // 0x60004188: jal         0x60000DE4
    // 0x6000418C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world3_DE4(rdram, ctx);
        goto after_2;
    // 0x6000418C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x60004190: jal         0x60000C1C
    // 0x60004194: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    ovl_stage_world3_C1C(rdram, ctx);
        goto after_3;
    // 0x60004194: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    after_3:
    // 0x60004198: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x6000419C: jal         0x60000BB0
    // 0x600041A0: addiu       $a0, $zero, 0x105
    ctx->r4 = ADD32(0, 0X105);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_4;
    // 0x600041A0: addiu       $a0, $zero, 0x105
    ctx->r4 = ADD32(0, 0X105);
    after_4:
    // 0x600041A4: bne         $v0, $zero, L_6000455C
    if (ctx->r2 != 0) {
        // 0x600041A8: nop
    
            goto L_6000455C;
    }
    // 0x600041A8: nop

    // 0x600041AC: jal         0x60000B98
    // 0x600041B0: addiu       $a0, $zero, 0x105
    ctx->r4 = ADD32(0, 0X105);
    ovl_stage_world3_B98(rdram, ctx);
        goto after_5;
    // 0x600041B0: addiu       $a0, $zero, 0x105
    ctx->r4 = ADD32(0, 0X105);
    after_5:
    // 0x600041B4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x600041B8: addiu       $s1, $sp, 0x58
    ctx->r17 = ADD32(ctx->r29, 0X58);
    // 0x600041BC: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x600041C0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x600041C4: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x600041C8: swc1        $f2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f2.u32l;
    // 0x600041CC: swc1        $f2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f2.u32l;
    // 0x600041D0: jal         0x600006C4
    // 0x600041D4: swc1        $f2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f2.u32l;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_6;
    // 0x600041D4: swc1        $f2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f2.u32l;
    after_6:
    // 0x600041D8: jal         0x60000A6C
    // 0x600041DC: nop

    ovl_stage_world3_A6C(rdram, ctx);
        goto after_7;
    // 0x600041DC: nop

    after_7:
    // 0x600041E0: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x600041E4: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x600041E8: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x600041EC: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x600041F0: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x600041F4: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x600041F8: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x600041FC: jal         0x600006C4
    // 0x60004200: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_8;
    // 0x60004200: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_8:
    // 0x60004204: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x60004208: addiu       $s0, $zero, -0x11
    ctx->r16 = ADD32(0, -0X11);
    // 0x6000420C: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x60004210: and         $t9, $t8, $s0
    ctx->r25 = ctx->r24 & ctx->r16;
    // 0x60004214: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x60004218: sw          $t9, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r25;
    // 0x6000421C: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x60004220: sw          $t0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r8;
    // 0x60004224: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x60004228: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x6000422C: sw          $t1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r9;
    // 0x60004230: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x60004234: jal         0x600006C4
    // 0x60004238: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_9;
    // 0x60004238: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_9:
    // 0x6000423C: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x60004240: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x60004244: jal         0x600006C4
    // 0x60004248: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_10;
    // 0x60004248: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_10:
    // 0x6000424C: lw          $t2, 0x5C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X5C);
    // 0x60004250: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x60004254: ori         $t3, $t2, 0x4
    ctx->r11 = ctx->r10 | 0X4;
    // 0x60004258: sw          $t3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r11;
    // 0x6000425C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x60004260: jal         0x600006C4
    // 0x60004264: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_11;
    // 0x60004264: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_11:
    // 0x60004268: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x6000426C: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x60004270: jal         0x600006C4
    // 0x60004274: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_12;
    // 0x60004274: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_12:
    // 0x60004278: lw          $t4, 0x60($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X60);
    // 0x6000427C: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x60004280: and         $t5, $t4, $s0
    ctx->r13 = ctx->r12 & ctx->r16;
    // 0x60004284: and         $t6, $t5, $at
    ctx->r14 = ctx->r13 & ctx->r1;
    // 0x60004288: sw          $t5, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r13;
    // 0x6000428C: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x60004290: sw          $t6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r14;
    // 0x60004294: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x60004298: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x6000429C: sw          $t7, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r15;
    // 0x600042A0: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x600042A4: jal         0x600006C4
    // 0x600042A8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_13;
    // 0x600042A8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_13:
    // 0x600042AC: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x600042B0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x600042B4: jal         0x600006C4
    // 0x600042B8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_14;
    // 0x600042B8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_14:
    // 0x600042BC: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x600042C0: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x600042C4: ori         $t9, $t8, 0x4
    ctx->r25 = ctx->r24 | 0X4;
    // 0x600042C8: sw          $t9, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r25;
    // 0x600042CC: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x600042D0: jal         0x600006C4
    // 0x600042D4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_15;
    // 0x600042D4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_15:
    // 0x600042D8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x600042DC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x600042E0: jal         0x600006C4
    // 0x600042E4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_16;
    // 0x600042E4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_16:
    // 0x600042E8: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x600042EC: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x600042F0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_600042F4:
    // 0x600042F4: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x600042F8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x600042FC: sub.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f20.fl;
    // 0x60004300: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x60004304: swc1        $f6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f6.u32l;
    // 0x60004308: jal         0x600006C4
    // 0x6000430C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_17;
    // 0x6000430C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_17:
    // 0x60004310: jal         0x600009D0
    // 0x60004314: nop

    ovl_stage_world3_9D0(rdram, ctx);
        goto after_18;
    // 0x60004314: nop

    after_18:
    // 0x60004318: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x6000431C: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x60004320: bne         $s0, $at, L_600042F4
    if (ctx->r16 != ctx->r1) {
        // 0x60004324: nop
    
            goto L_600042F4;
    }
    // 0x60004324: nop

    // 0x60004328: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x6000432C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x60004330: jal         0x600006C4
    // 0x60004334: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_19;
    // 0x60004334: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_19:
    // 0x60004338: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x6000433C: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x60004340: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x60004344: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x60004348: sw          $t1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r9;
    // 0x6000434C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x60004350: jal         0x600006C4
    // 0x60004354: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_20;
    // 0x60004354: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_20:
    // 0x60004358: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x6000435C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x60004360: jal         0x600006C4
    // 0x60004364: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_21;
    // 0x60004364: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_21:
    // 0x60004368: lw          $t2, 0x5C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X5C);
    // 0x6000436C: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x60004370: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x60004374: and         $t3, $t2, $at
    ctx->r11 = ctx->r10 & ctx->r1;
    // 0x60004378: sw          $t3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r11;
    // 0x6000437C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x60004380: jal         0x600006C4
    // 0x60004384: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_22;
    // 0x60004384: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_22:
    // 0x60004388: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x6000438C: jal         0x60000E68
    // 0x60004390: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world3_E68(rdram, ctx);
        goto after_23;
    // 0x60004390: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_23:
    // 0x60004394: jal         0x600009C4
    // 0x60004398: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_stage_world3_9C4(rdram, ctx);
        goto after_24;
    // 0x60004398: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_24:
    // 0x6000439C: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x600043A0: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x600043A4: jal         0x600006C4
    // 0x600043A8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_25;
    // 0x600043A8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_25:
    // 0x600043AC: lw          $t4, 0x60($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X60);
    // 0x600043B0: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x600043B4: ori         $t5, $t4, 0x10
    ctx->r13 = ctx->r12 | 0X10;
    // 0x600043B8: ori         $t6, $t5, 0x4
    ctx->r14 = ctx->r13 | 0X4;
    // 0x600043BC: sw          $t5, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r13;
    // 0x600043C0: sw          $t6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r14;
    // 0x600043C4: ori         $t7, $t6, 0x20
    ctx->r15 = ctx->r14 | 0X20;
    // 0x600043C8: sw          $t7, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r15;
    // 0x600043CC: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x600043D0: jal         0x600006C4
    // 0x600043D4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_26;
    // 0x600043D4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_26:
    // 0x600043D8: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x600043DC: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x600043E0: jal         0x600006C4
    // 0x600043E4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_27;
    // 0x600043E4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_27:
    // 0x600043E8: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x600043EC: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x600043F0: ori         $t9, $t8, 0x10
    ctx->r25 = ctx->r24 | 0X10;
    // 0x600043F4: ori         $t0, $t9, 0x4
    ctx->r8 = ctx->r25 | 0X4;
    // 0x600043F8: sw          $t9, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r25;
    // 0x600043FC: sw          $t0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r8;
    // 0x60004400: ori         $t1, $t0, 0x20
    ctx->r9 = ctx->r8 | 0X20;
    // 0x60004404: sw          $t1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r9;
    // 0x60004408: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x6000440C: jal         0x600006C4
    // 0x60004410: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_28;
    // 0x60004410: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_28:
    // 0x60004414: addiu       $s0, $sp, 0x40
    ctx->r16 = ADD32(ctx->r29, 0X40);
    // 0x60004418: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x6000441C: sw          $t2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r10;
    // 0x60004420: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x60004424: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60004428: jal         0x60000808
    // 0x6000442C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_stage_world3_808(rdram, ctx);
        goto after_29;
    // 0x6000442C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_29:
    // 0x60004430: addiu       $t3, $zero, -0x3C
    ctx->r11 = ADD32(0, -0X3C);
    // 0x60004434: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x60004438: sh          $zero, 0x40($sp)
    MEM_H(0X40, ctx->r29) = 0;
    // 0x6000443C: sh          $zero, 0x42($sp)
    MEM_H(0X42, ctx->r29) = 0;
    // 0x60004440: sh          $zero, 0x44($sp)
    MEM_H(0X44, ctx->r29) = 0;
    // 0x60004444: sb          $zero, 0x46($sp)
    MEM_B(0X46, ctx->r29) = 0;
    // 0x60004448: sb          $t3, 0x47($sp)
    MEM_B(0X47, ctx->r29) = ctx->r11;
    // 0x6000444C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x60004450: jal         0x600006C4
    // 0x60004454: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_30;
    // 0x60004454: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_30:
    // 0x60004458: lwc1        $f8, 0x60($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X60);
    // 0x6000445C: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x60004460: c.lt.s      $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f8.fl < ctx->f8.fl;
    // 0x60004464: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x60004468: bc1f        L_6000447C
    if (!c1cs) {
        // 0x6000446C: mov.s       $f20, $f8
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    ctx->f20.fl = ctx->f8.fl;
            goto L_6000447C;
    }
    // 0x6000446C: mov.s       $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    ctx->f20.fl = ctx->f8.fl;
    // 0x60004470: sub.s       $f0, $f8, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f8.fl - ctx->f8.fl;
    // 0x60004474: b           L_60004488
    // 0x60004478: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_60004488;
    // 0x60004478: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_6000447C:
    // 0x6000447C: lwc1        $f10, 0x60($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X60);
    // 0x60004480: nop

    // 0x60004484: sub.s       $f0, $f20, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f20.fl - ctx->f10.fl;
L_60004488:
    // 0x60004488: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x6000448C: nop

    // 0x60004490: bc1f        L_60004500
    if (!c1cs) {
        // 0x60004494: nop
    
            goto L_60004500;
    }
    // 0x60004494: nop

    // 0x60004498: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
L_6000449C:
    // 0x6000449C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x600044A0: jal         0x600006C4
    // 0x600044A4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_31;
    // 0x600044A4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_31:
    // 0x600044A8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600044AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x600044B0: jal         0x60000808
    // 0x600044B4: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_stage_world3_808(rdram, ctx);
        goto after_32;
    // 0x600044B4: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_32:
    // 0x600044B8: jal         0x600009D0
    // 0x600044BC: nop

    ovl_stage_world3_9D0(rdram, ctx);
        goto after_33;
    // 0x600044BC: nop

    after_33:
    // 0x600044C0: lwc1        $f18, 0x60($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X60);
    // 0x600044C4: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x600044C8: c.lt.s      $f20, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f20.fl < ctx->f18.fl;
    // 0x600044CC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x600044D0: bc1f        L_600044E4
    if (!c1cs) {
        // 0x600044D4: nop
    
            goto L_600044E4;
    }
    // 0x600044D4: nop

    // 0x600044D8: sub.s       $f0, $f20, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f20.fl - ctx->f18.fl;
    // 0x600044DC: b           L_600044F0
    // 0x600044E0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_600044F0;
    // 0x600044E0: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_600044E4:
    // 0x600044E4: lwc1        $f4, 0x60($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X60);
    // 0x600044E8: nop

    // 0x600044EC: sub.s       $f0, $f20, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f20.fl - ctx->f4.fl;
L_600044F0:
    // 0x600044F0: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x600044F4: nop

    // 0x600044F8: bc1t        L_6000449C
    if (c1cs) {
        // 0x600044FC: lw          $a0, 0x50($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X50);
            goto L_6000449C;
    }
    // 0x600044FC: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
L_60004500:
    // 0x60004500: jal         0x60000814
    // 0x60004504: nop

    ovl_stage_world3_814(rdram, ctx);
        goto after_34;
    // 0x60004504: nop

    after_34:
    // 0x60004508: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x6000450C: jal         0x60000E68
    // 0x60004510: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world3_E68(rdram, ctx);
        goto after_35;
    // 0x60004510: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_35:
    // 0x60004514: jal         0x600009C4
    // 0x60004518: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_stage_world3_9C4(rdram, ctx);
        goto after_36;
    // 0x60004518: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_36:
    // 0x6000451C: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x60004520: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60004524: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x60004528: jal         0x60000808
    // 0x6000452C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_stage_world3_808(rdram, ctx);
        goto after_37;
    // 0x6000452C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_37:
    // 0x60004530: jal         0x60000A78
    // 0x60004534: nop

    ovl_stage_world3_A78(rdram, ctx);
        goto after_38;
    // 0x60004534: nop

    after_38:
    // 0x60004538: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x6000453C: lui         $at, 0xFFFE
    ctx->r1 = S32(0XFFFE << 16);
    // 0x60004540: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x60004544: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x60004548: and         $t6, $t5, $at
    ctx->r14 = ctx->r13 & ctx->r1;
    // 0x6000454C: jal         0x600009AC
    // 0x60004550: sw          $t6, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r14;
    ovl_stage_world3_9AC(rdram, ctx);
        goto after_39;
    // 0x60004550: sw          $t6, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r14;
    after_39:
    // 0x60004554: b           L_60004818
    // 0x60004558: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_60004818;
    // 0x60004558: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_6000455C:
    // 0x6000455C: jal         0x60000C1C
    // 0x60004560: nop

    ovl_stage_world3_C1C(rdram, ctx);
        goto after_40;
    // 0x60004560: nop

    after_40:
    // 0x60004564: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x60004568: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x6000456C: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x60004570: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x60004574: jal         0x60000A90
    // 0x60004578: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    ovl_stage_world3_A90(rdram, ctx);
        goto after_41;
    // 0x60004578: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    after_41:
    // 0x6000457C: jal         0x60000A6C
    // 0x60004580: nop

    ovl_stage_world3_A6C(rdram, ctx);
        goto after_42;
    // 0x60004580: nop

    after_42:
    // 0x60004584: addiu       $s0, $sp, 0x40
    ctx->r16 = ADD32(ctx->r29, 0X40);
    // 0x60004588: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x6000458C: sw          $t9, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r25;
    // 0x60004590: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x60004594: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60004598: jal         0x60000808
    // 0x6000459C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_stage_world3_808(rdram, ctx);
        goto after_43;
    // 0x6000459C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_43:
    // 0x600045A0: addiu       $t0, $zero, -0x28
    ctx->r8 = ADD32(0, -0X28);
    // 0x600045A4: sh          $zero, 0x40($sp)
    MEM_H(0X40, ctx->r29) = 0;
    // 0x600045A8: sh          $zero, 0x42($sp)
    MEM_H(0X42, ctx->r29) = 0;
    // 0x600045AC: sh          $zero, 0x44($sp)
    MEM_H(0X44, ctx->r29) = 0;
    // 0x600045B0: sb          $zero, 0x46($sp)
    MEM_B(0X46, ctx->r29) = 0;
    // 0x600045B4: sb          $t0, 0x47($sp)
    MEM_B(0X47, ctx->r29) = ctx->r8;
    // 0x600045B8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600045BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x600045C0: jal         0x60000808
    // 0x600045C4: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    ovl_stage_world3_808(rdram, ctx);
        goto after_44;
    // 0x600045C4: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_44:
    // 0x600045C8: jal         0x600009C4
    // 0x600045CC: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    ovl_stage_world3_9C4(rdram, ctx);
        goto after_45;
    // 0x600045CC: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_45:
    // 0x600045D0: addiu       $s1, $sp, 0x58
    ctx->r17 = ADD32(ctx->r29, 0X58);
    // 0x600045D4: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x600045D8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x600045DC: jal         0x600006C4
    // 0x600045E0: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_46;
    // 0x600045E0: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    after_46:
    // 0x600045E4: lw          $t1, 0x60($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X60);
    // 0x600045E8: addiu       $s0, $zero, -0x11
    ctx->r16 = ADD32(0, -0X11);
    // 0x600045EC: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x600045F0: and         $t2, $t1, $s0
    ctx->r10 = ctx->r9 & ctx->r16;
    // 0x600045F4: and         $t3, $t2, $at
    ctx->r11 = ctx->r10 & ctx->r1;
    // 0x600045F8: sw          $t2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r10;
    // 0x600045FC: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x60004600: sw          $t3, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r11;
    // 0x60004604: and         $t5, $t3, $at
    ctx->r13 = ctx->r11 & ctx->r1;
    // 0x60004608: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x6000460C: sw          $t5, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r13;
    // 0x60004610: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x60004614: jal         0x600006C4
    // 0x60004618: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_47;
    // 0x60004618: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_47:
    // 0x6000461C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x60004620: jal         0x60000E68
    // 0x60004624: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world3_E68(rdram, ctx);
        goto after_48;
    // 0x60004624: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_48:
    // 0x60004628: jal         0x600009C4
    // 0x6000462C: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_stage_world3_9C4(rdram, ctx);
        goto after_49;
    // 0x6000462C: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_49:
    // 0x60004630: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x60004634: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x60004638: jal         0x600006C4
    // 0x6000463C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_50;
    // 0x6000463C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_50:
    // 0x60004640: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    // 0x60004644: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x60004648: ori         $t4, $t6, 0x4
    ctx->r12 = ctx->r14 | 0X4;
    // 0x6000464C: sw          $t4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r12;
    // 0x60004650: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x60004654: jal         0x600006C4
    // 0x60004658: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_51;
    // 0x60004658: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_51:
    // 0x6000465C: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x60004660: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x60004664: jal         0x600006C4
    // 0x60004668: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_52;
    // 0x60004668: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_52:
    // 0x6000466C: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x60004670: lwc1        $f2, 0x58($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X58);
    // 0x60004674: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x60004678: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x6000467C: c.le.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl <= ctx->f2.fl;
    // 0x60004680: nop

    // 0x60004684: bc1f        L_60004760
    if (!c1cs) {
        // 0x60004688: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_60004760;
    }
    // 0x60004688: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x6000468C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x60004690: lwc1        $f16, 0x5C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x60004694: c.lt.s      $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f2.fl < ctx->f10.fl;
    // 0x60004698: nop

    // 0x6000469C: bc1f        L_60004760
    if (!c1cs) {
        // 0x600046A0: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_60004760;
    }
    // 0x600046A0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x600046A4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x600046A8: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x600046AC: c.le.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl <= ctx->f16.fl;
    // 0x600046B0: nop

    // 0x600046B4: bc1f        L_60004760
    if (!c1cs) {
        // 0x600046B8: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_60004760;
    }
    // 0x600046B8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x600046BC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x600046C0: lwc1        $f18, 0x60($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X60);
    // 0x600046C4: c.lt.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl < ctx->f2.fl;
    // 0x600046C8: nop

    // 0x600046CC: bc1f        L_60004760
    if (!c1cs) {
        // 0x600046D0: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_60004760;
    }
    // 0x600046D0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x600046D4: c.le.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl <= ctx->f18.fl;
    // 0x600046D8: nop

    // 0x600046DC: bc1f        L_60004760
    if (!c1cs) {
        // 0x600046E0: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_60004760;
    }
    // 0x600046E0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x600046E4: c.lt.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl < ctx->f2.fl;
    // 0x600046E8: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x600046EC: bc1f        L_6000475C
    if (!c1cs) {
        // 0x600046F0: addiu       $a1, $zero, 0x11
        ctx->r5 = ADD32(0, 0X11);
            goto L_6000475C;
    }
    // 0x600046F0: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x600046F4: jal         0x600006C4
    // 0x600046F8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_53;
    // 0x600046F8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_53:
    // 0x600046FC: lw          $t7, 0x60($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X60);
    // 0x60004700: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x60004704: and         $t8, $t7, $s0
    ctx->r24 = ctx->r15 & ctx->r16;
    // 0x60004708: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x6000470C: sw          $t8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r24;
    // 0x60004710: addiu       $at, $zero, -0x21
    ctx->r1 = ADD32(0, -0X21);
    // 0x60004714: sw          $t9, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r25;
    // 0x60004718: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x6000471C: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x60004720: sw          $t0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r8;
    // 0x60004724: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x60004728: jal         0x600006C4
    // 0x6000472C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_54;
    // 0x6000472C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_54:
    // 0x60004730: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x60004734: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x60004738: jal         0x600006C4
    // 0x6000473C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_55;
    // 0x6000473C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_55:
    // 0x60004740: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x60004744: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x60004748: ori         $t2, $t1, 0x4
    ctx->r10 = ctx->r9 | 0X4;
    // 0x6000474C: sw          $t2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r10;
    // 0x60004750: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x60004754: jal         0x600006C4
    // 0x60004758: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_56;
    // 0x60004758: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_56:
L_6000475C:
    // 0x6000475C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_60004760:
    // 0x60004760: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x60004764: jal         0x600006C4
    // 0x60004768: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_57;
    // 0x60004768: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_57:
    // 0x6000476C: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x60004770: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x60004774: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_60004778:
    // 0x60004778: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x6000477C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x60004780: add.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f20.fl;
    // 0x60004784: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x60004788: swc1        $f6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f6.u32l;
    // 0x6000478C: jal         0x600006C4
    // 0x60004790: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_58;
    // 0x60004790: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_58:
    // 0x60004794: jal         0x600009D0
    // 0x60004798: nop

    ovl_stage_world3_9D0(rdram, ctx);
        goto after_59;
    // 0x60004798: nop

    after_59:
    // 0x6000479C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x600047A0: slti        $at, $s0, 0x3C
    ctx->r1 = SIGNED(ctx->r16) < 0X3C ? 1 : 0;
    // 0x600047A4: bne         $at, $zero, L_60004778
    if (ctx->r1 != 0) {
        // 0x600047A8: nop
    
            goto L_60004778;
    }
    // 0x600047A8: nop

    // 0x600047AC: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x600047B0: lui         $at, 0xFFFE
    ctx->r1 = S32(0XFFFE << 16);
    // 0x600047B4: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x600047B8: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x600047BC: and         $t5, $t3, $at
    ctx->r13 = ctx->r11 & ctx->r1;
    // 0x600047C0: addiu       $a0, $zero, 0x85D
    ctx->r4 = ADD32(0, 0X85D);
    // 0x600047C4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x600047C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x600047CC: jal         0x60000C10
    // 0x600047D0: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    ovl_stage_world3_C10(rdram, ctx);
        goto after_60;
    // 0x600047D0: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    after_60:
    // 0x600047D4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_600047D8:
    // 0x600047D8: lwc1        $f8, 0x5C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x600047DC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x600047E0: add.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f20.fl;
    // 0x600047E4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x600047E8: swc1        $f10, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f10.u32l;
    // 0x600047EC: jal         0x600006C4
    // 0x600047F0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_61;
    // 0x600047F0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_61:
    // 0x600047F4: jal         0x600009D0
    // 0x600047F8: nop

    ovl_stage_world3_9D0(rdram, ctx);
        goto after_62;
    // 0x600047F8: nop

    after_62:
    // 0x600047FC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60004800: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x60004804: bne         $s0, $at, L_600047D8
    if (ctx->r16 != ctx->r1) {
        // 0x60004808: nop
    
            goto L_600047D8;
    }
    // 0x60004808: nop

    // 0x6000480C: jal         0x600009AC
    // 0x60004810: nop

    ovl_stage_world3_9AC(rdram, ctx);
        goto after_63;
    // 0x60004810: nop

    after_63:
    // 0x60004814: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_60004818:
    // 0x60004818: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x6000481C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x60004820: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x60004824: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x60004828: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x6000482C: jr          $ra
    // 0x60004830: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x60004830: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void ovl_stage_world3_4834(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004834: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60004838: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x6000483C: jal         0x60000BB0
    // 0x60004840: addiu       $a0, $zero, 0x105
    ctx->r4 = ADD32(0, 0X105);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_0;
    // 0x60004840: addiu       $a0, $zero, 0x105
    ctx->r4 = ADD32(0, 0X105);
    after_0:
    // 0x60004844: beq         $v0, $zero, L_6000487C
    if (ctx->r2 == 0) {
        // 0x60004848: nop
    
            goto L_6000487C;
    }
    // 0x60004848: nop

    // 0x6000484C: jal         0x60000DE4
    // 0x60004850: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world3_DE4(rdram, ctx);
        goto after_1;
    // 0x60004850: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x60004854: jal         0x60000CC4
    // 0x60004858: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_stage_world3_CC4(rdram, ctx);
        goto after_2;
    // 0x60004858: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x6000485C: lui         $a1, 0x409C
    ctx->r5 = S32(0X409C << 16);
    // 0x60004860: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x60004864: jal         0x60001028
    // 0x60004868: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world3_1028(rdram, ctx);
        goto after_3;
    // 0x60004868: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x6000486C: lui         $a1, 0x409C
    ctx->r5 = S32(0X409C << 16);
    // 0x60004870: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x60004874: jal         0x60001028
    // 0x60004878: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world3_1028(rdram, ctx);
        goto after_4;
    // 0x60004878: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
L_6000487C:
    // 0x6000487C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60004880: addiu       $a0, $a0, 0x4154
    ctx->r4 = ADD32(ctx->r4, 0X4154);
    // 0x60004884: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60004888: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x6000488C: jal         0x60000994
    // 0x60004890: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world3_994(rdram, ctx);
        goto after_5;
    // 0x60004890: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
    // 0x60004894: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004898: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x6000489C: jr          $ra
    // 0x600048A0: nop

    return;
    // 0x600048A0: nop

;}
RECOMP_FUNC void ovl_stage_world3_48A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600048A4: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x600048A8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x600048AC: sw          $s5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r21;
    // 0x600048B0: sw          $s4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r20;
    // 0x600048B4: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x600048B8: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x600048BC: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x600048C0: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x600048C4: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x600048C8: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x600048CC: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x600048D0: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x600048D4: jal         0x60000E74
    // 0x600048D8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    ovl_stage_world3_E74(rdram, ctx);
        goto after_0;
    // 0x600048D8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_0:
    // 0x600048DC: or          $s5, $v0, $zero
    ctx->r21 = ctx->r2 | 0;
    // 0x600048E0: jal         0x60000DE4
    // 0x600048E4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world3_DE4(rdram, ctx);
        goto after_1;
    // 0x600048E4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x600048E8: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x600048EC: jal         0x60000DE4
    // 0x600048F0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_stage_world3_DE4(rdram, ctx);
        goto after_2;
    // 0x600048F0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x600048F4: jal         0x60000C1C
    // 0x600048F8: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    ovl_stage_world3_C1C(rdram, ctx);
        goto after_3;
    // 0x600048F8: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    after_3:
    // 0x600048FC: jal         0x60000A6C
    // 0x60004900: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    ovl_stage_world3_A6C(rdram, ctx);
        goto after_4;
    // 0x60004900: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    after_4:
    // 0x60004904: lw          $v0, 0x48($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X48);
    // 0x60004908: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x6000490C: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x60004910: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x60004914: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x60004918: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x6000491C: addiu       $s1, $sp, 0x68
    ctx->r17 = ADD32(ctx->r29, 0X68);
    // 0x60004920: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x60004924: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x60004928: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x6000492C: swc1        $f0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f0.u32l;
    // 0x60004930: swc1        $f0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f0.u32l;
    // 0x60004934: jal         0x600006C4
    // 0x60004938: swc1        $f0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f0.u32l;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_5;
    // 0x60004938: swc1        $f0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f0.u32l;
    after_5:
    // 0x6000493C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x60004940: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x60004944: jal         0x600006C4
    // 0x60004948: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_6;
    // 0x60004948: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_6:
    // 0x6000494C: lw          $t8, 0x70($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X70);
    // 0x60004950: addiu       $s0, $zero, -0x11
    ctx->r16 = ADD32(0, -0X11);
    // 0x60004954: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x60004958: and         $t9, $t8, $s0
    ctx->r25 = ctx->r24 & ctx->r16;
    // 0x6000495C: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x60004960: addiu       $s3, $zero, -0x21
    ctx->r19 = ADD32(0, -0X21);
    // 0x60004964: sw          $t9, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r25;
    // 0x60004968: sw          $t0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r8;
    // 0x6000496C: and         $t1, $t0, $s3
    ctx->r9 = ctx->r8 & ctx->r19;
    // 0x60004970: sw          $t1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r9;
    // 0x60004974: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x60004978: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x6000497C: jal         0x600006C4
    // 0x60004980: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_7;
    // 0x60004980: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_7:
    // 0x60004984: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x60004988: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x6000498C: jal         0x600006C4
    // 0x60004990: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_8;
    // 0x60004990: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_8:
    // 0x60004994: lw          $t2, 0x70($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X70);
    // 0x60004998: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x6000499C: and         $t3, $t2, $s0
    ctx->r11 = ctx->r10 & ctx->r16;
    // 0x600049A0: and         $t4, $t3, $at
    ctx->r12 = ctx->r11 & ctx->r1;
    // 0x600049A4: sw          $t3, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r11;
    // 0x600049A8: sw          $t4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r12;
    // 0x600049AC: and         $t5, $t4, $s3
    ctx->r13 = ctx->r12 & ctx->r19;
    // 0x600049B0: sw          $t5, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r13;
    // 0x600049B4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x600049B8: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x600049BC: jal         0x600006C4
    // 0x600049C0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_9;
    // 0x600049C0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_9:
    // 0x600049C4: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x600049C8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x600049CC: jal         0x600006C4
    // 0x600049D0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_10;
    // 0x600049D0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_10:
    // 0x600049D4: lw          $t6, 0x6C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X6C);
    // 0x600049D8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x600049DC: ori         $t7, $t6, 0x4
    ctx->r15 = ctx->r14 | 0X4;
    // 0x600049E0: sw          $t7, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r15;
    // 0x600049E4: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x600049E8: jal         0x600006C4
    // 0x600049EC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_11;
    // 0x600049EC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_11:
    // 0x600049F0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x600049F4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x600049F8: jal         0x600006C4
    // 0x600049FC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_12;
    // 0x600049FC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_12:
    // 0x60004A00: lw          $t8, 0x6C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X6C);
    // 0x60004A04: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x60004A08: ori         $t9, $t8, 0x4
    ctx->r25 = ctx->r24 | 0X4;
    // 0x60004A0C: sw          $t9, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r25;
    // 0x60004A10: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x60004A14: jal         0x600006C4
    // 0x60004A18: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_13;
    // 0x60004A18: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_13:
    // 0x60004A1C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x60004A20: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x60004A24: jal         0x600006C4
    // 0x60004A28: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_14;
    // 0x60004A28: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_14:
    // 0x60004A2C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60004A30: lwc1        $f22, 0x69B4($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X69B4);
    // 0x60004A34: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60004A38: addiu       $s3, $zero, 0x3C
    ctx->r19 = ADD32(0, 0X3C);
L_60004A3C:
    // 0x60004A3C: lwc1        $f4, 0x6C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x60004A40: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x60004A44: add.s       $f6, $f4, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f22.fl;
    // 0x60004A48: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x60004A4C: swc1        $f6, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f6.u32l;
    // 0x60004A50: jal         0x600006C4
    // 0x60004A54: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_15;
    // 0x60004A54: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_15:
    // 0x60004A58: jal         0x600009D0
    // 0x60004A5C: nop

    ovl_stage_world3_9D0(rdram, ctx);
        goto after_16;
    // 0x60004A5C: nop

    after_16:
    // 0x60004A60: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60004A64: bne         $s0, $s3, L_60004A3C
    if (ctx->r16 != ctx->r19) {
        // 0x60004A68: nop
    
            goto L_60004A3C;
    }
    // 0x60004A68: nop

    // 0x60004A6C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x60004A70: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x60004A74: jal         0x600006C4
    // 0x60004A78: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_17;
    // 0x60004A78: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_17:
    // 0x60004A7C: lw          $t0, 0x6C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X6C);
    // 0x60004A80: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x60004A84: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x60004A88: sw          $t1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r9;
    // 0x60004A8C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x60004A90: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x60004A94: jal         0x600006C4
    // 0x60004A98: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_18;
    // 0x60004A98: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_18:
    // 0x60004A9C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x60004AA0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x60004AA4: jal         0x600006C4
    // 0x60004AA8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_19;
    // 0x60004AA8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_19:
    // 0x60004AAC: lw          $t2, 0x6C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X6C);
    // 0x60004AB0: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x60004AB4: and         $t3, $t2, $at
    ctx->r11 = ctx->r10 & ctx->r1;
    // 0x60004AB8: sw          $t3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r11;
    // 0x60004ABC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x60004AC0: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x60004AC4: jal         0x600006C4
    // 0x60004AC8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_20;
    // 0x60004AC8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_20:
    // 0x60004ACC: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x60004AD0: jal         0x60000E68
    // 0x60004AD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world3_E68(rdram, ctx);
        goto after_21;
    // 0x60004AD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_21:
    // 0x60004AD8: jal         0x600009C4
    // 0x60004ADC: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    ovl_stage_world3_9C4(rdram, ctx);
        goto after_22;
    // 0x60004ADC: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_22:
    // 0x60004AE0: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x60004AE4: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x60004AE8: jal         0x600006C4
    // 0x60004AEC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_23;
    // 0x60004AEC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_23:
    // 0x60004AF0: lw          $t4, 0x70($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X70);
    // 0x60004AF4: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x60004AF8: ori         $t5, $t4, 0x10
    ctx->r13 = ctx->r12 | 0X10;
    // 0x60004AFC: ori         $t6, $t5, 0x4
    ctx->r14 = ctx->r13 | 0X4;
    // 0x60004B00: sw          $t5, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r13;
    // 0x60004B04: sw          $t6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r14;
    // 0x60004B08: ori         $t7, $t6, 0x20
    ctx->r15 = ctx->r14 | 0X20;
    // 0x60004B0C: sw          $t7, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r15;
    // 0x60004B10: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x60004B14: jal         0x600006C4
    // 0x60004B18: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_24;
    // 0x60004B18: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_24:
    // 0x60004B1C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x60004B20: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x60004B24: jal         0x600006C4
    // 0x60004B28: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_25;
    // 0x60004B28: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_25:
    // 0x60004B2C: lw          $t8, 0x70($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X70);
    // 0x60004B30: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x60004B34: ori         $t9, $t8, 0x10
    ctx->r25 = ctx->r24 | 0X10;
    // 0x60004B38: ori         $t0, $t9, 0x4
    ctx->r8 = ctx->r25 | 0X4;
    // 0x60004B3C: sw          $t9, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r25;
    // 0x60004B40: sw          $t0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r8;
    // 0x60004B44: ori         $t1, $t0, 0x20
    ctx->r9 = ctx->r8 | 0X20;
    // 0x60004B48: sw          $t1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r9;
    // 0x60004B4C: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x60004B50: jal         0x600006C4
    // 0x60004B54: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_26;
    // 0x60004B54: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_26:
    // 0x60004B58: addiu       $s2, $sp, 0x50
    ctx->r18 = ADD32(ctx->r29, 0X50);
    // 0x60004B5C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x60004B60: sw          $t2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r10;
    // 0x60004B64: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x60004B68: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60004B6C: jal         0x60000808
    // 0x60004B70: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_stage_world3_808(rdram, ctx);
        goto after_27;
    // 0x60004B70: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_27:
    // 0x60004B74: addiu       $t3, $zero, -0x3C
    ctx->r11 = ADD32(0, -0X3C);
    // 0x60004B78: sh          $zero, 0x50($sp)
    MEM_H(0X50, ctx->r29) = 0;
    // 0x60004B7C: sh          $zero, 0x52($sp)
    MEM_H(0X52, ctx->r29) = 0;
    // 0x60004B80: sh          $zero, 0x54($sp)
    MEM_H(0X54, ctx->r29) = 0;
    // 0x60004B84: sb          $zero, 0x56($sp)
    MEM_B(0X56, ctx->r29) = 0;
    // 0x60004B88: sb          $t3, 0x57($sp)
    MEM_B(0X57, ctx->r29) = ctx->r11;
    // 0x60004B8C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x60004B90: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x60004B94: jal         0x600006C4
    // 0x60004B98: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_28;
    // 0x60004B98: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_28:
    // 0x60004B9C: lwc1        $f8, 0x70($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X70);
    // 0x60004BA0: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x60004BA4: c.lt.s      $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f8.fl < ctx->f8.fl;
    // 0x60004BA8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x60004BAC: bc1f        L_60004BC0
    if (!c1cs) {
        // 0x60004BB0: mov.s       $f20, $f8
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    ctx->f20.fl = ctx->f8.fl;
            goto L_60004BC0;
    }
    // 0x60004BB0: mov.s       $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    ctx->f20.fl = ctx->f8.fl;
    // 0x60004BB4: sub.s       $f0, $f8, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f8.fl - ctx->f8.fl;
    // 0x60004BB8: b           L_60004BCC
    // 0x60004BBC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_60004BCC;
    // 0x60004BBC: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_60004BC0:
    // 0x60004BC0: lwc1        $f10, 0x70($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X70);
    // 0x60004BC4: nop

    // 0x60004BC8: sub.s       $f0, $f20, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f20.fl - ctx->f10.fl;
L_60004BCC:
    // 0x60004BCC: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x60004BD0: nop

    // 0x60004BD4: bc1f        L_60004C50
    if (!c1cs) {
        // 0x60004BD8: or          $a0, $s4, $zero
        ctx->r4 = ctx->r20 | 0;
            goto L_60004C50;
    }
    // 0x60004BD8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
L_60004BDC:
    // 0x60004BDC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x60004BE0: jal         0x600006C4
    // 0x60004BE4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_29;
    // 0x60004BE4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_29:
    // 0x60004BE8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60004BEC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x60004BF0: jal         0x60000808
    // 0x60004BF4: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    ovl_stage_world3_808(rdram, ctx);
        goto after_30;
    // 0x60004BF4: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_30:
    // 0x60004BF8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x60004BFC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x60004C00: jal         0x60000808
    // 0x60004C04: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    ovl_stage_world3_808(rdram, ctx);
        goto after_31;
    // 0x60004C04: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_31:
    // 0x60004C08: jal         0x600009D0
    // 0x60004C0C: nop

    ovl_stage_world3_9D0(rdram, ctx);
        goto after_32;
    // 0x60004C0C: nop

    after_32:
    // 0x60004C10: lwc1        $f18, 0x70($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X70);
    // 0x60004C14: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x60004C18: c.lt.s      $f20, $f18
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f20.fl < ctx->f18.fl;
    // 0x60004C1C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60004C20: bc1f        L_60004C34
    if (!c1cs) {
        // 0x60004C24: nop
    
            goto L_60004C34;
    }
    // 0x60004C24: nop

    // 0x60004C28: sub.s       $f0, $f20, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = ctx->f20.fl - ctx->f18.fl;
    // 0x60004C2C: b           L_60004C40
    // 0x60004C30: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_60004C40;
    // 0x60004C30: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_60004C34:
    // 0x60004C34: lwc1        $f4, 0x70($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X70);
    // 0x60004C38: nop

    // 0x60004C3C: sub.s       $f0, $f20, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f20.fl - ctx->f4.fl;
L_60004C40:
    // 0x60004C40: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x60004C44: nop

    // 0x60004C48: bc1t        L_60004BDC
    if (c1cs) {
        // 0x60004C4C: or          $a0, $s4, $zero
        ctx->r4 = ctx->r20 | 0;
            goto L_60004BDC;
    }
    // 0x60004C4C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
L_60004C50:
    // 0x60004C50: jal         0x60000814
    // 0x60004C54: nop

    ovl_stage_world3_814(rdram, ctx);
        goto after_33;
    // 0x60004C54: nop

    after_33:
    // 0x60004C58: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x60004C5C: jal         0x60000E68
    // 0x60004C60: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world3_E68(rdram, ctx);
        goto after_34;
    // 0x60004C60: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_34:
    // 0x60004C64: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x60004C68: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x60004C6C: jal         0x600006C4
    // 0x60004C70: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_35;
    // 0x60004C70: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_35:
    // 0x60004C74: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_60004C78:
    // 0x60004C78: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x60004C7C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x60004C80: sub.s       $f10, $f8, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f22.fl;
    // 0x60004C84: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x60004C88: swc1        $f10, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f10.u32l;
    // 0x60004C8C: jal         0x600006C4
    // 0x60004C90: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_36;
    // 0x60004C90: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_36:
    // 0x60004C94: jal         0x600009D0
    // 0x60004C98: nop

    ovl_stage_world3_9D0(rdram, ctx);
        goto after_37;
    // 0x60004C98: nop

    after_37:
    // 0x60004C9C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60004CA0: bne         $s0, $s3, L_60004C78
    if (ctx->r16 != ctx->r19) {
        // 0x60004CA4: nop
    
            goto L_60004C78;
    }
    // 0x60004CA4: nop

    // 0x60004CA8: sw          $zero, 0x50($sp)
    MEM_W(0X50, ctx->r29) = 0;
    // 0x60004CAC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60004CB0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x60004CB4: jal         0x60000808
    // 0x60004CB8: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    ovl_stage_world3_808(rdram, ctx);
        goto after_38;
    // 0x60004CB8: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_38:
    // 0x60004CBC: jal         0x60000A78
    // 0x60004CC0: nop

    ovl_stage_world3_A78(rdram, ctx);
        goto after_39;
    // 0x60004CC0: nop

    after_39:
    // 0x60004CC4: lw          $v0, 0x48($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X48);
    // 0x60004CC8: lui         $at, 0xFFFE
    ctx->r1 = S32(0XFFFE << 16);
    // 0x60004CCC: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x60004CD0: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x60004CD4: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x60004CD8: jal         0x600009AC
    // 0x60004CDC: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    ovl_stage_world3_9AC(rdram, ctx);
        goto after_40;
    // 0x60004CDC: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    after_40:
    // 0x60004CE0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x60004CE4: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x60004CE8: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x60004CEC: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x60004CF0: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x60004CF4: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x60004CF8: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x60004CFC: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x60004D00: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x60004D04: lw          $s4, 0x34($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X34);
    // 0x60004D08: lw          $s5, 0x38($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X38);
    // 0x60004D0C: jr          $ra
    // 0x60004D10: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x60004D10: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void ovl_stage_world3_4D14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004D14: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x60004D18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60004D1C: jal         0x60000C1C
    // 0x60004D20: nop

    ovl_stage_world3_C1C(rdram, ctx);
        goto after_0;
    // 0x60004D20: nop

    after_0:
    // 0x60004D24: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x60004D28: lw          $t6, 0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC);
    // 0x60004D2C: addiu       $at, $zero, 0x1F
    ctx->r1 = ADD32(0, 0X1F);
    // 0x60004D30: bne         $t6, $at, L_60004D40
    if (ctx->r14 != ctx->r1) {
        // 0x60004D34: nop
    
            goto L_60004D40;
    }
    // 0x60004D34: nop

    // 0x60004D38: jal         0x6000025C
    // 0x60004D3C: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    ovl_stage_world3_25C(rdram, ctx);
        goto after_1;
    // 0x60004D3C: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    after_1:
L_60004D40:
    // 0x60004D40: jal         0x60000BB0
    // 0x60004D44: addiu       $a0, $zero, 0x198
    ctx->r4 = ADD32(0, 0X198);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_2;
    // 0x60004D44: addiu       $a0, $zero, 0x198
    ctx->r4 = ADD32(0, 0X198);
    after_2:
    // 0x60004D48: bne         $v0, $zero, L_60004D6C
    if (ctx->r2 != 0) {
        // 0x60004D4C: lw          $t7, 0x34($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X34);
            goto L_60004D6C;
    }
    // 0x60004D4C: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x60004D50: jal         0x60000B98
    // 0x60004D54: addiu       $a0, $zero, 0x198
    ctx->r4 = ADD32(0, 0X198);
    ovl_stage_world3_B98(rdram, ctx);
        goto after_3;
    // 0x60004D54: addiu       $a0, $zero, 0x198
    ctx->r4 = ADD32(0, 0X198);
    after_3:
    // 0x60004D58: jal         0x60000A60
    // 0x60004D5C: addiu       $a0, $zero, 0xAC2
    ctx->r4 = ADD32(0, 0XAC2);
    ovl_stage_world3_A60(rdram, ctx);
        goto after_4;
    // 0x60004D5C: addiu       $a0, $zero, 0xAC2
    ctx->r4 = ADD32(0, 0XAC2);
    after_4:
    // 0x60004D60: b           L_60004D94
    // 0x60004D64: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
        goto L_60004D94;
    // 0x60004D64: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x60004D68: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
L_60004D6C:
    // 0x60004D6C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x60004D70: lw          $t8, 0xC($t7)
    ctx->r24 = MEM_W(ctx->r15, 0XC);
    // 0x60004D74: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60004D78: bne         $t8, $at, L_60004D90
    if (ctx->r24 != ctx->r1) {
        // 0x60004D7C: addiu       $a0, $a0, 0x48A4
        ctx->r4 = ADD32(ctx->r4, 0X48A4);
            goto L_60004D90;
    }
    // 0x60004D7C: addiu       $a0, $a0, 0x48A4
    ctx->r4 = ADD32(ctx->r4, 0X48A4);
    // 0x60004D80: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60004D84: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60004D88: jal         0x60000994
    // 0x60004D8C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world3_994(rdram, ctx);
        goto after_5;
    // 0x60004D8C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
L_60004D90:
    // 0x60004D90: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
L_60004D94:
    // 0x60004D94: jal         0x6000342C
    // 0x60004D98: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    ovl_stage_world3_342C(rdram, ctx);
        goto after_6;
    // 0x60004D98: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_6:
    // 0x60004D9C: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x60004DA0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x60004DA4: bne         $t9, $at, L_60004E44
    if (ctx->r25 != ctx->r1) {
        // 0x60004DA8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60004E44;
    }
    // 0x60004DA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004DAC: jal         0x60000E74
    // 0x60004DB0: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    ovl_stage_world3_E74(rdram, ctx);
        goto after_7;
    // 0x60004DB0: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_7:
    // 0x60004DB4: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x60004DB8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60004DBC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x60004DC0: jal         0x600006C4
    // 0x60004DC4: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_8;
    // 0x60004DC4: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_8:
    // 0x60004DC8: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x60004DCC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x60004DD0: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x60004DD4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x60004DD8: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x60004DDC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x60004DE0: swc1        $f8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f8.u32l;
    // 0x60004DE4: jal         0x600006C4
    // 0x60004DE8: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_9;
    // 0x60004DE8: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_9:
    // 0x60004DEC: jal         0x60000E74
    // 0x60004DF0: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    ovl_stage_world3_E74(rdram, ctx);
        goto after_10;
    // 0x60004DF0: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    after_10:
    // 0x60004DF4: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x60004DF8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60004DFC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x60004E00: jal         0x600006C4
    // 0x60004E04: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_11;
    // 0x60004E04: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_11:
    // 0x60004E08: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x60004E0C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x60004E10: lwc1        $f10, 0x1C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x60004E14: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x60004E18: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x60004E1C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x60004E20: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    // 0x60004E24: jal         0x600006C4
    // 0x60004E28: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_12;
    // 0x60004E28: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_12:
    // 0x60004E2C: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x60004E30: jal         0x60000E68
    // 0x60004E34: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_stage_world3_E68(rdram, ctx);
        goto after_13;
    // 0x60004E34: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_13:
    // 0x60004E38: jal         0x60000B98
    // 0x60004E3C: addiu       $a0, $zero, 0x107
    ctx->r4 = ADD32(0, 0X107);
    ovl_stage_world3_B98(rdram, ctx);
        goto after_14;
    // 0x60004E3C: addiu       $a0, $zero, 0x107
    ctx->r4 = ADD32(0, 0X107);
    after_14:
    // 0x60004E40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60004E44:
    // 0x60004E44: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x60004E48: jr          $ra
    // 0x60004E4C: nop

    return;
    // 0x60004E4C: nop

;}
RECOMP_FUNC void ovl_stage_world3_4E50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004E50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60004E54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60004E58: jal         0x60000BB0
    // 0x60004E5C: addiu       $a0, $zero, 0x18E
    ctx->r4 = ADD32(0, 0X18E);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_0;
    // 0x60004E5C: addiu       $a0, $zero, 0x18E
    ctx->r4 = ADD32(0, 0X18E);
    after_0:
    // 0x60004E60: bne         $v0, $zero, L_60004EB8
    if (ctx->r2 != 0) {
        // 0x60004E64: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60004EB8;
    }
    // 0x60004E64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004E68: jal         0x60000BB0
    // 0x60004E6C: addiu       $a0, $zero, 0x18B
    ctx->r4 = ADD32(0, 0X18B);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_1;
    // 0x60004E6C: addiu       $a0, $zero, 0x18B
    ctx->r4 = ADD32(0, 0X18B);
    after_1:
    // 0x60004E70: beq         $v0, $zero, L_60004EB8
    if (ctx->r2 == 0) {
        // 0x60004E74: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60004EB8;
    }
    // 0x60004E74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004E78: jal         0x60000BB0
    // 0x60004E7C: addiu       $a0, $zero, 0x18C
    ctx->r4 = ADD32(0, 0X18C);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_2;
    // 0x60004E7C: addiu       $a0, $zero, 0x18C
    ctx->r4 = ADD32(0, 0X18C);
    after_2:
    // 0x60004E80: beq         $v0, $zero, L_60004EB8
    if (ctx->r2 == 0) {
        // 0x60004E84: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60004EB8;
    }
    // 0x60004E84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004E88: jal         0x60000BB0
    // 0x60004E8C: addiu       $a0, $zero, 0x18D
    ctx->r4 = ADD32(0, 0X18D);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_3;
    // 0x60004E8C: addiu       $a0, $zero, 0x18D
    ctx->r4 = ADD32(0, 0X18D);
    after_3:
    // 0x60004E90: beq         $v0, $zero, L_60004EB8
    if (ctx->r2 == 0) {
        // 0x60004E94: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60004EB8;
    }
    // 0x60004E94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004E98: jal         0x60000B98
    // 0x60004E9C: addiu       $a0, $zero, 0x18E
    ctx->r4 = ADD32(0, 0X18E);
    ovl_stage_world3_B98(rdram, ctx);
        goto after_4;
    // 0x60004E9C: addiu       $a0, $zero, 0x18E
    ctx->r4 = ADD32(0, 0X18E);
    after_4:
    // 0x60004EA0: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x60004EA4: jal         0x60000E68
    // 0x60004EA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world3_E68(rdram, ctx);
        goto after_5;
    // 0x60004EA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x60004EAC: jal         0x60000A60
    // 0x60004EB0: addiu       $a0, $zero, 0xA62
    ctx->r4 = ADD32(0, 0XA62);
    ovl_stage_world3_A60(rdram, ctx);
        goto after_6;
    // 0x60004EB0: addiu       $a0, $zero, 0xA62
    ctx->r4 = ADD32(0, 0XA62);
    after_6:
    // 0x60004EB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60004EB8:
    // 0x60004EB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60004EBC: jr          $ra
    // 0x60004EC0: nop

    return;
    // 0x60004EC0: nop

;}
RECOMP_FUNC void ovl_stage_world3_4EC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004EC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60004EC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60004ECC: jal         0x60000BB0
    // 0x60004ED0: addiu       $a0, $zero, 0x193
    ctx->r4 = ADD32(0, 0X193);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_0;
    // 0x60004ED0: addiu       $a0, $zero, 0x193
    ctx->r4 = ADD32(0, 0X193);
    after_0:
    // 0x60004ED4: bne         $v0, $zero, L_60004EFC
    if (ctx->r2 != 0) {
        // 0x60004ED8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60004EFC;
    }
    // 0x60004ED8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004EDC: jal         0x60000B98
    // 0x60004EE0: addiu       $a0, $zero, 0x193
    ctx->r4 = ADD32(0, 0X193);
    ovl_stage_world3_B98(rdram, ctx);
        goto after_1;
    // 0x60004EE0: addiu       $a0, $zero, 0x193
    ctx->r4 = ADD32(0, 0X193);
    after_1:
    // 0x60004EE4: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x60004EE8: jal         0x60000E68
    // 0x60004EEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world3_E68(rdram, ctx);
        goto after_2;
    // 0x60004EEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x60004EF0: jal         0x60000A60
    // 0x60004EF4: addiu       $a0, $zero, 0xA63
    ctx->r4 = ADD32(0, 0XA63);
    ovl_stage_world3_A60(rdram, ctx);
        goto after_3;
    // 0x60004EF4: addiu       $a0, $zero, 0xA63
    ctx->r4 = ADD32(0, 0XA63);
    after_3:
    // 0x60004EF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60004EFC:
    // 0x60004EFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60004F00: jr          $ra
    // 0x60004F04: nop

    return;
    // 0x60004F04: nop

;}
RECOMP_FUNC void ovl_stage_world3_4F08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004F08: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x60004F0C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x60004F10: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x60004F14: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x60004F18: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x60004F1C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x60004F20: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x60004F24: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x60004F28: jal         0x600009C4
    // 0x60004F2C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    ovl_stage_world3_9C4(rdram, ctx);
        goto after_0;
    // 0x60004F2C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_0:
    // 0x60004F30: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x60004F34: jal         0x60000E68
    // 0x60004F38: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world3_E68(rdram, ctx);
        goto after_1;
    // 0x60004F38: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x60004F3C: jal         0x600009C4
    // 0x60004F40: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    ovl_stage_world3_9C4(rdram, ctx);
        goto after_2;
    // 0x60004F40: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_2:
    // 0x60004F44: jal         0x60000E74
    // 0x60004F48: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    ovl_stage_world3_E74(rdram, ctx);
        goto after_3;
    // 0x60004F48: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_3:
    // 0x60004F4C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60004F50: lwc1        $f20, 0x69B8($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X69B8);
    // 0x60004F54: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x60004F58: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60004F5C: addiu       $s3, $zero, 0x3C
    ctx->r19 = ADD32(0, 0X3C);
    // 0x60004F60: addiu       $s1, $sp, 0x30
    ctx->r17 = ADD32(ctx->r29, 0X30);
    // 0x60004F64: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_60004F68:
    // 0x60004F68: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x60004F6C: jal         0x600006C4
    // 0x60004F70: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_4;
    // 0x60004F70: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_4:
    // 0x60004F74: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x60004F78: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x60004F7C: add.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f20.fl;
    // 0x60004F80: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x60004F84: swc1        $f6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f6.u32l;
    // 0x60004F88: jal         0x600006C4
    // 0x60004F8C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_5;
    // 0x60004F8C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_5:
    // 0x60004F90: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x60004F94: jal         0x60000E68
    // 0x60004F98: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_stage_world3_E68(rdram, ctx);
        goto after_6;
    // 0x60004F98: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_6:
    // 0x60004F9C: jal         0x600009D0
    // 0x60004FA0: nop

    ovl_stage_world3_9D0(rdram, ctx);
        goto after_7;
    // 0x60004FA0: nop

    after_7:
    // 0x60004FA4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60004FA8: bne         $s0, $s3, L_60004F68
    if (ctx->r16 != ctx->r19) {
        // 0x60004FAC: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_60004F68;
    }
    // 0x60004FAC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x60004FB0: jal         0x600009AC
    // 0x60004FB4: nop

    ovl_stage_world3_9AC(rdram, ctx);
        goto after_8;
    // 0x60004FB4: nop

    after_8:
    // 0x60004FB8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x60004FBC: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x60004FC0: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x60004FC4: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x60004FC8: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x60004FCC: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x60004FD0: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x60004FD4: jr          $ra
    // 0x60004FD8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x60004FD8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_stage_world3_4FDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60004FDC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60004FE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60004FE4: jal         0x60000BB0
    // 0x60004FE8: addiu       $a0, $zero, 0x194
    ctx->r4 = ADD32(0, 0X194);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_0;
    // 0x60004FE8: addiu       $a0, $zero, 0x194
    ctx->r4 = ADD32(0, 0X194);
    after_0:
    // 0x60004FEC: beq         $v0, $zero, L_60005028
    if (ctx->r2 == 0) {
        // 0x60004FF0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60005028;
    }
    // 0x60004FF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60004FF4: jal         0x60000BB0
    // 0x60004FF8: addiu       $a0, $zero, 0x195
    ctx->r4 = ADD32(0, 0X195);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_1;
    // 0x60004FF8: addiu       $a0, $zero, 0x195
    ctx->r4 = ADD32(0, 0X195);
    after_1:
    // 0x60004FFC: beq         $v0, $zero, L_60005028
    if (ctx->r2 == 0) {
        // 0x60005000: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60005028;
    }
    // 0x60005000: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005004: jal         0x60000A60
    // 0x60005008: addiu       $a0, $zero, 0xA64
    ctx->r4 = ADD32(0, 0XA64);
    ovl_stage_world3_A60(rdram, ctx);
        goto after_2;
    // 0x60005008: addiu       $a0, $zero, 0xA64
    ctx->r4 = ADD32(0, 0XA64);
    after_2:
    // 0x6000500C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60005010: addiu       $a0, $a0, 0x4F08
    ctx->r4 = ADD32(ctx->r4, 0X4F08);
    // 0x60005014: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60005018: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x6000501C: jal         0x60000994
    // 0x60005020: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world3_994(rdram, ctx);
        goto after_3;
    // 0x60005020: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x60005024: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005028:
    // 0x60005028: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x6000502C: jr          $ra
    // 0x60005030: nop

    return;
    // 0x60005030: nop

;}
RECOMP_FUNC void ovl_stage_world3_5034(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005034: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60005038: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x6000503C: jal         0x60000BB0
    // 0x60005040: addiu       $a0, $zero, 0x196
    ctx->r4 = ADD32(0, 0X196);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_0;
    // 0x60005040: addiu       $a0, $zero, 0x196
    ctx->r4 = ADD32(0, 0X196);
    after_0:
    // 0x60005044: bne         $v0, $zero, L_6000506C
    if (ctx->r2 != 0) {
        // 0x60005048: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_6000506C;
    }
    // 0x60005048: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000504C: jal         0x60000B98
    // 0x60005050: addiu       $a0, $zero, 0x196
    ctx->r4 = ADD32(0, 0X196);
    ovl_stage_world3_B98(rdram, ctx);
        goto after_1;
    // 0x60005050: addiu       $a0, $zero, 0x196
    ctx->r4 = ADD32(0, 0X196);
    after_1:
    // 0x60005054: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x60005058: jal         0x60000E68
    // 0x6000505C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world3_E68(rdram, ctx);
        goto after_2;
    // 0x6000505C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x60005060: jal         0x60000A60
    // 0x60005064: addiu       $a0, $zero, 0xA65
    ctx->r4 = ADD32(0, 0XA65);
    ovl_stage_world3_A60(rdram, ctx);
        goto after_3;
    // 0x60005064: addiu       $a0, $zero, 0xA65
    ctx->r4 = ADD32(0, 0XA65);
    after_3:
    // 0x60005068: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000506C:
    // 0x6000506C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60005070: jr          $ra
    // 0x60005074: nop

    return;
    // 0x60005074: nop

;}
RECOMP_FUNC void ovl_stage_world3_5078(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005078: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x6000507C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60005080: jal         0x60000BB0
    // 0x60005084: addiu       $a0, $zero, 0x194
    ctx->r4 = ADD32(0, 0X194);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_0;
    // 0x60005084: addiu       $a0, $zero, 0x194
    ctx->r4 = ADD32(0, 0X194);
    after_0:
    // 0x60005088: beq         $v0, $zero, L_600050F0
    if (ctx->r2 == 0) {
        // 0x6000508C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600050F0;
    }
    // 0x6000508C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005090: jal         0x60000BB0
    // 0x60005094: addiu       $a0, $zero, 0x195
    ctx->r4 = ADD32(0, 0X195);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_1;
    // 0x60005094: addiu       $a0, $zero, 0x195
    ctx->r4 = ADD32(0, 0X195);
    after_1:
    // 0x60005098: beq         $v0, $zero, L_600050F0
    if (ctx->r2 == 0) {
        // 0x6000509C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600050F0;
    }
    // 0x6000509C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600050A0: jal         0x60000E74
    // 0x600050A4: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    ovl_stage_world3_E74(rdram, ctx);
        goto after_2;
    // 0x600050A4: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_2:
    // 0x600050A8: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x600050AC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600050B0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x600050B4: jal         0x600006C4
    // 0x600050B8: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_3;
    // 0x600050B8: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    after_3:
    // 0x600050BC: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x600050C0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x600050C4: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x600050C8: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x600050CC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x600050D0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x600050D4: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    // 0x600050D8: jal         0x600006C4
    // 0x600050DC: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_4;
    // 0x600050DC: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    after_4:
    // 0x600050E0: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x600050E4: jal         0x60000E68
    // 0x600050E8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_stage_world3_E68(rdram, ctx);
        goto after_5;
    // 0x600050E8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_5:
    // 0x600050EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600050F0:
    // 0x600050F0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x600050F4: jr          $ra
    // 0x600050F8: nop

    return;
    // 0x600050F8: nop

;}
RECOMP_FUNC void ovl_stage_world3_50FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600050FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60005100: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60005104: jal         0x60000BB0
    // 0x60005108: addiu       $a0, $zero, 0x108
    ctx->r4 = ADD32(0, 0X108);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_0;
    // 0x60005108: addiu       $a0, $zero, 0x108
    ctx->r4 = ADD32(0, 0X108);
    after_0:
    // 0x6000510C: jal         0x60000BB0
    // 0x60005110: addiu       $a0, $zero, 0x109
    ctx->r4 = ADD32(0, 0X109);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_1;
    // 0x60005110: addiu       $a0, $zero, 0x109
    ctx->r4 = ADD32(0, 0X109);
    after_1:
    // 0x60005114: jal         0x60000BB0
    // 0x60005118: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_2;
    // 0x60005118: addiu       $a0, $zero, 0x10A
    ctx->r4 = ADD32(0, 0X10A);
    after_2:
    // 0x6000511C: jal         0x60000BB0
    // 0x60005120: addiu       $a0, $zero, 0x10B
    ctx->r4 = ADD32(0, 0X10B);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_3;
    // 0x60005120: addiu       $a0, $zero, 0x10B
    ctx->r4 = ADD32(0, 0X10B);
    after_3:
    // 0x60005124: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005128: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x6000512C: jr          $ra
    // 0x60005130: nop

    return;
    // 0x60005130: nop

;}
RECOMP_FUNC void ovl_stage_world3_5134(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005134: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60005138: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x6000513C: jal         0x60000BB0
    // 0x60005140: addiu       $a0, $zero, 0x180
    ctx->r4 = ADD32(0, 0X180);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_0;
    // 0x60005140: addiu       $a0, $zero, 0x180
    ctx->r4 = ADD32(0, 0X180);
    after_0:
    // 0x60005144: beq         $v0, $zero, L_60005168
    if (ctx->r2 == 0) {
        // 0x60005148: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60005168;
    }
    // 0x60005148: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000514C: jal         0x60000BB0
    // 0x60005150: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_1;
    // 0x60005150: addiu       $a0, $zero, 0x181
    ctx->r4 = ADD32(0, 0X181);
    after_1:
    // 0x60005154: beq         $v0, $zero, L_60005168
    if (ctx->r2 == 0) {
        // 0x60005158: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_60005168;
    }
    // 0x60005158: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000515C: jal         0x60000EEC
    // 0x60005160: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    ovl_stage_world3_EEC(rdram, ctx);
        goto after_2;
    // 0x60005160: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_2:
    // 0x60005164: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_60005168:
    // 0x60005168: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x6000516C: jr          $ra
    // 0x60005170: nop

    return;
    // 0x60005170: nop

;}
RECOMP_FUNC void ovl_stage_world3_5174(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005174: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60005178: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x6000517C: jal         0x60000BB0
    // 0x60005180: addiu       $a0, $zero, 0x188
    ctx->r4 = ADD32(0, 0X188);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_0;
    // 0x60005180: addiu       $a0, $zero, 0x188
    ctx->r4 = ADD32(0, 0X188);
    after_0:
    // 0x60005184: beq         $v0, $zero, L_600051AC
    if (ctx->r2 == 0) {
        // 0x60005188: nop
    
            goto L_600051AC;
    }
    // 0x60005188: nop

    // 0x6000518C: jal         0x60000BB0
    // 0x60005190: addiu       $a0, $zero, 0x10C
    ctx->r4 = ADD32(0, 0X10C);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_1;
    // 0x60005190: addiu       $a0, $zero, 0x10C
    ctx->r4 = ADD32(0, 0X10C);
    after_1:
    // 0x60005194: bne         $v0, $zero, L_600051AC
    if (ctx->r2 != 0) {
        // 0x60005198: nop
    
            goto L_600051AC;
    }
    // 0x60005198: nop

    // 0x6000519C: jal         0x60000B98
    // 0x600051A0: addiu       $a0, $zero, 0x10C
    ctx->r4 = ADD32(0, 0X10C);
    ovl_stage_world3_B98(rdram, ctx);
        goto after_2;
    // 0x600051A0: addiu       $a0, $zero, 0x10C
    ctx->r4 = ADD32(0, 0X10C);
    after_2:
    // 0x600051A4: b           L_600051E4
    // 0x600051A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_600051E4;
    // 0x600051A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600051AC:
    // 0x600051AC: jal         0x60000BB0
    // 0x600051B0: addiu       $a0, $zero, 0x10C
    ctx->r4 = ADD32(0, 0X10C);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_3;
    // 0x600051B0: addiu       $a0, $zero, 0x10C
    ctx->r4 = ADD32(0, 0X10C);
    after_3:
    // 0x600051B4: beq         $v0, $zero, L_600051E4
    if (ctx->r2 == 0) {
        // 0x600051B8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600051E4;
    }
    // 0x600051B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600051BC: jal         0x60000BB0
    // 0x600051C0: addiu       $a0, $zero, 0x10D
    ctx->r4 = ADD32(0, 0X10D);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_4;
    // 0x600051C0: addiu       $a0, $zero, 0x10D
    ctx->r4 = ADD32(0, 0X10D);
    after_4:
    // 0x600051C4: bne         $v0, $zero, L_600051E4
    if (ctx->r2 != 0) {
        // 0x600051C8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600051E4;
    }
    // 0x600051C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600051CC: jal         0x60000B98
    // 0x600051D0: addiu       $a0, $zero, 0x10D
    ctx->r4 = ADD32(0, 0X10D);
    ovl_stage_world3_B98(rdram, ctx);
        goto after_5;
    // 0x600051D0: addiu       $a0, $zero, 0x10D
    ctx->r4 = ADD32(0, 0X10D);
    after_5:
    // 0x600051D4: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x600051D8: jal         0x60000E68
    // 0x600051DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world3_E68(rdram, ctx);
        goto after_6;
    // 0x600051DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x600051E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600051E4:
    // 0x600051E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600051E8: jr          $ra
    // 0x600051EC: nop

    return;
    // 0x600051EC: nop

;}
RECOMP_FUNC void ovl_stage_world3_51F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600051F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600051F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600051F8: jal         0x60000B98
    // 0x600051FC: addiu       $a0, $zero, 0x82
    ctx->r4 = ADD32(0, 0X82);
    ovl_stage_world3_B98(rdram, ctx);
        goto after_0;
    // 0x600051FC: addiu       $a0, $zero, 0x82
    ctx->r4 = ADD32(0, 0X82);
    after_0:
    // 0x60005200: jal         0x60000C7C
    // 0x60005204: nop

    ovl_stage_world3_C7C(rdram, ctx);
        goto after_1;
    // 0x60005204: nop

    after_1:
    // 0x60005208: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000520C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60005210: jr          $ra
    // 0x60005214: nop

    return;
    // 0x60005214: nop

;}
RECOMP_FUNC void ovl_stage_world3_5218(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005218: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x6000521C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60005220: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    // 0x60005224: jal         0x60000E80
    // 0x60005228: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world3_E80(rdram, ctx);
        goto after_0;
    // 0x60005228: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x6000522C: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    // 0x60005230: jal         0x60000E80
    // 0x60005234: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_stage_world3_E80(rdram, ctx);
        goto after_1;
    // 0x60005234: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x60005238: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    // 0x6000523C: jal         0x60000E80
    // 0x60005240: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    ovl_stage_world3_E80(rdram, ctx);
        goto after_2;
    // 0x60005240: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_2:
    // 0x60005244: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60005248: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x6000524C: jr          $ra
    // 0x60005250: nop

    return;
    // 0x60005250: nop

;}
RECOMP_FUNC void ovl_stage_world3_5254(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60005254: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x60005258: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x6000525C: jal         0x60000C1C
    // 0x60005260: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    ovl_stage_world3_C1C(rdram, ctx);
        goto after_0;
    // 0x60005260: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x60005264: lbu         $t6, 0x20($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X20);
    // 0x60005268: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x6000526C: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x60005270: lw          $t7, 0xC($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XC);
    // 0x60005274: nop

    // 0x60005278: bne         $t7, $zero, L_6000536C
    if (ctx->r15 != 0) {
        // 0x6000527C: nop
    
            goto L_6000536C;
    }
    // 0x6000527C: nop

    // 0x60005280: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x60005284: nop

    // 0x60005288: andi        $t9, $t8, 0x800
    ctx->r25 = ctx->r24 & 0X800;
    // 0x6000528C: bne         $t9, $zero, L_6000536C
    if (ctx->r25 != 0) {
        // 0x60005290: nop
    
            goto L_6000536C;
    }
    // 0x60005290: nop

    // 0x60005294: jal         0x60000BB0
    // 0x60005298: addiu       $a0, $zero, 0x96
    ctx->r4 = ADD32(0, 0X96);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_1;
    // 0x60005298: addiu       $a0, $zero, 0x96
    ctx->r4 = ADD32(0, 0X96);
    after_1:
    // 0x6000529C: bne         $v0, $zero, L_60005304
    if (ctx->r2 != 0) {
        // 0x600052A0: nop
    
            goto L_60005304;
    }
    // 0x600052A0: nop

    // 0x600052A4: jal         0x60000B98
    // 0x600052A8: addiu       $a0, $zero, 0x96
    ctx->r4 = ADD32(0, 0X96);
    ovl_stage_world3_B98(rdram, ctx);
        goto after_2;
    // 0x600052A8: addiu       $a0, $zero, 0x96
    ctx->r4 = ADD32(0, 0X96);
    after_2:
    // 0x600052AC: jal         0x60000EEC
    // 0x600052B0: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    ovl_stage_world3_EEC(rdram, ctx);
        goto after_3;
    // 0x600052B0: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    after_3:
    // 0x600052B4: jal         0x60000A60
    // 0x600052B8: addiu       $a0, $zero, 0xAEB
    ctx->r4 = ADD32(0, 0XAEB);
    ovl_stage_world3_A60(rdram, ctx);
        goto after_4;
    // 0x600052B8: addiu       $a0, $zero, 0xAEB
    ctx->r4 = ADD32(0, 0XAEB);
    after_4:
    // 0x600052BC: jal         0x600009D0
    // 0x600052C0: nop

    ovl_stage_world3_9D0(rdram, ctx);
        goto after_5;
    // 0x600052C0: nop

    after_5:
    // 0x600052C4: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x600052C8: nop

    // 0x600052CC: andi        $t1, $t0, 0x800
    ctx->r9 = ctx->r8 & 0X800;
    // 0x600052D0: beq         $t1, $zero, L_600052F4
    if (ctx->r9 == 0) {
        // 0x600052D4: nop
    
            goto L_600052F4;
    }
    // 0x600052D4: nop

L_600052D8:
    // 0x600052D8: jal         0x600009D0
    // 0x600052DC: nop

    ovl_stage_world3_9D0(rdram, ctx);
        goto after_6;
    // 0x600052DC: nop

    after_6:
    // 0x600052E0: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x600052E4: nop

    // 0x600052E8: andi        $t3, $t2, 0x800
    ctx->r11 = ctx->r10 & 0X800;
    // 0x600052EC: bne         $t3, $zero, L_600052D8
    if (ctx->r11 != 0) {
        // 0x600052F0: nop
    
            goto L_600052D8;
    }
    // 0x600052F0: nop

L_600052F4:
    // 0x600052F4: jal         0x600009C4
    // 0x600052F8: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    ovl_stage_world3_9C4(rdram, ctx);
        goto after_7;
    // 0x600052F8: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_7:
    // 0x600052FC: b           L_6000530C
    // 0x60005300: nop

        goto L_6000530C;
    // 0x60005300: nop

L_60005304:
    // 0x60005304: jal         0x60005218
    // 0x60005308: nop

    ovl_stage_world3_5218(rdram, ctx);
        goto after_8;
    // 0x60005308: nop

    after_8:
L_6000530C:
    // 0x6000530C: jal         0x60000EE0
    // 0x60005310: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world3_EE0(rdram, ctx);
        goto after_9;
    // 0x60005310: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_9:
    // 0x60005314: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x60005318: nop

    // 0x6000531C: beq         $v0, $t4, L_60005374
    if (ctx->r2 == ctx->r12) {
        // 0x60005320: nop
    
            goto L_60005374;
    }
    // 0x60005320: nop

    // 0x60005324: jal         0x60000A60
    // 0x60005328: addiu       $a0, $zero, 0xAF3
    ctx->r4 = ADD32(0, 0XAF3);
    ovl_stage_world3_A60(rdram, ctx);
        goto after_10;
    // 0x60005328: addiu       $a0, $zero, 0xAF3
    ctx->r4 = ADD32(0, 0XAF3);
    after_10:
    // 0x6000532C: jal         0x600009D0
    // 0x60005330: nop

    ovl_stage_world3_9D0(rdram, ctx);
        goto after_11;
    // 0x60005330: nop

    after_11:
    // 0x60005334: lw          $t5, 0x0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X0);
    // 0x60005338: nop

    // 0x6000533C: andi        $t6, $t5, 0x800
    ctx->r14 = ctx->r13 & 0X800;
    // 0x60005340: beq         $t6, $zero, L_60005374
    if (ctx->r14 == 0) {
        // 0x60005344: nop
    
            goto L_60005374;
    }
    // 0x60005344: nop

L_60005348:
    // 0x60005348: jal         0x600009D0
    // 0x6000534C: nop

    ovl_stage_world3_9D0(rdram, ctx);
        goto after_12;
    // 0x6000534C: nop

    after_12:
    // 0x60005350: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x60005354: nop

    // 0x60005358: andi        $t8, $t7, 0x800
    ctx->r24 = ctx->r15 & 0X800;
    // 0x6000535C: bne         $t8, $zero, L_60005348
    if (ctx->r24 != 0) {
        // 0x60005360: nop
    
            goto L_60005348;
    }
    // 0x60005360: nop

    // 0x60005364: b           L_60005374
    // 0x60005368: nop

        goto L_60005374;
    // 0x60005368: nop

L_6000536C:
    // 0x6000536C: jal         0x60005218
    // 0x60005370: nop

    ovl_stage_world3_5218(rdram, ctx);
        goto after_13;
    // 0x60005370: nop

    after_13:
L_60005374:
    // 0x60005374: jal         0x600009AC
    // 0x60005378: nop

    ovl_stage_world3_9AC(rdram, ctx);
        goto after_14;
    // 0x60005378: nop

    after_14:
    // 0x6000537C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x60005380: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x60005384: jr          $ra
    // 0x60005388: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x60005388: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_stage_world3_538C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000538C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60005390: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60005394: jal         0x60000C1C
    // 0x60005398: nop

    ovl_stage_world3_C1C(rdram, ctx);
        goto after_0;
    // 0x60005398: nop

    after_0:
    // 0x6000539C: lw          $t6, 0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC);
    // 0x600053A0: nop

    // 0x600053A4: bne         $t6, $zero, L_600053CC
    if (ctx->r14 != 0) {
        // 0x600053A8: nop
    
            goto L_600053CC;
    }
    // 0x600053A8: nop

    // 0x600053AC: jal         0x60000BB0
    // 0x600053B0: addiu       $a0, $zero, 0x82
    ctx->r4 = ADD32(0, 0X82);
    ovl_stage_world3_BB0(rdram, ctx);
        goto after_1;
    // 0x600053B0: addiu       $a0, $zero, 0x82
    ctx->r4 = ADD32(0, 0X82);
    after_1:
    // 0x600053B4: beq         $v0, $zero, L_600053CC
    if (ctx->r2 == 0) {
        // 0x600053B8: nop
    
            goto L_600053CC;
    }
    // 0x600053B8: nop

    // 0x600053BC: jal         0x60000F50
    // 0x600053C0: nop

    ovl_stage_world3_F50(rdram, ctx);
        goto after_2;
    // 0x600053C0: nop

    after_2:
    // 0x600053C4: jal         0x6000339C
    // 0x600053C8: nop

    ovl_stage_world3_339C(rdram, ctx);
        goto after_3;
    // 0x600053C8: nop

    after_3:
L_600053CC:
    // 0x600053CC: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x600053D0: addiu       $a0, $a0, 0x5254
    ctx->r4 = ADD32(ctx->r4, 0X5254);
    // 0x600053D4: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x600053D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x600053DC: jal         0x60000994
    // 0x600053E0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world3_994(rdram, ctx);
        goto after_4;
    // 0x600053E0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x600053E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600053E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600053EC: jr          $ra
    // 0x600053F0: nop

    return;
    // 0x600053F0: nop

;}
