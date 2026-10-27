#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void _collectPVoices(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007E488: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8007E48C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8007E490: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8007E494: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8007E498: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8007E49C: lw          $s0, 0x14($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X14);
    // 0x8007E4A0: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8007E4A4: addiu       $s2, $a0, 0x4
    ctx->r18 = ADD32(ctx->r4, 0X4);
    // 0x8007E4A8: beql        $s0, $zero, L_8007E4D4
    if (ctx->r16 == 0) {
        // 0x8007E4AC: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8007E4D4;
    }
    goto skip_0;
    // 0x8007E4AC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
L_8007E4B0:
    // 0x8007E4B0: jal         0x8007DE20
    // 0x8007E4B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    alUnlink(rdram, ctx);
        goto after_0;
    // 0x8007E4B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8007E4B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8007E4BC: jal         0x8007DDFC
    // 0x8007E4C0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    alLink(rdram, ctx);
        goto after_1;
    // 0x8007E4C0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_1:
    // 0x8007E4C4: lw          $s0, 0x14($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X14);
    // 0x8007E4C8: bne         $s0, $zero, L_8007E4B0
    if (ctx->r16 != 0) {
        // 0x8007E4CC: nop
    
            goto L_8007E4B0;
    }
    // 0x8007E4CC: nop

    // 0x8007E4D0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8007E4D4:
    // 0x8007E4D4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8007E4D8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8007E4DC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8007E4E0: jr          $ra
    // 0x8007E4E4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8007E4E4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void _freePVoice(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007E4E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007E4EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007E4F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8007E4F4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8007E4F8: jal         0x8007DE20
    // 0x8007E4FC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    alUnlink(rdram, ctx);
        goto after_0;
    // 0x8007E4FC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8007E500: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x8007E504: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8007E508: jal         0x8007DDFC
    // 0x8007E50C: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    alLink(rdram, ctx);
        goto after_1;
    // 0x8007E50C: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_1:
    // 0x8007E510: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007E514: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007E518: jr          $ra
    // 0x8007E51C: nop

    return;
    // 0x8007E51C: nop

;}
RECOMP_FUNC void alAudioFrameMicrosToSamples(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007E520: lw          $t6, 0x44($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X44);
    // 0x8007E524: mtc1        $a1, $f4
    ctx->f4.u32l = ctx->r5;
    // 0x8007E528: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8007E52C: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x8007E530: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8007E534: ldc1        $f4, 0x6980($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, 0X6980);
    // 0x8007E538: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8007E53C: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x8007E540: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8007E544: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x8007E548: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8007E54C: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x8007E550: div.d       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = DIV_D(ctx->f18.d, ctx->f4.d);
    // 0x8007E554: add.d       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = ctx->f8.d + ctx->f6.d;
    // 0x8007E558: cvt.s.d     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f0.fl = CVT_S_D(ctx->f10.d);
    // 0x8007E55C: trunc.w.s   $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x8007E560: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x8007E564: jr          $ra
    // 0x8007E568: nop

    return;
    // 0x8007E568: nop

;}
RECOMP_FUNC void _timeToSamples(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007E56C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007E570: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007E574: jal         0x8007E520
    // 0x8007E578: nop

    alAudioFrameMicrosToSamples(rdram, ctx);
        goto after_0;
    // 0x8007E578: nop

    after_0:
    // 0x8007E57C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007E580: addiu       $at, $zero, -0x10
    ctx->r1 = ADD32(0, -0X10);
    // 0x8007E584: and         $t6, $v0, $at
    ctx->r14 = ctx->r2 & ctx->r1;
    // 0x8007E588: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x8007E58C: jr          $ra
    // 0x8007E590: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8007E590: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void __nextSampleTime(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007E594: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    // 0x8007E598: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x8007E59C: lui         $v0, 0x7FFF
    ctx->r2 = S32(0X7FFF << 16);
    // 0x8007E5A0: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8007E5A4: beql        $v1, $zero, L_8007E5E4
    if (ctx->r3 == 0) {
        // 0x8007E5A8: lw          $t9, 0x0($a1)
        ctx->r25 = MEM_W(ctx->r5, 0X0);
            goto L_8007E5E4;
    }
    goto skip_0;
    // 0x8007E5A8: lw          $t9, 0x0($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X0);
    skip_0:
    // 0x8007E5AC: lw          $a2, 0x20($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X20);
    // 0x8007E5B0: lw          $t6, 0x10($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X10);
L_8007E5B4:
    // 0x8007E5B4: subu        $t7, $t6, $a2
    ctx->r15 = SUB32(ctx->r14, ctx->r6);
    // 0x8007E5B8: slt         $at, $t7, $v0
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8007E5BC: beql        $at, $zero, L_8007E5D8
    if (ctx->r1 == 0) {
        // 0x8007E5C0: lw          $v1, 0x0($v1)
        ctx->r3 = MEM_W(ctx->r3, 0X0);
            goto L_8007E5D8;
    }
    goto skip_1;
    // 0x8007E5C0: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    skip_1:
    // 0x8007E5C4: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x8007E5C8: lw          $t8, 0x10($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X10);
    // 0x8007E5CC: lw          $a2, 0x20($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X20);
    // 0x8007E5D0: subu        $v0, $t8, $a2
    ctx->r2 = SUB32(ctx->r24, ctx->r6);
    // 0x8007E5D4: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
L_8007E5D8:
    // 0x8007E5D8: bnel        $v1, $zero, L_8007E5B4
    if (ctx->r3 != 0) {
        // 0x8007E5DC: lw          $t6, 0x10($v1)
        ctx->r14 = MEM_W(ctx->r3, 0X10);
            goto L_8007E5B4;
    }
    goto skip_2;
    // 0x8007E5DC: lw          $t6, 0x10($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X10);
    skip_2:
    // 0x8007E5E0: lw          $t9, 0x0($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X0);
L_8007E5E4:
    // 0x8007E5E4: jr          $ra
    // 0x8007E5E8: lw          $v0, 0x10($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X10);
    return;
    // 0x8007E5E8: lw          $v0, 0x10($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X10);
;}
RECOMP_FUNC void guRotateRPYF(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007E5F0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8007E5F4: lwc1        $f0, 0x44D0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X44D0);
    // 0x8007E5F8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8007E5FC: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x8007E600: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8007E604: mul.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x8007E608: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x8007E60C: mtc1        $a3, $f20
    ctx->f20.u32l = ctx->r7;
    // 0x8007E610: mul.s       $f14, $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x8007E614: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8007E618: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8007E61C: mul.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x8007E620: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8007E624: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x8007E628: swc1        $f12, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f12.u32l;
    // 0x8007E62C: swc1        $f14, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f14.u32l;
    // 0x8007E630: jal         0x8007A640
    // 0x8007E634: swc1        $f20, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f20.u32l;
    __sinf_recomp(rdram, ctx);
        goto after_0;
    // 0x8007E634: swc1        $f20, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x8007E638: lwc1        $f12, 0x4C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8007E63C: jal         0x8007A800
    // 0x8007E640: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    __cosf_recomp(rdram, ctx);
        goto after_1;
    // 0x8007E640: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_1:
    // 0x8007E644: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x8007E648: jal         0x8007A640
    // 0x8007E64C: lwc1        $f12, 0x50($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X50);
    __sinf_recomp(rdram, ctx);
        goto after_2;
    // 0x8007E64C: lwc1        $f12, 0x50($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X50);
    after_2:
    // 0x8007E650: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x8007E654: jal         0x8007A800
    // 0x8007E658: lwc1        $f12, 0x50($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X50);
    __cosf_recomp(rdram, ctx);
        goto after_3;
    // 0x8007E658: lwc1        $f12, 0x50($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X50);
    after_3:
    // 0x8007E65C: lwc1        $f12, 0x54($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8007E660: jal         0x8007A640
    // 0x8007E664: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    __sinf_recomp(rdram, ctx);
        goto after_4;
    // 0x8007E664: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    after_4:
    // 0x8007E668: lwc1        $f12, 0x54($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8007E66C: jal         0x8007A800
    // 0x8007E670: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    __cosf_recomp(rdram, ctx);
        goto after_5;
    // 0x8007E670: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    after_5:
    // 0x8007E674: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8007E678: jal         0x8007A1B4
    // 0x8007E67C: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    guMtxIdentF(rdram, ctx);
        goto after_6;
    // 0x8007E67C: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    after_6:
    // 0x8007E680: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8007E684: lwc1        $f14, 0x34($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8007E688: lwc1        $f2, 0x3C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8007E68C: lwc1        $f16, 0x40($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8007E690: mul.s       $f4, $f14, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f12.fl);
    // 0x8007E694: neg.s       $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = -ctx->f16.fl;
    // 0x8007E698: mul.s       $f6, $f14, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f2.fl);
    // 0x8007E69C: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
    // 0x8007E6A0: mul.s       $f0, $f20, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x8007E6A4: swc1        $f4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f4.u32l;
    // 0x8007E6A8: swc1        $f6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f6.u32l;
    // 0x8007E6AC: mul.s       $f10, $f0, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x8007E6B0: nop

    // 0x8007E6B4: mul.s       $f18, $f22, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f22.fl, ctx->f2.fl);
    // 0x8007E6B8: nop

    // 0x8007E6BC: mul.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x8007E6C0: nop

    // 0x8007E6C4: mul.s       $f8, $f22, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f22.fl, ctx->f12.fl);
    // 0x8007E6C8: sub.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x8007E6CC: mul.s       $f18, $f20, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f14.fl);
    // 0x8007E6D0: nop

    // 0x8007E6D4: mul.s       $f0, $f22, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = MUL_S(ctx->f22.fl, ctx->f16.fl);
    // 0x8007E6D8: swc1        $f4, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f4.u32l;
    // 0x8007E6DC: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8007E6E0: swc1        $f18, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f18.u32l;
    // 0x8007E6E4: swc1        $f10, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f10.u32l;
    // 0x8007E6E8: mul.s       $f4, $f0, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x8007E6EC: nop

    // 0x8007E6F0: mul.s       $f6, $f20, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f20.fl, ctx->f2.fl);
    // 0x8007E6F4: nop

    // 0x8007E6F8: mul.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x8007E6FC: nop

    // 0x8007E700: mul.s       $f18, $f20, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f12.fl);
    // 0x8007E704: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8007E708: mul.s       $f6, $f22, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f22.fl, ctx->f14.fl);
    // 0x8007E70C: swc1        $f8, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f8.u32l;
    // 0x8007E710: sub.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x8007E714: swc1        $f6, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f6.u32l;
    // 0x8007E718: swc1        $f4, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f4.u32l;
    // 0x8007E71C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8007E720: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8007E724: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x8007E728: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x8007E72C: jr          $ra
    // 0x8007E730: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x8007E730: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void guRotateRPY(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007E734: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8007E738: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x8007E73C: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8007E740: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007E744: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x8007E748: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x8007E74C: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x8007E750: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x8007E754: jal         0x8007E5F0
    // 0x8007E758: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    guRotateRPYF(rdram, ctx);
        goto after_0;
    // 0x8007E758: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x8007E75C: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x8007E760: jal         0x8007A000
    // 0x8007E764: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    guMtxF2L(rdram, ctx);
        goto after_1;
    // 0x8007E764: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    after_1:
    // 0x8007E768: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007E76C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x8007E770: jr          $ra
    // 0x8007E774: nop

    return;
    // 0x8007E774: nop

;}
RECOMP_FUNC void __ll_bit_extract(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007E780: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007E784: andi        $t7, $a1, 0x3F
    ctx->r15 = ctx->r5 & 0X3F;
    // 0x8007E788: srl         $t6, $a1, 6
    ctx->r14 = S32(U32(ctx->r5) >> 6);
    // 0x8007E78C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8007E790: lwu         $t8, 0x10($sp)
    ctx->r24 = MEM_WU(ctx->r29, 0X10);
    // 0x8007E794: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x8007E798: lwu         $t2, 0x14($sp)
    ctx->r10 = MEM_WU(ctx->r29, 0X14);
    // 0x8007E79C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8007E7A0: or          $t5, $a2, $zero
    ctx->r13 = ctx->r6 | 0;
    // 0x8007E7A4: addu        $t9, $t8, $a2
    ctx->r25 = ADD32(ctx->r24, ctx->r6);
    // 0x8007E7A8: addiu       $t0, $zero, 0x40
    ctx->r8 = ADD32(0, 0X40);
    // 0x8007E7AC: dsllv       $t7, $t6, $t5
    ctx->r15 = ctx->r14 << (ctx->r13 & 63);
    // 0x8007E7B0: sll         $t3, $t2, 3
    ctx->r11 = S32(ctx->r10 << 3);
    // 0x8007E7B4: subu        $t1, $t0, $t9
    ctx->r9 = SUB32(ctx->r8, ctx->r25);
    // 0x8007E7B8: addu        $t4, $a0, $t3
    ctx->r12 = ADD32(ctx->r4, ctx->r11);
    // 0x8007E7BC: daddiu      $t8, $t7, -0x1
    ctx->r24 = ctx->r15 + -0X1;
    // 0x8007E7C0: dsll32      $t4, $t4, 0
    ctx->r12 = ctx->r12 << (0 + 32);
    // 0x8007E7C4: or          $t0, $t1, $zero
    ctx->r8 = ctx->r9 | 0;
    // 0x8007E7C8: dsra32      $t4, $t4, 0
    ctx->r12 = SIGNED(ctx->r12) >> (0 + 32);
    // 0x8007E7CC: sd          $t8, 0x0($sp)
    SD(ctx->r24, 0X0, ctx->r29);
    // 0x8007E7D0: dsllv       $t9, $t8, $t0
    ctx->r25 = ctx->r24 << (ctx->r8 & 63);
    // 0x8007E7D4: sw          $t1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r9;
    // 0x8007E7D8: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x8007E7DC: sd          $t9, 0x0($sp)
    SD(ctx->r25, 0X0, ctx->r29);
    // 0x8007E7E0: ld          $t2, 0x0($a0)
    ctx->r10 = LD(ctx->r4, 0X0);
    // 0x8007E7E4: or          $t4, $t1, $zero
    ctx->r12 = ctx->r9 | 0;
    // 0x8007E7E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007E7EC: and         $t3, $t2, $t9
    ctx->r11 = ctx->r10 & ctx->r25;
    // 0x8007E7F0: dsrlv       $v0, $t3, $t4
    ctx->r2 = ctx->r11 >> (ctx->r12 & 63);
    // 0x8007E7F4: dsll32      $v1, $v0, 0
    ctx->r3 = ctx->r2 << (0 + 32);
    // 0x8007E7F8: dsra32      $v1, $v1, 0
    ctx->r3 = SIGNED(ctx->r3) >> (0 + 32);
    // 0x8007E7FC: jr          $ra
    // 0x8007E800: dsra32      $v0, $v0, 0
    ctx->r2 = SIGNED(ctx->r2) >> (0 + 32);
    return;
    // 0x8007E800: dsra32      $v0, $v0, 0
    ctx->r2 = SIGNED(ctx->r2) >> (0 + 32);
;}
RECOMP_FUNC void __ull_bit_extract(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007E804: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007E808: andi        $t7, $a1, 0x3F
    ctx->r15 = ctx->r5 & 0X3F;
    // 0x8007E80C: srl         $t6, $a1, 6
    ctx->r14 = S32(U32(ctx->r5) >> 6);
    // 0x8007E810: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8007E814: lwu         $t8, 0x10($sp)
    ctx->r24 = MEM_WU(ctx->r29, 0X10);
    // 0x8007E818: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x8007E81C: lwu         $t2, 0x14($sp)
    ctx->r10 = MEM_WU(ctx->r29, 0X14);
    // 0x8007E820: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8007E824: or          $t5, $a2, $zero
    ctx->r13 = ctx->r6 | 0;
    // 0x8007E828: addu        $t9, $t8, $a2
    ctx->r25 = ADD32(ctx->r24, ctx->r6);
    // 0x8007E82C: addiu       $t0, $zero, 0x40
    ctx->r8 = ADD32(0, 0X40);
    // 0x8007E830: dsllv       $t7, $t6, $t5
    ctx->r15 = ctx->r14 << (ctx->r13 & 63);
    // 0x8007E834: sll         $t3, $t2, 3
    ctx->r11 = S32(ctx->r10 << 3);
    // 0x8007E838: subu        $t1, $t0, $t9
    ctx->r9 = SUB32(ctx->r8, ctx->r25);
    // 0x8007E83C: addu        $t4, $a0, $t3
    ctx->r12 = ADD32(ctx->r4, ctx->r11);
    // 0x8007E840: daddiu      $t8, $t7, -0x1
    ctx->r24 = ctx->r15 + -0X1;
    // 0x8007E844: dsll32      $t4, $t4, 0
    ctx->r12 = ctx->r12 << (0 + 32);
    // 0x8007E848: or          $t0, $t1, $zero
    ctx->r8 = ctx->r9 | 0;
    // 0x8007E84C: dsra32      $t4, $t4, 0
    ctx->r12 = SIGNED(ctx->r12) >> (0 + 32);
    // 0x8007E850: sd          $t8, 0x0($sp)
    SD(ctx->r24, 0X0, ctx->r29);
    // 0x8007E854: dsllv       $t9, $t8, $t0
    ctx->r25 = ctx->r24 << (ctx->r8 & 63);
    // 0x8007E858: sw          $t1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r9;
    // 0x8007E85C: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x8007E860: sd          $t9, 0x0($sp)
    SD(ctx->r25, 0X0, ctx->r29);
    // 0x8007E864: ld          $t2, 0x0($a0)
    ctx->r10 = LD(ctx->r4, 0X0);
    // 0x8007E868: or          $t4, $t1, $zero
    ctx->r12 = ctx->r9 | 0;
    // 0x8007E86C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007E870: and         $t3, $t2, $t9
    ctx->r11 = ctx->r10 & ctx->r25;
    // 0x8007E874: dsrlv       $v0, $t3, $t4
    ctx->r2 = ctx->r11 >> (ctx->r12 & 63);
    // 0x8007E878: dsll32      $v1, $v0, 0
    ctx->r3 = ctx->r2 << (0 + 32);
    // 0x8007E87C: dsra32      $v1, $v1, 0
    ctx->r3 = SIGNED(ctx->r3) >> (0 + 32);
    // 0x8007E880: jr          $ra
    // 0x8007E884: dsra32      $v0, $v0, 0
    ctx->r2 = SIGNED(ctx->r2) >> (0 + 32);
    return;
    // 0x8007E884: dsra32      $v0, $v0, 0
    ctx->r2 = SIGNED(ctx->r2) >> (0 + 32);
;}
RECOMP_FUNC void __ll_bit_insert(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007E888: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8007E88C: srl         $t6, $a1, 6
    ctx->r14 = S32(U32(ctx->r5) >> 6);
    // 0x8007E890: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x8007E894: lwu         $t2, 0x1C($sp)
    ctx->r10 = MEM_WU(ctx->r29, 0X1C);
    // 0x8007E898: andi        $t7, $a1, 0x3F
    ctx->r15 = ctx->r5 & 0X3F;
    // 0x8007E89C: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x8007E8A0: lwu         $t8, 0x18($sp)
    ctx->r24 = MEM_WU(ctx->r29, 0X18);
    // 0x8007E8A4: sll         $t3, $t2, 3
    ctx->r11 = S32(ctx->r10 << 3);
    // 0x8007E8A8: addu        $t4, $a0, $t3
    ctx->r12 = ADD32(ctx->r4, ctx->r11);
    // 0x8007E8AC: addiu       $t0, $zero, 0x40
    ctx->r8 = ADD32(0, 0X40);
    // 0x8007E8B0: dsll32      $t4, $t4, 0
    ctx->r12 = ctx->r12 << (0 + 32);
    // 0x8007E8B4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8007E8B8: or          $t5, $a2, $zero
    ctx->r13 = ctx->r6 | 0;
    // 0x8007E8BC: addu        $t9, $t8, $a2
    ctx->r25 = ADD32(ctx->r24, ctx->r6);
    // 0x8007E8C0: subu        $t1, $t0, $t9
    ctx->r9 = SUB32(ctx->r8, ctx->r25);
    // 0x8007E8C4: dsra32      $t4, $t4, 0
    ctx->r12 = SIGNED(ctx->r12) >> (0 + 32);
    // 0x8007E8C8: dsllv       $t7, $t6, $t5
    ctx->r15 = ctx->r14 << (ctx->r13 & 63);
    // 0x8007E8CC: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x8007E8D0: daddiu      $t0, $t7, -0x1
    ctx->r8 = ctx->r15 + -0X1;
    // 0x8007E8D4: ld          $t3, 0x30($sp)
    ctx->r11 = LD(ctx->r29, 0X30);
    // 0x8007E8D8: addiu       $t4, $zero, 0x40
    ctx->r12 = ADD32(0, 0X40);
    // 0x8007E8DC: dsllv       $t9, $t0, $t1
    ctx->r25 = ctx->r8 << (ctx->r9 & 63);
    // 0x8007E8E0: subu        $t6, $t4, $a2
    ctx->r14 = SUB32(ctx->r12, ctx->r6);
    // 0x8007E8E4: sd          $t0, 0x0($sp)
    SD(ctx->r8, 0X0, ctx->r29);
    // 0x8007E8E8: or          $t5, $t6, $zero
    ctx->r13 = ctx->r14 | 0;
    // 0x8007E8EC: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x8007E8F0: or          $t0, $t8, $zero
    ctx->r8 = ctx->r24 | 0;
    // 0x8007E8F4: dsllv       $t7, $t3, $t5
    ctx->r15 = ctx->r11 << (ctx->r13 & 63);
    // 0x8007E8F8: or          $t2, $t9, $zero
    ctx->r10 = ctx->r25 | 0;
    // 0x8007E8FC: dsrlv       $t1, $t7, $t0
    ctx->r9 = ctx->r15 >> (ctx->r8 & 63);
    // 0x8007E900: sd          $t2, 0x0($sp)
    SD(ctx->r10, 0X0, ctx->r29);
    // 0x8007E904: sd          $t1, 0x8($sp)
    SD(ctx->r9, 0X8, ctx->r29);
    // 0x8007E908: ld          $t4, 0x0($a0)
    ctx->r12 = LD(ctx->r4, 0X0);
    // 0x8007E90C: nor         $t9, $t2, $zero
    ctx->r25 = ~(ctx->r10 | 0);
    // 0x8007E910: and         $t6, $t4, $t9
    ctx->r14 = ctx->r12 & ctx->r25;
    // 0x8007E914: or          $t3, $t6, $t1
    ctx->r11 = ctx->r14 | ctx->r9;
    // 0x8007E918: sd          $t3, 0x0($a0)
    SD(ctx->r11, 0X0, ctx->r4);
    // 0x8007E91C: lwu         $t8, 0x14($sp)
    ctx->r24 = MEM_WU(ctx->r29, 0X14);
    // 0x8007E920: ld          $t5, 0x8($sp)
    ctx->r13 = LD(ctx->r29, 0X8);
    // 0x8007E924: or          $t7, $t8, $zero
    ctx->r15 = ctx->r24 | 0;
    // 0x8007E928: dsrlv       $t0, $t5, $t7
    ctx->r8 = ctx->r13 >> (ctx->r15 & 63);
    // 0x8007E92C: sd          $t0, 0x8($sp)
    SD(ctx->r8, 0X8, ctx->r29);
    // 0x8007E930: dsll32      $v1, $t0, 0
    ctx->r3 = ctx->r8 << (0 + 32);
    // 0x8007E934: dsra32      $v1, $v1, 0
    ctx->r3 = SIGNED(ctx->r3) >> (0 + 32);
    // 0x8007E938: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8007E93C: jr          $ra
    // 0x8007E940: dsra32      $v0, $t0, 0
    ctx->r2 = SIGNED(ctx->r8) >> (0 + 32);
    return;
    // 0x8007E940: dsra32      $v0, $t0, 0
    ctx->r2 = SIGNED(ctx->r8) >> (0 + 32);
;}
RECOMP_FUNC void alSendFrameResetMsg(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007EA24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007EA28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007EA2C: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8007EA30: addiu       $a0, $a0, 0x188
    ctx->r4 = ADD32(ctx->r4, 0X188);
    // 0x8007EA34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8007EA38: jal         0x80075F70
    // 0x8007EA3C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    osSendMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x8007EA3C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8007EA40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007EA44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007EA48: jr          $ra
    // 0x8007EA4C: nop

    return;
    // 0x8007EA4C: nop

;}
RECOMP_FUNC void __osTimerService(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007FCA0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8007FCA4: addiu       $t6, $zero, 0x0
    ctx->r14 = ADD32(0, 0X0);
    // 0x8007FCA8: addiu       $t7, $zero, 0x0
    ctx->r15 = ADD32(0, 0X0);
    // 0x8007FCAC: sw          $t7, 0x1C4($at)
    MEM_W(0X1C4, ctx->r1) = ctx->r15;
    // 0x8007FCB0: sw          $t6, 0x1C0($at)
    MEM_W(0X1C0, ctx->r1) = ctx->r14;
    // 0x8007FCB4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8007FCB8: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x8007FCBC: lw          $t8, 0x4540($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X4540);
    // 0x8007FCC0: sw          $zero, 0x1C8($at)
    MEM_W(0X1C8, ctx->r1) = 0;
    // 0x8007FCC4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8007FCC8: sw          $zero, 0x1CC($at)
    MEM_W(0X1CC, ctx->r1) = 0;
    // 0x8007FCCC: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x8007FCD0: sw          $t8, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r24;
    // 0x8007FCD4: lw          $t9, 0x4540($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X4540);
    // 0x8007FCD8: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x8007FCDC: addiu       $t2, $zero, 0x0
    ctx->r10 = ADD32(0, 0X0);
    // 0x8007FCE0: lw          $t0, 0x4($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X4);
    // 0x8007FCE4: addiu       $t3, $zero, 0x0
    ctx->r11 = ADD32(0, 0X0);
    // 0x8007FCE8: lui         $t4, 0x8009
    ctx->r12 = S32(0X8009 << 16);
    // 0x8007FCEC: sw          $t0, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r8;
    // 0x8007FCF0: lw          $t1, 0x4540($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X4540);
    // 0x8007FCF4: lui         $t5, 0x8009
    ctx->r13 = S32(0X8009 << 16);
    // 0x8007FCF8: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x8007FCFC: sw          $t2, 0x10($t1)
    MEM_W(0X10, ctx->r9) = ctx->r10;
    // 0x8007FD00: sw          $t3, 0x14($t1)
    MEM_W(0X14, ctx->r9) = ctx->r11;
    // 0x8007FD04: lw          $t4, 0x4540($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X4540);
    // 0x8007FD08: lw          $t6, 0x10($t4)
    ctx->r14 = MEM_W(ctx->r12, 0X10);
    // 0x8007FD0C: lw          $t7, 0x14($t4)
    ctx->r15 = MEM_W(ctx->r12, 0X14);
    // 0x8007FD10: sw          $t6, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->r14;
    // 0x8007FD14: sw          $t7, 0xC($t4)
    MEM_W(0XC, ctx->r12) = ctx->r15;
    // 0x8007FD18: lw          $t5, 0x4540($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X4540);
    // 0x8007FD1C: sw          $zero, 0x18($t5)
    MEM_W(0X18, ctx->r13) = 0;
    // 0x8007FD20: lw          $t8, 0x4540($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X4540);
    // 0x8007FD24: jr          $ra
    // 0x8007FD28: sw          $zero, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = 0;
    return;
    // 0x8007FD28: sw          $zero, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = 0;
;}
RECOMP_FUNC void alGetRefreshRate(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800801C0: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x800801C4: jr          $ra
    // 0x800801C8: lw          $v0, 0x45B0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X45B0);
    return;
    // 0x800801C8: lw          $v0, 0x45B0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X45B0);
;}
RECOMP_FUNC void _Printf(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800809E0: addiu       $sp, $sp, -0xD8
    ctx->r29 = ADD32(ctx->r29, -0XD8);
    // 0x800809E4: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x800809E8: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x800809EC: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x800809F0: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x800809F4: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x800809F8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x800809FC: sw          $a3, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r7;
    // 0x80080A00: lui         $s5, 0x8009
    ctx->r21 = S32(0X8009 << 16);
    // 0x80080A04: lui         $s6, 0x8009
    ctx->r22 = S32(0X8009 << 16);
    // 0x80080A08: lui         $s7, 0x8009
    ctx->r23 = S32(0X8009 << 16);
    // 0x80080A0C: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x80080A10: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x80080A14: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x80080A18: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80080A1C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80080A20: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80080A24: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80080A28: sw          $a2, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r6;
    // 0x80080A2C: sw          $zero, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = 0;
    // 0x80080A30: addiu       $s7, $s7, 0x45C0
    ctx->r23 = ADD32(ctx->r23, 0X45C0);
    // 0x80080A34: addiu       $s6, $s6, 0x6A04
    ctx->r22 = ADD32(ctx->r22, 0X6A04);
    // 0x80080A38: addiu       $s5, $s5, 0x45E4
    ctx->r21 = ADD32(ctx->r21, 0X45E4);
    // 0x80080A3C: addiu       $fp, $zero, 0xA
    ctx->r30 = ADD32(0, 0XA);
L_80080A40:
    // 0x80080A40: lbu         $v0, 0x0($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X0);
    // 0x80080A44: or          $s2, $a3, $zero
    ctx->r18 = ctx->r7 | 0;
    // 0x80080A48: addiu       $v1, $zero, 0x25
    ctx->r3 = ADD32(0, 0X25);
    // 0x80080A4C: beq         $v0, $zero, L_80080A74
    if (ctx->r2 == 0) {
        // 0x80080A50: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80080A74;
    }
    // 0x80080A50: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80080A54: beql        $v1, $v0, L_80080A78
    if (ctx->r3 == ctx->r2) {
        // 0x80080A58: subu        $v0, $s2, $a3
        ctx->r2 = SUB32(ctx->r18, ctx->r7);
            goto L_80080A78;
    }
    goto skip_0;
    // 0x80080A58: subu        $v0, $s2, $a3
    ctx->r2 = SUB32(ctx->r18, ctx->r7);
    skip_0:
    // 0x80080A5C: lbu         $v0, 0x1($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X1);
L_80080A60:
    // 0x80080A60: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80080A64: beq         $v0, $zero, L_80080A74
    if (ctx->r2 == 0) {
        // 0x80080A68: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80080A74;
    }
    // 0x80080A68: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80080A6C: bnel        $v1, $v0, L_80080A60
    if (ctx->r3 != ctx->r2) {
        // 0x80080A70: lbu         $v0, 0x1($s2)
        ctx->r2 = MEM_BU(ctx->r18, 0X1);
            goto L_80080A60;
    }
    goto skip_1;
    // 0x80080A70: lbu         $v0, 0x1($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X1);
    skip_1:
L_80080A74:
    // 0x80080A74: subu        $v0, $s2, $a3
    ctx->r2 = SUB32(ctx->r18, ctx->r7);
L_80080A78:
    // 0x80080A78: blez        $v0, L_80080AB0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80080A7C: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_80080AB0;
    }
    // 0x80080A7C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80080A80: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x80080A84: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80080A88: jalr        $s4
    // 0x80080A8C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_0;
    // 0x80080A8C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    after_0:
    // 0x80080A90: beq         $v0, $zero, L_80080AA8
    if (ctx->r2 == 0) {
        // 0x80080A94: or          $s3, $v0, $zero
        ctx->r19 = ctx->r2 | 0;
            goto L_80080AA8;
    }
    // 0x80080A94: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x80080A98: lw          $t6, 0xCC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XCC);
    // 0x80080A9C: addu        $t7, $t6, $s1
    ctx->r15 = ADD32(ctx->r14, ctx->r17);
    // 0x80080AA0: b           L_80080AB0
    // 0x80080AA4: sw          $t7, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r15;
        goto L_80080AB0;
    // 0x80080AA4: sw          $t7, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r15;
L_80080AA8:
    // 0x80080AA8: b           L_80080FF8
    // 0x80080AAC: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
        goto L_80080FF8;
    // 0x80080AAC: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
L_80080AB0:
    // 0x80080AB0: bne         $s0, $zero, L_80080AC0
    if (ctx->r16 != 0) {
        // 0x80080AB4: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_80080AC0;
    }
    // 0x80080AB4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80080AB8: b           L_80080FF8
    // 0x80080ABC: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
        goto L_80080FF8;
    // 0x80080ABC: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
L_80080AC0:
    // 0x80080AC0: sw          $zero, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = 0;
    // 0x80080AC4: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
    // 0x80080AC8: jal         0x80076B90
    // 0x80080ACC: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    strchr_recomp(rdram, ctx);
        goto after_1;
    // 0x80080ACC: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_1:
    // 0x80080AD0: beq         $v0, $zero, L_80080B10
    if (ctx->r2 == 0) {
        // 0x80080AD4: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80080B10;
    }
    // 0x80080AD4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_80080AD8:
    // 0x80080AD8: subu        $t9, $s0, $s6
    ctx->r25 = SUB32(ctx->r16, ctx->r22);
    // 0x80080ADC: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80080AE0: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x80080AE4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80080AE8: lw          $t1, 0x6A0C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X6A0C);
    // 0x80080AEC: lw          $t8, 0xD0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XD0);
    // 0x80080AF0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80080AF4: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x80080AF8: or          $t2, $t8, $t1
    ctx->r10 = ctx->r24 | ctx->r9;
    // 0x80080AFC: sw          $t2, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r10;
    // 0x80080B00: jal         0x80076B90
    // 0x80080B04: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
    strchr_recomp(rdram, ctx);
        goto after_2;
    // 0x80080B04: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
    after_2:
    // 0x80080B08: bne         $v0, $zero, L_80080AD8
    if (ctx->r2 != 0) {
        // 0x80080B0C: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80080AD8;
    }
    // 0x80080B0C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_80080B10:
    // 0x80080B10: lbu         $t3, 0x0($s2)
    ctx->r11 = MEM_BU(ctx->r18, 0X0);
    // 0x80080B14: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x80080B18: lw          $t4, 0xE4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XE4);
    // 0x80080B1C: bne         $v0, $t3, L_80080B64
    if (ctx->r2 != ctx->r11) {
        // 0x80080B20: lui         $a0, 0x8009
        ctx->r4 = S32(0X8009 << 16);
            goto L_80080B64;
    }
    // 0x80080B20: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80080B24: addiu       $t5, $t4, 0x3
    ctx->r13 = ADD32(ctx->r12, 0X3);
    // 0x80080B28: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x80080B2C: and         $t6, $t5, $at
    ctx->r14 = ctx->r13 & ctx->r1;
    // 0x80080B30: addiu       $t7, $t6, 0x4
    ctx->r15 = ADD32(ctx->r14, 0X4);
    // 0x80080B34: sw          $t7, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r15;
    // 0x80080B38: lw          $t9, 0x0($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X0);
    // 0x80080B3C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80080B40: bgez        $t9, L_80080B5C
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80080B44: sw          $t9, 0xC8($sp)
        MEM_W(0XC8, ctx->r29) = ctx->r25;
            goto L_80080B5C;
    }
    // 0x80080B44: sw          $t9, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r25;
    // 0x80080B48: lw          $t8, 0xD0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XD0);
    // 0x80080B4C: negu        $t0, $t9
    ctx->r8 = SUB32(0, ctx->r25);
    // 0x80080B50: sw          $t0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r8;
    // 0x80080B54: ori         $t1, $t8, 0x4
    ctx->r9 = ctx->r24 | 0X4;
    // 0x80080B58: sw          $t1, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r9;
L_80080B5C:
    // 0x80080B5C: b           L_80080BC0
    // 0x80080B60: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
        goto L_80080BC0;
    // 0x80080B60: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
L_80080B64:
    // 0x80080B64: sw          $zero, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = 0;
    // 0x80080B68: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
    // 0x80080B6C: slti        $at, $a1, 0x30
    ctx->r1 = SIGNED(ctx->r5) < 0X30 ? 1 : 0;
    // 0x80080B70: bne         $at, $zero, L_80080BC0
    if (ctx->r1 != 0) {
        // 0x80080B74: slti        $at, $a1, 0x3A
        ctx->r1 = SIGNED(ctx->r5) < 0X3A ? 1 : 0;
            goto L_80080BC0;
    }
    // 0x80080B74: slti        $at, $a1, 0x3A
    ctx->r1 = SIGNED(ctx->r5) < 0X3A ? 1 : 0;
    // 0x80080B78: beql        $at, $zero, L_80080BC4
    if (ctx->r1 == 0) {
        // 0x80080B7C: addiu       $at, $zero, 0x2E
        ctx->r1 = ADD32(0, 0X2E);
            goto L_80080BC4;
    }
    goto skip_2;
    // 0x80080B7C: addiu       $at, $zero, 0x2E
    ctx->r1 = ADD32(0, 0X2E);
    skip_2:
    // 0x80080B80: lw          $t2, 0xC8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC8);
L_80080B84:
    // 0x80080B84: slti        $at, $t2, 0x3E7
    ctx->r1 = SIGNED(ctx->r10) < 0X3E7 ? 1 : 0;
    // 0x80080B88: beql        $at, $zero, L_80080BA8
    if (ctx->r1 == 0) {
        // 0x80080B8C: lbu         $a1, 0x1($s2)
        ctx->r5 = MEM_BU(ctx->r18, 0X1);
            goto L_80080BA8;
    }
    goto skip_3;
    // 0x80080B8C: lbu         $a1, 0x1($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X1);
    skip_3:
    // 0x80080B90: multu       $t2, $fp
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r30)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80080B94: mflo        $t3
    ctx->r11 = lo;
    // 0x80080B98: addu        $t4, $a1, $t3
    ctx->r12 = ADD32(ctx->r5, ctx->r11);
    // 0x80080B9C: addiu       $t5, $t4, -0x30
    ctx->r13 = ADD32(ctx->r12, -0X30);
    // 0x80080BA0: sw          $t5, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r13;
    // 0x80080BA4: lbu         $a1, 0x1($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X1);
