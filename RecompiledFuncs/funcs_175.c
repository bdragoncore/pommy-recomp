#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_enemy_world2_1AE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001AE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43001AEC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x43001AF0: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x43001AF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43001AF8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x43001AFC: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x43001B00: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x43001B04: jal         0x43004880
    // 0x43001B08: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    ovl_enemy_world2_4880(rdram, ctx);
        goto after_0;
    // 0x43001B08: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x43001B0C: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x43001B10: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x43001B14: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x43001B18: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x43001B1C: nop

    // 0x43001B20: bc1f        L_43001BC8
    if (!c1cs) {
        // 0x43001B24: nop
    
            goto L_43001BC8;
    }
    // 0x43001B24: nop

    // 0x43001B28: lwc1        $f0, 0x184($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X184);
    // 0x43001B2C: neg.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = -ctx->f12.fl;
    // 0x43001B30: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x43001B34: nop

    // 0x43001B38: bc1f        L_43001B84
    if (!c1cs) {
        // 0x43001B3C: nop
    
            goto L_43001B84;
    }
    // 0x43001B3C: nop

    // 0x43001B40: lw          $t6, 0x19C($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X19C);
    // 0x43001B44: nop

    // 0x43001B48: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x43001B4C: nop

    // 0x43001B50: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x43001B54: add.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f2.fl;
    // 0x43001B58: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x43001B5C: nop

    // 0x43001B60: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x43001B64: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x43001B68: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x43001B6C: nop

    // 0x43001B70: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x43001B74: mfc1        $t8, $f10
    ctx->r24 = (int32_t)ctx->f10.u32l;
    // 0x43001B78: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x43001B7C: b           L_43001C10
    // 0x43001B80: sw          $t8, 0x19C($a1)
    MEM_W(0X19C, ctx->r5) = ctx->r24;
        goto L_43001C10;
    // 0x43001B80: sw          $t8, 0x19C($a1)
    MEM_W(0X19C, ctx->r5) = ctx->r24;
L_43001B84:
    // 0x43001B84: lw          $t9, 0x19C($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X19C);
    // 0x43001B88: nop

    // 0x43001B8C: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x43001B90: nop

    // 0x43001B94: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x43001B98: add.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f0.fl;
    // 0x43001B9C: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x43001BA0: nop

    // 0x43001BA4: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x43001BA8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x43001BAC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x43001BB0: nop

    // 0x43001BB4: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x43001BB8: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x43001BBC: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x43001BC0: b           L_43001C10
    // 0x43001BC4: sw          $t1, 0x19C($a1)
    MEM_W(0X19C, ctx->r5) = ctx->r9;
        goto L_43001C10;
    // 0x43001BC4: sw          $t1, 0x19C($a1)
    MEM_W(0X19C, ctx->r5) = ctx->r9;
L_43001BC8:
    // 0x43001BC8: lw          $t2, 0x19C($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X19C);
    // 0x43001BCC: nop

    // 0x43001BD0: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x43001BD4: nop

    // 0x43001BD8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x43001BDC: sub.s       $f16, $f10, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f12.fl;
    // 0x43001BE0: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x43001BE4: nop

    // 0x43001BE8: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x43001BEC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x43001BF0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x43001BF4: nop

    // 0x43001BF8: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x43001BFC: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    // 0x43001C00: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x43001C04: bgez        $t4, L_43001C10
    if (SIGNED(ctx->r12) >= 0) {
        // 0x43001C08: sw          $t4, 0x19C($a1)
        MEM_W(0X19C, ctx->r5) = ctx->r12;
            goto L_43001C10;
    }
    // 0x43001C08: sw          $t4, 0x19C($a1)
    MEM_W(0X19C, ctx->r5) = ctx->r12;
    // 0x43001C0C: sw          $zero, 0x19C($a1)
    MEM_W(0X19C, ctx->r5) = 0;
L_43001C10:
    // 0x43001C10: lwc1        $f4, 0x184($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X184);
    // 0x43001C14: nop

    // 0x43001C18: add.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f12.fl;
    // 0x43001C1C: swc1        $f6, 0x184($a1)
    MEM_W(0X184, ctx->r5) = ctx->f6.u32l;
    // 0x43001C20: lw          $t6, 0x10($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X10);
    // 0x43001C24: lwc1        $f0, 0x184($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X184);
    // 0x43001C28: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x43001C2C: nop

    // 0x43001C30: cvt.s.w     $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    ctx->f2.fl = CVT_S_W(ctx->f8.u32l);
    // 0x43001C34: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x43001C38: nop

    // 0x43001C3C: bc1f        L_43001C50
    if (!c1cs) {
        // 0x43001C40: nop
    
            goto L_43001C50;
    }
    // 0x43001C40: nop

    // 0x43001C44: swc1        $f2, 0x184($a1)
    MEM_W(0X184, ctx->r5) = ctx->f2.u32l;
    // 0x43001C48: lwc1        $f0, 0x184($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X184);
    // 0x43001C4C: nop

L_43001C50:
    // 0x43001C50: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x43001C54: nop

    // 0x43001C58: bc1f        L_43001C6C
    if (!c1cs) {
        // 0x43001C5C: nop
    
            goto L_43001C6C;
    }
    // 0x43001C5C: nop

    // 0x43001C60: swc1        $f14, 0x184($a1)
    MEM_W(0X184, ctx->r5) = ctx->f14.u32l;
    // 0x43001C64: lwc1        $f0, 0x184($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X184);
    // 0x43001C68: nop

L_43001C6C:
    // 0x43001C6C: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x43001C70: lw          $t9, 0x19C($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X19C);
    // 0x43001C74: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x43001C78: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x43001C7C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x43001C80: nop

    // 0x43001C84: cvt.w.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = CVT_W_S(ctx->f0.fl);
    // 0x43001C88: mfc1        $v1, $f10
    ctx->r3 = (int32_t)ctx->f10.u32l;
    // 0x43001C8C: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x43001C90: sw          $v1, 0x198($a1)
    MEM_W(0X198, ctx->r5) = ctx->r3;
    // 0x43001C94: lw          $t8, 0x10($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X10);
    // 0x43001C98: addu        $t0, $v1, $t9
    ctx->r8 = ADD32(ctx->r3, ctx->r25);
    // 0x43001C9C: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x43001CA0: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x43001CA4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x43001CA8: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x43001CAC: c.lt.s      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.fl < ctx->f6.fl;
    // 0x43001CB0: nop

    // 0x43001CB4: bc1f        L_43001D04
    if (!c1cs) {
        // 0x43001CB8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43001D04;
    }
    // 0x43001CB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43001CBC: sw          $zero, 0x19C($a1)
    MEM_W(0X19C, ctx->r5) = 0;
    // 0x43001CC0: lw          $t1, 0x10($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X10);
    // 0x43001CC4: nop

    // 0x43001CC8: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x43001CCC: nop

    // 0x43001CD0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x43001CD4: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x43001CD8: nop

    // 0x43001CDC: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x43001CE0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x43001CE4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x43001CE8: nop

    // 0x43001CEC: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x43001CF0: mfc1        $t3, $f16
    ctx->r11 = (int32_t)ctx->f16.u32l;
    // 0x43001CF4: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x43001CF8: sw          $t3, 0x198($a1)
    MEM_W(0X198, ctx->r5) = ctx->r11;
    // 0x43001CFC: nop

    // 0x43001D00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43001D04:
    // 0x43001D04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43001D08: jr          $ra
    // 0x43001D0C: nop

    return;
    // 0x43001D0C: nop

;}
RECOMP_FUNC void ovl_enemy_world2_1D10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001D10: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x43001D14: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43001D18: nop

    // 0x43001D1C: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x43001D20: nop

    // 0x43001D24: bc1f        L_43001D34
    if (!c1cs) {
        // 0x43001D28: nop
    
            goto L_43001D34;
    }
    // 0x43001D28: nop

    // 0x43001D2C: b           L_43001D38
    // 0x43001D30: swc1        $f0, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->f0.u32l;
        goto L_43001D38;
    // 0x43001D30: swc1        $f0, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->f0.u32l;
L_43001D34:
    // 0x43001D34: swc1        $f12, 0x184($a0)
    MEM_W(0X184, ctx->r4) = ctx->f12.u32l;
L_43001D38:
    // 0x43001D38: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x43001D3C: lwc1        $f4, 0x184($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X184);
    // 0x43001D40: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x43001D44: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x43001D48: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x43001D4C: nop

    // 0x43001D50: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x43001D54: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x43001D58: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x43001D5C: jr          $ra
    // 0x43001D60: sw          $t7, 0x198($a0)
    MEM_W(0X198, ctx->r4) = ctx->r15;
    return;
    // 0x43001D60: sw          $t7, 0x198($a0)
    MEM_W(0X198, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void ovl_enemy_world2_1D64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001D64: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43001D68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43001D6C: lwc1        $f4, 0x188($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X188);
    // 0x43001D70: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x43001D74: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x43001D78: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x43001D7C: jal         0x43001AE8
    // 0x43001D80: nop

    ovl_enemy_world2_1AE8(rdram, ctx);
        goto after_0;
    // 0x43001D80: nop

    after_0:
    // 0x43001D84: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43001D88: jal         0x43003AFC
    // 0x43001D8C: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    ovl_enemy_world2_3AFC(rdram, ctx);
        goto after_1;
    // 0x43001D8C: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    after_1:
    // 0x43001D90: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x43001D94: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x43001D98: nop

    // 0x43001D9C: swc1        $f8, 0x188($t6)
    MEM_W(0X188, ctx->r14) = ctx->f8.u32l;
    // 0x43001DA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43001DA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43001DA8: jr          $ra
    // 0x43001DAC: nop

    return;
    // 0x43001DAC: nop

;}
RECOMP_FUNC void ovl_enemy_world2_1DB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001DB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43001DB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43001DB8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x43001DBC: jal         0x430014E4
    // 0x43001DC0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_enemy_world2_14E4(rdram, ctx);
        goto after_0;
    // 0x43001DC0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x43001DC4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43001DC8: jal         0x43001554
    // 0x43001DCC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_enemy_world2_1554(rdram, ctx);
        goto after_1;
    // 0x43001DCC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x43001DD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43001DD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43001DD8: jr          $ra
    // 0x43001DDC: nop

    return;
    // 0x43001DDC: nop

;}
RECOMP_FUNC void ovl_enemy_world2_1DE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001DE0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43001DE4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43001DE8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43001DEC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43001DF0: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x43001DF4: bne         $a1, $zero, L_43001E10
    if (ctx->r5 != 0) {
        // 0x43001DF8: sw          $a3, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r7;
            goto L_43001E10;
    }
    // 0x43001DF8: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x43001DFC: lw          $t6, 0x54($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X54);
    // 0x43001E00: nop

    // 0x43001E04: andi        $t7, $t6, 0x4000
    ctx->r15 = ctx->r14 & 0X4000;
    // 0x43001E08: bne         $t7, $zero, L_43001EBC
    if (ctx->r15 != 0) {
        // 0x43001E0C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_43001EBC;
    }
    // 0x43001E0C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43001E10:
    // 0x43001E10: lw          $v0, 0x54($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X54);
    // 0x43001E14: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x43001E18: andi        $t8, $v0, 0x2000
    ctx->r24 = ctx->r2 & 0X2000;
    // 0x43001E1C: beq         $t8, $zero, L_43001E50
    if (ctx->r24 == 0) {
        // 0x43001E20: or          $t9, $v0, $at
        ctx->r25 = ctx->r2 | ctx->r1;
            goto L_43001E50;
    }
    // 0x43001E20: or          $t9, $v0, $at
    ctx->r25 = ctx->r2 | ctx->r1;
    // 0x43001E24: sw          $t9, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r25;
    // 0x43001E28: jal         0x43004BCC
    // 0x43001E2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world2_4BCC(rdram, ctx);
        goto after_0;
    // 0x43001E2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x43001E30: lw          $t0, 0x54($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X54);
    // 0x43001E34: lui         $at, 0xBFFF
    ctx->r1 = S32(0XBFFF << 16);
    // 0x43001E38: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x43001E3C: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x43001E40: addiu       $at, $zero, -0x2801
    ctx->r1 = ADD32(0, -0X2801);
    // 0x43001E44: sw          $t1, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r9;
    // 0x43001E48: and         $t3, $t1, $at
    ctx->r11 = ctx->r9 & ctx->r1;
    // 0x43001E4C: sw          $t3, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r11;
L_43001E50:
    // 0x43001E50: jal         0x43001DB0
    // 0x43001E54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world2_1DB0(rdram, ctx);
        goto after_1;
    // 0x43001E54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x43001E58: lw          $t4, 0x54($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X54);
    // 0x43001E5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43001E60: ori         $t5, $t4, 0x8000
    ctx->r13 = ctx->r12 | 0X8000;
    // 0x43001E64: jal         0x43001D64
    // 0x43001E68: sw          $t5, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r13;
    ovl_enemy_world2_1D64(rdram, ctx);
        goto after_2;
    // 0x43001E68: sw          $t5, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r13;
    after_2:
    // 0x43001E6C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43001E70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43001E74: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x43001E78: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x43001E7C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x43001E80: jal         0x430010F0
    // 0x43001E84: nop

    ovl_enemy_world2_10F0(rdram, ctx);
        goto after_3;
    // 0x43001E84: nop

    after_3:
    // 0x43001E88: lw          $t6, 0x54($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X54);
    // 0x43001E8C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x43001E90: andi        $t7, $t6, 0x8
    ctx->r15 = ctx->r14 & 0X8;
    // 0x43001E94: bne         $t7, $zero, L_43001EB0
    if (ctx->r15 != 0) {
        // 0x43001E98: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43001EB0;
    }
    // 0x43001E98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43001E9C: beq         $t8, $zero, L_43001EB0
    if (ctx->r24 == 0) {
        // 0x43001EA0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_43001EB0;
    }
    // 0x43001EA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43001EA4: jal         0x430014D8
    // 0x43001EA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world2_14D8(rdram, ctx);
        goto after_4;
    // 0x43001EA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x43001EAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_43001EB0:
    // 0x43001EB0: jal         0x43001EC8
    // 0x43001EB4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_enemy_world2_1EC8(rdram, ctx);
        goto after_5;
    // 0x43001EB4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_5:
    // 0x43001EB8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43001EBC:
    // 0x43001EBC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43001EC0: jr          $ra
    // 0x43001EC4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x43001EC4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_enemy_world2_1EC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001EC8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x43001ECC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43001ED0: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x43001ED4: lw          $v0, 0x214($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X214);
    // 0x43001ED8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x43001EDC: beq         $v0, $at, L_43001F0C
    if (ctx->r2 == ctx->r1) {
        // 0x43001EE0: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_43001F0C;
    }
    // 0x43001EE0: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x43001EE4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x43001EE8: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x43001EEC: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    // 0x43001EF0: addiu       $a1, $zero, 0x22
    ctx->r5 = ADD32(0, 0X22);
    // 0x43001EF4: jal         0x430006C4
    // 0x43001EF8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_enemy_world2_6C4(rdram, ctx);
        goto after_0;
    // 0x43001EF8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x43001EFC: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x43001F00: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x43001F04: sw          $t6, 0x214($a3)
    MEM_W(0X214, ctx->r7) = ctx->r14;
    // 0x43001F08: sw          $zero, 0x218($a3)
    MEM_W(0X218, ctx->r7) = 0;
L_43001F0C:
    // 0x43001F0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43001F10: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x43001F14: jr          $ra
    // 0x43001F18: nop

    return;
    // 0x43001F18: nop

;}
RECOMP_FUNC void ovl_enemy_world2_1F1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001F1C: lw          $t6, 0x54($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X54);
    // 0x43001F20: nop

    // 0x43001F24: andi        $t7, $t6, 0x1000
    ctx->r15 = ctx->r14 & 0X1000;
    // 0x43001F28: bne         $t7, $zero, L_43001F40
    if (ctx->r15 != 0) {
        // 0x43001F2C: nop
    
            goto L_43001F40;
    }
    // 0x43001F2C: nop

    // 0x43001F30: lwc1        $f4, 0x1D0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X1D0);
    // 0x43001F34: lwc1        $f6, 0x1AC($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X1AC);
    // 0x43001F38: swc1        $f4, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f4.u32l;
    // 0x43001F3C: swc1        $f6, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f6.u32l;
L_43001F40:
    // 0x43001F40: jr          $ra
    // 0x43001F44: nop

    return;
    // 0x43001F44: nop

;}
RECOMP_FUNC void ovl_enemy_world2_1F48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001F48: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x43001F4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43001F50: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x43001F54: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x43001F58: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x43001F5C: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x43001F60: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x43001F64: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    // 0x43001F68: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x43001F6C: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    // 0x43001F70: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x43001F74: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    // 0x43001F78: swc1        $f14, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f14.u32l;
    // 0x43001F7C: jal         0x43005218
    // 0x43001F80: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    ovl_enemy_world2_5218(rdram, ctx);
        goto after_0;
    // 0x43001F80: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x43001F84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43001F88: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x43001F8C: jr          $ra
    // 0x43001F90: nop

    return;
    // 0x43001F90: nop

;}
RECOMP_FUNC void ovl_enemy_world2_1F94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001F94: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x43001F98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43001F9C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x43001FA0: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x43001FA4: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x43001FA8: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x43001FAC: lw          $t6, 0x214($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X214);
    // 0x43001FB0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x43001FB4: beq         $t6, $at, L_43001FD0
    if (ctx->r14 == ctx->r1) {
        // 0x43001FB8: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_43001FD0;
    }
    // 0x43001FB8: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x43001FBC: lw          $a1, 0x218($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X218);
    // 0x43001FC0: jal         0x43001EC8
    // 0x43001FC4: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    ovl_enemy_world2_1EC8(rdram, ctx);
        goto after_0;
    // 0x43001FC4: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    after_0:
    // 0x43001FC8: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x43001FCC: nop

L_43001FD0:
    // 0x43001FD0: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x43001FD4: lui         $t9, 0x4301
    ctx->r25 = S32(0X4301 << 16);
    // 0x43001FD8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x43001FDC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x43001FE0: lw          $t9, -0x6030($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X6030);
    // 0x43001FE4: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x43001FE8: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x43001FEC: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x43001FF0: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x43001FF4: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x43001FF8: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    // 0x43001FFC: swc1        $f8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f8.u32l;
    // 0x43002000: lw          $a0, 0x8($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X8);
    // 0x43002004: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    // 0x43002008: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    // 0x4300200C: jal         0x430006C4
    // 0x43002010: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_enemy_world2_6C4(rdram, ctx);
        goto after_1;
    // 0x43002010: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x43002014: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x43002018: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x4300201C: nop

    // 0x43002020: sw          $t0, 0x214($a3)
    MEM_W(0X214, ctx->r7) = ctx->r8;
    // 0x43002024: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x43002028: nop

    // 0x4300202C: sw          $t1, 0x218($a3)
    MEM_W(0X218, ctx->r7) = ctx->r9;
    // 0x43002030: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43002034: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x43002038: jr          $ra
    // 0x4300203C: nop

    return;
    // 0x4300203C: nop

