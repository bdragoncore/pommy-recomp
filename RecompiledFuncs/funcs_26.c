#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80057650(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80057650: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80057654: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80057658: beq         $v0, $zero, L_80057680
    if (ctx->r2 == 0) {
        // 0x8005765C: nop
    
            goto L_80057680;
    }
    // 0x8005765C: nop

    // 0x80057660: beq         $v0, $at, L_800576D8
    if (ctx->r2 == ctx->r1) {
        // 0x80057664: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_800576D8;
    }
    // 0x80057664: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80057668: beq         $v0, $at, L_80057760
    if (ctx->r2 == ctx->r1) {
        // 0x8005766C: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80057760;
    }
    // 0x8005766C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80057670: beq         $v0, $at, L_800577E8
    if (ctx->r2 == ctx->r1) {
        // 0x80057674: nop
    
            goto L_800577E8;
    }
    // 0x80057674: nop

    // 0x80057678: jr          $ra
    // 0x8005767C: nop

    return;
    // 0x8005767C: nop

L_80057680:
    // 0x80057680: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x80057684: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x80057688: lwc1        $f4, 0x2C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X2C);
    // 0x8005768C: lwc1        $f6, 0x0($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X0);
    // 0x80057690: nop

    // 0x80057694: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80057698: swc1        $f8, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f8.u32l;
    // 0x8005769C: lw          $t7, 0x4($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X4);
    // 0x800576A0: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x800576A4: lwc1        $f4, 0x4($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X4);
    // 0x800576A8: lwc1        $f10, 0x30($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X30);
    // 0x800576AC: nop

    // 0x800576B0: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x800576B4: swc1        $f6, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->f6.u32l;
    // 0x800576B8: lw          $t8, 0x4($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X4);
    // 0x800576BC: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x800576C0: lwc1        $f10, 0x8($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X8);
    // 0x800576C4: lwc1        $f8, 0x34($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X34);
    // 0x800576C8: nop

    // 0x800576CC: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x800576D0: jr          $ra
    // 0x800576D4: swc1        $f4, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->f4.u32l;
    return;
    // 0x800576D4: swc1        $f4, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->f4.u32l;
L_800576D8:
    // 0x800576D8: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x800576DC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800576E0: lwc1        $f2, 0x603C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X603C);
    // 0x800576E4: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x800576E8: nop

    // 0x800576EC: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x800576F0: nop

    // 0x800576F4: bc1t        L_80057710
    if (c1cs) {
        // 0x800576F8: nop
    
            goto L_80057710;
    }
    // 0x800576F8: nop

    // 0x800576FC: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x80057700: nop

    // 0x80057704: swc1        $f0, 0x14($t9)
    MEM_W(0X14, ctx->r25) = ctx->f0.u32l;
    // 0x80057708: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x8005770C: nop

L_80057710:
    // 0x80057710: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80057714: nop

    // 0x80057718: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x8005771C: nop

    // 0x80057720: bc1t        L_8005773C
    if (c1cs) {
        // 0x80057724: nop
    
            goto L_8005773C;
    }
    // 0x80057724: nop

    // 0x80057728: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x8005772C: nop

    // 0x80057730: swc1        $f0, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f0.u32l;
    // 0x80057734: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x80057738: nop

L_8005773C:
    // 0x8005773C: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80057740: nop

    // 0x80057744: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x80057748: nop

    // 0x8005774C: bc1t        L_800577F8
    if (c1cs) {
        // 0x80057750: nop
    
            goto L_800577F8;
    }
    // 0x80057750: nop

    // 0x80057754: lw          $t7, 0x8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X8);
    // 0x80057758: jr          $ra
    // 0x8005775C: swc1        $f0, 0x18($t7)
    MEM_W(0X18, ctx->r15) = ctx->f0.u32l;
    return;
    // 0x8005775C: swc1        $f0, 0x18($t7)
    MEM_W(0X18, ctx->r15) = ctx->f0.u32l;
L_80057760:
    // 0x80057760: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x80057764: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80057768: lwc1        $f2, 0x6040($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X6040);
    // 0x8005776C: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80057770: nop

    // 0x80057774: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x80057778: nop

    // 0x8005777C: bc1t        L_80057798
    if (c1cs) {
        // 0x80057780: nop
    
            goto L_80057798;
    }
    // 0x80057780: nop

    // 0x80057784: lw          $t8, 0x8($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X8);
    // 0x80057788: nop

    // 0x8005778C: swc1        $f0, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f0.u32l;
    // 0x80057790: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x80057794: nop

L_80057798:
    // 0x80057798: lwc1        $f0, 0x4($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8005779C: nop

    // 0x800577A0: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x800577A4: nop

    // 0x800577A8: bc1t        L_800577C4
    if (c1cs) {
        // 0x800577AC: nop
    
            goto L_800577C4;
    }
    // 0x800577AC: nop

    // 0x800577B0: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x800577B4: nop

    // 0x800577B8: swc1        $f0, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->f0.u32l;
    // 0x800577BC: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x800577C0: nop

L_800577C4:
    // 0x800577C4: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x800577C8: nop

    // 0x800577CC: c.eq.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl == ctx->f0.fl;
    // 0x800577D0: nop

    // 0x800577D4: bc1t        L_800577F8
    if (c1cs) {
        // 0x800577D8: nop
    
            goto L_800577F8;
    }
    // 0x800577D8: nop

    // 0x800577DC: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x800577E0: jr          $ra
    // 0x800577E4: swc1        $f0, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->f0.u32l;
    return;
    // 0x800577E4: swc1        $f0, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->f0.u32l;
L_800577E8:
    // 0x800577E8: lwc1        $f6, 0x4($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X4);
    // 0x800577EC: lw          $t7, 0x8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X8);
    // 0x800577F0: nop

    // 0x800577F4: swc1        $f6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f6.u32l;
L_800577F8:
    // 0x800577F8: jr          $ra
    // 0x800577FC: nop

    return;
    // 0x800577FC: nop

;}
RECOMP_FUNC void func_80057800(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80057800: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80057804: lwc1        $f0, 0xC($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0XC);
    // 0x80057808: nop

    // 0x8005780C: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x80057810: nop

    // 0x80057814: bc1f        L_80057824
    if (!c1cs) {
        // 0x80057818: nop
    
            goto L_80057824;
    }
    // 0x80057818: nop

    // 0x8005781C: b           L_80057828
    // 0x80057820: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
        goto L_80057828;
    // 0x80057820: neg.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = -ctx->f0.fl;
L_80057824:
    // 0x80057824: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_80057828:
    // 0x80057828: lwc1        $f12, 0x8($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8005782C: nop

    // 0x80057830: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    // 0x80057834: nop

    // 0x80057838: bc1f        L_80057848
    if (!c1cs) {
        // 0x8005783C: nop
    
            goto L_80057848;
    }
    // 0x8005783C: nop

    // 0x80057840: b           L_8005784C
    // 0x80057844: neg.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = -ctx->f12.fl;
        goto L_8005784C;
    // 0x80057844: neg.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f14.fl = -ctx->f12.fl;
L_80057848:
    // 0x80057848: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
L_8005784C:
    // 0x8005784C: lwc1        $f12, 0x10($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X10);
    // 0x80057850: nop

    // 0x80057854: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    // 0x80057858: nop

    // 0x8005785C: bc1f        L_8005786C
    if (!c1cs) {
        // 0x80057860: nop
    
            goto L_8005786C;
    }
    // 0x80057860: nop

    // 0x80057864: b           L_80057870
    // 0x80057868: neg.s       $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = -ctx->f12.fl;
        goto L_80057870;
    // 0x80057868: neg.s       $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = -ctx->f12.fl;
L_8005786C:
    // 0x8005786C: mov.s       $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    ctx->f16.fl = ctx->f12.fl;
L_80057870:
    // 0x80057870: add.s       $f6, $f14, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f14.fl + ctx->f2.fl;
    // 0x80057874: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80057878: add.s       $f8, $f16, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x8005787C: c.eq.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl == ctx->f8.fl;
    // 0x80057880: nop

    // 0x80057884: bc1f        L_80057898
    if (!c1cs) {
        // 0x80057888: nop
    
            goto L_80057898;
    }
    // 0x80057888: nop

    // 0x8005788C: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80057890: b           L_80057918
    // 0x80057894: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80057918;
    // 0x80057894: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80057898:
    // 0x80057898: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x8005789C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800578A0: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x800578A4: beq         $t7, $zero, L_800578B8
    if (ctx->r15 == 0) {
        // 0x800578A8: nop
    
            goto L_800578B8;
    }
    // 0x800578A8: nop

    // 0x800578AC: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x800578B0: b           L_80057918
    // 0x800578B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80057918;
    // 0x800578B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800578B8:
    // 0x800578B8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800578BC: nop

    // 0x800578C0: c.eq.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl == ctx->f0.fl;
    // 0x800578C4: nop

    // 0x800578C8: bc1f        L_800578DC
    if (!c1cs) {
        // 0x800578CC: nop
    
            goto L_800578DC;
    }
    // 0x800578CC: nop

    // 0x800578D0: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x800578D4: b           L_80057918
    // 0x800578D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80057918;
    // 0x800578D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800578DC:
    // 0x800578DC: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x800578E0: nop

    // 0x800578E4: lw          $t8, 0x3C($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X3C);
    // 0x800578E8: nop

    // 0x800578EC: andi        $t9, $t8, 0x8
    ctx->r25 = ctx->r24 & 0X8;
    // 0x800578F0: bne         $t9, $zero, L_80057900
    if (ctx->r25 != 0) {
        // 0x800578F4: nop
    
            goto L_80057900;
    }
    // 0x800578F4: nop

    // 0x800578F8: b           L_80057918
    // 0x800578FC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80057918;
    // 0x800578FC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80057900:
    // 0x80057900: lw          $t6, 0x38($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X38);
    // 0x80057904: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80057908: beq         $t6, $at, L_80057918
    if (ctx->r14 == ctx->r1) {
        // 0x8005790C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80057918;
    }
    // 0x8005790C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80057910: b           L_80057918
    // 0x80057914: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80057918;
    // 0x80057914: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80057918:
    // 0x80057918: jr          $ra
    // 0x8005791C: sw          $v0, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->r2;
    return;
    // 0x8005791C: sw          $v0, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->r2;
;}
RECOMP_FUNC void func_80057920(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80057920: jr          $ra
    // 0x80057924: nop

    return;
    // 0x80057924: nop

;}
RECOMP_FUNC void func_80057960(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80057960: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x80057964: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80057968: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8005796C: lw          $t7, 0x8($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X8);
    // 0x80057970: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80057974: sw          $t7, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r15;
    // 0x80057978: lw          $t8, 0xC($a1)
    ctx->r24 = MEM_W(ctx->r5, 0XC);
    // 0x8005797C: nop

    // 0x80057980: sw          $t8, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r24;
    // 0x80057984: lw          $t9, 0x10($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X10);
    // 0x80057988: blez        $t8, L_80057A1C
    if (SIGNED(ctx->r24) <= 0) {
        // 0x8005798C: sw          $t9, 0x10($a0)
        MEM_W(0X10, ctx->r4) = ctx->r25;
            goto L_80057A1C;
    }
    // 0x8005798C: sw          $t9, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r25;
L_80057990:
    // 0x80057990: lw          $t7, 0x10($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X10);
    // 0x80057994: lw          $t9, 0x10($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X10);
    // 0x80057998: addu        $t8, $t7, $v1
    ctx->r24 = ADD32(ctx->r15, ctx->r3);
    // 0x8005799C: lwc1        $f4, 0x0($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X0);
    // 0x800579A0: addu        $t6, $t9, $v1
    ctx->r14 = ADD32(ctx->r25, ctx->r3);
    // 0x800579A4: swc1        $f4, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f4.u32l;
    // 0x800579A8: lw          $t7, 0x10($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X10);
    // 0x800579AC: lw          $t9, 0x10($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X10);
    // 0x800579B0: addu        $t8, $t7, $v1
    ctx->r24 = ADD32(ctx->r15, ctx->r3);
    // 0x800579B4: lwc1        $f6, 0x4($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X4);
    // 0x800579B8: addu        $t6, $t9, $v1
    ctx->r14 = ADD32(ctx->r25, ctx->r3);
    // 0x800579BC: swc1        $f6, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f6.u32l;
    // 0x800579C0: lw          $t7, 0x10($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X10);
    // 0x800579C4: lw          $t9, 0x10($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X10);
    // 0x800579C8: addu        $t8, $t7, $v1
    ctx->r24 = ADD32(ctx->r15, ctx->r3);
    // 0x800579CC: lwc1        $f8, 0x8($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X8);
    // 0x800579D0: addu        $t6, $t9, $v1
    ctx->r14 = ADD32(ctx->r25, ctx->r3);
    // 0x800579D4: swc1        $f8, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f8.u32l;
    // 0x800579D8: lw          $t7, 0x10($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X10);
    // 0x800579DC: lw          $t9, 0x10($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X10);
    // 0x800579E0: addu        $t8, $t7, $v1
    ctx->r24 = ADD32(ctx->r15, ctx->r3);
    // 0x800579E4: lwc1        $f10, 0xC($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0XC);
    // 0x800579E8: addu        $t6, $t9, $v1
    ctx->r14 = ADD32(ctx->r25, ctx->r3);
    // 0x800579EC: swc1        $f10, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->f10.u32l;
    // 0x800579F0: lw          $t7, 0x10($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X10);
    // 0x800579F4: lw          $t6, 0x10($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X10);
    // 0x800579F8: addu        $t8, $t7, $v1
    ctx->r24 = ADD32(ctx->r15, ctx->r3);
    // 0x800579FC: lw          $t9, 0x10($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X10);
    // 0x80057A00: addu        $t7, $t6, $v1
    ctx->r15 = ADD32(ctx->r14, ctx->r3);
    // 0x80057A04: sw          $t9, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->r25;
    // 0x80057A08: lw          $t8, 0xC($a0)
    ctx->r24 = MEM_W(ctx->r4, 0XC);
    // 0x80057A0C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80057A10: slt         $at, $v0, $t8
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80057A14: bne         $at, $zero, L_80057990
    if (ctx->r1 != 0) {
        // 0x80057A18: addiu       $v1, $v1, 0x14
        ctx->r3 = ADD32(ctx->r3, 0X14);
            goto L_80057990;
    }
    // 0x80057A18: addiu       $v1, $v1, 0x14
    ctx->r3 = ADD32(ctx->r3, 0X14);
L_80057A1C:
    // 0x80057A1C: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x80057A20: nop

    // 0x80057A24: andi        $t9, $t6, 0x1
    ctx->r25 = ctx->r14 & 0X1;
    // 0x80057A28: beq         $t9, $zero, L_80057A70
    if (ctx->r25 == 0) {
        // 0x80057A2C: nop
    
            goto L_80057A70;
    }
    // 0x80057A2C: nop

    // 0x80057A30: lw          $t7, 0x14($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X14);
    // 0x80057A34: nop

    // 0x80057A38: beq         $t7, $zero, L_80057B84
    if (ctx->r15 == 0) {
        // 0x80057A3C: sw          $t7, 0x14($a0)
        MEM_W(0X14, ctx->r4) = ctx->r15;
            goto L_80057B84;
    }
    // 0x80057A3C: sw          $t7, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r15;
    // 0x80057A40: lw          $t8, 0x14($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X14);
    // 0x80057A44: nop

    // 0x80057A48: lw          $t6, 0x0($t8)
    ctx->r14 = MEM_W(ctx->r24, 0X0);
    // 0x80057A4C: nop

    // 0x80057A50: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x80057A54: lw          $t9, 0x14($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X14);
    // 0x80057A58: lw          $t6, 0x14($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X14);
    // 0x80057A5C: lw          $t7, 0x4($t9)
    ctx->r15 = MEM_W(ctx->r25, 0X4);
    // 0x80057A60: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x80057A64: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x80057A68: jr          $ra
    // 0x80057A6C: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    return;
    // 0x80057A6C: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
L_80057A70:
    // 0x80057A70: lw          $t7, 0x14($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X14);
    // 0x80057A74: nop

    // 0x80057A78: beq         $t7, $zero, L_80057B84
    if (ctx->r15 == 0) {
        // 0x80057A7C: sw          $t7, 0x14($a0)
        MEM_W(0X14, ctx->r4) = ctx->r15;
            goto L_80057B84;
    }
    // 0x80057A7C: sw          $t7, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r15;
    // 0x80057A80: lw          $t6, 0x14($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X14);
    // 0x80057A84: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80057A88: lw          $t8, 0x0($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X0);
    // 0x80057A8C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80057A90: sw          $t8, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r24;
    // 0x80057A94: lw          $t9, 0x14($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X14);
    // 0x80057A98: lw          $t6, 0x14($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X14);
    // 0x80057A9C: lw          $t7, 0x4($t9)
    ctx->r15 = MEM_W(ctx->r25, 0X4);
    // 0x80057AA0: nop

    // 0x80057AA4: sw          $t7, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r15;
    // 0x80057AA8: lw          $a2, 0x14($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X14);
    // 0x80057AAC: nop

    // 0x80057AB0: lw          $t8, 0x0($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X0);
    // 0x80057AB4: nop

    // 0x80057AB8: blez        $t8, L_80057B84
    if (SIGNED(ctx->r24) <= 0) {
        // 0x80057ABC: nop
    
            goto L_80057B84;
    }
    // 0x80057ABC: nop

L_80057AC0:
    // 0x80057AC0: lw          $t9, 0x14($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X14);
    // 0x80057AC4: lw          $t8, 0x4($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X4);
    // 0x80057AC8: lw          $t7, 0x4($t9)
    ctx->r15 = MEM_W(ctx->r25, 0X4);
    // 0x80057ACC: addu        $t9, $t8, $v1
    ctx->r25 = ADD32(ctx->r24, ctx->r3);
    // 0x80057AD0: addu        $t6, $t7, $v1
    ctx->r14 = ADD32(ctx->r15, ctx->r3);
    // 0x80057AD4: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
    // 0x80057AD8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80057ADC: swc1        $f4, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f4.u32l;
    // 0x80057AE0: lw          $t7, 0x14($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X14);
    // 0x80057AE4: lw          $t9, 0x14($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X14);
    // 0x80057AE8: lw          $t6, 0x4($t7)
    ctx->r14 = MEM_W(ctx->r15, 0X4);
    // 0x80057AEC: lw          $t7, 0x4($t9)
    ctx->r15 = MEM_W(ctx->r25, 0X4);
    // 0x80057AF0: addu        $t8, $t6, $v1
    ctx->r24 = ADD32(ctx->r14, ctx->r3);
    // 0x80057AF4: lwc1        $f6, 0x4($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X4);
    // 0x80057AF8: addu        $t6, $t7, $v1
    ctx->r14 = ADD32(ctx->r15, ctx->r3);
    // 0x80057AFC: swc1        $f6, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f6.u32l;
    // 0x80057B00: lw          $t8, 0x14($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X14);
    // 0x80057B04: lw          $t6, 0x14($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X14);
    // 0x80057B08: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x80057B0C: lw          $t8, 0x4($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X4);
    // 0x80057B10: addu        $t7, $t9, $v1
    ctx->r15 = ADD32(ctx->r25, ctx->r3);
    // 0x80057B14: lwc1        $f8, 0x8($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X8);
    // 0x80057B18: addu        $t9, $t8, $v1
    ctx->r25 = ADD32(ctx->r24, ctx->r3);
    // 0x80057B1C: swc1        $f8, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->f8.u32l;
    // 0x80057B20: lw          $t7, 0x14($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X14);
    // 0x80057B24: lw          $t9, 0x14($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X14);
    // 0x80057B28: lw          $t6, 0x4($t7)
    ctx->r14 = MEM_W(ctx->r15, 0X4);
    // 0x80057B2C: lw          $t7, 0x4($t9)
    ctx->r15 = MEM_W(ctx->r25, 0X4);
    // 0x80057B30: addu        $t8, $t6, $v1
    ctx->r24 = ADD32(ctx->r14, ctx->r3);
    // 0x80057B34: lwc1        $f10, 0xC($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0XC);
    // 0x80057B38: addu        $t6, $t7, $v1
    ctx->r14 = ADD32(ctx->r15, ctx->r3);
    // 0x80057B3C: swc1        $f10, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->f10.u32l;
    // 0x80057B40: lw          $t8, 0x14($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X14);
    // 0x80057B44: nop

    // 0x80057B48: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x80057B4C: lw          $t8, 0x14($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X14);
    // 0x80057B50: addu        $t7, $t9, $v1
    ctx->r15 = ADD32(ctx->r25, ctx->r3);
    // 0x80057B54: lw          $t6, 0x10($t7)
    ctx->r14 = MEM_W(ctx->r15, 0X10);
    // 0x80057B58: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x80057B5C: nop

    // 0x80057B60: addu        $t7, $t9, $v1
    ctx->r15 = ADD32(ctx->r25, ctx->r3);
    // 0x80057B64: sw          $t6, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->r14;
    // 0x80057B68: lw          $a2, 0x14($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X14);
    // 0x80057B6C: addiu       $v1, $v1, 0x14
    ctx->r3 = ADD32(ctx->r3, 0X14);
    // 0x80057B70: lw          $t8, 0x0($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X0);
    // 0x80057B74: nop

    // 0x80057B78: slt         $at, $v0, $t8
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80057B7C: bne         $at, $zero, L_80057AC0
    if (ctx->r1 != 0) {
        // 0x80057B80: nop
    
            goto L_80057AC0;
    }
    // 0x80057B80: nop

L_80057B84:
    // 0x80057B84: jr          $ra
    // 0x80057B88: nop

    return;
    // 0x80057B88: nop

    // 0x80057B8C: jr          $ra
    // 0x80057B90: nop

    return;
    // 0x80057B90: nop

;}
RECOMP_FUNC void func_80057B94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80057B94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80057B98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80057B9C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80057BA0: jal         0x8002F188
    // 0x80057BA4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8002F188(rdram, ctx);
        goto after_0;
    // 0x80057BA4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
    // 0x80057BA8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80057BAC: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x80057BB0: lwc1        $f1, 0x6048($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X6048);
    // 0x80057BB4: lwc1        $f0, 0x604C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X604C);
    // 0x80057BB8: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80057BBC: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x80057BC0: lwc1        $f4, 0x4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4);
    // 0x80057BC4: nop

    // 0x80057BC8: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80057BCC: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x80057BD0: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x80057BD4: swc1        $f10, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f10.u32l;
    // 0x80057BD8: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x80057BDC: swc1        $f10, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f10.u32l;
    // 0x80057BE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80057BE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80057BE8: jr          $ra
    // 0x80057BEC: nop

    return;
    // 0x80057BEC: nop

    // 0x80057BF0: jr          $ra
    // 0x80057BF4: nop

    return;
    // 0x80057BF4: nop

;}
RECOMP_FUNC void func_80057BF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80057BF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80057BFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80057C00: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x80057C04: lwc1        $f2, 0x4($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X4);
    // 0x80057C08: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80057C0C: lwc1        $f14, 0x8($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X8);
    // 0x80057C10: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80057C14: nop

    // 0x80057C18: mul.s       $f10, $f14, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x80057C1C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80057C20: jal         0x8007A500
    // 0x80057C24: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    sqrtf_recomp(rdram, ctx);
        goto after_0;
    // 0x80057C24: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    after_0:
    // 0x80057C28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80057C2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80057C30: jr          $ra
    // 0x80057C34: nop

    return;
    // 0x80057C34: nop

    // 0x80057C38: jr          $ra
    // 0x80057C3C: nop

    return;
    // 0x80057C3C: nop

;}
RECOMP_FUNC void func_80057C40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80057C40: lw          $t6, 0x14($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X14);
    // 0x80057C44: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x80057C48: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x80057C4C: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x80057C50: and         $t9, $t7, $at
    ctx->r25 = ctx->r15 & ctx->r1;
    // 0x80057C54: sw          $t7, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r15;
    // 0x80057C58: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80057C5C: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x80057C60: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x80057C64: sw          $t9, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r25;
    // 0x80057C68: and         $t7, $t9, $at
    ctx->r15 = ctx->r25 & ctx->r1;
    // 0x80057C6C: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x80057C70: sw          $v1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r3;
    // 0x80057C74: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x80057C78: sw          $v0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r2;
    // 0x80057C7C: sw          $v1, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r3;
    // 0x80057C80: jr          $ra
    // 0x80057C84: sw          $t7, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r15;
    return;
    // 0x80057C84: sw          $t7, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void func_80057C88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80057C88: jr          $ra
    // 0x80057C8C: nop

    return;
    // 0x80057C8C: nop

;}
RECOMP_FUNC void func_80057CA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80057CA0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80057CA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80057CA8: lw          $t6, 0x4($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X4);
    // 0x80057CAC: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80057CB0: addiu       $t7, $t6, -0x2
    ctx->r15 = ADD32(ctx->r14, -0X2);
    // 0x80057CB4: sltiu       $at, $t7, 0x19
    ctx->r1 = ctx->r15 < 0X19 ? 1 : 0;
    // 0x80057CB8: beq         $at, $zero, L_800581EC
    if (ctx->r1 == 0) {
        // 0x80057CBC: or          $t1, $a1, $zero
        ctx->r9 = ctx->r5 | 0;
            goto L_800581EC;
    }
    // 0x80057CBC: or          $t1, $a1, $zero
    ctx->r9 = ctx->r5 | 0;
    // 0x80057CC0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80057CC4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80057CC8: addu        $at, $at, $t7
    gpr jr_addend_80057CD4 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80057CCC: lw          $t7, 0x6050($at)
    ctx->r15 = ADD32(ctx->r1, 0X6050);
    // 0x80057CD0: nop

    // 0x80057CD4: jr          $t7
    // 0x80057CD8: nop

    switch (jr_addend_80057CD4 >> 2) {
        case 0: goto L_80057CDC; break;
        case 1: goto L_80057D60; break;
        case 2: goto L_800580C0; break;
        case 3: goto L_800581EC; break;
        case 4: goto L_800581EC; break;
        case 5: goto L_800581EC; break;
        case 6: goto L_80057F8C; break;
        case 7: goto L_800581EC; break;
        case 8: goto L_800581EC; break;
        case 9: goto L_800581EC; break;
        case 10: goto L_800581EC; break;
        case 11: goto L_800581EC; break;
        case 12: goto L_80057DE4; break;
        case 13: goto L_80057E78; break;
        case 14: goto L_800581EC; break;
        case 15: goto L_800581A0; break;
        case 16: goto L_80058180; break;
        case 17: goto L_800581EC; break;
        case 18: goto L_800581EC; break;
        case 19: goto L_800581EC; break;
        case 20: goto L_800581EC; break;
        case 21: goto L_800581EC; break;
        case 22: goto L_800581EC; break;
        case 23: goto L_800581EC; break;
        case 24: goto L_80057F08; break;
        default: switch_error(__func__, 0x80057CD4, 0x80096050);
    }
    // 0x80057CD8: nop

L_80057CDC:
    // 0x80057CDC: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x80057CE0: lw          $a2, 0x8($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X8);
    // 0x80057CE4: addiu       $v0, $v0, -0x6C30
    ctx->r2 = ADD32(ctx->r2, -0X6C30);
    // 0x80057CE8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80057CEC: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x80057CF0: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
L_80057CF4:
    // 0x80057CF4: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x80057CF8: nop

    // 0x80057CFC: beq         $a1, $t8, L_80057D1C
    if (ctx->r5 == ctx->r24) {
        // 0x80057D00: nop
    
            goto L_80057D1C;
    }
    // 0x80057D00: nop

    // 0x80057D04: lw          $t9, 0x8($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X8);
    // 0x80057D08: nop

    // 0x80057D0C: bne         $a2, $t9, L_80057D1C
    if (ctx->r6 != ctx->r25) {
        // 0x80057D10: nop
    
            goto L_80057D1C;
    }
    // 0x80057D10: nop

    // 0x80057D14: b           L_80057D2C
    // 0x80057D18: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_80057D2C;
    // 0x80057D18: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80057D1C:
    // 0x80057D1C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80057D20: bne         $v1, $a0, L_80057CF4
    if (ctx->r3 != ctx->r4) {
        // 0x80057D24: addiu       $v0, $v0, 0x18
        ctx->r2 = ADD32(ctx->r2, 0X18);
            goto L_80057CF4;
    }
    // 0x80057D24: addiu       $v0, $v0, 0x18
    ctx->r2 = ADD32(ctx->r2, 0X18);
    // 0x80057D28: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