L_80080BA8:
    // 0x80080BA8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80080BAC: slti        $at, $a1, 0x30
    ctx->r1 = SIGNED(ctx->r5) < 0X30 ? 1 : 0;
    // 0x80080BB0: bne         $at, $zero, L_80080BC0
    if (ctx->r1 != 0) {
        // 0x80080BB4: slti        $at, $a1, 0x3A
        ctx->r1 = SIGNED(ctx->r5) < 0X3A ? 1 : 0;
            goto L_80080BC0;
    }
    // 0x80080BB4: slti        $at, $a1, 0x3A
    ctx->r1 = SIGNED(ctx->r5) < 0X3A ? 1 : 0;
    // 0x80080BB8: bnel        $at, $zero, L_80080B84
    if (ctx->r1 != 0) {
        // 0x80080BBC: lw          $t2, 0xC8($sp)
        ctx->r10 = MEM_W(ctx->r29, 0XC8);
            goto L_80080B84;
    }
    goto skip_4;
    // 0x80080BBC: lw          $t2, 0xC8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC8);
    skip_4:
L_80080BC0:
    // 0x80080BC0: addiu       $at, $zero, 0x2E
    ctx->r1 = ADD32(0, 0X2E);
L_80080BC4:
    // 0x80080BC4: beq         $a1, $at, L_80080BD8
    if (ctx->r5 == ctx->r1) {
        // 0x80080BC8: addiu       $t7, $zero, -0x1
        ctx->r15 = ADD32(0, -0X1);
            goto L_80080BD8;
    }
    // 0x80080BC8: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x80080BCC: sw          $t7, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r15;
    // 0x80080BD0: b           L_80080C6C
    // 0x80080BD4: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
        goto L_80080C6C;
    // 0x80080BD4: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
L_80080BD8:
    // 0x80080BD8: lbu         $t6, 0x1($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X1);
    // 0x80080BDC: lw          $t9, 0xE4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XE4);
    // 0x80080BE0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80080BE4: bne         $v0, $t6, L_80080C10
    if (ctx->r2 != ctx->r14) {
        // 0x80080BE8: addiu       $t0, $t9, 0x3
        ctx->r8 = ADD32(ctx->r25, 0X3);
            goto L_80080C10;
    }
    // 0x80080BE8: addiu       $t0, $t9, 0x3
    ctx->r8 = ADD32(ctx->r25, 0X3);
    // 0x80080BEC: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x80080BF0: and         $t8, $t0, $at
    ctx->r24 = ctx->r8 & ctx->r1;
    // 0x80080BF4: addiu       $t1, $t8, 0x4
    ctx->r9 = ADD32(ctx->r24, 0X4);
    // 0x80080BF8: sw          $t1, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r9;
    // 0x80080BFC: lw          $t2, 0x0($t8)
    ctx->r10 = MEM_W(ctx->r24, 0X0);
    // 0x80080C00: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80080C04: sw          $t2, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r10;
    // 0x80080C08: b           L_80080C6C
    // 0x80080C0C: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
        goto L_80080C6C;
    // 0x80080C0C: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
L_80080C10:
    // 0x80080C10: sw          $zero, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = 0;
    // 0x80080C14: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
    // 0x80080C18: slti        $at, $a1, 0x30
    ctx->r1 = SIGNED(ctx->r5) < 0X30 ? 1 : 0;
    // 0x80080C1C: bne         $at, $zero, L_80080C6C
    if (ctx->r1 != 0) {
        // 0x80080C20: slti        $at, $a1, 0x3A
        ctx->r1 = SIGNED(ctx->r5) < 0X3A ? 1 : 0;
            goto L_80080C6C;
    }
    // 0x80080C20: slti        $at, $a1, 0x3A
    ctx->r1 = SIGNED(ctx->r5) < 0X3A ? 1 : 0;
    // 0x80080C24: beq         $at, $zero, L_80080C6C
    if (ctx->r1 == 0) {
        // 0x80080C28: nop
    
            goto L_80080C6C;
    }
    // 0x80080C28: nop

    // 0x80080C2C: lw          $t3, 0xC4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XC4);
L_80080C30:
    // 0x80080C30: slti        $at, $t3, 0x3E7
    ctx->r1 = SIGNED(ctx->r11) < 0X3E7 ? 1 : 0;
    // 0x80080C34: beql        $at, $zero, L_80080C54
    if (ctx->r1 == 0) {
        // 0x80080C38: lbu         $a1, 0x1($s2)
        ctx->r5 = MEM_BU(ctx->r18, 0X1);
            goto L_80080C54;
    }
    goto skip_5;
    // 0x80080C38: lbu         $a1, 0x1($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X1);
    skip_5:
    // 0x80080C3C: multu       $t3, $fp
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r30)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80080C40: mflo        $t4
    ctx->r12 = lo;
    // 0x80080C44: addu        $t5, $a1, $t4
    ctx->r13 = ADD32(ctx->r5, ctx->r12);
    // 0x80080C48: addiu       $t7, $t5, -0x30
    ctx->r15 = ADD32(ctx->r13, -0X30);
    // 0x80080C4C: sw          $t7, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r15;
    // 0x80080C50: lbu         $a1, 0x1($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X1);
L_80080C54:
    // 0x80080C54: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80080C58: slti        $at, $a1, 0x30
    ctx->r1 = SIGNED(ctx->r5) < 0X30 ? 1 : 0;
    // 0x80080C5C: bne         $at, $zero, L_80080C6C
    if (ctx->r1 != 0) {
        // 0x80080C60: slti        $at, $a1, 0x3A
        ctx->r1 = SIGNED(ctx->r5) < 0X3A ? 1 : 0;
            goto L_80080C6C;
    }
    // 0x80080C60: slti        $at, $a1, 0x3A
    ctx->r1 = SIGNED(ctx->r5) < 0X3A ? 1 : 0;
    // 0x80080C64: bnel        $at, $zero, L_80080C30
    if (ctx->r1 != 0) {
        // 0x80080C68: lw          $t3, 0xC4($sp)
        ctx->r11 = MEM_W(ctx->r29, 0XC4);
            goto L_80080C30;
    }
    goto skip_6;
    // 0x80080C68: lw          $t3, 0xC4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XC4);
    skip_6:
L_80080C6C:
    // 0x80080C6C: jal         0x80076B90
    // 0x80080C70: addiu       $a0, $a0, 0x6A00
    ctx->r4 = ADD32(ctx->r4, 0X6A00);
    strchr_recomp(rdram, ctx);
        goto after_3;
    // 0x80080C70: addiu       $a0, $a0, 0x6A00
    ctx->r4 = ADD32(ctx->r4, 0X6A00);
    after_3:
    // 0x80080C74: beq         $v0, $zero, L_80080C8C
    if (ctx->r2 == 0) {
        // 0x80080C78: addiu       $a0, $sp, 0xA0
        ctx->r4 = ADD32(ctx->r29, 0XA0);
            goto L_80080C8C;
    }
    // 0x80080C78: addiu       $a0, $sp, 0xA0
    ctx->r4 = ADD32(ctx->r29, 0XA0);
    // 0x80080C7C: lbu         $t6, 0x0($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X0);
    // 0x80080C80: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80080C84: b           L_80080C90
    // 0x80080C88: sb          $t6, 0xD4($sp)
    MEM_B(0XD4, ctx->r29) = ctx->r14;
        goto L_80080C90;
    // 0x80080C88: sb          $t6, 0xD4($sp)
    MEM_B(0XD4, ctx->r29) = ctx->r14;
L_80080C8C:
    // 0x80080C8C: sb          $zero, 0xD4($sp)
    MEM_B(0XD4, ctx->r29) = 0;
L_80080C90:
    // 0x80080C90: lbu         $t9, 0xD4($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0XD4);
    // 0x80080C94: addiu       $v0, $zero, 0x6C
    ctx->r2 = ADD32(0, 0X6C);
    // 0x80080C98: addiu       $a1, $sp, 0xE4
    ctx->r5 = ADD32(ctx->r29, 0XE4);
    // 0x80080C9C: bne         $v0, $t9, L_80080CBC
    if (ctx->r2 != ctx->r25) {
        // 0x80080CA0: addiu       $a3, $sp, 0x74
        ctx->r7 = ADD32(ctx->r29, 0X74);
            goto L_80080CBC;
    }
    // 0x80080CA0: addiu       $a3, $sp, 0x74
    ctx->r7 = ADD32(ctx->r29, 0X74);
    // 0x80080CA4: lbu         $t0, 0x0($s2)
    ctx->r8 = MEM_BU(ctx->r18, 0X0);
    // 0x80080CA8: addiu       $t1, $zero, 0x4C
    ctx->r9 = ADD32(0, 0X4C);
    // 0x80080CAC: bne         $v0, $t0, L_80080CBC
    if (ctx->r2 != ctx->r8) {
        // 0x80080CB0: nop
    
            goto L_80080CBC;
    }
    // 0x80080CB0: nop

    // 0x80080CB4: sb          $t1, 0xD4($sp)
    MEM_B(0XD4, ctx->r29) = ctx->r9;
    // 0x80080CB8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_80080CBC:
    // 0x80080CBC: jal         0x80081028
    // 0x80080CC0: lbu         $a2, 0x0($s2)
    ctx->r6 = MEM_BU(ctx->r18, 0X0);
    _Putfld(rdram, ctx);
        goto after_4;
    // 0x80080CC0: lbu         $a2, 0x0($s2)
    ctx->r6 = MEM_BU(ctx->r18, 0X0);
    after_4:
    // 0x80080CC4: lw          $t8, 0xC8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC8);
    // 0x80080CC8: lw          $t2, 0xAC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XAC);
    // 0x80080CCC: lw          $t4, 0xB0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XB0);
    // 0x80080CD0: lw          $t7, 0xB4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XB4);
    // 0x80080CD4: subu        $t3, $t8, $t2
    ctx->r11 = SUB32(ctx->r24, ctx->r10);
    // 0x80080CD8: lw          $t9, 0xB8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XB8);
    // 0x80080CDC: subu        $t5, $t3, $t4
    ctx->r13 = SUB32(ctx->r11, ctx->r12);
    // 0x80080CE0: lw          $t1, 0xBC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XBC);
    // 0x80080CE4: lw          $t2, 0xC0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC0);
    // 0x80080CE8: lw          $t4, 0xD0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XD0);
    // 0x80080CEC: subu        $t6, $t5, $t7
    ctx->r14 = SUB32(ctx->r13, ctx->r15);
    // 0x80080CF0: subu        $t0, $t6, $t9
    ctx->r8 = SUB32(ctx->r14, ctx->r25);
    // 0x80080CF4: subu        $t8, $t0, $t1
    ctx->r24 = SUB32(ctx->r8, ctx->r9);
    // 0x80080CF8: subu        $t3, $t8, $t2
    ctx->r11 = SUB32(ctx->r24, ctx->r10);
    // 0x80080CFC: andi        $t5, $t4, 0x4
    ctx->r13 = ctx->r12 & 0X4;
    // 0x80080D00: bne         $t5, $zero, L_80080D70
    if (ctx->r13 != 0) {
        // 0x80080D04: sw          $t3, 0xC8($sp)
        MEM_W(0XC8, ctx->r29) = ctx->r11;
            goto L_80080D70;
    }
    // 0x80080D04: sw          $t3, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r11;
    // 0x80080D08: slt         $t7, $zero, $t3
    ctx->r15 = SIGNED(0) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x80080D0C: beql        $t7, $zero, L_80080D74
    if (ctx->r15 == 0) {
        // 0x80080D10: lw          $t0, 0xAC($sp)
        ctx->r8 = MEM_W(ctx->r29, 0XAC);
            goto L_80080D74;
    }
    goto skip_7;
    // 0x80080D10: lw          $t0, 0xAC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XAC);
    skip_7:
    // 0x80080D14: beq         $t7, $zero, L_80080D70
    if (ctx->r15 == 0) {
        // 0x80080D18: or          $s1, $t3, $zero
        ctx->r17 = ctx->r11 | 0;
            goto L_80080D70;
    }
    // 0x80080D18: or          $s1, $t3, $zero
    ctx->r17 = ctx->r11 | 0;
    // 0x80080D1C: sltiu       $at, $s1, 0x21
    ctx->r1 = ctx->r17 < 0X21 ? 1 : 0;
L_80080D20:
    // 0x80080D20: bne         $at, $zero, L_80080D30
    if (ctx->r1 != 0) {
        // 0x80080D24: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_80080D30;
    }
    // 0x80080D24: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x80080D28: b           L_80080D30
    // 0x80080D2C: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
        goto L_80080D30;
    // 0x80080D2C: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
L_80080D30:
    // 0x80080D30: blez        $s0, L_80080D64
    if (SIGNED(ctx->r16) <= 0) {
        // 0x80080D34: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_80080D64;
    }
    // 0x80080D34: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80080D38: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x80080D3C: jalr        $s4
    // 0x80080D40: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_5;
    // 0x80080D40: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_5:
    // 0x80080D44: beq         $v0, $zero, L_80080D5C
    if (ctx->r2 == 0) {
        // 0x80080D48: or          $s3, $v0, $zero
        ctx->r19 = ctx->r2 | 0;
            goto L_80080D5C;
    }
    // 0x80080D48: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x80080D4C: lw          $t6, 0xCC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XCC);
    // 0x80080D50: addu        $t9, $t6, $s0
    ctx->r25 = ADD32(ctx->r14, ctx->r16);
    // 0x80080D54: b           L_80080D64
    // 0x80080D58: sw          $t9, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r25;
        goto L_80080D64;
    // 0x80080D58: sw          $t9, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r25;
L_80080D5C:
    // 0x80080D5C: b           L_80080FF8
    // 0x80080D60: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
        goto L_80080FF8;
    // 0x80080D60: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
L_80080D64:
    // 0x80080D64: subu        $s1, $s1, $s0
    ctx->r17 = SUB32(ctx->r17, ctx->r16);
    // 0x80080D68: bgtzl       $s1, L_80080D20
    if (SIGNED(ctx->r17) > 0) {
        // 0x80080D6C: sltiu       $at, $s1, 0x21
        ctx->r1 = ctx->r17 < 0X21 ? 1 : 0;
            goto L_80080D20;
    }
    goto skip_8;
    // 0x80080D6C: sltiu       $at, $s1, 0x21
    ctx->r1 = ctx->r17 < 0X21 ? 1 : 0;
    skip_8:
L_80080D70:
    // 0x80080D70: lw          $t0, 0xAC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XAC);
L_80080D74:
    // 0x80080D74: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80080D78: addiu       $a1, $sp, 0x74
    ctx->r5 = ADD32(ctx->r29, 0X74);
    // 0x80080D7C: blezl       $t0, L_80080DB4
    if (SIGNED(ctx->r8) <= 0) {
        // 0x80080D80: lw          $t4, 0xB0($sp)
        ctx->r12 = MEM_W(ctx->r29, 0XB0);
            goto L_80080DB4;
    }
    goto skip_9;
    // 0x80080D80: lw          $t4, 0xB0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XB0);
    skip_9:
    // 0x80080D84: jalr        $s4
    // 0x80080D88: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_6;
    // 0x80080D88: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    after_6:
    // 0x80080D8C: beq         $v0, $zero, L_80080DA8
    if (ctx->r2 == 0) {
        // 0x80080D90: or          $s3, $v0, $zero
        ctx->r19 = ctx->r2 | 0;
            goto L_80080DA8;
    }
    // 0x80080D90: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x80080D94: lw          $t1, 0xCC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XCC);
    // 0x80080D98: lw          $t8, 0xAC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XAC);
    // 0x80080D9C: addu        $t2, $t1, $t8
    ctx->r10 = ADD32(ctx->r9, ctx->r24);
    // 0x80080DA0: b           L_80080DB0
    // 0x80080DA4: sw          $t2, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r10;
        goto L_80080DB0;
    // 0x80080DA4: sw          $t2, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r10;
L_80080DA8:
    // 0x80080DA8: b           L_80080FF8
    // 0x80080DAC: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
        goto L_80080FF8;
    // 0x80080DAC: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
L_80080DB0:
    // 0x80080DB0: lw          $t4, 0xB0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XB0);
L_80080DB4:
    // 0x80080DB4: slt         $t5, $zero, $t4
    ctx->r13 = SIGNED(0) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x80080DB8: beql        $t5, $zero, L_80080E20
    if (ctx->r13 == 0) {
        // 0x80080DBC: lw          $t6, 0xB4($sp)
        ctx->r14 = MEM_W(ctx->r29, 0XB4);
            goto L_80080E20;
    }
    goto skip_10;
    // 0x80080DBC: lw          $t6, 0xB4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB4);
    skip_10:
    // 0x80080DC0: beq         $t5, $zero, L_80080E1C
    if (ctx->r13 == 0) {
        // 0x80080DC4: or          $s1, $t4, $zero
        ctx->r17 = ctx->r12 | 0;
            goto L_80080E1C;
    }
    // 0x80080DC4: or          $s1, $t4, $zero
    ctx->r17 = ctx->r12 | 0;
    // 0x80080DC8: sltiu       $at, $s1, 0x21
    ctx->r1 = ctx->r17 < 0X21 ? 1 : 0;
L_80080DCC:
    // 0x80080DCC: bne         $at, $zero, L_80080DDC
    if (ctx->r1 != 0) {
        // 0x80080DD0: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_80080DDC;
    }
    // 0x80080DD0: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x80080DD4: b           L_80080DDC
    // 0x80080DD8: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
        goto L_80080DDC;
    // 0x80080DD8: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
L_80080DDC:
    // 0x80080DDC: blez        $s0, L_80080E10
    if (SIGNED(ctx->r16) <= 0) {
        // 0x80080DE0: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_80080E10;
    }
    // 0x80080DE0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80080DE4: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80080DE8: jalr        $s4
    // 0x80080DEC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_7;
    // 0x80080DEC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_7:
    // 0x80080DF0: beq         $v0, $zero, L_80080E08
    if (ctx->r2 == 0) {
        // 0x80080DF4: or          $s3, $v0, $zero
        ctx->r19 = ctx->r2 | 0;
            goto L_80080E08;
    }
    // 0x80080DF4: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x80080DF8: lw          $t3, 0xCC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XCC);
    // 0x80080DFC: addu        $t7, $t3, $s0
    ctx->r15 = ADD32(ctx->r11, ctx->r16);
    // 0x80080E00: b           L_80080E10
    // 0x80080E04: sw          $t7, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r15;
        goto L_80080E10;
    // 0x80080E04: sw          $t7, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r15;
L_80080E08:
    // 0x80080E08: b           L_80080FF8
    // 0x80080E0C: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
        goto L_80080FF8;
    // 0x80080E0C: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
L_80080E10:
    // 0x80080E10: subu        $s1, $s1, $s0
    ctx->r17 = SUB32(ctx->r17, ctx->r16);
    // 0x80080E14: bgtzl       $s1, L_80080DCC
    if (SIGNED(ctx->r17) > 0) {
        // 0x80080E18: sltiu       $at, $s1, 0x21
        ctx->r1 = ctx->r17 < 0X21 ? 1 : 0;
            goto L_80080DCC;
    }
    goto skip_11;
    // 0x80080E18: sltiu       $at, $s1, 0x21
    ctx->r1 = ctx->r17 < 0X21 ? 1 : 0;
    skip_11:
L_80080E1C:
    // 0x80080E1C: lw          $t6, 0xB4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB4);
L_80080E20:
    // 0x80080E20: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80080E24: lw          $a1, 0xA8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XA8);
    // 0x80080E28: blezl       $t6, L_80080E60
    if (SIGNED(ctx->r14) <= 0) {
        // 0x80080E2C: lw          $t8, 0xB8($sp)
        ctx->r24 = MEM_W(ctx->r29, 0XB8);
            goto L_80080E60;
    }
    goto skip_12;
    // 0x80080E2C: lw          $t8, 0xB8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XB8);
    skip_12:
    // 0x80080E30: jalr        $s4
    // 0x80080E34: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_8;
    // 0x80080E34: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    after_8:
    // 0x80080E38: beq         $v0, $zero, L_80080E54
    if (ctx->r2 == 0) {
        // 0x80080E3C: or          $s3, $v0, $zero
        ctx->r19 = ctx->r2 | 0;
            goto L_80080E54;
    }
    // 0x80080E3C: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x80080E40: lw          $t9, 0xCC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XCC);
    // 0x80080E44: lw          $t0, 0xB4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XB4);
    // 0x80080E48: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x80080E4C: b           L_80080E5C
    // 0x80080E50: sw          $t1, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r9;
        goto L_80080E5C;
    // 0x80080E50: sw          $t1, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r9;
L_80080E54:
    // 0x80080E54: b           L_80080FF8
    // 0x80080E58: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
        goto L_80080FF8;
    // 0x80080E58: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
L_80080E5C:
    // 0x80080E5C: lw          $t8, 0xB8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XB8);
L_80080E60:
    // 0x80080E60: slt         $t2, $zero, $t8
    ctx->r10 = SIGNED(0) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80080E64: beql        $t2, $zero, L_80080ECC
    if (ctx->r10 == 0) {
        // 0x80080E68: lw          $t3, 0xBC($sp)
        ctx->r11 = MEM_W(ctx->r29, 0XBC);
            goto L_80080ECC;
    }
    goto skip_13;
    // 0x80080E68: lw          $t3, 0xBC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XBC);
    skip_13:
    // 0x80080E6C: beq         $t2, $zero, L_80080EC8
    if (ctx->r10 == 0) {
        // 0x80080E70: or          $s1, $t8, $zero
        ctx->r17 = ctx->r24 | 0;
            goto L_80080EC8;
    }
    // 0x80080E70: or          $s1, $t8, $zero
    ctx->r17 = ctx->r24 | 0;
    // 0x80080E74: sltiu       $at, $s1, 0x21
    ctx->r1 = ctx->r17 < 0X21 ? 1 : 0;
L_80080E78:
    // 0x80080E78: bne         $at, $zero, L_80080E88
    if (ctx->r1 != 0) {
        // 0x80080E7C: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_80080E88;
    }
    // 0x80080E7C: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x80080E80: b           L_80080E88
    // 0x80080E84: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
        goto L_80080E88;
    // 0x80080E84: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
L_80080E88:
    // 0x80080E88: blez        $s0, L_80080EBC
    if (SIGNED(ctx->r16) <= 0) {
        // 0x80080E8C: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_80080EBC;
    }
    // 0x80080E8C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80080E90: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80080E94: jalr        $s4
    // 0x80080E98: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_9;
    // 0x80080E98: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_9:
    // 0x80080E9C: beq         $v0, $zero, L_80080EB4
    if (ctx->r2 == 0) {
        // 0x80080EA0: or          $s3, $v0, $zero
        ctx->r19 = ctx->r2 | 0;
            goto L_80080EB4;
    }
    // 0x80080EA0: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x80080EA4: lw          $t4, 0xCC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XCC);
    // 0x80080EA8: addu        $t5, $t4, $s0
    ctx->r13 = ADD32(ctx->r12, ctx->r16);
    // 0x80080EAC: b           L_80080EBC
    // 0x80080EB0: sw          $t5, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r13;
        goto L_80080EBC;
    // 0x80080EB0: sw          $t5, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r13;
L_80080EB4:
    // 0x80080EB4: b           L_80080FF8
    // 0x80080EB8: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
        goto L_80080FF8;
    // 0x80080EB8: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
L_80080EBC:
    // 0x80080EBC: subu        $s1, $s1, $s0
    ctx->r17 = SUB32(ctx->r17, ctx->r16);
    // 0x80080EC0: bgtzl       $s1, L_80080E78
    if (SIGNED(ctx->r17) > 0) {
        // 0x80080EC4: sltiu       $at, $s1, 0x21
        ctx->r1 = ctx->r17 < 0X21 ? 1 : 0;
            goto L_80080E78;
    }
    goto skip_14;
    // 0x80080EC4: sltiu       $at, $s1, 0x21
    ctx->r1 = ctx->r17 < 0X21 ? 1 : 0;
    skip_14:
L_80080EC8:
    // 0x80080EC8: lw          $t3, 0xBC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XBC);
L_80080ECC:
    // 0x80080ECC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80080ED0: lw          $t7, 0xA8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA8);
    // 0x80080ED4: blez        $t3, L_80080F0C
    if (SIGNED(ctx->r11) <= 0) {
        // 0x80080ED8: lw          $t6, 0xB4($sp)
        ctx->r14 = MEM_W(ctx->r29, 0XB4);
            goto L_80080F0C;
    }
    // 0x80080ED8: lw          $t6, 0xB4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB4);
    // 0x80080EDC: addu        $a1, $t7, $t6
    ctx->r5 = ADD32(ctx->r15, ctx->r14);
    // 0x80080EE0: jalr        $s4
    // 0x80080EE4: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_10;
    // 0x80080EE4: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    after_10:
    // 0x80080EE8: beq         $v0, $zero, L_80080F04
    if (ctx->r2 == 0) {
        // 0x80080EEC: or          $s3, $v0, $zero
        ctx->r19 = ctx->r2 | 0;
            goto L_80080F04;
    }
    // 0x80080EEC: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x80080EF0: lw          $t9, 0xCC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XCC);
    // 0x80080EF4: lw          $t0, 0xBC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XBC);
    // 0x80080EF8: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x80080EFC: b           L_80080F0C
    // 0x80080F00: sw          $t1, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r9;
        goto L_80080F0C;
    // 0x80080F00: sw          $t1, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r9;
L_80080F04:
    // 0x80080F04: b           L_80080FF8
    // 0x80080F08: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
        goto L_80080FF8;
    // 0x80080F08: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
L_80080F0C:
    // 0x80080F0C: lw          $t8, 0xC0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC0);
    // 0x80080F10: slt         $t2, $zero, $t8
    ctx->r10 = SIGNED(0) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80080F14: beql        $t2, $zero, L_80080F7C
    if (ctx->r10 == 0) {
        // 0x80080F18: lw          $t7, 0xD0($sp)
        ctx->r15 = MEM_W(ctx->r29, 0XD0);
            goto L_80080F7C;
    }
    goto skip_15;
    // 0x80080F18: lw          $t7, 0xD0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XD0);
    skip_15:
    // 0x80080F1C: beq         $t2, $zero, L_80080F78
    if (ctx->r10 == 0) {
        // 0x80080F20: or          $s1, $t8, $zero
        ctx->r17 = ctx->r24 | 0;
            goto L_80080F78;
    }
    // 0x80080F20: or          $s1, $t8, $zero
    ctx->r17 = ctx->r24 | 0;
    // 0x80080F24: sltiu       $at, $s1, 0x21
    ctx->r1 = ctx->r17 < 0X21 ? 1 : 0;
L_80080F28:
    // 0x80080F28: bne         $at, $zero, L_80080F38
    if (ctx->r1 != 0) {
        // 0x80080F2C: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_80080F38;
    }
    // 0x80080F2C: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x80080F30: b           L_80080F38
    // 0x80080F34: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
        goto L_80080F38;
    // 0x80080F34: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
L_80080F38:
    // 0x80080F38: blez        $s0, L_80080F6C
    if (SIGNED(ctx->r16) <= 0) {
        // 0x80080F3C: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_80080F6C;
    }
    // 0x80080F3C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80080F40: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80080F44: jalr        $s4
    // 0x80080F48: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_11;
    // 0x80080F48: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_11:
    // 0x80080F4C: beq         $v0, $zero, L_80080F64
    if (ctx->r2 == 0) {
        // 0x80080F50: or          $s3, $v0, $zero
        ctx->r19 = ctx->r2 | 0;
            goto L_80080F64;
    }
    // 0x80080F50: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x80080F54: lw          $t4, 0xCC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XCC);
    // 0x80080F58: addu        $t5, $t4, $s0
    ctx->r13 = ADD32(ctx->r12, ctx->r16);
    // 0x80080F5C: b           L_80080F6C
    // 0x80080F60: sw          $t5, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r13;
        goto L_80080F6C;
    // 0x80080F60: sw          $t5, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r13;
L_80080F64:
    // 0x80080F64: b           L_80080FF8
    // 0x80080F68: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
        goto L_80080FF8;
    // 0x80080F68: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
L_80080F6C:
    // 0x80080F6C: subu        $s1, $s1, $s0
    ctx->r17 = SUB32(ctx->r17, ctx->r16);
    // 0x80080F70: bgtzl       $s1, L_80080F28
    if (SIGNED(ctx->r17) > 0) {
        // 0x80080F74: sltiu       $at, $s1, 0x21
        ctx->r1 = ctx->r17 < 0X21 ? 1 : 0;
            goto L_80080F28;
    }
    goto skip_16;
    // 0x80080F74: sltiu       $at, $s1, 0x21
    ctx->r1 = ctx->r17 < 0X21 ? 1 : 0;
    skip_16:
L_80080F78:
    // 0x80080F78: lw          $t7, 0xD0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XD0);
L_80080F7C:
    // 0x80080F7C: lw          $t3, 0xC8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XC8);
    // 0x80080F80: andi        $t6, $t7, 0x4
    ctx->r14 = ctx->r15 & 0X4;
    // 0x80080F84: beq         $t6, $zero, L_80080FF0
    if (ctx->r14 == 0) {
        // 0x80080F88: slt         $t9, $zero, $t3
        ctx->r25 = SIGNED(0) < SIGNED(ctx->r11) ? 1 : 0;
            goto L_80080FF0;
    }
    // 0x80080F88: slt         $t9, $zero, $t3
    ctx->r25 = SIGNED(0) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x80080F8C: beq         $t9, $zero, L_80080FF0
    if (ctx->r25 == 0) {
        // 0x80080F90: nop
    
            goto L_80080FF0;
    }
    // 0x80080F90: nop

    // 0x80080F94: beq         $t9, $zero, L_80080FF0
    if (ctx->r25 == 0) {
        // 0x80080F98: or          $s1, $t3, $zero
        ctx->r17 = ctx->r11 | 0;
            goto L_80080FF0;
    }
    // 0x80080F98: or          $s1, $t3, $zero
    ctx->r17 = ctx->r11 | 0;
    // 0x80080F9C: sltiu       $at, $s1, 0x21
    ctx->r1 = ctx->r17 < 0X21 ? 1 : 0;
L_80080FA0:
    // 0x80080FA0: bne         $at, $zero, L_80080FB0
    if (ctx->r1 != 0) {
        // 0x80080FA4: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_80080FB0;
    }
    // 0x80080FA4: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x80080FA8: b           L_80080FB0
    // 0x80080FAC: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
        goto L_80080FB0;
    // 0x80080FAC: addiu       $s0, $zero, 0x20
    ctx->r16 = ADD32(0, 0X20);
L_80080FB0:
    // 0x80080FB0: blez        $s0, L_80080FE4
    if (SIGNED(ctx->r16) <= 0) {
        // 0x80080FB4: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_80080FE4;
    }
    // 0x80080FB4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80080FB8: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x80080FBC: jalr        $s4
    // 0x80080FC0: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_12;
    // 0x80080FC0: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_12:
    // 0x80080FC4: beq         $v0, $zero, L_80080FDC
    if (ctx->r2 == 0) {
        // 0x80080FC8: or          $s3, $v0, $zero
        ctx->r19 = ctx->r2 | 0;
            goto L_80080FDC;
    }
    // 0x80080FC8: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x80080FCC: lw          $t0, 0xCC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XCC);
    // 0x80080FD0: addu        $t1, $t0, $s0
    ctx->r9 = ADD32(ctx->r8, ctx->r16);
    // 0x80080FD4: b           L_80080FE4
    // 0x80080FD8: sw          $t1, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r9;
        goto L_80080FE4;
    // 0x80080FD8: sw          $t1, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r9;
L_80080FDC:
    // 0x80080FDC: b           L_80080FF8
    // 0x80080FE0: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
        goto L_80080FF8;
    // 0x80080FE0: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
L_80080FE4:
    // 0x80080FE4: subu        $s1, $s1, $s0
    ctx->r17 = SUB32(ctx->r17, ctx->r16);
    // 0x80080FE8: bgtzl       $s1, L_80080FA0
    if (SIGNED(ctx->r17) > 0) {
        // 0x80080FEC: sltiu       $at, $s1, 0x21
        ctx->r1 = ctx->r17 < 0X21 ? 1 : 0;
            goto L_80080FA0;
    }
    goto skip_17;
    // 0x80080FEC: sltiu       $at, $s1, 0x21
    ctx->r1 = ctx->r17 < 0X21 ? 1 : 0;
    skip_17:
L_80080FF0:
    // 0x80080FF0: b           L_80080A40
    // 0x80080FF4: addiu       $a3, $s2, 0x1
    ctx->r7 = ADD32(ctx->r18, 0X1);
        goto L_80080A40;
    // 0x80080FF4: addiu       $a3, $s2, 0x1
    ctx->r7 = ADD32(ctx->r18, 0X1);
L_80080FF8:
    // 0x80080FF8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80080FFC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80081000: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80081004: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80081008: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8008100C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80081010: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80081014: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80081018: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8008101C: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80081020: jr          $ra
    // 0x80081024: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
    return;
    // 0x80081024: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