;}
RECOMP_FUNC void ovl_enemy_world2_2040(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43002040: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x43002044: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43002048: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4300204C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43002050: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x43002054: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x43002058: jal         0x430006C4
    // 0x4300205C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    ovl_enemy_world2_6C4(rdram, ctx);
        goto after_0;
    // 0x4300205C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_0:
    // 0x43002060: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43002064: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x43002068: jal         0x43005218
    // 0x4300206C: addiu       $a2, $s0, 0x1EC
    ctx->r6 = ADD32(ctx->r16, 0X1EC);
    ovl_enemy_world2_5218(rdram, ctx);
        goto after_1;
    // 0x4300206C: addiu       $a2, $s0, 0x1EC
    ctx->r6 = ADD32(ctx->r16, 0X1EC);
    after_1:
    // 0x43002070: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43002074: lwc1        $f4, -0x5E08($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X5E08);
    // 0x43002078: lwc1        $f0, 0x1F0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X1F0);
    // 0x4300207C: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x43002080: c.eq.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl == ctx->f0.fl;
    // 0x43002084: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x43002088: bc1f        L_430020A4
    if (!c1cs) {
        // 0x4300208C: lui         $at, 0x4120
        ctx->r1 = S32(0X4120 << 16);
            goto L_430020A4;
    }
    // 0x4300208C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x43002090: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x43002094: nop

    // 0x43002098: swc1        $f6, 0x1F0($s0)
    MEM_W(0X1F0, ctx->r16) = ctx->f6.u32l;
    // 0x4300209C: lwc1        $f0, 0x1F0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X1F0);
    // 0x430020A0: nop

L_430020A4:
    // 0x430020A4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x430020A8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x430020AC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x430020B0: swc1        $f0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f0.u32l;
    // 0x430020B4: add.s       $f2, $f0, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f10.fl;
    // 0x430020B8: swc1        $f8, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f8.u32l;
    // 0x430020BC: c.le.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl <= ctx->f2.fl;
    // 0x430020C0: nop

    // 0x430020C4: bc1f        L_430020D8
    if (!c1cs) {
        // 0x430020C8: nop
    
            goto L_430020D8;
    }
    // 0x430020C8: nop

    // 0x430020CC: sub.s       $f16, $f2, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x430020D0: b           L_430020DC
    // 0x430020D4: swc1        $f16, 0x1F0($s0)
    MEM_W(0X1F0, ctx->r16) = ctx->f16.u32l;
        goto L_430020DC;
    // 0x430020D4: swc1        $f16, 0x1F0($s0)
    MEM_W(0X1F0, ctx->r16) = ctx->f16.u32l;
L_430020D8:
    // 0x430020D8: swc1        $f2, 0x1F0($s0)
    MEM_W(0X1F0, ctx->r16) = ctx->f2.u32l;
L_430020DC:
    // 0x430020DC: lwc1        $f18, 0x1F0($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X1F0);
    // 0x430020E0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x430020E4: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    // 0x430020E8: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x430020EC: jal         0x430006C4
    // 0x430020F0: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_enemy_world2_6C4(rdram, ctx);
        goto after_2;
    // 0x430020F0: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_2:
    // 0x430020F4: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x430020F8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x430020FC: lwc1        $f0, 0x1F0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X1F0);
    // 0x43002100: nop

    // 0x43002104: c.le.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl <= ctx->f0.fl;
    // 0x43002108: nop

    // 0x4300210C: bc1f        L_43002120
    if (!c1cs) {
        // 0x43002110: nop
    
            goto L_43002120;
    }
    // 0x43002110: nop

    // 0x43002114: sub.s       $f4, $f0, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x43002118: b           L_43002124
    // 0x4300211C: swc1        $f4, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f4.u32l;
        goto L_43002124;
    // 0x4300211C: swc1        $f4, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f4.u32l;
L_43002120:
    // 0x43002120: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
L_43002124:
    // 0x43002124: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43002128: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x4300212C: jr          $ra
    // 0x43002130: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x43002130: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_enemy_world2_2134(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43002134: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x43002138: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x4300213C: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x43002140: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43002144: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x43002148: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    // 0x4300214C: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    // 0x43002150: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    // 0x43002154: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x43002158: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x4300215C: jal         0x430006C4
    // 0x43002160: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    ovl_enemy_world2_6C4(rdram, ctx);
        goto after_0;
    // 0x43002160: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    after_0:
    // 0x43002164: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43002168: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x4300216C: jr          $ra
    // 0x43002170: nop

    return;
    // 0x43002170: nop

;}
RECOMP_FUNC void ovl_enemy_world2_2174(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43002174: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x43002178: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4300217C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x43002180: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x43002184: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x43002188: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x4300218C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x43002190: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x43002194: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x43002198: jal         0x430006C4
    // 0x4300219C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_enemy_world2_6C4(rdram, ctx);
        goto after_0;
    // 0x4300219C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x430021A0: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x430021A4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x430021A8: beq         $v0, $at, L_430021C4
    if (ctx->r2 == ctx->r1) {
        // 0x430021AC: addiu       $a1, $zero, 0x27
        ctx->r5 = ADD32(0, 0X27);
            goto L_430021C4;
    }
    // 0x430021AC: addiu       $a1, $zero, 0x27
    ctx->r5 = ADD32(0, 0X27);
    // 0x430021B0: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x430021B4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x430021B8: lw          $a0, 0x8($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X8);
    // 0x430021BC: jal         0x430006C4
    // 0x430021C0: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_enemy_world2_6C4(rdram, ctx);
        goto after_1;
    // 0x430021C0: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_1:
L_430021C4:
    // 0x430021C4: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x430021C8: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x430021CC: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x430021D0: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x430021D4: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    // 0x430021D8: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x430021DC: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x430021E0: lw          $a0, 0x8($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X8);
    // 0x430021E4: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    // 0x430021E8: jal         0x430006C4
    // 0x430021EC: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_enemy_world2_6C4(rdram, ctx);
        goto after_2;
    // 0x430021EC: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_2:
    // 0x430021F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430021F4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x430021F8: jr          $ra
    // 0x430021FC: nop

    return;
    // 0x430021FC: nop

;}
RECOMP_FUNC void ovl_enemy_world2_2200(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43002200: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x43002204: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x43002208: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4300220C: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x43002210: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43002214: mfc1        $a3, $f12
    ctx->r7 = (int32_t)ctx->f12.u32l;
    // 0x43002218: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x4300221C: swc1        $f14, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f14.u32l;
    // 0x43002220: jal         0x43002174
    // 0x43002224: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    ovl_enemy_world2_2174(rdram, ctx);
        goto after_0;
    // 0x43002224: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    after_0:
    // 0x43002228: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4300222C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x43002230: jr          $ra
    // 0x43002234: nop

    return;
    // 0x43002234: nop

;}
RECOMP_FUNC void ovl_enemy_world2_2238(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43002238: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4300223C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43002240: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x43002244: lbu         $t7, 0x260($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X260);
    // 0x43002248: andi        $v0, $a1, 0xFF
    ctx->r2 = ctx->r5 & 0XFF;
    // 0x4300224C: slt         $at, $v0, $t7
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x43002250: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x43002254: bne         $at, $zero, L_43002264
    if (ctx->r1 != 0) {
        // 0x43002258: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_43002264;
    }
    // 0x43002258: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x4300225C: b           L_430022D4
    // 0x43002260: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_430022D4;
    // 0x43002260: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_43002264:
    // 0x43002264: lbu         $t8, 0x261($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X261);
    // 0x43002268: sll         $t0, $a1, 1
    ctx->r8 = S32(ctx->r5 << 1);
    // 0x4300226C: beq         $t8, $v0, L_430022D0
    if (ctx->r24 == ctx->r2) {
        // 0x43002270: addiu       $a2, $zero, 0x0
        ctx->r6 = ADD32(0, 0X0);
            goto L_430022D0;
    }
    // 0x43002270: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x43002274: lw          $t9, 0x264($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X264);
    // 0x43002278: sb          $a1, 0x261($a0)
    MEM_B(0X261, ctx->r4) = ctx->r5;
    // 0x4300227C: sh          $zero, 0x262($a0)
    MEM_H(0X262, ctx->r4) = 0;
    // 0x43002280: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x43002284: lhu         $v1, 0x0($t1)
    ctx->r3 = MEM_HU(ctx->r9, 0X0);
    // 0x43002288: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x4300228C: andi        $t2, $v1, 0x4000
    ctx->r10 = ctx->r3 & 0X4000;
    // 0x43002290: beq         $t2, $zero, L_430022A4
    if (ctx->r10 == 0) {
        // 0x43002294: andi        $t3, $v1, 0x8000
        ctx->r11 = ctx->r3 & 0X8000;
            goto L_430022A4;
    }
    // 0x43002294: andi        $t3, $v1, 0x8000
    ctx->r11 = ctx->r3 & 0X8000;
    // 0x43002298: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x4300229C: b           L_430022AC
    // 0x430022A0: nop

        goto L_430022AC;
    // 0x430022A0: nop

L_430022A4:
    // 0x430022A4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x430022A8: nop

L_430022AC:
    // 0x430022AC: beq         $t3, $zero, L_430022BC
    if (ctx->r11 == 0) {
        // 0x430022B0: andi        $a1, $v1, 0x3FFF
        ctx->r5 = ctx->r3 & 0X3FFF;
            goto L_430022BC;
    }
    // 0x430022B0: andi        $a1, $v1, 0x3FFF
    ctx->r5 = ctx->r3 & 0X3FFF;
    // 0x430022B4: b           L_430022C0
    // 0x430022B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_430022C0;
    // 0x430022B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_430022BC:
    // 0x430022BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_430022C0:
    // 0x430022C0: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x430022C4: jal         0x43002200
    // 0x430022C8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    ovl_enemy_world2_2200(rdram, ctx);
        goto after_0;
    // 0x430022C8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x430022CC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_430022D0:
    // 0x430022D0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_430022D4:
    // 0x430022D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x430022D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x430022DC: jr          $ra
    // 0x430022E0: nop

    return;
    // 0x430022E0: nop

;}
RECOMP_FUNC void ovl_enemy_world2_22E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430022E4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x430022E8: jr          $ra
    // 0x430022EC: swc1        $f4, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f4.u32l;
    return;
    // 0x430022EC: swc1        $f4, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void ovl_enemy_world2_22F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430022F0: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x430022F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430022F8: lw          $v0, 0xC($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XC);
    // 0x430022FC: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x43002300: sra         $t0, $v0, 6
    ctx->r8 = S32(SIGNED(ctx->r2) >> 6);
    // 0x43002304: andi        $t7, $v0, 0x8000
    ctx->r15 = ctx->r2 & 0X8000;
    // 0x43002308: bne         $t7, $zero, L_4300237C
    if (ctx->r15 != 0) {
        // 0x4300230C: andi        $t6, $t0, 0xF
        ctx->r14 = ctx->r8 & 0XF;
            goto L_4300237C;
    }
    // 0x4300230C: andi        $t6, $t0, 0xF
    ctx->r14 = ctx->r8 & 0XF;
    // 0x43002310: beq         $t6, $zero, L_4300237C
    if (ctx->r14 == 0) {
        // 0x43002314: addiu       $t8, $zero, 0x3
        ctx->r24 = ADD32(0, 0X3);
            goto L_4300237C;
    }
    // 0x43002314: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x43002318: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x4300231C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x43002320: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x43002324: addiu       $t3, $zero, 0x11
    ctx->r11 = ADD32(0, 0X11);
    // 0x43002328: sw          $t8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r24;
    // 0x4300232C: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x43002330: sw          $t1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r9;
    // 0x43002334: sw          $t2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r10;
    // 0x43002338: sw          $t3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r11;
    // 0x4300233C: lw          $t4, 0x8($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X8);
    // 0x43002340: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x43002344: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x43002348: lw          $t5, 0x10($a1)
    ctx->r13 = MEM_W(ctx->r5, 0X10);
    // 0x4300234C: addiu       $t7, $sp, 0x1C
    ctx->r15 = ADD32(ctx->r29, 0X1C);
    // 0x43002350: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x43002354: lw          $t6, 0x8($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X8);
    // 0x43002358: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x4300235C: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x43002360: lwc1        $f4, 0x14($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X14);
    // 0x43002364: sw          $t7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r15;
    // 0x43002368: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x4300236C: jal         0x43005218
    // 0x43002370: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    ovl_enemy_world2_5218(rdram, ctx);
        goto after_0;
    // 0x43002370: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x43002374: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x43002378: nop

L_4300237C:
    // 0x4300237C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43002380: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x43002384: jr          $ra
    // 0x43002388: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x43002388: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_enemy_world2_238C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300238C: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x43002390: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x43002394: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x43002398: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4300239C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x430023A0: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x430023A4: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    // 0x430023A8: jal         0x430006C4
    // 0x430023AC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    ovl_enemy_world2_6C4(rdram, ctx);
        goto after_0;
    // 0x430023AC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_0:
    // 0x430023B0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x430023B4: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x430023B8: addiu       $s0, $s1, 0x200
    ctx->r16 = ADD32(ctx->r17, 0X200);
    // 0x430023BC: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x430023C0: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x430023C4: swc1        $f4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f4.u32l;
    // 0x430023C8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x430023CC: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x430023D0: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x430023D4: jal         0x43005218
    // 0x430023D8: swc1        $f4, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f4.u32l;
    ovl_enemy_world2_5218(rdram, ctx);
        goto after_1;
    // 0x430023D8: swc1        $f4, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f4.u32l;
    after_1:
    // 0x430023DC: lwc1        $f6, 0x0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X0);
    // 0x430023E0: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x430023E4: lwc1        $f16, 0x8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8);
    // 0x430023E8: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x430023EC: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x430023F0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x430023F4: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    // 0x430023F8: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x430023FC: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    // 0x43002400: lwc1        $f4, 0x4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4);
    // 0x43002404: nop

    // 0x43002408: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x4300240C: lwc1        $f6, 0x0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X0);
    // 0x43002410: nop

    // 0x43002414: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x43002418: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    // 0x4300241C: lw          $a0, 0x8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X8);
    // 0x43002420: jal         0x430006C4
    // 0x43002424: nop

    ovl_enemy_world2_6C4(rdram, ctx);
        goto after_2;
    // 0x43002424: nop

    after_2:
    // 0x43002428: lwc1        $f16, 0x28($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X28);
    // 0x4300242C: lwc1        $f18, 0x40($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X40);
    // 0x43002430: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x43002434: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x43002438: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x4300243C: lwc1        $f18, 0x48($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X48);
    // 0x43002440: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x43002444: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x43002448: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x4300244C: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x43002450: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x43002454: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x43002458: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    // 0x4300245C: lw          $a1, 0x1F8($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X1F8);
    // 0x43002460: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x43002464: jal         0x43000F34
    // 0x43002468: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_enemy_world2_F34(rdram, ctx);
        goto after_3;
    // 0x43002468: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x4300246C: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43002470: lwc1        $f6, 0x10($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X10);
    // 0x43002474: lwc1        $f1, -0x5E00($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, -0X5E00);
    // 0x43002478: lwc1        $f0, -0x5DFC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5DFC);
    // 0x4300247C: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x43002480: mul.d       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f0.d);
    // 0x43002484: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    // 0x43002488: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x4300248C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x43002490: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x43002494: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x43002498: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
    // 0x4300249C: lwc1        $f18, 0xC($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0XC);
    // 0x430024A0: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    // 0x430024A4: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x430024A8: mul.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f0.d);
    // 0x430024AC: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x430024B0: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    // 0x430024B4: lw          $a1, 0x1F8($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X1F8);
    // 0x430024B8: jal         0x43000F34
    // 0x430024BC: nop

    ovl_enemy_world2_F34(rdram, ctx);
        goto after_4;
    // 0x430024BC: nop

    after_4:
    // 0x430024C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x430024C4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x430024C8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x430024CC: jr          $ra
    // 0x430024D0: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x430024D0: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_enemy_world2_24D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430024D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x430024D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430024DC: lw          $t6, 0x1F8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X1F8);
    // 0x430024E0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x430024E4: beq         $t6, $at, L_430024FC
    if (ctx->r14 == ctx->r1) {
        // 0x430024E8: or          $a1, $a0, $zero
        ctx->r5 = ctx->r4 | 0;
            goto L_430024FC;
    }
    // 0x430024E8: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x430024EC: jal         0x4300238C
    // 0x430024F0: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    ovl_enemy_world2_238C(rdram, ctx);
        goto after_0;
    // 0x430024F0: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x430024F4: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x430024F8: nop

L_430024FC:
    // 0x430024FC: lw          $v0, 0x230($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X230);
    // 0x43002500: addiu       $a0, $a1, 0x22C
    ctx->r4 = ADD32(ctx->r5, 0X22C);
    // 0x43002504: andi        $t7, $v0, 0x1
    ctx->r15 = ctx->r2 & 0X1;
    // 0x43002508: beq         $t7, $zero, L_4300252C
    if (ctx->r15 == 0) {
        // 0x4300250C: ori         $t8, $v0, 0x1
        ctx->r24 = ctx->r2 | 0X1;
            goto L_4300252C;
    }
    // 0x4300250C: ori         $t8, $v0, 0x1
    ctx->r24 = ctx->r2 | 0X1;
    // 0x43002510: jal         0x4300438C
    // 0x43002514: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    ovl_enemy_world2_438C(rdram, ctx);
        goto after_1;
    // 0x43002514: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_1:
    // 0x43002518: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x4300251C: nop

    // 0x43002520: lw          $v0, 0x230($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X230);
    // 0x43002524: nop

    // 0x43002528: ori         $t8, $v0, 0x1
    ctx->r24 = ctx->r2 | 0X1;
L_4300252C:
    // 0x4300252C: sw          $t8, 0x230($a1)
    MEM_W(0X230, ctx->r5) = ctx->r24;
    // 0x43002530: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43002534: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43002538: jr          $ra
    // 0x4300253C: nop

    return;
    // 0x4300253C: nop

;}
RECOMP_FUNC void ovl_enemy_world2_2540(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43002540: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x43002544: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43002548: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x4300254C: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x43002550: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    // 0x43002554: lw          $a3, 0x8($a1)
    ctx->r7 = MEM_W(ctx->r5, 0X8);
    // 0x43002558: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x4300255C: beq         $a3, $at, L_43002648
    if (ctx->r7 == ctx->r1) {
        // 0x43002560: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_43002648;
    }
    // 0x43002560: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x43002564: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x43002568: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x4300256C: jal         0x430006C4
    // 0x43002570: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    ovl_enemy_world2_6C4(rdram, ctx);
        goto after_0;
    // 0x43002570: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    after_0:
    // 0x43002574: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x43002578: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4300257C: bne         $v1, $at, L_43002594
    if (ctx->r3 != ctx->r1) {
        // 0x43002580: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_43002594;
    }
    // 0x43002580: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x43002584: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x43002588: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x4300258C: beq         $t7, $at, L_43002598
    if (ctx->r15 == ctx->r1) {
        // 0x43002590: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_43002598;
    }
    // 0x43002590: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
L_43002594:
    // 0x43002594: bne         $v1, $at, L_430025A4
    if (ctx->r3 != ctx->r1) {
        // 0x43002598: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_430025A4;
    }
L_43002598:
    // 0x43002598: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x4300259C: b           L_43002614
    // 0x430025A0: sw          $t8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r24;
        goto L_43002614;
    // 0x430025A0: sw          $t8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r24;
L_430025A4:
    // 0x430025A4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x430025A8: bne         $v1, $at, L_43002618
    if (ctx->r3 != ctx->r1) {
        // 0x430025AC: lw          $t2, 0x54($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X54);
            goto L_43002618;
    }
    // 0x430025AC: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x430025B0: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x430025B4: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x430025B8: bne         $t9, $at, L_43002618
    if (ctx->r25 != ctx->r1) {
        // 0x430025BC: lw          $t2, 0x54($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X54);
            goto L_43002618;
    }
    // 0x430025BC: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x430025C0: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x430025C4: jal         0x43005C10
    // 0x430025C8: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    ovl_enemy_world2_5C10(rdram, ctx);
        goto after_1;
    // 0x430025C8: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_1:
    // 0x430025CC: beq         $v0, $zero, L_43002600
    if (ctx->r2 == 0) {
        // 0x430025D0: addiu       $a1, $zero, 0x19
        ctx->r5 = ADD32(0, 0X19);
            goto L_43002600;
    }
    // 0x430025D0: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    // 0x430025D4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x430025D8: beq         $v0, $at, L_43002600
    if (ctx->r2 == ctx->r1) {
        // 0x430025DC: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_43002600;
    }
    // 0x430025DC: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x430025E0: beq         $v0, $at, L_43002604
    if (ctx->r2 == ctx->r1) {
        // 0x430025E4: lw          $a0, 0x50($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X50);
            goto L_43002604;
    }
    // 0x430025E4: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x430025E8: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x430025EC: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x430025F0: lw          $t0, 0x54($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X54);
    // 0x430025F4: nop

    // 0x430025F8: or          $t1, $t0, $at
    ctx->r9 = ctx->r8 | ctx->r1;
    // 0x430025FC: sw          $t1, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r9;
L_43002600:
    // 0x43002600: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
L_43002604:
    // 0x43002604: jal         0x43009ECC
    // 0x43002608: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    ovl_enemy_world2_9ECC(rdram, ctx);
        goto after_2;
    // 0x43002608: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_2:
    // 0x4300260C: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x43002610: nop

L_43002614:
    // 0x43002614: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
L_43002618:
    // 0x43002618: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x4300261C: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x43002620: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x43002624: sw          $v1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r3;
    // 0x43002628: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    // 0x4300262C: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    // 0x43002630: sw          $t2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r10;
    // 0x43002634: sw          $t3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r11;
    // 0x43002638: jal         0x43009ECC
    // 0x4300263C: sw          $t4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r12;
    ovl_enemy_world2_9ECC(rdram, ctx);
        goto after_3;
    // 0x4300263C: sw          $t4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r12;
    after_3:
    // 0x43002640: b           L_43002674
    // 0x43002644: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43002674;
    // 0x43002644: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43002648:
    // 0x43002648: lw          $t5, 0x54($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X54);
    // 0x4300264C: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x43002650: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x43002654: sw          $t6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r14;
    // 0x43002658: sw          $t7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r15;
    // 0x4300265C: sw          $zero, 0x48($sp)
    MEM_W(0X48, ctx->r29) = 0;
    // 0x43002660: addiu       $a1, $zero, 0x1B
    ctx->r5 = ADD32(0, 0X1B);
    // 0x43002664: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    // 0x43002668: jal         0x43009ECC
    // 0x4300266C: sw          $t5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r13;
    ovl_enemy_world2_9ECC(rdram, ctx);
        goto after_4;
    // 0x4300266C: sw          $t5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r13;
    after_4:
    // 0x43002670: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43002674:
    // 0x43002674: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
    // 0x43002678: jr          $ra
    // 0x4300267C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x4300267C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_enemy_world2_2680(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43002680: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x43002684: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43002688: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x4300268C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x43002690: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x43002694: lw          $t7, 0xC($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XC);
    // 0x43002698: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x4300269C: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x430026A0: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x430026A4: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x430026A8: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    // 0x430026AC: jal         0x430006C4
    // 0x430026B0: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    ovl_enemy_world2_6C4(rdram, ctx);
        goto after_0;
    // 0x430026B0: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x430026B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430026B8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x430026BC: jr          $ra
    // 0x430026C0: nop

    return;
    // 0x430026C0: nop

;}
RECOMP_FUNC void ovl_enemy_world2_26C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430026C4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x430026C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430026CC: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x430026D0: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x430026D4: lw          $t7, 0x10($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X10);
    // 0x430026D8: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
    // 0x430026DC: lwc1        $f4, 0x0($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X0);
    // 0x430026E0: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    // 0x430026E4: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x430026E8: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x430026EC: lw          $t8, 0x10($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X10);
    // 0x430026F0: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x430026F4: lwc1        $f8, 0x4($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X4);
    // 0x430026F8: nop

    // 0x430026FC: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x43002700: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x43002704: lw          $t9, 0x10($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X10);
    // 0x43002708: nop

    // 0x4300270C: lwc1        $f16, 0x8($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X8);
    // 0x43002710: nop

    // 0x43002714: neg.s       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = -ctx->f16.fl;
    // 0x43002718: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    // 0x4300271C: lw          $t0, 0xC($a0)
    ctx->r8 = MEM_W(ctx->r4, 0XC);
    // 0x43002720: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x43002724: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x43002728: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x4300272C: jal         0x430006C4
    // 0x43002730: nop

    ovl_enemy_world2_6C4(rdram, ctx);
        goto after_0;
    // 0x43002730: nop

    after_0:
    // 0x43002734: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43002738: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x4300273C: jr          $ra
    // 0x43002740: nop

    return;
    // 0x43002740: nop