L_80057D2C:
    // 0x80057D2C: beq         $v0, $a1, L_80057D4C
    if (ctx->r2 == ctx->r5) {
        // 0x80057D30: addiu       $v1, $zero, -0x1
        ctx->r3 = ADD32(0, -0X1);
            goto L_80057D4C;
    }
    // 0x80057D30: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x80057D34: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x80057D38: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x80057D3C: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x80057D40: addiu       $t7, $t7, -0x6C30
    ctx->r15 = ADD32(ctx->r15, -0X6C30);
    // 0x80057D44: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80057D48: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
L_80057D4C:
    // 0x80057D4C: lw          $t8, 0x14($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X14);
    // 0x80057D50: nop

    // 0x80057D54: ori         $t9, $t8, 0x2
    ctx->r25 = ctx->r24 | 0X2;
    // 0x80057D58: b           L_800581F8
    // 0x80057D5C: sw          $t9, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r25;
        goto L_800581F8;
    // 0x80057D5C: sw          $t9, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r25;
L_80057D60:
    // 0x80057D60: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x80057D64: lw          $a2, 0x8($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X8);
    // 0x80057D68: addiu       $v0, $v0, -0x6C30
    ctx->r2 = ADD32(ctx->r2, -0X6C30);
    // 0x80057D6C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80057D70: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x80057D74: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
L_80057D78:
    // 0x80057D78: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80057D7C: nop

    // 0x80057D80: beq         $a1, $t6, L_80057DA0
    if (ctx->r5 == ctx->r14) {
        // 0x80057D84: nop
    
            goto L_80057DA0;
    }
    // 0x80057D84: nop

    // 0x80057D88: lw          $t7, 0x8($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X8);
    // 0x80057D8C: nop

    // 0x80057D90: bne         $a2, $t7, L_80057DA0
    if (ctx->r6 != ctx->r15) {
        // 0x80057D94: nop
    
            goto L_80057DA0;
    }
    // 0x80057D94: nop

    // 0x80057D98: b           L_80057DB0
    // 0x80057D9C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_80057DB0;
    // 0x80057D9C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80057DA0:
    // 0x80057DA0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80057DA4: bne         $v1, $a0, L_80057D78
    if (ctx->r3 != ctx->r4) {
        // 0x80057DA8: addiu       $v0, $v0, 0x18
        ctx->r2 = ADD32(ctx->r2, 0X18);
            goto L_80057D78;
    }
    // 0x80057DA8: addiu       $v0, $v0, 0x18
    ctx->r2 = ADD32(ctx->r2, 0X18);
    // 0x80057DAC: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
L_80057DB0:
    // 0x80057DB0: beq         $v0, $a1, L_80057DD0
    if (ctx->r2 == ctx->r5) {
        // 0x80057DB4: addiu       $v1, $zero, -0x1
        ctx->r3 = ADD32(0, -0X1);
            goto L_80057DD0;
    }
    // 0x80057DB4: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x80057DB8: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x80057DBC: subu        $t8, $t8, $v0
    ctx->r24 = SUB32(ctx->r24, ctx->r2);
    // 0x80057DC0: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x80057DC4: addiu       $t9, $t9, -0x6C30
    ctx->r25 = ADD32(ctx->r25, -0X6C30);
    // 0x80057DC8: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x80057DCC: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
L_80057DD0:
    // 0x80057DD0: lw          $t6, 0x14($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X14);
    // 0x80057DD4: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x80057DD8: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x80057DDC: b           L_800581F8
    // 0x80057DE0: sw          $t7, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r15;
        goto L_800581F8;
    // 0x80057DE0: sw          $t7, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r15;
L_80057DE4:
    // 0x80057DE4: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x80057DE8: lw          $a2, 0x8($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X8);
    // 0x80057DEC: addiu       $v0, $v0, -0x6C30
    ctx->r2 = ADD32(ctx->r2, -0X6C30);
    // 0x80057DF0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80057DF4: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x80057DF8: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
L_80057DFC:
    // 0x80057DFC: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x80057E00: nop

    // 0x80057E04: beq         $a1, $t8, L_80057E24
    if (ctx->r5 == ctx->r24) {
        // 0x80057E08: nop
    
            goto L_80057E24;
    }
    // 0x80057E08: nop

    // 0x80057E0C: lw          $t9, 0x8($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X8);
    // 0x80057E10: nop

    // 0x80057E14: bne         $a2, $t9, L_80057E24
    if (ctx->r6 != ctx->r25) {
        // 0x80057E18: nop
    
            goto L_80057E24;
    }
    // 0x80057E18: nop

    // 0x80057E1C: b           L_80057E34
    // 0x80057E20: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_80057E34;
    // 0x80057E20: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80057E24:
    // 0x80057E24: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80057E28: bne         $v1, $a0, L_80057DFC
    if (ctx->r3 != ctx->r4) {
        // 0x80057E2C: addiu       $v0, $v0, 0x18
        ctx->r2 = ADD32(ctx->r2, 0X18);
            goto L_80057DFC;
    }
    // 0x80057E2C: addiu       $v0, $v0, 0x18
    ctx->r2 = ADD32(ctx->r2, 0X18);
    // 0x80057E30: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
L_80057E34:
    // 0x80057E34: beq         $v0, $a1, L_80057E54
    if (ctx->r2 == ctx->r5) {
        // 0x80057E38: addiu       $v1, $zero, -0x1
        ctx->r3 = ADD32(0, -0X1);
            goto L_80057E54;
    }
    // 0x80057E38: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x80057E3C: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x80057E40: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x80057E44: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x80057E48: addiu       $t7, $t7, -0x6C30
    ctx->r15 = ADD32(ctx->r15, -0X6C30);
    // 0x80057E4C: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80057E50: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
L_80057E54:
    // 0x80057E54: lw          $t8, 0x14($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X14);
    // 0x80057E58: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x80057E5C: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x80057E60: sw          $t9, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r25;
    // 0x80057E64: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x80057E68: jal         0x80051418
    // 0x80057E6C: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    func_80051418(rdram, ctx);
        goto after_0;
    // 0x80057E6C: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    after_0:
    // 0x80057E70: b           L_800581FC
    // 0x80057E74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800581FC;
    // 0x80057E74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80057E78:
    // 0x80057E78: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x80057E7C: lw          $a2, 0x8($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X8);
    // 0x80057E80: addiu       $v0, $v0, -0x6C30
    ctx->r2 = ADD32(ctx->r2, -0X6C30);
    // 0x80057E84: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80057E88: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x80057E8C: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
L_80057E90:
    // 0x80057E90: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80057E94: nop

    // 0x80057E98: beq         $a1, $t6, L_80057EB8
    if (ctx->r5 == ctx->r14) {
        // 0x80057E9C: nop
    
            goto L_80057EB8;
    }
    // 0x80057E9C: nop

    // 0x80057EA0: lw          $t7, 0x8($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X8);
    // 0x80057EA4: nop

    // 0x80057EA8: bne         $a2, $t7, L_80057EB8
    if (ctx->r6 != ctx->r15) {
        // 0x80057EAC: nop
    
            goto L_80057EB8;
    }
    // 0x80057EAC: nop

    // 0x80057EB0: b           L_80057EC8
    // 0x80057EB4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_80057EC8;
    // 0x80057EB4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80057EB8:
    // 0x80057EB8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80057EBC: bne         $v1, $a0, L_80057E90
    if (ctx->r3 != ctx->r4) {
        // 0x80057EC0: addiu       $v0, $v0, 0x18
        ctx->r2 = ADD32(ctx->r2, 0X18);
            goto L_80057E90;
    }
    // 0x80057EC0: addiu       $v0, $v0, 0x18
    ctx->r2 = ADD32(ctx->r2, 0X18);
    // 0x80057EC4: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
L_80057EC8:
    // 0x80057EC8: beq         $v0, $a1, L_80057EE8
    if (ctx->r2 == ctx->r5) {
        // 0x80057ECC: addiu       $v1, $zero, -0x1
        ctx->r3 = ADD32(0, -0X1);
            goto L_80057EE8;
    }
    // 0x80057ECC: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x80057ED0: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x80057ED4: subu        $t8, $t8, $v0
    ctx->r24 = SUB32(ctx->r24, ctx->r2);
    // 0x80057ED8: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x80057EDC: addiu       $t9, $t9, -0x6C30
    ctx->r25 = ADD32(ctx->r25, -0X6C30);
    // 0x80057EE0: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x80057EE4: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
L_80057EE8:
    // 0x80057EE8: lw          $t6, 0x14($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X14);
    // 0x80057EEC: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x80057EF0: ori         $t7, $t6, 0x1
    ctx->r15 = ctx->r14 | 0X1;
    // 0x80057EF4: sw          $t7, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r15;
    // 0x80057EF8: jal         0x80051418
    // 0x80057EFC: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    func_80051418(rdram, ctx);
        goto after_1;
    // 0x80057EFC: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    after_1:
    // 0x80057F00: b           L_800581FC
    // 0x80057F04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800581FC;
    // 0x80057F04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80057F08:
    // 0x80057F08: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x80057F0C: lw          $a2, 0x8($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X8);
    // 0x80057F10: addiu       $v0, $v0, -0x6C30
    ctx->r2 = ADD32(ctx->r2, -0X6C30);
    // 0x80057F14: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80057F18: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x80057F1C: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
L_80057F20:
    // 0x80057F20: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x80057F24: nop

    // 0x80057F28: beq         $a1, $t8, L_80057F48
    if (ctx->r5 == ctx->r24) {
        // 0x80057F2C: nop
    
            goto L_80057F48;
    }
    // 0x80057F2C: nop

    // 0x80057F30: lw          $t9, 0x8($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X8);
    // 0x80057F34: nop

    // 0x80057F38: bne         $a2, $t9, L_80057F48
    if (ctx->r6 != ctx->r25) {
        // 0x80057F3C: nop
    
            goto L_80057F48;
    }
    // 0x80057F3C: nop

    // 0x80057F40: b           L_80057F58
    // 0x80057F44: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_80057F58;
    // 0x80057F44: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80057F48:
    // 0x80057F48: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80057F4C: bne         $v1, $a0, L_80057F20
    if (ctx->r3 != ctx->r4) {
        // 0x80057F50: addiu       $v0, $v0, 0x18
        ctx->r2 = ADD32(ctx->r2, 0X18);
            goto L_80057F20;
    }
    // 0x80057F50: addiu       $v0, $v0, 0x18
    ctx->r2 = ADD32(ctx->r2, 0X18);
    // 0x80057F54: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
L_80057F58:
    // 0x80057F58: beq         $v0, $a1, L_80057F78
    if (ctx->r2 == ctx->r5) {
        // 0x80057F5C: addiu       $v1, $zero, -0x1
        ctx->r3 = ADD32(0, -0X1);
            goto L_80057F78;
    }
    // 0x80057F5C: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x80057F60: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x80057F64: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x80057F68: lui         $t7, 0x800E
    ctx->r15 = S32(0X800E << 16);
    // 0x80057F6C: addiu       $t7, $t7, -0x6C30
    ctx->r15 = ADD32(ctx->r15, -0X6C30);
    // 0x80057F70: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80057F74: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
L_80057F78:
    // 0x80057F78: lw          $t8, 0x14($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X14);
    // 0x80057F7C: nop

    // 0x80057F80: ori         $t9, $t8, 0x4
    ctx->r25 = ctx->r24 | 0X4;
    // 0x80057F84: b           L_800581F8
    // 0x80057F88: sw          $t9, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r25;
        goto L_800581F8;
    // 0x80057F88: sw          $t9, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r25;
L_80057F8C:
    // 0x80057F8C: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x80057F90: addiu       $v0, $v0, -0x6C30
    ctx->r2 = ADD32(ctx->r2, -0X6C30);
    // 0x80057F94: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80057F98: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x80057F9C: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
L_80057FA0:
    // 0x80057FA0: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80057FA4: nop

    // 0x80057FA8: bne         $a1, $t6, L_80057FB8
    if (ctx->r5 != ctx->r14) {
        // 0x80057FAC: nop
    
            goto L_80057FB8;
    }
    // 0x80057FAC: nop

    // 0x80057FB0: b           L_80057FC8
    // 0x80057FB4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_80057FC8;
    // 0x80057FB4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80057FB8:
    // 0x80057FB8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80057FBC: bne         $v1, $a0, L_80057FA0
    if (ctx->r3 != ctx->r4) {
        // 0x80057FC0: addiu       $v0, $v0, 0x18
        ctx->r2 = ADD32(ctx->r2, 0X18);
            goto L_80057FA0;
    }
    // 0x80057FC0: addiu       $v0, $v0, 0x18
    ctx->r2 = ADD32(ctx->r2, 0X18);
    // 0x80057FC4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80057FC8:
    // 0x80057FC8: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x80057FCC: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x80057FD0: addiu       $a2, $a2, 0x1C78
    ctx->r6 = ADD32(ctx->r6, 0X1C78);
    // 0x80057FD4: subu        $t7, $t7, $v0
    ctx->r15 = SUB32(ctx->r15, ctx->r2);
    // 0x80057FD8: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x80057FDC: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    // 0x80057FE0: addiu       $t8, $t8, -0x6C30
    ctx->r24 = ADD32(ctx->r24, -0X6C30);
    // 0x80057FE4: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80057FE8: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x80057FEC: addiu       $at, $zero, -0x100
    ctx->r1 = ADD32(0, -0X100);
    // 0x80057FF0: sll         $t9, $a0, 8
    ctx->r25 = S32(ctx->r4 << 8);
    // 0x80057FF4: and         $t6, $t9, $at
    ctx->r14 = ctx->r25 & ctx->r1;
    // 0x80057FF8: andi        $t7, $v0, 0xFF
    ctx->r15 = ctx->r2 & 0XFF;
    // 0x80057FFC: addiu       $t8, $a0, 0x1
    ctx->r24 = ADD32(ctx->r4, 0X1);
    // 0x80058000: sw          $t8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r24;
    // 0x80058004: or          $a1, $t6, $t7
    ctx->r5 = ctx->r14 | ctx->r15;
    // 0x80058008: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
    // 0x8005800C: lw          $t9, 0x8($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X8);
    // 0x80058010: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x80058014: sw          $t9, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r25;
    // 0x80058018: lw          $t6, 0xC($t1)
    ctx->r14 = MEM_W(ctx->r9, 0XC);
    // 0x8005801C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x80058020: sw          $t6, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r14;
    // 0x80058024: sw          $t1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r9;
    // 0x80058028: jal         0x80051418
    // 0x8005802C: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    func_80051418(rdram, ctx);
        goto after_2;
    // 0x8005802C: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    after_2:
    // 0x80058030: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x80058034: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x80058038: lw          $v1, 0x8($t1)
    ctx->r3 = MEM_W(ctx->r9, 0X8);
    // 0x8005803C: lw          $t7, 0xC($t1)
    ctx->r15 = MEM_W(ctx->r9, 0XC);
    // 0x80058040: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x80058044: sw          $t7, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->r15;
    // 0x80058048: lw          $a0, 0x10($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X10);
    // 0x8005804C: addiu       $a2, $zero, 0x2800
    ctx->r6 = ADD32(0, 0X2800);
    // 0x80058050: beq         $a1, $a0, L_80058088
    if (ctx->r5 == ctx->r4) {
        // 0x80058054: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_80058088;
    }
    // 0x80058054: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80058058: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x8005805C: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x80058060: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x80058064: jal         0x80007C3C
    // 0x80058068: sw          $t1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r9;
    func_80007C3C(rdram, ctx);
        goto after_3;
    // 0x80058068: sw          $t1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r9;
    after_3:
    // 0x8005806C: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x80058070: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x80058074: lw          $t8, 0x10($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X10);
    // 0x80058078: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x8005807C: sw          $t8, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r24;
    // 0x80058080: b           L_80058090
    // 0x80058084: sw          $v0, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r2;
        goto L_80058090;
    // 0x80058084: sw          $v0, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r2;
L_80058088:
    // 0x80058088: sw          $a1, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r5;
    // 0x8005808C: sw          $a1, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->r5;
L_80058090:
    // 0x80058090: lw          $t9, 0x0($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X0);
    // 0x80058094: nop

    // 0x80058098: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8005809C: lw          $t6, 0x0($t0)
    ctx->r14 = MEM_W(ctx->r8, 0X0);
    // 0x800580A0: nop

    // 0x800580A4: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x800580A8: lw          $t7, 0x8($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X8);
    // 0x800580AC: nop

    // 0x800580B0: sw          $t7, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r15;
    // 0x800580B4: lw          $t8, 0xC($t0)
    ctx->r24 = MEM_W(ctx->r8, 0XC);
    // 0x800580B8: b           L_800581F8
    // 0x800580BC: sw          $t8, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r24;
        goto L_800581F8;
    // 0x800580BC: sw          $t8, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r24;
L_800580C0:
    // 0x800580C0: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x800580C4: lw          $a2, 0x8($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X8);
    // 0x800580C8: addiu       $v0, $v0, -0x6C30
    ctx->r2 = ADD32(ctx->r2, -0X6C30);
    // 0x800580CC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x800580D0: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x800580D4: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
L_800580D8:
    // 0x800580D8: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x800580DC: nop

    // 0x800580E0: beq         $a1, $t9, L_80058100
    if (ctx->r5 == ctx->r25) {
        // 0x800580E4: nop
    
            goto L_80058100;
    }
    // 0x800580E4: nop

    // 0x800580E8: lw          $t6, 0x8($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X8);
    // 0x800580EC: nop

    // 0x800580F0: bne         $a2, $t6, L_80058100
    if (ctx->r6 != ctx->r14) {
        // 0x800580F4: nop
    
            goto L_80058100;
    }
    // 0x800580F4: nop

    // 0x800580F8: b           L_80058110
    // 0x800580FC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_80058110;
    // 0x800580FC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80058100:
    // 0x80058100: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80058104: bne         $v1, $a0, L_800580D8
    if (ctx->r3 != ctx->r4) {
        // 0x80058108: addiu       $v0, $v0, 0x18
        ctx->r2 = ADD32(ctx->r2, 0X18);
            goto L_800580D8;
    }
    // 0x80058108: addiu       $v0, $v0, 0x18
    ctx->r2 = ADD32(ctx->r2, 0X18);
    // 0x8005810C: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
L_80058110:
    // 0x80058110: beq         $v0, $a1, L_80058130
    if (ctx->r2 == ctx->r5) {
        // 0x80058114: addiu       $v1, $zero, -0x1
        ctx->r3 = ADD32(0, -0X1);
            goto L_80058130;
    }
    // 0x80058114: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x80058118: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x8005811C: subu        $t7, $t7, $v0
    ctx->r15 = SUB32(ctx->r15, ctx->r2);
    // 0x80058120: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x80058124: addiu       $t8, $t8, -0x6C30
    ctx->r24 = ADD32(ctx->r24, -0X6C30);
    // 0x80058128: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8005812C: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
L_80058130:
    // 0x80058130: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x80058134: lw          $t9, 0x4($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X4);
    // 0x80058138: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x8005813C: beq         $a1, $t9, L_80058164
    if (ctx->r5 == ctx->r25) {
        // 0x80058140: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_80058164;
    }
    // 0x80058140: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x80058144: lw          $a0, 0x4($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X4);
    // 0x80058148: sw          $t1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r9;
    // 0x8005814C: jal         0x800075A0
    // 0x80058150: sw          $a3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r7;
    func_800075A0(rdram, ctx);
        goto after_4;
    // 0x80058150: sw          $a3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r7;
    after_4:
    // 0x80058154: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x80058158: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x8005815C: nop

    // 0x80058160: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
L_80058164:
    // 0x80058164: jal         0x80051418
    // 0x80058168: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    func_80051418(rdram, ctx);
        goto after_5;
    // 0x80058168: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    after_5:
    // 0x8005816C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80058170: jal         0x80057C40
    // 0x80058174: nop

    func_80057C40(rdram, ctx);
        goto after_6;
    // 0x80058174: nop

    after_6:
    // 0x80058178: b           L_800581FC
    // 0x8005817C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800581FC;
    // 0x8005817C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80058180:
    // 0x80058180: lw          $v0, 0x8($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X8);
    // 0x80058184: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x80058188: beq         $v0, $a1, L_800581F8
    if (ctx->r2 == ctx->r5) {
        // 0x8005818C: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_800581F8;
    }
    // 0x8005818C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x80058190: jal         0x80051418
    // 0x80058194: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    func_80051418(rdram, ctx);
        goto after_7;
    // 0x80058194: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    after_7:
    // 0x80058198: b           L_800581FC
    // 0x8005819C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800581FC;
    // 0x8005819C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800581A0:
    // 0x800581A0: lw          $a2, 0xC($t1)
    ctx->r6 = MEM_W(ctx->r9, 0XC);
    // 0x800581A4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x800581A8: lw          $a1, 0x8($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X8);
    // 0x800581AC: nop

    // 0x800581B0: beq         $a1, $zero, L_800581DC
    if (ctx->r5 == 0) {
        // 0x800581B4: nop
    
            goto L_800581DC;
    }
    // 0x800581B4: nop

    // 0x800581B8: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x800581BC: addiu       $a0, $a0, 0x5FA0
    ctx->r4 = ADD32(ctx->r4, 0X5FA0);
    // 0x800581C0: jal         0x80000FA0
    // 0x800581C4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    osSyncPrintf(rdram, ctx);
        goto after_8;
    // 0x800581C4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_8:
    // 0x800581C8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800581CC: jal         0x80057650
    // 0x800581D0: nop

    func_80057650(rdram, ctx);
        goto after_9;
    // 0x800581D0: nop

    after_9:
    // 0x800581D4: b           L_800581FC
    // 0x800581D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800581FC;
    // 0x800581D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800581DC:
    // 0x800581DC: jal         0x80051418
    // 0x800581E0: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    func_80051418(rdram, ctx);
        goto after_10;
    // 0x800581E0: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    after_10:
    // 0x800581E4: b           L_800581FC
    // 0x800581E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800581FC;
    // 0x800581E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800581EC:
    // 0x800581EC: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x800581F0: jal         0x80051418
    // 0x800581F4: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    func_80051418(rdram, ctx);
        goto after_11;
    // 0x800581F4: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    after_11:
L_800581F8:
    // 0x800581F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800581FC:
    // 0x800581FC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80058200: jr          $ra
    // 0x80058204: nop

    return;
    // 0x80058204: nop

    // 0x80058208: jr          $ra
    // 0x8005820C: nop

    return;
    // 0x8005820C: nop

    // 0x80058210: jr          $ra
    // 0x80058214: nop

    return;
    // 0x80058214: nop

    // 0x80058218: jr          $ra
    // 0x8005821C: nop

    return;
    // 0x8005821C: nop

    // 0x80058220: jr          $ra
    // 0x80058224: nop

    return;
    // 0x80058224: nop

    // 0x80058228: jr          $ra
    // 0x8005822C: nop

    return;
    // 0x8005822C: nop