;}
RECOMP_FUNC void _Putfld(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80081028: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008102C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80081030: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80081034: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80081038: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8008103C: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x80081040: slti        $at, $t6, 0x26
    ctx->r1 = SIGNED(ctx->r14) < 0X26 ? 1 : 0;
    // 0x80081044: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x80081048: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8008104C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80081050: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x80081054: sw          $zero, 0x10($a0)
    MEM_W(0X10, ctx->r4) = 0;
    // 0x80081058: sw          $zero, 0x14($a0)
    MEM_W(0X14, ctx->r4) = 0;
    // 0x8008105C: sw          $zero, 0x18($a0)
    MEM_W(0X18, ctx->r4) = 0;
    // 0x80081060: sw          $zero, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = 0;
    // 0x80081064: sw          $zero, 0x20($a0)
    MEM_W(0X20, ctx->r4) = 0;
    // 0x80081068: bne         $at, $zero, L_80081094
    if (ctx->r1 != 0) {
        // 0x8008106C: or          $v1, $t6, $zero
        ctx->r3 = ctx->r14 | 0;
            goto L_80081094;
    }
    // 0x8008106C: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x80081070: addiu       $t7, $t6, -0x45
    ctx->r15 = ADD32(ctx->r14, -0X45);
    // 0x80081074: sltiu       $at, $t7, 0x34
    ctx->r1 = ctx->r15 < 0X34 ? 1 : 0;
    // 0x80081078: beq         $at, $zero, L_8008168C
    if (ctx->r1 == 0) {
        // 0x8008107C: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_8008168C;
    }
    // 0x8008107C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80081080: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80081084: addu        $at, $at, $t7
    gpr jr_addend_8008108C = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80081088: lw          $t7, 0x6A24($at)
    ctx->r15 = ADD32(ctx->r1, 0X6A24);
    // 0x8008108C: jr          $t7
    // 0x80081090: nop

    switch (jr_addend_8008108C >> 2) {
        case 0: goto L_800813A8; break;
        case 1: goto L_8008168C; break;
        case 2: goto L_800813A8; break;
        case 3: goto L_8008168C; break;
        case 4: goto L_8008168C; break;
        case 5: goto L_8008168C; break;
        case 6: goto L_8008168C; break;
        case 7: goto L_8008168C; break;
        case 8: goto L_8008168C; break;
        case 9: goto L_8008168C; break;
        case 10: goto L_8008168C; break;
        case 11: goto L_8008168C; break;
        case 12: goto L_8008168C; break;
        case 13: goto L_8008168C; break;
        case 14: goto L_8008168C; break;
        case 15: goto L_8008168C; break;
        case 16: goto L_8008168C; break;
        case 17: goto L_8008168C; break;
        case 18: goto L_8008168C; break;
        case 19: goto L_80081254; break;
        case 20: goto L_8008168C; break;
        case 21: goto L_8008168C; break;
        case 22: goto L_8008168C; break;
        case 23: goto L_8008168C; break;
        case 24: goto L_8008168C; break;
        case 25: goto L_8008168C; break;
        case 26: goto L_8008168C; break;
        case 27: goto L_8008168C; break;
        case 28: goto L_8008168C; break;
        case 29: goto L_8008168C; break;
        case 30: goto L_800810A8; break;
        case 31: goto L_800810E0; break;
        case 32: goto L_800813A8; break;
        case 33: goto L_800813A8; break;
        case 34: goto L_800813A8; break;
        case 35: goto L_8008168C; break;
        case 36: goto L_800810E0; break;
        case 37: goto L_8008168C; break;
        case 38: goto L_8008168C; break;
        case 39: goto L_8008168C; break;
        case 40: goto L_8008168C; break;
        case 41: goto L_80081510; break;
        case 42: goto L_80081254; break;
        case 43: goto L_800815E0; break;
        case 44: goto L_8008168C; break;
        case 45: goto L_8008168C; break;
        case 46: goto L_80081628; break;
        case 47: goto L_8008168C; break;
        case 48: goto L_80081254; break;
        case 49: goto L_8008168C; break;
        case 50: goto L_8008168C; break;
        case 51: goto L_80081254; break;
        default: switch_error(__func__, 0x8008108C, 0x80096A24);
    }
    // 0x80081090: nop

L_80081094:
    // 0x80081094: addiu       $at, $zero, 0x25
    ctx->r1 = ADD32(0, 0X25);
    // 0x80081098: beql        $v1, $at, L_80081670
    if (ctx->r3 == ctx->r1) {
        // 0x8008109C: lw          $t6, 0xC($s1)
        ctx->r14 = MEM_W(ctx->r17, 0XC);
            goto L_80081670;
    }
    goto skip_0;
    // 0x8008109C: lw          $t6, 0xC($s1)
    ctx->r14 = MEM_W(ctx->r17, 0XC);
    skip_0:
    // 0x800810A0: b           L_80081690
    // 0x800810A4: lw          $t2, 0xC($s1)
    ctx->r10 = MEM_W(ctx->r17, 0XC);
        goto L_80081690;
    // 0x800810A4: lw          $t2, 0xC($s1)
    ctx->r10 = MEM_W(ctx->r17, 0XC);
L_800810A8:
    // 0x800810A8: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x800810AC: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x800810B0: addiu       $t9, $t8, 0x3
    ctx->r25 = ADD32(ctx->r24, 0X3);
    // 0x800810B4: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x800810B8: addiu       $t1, $t0, 0x4
    ctx->r9 = ADD32(ctx->r8, 0X4);
    // 0x800810BC: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
    // 0x800810C0: lw          $t4, 0xC($s1)
    ctx->r12 = MEM_W(ctx->r17, 0XC);
    // 0x800810C4: lw          $t3, -0x4($t1)
    ctx->r11 = MEM_W(ctx->r9, -0X4);
    // 0x800810C8: addu        $t5, $a3, $t4
    ctx->r13 = ADD32(ctx->r7, ctx->r12);
    // 0x800810CC: sb          $t3, 0x0($t5)
    MEM_B(0X0, ctx->r13) = ctx->r11;
    // 0x800810D0: lw          $t6, 0xC($s1)
    ctx->r14 = MEM_W(ctx->r17, 0XC);
    // 0x800810D4: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x800810D8: b           L_800816A4
    // 0x800810DC: sw          $t7, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r15;
        goto L_800816A4;
    // 0x800810DC: sw          $t7, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r15;
L_800810E0:
    // 0x800810E0: lbu         $v0, 0x34($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X34);
    // 0x800810E4: addiu       $at, $zero, 0x6C
    ctx->r1 = ADD32(0, 0X6C);
    // 0x800810E8: bnel        $v0, $at, L_80081120
    if (ctx->r2 != ctx->r1) {
        // 0x800810EC: addiu       $at, $zero, 0x4C
        ctx->r1 = ADD32(0, 0X4C);
            goto L_80081120;
    }
    goto skip_1;
    // 0x800810EC: addiu       $at, $zero, 0x4C
    ctx->r1 = ADD32(0, 0X4C);
    skip_1:
    // 0x800810F0: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x800810F4: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x800810F8: addiu       $t9, $t8, 0x3
    ctx->r25 = ADD32(ctx->r24, 0X3);
    // 0x800810FC: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x80081100: addiu       $t1, $t0, 0x4
    ctx->r9 = ADD32(ctx->r8, 0X4);
    // 0x80081104: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
    // 0x80081108: lw          $t4, -0x4($t1)
    ctx->r12 = MEM_W(ctx->r9, -0X4);
    // 0x8008110C: sra         $t6, $t4, 31
    ctx->r14 = S32(SIGNED(ctx->r12) >> 31);
    // 0x80081110: sw          $t6, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r14;
    // 0x80081114: b           L_8008117C
    // 0x80081118: sw          $t4, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r12;
        goto L_8008117C;
    // 0x80081118: sw          $t4, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r12;
    // 0x8008111C: addiu       $at, $zero, 0x4C
    ctx->r1 = ADD32(0, 0X4C);
L_80081120:
    // 0x80081120: bnel        $v0, $at, L_80081158
    if (ctx->r2 != ctx->r1) {
        // 0x80081124: lw          $t1, 0x0($s0)
        ctx->r9 = MEM_W(ctx->r16, 0X0);
            goto L_80081158;
    }
    goto skip_2;
    // 0x80081124: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    skip_2:
    // 0x80081128: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x8008112C: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x80081130: addiu       $t5, $t3, 0x7
    ctx->r13 = ADD32(ctx->r11, 0X7);
    // 0x80081134: and         $t8, $t5, $at
    ctx->r24 = ctx->r13 & ctx->r1;
    // 0x80081138: addiu       $t9, $t8, 0x8
    ctx->r25 = ADD32(ctx->r24, 0X8);
    // 0x8008113C: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x80081140: lw          $t3, -0x4($t9)
    ctx->r11 = MEM_W(ctx->r25, -0X4);
    // 0x80081144: lw          $t2, -0x8($t9)
    ctx->r10 = MEM_W(ctx->r25, -0X8);
    // 0x80081148: sw          $t3, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r11;
    // 0x8008114C: b           L_8008117C
    // 0x80081150: sw          $t2, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r10;
        goto L_8008117C;
    // 0x80081150: sw          $t2, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r10;
    // 0x80081154: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
L_80081158:
    // 0x80081158: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x8008115C: addiu       $t4, $t1, 0x3
    ctx->r12 = ADD32(ctx->r9, 0X3);
    // 0x80081160: and         $t6, $t4, $at
    ctx->r14 = ctx->r12 & ctx->r1;
    // 0x80081164: addiu       $t7, $t6, 0x4
    ctx->r15 = ADD32(ctx->r14, 0X4);
    // 0x80081168: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x8008116C: lw          $t8, -0x4($t7)
    ctx->r24 = MEM_W(ctx->r15, -0X4);
    // 0x80081170: sra         $t0, $t8, 31
    ctx->r8 = S32(SIGNED(ctx->r24) >> 31);
    // 0x80081174: sw          $t0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r8;
    // 0x80081178: sw          $t8, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r24;
L_8008117C:
    // 0x8008117C: lbu         $t9, 0x34($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X34);
    // 0x80081180: addiu       $at, $zero, 0x68
    ctx->r1 = ADD32(0, 0X68);
    // 0x80081184: bnel        $t9, $at, L_800811A8
    if (ctx->r25 != ctx->r1) {
        // 0x80081188: lw          $t0, 0x0($s1)
        ctx->r8 = MEM_W(ctx->r17, 0X0);
            goto L_800811A8;
    }
    goto skip_3;
    // 0x80081188: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
    skip_3:
    // 0x8008118C: lw          $t3, 0x4($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X4);
    // 0x80081190: sll         $t6, $t3, 16
    ctx->r14 = S32(ctx->r11 << 16);
    // 0x80081194: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80081198: sra         $t8, $t7, 31
    ctx->r24 = S32(SIGNED(ctx->r15) >> 31);
    // 0x8008119C: sw          $t8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r24;
    // 0x800811A0: sw          $t7, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r15;
    // 0x800811A4: lw          $t0, 0x0($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X0);
L_800811A8:
    // 0x800811A8: bgtzl       $t0, L_800811E4
    if (SIGNED(ctx->r8) > 0) {
        // 0x800811AC: lw          $v0, 0x30($s1)
        ctx->r2 = MEM_W(ctx->r17, 0X30);
            goto L_800811E4;
    }
    goto skip_4;
    // 0x800811AC: lw          $v0, 0x30($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X30);
    skip_4:
    // 0x800811B0: bltzl       $t0, L_800811C4
    if (SIGNED(ctx->r8) < 0) {
        // 0x800811B4: lw          $t2, 0xC($s1)
        ctx->r10 = MEM_W(ctx->r17, 0XC);
            goto L_800811C4;
    }
    goto skip_5;
    // 0x800811B4: lw          $t2, 0xC($s1)
    ctx->r10 = MEM_W(ctx->r17, 0XC);
    skip_5:
    // 0x800811B8: b           L_800811E4
    // 0x800811BC: lw          $v0, 0x30($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X30);
        goto L_800811E4;
    // 0x800811BC: lw          $v0, 0x30($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X30);
    // 0x800811C0: lw          $t2, 0xC($s1)
    ctx->r10 = MEM_W(ctx->r17, 0XC);
L_800811C4:
    // 0x800811C4: addiu       $t5, $zero, 0x2D
    ctx->r13 = ADD32(0, 0X2D);
    // 0x800811C8: addu        $t3, $a3, $t2
    ctx->r11 = ADD32(ctx->r7, ctx->r10);
    // 0x800811CC: sb          $t5, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r13;
    // 0x800811D0: lw          $t4, 0xC($s1)
    ctx->r12 = MEM_W(ctx->r17, 0XC);
    // 0x800811D4: addiu       $t6, $t4, 0x1
    ctx->r14 = ADD32(ctx->r12, 0X1);
    // 0x800811D8: b           L_80081234
    // 0x800811DC: sw          $t6, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r14;
        goto L_80081234;
    // 0x800811DC: sw          $t6, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r14;
    // 0x800811E0: lw          $v0, 0x30($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X30);
L_800811E4:
    // 0x800811E4: andi        $t7, $v0, 0x2
    ctx->r15 = ctx->r2 & 0X2;
    // 0x800811E8: beq         $t7, $zero, L_80081210
    if (ctx->r15 == 0) {
        // 0x800811EC: andi        $t5, $v0, 0x1
        ctx->r13 = ctx->r2 & 0X1;
            goto L_80081210;
    }
    // 0x800811EC: andi        $t5, $v0, 0x1
    ctx->r13 = ctx->r2 & 0X1;
    // 0x800811F0: lw          $t9, 0xC($s1)
    ctx->r25 = MEM_W(ctx->r17, 0XC);
    // 0x800811F4: addiu       $t8, $zero, 0x2B
    ctx->r24 = ADD32(0, 0X2B);
    // 0x800811F8: addu        $t0, $a3, $t9
    ctx->r8 = ADD32(ctx->r7, ctx->r25);
    // 0x800811FC: sb          $t8, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r24;
    // 0x80081200: lw          $t1, 0xC($s1)
    ctx->r9 = MEM_W(ctx->r17, 0XC);
    // 0x80081204: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x80081208: b           L_80081234
    // 0x8008120C: sw          $t2, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r10;
        goto L_80081234;
    // 0x8008120C: sw          $t2, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r10;
L_80081210:
    // 0x80081210: beql        $t5, $zero, L_80081238
    if (ctx->r13 == 0) {
        // 0x80081214: lw          $t8, 0xC($s1)
        ctx->r24 = MEM_W(ctx->r17, 0XC);
            goto L_80081238;
    }
    goto skip_6;
    // 0x80081214: lw          $t8, 0xC($s1)
    ctx->r24 = MEM_W(ctx->r17, 0XC);
    skip_6:
    // 0x80081218: lw          $t4, 0xC($s1)
    ctx->r12 = MEM_W(ctx->r17, 0XC);
    // 0x8008121C: addiu       $t3, $zero, 0x20
    ctx->r11 = ADD32(0, 0X20);
    // 0x80081220: addu        $t6, $a3, $t4
    ctx->r14 = ADD32(ctx->r7, ctx->r12);
    // 0x80081224: sb          $t3, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r11;
    // 0x80081228: lw          $t7, 0xC($s1)
    ctx->r15 = MEM_W(ctx->r17, 0XC);
    // 0x8008122C: addiu       $t9, $t7, 0x1
    ctx->r25 = ADD32(ctx->r15, 0X1);
    // 0x80081230: sw          $t9, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r25;
L_80081234:
    // 0x80081234: lw          $t8, 0xC($s1)
    ctx->r24 = MEM_W(ctx->r17, 0XC);
L_80081238:
    // 0x80081238: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8008123C: andi        $a1, $a2, 0xFF
    ctx->r5 = ctx->r6 & 0XFF;
    // 0x80081240: addu        $t0, $t8, $a3
    ctx->r8 = ADD32(ctx->r24, ctx->r7);
    // 0x80081244: jal         0x80088880
    // 0x80081248: sw          $t0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r8;
    _Litob(rdram, ctx);
        goto after_0;
    // 0x80081248: sw          $t0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r8;
    after_0:
    // 0x8008124C: b           L_800816A8
    // 0x80081250: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800816A8;
    // 0x80081250: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80081254:
    // 0x80081254: lbu         $v0, 0x34($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X34);
    // 0x80081258: addiu       $at, $zero, 0x6C
    ctx->r1 = ADD32(0, 0X6C);
    // 0x8008125C: bnel        $v0, $at, L_80081294
    if (ctx->r2 != ctx->r1) {
        // 0x80081260: addiu       $at, $zero, 0x4C
        ctx->r1 = ADD32(0, 0X4C);
            goto L_80081294;
    }
    goto skip_7;
    // 0x80081260: addiu       $at, $zero, 0x4C
    ctx->r1 = ADD32(0, 0X4C);
    skip_7:
    // 0x80081264: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x80081268: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x8008126C: addiu       $t2, $t1, 0x3
    ctx->r10 = ADD32(ctx->r9, 0X3);
    // 0x80081270: and         $t5, $t2, $at
    ctx->r13 = ctx->r10 & ctx->r1;
    // 0x80081274: addiu       $t4, $t5, 0x4
    ctx->r12 = ADD32(ctx->r13, 0X4);
    // 0x80081278: sw          $t4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r12;
    // 0x8008127C: lw          $t6, -0x4($t4)
    ctx->r14 = MEM_W(ctx->r12, -0X4);
    // 0x80081280: sra         $t8, $t6, 31
    ctx->r24 = S32(SIGNED(ctx->r14) >> 31);
    // 0x80081284: sw          $t8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r24;
    // 0x80081288: b           L_800812F0
    // 0x8008128C: sw          $t6, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r14;
        goto L_800812F0;
    // 0x8008128C: sw          $t6, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r14;
    // 0x80081290: addiu       $at, $zero, 0x4C
    ctx->r1 = ADD32(0, 0X4C);
L_80081294:
    // 0x80081294: bnel        $v0, $at, L_800812CC
    if (ctx->r2 != ctx->r1) {
        // 0x80081298: lw          $t3, 0x0($s0)
        ctx->r11 = MEM_W(ctx->r16, 0X0);
            goto L_800812CC;
    }
    goto skip_8;
    // 0x80081298: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    skip_8:
    // 0x8008129C: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x800812A0: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x800812A4: addiu       $t0, $t7, 0x7
    ctx->r8 = ADD32(ctx->r15, 0X7);
    // 0x800812A8: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x800812AC: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x800812B0: sw          $t2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r10;
    // 0x800812B4: lw          $t5, -0x4($t2)
    ctx->r13 = MEM_W(ctx->r10, -0X4);
    // 0x800812B8: lw          $t4, -0x8($t2)
    ctx->r12 = MEM_W(ctx->r10, -0X8);
    // 0x800812BC: sw          $t5, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r13;
    // 0x800812C0: b           L_800812F0
    // 0x800812C4: sw          $t4, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r12;
        goto L_800812F0;
    // 0x800812C4: sw          $t4, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r12;
    // 0x800812C8: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
L_800812CC:
    // 0x800812CC: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x800812D0: addiu       $t6, $t3, 0x3
    ctx->r14 = ADD32(ctx->r11, 0X3);
    // 0x800812D4: and         $t8, $t6, $at
    ctx->r24 = ctx->r14 & ctx->r1;
    // 0x800812D8: addiu       $t9, $t8, 0x4
    ctx->r25 = ADD32(ctx->r24, 0X4);
    // 0x800812DC: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x800812E0: lw          $t0, -0x4($t9)
    ctx->r8 = MEM_W(ctx->r25, -0X4);
    // 0x800812E4: sra         $t2, $t0, 31
    ctx->r10 = S32(SIGNED(ctx->r8) >> 31);
    // 0x800812E8: sw          $t2, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r10;
    // 0x800812EC: sw          $t0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r8;
L_800812F0:
    // 0x800812F0: lbu         $v0, 0x34($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X34);
    // 0x800812F4: addiu       $at, $zero, 0x68
    ctx->r1 = ADD32(0, 0X68);
    // 0x800812F8: bne         $v0, $at, L_80081318
    if (ctx->r2 != ctx->r1) {
        // 0x800812FC: nop
    
            goto L_80081318;
    }
    // 0x800812FC: nop

    // 0x80081300: lw          $t5, 0x4($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X4);
    // 0x80081304: addiu       $t8, $zero, 0x0
    ctx->r24 = ADD32(0, 0X0);
    // 0x80081308: sw          $t8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r24;
    // 0x8008130C: andi        $t6, $t5, 0xFFFF
    ctx->r14 = ctx->r13 & 0XFFFF;
    // 0x80081310: b           L_80081330
    // 0x80081314: sw          $t6, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r14;
        goto L_80081330;
    // 0x80081314: sw          $t6, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r14;
L_80081318:
    // 0x80081318: bnel        $v0, $zero, L_80081334
    if (ctx->r2 != 0) {
        // 0x8008131C: lw          $t4, 0x30($s1)
        ctx->r12 = MEM_W(ctx->r17, 0X30);
            goto L_80081334;
    }
    goto skip_9;
    // 0x8008131C: lw          $t4, 0x30($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X30);
    skip_9:
    // 0x80081320: lw          $t1, 0x4($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X4);
    // 0x80081324: addiu       $t2, $zero, 0x0
    ctx->r10 = ADD32(0, 0X0);
    // 0x80081328: sw          $t2, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r10;
    // 0x8008132C: sw          $t1, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r9;
L_80081330:
    // 0x80081330: lw          $t4, 0x30($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X30);
L_80081334:
    // 0x80081334: andi        $t5, $t4, 0x8
    ctx->r13 = ctx->r12 & 0X8;
    // 0x80081338: beql        $t5, $zero, L_8008138C
    if (ctx->r13 == 0) {
        // 0x8008133C: lw          $t5, 0xC($s1)
        ctx->r13 = MEM_W(ctx->r17, 0XC);
            goto L_8008138C;
    }
    goto skip_10;
    // 0x8008133C: lw          $t5, 0xC($s1)
    ctx->r13 = MEM_W(ctx->r17, 0XC);
    skip_10:
    // 0x80081340: lw          $t8, 0xC($s1)
    ctx->r24 = MEM_W(ctx->r17, 0XC);
    // 0x80081344: addiu       $t6, $zero, 0x30
    ctx->r14 = ADD32(0, 0X30);
    // 0x80081348: addiu       $at, $zero, 0x78
    ctx->r1 = ADD32(0, 0X78);
    // 0x8008134C: addu        $t9, $a3, $t8
    ctx->r25 = ADD32(ctx->r7, ctx->r24);
    // 0x80081350: sb          $t6, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r14;
    // 0x80081354: lw          $t0, 0xC($s1)
    ctx->r8 = MEM_W(ctx->r17, 0XC);
    // 0x80081358: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x8008135C: beq         $v1, $at, L_80081370
    if (ctx->r3 == ctx->r1) {
        // 0x80081360: sw          $t1, 0xC($s1)
        MEM_W(0XC, ctx->r17) = ctx->r9;
            goto L_80081370;
    }
    // 0x80081360: sw          $t1, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r9;
    // 0x80081364: addiu       $at, $zero, 0x58
    ctx->r1 = ADD32(0, 0X58);
    // 0x80081368: bnel        $v1, $at, L_8008138C
    if (ctx->r3 != ctx->r1) {
        // 0x8008136C: lw          $t5, 0xC($s1)
        ctx->r13 = MEM_W(ctx->r17, 0XC);
            goto L_8008138C;
    }
    goto skip_11;
    // 0x8008136C: lw          $t5, 0xC($s1)
    ctx->r13 = MEM_W(ctx->r17, 0XC);
    skip_11:
L_80081370:
    // 0x80081370: lw          $t7, 0xC($s1)
    ctx->r15 = MEM_W(ctx->r17, 0XC);
    // 0x80081374: addu        $t2, $a3, $t7
    ctx->r10 = ADD32(ctx->r7, ctx->r15);
    // 0x80081378: sb          $a2, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r6;
    // 0x8008137C: lw          $t3, 0xC($s1)
    ctx->r11 = MEM_W(ctx->r17, 0XC);
    // 0x80081380: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80081384: sw          $t4, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r12;
    // 0x80081388: lw          $t5, 0xC($s1)
    ctx->r13 = MEM_W(ctx->r17, 0XC);
L_8008138C:
    // 0x8008138C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80081390: andi        $a1, $a2, 0xFF
    ctx->r5 = ctx->r6 & 0XFF;
    // 0x80081394: addu        $t8, $t5, $a3
    ctx->r24 = ADD32(ctx->r13, ctx->r7);
    // 0x80081398: jal         0x80088880
    // 0x8008139C: sw          $t8, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r24;
    _Litob(rdram, ctx);
        goto after_1;
    // 0x8008139C: sw          $t8, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r24;
    after_1:
    // 0x800813A0: b           L_800816A8
    // 0x800813A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800816A8;
    // 0x800813A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800813A8:
    // 0x800813A8: lbu         $t6, 0x34($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X34);
    // 0x800813AC: addiu       $at, $zero, 0x4C
    ctx->r1 = ADD32(0, 0X4C);
    // 0x800813B0: bnel        $t6, $at, L_80081418
    if (ctx->r14 != ctx->r1) {
        // 0x800813B4: lw          $v0, 0x0($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X0);
            goto L_80081418;
    }
    goto skip_12;
    // 0x800813B4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    skip_12:
    // 0x800813B8: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x800813BC: andi        $t9, $v0, 0x1
    ctx->r25 = ctx->r2 & 0X1;
    // 0x800813C0: beq         $t9, $zero, L_800813D8
    if (ctx->r25 == 0) {
        // 0x800813C4: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_800813D8;
    }
    // 0x800813C4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x800813C8: addiu       $t0, $v1, 0x7
    ctx->r8 = ADD32(ctx->r3, 0X7);
    // 0x800813CC: sw          $t0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r8;
    // 0x800813D0: b           L_80081408
    // 0x800813D4: addiu       $v0, $t0, -0x16
    ctx->r2 = ADD32(ctx->r8, -0X16);
        goto L_80081408;
    // 0x800813D4: addiu       $v0, $t0, -0x16
    ctx->r2 = ADD32(ctx->r8, -0X16);
L_800813D8:
    // 0x800813D8: andi        $t1, $v1, 0x2
    ctx->r9 = ctx->r3 & 0X2;
    // 0x800813DC: beq         $t1, $zero, L_800813F4
    if (ctx->r9 == 0) {
        // 0x800813E0: addiu       $t2, $v0, 0x7
        ctx->r10 = ADD32(ctx->r2, 0X7);
            goto L_800813F4;
    }
    // 0x800813E0: addiu       $t2, $v0, 0x7
    ctx->r10 = ADD32(ctx->r2, 0X7);
    // 0x800813E4: addiu       $t7, $v1, 0xA
    ctx->r15 = ADD32(ctx->r3, 0XA);
    // 0x800813E8: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x800813EC: b           L_80081404
    // 0x800813F0: addiu       $a0, $t7, -0x28
    ctx->r4 = ADD32(ctx->r15, -0X28);
        goto L_80081404;
    // 0x800813F0: addiu       $a0, $t7, -0x28
    ctx->r4 = ADD32(ctx->r15, -0X28);
L_800813F4:
    // 0x800813F4: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x800813F8: and         $t3, $t2, $at
    ctx->r11 = ctx->r10 & ctx->r1;
    // 0x800813FC: addiu       $a0, $t3, 0x8
    ctx->r4 = ADD32(ctx->r11, 0X8);
    // 0x80081400: sw          $a0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r4;
L_80081404:
    // 0x80081404: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_80081408:
    // 0x80081408: ldc1        $f4, -0x8($v0)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r2, -0X8);
    // 0x8008140C: b           L_8008146C
    // 0x80081410: sdc1        $f4, 0x0($s1)
    CHECK_FR(ctx, 4);
    SD(ctx->f4.u64, 0X0, ctx->r17);
        goto L_8008146C;
    // 0x80081410: sdc1        $f4, 0x0($s1)
    CHECK_FR(ctx, 4);
    SD(ctx->f4.u64, 0X0, ctx->r17);
    // 0x80081414: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
L_80081418:
    // 0x80081418: andi        $t5, $v0, 0x1
    ctx->r13 = ctx->r2 & 0X1;
    // 0x8008141C: beq         $t5, $zero, L_80081434
    if (ctx->r13 == 0) {
        // 0x80081420: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80081434;
    }
    // 0x80081420: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80081424: addiu       $t8, $v1, 0x7
    ctx->r24 = ADD32(ctx->r3, 0X7);
    // 0x80081428: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
    // 0x8008142C: b           L_80081464
    // 0x80081430: addiu       $v0, $t8, -0x16
    ctx->r2 = ADD32(ctx->r24, -0X16);
        goto L_80081464;
    // 0x80081430: addiu       $v0, $t8, -0x16
    ctx->r2 = ADD32(ctx->r24, -0X16);
L_80081434:
    // 0x80081434: andi        $t6, $v1, 0x2
    ctx->r14 = ctx->r3 & 0X2;
    // 0x80081438: beq         $t6, $zero, L_80081450
    if (ctx->r14 == 0) {
        // 0x8008143C: addiu       $t0, $v0, 0x7
        ctx->r8 = ADD32(ctx->r2, 0X7);
            goto L_80081450;
    }
    // 0x8008143C: addiu       $t0, $v0, 0x7
    ctx->r8 = ADD32(ctx->r2, 0X7);
    // 0x80081440: addiu       $t9, $v1, 0xA
    ctx->r25 = ADD32(ctx->r3, 0XA);
    // 0x80081444: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x80081448: b           L_80081460
    // 0x8008144C: addiu       $a0, $t9, -0x28
    ctx->r4 = ADD32(ctx->r25, -0X28);
        goto L_80081460;
    // 0x8008144C: addiu       $a0, $t9, -0x28
    ctx->r4 = ADD32(ctx->r25, -0X28);
L_80081450:
    // 0x80081450: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x80081454: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x80081458: addiu       $a0, $t1, 0x8
    ctx->r4 = ADD32(ctx->r9, 0X8);
    // 0x8008145C: sw          $a0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r4;
L_80081460:
    // 0x80081460: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_80081464:
    // 0x80081464: ldc1        $f6, -0x8($v0)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r2, -0X8);
    // 0x80081468: sdc1        $f6, 0x0($s1)
    CHECK_FR(ctx, 6);
    SD(ctx->f6.u64, 0X0, ctx->r17);
L_8008146C:
    // 0x8008146C: lhu         $t2, 0x0($s1)
    ctx->r10 = MEM_HU(ctx->r17, 0X0);
    // 0x80081470: andi        $t3, $t2, 0x8000
    ctx->r11 = ctx->r10 & 0X8000;
    // 0x80081474: beql        $t3, $zero, L_800814A0
    if (ctx->r11 == 0) {
        // 0x80081478: lw          $v0, 0x30($s1)
        ctx->r2 = MEM_W(ctx->r17, 0X30);
            goto L_800814A0;
    }
    goto skip_13;
    // 0x80081478: lw          $v0, 0x30($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X30);
    skip_13:
    // 0x8008147C: lw          $t5, 0xC($s1)
    ctx->r13 = MEM_W(ctx->r17, 0XC);
    // 0x80081480: addiu       $t4, $zero, 0x2D
    ctx->r12 = ADD32(0, 0X2D);
    // 0x80081484: addu        $t8, $a3, $t5
    ctx->r24 = ADD32(ctx->r7, ctx->r13);
    // 0x80081488: sb          $t4, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r12;
    // 0x8008148C: lw          $t6, 0xC($s1)
    ctx->r14 = MEM_W(ctx->r17, 0XC);
    // 0x80081490: addiu       $t9, $t6, 0x1
    ctx->r25 = ADD32(ctx->r14, 0X1);
    // 0x80081494: b           L_800814F0
    // 0x80081498: sw          $t9, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r25;
        goto L_800814F0;
    // 0x80081498: sw          $t9, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r25;
    // 0x8008149C: lw          $v0, 0x30($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X30);
L_800814A0:
    // 0x800814A0: andi        $t0, $v0, 0x2
    ctx->r8 = ctx->r2 & 0X2;
    // 0x800814A4: beq         $t0, $zero, L_800814CC
    if (ctx->r8 == 0) {
        // 0x800814A8: andi        $t4, $v0, 0x1
        ctx->r12 = ctx->r2 & 0X1;
            goto L_800814CC;
    }
    // 0x800814A8: andi        $t4, $v0, 0x1
    ctx->r12 = ctx->r2 & 0X1;
    // 0x800814AC: lw          $t7, 0xC($s1)
    ctx->r15 = MEM_W(ctx->r17, 0XC);
    // 0x800814B0: addiu       $t1, $zero, 0x2B
    ctx->r9 = ADD32(0, 0X2B);
    // 0x800814B4: addu        $t2, $a3, $t7
    ctx->r10 = ADD32(ctx->r7, ctx->r15);
    // 0x800814B8: sb          $t1, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r9;
    // 0x800814BC: lw          $t3, 0xC($s1)
    ctx->r11 = MEM_W(ctx->r17, 0XC);
    // 0x800814C0: addiu       $t5, $t3, 0x1
    ctx->r13 = ADD32(ctx->r11, 0X1);
    // 0x800814C4: b           L_800814F0
    // 0x800814C8: sw          $t5, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r13;
        goto L_800814F0;
    // 0x800814C8: sw          $t5, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r13;
L_800814CC:
    // 0x800814CC: beql        $t4, $zero, L_800814F4
    if (ctx->r12 == 0) {
        // 0x800814D0: lw          $t1, 0xC($s1)
        ctx->r9 = MEM_W(ctx->r17, 0XC);
            goto L_800814F4;
    }
    goto skip_14;
    // 0x800814D0: lw          $t1, 0xC($s1)
    ctx->r9 = MEM_W(ctx->r17, 0XC);
    skip_14:
    // 0x800814D4: lw          $t6, 0xC($s1)
    ctx->r14 = MEM_W(ctx->r17, 0XC);
    // 0x800814D8: addiu       $t8, $zero, 0x20
    ctx->r24 = ADD32(0, 0X20);
    // 0x800814DC: addu        $t9, $a3, $t6
    ctx->r25 = ADD32(ctx->r7, ctx->r14);
    // 0x800814E0: sb          $t8, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r24;
    // 0x800814E4: lw          $t0, 0xC($s1)
    ctx->r8 = MEM_W(ctx->r17, 0XC);
    // 0x800814E8: addiu       $t7, $t0, 0x1
    ctx->r15 = ADD32(ctx->r8, 0X1);
    // 0x800814EC: sw          $t7, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r15;
L_800814F0:
    // 0x800814F0: lw          $t1, 0xC($s1)
    ctx->r9 = MEM_W(ctx->r17, 0XC);
L_800814F4:
    // 0x800814F4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800814F8: andi        $a1, $a2, 0xFF
    ctx->r5 = ctx->r6 & 0XFF;
    // 0x800814FC: addu        $t2, $t1, $a3
    ctx->r10 = ADD32(ctx->r9, ctx->r7);
    // 0x80081500: jal         0x80088B20
    // 0x80081504: sw          $t2, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r10;
    _Ldtob(rdram, ctx);
        goto after_2;
    // 0x80081504: sw          $t2, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r10;
    after_2:
    // 0x80081508: b           L_800816A8
    // 0x8008150C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800816A8;
    // 0x8008150C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80081510:
    // 0x80081510: lbu         $v0, 0x34($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X34);
    // 0x80081514: addiu       $at, $zero, 0x68
    ctx->r1 = ADD32(0, 0X68);
    // 0x80081518: bnel        $v0, $at, L_8008154C
    if (ctx->r2 != ctx->r1) {
        // 0x8008151C: addiu       $at, $zero, 0x6C
        ctx->r1 = ADD32(0, 0X6C);
            goto L_8008154C;
    }
    goto skip_15;
    // 0x8008151C: addiu       $at, $zero, 0x6C
    ctx->r1 = ADD32(0, 0X6C);
    skip_15:
    // 0x80081520: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x80081524: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x80081528: addiu       $t5, $t3, 0x3
    ctx->r13 = ADD32(ctx->r11, 0X3);
    // 0x8008152C: and         $t4, $t5, $at
    ctx->r12 = ctx->r13 & ctx->r1;
    // 0x80081530: addiu       $t6, $t4, 0x4
    ctx->r14 = ADD32(ctx->r12, 0X4);
    // 0x80081534: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x80081538: lw          $t9, -0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, -0X4);
    // 0x8008153C: lw          $t8, 0x2C($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X2C);
    // 0x80081540: b           L_800816A4
    // 0x80081544: sh          $t8, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r24;
        goto L_800816A4;
    // 0x80081544: sh          $t8, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r24;
    // 0x80081548: addiu       $at, $zero, 0x6C
    ctx->r1 = ADD32(0, 0X6C);
L_8008154C:
    // 0x8008154C: bnel        $v0, $at, L_80081580
    if (ctx->r2 != ctx->r1) {
        // 0x80081550: addiu       $at, $zero, 0x4C
        ctx->r1 = ADD32(0, 0X4C);
            goto L_80081580;
    }
    goto skip_16;
    // 0x80081550: addiu       $at, $zero, 0x4C
    ctx->r1 = ADD32(0, 0X4C);
    skip_16:
    // 0x80081554: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x80081558: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x8008155C: addiu       $t7, $t0, 0x3
    ctx->r15 = ADD32(ctx->r8, 0X3);
    // 0x80081560: and         $t1, $t7, $at
    ctx->r9 = ctx->r15 & ctx->r1;
    // 0x80081564: addiu       $t2, $t1, 0x4
    ctx->r10 = ADD32(ctx->r9, 0X4);
    // 0x80081568: sw          $t2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r10;
    // 0x8008156C: lw          $t5, -0x4($t2)
    ctx->r13 = MEM_W(ctx->r10, -0X4);
    // 0x80081570: lw          $t3, 0x2C($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X2C);
    // 0x80081574: b           L_800816A4
    // 0x80081578: sw          $t3, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r11;
        goto L_800816A4;
    // 0x80081578: sw          $t3, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r11;
    // 0x8008157C: addiu       $at, $zero, 0x4C
    ctx->r1 = ADD32(0, 0X4C);
L_80081580:
    // 0x80081580: bnel        $v0, $at, L_800815BC
    if (ctx->r2 != ctx->r1) {
        // 0x80081584: lw          $t1, 0x0($s0)
        ctx->r9 = MEM_W(ctx->r16, 0X0);
            goto L_800815BC;
    }
    goto skip_17;
    // 0x80081584: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    skip_17:
    // 0x80081588: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x8008158C: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x80081590: addiu       $t2, $zero, 0x0
    ctx->r10 = ADD32(0, 0X0);
    // 0x80081594: addiu       $t6, $t4, 0x3
    ctx->r14 = ADD32(ctx->r12, 0X3);
    // 0x80081598: and         $t8, $t6, $at
    ctx->r24 = ctx->r14 & ctx->r1;
    // 0x8008159C: addiu       $t9, $t8, 0x4
    ctx->r25 = ADD32(ctx->r24, 0X4);
    // 0x800815A0: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x800815A4: lw          $t7, -0x4($t9)
    ctx->r15 = MEM_W(ctx->r25, -0X4);
    // 0x800815A8: lw          $t0, 0x2C($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X2C);
    // 0x800815AC: sw          $t2, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r10;
    // 0x800815B0: b           L_800816A4
    // 0x800815B4: sw          $t0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r8;
        goto L_800816A4;
    // 0x800815B4: sw          $t0, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r8;
    // 0x800815B8: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
L_800815BC:
    // 0x800815BC: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x800815C0: addiu       $t5, $t1, 0x3
    ctx->r13 = ADD32(ctx->r9, 0X3);
    // 0x800815C4: and         $t4, $t5, $at
    ctx->r12 = ctx->r13 & ctx->r1;
    // 0x800815C8: addiu       $t6, $t4, 0x4
    ctx->r14 = ADD32(ctx->r12, 0X4);
    // 0x800815CC: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x800815D0: lw          $t9, -0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, -0X4);
    // 0x800815D4: lw          $t8, 0x2C($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X2C);
    // 0x800815D8: b           L_800816A4
    // 0x800815DC: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
        goto L_800816A4;
    // 0x800815DC: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
L_800815E0:
    // 0x800815E0: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x800815E4: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x800815E8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800815EC: addiu       $t2, $t0, 0x3
    ctx->r10 = ADD32(ctx->r8, 0X3);
    // 0x800815F0: and         $t3, $t2, $at
    ctx->r11 = ctx->r10 & ctx->r1;
    // 0x800815F4: addiu       $t7, $t3, 0x4
    ctx->r15 = ADD32(ctx->r11, 0X4);
    // 0x800815F8: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x800815FC: lw          $t5, -0x4($t7)
    ctx->r13 = MEM_W(ctx->r15, -0X4);
    // 0x80081600: lw          $t6, 0xC($s1)
    ctx->r14 = MEM_W(ctx->r17, 0XC);
    // 0x80081604: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    // 0x80081608: sra         $t4, $t5, 31
    ctx->r12 = S32(SIGNED(ctx->r13) >> 31);
    // 0x8008160C: addu        $t8, $t6, $a3
    ctx->r24 = ADD32(ctx->r14, ctx->r7);
    // 0x80081610: sw          $t4, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r12;
    // 0x80081614: sw          $t8, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r24;
    // 0x80081618: jal         0x80088880
    // 0x8008161C: sw          $t5, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r13;
    _Litob(rdram, ctx);
        goto after_3;
    // 0x8008161C: sw          $t5, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r13;
    after_3:
    // 0x80081620: b           L_800816A8
    // 0x80081624: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_800816A8;
    // 0x80081624: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80081628:
    // 0x80081628: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x8008162C: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x80081630: addiu       $t0, $t9, 0x3
    ctx->r8 = ADD32(ctx->r25, 0X3);
    // 0x80081634: and         $t2, $t0, $at
    ctx->r10 = ctx->r8 & ctx->r1;
    // 0x80081638: addiu       $t3, $t2, 0x4
    ctx->r11 = ADD32(ctx->r10, 0X4);
    // 0x8008163C: sw          $t3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r11;
    // 0x80081640: lw          $a0, -0x4($t3)
    ctx->r4 = MEM_W(ctx->r11, -0X4);
    // 0x80081644: jal         0x80076BD0
    // 0x80081648: sw          $a0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r4;
    strlen_recomp(rdram, ctx);
        goto after_4;
    // 0x80081648: sw          $a0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r4;
    after_4:
    // 0x8008164C: lw          $v1, 0x24($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X24);
    // 0x80081650: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    // 0x80081654: bltz        $v1, L_800816A4
    if (SIGNED(ctx->r3) < 0) {
        // 0x80081658: slt         $at, $v1, $v0
        ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_800816A4;
    }
    // 0x80081658: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8008165C: beql        $at, $zero, L_800816A8
    if (ctx->r1 == 0) {
        // 0x80081660: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_800816A8;
    }
    goto skip_18;
    // 0x80081660: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_18:
    // 0x80081664: b           L_800816A4
    // 0x80081668: sw          $v1, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r3;
        goto L_800816A4;
    // 0x80081668: sw          $v1, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r3;
    // 0x8008166C: lw          $t6, 0xC($s1)
    ctx->r14 = MEM_W(ctx->r17, 0XC);
L_80081670:
    // 0x80081670: addiu       $t5, $zero, 0x25
    ctx->r13 = ADD32(0, 0X25);
    // 0x80081674: addu        $t8, $a3, $t6
    ctx->r24 = ADD32(ctx->r7, ctx->r14);
    // 0x80081678: sb          $t5, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r13;
    // 0x8008167C: lw          $t9, 0xC($s1)
    ctx->r25 = MEM_W(ctx->r17, 0XC);
    // 0x80081680: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80081684: b           L_800816A4
    // 0x80081688: sw          $t0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r8;
        goto L_800816A4;
    // 0x80081688: sw          $t0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r8;
L_8008168C:
    // 0x8008168C: lw          $t2, 0xC($s1)
    ctx->r10 = MEM_W(ctx->r17, 0XC);
L_80081690:
    // 0x80081690: addu        $t3, $a3, $t2
    ctx->r11 = ADD32(ctx->r7, ctx->r10);
    // 0x80081694: sb          $a2, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r6;
    // 0x80081698: lw          $t7, 0xC($s1)
    ctx->r15 = MEM_W(ctx->r17, 0XC);
    // 0x8008169C: addiu       $t1, $t7, 0x1
    ctx->r9 = ADD32(ctx->r15, 0X1);
    // 0x800816A0: sw          $t1, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r9;
L_800816A4:
    // 0x800816A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800816A8:
    // 0x800816A8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800816AC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800816B0: jr          $ra
    // 0x800816B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800816B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void __osSumcalc(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80081DF0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80081DF4: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x80081DF8: blez        $a1, L_80081E54
    if (SIGNED(ctx->r5) <= 0) {
        // 0x80081DFC: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_80081E54;
    }
    // 0x80081DFC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80081E00: andi        $a3, $a1, 0x3
    ctx->r7 = ctx->r5 & 0X3;
    // 0x80081E04: beq         $a3, $zero, L_80081E28
    if (ctx->r7 == 0) {
        // 0x80081E08: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_80081E28;
    }
    // 0x80081E08: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
L_80081E0C:
    // 0x80081E0C: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x80081E10: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80081E14: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80081E18: bne         $a0, $a2, L_80081E0C
    if (ctx->r4 != ctx->r6) {
        // 0x80081E1C: addu        $v1, $v1, $t6
        ctx->r3 = ADD32(ctx->r3, ctx->r14);
            goto L_80081E0C;
    }
    // 0x80081E1C: addu        $v1, $v1, $t6
    ctx->r3 = ADD32(ctx->r3, ctx->r14);
    // 0x80081E20: beql        $a2, $a1, L_80081E58
    if (ctx->r6 == ctx->r5) {
        // 0x80081E24: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_80081E58;
    }
    goto skip_0;
    // 0x80081E24: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    skip_0:
L_80081E28:
    // 0x80081E28: lbu         $t7, 0x0($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X0);
    // 0x80081E2C: lbu         $t8, 0x1($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X1);
    // 0x80081E30: lbu         $t9, 0x2($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X2);
    // 0x80081E34: addu        $v1, $v1, $t7
    ctx->r3 = ADD32(ctx->r3, ctx->r15);
    // 0x80081E38: lbu         $t0, 0x3($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X3);
    // 0x80081E3C: addu        $v1, $v1, $t8
    ctx->r3 = ADD32(ctx->r3, ctx->r24);
    // 0x80081E40: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x80081E44: addu        $v1, $v1, $t9
    ctx->r3 = ADD32(ctx->r3, ctx->r25);
    // 0x80081E48: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80081E4C: bne         $a2, $a1, L_80081E28
    if (ctx->r6 != ctx->r5) {
        // 0x80081E50: addu        $v1, $v1, $t0
        ctx->r3 = ADD32(ctx->r3, ctx->r8);
            goto L_80081E28;
    }
    // 0x80081E50: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
L_80081E54:
    // 0x80081E54: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80081E58:
    // 0x80081E58: andi        $t1, $v0, 0xFFFF
    ctx->r9 = ctx->r2 & 0XFFFF;
    // 0x80081E5C: jr          $ra
    // 0x80081E60: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    return;
    // 0x80081E60: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
;}
RECOMP_FUNC void __osIdCheckSum(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80081E64: sh          $zero, 0x0($a2)
    MEM_H(0X0, ctx->r6) = 0;
    // 0x80081E68: sh          $zero, 0x0($a1)
    MEM_H(0X0, ctx->r5) = 0;
    // 0x80081E6C: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x80081E70: addiu       $a3, $a0, 0x4
    ctx->r7 = ADD32(ctx->r4, 0X4);
    // 0x80081E74: addiu       $t1, $a3, 0x2
    ctx->r9 = ADD32(ctx->r7, 0X2);
    // 0x80081E78: addu        $t8, $zero, $v0
    ctx->r24 = ADD32(0, ctx->r2);
    // 0x80081E7C: sh          $t8, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r24;
    // 0x80081E80: lhu         $t9, 0x0($a2)
    ctx->r25 = MEM_HU(ctx->r6, 0X0);
    // 0x80081E84: nor         $t5, $v0, $zero
    ctx->r13 = ~(ctx->r2 | 0);
    // 0x80081E88: addiu       $t2, $a3, 0x4
    ctx->r10 = ADD32(ctx->r7, 0X4);
    // 0x80081E8C: addu        $t6, $t9, $t5
    ctx->r14 = ADD32(ctx->r25, ctx->r13);
    // 0x80081E90: sh          $t6, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r14;
    // 0x80081E94: lhu         $t7, 0x0($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X0);
    // 0x80081E98: lhu         $v0, 0x2($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X2);
    // 0x80081E9C: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    // 0x80081EA0: addiu       $t3, $a3, 0x6
    ctx->r11 = ADD32(ctx->r7, 0X6);
    // 0x80081EA4: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x80081EA8: sh          $t8, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r24;
    // 0x80081EAC: lhu         $t9, 0x0($a2)
    ctx->r25 = MEM_HU(ctx->r6, 0X0);
    // 0x80081EB0: nor         $t5, $v0, $zero
    ctx->r13 = ~(ctx->r2 | 0);
    // 0x80081EB4: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x80081EB8: addu        $t6, $t9, $t5
    ctx->r14 = ADD32(ctx->r25, ctx->r13);
    // 0x80081EBC: sh          $t6, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r14;
L_80081EC0:
    // 0x80081EC0: lhu         $v0, 0x0($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X0);
    // 0x80081EC4: lhu         $t7, 0x0($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X0);
    // 0x80081EC8: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x80081ECC: nor         $t5, $v0, $zero
    ctx->r13 = ~(ctx->r2 | 0);
    // 0x80081ED0: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x80081ED4: sh          $t8, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r24;
    // 0x80081ED8: lhu         $t9, 0x0($a2)
    ctx->r25 = MEM_HU(ctx->r6, 0X0);
    // 0x80081EDC: addiu       $a3, $a3, 0x8
    ctx->r7 = ADD32(ctx->r7, 0X8);
    // 0x80081EE0: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x80081EE4: addu        $t6, $t9, $t5
    ctx->r14 = ADD32(ctx->r25, ctx->r13);
    // 0x80081EE8: sh          $t6, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r14;
    // 0x80081EEC: lhu         $t7, 0x0($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X0);
    // 0x80081EF0: lhu         $v0, -0x8($t1)
    ctx->r2 = MEM_HU(ctx->r9, -0X8);
    // 0x80081EF4: addiu       $t2, $t2, 0x8
    ctx->r10 = ADD32(ctx->r10, 0X8);
    // 0x80081EF8: addiu       $t3, $t3, 0x8
    ctx->r11 = ADD32(ctx->r11, 0X8);
    // 0x80081EFC: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x80081F00: sh          $t8, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r24;
    // 0x80081F04: lhu         $t9, 0x0($a2)
    ctx->r25 = MEM_HU(ctx->r6, 0X0);
    // 0x80081F08: nor         $t5, $v0, $zero
    ctx->r13 = ~(ctx->r2 | 0);
    // 0x80081F0C: addu        $t6, $t9, $t5
    ctx->r14 = ADD32(ctx->r25, ctx->r13);
    // 0x80081F10: sh          $t6, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r14;
    // 0x80081F14: lhu         $t7, 0x0($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X0);
    // 0x80081F18: lhu         $v0, -0x8($t2)
    ctx->r2 = MEM_HU(ctx->r10, -0X8);
    // 0x80081F1C: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x80081F20: sh          $t8, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r24;
    // 0x80081F24: lhu         $t9, 0x0($a2)
    ctx->r25 = MEM_HU(ctx->r6, 0X0);
    // 0x80081F28: nor         $t5, $v0, $zero
    ctx->r13 = ~(ctx->r2 | 0);
    // 0x80081F2C: addu        $t6, $t9, $t5
    ctx->r14 = ADD32(ctx->r25, ctx->r13);
    // 0x80081F30: sh          $t6, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r14;
    // 0x80081F34: lhu         $t7, 0x0($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X0);
    // 0x80081F38: lhu         $v0, -0x8($t3)
    ctx->r2 = MEM_HU(ctx->r11, -0X8);
    // 0x80081F3C: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x80081F40: sh          $t8, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r24;
    // 0x80081F44: lhu         $t9, 0x0($a2)
    ctx->r25 = MEM_HU(ctx->r6, 0X0);
    // 0x80081F48: nor         $t5, $v0, $zero
    ctx->r13 = ~(ctx->r2 | 0);
    // 0x80081F4C: addu        $t6, $t9, $t5
    ctx->r14 = ADD32(ctx->r25, ctx->r13);
    // 0x80081F50: bne         $v1, $a0, L_80081EC0
    if (ctx->r3 != ctx->r4) {
        // 0x80081F54: sh          $t6, 0x0($a2)
        MEM_H(0X0, ctx->r6) = ctx->r14;
            goto L_80081EC0;
    }
    // 0x80081F54: sh          $t6, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r14;
    // 0x80081F58: jr          $ra
    // 0x80081F5C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80081F5C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void _bcmp(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80083570: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
    // 0x80083574: bne         $at, $zero, L_80083654
    if (ctx->r1 != 0) {
        // 0x80083578: xor         $v0, $a0, $a1
        ctx->r2 = ctx->r4 ^ ctx->r5;
            goto L_80083654;
    }
    // 0x80083578: xor         $v0, $a0, $a1
    ctx->r2 = ctx->r4 ^ ctx->r5;
    // 0x8008357C: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80083580: bne         $v0, $zero, L_800835E8
    if (ctx->r2 != 0) {
        // 0x80083584: negu        $t8, $a0
        ctx->r24 = SUB32(0, ctx->r4);
            goto L_800835E8;
    }
    // 0x80083584: negu        $t8, $a0
    ctx->r24 = SUB32(0, ctx->r4);
    // 0x80083588: andi        $t8, $t8, 0x3
    ctx->r24 = ctx->r24 & 0X3;
    // 0x8008358C: beq         $t8, $zero, L_800835AC
    if (ctx->r24 == 0) {
        // 0x80083590: subu        $a2, $a2, $t8
        ctx->r6 = SUB32(ctx->r6, ctx->r24);
            goto L_800835AC;
    }
    // 0x80083590: subu        $a2, $a2, $t8
    ctx->r6 = SUB32(ctx->r6, ctx->r24);
    // 0x80083594: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80083598: lwl         $v0, 0x0($a0)
    ctx->r2 = do_lwl(rdram, ctx->r2, ctx->r4, 0X0);
    // 0x8008359C: lwl         $v1, 0x0($a1)
    ctx->r3 = do_lwl(rdram, ctx->r3, ctx->r5, 0X0);
    // 0x800835A0: addu        $a0, $a0, $t8
    ctx->r4 = ADD32(ctx->r4, ctx->r24);
    // 0x800835A4: addu        $a1, $a1, $t8
    ctx->r5 = ADD32(ctx->r5, ctx->r24);
    // 0x800835A8: bne         $v0, $v1, L_80083684
    if (ctx->r2 != ctx->r3) {
        // 0x800835AC: addiu       $at, $zero, -0x4
        ctx->r1 = ADD32(0, -0X4);
            goto L_80083684;
    }
L_800835AC:
    // 0x800835AC: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x800835B0: and         $a3, $a2, $at
    ctx->r7 = ctx->r6 & ctx->r1;
    // 0x800835B4: beq         $a3, $zero, L_80083654
    if (ctx->r7 == 0) {
        // 0x800835B8: subu        $a2, $a2, $a3
        ctx->r6 = SUB32(ctx->r6, ctx->r7);
            goto L_80083654;
    }
    // 0x800835B8: subu        $a2, $a2, $a3
    ctx->r6 = SUB32(ctx->r6, ctx->r7);
    // 0x800835BC: addu        $a3, $a3, $a0
    ctx->r7 = ADD32(ctx->r7, ctx->r4);
    // 0x800835C0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
L_800835C4:
    // 0x800835C4: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x800835C8: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x800835CC: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x800835D0: bne         $v0, $v1, L_80083684
    if (ctx->r2 != ctx->r3) {
        // 0x800835D4: nop
    
            goto L_80083684;
    }
    // 0x800835D4: nop

    // 0x800835D8: bnel        $a0, $a3, L_800835C4
    if (ctx->r4 != ctx->r7) {
        // 0x800835DC: lw          $v0, 0x0($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X0);
            goto L_800835C4;
    }
    goto skip_0;
    // 0x800835DC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    skip_0:
    // 0x800835E0: b           L_80083654
    // 0x800835E4: nop

        goto L_80083654;
    // 0x800835E4: nop

L_800835E8:
    // 0x800835E8: negu        $a3, $a1
    ctx->r7 = SUB32(0, ctx->r5);
    // 0x800835EC: andi        $a3, $a3, 0x3
    ctx->r7 = ctx->r7 & 0X3;
    // 0x800835F0: beq         $a3, $zero, L_8008361C
    if (ctx->r7 == 0) {
        // 0x800835F4: subu        $a2, $a2, $a3
        ctx->r6 = SUB32(ctx->r6, ctx->r7);
            goto L_8008361C;
    }
    // 0x800835F4: subu        $a2, $a2, $a3
    ctx->r6 = SUB32(ctx->r6, ctx->r7);
    // 0x800835F8: addu        $a3, $a3, $a0
    ctx->r7 = ADD32(ctx->r7, ctx->r4);
    // 0x800835FC: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
L_80083600:
    // 0x80083600: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x80083604: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80083608: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8008360C: bne         $v0, $v1, L_80083684
    if (ctx->r2 != ctx->r3) {
        // 0x80083610: nop
    
            goto L_80083684;
    }
    // 0x80083610: nop

    // 0x80083614: bnel        $a0, $a3, L_80083600
    if (ctx->r4 != ctx->r7) {
        // 0x80083618: lbu         $v0, 0x0($a0)
        ctx->r2 = MEM_BU(ctx->r4, 0X0);
            goto L_80083600;
    }
    goto skip_1;
    // 0x80083618: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    skip_1:
L_8008361C:
    // 0x8008361C: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x80083620: and         $a3, $a2, $at
    ctx->r7 = ctx->r6 & ctx->r1;
    // 0x80083624: beq         $a3, $zero, L_80083654
    if (ctx->r7 == 0) {
        // 0x80083628: subu        $a2, $a2, $a3
        ctx->r6 = SUB32(ctx->r6, ctx->r7);
            goto L_80083654;
    }
    // 0x80083628: subu        $a2, $a2, $a3
    ctx->r6 = SUB32(ctx->r6, ctx->r7);
    // 0x8008362C: addu        $a3, $a3, $a0
    ctx->r7 = ADD32(ctx->r7, ctx->r4);
    // 0x80083630: lwl         $v0, 0x0($a0)
    ctx->r2 = do_lwl(rdram, ctx->r2, ctx->r4, 0X0);
L_80083634:
    // 0x80083634: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80083638: lwr         $v0, 0x3($a0)
    ctx->r2 = do_lwr(rdram, ctx->r2, ctx->r4, 0X3);
    // 0x8008363C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80083640: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x80083644: bne         $v0, $v1, L_80083684
    if (ctx->r2 != ctx->r3) {
        // 0x80083648: nop
    
            goto L_80083684;
    }
    // 0x80083648: nop

    // 0x8008364C: bnel        $a0, $a3, L_80083634
    if (ctx->r4 != ctx->r7) {
        // 0x80083650: lwl         $v0, 0x0($a0)
        ctx->r2 = do_lwl(rdram, ctx->r2, ctx->r4, 0X0);
            goto L_80083634;
    }
    goto skip_2;
    // 0x80083650: lwl         $v0, 0x0($a0)
    ctx->r2 = do_lwl(rdram, ctx->r2, ctx->r4, 0X0);
    skip_2:
L_80083654:
    // 0x80083654: blez        $a2, L_8008367C
    if (SIGNED(ctx->r6) <= 0) {
        // 0x80083658: addu        $a3, $a2, $a0
        ctx->r7 = ADD32(ctx->r6, ctx->r4);
            goto L_8008367C;
    }
    // 0x80083658: addu        $a3, $a2, $a0
    ctx->r7 = ADD32(ctx->r6, ctx->r4);
    // 0x8008365C: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
L_80083660:
    // 0x80083660: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x80083664: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80083668: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8008366C: bne         $v0, $v1, L_80083684
    if (ctx->r2 != ctx->r3) {
        // 0x80083670: nop
    
            goto L_80083684;
    }
    // 0x80083670: nop

    // 0x80083674: bnel        $a0, $a3, L_80083660
    if (ctx->r4 != ctx->r7) {
        // 0x80083678: lbu         $v0, 0x0($a0)
        ctx->r2 = MEM_BU(ctx->r4, 0X0);
            goto L_80083660;
    }
    goto skip_3;
    // 0x80083678: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    skip_3:
L_8008367C:
    // 0x8008367C: jr          $ra
    // 0x80083680: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80083680: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80083684:
    // 0x80083684: jr          $ra
    // 0x80083688: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80083688: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void alSynRemovePlayer(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80083A50: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80083A54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80083A58: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x80083A5C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80083A60: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80083A64: beql        $t6, $zero, L_80083AE0
    if (ctx->r14 == 0) {
        // 0x80083A68: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80083AE0;
    }
    goto skip_0;
    // 0x80083A68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80083A6C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80083A70: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80083A74: jal         0x80075ED0
    // 0x80083A78: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    osSetIntMask_recomp(rdram, ctx);
        goto after_0;
    // 0x80083A78: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    after_0:
    // 0x80083A7C: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x80083A80: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80083A84: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x80083A88: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x80083A8C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80083A90: beq         $v1, $zero, L_80083AD4
    if (ctx->r3 == 0) {
        // 0x80083A94: nop
    
            goto L_80083AD4;
    }
    // 0x80083A94: nop

L_80083A98:
    // 0x80083A98: bnel        $v1, $a1, L_80083AC8
    if (ctx->r3 != ctx->r5) {
        // 0x80083A9C: or          $a2, $v1, $zero
        ctx->r6 = ctx->r3 | 0;
            goto L_80083AC8;
    }
    goto skip_1;
    // 0x80083A9C: or          $a2, $v1, $zero
    ctx->r6 = ctx->r3 | 0;
    skip_1:
    // 0x80083AA0: beql        $a2, $zero, L_80083AB8
    if (ctx->r6 == 0) {
        // 0x80083AA4: lw          $t8, 0x0($v1)
        ctx->r24 = MEM_W(ctx->r3, 0X0);
            goto L_80083AB8;
    }
    goto skip_2;
    // 0x80083AA4: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    skip_2:
    // 0x80083AA8: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x80083AAC: b           L_80083ABC
    // 0x80083AB0: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
        goto L_80083ABC;
    // 0x80083AB0: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    // 0x80083AB4: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
L_80083AB8:
    // 0x80083AB8: sw          $t8, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r24;
L_80083ABC:
    // 0x80083ABC: b           L_80083AD4
    // 0x80083AC0: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
        goto L_80083AD4;
    // 0x80083AC0: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    // 0x80083AC4: or          $a2, $v1, $zero
    ctx->r6 = ctx->r3 | 0;
L_80083AC8:
    // 0x80083AC8: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x80083ACC: bne         $v1, $zero, L_80083A98
    if (ctx->r3 != 0) {
        // 0x80083AD0: nop
    
            goto L_80083A98;
    }
    // 0x80083AD0: nop

L_80083AD4:
    // 0x80083AD4: jal         0x80075ED0
    // 0x80083AD8: nop

    osSetIntMask_recomp(rdram, ctx);
        goto after_1;
    // 0x80083AD8: nop

    after_1:
    // 0x80083ADC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80083AE0:
    // 0x80083AE0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80083AE4: jr          $ra
    // 0x80083AE8: nop

    return;
    // 0x80083AE8: nop

;}
RECOMP_FUNC void alSeqpNew(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80083AF0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80083AF4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80083AF8: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80083AFC: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x80083B00: lw          $a2, 0xC($a1)
    ctx->r6 = MEM_W(ctx->r5, 0XC);
    // 0x80083B04: sw          $zero, 0x20($a0)
    MEM_W(0X20, ctx->r4) = 0;
    // 0x80083B08: sw          $zero, 0x18($a0)
    MEM_W(0X18, ctx->r4) = 0;
    // 0x80083B0C: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80083B10: lw          $t6, 0x44B0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X44B0);
    // 0x80083B14: addiu       $t7, $zero, 0xFF
    ctx->r15 = ADD32(0, 0XFF);
    // 0x80083B18: addiu       $t8, $zero, 0x1E8
    ctx->r24 = ADD32(0, 0X1E8);
    // 0x80083B1C: addiu       $t9, $zero, 0x7FFF
    ctx->r25 = ADD32(0, 0X7FFF);
    // 0x80083B20: sh          $t7, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r15;
    // 0x80083B24: sw          $t8, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r24;
    // 0x80083B28: sw          $zero, 0x28($a0)
    MEM_W(0X28, ctx->r4) = 0;
    // 0x80083B2C: sw          $zero, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = 0;
    // 0x80083B30: sh          $t9, 0x32($a0)
    MEM_H(0X32, ctx->r4) = ctx->r25;
    // 0x80083B34: sw          $t6, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r14;
    // 0x80083B38: lbu         $t0, 0x9($a1)
    ctx->r8 = MEM_BU(ctx->r5, 0X9);
    // 0x80083B3C: addiu       $t1, $zero, 0x3E80
    ctx->r9 = ADD32(0, 0X3E80);
    // 0x80083B40: sw          $t1, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = ctx->r9;
    // 0x80083B44: sw          $zero, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = 0;
    // 0x80083B48: sb          $t0, 0x35($a0)
    MEM_B(0X35, ctx->r4) = ctx->r8;
    // 0x80083B4C: lw          $t2, 0x10($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X10);
    // 0x80083B50: addiu       $t5, $zero, 0x9
    ctx->r13 = ADD32(0, 0X9);
    // 0x80083B54: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x80083B58: sw          $t2, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->r10;
    // 0x80083B5C: lw          $t3, 0x14($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X14);
    // 0x80083B60: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80083B64: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x80083B68: sw          $t3, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->r11;
    // 0x80083B6C: lw          $t4, 0x18($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X18);
    // 0x80083B70: sw          $zero, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = 0;
    // 0x80083B74: sw          $zero, 0x80($a0)
    MEM_W(0X80, ctx->r4) = 0;
    // 0x80083B78: sw          $zero, 0x84($a0)
    MEM_W(0X84, ctx->r4) = 0;
    // 0x80083B7C: sh          $t5, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r13;
    // 0x80083B80: sw          $t4, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->r12;
    // 0x80083B84: lbu         $t6, 0x8($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X8);
    // 0x80083B88: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80083B8C: sb          $t6, 0x34($a0)
    MEM_B(0X34, ctx->r4) = ctx->r14;
    // 0x80083B90: lbu         $a3, 0x8($s1)
    ctx->r7 = MEM_BU(ctx->r17, 0X8);
    // 0x80083B94: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80083B98: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80083B9C: jal         0x8007ABD0
    // 0x80083BA0: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    alHeapDBAlloc(rdram, ctx);
        goto after_0;
    // 0x80083BA0: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    after_0:
    // 0x80083BA4: sw          $v0, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r2;
    // 0x80083BA8: jal         0x800852CC
    // 0x80083BAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    __initChanState(rdram, ctx);
        goto after_1;
    // 0x80083BAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80083BB0: lw          $a3, 0x0($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X0);
    // 0x80083BB4: addiu       $t8, $zero, 0x38
    ctx->r24 = ADD32(0, 0X38);
    // 0x80083BB8: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80083BBC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80083BC0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80083BC4: jal         0x8007ABD0
    // 0x80083BC8: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    alHeapDBAlloc(rdram, ctx);
        goto after_2;
    // 0x80083BC8: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    after_2:
    // 0x80083BCC: sw          $zero, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = 0;
    // 0x80083BD0: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x80083BD4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80083BD8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80083BDC: blez        $t9, L_80083C0C
    if (SIGNED(ctx->r25) <= 0) {
        // 0x80083BE0: addiu       $t2, $zero, 0x1C
        ctx->r10 = ADD32(0, 0X1C);
            goto L_80083C0C;
    }
    // 0x80083BE0: addiu       $t2, $zero, 0x1C
    ctx->r10 = ADD32(0, 0X1C);
    // 0x80083BE4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80083BE8: lw          $t0, 0x6C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X6C);
L_80083BEC:
    // 0x80083BEC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80083BF0: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x80083BF4: sw          $v1, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r3;
    // 0x80083BF8: lw          $t1, 0x0($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X0);
    // 0x80083BFC: addiu       $v1, $v1, 0x38
    ctx->r3 = ADD32(ctx->r3, 0X38);
    // 0x80083C00: slt         $at, $a0, $t1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x80083C04: bnel        $at, $zero, L_80083BEC
    if (ctx->r1 != 0) {
        // 0x80083C08: lw          $t0, 0x6C($s0)
        ctx->r8 = MEM_W(ctx->r16, 0X6C);
            goto L_80083BEC;
    }
    goto skip_0;
    // 0x80083C08: lw          $t0, 0x6C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X6C);
    skip_0:
L_80083C0C:
    // 0x80083C0C: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x80083C10: sw          $zero, 0x68($s0)
    MEM_W(0X68, ctx->r16) = 0;
    // 0x80083C14: lw          $a3, 0x4($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X4);
    // 0x80083C18: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80083C1C: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x80083C20: jal         0x8007ABD0
    // 0x80083C24: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    alHeapDBAlloc(rdram, ctx);
        goto after_3;
    // 0x80083C24: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x80083C28: addiu       $a0, $s0, 0x48
    ctx->r4 = ADD32(ctx->r16, 0X48);
    // 0x80083C2C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80083C30: jal         0x80085480
    // 0x80083C34: lw          $a2, 0x4($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X4);
    alEvtqNew(rdram, ctx);
        goto after_4;
    // 0x80083C34: lw          $a2, 0x4($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X4);
    after_4:
    // 0x80083C38: lui         $t3, 0x8008
    ctx->r11 = S32(0X8008 << 16);
    // 0x80083C3C: addiu       $t3, $t3, 0x3C70
    ctx->r11 = ADD32(ctx->r11, 0X3C70);
    // 0x80083C40: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x80083C44: sw          $t3, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r11;
    // 0x80083C48: sw          $s0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r16;
    // 0x80083C4C: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80083C50: lw          $a0, 0x44B0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X44B0);
    // 0x80083C54: jal         0x800857C0
    // 0x80083C58: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    alSynAddPlayer(rdram, ctx);
        goto after_5;
    // 0x80083C58: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_5:
    // 0x80083C5C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80083C60: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80083C64: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80083C68: jr          $ra
    // 0x80083C6C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80083C6C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void alSeqpLoop(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80083C70: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x80083C74: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80083C78: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80083C7C: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80083C80: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80083C84: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80083C88: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x80083C8C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80083C90: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80083C94: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80083C98: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80083C9C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80083CA0: addiu       $s5, $a0, 0x48
    ctx->r21 = ADD32(ctx->r4, 0X48);
    // 0x80083CA4: addiu       $s6, $sp, 0x6C
    ctx->r22 = ADD32(ctx->r29, 0X6C);
    // 0x80083CA8: addiu       $s7, $a0, 0x38
    ctx->r23 = ADD32(ctx->r4, 0X38);
    // 0x80083CAC: addiu       $fp, $zero, 0x1
    ctx->r30 = ADD32(0, 0X1);
L_80083CB0:
    // 0x80083CB0: lhu         $t6, 0x38($s2)
    ctx->r14 = MEM_HU(ctx->r18, 0X38);
    // 0x80083CB4: sltiu       $at, $t6, 0x18
    ctx->r1 = ctx->r14 < 0X18 ? 1 : 0;
    // 0x80083CB8: beq         $at, $zero, L_80084174
    if (ctx->r1 == 0) {
        // 0x80083CBC: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_80084174;
    }
    // 0x80083CBC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80083CC0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80083CC4: addu        $at, $at, $t6
    gpr jr_addend_80083CCC = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80083CC8: lw          $t6, 0x6B10($at)
    ctx->r14 = ADD32(ctx->r1, 0X6B10);
    // 0x80083CCC: jr          $t6
    // 0x80083CD0: nop

    switch (jr_addend_80083CCC >> 2) {
        case 0: goto L_80083CD4; break;
        case 1: goto L_80084174; break;
        case 2: goto L_80083F48; break;
        case 3: goto L_80084174; break;
        case 4: goto L_80084174; break;
        case 5: goto L_80083D04; break;
        case 6: goto L_80083D50; break;
        case 7: goto L_80083F5C; break;
        case 8: goto L_80084174; break;
        case 9: goto L_80083CE4; break;
        case 10: goto L_80084094; break;
        case 11: goto L_800840F8; break;
        case 12: goto L_80084114; break;
        case 13: goto L_80084130; break;
        case 14: goto L_80084164; break;
        case 15: goto L_80083F70; break;
        case 16: goto L_80083F90; break;
        case 17: goto L_80084004; break;
        case 18: goto L_80084174; break;
        case 19: goto L_80084174; break;
        case 20: goto L_80084174; break;
        case 21: goto L_80084174; break;
        case 22: goto L_80083DB4; break;
        case 23: goto L_80083EC0; break;
        default: switch_error(__func__, 0x80083CCC, 0x80096B10);
    }
    // 0x80083CD0: nop

L_80083CD4:
    // 0x80083CD4: jal         0x800842A0
    // 0x80083CD8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    alSeqpProcessNextEvent(rdram, ctx);
        goto after_0;
    // 0x80083CD8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_0:
    // 0x80083CDC: b           L_80084178
    // 0x80083CE0: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
        goto L_80084178;
    // 0x80083CE0: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_80083CE4:
    // 0x80083CE4: addiu       $t7, $zero, 0x9
    ctx->r15 = ADD32(0, 0X9);
    // 0x80083CE8: sh          $t7, 0x6C($sp)
    MEM_H(0X6C, ctx->r29) = ctx->r15;
    // 0x80083CEC: lw          $a2, 0x5C($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X5C);
    // 0x80083CF0: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80083CF4: jal         0x80085580
    // 0x80083CF8: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    alEvtqPostEvent(rdram, ctx);
        goto after_1;
    // 0x80083CF8: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    after_1:
    // 0x80083CFC: b           L_80084178
    // 0x80083D00: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
        goto L_80084178;
    // 0x80083D00: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_80083D04:
    // 0x80083D04: lw          $s0, 0x3C($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X3C);
    // 0x80083D08: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x80083D0C: jal         0x80085810
    // 0x80083D10: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    alSynStopVoice(rdram, ctx);
        goto after_2;
    // 0x80083D10: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
    // 0x80083D14: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x80083D18: jal         0x80085890
    // 0x80083D1C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    alSynFreeVoice(rdram, ctx);
        goto after_3;
    // 0x80083D1C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_3:
    // 0x80083D20: lw          $s1, 0x10($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X10);
    // 0x80083D24: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80083D28: lbu         $t8, 0x37($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X37);
    // 0x80083D2C: beql        $t8, $zero, L_80083D40
    if (ctx->r24 == 0) {
        // 0x80083D30: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_80083D40;
    }
    goto skip_0;
    // 0x80083D30: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    skip_0:
    // 0x80083D34: jal         0x8008533C
    // 0x80083D38: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    __seqpStopOsc(rdram, ctx);
        goto after_4;
    // 0x80083D38: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_4:
    // 0x80083D3C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_80083D40:
    // 0x80083D40: jal         0x80084C94
    // 0x80083D44: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    __unmapVoice(rdram, ctx);
        goto after_5;
    // 0x80083D44: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_5:
    // 0x80083D48: b           L_80084178
    // 0x80083D4C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
        goto L_80084178;
    // 0x80083D4C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_80083D50:
    // 0x80083D50: lw          $s0, 0x3C($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X3C);
    // 0x80083D54: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80083D58: lw          $s1, 0x10($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X10);
    // 0x80083D5C: lbu         $t9, 0x34($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X34);
    // 0x80083D60: bnel        $t9, $zero, L_80083D70
    if (ctx->r25 != 0) {
        // 0x80083D64: lbu         $t1, 0x44($s2)
        ctx->r9 = MEM_BU(ctx->r18, 0X44);
            goto L_80083D70;
    }
    goto skip_1;
    // 0x80083D64: lbu         $t1, 0x44($s2)
    ctx->r9 = MEM_BU(ctx->r18, 0X44);
    skip_1:
    // 0x80083D68: sb          $t0, 0x34($s1)
    MEM_B(0X34, ctx->r17) = ctx->r8;
    // 0x80083D6C: lbu         $t1, 0x44($s2)
    ctx->r9 = MEM_BU(ctx->r18, 0X44);
L_80083D70:
    // 0x80083D70: lw          $s3, 0x40($s2)
    ctx->r19 = MEM_W(ctx->r18, 0X40);
    // 0x80083D74: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80083D78: sb          $t1, 0x30($s1)
    MEM_B(0X30, ctx->r17) = ctx->r9;
    // 0x80083D7C: lw          $t2, 0x1C($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X1C);
    // 0x80083D80: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80083D84: addu        $t3, $t2, $s3
    ctx->r11 = ADD32(ctx->r10, ctx->r19);
    // 0x80083D88: jal         0x80084E80
    // 0x80083D8C: sw          $t3, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r11;
    __vsVol(rdram, ctx);
        goto after_6;
    // 0x80083D8C: sw          $t3, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r11;
    after_6:
    // 0x80083D90: sll         $a2, $v0, 16
    ctx->r6 = S32(ctx->r2 << 16);
    // 0x80083D94: sra         $t4, $a2, 16
    ctx->r12 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80083D98: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    // 0x80083D9C: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x80083DA0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80083DA4: jal         0x80085940
    // 0x80083DA8: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    alSynSetVol(rdram, ctx);
        goto after_7;
    // 0x80083DA8: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    after_7:
    // 0x80083DAC: b           L_80084178
    // 0x80083DB0: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
        goto L_80084178;
    // 0x80083DB0: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_80083DB4:
    // 0x80083DB4: lw          $t9, 0x74($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X74);
    // 0x80083DB8: lw          $s4, 0x40($s2)
    ctx->r20 = MEM_W(ctx->r18, 0X40);
    // 0x80083DBC: lw          $s1, 0x3C($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X3C);
    // 0x80083DC0: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    // 0x80083DC4: jalr        $t9
    // 0x80083DC8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x80083DC8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_8:
    // 0x80083DCC: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x80083DD0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80083DD4: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80083DD8: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80083DDC: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x80083DE0: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80083DE4: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80083DE8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80083DEC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80083DF0: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80083DF4: nop

    // 0x80083DF8: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x80083DFC: beql        $t6, $zero, L_80083E4C
    if (ctx->r14 == 0) {
        // 0x80083E00: mfc1        $t6, $f6
        ctx->r14 = (int32_t)ctx->f6.u32l;
            goto L_80083E4C;
    }
    goto skip_2;
    // 0x80083E00: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    skip_2:
    // 0x80083E04: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80083E08: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80083E0C: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80083E10: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80083E14: nop

    // 0x80083E18: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80083E1C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80083E20: nop

    // 0x80083E24: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x80083E28: bne         $t6, $zero, L_80083E40
    if (ctx->r14 != 0) {
        // 0x80083E2C: nop
    
            goto L_80083E40;
    }
    // 0x80083E2C: nop

    // 0x80083E30: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x80083E34: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80083E38: b           L_80083E58
    // 0x80083E3C: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
        goto L_80083E58;
    // 0x80083E3C: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
L_80083E40:
    // 0x80083E40: b           L_80083E58
    // 0x80083E44: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
        goto L_80083E58;
    // 0x80083E44: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x80083E48: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
L_80083E4C:
    // 0x80083E4C: nop

    // 0x80083E50: bltz        $t6, L_80083E40
    if (SIGNED(ctx->r14) < 0) {
        // 0x80083E54: nop
    
            goto L_80083E40;
    }
    // 0x80083E54: nop

L_80083E58:
    // 0x80083E58: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80083E5C: jal         0x80084E80
    // 0x80083E60: sb          $t6, 0x36($s1)
    MEM_B(0X36, ctx->r17) = ctx->r14;
    __vsVol(rdram, ctx);
        goto after_9;
    // 0x80083E60: sb          $t6, 0x36($s1)
    MEM_B(0X36, ctx->r17) = ctx->r14;
    after_9:
    // 0x80083E64: sll         $s0, $v0, 16
    ctx->r16 = S32(ctx->r2 << 16);
    // 0x80083E68: sra         $t7, $s0, 16
    ctx->r15 = S32(SIGNED(ctx->r16) >> 16);
    // 0x80083E6C: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
    // 0x80083E70: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80083E74: jal         0x80084F08
    // 0x80083E78: lw          $a1, 0x1C($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X1C);
    __vsDelta(rdram, ctx);
        goto after_10;
    // 0x80083E78: lw          $a1, 0x1C($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X1C);
    after_10:
    // 0x80083E7C: sll         $a2, $s0, 16
    ctx->r6 = S32(ctx->r16 << 16);
    // 0x80083E80: sra         $t8, $a2, 16
    ctx->r24 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80083E84: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x80083E88: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x80083E8C: addiu       $a1, $s1, 0x4
    ctx->r5 = ADD32(ctx->r17, 0X4);
    // 0x80083E90: jal         0x80085940
    // 0x80083E94: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    alSynSetVol(rdram, ctx);
        goto after_11;
    // 0x80083E94: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    after_11:
    // 0x80083E98: addiu       $t0, $zero, 0x16
    ctx->r8 = ADD32(0, 0X16);
    // 0x80083E9C: sh          $t0, 0x6C($sp)
    MEM_H(0X6C, ctx->r29) = ctx->r8;
    // 0x80083EA0: sw          $s1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r17;
    // 0x80083EA4: sw          $s4, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r20;
    // 0x80083EA8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80083EAC: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x80083EB0: jal         0x80085580
    // 0x80083EB4: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    alEvtqPostEvent(rdram, ctx);
        goto after_12;
    // 0x80083EB4: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_12:
    // 0x80083EB8: b           L_80084178
    // 0x80083EBC: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
        goto L_80084178;
    // 0x80083EBC: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_80083EC0:
    // 0x80083EC0: lw          $t9, 0x74($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X74);
    // 0x80083EC4: lw          $s4, 0x40($s2)
    ctx->r20 = MEM_W(ctx->r18, 0X40);
    // 0x80083EC8: lw          $s1, 0x3C($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X3C);
    // 0x80083ECC: lbu         $s0, 0x44($s2)
    ctx->r16 = MEM_BU(ctx->r18, 0X44);
    // 0x80083ED0: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    // 0x80083ED4: jalr        $t9
    // 0x80083ED8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_13;
    // 0x80083ED8: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_13:
    // 0x80083EDC: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80083EE0: lwc1        $f16, 0x28($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X28);
    // 0x80083EE4: sll         $t2, $s0, 4
    ctx->r10 = S32(ctx->r16 << 4);
    // 0x80083EE8: swc1        $f8, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->f8.u32l;
    // 0x80083EEC: lwc1        $f18, 0x2C($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X2C);
    // 0x80083EF0: lw          $t1, 0x60($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X60);
    // 0x80083EF4: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x80083EF8: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x80083EFC: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x80083F00: lwc1        $f10, 0xC($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0XC);
    // 0x80083F04: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x80083F08: addiu       $a1, $s1, 0x4
    ctx->r5 = ADD32(ctx->r17, 0X4);
    // 0x80083F0C: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x80083F10: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x80083F14: jal         0x800859E0
    // 0x80083F18: nop

    alSynSetPitch(rdram, ctx);
        goto after_14;
    // 0x80083F18: nop

    after_14:
    // 0x80083F1C: addiu       $t4, $zero, 0x17
    ctx->r12 = ADD32(0, 0X17);
    // 0x80083F20: sh          $t4, 0x6C($sp)
    MEM_H(0X6C, ctx->r29) = ctx->r12;
    // 0x80083F24: sw          $s1, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r17;
    // 0x80083F28: sw          $s4, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r20;
    // 0x80083F2C: sb          $s0, 0x78($sp)
    MEM_B(0X78, ctx->r29) = ctx->r16;
    // 0x80083F30: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80083F34: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x80083F38: jal         0x80085580
    // 0x80083F3C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    alEvtqPostEvent(rdram, ctx);
        goto after_15;
    // 0x80083F3C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_15:
    // 0x80083F40: b           L_80084178
    // 0x80083F44: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
        goto L_80084178;
    // 0x80083F44: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_80083F48:
    // 0x80083F48: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80083F4C: jal         0x80084354
    // 0x80083F50: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    alSeqpSetTempo2(rdram, ctx);
        goto after_16;
    // 0x80083F50: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    after_16:
    // 0x80083F54: b           L_80084178
    // 0x80083F58: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
        goto L_80084178;
    // 0x80083F58: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_80083F5C:
    // 0x80083F5C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80083F60: jal         0x80084BB4
    // 0x80083F64: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    alSeqpHandleTempoEvent(rdram, ctx);
        goto after_17;
    // 0x80083F64: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    after_17:
    // 0x80083F68: b           L_80084178
    // 0x80083F6C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
        goto L_80084178;
    // 0x80083F6C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_80083F70:
    // 0x80083F70: lw          $t5, 0x2C($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X2C);
    // 0x80083F74: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80083F78: beql        $fp, $t5, L_80084178
    if (ctx->r30 == ctx->r13) {
        // 0x80083F7C: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_80084178;
    }
    goto skip_3;
    // 0x80083F7C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    skip_3:
    // 0x80083F80: jal         0x800841C4
    // 0x80083F84: sw          $fp, 0x2C($s2)
    MEM_W(0X2C, ctx->r18) = ctx->r30;
    __postNextSeqEvent(rdram, ctx);
        goto after_18;
    // 0x80083F84: sw          $fp, 0x2C($s2)
    MEM_W(0X2C, ctx->r18) = ctx->r30;
    after_18:
    // 0x80083F88: b           L_80084178
    // 0x80083F8C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
        goto L_80084178;
    // 0x80083F8C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_80083F90:
    // 0x80083F90: lw          $t6, 0x2C($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X2C);
    // 0x80083F94: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80083F98: bnel        $t6, $at, L_80084178
    if (ctx->r14 != ctx->r1) {
        // 0x80083F9C: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_80084178;
    }
    goto skip_4;
    // 0x80083F9C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    skip_4:
    // 0x80083FA0: lw          $s1, 0x64($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X64);
    // 0x80083FA4: beql        $s1, $zero, L_80083FFC
    if (ctx->r17 == 0) {
        // 0x80083FA8: sw          $zero, 0x1C($s2)
        MEM_W(0X1C, ctx->r18) = 0;
            goto L_80083FFC;
    }
    goto skip_5;
    // 0x80083FA8: sw          $zero, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = 0;
    skip_5:
    // 0x80083FAC: addiu       $s0, $s1, 0x4
    ctx->r16 = ADD32(ctx->r17, 0X4);
L_80083FB0:
    // 0x80083FB0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80083FB4: jal         0x80085810
    // 0x80083FB8: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    alSynStopVoice(rdram, ctx);
        goto after_19;
    // 0x80083FB8: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    after_19:
    // 0x80083FBC: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x80083FC0: jal         0x80085890
    // 0x80083FC4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    alSynFreeVoice(rdram, ctx);
        goto after_20;
    // 0x80083FC4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_20:
    // 0x80083FC8: lbu         $t7, 0x37($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X37);
    // 0x80083FCC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80083FD0: beql        $t7, $zero, L_80083FE4
    if (ctx->r15 == 0) {
        // 0x80083FD4: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_80083FE4;
    }
    goto skip_6;
    // 0x80083FD4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    skip_6:
    // 0x80083FD8: jal         0x8008533C
    // 0x80083FDC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    __seqpStopOsc(rdram, ctx);
        goto after_21;
    // 0x80083FDC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_21:
    // 0x80083FE0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_80083FE4:
    // 0x80083FE4: jal         0x80084C94
    // 0x80083FE8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    __unmapVoice(rdram, ctx);
        goto after_22;
    // 0x80083FE8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_22:
    // 0x80083FEC: lw          $s1, 0x64($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X64);
    // 0x80083FF0: bnel        $s1, $zero, L_80083FB0
    if (ctx->r17 != 0) {
        // 0x80083FF4: addiu       $s0, $s1, 0x4
        ctx->r16 = ADD32(ctx->r17, 0X4);
            goto L_80083FB0;
    }
    goto skip_7;
    // 0x80083FF4: addiu       $s0, $s1, 0x4
    ctx->r16 = ADD32(ctx->r17, 0X4);
    skip_7:
    // 0x80083FF8: sw          $zero, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = 0;
L_80083FFC:
    // 0x80083FFC: b           L_80084174
    // 0x80084000: sw          $zero, 0x2C($s2)
    MEM_W(0X2C, ctx->r18) = 0;
        goto L_80084174;
    // 0x80084000: sw          $zero, 0x2C($s2)
    MEM_W(0X2C, ctx->r18) = 0;
L_80084004:
    // 0x80084004: lw          $t8, 0x2C($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X2C);
    // 0x80084008: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x8008400C: bnel        $fp, $t8, L_80084178
    if (ctx->r30 != ctx->r24) {
        // 0x80084010: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_80084178;
    }
    goto skip_8;
    // 0x80084010: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    skip_8:
    // 0x80084014: jal         0x80085710
    // 0x80084018: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    alEvtqFlushType(rdram, ctx);
        goto after_23;
    // 0x80084018: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_23:
    // 0x8008401C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80084020: jal         0x80085710
    // 0x80084024: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    alEvtqFlushType(rdram, ctx);
        goto after_24;
    // 0x80084024: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_24:
    // 0x80084028: lw          $s1, 0x64($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X64);
    // 0x8008402C: beql        $s1, $zero, L_8008406C
    if (ctx->r17 == 0) {
        // 0x80084030: addiu       $t0, $zero, 0x2
        ctx->r8 = ADD32(0, 0X2);
            goto L_8008406C;
    }
    goto skip_9;
    // 0x80084030: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    skip_9:
    // 0x80084034: addiu       $s0, $s1, 0x4
    ctx->r16 = ADD32(ctx->r17, 0X4);
L_80084038:
    // 0x80084038: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8008403C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80084040: jal         0x800850A0
    // 0x80084044: ori         $a2, $zero, 0xC350
    ctx->r6 = 0 | 0XC350;
    __voiceNeedsNoteKill(rdram, ctx);
        goto after_25;
    // 0x80084044: ori         $a2, $zero, 0xC350
    ctx->r6 = 0 | 0XC350;
    after_25:
    // 0x80084048: beq         $v0, $zero, L_8008405C
    if (ctx->r2 == 0) {
        // 0x8008404C: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_8008405C;
    }
    // 0x8008404C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80084050: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80084054: jal         0x80084F74
    // 0x80084058: ori         $a2, $zero, 0xC350
    ctx->r6 = 0 | 0XC350;
    __seqpReleaseVoice(rdram, ctx);
        goto after_26;
    // 0x80084058: ori         $a2, $zero, 0xC350
    ctx->r6 = 0 | 0XC350;
    after_26:
L_8008405C:
    // 0x8008405C: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
    // 0x80084060: bnel        $s1, $zero, L_80084038
    if (ctx->r17 != 0) {
        // 0x80084064: addiu       $s0, $s1, 0x4
        ctx->r16 = ADD32(ctx->r17, 0X4);
            goto L_80084038;
    }
    goto skip_10;
    // 0x80084064: addiu       $s0, $s1, 0x4
    ctx->r16 = ADD32(ctx->r17, 0X4);
    skip_10:
    // 0x80084068: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
L_8008406C:
    // 0x8008406C: sw          $t0, 0x2C($s2)
    MEM_W(0X2C, ctx->r18) = ctx->r8;
    // 0x80084070: addiu       $t9, $zero, 0x10
    ctx->r25 = ADD32(0, 0X10);
    // 0x80084074: lui         $a2, 0x7FFF
    ctx->r6 = S32(0X7FFF << 16);
    // 0x80084078: sh          $t9, 0x6C($sp)
    MEM_H(0X6C, ctx->r29) = ctx->r25;
    // 0x8008407C: ori         $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 | 0XFFFF;
    // 0x80084080: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80084084: jal         0x80085580
    // 0x80084088: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    alEvtqPostEvent(rdram, ctx);
        goto after_27;
    // 0x80084088: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    after_27:
    // 0x8008408C: b           L_80084178
    // 0x80084090: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
        goto L_80084178;
    // 0x80084090: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_80084094:
    // 0x80084094: lw          $s1, 0x64($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X64);
    // 0x80084098: lh          $t1, 0x3C($s2)
    ctx->r9 = MEM_H(ctx->r18, 0X3C);
    // 0x8008409C: beq         $s1, $zero, L_80084174
    if (ctx->r17 == 0) {
        // 0x800840A0: sh          $t1, 0x32($s2)
        MEM_H(0X32, ctx->r18) = ctx->r9;
            goto L_80084174;
    }
    // 0x800840A0: sh          $t1, 0x32($s2)
    MEM_H(0X32, ctx->r18) = ctx->r9;
    // 0x800840A4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_800840A8:
    // 0x800840A8: jal         0x80084E80
    // 0x800840AC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    __vsVol(rdram, ctx);
        goto after_28;
    // 0x800840AC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_28:
    // 0x800840B0: sll         $s0, $v0, 16
    ctx->r16 = S32(ctx->r2 << 16);
    // 0x800840B4: sra         $t2, $s0, 16
    ctx->r10 = S32(SIGNED(ctx->r16) >> 16);
    // 0x800840B8: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
    // 0x800840BC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800840C0: jal         0x80084F08
    // 0x800840C4: lw          $a1, 0x1C($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X1C);
    __vsDelta(rdram, ctx);
        goto after_29;
    // 0x800840C4: lw          $a1, 0x1C($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X1C);
    after_29:
    // 0x800840C8: sll         $a2, $s0, 16
    ctx->r6 = S32(ctx->r16 << 16);
    // 0x800840CC: sra         $t3, $a2, 16
    ctx->r11 = S32(SIGNED(ctx->r6) >> 16);
    // 0x800840D0: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    // 0x800840D4: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x800840D8: addiu       $a1, $s1, 0x4
    ctx->r5 = ADD32(ctx->r17, 0X4);
    // 0x800840DC: jal         0x80085940
    // 0x800840E0: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    alSynSetVol(rdram, ctx);
        goto after_30;
    // 0x800840E0: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    after_30:
    // 0x800840E4: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
    // 0x800840E8: bnel        $s1, $zero, L_800840A8
    if (ctx->r17 != 0) {
        // 0x800840EC: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_800840A8;
    }
    goto skip_11;
    // 0x800840EC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_11:
    // 0x800840F0: b           L_80084178
    // 0x800840F4: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
        goto L_80084178;
    // 0x800840F4: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_800840F8:
    // 0x800840F8: lw          $t4, 0x3C($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X3C);
    // 0x800840FC: lw          $t5, 0x40($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X40);
    // 0x80084100: lw          $t6, 0x44($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X44);
    // 0x80084104: sw          $t4, 0x7C($s2)
    MEM_W(0X7C, ctx->r18) = ctx->r12;
    // 0x80084108: sw          $t5, 0x80($s2)
    MEM_W(0X80, ctx->r18) = ctx->r13;
    // 0x8008410C: b           L_80084174
    // 0x80084110: sw          $t6, 0x84($s2)
    MEM_W(0X84, ctx->r18) = ctx->r14;
        goto L_80084174;
    // 0x80084110: sw          $t6, 0x84($s2)
    MEM_W(0X84, ctx->r18) = ctx->r14;
L_80084114:
    // 0x80084114: lbu         $s0, 0x3C($s2)
    ctx->r16 = MEM_BU(ctx->r18, 0X3C);
    // 0x80084118: lw          $t8, 0x60($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X60);
    // 0x8008411C: lbu         $t7, 0x3D($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0X3D);
    // 0x80084120: sll         $t0, $s0, 4
    ctx->r8 = S32(ctx->r16 << 4);
    // 0x80084124: addu        $t9, $t8, $t0
    ctx->r25 = ADD32(ctx->r24, ctx->r8);
    // 0x80084128: b           L_80084174
    // 0x8008412C: sb          $t7, 0x8($t9)
    MEM_B(0X8, ctx->r25) = ctx->r15;
        goto L_80084174;
    // 0x8008412C: sb          $t7, 0x8($t9)
    MEM_B(0X8, ctx->r25) = ctx->r15;
L_80084130:
    // 0x80084130: lw          $t1, 0x3C($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X3C);
    // 0x80084134: lui         $a1, 0x48F4
    ctx->r5 = S32(0X48F4 << 16);
    // 0x80084138: ori         $a1, $a1, 0x2400
    ctx->r5 = ctx->r5 | 0X2400;
    // 0x8008413C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80084140: jal         0x80085440
    // 0x80084144: sw          $t1, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r9;
    alSeqpCalcUspt(rdram, ctx);
        goto after_31;
    // 0x80084144: sw          $t1, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r9;
    after_31:
    // 0x80084148: lw          $a1, 0x20($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X20);
    // 0x8008414C: beql        $a1, $zero, L_80084178
    if (ctx->r5 == 0) {
        // 0x80084150: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_80084178;
    }
    goto skip_12;
    // 0x80084150: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    skip_12:
    // 0x80084154: jal         0x80085144
    // 0x80084158: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    __initFromBank(rdram, ctx);
        goto after_32;
    // 0x80084158: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_32:
    // 0x8008415C: b           L_80084178
    // 0x80084160: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
        goto L_80084178;
    // 0x80084160: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_80084164:
    // 0x80084164: lw          $a1, 0x3C($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X3C);
    // 0x80084168: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8008416C: jal         0x80085144
    // 0x80084170: sw          $a1, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->r5;
    __initFromBank(rdram, ctx);
        goto after_33;
    // 0x80084170: sw          $a1, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->r5;
    after_33:
L_80084174:
    // 0x80084174: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_80084178:
    // 0x80084178: jal         0x800854F4
    // 0x8008417C: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    alEvtqNextEvent(rdram, ctx);
        goto after_34;
    // 0x8008417C: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    after_34:
    // 0x80084180: beq         $v0, $zero, L_80083CB0
    if (ctx->r2 == 0) {
        // 0x80084184: sw          $v0, 0x28($s2)
        MEM_W(0X28, ctx->r18) = ctx->r2;
            goto L_80083CB0;
    }
    // 0x80084184: sw          $v0, 0x28($s2)
    MEM_W(0X28, ctx->r18) = ctx->r2;
    // 0x80084188: lw          $t2, 0x1C($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X1C);
    // 0x8008418C: addu        $t3, $t2, $v0
    ctx->r11 = ADD32(ctx->r10, ctx->r2);
    // 0x80084190: sw          $t3, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r11;
    // 0x80084194: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80084198: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8008419C: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x800841A0: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x800841A4: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x800841A8: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x800841AC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x800841B0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800841B4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800841B8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800841BC: jr          $ra
    // 0x800841C0: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x800841C0: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void __postNextSeqEvent(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800841C4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800841C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800841CC: lw          $t6, 0x2C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X2C);
    // 0x800841D0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800841D4: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x800841D8: bne         $t6, $at, L_80084290
    if (ctx->r14 != ctx->r1) {
        // 0x800841DC: lw          $a2, 0x18($a0)
        ctx->r6 = MEM_W(ctx->r4, 0X18);
            goto L_80084290;
    }
    // 0x800841DC: lw          $a2, 0x18($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X18);
    // 0x800841E0: beq         $a2, $zero, L_80084290
    if (ctx->r6 == 0) {
        // 0x800841E4: or          $a0, $a2, $zero
        ctx->r4 = ctx->r6 | 0;
            goto L_80084290;
    }
    // 0x800841E4: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x800841E8: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x800841EC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x800841F0: jal         0x8008987C
    // 0x800841F4: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    __alSeqNextDelta(rdram, ctx);
        goto after_0;
    // 0x800841F4: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    after_0:
    // 0x800841F8: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x800841FC: beq         $v0, $zero, L_80084290
    if (ctx->r2 == 0) {
        // 0x80084200: lw          $a3, 0x38($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X38);
            goto L_80084290;
    }
    // 0x80084200: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x80084204: lw          $t7, 0x84($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X84);
    // 0x80084208: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x8008420C: beql        $t7, $zero, L_80084270
    if (ctx->r15 == 0) {
        // 0x80084210: sh          $zero, 0x28($sp)
        MEM_H(0X28, ctx->r29) = 0;
            goto L_80084270;
    }
    goto skip_0;
    // 0x80084210: sh          $zero, 0x28($sp)
    MEM_H(0X28, ctx->r29) = 0;
    skip_0:
    // 0x80084214: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80084218: jal         0x80089B38
    // 0x8008421C: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    alSeqGetTicks(rdram, ctx);
        goto after_1;
    // 0x8008421C: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    after_1:
    // 0x80084220: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x80084224: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80084228: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x8008422C: lw          $t0, 0x80($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X80);
    // 0x80084230: addu        $t9, $v0, $t8
    ctx->r25 = ADD32(ctx->r2, ctx->r24);
    // 0x80084234: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x80084238: lw          $t1, 0x8($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X8);
    // 0x8008423C: slt         $at, $t9, $t1
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x80084240: bnel        $at, $zero, L_80084270
    if (ctx->r1 != 0) {
        // 0x80084244: sh          $zero, 0x28($sp)
        MEM_H(0X28, ctx->r29) = 0;
            goto L_80084270;
    }
    goto skip_1;
    // 0x80084244: sh          $zero, 0x28($sp)
    MEM_H(0X28, ctx->r29) = 0;
    skip_1:
    // 0x80084248: lw          $a1, 0x7C($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X7C);
    // 0x8008424C: jal         0x80089B40
    // 0x80084250: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    alSeqSetLoc(rdram, ctx);
        goto after_2;
    // 0x80084250: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    after_2:
    // 0x80084254: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x80084258: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8008425C: lw          $v0, 0x84($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X84);
    // 0x80084260: beq         $v0, $at, L_8008426C
    if (ctx->r2 == ctx->r1) {
        // 0x80084264: addiu       $t2, $v0, -0x1
        ctx->r10 = ADD32(ctx->r2, -0X1);
            goto L_8008426C;
    }
    // 0x80084264: addiu       $t2, $v0, -0x1
    ctx->r10 = ADD32(ctx->r2, -0X1);
    // 0x80084268: sw          $t2, 0x84($a3)
    MEM_W(0X84, ctx->r7) = ctx->r10;
L_8008426C:
    // 0x8008426C: sh          $zero, 0x28($sp)
    MEM_H(0X28, ctx->r29) = 0;
L_80084270:
    // 0x80084270: lw          $t3, 0x24($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X24);
    // 0x80084274: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80084278: addiu       $a0, $a3, 0x48
    ctx->r4 = ADD32(ctx->r7, 0X48);
    // 0x8008427C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x80084280: multu       $t3, $t4
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80084284: mflo        $a2
    ctx->r6 = lo;
    // 0x80084288: jal         0x80085580
    // 0x8008428C: nop

    alEvtqPostEvent(rdram, ctx);
        goto after_3;
    // 0x8008428C: nop

    after_3:
L_80084290:
    // 0x80084290: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80084294: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80084298: jr          $ra
    // 0x8008429C: nop

    return;
    // 0x8008429C: nop

;}
RECOMP_FUNC void alSeqpProcessNextEvent(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800842A0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800842A4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800842A8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800842AC: lw          $a2, 0x18($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X18);
    // 0x800842B0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800842B4: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x800842B8: beql        $a2, $zero, L_80084344
    if (ctx->r6 == 0) {
        // 0x800842BC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80084344;
    }
    goto skip_0;
    // 0x800842BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x800842C0: jal         0x80089710
    // 0x800842C4: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    alSeqNextEvent(rdram, ctx);
        goto after_0;
    // 0x800842C4: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
    // 0x800842C8: lh          $v0, 0x28($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X28);
    // 0x800842CC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800842D0: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x800842D4: beq         $v0, $at, L_800842F4
    if (ctx->r2 == ctx->r1) {
        // 0x800842D8: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_800842F4;
    }
    // 0x800842D8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800842DC: beq         $v0, $at, L_8008430C
    if (ctx->r2 == ctx->r1) {
        // 0x800842E0: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_8008430C;
    }
    // 0x800842E0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x800842E4: beq         $v0, $at, L_80084324
    if (ctx->r2 == ctx->r1) {
        // 0x800842E8: addiu       $t6, $zero, 0x2
        ctx->r14 = ADD32(0, 0X2);
            goto L_80084324;
    }
    // 0x800842E8: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x800842EC: b           L_80084344
    // 0x800842F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80084344;
    // 0x800842F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800842F4:
    // 0x800842F4: jal         0x80084354
    // 0x800842F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    alSeqpSetTempo2(rdram, ctx);
        goto after_1;
    // 0x800842F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x800842FC: jal         0x800841C4
    // 0x80084300: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    __postNextSeqEvent(rdram, ctx);
        goto after_2;
    // 0x80084300: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80084304: b           L_80084344
    // 0x80084308: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80084344;
    // 0x80084308: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8008430C:
    // 0x8008430C: jal         0x80084BB4
    // 0x80084310: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    alSeqpHandleTempoEvent(rdram, ctx);
        goto after_3;
    // 0x80084310: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80084314: jal         0x800841C4
    // 0x80084318: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    __postNextSeqEvent(rdram, ctx);
        goto after_4;
    // 0x80084318: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8008431C: b           L_80084344
    // 0x80084320: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80084344;
    // 0x80084320: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80084324:
    // 0x80084324: sw          $t6, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r14;
    // 0x80084328: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x8008432C: lui         $a2, 0x7FFF
    ctx->r6 = S32(0X7FFF << 16);
    // 0x80084330: sh          $t7, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r15;
    // 0x80084334: ori         $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 | 0XFFFF;
    // 0x80084338: jal         0x80085580
    // 0x8008433C: addiu       $a0, $s0, 0x48
    ctx->r4 = ADD32(ctx->r16, 0X48);
    alEvtqPostEvent(rdram, ctx);
        goto after_5;
    // 0x8008433C: addiu       $a0, $s0, 0x48
    ctx->r4 = ADD32(ctx->r16, 0X48);
    after_5:
    // 0x80084340: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80084344:
    // 0x80084344: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80084348: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8008434C: jr          $ra
    // 0x80084350: nop

    return;
    // 0x80084350: nop

;}
RECOMP_FUNC void alSeqpSetTempo2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80084354: addiu       $sp, $sp, -0xC8
    ctx->r29 = ADD32(ctx->r29, -0XC8);
    // 0x80084358: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8008435C: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80084360: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80084364: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80084368: lbu         $a3, 0x8($a1)
    ctx->r7 = MEM_BU(ctx->r5, 0X8);
    // 0x8008436C: lbu         $t7, 0x9($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X9);
    // 0x80084370: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80084374: andi        $v1, $a3, 0xF0
    ctx->r3 = ctx->r7 & 0XF0;
    // 0x80084378: sb          $t7, 0xBA($sp)
    MEM_B(0XBA, ctx->r29) = ctx->r15;
    // 0x8008437C: lbu         $t8, 0xA($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0XA);
    // 0x80084380: addiu       $t9, $v1, -0x80
    ctx->r25 = ADD32(ctx->r3, -0X80);
    // 0x80084384: sltiu       $at, $t9, 0x61
    ctx->r1 = ctx->r25 < 0X61 ? 1 : 0;
    // 0x80084388: andi        $t6, $a3, 0xF
    ctx->r14 = ctx->r7 & 0XF;
    // 0x8008438C: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x80084390: beq         $at, $zero, L_80084B9C
    if (ctx->r1 == 0) {
        // 0x80084394: sb          $t8, 0xB9($sp)
        MEM_B(0XB9, ctx->r29) = ctx->r24;
            goto L_80084B9C;
    }
    // 0x80084394: sb          $t8, 0xB9($sp)
    MEM_B(0XB9, ctx->r29) = ctx->r24;
    // 0x80084398: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8008439C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800843A0: addu        $at, $at, $t9
    gpr jr_addend_800843A8 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800843A4: lw          $t9, 0x6B70($at)
    ctx->r25 = ADD32(ctx->r1, 0X6B70);
    // 0x800843A8: jr          $t9
    // 0x800843AC: nop

    switch (jr_addend_800843A8 >> 2) {
        case 0: goto L_80084740; break;
        case 1: goto L_80084B9C; break;
        case 2: goto L_80084B9C; break;
        case 3: goto L_80084B9C; break;
        case 4: goto L_80084B9C; break;
        case 5: goto L_80084B9C; break;
        case 6: goto L_80084B9C; break;
        case 7: goto L_80084B9C; break;
        case 8: goto L_80084B9C; break;
        case 9: goto L_80084B9C; break;
        case 10: goto L_80084B9C; break;
        case 11: goto L_80084B9C; break;
        case 12: goto L_80084B9C; break;
        case 13: goto L_80084B9C; break;
        case 14: goto L_80084B9C; break;
        case 15: goto L_80084B9C; break;
        case 16: goto L_800843B0; break;
        case 17: goto L_80084B9C; break;
        case 18: goto L_80084B9C; break;
        case 19: goto L_80084B9C; break;
        case 20: goto L_80084B9C; break;
        case 21: goto L_80084B9C; break;
        case 22: goto L_80084B9C; break;
        case 23: goto L_80084B9C; break;
        case 24: goto L_80084B9C; break;
        case 25: goto L_80084B9C; break;
        case 26: goto L_80084B9C; break;
        case 27: goto L_80084B9C; break;
        case 28: goto L_80084B9C; break;
        case 29: goto L_80084B9C; break;
        case 30: goto L_80084B9C; break;
        case 31: goto L_80084B9C; break;
        case 32: goto L_80084798; break;
        case 33: goto L_80084B9C; break;
        case 34: goto L_80084B9C; break;
        case 35: goto L_80084B9C; break;
        case 36: goto L_80084B9C; break;
        case 37: goto L_80084B9C; break;
        case 38: goto L_80084B9C; break;
        case 39: goto L_80084B9C; break;
        case 40: goto L_80084B9C; break;
        case 41: goto L_80084B9C; break;
        case 42: goto L_80084B9C; break;
        case 43: goto L_80084B9C; break;
        case 44: goto L_80084B9C; break;
        case 45: goto L_80084B9C; break;
        case 46: goto L_80084B9C; break;
        case 47: goto L_80084B9C; break;
        case 48: goto L_80084854; break;
        case 49: goto L_80084B9C; break;
        case 50: goto L_80084B9C; break;
        case 51: goto L_80084B9C; break;
        case 52: goto L_80084B9C; break;
        case 53: goto L_80084B9C; break;
        case 54: goto L_80084B9C; break;
        case 55: goto L_80084B9C; break;
        case 56: goto L_80084B9C; break;
        case 57: goto L_80084B9C; break;
        case 58: goto L_80084B9C; break;
        case 59: goto L_80084B9C; break;
        case 60: goto L_80084B9C; break;
        case 61: goto L_80084B9C; break;
        case 62: goto L_80084B9C; break;
        case 63: goto L_80084B9C; break;
        case 64: goto L_80084AB8; break;
        case 65: goto L_80084B9C; break;
        case 66: goto L_80084B9C; break;
        case 67: goto L_80084B9C; break;
        case 68: goto L_80084B9C; break;
        case 69: goto L_80084B9C; break;
        case 70: goto L_80084B9C; break;
        case 71: goto L_80084B9C; break;
        case 72: goto L_80084B9C; break;
        case 73: goto L_80084B9C; break;
        case 74: goto L_80084B9C; break;
        case 75: goto L_80084B9C; break;
        case 76: goto L_80084B9C; break;
        case 77: goto L_80084B9C; break;
        case 78: goto L_80084B9C; break;
        case 79: goto L_80084B9C; break;
        case 80: goto L_800847F0; break;
        case 81: goto L_80084B9C; break;
        case 82: goto L_80084B9C; break;
        case 83: goto L_80084B9C; break;
        case 84: goto L_80084B9C; break;
        case 85: goto L_80084B9C; break;
        case 86: goto L_80084B9C; break;
        case 87: goto L_80084B9C; break;
        case 88: goto L_80084B9C; break;
        case 89: goto L_80084B9C; break;
        case 90: goto L_80084B9C; break;
        case 91: goto L_80084B9C; break;
        case 92: goto L_80084B9C; break;
        case 93: goto L_80084B9C; break;
        case 94: goto L_80084B9C; break;
        case 95: goto L_80084B9C; break;
        case 96: goto L_80084AEC; break;
        default: switch_error(__func__, 0x800843A8, 0x80096B70);
    }
    // 0x800843AC: nop