;}
RECOMP_FUNC void ovl_enemy_world2_2744(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43002744: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x43002748: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x4300274C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43002750: sw          $a0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r4;
    // 0x43002754: sw          $a2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r6;
    // 0x43002758: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x4300275C: lw          $a0, 0x8($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X8);
    // 0x43002760: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x43002764: jal         0x430006C4
    // 0x43002768: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    ovl_enemy_world2_6C4(rdram, ctx);
        goto after_0;
    // 0x43002768: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    after_0:
    // 0x4300276C: bne         $v0, $zero, L_430029C8
    if (ctx->r2 != 0) {
        // 0x43002770: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_430029C8;
    }
    // 0x43002770: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43002774: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    // 0x43002778: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x4300277C: bne         $t6, $zero, L_43002994
    if (ctx->r14 != 0) {
        // 0x43002780: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_43002994;
    }
    // 0x43002780: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x43002784: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x43002788: lw          $t7, 0xC($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC);
    // 0x4300278C: ori         $at, $zero, 0x8040
    ctx->r1 = 0 | 0X8040;
    // 0x43002790: slt         $at, $t7, $at
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x43002794: beq         $at, $zero, L_430029C8
    if (ctx->r1 == 0) {
        // 0x43002798: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_430029C8;
    }
    // 0x43002798: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4300279C: lw          $t8, 0x78($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X78);
    // 0x430027A0: nop

    // 0x430027A4: sltiu       $at, $t8, 0x21
    ctx->r1 = ctx->r24 < 0X21 ? 1 : 0;
    // 0x430027A8: beq         $at, $zero, L_43002930
    if (ctx->r1 == 0) {
        // 0x430027AC: sll         $t8, $t8, 2
        ctx->r24 = S32(ctx->r24 << 2);
            goto L_43002930;
    }
    // 0x430027AC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x430027B0: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430027B4: addu        $at, $at, $t8
    gpr jr_addend_430027C0 = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x430027B8: lw          $t8, -0x5DF8($at)
    ctx->r24 = ADD32(ctx->r1, -0X5DF8);
    // 0x430027BC: nop

    // 0x430027C0: jr          $t8
    // 0x430027C4: nop

    switch (jr_addend_430027C0 >> 2) {
        case 0: goto L_430029C4; break;
        case 1: goto L_430027C8; break;
        case 2: goto L_430027EC; break;
        case 3: goto L_43002800; break;
        case 4: goto L_43002814; break;
        case 5: goto L_43002828; break;
        case 6: goto L_4300283C; break;
        case 7: goto L_43002850; break;
        case 8: goto L_43002864; break;
        case 9: goto L_43002878; break;
        case 10: goto L_4300288C; break;
        case 11: goto L_430028A0; break;
        case 12: goto L_430028B4; break;
        case 13: goto L_430028C8; break;
        case 14: goto L_430028DC; break;
        case 15: goto L_430028F0; break;
        case 16: goto L_43002904; break;
        case 17: goto L_43002904; break;
        case 18: goto L_43002904; break;
        case 19: goto L_43002904; break;
        case 20: goto L_43002904; break;
        case 21: goto L_43002904; break;
        case 22: goto L_43002904; break;
        case 23: goto L_43002904; break;
        case 24: goto L_43002930; break;
        case 25: goto L_43002910; break;
        case 26: goto L_43002910; break;
        case 27: goto L_43002910; break;
        case 28: goto L_43002910; break;
        case 29: goto L_4300291C; break;
        case 30: goto L_4300291C; break;
        case 31: goto L_4300291C; break;
        case 32: goto L_43002930; break;
        default: switch_error(__func__, 0x430027C0, 0x4300A208);
    }
    // 0x430027C4: nop

L_430027C8:
    // 0x430027C8: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x430027CC: sw          $t9, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r25;
    // 0x430027D0: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x430027D4: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x430027D8: addiu       $a1, $zero, 0x23
    ctx->r5 = ADD32(0, 0X23);
    // 0x430027DC: jal         0x430006C4
    // 0x430027E0: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    ovl_enemy_world2_6C4(rdram, ctx);
        goto after_1;
    // 0x430027E0: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    after_1:
    // 0x430027E4: b           L_43002934
    // 0x430027E8: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
        goto L_43002934;
    // 0x430027E8: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
L_430027EC:
    // 0x430027EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430027F0: jal         0x43002680
    // 0x430027F4: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    ovl_enemy_world2_2680(rdram, ctx);
        goto after_2;
    // 0x430027F4: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    after_2:
    // 0x430027F8: b           L_43002934
    // 0x430027FC: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
        goto L_43002934;
    // 0x430027FC: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
L_43002800:
    // 0x43002800: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43002804: jal         0x43002680
    // 0x43002808: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    ovl_enemy_world2_2680(rdram, ctx);
        goto after_3;
    // 0x43002808: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    after_3:
    // 0x4300280C: b           L_43002934
    // 0x43002810: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
        goto L_43002934;
    // 0x43002810: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
L_43002814:
    // 0x43002814: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43002818: jal         0x43002680
    // 0x4300281C: addiu       $a1, $zero, 0x22
    ctx->r5 = ADD32(0, 0X22);
    ovl_enemy_world2_2680(rdram, ctx);
        goto after_4;
    // 0x4300281C: addiu       $a1, $zero, 0x22
    ctx->r5 = ADD32(0, 0X22);
    after_4:
    // 0x43002820: b           L_43002934
    // 0x43002824: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
        goto L_43002934;
    // 0x43002824: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
L_43002828:
    // 0x43002828: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4300282C: jal         0x43002680
    // 0x43002830: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    ovl_enemy_world2_2680(rdram, ctx);
        goto after_5;
    // 0x43002830: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    after_5:
    // 0x43002834: b           L_43002934
    // 0x43002838: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
        goto L_43002934;
    // 0x43002838: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
L_4300283C:
    // 0x4300283C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43002840: jal         0x430026C4
    // 0x43002844: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    ovl_enemy_world2_26C4(rdram, ctx);
        goto after_6;
    // 0x43002844: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    after_6:
    // 0x43002848: b           L_43002934
    // 0x4300284C: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
        goto L_43002934;
    // 0x4300284C: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
L_43002850:
    // 0x43002850: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43002854: jal         0x430026C4
    // 0x43002858: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    ovl_enemy_world2_26C4(rdram, ctx);
        goto after_7;
    // 0x43002858: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    after_7:
    // 0x4300285C: b           L_43002934
    // 0x43002860: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
        goto L_43002934;
    // 0x43002860: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
L_43002864:
    // 0x43002864: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43002868: jal         0x430026C4
    // 0x4300286C: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    ovl_enemy_world2_26C4(rdram, ctx);
        goto after_8;
    // 0x4300286C: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    after_8:
    // 0x43002870: b           L_43002934
    // 0x43002874: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
        goto L_43002934;
    // 0x43002874: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
L_43002878:
    // 0x43002878: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4300287C: jal         0x430026C4
    // 0x43002880: addiu       $a1, $zero, 0x27
    ctx->r5 = ADD32(0, 0X27);
    ovl_enemy_world2_26C4(rdram, ctx);
        goto after_9;
    // 0x43002880: addiu       $a1, $zero, 0x27
    ctx->r5 = ADD32(0, 0X27);
    after_9:
    // 0x43002884: b           L_43002934
    // 0x43002888: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
        goto L_43002934;
    // 0x43002888: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
L_4300288C:
    // 0x4300288C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43002890: jal         0x430026C4
    // 0x43002894: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    ovl_enemy_world2_26C4(rdram, ctx);
        goto after_10;
    // 0x43002894: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    after_10:
    // 0x43002898: b           L_43002934
    // 0x4300289C: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
        goto L_43002934;
    // 0x4300289C: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
L_430028A0:
    // 0x430028A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430028A4: jal         0x43002680
    // 0x430028A8: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    ovl_enemy_world2_2680(rdram, ctx);
        goto after_11;
    // 0x430028A8: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    after_11:
    // 0x430028AC: b           L_43002934
    // 0x430028B0: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
        goto L_43002934;
    // 0x430028B0: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
L_430028B4:
    // 0x430028B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430028B8: jal         0x43002680
    // 0x430028BC: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    ovl_enemy_world2_2680(rdram, ctx);
        goto after_12;
    // 0x430028BC: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    after_12:
    // 0x430028C0: b           L_43002934
    // 0x430028C4: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
        goto L_43002934;
    // 0x430028C4: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
L_430028C8:
    // 0x430028C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430028CC: jal         0x43002680
    // 0x430028D0: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    ovl_enemy_world2_2680(rdram, ctx);
        goto after_13;
    // 0x430028D0: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    after_13:
    // 0x430028D4: b           L_43002934
    // 0x430028D8: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
        goto L_43002934;
    // 0x430028D8: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
L_430028DC:
    // 0x430028DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430028E0: jal         0x43002680
    // 0x430028E4: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    ovl_enemy_world2_2680(rdram, ctx);
        goto after_14;
    // 0x430028E4: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    after_14:
    // 0x430028E8: b           L_43002934
    // 0x430028EC: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
        goto L_43002934;
    // 0x430028EC: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
L_430028F0:
    // 0x430028F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430028F4: jal         0x43002680
    // 0x430028F8: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    ovl_enemy_world2_2680(rdram, ctx);
        goto after_15;
    // 0x430028F8: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_15:
    // 0x430028FC: b           L_43002934
    // 0x43002900: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
        goto L_43002934;
    // 0x43002900: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
L_43002904:
    // 0x43002904: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x43002908: b           L_43002930
    // 0x4300290C: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
        goto L_43002930;
    // 0x4300290C: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
L_43002910:
    // 0x43002910: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x43002914: b           L_43002930
    // 0x43002918: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
        goto L_43002930;
    // 0x43002918: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
L_4300291C:
    // 0x4300291C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43002920: jal         0x43002680
    // 0x43002924: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    ovl_enemy_world2_2680(rdram, ctx);
        goto after_16;
    // 0x43002924: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    after_16:
    // 0x43002928: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x4300292C: sw          $t2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r10;
L_43002930:
    // 0x43002930: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
L_43002934:
    // 0x43002934: lw          $t4, 0x58($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X58);
    // 0x43002938: beq         $t3, $zero, L_430029C8
    if (ctx->r11 == 0) {
        // 0x4300293C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_430029C8;
    }
    // 0x4300293C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43002940: bne         $t4, $zero, L_430029C8
    if (ctx->r12 != 0) {
        // 0x43002944: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_430029C8;
    }
    // 0x43002944: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43002948: lw          $t5, 0x5C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X5C);
    // 0x4300294C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x43002950: bne         $t5, $at, L_430029C4
    if (ctx->r13 != ctx->r1) {
        // 0x43002954: addiu       $t6, $zero, 0x29
        ctx->r14 = ADD32(0, 0X29);
            goto L_430029C4;
    }
    // 0x43002954: addiu       $t6, $zero, 0x29
    ctx->r14 = ADD32(0, 0X29);
    // 0x43002958: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x4300295C: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x43002960: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x43002964: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x43002968: sw          $t5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r13;
    // 0x4300296C: lw          $t8, 0x8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8);
    // 0x43002970: lw          $t9, 0x78($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X78);
    // 0x43002974: lw          $a0, 0x70($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X70);
    // 0x43002978: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x4300297C: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x43002980: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x43002984: jal         0x43005218
    // 0x43002988: sw          $t9, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r25;
    ovl_enemy_world2_5218(rdram, ctx);
        goto after_17;
    // 0x43002988: sw          $t9, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r25;
    after_17:
    // 0x4300298C: b           L_430029C8
    // 0x43002990: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_430029C8;
    // 0x43002990: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43002994:
    // 0x43002994: bne         $t0, $at, L_430029C8
    if (ctx->r8 != ctx->r1) {
        // 0x43002998: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_430029C8;
    }
    // 0x43002998: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4300299C: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x430029A0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x430029A4: bne         $t1, $at, L_430029C8
    if (ctx->r9 != ctx->r1) {
        // 0x430029A8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_430029C8;
    }
    // 0x430029A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x430029AC: lw          $t2, 0x78($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X78);
    // 0x430029B0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x430029B4: bne         $t2, $at, L_430029C4
    if (ctx->r10 != ctx->r1) {
        // 0x430029B8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_430029C4;
    }
    // 0x430029B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430029BC: jal         0x43002680
    // 0x430029C0: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    ovl_enemy_world2_2680(rdram, ctx);
        goto after_18;
    // 0x430029C0: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    after_18:
L_430029C4:
    // 0x430029C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_430029C8:
    // 0x430029C8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x430029CC: jr          $ra
    // 0x430029D0: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x430029D0: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void ovl_enemy_world2_29D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430029D4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x430029D8: beq         $a0, $at, L_430029E8
    if (ctx->r4 == ctx->r1) {
        // 0x430029DC: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_430029E8;
    }
    // 0x430029DC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x430029E0: lw          $v1, 0xC($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC);
    // 0x430029E4: nop

L_430029E8:
    // 0x430029E8: jr          $ra
    // 0x430029EC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x430029EC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_enemy_world2_29F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430029F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x430029F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430029F8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x430029FC: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x43002A00: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x43002A04: jal         0x43004880
    // 0x43002A08: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    ovl_enemy_world2_4880(rdram, ctx);
        goto after_0;
    // 0x43002A08: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x43002A0C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x43002A10: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x43002A14: sltiu       $at, $t6, 0xC
    ctx->r1 = ctx->r14 < 0XC ? 1 : 0;
    // 0x43002A18: beq         $at, $zero, L_43002B40
    if (ctx->r1 == 0) {
        // 0x43002A1C: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_43002B40;
    }
    // 0x43002A1C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x43002A20: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x43002A24: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43002A28: addu        $at, $at, $t6
    gpr jr_addend_43002A34 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x43002A2C: lw          $t6, -0x5D74($at)
    ctx->r14 = ADD32(ctx->r1, -0X5D74);
    // 0x43002A30: nop

    // 0x43002A34: jr          $t6
    // 0x43002A38: nop

    switch (jr_addend_43002A34 >> 2) {
        case 0: goto L_43002B40; break;
        case 1: goto L_43002A3C; break;
        case 2: goto L_43002B40; break;
        case 3: goto L_43002A48; break;
        case 4: goto L_43002A64; break;
        case 5: goto L_43002A80; break;
        case 6: goto L_43002A9C; break;
        case 7: goto L_43002AB8; break;
        case 8: goto L_43002AD4; break;
        case 9: goto L_43002AF0; break;
        case 10: goto L_43002B0C; break;
        case 11: goto L_43002B28; break;
        default: switch_error(__func__, 0x43002A34, 0x4300A28C);
    }
    // 0x43002A38: nop

L_43002A3C:
    // 0x43002A3C: lw          $v1, 0x14($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X14);
    // 0x43002A40: b           L_43002B44
    // 0x43002A44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43002B44;
    // 0x43002A44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43002A48:
    // 0x43002A48: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x43002A4C: jal         0x430047A0
    // 0x43002A50: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_enemy_world2_47A0(rdram, ctx);
        goto after_1;
    // 0x43002A50: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x43002A54: jal         0x430029D4
    // 0x43002A58: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_enemy_world2_29D4(rdram, ctx);
        goto after_2;
    // 0x43002A58: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x43002A5C: b           L_43002B40
    // 0x43002A60: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_43002B40;
    // 0x43002A60: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_43002A64:
    // 0x43002A64: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x43002A68: jal         0x430047A0
    // 0x43002A6C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_enemy_world2_47A0(rdram, ctx);
        goto after_3;
    // 0x43002A6C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_3:
    // 0x43002A70: jal         0x430029D4
    // 0x43002A74: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_enemy_world2_29D4(rdram, ctx);
        goto after_4;
    // 0x43002A74: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_4:
    // 0x43002A78: b           L_43002B40
    // 0x43002A7C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_43002B40;
    // 0x43002A7C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_43002A80:
    // 0x43002A80: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x43002A84: jal         0x430047A0
    // 0x43002A88: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    ovl_enemy_world2_47A0(rdram, ctx);
        goto after_5;
    // 0x43002A88: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_5:
    // 0x43002A8C: jal         0x430029D4
    // 0x43002A90: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_enemy_world2_29D4(rdram, ctx);
        goto after_6;
    // 0x43002A90: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_6:
    // 0x43002A94: b           L_43002B40
    // 0x43002A98: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_43002B40;
    // 0x43002A98: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_43002A9C:
    // 0x43002A9C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x43002AA0: jal         0x430047A0
    // 0x43002AA4: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    ovl_enemy_world2_47A0(rdram, ctx);
        goto after_7;
    // 0x43002AA4: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_7:
    // 0x43002AA8: jal         0x430029D4
    // 0x43002AAC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_enemy_world2_29D4(rdram, ctx);
        goto after_8;
    // 0x43002AAC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_8:
    // 0x43002AB0: b           L_43002B40
    // 0x43002AB4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_43002B40;
    // 0x43002AB4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_43002AB8:
    // 0x43002AB8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x43002ABC: jal         0x430047A0
    // 0x43002AC0: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    ovl_enemy_world2_47A0(rdram, ctx);
        goto after_9;
    // 0x43002AC0: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_9:
    // 0x43002AC4: jal         0x430029D4
    // 0x43002AC8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_enemy_world2_29D4(rdram, ctx);
        goto after_10;
    // 0x43002AC8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_10:
    // 0x43002ACC: b           L_43002B40
    // 0x43002AD0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_43002B40;
    // 0x43002AD0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_43002AD4:
    // 0x43002AD4: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x43002AD8: jal         0x430047A0
    // 0x43002ADC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    ovl_enemy_world2_47A0(rdram, ctx);
        goto after_11;
    // 0x43002ADC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_11:
    // 0x43002AE0: jal         0x430029D4
    // 0x43002AE4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_enemy_world2_29D4(rdram, ctx);
        goto after_12;
    // 0x43002AE4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_12:
    // 0x43002AE8: b           L_43002B40
    // 0x43002AEC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_43002B40;
    // 0x43002AEC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_43002AF0:
    // 0x43002AF0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x43002AF4: jal         0x430047A0
    // 0x43002AF8: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    ovl_enemy_world2_47A0(rdram, ctx);
        goto after_13;
    // 0x43002AF8: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_13:
    // 0x43002AFC: jal         0x430029D4
    // 0x43002B00: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_enemy_world2_29D4(rdram, ctx);
        goto after_14;
    // 0x43002B00: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_14:
    // 0x43002B04: b           L_43002B40
    // 0x43002B08: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_43002B40;
    // 0x43002B08: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_43002B0C:
    // 0x43002B0C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x43002B10: jal         0x430047A0
    // 0x43002B14: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    ovl_enemy_world2_47A0(rdram, ctx);
        goto after_15;
    // 0x43002B14: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_15:
    // 0x43002B18: jal         0x430029D4
    // 0x43002B1C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_enemy_world2_29D4(rdram, ctx);
        goto after_16;
    // 0x43002B1C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_16:
    // 0x43002B20: b           L_43002B40
    // 0x43002B24: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_43002B40;
    // 0x43002B24: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_43002B28:
    // 0x43002B28: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x43002B2C: jal         0x430047A0
    // 0x43002B30: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    ovl_enemy_world2_47A0(rdram, ctx);
        goto after_17;
    // 0x43002B30: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_17:
    // 0x43002B34: jal         0x430029D4
    // 0x43002B38: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_enemy_world2_29D4(rdram, ctx);
        goto after_18;
    // 0x43002B38: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_18:
    // 0x43002B3C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_43002B40:
    // 0x43002B40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43002B44:
    // 0x43002B44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43002B48: jr          $ra
    // 0x43002B4C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x43002B4C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_enemy_world2_2B50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43002B50: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x43002B54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43002B58: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x43002B5C: lw          $v0, 0x54($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X54);
    // 0x43002B60: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x43002B64: andi        $t6, $v0, 0x100
    ctx->r14 = ctx->r2 & 0X100;
    // 0x43002B68: beq         $t6, $zero, L_43002B84
    if (ctx->r14 == 0) {
        // 0x43002B6C: andi        $t0, $v0, 0x4
        ctx->r8 = ctx->r2 & 0X4;
            goto L_43002B84;
    }
    // 0x43002B6C: andi        $t0, $v0, 0x4
    ctx->r8 = ctx->r2 & 0X4;
    // 0x43002B70: lw          $t8, 0x8($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X8);
    // 0x43002B74: lw          $t9, 0x21C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X21C);
    // 0x43002B78: nop

    // 0x43002B7C: beq         $t8, $t9, L_43002C64
    if (ctx->r24 == ctx->r25) {
        // 0x43002B80: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43002C64;
    }
    // 0x43002B80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43002B84:
    // 0x43002B84: bne         $t0, $zero, L_43002C60
    if (ctx->r8 != 0) {
        // 0x43002B88: andi        $t1, $v0, 0x40
        ctx->r9 = ctx->r2 & 0X40;
            goto L_43002C60;
    }
    // 0x43002B88: andi        $t1, $v0, 0x40
    ctx->r9 = ctx->r2 & 0X40;
    // 0x43002B8C: bne         $t1, $zero, L_43002C60
    if (ctx->r9 != 0) {
        // 0x43002B90: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_43002C60;
    }
    // 0x43002B90: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x43002B94: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x43002B98: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x43002B9C: lw          $t3, 0x4($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X4);
    // 0x43002BA0: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x43002BA4: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    // 0x43002BA8: lw          $t4, 0x54($a3)
    ctx->r12 = MEM_W(ctx->r7, 0X54);
    // 0x43002BAC: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x43002BB0: sll         $t5, $t4, 13
    ctx->r13 = S32(ctx->r12 << 13);
    // 0x43002BB4: bltz        $t5, L_43002BC4
    if (SIGNED(ctx->r13) < 0) {
        // 0x43002BB8: nop
    
            goto L_43002BC4;
    }
    // 0x43002BB8: nop

    // 0x43002BBC: b           L_43002BF8
    // 0x43002BC0: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
        goto L_43002BF8;
    // 0x43002BC0: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
L_43002BC4:
    // 0x43002BC4: lw          $v0, 0x5C($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X5C);
    // 0x43002BC8: addiu       $at, $zero, 0x17
    ctx->r1 = ADD32(0, 0X17);
    // 0x43002BCC: bne         $v0, $at, L_43002BDC
    if (ctx->r2 != ctx->r1) {
        // 0x43002BD0: addiu       $t7, $zero, 0x3
        ctx->r15 = ADD32(0, 0X3);
            goto L_43002BDC;
    }
    // 0x43002BD0: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x43002BD4: b           L_43002BF8
    // 0x43002BD8: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
        goto L_43002BF8;
    // 0x43002BD8: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
L_43002BDC:
    // 0x43002BDC: addiu       $at, $zero, 0x18
    ctx->r1 = ADD32(0, 0X18);
    // 0x43002BE0: bne         $v0, $at, L_43002BF4
    if (ctx->r2 != ctx->r1) {
        // 0x43002BE4: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_43002BF4;
    }
    // 0x43002BE4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x43002BE8: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x43002BEC: b           L_43002BF8
    // 0x43002BF0: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
        goto L_43002BF8;
    // 0x43002BF0: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
L_43002BF4:
    // 0x43002BF4: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
L_43002BF8:
    // 0x43002BF8: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x43002BFC: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    // 0x43002C00: jal         0x43009ECC
    // 0x43002C04: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    ovl_enemy_world2_9ECC(rdram, ctx);
        goto after_0;
    // 0x43002C04: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    after_0:
    // 0x43002C08: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x43002C0C: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x43002C10: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x43002C14: bne         $t1, $t2, L_43002C24
    if (ctx->r9 != ctx->r10) {
        // 0x43002C18: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_43002C24;
    }
    // 0x43002C18: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x43002C1C: bne         $t2, $at, L_43002C40
    if (ctx->r10 != ctx->r1) {
        // 0x43002C20: nop
    
            goto L_43002C40;
    }
    // 0x43002C20: nop

L_43002C24:
    // 0x43002C24: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x43002C28: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x43002C2C: jal         0x430029F0
    // 0x43002C30: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    ovl_enemy_world2_29F0(rdram, ctx);
        goto after_1;
    // 0x43002C30: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    after_1:
    // 0x43002C34: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x43002C38: b           L_43002C54
    // 0x43002C3C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
        goto L_43002C54;
    // 0x43002C3C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
L_43002C40:
    // 0x43002C40: lw          $a0, 0x1E0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X1E0);
    // 0x43002C44: jal         0x430029D4
    // 0x43002C48: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    ovl_enemy_world2_29D4(rdram, ctx);
        goto after_2;
    // 0x43002C48: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    after_2:
    // 0x43002C4C: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x43002C50: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
L_43002C54:
    // 0x43002C54: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x43002C58: jal         0x43002744
    // 0x43002C5C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    ovl_enemy_world2_2744(rdram, ctx);
        goto after_3;
    // 0x43002C5C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_3:
L_43002C60:
    // 0x43002C60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43002C64:
    // 0x43002C64: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x43002C68: jr          $ra
    // 0x43002C6C: nop

    return;
    // 0x43002C6C: nop

;}
RECOMP_FUNC void ovl_enemy_world2_2C70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43002C70: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x43002C74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43002C78: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x43002C7C: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x43002C80: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x43002C84: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x43002C88: addiu       $t0, $zero, 0x1A
    ctx->r8 = ADD32(0, 0X1A);
    // 0x43002C8C: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x43002C90: addiu       $t2, $sp, 0x18
    ctx->r10 = ADD32(ctx->r29, 0X18);
    // 0x43002C94: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x43002C98: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x43002C9C: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x43002CA0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x43002CA4: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x43002CA8: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x43002CAC: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x43002CB0: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x43002CB4: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x43002CB8: sw          $t2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r10;
    // 0x43002CBC: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x43002CC0: jal         0x430007FC
    // 0x43002CC4: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    ovl_enemy_world2_7FC(rdram, ctx);
        goto after_0;
    // 0x43002CC4: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_0:
    // 0x43002CC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43002CCC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x43002CD0: jr          $ra
    // 0x43002CD4: nop

    return;
    // 0x43002CD4: nop