;}
RECOMP_FUNC void func_80058230(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80058230: addiu       $sp, $sp, -0x270
    ctx->r29 = ADD32(ctx->r29, -0X270);
    // 0x80058234: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80058238: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x8005823C: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80058240: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80058244: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x80058248: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x8005824C: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80058250: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x80058254: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80058258: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8005825C: lw          $t6, 0x4($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X4);
    // 0x80058260: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x80058264: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80058268: sltiu       $at, $t7, 0x2B
    ctx->r1 = ctx->r15 < 0X2B ? 1 : 0;
    // 0x8005826C: beq         $at, $zero, L_80058F98
    if (ctx->r1 == 0) {
        // 0x80058270: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_80058F98;
    }
    // 0x80058270: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80058274: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80058278: addu        $at, $at, $t7
    gpr jr_addend_80058284 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8005827C: lw          $t7, 0x60B4($at)
    ctx->r15 = ADD32(ctx->r1, 0X60B4);
    // 0x80058280: nop

    // 0x80058284: jr          $t7
    // 0x80058288: nop

    switch (jr_addend_80058284 >> 2) {
        case 0: goto L_8005828C; break;
        case 1: goto L_800582C8; break;
        case 2: goto L_80058380; break;
        case 3: goto L_800584EC; break;
        case 4: goto L_800582D8; break;
        case 5: goto L_800582FC; break;
        case 6: goto L_800583B4; break;
        case 7: goto L_80058560; break;
        case 8: goto L_80058580; break;
        case 9: goto L_8005860C; break;
        case 10: goto L_80058404; break;
        case 11: goto L_8005867C; break;
        case 12: goto L_800583D8; break;
        case 13: goto L_800584D8; break;
        case 14: goto L_80058700; break;
        case 15: goto L_800583EC; break;
        case 16: goto L_80058714; break;
        case 17: goto L_80058728; break;
        case 18: goto L_8005873C; break;
        case 19: goto L_80058A30; break;
        case 20: goto L_800587AC; break;
        case 21: goto L_80058760; break;
        case 22: goto L_80058798; break;
        case 23: goto L_800589FC; break;
        case 24: goto L_80058628; break;
        case 25: goto L_80058A60; break;
        case 26: goto L_80058A80; break;
        case 27: goto L_80058A94; break;
        case 28: goto L_80058AEC; break;
        case 29: goto L_80058B04; break;
        case 30: goto L_80058B34; break;
        case 31: goto L_80058B50; break;
        case 32: goto L_80058DFC; break;
        case 33: goto L_80058EB0; break;
        case 34: goto L_80058358; break;
        case 35: goto L_80058644; break;
        case 36: goto L_8005877C; break;
        case 37: goto L_80058968; break;
        case 38: goto L_800589C0; break;
        case 39: goto L_800587C8; break;
        case 40: goto L_800587E4; break;
        case 41: goto L_80058660; break;
        case 42: goto L_80058F98; break;
        default: switch_error(__func__, 0x80058284, 0x800960B4);
    }
    // 0x80058288: nop

L_8005828C:
    // 0x8005828C: lw          $v1, 0x8($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X8);
    // 0x80058290: lw          $v0, 0xC($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XC);
    // 0x80058294: bne         $a0, $zero, L_800582B4
    if (ctx->r4 != 0) {
        // 0x80058298: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_800582B4;
    }
    // 0x80058298: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8005829C: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x800582A0: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x800582A4: jal         0x800306CC
    // 0x800582A8: nop

    func_800306CC(rdram, ctx);
        goto after_0;
    // 0x800582A8: nop

    after_0:
    // 0x800582AC: b           L_80058F9C
    // 0x800582B0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80058F9C;
    // 0x800582B0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_800582B4:
    // 0x800582B4: lw          $a0, 0x8($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X8);
    // 0x800582B8: jal         0x8004A0A0
    // 0x800582BC: addiu       $a2, $sp, 0x240
    ctx->r6 = ADD32(ctx->r29, 0X240);
    func_8004A0A0(rdram, ctx);
        goto after_1;
    // 0x800582BC: addiu       $a2, $sp, 0x240
    ctx->r6 = ADD32(ctx->r29, 0X240);
    after_1:
    // 0x800582C0: b           L_80058F9C
    // 0x800582C4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80058F9C;
    // 0x800582C4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_800582C8:
    // 0x800582C8: jal         0x80030650
    // 0x800582CC: nop

    func_80030650(rdram, ctx);
        goto after_2;
    // 0x800582CC: nop

    after_2:
    // 0x800582D0: b           L_80058F9C
    // 0x800582D4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80058F9C;
    // 0x800582D4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_800582D8:
    // 0x800582D8: lw          $v0, 0x8($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X8);
    // 0x800582DC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x800582E0: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x800582E4: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x800582E8: sw          $a2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r6;
    // 0x800582EC: sw          $a2, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r6;
    // 0x800582F0: sw          $a2, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r6;
    // 0x800582F4: b           L_80058F98
    // 0x800582F8: sw          $t8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r24;
        goto L_80058F98;
    // 0x800582F8: sw          $t8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r24;
L_800582FC:
    // 0x800582FC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80058300: lw          $v0, 0xC($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XC);
    // 0x80058304: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80058308: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8005830C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80058310: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    // 0x80058314: swc1        $f0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
    // 0x80058318: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
    // 0x8005831C: swc1        $f0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f0.u32l;
    // 0x80058320: swc1        $f0, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f0.u32l;
    // 0x80058324: lwc1        $f4, 0x6160($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6160);
    // 0x80058328: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8005832C: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x80058330: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x80058334: swc1        $f0, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f0.u32l;
    // 0x80058338: swc1        $f0, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f0.u32l;
    // 0x8005833C: swc1        $f0, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->f0.u32l;
    // 0x80058340: swc1        $f0, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->f0.u32l;
    // 0x80058344: sw          $t9, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->r25;
    // 0x80058348: sw          $zero, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = 0;
    // 0x8005834C: swc1        $f2, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f2.u32l;
    // 0x80058350: b           L_80058F98
    // 0x80058354: swc1        $f4, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f4.u32l;
        goto L_80058F98;
    // 0x80058354: swc1        $f4, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f4.u32l;
L_80058358:
    // 0x80058358: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8005835C: lw          $v0, 0xC($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XC);
    // 0x80058360: nop

    // 0x80058364: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    // 0x80058368: swc1        $f0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
    // 0x8005836C: swc1        $f0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f0.u32l;
    // 0x80058370: swc1        $f0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f0.u32l;
    // 0x80058374: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
    // 0x80058378: b           L_80058F98
    // 0x8005837C: swc1        $f0, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f0.u32l;
        goto L_80058F98;
    // 0x8005837C: swc1        $f0, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f0.u32l;
L_80058380:
    // 0x80058380: lw          $v0, 0xC($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XC);
    // 0x80058384: addiu       $t7, $zero, 0xC
    ctx->r15 = ADD32(0, 0XC);
    // 0x80058388: lw          $t6, 0x8($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X8);
    // 0x8005838C: ori         $t8, $zero, 0xFFFF
    ctx->r24 = 0 | 0XFFFF;
    // 0x80058390: sw          $t7, 0x214($sp)
    MEM_W(0X214, ctx->r29) = ctx->r15;
    // 0x80058394: sw          $t8, 0x21C($sp)
    MEM_W(0X21C, ctx->r29) = ctx->r24;
    // 0x80058398: sw          $v0, 0x218($sp)
    MEM_W(0X218, ctx->r29) = ctx->r2;
    // 0x8005839C: sw          $t6, 0x210($sp)
    MEM_W(0X210, ctx->r29) = ctx->r14;
    // 0x800583A0: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x800583A4: jal         0x80057CA0
    // 0x800583A8: addiu       $a1, $sp, 0x210
    ctx->r5 = ADD32(ctx->r29, 0X210);
    func_80057CA0(rdram, ctx);
        goto after_3;
    // 0x800583A8: addiu       $a1, $sp, 0x210
    ctx->r5 = ADD32(ctx->r29, 0X210);
    after_3:
    // 0x800583AC: b           L_80058F9C
    // 0x800583B0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80058F9C;
    // 0x800583B0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_800583B4:
    // 0x800583B4: lw          $v0, 0xC($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XC);
    // 0x800583B8: nop

    // 0x800583BC: lwc1        $f12, 0x0($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X0);
    // 0x800583C0: lwc1        $f14, 0x8($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X8);
    // 0x800583C4: jal         0x80056D10
    // 0x800583C8: sw          $v0, 0x208($sp)
    MEM_W(0X208, ctx->r29) = ctx->r2;
    func_80056D10(rdram, ctx);
        goto after_4;
    // 0x800583C8: sw          $v0, 0x208($sp)
    MEM_W(0X208, ctx->r29) = ctx->r2;
    after_4:
    // 0x800583CC: lw          $v0, 0x208($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X208);
    // 0x800583D0: b           L_80058F98
    // 0x800583D4: swc1        $f0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
        goto L_80058F98;
    // 0x800583D4: swc1        $f0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
L_800583D8:
    // 0x800583D8: lw          $s0, 0xC($a3)
    ctx->r16 = MEM_W(ctx->r7, 0XC);
    // 0x800583DC: jal         0x80057558
    // 0x800583E0: nop

    func_80057558(rdram, ctx);
        goto after_5;
    // 0x800583E0: nop

    after_5:
    // 0x800583E4: b           L_80058F9C
    // 0x800583E8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80058F9C;
    // 0x800583E8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_800583EC:
    // 0x800583EC: lw          $a0, 0xC($a3)
    ctx->r4 = MEM_W(ctx->r7, 0XC);
    // 0x800583F0: jal         0x80057BF8
    // 0x800583F4: sw          $a0, 0x26C($sp)
    MEM_W(0X26C, ctx->r29) = ctx->r4;
    func_80057BF8(rdram, ctx);
        goto after_6;
    // 0x800583F4: sw          $a0, 0x26C($sp)
    MEM_W(0X26C, ctx->r29) = ctx->r4;
    after_6:
    // 0x800583F8: lw          $a0, 0x26C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X26C);
    // 0x800583FC: b           L_80058F98
    // 0x80058400: swc1        $f0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f0.u32l;
        goto L_80058F98;
    // 0x80058400: swc1        $f0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f0.u32l;
L_80058404:
    // 0x80058404: lw          $t9, 0xC($a3)
    ctx->r25 = MEM_W(ctx->r7, 0XC);
    // 0x80058408: addiu       $s0, $sp, 0x1F4
    ctx->r16 = ADD32(ctx->r29, 0X1F4);
    // 0x8005840C: jal         0x80057B94
    // 0x80058410: sw          $t9, 0x200($sp)
    MEM_W(0X200, ctx->r29) = ctx->r25;
    func_80057B94(rdram, ctx);
        goto after_7;
    // 0x80058410: sw          $t9, 0x200($sp)
    MEM_W(0X200, ctx->r29) = ctx->r25;
    after_7:
    // 0x80058414: lw          $v0, 0x200($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X200);
    // 0x80058418: nop

    // 0x8005841C: lwc1        $f12, 0x0($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80058420: lwc1        $f14, 0x8($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80058424: jal         0x80056D10
    // 0x80058428: nop

    func_80056D10(rdram, ctx);
        goto after_8;
    // 0x80058428: nop

    after_8:
    // 0x8005842C: lwc1        $f6, 0x1F4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1F4);
    // 0x80058430: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80058434: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80058438: add.s       $f2, $f0, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f6.fl;
    // 0x8005843C: lw          $v0, 0x200($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X200);
    // 0x80058440: c.le.s      $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f14.fl <= ctx->f2.fl;
    // 0x80058444: mov.s       $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    ctx->f12.fl = ctx->f2.fl;
    // 0x80058448: bc1f        L_80058458
    if (!c1cs) {
        // 0x8005844C: nop
    
            goto L_80058458;
    }
    // 0x8005844C: nop

    // 0x80058450: b           L_80058474
    // 0x80058454: sub.s       $f12, $f2, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = ctx->f2.fl - ctx->f14.fl;
        goto L_80058474;
    // 0x80058454: sub.s       $f12, $f2, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = ctx->f2.fl - ctx->f14.fl;
L_80058458:
    // 0x80058458: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8005845C: nop

    // 0x80058460: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x80058464: nop

    // 0x80058468: bc1f        L_80058474
    if (!c1cs) {
        // 0x8005846C: nop
    
            goto L_80058474;
    }
    // 0x8005846C: nop

    // 0x80058470: add.s       $f12, $f2, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = ctx->f2.fl + ctx->f14.fl;
L_80058474:
    // 0x80058474: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80058478: lwc1        $f2, 0x8($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8005847C: nop

    // 0x80058480: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x80058484: nop

    // 0x80058488: bc1f        L_8005849C
    if (!c1cs) {
        // 0x8005848C: nop
    
            goto L_8005849C;
    }
    // 0x8005848C: nop

    // 0x80058490: sub.s       $f14, $f0, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x80058494: b           L_800584A0
    // 0x80058498: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
        goto L_800584A0;
    // 0x80058498: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
L_8005849C:
    // 0x8005849C: sub.s       $f14, $f0, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = ctx->f0.fl - ctx->f2.fl;
L_800584A0:
    // 0x800584A0: swc1        $f12, 0x1F0($sp)
    MEM_W(0X1F0, ctx->r29) = ctx->f12.u32l;
    // 0x800584A4: jal         0x80028C2C
    // 0x800584A8: swc1        $f14, 0x1EC($sp)
    MEM_W(0X1EC, ctx->r29) = ctx->f14.u32l;
    func_80028C2C(rdram, ctx);
        goto after_9;
    // 0x800584A8: swc1        $f14, 0x1EC($sp)
    MEM_W(0X1EC, ctx->r29) = ctx->f14.u32l;
    after_9:
    // 0x800584AC: lwc1        $f14, 0x1EC($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X1EC);
    // 0x800584B0: lw          $t6, 0x200($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X200);
    // 0x800584B4: mul.s       $f8, $f0, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f14.fl);
    // 0x800584B8: lwc1        $f12, 0x1F0($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1F0);
    // 0x800584BC: jal         0x80028C00
    // 0x800584C0: swc1        $f8, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f8.u32l;
    func_80028C00(rdram, ctx);
        goto after_10;
    // 0x800584C0: swc1        $f8, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f8.u32l;
    after_10:
    // 0x800584C4: lwc1        $f14, 0x1EC($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X1EC);
    // 0x800584C8: lw          $t7, 0x200($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X200);
    // 0x800584CC: mul.s       $f10, $f0, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f14.fl);
    // 0x800584D0: b           L_80058F98
    // 0x800584D4: swc1        $f10, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->f10.u32l;
        goto L_80058F98;
    // 0x800584D4: swc1        $f10, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->f10.u32l;
L_800584D8:
    // 0x800584D8: lw          $s0, 0xC($a3)
    ctx->r16 = MEM_W(ctx->r7, 0XC);
    // 0x800584DC: jal         0x80057B94
    // 0x800584E0: nop

    func_80057B94(rdram, ctx);
        goto after_11;
    // 0x800584E0: nop

    after_11:
    // 0x800584E4: b           L_80058F9C
    // 0x800584E8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80058F9C;
    // 0x800584E8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_800584EC:
    // 0x800584EC: lw          $a2, 0xC($a3)
    ctx->r6 = MEM_W(ctx->r7, 0XC);
    // 0x800584F0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800584F4: lw          $t8, 0x4($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X4);
    // 0x800584F8: lw          $v0, 0x8($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X8);
    // 0x800584FC: beq         $t8, $at, L_80058F9C
    if (ctx->r24 == ctx->r1) {
        // 0x80058500: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_80058F9C;
    }
    // 0x80058500: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80058504: lw          $t9, 0x8($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X8);
    // 0x80058508: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8005850C: sw          $t9, -0x290C($at)
    MEM_W(-0X290C, ctx->r1) = ctx->r25;
    // 0x80058510: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x80058514: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80058518: beq         $v1, $zero, L_80058530
    if (ctx->r3 == 0) {
        // 0x8005851C: nop
    
            goto L_80058530;
    }
    // 0x8005851C: nop

    // 0x80058520: beq         $v1, $at, L_80058548
    if (ctx->r3 == ctx->r1) {
        // 0x80058524: nop
    
            goto L_80058548;
    }
    // 0x80058524: nop

    // 0x80058528: b           L_80058F9C
    // 0x8005852C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80058F9C;
    // 0x8005852C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80058530:
    // 0x80058530: lw          $t9, 0x4($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X4);
    // 0x80058534: lw          $a0, 0x8($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X8);
    // 0x80058538: jalr        $t9
    // 0x8005853C: addiu       $a1, $a2, 0x10
    ctx->r5 = ADD32(ctx->r6, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x8005853C: addiu       $a1, $a2, 0x10
    ctx->r5 = ADD32(ctx->r6, 0X10);
    after_12:
    // 0x80058540: b           L_80058F9C
    // 0x80058544: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80058F9C;
    // 0x80058544: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80058548:
    // 0x80058548: lw          $t9, 0x4($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X4);
    // 0x8005854C: lw          $a0, 0x8($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X8);
    // 0x80058550: jalr        $t9
    // 0x80058554: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x80058554: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_13:
    // 0x80058558: b           L_80058F9C
    // 0x8005855C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80058F9C;
    // 0x8005855C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80058560:
    // 0x80058560: lw          $v0, 0xC($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XC);
    // 0x80058564: nop

    // 0x80058568: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x8005856C: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x80058570: jal         0x80057960
    // 0x80058574: nop

    func_80057960(rdram, ctx);
        goto after_14;
    // 0x80058574: nop

    after_14:
    // 0x80058578: b           L_80058F9C
    // 0x8005857C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80058F9C;
    // 0x8005857C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80058580:
    // 0x80058580: lw          $v0, 0xC($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XC);
    // 0x80058584: nop

    // 0x80058588: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8005858C: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x80058590: lw          $a2, 0x10($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X10);
    // 0x80058594: swc1        $f4, 0x1C0($sp)
    MEM_W(0X1C0, ctx->r29) = ctx->f4.u32l;
    // 0x80058598: lwc1        $f6, 0x8($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8005859C: addiu       $t0, $v0, 0x4
    ctx->r8 = ADD32(ctx->r2, 0X4);
    // 0x800585A0: swc1        $f6, 0x1C4($sp)
    MEM_W(0X1C4, ctx->r29) = ctx->f6.u32l;
    // 0x800585A4: lwc1        $f8, 0xC($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0XC);
    // 0x800585A8: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x800585AC: swc1        $f8, 0x1C8($sp)
    MEM_W(0X1C8, ctx->r29) = ctx->f8.u32l;
    // 0x800585B0: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    // 0x800585B4: jal         0x800400DC
    // 0x800585B8: sw          $t0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r8;
    func_800400DC(rdram, ctx);
        goto after_15;
    // 0x800585B8: sw          $t0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r8;
    after_15:
    // 0x800585BC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800585C0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x800585C4: lwc1        $f10, 0x1C0($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1C0);
    // 0x800585C8: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800585CC: c.eq.s      $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f10.fl == ctx->f2.fl;
    // 0x800585D0: lwc1        $f4, 0x1C4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C4);
    // 0x800585D4: bc1f        L_800585FC
    if (!c1cs) {
        // 0x800585D8: or          $a0, $t0, $zero
        ctx->r4 = ctx->r8 | 0;
            goto L_800585FC;
    }
    // 0x800585D8: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x800585DC: c.eq.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl == ctx->f2.fl;
    // 0x800585E0: lwc1        $f6, 0x1C8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C8);
    // 0x800585E4: bc1f        L_800585FC
    if (!c1cs) {
        // 0x800585E8: nop
    
            goto L_800585FC;
    }
    // 0x800585E8: nop

    // 0x800585EC: c.eq.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl == ctx->f2.fl;
    // 0x800585F0: nop

    // 0x800585F4: bc1t        L_80058F9C
    if (c1cs) {
        // 0x800585F8: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_80058F9C;
    }
    // 0x800585F8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_800585FC:
    // 0x800585FC: jal         0x8003F5C0
    // 0x80058600: addiu       $a1, $sp, 0x1C0
    ctx->r5 = ADD32(ctx->r29, 0X1C0);
    func_8003F5C0(rdram, ctx);
        goto after_16;
    // 0x80058600: addiu       $a1, $sp, 0x1C0
    ctx->r5 = ADD32(ctx->r29, 0X1C0);
    after_16:
    // 0x80058604: b           L_80058F9C
    // 0x80058608: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80058F9C;
    // 0x80058608: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_8005860C:
    // 0x8005860C: lw          $v0, 0xC($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XC);
    // 0x80058610: nop

    // 0x80058614: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x80058618: jal         0x8003F8E0
    // 0x8005861C: addiu       $a1, $v0, 0x4
    ctx->r5 = ADD32(ctx->r2, 0X4);
    func_8003F8E0(rdram, ctx);
        goto after_17;
    // 0x8005861C: addiu       $a1, $v0, 0x4
    ctx->r5 = ADD32(ctx->r2, 0X4);
    after_17:
    // 0x80058620: b           L_80058F9C
    // 0x80058624: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80058F9C;
    // 0x80058624: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80058628:
    // 0x80058628: lw          $v0, 0xC($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XC);
    // 0x8005862C: nop

    // 0x80058630: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x80058634: jal         0x8003F740
    // 0x80058638: addiu       $a1, $v0, 0x4
    ctx->r5 = ADD32(ctx->r2, 0X4);
    func_8003F740(rdram, ctx);
        goto after_18;
    // 0x80058638: addiu       $a1, $v0, 0x4
    ctx->r5 = ADD32(ctx->r2, 0X4);
    after_18:
    // 0x8005863C: b           L_80058F9C
    // 0x80058640: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80058F9C;
    // 0x80058640: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80058644:
    // 0x80058644: lw          $v0, 0xC($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XC);
    // 0x80058648: nop

    // 0x8005864C: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x80058650: jal         0x8003F398
    // 0x80058654: addiu       $a1, $v0, 0x4
    ctx->r5 = ADD32(ctx->r2, 0X4);
    func_8003F398(rdram, ctx);
        goto after_19;
    // 0x80058654: addiu       $a1, $v0, 0x4
    ctx->r5 = ADD32(ctx->r2, 0X4);
    after_19:
    // 0x80058658: b           L_80058F9C
    // 0x8005865C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80058F9C;
    // 0x8005865C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80058660:
    // 0x80058660: lw          $v0, 0xC($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XC);
    // 0x80058664: nop

    // 0x80058668: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x8005866C: jal         0x8003F5C0
    // 0x80058670: addiu       $a1, $v0, 0x4
    ctx->r5 = ADD32(ctx->r2, 0X4);
    func_8003F5C0(rdram, ctx);
        goto after_20;
    // 0x80058670: addiu       $a1, $v0, 0x4
    ctx->r5 = ADD32(ctx->r2, 0X4);
    after_20:
    // 0x80058674: b           L_80058F9C
    // 0x80058678: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80058F9C;
    // 0x80058678: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_8005867C:
    // 0x8005867C: lw          $a1, 0x8($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X8);
    // 0x80058680: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x80058684: lw          $a0, 0x8($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X8);
    // 0x80058688: lw          $t0, 0xC($a3)
    ctx->r8 = MEM_W(ctx->r7, 0XC);
    // 0x8005868C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x80058690: addiu       $v0, $v0, -0x6C30
    ctx->r2 = ADD32(ctx->r2, -0X6C30);
    // 0x80058694: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80058698: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
L_8005869C:
    // 0x8005869C: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x800586A0: nop

    // 0x800586A4: beq         $a2, $t6, L_800586C4
    if (ctx->r6 == ctx->r14) {
        // 0x800586A8: nop
    
            goto L_800586C4;
    }
    // 0x800586A8: nop

    // 0x800586AC: lw          $t7, 0x8($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X8);
    // 0x800586B0: nop

    // 0x800586B4: bne         $a0, $t7, L_800586C4
    if (ctx->r4 != ctx->r15) {
        // 0x800586B8: nop
    
            goto L_800586C4;
    }
    // 0x800586B8: nop

    // 0x800586BC: b           L_800586D4
    // 0x800586C0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_800586D4;
    // 0x800586C0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_800586C4:
    // 0x800586C4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800586C8: bne         $v1, $a1, L_8005869C
    if (ctx->r3 != ctx->r5) {
        // 0x800586CC: addiu       $v0, $v0, 0x18
        ctx->r2 = ADD32(ctx->r2, 0X18);
            goto L_8005869C;
    }
    // 0x800586CC: addiu       $v0, $v0, 0x18
    ctx->r2 = ADD32(ctx->r2, 0X18);
    // 0x800586D0: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
L_800586D4:
    // 0x800586D4: beq         $v0, $a2, L_800586F4
    if (ctx->r2 == ctx->r6) {
        // 0x800586D8: addiu       $v1, $zero, -0x1
        ctx->r3 = ADD32(0, -0X1);
            goto L_800586F4;
    }
    // 0x800586D8: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x800586DC: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x800586E0: subu        $t8, $t8, $v0
    ctx->r24 = SUB32(ctx->r24, ctx->r2);
    // 0x800586E4: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x800586E8: addiu       $t9, $t9, -0x6C30
    ctx->r25 = ADD32(ctx->r25, -0X6C30);
    // 0x800586EC: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x800586F0: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
L_800586F4:
    // 0x800586F4: addiu       $t6, $v1, 0x14
    ctx->r14 = ADD32(ctx->r3, 0X14);
    // 0x800586F8: b           L_80058F98
    // 0x800586FC: sw          $t6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r14;
        goto L_80058F98;
    // 0x800586FC: sw          $t6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r14;
L_80058700:
    // 0x80058700: lw          $a0, 0xC($a3)
    ctx->r4 = MEM_W(ctx->r7, 0XC);
    // 0x80058704: jal         0x80057800
    // 0x80058708: nop

    func_80057800(rdram, ctx);
        goto after_21;
    // 0x80058708: nop

    after_21:
    // 0x8005870C: b           L_80058F9C
    // 0x80058710: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80058F9C;
    // 0x80058710: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80058714:
    // 0x80058714: lw          $a0, 0xC($a3)
    ctx->r4 = MEM_W(ctx->r7, 0XC);
    // 0x80058718: jal         0x80057650
    // 0x8005871C: nop

    func_80057650(rdram, ctx);
        goto after_22;
    // 0x8005871C: nop

    after_22:
    // 0x80058720: b           L_80058F9C
    // 0x80058724: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80058F9C;
    // 0x80058724: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80058728:
    // 0x80058728: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x8005872C: lw          $t7, -0x290C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X290C);
    // 0x80058730: lw          $v0, 0xC($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XC);
    // 0x80058734: b           L_80058F98
    // 0x80058738: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
        goto L_80058F98;
    // 0x80058738: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
L_8005873C:
    // 0x8005873C: lw          $v1, 0xC($a3)
    ctx->r3 = MEM_W(ctx->r7, 0XC);
    // 0x80058740: nop

    // 0x80058744: lw          $a0, 0x4($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X4);
    // 0x80058748: sw          $v1, 0x170($sp)
    MEM_W(0X170, ctx->r29) = ctx->r3;
    // 0x8005874C: jal         0x8005D1B4
    // 0x80058750: addiu       $a1, $v1, 0x8
    ctx->r5 = ADD32(ctx->r3, 0X8);
    func_8005D1B4(rdram, ctx);
        goto after_23;
    // 0x80058750: addiu       $a1, $v1, 0x8
    ctx->r5 = ADD32(ctx->r3, 0X8);
    after_23:
    // 0x80058754: lw          $v1, 0x170($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X170);
    // 0x80058758: b           L_80058F98
    // 0x8005875C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
        goto L_80058F98;
    // 0x8005875C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_80058760:
    // 0x80058760: lw          $v0, 0xC($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XC);
    // 0x80058764: nop

    // 0x80058768: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x8005876C: jal         0x8005CFA4
    // 0x80058770: addiu       $a1, $v0, 0x8
    ctx->r5 = ADD32(ctx->r2, 0X8);
    func_8005CFA4(rdram, ctx);
        goto after_24;
    // 0x80058770: addiu       $a1, $v0, 0x8
    ctx->r5 = ADD32(ctx->r2, 0X8);
    after_24:
    // 0x80058774: b           L_80058F9C
    // 0x80058778: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80058F9C;
    // 0x80058778: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_8005877C:
    // 0x8005877C: lw          $v0, 0xC($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XC);
    // 0x80058780: nop

    // 0x80058784: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x80058788: jal         0x8005CE9C
    // 0x8005878C: addiu       $a1, $v0, 0x8
    ctx->r5 = ADD32(ctx->r2, 0X8);
    func_8005CE9C(rdram, ctx);
        goto after_25;
    // 0x8005878C: addiu       $a1, $v0, 0x8
    ctx->r5 = ADD32(ctx->r2, 0X8);
    after_25:
    // 0x80058790: b           L_80058F9C
    // 0x80058794: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80058F9C;
    // 0x80058794: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80058798:
    // 0x80058798: lw          $a0, 0xC($a3)
    ctx->r4 = MEM_W(ctx->r7, 0XC);
    // 0x8005879C: jal         0x8005D128
    // 0x800587A0: nop

    func_8005D128(rdram, ctx);
        goto after_26;
    // 0x800587A0: nop

    after_26:
    // 0x800587A4: b           L_80058F9C
    // 0x800587A8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80058F9C;
    // 0x800587A8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_800587AC:
    // 0x800587AC: lw          $v0, 0xC($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XC);
    // 0x800587B0: nop

    // 0x800587B4: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x800587B8: jal         0x8005CF20
    // 0x800587BC: addiu       $a1, $v0, 0x8
    ctx->r5 = ADD32(ctx->r2, 0X8);
    func_8005CF20(rdram, ctx);
        goto after_27;
    // 0x800587BC: addiu       $a1, $v0, 0x8
    ctx->r5 = ADD32(ctx->r2, 0X8);
    after_27:
    // 0x800587C0: b           L_80058F9C
    // 0x800587C4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80058F9C;
    // 0x800587C4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_800587C8:
    // 0x800587C8: lw          $v0, 0xC($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XC);
    // 0x800587CC: nop

    // 0x800587D0: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x800587D4: jal         0x8005CE3C
    // 0x800587D8: nop

    func_8005CE3C(rdram, ctx);
        goto after_28;
    // 0x800587D8: nop

    after_28:
    // 0x800587DC: b           L_80058F9C
    // 0x800587E0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80058F9C;
    // 0x800587E0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_800587E4:
    // 0x800587E4: lw          $v1, 0xC($a3)
    ctx->r3 = MEM_W(ctx->r7, 0XC);
    // 0x800587E8: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x800587EC: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x800587F0: addiu       $a2, $sp, 0x114
    ctx->r6 = ADD32(ctx->r29, 0X114);
    // 0x800587F4: jal         0x8004A0A0
    // 0x800587F8: sw          $v1, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->r3;
    func_8004A0A0(rdram, ctx);
        goto after_29;
    // 0x800587F8: sw          $v1, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->r3;
    after_29:
    // 0x800587FC: lwc1        $f8, 0x114($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X114);
    // 0x80058800: lw          $v1, 0x140($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X140);
    // 0x80058804: swc1        $f8, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f8.u32l;
    // 0x80058808: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8005880C: lwc1        $f10, 0x8($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80058810: addiu       $t8, $sp, 0x134
    ctx->r24 = ADD32(ctx->r29, 0X134);
    // 0x80058814: c.eq.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl == ctx->f10.fl;
    // 0x80058818: addiu       $s1, $sp, 0x108
    ctx->r17 = ADD32(ctx->r29, 0X108);
    // 0x8005881C: bc1t        L_80058864
    if (c1cs) {
        // 0x80058820: nop
    
            goto L_80058864;
    }
    // 0x80058820: nop

    // 0x80058824: swc1        $f8, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->f8.u32l;
    // 0x80058828: lwc1        $f4, 0x8($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X8);
    // 0x8005882C: sw          $t8, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->r24;
    // 0x80058830: swc1        $f0, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->f0.u32l;
    // 0x80058834: swc1        $f0, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->f0.u32l;
    // 0x80058838: swc1        $f0, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->f0.u32l;
    // 0x8005883C: sw          $v1, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->r3;
    // 0x80058840: jal         0x8005758C
    // 0x80058844: swc1        $f4, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f4.u32l;
    func_8005758C(rdram, ctx);
        goto after_30;
    // 0x80058844: swc1        $f4, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f4.u32l;
    after_30:
    // 0x80058848: lw          $v1, 0x140($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X140);
    // 0x8005884C: lwc1        $f6, 0x138($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X138);
    // 0x80058850: lwc1        $f10, 0xC($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0XC);
    // 0x80058854: nop

    // 0x80058858: add.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x8005885C: b           L_80058874
    // 0x80058860: swc1        $f8, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->f8.u32l;
        goto L_80058874;
    // 0x80058860: swc1        $f8, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->f8.u32l;
L_80058864:
    // 0x80058864: swc1        $f0, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->f0.u32l;
    // 0x80058868: lwc1        $f4, 0xC($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0XC);
    // 0x8005886C: swc1        $f0, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->f0.u32l;
    // 0x80058870: swc1        $f4, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->f4.u32l;
L_80058874:
    // 0x80058874: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x80058878: sw          $v1, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->r3;
    // 0x8005887C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80058880: jal         0x8004A0A0
    // 0x80058884: addiu       $a2, $sp, 0x114
    ctx->r6 = ADD32(ctx->r29, 0X114);
    func_8004A0A0(rdram, ctx);
        goto after_31;
    // 0x80058884: addiu       $a2, $sp, 0x114
    ctx->r6 = ADD32(ctx->r29, 0X114);
    after_31:
    // 0x80058888: lwc1        $f6, 0x134($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X134);
    // 0x8005888C: lwc1        $f10, 0x114($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X114);
    // 0x80058890: lw          $v1, 0x140($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X140);
    // 0x80058894: add.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x80058898: lwc1        $f6, 0x118($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X118);
    // 0x8005889C: lwc1        $f4, 0x138($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X138);
    // 0x800588A0: lw          $a0, 0x4($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X4);
    // 0x800588A4: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800588A8: swc1        $f8, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->f8.u32l;
    // 0x800588AC: lwc1        $f8, 0x13C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X13C);
    // 0x800588B0: lwc1        $f4, 0x11C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X11C);
    // 0x800588B4: swc1        $f10, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->f10.u32l;
    // 0x800588B8: add.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x800588BC: addiu       $a1, $sp, 0x134
    ctx->r5 = ADD32(ctx->r29, 0X134);
    // 0x800588C0: swc1        $f6, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->f6.u32l;
    // 0x800588C4: jal         0x8005D1B4
    // 0x800588C8: sw          $a0, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->r4;
    func_8005D1B4(rdram, ctx);
        goto after_32;
    // 0x800588C8: sw          $a0, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->r4;
    after_32:
    // 0x800588CC: lw          $v1, 0x140($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X140);
    // 0x800588D0: sw          $v0, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->r2;
    // 0x800588D4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800588D8: lwc1        $f2, 0x10($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X10);
    // 0x800588DC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800588E0: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
    // 0x800588E4: addiu       $a1, $sp, 0x134
    ctx->r5 = ADD32(ctx->r29, 0X134);
    // 0x800588E8: bc1t        L_80058960
    if (c1cs) {
        // 0x800588EC: lw          $t6, 0x12C($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X12C);
            goto L_80058960;
    }
    // 0x800588EC: lw          $t6, 0x12C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X12C);
    // 0x800588F0: lwc1        $f10, 0x6164($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X6164);
    // 0x800588F4: lwc1        $f8, 0x104($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X104);
    // 0x800588F8: c.eq.s      $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f10.fl == ctx->f2.fl;
    // 0x800588FC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80058900: bc1f        L_80058928
    if (!c1cs) {
        // 0x80058904: nop
    
            goto L_80058928;
    }
    // 0x80058904: nop

    // 0x80058908: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8005890C: lwc1        $f7, 0x6168($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X6168);
    // 0x80058910: lwc1        $f6, 0x616C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X616C);
    // 0x80058914: cvt.d.s     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f4.d = CVT_D_S(ctx->f8.fl);
    // 0x80058918: mul.d       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x8005891C: cvt.s.d     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f8.fl = CVT_S_D(ctx->f10.d);
    // 0x80058920: b           L_80058940
    // 0x80058924: swc1        $f8, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->f8.u32l;
        goto L_80058940;
    // 0x80058924: swc1        $f8, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->f8.u32l;
L_80058928:
    // 0x80058928: lwc1        $f7, 0x6170($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X6170);
    // 0x8005892C: lwc1        $f6, 0x6174($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6174);
    // 0x80058930: cvt.d.s     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f4.d = CVT_D_S(ctx->f2.fl);
    // 0x80058934: mul.d       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x80058938: cvt.s.d     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f8.fl = CVT_S_D(ctx->f10.d);
    // 0x8005893C: swc1        $f8, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->f8.u32l;
L_80058940:
    // 0x80058940: lw          $a0, 0x12C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X12C);
    // 0x80058944: swc1        $f0, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->f0.u32l;
    // 0x80058948: swc1        $f0, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->f0.u32l;
    // 0x8005894C: jal         0x8005CF20
    // 0x80058950: sw          $v1, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->r3;
    func_8005CF20(rdram, ctx);
        goto after_33;
    // 0x80058950: sw          $v1, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->r3;
    after_33:
    // 0x80058954: lw          $v1, 0x140($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X140);
    // 0x80058958: nop

    // 0x8005895C: lw          $t6, 0x12C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X12C);
L_80058960:
    // 0x80058960: b           L_80058F98
    // 0x80058964: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
        goto L_80058F98;
    // 0x80058964: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
L_80058968:
    // 0x80058968: lw          $v1, 0xC($a3)
    ctx->r3 = MEM_W(ctx->r7, 0XC);
    // 0x8005896C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80058970: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80058974: addiu       $a1, $v1, 0x8
    ctx->r5 = ADD32(ctx->r3, 0X8);
    // 0x80058978: beq         $v0, $zero, L_80058990
    if (ctx->r2 == 0) {
        // 0x8005897C: nop
    
            goto L_80058990;
    }
    // 0x8005897C: nop

    // 0x80058980: beq         $v0, $at, L_800589AC
    if (ctx->r2 == ctx->r1) {
        // 0x80058984: nop
    
            goto L_800589AC;
    }
    // 0x80058984: nop

    // 0x80058988: b           L_80058F9C
    // 0x8005898C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80058F9C;
    // 0x8005898C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80058990:
    // 0x80058990: lw          $a0, 0x4($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X4);
    // 0x80058994: lw          $a2, 0x14($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X14);
    // 0x80058998: jal         0x8005A8BC
    // 0x8005899C: sw          $v1, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->r3;
    func_8005A8BC(rdram, ctx);
        goto after_34;
    // 0x8005899C: sw          $v1, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->r3;
    after_34:
    // 0x800589A0: lw          $v1, 0xF0($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XF0);
    // 0x800589A4: b           L_80058F98
    // 0x800589A8: sw          $v0, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r2;
        goto L_80058F98;
    // 0x800589A8: sw          $v0, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r2;
L_800589AC:
    // 0x800589AC: lw          $a0, 0x4($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X4);
    // 0x800589B0: jal         0x8005A854
    // 0x800589B4: addiu       $a1, $v1, 0x8
    ctx->r5 = ADD32(ctx->r3, 0X8);
    func_8005A854(rdram, ctx);
        goto after_35;
    // 0x800589B4: addiu       $a1, $v1, 0x8
    ctx->r5 = ADD32(ctx->r3, 0X8);
    after_35:
    // 0x800589B8: b           L_80058F9C
    // 0x800589BC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80058F9C;
    // 0x800589BC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_800589C0:
    // 0x800589C0: lw          $a1, 0xC($a3)
    ctx->r5 = MEM_W(ctx->r7, 0XC);
    // 0x800589C4: addiu       $a2, $sp, 0xDC
    ctx->r6 = ADD32(ctx->r29, 0XDC);
    // 0x800589C8: addiu       $a0, $a1, 0xC
    ctx->r4 = ADD32(ctx->r5, 0XC);
    // 0x800589CC: jal         0x80050D10
    // 0x800589D0: sw          $a1, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r5;
    func_80050D10(rdram, ctx);
        goto after_36;
    // 0x800589D0: sw          $a1, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r5;
    after_36:
    // 0x800589D4: lw          $a1, 0xE8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XE8);
    // 0x800589D8: lwc1        $f4, 0xDC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XDC);
    // 0x800589DC: nop

    // 0x800589E0: swc1        $f4, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f4.u32l;
    // 0x800589E4: lwc1        $f6, 0xE0($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XE0);
    // 0x800589E8: nop

    // 0x800589EC: swc1        $f6, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f6.u32l;
    // 0x800589F0: lwc1        $f10, 0xE4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x800589F4: b           L_80058F98
    // 0x800589F8: swc1        $f10, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->f10.u32l;
        goto L_80058F98;
    // 0x800589F8: swc1        $f10, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->f10.u32l;
L_800589FC:
    // 0x800589FC: lw          $a2, 0xC($a3)
    ctx->r6 = MEM_W(ctx->r7, 0XC);
    // 0x80058A00: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x80058A04: lwc1        $f8, 0x0($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X0);
    // 0x80058A08: lw          $a0, 0x120($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X120);
    // 0x80058A0C: swc1        $f8, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f8.u32l;
    // 0x80058A10: lwc1        $f4, 0x4($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X4);
    // 0x80058A14: addiu       $a1, $sp, 0xCC
    ctx->r5 = ADD32(ctx->r29, 0XCC);
    // 0x80058A18: swc1        $f4, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f4.u32l;
    // 0x80058A1C: lwc1        $f6, 0x8($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X8);
    // 0x80058A20: jal         0x8000809C
    // 0x80058A24: swc1        $f6, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f6.u32l;
    func_8000809C(rdram, ctx);
        goto after_37;
    // 0x80058A24: swc1        $f6, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f6.u32l;
    after_37:
    // 0x80058A28: b           L_80058F9C
    // 0x80058A2C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80058F9C;
    // 0x80058A2C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80058A30:
    // 0x80058A30: lw          $v0, 0xC($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XC);
    // 0x80058A34: addiu       $at, $zero, 0x1202
    ctx->r1 = ADD32(0, 0X1202);
    // 0x80058A38: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x80058A3C: nop

    // 0x80058A40: andi        $t7, $v1, 0x1
    ctx->r15 = ctx->r3 & 0X1;
    // 0x80058A44: sll         $t8, $t7, 15
    ctx->r24 = S32(ctx->r15 << 15);
    // 0x80058A48: bne         $t8, $zero, L_80058F9C
    if (ctx->r24 != 0) {
        // 0x80058A4C: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_80058F9C;
    }
    // 0x80058A4C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80058A50: bne         $v1, $at, L_80058F9C
    if (ctx->r3 != ctx->r1) {
        // 0x80058A54: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_80058F9C;
    }
    // 0x80058A54: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80058A58: b           L_80058F9C
    // 0x80058A5C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80058F9C;
    // 0x80058A5C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80058A60:
    // 0x80058A60: lw          $v0, 0xC($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XC);
    // 0x80058A64: nop

    // 0x80058A68: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x80058A6C: lw          $a1, 0x4($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4);
    // 0x80058A70: jal         0x8003F190
    // 0x80058A74: nop

    func_8003F190(rdram, ctx);
        goto after_38;
    // 0x80058A74: nop

    after_38:
    // 0x80058A78: b           L_80058F9C
    // 0x80058A7C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80058F9C;
    // 0x80058A7C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80058A80:
    // 0x80058A80: lw          $s1, 0xC($a3)
    ctx->r17 = MEM_W(ctx->r7, 0XC);
    // 0x80058A84: jal         0x8005758C
    // 0x80058A88: nop

    func_8005758C(rdram, ctx);
        goto after_39;
    // 0x80058A88: nop

    after_39:
    // 0x80058A8C: b           L_80058F9C
    // 0x80058A90: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80058F9C;
    // 0x80058A90: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80058A94:
    // 0x80058A94: lw          $v1, 0xC($a3)
    ctx->r3 = MEM_W(ctx->r7, 0XC);
    // 0x80058A98: nop

    // 0x80058A9C: lw          $t9, 0x4($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X4);
    // 0x80058AA0: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x80058AA4: nop

    // 0x80058AA8: subu        $v0, $t9, $t6
    ctx->r2 = SUB32(ctx->r25, ctx->r14);
    // 0x80058AAC: bgez        $v0, L_80058ABC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80058AB0: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80058ABC;
    }
    // 0x80058AB0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80058AB4: b           L_80058ABC
    // 0x80058AB8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
        goto L_80058ABC;
    // 0x80058AB8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_80058ABC:
    // 0x80058ABC: blez        $a0, L_80058F9C
    if (SIGNED(ctx->r4) <= 0) {
        // 0x80058AC0: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_80058F9C;
    }
    // 0x80058AC0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80058AC4: jal         0x80028AB8
    // 0x80058AC8: sw          $v1, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r3;
    func_80028AB8(rdram, ctx);
        goto after_40;
    // 0x80058AC8: sw          $v1, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r3;
    after_40:
    // 0x80058ACC: lw          $v1, 0xB8($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XB8);
    // 0x80058AD0: nop

    // 0x80058AD4: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x80058AD8: addiu       $a1, $v1, 0x8
    ctx->r5 = ADD32(ctx->r3, 0X8);
    // 0x80058ADC: jal         0x8005B358
    // 0x80058AE0: addu        $a0, $v0, $t7
    ctx->r4 = ADD32(ctx->r2, ctx->r15);
    func_8005B358(rdram, ctx);
        goto after_41;
    // 0x80058AE0: addu        $a0, $v0, $t7
    ctx->r4 = ADD32(ctx->r2, ctx->r15);
    after_41:
    // 0x80058AE4: b           L_80058F9C
    // 0x80058AE8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80058F9C;
    // 0x80058AE8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80058AEC:
    // 0x80058AEC: lw          $s1, 0x8($a3)
    ctx->r17 = MEM_W(ctx->r7, 0X8);
    // 0x80058AF0: lw          $s0, 0xC($a3)
    ctx->r16 = MEM_W(ctx->r7, 0XC);
    // 0x80058AF4: jal         0x800572EC
    // 0x80058AF8: nop

    func_800572EC(rdram, ctx);
        goto after_42;
    // 0x80058AF8: nop

    after_42:
    // 0x80058AFC: b           L_80058F9C
    // 0x80058B00: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80058F9C;
    // 0x80058B00: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80058B04:
    // 0x80058B04: lw          $v0, 0xC($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XC);
    // 0x80058B08: nop

    // 0x80058B0C: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x80058B10: nop

    // 0x80058B14: bne         $t8, $zero, L_80058F9C
    if (ctx->r24 != 0) {
        // 0x80058B18: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_80058F9C;
    }
    // 0x80058B18: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80058B1C: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x80058B20: lw          $a1, 0x8($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X8);
    // 0x80058B24: jal         0x8002F40C
    // 0x80058B28: nop

    func_8002F40C(rdram, ctx);
        goto after_43;
    // 0x80058B28: nop

    after_43:
    // 0x80058B2C: b           L_80058F9C
    // 0x80058B30: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80058F9C;
    // 0x80058B30: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80058B34:
    // 0x80058B34: lw          $v0, 0x8($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X8);
    // 0x80058B38: lw          $a1, 0xC($a3)
    ctx->r5 = MEM_W(ctx->r7, 0XC);
    // 0x80058B3C: lw          $a0, 0x8($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X8);
    // 0x80058B40: jal         0x8004B540
    // 0x80058B44: nop

    func_8004B540(rdram, ctx);
        goto after_44;
    // 0x80058B44: nop

    after_44:
    // 0x80058B48: b           L_80058F9C
    // 0x80058B4C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80058F9C;
    // 0x80058B4C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80058B50:
    // 0x80058B50: lw          $v0, 0xC($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XC);
    // 0x80058B54: nop

    // 0x80058B58: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x80058B5C: nop

    // 0x80058B60: addiu       $t6, $t9, -0x1
    ctx->r14 = ADD32(ctx->r25, -0X1);
    // 0x80058B64: sltiu       $at, $t6, 0x11
    ctx->r1 = ctx->r14 < 0X11 ? 1 : 0;
    // 0x80058B68: beq         $at, $zero, L_80058F98
    if (ctx->r1 == 0) {
        // 0x80058B6C: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_80058F98;
    }
    // 0x80058B6C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80058B70: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80058B74: addu        $at, $at, $t6
    gpr jr_addend_80058B80 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80058B78: lw          $t6, 0x6178($at)
    ctx->r14 = ADD32(ctx->r1, 0X6178);
    // 0x80058B7C: nop

    // 0x80058B80: jr          $t6
    // 0x80058B84: nop

    switch (jr_addend_80058B80 >> 2) {
        case 0: goto L_80058B88; break;
        case 1: goto L_80058BBC; break;
        case 2: goto L_80058BD8; break;
        case 3: goto L_80058C0C; break;
        case 4: goto L_80058C30; break;
        case 5: goto L_80058C54; break;
        case 6: goto L_80058C88; break;
        case 7: goto L_80058CAC; break;
        case 8: goto L_80058CD0; break;
        case 9: goto L_80058CEC; break;
        case 10: goto L_80058D10; break;
        case 11: goto L_80058D34; break;
        case 12: goto L_80058D58; break;
        case 13: goto L_80058D74; break;
        case 14: goto L_80058D98; break;
        case 15: goto L_80058DBC; break;
        case 16: goto L_80058DE0; break;
        default: switch_error(__func__, 0x80058B80, 0x80096178);
    }
    // 0x80058B84: nop

L_80058B88:
    // 0x80058B88: lw          $t7, 0x4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X4);
    // 0x80058B8C: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x80058B90: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x80058B94: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80058B98: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80058B9C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80058BA0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80058BA4: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80058BA8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80058BAC: addiu       $t9, $t9, -0x6018
    ctx->r25 = ADD32(ctx->r25, -0X6018);
    // 0x80058BB0: addu        $t6, $t8, $t9
    ctx->r14 = ADD32(ctx->r24, ctx->r25);
    // 0x80058BB4: b           L_80058F98
    // 0x80058BB8: sw          $t6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r14;
        goto L_80058F98;
    // 0x80058BB8: sw          $t6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r14;
L_80058BBC:
    // 0x80058BBC: lw          $t7, 0x4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X4);
    // 0x80058BC0: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x80058BC4: addiu       $t9, $t9, -0x7818
    ctx->r25 = ADD32(ctx->r25, -0X7818);
    // 0x80058BC8: sll         $t8, $t7, 10
    ctx->r24 = S32(ctx->r15 << 10);
    // 0x80058BCC: addu        $t6, $t8, $t9
    ctx->r14 = ADD32(ctx->r24, ctx->r25);
    // 0x80058BD0: b           L_80058F98
    // 0x80058BD4: sw          $t6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r14;
        goto L_80058F98;
    // 0x80058BD4: sw          $t6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r14;
L_80058BD8:
    // 0x80058BD8: lw          $t7, 0x4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X4);
    // 0x80058BDC: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x80058BE0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80058BE4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80058BE8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80058BEC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80058BF0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80058BF4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80058BF8: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x80058BFC: addiu       $t9, $t9, 0x2328
    ctx->r25 = ADD32(ctx->r25, 0X2328);
    // 0x80058C00: addu        $t6, $t8, $t9
    ctx->r14 = ADD32(ctx->r24, ctx->r25);
    // 0x80058C04: b           L_80058F98
    // 0x80058C08: sw          $t6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r14;
        goto L_80058F98;
    // 0x80058C08: sw          $t6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r14;
L_80058C0C:
    // 0x80058C0C: lw          $t7, 0x4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X4);
    // 0x80058C10: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x80058C14: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x80058C18: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80058C1C: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x80058C20: addiu       $t9, $t9, -0x9D8
    ctx->r25 = ADD32(ctx->r25, -0X9D8);
    // 0x80058C24: addu        $t6, $t8, $t9
    ctx->r14 = ADD32(ctx->r24, ctx->r25);
    // 0x80058C28: b           L_80058F98
    // 0x80058C2C: sw          $t6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r14;
        goto L_80058F98;
    // 0x80058C2C: sw          $t6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r14;
L_80058C30:
    // 0x80058C30: lw          $t7, 0x4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X4);
    // 0x80058C34: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x80058C38: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x80058C3C: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80058C40: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x80058C44: addiu       $t9, $t9, 0xCA8
    ctx->r25 = ADD32(ctx->r25, 0XCA8);
    // 0x80058C48: addu        $t6, $t8, $t9
    ctx->r14 = ADD32(ctx->r24, ctx->r25);
    // 0x80058C4C: b           L_80058F98
    // 0x80058C50: sw          $t6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r14;
        goto L_80058F98;
    // 0x80058C50: sw          $t6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r14;
L_80058C54:
    // 0x80058C54: lw          $t7, 0x4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X4);
    // 0x80058C58: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x80058C5C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80058C60: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80058C64: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80058C68: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80058C6C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80058C70: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80058C74: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x80058C78: addiu       $t9, $t9, 0x6D88
    ctx->r25 = ADD32(ctx->r25, 0X6D88);
    // 0x80058C7C: addu        $t6, $t8, $t9
    ctx->r14 = ADD32(ctx->r24, ctx->r25);
    // 0x80058C80: b           L_80058F98
    // 0x80058C84: sw          $t6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r14;
        goto L_80058F98;
    // 0x80058C84: sw          $t6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r14;
L_80058C88:
    // 0x80058C88: lw          $t7, 0x4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X4);
    // 0x80058C8C: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x80058C90: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x80058C94: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80058C98: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80058C9C: addiu       $t9, $t9, -0x4CA0
    ctx->r25 = ADD32(ctx->r25, -0X4CA0);
    // 0x80058CA0: addu        $t6, $t8, $t9
    ctx->r14 = ADD32(ctx->r24, ctx->r25);
    // 0x80058CA4: b           L_80058F98
    // 0x80058CA8: sw          $t6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r14;
        goto L_80058F98;
    // 0x80058CA8: sw          $t6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r14;
L_80058CAC:
    // 0x80058CAC: lw          $t7, 0x4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X4);
    // 0x80058CB0: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x80058CB4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80058CB8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80058CBC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80058CC0: addiu       $t9, $t9, -0x4B38
    ctx->r25 = ADD32(ctx->r25, -0X4B38);
    // 0x80058CC4: addu        $t6, $t8, $t9
    ctx->r14 = ADD32(ctx->r24, ctx->r25);
    // 0x80058CC8: b           L_80058F98
    // 0x80058CCC: sw          $t6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r14;
        goto L_80058F98;
    // 0x80058CCC: sw          $t6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r14;
L_80058CD0:
    // 0x80058CD0: lw          $t7, 0x4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X4);
    // 0x80058CD4: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x80058CD8: addiu       $t9, $t9, -0x4AC0
    ctx->r25 = ADD32(ctx->r25, -0X4AC0);
    // 0x80058CDC: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x80058CE0: addu        $t6, $t8, $t9
    ctx->r14 = ADD32(ctx->r24, ctx->r25);
    // 0x80058CE4: b           L_80058F98
    // 0x80058CE8: sw          $t6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r14;
        goto L_80058F98;
    // 0x80058CE8: sw          $t6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r14;
L_80058CEC:
    // 0x80058CEC: lw          $t7, 0x4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X4);
    // 0x80058CF0: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x80058CF4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80058CF8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80058CFC: sll         $t8, $t8, 5
    ctx->r24 = S32(ctx->r24 << 5);
    // 0x80058D00: addiu       $t9, $t9, -0x4A90
    ctx->r25 = ADD32(ctx->r25, -0X4A90);
    // 0x80058D04: addu        $t6, $t8, $t9
    ctx->r14 = ADD32(ctx->r24, ctx->r25);
    // 0x80058D08: b           L_80058F98
    // 0x80058D0C: sw          $t6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r14;
        goto L_80058F98;
    // 0x80058D0C: sw          $t6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r14;
L_80058D10:
    // 0x80058D10: lw          $t7, 0x4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X4);
    // 0x80058D14: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x80058D18: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80058D1C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80058D20: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80058D24: addiu       $t9, $t9, -0x3E10
    ctx->r25 = ADD32(ctx->r25, -0X3E10);
    // 0x80058D28: addu        $t6, $t8, $t9
    ctx->r14 = ADD32(ctx->r24, ctx->r25);
    // 0x80058D2C: b           L_80058F98
    // 0x80058D30: sw          $t6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r14;
        goto L_80058F98;
    // 0x80058D30: sw          $t6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r14;
L_80058D34:
    // 0x80058D34: lw          $t7, 0x4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X4);
    // 0x80058D38: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x80058D3C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80058D40: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80058D44: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80058D48: addiu       $t9, $t9, -0x3C80
    ctx->r25 = ADD32(ctx->r25, -0X3C80);
    // 0x80058D4C: addu        $t6, $t8, $t9
    ctx->r14 = ADD32(ctx->r24, ctx->r25);
    // 0x80058D50: b           L_80058F98
    // 0x80058D54: sw          $t6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r14;
        goto L_80058F98;
    // 0x80058D54: sw          $t6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r14;
L_80058D58:
    // 0x80058D58: lw          $t7, 0x4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X4);
    // 0x80058D5C: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x80058D60: addiu       $t9, $t9, -0x3AF0
    ctx->r25 = ADD32(ctx->r25, -0X3AF0);
    // 0x80058D64: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x80058D68: addu        $t6, $t8, $t9
    ctx->r14 = ADD32(ctx->r24, ctx->r25);
    // 0x80058D6C: b           L_80058F98
    // 0x80058D70: sw          $t6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r14;
        goto L_80058F98;
    // 0x80058D70: sw          $t6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r14;
L_80058D74:
    // 0x80058D74: lw          $t7, 0x4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X4);
    // 0x80058D78: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x80058D7C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80058D80: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80058D84: sll         $t8, $t8, 5
    ctx->r24 = S32(ctx->r24 << 5);
    // 0x80058D88: addiu       $t9, $t9, -0x3A50
    ctx->r25 = ADD32(ctx->r25, -0X3A50);
    // 0x80058D8C: addu        $t6, $t8, $t9
    ctx->r14 = ADD32(ctx->r24, ctx->r25);
    // 0x80058D90: b           L_80058F98
    // 0x80058D94: sw          $t6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r14;
        goto L_80058F98;
    // 0x80058D94: sw          $t6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r14;
L_80058D98:
    // 0x80058D98: lw          $t7, 0x4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X4);
    // 0x80058D9C: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x80058DA0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80058DA4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80058DA8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80058DAC: addiu       $t9, $t9, -0x2790
    ctx->r25 = ADD32(ctx->r25, -0X2790);
    // 0x80058DB0: addu        $t6, $t8, $t9
    ctx->r14 = ADD32(ctx->r24, ctx->r25);
    // 0x80058DB4: b           L_80058F98
    // 0x80058DB8: sw          $t6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r14;
        goto L_80058F98;
    // 0x80058DB8: sw          $t6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r14;
L_80058DBC:
    // 0x80058DBC: lw          $t7, 0x4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X4);
    // 0x80058DC0: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x80058DC4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80058DC8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80058DCC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80058DD0: addiu       $t9, $t9, -0x2538
    ctx->r25 = ADD32(ctx->r25, -0X2538);
    // 0x80058DD4: addu        $t6, $t8, $t9
    ctx->r14 = ADD32(ctx->r24, ctx->r25);
    // 0x80058DD8: b           L_80058F98
    // 0x80058DDC: sw          $t6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r14;
        goto L_80058F98;
    // 0x80058DDC: sw          $t6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r14;
L_80058DE0:
    // 0x80058DE0: lw          $t7, 0x4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X4);
    // 0x80058DE4: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x80058DE8: addiu       $t9, $t9, -0x22E0
    ctx->r25 = ADD32(ctx->r25, -0X22E0);
    // 0x80058DEC: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x80058DF0: addu        $t6, $t8, $t9
    ctx->r14 = ADD32(ctx->r24, ctx->r25);
    // 0x80058DF4: b           L_80058F98
    // 0x80058DF8: sw          $t6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r14;
        goto L_80058F98;
    // 0x80058DF8: sw          $t6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r14;
L_80058DFC:
    // 0x80058DFC: lw          $v1, 0xC($a3)
    ctx->r3 = MEM_W(ctx->r7, 0XC);
    // 0x80058E00: lw          $t0, 0x8($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X8);
    // 0x80058E04: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x80058E08: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80058E0C: beq         $v0, $zero, L_80058E3C
    if (ctx->r2 == 0) {
        // 0x80058E10: nop
    
            goto L_80058E3C;
    }
    // 0x80058E10: nop

    // 0x80058E14: beq         $v0, $at, L_80058E54
    if (ctx->r2 == ctx->r1) {
        // 0x80058E18: addiu       $a1, $zero, 0x4
        ctx->r5 = ADD32(0, 0X4);
            goto L_80058E54;
    }
    // 0x80058E18: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80058E1C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80058E20: beq         $v0, $at, L_80058E84
    if (ctx->r2 == ctx->r1) {
        // 0x80058E24: addiu       $a1, $v1, 0x8
        ctx->r5 = ADD32(ctx->r3, 0X8);
            goto L_80058E84;
    }
    // 0x80058E24: addiu       $a1, $v1, 0x8
    ctx->r5 = ADD32(ctx->r3, 0X8);
    // 0x80058E28: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80058E2C: beq         $v0, $at, L_80058E9C
    if (ctx->r2 == ctx->r1) {
        // 0x80058E30: nop
    
            goto L_80058E9C;
    }
    // 0x80058E30: nop

    // 0x80058E34: b           L_80058F9C
    // 0x80058E38: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80058F9C;
    // 0x80058E38: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80058E3C:
    // 0x80058E3C: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x80058E40: jal         0x80027874
    // 0x80058E44: sw          $v1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r3;
    func_80027874(rdram, ctx);
        goto after_45;
    // 0x80058E44: sw          $v1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r3;
    after_45:
    // 0x80058E48: lw          $v1, 0x94($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X94);
    // 0x80058E4C: b           L_80058F98
    // 0x80058E50: sw          $v0, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r2;
        goto L_80058F98;
    // 0x80058E50: sw          $v0, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r2;
L_80058E54:
    // 0x80058E54: lw          $a0, 0x8($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X8);
    // 0x80058E58: sw          $v1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r3;
    // 0x80058E5C: jal         0x8004A0A0
    // 0x80058E60: addiu       $a2, $sp, 0x78
    ctx->r6 = ADD32(ctx->r29, 0X78);
    func_8004A0A0(rdram, ctx);
        goto after_46;
    // 0x80058E60: addiu       $a2, $sp, 0x78
    ctx->r6 = ADD32(ctx->r29, 0X78);
    after_46:
    // 0x80058E64: lw          $v1, 0x94($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X94);
    // 0x80058E68: addiu       $a1, $sp, 0x78
    ctx->r5 = ADD32(ctx->r29, 0X78);
    // 0x80058E6C: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x80058E70: jal         0x80027A38
    // 0x80058E74: nop

    func_80027A38(rdram, ctx);
        goto after_47;
    // 0x80058E74: nop

    after_47:
    // 0x80058E78: lw          $v1, 0x94($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X94);
    // 0x80058E7C: b           L_80058F98
    // 0x80058E80: sw          $v0, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r2;
        goto L_80058F98;
    // 0x80058E80: sw          $v0, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r2;
L_80058E84:
    // 0x80058E84: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x80058E88: jal         0x80027A38
    // 0x80058E8C: sw          $v1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r3;
    func_80027A38(rdram, ctx);
        goto after_48;
    // 0x80058E8C: sw          $v1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r3;
    after_48:
    // 0x80058E90: lw          $v1, 0x94($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X94);
    // 0x80058E94: b           L_80058F98
    // 0x80058E98: sw          $v0, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r2;
        goto L_80058F98;
    // 0x80058E98: sw          $v0, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r2;
L_80058E9C:
    // 0x80058E9C: lw          $a0, 0x14($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X14);
    // 0x80058EA0: jal         0x80027030
    // 0x80058EA4: nop

    func_80027030(rdram, ctx);
        goto after_49;
    // 0x80058EA4: nop

    after_49:
    // 0x80058EA8: b           L_80058F9C
    // 0x80058EAC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80058F9C;
    // 0x80058EAC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80058EB0:
    // 0x80058EB0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80058EB4: lw          $v1, 0xC($a3)
    ctx->r3 = MEM_W(ctx->r7, 0XC);
    // 0x80058EB8: lw          $t0, 0x8($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X8);
    // 0x80058EBC: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
    // 0x80058EC0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80058EC4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80058EC8: beq         $v0, $zero, L_80058EEC
    if (ctx->r2 == 0) {
        // 0x80058ECC: addiu       $a2, $sp, 0x50
        ctx->r6 = ADD32(ctx->r29, 0X50);
            goto L_80058EEC;
    }
    // 0x80058ECC: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    // 0x80058ED0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80058ED4: beq         $v0, $at, L_80058F04
    if (ctx->r2 == ctx->r1) {
        // 0x80058ED8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80058F04;
    }
    // 0x80058ED8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80058EDC: beq         $v0, $at, L_80058F28
    if (ctx->r2 == ctx->r1) {
        // 0x80058EE0: addiu       $a1, $zero, 0x4
        ctx->r5 = ADD32(0, 0X4);
            goto L_80058F28;
    }
    // 0x80058EE0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80058EE4: b           L_80058F74
    // 0x80058EE8: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
        goto L_80058F74;
    // 0x80058EE8: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
L_80058EEC:
    // 0x80058EEC: lw          $a0, 0x8($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X8);
    // 0x80058EF0: jal         0x8004A0A0
    // 0x80058EF4: sw          $v1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r3;
    func_8004A0A0(rdram, ctx);
        goto after_50;
    // 0x80058EF4: sw          $v1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r3;
    after_50:
    // 0x80058EF8: lw          $v1, 0x6C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X6C);
    // 0x80058EFC: b           L_80058F74
    // 0x80058F00: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
        goto L_80058F74;
    // 0x80058F00: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
L_80058F04:
    // 0x80058F04: lwc1        $f10, 0x4($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X4);
    // 0x80058F08: nop

    // 0x80058F0C: swc1        $f10, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f10.u32l;
    // 0x80058F10: lwc1        $f8, 0x8($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80058F14: nop

    // 0x80058F18: swc1        $f8, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f8.u32l;
    // 0x80058F1C: lwc1        $f4, 0xC($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0XC);
    // 0x80058F20: b           L_80058F70
    // 0x80058F24: swc1        $f4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f4.u32l;
        goto L_80058F70;
    // 0x80058F24: swc1        $f4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f4.u32l;
L_80058F28:
    // 0x80058F28: lw          $a0, 0x8($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X8);
    // 0x80058F2C: sw          $v1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r3;
    // 0x80058F30: jal         0x8004A0A0
    // 0x80058F34: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    func_8004A0A0(rdram, ctx);
        goto after_51;
    // 0x80058F34: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    after_51:
    // 0x80058F38: lw          $v1, 0x6C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X6C);
    // 0x80058F3C: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80058F40: lwc1        $f10, 0x4($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X4);
    // 0x80058F44: lwc1        $f4, 0x54($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80058F48: add.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x80058F4C: swc1        $f8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f8.u32l;
    // 0x80058F50: lwc1        $f6, 0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80058F54: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80058F58: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80058F5C: swc1        $f10, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f10.u32l;
    // 0x80058F60: lwc1        $f4, 0xC($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0XC);
    // 0x80058F64: nop

    // 0x80058F68: add.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x80058F6C: swc1        $f6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f6.u32l;
L_80058F70:
    // 0x80058F70: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
L_80058F74:
    // 0x80058F74: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    // 0x80058F78: jal         0x8005093C
    // 0x80058F7C: sw          $v1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r3;
    func_8005093C(rdram, ctx);
        goto after_52;
    // 0x80058F7C: sw          $v1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r3;
    after_52:
    // 0x80058F80: lw          $v1, 0x6C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X6C);
    // 0x80058F84: nop

    // 0x80058F88: sw          $v0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r2;
    // 0x80058F8C: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80058F90: nop

    // 0x80058F94: swc1        $f10, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f10.u32l;
L_80058F98:
    // 0x80058F98: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80058F9C:
    // 0x80058F9C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80058FA0: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80058FA4: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80058FA8: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80058FAC: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x80058FB0: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80058FB4: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80058FB8: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80058FBC: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x80058FC0: jr          $ra
    // 0x80058FC4: addiu       $sp, $sp, 0x270
    ctx->r29 = ADD32(ctx->r29, 0X270);
    return;
    // 0x80058FC4: addiu       $sp, $sp, 0x270
    ctx->r29 = ADD32(ctx->r29, 0X270);
;}
RECOMP_FUNC void func_80058FC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80058FC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80058FCC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80058FD0: lw          $t6, 0x4($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X4);
    // 0x80058FD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80058FD8: addiu       $t7, $t6, -0x4
    ctx->r15 = ADD32(ctx->r14, -0X4);
    // 0x80058FDC: sltiu       $at, $t7, 0x9
    ctx->r1 = ctx->r15 < 0X9 ? 1 : 0;
    // 0x80058FE0: beq         $at, $zero, L_80059048
    if (ctx->r1 == 0) {
        // 0x80058FE4: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_80059048;
    }
    // 0x80058FE4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80058FE8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80058FEC: addu        $at, $at, $t7
    gpr jr_addend_80058FF8 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80058FF0: lw          $t7, 0x61BC($at)
    ctx->r15 = ADD32(ctx->r1, 0X61BC);
    // 0x80058FF4: nop

    // 0x80058FF8: jr          $t7
    // 0x80058FFC: nop

    switch (jr_addend_80058FF8 >> 2) {
        case 0: goto L_80059000; break;
        case 1: goto L_80059008; break;
        case 2: goto L_80059010; break;
        case 3: goto L_80059018; break;
        case 4: goto L_80059020; break;
        case 5: goto L_80059028; break;
        case 6: goto L_80059030; break;
        case 7: goto L_80059038; break;
        case 8: goto L_80059040; break;
        default: switch_error(__func__, 0x80058FF8, 0x800961BC);
    }
    // 0x80058FFC: nop