L_800843B0:
    // 0x800843B0: lbu         $t0, 0xB9($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0XB9);
    // 0x800843B4: beql        $t0, $zero, L_80084744
    if (ctx->r8 == 0) {
        // 0x800843B8: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80084744;
    }
    goto skip_0;
    // 0x800843B8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_0:
    // 0x800843BC: lw          $t1, 0x2C($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X2C);
    // 0x800843C0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800843C4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800843C8: bne         $t1, $at, L_80084B9C
    if (ctx->r9 != ctx->r1) {
        // 0x800843CC: lbu         $a1, 0xBA($sp)
        ctx->r5 = MEM_BU(ctx->r29, 0XBA);
            goto L_80084B9C;
    }
    // 0x800843CC: lbu         $a1, 0xBA($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0XBA);
    // 0x800843D0: andi        $a2, $t0, 0xFF
    ctx->r6 = ctx->r8 & 0XFF;
    // 0x800843D4: jal         0x80084D78
    // 0x800843D8: sb          $a3, 0xBB($sp)
    MEM_B(0XBB, ctx->r29) = ctx->r7;
    __lookupSoundQuick(rdram, ctx);
        goto after_0;
    // 0x800843D8: sb          $a3, 0xBB($sp)
    MEM_B(0XBB, ctx->r29) = ctx->r7;
    after_0:
    // 0x800843DC: beq         $v0, $zero, L_80084B9C
    if (ctx->r2 == 0) {
        // 0x800843E0: sw          $v0, 0x80($sp)
        MEM_W(0X80, ctx->r29) = ctx->r2;
            goto L_80084B9C;
    }
    // 0x800843E0: sw          $v0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r2;
    // 0x800843E4: lbu         $a3, 0xBB($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0XBB);
    // 0x800843E8: lw          $t2, 0x60($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X60);
    // 0x800843EC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800843F0: sll         $v0, $a3, 4
    ctx->r2 = S32(ctx->r7 << 4);
    // 0x800843F4: addu        $t3, $t2, $v0
    ctx->r11 = ADD32(ctx->r10, ctx->r2);
    // 0x800843F8: lbu         $t4, 0x8($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X8);
    // 0x800843FC: sh          $zero, 0x86($sp)
    MEM_H(0X86, ctx->r29) = 0;
    // 0x80084400: sb          $zero, 0x88($sp)
    MEM_B(0X88, ctx->r29) = 0;
    // 0x80084404: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    // 0x80084408: lbu         $a1, 0xBA($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0XBA);
    // 0x8008440C: lbu         $a2, 0xB9($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0XB9);
    // 0x80084410: jal         0x80084C24
    // 0x80084414: sh          $t4, 0x84($sp)
    MEM_H(0X84, ctx->r29) = ctx->r12;
    __mapVoice(rdram, ctx);
        goto after_1;
    // 0x80084414: sh          $t4, 0x84($sp)
    MEM_H(0X84, ctx->r29) = ctx->r12;
    after_1:
    // 0x80084418: beq         $v0, $zero, L_80084B9C
    if (ctx->r2 == 0) {
        // 0x8008441C: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80084B9C;
    }
    // 0x8008441C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80084420: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x80084424: addiu       $a1, $v0, 0x4
    ctx->r5 = ADD32(ctx->r2, 0X4);
    // 0x80084428: sw          $a1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r5;
    // 0x8008442C: jal         0x80085A70
    // 0x80084430: addiu       $a2, $sp, 0x84
    ctx->r6 = ADD32(ctx->r29, 0X84);
    alSynAllocVoice(rdram, ctx);
        goto after_2;
    // 0x80084430: addiu       $a2, $sp, 0x84
    ctx->r6 = ADD32(ctx->r29, 0X84);
    after_2:
    // 0x80084434: lw          $v1, 0x80($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X80);
    // 0x80084438: sb          $zero, 0x34($s0)
    MEM_B(0X34, ctx->r16) = 0;
    // 0x8008443C: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x80084440: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80084444: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x80084448: lw          $t5, 0x60($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X60);
    // 0x8008444C: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x80084450: lbu         $t8, 0xB($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0XB);
    // 0x80084454: slti        $at, $t8, 0x40
    ctx->r1 = SIGNED(ctx->r24) < 0X40 ? 1 : 0;
    // 0x80084458: bnel        $at, $zero, L_8008446C
    if (ctx->r1 != 0) {
        // 0x8008445C: sb          $zero, 0x35($s0)
        MEM_B(0X35, ctx->r16) = 0;
            goto L_8008446C;
    }
    goto skip_1;
    // 0x8008445C: sb          $zero, 0x35($s0)
    MEM_B(0X35, ctx->r16) = 0;
    skip_1:
    // 0x80084460: b           L_8008446C
    // 0x80084464: sb          $t9, 0x35($s0)
    MEM_B(0X35, ctx->r16) = ctx->r25;
        goto L_8008446C;
    // 0x80084464: sb          $t9, 0x35($s0)
    MEM_B(0X35, ctx->r16) = ctx->r25;
    // 0x80084468: sb          $zero, 0x35($s0)
    MEM_B(0X35, ctx->r16) = 0;