;}
RECOMP_FUNC void ovl_enemy_world2_2CD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43002CD8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43002CDC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43002CE0: lw          $a1, 0x190($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X190);
    // 0x43002CE4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x43002CE8: beq         $a1, $at, L_43002D08
    if (ctx->r5 == ctx->r1) {
        // 0x43002CEC: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_43002D08;
    }
    // 0x43002CEC: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x43002CF0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x43002CF4: jal         0x43000550
    // 0x43002CF8: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    ovl_enemy_world2_550(rdram, ctx);
        goto after_0;
    // 0x43002CF8: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x43002CFC: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x43002D00: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x43002D04: sw          $t6, 0x190($a2)
    MEM_W(0X190, ctx->r6) = ctx->r14;
L_43002D08:
    // 0x43002D08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43002D0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43002D10: jr          $ra
    // 0x43002D14: nop

    return;
    // 0x43002D14: nop

;}
RECOMP_FUNC void ovl_enemy_world2_2D18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43002D18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43002D1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43002D20: lw          $v0, 0x54($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X54);
    // 0x43002D24: nop

    // 0x43002D28: andi        $t6, $v0, 0x10
    ctx->r14 = ctx->r2 & 0X10;
    // 0x43002D2C: beq         $t6, $zero, L_43002D70
    if (ctx->r14 == 0) {
        // 0x43002D30: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43002D70;
    }
    // 0x43002D30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43002D34: lw          $t7, 0x190($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X190);
    // 0x43002D38: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x43002D3C: beq         $t7, $at, L_43002D60
    if (ctx->r15 == ctx->r1) {
        // 0x43002D40: addiu       $at, $zero, -0x11
        ctx->r1 = ADD32(0, -0X11);
            goto L_43002D60;
    }
    // 0x43002D40: addiu       $at, $zero, -0x11
    ctx->r1 = ADD32(0, -0X11);
    // 0x43002D44: jal         0x43002CD8
    // 0x43002D48: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_enemy_world2_2CD8(rdram, ctx);
        goto after_0;
    // 0x43002D48: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x43002D4C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43002D50: nop

    // 0x43002D54: lw          $v0, 0x54($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X54);
    // 0x43002D58: nop

    // 0x43002D5C: addiu       $at, $zero, -0x11
    ctx->r1 = ADD32(0, -0X11);
L_43002D60:
    // 0x43002D60: and         $t8, $v0, $at
    ctx->r24 = ctx->r2 & ctx->r1;
    // 0x43002D64: sw          $zero, 0x194($a0)
    MEM_W(0X194, ctx->r4) = 0;
    // 0x43002D68: sw          $t8, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r24;
    // 0x43002D6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43002D70:
    // 0x43002D70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43002D74: jr          $ra
    // 0x43002D78: nop

    return;
    // 0x43002D78: nop

;}
RECOMP_FUNC void ovl_enemy_world2_2D7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43002D7C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43002D80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43002D84: lw          $v0, 0x19C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X19C);
    // 0x43002D88: addiu       $t9, $zero, 0x14
    ctx->r25 = ADD32(0, 0X14);
    // 0x43002D8C: beq         $v0, $zero, L_43002DE4
    if (ctx->r2 == 0) {
        // 0x43002D90: nop
    
            goto L_43002DE4;
    }
    // 0x43002D90: nop

    // 0x43002D94: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x43002D98: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43002D9C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x43002DA0: lwc1        $f8, -0x5D44($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X5D44);
    // 0x43002DA4: nop

    // 0x43002DA8: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x43002DAC: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x43002DB0: nop

    // 0x43002DB4: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x43002DB8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x43002DBC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x43002DC0: nop

    // 0x43002DC4: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x43002DC8: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x43002DCC: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x43002DD0: bgez        $t7, L_43002DDC
    if (SIGNED(ctx->r15) >= 0) {
        // 0x43002DD4: sw          $t7, 0x19C($a0)
        MEM_W(0X19C, ctx->r4) = ctx->r15;
            goto L_43002DDC;
    }
    // 0x43002DD4: sw          $t7, 0x19C($a0)
    MEM_W(0X19C, ctx->r4) = ctx->r15;
    // 0x43002DD8: sw          $zero, 0x19C($a0)
    MEM_W(0X19C, ctx->r4) = 0;
L_43002DDC:
    // 0x43002DDC: b           L_43002E3C
    // 0x43002DE0: sw          $t9, 0x194($a0)
    MEM_W(0X194, ctx->r4) = ctx->r25;
        goto L_43002E3C;
    // 0x43002DE0: sw          $t9, 0x194($a0)
    MEM_W(0X194, ctx->r4) = ctx->r25;
L_43002DE4:
    // 0x43002DE4: lw          $v0, 0x194($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X194);
    // 0x43002DE8: nop

    // 0x43002DEC: addiu       $t0, $v0, -0x1
    ctx->r8 = ADD32(ctx->r2, -0X1);
    // 0x43002DF0: bgtz        $v0, L_43002E08
    if (SIGNED(ctx->r2) > 0) {
        // 0x43002DF4: sw          $t0, 0x194($a0)
        MEM_W(0X194, ctx->r4) = ctx->r8;
            goto L_43002E08;
    }
    // 0x43002DF4: sw          $t0, 0x194($a0)
    MEM_W(0X194, ctx->r4) = ctx->r8;
    // 0x43002DF8: jal         0x43002D18
    // 0x43002DFC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_enemy_world2_2D18(rdram, ctx);
        goto after_0;
    // 0x43002DFC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x43002E00: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43002E04: nop

L_43002E08:
    // 0x43002E08: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x43002E0C: lwc1        $f4, 0x184($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X184);
    // 0x43002E10: nop

    // 0x43002E14: c.le.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl <= ctx->f18.fl;
    // 0x43002E18: nop

    // 0x43002E1C: bc1f        L_43002E40
    if (!c1cs) {
        // 0x43002E20: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43002E40;
    }
    // 0x43002E20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43002E24: lw          $t1, 0x19C($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X19C);
    // 0x43002E28: nop

    // 0x43002E2C: bgtz        $t1, L_43002E40
    if (SIGNED(ctx->r9) > 0) {
        // 0x43002E30: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43002E40;
    }
    // 0x43002E30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43002E34: jal         0x43005078
    // 0x43002E38: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    ovl_enemy_world2_5078(rdram, ctx);
        goto after_1;
    // 0x43002E38: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    after_1:
L_43002E3C:
    // 0x43002E3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43002E40:
    // 0x43002E40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43002E44: jr          $ra
    // 0x43002E48: nop

    return;
    // 0x43002E48: nop

;}
RECOMP_FUNC void ovl_enemy_world2_2E4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43002E4C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x43002E50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43002E54: lwc1        $f4, 0x18($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X18);
    // 0x43002E58: addiu       $t6, $a0, 0x14
    ctx->r14 = ADD32(ctx->r4, 0X14);
    // 0x43002E5C: swc1        $f4, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f4.u32l;
    // 0x43002E60: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x43002E64: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x43002E68: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x43002E6C: jal         0x430006C4
    // 0x43002E70: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    ovl_enemy_world2_6C4(rdram, ctx);
        goto after_0;
    // 0x43002E70: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x43002E74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43002E78: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x43002E7C: jr          $ra
    // 0x43002E80: nop

    return;
    // 0x43002E80: nop

;}
RECOMP_FUNC void ovl_enemy_world2_2E84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43002E84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43002E88: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43002E8C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x43002E90: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x43002E94: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x43002E98: jal         0x43005250
    // 0x43002E9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_enemy_world2_5250(rdram, ctx);
        goto after_0;
    // 0x43002E9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x43002EA0: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x43002EA4: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x43002EA8: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x43002EAC: beq         $a0, $t6, L_43002ECC
    if (ctx->r4 == ctx->r14) {
        // 0x43002EB0: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_43002ECC;
    }
    // 0x43002EB0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x43002EB4: lw          $t7, 0x190($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X190);
    // 0x43002EB8: nop

    // 0x43002EBC: bne         $a2, $t7, L_43002ECC
    if (ctx->r6 != ctx->r15) {
        // 0x43002EC0: nop
    
            goto L_43002ECC;
    }
    // 0x43002EC0: nop

    // 0x43002EC4: b           L_43002FA8
    // 0x43002EC8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_43002FA8;
    // 0x43002EC8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_43002ECC:
    // 0x43002ECC: addiu       $v1, $v0, 0x268
    ctx->r3 = ADD32(ctx->r2, 0X268);
    // 0x43002ED0: lw          $t8, 0x4($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X4);
    // 0x43002ED4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x43002ED8: beq         $a0, $t8, L_43002EF8
    if (ctx->r4 == ctx->r24) {
        // 0x43002EDC: addiu       $a1, $zero, 0xA
        ctx->r5 = ADD32(0, 0XA);
            goto L_43002EF8;
    }
    // 0x43002EDC: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x43002EE0: lw          $t9, 0x190($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X190);
    // 0x43002EE4: nop

    // 0x43002EE8: bne         $a2, $t9, L_43002EF8
    if (ctx->r6 != ctx->r25) {
        // 0x43002EEC: nop
    
            goto L_43002EF8;
    }
    // 0x43002EEC: nop

    // 0x43002EF0: b           L_43002FA8
    // 0x43002EF4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_43002FA8;
    // 0x43002EF4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_43002EF8:
    // 0x43002EF8: addiu       $v1, $v1, 0x268
    ctx->r3 = ADD32(ctx->r3, 0X268);
L_43002EFC:
    // 0x43002EFC: lw          $t0, 0x4($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X4);
    // 0x43002F00: nop

    // 0x43002F04: beq         $a0, $t0, L_43002F24
    if (ctx->r4 == ctx->r8) {
        // 0x43002F08: nop
    
            goto L_43002F24;
    }
    // 0x43002F08: nop

    // 0x43002F0C: lw          $t1, 0x190($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X190);
    // 0x43002F10: nop

    // 0x43002F14: bne         $a2, $t1, L_43002F24
    if (ctx->r6 != ctx->r9) {
        // 0x43002F18: nop
    
            goto L_43002F24;
    }
    // 0x43002F18: nop

    // 0x43002F1C: b           L_43002FA8
    // 0x43002F20: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_43002FA8;
    // 0x43002F20: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_43002F24:
    // 0x43002F24: lw          $t2, 0x26C($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X26C);
    // 0x43002F28: addiu       $v1, $v1, 0x268
    ctx->r3 = ADD32(ctx->r3, 0X268);
    // 0x43002F2C: beq         $a0, $t2, L_43002F4C
    if (ctx->r4 == ctx->r10) {
        // 0x43002F30: nop
    
            goto L_43002F4C;
    }
    // 0x43002F30: nop

    // 0x43002F34: lw          $t3, 0x190($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X190);
    // 0x43002F38: nop

    // 0x43002F3C: bne         $a2, $t3, L_43002F4C
    if (ctx->r6 != ctx->r11) {
        // 0x43002F40: nop
    
            goto L_43002F4C;
    }
    // 0x43002F40: nop

    // 0x43002F44: b           L_43002FA8
    // 0x43002F48: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_43002FA8;
    // 0x43002F48: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_43002F4C:
    // 0x43002F4C: lw          $t4, 0x26C($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X26C);
    // 0x43002F50: addiu       $v1, $v1, 0x268
    ctx->r3 = ADD32(ctx->r3, 0X268);
    // 0x43002F54: beq         $a0, $t4, L_43002F74
    if (ctx->r4 == ctx->r12) {
        // 0x43002F58: nop
    
            goto L_43002F74;
    }
    // 0x43002F58: nop

    // 0x43002F5C: lw          $t5, 0x190($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X190);
    // 0x43002F60: nop

    // 0x43002F64: bne         $a2, $t5, L_43002F74
    if (ctx->r6 != ctx->r13) {
        // 0x43002F68: nop
    
            goto L_43002F74;
    }
    // 0x43002F68: nop

    // 0x43002F6C: b           L_43002FA8
    // 0x43002F70: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_43002FA8;
    // 0x43002F70: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_43002F74:
    // 0x43002F74: lw          $t6, 0x26C($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X26C);
    // 0x43002F78: addiu       $v1, $v1, 0x268
    ctx->r3 = ADD32(ctx->r3, 0X268);
    // 0x43002F7C: beq         $a0, $t6, L_43002F9C
    if (ctx->r4 == ctx->r14) {
        // 0x43002F80: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_43002F9C;
    }
    // 0x43002F80: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x43002F84: lw          $t7, 0x190($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X190);
    // 0x43002F88: nop

    // 0x43002F8C: bne         $a2, $t7, L_43002F9C
    if (ctx->r6 != ctx->r15) {
        // 0x43002F90: nop
    
            goto L_43002F9C;
    }
    // 0x43002F90: nop

    // 0x43002F94: b           L_43002FA8
    // 0x43002F98: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_43002FA8;
    // 0x43002F98: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_43002F9C:
    // 0x43002F9C: bne         $v0, $a1, L_43002EFC
    if (ctx->r2 != ctx->r5) {
        // 0x43002FA0: addiu       $v1, $v1, 0x268
        ctx->r3 = ADD32(ctx->r3, 0X268);
            goto L_43002EFC;
    }
    // 0x43002FA0: addiu       $v1, $v1, 0x268
    ctx->r3 = ADD32(ctx->r3, 0X268);
    // 0x43002FA4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_43002FA8:
    // 0x43002FA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43002FAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43002FB0: jr          $ra
    // 0x43002FB4: nop

    return;
    // 0x43002FB4: nop