L_80059000:
    // 0x80059000: b           L_80059048
    // 0x80059004: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_80059048;
    // 0x80059004: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_80059008:
    // 0x80059008: b           L_80059048
    // 0x8005900C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
        goto L_80059048;
    // 0x8005900C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
L_80059010:
    // 0x80059010: b           L_80059048
    // 0x80059014: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
        goto L_80059048;
    // 0x80059014: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
L_80059018:
    // 0x80059018: b           L_80059048
    // 0x8005901C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
        goto L_80059048;
    // 0x8005901C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
L_80059020:
    // 0x80059020: b           L_80059048
    // 0x80059024: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
        goto L_80059048;
    // 0x80059024: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
L_80059028:
    // 0x80059028: b           L_80059048
    // 0x8005902C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
        goto L_80059048;
    // 0x8005902C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
L_80059030:
    // 0x80059030: b           L_80059048
    // 0x80059034: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
        goto L_80059048;
    // 0x80059034: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
L_80059038:
    // 0x80059038: b           L_80059048
    // 0x8005903C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
        goto L_80059048;
    // 0x8005903C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
L_80059040:
    // 0x80059040: b           L_80059048
    // 0x80059044: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
        goto L_80059048;
    // 0x80059044: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
L_80059048:
    // 0x80059048: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    // 0x8005904C: jal         0x800516BC
    // 0x80059050: nop

    func_800516BC(rdram, ctx);
        goto after_0;
    // 0x80059050: nop

    after_0:
    // 0x80059054: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80059058: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8005905C: jr          $ra
    // 0x80059060: nop

    return;
    // 0x80059060: nop