L_8008446C:
    // 0x8008446C: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x80084470: lbu         $t0, 0xBA($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0XBA);
    // 0x80084474: lbu         $t1, 0x4($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X4);
    // 0x80084478: lb          $t4, 0x5($v0)
    ctx->r12 = MEM_B(ctx->r2, 0X5);
    // 0x8008447C: subu        $t2, $t0, $t1
    ctx->r10 = SUB32(ctx->r8, ctx->r9);
    // 0x80084480: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80084484: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x80084488: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x8008448C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80084490: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80084494: addu        $a0, $t3, $t4
    ctx->r4 = ADD32(ctx->r11, ctx->r12);
    // 0x80084498: sll         $t5, $a0, 16
    ctx->r13 = S32(ctx->r4 << 16);
    // 0x8008449C: jal         0x8007D100
    // 0x800844A0: sra         $a0, $t5, 16
    ctx->r4 = S32(SIGNED(ctx->r13) >> 16);
    func_8007D100(rdram, ctx);
        goto after_3;
    // 0x800844A0: sra         $a0, $t5, 16
    ctx->r4 = S32(SIGNED(ctx->r13) >> 16);
    after_3:
    // 0x800844A4: swc1        $f0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f0.u32l;
    // 0x800844A8: lw          $t7, 0x80($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X80);
    // 0x800844AC: lui         $at, 0x42FE
    ctx->r1 = S32(0X42FE << 16);
    // 0x800844B0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800844B4: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x800844B8: lbu         $t9, 0xC($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0XC);
    // 0x800844BC: sb          $t9, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r25;
    // 0x800844C0: lw          $t1, 0x80($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X80);
    // 0x800844C4: lw          $t0, 0x1C($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X1C);
    // 0x800844C8: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x800844CC: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x800844D0: sb          $zero, 0x37($s0)
    MEM_B(0X37, ctx->r16) = 0;
    // 0x800844D4: addu        $t4, $t0, $t3
    ctx->r12 = ADD32(ctx->r8, ctx->r11);
    // 0x800844D8: sw          $t4, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r12;
    // 0x800844DC: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x800844E0: lw          $t5, 0x60($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X60);
    // 0x800844E4: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x800844E8: lw          $s2, 0x0($t7)
    ctx->r18 = MEM_W(ctx->r15, 0X0);
    // 0x800844EC: swc1        $f4, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f4.u32l;
    // 0x800844F0: lbu         $a2, 0x4($s2)
    ctx->r6 = MEM_BU(ctx->r18, 0X4);
    // 0x800844F4: beql        $a2, $zero, L_80084560
    if (ctx->r6 == 0) {
        // 0x800844F8: cfc1        $t4, $FpcCsr
        ctx->r12 = get_cop1_cs();
            goto L_80084560;
    }
    goto skip_2;
    // 0x800844F8: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    skip_2:
    // 0x800844FC: lw          $v0, 0x70($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X70);
    // 0x80084500: beql        $v0, $zero, L_80084560
    if (ctx->r2 == 0) {
        // 0x80084504: cfc1        $t4, $FpcCsr
        ctx->r12 = get_cop1_cs();
            goto L_80084560;
    }
    goto skip_3;
    // 0x80084504: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    skip_3:
    // 0x80084508: lbu         $t8, 0x6($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0X6);
    // 0x8008450C: lbu         $a3, 0x5($s2)
    ctx->r7 = MEM_BU(ctx->r18, 0X5);
    // 0x80084510: addiu       $a0, $sp, 0x6C
    ctx->r4 = ADD32(ctx->r29, 0X6C);
    // 0x80084514: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80084518: lbu         $t9, 0x7($s2)
    ctx->r25 = MEM_BU(ctx->r18, 0X7);
    // 0x8008451C: addiu       $a1, $sp, 0x74
    ctx->r5 = ADD32(ctx->r29, 0X74);
    // 0x80084520: jalr        $v0
    // 0x80084524: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x80084524: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    after_4:
    // 0x80084528: beq         $v0, $zero, L_8008455C
    if (ctx->r2 == 0) {
        // 0x8008452C: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_8008455C;
    }
    // 0x8008452C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x80084530: lw          $t2, 0x6C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X6C);
    // 0x80084534: addiu       $t1, $zero, 0x16
    ctx->r9 = ADD32(0, 0X16);
    // 0x80084538: sh          $t1, 0x9C($sp)
    MEM_H(0X9C, ctx->r29) = ctx->r9;
    // 0x8008453C: sw          $s0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r16;
    // 0x80084540: addiu       $a0, $s1, 0x48
    ctx->r4 = ADD32(ctx->r17, 0X48);
    // 0x80084544: addiu       $a1, $sp, 0x9C
    ctx->r5 = ADD32(ctx->r29, 0X9C);
    // 0x80084548: jal         0x80085580
    // 0x8008454C: sw          $t2, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r10;
    alEvtqPostEvent(rdram, ctx);
        goto after_5;
    // 0x8008454C: sw          $t2, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r10;
    after_5:
    // 0x80084550: lbu         $t0, 0x37($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X37);
    // 0x80084554: ori         $t3, $t0, 0x1
    ctx->r11 = ctx->r8 | 0X1;
    // 0x80084558: sb          $t3, 0x37($s0)
    MEM_B(0X37, ctx->r16) = ctx->r11;