;}
RECOMP_FUNC void ovl_enemy_world2_2FB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43002FB8: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x43002FBC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x43002FC0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43002FC4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43002FC8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x43002FCC: sw          $a2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r6;
    // 0x43002FD0: jal         0x43002E84
    // 0x43002FD4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    ovl_enemy_world2_2E84(rdram, ctx);
        goto after_0;
    // 0x43002FD4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x43002FD8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x43002FDC: bne         $v0, $at, L_43002FEC
    if (ctx->r2 != ctx->r1) {
        // 0x43002FE0: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_43002FEC;
    }
    // 0x43002FE0: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x43002FE4: b           L_430035E4
    // 0x43002FE8: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_430035E4;
    // 0x43002FE8: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_43002FEC:
    // 0x43002FEC: lw          $a0, 0xC($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XC);
    // 0x43002FF0: jal         0x43004880
    // 0x43002FF4: nop

    ovl_enemy_world2_4880(rdram, ctx);
        goto after_1;
    // 0x43002FF4: nop

    after_1:
    // 0x43002FF8: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x43002FFC: lw          $a0, 0x8($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X8);
    // 0x43003000: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x43003004: jal         0x430006C4
    // 0x43003008: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    ovl_enemy_world2_6C4(rdram, ctx);
        goto after_2;
    // 0x43003008: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    after_2:
    // 0x4300300C: beq         $v0, $zero, L_4300301C
    if (ctx->r2 == 0) {
        // 0x43003010: lui         $at, 0x4248
        ctx->r1 = S32(0X4248 << 16);
            goto L_4300301C;
    }
    // 0x43003010: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x43003014: b           L_430035E4
    // 0x43003018: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_430035E4;
    // 0x43003018: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_4300301C:
    // 0x4300301C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x43003020: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x43003024: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x43003028: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x4300302C: lwc1        $f10, 0x5C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x43003030: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x43003034: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x43003038: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x4300303C: swc1        $f8, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f8.u32l;
    // 0x43003040: swc1        $f18, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f18.u32l;
    // 0x43003044: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x43003048: jal         0x43005218
    // 0x4300304C: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    ovl_enemy_world2_5218(rdram, ctx);
        goto after_3;
    // 0x4300304C: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    after_3:
    // 0x43003050: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x43003054: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x43003058: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x4300305C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x43003060: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x43003064: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x43003068: lui         $t7, 0xE200
    ctx->r15 = S32(0XE200 << 16);
    // 0x4300306C: lui         $t8, 0x50
    ctx->r24 = S32(0X50 << 16);
    // 0x43003070: ori         $t8, $t8, 0x4240
    ctx->r24 = ctx->r24 | 0X4240;
    // 0x43003074: ori         $t7, $t7, 0x1C
    ctx->r15 = ctx->r15 | 0X1C;
    // 0x43003078: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x4300307C: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x43003080: lw          $t0, 0x19C($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X19C);
    // 0x43003084: lw          $t9, 0x198($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X198);
    // 0x43003088: lw          $t2, 0x48($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X48);
    // 0x4300308C: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x43003090: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x43003094: lw          $t3, 0x10($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X10);
    // 0x43003098: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x4300309C: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x430030A0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x430030A4: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x430030A8: mul.s       $f6, $f0, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x430030AC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x430030B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430030B4: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x430030B8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x430030BC: lui         $t4, 0x8282
    ctx->r12 = S32(0X8282 << 16);
    // 0x430030C0: lui         $a2, 0xFA00
    ctx->r6 = S32(0XFA00 << 16);
    // 0x430030C4: div.s       $f2, $f6, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x430030C8: ori         $t4, $t4, 0xFFB4
    ctx->r12 = ctx->r12 | 0XFFB4;
    // 0x430030CC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x430030D0: sw          $t4, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r12;
    // 0x430030D4: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
    // 0x430030D8: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x430030DC: lui         $t6, 0xFFFD
    ctx->r14 = S32(0XFFFD << 16);
    // 0x430030E0: lui         $t5, 0xFCFF
    ctx->r13 = S32(0XFCFF << 16);
    // 0x430030E4: ori         $t5, $t5, 0xFFFF
    ctx->r13 = ctx->r13 | 0XFFFF;
    // 0x430030E8: ori         $t6, $t6, 0xF6FB
    ctx->r14 = ctx->r14 | 0XF6FB;
    // 0x430030EC: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x430030F0: sw          $t6, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r14;
    // 0x430030F4: sw          $t5, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r13;
    // 0x430030F8: lui         $t7, 0xFF10
    ctx->r15 = S32(0XFF10 << 16);
    // 0x430030FC: ori         $t7, $t7, 0x13F
    ctx->r15 = ctx->r15 | 0X13F;
    // 0x43003100: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x43003104: lui         $t8, 0x200
    ctx->r24 = S32(0X200 << 16);
    // 0x43003108: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x4300310C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x43003110: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x43003114: lui         $t0, 0x101
    ctx->r8 = S32(0X101 << 16);
    // 0x43003118: ori         $t0, $t0, 0x101
    ctx->r8 = ctx->r8 | 0X101;
    // 0x4300311C: lui         $t9, 0xF700
    ctx->r25 = S32(0XF700 << 16);
    // 0x43003120: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x43003124: sw          $t0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r8;
    // 0x43003128: lwc1        $f16, 0x58($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X58);
    // 0x4300312C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x43003130: add.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f2.fl;
    // 0x43003134: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x43003138: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x4300313C: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x43003140: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x43003144: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x43003148: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x4300314C: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x43003150: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43003154: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x43003158: lui         $a1, 0xF600
    ctx->r5 = S32(0XF600 << 16);
    // 0x4300315C: beq         $t2, $zero, L_430031AC
    if (ctx->r10 == 0) {
        // 0x43003160: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_430031AC;
    }
    // 0x43003160: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x43003164: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x43003168: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4300316C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x43003170: sub.s       $f4, $f18, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x43003174: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x43003178: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x4300317C: nop

    // 0x43003180: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x43003184: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x43003188: nop

    // 0x4300318C: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x43003190: bne         $t2, $zero, L_430031A4
    if (ctx->r10 != 0) {
        // 0x43003194: nop
    
            goto L_430031A4;
    }
    // 0x43003194: nop

    // 0x43003198: mfc1        $t2, $f4
    ctx->r10 = (int32_t)ctx->f4.u32l;
    // 0x4300319C: b           L_430031BC
    // 0x430031A0: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
        goto L_430031BC;
    // 0x430031A0: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
L_430031A4:
    // 0x430031A4: b           L_430031BC
    // 0x430031A8: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
        goto L_430031BC;
    // 0x430031A8: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
L_430031AC:
    // 0x430031AC: mfc1        $t2, $f4
    ctx->r10 = (int32_t)ctx->f4.u32l;
    // 0x430031B0: nop

    // 0x430031B4: bltz        $t2, L_430031A4
    if (SIGNED(ctx->r10) < 0) {
        // 0x430031B8: nop
    
            goto L_430031A4;
    }
    // 0x430031B8: nop

L_430031BC:
    // 0x430031BC: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x430031C0: lwc1        $f8, 0x5C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x430031C4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x430031C8: add.s       $f6, $f8, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x430031CC: andi        $t3, $t2, 0x3FF
    ctx->r11 = ctx->r10 & 0X3FF;
    // 0x430031D0: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x430031D4: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x430031D8: sll         $t4, $t3, 14
    ctx->r12 = S32(ctx->r11 << 14);
    // 0x430031DC: cvt.w.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = CVT_W_S(ctx->f6.fl);
    // 0x430031E0: or          $t5, $t4, $a1
    ctx->r13 = ctx->r12 | ctx->r5;
    // 0x430031E4: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x430031E8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x430031EC: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x430031F0: beq         $t7, $zero, L_4300323C
    if (ctx->r15 == 0) {
        // 0x430031F4: lui         $at, 0x4F00
        ctx->r1 = S32(0X4F00 << 16);
            goto L_4300323C;
    }
    // 0x430031F4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x430031F8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x430031FC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x43003200: sub.s       $f10, $f6, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x43003204: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x43003208: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x4300320C: nop

    // 0x43003210: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x43003214: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x43003218: nop

    // 0x4300321C: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x43003220: bne         $t7, $zero, L_43003234
    if (ctx->r15 != 0) {
        // 0x43003224: nop
    
            goto L_43003234;
    }
    // 0x43003224: nop

    // 0x43003228: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x4300322C: b           L_4300324C
    // 0x43003230: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_4300324C;
    // 0x43003230: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_43003234:
    // 0x43003234: b           L_4300324C
    // 0x43003238: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_4300324C;
    // 0x43003238: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
L_4300323C:
    // 0x4300323C: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x43003240: nop

    // 0x43003244: bltz        $t7, L_43003234
    if (SIGNED(ctx->r15) < 0) {
        // 0x43003248: nop
    
            goto L_43003234;
    }
    // 0x43003248: nop

L_4300324C:
    // 0x4300324C: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x43003250: andi        $t8, $t7, 0x3FF
    ctx->r24 = ctx->r15 & 0X3FF;
    // 0x43003254: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x43003258: or          $t0, $t5, $t9
    ctx->r8 = ctx->r13 | ctx->r25;
    // 0x4300325C: sw          $t0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r8;
    // 0x43003260: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x43003264: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x43003268: lwc1        $f16, 0x58($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X58);
    // 0x4300326C: lui         $t0, 0xFF00
    ctx->r8 = S32(0XFF00 << 16);
    // 0x43003270: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x43003274: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x43003278: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x4300327C: ori         $t0, $t0, 0x80
    ctx->r8 = ctx->r8 | 0X80;
    // 0x43003280: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x43003284: beq         $t2, $zero, L_430032D0
    if (ctx->r10 == 0) {
        // 0x43003288: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_430032D0;
    }
    // 0x43003288: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x4300328C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x43003290: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x43003294: sub.s       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x43003298: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x4300329C: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x430032A0: nop

    // 0x430032A4: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x430032A8: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x430032AC: nop

    // 0x430032B0: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x430032B4: bne         $t2, $zero, L_430032C8
    if (ctx->r10 != 0) {
        // 0x430032B8: nop
    
            goto L_430032C8;
    }
    // 0x430032B8: nop

    // 0x430032BC: mfc1        $t2, $f18
    ctx->r10 = (int32_t)ctx->f18.u32l;
    // 0x430032C0: b           L_430032E0
    // 0x430032C4: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
        goto L_430032E0;
    // 0x430032C4: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
L_430032C8:
    // 0x430032C8: b           L_430032E0
    // 0x430032CC: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
        goto L_430032E0;
    // 0x430032CC: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
L_430032D0:
    // 0x430032D0: mfc1        $t2, $f18
    ctx->r10 = (int32_t)ctx->f18.u32l;
    // 0x430032D4: nop

    // 0x430032D8: bltz        $t2, L_430032C8
    if (SIGNED(ctx->r10) < 0) {
        // 0x430032DC: nop
    
            goto L_430032C8;
    }
    // 0x430032DC: nop

L_430032E0:
    // 0x430032E0: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x430032E4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x430032E8: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x430032EC: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x430032F0: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x430032F4: andi        $t3, $t2, 0x3FF
    ctx->r11 = ctx->r10 & 0X3FF;
    // 0x430032F8: cvt.w.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = CVT_W_S(ctx->f4.fl);
    // 0x430032FC: sll         $t4, $t3, 14
    ctx->r12 = S32(ctx->r11 << 14);
    // 0x43003300: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x43003304: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x43003308: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x4300330C: beq         $t7, $zero, L_43003358
    if (ctx->r15 == 0) {
        // 0x43003310: nop
    
            goto L_43003358;
    }
    // 0x43003310: nop

    // 0x43003314: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x43003318: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x4300331C: sub.s       $f8, $f4, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x43003320: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x43003324: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x43003328: nop

    // 0x4300332C: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x43003330: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x43003334: nop

    // 0x43003338: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x4300333C: bne         $t7, $zero, L_43003350
    if (ctx->r15 != 0) {
        // 0x43003340: nop
    
            goto L_43003350;
    }
    // 0x43003340: nop

    // 0x43003344: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x43003348: b           L_43003368
    // 0x4300334C: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_43003368;
    // 0x4300334C: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_43003350:
    // 0x43003350: b           L_43003368
    // 0x43003354: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_43003368;
    // 0x43003354: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
L_43003358:
    // 0x43003358: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x4300335C: nop

    // 0x43003360: bltz        $t7, L_43003350
    if (SIGNED(ctx->r15) < 0) {
        // 0x43003364: nop
    
            goto L_43003350;
    }
    // 0x43003364: nop

L_43003368:
    // 0x43003368: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x4300336C: andi        $t8, $t7, 0x3FF
    ctx->r24 = ctx->r15 & 0X3FF;
    // 0x43003370: c.eq.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl == ctx->f12.fl;
    // 0x43003374: sll         $t5, $t8, 2
    ctx->r13 = S32(ctx->r24 << 2);
    // 0x43003378: or          $t9, $t4, $t5
    ctx->r25 = ctx->r12 | ctx->r13;
    // 0x4300337C: bc1t        L_430035E0
    if (c1cs) {
        // 0x43003380: sw          $t9, 0x4($a0)
        MEM_W(0X4, ctx->r4) = ctx->r25;
            goto L_430035E0;
    }
    // 0x43003380: sw          $t9, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r25;
    // 0x43003384: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
    // 0x43003388: sw          $t0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r8;
    // 0x4300338C: lwc1        $f6, 0x58($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X58);
    // 0x43003390: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x43003394: add.s       $f10, $f6, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f12.fl;
    // 0x43003398: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x4300339C: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x430033A0: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x430033A4: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x430033A8: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x430033AC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x430033B0: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x430033B4: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x430033B8: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x430033BC: beq         $t2, $zero, L_43003408
    if (ctx->r10 == 0) {
        // 0x430033C0: nop
    
            goto L_43003408;
    }
    // 0x430033C0: nop

    // 0x430033C4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x430033C8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x430033CC: sub.s       $f16, $f10, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x430033D0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x430033D4: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x430033D8: nop

    // 0x430033DC: cvt.w.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_S(ctx->f16.fl);
    // 0x430033E0: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x430033E4: nop

    // 0x430033E8: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x430033EC: bne         $t2, $zero, L_43003400
    if (ctx->r10 != 0) {
        // 0x430033F0: nop
    
            goto L_43003400;
    }
    // 0x430033F0: nop

    // 0x430033F4: mfc1        $t2, $f16
    ctx->r10 = (int32_t)ctx->f16.u32l;
    // 0x430033F8: b           L_43003418
    // 0x430033FC: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
        goto L_43003418;
    // 0x430033FC: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
L_43003400:
    // 0x43003400: b           L_43003418
    // 0x43003404: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
        goto L_43003418;
    // 0x43003404: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
L_43003408:
    // 0x43003408: mfc1        $t2, $f16
    ctx->r10 = (int32_t)ctx->f16.u32l;
    // 0x4300340C: nop

    // 0x43003410: bltz        $t2, L_43003400
    if (SIGNED(ctx->r10) < 0) {
        // 0x43003414: nop
    
            goto L_43003400;
    }
    // 0x43003414: nop

L_43003418:
    // 0x43003418: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x4300341C: lwc1        $f18, 0x5C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x43003420: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x43003424: add.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f0.fl;
    // 0x43003428: andi        $t3, $t2, 0x3FF
    ctx->r11 = ctx->r10 & 0X3FF;
    // 0x4300342C: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x43003430: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x43003434: sll         $t6, $t3, 14
    ctx->r14 = S32(ctx->r11 << 14);
    // 0x43003438: cvt.w.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = CVT_W_S(ctx->f4.fl);
    // 0x4300343C: or          $t7, $t6, $a1
    ctx->r15 = ctx->r14 | ctx->r5;
    // 0x43003440: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x43003444: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x43003448: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x4300344C: beq         $t4, $zero, L_43003498
    if (ctx->r12 == 0) {
        // 0x43003450: nop
    
            goto L_43003498;
    }
    // 0x43003450: nop

    // 0x43003454: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x43003458: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x4300345C: sub.s       $f8, $f4, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x43003460: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x43003464: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x43003468: nop

    // 0x4300346C: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x43003470: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x43003474: nop

    // 0x43003478: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x4300347C: bne         $t4, $zero, L_43003490
    if (ctx->r12 != 0) {
        // 0x43003480: nop
    
            goto L_43003490;
    }
    // 0x43003480: nop

    // 0x43003484: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
    // 0x43003488: b           L_430034A8
    // 0x4300348C: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
        goto L_430034A8;
    // 0x4300348C: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
L_43003490:
    // 0x43003490: b           L_430034A8
    // 0x43003494: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
        goto L_430034A8;
    // 0x43003494: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
L_43003498:
    // 0x43003498: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
    // 0x4300349C: nop

    // 0x430034A0: bltz        $t4, L_43003490
    if (SIGNED(ctx->r12) < 0) {
        // 0x430034A4: nop
    
            goto L_43003490;
    }
    // 0x430034A4: nop

L_430034A8:
    // 0x430034A8: andi        $t5, $t4, 0x3FF
    ctx->r13 = ctx->r12 & 0X3FF;
    // 0x430034AC: sll         $t9, $t5, 2
    ctx->r25 = S32(ctx->r13 << 2);
    // 0x430034B0: or          $t0, $t7, $t9
    ctx->r8 = ctx->r15 | ctx->r25;
    // 0x430034B4: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x430034B8: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x430034BC: lwc1        $f6, 0x58($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X58);
    // 0x430034C0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x430034C4: add.s       $f10, $f6, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f2.fl;
    // 0x430034C8: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x430034CC: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x430034D0: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x430034D4: nop

    // 0x430034D8: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x430034DC: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x430034E0: nop

    // 0x430034E4: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x430034E8: beq         $t2, $zero, L_43003534
    if (ctx->r10 == 0) {
        // 0x430034EC: nop
    
            goto L_43003534;
    }
    // 0x430034EC: nop

    // 0x430034F0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x430034F4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x430034F8: sub.s       $f16, $f10, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x430034FC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x43003500: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x43003504: nop

    // 0x43003508: cvt.w.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_S(ctx->f16.fl);
    // 0x4300350C: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x43003510: nop

    // 0x43003514: andi        $t2, $t2, 0x78
    ctx->r10 = ctx->r10 & 0X78;
    // 0x43003518: bne         $t2, $zero, L_4300352C
    if (ctx->r10 != 0) {
        // 0x4300351C: nop
    
            goto L_4300352C;
    }
    // 0x4300351C: nop

    // 0x43003520: mfc1        $t2, $f16
    ctx->r10 = (int32_t)ctx->f16.u32l;
    // 0x43003524: b           L_43003544
    // 0x43003528: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
        goto L_43003544;
    // 0x43003528: or          $t2, $t2, $at
    ctx->r10 = ctx->r10 | ctx->r1;
L_4300352C:
    // 0x4300352C: b           L_43003544
    // 0x43003530: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
        goto L_43003544;
    // 0x43003530: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
L_43003534:
    // 0x43003534: mfc1        $t2, $f16
    ctx->r10 = (int32_t)ctx->f16.u32l;
    // 0x43003538: nop

    // 0x4300353C: bltz        $t2, L_4300352C
    if (SIGNED(ctx->r10) < 0) {
        // 0x43003540: nop
    
            goto L_4300352C;
    }
    // 0x43003540: nop

L_43003544:
    // 0x43003544: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x43003548: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x4300354C: lwc1        $f18, 0x5C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x43003550: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x43003554: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x43003558: andi        $t3, $t2, 0x3FF
    ctx->r11 = ctx->r10 & 0X3FF;
    // 0x4300355C: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x43003560: sll         $t6, $t3, 14
    ctx->r14 = S32(ctx->r11 << 14);
    // 0x43003564: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x43003568: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x4300356C: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x43003570: beq         $t4, $zero, L_430035BC
    if (ctx->r12 == 0) {
        // 0x43003574: nop
    
            goto L_430035BC;
    }
    // 0x43003574: nop

    // 0x43003578: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4300357C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x43003580: sub.s       $f4, $f18, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x43003584: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x43003588: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x4300358C: nop

    // 0x43003590: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x43003594: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x43003598: nop

    // 0x4300359C: andi        $t4, $t4, 0x78
    ctx->r12 = ctx->r12 & 0X78;
    // 0x430035A0: bne         $t4, $zero, L_430035B4
    if (ctx->r12 != 0) {
        // 0x430035A4: nop
    
            goto L_430035B4;
    }
    // 0x430035A4: nop

    // 0x430035A8: mfc1        $t4, $f4
    ctx->r12 = (int32_t)ctx->f4.u32l;
    // 0x430035AC: b           L_430035CC
    // 0x430035B0: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
        goto L_430035CC;
    // 0x430035B0: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