;}
RECOMP_FUNC void func_80059064(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80059064: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80059068: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005906C: lw          $t6, 0x4($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X4);
    // 0x80059070: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80059074: addiu       $t7, $t6, -0x4
    ctx->r15 = ADD32(ctx->r14, -0X4);
    // 0x80059078: sltiu       $at, $t7, 0x7
    ctx->r1 = ctx->r15 < 0X7 ? 1 : 0;
    // 0x8005907C: beq         $at, $zero, L_800590D4
    if (ctx->r1 == 0) {
        // 0x80059080: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_800590D4;
    }
    // 0x80059080: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80059084: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80059088: addu        $at, $at, $t7
    gpr jr_addend_80059094 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8005908C: lw          $t7, 0x61E0($at)
    ctx->r15 = ADD32(ctx->r1, 0X61E0);
    // 0x80059090: nop

    // 0x80059094: jr          $t7
    // 0x80059098: nop

    switch (jr_addend_80059094 >> 2) {
        case 0: goto L_8005909C; break;
        case 1: goto L_800590A4; break;
        case 2: goto L_800590AC; break;
        case 3: goto L_800590B4; break;
        case 4: goto L_800590BC; break;
        case 5: goto L_800590C4; break;
        case 6: goto L_800590CC; break;
        default: switch_error(__func__, 0x80059094, 0x800961E0);
    }
    // 0x80059098: nop

L_8005909C:
    // 0x8005909C: b           L_800590D4
    // 0x800590A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_800590D4;
    // 0x800590A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_800590A4:
    // 0x800590A4: b           L_800590D4
    // 0x800590A8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
        goto L_800590D4;
    // 0x800590A8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
L_800590AC:
    // 0x800590AC: b           L_800590D4
    // 0x800590B0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
        goto L_800590D4;
    // 0x800590B0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
L_800590B4:
    // 0x800590B4: b           L_800590D4
    // 0x800590B8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
        goto L_800590D4;
    // 0x800590B8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
L_800590BC:
    // 0x800590BC: b           L_800590D4
    // 0x800590C0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
        goto L_800590D4;
    // 0x800590C0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
L_800590C4:
    // 0x800590C4: b           L_800590D4
    // 0x800590C8: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
        goto L_800590D4;
    // 0x800590C8: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
L_800590CC:
    // 0x800590CC: b           L_800590D4
    // 0x800590D0: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
        goto L_800590D4;
    // 0x800590D0: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
L_800590D4:
    // 0x800590D4: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    // 0x800590D8: jal         0x800516BC
    // 0x800590DC: nop

    func_800516BC(rdram, ctx);
        goto after_0;
    // 0x800590DC: nop

    after_0:
    // 0x800590E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800590E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800590E8: jr          $ra
    // 0x800590EC: nop

    return;
    // 0x800590EC: nop

;}
RECOMP_FUNC void func_800590F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800590F0: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x800590F4: addiu       $a2, $a2, 0x1C70
    ctx->r6 = ADD32(ctx->r6, 0X1C70);
    // 0x800590F8: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x800590FC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80059100: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80059104: slti        $at, $v0, 0x40
    ctx->r1 = SIGNED(ctx->r2) < 0X40 ? 1 : 0;
    // 0x80059108: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8005910C: beq         $at, $zero, L_80059244
    if (ctx->r1 == 0) {
        // 0x80059110: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_80059244;
    }
    // 0x80059110: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80059114: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x80059118: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
    // 0x8005911C: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x80059120: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x80059124: addiu       $t8, $t8, -0x6E30
    ctx->r24 = ADD32(ctx->r24, -0X6E30);
    // 0x80059128: sll         $t7, $v0, 3
    ctx->r15 = S32(ctx->r2 << 3);
    // 0x8005912C: addu        $a1, $t7, $t8
    ctx->r5 = ADD32(ctx->r15, ctx->r24);
    // 0x80059130: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x80059134: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x80059138: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x8005913C: sw          $t6, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r14;
    // 0x80059140: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x80059144: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80059148: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x8005914C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80059150: lw          $t8, -0x2928($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X2928);
    // 0x80059154: nop

    // 0x80059158: bne         $t8, $zero, L_80059248
    if (ctx->r24 != 0) {
        // 0x8005915C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80059248;
    }
    // 0x8005915C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80059160: bne         $a0, $at, L_8005920C
    if (ctx->r4 != ctx->r1) {
        // 0x80059164: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8005920C;
    }
    // 0x80059164: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80059168: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8005916C: jal         0x8005C3A8
    // 0x80059170: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    func_8005C3A8(rdram, ctx);
        goto after_0;
    // 0x80059170: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    after_0:
    // 0x80059174: lw          $t9, 0x8($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X8);
    // 0x80059178: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8005917C: sltiu       $at, $t9, 0x7
    ctx->r1 = ctx->r25 < 0X7 ? 1 : 0;
    // 0x80059180: beq         $at, $zero, L_800591F0
    if (ctx->r1 == 0) {
        // 0x80059184: sll         $t9, $t9, 2
        ctx->r25 = S32(ctx->r25 << 2);
            goto L_800591F0;
    }
    // 0x80059184: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80059188: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8005918C: addu        $at, $at, $t9
    gpr jr_addend_80059198 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80059190: lw          $t9, 0x61FC($at)
    ctx->r25 = ADD32(ctx->r1, 0X61FC);
    // 0x80059194: nop

    // 0x80059198: jr          $t9
    // 0x8005919C: nop

    switch (jr_addend_80059198 >> 2) {
        case 0: goto L_800591A0; break;
        case 1: goto L_800591AC; break;
        case 2: goto L_800591B8; break;
        case 3: goto L_800591C4; break;
        case 4: goto L_800591D0; break;
        case 5: goto L_800591DC; break;
        case 6: goto L_800591E8; break;
        default: switch_error(__func__, 0x80059198, 0x800961FC);
    }
    // 0x8005919C: nop

L_800591A0:
    // 0x800591A0: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x800591A4: b           L_800591F0
    // 0x800591A8: sw          $t6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r14;
        goto L_800591F0;
    // 0x800591A8: sw          $t6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r14;
L_800591AC:
    // 0x800591AC: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x800591B0: b           L_800591F0
    // 0x800591B4: sw          $t7, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r15;
        goto L_800591F0;
    // 0x800591B4: sw          $t7, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r15;
L_800591B8:
    // 0x800591B8: addiu       $t8, $zero, 0x6
    ctx->r24 = ADD32(0, 0X6);
    // 0x800591BC: b           L_800591F0
    // 0x800591C0: sw          $t8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r24;
        goto L_800591F0;
    // 0x800591C0: sw          $t8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r24;
L_800591C4:
    // 0x800591C4: addiu       $t9, $zero, 0x7
    ctx->r25 = ADD32(0, 0X7);
    // 0x800591C8: b           L_800591F0
    // 0x800591CC: sw          $t9, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r25;
        goto L_800591F0;
    // 0x800591CC: sw          $t9, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r25;
L_800591D0:
    // 0x800591D0: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x800591D4: b           L_800591F0
    // 0x800591D8: sw          $t6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r14;
        goto L_800591F0;
    // 0x800591D8: sw          $t6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r14;
L_800591DC:
    // 0x800591DC: addiu       $t7, $zero, 0x9
    ctx->r15 = ADD32(0, 0X9);
    // 0x800591E0: b           L_800591F0
    // 0x800591E4: sw          $t7, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r15;
        goto L_800591F0;
    // 0x800591E4: sw          $t7, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r15;
L_800591E8:
    // 0x800591E8: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x800591EC: sw          $t8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r24;
L_800591F0:
    // 0x800591F0: lw          $t9, 0x4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X4);
    // 0x800591F4: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x800591F8: jal         0x80059064
    // 0x800591FC: sw          $t9, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r25;
    func_80059064(rdram, ctx);
        goto after_1;
    // 0x800591FC: sw          $t9, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r25;
    after_1:
    // 0x80059200: b           L_80059230
    // 0x80059204: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
        goto L_80059230;
    // 0x80059204: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x80059208: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
L_8005920C:
    // 0x8005920C: bne         $a0, $at, L_80059224
    if (ctx->r4 != ctx->r1) {
        // 0x80059210: nop
    
            goto L_80059224;
    }
    // 0x80059210: nop

    // 0x80059214: jal         0x80058FC8
    // 0x80059218: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_80058FC8(rdram, ctx);
        goto after_2;
    // 0x80059218: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_2:
    // 0x8005921C: b           L_80059230
    // 0x80059220: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
        goto L_80059230;
    // 0x80059220: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
L_80059224:
    // 0x80059224: jal         0x800516BC
    // 0x80059228: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800516BC(rdram, ctx);
        goto after_3;
    // 0x80059228: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x8005922C: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
L_80059230:
    // 0x80059230: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80059234: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80059238: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8005923C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80059240: sw          $t6, -0x2928($at)
    MEM_W(-0X2928, ctx->r1) = ctx->r14;
L_80059244:
    // 0x80059244: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80059248:
    // 0x80059248: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8005924C: jr          $ra
    // 0x80059250: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80059250: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80059254(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80059254: jr          $ra
    // 0x80059258: nop

    return;
    // 0x80059258: nop

;}
RECOMP_FUNC void func_8005925C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005925C: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80059260: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80059264: lw          $t0, 0x0($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X0);
    // 0x80059268: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8005926C: beq         $t0, $at, L_8005927C
    if (ctx->r8 == ctx->r1) {
        // 0x80059270: or          $t1, $a0, $zero
        ctx->r9 = ctx->r4 | 0;
            goto L_8005927C;
    }
    // 0x80059270: or          $t1, $a0, $zero
    ctx->r9 = ctx->r4 | 0;
    // 0x80059274: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80059278: bne         $t0, $at, L_800593A8
    if (ctx->r8 != ctx->r1) {
        // 0x8005927C: lui         $a1, 0x8009
        ctx->r5 = S32(0X8009 << 16);
            goto L_800593A8;
    }
L_8005927C:
    // 0x8005927C: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x80059280: lw          $a1, 0x1C70($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X1C70);
    // 0x80059284: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80059288: blez        $a1, L_800593A8
    if (SIGNED(ctx->r5) <= 0) {
        // 0x8005928C: lui         $v1, 0x800E
        ctx->r3 = S32(0X800E << 16);
            goto L_800593A8;
    }
    // 0x8005928C: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x80059290: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x80059294: addiu       $a3, $a3, -0x2928
    ctx->r7 = ADD32(ctx->r7, -0X2928);
    // 0x80059298: addiu       $v1, $v1, -0x6E30
    ctx->r3 = ADD32(ctx->r3, -0X6E30);
    // 0x8005929C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_800592A0:
    // 0x800592A0: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x800592A4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800592A8: bne         $t0, $a0, L_8005939C
    if (ctx->r8 != ctx->r4) {
        // 0x800592AC: sll         $t6, $a0, 2
        ctx->r14 = S32(ctx->r4 << 2);
            goto L_8005939C;
    }
    // 0x800592AC: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x800592B0: addu        $t7, $a3, $t6
    ctx->r15 = ADD32(ctx->r7, ctx->r14);
    // 0x800592B4: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x800592B8: nop

    // 0x800592BC: bne         $a2, $t8, L_800593A0
    if (ctx->r6 != ctx->r24) {
        // 0x800592C0: slt         $at, $v0, $a1
        ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
            goto L_800593A0;
    }
    // 0x800592C0: slt         $at, $v0, $a1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x800592C4: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x800592C8: lw          $t9, 0x4($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X4);
    // 0x800592CC: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x800592D0: beq         $t9, $v0, L_800593A8
    if (ctx->r25 == ctx->r2) {
        // 0x800592D4: ori         $t7, $zero, 0xFFFF
        ctx->r15 = 0 | 0XFFFF;
            goto L_800593A8;
    }
    // 0x800592D4: ori         $t7, $zero, 0xFFFF
    ctx->r15 = 0 | 0XFFFF;
    // 0x800592D8: ori         $t8, $zero, 0xFFFF
    ctx->r24 = 0 | 0XFFFF;
    // 0x800592DC: sw          $t8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r24;
    // 0x800592E0: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x800592E4: sw          $t6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r14;
    // 0x800592E8: sw          $t7, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r15;
    // 0x800592EC: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x800592F0: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x800592F4: jal         0x80057CA0
    // 0x800592F8: sw          $t1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r9;
    func_80057CA0(rdram, ctx);
        goto after_0;
    // 0x800592F8: sw          $t1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r9;
    after_0:
    // 0x800592FC: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80059300: nop

    // 0x80059304: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x80059308: jal         0x80050FE8
    // 0x8005930C: nop

    func_80050FE8(rdram, ctx);
        goto after_1;
    // 0x8005930C: nop

    after_1:
    // 0x80059310: lw          $t1, 0x60($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X60);
    // 0x80059314: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80059318: lw          $t9, 0x4($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X4);
    // 0x8005931C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80059320: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x80059324: lw          $v0, 0x0($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X0);
    // 0x80059328: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    // 0x8005932C: beq         $v0, $at, L_80059344
    if (ctx->r2 == ctx->r1) {
        // 0x80059330: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80059344;
    }
    // 0x80059330: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80059334: beq         $v0, $at, L_80059358
    if (ctx->r2 == ctx->r1) {
        // 0x80059338: or          $a2, $t1, $zero
        ctx->r6 = ctx->r9 | 0;
            goto L_80059358;
    }
    // 0x80059338: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    // 0x8005933C: b           L_8005936C
    // 0x80059340: lw          $t6, 0x4($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X4);
        goto L_8005936C;
    // 0x80059340: lw          $t6, 0x4($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X4);
L_80059344:
    // 0x80059344: jal         0x80059064
    // 0x80059348: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_80059064(rdram, ctx);
        goto after_2;
    // 0x80059348: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_2:
    // 0x8005934C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80059350: b           L_8005936C
    // 0x80059354: lw          $t6, 0x4($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X4);
        goto L_8005936C;
    // 0x80059354: lw          $t6, 0x4($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X4);
L_80059358:
    // 0x80059358: jal         0x80058FC8
    // 0x8005935C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_80058FC8(rdram, ctx);
        goto after_3;
    // 0x8005935C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_3:
    // 0x80059360: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80059364: nop

    // 0x80059368: lw          $t6, 0x4($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X4);
L_8005936C:
    // 0x8005936C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80059370: ori         $t8, $zero, 0xFFFF
    ctx->r24 = 0 | 0XFFFF;
    // 0x80059374: ori         $t9, $zero, 0xFFFF
    ctx->r25 = 0 | 0XFFFF;
    // 0x80059378: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x8005937C: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80059380: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x80059384: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x80059388: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x8005938C: jal         0x80057CA0
    // 0x80059390: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    func_80057CA0(rdram, ctx);
        goto after_4;
    // 0x80059390: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    after_4:
    // 0x80059394: b           L_800593AC
    // 0x80059398: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800593AC;
    // 0x80059398: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8005939C:
    // 0x8005939C: slt         $at, $v0, $a1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
L_800593A0:
    // 0x800593A0: bne         $at, $zero, L_800592A0
    if (ctx->r1 != 0) {
        // 0x800593A4: addiu       $v1, $v1, 0x8
        ctx->r3 = ADD32(ctx->r3, 0X8);
            goto L_800592A0;
    }
    // 0x800593A4: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
L_800593A8:
    // 0x800593A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800593AC:
    // 0x800593AC: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x800593B0: jr          $ra
    // 0x800593B4: nop

    return;
    // 0x800593B4: nop

;}
RECOMP_FUNC void func_800593B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800593B8: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x800593BC: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x800593C0: lui         $s2, 0x8009
    ctx->r18 = S32(0X8009 << 16);
    // 0x800593C4: addiu       $s2, $s2, 0x1C70
    ctx->r18 = ADD32(ctx->r18, 0X1C70);
    // 0x800593C8: lw          $t6, 0x0($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X0);
    // 0x800593CC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800593D0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800593D4: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x800593D8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800593DC: blez        $t6, L_80059434
    if (SIGNED(ctx->r14) <= 0) {
        // 0x800593E0: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_80059434;
    }
    // 0x800593E0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x800593E4: lui         $s0, 0x800E
    ctx->r16 = S32(0X800E << 16);
    // 0x800593E8: addiu       $s0, $s0, -0x6E30
    ctx->r16 = ADD32(ctx->r16, -0X6E30);
    // 0x800593EC: addiu       $s3, $sp, 0x30
    ctx->r19 = ADD32(ctx->r29, 0X30);
L_800593F0:
    // 0x800593F0: lw          $t7, 0x4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X4);
    // 0x800593F4: addiu       $t8, $zero, 0x6
    ctx->r24 = ADD32(0, 0X6);
    // 0x800593F8: ori         $t9, $zero, 0xFFFF
    ctx->r25 = 0 | 0XFFFF;
    // 0x800593FC: ori         $t0, $zero, 0xFFFF
    ctx->r8 = 0 | 0XFFFF;
    // 0x80059400: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80059404: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    // 0x80059408: sw          $t9, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r25;
    // 0x8005940C: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
    // 0x80059410: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80059414: jal         0x80057CA0
    // 0x80059418: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    func_80057CA0(rdram, ctx);
        goto after_0;
    // 0x80059418: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    after_0:
    // 0x8005941C: lw          $t1, 0x0($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X0);
    // 0x80059420: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80059424: slt         $at, $s1, $t1
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x80059428: bne         $at, $zero, L_800593F0
    if (ctx->r1 != 0) {
        // 0x8005942C: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_800593F0;
    }
    // 0x8005942C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80059430: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80059434:
    // 0x80059434: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x80059438: addiu       $s0, $s0, -0x2928
    ctx->r16 = ADD32(ctx->r16, -0X2928);
    // 0x8005943C: addiu       $s2, $zero, 0x7
    ctx->r18 = ADD32(0, 0X7);
L_80059440:
    // 0x80059440: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x80059444: nop

    // 0x80059448: beq         $t2, $zero, L_80059458
    if (ctx->r10 == 0) {
        // 0x8005944C: nop
    
            goto L_80059458;
    }
    // 0x8005944C: nop

    // 0x80059450: jal         0x80050FE8
    // 0x80059454: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80050FE8(rdram, ctx);
        goto after_1;
    // 0x80059454: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