L_8008455C:
    // 0x8008455C: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
L_80084560:
    // 0x80084560: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80084564: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80084568: lwc1        $f6, 0x74($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X74);
    // 0x8008456C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80084570: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80084574: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x80084578: nop

    // 0x8008457C: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x80084580: beql        $t5, $zero, L_800845D0
    if (ctx->r13 == 0) {
        // 0x80084584: mfc1        $t5, $f8
        ctx->r13 = (int32_t)ctx->f8.u32l;
            goto L_800845D0;
    }
    goto skip_4;
    // 0x80084584: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
    skip_4:
    // 0x80084588: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8008458C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80084590: sub.s       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80084594: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80084598: nop

    // 0x8008459C: cvt.w.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_S(ctx->f8.fl);
    // 0x800845A0: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x800845A4: nop

    // 0x800845A8: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x800845AC: bne         $t5, $zero, L_800845C4
    if (ctx->r13 != 0) {
        // 0x800845B0: nop
    
            goto L_800845C4;
    }
    // 0x800845B0: nop

    // 0x800845B4: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
    // 0x800845B8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800845BC: b           L_800845DC
    // 0x800845C0: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
        goto L_800845DC;
    // 0x800845C0: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
L_800845C4:
    // 0x800845C4: b           L_800845DC
    // 0x800845C8: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
        goto L_800845DC;
    // 0x800845C8: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x800845CC: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
L_800845D0:
    // 0x800845D0: nop

    // 0x800845D4: bltz        $t5, L_800845C4
    if (SIGNED(ctx->r13) < 0) {
        // 0x800845D8: nop
    
            goto L_800845C4;
    }
    // 0x800845D8: nop

L_800845DC:
    // 0x800845DC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800845E0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800845E4: sb          $t5, 0x36($s0)
    MEM_B(0X36, ctx->r16) = ctx->r13;
    // 0x800845E8: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x800845EC: swc1        $f10, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f10.u32l;
    // 0x800845F0: lbu         $a2, 0x8($s2)
    ctx->r6 = MEM_BU(ctx->r18, 0X8);
    // 0x800845F4: addiu       $t6, $s1, 0x48
    ctx->r14 = ADD32(ctx->r17, 0X48);
    // 0x800845F8: sw          $t6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r14;
    // 0x800845FC: beql        $a2, $zero, L_80084670
    if (ctx->r6 == 0) {
        // 0x80084600: lwc1        $f16, 0x74($sp)
        ctx->f16.u32l = MEM_W(ctx->r29, 0X74);
            goto L_80084670;
    }
    goto skip_5;
    // 0x80084600: lwc1        $f16, 0x74($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X74);
    skip_5:
    // 0x80084604: lw          $v0, 0x70($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X70);
    // 0x80084608: beql        $v0, $zero, L_80084670
    if (ctx->r2 == 0) {
        // 0x8008460C: lwc1        $f16, 0x74($sp)
        ctx->f16.u32l = MEM_W(ctx->r29, 0X74);
            goto L_80084670;
    }
    goto skip_6;
    // 0x8008460C: lwc1        $f16, 0x74($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X74);
    skip_6:
    // 0x80084610: lbu         $t7, 0xA($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0XA);
    // 0x80084614: lbu         $a3, 0x9($s2)
    ctx->r7 = MEM_BU(ctx->r18, 0X9);
    // 0x80084618: addiu       $a0, $sp, 0x6C
    ctx->r4 = ADD32(ctx->r29, 0X6C);
    // 0x8008461C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80084620: lbu         $t8, 0xB($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0XB);
    // 0x80084624: addiu       $a1, $sp, 0x74
    ctx->r5 = ADD32(ctx->r29, 0X74);
    // 0x80084628: jalr        $v0
    // 0x8008462C: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_6;
    // 0x8008462C: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    after_6:
    // 0x80084630: beq         $v0, $zero, L_8008466C
    if (ctx->r2 == 0) {
        // 0x80084634: addiu       $t9, $zero, 0x17
        ctx->r25 = ADD32(0, 0X17);
            goto L_8008466C;
    }
    // 0x80084634: addiu       $t9, $zero, 0x17
    ctx->r25 = ADD32(0, 0X17);
    // 0x80084638: lw          $t1, 0x6C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X6C);
    // 0x8008463C: lbu         $t2, 0xBB($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0XBB);
    // 0x80084640: sh          $t9, 0x9C($sp)
    MEM_H(0X9C, ctx->r29) = ctx->r25;
    // 0x80084644: sw          $s0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r16;
    // 0x80084648: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x8008464C: addiu       $a1, $sp, 0x9C
    ctx->r5 = ADD32(ctx->r29, 0X9C);
    // 0x80084650: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x80084654: sw          $t1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r9;
    // 0x80084658: jal         0x80085580
    // 0x8008465C: sb          $t2, 0xA8($sp)
    MEM_B(0XA8, ctx->r29) = ctx->r10;
    alEvtqPostEvent(rdram, ctx);
        goto after_7;
    // 0x8008465C: sb          $t2, 0xA8($sp)
    MEM_B(0XA8, ctx->r29) = ctx->r10;
    after_7:
    // 0x80084660: lbu         $t0, 0x37($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X37);
    // 0x80084664: ori         $t3, $t0, 0x2
    ctx->r11 = ctx->r8 | 0X2;
    // 0x80084668: sb          $t3, 0x37($s0)
    MEM_B(0X37, ctx->r16) = ctx->r11;
L_8008466C:
    // 0x8008466C: lwc1        $f16, 0x74($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X74);
L_80084670:
    // 0x80084670: lwc1        $f4, 0x28($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X28);
    // 0x80084674: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80084678: swc1        $f16, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f16.u32l;
    // 0x8008467C: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x80084680: lw          $t4, 0x60($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X60);
    // 0x80084684: lwc1        $f8, 0x2C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x80084688: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8008468C: addu        $v0, $t4, $t5
    ctx->r2 = ADD32(ctx->r12, ctx->r13);
    // 0x80084690: lwc1        $f18, 0xC($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80084694: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x80084698: nop

    // 0x8008469C: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x800846A0: swc1        $f10, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f10.u32l;
    // 0x800846A4: lbu         $t6, 0xA($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0XA);
    // 0x800846A8: jal         0x80084F2C
    // 0x800846AC: sb          $t6, 0x73($sp)
    MEM_B(0X73, ctx->r29) = ctx->r14;
    __vsPan(rdram, ctx);
        goto after_8;
    // 0x800846AC: sb          $t6, 0x73($sp)
    MEM_B(0X73, ctx->r29) = ctx->r14;
    after_8:
    // 0x800846B0: sb          $v0, 0x93($sp)
    MEM_B(0X93, ctx->r29) = ctx->r2;
    // 0x800846B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800846B8: jal         0x80084E80
    // 0x800846BC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    __vsVol(rdram, ctx);
        goto after_9;
    // 0x800846BC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_9:
    // 0x800846C0: lw          $v1, 0x80($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X80);
    // 0x800846C4: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x800846C8: lbu         $t8, 0x93($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X93);
    // 0x800846CC: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x800846D0: lw          $a2, 0x8($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X8);
    // 0x800846D4: lbu         $t9, 0x73($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X73);
    // 0x800846D8: lw          $s2, 0x0($t7)
    ctx->r18 = MEM_W(ctx->r15, 0X0);
    // 0x800846DC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x800846E0: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x800846E4: lw          $a3, 0x78($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X78);
    // 0x800846E8: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x800846EC: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x800846F0: jal         0x80074F10
    // 0x800846F4: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    alSeqpPostEvent(rdram, ctx);
        goto after_10;
    // 0x800846F4: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    after_10:
    // 0x800846F8: lw          $t2, 0x48($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X48);
    // 0x800846FC: lw          $t0, 0x80($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X80);
    // 0x80084700: addiu       $t1, $zero, 0x6
    ctx->r9 = ADD32(0, 0X6);
    // 0x80084704: sh          $t1, 0x9C($sp)
    MEM_H(0X9C, ctx->r29) = ctx->r9;
    // 0x80084708: sw          $t2, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r10;
    // 0x8008470C: lw          $t3, 0x0($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X0);
    // 0x80084710: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x80084714: addiu       $a1, $sp, 0x9C
    ctx->r5 = ADD32(ctx->r29, 0X9C);
    // 0x80084718: lbu         $t4, 0xD($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0XD);
    // 0x8008471C: sb          $t4, 0xA8($sp)
    MEM_B(0XA8, ctx->r29) = ctx->r12;
    // 0x80084720: lw          $t5, 0x0($t0)
    ctx->r13 = MEM_W(ctx->r8, 0X0);
    // 0x80084724: lw          $t6, 0x4($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X4);
    // 0x80084728: sw          $t6, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r14;
    // 0x8008472C: lw          $t7, 0x0($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X0);
    // 0x80084730: jal         0x80085580
    // 0x80084734: lw          $a2, 0x0($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X0);
    alEvtqPostEvent(rdram, ctx);
        goto after_11;
    // 0x80084734: lw          $a2, 0x0($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X0);
    after_11:
    // 0x80084738: b           L_80084BA0
    // 0x8008473C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_80084BA0;
    // 0x8008473C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_80084740:
    // 0x80084740: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_80084744:
    // 0x80084744: lbu         $a1, 0xBA($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0XBA);
    // 0x80084748: jal         0x80084D04
    // 0x8008474C: andi        $a2, $a3, 0xFF
    ctx->r6 = ctx->r7 & 0XFF;
    __lookupVoice(rdram, ctx);
        goto after_12;
    // 0x8008474C: andi        $a2, $a3, 0xFF
    ctx->r6 = ctx->r7 & 0XFF;
    after_12:
    // 0x80084750: beq         $v0, $zero, L_80084B9C
    if (ctx->r2 == 0) {
        // 0x80084754: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80084B9C;
    }
    // 0x80084754: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80084758: lbu         $t8, 0x35($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X35);
    // 0x8008475C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80084760: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x80084764: bne         $t8, $at, L_80084774
    if (ctx->r24 != ctx->r1) {
        // 0x80084768: addiu       $t1, $zero, 0x3
        ctx->r9 = ADD32(0, 0X3);
            goto L_80084774;
    }
    // 0x80084768: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x8008476C: b           L_80084B9C
    // 0x80084770: sb          $t9, 0x35($v0)
    MEM_B(0X35, ctx->r2) = ctx->r25;
        goto L_80084B9C;
    // 0x80084770: sb          $t9, 0x35($v0)
    MEM_B(0X35, ctx->r2) = ctx->r25;
L_80084774:
    // 0x80084774: lw          $t2, 0x20($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X20);
    // 0x80084778: sb          $t1, 0x35($s0)
    MEM_B(0X35, ctx->r16) = ctx->r9;
    // 0x8008477C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80084780: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x80084784: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x80084788: jal         0x80084F74
    // 0x8008478C: lw          $a2, 0x8($t3)
    ctx->r6 = MEM_W(ctx->r11, 0X8);
    __seqpReleaseVoice(rdram, ctx);
        goto after_13;
    // 0x8008478C: lw          $a2, 0x8($t3)
    ctx->r6 = MEM_W(ctx->r11, 0X8);
    after_13:
    // 0x80084790: b           L_80084BA0
    // 0x80084794: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_80084BA0;
    // 0x80084794: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_80084798:
    // 0x80084798: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8008479C: lbu         $a1, 0xBA($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0XBA);
    // 0x800847A0: jal         0x80084D04
    // 0x800847A4: andi        $a2, $a3, 0xFF
    ctx->r6 = ctx->r7 & 0XFF;
    __lookupVoice(rdram, ctx);
        goto after_14;
    // 0x800847A4: andi        $a2, $a3, 0xFF
    ctx->r6 = ctx->r7 & 0XFF;
    after_14:
    // 0x800847A8: beq         $v0, $zero, L_80084B9C
    if (ctx->r2 == 0) {
        // 0x800847AC: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80084B9C;
    }
    // 0x800847AC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800847B0: lbu         $t4, 0xB9($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0XB9);
    // 0x800847B4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800847B8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x800847BC: jal         0x80084E80
    // 0x800847C0: sb          $t4, 0x33($v0)
    MEM_B(0X33, ctx->r2) = ctx->r12;
    __vsVol(rdram, ctx);
        goto after_15;
    // 0x800847C0: sb          $t4, 0x33($v0)
    MEM_B(0X33, ctx->r2) = ctx->r12;
    after_15:
    // 0x800847C4: sh          $v0, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r2;
    // 0x800847C8: lw          $a1, 0x1C($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X1C);
    // 0x800847CC: jal         0x80084F08
    // 0x800847D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    __vsDelta(rdram, ctx);
        goto after_16;
    // 0x800847D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x800847D4: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x800847D8: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x800847DC: lh          $a2, 0x52($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X52);
    // 0x800847E0: jal         0x80085940
    // 0x800847E4: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    alSynSetVol(rdram, ctx);
        goto after_17;
    // 0x800847E4: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    after_17:
    // 0x800847E8: b           L_80084BA0
    // 0x800847EC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_80084BA0;
    // 0x800847EC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_800847F0:
    // 0x800847F0: lw          $s0, 0x64($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X64);
    // 0x800847F4: or          $s2, $a3, $zero
    ctx->r18 = ctx->r7 | 0;
    // 0x800847F8: beql        $s0, $zero, L_80084BA0
    if (ctx->r16 == 0) {
        // 0x800847FC: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_80084BA0;
    }
    goto skip_7;
    // 0x800847FC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_7:
    // 0x80084800: lbu         $t5, 0x31($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X31);
L_80084804:
    // 0x80084804: lbu         $t6, 0xBA($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0XBA);
    // 0x80084808: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8008480C: bne         $s2, $t5, L_80084840
    if (ctx->r18 != ctx->r13) {
        // 0x80084810: or          $a1, $s1, $zero
        ctx->r5 = ctx->r17 | 0;
            goto L_80084840;
    }
    // 0x80084810: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80084814: jal         0x80084E80
    // 0x80084818: sb          $t6, 0x33($s0)
    MEM_B(0X33, ctx->r16) = ctx->r14;
    __vsVol(rdram, ctx);
        goto after_18;
    // 0x80084818: sb          $t6, 0x33($s0)
    MEM_B(0X33, ctx->r16) = ctx->r14;
    after_18:
    // 0x8008481C: sh          $v0, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r2;
    // 0x80084820: lw          $a1, 0x1C($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X1C);
    // 0x80084824: jal         0x80084F08
    // 0x80084828: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    __vsDelta(rdram, ctx);
        goto after_19;
    // 0x80084828: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x8008482C: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x80084830: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x80084834: lh          $a2, 0x52($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X52);
    // 0x80084838: jal         0x80085940
    // 0x8008483C: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    alSynSetVol(rdram, ctx);
        goto after_20;
    // 0x8008483C: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    after_20:
L_80084840:
    // 0x80084840: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x80084844: bnel        $s0, $zero, L_80084804
    if (ctx->r16 != 0) {
        // 0x80084848: lbu         $t5, 0x31($s0)
        ctx->r13 = MEM_BU(ctx->r16, 0X31);
            goto L_80084804;
    }
    goto skip_8;
    // 0x80084848: lbu         $t5, 0x31($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X31);
    skip_8:
    // 0x8008484C: b           L_80084BA0
    // 0x80084850: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_80084BA0;
    // 0x80084850: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_80084854:
    // 0x80084854: lbu         $v0, 0xBA($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0XBA);
    // 0x80084858: slti        $at, $v0, 0x41
    ctx->r1 = SIGNED(ctx->r2) < 0X41 ? 1 : 0;
    // 0x8008485C: bne         $at, $zero, L_80084880
    if (ctx->r1 != 0) {
        // 0x80084860: addiu       $t0, $v0, -0x7
        ctx->r8 = ADD32(ctx->r2, -0X7);
            goto L_80084880;
    }
    // 0x80084860: addiu       $t0, $v0, -0x7
    ctx->r8 = ADD32(ctx->r2, -0X7);
    // 0x80084864: addiu       $at, $zero, 0x5B
    ctx->r1 = ADD32(0, 0X5B);
    // 0x80084868: beq         $v0, $at, L_80084A64
    if (ctx->r2 == ctx->r1) {
        // 0x8008486C: addiu       $at, $zero, 0x5D
        ctx->r1 = ADD32(0, 0X5D);
            goto L_80084A64;
    }
    // 0x8008486C: addiu       $at, $zero, 0x5D
    ctx->r1 = ADD32(0, 0X5D);
    // 0x80084870: beql        $v0, $at, L_80084BA0
    if (ctx->r2 == ctx->r1) {
        // 0x80084874: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_80084BA0;
    }
    goto skip_9;
    // 0x80084874: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_9:
    // 0x80084878: b           L_80084BA0
    // 0x8008487C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_80084BA0;
    // 0x8008487C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_80084880:
    // 0x80084880: slti        $at, $v0, 0x1C
    ctx->r1 = SIGNED(ctx->r2) < 0X1C ? 1 : 0;
    // 0x80084884: bne         $at, $zero, L_8008489C
    if (ctx->r1 != 0) {
        // 0x80084888: addiu       $at, $zero, 0x40
        ctx->r1 = ADD32(0, 0X40);
            goto L_8008489C;
    }
    // 0x80084888: addiu       $at, $zero, 0x40
    ctx->r1 = ADD32(0, 0X40);
    // 0x8008488C: beql        $v0, $at, L_800849BC
    if (ctx->r2 == ctx->r1) {
        // 0x80084890: lw          $t5, 0x60($s1)
        ctx->r13 = MEM_W(ctx->r17, 0X60);
            goto L_800849BC;
    }
    goto skip_10;
    // 0x80084890: lw          $t5, 0x60($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X60);
    skip_10:
    // 0x80084894: b           L_80084BA0
    // 0x80084898: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_80084BA0;
    // 0x80084898: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8008489C:
    // 0x8008489C: sltiu       $at, $t0, 0x15
    ctx->r1 = ctx->r8 < 0X15 ? 1 : 0;
    // 0x800848A0: beq         $at, $zero, L_80084B9C
    if (ctx->r1 == 0) {
        // 0x800848A4: sll         $t0, $t0, 2
        ctx->r8 = S32(ctx->r8 << 2);
            goto L_80084B9C;
    }
    // 0x800848A4: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800848A8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800848AC: addu        $at, $at, $t0
    gpr jr_addend_800848B4 = ctx->r8;
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800848B0: lw          $t0, 0x6CF4($at)
    ctx->r8 = ADD32(ctx->r1, 0X6CF4);
    // 0x800848B4: jr          $t0
    // 0x800848B8: nop

    switch (jr_addend_800848B4 >> 2) {
        case 0: goto L_8008491C; break;
        case 1: goto L_80084B9C; break;
        case 2: goto L_80084B9C; break;
        case 3: goto L_800848BC; break;
        case 4: goto L_80084B9C; break;
        case 5: goto L_80084B9C; break;
        case 6: goto L_80084B9C; break;
        case 7: goto L_80084B9C; break;
        case 8: goto L_80084B9C; break;
        case 9: goto L_800849A0; break;
        case 10: goto L_80084B9C; break;
        case 11: goto L_80084B9C; break;
        case 12: goto L_80084B9C; break;
        case 13: goto L_80084B9C; break;
        case 14: goto L_80084B9C; break;
        case 15: goto L_80084B9C; break;
        case 16: goto L_80084B9C; break;
        case 17: goto L_80084B9C; break;
        case 18: goto L_80084B9C; break;
        case 19: goto L_80084B9C; break;
        case 20: goto L_80084B9C; break;
        default: switch_error(__func__, 0x800848B4, 0x80096CF4);
    }
    // 0x800848B8: nop

L_800848BC:
    // 0x800848BC: lw          $t8, 0x60($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X60);
    // 0x800848C0: lbu         $t7, 0xB9($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0XB9);
    // 0x800848C4: sll         $t9, $a3, 4
    ctx->r25 = S32(ctx->r7 << 4);
    // 0x800848C8: addu        $t1, $t8, $t9
    ctx->r9 = ADD32(ctx->r24, ctx->r25);
    // 0x800848CC: sb          $t7, 0x7($t1)
    MEM_B(0X7, ctx->r9) = ctx->r15;
    // 0x800848D0: lw          $s0, 0x64($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X64);
    // 0x800848D4: or          $s2, $a3, $zero
    ctx->r18 = ctx->r7 | 0;
    // 0x800848D8: beql        $s0, $zero, L_80084BA0
    if (ctx->r16 == 0) {
        // 0x800848DC: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_80084BA0;
    }
    goto skip_11;
    // 0x800848DC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_11:
    // 0x800848E0: lbu         $t2, 0x31($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X31);
L_800848E4:
    // 0x800848E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800848E8: bnel        $s2, $t2, L_8008490C
    if (ctx->r18 != ctx->r10) {
        // 0x800848EC: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_8008490C;
    }
    goto skip_12;
    // 0x800848EC: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_12:
    // 0x800848F0: jal         0x80084F2C
    // 0x800848F4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    __vsPan(rdram, ctx);
        goto after_21;
    // 0x800848F4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_21:
    // 0x800848F8: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x800848FC: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x80084900: jal         0x80075020
    // 0x80084904: andi        $a2, $v0, 0xFF
    ctx->r6 = ctx->r2 & 0XFF;
    alSynSetPan(rdram, ctx);
        goto after_22;
    // 0x80084904: andi        $a2, $v0, 0xFF
    ctx->r6 = ctx->r2 & 0XFF;
    after_22:
    // 0x80084908: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_8008490C:
    // 0x8008490C: bnel        $s0, $zero, L_800848E4
    if (ctx->r16 != 0) {
        // 0x80084910: lbu         $t2, 0x31($s0)
        ctx->r10 = MEM_BU(ctx->r16, 0X31);
            goto L_800848E4;
    }
    goto skip_13;
    // 0x80084910: lbu         $t2, 0x31($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X31);
    skip_13:
    // 0x80084914: b           L_80084BA0
    // 0x80084918: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_80084BA0;
    // 0x80084918: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_8008491C:
    // 0x8008491C: lw          $t4, 0x60($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X60);
    // 0x80084920: lbu         $t3, 0xB9($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0XB9);
    // 0x80084924: sll         $t5, $a3, 4
    ctx->r13 = S32(ctx->r7 << 4);
    // 0x80084928: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x8008492C: sb          $t3, 0x9($t6)
    MEM_B(0X9, ctx->r14) = ctx->r11;
    // 0x80084930: lw          $s0, 0x64($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X64);
    // 0x80084934: or          $s2, $a3, $zero
    ctx->r18 = ctx->r7 | 0;
    // 0x80084938: beql        $s0, $zero, L_80084BA0
    if (ctx->r16 == 0) {
        // 0x8008493C: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_80084BA0;
    }
    goto skip_14;
    // 0x8008493C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_14:
    // 0x80084940: lbu         $t0, 0x31($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X31);
L_80084944:
    // 0x80084944: bnel        $s2, $t0, L_80084990
    if (ctx->r18 != ctx->r8) {
        // 0x80084948: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_80084990;
    }
    goto skip_15;
    // 0x80084948: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_15:
    // 0x8008494C: lbu         $t8, 0x34($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X34);
    // 0x80084950: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80084954: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80084958: beql        $t8, $at, L_80084990
    if (ctx->r24 == ctx->r1) {
        // 0x8008495C: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_80084990;
    }
    goto skip_16;
    // 0x8008495C: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_16:
    // 0x80084960: jal         0x80084E80
    // 0x80084964: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    __vsVol(rdram, ctx);
        goto after_23;
    // 0x80084964: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_23:
    // 0x80084968: sh          $v0, 0xAE($sp)
    MEM_H(0XAE, ctx->r29) = ctx->r2;
    // 0x8008496C: lw          $a1, 0x1C($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X1C);
    // 0x80084970: jal         0x80084F08
    // 0x80084974: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    __vsDelta(rdram, ctx);
        goto after_24;
    // 0x80084974: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_24:
    // 0x80084978: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x8008497C: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x80084980: lh          $a2, 0xAE($sp)
    ctx->r6 = MEM_H(ctx->r29, 0XAE);
    // 0x80084984: jal         0x80085940
    // 0x80084988: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    alSynSetVol(rdram, ctx);
        goto after_25;
    // 0x80084988: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    after_25:
    // 0x8008498C: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_80084990:
    // 0x80084990: bnel        $s0, $zero, L_80084944
    if (ctx->r16 != 0) {
        // 0x80084994: lbu         $t0, 0x31($s0)
        ctx->r8 = MEM_BU(ctx->r16, 0X31);
            goto L_80084944;
    }
    goto skip_17;
    // 0x80084994: lbu         $t0, 0x31($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X31);
    skip_17:
    // 0x80084998: b           L_80084BA0
    // 0x8008499C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_80084BA0;
    // 0x8008499C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_800849A0:
    // 0x800849A0: lw          $t7, 0x60($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X60);
    // 0x800849A4: lbu         $t9, 0xB9($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0XB9);
    // 0x800849A8: sll         $t1, $a3, 4
    ctx->r9 = S32(ctx->r7 << 4);
    // 0x800849AC: addu        $t2, $t7, $t1
    ctx->r10 = ADD32(ctx->r15, ctx->r9);
    // 0x800849B0: b           L_80084B9C
    // 0x800849B4: sb          $t9, 0x8($t2)
    MEM_B(0X8, ctx->r10) = ctx->r25;
        goto L_80084B9C;
    // 0x800849B4: sb          $t9, 0x8($t2)
    MEM_B(0X8, ctx->r10) = ctx->r25;
    // 0x800849B8: lw          $t5, 0x60($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X60);
L_800849BC:
    // 0x800849BC: lbu         $t4, 0xB9($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0XB9);
    // 0x800849C0: sll         $t3, $a3, 4
    ctx->r11 = S32(ctx->r7 << 4);
    // 0x800849C4: addu        $t6, $t5, $t3
    ctx->r14 = ADD32(ctx->r13, ctx->r11);
    // 0x800849C8: sb          $t4, 0xB($t6)
    MEM_B(0XB, ctx->r14) = ctx->r12;
    // 0x800849CC: lw          $s0, 0x64($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X64);
    // 0x800849D0: or          $s2, $a3, $zero
    ctx->r18 = ctx->r7 | 0;
    // 0x800849D4: beql        $s0, $zero, L_80084BA0
    if (ctx->r16 == 0) {
        // 0x800849D8: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_80084BA0;
    }
    goto skip_18;
    // 0x800849D8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_18:
    // 0x800849DC: lbu         $t0, 0x31($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X31);
L_800849E0:
    // 0x800849E0: bnel        $s2, $t0, L_80084A54
    if (ctx->r18 != ctx->r8) {
        // 0x800849E4: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_80084A54;
    }
    goto skip_19;
    // 0x800849E4: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_19:
    // 0x800849E8: lbu         $v0, 0x35($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X35);
    // 0x800849EC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800849F0: lbu         $t8, 0xB9($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0XB9);
    // 0x800849F4: beq         $v0, $at, L_80084A50
    if (ctx->r2 == ctx->r1) {
        // 0x800849F8: slti        $at, $t8, 0x40
        ctx->r1 = SIGNED(ctx->r24) < 0X40 ? 1 : 0;
            goto L_80084A50;
    }
    // 0x800849F8: slti        $at, $t8, 0x40
    ctx->r1 = SIGNED(ctx->r24) < 0X40 ? 1 : 0;
    // 0x800849FC: bnel        $at, $zero, L_80084A18
    if (ctx->r1 != 0) {
        // 0x80084A00: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80084A18;
    }
    goto skip_20;
    // 0x80084A00: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    skip_20:
    // 0x80084A04: bne         $v0, $zero, L_80084A50
    if (ctx->r2 != 0) {
        // 0x80084A08: addiu       $t7, $zero, 0x2
        ctx->r15 = ADD32(0, 0X2);
            goto L_80084A50;
    }
    // 0x80084A08: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80084A0C: b           L_80084A50
    // 0x80084A10: sb          $t7, 0x35($s0)
    MEM_B(0X35, ctx->r16) = ctx->r15;
        goto L_80084A50;
    // 0x80084A10: sb          $t7, 0x35($s0)
    MEM_B(0X35, ctx->r16) = ctx->r15;
    // 0x80084A14: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
L_80084A18:
    // 0x80084A18: bnel        $v0, $at, L_80084A2C
    if (ctx->r2 != ctx->r1) {
        // 0x80084A1C: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_80084A2C;
    }
    goto skip_21;
    // 0x80084A1C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    skip_21:
    // 0x80084A20: b           L_80084A50
    // 0x80084A24: sb          $zero, 0x35($s0)
    MEM_B(0X35, ctx->r16) = 0;
        goto L_80084A50;
    // 0x80084A24: sb          $zero, 0x35($s0)
    MEM_B(0X35, ctx->r16) = 0;
    // 0x80084A28: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
L_80084A2C:
    // 0x80084A2C: bne         $v0, $at, L_80084A50
    if (ctx->r2 != ctx->r1) {
        // 0x80084A30: addiu       $t1, $zero, 0x3
        ctx->r9 = ADD32(0, 0X3);
            goto L_80084A50;
    }
    // 0x80084A30: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x80084A34: lw          $t9, 0x20($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X20);
    // 0x80084A38: sb          $t1, 0x35($s0)
    MEM_B(0X35, ctx->r16) = ctx->r9;
    // 0x80084A3C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80084A40: lw          $t2, 0x0($t9)
    ctx->r10 = MEM_W(ctx->r25, 0X0);
    // 0x80084A44: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x80084A48: jal         0x80084F74
    // 0x80084A4C: lw          $a2, 0x8($t2)
    ctx->r6 = MEM_W(ctx->r10, 0X8);
    __seqpReleaseVoice(rdram, ctx);
        goto after_26;
    // 0x80084A4C: lw          $a2, 0x8($t2)
    ctx->r6 = MEM_W(ctx->r10, 0X8);
    after_26:
L_80084A50:
    // 0x80084A50: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_80084A54:
    // 0x80084A54: bnel        $s0, $zero, L_800849E0
    if (ctx->r16 != 0) {
        // 0x80084A58: lbu         $t0, 0x31($s0)
        ctx->r8 = MEM_BU(ctx->r16, 0X31);
            goto L_800849E0;
    }
    goto skip_22;
    // 0x80084A58: lbu         $t0, 0x31($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X31);
    skip_22:
    // 0x80084A5C: b           L_80084BA0
    // 0x80084A60: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_80084BA0;
    // 0x80084A60: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_80084A64:
    // 0x80084A64: lw          $t3, 0x60($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X60);
    // 0x80084A68: lbu         $t5, 0xB9($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0XB9);
    // 0x80084A6C: sll         $t4, $a3, 4
    ctx->r12 = S32(ctx->r7 << 4);
    // 0x80084A70: addu        $t6, $t3, $t4
    ctx->r14 = ADD32(ctx->r11, ctx->r12);
    // 0x80084A74: sb          $t5, 0xA($t6)
    MEM_B(0XA, ctx->r14) = ctx->r13;
    // 0x80084A78: lw          $s0, 0x64($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X64);
    // 0x80084A7C: or          $s2, $a3, $zero
    ctx->r18 = ctx->r7 | 0;
    // 0x80084A80: beql        $s0, $zero, L_80084BA0
    if (ctx->r16 == 0) {
        // 0x80084A84: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_80084BA0;
    }
    goto skip_23;
    // 0x80084A84: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_23:
    // 0x80084A88: lbu         $t0, 0x31($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X31);