L_430035B4:
    // 0x430035B4: b           L_430035CC
    // 0x430035B8: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
        goto L_430035CC;
    // 0x430035B8: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
L_430035BC:
    // 0x430035BC: mfc1        $t4, $f4
    ctx->r12 = (int32_t)ctx->f4.u32l;
    // 0x430035C0: nop

    // 0x430035C4: bltz        $t4, L_430035B4
    if (SIGNED(ctx->r12) < 0) {
        // 0x430035C8: nop
    
            goto L_430035B4;
    }
    // 0x430035C8: nop

L_430035CC:
    // 0x430035CC: andi        $t5, $t4, 0x3FF
    ctx->r13 = ctx->r12 & 0X3FF;
    // 0x430035D0: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x430035D4: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x430035D8: or          $t9, $t6, $t7
    ctx->r25 = ctx->r14 | ctx->r15;
    // 0x430035DC: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
L_430035E0:
    // 0x430035E0: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_430035E4:
    // 0x430035E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x430035E8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x430035EC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x430035F0: jr          $ra
    // 0x430035F4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x430035F4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void ovl_enemy_world2_35F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430035F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x430035FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43003600: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43003604: lwc1        $f4, 0x28($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X28);
    // 0x43003608: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    // 0x4300360C: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x43003610: nop

    // 0x43003614: bc1f        L_43003654
    if (!c1cs) {
        // 0x43003618: nop
    
            goto L_43003654;
    }
    // 0x43003618: nop

    // 0x4300361C: lwc1        $f6, 0x30($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X30);
    // 0x43003620: nop

    // 0x43003624: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x43003628: nop

    // 0x4300362C: bc1f        L_43003654
    if (!c1cs) {
        // 0x43003630: nop
    
            goto L_43003654;
    }
    // 0x43003630: nop

    // 0x43003634: lw          $t6, 0x54($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X54);
    // 0x43003638: addiu       $at, $zero, -0x9
    ctx->r1 = ADD32(0, -0X9);
    // 0x4300363C: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x43003640: sw          $t7, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r15;
    // 0x43003644: jal         0x430014D8
    // 0x43003648: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_enemy_world2_14D8(rdram, ctx);
        goto after_0;
    // 0x43003648: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x4300364C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43003650: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
L_43003654:
    // 0x43003654: jal         0x43009ECC
    // 0x43003658: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    ovl_enemy_world2_9ECC(rdram, ctx);
        goto after_1;
    // 0x43003658: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_1:
    // 0x4300365C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43003660: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43003664: jr          $ra
    // 0x43003668: nop

    return;
    // 0x43003668: nop

;}
RECOMP_FUNC void ovl_enemy_world2_366C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300366C: sll         $t6, $a1, 3
    ctx->r14 = S32(ctx->r5 << 3);
    // 0x43003670: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x43003674: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x43003678: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x4300367C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43003680: addu        $v0, $a0, $t6
    ctx->r2 = ADD32(ctx->r4, ctx->r14);
    // 0x43003684: lw          $v1, 0x70($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X70);
    // 0x43003688: sw          $zero, 0x78($v0)
    MEM_W(0X78, ctx->r2) = 0;
    // 0x4300368C: sra         $t0, $v1, 24
    ctx->r8 = S32(SIGNED(ctx->r3) >> 24);
    // 0x43003690: andi        $t7, $t0, 0xFF
    ctx->r15 = ctx->r8 & 0XFF;
    // 0x43003694: bltz        $t7, L_430037A0
    if (SIGNED(ctx->r15) < 0) {
        // 0x43003698: sw          $v1, 0x7C($v0)
        MEM_W(0X7C, ctx->r2) = ctx->r3;
            goto L_430037A0;
    }
    // 0x43003698: sw          $v1, 0x7C($v0)
    MEM_W(0X7C, ctx->r2) = ctx->r3;
    // 0x4300369C: slti        $at, $t7, 0x6
    ctx->r1 = SIGNED(ctx->r15) < 0X6 ? 1 : 0;
    // 0x430036A0: beq         $at, $zero, L_430037A0
    if (ctx->r1 == 0) {
        // 0x430036A4: sll         $v1, $t7, 2
        ctx->r3 = S32(ctx->r15 << 2);
            goto L_430037A0;
    }
    // 0x430036A4: sll         $v1, $t7, 2
    ctx->r3 = S32(ctx->r15 << 2);
    // 0x430036A8: lui         $t9, 0x4301
    ctx->r25 = S32(0X4301 << 16);
    // 0x430036AC: addu        $t9, $t9, $v1
    ctx->r25 = ADD32(ctx->r25, ctx->r3);
    // 0x430036B0: lw          $t9, -0x600C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X600C);
    // 0x430036B4: lui         $a3, 0x4301
    ctx->r7 = S32(0X4301 << 16);
    // 0x430036B8: sw          $t9, 0x78($v0)
    MEM_W(0X78, ctx->r2) = ctx->r25;
    // 0x430036BC: addu        $a3, $a3, $v1
    ctx->r7 = ADD32(ctx->r7, ctx->r3);
    // 0x430036C0: lw          $a3, -0x6024($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X6024);
    // 0x430036C4: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x430036C8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x430036CC: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x430036D0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x430036D4: addiu       $a2, $v0, 0x68
    ctx->r6 = ADD32(ctx->r2, 0X68);
    // 0x430036D8: jal         0x43005218
    // 0x430036DC: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    ovl_enemy_world2_5218(rdram, ctx);
        goto after_0;
    // 0x430036DC: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    after_0:
    // 0x430036E0: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x430036E4: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x430036E8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x430036EC: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x430036F0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x430036F4: beq         $a3, $at, L_43003718
    if (ctx->r7 == ctx->r1) {
        // 0x430036F8: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_43003718;
    }
    // 0x430036F8: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x430036FC: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x43003700: beq         $a3, $v1, L_43003750
    if (ctx->r7 == ctx->r3) {
        // 0x43003704: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_43003750;
    }
    // 0x43003704: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x43003708: beq         $a3, $at, L_43003764
    if (ctx->r7 == ctx->r1) {
        // 0x4300370C: nop
    
            goto L_43003764;
    }
    // 0x4300370C: nop

    // 0x43003710: b           L_430037A4
    // 0x43003714: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_430037A4;
    // 0x43003714: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43003718:
    // 0x43003718: lw          $t2, 0x78($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X78);
    // 0x4300371C: nop

    // 0x43003720: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x43003724: beq         $t3, $zero, L_43003734
    if (ctx->r11 == 0) {
        // 0x43003728: nop
    
            goto L_43003734;
    }
    // 0x43003728: nop

    // 0x4300372C: b           L_43003734
    // 0x43003730: nop

        goto L_43003734;
    // 0x43003730: nop

L_43003734:
    // 0x43003734: bne         $v1, $t0, L_430037A4
    if (ctx->r3 != ctx->r8) {
        // 0x43003738: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_430037A4;
    }
    // 0x43003738: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4300373C: lw          $t4, 0x54($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X54);
    // 0x43003740: nop

    // 0x43003744: ori         $t5, $t4, 0x20
    ctx->r13 = ctx->r12 | 0X20;
    // 0x43003748: b           L_430037A0
    // 0x4300374C: sw          $t5, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r13;
        goto L_430037A0;
    // 0x4300374C: sw          $t5, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r13;
L_43003750:
    // 0x43003750: lw          $t6, 0x70($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X70);
    // 0x43003754: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x43003758: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x4300375C: b           L_430037A0
    // 0x43003760: sw          $t7, 0x70($v0)
    MEM_W(0X70, ctx->r2) = ctx->r15;
        goto L_430037A0;
    // 0x43003760: sw          $t7, 0x70($v0)
    MEM_W(0X70, ctx->r2) = ctx->r15;
L_43003764:
    // 0x43003764: lw          $t8, 0x78($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X78);
    // 0x43003768: nop

    // 0x4300376C: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x43003770: beq         $t9, $zero, L_430037A0
    if (ctx->r25 == 0) {
        // 0x43003774: nop
    
            goto L_430037A0;
    }
    // 0x43003774: nop

    // 0x43003778: lw          $t1, 0x70($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X70);
    // 0x4300377C: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x43003780: or          $t2, $t1, $at
    ctx->r10 = ctx->r9 | ctx->r1;
    // 0x43003784: bne         $v1, $t0, L_430037A0
    if (ctx->r3 != ctx->r8) {
        // 0x43003788: sw          $t2, 0x70($v0)
        MEM_W(0X70, ctx->r2) = ctx->r10;
            goto L_430037A0;
    }
    // 0x43003788: sw          $t2, 0x70($v0)
    MEM_W(0X70, ctx->r2) = ctx->r10;
    // 0x4300378C: lw          $t3, 0x54($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X54);
    // 0x43003790: nop

    // 0x43003794: ori         $t4, $t3, 0x20
    ctx->r12 = ctx->r11 | 0X20;
    // 0x43003798: b           L_430037A0
    // 0x4300379C: sw          $t4, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r12;
        goto L_430037A0;
    // 0x4300379C: sw          $t4, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r12;
L_430037A0:
    // 0x430037A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_430037A4:
    // 0x430037A4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x430037A8: jr          $ra
    // 0x430037AC: nop

    return;
    // 0x430037AC: nop

;}
RECOMP_FUNC void ovl_enemy_world2_37B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430037B0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x430037B4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x430037B8: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x430037BC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x430037C0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x430037C4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x430037C8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x430037CC: lw          $v1, 0x64($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X64);
    // 0x430037D0: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x430037D4: or          $s4, $a1, $zero
    ctx->r20 = ctx->r5 | 0;
    // 0x430037D8: blez        $v1, L_43003820
    if (SIGNED(ctx->r3) <= 0) {
        // 0x430037DC: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_43003820;
    }
    // 0x430037DC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x430037E0: lui         $s3, 0xFF
    ctx->r19 = S32(0XFF << 16);
    // 0x430037E4: ori         $s3, $s3, 0xFFFF
    ctx->r19 = ctx->r19 | 0XFFFF;
    // 0x430037E8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
L_430037EC:
    // 0x430037EC: lw          $v0, 0x70($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X70);
    // 0x430037F0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x430037F4: and         $t6, $v0, $s3
    ctx->r14 = ctx->r2 & ctx->r19;
    // 0x430037F8: bne         $s4, $t6, L_43003810
    if (ctx->r20 != ctx->r14) {
        // 0x430037FC: nop
    
            goto L_43003810;
    }
    // 0x430037FC: nop

    // 0x43003800: jal         0x4300366C
    // 0x43003804: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    ovl_enemy_world2_366C(rdram, ctx);
        goto after_0;
    // 0x43003804: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_0:
    // 0x43003808: lw          $v1, 0x64($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X64);
    // 0x4300380C: nop

L_43003810:
    // 0x43003810: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x43003814: slt         $at, $s1, $v1
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x43003818: bne         $at, $zero, L_430037EC
    if (ctx->r1 != 0) {
        // 0x4300381C: addiu       $s0, $s0, 0x1C
        ctx->r16 = ADD32(ctx->r16, 0X1C);
            goto L_430037EC;
    }
    // 0x4300381C: addiu       $s0, $s0, 0x1C
    ctx->r16 = ADD32(ctx->r16, 0X1C);
L_43003820:
    // 0x43003820: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x43003824: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43003828: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x4300382C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x43003830: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x43003834: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x43003838: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x4300383C: jr          $ra
    // 0x43003840: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x43003840: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void ovl_enemy_world2_3844(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43003844: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43003848: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4300384C: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x43003850: jal         0x43004880
    // 0x43003854: nop

    ovl_enemy_world2_4880(rdram, ctx);
        goto after_0;
    // 0x43003854: nop

    after_0:
    // 0x43003858: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4300385C: lw          $v0, 0x18($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X18);
    // 0x43003860: jr          $ra
    // 0x43003864: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x43003864: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void ovl_enemy_world2_3868(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43003868: lw          $t6, 0x54($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X54);
    // 0x4300386C: lui         $at, 0xE9F9
    ctx->r1 = S32(0XE9F9 << 16);
    // 0x43003870: ori         $at, $at, 0x57FF
    ctx->r1 = ctx->r1 | 0X57FF;
    // 0x43003874: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x43003878: jr          $ra
    // 0x4300387C: sw          $t7, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r15;
    return;
    // 0x4300387C: sw          $t7, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void ovl_enemy_world2_3880(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43003880: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x43003884: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43003888: lw          $v0, 0x54($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X54);
    // 0x4300388C: nop

    // 0x43003890: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x43003894: beq         $t6, $zero, L_43003A54
    if (ctx->r14 == 0) {
        // 0x43003898: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43003A54;
    }
    // 0x43003898: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4300389C: lw          $v1, 0x58($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X58);
    // 0x430038A0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x430038A4: addiu       $t7, $v1, -0x17
    ctx->r15 = ADD32(ctx->r3, -0X17);
    // 0x430038A8: sltiu       $at, $t7, 0x18
    ctx->r1 = ctx->r15 < 0X18 ? 1 : 0;
    // 0x430038AC: beq         $at, $zero, L_43003A04
    if (ctx->r1 == 0) {
        // 0x430038B0: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_43003A04;
    }
    // 0x430038B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x430038B4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x430038B8: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430038BC: addu        $at, $at, $t7
    gpr jr_addend_430038C8 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x430038C0: lw          $t7, -0x5D40($at)
    ctx->r15 = ADD32(ctx->r1, -0X5D40);
    // 0x430038C4: nop

    // 0x430038C8: jr          $t7
    // 0x430038CC: nop

    switch (jr_addend_430038C8 >> 2) {
        case 0: goto L_43003950; break;
        case 1: goto L_43003978; break;
        case 2: goto L_43003A04; break;
        case 3: goto L_43003A04; break;
        case 4: goto L_43003A04; break;
        case 5: goto L_43003A04; break;
        case 6: goto L_43003A04; break;
        case 7: goto L_43003A04; break;
        case 8: goto L_43003A04; break;
        case 9: goto L_43003A04; break;
        case 10: goto L_43003A04; break;
        case 11: goto L_43003A04; break;
        case 12: goto L_43003A04; break;
        case 13: goto L_43003A04; break;
        case 14: goto L_430038D0; break;
        case 15: goto L_4300390C; break;
        case 16: goto L_43003A04; break;
        case 17: goto L_43003A04; break;
        case 18: goto L_43003A04; break;
        case 19: goto L_430039A0; break;
        case 20: goto L_430039A0; break;
        case 21: goto L_430039A0; break;
        case 22: goto L_430039A0; break;
        case 23: goto L_430039A0; break;
        default: switch_error(__func__, 0x430038C8, 0x4300A2C0);
    }
    // 0x430038CC: nop

L_430038D0:
    // 0x430038D0: andi        $t8, $v0, 0x2
    ctx->r24 = ctx->r2 & 0X2;
    // 0x430038D4: bne         $t8, $zero, L_43003904
    if (ctx->r24 != 0) {
        // 0x430038D8: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_43003904;
    }
    // 0x430038D8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x430038DC: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x430038E0: jal         0x430037B0
    // 0x430038E4: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    ovl_enemy_world2_37B0(rdram, ctx);
        goto after_0;
    // 0x430038E4: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_0:
    // 0x430038E8: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x430038EC: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x430038F0: lw          $t9, 0x54($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X54);
    // 0x430038F4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x430038F8: ori         $t0, $t9, 0x2
    ctx->r8 = ctx->r25 | 0X2;
    // 0x430038FC: b           L_43003A04
    // 0x43003900: sw          $t0, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r8;
        goto L_43003A04;
    // 0x43003900: sw          $t0, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r8;
L_43003904:
    // 0x43003904: b           L_43003A04
    // 0x43003908: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
        goto L_43003A04;
    // 0x43003908: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
L_4300390C:
    // 0x4300390C: lw          $t1, 0x5C($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X5C);
    // 0x43003910: sll         $t3, $v0, 6
    ctx->r11 = S32(ctx->r2 << 6);
    // 0x43003914: bne         $v1, $t1, L_43003938
    if (ctx->r3 != ctx->r9) {
        // 0x43003918: nop
    
            goto L_43003938;
    }
    // 0x43003918: nop

    // 0x4300391C: lw          $t2, 0x60($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X60);
    // 0x43003920: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x43003924: slti        $at, $t2, 0xA
    ctx->r1 = SIGNED(ctx->r10) < 0XA ? 1 : 0;
    // 0x43003928: bne         $at, $zero, L_43003A04
    if (ctx->r1 != 0) {
        // 0x4300392C: nop
    
            goto L_43003A04;
    }
    // 0x4300392C: nop

    // 0x43003930: b           L_43003A04
    // 0x43003934: sw          $zero, 0x60($a0)
    MEM_W(0X60, ctx->r4) = 0;
        goto L_43003A04;
    // 0x43003934: sw          $zero, 0x60($a0)
    MEM_W(0X60, ctx->r4) = 0;
L_43003938:
    // 0x43003938: bgez        $t3, L_43003948
    if (SIGNED(ctx->r11) >= 0) {
        // 0x4300393C: nop
    
            goto L_43003948;
    }
    // 0x4300393C: nop

    // 0x43003940: b           L_43003A04
    // 0x43003944: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
        goto L_43003A04;
    // 0x43003944: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_43003948:
    // 0x43003948: b           L_43003A04
    // 0x4300394C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
        goto L_43003A04;
    // 0x4300394C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
L_43003950:
    // 0x43003950: sll         $t4, $v0, 13
    ctx->r12 = S32(ctx->r2 << 13);
    // 0x43003954: bltz        $t4, L_43003970
    if (SIGNED(ctx->r12) < 0) {
        // 0x43003958: addiu       $t5, $zero, 0x3
        ctx->r13 = ADD32(0, 0X3);
            goto L_43003970;
    }
    // 0x43003958: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x4300395C: sw          $t5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r13;
    // 0x43003960: lw          $t6, 0x1DC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X1DC);
    // 0x43003964: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x43003968: b           L_43003A04
    // 0x4300396C: sw          $t6, 0x1E0($a0)
    MEM_W(0X1E0, ctx->r4) = ctx->r14;
        goto L_43003A04;
    // 0x4300396C: sw          $t6, 0x1E0($a0)
    MEM_W(0X1E0, ctx->r4) = ctx->r14;
L_43003970:
    // 0x43003970: b           L_43003A04
    // 0x43003974: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
        goto L_43003A04;
    // 0x43003974: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_43003978:
    // 0x43003978: sll         $t7, $v0, 13
    ctx->r15 = S32(ctx->r2 << 13);
    // 0x4300397C: bltz        $t7, L_43003998
    if (SIGNED(ctx->r15) < 0) {
        // 0x43003980: addiu       $t8, $zero, 0x4
        ctx->r24 = ADD32(0, 0X4);
            goto L_43003998;
    }
    // 0x43003980: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x43003984: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x43003988: lw          $t9, 0x1DC($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X1DC);
    // 0x4300398C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x43003990: b           L_43003A04
    // 0x43003994: sw          $t9, 0x1E0($a0)
    MEM_W(0X1E0, ctx->r4) = ctx->r25;
        goto L_43003A04;
    // 0x43003994: sw          $t9, 0x1E0($a0)
    MEM_W(0X1E0, ctx->r4) = ctx->r25;
L_43003998:
    // 0x43003998: b           L_43003A04
    // 0x4300399C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
        goto L_43003A04;
    // 0x4300399C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_430039A0:
    // 0x430039A0: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x430039A4: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    // 0x430039A8: jal         0x43003844
    // 0x430039AC: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    ovl_enemy_world2_3844(rdram, ctx);
        goto after_1;
    // 0x430039AC: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_1:
    // 0x430039B0: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x430039B4: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x430039B8: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x430039BC: beq         $v0, $zero, L_43003A00
    if (ctx->r2 == 0) {
        // 0x430039C0: nop
    
            goto L_43003A00;
    }
    // 0x430039C0: nop

    // 0x430039C4: lw          $v0, 0x54($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X54);
    // 0x430039C8: nop

    // 0x430039CC: sll         $t0, $v0, 7
    ctx->r8 = S32(ctx->r2 << 7);
    // 0x430039D0: bltz        $t0, L_43003A00
    if (SIGNED(ctx->r8) < 0) {
        // 0x430039D4: sll         $t1, $v0, 13
        ctx->r9 = S32(ctx->r2 << 13);
            goto L_43003A00;
    }
    // 0x430039D4: sll         $t1, $v0, 13
    ctx->r9 = S32(ctx->r2 << 13);
    // 0x430039D8: bgez        $t1, L_430039F8
    if (SIGNED(ctx->r9) >= 0) {
        // 0x430039DC: nop
    
            goto L_430039F8;
    }
    // 0x430039DC: nop

    // 0x430039E0: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x430039E4: jal         0x43004D80
    // 0x430039E8: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    ovl_enemy_world2_4D80(rdram, ctx);
        goto after_2;
    // 0x430039E8: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    after_2:
    // 0x430039EC: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x430039F0: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x430039F4: nop