L_80059458:
    // 0x80059458: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8005945C: bne         $s1, $s2, L_80059440
    if (ctx->r17 != ctx->r18) {
        // 0x80059460: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_80059440;
    }
    // 0x80059460: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80059464: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80059468: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8005946C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80059470: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80059474: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80059478: jr          $ra
    // 0x8005947C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x8005947C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80059480(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80059480: jr          $ra
    // 0x80059484: nop

    return;
    // 0x80059484: nop

;}
RECOMP_FUNC void func_80059490(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80059490: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80059494: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x80059498: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x8005949C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800594A0: sw          $zero, 0x1C70($at)
    MEM_W(0X1C70, ctx->r1) = 0;
    // 0x800594A4: addiu       $v1, $v1, -0x6C30
    ctx->r3 = ADD32(ctx->r3, -0X6C30);
    // 0x800594A8: addiu       $v0, $v0, -0x6E30
    ctx->r2 = ADD32(ctx->r2, -0X6E30);
    // 0x800594AC: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    // 0x800594B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
L_800594B4:
    // 0x800594B4: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x800594B8: sltu        $at, $v0, $v1
    ctx->r1 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x800594BC: sw          $a3, -0x8($v0)
    MEM_W(-0X8, ctx->r2) = ctx->r7;
    // 0x800594C0: bne         $at, $zero, L_800594B4
    if (ctx->r1 != 0) {
        // 0x800594C4: sw          $zero, -0x4($v0)
        MEM_W(-0X4, ctx->r2) = 0;
            goto L_800594B4;
    }
    // 0x800594C4: sw          $zero, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = 0;
    // 0x800594C8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800594CC: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x800594D0: lui         $a2, 0x800E
    ctx->r6 = S32(0X800E << 16);
    // 0x800594D4: sw          $zero, 0x1C74($at)
    MEM_W(0X1C74, ctx->r1) = 0;
    // 0x800594D8: addiu       $a2, $a2, -0x6030
    ctx->r6 = ADD32(ctx->r6, -0X6030);
    // 0x800594DC: addiu       $a1, $a1, -0x6C30
    ctx->r5 = ADD32(ctx->r5, -0X6C30);
L_800594E0:
    // 0x800594E0: jal         0x80057C40
    // 0x800594E4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_80057C40(rdram, ctx);
        goto after_0;
    // 0x800594E4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x800594E8: addiu       $a1, $a1, 0x18
    ctx->r5 = ADD32(ctx->r5, 0X18);
    // 0x800594EC: sltu        $at, $a1, $a2
    ctx->r1 = ctx->r5 < ctx->r6 ? 1 : 0;
    // 0x800594F0: bne         $at, $zero, L_800594E0
    if (ctx->r1 != 0) {
        // 0x800594F4: nop
    
            goto L_800594E0;
    }
    // 0x800594F4: nop

    // 0x800594F8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x800594FC: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80059500: addiu       $v1, $v1, -0x290C
    ctx->r3 = ADD32(ctx->r3, -0X290C);
    // 0x80059504: addiu       $v0, $v0, -0x2928
    ctx->r2 = ADD32(ctx->r2, -0X2928);
L_80059508:
    // 0x80059508: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8005950C: sltu        $at, $v0, $v1
    ctx->r1 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80059510: bne         $at, $zero, L_80059508
    if (ctx->r1 != 0) {
        // 0x80059514: sw          $zero, -0x4($v0)
        MEM_W(-0X4, ctx->r2) = 0;
            goto L_80059508;
    }
    // 0x80059514: sw          $zero, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = 0;
    // 0x80059518: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8005951C: addiu       $a1, $a1, -0x2970
    ctx->r5 = ADD32(ctx->r5, -0X2970);
    // 0x80059520: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_80059524:
    // 0x80059524: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    // 0x80059528: jal         0x80056F00
    // 0x8005952C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_80056F00(rdram, ctx);
        goto after_1;
    // 0x8005952C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_1:
    // 0x80059530: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80059534: bne         $a2, $a3, L_80059524
    if (ctx->r6 != ctx->r7) {
        // 0x80059538: addiu       $a1, $a1, 0xC
        ctx->r5 = ADD32(ctx->r5, 0XC);
            goto L_80059524;
    }
    // 0x80059538: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    // 0x8005953C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80059540: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80059544: jr          $ra
    // 0x80059548: nop

    return;
    // 0x80059548: nop

;}
RECOMP_FUNC void func_8005954C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005954C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80059550: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80059554: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80059558: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x8005955C: sw          $zero, 0x1C78($at)
    MEM_W(0X1C78, ctx->r1) = 0;
    // 0x80059560: addiu       $a1, $a1, 0x1C7C
    ctx->r5 = ADD32(ctx->r5, 0X1C7C);
    // 0x80059564: jal         0x80073EF0
    // 0x80059568: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    func_80073EF0(rdram, ctx);
        goto after_0;
    // 0x80059568: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_0:
    // 0x8005956C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80059570: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80059574: jr          $ra
    // 0x80059578: nop

    return;
    // 0x80059578: nop

;}
RECOMP_FUNC void func_8005957C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005957C: lui         $v0, 0x800E
    ctx->r2 = S32(0X800E << 16);
    // 0x80059580: addiu       $v0, $v0, -0x6C30
    ctx->r2 = ADD32(ctx->r2, -0X6C30);
    // 0x80059584: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80059588: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    // 0x8005958C: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
L_80059590:
    // 0x80059590: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80059594: nop

    // 0x80059598: beq         $a1, $t6, L_800595B8
    if (ctx->r5 == ctx->r14) {
        // 0x8005959C: nop
    
            goto L_800595B8;
    }
    // 0x8005959C: nop

    // 0x800595A0: lw          $t7, 0x8($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X8);
    // 0x800595A4: nop

    // 0x800595A8: bne         $a0, $t7, L_800595B8
    if (ctx->r4 != ctx->r15) {
        // 0x800595AC: nop
    
            goto L_800595B8;
    }
    // 0x800595AC: nop

    // 0x800595B0: b           L_800595C8
    // 0x800595B4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_800595C8;
    // 0x800595B4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_800595B8:
    // 0x800595B8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800595BC: bne         $v1, $a2, L_80059590
    if (ctx->r3 != ctx->r6) {
        // 0x800595C0: addiu       $v0, $v0, 0x18
        ctx->r2 = ADD32(ctx->r2, 0X18);
            goto L_80059590;
    }
    // 0x800595C0: addiu       $v0, $v0, 0x18
    ctx->r2 = ADD32(ctx->r2, 0X18);
    // 0x800595C4: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
L_800595C8:
    // 0x800595C8: beq         $v0, $a1, L_800595E8
    if (ctx->r2 == ctx->r5) {
        // 0x800595CC: addiu       $v1, $zero, -0x1
        ctx->r3 = ADD32(0, -0X1);
            goto L_800595E8;
    }
    // 0x800595CC: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x800595D0: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x800595D4: subu        $t8, $t8, $v0
    ctx->r24 = SUB32(ctx->r24, ctx->r2);
    // 0x800595D8: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x800595DC: addiu       $t9, $t9, -0x6C30
    ctx->r25 = ADD32(ctx->r25, -0X6C30);
    // 0x800595E0: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x800595E4: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
L_800595E8:
    // 0x800595E8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800595EC: beq         $v1, $at, L_800595FC
    if (ctx->r3 == ctx->r1) {
        // 0x800595F0: addiu       $a0, $zero, -0x1
        ctx->r4 = ADD32(0, -0X1);
            goto L_800595FC;
    }
    // 0x800595F0: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x800595F4: lw          $a0, 0xC($v1)
    ctx->r4 = MEM_W(ctx->r3, 0XC);
    // 0x800595F8: nop

L_800595FC:
    // 0x800595FC: jr          $ra
    // 0x80059600: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    return;
    // 0x80059600: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
;}
RECOMP_FUNC void func_80059604(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80059604: jr          $ra
    // 0x80059608: nop

    return;
    // 0x80059608: nop

;}
RECOMP_FUNC void func_80059610(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80059610: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80059614: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80059618: addiu       $t6, $zero, 0x2E
    ctx->r14 = ADD32(0, 0X2E);
    // 0x8005961C: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80059620: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x80059624: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x80059628: addiu       $t0, $sp, 0x18
    ctx->r8 = ADD32(ctx->r29, 0X18);
    // 0x8005962C: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x80059630: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80059634: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x80059638: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x8005963C: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x80059640: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x80059644: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80059648: jal         0x80057CA0
    // 0x8005964C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80057CA0(rdram, ctx);
        goto after_0;
    // 0x8005964C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x80059650: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80059654: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80059658: jr          $ra
    // 0x8005965C: nop

    return;
    // 0x8005965C: nop

;}
RECOMP_FUNC void func_80059660(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80059660: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80059664: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80059668: addiu       $t6, $zero, 0x2B
    ctx->r14 = ADD32(0, 0X2B);
    // 0x8005966C: addiu       $t7, $sp, 0x1C
    ctx->r15 = ADD32(ctx->r29, 0X1C);
    // 0x80059670: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x80059674: addiu       $t9, $zero, 0x14
    ctx->r25 = ADD32(0, 0X14);
    // 0x80059678: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8005967C: addiu       $t0, $sp, 0x20
    ctx->r8 = ADD32(ctx->r29, 0X20);
    // 0x80059680: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80059684: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x80059688: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x8005968C: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x80059690: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80059694: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x80059698: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8005969C: jal         0x80057CA0
    // 0x800596A0: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_80057CA0(rdram, ctx);
        goto after_0;
    // 0x800596A0: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_0:
    // 0x800596A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800596A8: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x800596AC: jr          $ra
    // 0x800596B0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800596B0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800596B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800596B4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800596B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800596BC: addiu       $t6, $zero, 0x2A
    ctx->r14 = ADD32(0, 0X2A);
    // 0x800596C0: addiu       $t7, $sp, 0x1C
    ctx->r15 = ADD32(ctx->r29, 0X1C);
    // 0x800596C4: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x800596C8: addiu       $t9, $zero, 0x14
    ctx->r25 = ADD32(0, 0X14);
    // 0x800596CC: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x800596D0: addiu       $t0, $sp, 0x20
    ctx->r8 = ADD32(ctx->r29, 0X20);
    // 0x800596D4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x800596D8: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x800596DC: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x800596E0: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x800596E4: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800596E8: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x800596EC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800596F0: jal         0x80057CA0
    // 0x800596F4: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_80057CA0(rdram, ctx);
        goto after_0;
    // 0x800596F4: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_0:
    // 0x800596F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800596FC: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x80059700: jr          $ra
    // 0x80059704: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80059704: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80059708(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80059708: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8005970C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80059710: addiu       $t6, $zero, 0x29
    ctx->r14 = ADD32(0, 0X29);
    // 0x80059714: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80059718: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x8005971C: ori         $t9, $zero, 0xFFFF
    ctx->r25 = 0 | 0XFFFF;
    // 0x80059720: addiu       $t0, $sp, 0x18
    ctx->r8 = ADD32(ctx->r29, 0X18);
    // 0x80059724: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x80059728: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8005972C: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x80059730: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x80059734: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x80059738: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x8005973C: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80059740: jal         0x80057CA0
    // 0x80059744: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_80057CA0(rdram, ctx);
        goto after_0;
    // 0x80059744: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_0:
    // 0x80059748: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005974C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80059750: jr          $ra
    // 0x80059754: nop

    return;
    // 0x80059754: nop

;}
RECOMP_FUNC void func_80059758(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80059758: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8005975C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80059760: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x80059764: addiu       $t7, $zero, 0x28
    ctx->r15 = ADD32(0, 0X28);
    // 0x80059768: addiu       $t8, $sp, 0x1C
    ctx->r24 = ADD32(ctx->r29, 0X1C);
    // 0x8005976C: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x80059770: addiu       $t0, $zero, 0x14
    ctx->r8 = ADD32(0, 0X14);
    // 0x80059774: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80059778: addiu       $t1, $sp, 0x20
    ctx->r9 = ADD32(ctx->r29, 0X20);
    // 0x8005977C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x80059780: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x80059784: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x80059788: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x8005978C: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x80059790: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x80059794: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80059798: jal         0x80057CA0
    // 0x8005979C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_80057CA0(rdram, ctx);
        goto after_0;
    // 0x8005979C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_0:
    // 0x800597A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800597A4: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x800597A8: jr          $ra
    // 0x800597AC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800597AC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800597B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800597B0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x800597B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800597B8: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x800597BC: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x800597C0: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x800597C4: jal         0x8004A0A0
    // 0x800597C8: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    func_8004A0A0(rdram, ctx);
        goto after_0;
    // 0x800597C8: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_0:
    // 0x800597CC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800597D0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x800597D4: bne         $a0, $at, L_80059810
    if (ctx->r4 != ctx->r1) {
        // 0x800597D8: addiu       $t6, $zero, 0x25
        ctx->r14 = ADD32(0, 0X25);
            goto L_80059810;
    }
    // 0x800597D8: addiu       $t6, $zero, 0x25
    ctx->r14 = ADD32(0, 0X25);
    // 0x800597DC: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800597E0: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x800597E4: addiu       $t7, $sp, 0x4C
    ctx->r15 = ADD32(ctx->r29, 0X4C);
    // 0x800597E8: addiu       $t9, $zero, 0x14
    ctx->r25 = ADD32(0, 0X14);
    // 0x800597EC: addiu       $t1, $sp, 0x18
    ctx->r9 = ADD32(ctx->r29, 0X18);
    // 0x800597F0: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x800597F4: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x800597F8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800597FC: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x80059800: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80059804: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x80059808: jal         0x80057CA0
    // 0x8005980C: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    func_80057CA0(rdram, ctx);
        goto after_1;
    // 0x8005980C: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    after_1:
L_80059810:
    // 0x80059810: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80059814: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80059818: jr          $ra
    // 0x8005981C: nop

    return;
    // 0x8005981C: nop

;}
RECOMP_FUNC void func_80059820(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80059820: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80059824: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80059828: addiu       $t6, $zero, 0x24
    ctx->r14 = ADD32(0, 0X24);
    // 0x8005982C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80059830: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x80059834: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x80059838: addiu       $t0, $sp, 0x18
    ctx->r8 = ADD32(ctx->r29, 0X18);
    // 0x8005983C: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x80059840: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80059844: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x80059848: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x8005984C: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x80059850: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x80059854: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80059858: jal         0x80057CA0
    // 0x8005985C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80057CA0(rdram, ctx);
        goto after_0;
    // 0x8005985C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_0:
    // 0x80059860: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80059864: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80059868: jr          $ra
    // 0x8005986C: nop

    return;
    // 0x8005986C: nop

;}
RECOMP_FUNC void func_80059870(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80059870: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80059874: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80059878: addiu       $t6, $zero, 0x23
    ctx->r14 = ADD32(0, 0X23);
    // 0x8005987C: addiu       $t7, $zero, 0xE
    ctx->r15 = ADD32(0, 0XE);
    // 0x80059880: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x80059884: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x80059888: addiu       $t0, $sp, 0x18
    ctx->r8 = ADD32(ctx->r29, 0X18);
    // 0x8005988C: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x80059890: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80059894: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x80059898: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x8005989C: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x800598A0: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x800598A4: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x800598A8: jal         0x80057CA0
    // 0x800598AC: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_80057CA0(rdram, ctx);
        goto after_0;
    // 0x800598AC: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_0:
    // 0x800598B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800598B4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800598B8: jr          $ra
    // 0x800598BC: nop

    return;
    // 0x800598BC: nop

;}
RECOMP_FUNC void func_800598C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800598C0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x800598C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800598C8: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x800598CC: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x800598D0: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x800598D4: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x800598D8: jal         0x8004A0A0
    // 0x800598DC: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    func_8004A0A0(rdram, ctx);
        goto after_0;
    // 0x800598DC: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    after_0:
    // 0x800598E0: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x800598E4: addiu       $t7, $zero, 0x1E
    ctx->r15 = ADD32(0, 0X1E);
    // 0x800598E8: beq         $a0, $zero, L_800598F8
    if (ctx->r4 == 0) {
        // 0x800598EC: addiu       $t8, $sp, 0x1C
        ctx->r24 = ADD32(ctx->r29, 0X1C);
            goto L_800598F8;
    }
    // 0x800598EC: addiu       $t8, $sp, 0x1C
    ctx->r24 = ADD32(ctx->r29, 0X1C);
    // 0x800598F0: b           L_80059930
    // 0x800598F4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80059930;
    // 0x800598F4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_800598F8:
    // 0x800598F8: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x800598FC: lw          $t1, 0x50($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X50);
    // 0x80059900: addiu       $t0, $zero, 0x14
    ctx->r8 = ADD32(0, 0X14);
    // 0x80059904: addiu       $t2, $sp, 0x20
    ctx->r10 = ADD32(ctx->r29, 0X20);
    // 0x80059908: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x8005990C: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x80059910: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x80059914: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
    // 0x80059918: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x8005991C: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x80059920: jal         0x80057CA0
    // 0x80059924: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    func_80057CA0(rdram, ctx);
        goto after_1;
    // 0x80059924: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    after_1:
    // 0x80059928: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x8005992C: nop

L_80059930:
    // 0x80059930: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80059934: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x80059938: jr          $ra
    // 0x8005993C: nop

    return;
    // 0x8005993C: nop

;}
RECOMP_FUNC void func_80059940(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80059940: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80059944: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x80059948: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x8005994C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80059950: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x80059954: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x80059958: lwc1        $f4, 0x0($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X0);
    // 0x8005995C: addiu       $t8, $sp, 0x1C
    ctx->r24 = ADD32(ctx->r29, 0X1C);
    // 0x80059960: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x80059964: lwc1        $f6, 0x4($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X4);
    // 0x80059968: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x8005996C: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x80059970: lwc1        $f8, 0x8($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X8);
    // 0x80059974: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x80059978: sw          $t8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r24;
    // 0x8005997C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80059980: jal         0x8004A0A0
    // 0x80059984: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    func_8004A0A0(rdram, ctx);
        goto after_0;
    // 0x80059984: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x80059988: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005998C: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x80059990: jr          $ra
    // 0x80059994: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x80059994: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80059998(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80059998: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8005999C: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x800599A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800599A4: lw          $a3, -0x28D8($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X28D8);
    // 0x800599A8: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x800599AC: jal         0x80059940
    // 0x800599B0: addiu       $t0, $zero, 0xD4
    ctx->r8 = ADD32(0, 0XD4);
    func_80059940(rdram, ctx);
        goto after_0;
    // 0x800599B0: addiu       $t0, $zero, 0xD4
    ctx->r8 = ADD32(0, 0XD4);
    after_0:
    // 0x800599B4: addiu       $s2, $sp, 0x20
    ctx->r18 = ADD32(ctx->r29, 0X20);
    // 0x800599B8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800599BC: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x800599C0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800599C4: jal         0x8004A0A0
    // 0x800599C8: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    func_8004A0A0(rdram, ctx);
        goto after_1;
    // 0x800599C8: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    after_1:
    // 0x800599CC: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x800599D0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800599D4: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x800599D8: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x800599DC: swc1        $f4, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f4.u32l;
    // 0x800599E0: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x800599E4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800599E8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800599EC: swc1        $f6, 0x18($t7)
    MEM_W(0X18, ctx->r15) = ctx->f6.u32l;
    // 0x800599F0: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x800599F4: lwc1        $f8, 0x1D28($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X1D28);
    // 0x800599F8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800599FC: swc1        $f8, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->f8.u32l;
    // 0x80059A00: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x80059A04: lwc1        $f10, 0x1D24($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X1D24);
    // 0x80059A08: lui         $t7, 0x8006
    ctx->r15 = S32(0X8006 << 16);
    // 0x80059A0C: addiu       $t6, $zero, 0x16
    ctx->r14 = ADD32(0, 0X16);
    // 0x80059A10: addiu       $t7, $t7, -0x5DCC
    ctx->r15 = ADD32(ctx->r15, -0X5DCC);
    // 0x80059A14: swc1        $f10, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f10.u32l;
    // 0x80059A18: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x80059A1C: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x80059A20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80059A24: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    // 0x80059A28: jal         0x8004A0A0
    // 0x80059A2C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    func_8004A0A0(rdram, ctx);
        goto after_2;
    // 0x80059A2C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_2:
    // 0x80059A30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80059A34: jal         0x8005C8FC
    // 0x80059A38: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_8005C8FC(rdram, ctx);
        goto after_3;
    // 0x80059A38: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_3:
    // 0x80059A3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80059A40: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80059A44: jr          $ra
    // 0x80059A48: nop

    return;
    // 0x80059A48: nop

;}
RECOMP_FUNC void func_80059A4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80059A4C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80059A50: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x80059A54: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x80059A58: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80059A5C: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80059A60: addiu       $a0, $a0, -0x28D8
    ctx->r4 = ADD32(ctx->r4, -0X28D8);
    // 0x80059A64: addiu       $v1, $v1, -0x28F8
    ctx->r3 = ADD32(ctx->r3, -0X28F8);
    // 0x80059A68: sw          $t7, -0x28FC($at)
    MEM_W(-0X28FC, ctx->r1) = ctx->r15;
    // 0x80059A6C: sw          $t6, -0x2900($at)
    MEM_W(-0X2900, ctx->r1) = ctx->r14;
    // 0x80059A70: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80059A74:
    // 0x80059A74: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x80059A78: sw          $v0, -0xC($v1)
    MEM_W(-0XC, ctx->r3) = ctx->r2;
    // 0x80059A7C: sw          $v0, -0x8($v1)
    MEM_W(-0X8, ctx->r3) = ctx->r2;
    // 0x80059A80: sw          $v0, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r2;
    // 0x80059A84: bne         $v1, $a0, L_80059A74
    if (ctx->r3 != ctx->r4) {
        // 0x80059A88: sw          $v0, -0x10($v1)
        MEM_W(-0X10, ctx->r3) = ctx->r2;
            goto L_80059A74;
    }
    // 0x80059A88: sw          $v0, -0x10($v1)
    MEM_W(-0X10, ctx->r3) = ctx->r2;
    // 0x80059A8C: jr          $ra
    // 0x80059A90: nop

    return;
    // 0x80059A90: nop

;}
RECOMP_FUNC void func_80059A94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80059A94: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x80059A98: sltiu       $at, $a0, 0xA
    ctx->r1 = ctx->r4 < 0XA ? 1 : 0;
    // 0x80059A9C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80059AA0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80059AA4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80059AA8: beq         $at, $zero, L_80059DD0
    if (ctx->r1 == 0) {
        // 0x80059AAC: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_80059DD0;
    }
    // 0x80059AAC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80059AB0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80059AB4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80059AB8: addu        $at, $at, $t6
    gpr jr_addend_80059AC4 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80059ABC: lw          $t6, 0x6220($at)
    ctx->r14 = ADD32(ctx->r1, 0X6220);
    // 0x80059AC0: nop

    // 0x80059AC4: jr          $t6
    // 0x80059AC8: nop

    switch (jr_addend_80059AC4 >> 2) {
        case 0: goto L_80059AEC; break;
        case 1: goto L_80059BA4; break;
        case 2: goto L_80059C68; break;
        case 3: goto L_80059D28; break;
        case 4: goto L_80059ACC; break;
        case 5: goto L_80059CF8; break;
        case 6: goto L_80059D08; break;
        case 7: goto L_80059D18; break;
        case 8: goto L_80059B60; break;
        case 9: goto L_80059DB4; break;
        default: switch_error(__func__, 0x80059AC4, 0x80096220);
    }
    // 0x80059AC8: nop

L_80059ACC:
    // 0x80059ACC: jal         0x80059A4C
    // 0x80059AD0: nop

    func_80059A4C(rdram, ctx);
        goto after_0;
    // 0x80059AD0: nop

    after_0:
    // 0x80059AD4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80059AD8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80059ADC: swc1        $f0, 0x1D24($at)
    MEM_W(0X1D24, ctx->r1) = ctx->f0.u32l;
    // 0x80059AE0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80059AE4: b           L_80059DD0
    // 0x80059AE8: swc1        $f0, 0x1D28($at)
    MEM_W(0X1D28, ctx->r1) = ctx->f0.u32l;
        goto L_80059DD0;
    // 0x80059AE8: swc1        $f0, 0x1D28($at)
    MEM_W(0X1D28, ctx->r1) = ctx->f0.u32l;
L_80059AEC:
    // 0x80059AEC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80059AF0: lwc1        $f4, 0x6248($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6248);
    // 0x80059AF4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80059AF8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80059AFC: lwc1        $f8, 0x624C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X624C);
    // 0x80059B00: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80059B04: addiu       $a3, $sp, 0x94
    ctx->r7 = ADD32(ctx->r29, 0X94);
    // 0x80059B08: addiu       $t0, $zero, 0xCC
    ctx->r8 = ADD32(0, 0XCC);
    // 0x80059B0C: swc1        $f4, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f4.u32l;
    // 0x80059B10: swc1        $f6, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f6.u32l;
    // 0x80059B14: jal         0x80059940
    // 0x80059B18: swc1        $f8, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f8.u32l;
    func_80059940(rdram, ctx);
        goto after_1;
    // 0x80059B18: swc1        $f8, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x80059B1C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80059B20: sw          $v0, 0x1D18($at)
    MEM_W(0X1D18, ctx->r1) = ctx->r2;
    // 0x80059B24: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80059B28: lwc1        $f10, 0x6250($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X6250);
    // 0x80059B2C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80059B30: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80059B34: lwc1        $f6, 0x6254($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6254);
    // 0x80059B38: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80059B3C: addiu       $a3, $sp, 0x94
    ctx->r7 = ADD32(ctx->r29, 0X94);
    // 0x80059B40: addiu       $t0, $zero, 0xCC
    ctx->r8 = ADD32(0, 0XCC);
    // 0x80059B44: swc1        $f10, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f10.u32l;
    // 0x80059B48: swc1        $f4, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f4.u32l;
    // 0x80059B4C: jal         0x80059940
    // 0x80059B50: swc1        $f6, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f6.u32l;
    func_80059940(rdram, ctx);
        goto after_2;
    // 0x80059B50: swc1        $f6, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x80059B54: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80059B58: b           L_80059DD0
    // 0x80059B5C: sw          $v0, 0x1D1C($at)
    MEM_W(0X1D1C, ctx->r1) = ctx->r2;
        goto L_80059DD0;
    // 0x80059B5C: sw          $v0, 0x1D1C($at)
    MEM_W(0X1D1C, ctx->r1) = ctx->r2;