L_80084A8C:
    // 0x80084A8C: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x80084A90: lbu         $a2, 0xB9($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0XB9);
    // 0x80084A94: bnel        $s2, $t0, L_80084AA8
    if (ctx->r18 != ctx->r8) {
        // 0x80084A98: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_80084AA8;
    }
    goto skip_24;
    // 0x80084A98: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_24:
    // 0x80084A9C: jal         0x80085C90
    // 0x80084AA0: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    alSynSetFXMix(rdram, ctx);
        goto after_27;
    // 0x80084AA0: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    after_27:
    // 0x80084AA4: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_80084AA8:
    // 0x80084AA8: bnel        $s0, $zero, L_80084A8C
    if (ctx->r16 != 0) {
        // 0x80084AAC: lbu         $t0, 0x31($s0)
        ctx->r8 = MEM_BU(ctx->r16, 0X31);
            goto L_80084A8C;
    }
    goto skip_25;
    // 0x80084AAC: lbu         $t0, 0x31($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X31);
    skip_25:
    // 0x80084AB0: b           L_80084BA0
    // 0x80084AB4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_80084BA0;
    // 0x80084AB4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_80084AB8:
    // 0x80084AB8: lw          $v0, 0x20($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X20);
    // 0x80084ABC: lbu         $t8, 0xBA($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0XBA);
    // 0x80084AC0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80084AC4: lh          $t7, 0x0($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X0);
    // 0x80084AC8: sll         $t1, $t8, 2
    ctx->r9 = S32(ctx->r24 << 2);
    // 0x80084ACC: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    // 0x80084AD0: slt         $at, $t8, $t7
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80084AD4: beq         $at, $zero, L_80084B9C
    if (ctx->r1 == 0) {
        // 0x80084AD8: addu        $t9, $v0, $t1
        ctx->r25 = ADD32(ctx->r2, ctx->r9);
            goto L_80084B9C;
    }
    // 0x80084AD8: addu        $t9, $v0, $t1
    ctx->r25 = ADD32(ctx->r2, ctx->r9);
    // 0x80084ADC: jal         0x800851F8
    // 0x80084AE0: lw          $a1, 0xC($t9)
    ctx->r5 = MEM_W(ctx->r25, 0XC);
    __setInstChanState(rdram, ctx);
        goto after_28;
    // 0x80084AE0: lw          $a1, 0xC($t9)
    ctx->r5 = MEM_W(ctx->r25, 0XC);
    after_28:
    // 0x80084AE4: b           L_80084BA0
    // 0x80084AE8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_80084BA0;
    // 0x80084AE8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_80084AEC:
    // 0x80084AEC: lw          $t0, 0x60($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X60);
    // 0x80084AF0: lbu         $t2, 0xB9($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0XB9);
    // 0x80084AF4: lbu         $t4, 0xBA($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0XBA);
    // 0x80084AF8: sll         $v0, $a3, 4
    ctx->r2 = S32(ctx->r7 << 4);
    // 0x80084AFC: addu        $t7, $t0, $v0
    ctx->r15 = ADD32(ctx->r8, ctx->r2);
    // 0x80084B00: lh          $t8, 0x4($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X4);
    // 0x80084B04: sll         $t3, $t2, 7
    ctx->r11 = S32(ctx->r10 << 7);
    // 0x80084B08: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x80084B0C: addiu       $t6, $t5, -0x2000
    ctx->r14 = ADD32(ctx->r13, -0X2000);
    // 0x80084B10: multu       $t8, $t6
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80084B14: sb          $a3, 0xBB($sp)
    MEM_B(0XBB, ctx->r29) = ctx->r7;
    // 0x80084B18: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    // 0x80084B1C: mflo        $a0
    ctx->r4 = lo;
    // 0x80084B20: bgez        $a0, L_80084B30
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80084B24: sra         $t1, $a0, 13
        ctx->r9 = S32(SIGNED(ctx->r4) >> 13);
            goto L_80084B30;
    }
    // 0x80084B24: sra         $t1, $a0, 13
    ctx->r9 = S32(SIGNED(ctx->r4) >> 13);
    // 0x80084B28: addiu       $at, $a0, 0x1FFF
    ctx->r1 = ADD32(ctx->r4, 0X1FFF);
    // 0x80084B2C: sra         $t1, $at, 13
    ctx->r9 = S32(SIGNED(ctx->r1) >> 13);
L_80084B30:
    // 0x80084B30: jal         0x8007D100
    // 0x80084B34: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    func_8007D100(rdram, ctx);
        goto after_29;
    // 0x80084B34: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    after_29:
    // 0x80084B38: swc1        $f0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f0.u32l;
    // 0x80084B3C: lw          $t9, 0x60($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X60);
    // 0x80084B40: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
    // 0x80084B44: addu        $t3, $t9, $t2
    ctx->r11 = ADD32(ctx->r25, ctx->r10);
    // 0x80084B48: swc1        $f0, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->f0.u32l;
    // 0x80084B4C: lw          $s0, 0x64($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X64);
    // 0x80084B50: lbu         $s2, 0xBB($sp)
    ctx->r18 = MEM_BU(ctx->r29, 0XBB);
    // 0x80084B54: beql        $s0, $zero, L_80084BA0
    if (ctx->r16 == 0) {
        // 0x80084B58: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_80084BA0;
    }
    goto skip_26;
    // 0x80084B58: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_26:
    // 0x80084B5C: lbu         $t4, 0x31($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X31);
L_80084B60:
    // 0x80084B60: lwc1        $f18, 0x5C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80084B64: bnel        $s2, $t4, L_80084B94
    if (ctx->r18 != ctx->r12) {
        // 0x80084B68: lw          $s0, 0x0($s0)
        ctx->r16 = MEM_W(ctx->r16, 0X0);
            goto L_80084B94;
    }
    goto skip_27;
    // 0x80084B68: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    skip_27:
    // 0x80084B6C: lwc1        $f16, 0x28($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X28);
    // 0x80084B70: lwc1        $f6, 0x2C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x80084B74: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x80084B78: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x80084B7C: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x80084B80: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80084B84: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x80084B88: jal         0x800859E0
    // 0x80084B8C: nop

    alSynSetPitch(rdram, ctx);
        goto after_30;
    // 0x80084B8C: nop

    after_30:
    // 0x80084B90: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_80084B94:
    // 0x80084B94: bnel        $s0, $zero, L_80084B60
    if (ctx->r16 != 0) {
        // 0x80084B98: lbu         $t4, 0x31($s0)
        ctx->r12 = MEM_BU(ctx->r16, 0X31);
            goto L_80084B60;
    }
    goto skip_28;
    // 0x80084B98: lbu         $t4, 0x31($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X31);
    skip_28:
L_80084B9C:
    // 0x80084B9C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_80084BA0:
    // 0x80084BA0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80084BA4: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80084BA8: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80084BAC: jr          $ra
    // 0x80084BB0: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
    return;
    // 0x80084BB0: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
;}
RECOMP_FUNC void alSeqpHandleTempoEvent(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80084BB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80084BB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80084BBC: lbu         $t6, 0x8($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X8);
    // 0x80084BC0: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x80084BC4: bnel        $t6, $at, L_80084C18
    if (ctx->r14 != ctx->r1) {
        // 0x80084BC8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80084C18;
    }
    goto skip_0;
    // 0x80084BC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80084BCC: lbu         $t7, 0x9($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X9);
    // 0x80084BD0: addiu       $at, $zero, 0x51
    ctx->r1 = ADD32(0, 0X51);
    // 0x80084BD4: addiu       $v0, $a1, 0x4
    ctx->r2 = ADD32(ctx->r5, 0X4);
    // 0x80084BD8: bnel        $t7, $at, L_80084C18
    if (ctx->r15 != ctx->r1) {
        // 0x80084BDC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80084C18;
    }
    goto skip_1;
    // 0x80084BDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x80084BE0: lbu         $t8, 0x7($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X7);
    // 0x80084BE4: lbu         $t0, 0x8($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X8);
    // 0x80084BE8: lbu         $t3, 0x9($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X9);
    // 0x80084BEC: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x80084BF0: sll         $t1, $t0, 8
    ctx->r9 = S32(ctx->r8 << 8);
    // 0x80084BF4: or          $t2, $t9, $t1
    ctx->r10 = ctx->r25 | ctx->r9;
    // 0x80084BF8: or          $v1, $t2, $t3
    ctx->r3 = ctx->r10 | ctx->r11;
    // 0x80084BFC: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x80084C00: nop

    // 0x80084C04: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80084C08: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x80084C0C: jal         0x80085440
    // 0x80084C10: nop

    alSeqpCalcUspt(rdram, ctx);
        goto after_0;
    // 0x80084C10: nop

    after_0:
    // 0x80084C14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80084C18:
    // 0x80084C18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80084C1C: jr          $ra
    // 0x80084C20: nop

    return;
    // 0x80084C20: nop

;}
RECOMP_FUNC void __mapVoice(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80084C24: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80084C28: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80084C2C: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x80084C30: lw          $v1, 0x6C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X6C);
    // 0x80084C34: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x80084C38: andi        $t7, $a2, 0xFF
    ctx->r15 = ctx->r6 & 0XFF;
    // 0x80084C3C: andi        $t8, $a3, 0xFF
    ctx->r24 = ctx->r7 & 0XFF;
    // 0x80084C40: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    // 0x80084C44: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x80084C48: beq         $v1, $zero, L_80084C8C
    if (ctx->r3 == 0) {
        // 0x80084C4C: or          $a1, $t6, $zero
        ctx->r5 = ctx->r14 | 0;
            goto L_80084C8C;
    }
    // 0x80084C4C: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x80084C50: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x80084C54: sw          $t9, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r25;
    // 0x80084C58: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x80084C5C: lw          $t0, 0x64($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X64);
    // 0x80084C60: bnel        $t0, $zero, L_80084C74
    if (ctx->r8 != 0) {
        // 0x80084C64: lw          $t1, 0x68($a0)
        ctx->r9 = MEM_W(ctx->r4, 0X68);
            goto L_80084C74;
    }
    goto skip_0;
    // 0x80084C64: lw          $t1, 0x68($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X68);
    skip_0:
    // 0x80084C68: b           L_80084C78
    // 0x80084C6C: sw          $v1, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r3;
        goto L_80084C78;
    // 0x80084C6C: sw          $v1, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r3;
    // 0x80084C70: lw          $t1, 0x68($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X68);
L_80084C74:
    // 0x80084C74: sw          $v1, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r3;
L_80084C78:
    // 0x80084C78: sw          $v1, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r3;
    // 0x80084C7C: sb          $a3, 0x31($v1)
    MEM_B(0X31, ctx->r3) = ctx->r7;
    // 0x80084C80: sb          $a1, 0x32($v1)
    MEM_B(0X32, ctx->r3) = ctx->r5;
    // 0x80084C84: sb          $a2, 0x33($v1)
    MEM_B(0X33, ctx->r3) = ctx->r6;
    // 0x80084C88: sw          $v1, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r3;
L_80084C8C:
    // 0x80084C8C: jr          $ra
    // 0x80084C90: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80084C90: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void __unmapVoice(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80084C94: lw          $v1, 0x64($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X64);
    // 0x80084C98: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80084C9C: addiu       $a2, $a1, -0x4
    ctx->r6 = ADD32(ctx->r5, -0X4);
    // 0x80084CA0: beq         $v1, $zero, L_80084CFC
    if (ctx->r3 == 0) {
        // 0x80084CA4: nop
    
            goto L_80084CFC;
    }
    // 0x80084CA4: nop

L_80084CA8:
    // 0x80084CA8: bnel        $v1, $a2, L_80084CF0
    if (ctx->r3 != ctx->r6) {
        // 0x80084CAC: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_80084CF0;
    }
    goto skip_0;
    // 0x80084CAC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    skip_0:
    // 0x80084CB0: beql        $v0, $zero, L_80084CC8
    if (ctx->r2 == 0) {
        // 0x80084CB4: lw          $t7, 0x0($v1)
        ctx->r15 = MEM_W(ctx->r3, 0X0);
            goto L_80084CC8;
    }
    goto skip_1;
    // 0x80084CB4: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    skip_1:
    // 0x80084CB8: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x80084CBC: b           L_80084CCC
    // 0x80084CC0: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
        goto L_80084CCC;
    // 0x80084CC0: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80084CC4: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
L_80084CC8:
    // 0x80084CC8: sw          $t7, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r15;
L_80084CCC:
    // 0x80084CCC: lw          $t8, 0x68($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X68);
    // 0x80084CD0: bnel        $v1, $t8, L_80084CE0
    if (ctx->r3 != ctx->r24) {
        // 0x80084CD4: lw          $t9, 0x6C($a0)
        ctx->r25 = MEM_W(ctx->r4, 0X6C);
            goto L_80084CE0;
    }
    goto skip_2;
    // 0x80084CD4: lw          $t9, 0x6C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X6C);
    skip_2:
    // 0x80084CD8: sw          $v0, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r2;
    // 0x80084CDC: lw          $t9, 0x6C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X6C);
L_80084CE0:
    // 0x80084CE0: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80084CE4: jr          $ra
    // 0x80084CE8: sw          $v1, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r3;
    return;
    // 0x80084CE8: sw          $v1, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r3;
    // 0x80084CEC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80084CF0:
    // 0x80084CF0: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x80084CF4: bne         $v1, $zero, L_80084CA8
    if (ctx->r3 != 0) {
        // 0x80084CF8: nop
    
            goto L_80084CA8;
    }
    // 0x80084CF8: nop

L_80084CFC:
    // 0x80084CFC: jr          $ra
    // 0x80084D00: nop

    return;
    // 0x80084D00: nop