L_430039F8:
    // 0x430039F8: b           L_43003A04
    // 0x430039FC: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
        goto L_43003A04;
    // 0x430039FC: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
L_43003A00:
    // 0x43003A00: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_43003A04:
    // 0x43003A04: beq         $a1, $zero, L_43003A34
    if (ctx->r5 == 0) {
        // 0x43003A08: nop
    
            goto L_43003A34;
    }
    // 0x43003A08: nop

    // 0x43003A0C: lw          $t2, 0x58($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X58);
    // 0x43003A10: sw          $zero, 0x60($a0)
    MEM_W(0X60, ctx->r4) = 0;
    // 0x43003A14: beq         $a3, $zero, L_43003A34
    if (ctx->r7 == 0) {
        // 0x43003A18: sw          $t2, 0x5C($a0)
        MEM_W(0X5C, ctx->r4) = ctx->r10;
            goto L_43003A34;
    }
    // 0x43003A18: sw          $t2, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->r10;
    // 0x43003A1C: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x43003A20: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x43003A24: jal         0x43009ECC
    // 0x43003A28: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    ovl_enemy_world2_9ECC(rdram, ctx);
        goto after_3;
    // 0x43003A28: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    after_3:
    // 0x43003A2C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x43003A30: nop

L_43003A34:
    // 0x43003A34: lw          $t4, 0x54($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X54);
    // 0x43003A38: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x43003A3C: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x43003A40: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x43003A44: sw          $zero, 0x58($a0)
    MEM_W(0X58, ctx->r4) = 0;
    // 0x43003A48: sw          $t3, 0x1DC($a0)
    MEM_W(0X1DC, ctx->r4) = ctx->r11;
    // 0x43003A4C: sw          $t5, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r13;
    // 0x43003A50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43003A54:
    // 0x43003A54: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x43003A58: jr          $ra
    // 0x43003A5C: nop

    return;
    // 0x43003A5C: nop

;}
RECOMP_FUNC void ovl_enemy_world2_3A60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43003A60: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x43003A64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43003A68: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x43003A6C: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x43003A70: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x43003A74: jal         0x430006C4
    // 0x43003A78: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_enemy_world2_6C4(rdram, ctx);
        goto after_0;
    // 0x43003A78: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x43003A7C: lui         $at, 0xC5FA
    ctx->r1 = S32(0XC5FA << 16);
    // 0x43003A80: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x43003A84: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x43003A88: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x43003A8C: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x43003A90: nop

    // 0x43003A94: bc1f        L_43003AA8
    if (!c1cs) {
        // 0x43003A98: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43003AA8;
    }
    // 0x43003A98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43003A9C: jal         0x43005078
    // 0x43003AA0: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    ovl_enemy_world2_5078(rdram, ctx);
        goto after_1;
    // 0x43003AA0: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
    after_1:
    // 0x43003AA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43003AA8:
    // 0x43003AA8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x43003AAC: jr          $ra
    // 0x43003AB0: nop

    return;
    // 0x43003AB0: nop

;}
RECOMP_FUNC void ovl_enemy_world2_3AB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43003AB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43003AB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43003ABC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x43003AC0: lui         $a1, 0x4300
    ctx->r5 = S32(0X4300 << 16);
    // 0x43003AC4: addiu       $a1, $a1, 0x2FB8
    ctx->r5 = ADD32(ctx->r5, 0X2FB8);
    // 0x43003AC8: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x43003ACC: addiu       $a2, $zero, 0x100
    ctx->r6 = ADD32(0, 0X100);
    // 0x43003AD0: jal         0x43000544
    // 0x43003AD4: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    ovl_enemy_world2_544(rdram, ctx);
        goto after_0;
    // 0x43003AD4: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    after_0:
    // 0x43003AD8: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x43003ADC: bne         $v0, $zero, L_43003AEC
    if (ctx->r2 != 0) {
        // 0x43003AE0: sw          $v0, 0x190($v1)
        MEM_W(0X190, ctx->r3) = ctx->r2;
            goto L_43003AEC;
    }
    // 0x43003AE0: sw          $v0, 0x190($v1)
    MEM_W(0X190, ctx->r3) = ctx->r2;
    // 0x43003AE4: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x43003AE8: sw          $t6, 0x190($v1)
    MEM_W(0X190, ctx->r3) = ctx->r14;
L_43003AEC:
    // 0x43003AEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43003AF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43003AF4: jr          $ra
    // 0x43003AF8: nop

    return;
    // 0x43003AF8: nop

;}
RECOMP_FUNC void ovl_enemy_world2_3AFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43003AFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43003B00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43003B04: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x43003B08: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x43003B0C: addiu       $at, $zero, 0x19
    ctx->r1 = ADD32(0, 0X19);
    // 0x43003B10: beq         $v0, $at, L_43003B88
    if (ctx->r2 == ctx->r1) {
        // 0x43003B14: addiu       $at, $zero, 0x1B
        ctx->r1 = ADD32(0, 0X1B);
            goto L_43003B88;
    }
    // 0x43003B14: addiu       $at, $zero, 0x1B
    ctx->r1 = ADD32(0, 0X1B);
    // 0x43003B18: beq         $v0, $at, L_43003B88
    if (ctx->r2 == ctx->r1) {
        // 0x43003B1C: addiu       $at, $zero, 0x23
        ctx->r1 = ADD32(0, 0X23);
            goto L_43003B88;
    }
    // 0x43003B1C: addiu       $at, $zero, 0x23
    ctx->r1 = ADD32(0, 0X23);
    // 0x43003B20: beq         $v0, $at, L_43003B88
    if (ctx->r2 == ctx->r1) {
        // 0x43003B24: addiu       $at, $zero, 0x33
        ctx->r1 = ADD32(0, 0X33);
            goto L_43003B88;
    }
    // 0x43003B24: addiu       $at, $zero, 0x33
    ctx->r1 = ADD32(0, 0X33);
    // 0x43003B28: beq         $v0, $at, L_43003B88
    if (ctx->r2 == ctx->r1) {
        // 0x43003B2C: addiu       $at, $zero, 0x35
        ctx->r1 = ADD32(0, 0X35);
            goto L_43003B88;
    }
    // 0x43003B2C: addiu       $at, $zero, 0x35
    ctx->r1 = ADD32(0, 0X35);
    // 0x43003B30: beq         $v0, $at, L_43003B8C
    if (ctx->r2 == ctx->r1) {
        // 0x43003B34: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43003B8C;
    }
    // 0x43003B34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43003B38: lw          $v0, 0x54($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X54);
    // 0x43003B3C: nop

    // 0x43003B40: andi        $t6, $v0, 0x10
    ctx->r14 = ctx->r2 & 0X10;
    // 0x43003B44: bne         $t6, $zero, L_43003B80
    if (ctx->r14 != 0) {
        // 0x43003B48: lw          $t9, 0x1C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X1C);
            goto L_43003B80;
    }
    // 0x43003B48: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x43003B4C: lw          $t7, 0x190($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X190);
    // 0x43003B50: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x43003B54: bne         $t7, $at, L_43003B78
    if (ctx->r15 != ctx->r1) {
        // 0x43003B58: ori         $t8, $v0, 0x10
        ctx->r24 = ctx->r2 | 0X10;
            goto L_43003B78;
    }
    // 0x43003B58: ori         $t8, $v0, 0x10
    ctx->r24 = ctx->r2 | 0X10;
    // 0x43003B5C: jal         0x43003AB4
    // 0x43003B60: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_enemy_world2_3AB4(rdram, ctx);
        goto after_0;
    // 0x43003B60: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x43003B64: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43003B68: nop

    // 0x43003B6C: lw          $v0, 0x54($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X54);
    // 0x43003B70: nop

    // 0x43003B74: ori         $t8, $v0, 0x10
    ctx->r24 = ctx->r2 | 0X10;
L_43003B78:
    // 0x43003B78: sw          $t8, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r24;
    // 0x43003B7C: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
L_43003B80:
    // 0x43003B80: nop

    // 0x43003B84: sw          $t9, 0x194($a0)
    MEM_W(0X194, ctx->r4) = ctx->r25;
L_43003B88:
    // 0x43003B88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43003B8C:
    // 0x43003B8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43003B90: jr          $ra
    // 0x43003B94: nop

    return;
    // 0x43003B94: nop

;}
RECOMP_FUNC void ovl_enemy_world2_3B98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43003B98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43003B9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43003BA0: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x43003BA4: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x43003BA8: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x43003BAC: jal         0x43005250
    // 0x43003BB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_enemy_world2_5250(rdram, ctx);
        goto after_0;
    // 0x43003BB0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x43003BB4: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x43003BB8: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x43003BBC: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x43003BC0: beq         $a0, $t6, L_43003BE0
    if (ctx->r4 == ctx->r14) {
        // 0x43003BC4: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_43003BE0;
    }
    // 0x43003BC4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x43003BC8: lw          $t7, 0x8($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X8);
    // 0x43003BCC: nop

    // 0x43003BD0: bne         $a2, $t7, L_43003BE0
    if (ctx->r6 != ctx->r15) {
        // 0x43003BD4: nop
    
            goto L_43003BE0;
    }
    // 0x43003BD4: nop

    // 0x43003BD8: b           L_43003CBC
    // 0x43003BDC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_43003CBC;
    // 0x43003BDC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_43003BE0:
    // 0x43003BE0: addiu       $v1, $v0, 0x268
    ctx->r3 = ADD32(ctx->r2, 0X268);
    // 0x43003BE4: lw          $t8, 0x4($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X4);
    // 0x43003BE8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x43003BEC: beq         $a0, $t8, L_43003C0C
    if (ctx->r4 == ctx->r24) {
        // 0x43003BF0: addiu       $a1, $zero, 0xA
        ctx->r5 = ADD32(0, 0XA);
            goto L_43003C0C;
    }
    // 0x43003BF0: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x43003BF4: lw          $t9, 0x8($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X8);
    // 0x43003BF8: nop

    // 0x43003BFC: bne         $a2, $t9, L_43003C0C
    if (ctx->r6 != ctx->r25) {
        // 0x43003C00: nop
    
            goto L_43003C0C;
    }
    // 0x43003C00: nop

    // 0x43003C04: b           L_43003CBC
    // 0x43003C08: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_43003CBC;
    // 0x43003C08: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_43003C0C:
    // 0x43003C0C: addiu       $v1, $v1, 0x268
    ctx->r3 = ADD32(ctx->r3, 0X268);
L_43003C10:
    // 0x43003C10: lw          $t0, 0x4($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X4);
    // 0x43003C14: nop

    // 0x43003C18: beq         $a0, $t0, L_43003C38
    if (ctx->r4 == ctx->r8) {
        // 0x43003C1C: nop
    
            goto L_43003C38;
    }
    // 0x43003C1C: nop

    // 0x43003C20: lw          $t1, 0x8($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X8);
    // 0x43003C24: nop

    // 0x43003C28: bne         $a2, $t1, L_43003C38
    if (ctx->r6 != ctx->r9) {
        // 0x43003C2C: nop
    
            goto L_43003C38;
    }
    // 0x43003C2C: nop

    // 0x43003C30: b           L_43003CBC
    // 0x43003C34: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_43003CBC;
    // 0x43003C34: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_43003C38:
    // 0x43003C38: lw          $t2, 0x26C($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X26C);
    // 0x43003C3C: addiu       $v1, $v1, 0x268
    ctx->r3 = ADD32(ctx->r3, 0X268);
    // 0x43003C40: beq         $a0, $t2, L_43003C60
    if (ctx->r4 == ctx->r10) {
        // 0x43003C44: nop
    
            goto L_43003C60;
    }
    // 0x43003C44: nop

    // 0x43003C48: lw          $t3, 0x8($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X8);
    // 0x43003C4C: nop

    // 0x43003C50: bne         $a2, $t3, L_43003C60
    if (ctx->r6 != ctx->r11) {
        // 0x43003C54: nop
    
            goto L_43003C60;
    }
    // 0x43003C54: nop

    // 0x43003C58: b           L_43003CBC
    // 0x43003C5C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_43003CBC;
    // 0x43003C5C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_43003C60:
    // 0x43003C60: lw          $t4, 0x26C($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X26C);
    // 0x43003C64: addiu       $v1, $v1, 0x268
    ctx->r3 = ADD32(ctx->r3, 0X268);
    // 0x43003C68: beq         $a0, $t4, L_43003C88
    if (ctx->r4 == ctx->r12) {
        // 0x43003C6C: nop
    
            goto L_43003C88;
    }
    // 0x43003C6C: nop

    // 0x43003C70: lw          $t5, 0x8($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X8);
    // 0x43003C74: nop

    // 0x43003C78: bne         $a2, $t5, L_43003C88
    if (ctx->r6 != ctx->r13) {
        // 0x43003C7C: nop
    
            goto L_43003C88;
    }
    // 0x43003C7C: nop

    // 0x43003C80: b           L_43003CBC
    // 0x43003C84: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_43003CBC;
    // 0x43003C84: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_43003C88:
    // 0x43003C88: lw          $t6, 0x26C($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X26C);
    // 0x43003C8C: addiu       $v1, $v1, 0x268
    ctx->r3 = ADD32(ctx->r3, 0X268);
    // 0x43003C90: beq         $a0, $t6, L_43003CB0
    if (ctx->r4 == ctx->r14) {
        // 0x43003C94: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_43003CB0;
    }
    // 0x43003C94: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x43003C98: lw          $t7, 0x8($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X8);
    // 0x43003C9C: nop

    // 0x43003CA0: bne         $a2, $t7, L_43003CB0
    if (ctx->r6 != ctx->r15) {
        // 0x43003CA4: nop
    
            goto L_43003CB0;
    }
    // 0x43003CA4: nop

    // 0x43003CA8: b           L_43003CBC
    // 0x43003CAC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_43003CBC;
    // 0x43003CAC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_43003CB0:
    // 0x43003CB0: bne         $v0, $a1, L_43003C10
    if (ctx->r2 != ctx->r5) {
        // 0x43003CB4: addiu       $v1, $v1, 0x268
        ctx->r3 = ADD32(ctx->r3, 0X268);
            goto L_43003C10;
    }
    // 0x43003CB4: addiu       $v1, $v1, 0x268
    ctx->r3 = ADD32(ctx->r3, 0X268);
    // 0x43003CB8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_43003CBC:
    // 0x43003CBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43003CC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43003CC4: jr          $ra
    // 0x43003CC8: nop

    return;
    // 0x43003CC8: nop

;}
RECOMP_FUNC void ovl_enemy_world2_3CCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43003CCC: sw          $zero, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = 0;
    // 0x43003CD0: jr          $ra
    // 0x43003CD4: sw          $zero, 0x58($a0)
    MEM_W(0X58, ctx->r4) = 0;
    return;
    // 0x43003CD4: sw          $zero, 0x58($a0)
    MEM_W(0X58, ctx->r4) = 0;
;}
RECOMP_FUNC void ovl_enemy_world2_3CD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43003CD8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x43003CDC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43003CE0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43003CE4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43003CE8: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x43003CEC: jal         0x43004880
    // 0x43003CF0: nop

    ovl_enemy_world2_4880(rdram, ctx);
        goto after_0;
    // 0x43003CF0: nop

    after_0:
    // 0x43003CF4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x43003CF8: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x43003CFC: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x43003D00: jal         0x430006C4
    // 0x43003D04: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_enemy_world2_6C4(rdram, ctx);
        goto after_1;
    // 0x43003D04: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_1:
    // 0x43003D08: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x43003D0C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x43003D10: ori         $t7, $t6, 0x10
    ctx->r15 = ctx->r14 | 0X10;
    // 0x43003D14: ori         $t0, $t7, 0x1
    ctx->r8 = ctx->r15 | 0X1;
    // 0x43003D18: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x43003D1C: ori         $t1, $t0, 0x20
    ctx->r9 = ctx->r8 | 0X20;
    // 0x43003D20: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x43003D24: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    // 0x43003D28: ori         $t2, $t1, 0x4
    ctx->r10 = ctx->r9 | 0X4;
    // 0x43003D2C: ori         $t9, $t8, 0x1
    ctx->r25 = ctx->r24 | 0X1;
    // 0x43003D30: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x43003D34: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x43003D38: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x43003D3C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x43003D40: jal         0x430006C4
    // 0x43003D44: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_enemy_world2_6C4(rdram, ctx);
        goto after_2;
    // 0x43003D44: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_2:
    // 0x43003D48: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x43003D4C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x43003D50: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x43003D54: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x43003D58: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x43003D5C: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x43003D60: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x43003D64: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x43003D68: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    // 0x43003D6C: jal         0x430006C4
    // 0x43003D70: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_enemy_world2_6C4(rdram, ctx);
        goto after_3;
    // 0x43003D70: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_3:
    // 0x43003D74: jal         0x430016D8
    // 0x43003D78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_enemy_world2_16D8(rdram, ctx);
        goto after_4;
    // 0x43003D78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x43003D7C: addiu       $t4, $zero, 0xC8
    ctx->r12 = ADD32(0, 0XC8);
    // 0x43003D80: sw          $zero, 0x1C0($s0)
    MEM_W(0X1C0, ctx->r16) = 0;
    // 0x43003D84: sw          $zero, 0x1A0($s0)
    MEM_W(0X1A0, ctx->r16) = 0;
    // 0x43003D88: sw          $zero, 0x1A8($s0)
    MEM_W(0X1A8, ctx->r16) = 0;
    // 0x43003D8C: sw          $t4, 0x1CC($s0)
    MEM_W(0X1CC, ctx->r16) = ctx->r12;
    // 0x43003D90: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x43003D94: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x43003D98: lw          $v0, 0x4($t5)
    ctx->r2 = MEM_W(ctx->r13, 0X4);
    // 0x43003D9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43003DA0: beq         $v0, $at, L_43003DC0
    if (ctx->r2 == ctx->r1) {
        // 0x43003DA4: addiu       $at, $zero, 0xB
        ctx->r1 = ADD32(0, 0XB);
            goto L_43003DC0;
    }
    // 0x43003DA4: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x43003DA8: beq         $v0, $at, L_43003DC0
    if (ctx->r2 == ctx->r1) {
        // 0x43003DAC: addiu       $at, $zero, 0xE
        ctx->r1 = ADD32(0, 0XE);
            goto L_43003DC0;
    }
    // 0x43003DAC: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x43003DB0: beq         $v0, $at, L_43003DD4
    if (ctx->r2 == ctx->r1) {
        // 0x43003DB4: lui         $at, 0x4000
        ctx->r1 = S32(0X4000 << 16);
            goto L_43003DD4;
    }
    // 0x43003DB4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x43003DB8: b           L_43003DE4
    // 0x43003DBC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43003DE4;
    // 0x43003DBC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43003DC0:
    // 0x43003DC0: jal         0x430015C0
    // 0x43003DC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_enemy_world2_15C0(rdram, ctx);
        goto after_5;
    // 0x43003DC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x43003DC8: b           L_43003DE4
    // 0x43003DCC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_43003DE4;
    // 0x43003DCC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43003DD0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