L_80059B60:
    // 0x80059B60: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80059B64: lw          $a0, 0x1D18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1D18);
    // 0x80059B68: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80059B6C: beq         $v0, $a0, L_80059DD0
    if (ctx->r2 == ctx->r4) {
        // 0x80059B70: lui         $t7, 0x8009
        ctx->r15 = S32(0X8009 << 16);
            goto L_80059DD0;
    }
    // 0x80059B70: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x80059B74: lw          $t7, 0x1D1C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X1D1C);
    // 0x80059B78: nop

    // 0x80059B7C: beq         $v0, $t7, L_80059DD4
    if (ctx->r2 == ctx->r15) {
        // 0x80059B80: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80059DD4;
    }
    // 0x80059B80: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80059B84: jal         0x8005C864
    // 0x80059B88: nop

    func_8005C864(rdram, ctx);
        goto after_3;
    // 0x80059B88: nop

    after_3:
    // 0x80059B8C: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80059B90: lw          $a0, 0x1D1C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1D1C);
    // 0x80059B94: jal         0x8005C864
    // 0x80059B98: nop

    func_8005C864(rdram, ctx);
        goto after_4;
    // 0x80059B98: nop

    after_4:
    // 0x80059B9C: b           L_80059DD4
    // 0x80059BA0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80059DD4;
    // 0x80059BA0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80059BA4:
    // 0x80059BA4: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80059BA8: lw          $a0, 0x1D18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1D18);
    // 0x80059BAC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80059BB0: beq         $v0, $a0, L_80059DD0
    if (ctx->r2 == ctx->r4) {
        // 0x80059BB4: lui         $t8, 0x8009
        ctx->r24 = S32(0X8009 << 16);
            goto L_80059DD0;
    }
    // 0x80059BB4: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x80059BB8: lw          $t8, 0x1D1C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X1D1C);
    // 0x80059BBC: nop

    // 0x80059BC0: beq         $v0, $t8, L_80059DD4
    if (ctx->r2 == ctx->r24) {
        // 0x80059BC4: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80059DD4;
    }
    // 0x80059BC4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80059BC8: jal         0x8005C8FC
    // 0x80059BCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8005C8FC(rdram, ctx);
        goto after_5;
    // 0x80059BCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x80059BD0: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80059BD4: lw          $a0, 0x1D18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1D18);
    // 0x80059BD8: jal         0x8005C864
    // 0x80059BDC: nop

    func_8005C864(rdram, ctx);
        goto after_6;
    // 0x80059BDC: nop

    after_6:
    // 0x80059BE0: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80059BE4: lw          $a0, 0x1D1C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1D1C);
    // 0x80059BE8: jal         0x8005C8FC
    // 0x80059BEC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8005C8FC(rdram, ctx);
        goto after_7;
    // 0x80059BEC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
    // 0x80059BF0: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80059BF4: lw          $a0, 0x1D1C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1D1C);
    // 0x80059BF8: jal         0x8005C864
    // 0x80059BFC: nop

    func_8005C864(rdram, ctx);
        goto after_8;
    // 0x80059BFC: nop

    after_8:
    // 0x80059C00: lui         $t9, 0x700
    ctx->r25 = S32(0X700 << 16);
    // 0x80059C04: lui         $v1, 0x8006
    ctx->r3 = S32(0X8006 << 16);
    // 0x80059C08: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80059C0C: ori         $t9, $t9, 0x16
    ctx->r25 = ctx->r25 | 0X16;
    // 0x80059C10: addiu       $v1, $v1, -0x5EC8
    ctx->r3 = ADD32(ctx->r3, -0X5EC8);
    // 0x80059C14: lw          $a0, 0x1D18($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1D18);
    // 0x80059C18: sw          $t9, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r25;
    // 0x80059C1C: sw          $v1, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r3;
    // 0x80059C20: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x80059C24: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    // 0x80059C28: jal         0x8004A0A0
    // 0x80059C2C: addiu       $a2, $sp, 0x7C
    ctx->r6 = ADD32(ctx->r29, 0X7C);
    func_8004A0A0(rdram, ctx);
        goto after_9;
    // 0x80059C2C: addiu       $a2, $sp, 0x7C
    ctx->r6 = ADD32(ctx->r29, 0X7C);
    after_9:
    // 0x80059C30: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x80059C34: lui         $t6, 0x700
    ctx->r14 = S32(0X700 << 16);
    // 0x80059C38: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80059C3C: ori         $t6, $t6, 0x16
    ctx->r14 = ctx->r14 | 0X16;
    // 0x80059C40: lw          $a0, 0x1D1C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1D1C);
    // 0x80059C44: sw          $t6, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r14;
    // 0x80059C48: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    // 0x80059C4C: addiu       $a2, $sp, 0x7C
    ctx->r6 = ADD32(ctx->r29, 0X7C);
    // 0x80059C50: jal         0x8004A0A0
    // 0x80059C54: sw          $v1, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r3;
    func_8004A0A0(rdram, ctx);
        goto after_10;
    // 0x80059C54: sw          $v1, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r3;
    after_10:
    // 0x80059C58: jal         0x80059A4C
    // 0x80059C5C: nop

    func_80059A4C(rdram, ctx);
        goto after_11;
    // 0x80059C5C: nop

    after_11:
    // 0x80059C60: b           L_80059DD4
    // 0x80059C64: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80059DD4;
    // 0x80059C64: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80059C68:
    // 0x80059C68: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x80059C6C: lw          $a3, -0x28D8($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X28D8);
    // 0x80059C70: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80059C74: jal         0x80059940
    // 0x80059C78: addiu       $t0, $zero, 0xD6
    ctx->r8 = ADD32(0, 0XD6);
    func_80059940(rdram, ctx);
        goto after_12;
    // 0x80059C78: addiu       $t0, $zero, 0xD6
    ctx->r8 = ADD32(0, 0XD6);
    after_12:
    // 0x80059C7C: lui         $v1, 0x8006
    ctx->r3 = S32(0X8006 << 16);
    // 0x80059C80: addiu       $t7, $zero, 0x16
    ctx->r15 = ADD32(0, 0X16);
    // 0x80059C84: addiu       $v1, $v1, -0x5FD0
    ctx->r3 = ADD32(ctx->r3, -0X5FD0);
    // 0x80059C88: sw          $v0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r2;
    // 0x80059C8C: sw          $t7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r15;
    // 0x80059C90: sw          $v1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r3;
    // 0x80059C94: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x80059C98: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80059C9C: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    // 0x80059CA0: jal         0x8004A0A0
    // 0x80059CA4: addiu       $a2, $sp, 0x64
    ctx->r6 = ADD32(ctx->r29, 0X64);
    func_8004A0A0(rdram, ctx);
        goto after_13;
    // 0x80059CA4: addiu       $a2, $sp, 0x64
    ctx->r6 = ADD32(ctx->r29, 0X64);
    after_13:
    // 0x80059CA8: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x80059CAC: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x80059CB0: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x80059CB4: sw          $t8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r24;
    // 0x80059CB8: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    // 0x80059CBC: addiu       $a2, $sp, 0x64
    ctx->r6 = ADD32(ctx->r29, 0X64);
    // 0x80059CC0: jal         0x8004A0A0
    // 0x80059CC4: sw          $v1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r3;
    func_8004A0A0(rdram, ctx);
        goto after_14;
    // 0x80059CC4: sw          $v1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r3;
    after_14:
    // 0x80059CC8: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x80059CCC: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x80059CD0: jal         0x8004A0A0
    // 0x80059CD4: addiu       $a2, $sp, 0x64
    ctx->r6 = ADD32(ctx->r29, 0X64);
    func_8004A0A0(rdram, ctx);
        goto after_15;
    // 0x80059CD4: addiu       $a2, $sp, 0x64
    ctx->r6 = ADD32(ctx->r29, 0X64);
    after_15:
    // 0x80059CD8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80059CDC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80059CE0: lw          $t9, 0x64($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X64);
    // 0x80059CE4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80059CE8: swc1        $f8, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f8.u32l;
    // 0x80059CEC: lw          $t6, 0x64($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X64);
    // 0x80059CF0: b           L_80059DD0
    // 0x80059CF4: swc1        $f10, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->f10.u32l;
        goto L_80059DD0;
    // 0x80059CF4: swc1        $f10, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->f10.u32l;
L_80059CF8:
    // 0x80059CF8: jal         0x80059998
    // 0x80059CFC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    func_80059998(rdram, ctx);
        goto after_16;
    // 0x80059CFC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    after_16:
    // 0x80059D00: b           L_80059DD4
    // 0x80059D04: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80059DD4;
    // 0x80059D04: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80059D08:
    // 0x80059D08: jal         0x80059998
    // 0x80059D0C: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    func_80059998(rdram, ctx);
        goto after_17;
    // 0x80059D0C: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    after_17:
    // 0x80059D10: b           L_80059DD4
    // 0x80059D14: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80059DD4;
    // 0x80059D14: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80059D18:
    // 0x80059D18: jal         0x80059998
    // 0x80059D1C: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
    func_80059998(rdram, ctx);
        goto after_18;
    // 0x80059D1C: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
    after_18:
    // 0x80059D20: b           L_80059DD4
    // 0x80059D24: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80059DD4;
    // 0x80059D24: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80059D28:
    // 0x80059D28: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x80059D2C: lw          $a3, -0x28D8($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X28D8);
    // 0x80059D30: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80059D34: jal         0x80059940
    // 0x80059D38: addiu       $t0, $zero, 0x2C
    ctx->r8 = ADD32(0, 0X2C);
    func_80059940(rdram, ctx);
        goto after_19;
    // 0x80059D38: addiu       $t0, $zero, 0x2C
    ctx->r8 = ADD32(0, 0X2C);
    after_19:
    // 0x80059D3C: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x80059D40: addiu       $v1, $v1, 0x1D20
    ctx->r3 = ADD32(ctx->r3, 0X1D20);
    // 0x80059D44: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x80059D48: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80059D4C: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x80059D50: jal         0x8004A0A0
    // 0x80059D54: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    func_8004A0A0(rdram, ctx);
        goto after_20;
    // 0x80059D54: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_20:
    // 0x80059D58: addiu       $t7, $zero, 0x1F
    ctx->r15 = ADD32(0, 0X1F);
    // 0x80059D5C: sw          $t7, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r15;
    // 0x80059D60: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x80059D64: addiu       $t8, $t8, 0x1D24
    ctx->r24 = ADD32(ctx->r24, 0X1D24);
    // 0x80059D68: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x80059D6C: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80059D70: lw          $t7, 0x1D20($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X1D20);
    // 0x80059D74: sw          $t8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r24;
    // 0x80059D78: addiu       $t6, $zero, 0x14
    ctx->r14 = ADD32(0, 0X14);
    // 0x80059D7C: addiu       $t8, $sp, 0x48
    ctx->r24 = ADD32(ctx->r29, 0X48);
    // 0x80059D80: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80059D84: sw          $t6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r14;
    // 0x80059D88: sw          $t8, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r24;
    // 0x80059D8C: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    // 0x80059D90: sw          $t9, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r25;
    // 0x80059D94: jal         0x80057CA0
    // 0x80059D98: sw          $t7, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r15;
    func_80057CA0(rdram, ctx);
        goto after_21;
    // 0x80059D98: sw          $t7, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r15;
    after_21:
    // 0x80059D9C: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80059DA0: lw          $a0, 0x1D20($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1D20);
    // 0x80059DA4: jal         0x8005C8FC
    // 0x80059DA8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8005C8FC(rdram, ctx);
        goto after_22;
    // 0x80059DA8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_22:
    // 0x80059DAC: b           L_80059DD4
    // 0x80059DB0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80059DD4;
    // 0x80059DB0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80059DB4:
    // 0x80059DB4: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80059DB8: lw          $a0, 0x1D20($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1D20);
    // 0x80059DBC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80059DC0: beq         $v0, $a0, L_80059DD4
    if (ctx->r2 == ctx->r4) {
        // 0x80059DC4: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80059DD4;
    }
    // 0x80059DC4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80059DC8: jal         0x8005C8FC
    // 0x80059DCC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8005C8FC(rdram, ctx);
        goto after_23;
    // 0x80059DCC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_23:
L_80059DD0:
    // 0x80059DD0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80059DD4:
    // 0x80059DD4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80059DD8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80059DDC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80059DE0: jr          $ra
    // 0x80059DE4: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    // 0x80059DE4: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void func_80059DE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80059DE8: mtc1        $a3, $f12
    ctx->f12.u32l = ctx->r7;
    // 0x80059DEC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80059DF0: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80059DF4: swc1        $f12, 0x1D24($at)
    MEM_W(0X1D24, ctx->r1) = ctx->f12.u32l;
    // 0x80059DF8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80059DFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80059E00: swc1        $f14, 0x1D28($at)
    MEM_W(0X1D28, ctx->r1) = ctx->f14.u32l;
    // 0x80059E04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80059E08: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80059E0C: jal         0x80059A94
    // 0x80059E10: sw          $a1, -0x28D8($at)
    MEM_W(-0X28D8, ctx->r1) = ctx->r5;
    func_80059A94(rdram, ctx);
        goto after_0;
    // 0x80059E10: sw          $a1, -0x28D8($at)
    MEM_W(-0X28D8, ctx->r1) = ctx->r5;
    after_0:
    // 0x80059E14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80059E18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80059E1C: jr          $ra
    // 0x80059E20: nop

    return;
    // 0x80059E20: nop

;}
RECOMP_FUNC void func_80059E24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80059E24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80059E28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80059E2C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80059E30: jal         0x80059A94
    // 0x80059E34: sw          $a1, -0x28D8($at)
    MEM_W(-0X28D8, ctx->r1) = ctx->r5;
    func_80059A94(rdram, ctx);
        goto after_0;
    // 0x80059E34: sw          $a1, -0x28D8($at)
    MEM_W(-0X28D8, ctx->r1) = ctx->r5;
    after_0:
    // 0x80059E38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80059E3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80059E40: jr          $ra
    // 0x80059E44: nop

    return;
    // 0x80059E44: nop

;}
RECOMP_FUNC void func_80059E48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80059E48: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80059E4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80059E50: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80059E54: jal         0x80059940
    // 0x80059E58: addiu       $t0, $zero, 0x116
    ctx->r8 = ADD32(0, 0X116);
    func_80059940(rdram, ctx);
        goto after_0;
    // 0x80059E58: addiu       $t0, $zero, 0x116
    ctx->r8 = ADD32(0, 0X116);
    after_0:
    // 0x80059E5C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80059E60: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x80059E64: jal         0x8004A0A0
    // 0x80059E68: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    func_8004A0A0(rdram, ctx);
        goto after_1;
    // 0x80059E68: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_1:
    // 0x80059E6C: jal         0x80027F1C
    // 0x80059E70: nop

    func_80027F1C(rdram, ctx);
        goto after_2;
    // 0x80059E70: nop

    after_2:
    // 0x80059E74: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80059E78: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80059E7C: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x80059E80: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80059E84: cvt.s.d     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f6.fl = CVT_S_D(ctx->f0.d);
    // 0x80059E88: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80059E8C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80059E90: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80059E94: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x80059E98: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80059E9C: sub.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x80059EA0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80059EA4: add.s       $f20, $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f4.fl;
    // 0x80059EA8: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80059EAC: c.le.s      $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f2.fl <= ctx->f20.fl;
    // 0x80059EB0: nop

    // 0x80059EB4: bc1f        L_80059EC4
    if (!c1cs) {
        // 0x80059EB8: nop
    
            goto L_80059EC4;
    }
    // 0x80059EB8: nop

    // 0x80059EBC: b           L_80059EE0
    // 0x80059EC0: sub.s       $f20, $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f2.fl;
        goto L_80059EE0;
    // 0x80059EC0: sub.s       $f20, $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = ctx->f20.fl - ctx->f2.fl;
L_80059EC4:
    // 0x80059EC4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80059EC8: nop

    // 0x80059ECC: c.lt.s      $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f20.fl < ctx->f6.fl;
    // 0x80059ED0: nop

    // 0x80059ED4: bc1f        L_80059EE0
    if (!c1cs) {
        // 0x80059ED8: nop
    
            goto L_80059EE0;
    }
    // 0x80059ED8: nop

    // 0x80059EDC: add.s       $f20, $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f2.fl;
L_80059EE0:
    // 0x80059EE0: swc1        $f20, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f20.u32l;
    // 0x80059EE4: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80059EE8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80059EEC: swc1        $f10, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->f10.u32l;
    // 0x80059EF0: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80059EF4: nop

    // 0x80059EF8: swc1        $f8, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f8.u32l;
    // 0x80059EFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80059F00: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80059F04: jr          $ra
    // 0x80059F08: nop

    return;
    // 0x80059F08: nop

    // 0x80059F0C: jr          $ra
    // 0x80059F10: nop

    return;
    // 0x80059F10: nop

;}
RECOMP_FUNC void func_80059F14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80059F14: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80059F18: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x80059F1C: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
    // 0x80059F20: addiu       $s0, $s0, -0x2900
    ctx->r16 = ADD32(ctx->r16, -0X2900);
    // 0x80059F24: addiu       $s4, $sp, 0x20
    ctx->r20 = ADD32(ctx->r29, 0X20);
    // 0x80059F28: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80059F2C: addiu       $s5, $zero, 0xA
    ctx->r21 = ADD32(0, 0XA);
    // 0x80059F30: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x80059F34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
L_80059F38:
    // 0x80059F38: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80059F3C: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x80059F40: bne         $s6, $a0, L_80059F50
    if (ctx->r22 != ctx->r4) {
        // 0x80059F44: nop
    
            goto L_80059F50;
    }
    // 0x80059F44: nop

    // 0x80059F48: b           L_80059FB4
    // 0x80059F4C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80059FB4;
    // 0x80059F4C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80059F50:
    // 0x80059F50: beq         $s2, $a0, L_80059F6C
    if (ctx->r18 == ctx->r4) {
        // 0x80059F54: nop
    
            goto L_80059F6C;
    }
    // 0x80059F54: nop

    // 0x80059F58: jal         0x8004A0A0
    // 0x80059F5C: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    func_8004A0A0(rdram, ctx);
        goto after_0;
    // 0x80059F5C: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_0:
    // 0x80059F60: beq         $v0, $zero, L_80059F6C
    if (ctx->r2 == 0) {
        // 0x80059F64: nop
    
            goto L_80059F6C;
    }
    // 0x80059F64: nop

    // 0x80059F68: sw          $s2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r18;
L_80059F6C:
    // 0x80059F6C: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x80059F70: nop

    // 0x80059F74: bne         $s2, $t6, L_80059F88
    if (ctx->r18 != ctx->r14) {
        // 0x80059F78: nop
    
            goto L_80059F88;
    }
    // 0x80059F78: nop

    // 0x80059F7C: bne         $s3, $s2, L_80059F88
    if (ctx->r19 != ctx->r18) {
        // 0x80059F80: nop
    
            goto L_80059F88;
    }
    // 0x80059F80: nop

    // 0x80059F84: or          $s3, $s1, $zero
    ctx->r19 = ctx->r17 | 0;
L_80059F88:
    // 0x80059F88: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80059F8C: bne         $s1, $s5, L_80059F38
    if (ctx->r17 != ctx->r21) {
        // 0x80059F90: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_80059F38;
    }
    // 0x80059F90: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80059F94: beq         $s3, $s2, L_80059FB4
    if (ctx->r19 == ctx->r18) {
        // 0x80059F98: or          $v0, $s2, $zero
        ctx->r2 = ctx->r18 | 0;
            goto L_80059FB4;
    }
    // 0x80059F98: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x80059F9C: sll         $t7, $s3, 2
    ctx->r15 = S32(ctx->r19 << 2);
    // 0x80059FA0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80059FA4: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80059FA8: sw          $s6, -0x2900($at)
    MEM_W(-0X2900, ctx->r1) = ctx->r22;
    // 0x80059FAC: b           L_80059FB4
    // 0x80059FB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80059FB4;
    // 0x80059FB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80059FB4:
    // 0x80059FB4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80059FB8: bne         $v0, $at, L_8005A024
    if (ctx->r2 != ctx->r1) {
        // 0x80059FBC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8005A024;
    }
    // 0x80059FBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80059FC0: beq         $s7, $s2, L_80059FF0
    if (ctx->r23 == ctx->r18) {
        // 0x80059FC4: addiu       $s0, $sp, 0x48
        ctx->r16 = ADD32(ctx->r29, 0X48);
            goto L_80059FF0;
    }
    // 0x80059FC4: addiu       $s0, $sp, 0x48
    ctx->r16 = ADD32(ctx->r29, 0X48);
    // 0x80059FC8: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x80059FCC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80059FD0: jal         0x8004A0A0
    // 0x80059FD4: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_8004A0A0(rdram, ctx);
        goto after_1;
    // 0x80059FD4: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_1:
    // 0x80059FD8: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80059FDC: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x80059FE0: add.s       $f6, $f4, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f20.fl;
    // 0x80059FE4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80059FE8: jal         0x8005D1B4
    // 0x80059FEC: swc1        $f6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f6.u32l;
    func_8005D1B4(rdram, ctx);
        goto after_2;
    // 0x80059FEC: swc1        $f6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f6.u32l;
    after_2:
L_80059FF0:
    // 0x80059FF0: addiu       $s0, $sp, 0x48
    ctx->r16 = ADD32(ctx->r29, 0X48);
    // 0x80059FF4: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x80059FF8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80059FFC: addiu       $t6, $zero, 0xB
    ctx->r14 = ADD32(0, 0XB);
    // 0x8005A000: sw          $t8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r24;
    // 0x8005A004: sw          $t9, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r25;
    // 0x8005A008: sw          $zero, 0x50($sp)
    MEM_W(0X50, ctx->r29) = 0;
    // 0x8005A00C: sw          $t6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r14;
    // 0x8005A010: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x8005A014: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x8005A018: jal         0x8004A0A0
    // 0x8005A01C: addiu       $a1, $zero, 0x23
    ctx->r5 = ADD32(0, 0X23);
    func_8004A0A0(rdram, ctx);
        goto after_3;
    // 0x8005A01C: addiu       $a1, $zero, 0x23
    ctx->r5 = ADD32(0, 0X23);
    after_3:
    // 0x8005A020: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8005A024:
    // 0x8005A024: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x8005A028: jr          $ra
    // 0x8005A02C: nop

    return;
    // 0x8005A02C: nop

;}
RECOMP_FUNC void func_8005A030(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005A030: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8005A034: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8005A038: sw          $s7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r23;
    // 0x8005A03C: sw          $s6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r22;
    // 0x8005A040: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x8005A044: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x8005A048: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x8005A04C: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x8005A050: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x8005A054: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x8005A058: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8005A05C: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8005A060: lw          $t6, 0x4($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X4);
    // 0x8005A064: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x8005A068: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8005A06C: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x8005A070: addiu       $at, $zero, 0x16
    ctx->r1 = ADD32(0, 0X16);
    // 0x8005A074: bne         $t7, $at, L_8005A0B8
    if (ctx->r15 != ctx->r1) {
        // 0x8005A078: or          $a3, $a1, $zero
        ctx->r7 = ctx->r5 | 0;
            goto L_8005A0B8;
    }
    // 0x8005A078: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x8005A07C: lw          $a0, 0x8($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X8);
    // 0x8005A080: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8005A084: beq         $a0, $at, L_8005A104
    if (ctx->r4 == ctx->r1) {
        // 0x8005A088: addiu       $a1, $zero, 0x29
        ctx->r5 = ADD32(0, 0X29);
            goto L_8005A104;
    }
    // 0x8005A088: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x8005A08C: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    // 0x8005A090: jal         0x8004A0A0
    // 0x8005A094: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    func_8004A0A0(rdram, ctx);
        goto after_0;
    // 0x8005A094: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    after_0:
    // 0x8005A098: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    // 0x8005A09C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x8005A0A0: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x8005A0A4: lw          $s6, 0x8($a3)
    ctx->r22 = MEM_W(ctx->r7, 0X8);
    // 0x8005A0A8: jal         0x80059F14
    // 0x8005A0AC: addiu       $s7, $zero, -0x1
    ctx->r23 = ADD32(0, -0X1);
    func_80059F14(rdram, ctx);
        goto after_1;
    // 0x8005A0AC: addiu       $s7, $zero, -0x1
    ctx->r23 = ADD32(0, -0X1);
    after_1:
    // 0x8005A0B0: b           L_8005A108
    // 0x8005A0B4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_8005A108;
    // 0x8005A0B4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_8005A0B8:
    // 0x8005A0B8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8005A0BC: jal         0x8004A0A0
    // 0x8005A0C0: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    func_8004A0A0(rdram, ctx);
        goto after_2;
    // 0x8005A0C0: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    after_2:
    // 0x8005A0C4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8005A0C8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8005A0CC: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8005A0D0: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x8005A0D4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8005A0D8: addiu       $a3, $sp, 0x44
    ctx->r7 = ADD32(ctx->r29, 0X44);
    // 0x8005A0DC: jal         0x80059E48
    // 0x8005A0E0: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    func_80059E48(rdram, ctx);
        goto after_3;
    // 0x8005A0E0: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x8005A0E4: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x8005A0E8: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x8005A0EC: jal         0x80059E48
    // 0x8005A0F0: addiu       $a3, $sp, 0x44
    ctx->r7 = ADD32(ctx->r29, 0X44);
    func_80059E48(rdram, ctx);
        goto after_4;
    // 0x8005A0F0: addiu       $a3, $sp, 0x44
    ctx->r7 = ADD32(ctx->r29, 0X44);
    after_4:
    // 0x8005A0F4: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x8005A0F8: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x8005A0FC: jal         0x80059E48
    // 0x8005A100: addiu       $a3, $sp, 0x44
    ctx->r7 = ADD32(ctx->r29, 0X44);
    func_80059E48(rdram, ctx);
        goto after_5;
    // 0x8005A100: addiu       $a3, $sp, 0x44
    ctx->r7 = ADD32(ctx->r29, 0X44);
    after_5:
L_8005A104:
    // 0x8005A104: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_8005A108:
    // 0x8005A108: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x8005A10C: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8005A110: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x8005A114: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x8005A118: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x8005A11C: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x8005A120: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x8005A124: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x8005A128: lw          $s6, 0x34($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X34);
    // 0x8005A12C: lw          $s7, 0x38($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X38);
    // 0x8005A130: jr          $ra
    // 0x8005A134: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x8005A134: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_8005A138(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005A138: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x8005A13C: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8005A140: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x8005A144: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x8005A148: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x8005A14C: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x8005A150: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x8005A154: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8005A158: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8005A15C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8005A160: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8005A164: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8005A168: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8005A16C: lw          $a3, 0x8($a1)
    ctx->r7 = MEM_W(ctx->r5, 0X8);
    // 0x8005A170: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8005A174: or          $fp, $a1, $zero
    ctx->r30 = ctx->r5 | 0;
    // 0x8005A178: beq         $a3, $at, L_8005A1F4
    if (ctx->r7 == ctx->r1) {
        // 0x8005A17C: or          $t0, $a0, $zero
        ctx->r8 = ctx->r4 | 0;
            goto L_8005A1F4;
    }
    // 0x8005A17C: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x8005A180: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8005A184: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x8005A188: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    // 0x8005A18C: jal         0x8004A0A0
    // 0x8005A190: sw          $t0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r8;
    func_8004A0A0(rdram, ctx);
        goto after_0;
    // 0x8005A190: sw          $t0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r8;
    after_0:
    // 0x8005A194: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8005A198: lw          $t0, 0x68($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X68);
    // 0x8005A19C: lw          $t6, 0x1D18($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1D18);
    // 0x8005A1A0: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x8005A1A4: bne         $t0, $t6, L_8005A1C4
    if (ctx->r8 != ctx->r14) {
        // 0x8005A1A8: lui         $t7, 0x8009
        ctx->r15 = S32(0X8009 << 16);
            goto L_8005A1C4;
    }
    // 0x8005A1A8: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x8005A1AC: lw          $s6, 0x8($fp)
    ctx->r22 = MEM_W(ctx->r30, 0X8);
    // 0x8005A1B0: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x8005A1B4: jal         0x80059F14
    // 0x8005A1B8: addiu       $s7, $zero, 0x7
    ctx->r23 = ADD32(0, 0X7);
    func_80059F14(rdram, ctx);
        goto after_1;
    // 0x8005A1B8: addiu       $s7, $zero, 0x7
    ctx->r23 = ADD32(0, 0X7);
    after_1:
    // 0x8005A1BC: b           L_8005A1E8
    // 0x8005A1C0: lw          $t8, 0x0($fp)
    ctx->r24 = MEM_W(ctx->r30, 0X0);
        goto L_8005A1E8;
    // 0x8005A1C0: lw          $t8, 0x0($fp)
    ctx->r24 = MEM_W(ctx->r30, 0X0);
L_8005A1C4:
    // 0x8005A1C4: lw          $t7, 0x1D1C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X1D1C);
    // 0x8005A1C8: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x8005A1CC: bne         $t0, $t7, L_8005A1E4
    if (ctx->r8 != ctx->r15) {
        // 0x8005A1D0: nop
    
            goto L_8005A1E4;
    }
    // 0x8005A1D0: nop

    // 0x8005A1D4: lw          $s6, 0x8($fp)
    ctx->r22 = MEM_W(ctx->r30, 0X8);
    // 0x8005A1D8: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x8005A1DC: jal         0x80059F14
    // 0x8005A1E0: addiu       $s7, $zero, 0x7
    ctx->r23 = ADD32(0, 0X7);
    func_80059F14(rdram, ctx);
        goto after_2;
    // 0x8005A1E0: addiu       $s7, $zero, 0x7
    ctx->r23 = ADD32(0, 0X7);
    after_2:
L_8005A1E4:
    // 0x8005A1E4: lw          $t8, 0x0($fp)
    ctx->r24 = MEM_W(ctx->r30, 0X0);
L_8005A1E8:
    // 0x8005A1E8: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x8005A1EC: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x8005A1F0: sw          $t9, 0x0($fp)
    MEM_W(0X0, ctx->r30) = ctx->r25;
L_8005A1F4:
    // 0x8005A1F4: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8005A1F8: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8005A1FC: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8005A200: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8005A204: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8005A208: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8005A20C: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8005A210: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x8005A214: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x8005A218: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x8005A21C: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x8005A220: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x8005A224: jr          $ra
    // 0x8005A228: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x8005A228: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_8005A22C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005A22C: jr          $ra
    // 0x8005A230: nop

    return;
    // 0x8005A230: nop

;}
RECOMP_FUNC void func_8005A234(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005A234: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8005A238: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8005A23C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8005A240: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x8005A244: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8005A248: sw          $zero, 0x50($sp)
    MEM_W(0X50, ctx->r29) = 0;
    // 0x8005A24C: jal         0x8005C8B0
    // 0x8005A250: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    func_8005C8B0(rdram, ctx);
        goto after_0;
    // 0x8005A250: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    after_0:
    // 0x8005A254: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x8005A258: lw          $v1, 0x5C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X5C);
    // 0x8005A25C: bne         $t6, $zero, L_8005A274
    if (ctx->r14 != 0) {
        // 0x8005A260: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8005A274;
    }
    // 0x8005A260: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8005A264: jal         0x8005C8FC
    // 0x8005A268: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8005C8FC(rdram, ctx);
        goto after_1;
    // 0x8005A268: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x8005A26C: b           L_8005A33C
    // 0x8005A270: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8005A33C;
    // 0x8005A270: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8005A274:
    // 0x8005A274: lw          $v0, 0x8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X8);
    // 0x8005A278: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8005A27C: beq         $v0, $at, L_8005A338
    if (ctx->r2 == ctx->r1) {
        // 0x8005A280: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_8005A338;
    }
    // 0x8005A280: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8005A284: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8005A288: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x8005A28C: jal         0x8004A0A0
    // 0x8005A290: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    func_8004A0A0(rdram, ctx);
        goto after_2;
    // 0x8005A290: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_2:
    // 0x8005A294: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x8005A298: nop

    // 0x8005A29C: bne         $t7, $zero, L_8005A30C
    if (ctx->r15 != 0) {
        // 0x8005A2A0: nop
    
            goto L_8005A30C;
    }
    // 0x8005A2A0: nop

    // 0x8005A2A4: jal         0x8002D000
    // 0x8005A2A8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8002D000(rdram, ctx);
        goto after_3;
    // 0x8005A2A8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x8005A2AC: bne         $v0, $s0, L_8005A2BC
    if (ctx->r2 != ctx->r16) {
        // 0x8005A2B0: ori         $t8, $zero, 0x8000
        ctx->r24 = 0 | 0X8000;
            goto L_8005A2BC;
    }
    // 0x8005A2B0: ori         $t8, $zero, 0x8000
    ctx->r24 = 0 | 0X8000;
    // 0x8005A2B4: b           L_8005A310
    // 0x8005A2B8: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
        goto L_8005A310;
    // 0x8005A2B8: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
L_8005A2BC:
    // 0x8005A2BC: jal         0x8002D000
    // 0x8005A2C0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8002D000(rdram, ctx);
        goto after_4;
    // 0x8005A2C0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
    // 0x8005A2C4: bne         $v0, $s0, L_8005A2D4
    if (ctx->r2 != ctx->r16) {
        // 0x8005A2C8: ori         $t9, $zero, 0x8001
        ctx->r25 = 0 | 0X8001;
            goto L_8005A2D4;
    }
    // 0x8005A2C8: ori         $t9, $zero, 0x8001
    ctx->r25 = 0 | 0X8001;
    // 0x8005A2CC: b           L_8005A310
    // 0x8005A2D0: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
        goto L_8005A310;
    // 0x8005A2D0: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
L_8005A2D4:
    // 0x8005A2D4: jal         0x8002D000
    // 0x8005A2D8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_8002D000(rdram, ctx);
        goto after_5;
    // 0x8005A2D8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_5:
    // 0x8005A2DC: bne         $v0, $s0, L_8005A2EC
    if (ctx->r2 != ctx->r16) {
        // 0x8005A2E0: ori         $t0, $zero, 0x8002
        ctx->r8 = 0 | 0X8002;
            goto L_8005A2EC;
    }
    // 0x8005A2E0: ori         $t0, $zero, 0x8002
    ctx->r8 = 0 | 0X8002;
    // 0x8005A2E4: b           L_8005A310
    // 0x8005A2E8: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
        goto L_8005A310;
    // 0x8005A2E8: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
L_8005A2EC:
    // 0x8005A2EC: jal         0x8002D000
    // 0x8005A2F0: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_8002D000(rdram, ctx);
        goto after_6;
    // 0x8005A2F0: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_6:
    // 0x8005A2F4: bne         $v0, $s0, L_8005A304
    if (ctx->r2 != ctx->r16) {
        // 0x8005A2F8: ori         $t1, $zero, 0x8003
        ctx->r9 = 0 | 0X8003;
            goto L_8005A304;
    }
    // 0x8005A2F8: ori         $t1, $zero, 0x8003
    ctx->r9 = 0 | 0X8003;
    // 0x8005A2FC: b           L_8005A310
    // 0x8005A300: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
        goto L_8005A310;
    // 0x8005A300: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
L_8005A304:
    // 0x8005A304: b           L_8005A310
    // 0x8005A308: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
        goto L_8005A310;
    // 0x8005A308: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
L_8005A30C:
    // 0x8005A30C: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
L_8005A310:
    // 0x8005A310: addiu       $t2, $zero, 0x16
    ctx->r10 = ADD32(0, 0X16);
    // 0x8005A314: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8005A318: addiu       $t4, $zero, 0xB
    ctx->r12 = ADD32(0, 0XB);
    // 0x8005A31C: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x8005A320: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    // 0x8005A324: sw          $t4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r12;
    // 0x8005A328: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8005A32C: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    // 0x8005A330: jal         0x8004A0A0
    // 0x8005A334: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    func_8004A0A0(rdram, ctx);
        goto after_7;
    // 0x8005A334: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_7:
L_8005A338:
    // 0x8005A338: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8005A33C:
    // 0x8005A33C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8005A340: jr          $ra
    // 0x8005A344: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x8005A344: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_8005A348(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005A348: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8005A34C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005A350: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x8005A354: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8005A358: jal         0x8004A0A0
    // 0x8005A35C: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    func_8004A0A0(rdram, ctx);
        goto after_0;
    // 0x8005A35C: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    after_0:
    // 0x8005A360: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x8005A364: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8005A368: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x8005A36C: addiu       $t7, $sp, 0x4C
    ctx->r15 = ADD32(ctx->r29, 0X4C);
    // 0x8005A370: addiu       $t9, $zero, 0x14
    ctx->r25 = ADD32(0, 0X14);
    // 0x8005A374: addiu       $t6, $sp, 0x18
    ctx->r14 = ADD32(ctx->r29, 0X18);
    // 0x8005A378: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8005A37C: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x8005A380: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8005A384: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8005A388: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x8005A38C: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8005A390: jal         0x80057CA0
    // 0x8005A394: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    func_80057CA0(rdram, ctx);
        goto after_1;
    // 0x8005A394: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    after_1:
    // 0x8005A398: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005A39C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x8005A3A0: jr          $ra
    // 0x8005A3A4: nop

    return;
    // 0x8005A3A4: nop

;}
RECOMP_FUNC void func_8005A3A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005A3A8: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8005A3AC: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x8005A3B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005A3B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005A3B8: addiu       $a0, $a0, -0x7A68
    ctx->r4 = ADD32(ctx->r4, -0X7A68);
    // 0x8005A3BC: sw          $a0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r4;
    // 0x8005A3C0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8005A3C4: jal         0x8004BAEC
    // 0x8005A3C8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004BAEC(rdram, ctx);
        goto after_0;
    // 0x8005A3C8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x8005A3CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005A3D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8005A3D4: jr          $ra
    // 0x8005A3D8: nop

    return;
    // 0x8005A3D8: nop