;}
RECOMP_FUNC void __lookupVoice(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80084D04: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80084D08: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80084D0C: lw          $v1, 0x64($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X64);
    // 0x80084D10: andi        $t7, $a2, 0xFF
    ctx->r15 = ctx->r6 & 0XFF;
    // 0x80084D14: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x80084D18: beq         $v1, $zero, L_80084D6C
    if (ctx->r3 == 0) {
        // 0x80084D1C: andi        $t6, $a1, 0xFF
        ctx->r14 = ctx->r5 & 0XFF;
            goto L_80084D6C;
    }
    // 0x80084D1C: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x80084D20: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x80084D24: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x80084D28: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80084D2C: lbu         $t8, 0x32($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X32);
L_80084D30:
    // 0x80084D30: bnel        $v0, $t8, L_80084D64
    if (ctx->r2 != ctx->r24) {
        // 0x80084D34: lw          $v1, 0x0($v1)
        ctx->r3 = MEM_W(ctx->r3, 0X0);
            goto L_80084D64;
    }
    goto skip_0;
    // 0x80084D34: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    skip_0:
    // 0x80084D38: lbu         $t9, 0x31($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X31);
    // 0x80084D3C: bnel        $a2, $t9, L_80084D64
    if (ctx->r6 != ctx->r25) {
        // 0x80084D40: lw          $v1, 0x0($v1)
        ctx->r3 = MEM_W(ctx->r3, 0X0);
            goto L_80084D64;
    }
    goto skip_1;
    // 0x80084D40: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    skip_1:
    // 0x80084D44: lbu         $a0, 0x35($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X35);
    // 0x80084D48: beql        $a1, $a0, L_80084D64
    if (ctx->r5 == ctx->r4) {
        // 0x80084D4C: lw          $v1, 0x0($v1)
        ctx->r3 = MEM_W(ctx->r3, 0X0);
            goto L_80084D64;
    }
    goto skip_2;
    // 0x80084D4C: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    skip_2:
    // 0x80084D50: beql        $a3, $a0, L_80084D64
    if (ctx->r7 == ctx->r4) {
        // 0x80084D54: lw          $v1, 0x0($v1)
        ctx->r3 = MEM_W(ctx->r3, 0X0);
            goto L_80084D64;
    }
    goto skip_3;
    // 0x80084D54: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    skip_3:
    // 0x80084D58: jr          $ra
    // 0x80084D5C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80084D5C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80084D60: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
L_80084D64:
    // 0x80084D64: bnel        $v1, $zero, L_80084D30
    if (ctx->r3 != 0) {
        // 0x80084D68: lbu         $t8, 0x32($v1)
        ctx->r24 = MEM_BU(ctx->r3, 0X32);
            goto L_80084D30;
    }
    goto skip_4;
    // 0x80084D68: lbu         $t8, 0x32($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X32);
    skip_4:
L_80084D6C:
    // 0x80084D6C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80084D70: jr          $ra
    // 0x80084D74: nop

    return;
    // 0x80084D74: nop

;}
RECOMP_FUNC void __lookupSoundQuick(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80084D78: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80084D7C: sw          $s0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r16;
    // 0x80084D80: sw          $a1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r5;
    // 0x80084D84: sw          $a2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r6;
    // 0x80084D88: sw          $a3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r7;
    // 0x80084D8C: lw          $t8, 0x60($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X60);
    // 0x80084D90: andi        $t7, $a3, 0xFF
    ctx->r15 = ctx->r7 & 0XFF;
    // 0x80084D94: sll         $t9, $t7, 4
    ctx->r25 = S32(ctx->r15 << 4);
    // 0x80084D98: addu        $t3, $t8, $t9
    ctx->r11 = ADD32(ctx->r24, ctx->r25);
    // 0x80084D9C: lw          $v0, 0x0($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X0);
    // 0x80084DA0: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x80084DA4: andi        $s0, $a2, 0xFF
    ctx->r16 = ctx->r6 & 0XFF;
    // 0x80084DA8: lh          $t0, 0xE($v0)
    ctx->r8 = MEM_H(ctx->r2, 0XE);
    // 0x80084DAC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80084DB0: or          $t1, $t6, $zero
    ctx->r9 = ctx->r14 | 0;
    // 0x80084DB4: blez        $t0, L_80084E70
    if (SIGNED(ctx->r8) <= 0) {
        // 0x80084DB8: addu        $a1, $v1, $t0
        ctx->r5 = ADD32(ctx->r3, ctx->r8);
            goto L_80084E70;
    }
    // 0x80084DB8: addu        $a1, $v1, $t0
    ctx->r5 = ADD32(ctx->r3, ctx->r8);
L_80084DBC:
    // 0x80084DBC: bgez        $a1, L_80084DCC
    if (SIGNED(ctx->r5) >= 0) {
        // 0x80084DC0: sra         $t4, $a1, 1
        ctx->r12 = S32(SIGNED(ctx->r5) >> 1);
            goto L_80084DCC;
    }
    // 0x80084DC0: sra         $t4, $a1, 1
    ctx->r12 = S32(SIGNED(ctx->r5) >> 1);
    // 0x80084DC4: addiu       $at, $a1, 0x1
    ctx->r1 = ADD32(ctx->r5, 0X1);
    // 0x80084DC8: sra         $t4, $at, 1
    ctx->r12 = S32(SIGNED(ctx->r1) >> 1);
L_80084DCC:
    // 0x80084DCC: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80084DD0: addu        $t6, $v0, $t5
    ctx->r14 = ADD32(ctx->r2, ctx->r13);
    // 0x80084DD4: lw          $a3, 0xC($t6)
    ctx->r7 = MEM_W(ctx->r14, 0XC);
    // 0x80084DD8: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x80084DDC: lw          $a2, 0x4($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X4);
    // 0x80084DE0: lbu         $t2, 0x2($a2)
    ctx->r10 = MEM_BU(ctx->r6, 0X2);
    // 0x80084DE4: slt         $at, $t1, $t2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x80084DE8: bnel        $at, $zero, L_80084E30
    if (ctx->r1 != 0) {
        // 0x80084DEC: slt         $at, $t1, $t2
        ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
            goto L_80084E30;
    }
    goto skip_0;
    // 0x80084DEC: slt         $at, $t1, $t2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
    skip_0:
    // 0x80084DF0: lbu         $t7, 0x3($a2)
    ctx->r15 = MEM_BU(ctx->r6, 0X3);
    // 0x80084DF4: slt         $at, $t7, $t1
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x80084DF8: bnel        $at, $zero, L_80084E30
    if (ctx->r1 != 0) {
        // 0x80084DFC: slt         $at, $t1, $t2
        ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
            goto L_80084E30;
    }
    goto skip_1;
    // 0x80084DFC: slt         $at, $t1, $t2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
    skip_1:
    // 0x80084E00: lbu         $t8, 0x0($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0X0);
    // 0x80084E04: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80084E08: slt         $at, $s0, $t8
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80084E0C: bnel        $at, $zero, L_80084E30
    if (ctx->r1 != 0) {
        // 0x80084E10: slt         $at, $t1, $t2
        ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
            goto L_80084E30;
    }
    goto skip_2;
    // 0x80084E10: slt         $at, $t1, $t2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
    skip_2:
    // 0x80084E14: lbu         $t9, 0x1($a2)
    ctx->r25 = MEM_BU(ctx->r6, 0X1);
    // 0x80084E18: slt         $at, $t9, $a1
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80084E1C: bnel        $at, $zero, L_80084E30
    if (ctx->r1 != 0) {
        // 0x80084E20: slt         $at, $t1, $t2
        ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
            goto L_80084E30;
    }
    goto skip_3;
    // 0x80084E20: slt         $at, $t1, $t2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
    skip_3:
    // 0x80084E24: b           L_80084E74
    // 0x80084E28: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
        goto L_80084E74;
    // 0x80084E28: or          $v0, $a3, $zero
    ctx->r2 = ctx->r7 | 0;
    // 0x80084E2C: slt         $at, $t1, $t2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
L_80084E30:
    // 0x80084E30: bne         $at, $zero, L_80084E58
    if (ctx->r1 != 0) {
        // 0x80084E34: nop
    
            goto L_80084E58;
    }
    // 0x80084E34: nop

    // 0x80084E38: lbu         $t3, 0x0($a2)
    ctx->r11 = MEM_BU(ctx->r6, 0X0);
    // 0x80084E3C: slt         $at, $s0, $t3
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x80084E40: beql        $at, $zero, L_80084E64
    if (ctx->r1 == 0) {
        // 0x80084E44: addiu       $v1, $a0, 0x1
        ctx->r3 = ADD32(ctx->r4, 0X1);
            goto L_80084E64;
    }
    goto skip_4;
    // 0x80084E44: addiu       $v1, $a0, 0x1
    ctx->r3 = ADD32(ctx->r4, 0X1);
    skip_4:
    // 0x80084E48: lbu         $t4, 0x3($a2)
    ctx->r12 = MEM_BU(ctx->r6, 0X3);
    // 0x80084E4C: slt         $at, $t4, $t1
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x80084E50: bnel        $at, $zero, L_80084E64
    if (ctx->r1 != 0) {
        // 0x80084E54: addiu       $v1, $a0, 0x1
        ctx->r3 = ADD32(ctx->r4, 0X1);
            goto L_80084E64;
    }
    goto skip_5;
    // 0x80084E54: addiu       $v1, $a0, 0x1
    ctx->r3 = ADD32(ctx->r4, 0X1);
    skip_5:
L_80084E58:
    // 0x80084E58: b           L_80084E64
    // 0x80084E5C: addiu       $t0, $a0, -0x1
    ctx->r8 = ADD32(ctx->r4, -0X1);
        goto L_80084E64;
    // 0x80084E5C: addiu       $t0, $a0, -0x1
    ctx->r8 = ADD32(ctx->r4, -0X1);
    // 0x80084E60: addiu       $v1, $a0, 0x1
    ctx->r3 = ADD32(ctx->r4, 0X1);
L_80084E64:
    // 0x80084E64: slt         $at, $t0, $v1
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80084E68: beql        $at, $zero, L_80084DBC
    if (ctx->r1 == 0) {
        // 0x80084E6C: addu        $a1, $v1, $t0
        ctx->r5 = ADD32(ctx->r3, ctx->r8);
            goto L_80084DBC;
    }
    goto skip_6;
    // 0x80084E6C: addu        $a1, $v1, $t0
    ctx->r5 = ADD32(ctx->r3, ctx->r8);
    skip_6:
L_80084E70:
    // 0x80084E70: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80084E74:
    // 0x80084E74: lw          $s0, 0x4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4);
    // 0x80084E78: jr          $ra
    // 0x80084E7C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80084E7C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void __vsVol(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80084E80: lbu         $t6, 0x36($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X36);
    // 0x80084E84: lbu         $t7, 0x33($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X33);
    // 0x80084E88: lbu         $t9, 0x30($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X30);
    // 0x80084E8C: lbu         $t2, 0x31($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X31);
    // 0x80084E90: multu       $t6, $t7
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80084E94: lw          $t1, 0x60($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X60);
    // 0x80084E98: lw          $t6, 0x20($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X20);
    // 0x80084E9C: sll         $t3, $t2, 4
    ctx->r11 = S32(ctx->r10 << 4);
    // 0x80084EA0: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x80084EA4: lbu         $t5, 0x9($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X9);
    // 0x80084EA8: lbu         $t7, 0xD($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0XD);
    // 0x80084EAC: mflo        $t8
    ctx->r24 = lo;
    // 0x80084EB0: nop

    // 0x80084EB4: nop

    // 0x80084EB8: multu       $t8, $t9
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80084EBC: lh          $t9, 0x32($a1)
    ctx->r25 = MEM_H(ctx->r5, 0X32);
    // 0x80084EC0: mflo        $v1
    ctx->r3 = lo;
    // 0x80084EC4: sra         $t0, $v1, 6
    ctx->r8 = S32(SIGNED(ctx->r3) >> 6);
    // 0x80084EC8: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
    // 0x80084ECC: multu       $t5, $t7
    result = U64(U32(ctx->r13)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80084ED0: mflo        $t8
    ctx->r24 = lo;
    // 0x80084ED4: nop

    // 0x80084ED8: nop

    // 0x80084EDC: multu       $t8, $t9
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80084EE0: mflo        $a2
    ctx->r6 = lo;
    // 0x80084EE4: sra         $t0, $a2, 14
    ctx->r8 = S32(SIGNED(ctx->r6) >> 14);
    // 0x80084EE8: nop

    // 0x80084EEC: multu       $v1, $t0
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80084EF0: mflo        $v1
    ctx->r3 = lo;
    // 0x80084EF4: srl         $t2, $v1, 15
    ctx->r10 = S32(U32(ctx->r3) >> 15);
    // 0x80084EF8: sll         $v0, $t2, 16
    ctx->r2 = S32(ctx->r10 << 16);
    // 0x80084EFC: sra         $t1, $v0, 16
    ctx->r9 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80084F00: jr          $ra
    // 0x80084F04: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    return;
    // 0x80084F04: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
;}
RECOMP_FUNC void __vsDelta(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80084F08: lw          $t6, 0x24($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X24);
    // 0x80084F0C: addiu       $v0, $zero, 0x3E8
    ctx->r2 = ADD32(0, 0X3E8);
    // 0x80084F10: subu        $v1, $t6, $a1
    ctx->r3 = SUB32(ctx->r14, ctx->r5);
    // 0x80084F14: bltz        $v1, L_80084F24
    if (SIGNED(ctx->r3) < 0) {
        // 0x80084F18: nop
    
            goto L_80084F24;
    }
    // 0x80084F18: nop

    // 0x80084F1C: jr          $ra
    // 0x80084F20: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80084F20: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80084F24:
    // 0x80084F24: jr          $ra
    // 0x80084F28: nop

    return;
    // 0x80084F28: nop

;}
RECOMP_FUNC void __vsPan(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80084F2C: lbu         $t7, 0x31($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X31);
    // 0x80084F30: lw          $t6, 0x60($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X60);
    // 0x80084F34: lw          $t1, 0x20($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X20);
    // 0x80084F38: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x80084F3C: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x80084F40: lbu         $t0, 0x7($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X7);
    // 0x80084F44: lbu         $t2, 0xC($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0XC);
    // 0x80084F48: addu        $v1, $t0, $t2
    ctx->r3 = ADD32(ctx->r8, ctx->r10);
    // 0x80084F4C: addiu       $v1, $v1, -0x40
    ctx->r3 = ADD32(ctx->r3, -0X40);
    // 0x80084F50: bgtzl       $v1, L_80084F60
    if (SIGNED(ctx->r3) > 0) {
        // 0x80084F54: slti        $at, $v1, 0x7F
        ctx->r1 = SIGNED(ctx->r3) < 0X7F ? 1 : 0;
            goto L_80084F60;
    }
    goto skip_0;
    // 0x80084F54: slti        $at, $v1, 0x7F
    ctx->r1 = SIGNED(ctx->r3) < 0X7F ? 1 : 0;
    skip_0:
    // 0x80084F58: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80084F5C: slti        $at, $v1, 0x7F
    ctx->r1 = SIGNED(ctx->r3) < 0X7F ? 1 : 0;
L_80084F60:
    // 0x80084F60: bne         $at, $zero, L_80084F6C
    if (ctx->r1 != 0) {
        // 0x80084F64: nop
    
            goto L_80084F6C;
    }
    // 0x80084F64: nop

    // 0x80084F68: addiu       $v1, $zero, 0x7F
    ctx->r3 = ADD32(0, 0X7F);
L_80084F6C:
    // 0x80084F6C: jr          $ra
    // 0x80084F70: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    return;
    // 0x80084F70: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
;}
RECOMP_FUNC void __seqpReleaseVoice(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80084F74: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80084F78: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80084F7C: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80084F80: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80084F84: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80084F88: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80084F8C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80084F90: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80084F94: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80084F98: sw          $a2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r6;
    // 0x80084F9C: lw          $s6, 0x10($a1)
    ctx->r22 = MEM_W(ctx->r5, 0X10);
    // 0x80084FA0: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x80084FA4: or          $s5, $a1, $zero
    ctx->r21 = ctx->r5 | 0;
    // 0x80084FA8: lbu         $t6, 0x34($s6)
    ctx->r14 = MEM_BU(ctx->r22, 0X34);
    // 0x80084FAC: bnel        $t6, $zero, L_80085018
    if (ctx->r14 != 0) {
        // 0x80084FB0: addiu       $t2, $zero, 0x3
        ctx->r10 = ADD32(0, 0X3);
            goto L_80085018;
    }
    goto skip_0;
    // 0x80084FB0: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    skip_0:
    // 0x80084FB4: lw          $s0, 0x50($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X50);
    // 0x80084FB8: addiu       $s3, $zero, 0x6
    ctx->r19 = ADD32(0, 0X6);
    // 0x80084FBC: beql        $s0, $zero, L_80085018
    if (ctx->r16 == 0) {
        // 0x80084FC0: addiu       $t2, $zero, 0x3
        ctx->r10 = ADD32(0, 0X3);
            goto L_80085018;
    }
    goto skip_1;
    // 0x80084FC0: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    skip_1:
L_80084FC4:
    // 0x80084FC4: lh          $t7, 0xC($s0)
    ctx->r15 = MEM_H(ctx->r16, 0XC);
    // 0x80084FC8: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x80084FCC: bne         $s3, $t7, L_8008500C
    if (ctx->r19 != ctx->r15) {
        // 0x80084FD0: nop
    
            goto L_8008500C;
    }
    // 0x80084FD0: nop

    // 0x80084FD4: lw          $t8, 0x10($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X10);
    // 0x80084FD8: bne         $s5, $t8, L_8008500C
    if (ctx->r21 != ctx->r24) {
        // 0x80084FDC: nop
    
            goto L_8008500C;
    }
    // 0x80084FDC: nop

    // 0x80084FE0: beq         $s1, $zero, L_80084FF8
    if (ctx->r17 == 0) {
        // 0x80084FE4: addiu       $s2, $s4, 0x48
        ctx->r18 = ADD32(ctx->r20, 0X48);
            goto L_80084FF8;
    }
    // 0x80084FE4: addiu       $s2, $s4, 0x48
    ctx->r18 = ADD32(ctx->r20, 0X48);
    // 0x80084FE8: lw          $t9, 0x8($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X8);
    // 0x80084FEC: lw          $t0, 0x8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X8);
    // 0x80084FF0: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x80084FF4: sw          $t1, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r9;
L_80084FF8:
    // 0x80084FF8: jal         0x8007DE20
    // 0x80084FFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    alUnlink(rdram, ctx);
        goto after_0;
    // 0x80084FFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x80085000: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80085004: jal         0x8007DDFC
    // 0x80085008: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    alLink(rdram, ctx);
        goto after_1;
    // 0x80085008: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_1:
L_8008500C:
    // 0x8008500C: bne         $s1, $zero, L_80084FC4
    if (ctx->r17 != 0) {
        // 0x80085010: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_80084FC4;
    }
    // 0x80085010: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x80085014: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
L_80085018:
    // 0x80085018: sb          $zero, 0x33($s6)
    MEM_B(0X33, ctx->r22) = 0;
    // 0x8008501C: sb          $t2, 0x34($s6)
    MEM_B(0X34, ctx->r22) = ctx->r10;
    // 0x80085020: sb          $zero, 0x30($s6)
    MEM_B(0X30, ctx->r22) = 0;
    // 0x80085024: lw          $t4, 0x68($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X68);
    // 0x80085028: lw          $t3, 0x1C($s4)
    ctx->r11 = MEM_W(ctx->r20, 0X1C);
    // 0x8008502C: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80085030: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80085034: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x80085038: sw          $t5, 0x24($s6)
    MEM_W(0X24, ctx->r22) = ctx->r13;
    // 0x8008503C: lw          $a0, 0x14($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X14);
    // 0x80085040: jal         0x80089C60
    // 0x80085044: addiu       $s2, $s4, 0x48
    ctx->r18 = ADD32(ctx->r20, 0X48);
    alSeqpSetVoicePriority(rdram, ctx);
        goto after_2;
    // 0x80085044: addiu       $s2, $s4, 0x48
    ctx->r18 = ADD32(ctx->r20, 0X48);
    after_2:
    // 0x80085048: lw          $a0, 0x14($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X14);
    // 0x8008504C: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80085050: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80085054: jal         0x80085940
    // 0x80085058: lw          $a3, 0x68($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X68);
    alSynSetVol(rdram, ctx);
        goto after_3;
    // 0x80085058: lw          $a3, 0x68($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X68);
    after_3:
    // 0x8008505C: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x80085060: sh          $t6, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r14;
    // 0x80085064: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x80085068: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8008506C: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    // 0x80085070: jal         0x80085580
    // 0x80085074: lw          $a2, 0x68($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X68);
    alEvtqPostEvent(rdram, ctx);
        goto after_4;
    // 0x80085074: lw          $a2, 0x68($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X68);
    after_4:
    // 0x80085078: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8008507C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80085080: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80085084: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80085088: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8008508C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80085090: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80085094: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80085098: jr          $ra
    // 0x8008509C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x8008509C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void __voiceNeedsNoteKill(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800850A0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800850A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800850A8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x800850AC: lw          $a3, 0x50($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X50);
    // 0x800850B0: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x800850B4: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800850B8: beq         $a3, $zero, L_80085130
    if (ctx->r7 == 0) {
        // 0x800850BC: addiu       $a0, $zero, 0x5
        ctx->r4 = ADD32(0, 0X5);
            goto L_80085130;
    }
    // 0x800850BC: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
L_800850C0:
    // 0x800850C0: lh          $t7, 0xC($a3)
    ctx->r15 = MEM_H(ctx->r7, 0XC);
    // 0x800850C4: lw          $v1, 0x8($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X8);
    // 0x800850C8: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x800850CC: bne         $a0, $t7, L_80085128
    if (ctx->r4 != ctx->r15) {
        // 0x800850D0: addu        $t0, $t0, $v1
        ctx->r8 = ADD32(ctx->r8, ctx->r3);
            goto L_80085128;
    }
    // 0x800850D0: addu        $t0, $t0, $v1
    ctx->r8 = ADD32(ctx->r8, ctx->r3);
    // 0x800850D4: lw          $t8, 0x10($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X10);
    // 0x800850D8: bne         $a1, $t8, L_80085128
    if (ctx->r5 != ctx->r24) {
        // 0x800850DC: slt         $at, $a2, $t0
        ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r8) ? 1 : 0;
            goto L_80085128;
    }
    // 0x800850DC: slt         $at, $a2, $t0
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x800850E0: beq         $at, $zero, L_80085120
    if (ctx->r1 == 0) {
        // 0x800850E4: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_80085120;
    }
    // 0x800850E4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x800850E8: beql        $v0, $zero, L_80085100
    if (ctx->r2 == 0) {
        // 0x800850EC: sw          $a3, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r7;
            goto L_80085100;
    }
    goto skip_0;
    // 0x800850EC: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    skip_0:
    // 0x800850F0: lw          $t9, 0x8($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X8);
    // 0x800850F4: addu        $t2, $t9, $v1
    ctx->r10 = ADD32(ctx->r25, ctx->r3);
    // 0x800850F8: sw          $t2, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r10;
    // 0x800850FC: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
L_80085100:
    // 0x80085100: jal         0x8007DE20
    // 0x80085104: sb          $t1, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r9;
    alUnlink(rdram, ctx);
        goto after_0;
    // 0x80085104: sb          $t1, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r9;
    after_0:
    // 0x80085108: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x8008510C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80085110: jal         0x8007DDFC
    // 0x80085114: addiu       $a1, $a1, 0x48
    ctx->r5 = ADD32(ctx->r5, 0X48);
    alLink(rdram, ctx);
        goto after_1;
    // 0x80085114: addiu       $a1, $a1, 0x48
    ctx->r5 = ADD32(ctx->r5, 0X48);
    after_1:
    // 0x80085118: b           L_80085130
    // 0x8008511C: lbu         $t1, 0x1F($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X1F);
        goto L_80085130;
    // 0x8008511C: lbu         $t1, 0x1F($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X1F);
L_80085120:
    // 0x80085120: b           L_80085130
    // 0x80085124: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
        goto L_80085130;
    // 0x80085124: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
L_80085128:
    // 0x80085128: bne         $v0, $zero, L_800850C0
    if (ctx->r2 != 0) {
        // 0x8008512C: or          $a3, $v0, $zero
        ctx->r7 = ctx->r2 | 0;
            goto L_800850C0;
    }
    // 0x8008512C: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
L_80085130:
    // 0x80085130: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80085134: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80085138: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8008513C: jr          $ra
    // 0x80085140: nop

    return;
    // 0x80085140: nop

;}
RECOMP_FUNC void __initFromBank(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80085144: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80085148: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8008514C: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x80085150: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80085154: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80085158: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8008515C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80085160: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x80085164: lw          $s1, 0xC($v0)
    ctx->r17 = MEM_W(ctx->r2, 0XC);
L_80085168:
    // 0x80085168: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8008516C: beql        $s1, $zero, L_80085168
    if (ctx->r17 == 0) {
        // 0x80085170: lw          $s1, 0xC($v0)
        ctx->r17 = MEM_W(ctx->r2, 0XC);
            goto L_80085168;
    }
    goto skip_0;
    // 0x80085170: lw          $s1, 0xC($v0)
    ctx->r17 = MEM_W(ctx->r2, 0XC);
    skip_0:
    // 0x80085174: lbu         $t6, 0x34($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X34);
    // 0x80085178: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8008517C: blez        $t6, L_800851B0
    if (SIGNED(ctx->r14) <= 0) {
        // 0x80085180: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_800851B0;
    }
    // 0x80085180: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_80085184:
    // 0x80085184: jal         0x8008524C
    // 0x80085188: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    __resetPerfChanState(rdram, ctx);
        goto after_0;
    // 0x80085188: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
    // 0x8008518C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80085190: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80085194: jal         0x800851F8
    // 0x80085198: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    __setInstChanState(rdram, ctx);
        goto after_1;
    // 0x80085198: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_1:
    // 0x8008519C: lbu         $t7, 0x34($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0X34);
    // 0x800851A0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800851A4: slt         $at, $s0, $t7
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x800851A8: bnel        $at, $zero, L_80085184
    if (ctx->r1 != 0) {
        // 0x800851AC: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_80085184;
    }
    goto skip_1;
    // 0x800851AC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    skip_1:
L_800851B0:
    // 0x800851B0: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800851B4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800851B8: lw          $t9, 0x8($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X8);
    // 0x800851BC: beql        $t9, $zero, L_800851E4
    if (ctx->r25 == 0) {
        // 0x800851C0: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_800851E4;
    }
    goto skip_2;
    // 0x800851C0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_2:
    // 0x800851C4: jal         0x8008524C
    // 0x800851C8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    __resetPerfChanState(rdram, ctx);
        goto after_2;
    // 0x800851C8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
    // 0x800851CC: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800851D0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800851D4: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x800851D8: jal         0x800851F8
    // 0x800851DC: lw          $a1, 0x8($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X8);
    __setInstChanState(rdram, ctx);
        goto after_3;
    // 0x800851DC: lw          $a1, 0x8($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X8);
    after_3:
    // 0x800851E0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800851E4:
    // 0x800851E4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800851E8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800851EC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800851F0: jr          $ra
    // 0x800851F4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800851F4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void __setInstChanState(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800851F8: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x800851FC: sll         $v0, $a2, 4
    ctx->r2 = S32(ctx->r6 << 4);
    // 0x80085200: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x80085204: sw          $a1, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r5;
    // 0x80085208: lw          $t9, 0x60($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X60);
    // 0x8008520C: lbu         $t8, 0x1($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0X1);
    // 0x80085210: addu        $t0, $t9, $v0
    ctx->r8 = ADD32(ctx->r25, ctx->r2);
    // 0x80085214: sb          $t8, 0x7($t0)
    MEM_B(0X7, ctx->r8) = ctx->r24;
    // 0x80085218: lw          $t2, 0x60($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X60);
    // 0x8008521C: lbu         $t1, 0x0($a1)
    ctx->r9 = MEM_BU(ctx->r5, 0X0);
    // 0x80085220: addu        $t3, $t2, $v0
    ctx->r11 = ADD32(ctx->r10, ctx->r2);
    // 0x80085224: sb          $t1, 0x9($t3)
    MEM_B(0X9, ctx->r11) = ctx->r9;
    // 0x80085228: lw          $t5, 0x60($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X60);
    // 0x8008522C: lbu         $t4, 0x2($a1)
    ctx->r12 = MEM_BU(ctx->r5, 0X2);
    // 0x80085230: addu        $t6, $t5, $v0
    ctx->r14 = ADD32(ctx->r13, ctx->r2);
    // 0x80085234: sb          $t4, 0x8($t6)
    MEM_B(0X8, ctx->r14) = ctx->r12;
    // 0x80085238: lw          $t9, 0x60($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X60);
    // 0x8008523C: lh          $t7, 0xC($a1)
    ctx->r15 = MEM_H(ctx->r5, 0XC);
    // 0x80085240: addu        $t8, $t9, $v0
    ctx->r24 = ADD32(ctx->r25, ctx->r2);
    // 0x80085244: jr          $ra
    // 0x80085248: sh          $t7, 0x4($t8)
    MEM_H(0X4, ctx->r24) = ctx->r15;
    return;
    // 0x80085248: sh          $t7, 0x4($t8)
    MEM_H(0X4, ctx->r24) = ctx->r15;
;}
RECOMP_FUNC void __resetPerfChanState(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008524C: lw          $t6, 0x60($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X60);
    // 0x80085250: sll         $v0, $a1, 4
    ctx->r2 = S32(ctx->r5 << 4);
    // 0x80085254: addiu       $t0, $zero, 0x40
    ctx->r8 = ADD32(0, 0X40);
    // 0x80085258: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x8008525C: sb          $zero, 0x6($t7)
    MEM_B(0X6, ctx->r15) = 0;
    // 0x80085260: lw          $t8, 0x60($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X60);
    // 0x80085264: addiu       $t3, $zero, 0x7F
    ctx->r11 = ADD32(0, 0X7F);
    // 0x80085268: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x8008526C: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x80085270: sb          $zero, 0xA($t9)
    MEM_B(0XA, ctx->r25) = 0;
    // 0x80085274: lw          $t1, 0x60($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X60);
    // 0x80085278: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8008527C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80085280: addu        $t2, $t1, $v0
    ctx->r10 = ADD32(ctx->r9, ctx->r2);
    // 0x80085284: sb          $t0, 0x7($t2)
    MEM_B(0X7, ctx->r10) = ctx->r8;
    // 0x80085288: lw          $t4, 0x60($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X60);
    // 0x8008528C: addiu       $t0, $zero, 0xC8
    ctx->r8 = ADD32(0, 0XC8);
    // 0x80085290: addu        $t5, $t4, $v0
    ctx->r13 = ADD32(ctx->r12, ctx->r2);
    // 0x80085294: sb          $t3, 0x9($t5)
    MEM_B(0X9, ctx->r13) = ctx->r11;
    // 0x80085298: lw          $t7, 0x60($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X60);
    // 0x8008529C: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x800852A0: sb          $t6, 0x8($t8)
    MEM_B(0X8, ctx->r24) = ctx->r14;
    // 0x800852A4: lw          $t9, 0x60($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X60);
    // 0x800852A8: addu        $t1, $t9, $v0
    ctx->r9 = ADD32(ctx->r25, ctx->r2);
    // 0x800852AC: sb          $zero, 0xB($t1)
    MEM_B(0XB, ctx->r9) = 0;
    // 0x800852B0: lw          $t2, 0x60($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X60);
    // 0x800852B4: addu        $t4, $t2, $v0
    ctx->r12 = ADD32(ctx->r10, ctx->r2);
    // 0x800852B8: sh          $t0, 0x4($t4)
    MEM_H(0X4, ctx->r12) = ctx->r8;
    // 0x800852BC: lw          $t3, 0x60($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X60);
    // 0x800852C0: addu        $t5, $t3, $v0
    ctx->r13 = ADD32(ctx->r11, ctx->r2);
    // 0x800852C4: jr          $ra
    // 0x800852C8: swc1        $f4, 0xC($t5)
    MEM_W(0XC, ctx->r13) = ctx->f4.u32l;
    return;
    // 0x800852C8: swc1        $f4, 0xC($t5)
    MEM_W(0XC, ctx->r13) = ctx->f4.u32l;
;}
RECOMP_FUNC void __initChanState(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800852CC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800852D0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800852D4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800852D8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800852DC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800852E0: lbu         $t6, 0x34($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X34);
    // 0x800852E4: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x800852E8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800852EC: blez        $t6, L_80085324
    if (SIGNED(ctx->r14) <= 0) {
        // 0x800852F0: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_80085324;
    }
    // 0x800852F0: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x800852F4: lw          $t7, 0x60($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X60);
L_800852F8:
    // 0x800852F8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800852FC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80085300: addu        $t8, $t7, $s2
    ctx->r24 = ADD32(ctx->r15, ctx->r18);
    // 0x80085304: jal         0x8008524C
    // 0x80085308: sw          $zero, 0x0($t8)
    MEM_W(0X0, ctx->r24) = 0;
    __resetPerfChanState(rdram, ctx);
        goto after_0;
    // 0x80085308: sw          $zero, 0x0($t8)
    MEM_W(0X0, ctx->r24) = 0;
    after_0:
    // 0x8008530C: lbu         $t9, 0x34($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X34);
    // 0x80085310: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80085314: addiu       $s2, $s2, 0x10
    ctx->r18 = ADD32(ctx->r18, 0X10);
    // 0x80085318: slt         $at, $s0, $t9
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8008531C: bnel        $at, $zero, L_800852F8
    if (ctx->r1 != 0) {
        // 0x80085320: lw          $t7, 0x60($s1)
        ctx->r15 = MEM_W(ctx->r17, 0X60);
            goto L_800852F8;
    }
    goto skip_0;
    // 0x80085320: lw          $t7, 0x60($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X60);
    skip_0:
L_80085324:
    // 0x80085324: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80085328: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8008532C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80085330: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80085334: jr          $ra
    // 0x80085338: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80085338: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void __seqpStopOsc(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008533C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80085340: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80085344: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x80085348: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x8008534C: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x80085350: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x80085354: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80085358: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8008535C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80085360: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80085364: lw          $s0, 0x50($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X50);
    // 0x80085368: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x8008536C: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x80085370: beq         $s0, $zero, L_80085414
    if (ctx->r16 == 0) {
        // 0x80085374: addiu       $s7, $zero, 0x17
        ctx->r23 = ADD32(0, 0X17);
            goto L_80085414;
    }
    // 0x80085374: addiu       $s7, $zero, 0x17
    ctx->r23 = ADD32(0, 0X17);
    // 0x80085378: addiu       $s6, $zero, 0x16
    ctx->r22 = ADD32(0, 0X16);
L_8008537C:
    // 0x8008537C: lh          $s3, 0xC($s0)
    ctx->r19 = MEM_H(ctx->r16, 0XC);
    // 0x80085380: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x80085384: beql        $s3, $s6, L_80085398
    if (ctx->r19 == ctx->r22) {
        // 0x80085388: lw          $t6, 0x10($s0)
        ctx->r14 = MEM_W(ctx->r16, 0X10);
            goto L_80085398;
    }
    goto skip_0;
    // 0x80085388: lw          $t6, 0x10($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X10);
    skip_0:
    // 0x8008538C: bne         $s3, $s7, L_8008540C
    if (ctx->r19 != ctx->r23) {
        // 0x80085390: nop
    
            goto L_8008540C;
    }
    // 0x80085390: nop

    // 0x80085394: lw          $t6, 0x10($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X10);
L_80085398:
    // 0x80085398: bne         $s2, $t6, L_8008540C
    if (ctx->r18 != ctx->r14) {
        // 0x8008539C: nop
    
            goto L_8008540C;
    }
    // 0x8008539C: nop

    // 0x800853A0: lw          $t9, 0x78($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X78);
    // 0x800853A4: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x800853A8: addiu       $s4, $s5, 0x48
    ctx->r20 = ADD32(ctx->r21, 0X48);
    // 0x800853AC: jalr        $t9
    // 0x800853B0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x800853B0: nop

    after_0:
    // 0x800853B4: jal         0x8007DE20
    // 0x800853B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    alUnlink(rdram, ctx);
        goto after_1;
    // 0x800853B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x800853BC: beq         $s1, $zero, L_800853D4
    if (ctx->r17 == 0) {
        // 0x800853C0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800853D4;
    }
    // 0x800853C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800853C4: lw          $t7, 0x8($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X8);
    // 0x800853C8: lw          $t8, 0x8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8);
    // 0x800853CC: addu        $t0, $t7, $t8
    ctx->r8 = ADD32(ctx->r15, ctx->r24);
    // 0x800853D0: sw          $t0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r8;
L_800853D4:
    // 0x800853D4: jal         0x8007DDFC
    // 0x800853D8: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    alLink(rdram, ctx);
        goto after_2;
    // 0x800853D8: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_2:
    // 0x800853DC: bnel        $s3, $s6, L_800853F8
    if (ctx->r19 != ctx->r22) {
        // 0x800853E0: lbu         $t3, 0x37($s2)
        ctx->r11 = MEM_BU(ctx->r18, 0X37);
            goto L_800853F8;
    }
    goto skip_1;
    // 0x800853E0: lbu         $t3, 0x37($s2)
    ctx->r11 = MEM_BU(ctx->r18, 0X37);
    skip_1:
    // 0x800853E4: lbu         $t1, 0x37($s2)
    ctx->r9 = MEM_BU(ctx->r18, 0X37);
    // 0x800853E8: andi        $t2, $t1, 0xFE
    ctx->r10 = ctx->r9 & 0XFE;
    // 0x800853EC: b           L_80085400
    // 0x800853F0: sb          $t2, 0x37($s2)
    MEM_B(0X37, ctx->r18) = ctx->r10;
        goto L_80085400;
    // 0x800853F0: sb          $t2, 0x37($s2)
    MEM_B(0X37, ctx->r18) = ctx->r10;
    // 0x800853F4: lbu         $t3, 0x37($s2)
    ctx->r11 = MEM_BU(ctx->r18, 0X37);
L_800853F8:
    // 0x800853F8: andi        $t4, $t3, 0xFD
    ctx->r12 = ctx->r11 & 0XFD;
    // 0x800853FC: sb          $t4, 0x37($s2)
    MEM_B(0X37, ctx->r18) = ctx->r12;
L_80085400:
    // 0x80085400: lbu         $t5, 0x37($s2)
    ctx->r13 = MEM_BU(ctx->r18, 0X37);
    // 0x80085404: beql        $t5, $zero, L_80085418
    if (ctx->r13 == 0) {
        // 0x80085408: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_80085418;
    }
    goto skip_2;
    // 0x80085408: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_2:
L_8008540C:
    // 0x8008540C: bne         $s1, $zero, L_8008537C
    if (ctx->r17 != 0) {
        // 0x80085410: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_8008537C;
    }
    // 0x80085410: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
L_80085414:
    // 0x80085414: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_80085418:
    // 0x80085418: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8008541C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80085420: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80085424: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80085428: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x8008542C: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x80085430: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x80085434: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x80085438: jr          $ra
    // 0x8008543C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8008543C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void alSeqpCalcUspt(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80085440: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x80085444: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80085448: addiu       $t8, $zero, 0x1E8
    ctx->r24 = ADD32(0, 0X1E8);
    // 0x8008544C: beql        $v0, $zero, L_80085470
    if (ctx->r2 == 0) {
        // 0x80085450: sw          $t8, 0x24($a0)
        MEM_W(0X24, ctx->r4) = ctx->r24;
            goto L_80085470;
    }
    goto skip_0;
    // 0x80085450: sw          $t8, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r24;
    skip_0:
    // 0x80085454: lwc1        $f4, 0x14($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X14);
    // 0x80085458: mul.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    // 0x8008545C: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x80085460: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x80085464: jr          $ra
    // 0x80085468: sw          $t7, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r15;
    return;
    // 0x80085468: sw          $t7, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r15;
    // 0x8008546C: sw          $t8, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r24;
L_80085470:
    // 0x80085470: jr          $ra
    // 0x80085474: nop

    return;
    // 0x80085474: nop

;}
RECOMP_FUNC void alEvtqNew(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80085480: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80085484: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80085488: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8008548C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80085490: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80085494: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80085498: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x8008549C: or          $s3, $a2, $zero
    ctx->r19 = ctx->r6 | 0;
    // 0x800854A0: sw          $zero, 0x10($a0)
    MEM_W(0X10, ctx->r4) = 0;
    // 0x800854A4: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
    // 0x800854A8: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x800854AC: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x800854B0: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x800854B4: blez        $a2, L_800854D8
    if (SIGNED(ctx->r6) <= 0) {
        // 0x800854B8: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_800854D8;
    }
    // 0x800854B8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800854BC: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
L_800854C0:
    // 0x800854C0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800854C4: jal         0x8007DDFC
    // 0x800854C8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    alLink(rdram, ctx);
        goto after_0;
    // 0x800854C8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_0:
    // 0x800854CC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800854D0: bne         $s0, $s3, L_800854C0
    if (ctx->r16 != ctx->r19) {
        // 0x800854D4: addiu       $s1, $s1, 0x1C
        ctx->r17 = ADD32(ctx->r17, 0X1C);
            goto L_800854C0;
    }
    // 0x800854D4: addiu       $s1, $s1, 0x1C
    ctx->r17 = ADD32(ctx->r17, 0X1C);
L_800854D8:
    // 0x800854D8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800854DC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800854E0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800854E4: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800854E8: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800854EC: jr          $ra
    // 0x800854F0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800854F0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void alEvtqNextEvent(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800854F4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800854F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800854FC: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80085500: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80085504: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80085508: jal         0x80075ED0
    // 0x8008550C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    osSetIntMask_recomp(rdram, ctx);
        goto after_0;
    // 0x8008550C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x80085510: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80085514: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80085518: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8008551C: lw          $s0, 0x8($t6)
    ctx->r16 = MEM_W(ctx->r14, 0X8);
    // 0x80085520: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80085524: beql        $s0, $zero, L_8008555C
    if (ctx->r16 == 0) {
        // 0x80085528: addiu       $t7, $zero, -0x1
        ctx->r15 = ADD32(0, -0X1);
            goto L_8008555C;
    }
    goto skip_0;
    // 0x80085528: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    skip_0:
    // 0x8008552C: jal         0x8007DE20
    // 0x80085530: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    alUnlink(rdram, ctx);
        goto after_1;
    // 0x80085530: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80085534: addiu       $a0, $s0, 0xC
    ctx->r4 = ADD32(ctx->r16, 0XC);
    // 0x80085538: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x8008553C: jal         0x80089C70
    // 0x80085540: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    alCopy(rdram, ctx);
        goto after_2;
    // 0x80085540: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x80085544: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80085548: jal         0x8007DDFC
    // 0x8008554C: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    alLink(rdram, ctx);
        goto after_3;
    // 0x8008554C: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    after_3:
    // 0x80085550: b           L_80085560
    // 0x80085554: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
        goto L_80085560;
    // 0x80085554: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
    // 0x80085558: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
L_8008555C:
    // 0x8008555C: sh          $t7, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r15;
L_80085560:
    // 0x80085560: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80085564: jal         0x80075ED0
    // 0x80085568: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    osSetIntMask_recomp(rdram, ctx);
        goto after_4;
    // 0x80085568: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    after_4:
    // 0x8008556C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80085570: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x80085574: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80085578: jr          $ra
    // 0x8008557C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8008557C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void alEvtqPostEvent(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80085580: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80085584: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80085588: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8008558C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80085590: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80085594: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x80085598: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8008559C: jal         0x80075ED0
    // 0x800855A0: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    osSetIntMask_recomp(rdram, ctx);
        goto after_0;
    // 0x800855A0: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    after_0:
    // 0x800855A4: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x800855A8: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x800855AC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800855B0: lw          $s0, 0x0($t6)
    ctx->r16 = MEM_W(ctx->r14, 0X0);
    // 0x800855B4: bne         $s0, $zero, L_800855CC
    if (ctx->r16 != 0) {
        // 0x800855B8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_800855CC;
    }
    // 0x800855B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800855BC: jal         0x80075ED0
    // 0x800855C0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    osSetIntMask_recomp(rdram, ctx);
        goto after_1;
    // 0x800855C0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x800855C4: b           L_80085690
    // 0x800855C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80085690;
    // 0x800855C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_800855CC:
    // 0x800855CC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800855D0: jal         0x8007DE20
    // 0x800855D4: sw          $a3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r7;
    alUnlink(rdram, ctx);
        goto after_2;
    // 0x800855D4: sw          $a3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r7;
    after_2:
    // 0x800855D8: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x800855DC: addiu       $a1, $s0, 0xC
    ctx->r5 = ADD32(ctx->r16, 0XC);
    // 0x800855E0: jal         0x80089C70
    // 0x800855E4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    alCopy(rdram, ctx);
        goto after_3;
    // 0x800855E4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_3:
    // 0x800855E8: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x800855EC: lui         $at, 0x7FFF
    ctx->r1 = S32(0X7FFF << 16);
    // 0x800855F0: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x800855F4: bne         $a3, $at, L_80085600
    if (ctx->r7 != ctx->r1) {
        // 0x800855F8: addiu       $t7, $zero, -0x1
        ctx->r15 = ADD32(0, -0X1);
            goto L_80085600;
    }
    // 0x800855F8: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x800855FC: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
L_80085600:
    // 0x80085600: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x80085604: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x80085608: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8008560C: beq         $v0, $at, L_80085684
    if (ctx->r2 == ctx->r1) {
        // 0x80085610: addiu       $a1, $v0, 0x8
        ctx->r5 = ADD32(ctx->r2, 0X8);
            goto L_80085684;
    }
    // 0x80085610: addiu       $a1, $v0, 0x8
    ctx->r5 = ADD32(ctx->r2, 0X8);
L_80085614:
    // 0x80085614: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x80085618: bnel        $v0, $zero, L_80085648
    if (ctx->r2 != 0) {
        // 0x8008561C: lw          $v1, 0x8($v0)
        ctx->r3 = MEM_W(ctx->r2, 0X8);
            goto L_80085648;
    }
    goto skip_0;
    // 0x8008561C: lw          $v1, 0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8);
    skip_0:
    // 0x80085620: beql        $t8, $zero, L_80085634
    if (ctx->r24 == 0) {
        // 0x80085624: sw          $a3, 0x8($s0)
        MEM_W(0X8, ctx->r16) = ctx->r7;
            goto L_80085634;
    }
    goto skip_1;
    // 0x80085624: sw          $a3, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r7;
    skip_1:
    // 0x80085628: b           L_80085634
    // 0x8008562C: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
        goto L_80085634;
    // 0x8008562C: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x80085630: sw          $a3, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r7;
L_80085634:
    // 0x80085634: jal         0x8007DDFC
    // 0x80085638: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    alLink(rdram, ctx);
        goto after_4;
    // 0x80085638: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8008563C: b           L_80085684
    // 0x80085640: nop

        goto L_80085684;
    // 0x80085640: nop

    // 0x80085644: lw          $v1, 0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8);
L_80085648:
    // 0x80085648: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8008564C: slt         $at, $a3, $v1
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80085650: beql        $at, $zero, L_8008567C
    if (ctx->r1 == 0) {
        // 0x80085654: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_8008567C;
    }
    goto skip_2;
    // 0x80085654: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    skip_2:
    // 0x80085658: sw          $a3, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r7;
    // 0x8008565C: lw          $t9, 0x8($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X8);
    // 0x80085660: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80085664: subu        $t0, $t9, $a3
    ctx->r8 = SUB32(ctx->r25, ctx->r7);
    // 0x80085668: jal         0x8007DDFC
    // 0x8008566C: sw          $t0, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r8;
    alLink(rdram, ctx);
        goto after_5;
    // 0x8008566C: sw          $t0, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r8;
    after_5:
    // 0x80085670: b           L_80085684
    // 0x80085674: nop

        goto L_80085684;
    // 0x80085674: nop

    // 0x80085678: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_8008567C:
    // 0x8008567C: bne         $v0, $zero, L_80085614
    if (ctx->r2 != 0) {
        // 0x80085680: subu        $a3, $a3, $v1
        ctx->r7 = SUB32(ctx->r7, ctx->r3);
            goto L_80085614;
    }
    // 0x80085680: subu        $a3, $a3, $v1
    ctx->r7 = SUB32(ctx->r7, ctx->r3);
L_80085684:
    // 0x80085684: jal         0x80075ED0
    // 0x80085688: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    osSetIntMask_recomp(rdram, ctx);
        goto after_6;
    // 0x80085688: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_6:
    // 0x8008568C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80085690:
    // 0x80085690: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80085694: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80085698: jr          $ra
    // 0x8008569C: nop

    return;
    // 0x8008569C: nop

;}
RECOMP_FUNC void alMoveAllToList(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800856A0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800856A4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800856A8: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x800856AC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800856B0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800856B4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800856B8: jal         0x80075ED0
    // 0x800856BC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    osSetIntMask_recomp(rdram, ctx);
        goto after_0;
    // 0x800856BC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x800856C0: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x800856C4: lw          $s0, 0x8($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X8);
    // 0x800856C8: beq         $s0, $zero, L_800856F0
    if (ctx->r16 == 0) {
        // 0x800856CC: nop
    
            goto L_800856F0;
    }
    // 0x800856CC: nop

L_800856D0:
    // 0x800856D0: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x800856D4: jal         0x8007DE20
    // 0x800856D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    alUnlink(rdram, ctx);
        goto after_1;
    // 0x800856D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x800856DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800856E0: jal         0x8007DDFC
    // 0x800856E4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    alLink(rdram, ctx);
        goto after_2;
    // 0x800856E4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_2:
    // 0x800856E8: bne         $s1, $zero, L_800856D0
    if (ctx->r17 != 0) {
        // 0x800856EC: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_800856D0;
    }
    // 0x800856EC: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
L_800856F0:
    // 0x800856F0: jal         0x80075ED0
    // 0x800856F4: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    osSetIntMask_recomp(rdram, ctx);
        goto after_3;
    // 0x800856F4: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_3:
    // 0x800856F8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800856FC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80085700: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80085704: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80085708: jr          $ra
    // 0x8008570C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8008570C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void alEvtqFlushType(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80085710: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80085714: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80085718: sll         $s3, $a1, 16
    ctx->r19 = S32(ctx->r5 << 16);
    // 0x8008571C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80085720: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x80085724: sra         $t6, $s3, 16
    ctx->r14 = S32(SIGNED(ctx->r19) >> 16);
    // 0x80085728: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8008572C: or          $s3, $t6, $zero
    ctx->r19 = ctx->r14 | 0;
    // 0x80085730: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80085734: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80085738: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x8008573C: jal         0x80075ED0
    // 0x80085740: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    osSetIntMask_recomp(rdram, ctx);
        goto after_0;
    // 0x80085740: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x80085744: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80085748: lw          $s0, 0x8($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X8);
    // 0x8008574C: beq         $s0, $zero, L_80085798
    if (ctx->r16 == 0) {
        // 0x80085750: nop
    
            goto L_80085798;
    }
    // 0x80085750: nop

L_80085754:
    // 0x80085754: lh          $t7, 0xC($s0)
    ctx->r15 = MEM_H(ctx->r16, 0XC);
    // 0x80085758: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x8008575C: bne         $s3, $t7, L_80085790
    if (ctx->r19 != ctx->r15) {
        // 0x80085760: nop
    
            goto L_80085790;
    }
    // 0x80085760: nop

    // 0x80085764: beq         $s1, $zero, L_8008577C
    if (ctx->r17 == 0) {
        // 0x80085768: nop
    
            goto L_8008577C;
    }
    // 0x80085768: nop

    // 0x8008576C: lw          $t8, 0x8($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X8);
    // 0x80085770: lw          $t9, 0x8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X8);
    // 0x80085774: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x80085778: sw          $t0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r8;
L_8008577C:
    // 0x8008577C: jal         0x8007DE20
    // 0x80085780: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    alUnlink(rdram, ctx);
        goto after_1;
    // 0x80085780: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80085784: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80085788: jal         0x8007DDFC
    // 0x8008578C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    alLink(rdram, ctx);
        goto after_2;
    // 0x8008578C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_2:
L_80085790:
    // 0x80085790: bne         $s1, $zero, L_80085754
    if (ctx->r17 != 0) {
        // 0x80085794: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_80085754;
    }
    // 0x80085794: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
L_80085798:
    // 0x80085798: jal         0x80075ED0
    // 0x8008579C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    osSetIntMask_recomp(rdram, ctx);
        goto after_3;
    // 0x8008579C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_3:
    // 0x800857A0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800857A4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800857A8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800857AC: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800857B0: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800857B4: jr          $ra
    // 0x800857B8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x800857B8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void alSynAddPlayer(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800857C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800857C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800857C8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x800857CC: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x800857D0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800857D4: jal         0x80075ED0
    // 0x800857D8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    osSetIntMask_recomp(rdram, ctx);
        goto after_0;
    // 0x800857D8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800857DC: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x800857E0: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x800857E4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800857E8: lw          $t6, 0x20($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X20);
    // 0x800857EC: sw          $t6, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r14;
    // 0x800857F0: lw          $t7, 0x0($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X0);
    // 0x800857F4: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x800857F8: jal         0x80075ED0
    // 0x800857FC: sw          $a1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r5;
    osSetIntMask_recomp(rdram, ctx);
        goto after_1;
    // 0x800857FC: sw          $a1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r5;
    after_1:
    // 0x80085800: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80085804: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80085808: jr          $ra
    // 0x8008580C: nop

    return;
    // 0x8008580C: nop

;}
RECOMP_FUNC void alSynStopVoice(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80085810: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80085814: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80085818: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8008581C: lw          $t6, 0x8($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X8);
    // 0x80085820: beql        $t6, $zero, L_8008587C
    if (ctx->r14 == 0) {
        // 0x80085824: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8008587C;
    }
    goto skip_0;
    // 0x80085824: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80085828: jal         0x8007E440
    // 0x8008582C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    __allocParam(rdram, ctx);
        goto after_0;
    // 0x8008582C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80085830: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x80085834: beq         $v0, $zero, L_80085878
    if (ctx->r2 == 0) {
        // 0x80085838: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_80085878;
    }
    // 0x80085838: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8008583C: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80085840: lw          $t9, 0x8($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X8);
    // 0x80085844: addiu       $t2, $zero, 0xF
    ctx->r10 = ADD32(0, 0XF);
    // 0x80085848: lw          $t8, 0x1C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X1C);
    // 0x8008584C: lw          $t0, 0xD8($t9)
    ctx->r8 = MEM_W(ctx->r25, 0XD8);
    // 0x80085850: sh          $t2, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r10;
    // 0x80085854: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x80085858: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x8008585C: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x80085860: lw          $t3, 0x8($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X8);
    // 0x80085864: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80085868: lw          $a0, 0xC($t3)
    ctx->r4 = MEM_W(ctx->r11, 0XC);
    // 0x8008586C: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x80085870: jalr        $t9
    // 0x80085874: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x80085874: nop

    after_1:
L_80085878:
    // 0x80085878: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8008587C:
    // 0x8008587C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80085880: jr          $ra
    // 0x80085884: nop

    return;
    // 0x80085884: nop

;}
RECOMP_FUNC void alSynFreeVoice(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80085890: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80085894: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80085898: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8008589C: lw          $a2, 0x8($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X8);
    // 0x800858A0: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x800858A4: beql        $a2, $zero, L_80085930
    if (ctx->r6 == 0) {
        // 0x800858A8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80085930;
    }
    goto skip_0;
    // 0x800858A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800858AC: lw          $t6, 0xD8($a2)
    ctx->r14 = MEM_W(ctx->r6, 0XD8);
    // 0x800858B0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800858B4: beql        $t6, $zero, L_8008591C
    if (ctx->r14 == 0) {
        // 0x800858B8: or          $a1, $a2, $zero
        ctx->r5 = ctx->r6 | 0;
            goto L_8008591C;
    }
    goto skip_1;
    // 0x800858B8: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    skip_1:
    // 0x800858BC: jal         0x8007E440
    // 0x800858C0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    __allocParam(rdram, ctx);
        goto after_0;
    // 0x800858C0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x800858C4: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x800858C8: beq         $v0, $zero, L_8008592C
    if (ctx->r2 == 0) {
        // 0x800858CC: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_8008592C;
    }
    // 0x800858CC: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x800858D0: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x800858D4: lw          $t9, 0x8($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X8);
    // 0x800858D8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800858DC: lw          $t8, 0x1C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X1C);
    // 0x800858E0: lw          $t0, 0xD8($t9)
    ctx->r8 = MEM_W(ctx->r25, 0XD8);
    // 0x800858E4: sh          $zero, 0x8($v0)
    MEM_H(0X8, ctx->r2) = 0;
    // 0x800858E8: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x800858EC: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x800858F0: lw          $t2, 0x8($a3)
    ctx->r10 = MEM_W(ctx->r7, 0X8);
    // 0x800858F4: sw          $t2, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r10;
    // 0x800858F8: lw          $t3, 0x8($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X8);
    // 0x800858FC: lw          $a0, 0xC($t3)
    ctx->r4 = MEM_W(ctx->r11, 0XC);
    // 0x80085900: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    // 0x80085904: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x80085908: jalr        $t9
    // 0x8008590C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x8008590C: nop

    after_1:
    // 0x80085910: b           L_80085928
    // 0x80085914: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
        goto L_80085928;
    // 0x80085914: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x80085918: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
L_8008591C:
    // 0x8008591C: jal         0x8007E4E8
    // 0x80085920: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    _freePVoice(rdram, ctx);
        goto after_2;
    // 0x80085920: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_2:
    // 0x80085924: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
L_80085928:
    // 0x80085928: sw          $zero, 0x8($a3)
    MEM_W(0X8, ctx->r7) = 0;
L_8008592C:
    // 0x8008592C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80085930:
    // 0x80085930: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80085934: jr          $ra
    // 0x80085938: nop

    return;
    // 0x80085938: nop

;}
RECOMP_FUNC void alSynSetVol(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80085940: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80085944: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80085948: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8008594C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80085950: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x80085954: lw          $t7, 0x8($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X8);
    // 0x80085958: beql        $t7, $zero, L_800859D0
    if (ctx->r15 == 0) {
        // 0x8008595C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800859D0;
    }
    goto skip_0;
    // 0x8008595C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80085960: jal         0x8007E440
    // 0x80085964: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    __allocParam(rdram, ctx);
        goto after_0;
    // 0x80085964: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x80085968: beq         $v0, $zero, L_800859CC
    if (ctx->r2 == 0) {
        // 0x8008596C: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_800859CC;
    }
    // 0x8008596C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80085970: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80085974: lw          $t8, 0x1C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X1C);
    // 0x80085978: addiu       $t3, $zero, 0xB
    ctx->r11 = ADD32(0, 0XB);
    // 0x8008597C: lw          $t0, 0x8($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X8);
    // 0x80085980: lw          $t1, 0xD8($t0)
    ctx->r9 = MEM_W(ctx->r8, 0XD8);
    // 0x80085984: sh          $t3, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r11;
    // 0x80085988: addu        $t2, $t8, $t1
    ctx->r10 = ADD32(ctx->r24, ctx->r9);
    // 0x8008598C: sw          $t2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r10;
    // 0x80085990: lh          $t4, 0x2A($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X2A);
    // 0x80085994: sw          $t4, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r12;
    // 0x80085998: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8008599C: jal         0x8007E56C
    // 0x800859A0: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    _timeToSamples(rdram, ctx);
        goto after_1;
    // 0x800859A0: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_1:
    // 0x800859A4: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x800859A8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800859AC: sw          $v0, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->r2;
    // 0x800859B0: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    // 0x800859B4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800859B8: lw          $t6, 0x8($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X8);
    // 0x800859BC: lw          $a0, 0xC($t6)
    ctx->r4 = MEM_W(ctx->r14, 0XC);
    // 0x800859C0: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x800859C4: jalr        $t9
    // 0x800859C8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x800859C8: nop

    after_2:
L_800859CC:
    // 0x800859CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800859D0:
    // 0x800859D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800859D4: jr          $ra
    // 0x800859D8: nop

    return;
    // 0x800859D8: nop

;}
RECOMP_FUNC void alSynSetPitch(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800859E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800859E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800859E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800859EC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x800859F0: lw          $t6, 0x8($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X8);
    // 0x800859F4: beql        $t6, $zero, L_80085A58
    if (ctx->r14 == 0) {
        // 0x800859F8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80085A58;
    }
    goto skip_0;
    // 0x800859F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800859FC: jal         0x8007E440
    // 0x80085A00: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    __allocParam(rdram, ctx);
        goto after_0;
    // 0x80085A00: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80085A04: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x80085A08: beq         $v0, $zero, L_80085A54
    if (ctx->r2 == 0) {
        // 0x80085A0C: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_80085A54;
    }
    // 0x80085A0C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x80085A10: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80085A14: lw          $t9, 0x8($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X8);
    // 0x80085A18: addiu       $t2, $zero, 0x7
    ctx->r10 = ADD32(0, 0X7);
    // 0x80085A1C: lw          $t8, 0x1C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X1C);
    // 0x80085A20: lw          $t0, 0xD8($t9)
    ctx->r8 = MEM_W(ctx->r25, 0XD8);
    // 0x80085A24: sh          $t2, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r10;
    // 0x80085A28: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80085A2C: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x80085A30: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x80085A34: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80085A38: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x80085A3C: swc1        $f4, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f4.u32l;
    // 0x80085A40: lw          $t3, 0x8($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X8);
    // 0x80085A44: lw          $a0, 0xC($t3)
    ctx->r4 = MEM_W(ctx->r11, 0XC);
    // 0x80085A48: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x80085A4C: jalr        $t9
    // 0x80085A50: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x80085A50: nop

    after_1:
L_80085A54:
    // 0x80085A54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80085A58:
    // 0x80085A58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80085A5C: jr          $ra
    // 0x80085A60: nop

    return;
    // 0x80085A60: nop

;}