L_43003DD4:
    // 0x43003DD4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x43003DD8: nop

    // 0x43003DDC: swc1        $f8, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f8.u32l;
    // 0x43003DE0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_43003DE4:
    // 0x43003DE4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43003DE8: jr          $ra
    // 0x43003DEC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x43003DEC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_enemy_world2_3DF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43003DF0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43003DF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43003DF8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x43003DFC: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x43003E00: jal         0x43004880
    // 0x43003E04: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    ovl_enemy_world2_4880(rdram, ctx);
        goto after_0;
    // 0x43003E04: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x43003E08: lw          $t6, 0x10($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X10);
    // 0x43003E0C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x43003E10: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x43003E14: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x43003E18: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x43003E1C: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x43003E20: jal         0x43001D10
    // 0x43003E24: nop

    ovl_enemy_world2_1D10(rdram, ctx);
        goto after_1;
    // 0x43003E24: nop

    after_1:
    // 0x43003E28: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x43003E2C: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x43003E30: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x43003E34: lwc1        $f6, 0xC($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0XC);
    // 0x43003E38: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x43003E3C: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x43003E40: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x43003E44: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x43003E48: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43003E4C: swc1        $f10, 0x1AC($a2)
    MEM_W(0X1AC, ctx->r6) = ctx->f10.u32l;
    // 0x43003E50: lwc1        $f16, 0xC($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0XC);
    // 0x43003E54: lwc1        $f8, 0x1AC($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X1AC);
    // 0x43003E58: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x43003E5C: swc1        $f8, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->f8.u32l;
    // 0x43003E60: swc1        $f4, 0x1D0($a2)
    MEM_W(0X1D0, ctx->r6) = ctx->f4.u32l;
    // 0x43003E64: lwc1        $f6, 0x1D0($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X1D0);
    // 0x43003E68: nop

    // 0x43003E6C: swc1        $f6, 0x14($a2)
    MEM_W(0X14, ctx->r6) = ctx->f6.u32l;
    // 0x43003E70: lwc1        $f10, -0x5CE0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X5CE0);
    // 0x43003E74: nop

    // 0x43003E78: swc1        $f10, 0x18($a2)
    MEM_W(0X18, ctx->r6) = ctx->f10.u32l;
    // 0x43003E7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43003E80: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x43003E84: jr          $ra
    // 0x43003E88: nop

    return;
    // 0x43003E88: nop

;}
RECOMP_FUNC void ovl_enemy_world2_3E8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43003E8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43003E90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43003E94: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x43003E98: jal         0x43005250
    // 0x43003E9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_enemy_world2_5250(rdram, ctx);
        goto after_0;
    // 0x43003E9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x43003EA0: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x43003EA4: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x43003EA8: bne         $a1, $t6, L_43003EC8
    if (ctx->r5 != ctx->r14) {
        // 0x43003EAC: lui         $v1, 0x4301
        ctx->r3 = S32(0X4301 << 16);
            goto L_43003EC8;
    }
    // 0x43003EAC: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x43003EB0: addiu       $v1, $v1, -0x56E0
    ctx->r3 = ADD32(ctx->r3, -0X56E0);
    // 0x43003EB4: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x43003EB8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x43003EBC: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x43003EC0: b           L_43003FC4
    // 0x43003EC4: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
        goto L_43003FC4;
    // 0x43003EC4: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
L_43003EC8:
    // 0x43003EC8: addiu       $v1, $v0, 0x268
    ctx->r3 = ADD32(ctx->r2, 0X268);
    // 0x43003ECC: lw          $t9, 0x4($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X4);
    // 0x43003ED0: nop

    // 0x43003ED4: bne         $a1, $t9, L_43003EFC
    if (ctx->r5 != ctx->r25) {
        // 0x43003ED8: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_43003EFC;
    }
    // 0x43003ED8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x43003EDC: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x43003EE0: addiu       $v1, $v1, -0x56E0
    ctx->r3 = ADD32(ctx->r3, -0X56E0);
    // 0x43003EE4: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x43003EE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x43003EEC: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x43003EF0: b           L_43003FC4
    // 0x43003EF4: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
        goto L_43003FC4;
    // 0x43003EF4: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x43003EF8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
L_43003EFC:
    // 0x43003EFC: addiu       $v1, $v1, 0x268
    ctx->r3 = ADD32(ctx->r3, 0X268);
    // 0x43003F00: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_43003F04:
    // 0x43003F04: lw          $t2, 0x4($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X4);
    // 0x43003F08: nop

    // 0x43003F0C: bne         $a1, $t2, L_43003F30
    if (ctx->r5 != ctx->r10) {
        // 0x43003F10: nop
    
            goto L_43003F30;
    }
    // 0x43003F10: nop

    // 0x43003F14: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x43003F18: addiu       $v1, $v1, -0x56E0
    ctx->r3 = ADD32(ctx->r3, -0X56E0);
    // 0x43003F1C: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x43003F20: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x43003F24: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x43003F28: b           L_43003FC4
    // 0x43003F2C: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
        goto L_43003FC4;
    // 0x43003F2C: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
L_43003F30:
    // 0x43003F30: lw          $t5, 0x26C($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X26C);
    // 0x43003F34: addiu       $v1, $v1, 0x268
    ctx->r3 = ADD32(ctx->r3, 0X268);
    // 0x43003F38: bne         $a1, $t5, L_43003F5C
    if (ctx->r5 != ctx->r13) {
        // 0x43003F3C: nop
    
            goto L_43003F5C;
    }
    // 0x43003F3C: nop

    // 0x43003F40: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x43003F44: addiu       $v1, $v1, -0x56E0
    ctx->r3 = ADD32(ctx->r3, -0X56E0);
    // 0x43003F48: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x43003F4C: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x43003F50: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x43003F54: b           L_43003FC4
    // 0x43003F58: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
        goto L_43003FC4;
    // 0x43003F58: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
L_43003F5C:
    // 0x43003F5C: lw          $t8, 0x26C($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X26C);
    // 0x43003F60: addiu       $v1, $v1, 0x268
    ctx->r3 = ADD32(ctx->r3, 0X268);
    // 0x43003F64: bne         $a1, $t8, L_43003F88
    if (ctx->r5 != ctx->r24) {
        // 0x43003F68: nop
    
            goto L_43003F88;
    }
    // 0x43003F68: nop

    // 0x43003F6C: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x43003F70: addiu       $v1, $v1, -0x56E0
    ctx->r3 = ADD32(ctx->r3, -0X56E0);
    // 0x43003F74: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x43003F78: addiu       $v0, $a0, 0x2
    ctx->r2 = ADD32(ctx->r4, 0X2);
    // 0x43003F7C: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x43003F80: b           L_43003FC4
    // 0x43003F84: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
        goto L_43003FC4;
    // 0x43003F84: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
L_43003F88:
    // 0x43003F88: lw          $t1, 0x26C($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X26C);
    // 0x43003F8C: addiu       $v1, $v1, 0x268
    ctx->r3 = ADD32(ctx->r3, 0X268);
    // 0x43003F90: bne         $a1, $t1, L_43003FB4
    if (ctx->r5 != ctx->r9) {
        // 0x43003F94: nop
    
            goto L_43003FB4;
    }
    // 0x43003F94: nop

    // 0x43003F98: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x43003F9C: addiu       $v1, $v1, -0x56E0
    ctx->r3 = ADD32(ctx->r3, -0X56E0);
    // 0x43003FA0: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x43003FA4: addiu       $v0, $a0, 0x3
    ctx->r2 = ADD32(ctx->r4, 0X3);
    // 0x43003FA8: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x43003FAC: b           L_43003FC4
    // 0x43003FB0: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
        goto L_43003FC4;
    // 0x43003FB0: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
L_43003FB4:
    // 0x43003FB4: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x43003FB8: bne         $a0, $v0, L_43003F04
    if (ctx->r4 != ctx->r2) {
        // 0x43003FBC: addiu       $v1, $v1, 0x268
        ctx->r3 = ADD32(ctx->r3, 0X268);
            goto L_43003F04;
    }
    // 0x43003FBC: addiu       $v1, $v1, 0x268
    ctx->r3 = ADD32(ctx->r3, 0X268);
    // 0x43003FC0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_43003FC4:
    // 0x43003FC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43003FC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43003FCC: jr          $ra
    // 0x43003FD0: nop

    return;
    // 0x43003FD0: nop

;}
RECOMP_FUNC void ovl_enemy_world2_3FD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43003FD4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43003FD8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43003FDC: jal         0x43004880
    // 0x43003FE0: nop

    ovl_enemy_world2_4880(rdram, ctx);
        goto after_0;
    // 0x43003FE0: nop

    after_0:
    // 0x43003FE4: lw          $t6, 0x14($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X14);
    // 0x43003FE8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x43003FEC: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x43003FF0: sltiu       $at, $t7, 0xA
    ctx->r1 = ctx->r15 < 0XA ? 1 : 0;
    // 0x43003FF4: beq         $at, $zero, L_43004048
    if (ctx->r1 == 0) {
        // 0x43003FF8: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_43004048;
    }
    // 0x43003FF8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x43003FFC: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43004000: addu        $at, $at, $t7
    gpr jr_addend_4300400C = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x43004004: lw          $t7, -0x5CDC($at)
    ctx->r15 = ADD32(ctx->r1, -0X5CDC);
    // 0x43004008: nop

    // 0x4300400C: jr          $t7
    // 0x43004010: nop

    switch (jr_addend_4300400C >> 2) {
        case 0: goto L_43004014; break;
        case 1: goto L_4300401C; break;
        case 2: goto L_43004048; break;
        case 3: goto L_43004048; break;
        case 4: goto L_43004048; break;
        case 5: goto L_43004024; break;
        case 6: goto L_4300402C; break;
        case 7: goto L_43004034; break;
        case 8: goto L_4300403C; break;
        case 9: goto L_43004044; break;
        default: switch_error(__func__, 0x4300400C, 0x4300A324);
    }
    // 0x43004010: nop

L_43004014:
    // 0x43004014: b           L_43004048
    // 0x43004018: addiu       $v1, $zero, 0x1000
    ctx->r3 = ADD32(0, 0X1000);
        goto L_43004048;
    // 0x43004018: addiu       $v1, $zero, 0x1000
    ctx->r3 = ADD32(0, 0X1000);
L_4300401C:
    // 0x4300401C: b           L_43004048
    // 0x43004020: addiu       $v1, $zero, 0x2000
    ctx->r3 = ADD32(0, 0X2000);
        goto L_43004048;
    // 0x43004020: addiu       $v1, $zero, 0x2000
    ctx->r3 = ADD32(0, 0X2000);
L_43004024:
    // 0x43004024: b           L_43004048
    // 0x43004028: addiu       $v1, $zero, 0x3000
    ctx->r3 = ADD32(0, 0X3000);
        goto L_43004048;
    // 0x43004028: addiu       $v1, $zero, 0x3000
    ctx->r3 = ADD32(0, 0X3000);
L_4300402C:
    // 0x4300402C: b           L_43004048
    // 0x43004030: addiu       $v1, $zero, 0x4000
    ctx->r3 = ADD32(0, 0X4000);
        goto L_43004048;
    // 0x43004030: addiu       $v1, $zero, 0x4000
    ctx->r3 = ADD32(0, 0X4000);
L_43004034:
    // 0x43004034: b           L_43004048
    // 0x43004038: addiu       $v1, $zero, 0x5000
    ctx->r3 = ADD32(0, 0X5000);
        goto L_43004048;
    // 0x43004038: addiu       $v1, $zero, 0x5000
    ctx->r3 = ADD32(0, 0X5000);
L_4300403C:
    // 0x4300403C: b           L_43004048
    // 0x43004040: addiu       $v1, $zero, 0x6000
    ctx->r3 = ADD32(0, 0X6000);
        goto L_43004048;
    // 0x43004040: addiu       $v1, $zero, 0x6000
    ctx->r3 = ADD32(0, 0X6000);
L_43004044:
    // 0x43004044: addiu       $v1, $zero, 0x7000
    ctx->r3 = ADD32(0, 0X7000);
L_43004048:
    // 0x43004048: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4300404C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43004050: jr          $ra
    // 0x43004054: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x43004054: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_enemy_world2_4058(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004058: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x4300405C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x43004060: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x43004064: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x43004068: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x4300406C: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x43004070: or          $s3, $a2, $zero
    ctx->r19 = ctx->r6 | 0;
    // 0x43004074: or          $s5, $a1, $zero
    ctx->r21 = ctx->r5 | 0;
    // 0x43004078: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x4300407C: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x43004080: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x43004084: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x43004088: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x4300408C: jal         0x43004880
    // 0x43004090: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    ovl_enemy_world2_4880(rdram, ctx);
        goto after_0;
    // 0x43004090: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
    // 0x43004094: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x43004098: lui         $t8, 0x4301
    ctx->r24 = S32(0X4301 << 16);
    // 0x4300409C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x430040A0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x430040A4: lw          $t8, -0x5F24($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X5F24);
    // 0x430040A8: sll         $t1, $s5, 2
    ctx->r9 = S32(ctx->r21 << 2);
    // 0x430040AC: addu        $t1, $t1, $s5
    ctx->r9 = ADD32(ctx->r9, ctx->r21);
    // 0x430040B0: lui         $t2, 0x4301
    ctx->r10 = S32(0X4301 << 16);
    // 0x430040B4: addiu       $t2, $t2, -0x56C0
    ctx->r10 = ADD32(ctx->r10, -0X56C0);
    // 0x430040B8: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x430040BC: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x430040C0: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x430040C4: addu        $v1, $t1, $t2
    ctx->r3 = ADD32(ctx->r9, ctx->r10);
    // 0x430040C8: sw          $zero, 0x8($s1)
    MEM_W(0X8, ctx->r17) = 0;
    // 0x430040CC: sw          $t9, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r25;
    // 0x430040D0: sw          $t0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r8;
    // 0x430040D4: sw          $v1, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r3;
    // 0x430040D8: sw          $t8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r24;
    // 0x430040DC: lwc1        $f4, 0x20($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X20);
    // 0x430040E0: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x430040E4: swc1        $f4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f4.u32l;
    // 0x430040E8: lw          $t3, 0x10($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X10);
    // 0x430040EC: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x430040F0: swc1        $f20, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->f20.u32l;
    // 0x430040F4: lw          $t4, 0x10($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X10);
    // 0x430040F8: lwc1        $f6, 0x1C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x430040FC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x43004100: swc1        $f6, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->f6.u32l;
    // 0x43004104: lw          $t5, 0x10($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X10);
    // 0x43004108: jal         0x43003FD4
    // 0x4300410C: swc1        $f20, 0xC($t5)
    MEM_W(0XC, ctx->r13) = ctx->f20.u32l;
    ovl_enemy_world2_3FD4(rdram, ctx);
        goto after_1;
    // 0x4300410C: swc1        $f20, 0xC($t5)
    MEM_W(0XC, ctx->r13) = ctx->f20.u32l;
    after_1:
    // 0x43004110: lw          $t8, 0x10($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X10);
    // 0x43004114: andi        $s4, $s3, 0xFF
    ctx->r20 = ctx->r19 & 0XFF;
    // 0x43004118: ori         $t6, $v0, 0x8300
    ctx->r14 = ctx->r2 | 0X8300;
    // 0x4300411C: or          $t7, $t6, $s4
    ctx->r15 = ctx->r14 | ctx->r20;
    // 0x43004120: sw          $t7, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->r15;
    // 0x43004124: lw          $t9, 0x10($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X10);
    // 0x43004128: lui         $t6, 0x4301
    ctx->r14 = S32(0X4301 << 16);
    // 0x4300412C: swc1        $f20, 0x14($t9)
    MEM_W(0X14, ctx->r25) = ctx->f20.u32l;
    // 0x43004130: lw          $t0, 0x10($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X10);
    // 0x43004134: sll         $t7, $s5, 2
    ctx->r15 = S32(ctx->r21 << 2);
    // 0x43004138: swc1        $f20, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->f20.u32l;
    // 0x4300413C: lw          $t1, 0x10($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X10);
    // 0x43004140: ori         $t3, $zero, 0x8000
    ctx->r11 = 0 | 0X8000;
    // 0x43004144: swc1        $f20, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f20.u32l;
    // 0x43004148: lw          $t2, 0x10($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X10);
    // 0x4300414C: addiu       $t6, $t6, -0x5468
    ctx->r14 = ADD32(ctx->r14, -0X5468);
    // 0x43004150: swc1        $f20, 0x20($t2)
    MEM_W(0X20, ctx->r10) = ctx->f20.u32l;
    // 0x43004154: lw          $t4, 0x10($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X10);
    // 0x43004158: sll         $t5, $s5, 3
    ctx->r13 = S32(ctx->r21 << 3);
    // 0x4300415C: addu        $t7, $t7, $s5
    ctx->r15 = ADD32(ctx->r15, ctx->r21);
    // 0x43004160: lui         $t8, 0x4301
    ctx->r24 = S32(0X4301 << 16);
    // 0x43004164: addu        $v1, $t5, $t6
    ctx->r3 = ADD32(ctx->r13, ctx->r14);
    // 0x43004168: addiu       $t8, $t8, -0x5530
    ctx->r24 = ADD32(ctx->r24, -0X5530);
    // 0x4300416C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x43004170: sw          $t3, 0x24($t4)
    MEM_W(0X24, ctx->r12) = ctx->r11;
    // 0x43004174: sw          $v1, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r3;
    // 0x43004178: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x4300417C: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x43004180: lw          $t1, 0x14($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X14);
    // 0x43004184: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x43004188: addiu       $s5, $zero, 0x14
    ctx->r21 = ADD32(0, 0X14);
    // 0x4300418C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x43004190: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
L_43004194:
    // 0x43004194: lw          $t2, 0x14($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X14);
    // 0x43004198: lwc1        $f8, 0x20($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X20);
    // 0x4300419C: lw          $t3, 0x4($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X4);
    // 0x430041A0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x430041A4: addu        $t4, $t3, $s0
    ctx->r12 = ADD32(ctx->r11, ctx->r16);
    // 0x430041A8: swc1        $f8, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f8.u32l;
    // 0x430041AC: lw          $t5, 0x14($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X14);
    // 0x430041B0: nop

    // 0x430041B4: lw          $t6, 0x4($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X4);
    // 0x430041B8: nop

    // 0x430041BC: addu        $t7, $t6, $s0
    ctx->r15 = ADD32(ctx->r14, ctx->r16);
    // 0x430041C0: swc1        $f20, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f20.u32l;
    // 0x430041C4: lw          $t8, 0x14($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X14);
    // 0x430041C8: lwc1        $f10, 0x1C($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X1C);
    // 0x430041CC: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x430041D0: nop

    // 0x430041D4: addu        $t0, $t9, $s0
    ctx->r8 = ADD32(ctx->r25, ctx->r16);
    // 0x430041D8: swc1        $f10, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->f10.u32l;
    // 0x430041DC: lw          $t1, 0x14($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X14);
    // 0x430041E0: nop

    // 0x430041E4: lw          $t2, 0x4($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X4);
    // 0x430041E8: nop

    // 0x430041EC: addu        $t3, $t2, $s0
    ctx->r11 = ADD32(ctx->r10, ctx->r16);
    // 0x430041F0: jal         0x43003FD4
    // 0x430041F4: swc1        $f20, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->f20.u32l;
    ovl_enemy_world2_3FD4(rdram, ctx);
        goto after_2;
    // 0x430041F4: swc1        $f20, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->f20.u32l;
    after_2:
    // 0x430041F8: lw          $t6, 0x14($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X14);
    // 0x430041FC: ori         $t4, $v0, 0x8A00
    ctx->r12 = ctx->r2 | 0X8A00;
    // 0x43004200: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x43004204: or          $t5, $t4, $s4
    ctx->r13 = ctx->r12 | ctx->r20;
    // 0x43004208: addu        $t8, $t7, $s0
    ctx->r24 = ADD32(ctx->r15, ctx->r16);
    // 0x4300420C: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    // 0x43004210: bne         $s0, $s5, L_43004194
    if (ctx->r16 != ctx->r21) {
        // 0x43004214: sw          $t5, 0x10($t8)
        MEM_W(0X10, ctx->r24) = ctx->r13;
            goto L_43004194;
    }
    // 0x43004214: sw          $t5, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->r13;
    // 0x43004218: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x4300421C: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x43004220: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x43004224: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x43004228: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x4300422C: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x43004230: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x43004234: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x43004238: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x4300423C: jr          $ra
    // 0x43004240: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x43004240: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_enemy_world2_4244(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004244: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43004248: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x4300424C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x43004250: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x43004254: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x43004258: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x4300425C: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x43004260: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x43004264: sw          $t7, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r15;
    // 0x43004268: sw          $zero, 0x28($a0)
    MEM_W(0X28, ctx->r4) = 0;
    // 0x4300426C: sw          $zero, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = 0;
    // 0x43004270: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
    // 0x43004274: swc1        $f0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f0.u32l;
    // 0x43004278: swc1        $f0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f0.u32l;
    // 0x4300427C: swc1        $f0, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f0.u32l;
    // 0x43004280: swc1        $f0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f0.u32l;
    // 0x43004284: swc1        $f4, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f4.u32l;
    // 0x43004288: jr          $ra
    // 0x4300428C: swc1        $f6, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f6.u32l;
    return;
    // 0x4300428C: swc1        $f6, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->f6.u32l;
;}
RECOMP_FUNC void ovl_enemy_world2_4290(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43004290: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43004294: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x43004298: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x4300429C: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x430042A0: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
    // 0x430042A4: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
    // 0x430042A8: swc1        $f0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f0.u32l;
    // 0x430042AC: swc1        $f0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f0.u32l;
    // 0x430042B0: jr          $ra
    // 0x430042B4: swc1        $f0, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f0.u32l;
    return;
    // 0x430042B4: swc1        $f0, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f0.u32l;
;}