;}
RECOMP_FUNC void func_8005A3DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005A3DC: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x8005A3E0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8005A3E4: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x8005A3E8: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x8005A3EC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8005A3F0: addiu       $a0, $a0, -0x7A68
    ctx->r4 = ADD32(ctx->r4, -0X7A68);
    // 0x8005A3F4: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8005A3F8: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8005A3FC: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8005A400: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8005A404: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8005A408: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8005A40C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8005A410: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8005A414: sw          $a0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r4;
    // 0x8005A418: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8005A41C: jal         0x8004BAEC
    // 0x8005A420: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004BAEC(rdram, ctx);
        goto after_0;
    // 0x8005A420: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x8005A424: blez        $v0, L_8005A508
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8005A428: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_8005A508;
    }
    // 0x8005A428: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8005A42C: sll         $s5, $v0, 2
    ctx->r21 = S32(ctx->r2 << 2);
    // 0x8005A430: addiu       $fp, $zero, 0x2
    ctx->r30 = ADD32(0, 0X2);
    // 0x8005A434: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
    // 0x8005A438: addiu       $s3, $sp, 0x54
    ctx->r19 = ADD32(ctx->r29, 0X54);
    // 0x8005A43C: lw          $t6, 0x74($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X74);
L_8005A440:
    // 0x8005A440: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x8005A444: addu        $t7, $t6, $s2
    ctx->r15 = ADD32(ctx->r14, ctx->r18);
    // 0x8005A448: lw          $s1, 0x0($t7)
    ctx->r17 = MEM_W(ctx->r15, 0X0);
    // 0x8005A44C: beq         $s4, $zero, L_8005A474
    if (ctx->r20 == 0) {
        // 0x8005A450: nop
    
            goto L_8005A474;
    }
    // 0x8005A450: nop

    // 0x8005A454: beq         $s4, $s7, L_8005A4A8
    if (ctx->r20 == ctx->r23) {
        // 0x8005A458: addiu       $a1, $zero, 0x11
        ctx->r5 = ADD32(0, 0X11);
            goto L_8005A4A8;
    }
    // 0x8005A458: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x8005A45C: beq         $s4, $fp, L_8005A4D8
    if (ctx->r20 == ctx->r30) {
        // 0x8005A460: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8005A4D8;
    }
    // 0x8005A460: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8005A464: beq         $s4, $at, L_8005A4EC
    if (ctx->r20 == ctx->r1) {
        // 0x8005A468: nop
    
            goto L_8005A4EC;
    }
    // 0x8005A468: nop

    // 0x8005A46C: b           L_8005A4FC
    // 0x8005A470: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
        goto L_8005A4FC;
    // 0x8005A470: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
L_8005A474:
    // 0x8005A474: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x8005A478: jal         0x8004A0A0
    // 0x8005A47C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    func_8004A0A0(rdram, ctx);
        goto after_1;
    // 0x8005A47C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_1:
    // 0x8005A480: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x8005A484: addiu       $at, $zero, -0x11
    ctx->r1 = ADD32(0, -0X11);
    // 0x8005A488: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x8005A48C: sw          $t9, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r25;
    // 0x8005A490: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x8005A494: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x8005A498: jal         0x8004A0A0
    // 0x8005A49C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    func_8004A0A0(rdram, ctx);
        goto after_2;
    // 0x8005A49C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_2:
    // 0x8005A4A0: b           L_8005A4FC
    // 0x8005A4A4: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
        goto L_8005A4FC;
    // 0x8005A4A4: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
L_8005A4A8:
    // 0x8005A4A8: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x8005A4AC: jal         0x8004A0A0
    // 0x8005A4B0: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    func_8004A0A0(rdram, ctx);
        goto after_3;
    // 0x8005A4B0: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_3:
    // 0x8005A4B4: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    // 0x8005A4B8: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x8005A4BC: ori         $t7, $t6, 0x10
    ctx->r15 = ctx->r14 | 0X10;
    // 0x8005A4C0: sw          $t7, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r15;
    // 0x8005A4C4: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x8005A4C8: jal         0x8004A0A0
    // 0x8005A4CC: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    func_8004A0A0(rdram, ctx);
        goto after_4;
    // 0x8005A4CC: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_4:
    // 0x8005A4D0: b           L_8005A4FC
    // 0x8005A4D4: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
        goto L_8005A4FC;
    // 0x8005A4D4: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
L_8005A4D8:
    // 0x8005A4D8: lw          $s0, 0x4($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X4);
    // 0x8005A4DC: jal         0x8005A348
    // 0x8005A4E0: sw          $s7, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r23;
    func_8005A348(rdram, ctx);
        goto after_5;
    // 0x8005A4E0: sw          $s7, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r23;
    after_5:
    // 0x8005A4E4: b           L_8005A4FC
    // 0x8005A4E8: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
        goto L_8005A4FC;
    // 0x8005A4E8: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
L_8005A4EC:
    // 0x8005A4EC: lw          $s0, 0x4($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X4);
    // 0x8005A4F0: jal         0x8005A348
    // 0x8005A4F4: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
    func_8005A348(rdram, ctx);
        goto after_6;
    // 0x8005A4F4: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
    after_6:
    // 0x8005A4F8: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
L_8005A4FC:
    // 0x8005A4FC: slt         $at, $s2, $s5
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x8005A500: bne         $at, $zero, L_8005A440
    if (ctx->r1 != 0) {
        // 0x8005A504: lw          $t6, 0x74($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X74);
            goto L_8005A440;
    }
    // 0x8005A504: lw          $t6, 0x74($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X74);
L_8005A508:
    // 0x8005A508: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8005A50C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8005A510: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8005A514: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8005A518: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8005A51C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8005A520: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8005A524: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8005A528: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8005A52C: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8005A530: jr          $ra
    // 0x8005A534: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x8005A534: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_8005A538(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005A538: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005A53C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005A540: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8005A544: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8005A548: jal         0x80059940
    // 0x8005A54C: addiu       $t0, $zero, 0xF8
    ctx->r8 = ADD32(0, 0XF8);
    func_80059940(rdram, ctx);
        goto after_0;
    // 0x8005A54C: addiu       $t0, $zero, 0xF8
    ctx->r8 = ADD32(0, 0XF8);
    after_0:
    // 0x8005A550: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005A554: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8005A558: jr          $ra
    // 0x8005A55C: nop

    return;
    // 0x8005A55C: nop

;}
RECOMP_FUNC void func_8005A560(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005A560: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8005A564: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005A568: jal         0x8002D000
    // 0x8005A56C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8002D000(rdram, ctx);
        goto after_0;
    // 0x8005A56C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8005A570: addiu       $s2, $sp, 0x20
    ctx->r18 = ADD32(ctx->r29, 0X20);
    // 0x8005A574: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x8005A578: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x8005A57C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8005A580: jal         0x8004A0A0
    // 0x8005A584: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8004A0A0(rdram, ctx);
        goto after_1;
    // 0x8005A584: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_1:
    // 0x8005A588: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x8005A58C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8005A590: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8005A594: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8005A598: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8005A59C: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x8005A5A0: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x8005A5A4: jal         0x80059940
    // 0x8005A5A8: addiu       $t0, $zero, 0xEB
    ctx->r8 = ADD32(0, 0XEB);
    func_80059940(rdram, ctx);
        goto after_2;
    // 0x8005A5A8: addiu       $t0, $zero, 0xEB
    ctx->r8 = ADD32(0, 0XEB);
    after_2:
    // 0x8005A5AC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8005A5B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005A5B4: sw          $v0, 0x1D10($at)
    MEM_W(0X1D10, ctx->r1) = ctx->r2;
    // 0x8005A5B8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8005A5BC: sw          $s0, 0x1D14($at)
    MEM_W(0X1D14, ctx->r1) = ctx->r16;
    // 0x8005A5C0: jr          $ra
    // 0x8005A5C4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8005A5C4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8005A5C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005A5C8: jr          $ra
    // 0x8005A5CC: nop

    return;
    // 0x8005A5CC: nop

;}
RECOMP_FUNC void func_8005A5D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005A5D8: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x8005A5DC: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x8005A5E0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8005A5E4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8005A5E8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8005A5EC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8005A5F0: beq         $a0, $at, L_8005A75C
    if (ctx->r4 == ctx->r1) {
        // 0x8005A5F4: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_8005A75C;
    }
    // 0x8005A5F4: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8005A5F8: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x8005A5FC: bne         $a0, $at, L_8005A64C
    if (ctx->r4 != ctx->r1) {
        // 0x8005A600: lui         $v0, 0x8009
        ctx->r2 = S32(0X8009 << 16);
            goto L_8005A64C;
    }
    // 0x8005A600: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8005A604: lw          $v0, 0x1D10($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1D10);
    // 0x8005A608: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8005A60C: beq         $v0, $at, L_8005A75C
    if (ctx->r2 == ctx->r1) {
        // 0x8005A610: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8005A75C;
    }
    // 0x8005A610: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8005A614: addiu       $t6, $zero, 0x14
    ctx->r14 = ADD32(0, 0X14);
    // 0x8005A618: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8005A61C: addiu       $t8, $zero, 0xB
    ctx->r24 = ADD32(0, 0XB);
    // 0x8005A620: sw          $t8, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r24;
    // 0x8005A624: sw          $t7, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r15;
    // 0x8005A628: sw          $t6, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r14;
    // 0x8005A62C: sw          $zero, 0x98($sp)
    MEM_W(0X98, ctx->r29) = 0;
    // 0x8005A630: addiu       $a1, $zero, 0x23
    ctx->r5 = ADD32(0, 0X23);
    // 0x8005A634: jal         0x8004A0A0
    // 0x8005A638: addiu       $a2, $sp, 0x90
    ctx->r6 = ADD32(ctx->r29, 0X90);
    func_8004A0A0(rdram, ctx);
        goto after_0;
    // 0x8005A638: addiu       $a2, $sp, 0x90
    ctx->r6 = ADD32(ctx->r29, 0X90);
    after_0:
    // 0x8005A63C: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x8005A640: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8005A644: b           L_8005A75C
    // 0x8005A648: sw          $t9, 0x1D10($at)
    MEM_W(0X1D10, ctx->r1) = ctx->r25;
        goto L_8005A75C;
    // 0x8005A648: sw          $t9, 0x1D10($at)
    MEM_W(0X1D10, ctx->r1) = ctx->r25;
L_8005A64C:
    // 0x8005A64C: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x8005A650: bne         $a3, $at, L_8005A6F0
    if (ctx->r7 != ctx->r1) {
        // 0x8005A654: lui         $t9, 0x8009
        ctx->r25 = S32(0X8009 << 16);
            goto L_8005A6F0;
    }
    // 0x8005A654: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x8005A658: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8005A65C: lw          $v0, 0x1D10($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1D10);
    // 0x8005A660: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8005A664: beq         $v0, $at, L_8005A75C
    if (ctx->r2 == ctx->r1) {
        // 0x8005A668: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8005A75C;
    }
    // 0x8005A668: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8005A66C: addiu       $t6, $zero, 0x14
    ctx->r14 = ADD32(0, 0X14);
    // 0x8005A670: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8005A674: addiu       $t8, $zero, 0xB
    ctx->r24 = ADD32(0, 0XB);
    // 0x8005A678: sw          $t8, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r24;
    // 0x8005A67C: sw          $t7, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r15;
    // 0x8005A680: sw          $t6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r14;
    // 0x8005A684: sw          $zero, 0x78($sp)
    MEM_W(0X78, ctx->r29) = 0;
    // 0x8005A688: addiu       $a1, $zero, 0x23
    ctx->r5 = ADD32(0, 0X23);
    // 0x8005A68C: jal         0x8004A0A0
    // 0x8005A690: addiu       $a2, $sp, 0x70
    ctx->r6 = ADD32(ctx->r29, 0X70);
    func_8004A0A0(rdram, ctx);
        goto after_1;
    // 0x8005A690: addiu       $a2, $sp, 0x70
    ctx->r6 = ADD32(ctx->r29, 0X70);
    after_1:
    // 0x8005A694: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8005A698: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x8005A69C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8005A6A0: lw          $a0, 0x1D14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1D14);
    // 0x8005A6A4: jal         0x8002D000
    // 0x8005A6A8: sw          $t9, 0x1D10($at)
    MEM_W(0X1D10, ctx->r1) = ctx->r25;
    func_8002D000(rdram, ctx);
        goto after_2;
    // 0x8005A6A8: sw          $t9, 0x1D10($at)
    MEM_W(0X1D10, ctx->r1) = ctx->r25;
    after_2:
    // 0x8005A6AC: addiu       $t6, $zero, 0x14
    ctx->r14 = ADD32(0, 0X14);
    // 0x8005A6B0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8005A6B4: addiu       $t8, $zero, 0xB
    ctx->r24 = ADD32(0, 0XB);
    // 0x8005A6B8: sw          $t8, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r24;
    // 0x8005A6BC: sw          $t7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r15;
    // 0x8005A6C0: sw          $t6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r14;
    // 0x8005A6C4: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
    // 0x8005A6C8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8005A6CC: addiu       $a1, $zero, 0x23
    ctx->r5 = ADD32(0, 0X23);
    // 0x8005A6D0: jal         0x8004A0A0
    // 0x8005A6D4: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    func_8004A0A0(rdram, ctx);
        goto after_3;
    // 0x8005A6D4: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    after_3:
    // 0x8005A6D8: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8005A6DC: lw          $a0, 0x1D14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1D14);
    // 0x8005A6E0: jal         0x8003DAB8
    // 0x8005A6E4: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    func_8003DAB8(rdram, ctx);
        goto after_4;
    // 0x8005A6E4: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    after_4:
    // 0x8005A6E8: b           L_8005A760
    // 0x8005A6EC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8005A760;
    // 0x8005A6EC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8005A6F0:
    // 0x8005A6F0: lw          $t9, 0x1D10($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X1D10);
    // 0x8005A6F4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8005A6F8: bne         $t9, $at, L_8005A710
    if (ctx->r25 != ctx->r1) {
        // 0x8005A6FC: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_8005A710;
    }
    // 0x8005A6FC: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8005A700: jal         0x8005A560
    // 0x8005A704: or          $s0, $a3, $zero
    ctx->r16 = ctx->r7 | 0;
    func_8005A560(rdram, ctx);
        goto after_5;
    // 0x8005A704: or          $s0, $a3, $zero
    ctx->r16 = ctx->r7 | 0;
    after_5:
    // 0x8005A708: b           L_8005A760
    // 0x8005A70C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8005A760;
    // 0x8005A70C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8005A710:
    // 0x8005A710: jal         0x8002D000
    // 0x8005A714: sw          $a3, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r7;
    func_8002D000(rdram, ctx);
        goto after_6;
    // 0x8005A714: sw          $a3, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r7;
    after_6:
    // 0x8005A718: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8005A71C: lw          $a0, 0x1D10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1D10);
    // 0x8005A720: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x8005A724: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    // 0x8005A728: jal         0x8004A0A0
    // 0x8005A72C: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    func_8004A0A0(rdram, ctx);
        goto after_7;
    // 0x8005A72C: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_7:
    // 0x8005A730: lw          $a3, 0xB0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XB0);
    // 0x8005A734: bne         $v0, $zero, L_8005A748
    if (ctx->r2 != 0) {
        // 0x8005A738: lui         $at, 0x8009
        ctx->r1 = S32(0X8009 << 16);
            goto L_8005A748;
    }
    // 0x8005A738: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8005A73C: sw          $a3, 0x1D14($at)
    MEM_W(0X1D14, ctx->r1) = ctx->r7;
    // 0x8005A740: b           L_8005A74C
    // 0x8005A744: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8005A74C;
    // 0x8005A744: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8005A748:
    // 0x8005A748: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8005A74C:
    // 0x8005A74C: beq         $v0, $zero, L_8005A760
    if (ctx->r2 == 0) {
        // 0x8005A750: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8005A760;
    }
    // 0x8005A750: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8005A754: jal         0x8005A560
    // 0x8005A758: or          $s0, $a3, $zero
    ctx->r16 = ctx->r7 | 0;
    func_8005A560(rdram, ctx);
        goto after_8;
    // 0x8005A758: or          $s0, $a3, $zero
    ctx->r16 = ctx->r7 | 0;
    after_8:
L_8005A75C:
    // 0x8005A75C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8005A760:
    // 0x8005A760: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8005A764: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8005A768: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8005A76C: jr          $ra
    // 0x8005A770: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x8005A770: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_8005A774(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005A774: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8005A778: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005A77C: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x8005A780: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x8005A784: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    // 0x8005A788: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x8005A78C: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x8005A790: jal         0x8004A0A0
    // 0x8005A794: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    func_8004A0A0(rdram, ctx);
        goto after_0;
    // 0x8005A794: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_0:
    // 0x8005A798: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8005A79C: nop

    // 0x8005A7A0: sltiu       $at, $a0, 0x6
    ctx->r1 = ctx->r4 < 0X6 ? 1 : 0;
    // 0x8005A7A4: beq         $at, $zero, L_8005A844
    if (ctx->r1 == 0) {
        // 0x8005A7A8: sll         $t7, $a0, 2
        ctx->r15 = S32(ctx->r4 << 2);
            goto L_8005A844;
    }
    // 0x8005A7A8: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x8005A7AC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8005A7B0: addu        $at, $at, $t7
    gpr jr_addend_8005A7BC = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8005A7B4: lw          $t7, 0x6258($at)
    ctx->r15 = ADD32(ctx->r1, 0X6258);
    // 0x8005A7B8: nop

    // 0x8005A7BC: jr          $t7
    // 0x8005A7C0: nop

    switch (jr_addend_8005A7BC >> 2) {
        case 0: goto L_8005A7C4; break;
        case 1: goto L_8005A7D0; break;
        case 2: goto L_8005A844; break;
        case 3: goto L_8005A7F4; break;
        case 4: goto L_8005A800; break;
        case 5: goto L_8005A80C; break;
        default: switch_error(__func__, 0x8005A7BC, 0x80096258);
    }
    // 0x8005A7C0: nop

L_8005A7C4:
    // 0x8005A7C4: addiu       $t8, $zero, 0x16
    ctx->r24 = ADD32(0, 0X16);
    // 0x8005A7C8: b           L_8005A814
    // 0x8005A7CC: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
        goto L_8005A814;
    // 0x8005A7CC: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
L_8005A7D0:
    // 0x8005A7D0: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x8005A7D4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8005A7D8: bne         $t9, $at, L_8005A7EC
    if (ctx->r25 != ctx->r1) {
        // 0x8005A7DC: addiu       $t1, $zero, 0x19
        ctx->r9 = ADD32(0, 0X19);
            goto L_8005A7EC;
    }
    // 0x8005A7DC: addiu       $t1, $zero, 0x19
    ctx->r9 = ADD32(0, 0X19);
    // 0x8005A7E0: addiu       $t0, $zero, 0x18
    ctx->r8 = ADD32(0, 0X18);
    // 0x8005A7E4: b           L_8005A814
    // 0x8005A7E8: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
        goto L_8005A814;
    // 0x8005A7E8: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
L_8005A7EC:
    // 0x8005A7EC: b           L_8005A814
    // 0x8005A7F0: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
        goto L_8005A814;
    // 0x8005A7F0: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
L_8005A7F4:
    // 0x8005A7F4: addiu       $t2, $zero, 0x1A
    ctx->r10 = ADD32(0, 0X1A);
    // 0x8005A7F8: b           L_8005A814
    // 0x8005A7FC: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
        goto L_8005A814;
    // 0x8005A7FC: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
L_8005A800:
    // 0x8005A800: addiu       $t3, $zero, 0x1B
    ctx->r11 = ADD32(0, 0X1B);
    // 0x8005A804: b           L_8005A814
    // 0x8005A808: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
        goto L_8005A814;
    // 0x8005A808: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
L_8005A80C:
    // 0x8005A80C: addiu       $t4, $zero, 0x1C
    ctx->r12 = ADD32(0, 0X1C);
    // 0x8005A810: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
L_8005A814:
    // 0x8005A814: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x8005A818: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8005A81C: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x8005A820: addiu       $t7, $zero, 0x14
    ctx->r15 = ADD32(0, 0X14);
    // 0x8005A824: addiu       $t9, $sp, 0x18
    ctx->r25 = ADD32(ctx->r29, 0X18);
    // 0x8005A828: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x8005A82C: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x8005A830: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8005A834: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x8005A838: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x8005A83C: jal         0x80057CA0
    // 0x8005A840: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    func_80057CA0(rdram, ctx);
        goto after_1;
    // 0x8005A840: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    after_1:
L_8005A844:
    // 0x8005A844: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005A848: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x8005A84C: jr          $ra
    // 0x8005A850: nop

    return;
    // 0x8005A850: nop

;}
