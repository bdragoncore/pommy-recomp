#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_actor_main_1899C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001899C: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x400189A0: addiu       $t6, $a1, -0x1
    ctx->r14 = ADD32(ctx->r5, -0X1);
    // 0x400189A4: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x400189A8: sltiu       $at, $t6, 0x32
    ctx->r1 = ctx->r14 < 0X32 ? 1 : 0;
    // 0x400189AC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x400189B0: beq         $at, $zero, L_40018BD8
    if (ctx->r1 == 0) {
        // 0x400189B4: sw          $ra, 0x54($sp)
        MEM_W(0X54, ctx->r29) = ctx->r31;
            goto L_40018BD8;
    }
    // 0x400189B4: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x400189B8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x400189BC: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x400189C0: addu        $at, $at, $t6
    gpr jr_addend_400189CC = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x400189C4: lw          $t6, -0xC4C($at)
    ctx->r14 = ADD32(ctx->r1, -0XC4C);
    // 0x400189C8: nop

    // 0x400189CC: jr          $t6
    // 0x400189D0: nop

    switch (jr_addend_400189CC >> 2) {
        case 0: goto L_400189D4; break;
        case 1: goto L_40018BD8; break;
        case 2: goto L_40018BD8; break;
        case 3: goto L_40018BD8; break;
        case 4: goto L_40018BD8; break;
        case 5: goto L_40018BD8; break;
        case 6: goto L_40018BD8; break;
        case 7: goto L_40018BD8; break;
        case 8: goto L_40018BD8; break;
        case 9: goto L_40018A20; break;
        case 10: goto L_40018BD8; break;
        case 11: goto L_40018BD8; break;
        case 12: goto L_40018BD8; break;
        case 13: goto L_40018BD8; break;
        case 14: goto L_40018BD8; break;
        case 15: goto L_40018BD8; break;
        case 16: goto L_40018BD8; break;
        case 17: goto L_40018BD8; break;
        case 18: goto L_40018BD8; break;
        case 19: goto L_40018BD8; break;
        case 20: goto L_40018BD8; break;
        case 21: goto L_40018BD8; break;
        case 22: goto L_40018BD8; break;
        case 23: goto L_40018BD8; break;
        case 24: goto L_40018A44; break;
        case 25: goto L_40018BD8; break;
        case 26: goto L_40018BD8; break;
        case 27: goto L_40018BD8; break;
        case 28: goto L_40018BD8; break;
        case 29: goto L_40018BD8; break;
        case 30: goto L_40018BD8; break;
        case 31: goto L_40018BD8; break;
        case 32: goto L_40018BD8; break;
        case 33: goto L_40018BD8; break;
        case 34: goto L_40018B74; break;
        case 35: goto L_40018BD8; break;
        case 36: goto L_40018BD8; break;
        case 37: goto L_40018BD8; break;
        case 38: goto L_40018BD8; break;
        case 39: goto L_40018BD8; break;
        case 40: goto L_40018BD8; break;
        case 41: goto L_40018BD8; break;
        case 42: goto L_40018B98; break;
        case 43: goto L_40018BD8; break;
        case 44: goto L_40018BD8; break;
        case 45: goto L_40018BD8; break;
        case 46: goto L_40018BD8; break;
        case 47: goto L_40018BD8; break;
        case 48: goto L_40018BD8; break;
        case 49: goto L_40018BA8; break;
        default: switch_error(__func__, 0x400189CC, 0x4001F3B4);
    }
    // 0x400189D0: nop

L_400189D4:
    // 0x400189D4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x400189D8: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x400189DC: lwc1        $f4, -0xB84($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0XB84);
    // 0x400189E0: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x400189E4: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x400189E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400189EC: addiu       $a1, $zero, 0x4F
    ctx->r5 = ADD32(0, 0X4F);
    // 0x400189F0: jal         0x4000120C
    // 0x400189F4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_actor_main_120C(rdram, ctx);
        goto after_0;
    // 0x400189F4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x400189F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400189FC: addiu       $a1, $zero, 0x2AE
    ctx->r5 = ADD32(0, 0X2AE);
    // 0x40018A00: jal         0x4000115C
    // 0x40018A04: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_1;
    // 0x40018A04: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x40018A08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40018A0C: addiu       $a1, $zero, 0x3C9
    ctx->r5 = ADD32(0, 0X3C9);
    // 0x40018A10: jal         0x4000115C
    // 0x40018A14: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_2;
    // 0x40018A14: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x40018A18: b           L_40018BDC
    // 0x40018A1C: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
        goto L_40018BDC;
    // 0x40018A1C: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_40018A20:
    // 0x40018A20: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x40018A24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40018A28: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x40018A2C: addiu       $a1, $zero, 0x593
    ctx->r5 = ADD32(0, 0X593);
    // 0x40018A30: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40018A34: jal         0x40008D64
    // 0x40018A38: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_3;
    // 0x40018A38: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x40018A3C: b           L_40018BDC
    // 0x40018A40: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
        goto L_40018BDC;
    // 0x40018A40: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_40018A44:
    // 0x40018A44: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x40018A48: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x40018A4C: jal         0x400006C4
    // 0x40018A50: addiu       $a2, $sp, 0x74
    ctx->r6 = ADD32(ctx->r29, 0X74);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_4;
    // 0x40018A50: addiu       $a2, $sp, 0x74
    ctx->r6 = ADD32(ctx->r29, 0X74);
    after_4:
    // 0x40018A54: addiu       $v0, $s0, 0x324
    ctx->r2 = ADD32(ctx->r16, 0X324);
    // 0x40018A58: addiu       $a1, $v0, 0xC
    ctx->r5 = ADD32(ctx->r2, 0XC);
    // 0x40018A5C: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    // 0x40018A60: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x40018A64: addiu       $a2, $zero, 0x6FB
    ctx->r6 = ADD32(0, 0X6FB);
    // 0x40018A68: addiu       $a3, $zero, 0x1D
    ctx->r7 = ADD32(0, 0X1D);
    // 0x40018A6C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x40018A70: jal         0x40000F34
    // 0x40018A74: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    ovl_actor_main_F34(rdram, ctx);
        goto after_5;
    // 0x40018A74: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_5:
    // 0x40018A78: lw          $s0, 0x5C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X5C);
    // 0x40018A7C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x40018A80: lw          $a2, 0xC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XC);
    // 0x40018A84: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x40018A88: addiu       $a1, $sp, 0x70
    ctx->r5 = ADD32(ctx->r29, 0X70);
    // 0x40018A8C: jal         0x40000F34
    // 0x40018A90: addiu       $a3, $zero, 0x6FB
    ctx->r7 = ADD32(0, 0X6FB);
    ovl_actor_main_F34(rdram, ctx);
        goto after_6;
    // 0x40018A90: addiu       $a3, $zero, 0x6FB
    ctx->r7 = ADD32(0, 0X6FB);
    after_6:
    // 0x40018A94: lw          $a1, 0xC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC);
    // 0x40018A98: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x40018A9C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x40018AA0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x40018AA4: lw          $a2, 0x70($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X70);
    // 0x40018AA8: addiu       $t8, $zero, 0x1B
    ctx->r24 = ADD32(0, 0X1B);
    // 0x40018AAC: addiu       $t9, $zero, 0xB
    ctx->r25 = ADD32(0, 0XB);
    // 0x40018AB0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x40018AB4: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x40018AB8: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x40018ABC: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x40018AC0: swc1        $f11, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(11 - 1) * 2];
    // 0x40018AC4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x40018AC8: swc1        $f7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(7 - 1) * 2];
    // 0x40018ACC: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
    // 0x40018AD0: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x40018AD4: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x40018AD8: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x40018ADC: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    // 0x40018AE0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x40018AE4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x40018AE8: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x40018AEC: jal         0x40000F34
    // 0x40018AF0: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    ovl_actor_main_F34(rdram, ctx);
        goto after_7;
    // 0x40018AF0: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    after_7:
    // 0x40018AF4: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x40018AF8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x40018AFC: jal         0x40000310
    // 0x40018B00: nop

    ovl_actor_main_310(rdram, ctx);
        goto after_8;
    // 0x40018B00: nop

    after_8:
    // 0x40018B04: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x40018B08: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x40018B0C: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x40018B10: mul.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x40018B14: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x40018B18: lwc1        $f16, 0x74($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X74);
    // 0x40018B1C: lwc1        $f8, 0x78($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X78);
    // 0x40018B20: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x40018B24: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x40018B28: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x40018B2C: add.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x40018B30: swc1        $f6, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f6.u32l;
    // 0x40018B34: jal         0x4000031C
    // 0x40018B38: swc1        $f18, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f18.u32l;
    ovl_actor_main_31C(rdram, ctx);
        goto after_9;
    // 0x40018B38: swc1        $f18, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f18.u32l;
    after_9:
    // 0x40018B3C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x40018B40: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x40018B44: lwc1        $f16, 0x7C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x40018B48: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x40018B4C: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x40018B50: addiu       $a2, $sp, 0x74
    ctx->r6 = ADD32(ctx->r29, 0X74);
    // 0x40018B54: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x40018B58: add.s       $f8, $f16, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f6.fl;
    // 0x40018B5C: swc1        $f8, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f8.u32l;
    // 0x40018B60: lw          $a1, 0xC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC);
    // 0x40018B64: jal         0x40000F34
    // 0x40018B68: nop

    ovl_actor_main_F34(rdram, ctx);
        goto after_10;
    // 0x40018B68: nop

    after_10:
    // 0x40018B6C: b           L_40018BDC
    // 0x40018B70: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
        goto L_40018BDC;
    // 0x40018B70: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_40018B74:
    // 0x40018B74: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x40018B78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40018B7C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x40018B80: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x40018B84: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40018B88: jal         0x40008D20
    // 0x40018B8C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D20(rdram, ctx);
        goto after_11;
    // 0x40018B8C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_11:
    // 0x40018B90: b           L_40018BDC
    // 0x40018B94: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
        goto L_40018BDC;
    // 0x40018B94: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_40018B98:
    // 0x40018B98: jal         0x40018950
    // 0x40018B9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_18950(rdram, ctx);
        goto after_12;
    // 0x40018B9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x40018BA0: b           L_40018BDC
    // 0x40018BA4: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
        goto L_40018BDC;
    // 0x40018BA4: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_40018BA8:
    // 0x40018BA8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x40018BAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40018BB0: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x40018BB4: addiu       $a1, $zero, 0x23
    ctx->r5 = ADD32(0, 0X23);
    // 0x40018BB8: jal         0x4001A598
    // 0x40018BBC: lui         $a2, 0x4320
    ctx->r6 = S32(0X4320 << 16);
    ovl_actor_main_1A598(rdram, ctx);
        goto after_13;
    // 0x40018BBC: lui         $a2, 0x4320
    ctx->r6 = S32(0X4320 << 16);
    after_13:
    // 0x40018BC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40018BC4: addiu       $a1, $zero, 0x2AF
    ctx->r5 = ADD32(0, 0X2AF);
    // 0x40018BC8: jal         0x4000115C
    // 0x40018BCC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_14;
    // 0x40018BCC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_14:
    // 0x40018BD0: jal         0x4000CB84
    // 0x40018BD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_CB84(rdram, ctx);
        goto after_15;
    // 0x40018BD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
L_40018BD8:
    // 0x40018BD8: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_40018BDC:
    // 0x40018BDC: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x40018BE0: jr          $ra
    // 0x40018BE4: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    return;
    // 0x40018BE4: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void ovl_actor_main_18BE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40018BE8: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x40018BEC: jr          $ra
    // 0x40018BF0: sw          $t6, 0x330($a0)
    MEM_W(0X330, ctx->r4) = ctx->r14;
    return;
    // 0x40018BF0: sw          $t6, 0x330($a0)
    MEM_W(0X330, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void ovl_actor_main_18BF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40018BF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40018BF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40018BFC: jal         0x40018950
    // 0x40018C00: nop

    ovl_actor_main_18950(rdram, ctx);
        goto after_0;
    // 0x40018C00: nop

    after_0:
    // 0x40018C04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40018C08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40018C0C: jr          $ra
    // 0x40018C10: nop

    return;
    // 0x40018C10: nop

;}
RECOMP_FUNC void ovl_actor_main_18C14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40018C14: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x40018C18: addiu       $t7, $a1, -0x1
    ctx->r15 = ADD32(ctx->r5, -0X1);
    // 0x40018C1C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x40018C20: sltiu       $at, $t7, 0x29
    ctx->r1 = ctx->r15 < 0X29 ? 1 : 0;
    // 0x40018C24: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x40018C28: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x40018C2C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x40018C30: beq         $at, $zero, L_40018D84
    if (ctx->r1 == 0) {
        // 0x40018C34: sw          $a1, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r5;
            goto L_40018D84;
    }
    // 0x40018C34: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x40018C38: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x40018C3C: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x40018C40: addu        $at, $at, $t7
    gpr jr_addend_40018C4C = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x40018C44: lw          $t7, -0xB80($at)
    ctx->r15 = ADD32(ctx->r1, -0XB80);
    // 0x40018C48: nop

    // 0x40018C4C: jr          $t7
    // 0x40018C50: nop

    switch (jr_addend_40018C4C >> 2) {
        case 0: goto L_40018C54; break;
        case 1: goto L_40018D84; break;
        case 2: goto L_40018D84; break;
        case 3: goto L_40018D84; break;
        case 4: goto L_40018D84; break;
        case 5: goto L_40018D84; break;
        case 6: goto L_40018D84; break;
        case 7: goto L_40018D84; break;
        case 8: goto L_40018D84; break;
        case 9: goto L_40018D84; break;
        case 10: goto L_40018D84; break;
        case 11: goto L_40018D84; break;
        case 12: goto L_40018CEC; break;
        case 13: goto L_40018D08; break;
        case 14: goto L_40018D84; break;
        case 15: goto L_40018D84; break;
        case 16: goto L_40018D44; break;
        case 17: goto L_40018D84; break;
        case 18: goto L_40018D84; break;
        case 19: goto L_40018D84; break;
        case 20: goto L_40018D84; break;
        case 21: goto L_40018D84; break;
        case 22: goto L_40018D84; break;
        case 23: goto L_40018D84; break;
        case 24: goto L_40018D84; break;
        case 25: goto L_40018D84; break;
        case 26: goto L_40018D84; break;
        case 27: goto L_40018D84; break;
        case 28: goto L_40018D84; break;
        case 29: goto L_40018D84; break;
        case 30: goto L_40018D84; break;
        case 31: goto L_40018D84; break;
        case 32: goto L_40018D84; break;
        case 33: goto L_40018D84; break;
        case 34: goto L_40018D84; break;
        case 35: goto L_40018D84; break;
        case 36: goto L_40018D84; break;
        case 37: goto L_40018D84; break;
        case 38: goto L_40018D84; break;
        case 39: goto L_40018D84; break;
        case 40: goto L_40018D7C; break;
        default: switch_error(__func__, 0x40018C4C, 0x4001F480);
    }
    // 0x40018C50: nop

L_40018C54:
    // 0x40018C54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40018C58: addiu       $a1, $zero, 0x594
    ctx->r5 = ADD32(0, 0X594);
    // 0x40018C5C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40018C60: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40018C64: jal         0x40008D64
    // 0x40018C68: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x40018C68: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x40018C6C: addiu       $a1, $s0, 0x324
    ctx->r5 = ADD32(ctx->r16, 0X324);
    // 0x40018C70: addiu       $a2, $a1, 0x4
    ctx->r6 = ADD32(ctx->r5, 0X4);
    // 0x40018C74: sw          $a1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r5;
    // 0x40018C78: jal         0x40011D40
    // 0x40018C7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_11D40(rdram, ctx);
        goto after_1;
    // 0x40018C7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x40018C80: lui         $at, 0x4216
    ctx->r1 = S32(0X4216 << 16);
    // 0x40018C84: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x40018C88: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x40018C8C: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x40018C90: swc1        $f4, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f4.u32l;
    // 0x40018C94: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x40018C98: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x40018C9C: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x40018CA0: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x40018CA4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x40018CA8: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
    // 0x40018CAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40018CB0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x40018CB4: lui         $a2, 0x428C
    ctx->r6 = S32(0X428C << 16);
    // 0x40018CB8: lui         $a3, 0x4220
    ctx->r7 = S32(0X4220 << 16);
    // 0x40018CBC: jal         0x40006EEC
    // 0x40018CC0: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    ovl_actor_main_6EEC(rdram, ctx);
        goto after_2;
    // 0x40018CC0: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x40018CC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40018CC8: addiu       $a1, $zero, 0x233
    ctx->r5 = ADD32(0, 0X233);
    // 0x40018CCC: jal         0x4000115C
    // 0x40018CD0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_3;
    // 0x40018CD0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x40018CD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40018CD8: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    // 0x40018CDC: jal         0x40009000
    // 0x40018CE0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_9000(rdram, ctx);
        goto after_4;
    // 0x40018CE0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x40018CE4: b           L_40018D88
    // 0x40018CE8: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
        goto L_40018D88;
    // 0x40018CE8: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
L_40018CEC:
    // 0x40018CEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40018CF0: lui         $a1, 0xBF80
    ctx->r5 = S32(0XBF80 << 16);
    // 0x40018CF4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40018CF8: jal         0x400018BC
    // 0x40018CFC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_actor_main_18BC(rdram, ctx);
        goto after_5;
    // 0x40018CFC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
    // 0x40018D00: b           L_40018D88
    // 0x40018D04: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
        goto L_40018D88;
    // 0x40018D04: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
L_40018D08:
    // 0x40018D08: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x40018D0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40018D10: lui         $a1, 0xBF80
    ctx->r5 = S32(0XBF80 << 16);
    // 0x40018D14: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x40018D18: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x40018D1C: jal         0x400018BC
    // 0x40018D20: swc1        $f18, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f18.u32l;
    ovl_actor_main_18BC(rdram, ctx);
        goto after_6;
    // 0x40018D20: swc1        $f18, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f18.u32l;
    after_6:
    // 0x40018D24: jal         0x40008F98
    // 0x40018D28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_8F98(rdram, ctx);
        goto after_7;
    // 0x40018D28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x40018D2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40018D30: addiu       $a1, $zero, 0x3C9
    ctx->r5 = ADD32(0, 0X3C9);
    // 0x40018D34: jal         0x4000115C
    // 0x40018D38: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_8;
    // 0x40018D38: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_8:
    // 0x40018D3C: b           L_40018D88
    // 0x40018D40: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
        goto L_40018D88;
    // 0x40018D40: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
L_40018D44:
    // 0x40018D44: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x40018D48: lwc1        $f4, -0xADC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0XADC);
    // 0x40018D4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40018D50: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x40018D54: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x40018D58: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    // 0x40018D5C: jal         0x4000120C
    // 0x40018D60: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_actor_main_120C(rdram, ctx);
        goto after_9;
    // 0x40018D60: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_9:
    // 0x40018D64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40018D68: addiu       $a1, $zero, 0x2AB
    ctx->r5 = ADD32(0, 0X2AB);
    // 0x40018D6C: jal         0x4000115C
    // 0x40018D70: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_10;
    // 0x40018D70: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_10:
    // 0x40018D74: b           L_40018D88
    // 0x40018D78: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
        goto L_40018D88;
    // 0x40018D78: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
L_40018D7C:
    // 0x40018D7C: jal         0x4000CB84
    // 0x40018D80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_CB84(rdram, ctx);
        goto after_11;
    // 0x40018D80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
L_40018D84:
    // 0x40018D84: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
L_40018D88:
    // 0x40018D88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40018D8C: slti        $at, $t8, 0xE
    ctx->r1 = SIGNED(ctx->r24) < 0XE ? 1 : 0;
    // 0x40018D90: beq         $at, $zero, L_40018DB4
    if (ctx->r1 == 0) {
        // 0x40018D94: or          $a1, $t8, $zero
        ctx->r5 = ctx->r24 | 0;
            goto L_40018DB4;
    }
    // 0x40018D94: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x40018D98: addiu       $t9, $s0, 0x324
    ctx->r25 = ADD32(ctx->r16, 0X324);
    // 0x40018D9C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x40018DA0: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    // 0x40018DA4: jal         0x40011BE4
    // 0x40018DA8: lui         $a3, 0x4216
    ctx->r7 = S32(0X4216 << 16);
    ovl_actor_main_11BE4(rdram, ctx);
        goto after_12;
    // 0x40018DA8: lui         $a3, 0x4216
    ctx->r7 = S32(0X4216 << 16);
    after_12:
    // 0x40018DAC: jal         0x40011E8C
    // 0x40018DB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_11E8C(rdram, ctx);
        goto after_13;
    // 0x40018DB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
L_40018DB4:
    // 0x40018DB4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x40018DB8: nop

    // 0x40018DBC: slti        $at, $t0, 0x11
    ctx->r1 = SIGNED(ctx->r8) < 0X11 ? 1 : 0;
    // 0x40018DC0: bne         $at, $zero, L_40018DD8
    if (ctx->r1 != 0) {
        // 0x40018DC4: slti        $at, $t0, 0x31
        ctx->r1 = SIGNED(ctx->r8) < 0X31 ? 1 : 0;
            goto L_40018DD8;
    }
    // 0x40018DC4: slti        $at, $t0, 0x31
    ctx->r1 = SIGNED(ctx->r8) < 0X31 ? 1 : 0;
    // 0x40018DC8: beq         $at, $zero, L_40018DD8
    if (ctx->r1 == 0) {
        // 0x40018DCC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40018DD8;
    }
    // 0x40018DCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40018DD0: jal         0x40011F94
    // 0x40018DD4: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    ovl_actor_main_11F94(rdram, ctx);
        goto after_14;
    // 0x40018DD4: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_14:
L_40018DD8:
    // 0x40018DD8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x40018DDC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x40018DE0: jr          $ra
    // 0x40018DE4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x40018DE4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_actor_main_18DE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40018DE8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x40018DEC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40018DF0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40018DF4: bne         $a1, $at, L_40018E1C
    if (ctx->r5 != ctx->r1) {
        // 0x40018DF8: sw          $a0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r4;
            goto L_40018E1C;
    }
    // 0x40018DF8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x40018DFC: addiu       $a1, $zero, 0x6BA
    ctx->r5 = ADD32(0, 0X6BA);
    // 0x40018E00: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40018E04: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40018E08: jal         0x40008D64
    // 0x40018E0C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x40018E0C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x40018E10: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x40018E14: jal         0x40008EF8
    // 0x40018E18: addiu       $a1, $zero, 0x6C7
    ctx->r5 = ADD32(0, 0X6C7);
    ovl_actor_main_8EF8(rdram, ctx);
        goto after_1;
    // 0x40018E18: addiu       $a1, $zero, 0x6C7
    ctx->r5 = ADD32(0, 0X6C7);
    after_1:
L_40018E1C:
    // 0x40018E1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40018E20: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x40018E24: jr          $ra
    // 0x40018E28: nop

    return;
    // 0x40018E28: nop

;}
RECOMP_FUNC void ovl_actor_main_18E2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40018E2C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x40018E30: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40018E34: bne         $a1, $at, L_40018E50
    if (ctx->r5 != ctx->r1) {
        // 0x40018E38: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_40018E50;
    }
    // 0x40018E38: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40018E3C: addiu       $a1, $zero, 0x6BB
    ctx->r5 = ADD32(0, 0X6BB);
    // 0x40018E40: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40018E44: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40018E48: jal         0x40008D64
    // 0x40018E4C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x40018E4C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
L_40018E50:
    // 0x40018E50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40018E54: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x40018E58: jr          $ra
    // 0x40018E5C: nop

    return;
    // 0x40018E5C: nop

;}
RECOMP_FUNC void ovl_actor_main_18E60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40018E60: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x40018E64: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40018E68: bne         $a1, $at, L_40018E9C
    if (ctx->r5 != ctx->r1) {
        // 0x40018E6C: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_40018E9C;
    }
    // 0x40018E6C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40018E70: addiu       $a1, $zero, 0x6BE
    ctx->r5 = ADD32(0, 0X6BE);
    // 0x40018E74: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40018E78: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40018E7C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x40018E80: jal         0x40008D64
    // 0x40018E84: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x40018E84: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x40018E88: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x40018E8C: jal         0x40008EF8
    // 0x40018E90: addiu       $a1, $zero, 0x6C8
    ctx->r5 = ADD32(0, 0X6C8);
    ovl_actor_main_8EF8(rdram, ctx);
        goto after_1;
    // 0x40018E90: addiu       $a1, $zero, 0x6C8
    ctx->r5 = ADD32(0, 0X6C8);
    after_1:
    // 0x40018E94: b           L_40018EB4
    // 0x40018E98: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_40018EB4;
    // 0x40018E98: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_40018E9C:
    // 0x40018E9C: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x40018EA0: bne         $a1, $at, L_40018EB4
    if (ctx->r5 != ctx->r1) {
        // 0x40018EA4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_40018EB4;
    }
    // 0x40018EA4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40018EA8: jal         0x4000CB84
    // 0x40018EAC: nop

    ovl_actor_main_CB84(rdram, ctx);
        goto after_2;
    // 0x40018EAC: nop

    after_2:
    // 0x40018EB0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_40018EB4:
    // 0x40018EB4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x40018EB8: jr          $ra
    // 0x40018EBC: nop

    return;
    // 0x40018EBC: nop

;}
RECOMP_FUNC void ovl_actor_main_18EC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40018EC0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x40018EC4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40018EC8: bne         $a1, $at, L_40018EEC
    if (ctx->r5 != ctx->r1) {
        // 0x40018ECC: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_40018EEC;
    }
    // 0x40018ECC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40018ED0: addiu       $a1, $zero, 0x6BF
    ctx->r5 = ADD32(0, 0X6BF);
    // 0x40018ED4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40018ED8: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40018EDC: jal         0x40008D64
    // 0x40018EE0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x40018EE0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x40018EE4: b           L_40018F04
    // 0x40018EE8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_40018F04;
    // 0x40018EE8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_40018EEC:
    // 0x40018EEC: addiu       $at, $zero, 0x32
    ctx->r1 = ADD32(0, 0X32);
    // 0x40018EF0: bne         $a1, $at, L_40018F04
    if (ctx->r5 != ctx->r1) {
        // 0x40018EF4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_40018F04;
    }
    // 0x40018EF4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40018EF8: jal         0x4000CB84
    // 0x40018EFC: nop

    ovl_actor_main_CB84(rdram, ctx);
        goto after_1;
    // 0x40018EFC: nop

    after_1:
    // 0x40018F00: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_40018F04:
    // 0x40018F04: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x40018F08: jr          $ra
    // 0x40018F0C: nop

    return;
    // 0x40018F0C: nop

;}
RECOMP_FUNC void ovl_actor_main_18F10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40018F10: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x40018F14: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40018F18: bne         $a1, $at, L_40018F3C
    if (ctx->r5 != ctx->r1) {
        // 0x40018F1C: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_40018F3C;
    }
    // 0x40018F1C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40018F20: addiu       $a1, $zero, 0x6C0
    ctx->r5 = ADD32(0, 0X6C0);
    // 0x40018F24: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40018F28: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40018F2C: jal         0x40008D64
    // 0x40018F30: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x40018F30: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x40018F34: b           L_40018F54
    // 0x40018F38: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_40018F54;
    // 0x40018F38: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_40018F3C:
    // 0x40018F3C: addiu       $at, $zero, 0x32
    ctx->r1 = ADD32(0, 0X32);
    // 0x40018F40: bne         $a1, $at, L_40018F54
    if (ctx->r5 != ctx->r1) {
        // 0x40018F44: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_40018F54;
    }
    // 0x40018F44: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40018F48: jal         0x4000CB84
    // 0x40018F4C: nop

    ovl_actor_main_CB84(rdram, ctx);
        goto after_1;
    // 0x40018F4C: nop

    after_1:
    // 0x40018F50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_40018F54:
    // 0x40018F54: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x40018F58: jr          $ra
    // 0x40018F5C: nop

    return;
    // 0x40018F5C: nop

;}
RECOMP_FUNC void ovl_actor_main_18F60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40018F60: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x40018F64: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40018F68: bne         $a1, $at, L_40018F8C
    if (ctx->r5 != ctx->r1) {
        // 0x40018F6C: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_40018F8C;
    }
    // 0x40018F6C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40018F70: addiu       $a1, $zero, 0x6C1
    ctx->r5 = ADD32(0, 0X6C1);
    // 0x40018F74: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40018F78: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40018F7C: jal         0x40008D64
    // 0x40018F80: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x40018F80: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x40018F84: b           L_40018FA4
    // 0x40018F88: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_40018FA4;
    // 0x40018F88: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_40018F8C:
    // 0x40018F8C: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x40018F90: bne         $a1, $at, L_40018FA4
    if (ctx->r5 != ctx->r1) {
        // 0x40018F94: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_40018FA4;
    }
    // 0x40018F94: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40018F98: jal         0x4000CB84
    // 0x40018F9C: nop

    ovl_actor_main_CB84(rdram, ctx);
        goto after_1;
    // 0x40018F9C: nop

    after_1:
    // 0x40018FA0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_40018FA4:
    // 0x40018FA4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x40018FA8: jr          $ra
    // 0x40018FAC: nop

    return;
    // 0x40018FAC: nop

;}
RECOMP_FUNC void ovl_actor_main_18FB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40018FB0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x40018FB4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40018FB8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40018FBC: bne         $a1, $at, L_40018FE4
    if (ctx->r5 != ctx->r1) {
        // 0x40018FC0: sw          $a0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r4;
            goto L_40018FE4;
    }
    // 0x40018FC0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x40018FC4: addiu       $a1, $zero, 0x6C2
    ctx->r5 = ADD32(0, 0X6C2);
    // 0x40018FC8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40018FCC: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40018FD0: jal         0x40008D64
    // 0x40018FD4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x40018FD4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x40018FD8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x40018FDC: jal         0x40008EF8
    // 0x40018FE0: addiu       $a1, $zero, 0x6C9
    ctx->r5 = ADD32(0, 0X6C9);
    ovl_actor_main_8EF8(rdram, ctx);
        goto after_1;
    // 0x40018FE0: addiu       $a1, $zero, 0x6C9
    ctx->r5 = ADD32(0, 0X6C9);
    after_1:
L_40018FE4:
    // 0x40018FE4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40018FE8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x40018FEC: jr          $ra
    // 0x40018FF0: nop

    return;
    // 0x40018FF0: nop

;}
RECOMP_FUNC void ovl_actor_main_18FF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40018FF4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x40018FF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40018FFC: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x40019000: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x40019004: lw          $a0, 0x10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X10);
    // 0x40019008: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x4001900C: jal         0x400006C4
    // 0x40019010: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_0;
    // 0x40019010: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_0:
    // 0x40019014: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x40019018: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x4001901C: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x40019020: lw          $a0, 0x10($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X10);
    // 0x40019024: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x40019028: jal         0x400006C4
    // 0x4001902C: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_1;
    // 0x4001902C: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_1:
    // 0x40019030: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
    // 0x40019034: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x40019038: lw          $a0, 0x330($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X330);
    // 0x4001903C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x40019040: beq         $a0, $at, L_40019070
    if (ctx->r4 == ctx->r1) {
        // 0x40019044: addiu       $v0, $v0, 0x324
        ctx->r2 = ADD32(ctx->r2, 0X324);
            goto L_40019070;
    }
    // 0x40019044: addiu       $v0, $v0, 0x324
    ctx->r2 = ADD32(ctx->r2, 0X324);
    // 0x40019048: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x4001904C: jal         0x400006C4
    // 0x40019050: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    ovl_actor_main_6C4(rdram, ctx);
        goto after_2;
    // 0x40019050: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    after_2:
    // 0x40019054: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x40019058: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x4001905C: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x40019060: lw          $a0, 0xC($v0)
    ctx->r4 = MEM_W(ctx->r2, 0XC);
    // 0x40019064: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x40019068: jal         0x400006C4
    // 0x4001906C: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_3;
    // 0x4001906C: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_3:
L_40019070:
    // 0x40019070: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40019074: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x40019078: jr          $ra
    // 0x4001907C: nop

    return;
    // 0x4001907C: nop

;}
RECOMP_FUNC void ovl_actor_main_19080(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40019080: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x40019084: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x40019088: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x4001908C: slti        $at, $a1, 0xB8
    ctx->r1 = SIGNED(ctx->r5) < 0XB8 ? 1 : 0;
    // 0x40019090: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x40019094: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x40019098: bne         $at, $zero, L_400190D8
    if (ctx->r1 != 0) {
        // 0x4001909C: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_400190D8;
    }
    // 0x4001909C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x400190A0: addiu       $at, $zero, 0xC4
    ctx->r1 = ADD32(0, 0XC4);
    // 0x400190A4: beq         $a1, $at, L_40019214
    if (ctx->r5 == ctx->r1) {
        // 0x400190A8: addiu       $at, $zero, 0xD6
        ctx->r1 = ADD32(0, 0XD6);
            goto L_40019214;
    }
    // 0x400190A8: addiu       $at, $zero, 0xD6
    ctx->r1 = ADD32(0, 0XD6);
    // 0x400190AC: beq         $a1, $at, L_4001925C
    if (ctx->r5 == ctx->r1) {
        // 0x400190B0: addiu       $at, $zero, 0xFE
        ctx->r1 = ADD32(0, 0XFE);
            goto L_4001925C;
    }
    // 0x400190B0: addiu       $at, $zero, 0xFE
    ctx->r1 = ADD32(0, 0XFE);
    // 0x400190B4: beq         $a1, $at, L_40019278
    if (ctx->r5 == ctx->r1) {
        // 0x400190B8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40019278;
    }
    // 0x400190B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400190BC: addiu       $at, $zero, 0x10D
    ctx->r1 = ADD32(0, 0X10D);
    // 0x400190C0: beq         $a1, $at, L_400192E4
    if (ctx->r5 == ctx->r1) {
        // 0x400190C4: addiu       $at, $zero, 0x121
        ctx->r1 = ADD32(0, 0X121);
            goto L_400192E4;
    }
    // 0x400190C4: addiu       $at, $zero, 0x121
    ctx->r1 = ADD32(0, 0X121);
    // 0x400190C8: beq         $a1, $at, L_40019300
    if (ctx->r5 == ctx->r1) {
        // 0x400190CC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40019300;
    }
    // 0x400190CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400190D0: b           L_40019334
    // 0x400190D4: slti        $at, $s1, 0x44
    ctx->r1 = SIGNED(ctx->r17) < 0X44 ? 1 : 0;
        goto L_40019334;
    // 0x400190D4: slti        $at, $s1, 0x44
    ctx->r1 = SIGNED(ctx->r17) < 0X44 ? 1 : 0;
L_400190D8:
    // 0x400190D8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x400190DC: beq         $s1, $at, L_4001911C
    if (ctx->r17 == ctx->r1) {
        // 0x400190E0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4001911C;
    }
    // 0x400190E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400190E4: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x400190E8: beq         $s1, $at, L_40019178
    if (ctx->r17 == ctx->r1) {
        // 0x400190EC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40019178;
    }
    // 0x400190EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400190F0: addiu       $at, $zero, 0x42
    ctx->r1 = ADD32(0, 0X42);
    // 0x400190F4: beq         $s1, $at, L_4001919C
    if (ctx->r17 == ctx->r1) {
        // 0x400190F8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4001919C;
    }
    // 0x400190F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400190FC: addiu       $at, $zero, 0x44
    ctx->r1 = ADD32(0, 0X44);
    // 0x40019100: beq         $s1, $at, L_400191B4
    if (ctx->r17 == ctx->r1) {
        // 0x40019104: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_400191B4;
    }
    // 0x40019104: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40019108: addiu       $at, $zero, 0xB7
    ctx->r1 = ADD32(0, 0XB7);
    // 0x4001910C: beq         $s1, $at, L_40019200
    if (ctx->r17 == ctx->r1) {
        // 0x40019110: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40019200;
    }
    // 0x40019110: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40019114: b           L_40019334
    // 0x40019118: slti        $at, $s1, 0x44
    ctx->r1 = SIGNED(ctx->r17) < 0X44 ? 1 : 0;
        goto L_40019334;
    // 0x40019118: slti        $at, $s1, 0x44
    ctx->r1 = SIGNED(ctx->r17) < 0X44 ? 1 : 0;
L_4001911C:
    // 0x4001911C: addiu       $a1, $zero, 0x6C2
    ctx->r5 = ADD32(0, 0X6C2);
    // 0x40019120: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40019124: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40019128: jal         0x40008D64
    // 0x4001912C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x4001912C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x40019130: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40019134: jal         0x40008EF8
    // 0x40019138: addiu       $a1, $zero, 0x6C9
    ctx->r5 = ADD32(0, 0X6C9);
    ovl_actor_main_8EF8(rdram, ctx);
        goto after_1;
    // 0x40019138: addiu       $a1, $zero, 0x6C9
    ctx->r5 = ADD32(0, 0X6C9);
    after_1:
    // 0x4001913C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x40019140: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40019144: addiu       $a1, $zero, 0x2BC
    ctx->r5 = ADD32(0, 0X2BC);
    // 0x40019148: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x4001914C: jal         0x4000115C
    // 0x40019150: swc1        $f4, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f4.u32l;
    ovl_actor_main_115C(rdram, ctx);
        goto after_2;
    // 0x40019150: swc1        $f4, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f4.u32l;
    after_2:
    // 0x40019154: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40019158: addiu       $a1, $zero, 0x12C
    ctx->r5 = ADD32(0, 0X12C);
    // 0x4001915C: jal         0x40009000
    // 0x40019160: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_9000(rdram, ctx);
        goto after_3;
    // 0x40019160: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x40019164: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    // 0x40019168: jal         0x40000E20
    // 0x4001916C: lui         $a1, 0x4180
    ctx->r5 = S32(0X4180 << 16);
    ovl_actor_main_E20(rdram, ctx);
        goto after_4;
    // 0x4001916C: lui         $a1, 0x4180
    ctx->r5 = S32(0X4180 << 16);
    after_4:
    // 0x40019170: b           L_40019334
    // 0x40019174: slti        $at, $s1, 0x44
    ctx->r1 = SIGNED(ctx->r17) < 0X44 ? 1 : 0;
        goto L_40019334;
    // 0x40019174: slti        $at, $s1, 0x44
    ctx->r1 = SIGNED(ctx->r17) < 0X44 ? 1 : 0;
L_40019178:
    // 0x40019178: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x4001917C: lwc1        $f6, -0xAD8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0XAD8);
    // 0x40019180: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x40019184: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40019188: lui         $a3, 0x41F0
    ctx->r7 = S32(0X41F0 << 16);
    // 0x4001918C: jal         0x4000120C
    // 0x40019190: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    ovl_actor_main_120C(rdram, ctx);
        goto after_5;
    // 0x40019190: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_5:
    // 0x40019194: b           L_40019334
    // 0x40019198: slti        $at, $s1, 0x44
    ctx->r1 = SIGNED(ctx->r17) < 0X44 ? 1 : 0;
        goto L_40019334;
    // 0x40019198: slti        $at, $s1, 0x44
    ctx->r1 = SIGNED(ctx->r17) < 0X44 ? 1 : 0;
L_4001919C:
    // 0x4001919C: addiu       $a1, $s0, 0x324
    ctx->r5 = ADD32(ctx->r16, 0X324);
    // 0x400191A0: addiu       $a2, $zero, 0x56B
    ctx->r6 = ADD32(0, 0X56B);
    // 0x400191A4: jal         0x40011DA0
    // 0x400191A8: lui         $a3, 0x41C8
    ctx->r7 = S32(0X41C8 << 16);
    ovl_actor_main_11DA0(rdram, ctx);
        goto after_6;
    // 0x400191A8: lui         $a3, 0x41C8
    ctx->r7 = S32(0X41C8 << 16);
    after_6:
    // 0x400191AC: b           L_40019334
    // 0x400191B0: slti        $at, $s1, 0x44
    ctx->r1 = SIGNED(ctx->r17) < 0X44 ? 1 : 0;
        goto L_40019334;
    // 0x400191B0: slti        $at, $s1, 0x44
    ctx->r1 = SIGNED(ctx->r17) < 0X44 ? 1 : 0;
L_400191B4:
    // 0x400191B4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x400191B8: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x400191BC: jal         0x40011F94
    // 0x400191C0: swc1        $f8, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f8.u32l;
    ovl_actor_main_11F94(rdram, ctx);
        goto after_7;
    // 0x400191C0: swc1        $f8, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f8.u32l;
    after_7:
    // 0x400191C4: beq         $v0, $zero, L_400191F0
    if (ctx->r2 == 0) {
        // 0x400191C8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_400191F0;
    }
    // 0x400191C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400191CC: addiu       $a1, $zero, 0x6C3
    ctx->r5 = ADD32(0, 0X6C3);
    // 0x400191D0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x400191D4: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x400191D8: jal         0x40008D64
    // 0x400191DC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_8;
    // 0x400191DC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_8:
    // 0x400191E0: jal         0x40011B50
    // 0x400191E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_11B50(rdram, ctx);
        goto after_9;
    // 0x400191E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x400191E8: b           L_40019334
    // 0x400191EC: slti        $at, $s1, 0x44
    ctx->r1 = SIGNED(ctx->r17) < 0X44 ? 1 : 0;
        goto L_40019334;
    // 0x400191EC: slti        $at, $s1, 0x44
    ctx->r1 = SIGNED(ctx->r17) < 0X44 ? 1 : 0;
L_400191F0:
    // 0x400191F0: jal         0x4000CB84
    // 0x400191F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_CB84(rdram, ctx);
        goto after_10;
    // 0x400191F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x400191F8: b           L_40019334
    // 0x400191FC: slti        $at, $s1, 0x44
    ctx->r1 = SIGNED(ctx->r17) < 0X44 ? 1 : 0;
        goto L_40019334;
    // 0x400191FC: slti        $at, $s1, 0x44
    ctx->r1 = SIGNED(ctx->r17) < 0X44 ? 1 : 0;
L_40019200:
    // 0x40019200: addiu       $a1, $zero, 0x3D4
    ctx->r5 = ADD32(0, 0X3D4);
    // 0x40019204: jal         0x4000115C
    // 0x40019208: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_11;
    // 0x40019208: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_11:
    // 0x4001920C: b           L_40019334
    // 0x40019210: slti        $at, $s1, 0x44
    ctx->r1 = SIGNED(ctx->r17) < 0X44 ? 1 : 0;
        goto L_40019334;
    // 0x40019210: slti        $at, $s1, 0x44
    ctx->r1 = SIGNED(ctx->r17) < 0X44 ? 1 : 0;
L_40019214:
    // 0x40019214: jal         0x40000DE4
    // 0x40019218: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_actor_main_DE4(rdram, ctx);
        goto after_12;
    // 0x40019218: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_12:
    // 0x4001921C: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x40019220: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x40019224: addiu       $v1, $s0, 0x324
    ctx->r3 = ADD32(ctx->r16, 0X324);
    // 0x40019228: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x4001922C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x40019230: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x40019234: sw          $v0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r2;
    // 0x40019238: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001923C: addiu       $a1, $zero, 0x2BA
    ctx->r5 = ADD32(0, 0X2BA);
    // 0x40019240: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x40019244: swc1        $f10, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f10.u32l;
    // 0x40019248: swc1        $f16, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->f16.u32l;
    // 0x4001924C: jal         0x4000115C
    // 0x40019250: swc1        $f18, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f18.u32l;
    ovl_actor_main_115C(rdram, ctx);
        goto after_13;
    // 0x40019250: swc1        $f18, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f18.u32l;
    after_13:
    // 0x40019254: b           L_40019334
    // 0x40019258: slti        $at, $s1, 0x44
    ctx->r1 = SIGNED(ctx->r17) < 0X44 ? 1 : 0;
        goto L_40019334;
    // 0x40019258: slti        $at, $s1, 0x44
    ctx->r1 = SIGNED(ctx->r17) < 0X44 ? 1 : 0;
L_4001925C:
    // 0x4001925C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x40019260: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x40019264: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x40019268: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x4001926C: swc1        $f4, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f4.u32l;
    // 0x40019270: b           L_40019330
    // 0x40019274: swc1        $f6, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f6.u32l;
        goto L_40019330;
    // 0x40019274: swc1        $f6, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f6.u32l;
L_40019278:
    // 0x40019278: jal         0x40018FF4
    // 0x4001927C: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    ovl_actor_main_18FF4(rdram, ctx);
        goto after_14;
    // 0x4001927C: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    after_14:
    // 0x40019280: lui         $at, 0xC220
    ctx->r1 = S32(0XC220 << 16);
    // 0x40019284: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x40019288: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x4001928C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x40019290: addiu       $v1, $s0, 0x324
    ctx->r3 = ADD32(ctx->r16, 0X324);
    // 0x40019294: swc1        $f8, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f8.u32l;
    // 0x40019298: swc1        $f10, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f10.u32l;
    // 0x4001929C: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x400192A0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x400192A4: jal         0x400006C4
    // 0x400192A8: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_15;
    // 0x400192A8: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    after_15:
    // 0x400192AC: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x400192B0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x400192B4: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x400192B8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x400192BC: swc1        $f16, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f16.u32l;
    // 0x400192C0: swc1        $f18, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f18.u32l;
    // 0x400192C4: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x400192C8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x400192CC: jal         0x400006C4
    // 0x400192D0: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_16;
    // 0x400192D0: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    after_16:
    // 0x400192D4: jal         0x40009414
    // 0x400192D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_9414(rdram, ctx);
        goto after_17;
    // 0x400192D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x400192DC: b           L_40019334
    // 0x400192E0: slti        $at, $s1, 0x44
    ctx->r1 = SIGNED(ctx->r17) < 0X44 ? 1 : 0;
        goto L_40019334;
    // 0x400192E0: slti        $at, $s1, 0x44
    ctx->r1 = SIGNED(ctx->r17) < 0X44 ? 1 : 0;
L_400192E4:
    // 0x400192E4: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x400192E8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x400192EC: lui         $at, 0x429C
    ctx->r1 = S32(0X429C << 16);
    // 0x400192F0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x400192F4: swc1        $f4, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f4.u32l;
    // 0x400192F8: b           L_40019330
    // 0x400192FC: swc1        $f6, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->f6.u32l;
        goto L_40019330;
    // 0x400192FC: swc1        $f6, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->f6.u32l;
L_40019300:
    // 0x40019300: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x40019304: addiu       $a1, $zero, 0x7E
    ctx->r5 = ADD32(0, 0X7E);
    // 0x40019308: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x4001930C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x40019310: jal         0x4000118C
    // 0x40019314: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    ovl_actor_main_118C(rdram, ctx);
        goto after_18;
    // 0x40019314: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_18:
    // 0x40019318: jal         0x4000CB84
    // 0x4001931C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_CB84(rdram, ctx);
        goto after_19;
    // 0x4001931C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x40019320: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40019324: addiu       $a1, $zero, 0x23D
    ctx->r5 = ADD32(0, 0X23D);
    // 0x40019328: jal         0x4000115C
    // 0x4001932C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_20;
    // 0x4001932C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_20:
L_40019330:
    // 0x40019330: slti        $at, $s1, 0x44
    ctx->r1 = SIGNED(ctx->r17) < 0X44 ? 1 : 0;
L_40019334:
    // 0x40019334: beq         $at, $zero, L_40019348
    if (ctx->r1 == 0) {
        // 0x40019338: slti        $at, $s1, 0xD6
        ctx->r1 = SIGNED(ctx->r17) < 0XD6 ? 1 : 0;
            goto L_40019348;
    }
    // 0x40019338: slti        $at, $s1, 0xD6
    ctx->r1 = SIGNED(ctx->r17) < 0XD6 ? 1 : 0;
    // 0x4001933C: jal         0x40011E8C
    // 0x40019340: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_11E8C(rdram, ctx);
        goto after_21;
    // 0x40019340: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_21:
    // 0x40019344: slti        $at, $s1, 0xD6
    ctx->r1 = SIGNED(ctx->r17) < 0XD6 ? 1 : 0;
L_40019348:
    // 0x40019348: bne         $at, $zero, L_40019398
    if (ctx->r1 != 0) {
        // 0x4001934C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40019398;
    }
    // 0x4001934C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40019350: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x40019354: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x40019358: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x4001935C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x40019360: lwc1        $f8, 0x44($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X44);
    // 0x40019364: addiu       $v1, $s0, 0x324
    ctx->r3 = ADD32(ctx->r16, 0X324);
    // 0x40019368: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x4001936C: swc1        $f16, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f16.u32l;
    // 0x40019370: lwc1        $f0, 0x44($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X44);
    // 0x40019374: nop

    // 0x40019378: c.le.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl <= ctx->f0.fl;
    // 0x4001937C: nop

    // 0x40019380: bc1f        L_40019390
    if (!c1cs) {
        // 0x40019384: nop
    
            goto L_40019390;
    }
    // 0x40019384: nop

    // 0x40019388: sub.s       $f18, $f0, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x4001938C: swc1        $f18, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f18.u32l;
L_40019390:
    // 0x40019390: jal         0x400128E4
    // 0x40019394: addiu       $a1, $v1, 0xC
    ctx->r5 = ADD32(ctx->r3, 0XC);
    ovl_actor_main_128E4(rdram, ctx);
        goto after_22;
    // 0x40019394: addiu       $a1, $v1, 0xC
    ctx->r5 = ADD32(ctx->r3, 0XC);
    after_22:
L_40019398:
    // 0x40019398: slti        $at, $s1, 0x42
    ctx->r1 = SIGNED(ctx->r17) < 0X42 ? 1 : 0;
    // 0x4001939C: bne         $at, $zero, L_400193C4
    if (ctx->r1 != 0) {
        // 0x400193A0: slti        $at, $s1, 0x44
        ctx->r1 = SIGNED(ctx->r17) < 0X44 ? 1 : 0;
            goto L_400193C4;
    }
    // 0x400193A0: slti        $at, $s1, 0x44
    ctx->r1 = SIGNED(ctx->r17) < 0X44 ? 1 : 0;
    // 0x400193A4: beq         $at, $zero, L_400193C4
    if (ctx->r1 == 0) {
        // 0x400193A8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_400193C4;
    }
    // 0x400193A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400193AC: addiu       $t6, $s0, 0x324
    ctx->r14 = ADD32(ctx->r16, 0X324);
    // 0x400193B0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x400193B4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x400193B8: addiu       $a2, $zero, 0x43
    ctx->r6 = ADD32(0, 0X43);
    // 0x400193BC: jal         0x40011BE4
    // 0x400193C0: lui         $a3, 0x41C8
    ctx->r7 = S32(0X41C8 << 16);
    ovl_actor_main_11BE4(rdram, ctx);
        goto after_23;
    // 0x400193C0: lui         $a3, 0x41C8
    ctx->r7 = S32(0X41C8 << 16);
    after_23:
L_400193C4:
    // 0x400193C4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x400193C8: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x400193CC: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x400193D0: jr          $ra
    // 0x400193D4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x400193D4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_actor_main_193D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400193D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x400193DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x400193E0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x400193E4: jal         0x40018FF4
    // 0x400193E8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    ovl_actor_main_18FF4(rdram, ctx);
        goto after_0;
    // 0x400193E8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_0:
    // 0x400193EC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x400193F0: jal         0x40012DCC
    // 0x400193F4: addiu       $a1, $a0, 0x330
    ctx->r5 = ADD32(ctx->r4, 0X330);
    ovl_actor_main_12DCC(rdram, ctx);
        goto after_1;
    // 0x400193F4: addiu       $a1, $a0, 0x330
    ctx->r5 = ADD32(ctx->r4, 0X330);
    after_1:
    // 0x400193F8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x400193FC: jal         0x40008F98
    // 0x40019400: nop

    ovl_actor_main_8F98(rdram, ctx);
        goto after_2;
    // 0x40019400: nop

    after_2:
    // 0x40019404: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x40019408: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4001940C: jr          $ra
    // 0x40019410: nop

    return;
    // 0x40019410: nop

;}
RECOMP_FUNC void ovl_actor_main_19414(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40019414: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x40019418: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4001941C: beq         $a1, $at, L_40019450
    if (ctx->r5 == ctx->r1) {
        // 0x40019420: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_40019450;
    }
    // 0x40019420: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40019424: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x40019428: beq         $a1, $at, L_4001947C
    if (ctx->r5 == ctx->r1) {
        // 0x4001942C: addiu       $a2, $zero, 0x0
        ctx->r6 = ADD32(0, 0X0);
            goto L_4001947C;
    }
    // 0x4001942C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40019430: addiu       $at, $zero, 0x50
    ctx->r1 = ADD32(0, 0X50);
    // 0x40019434: beq         $a1, $at, L_40019490
    if (ctx->r5 == ctx->r1) {
        // 0x40019438: lui         $a2, 0x3F80
        ctx->r6 = S32(0X3F80 << 16);
            goto L_40019490;
    }
    // 0x40019438: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x4001943C: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x40019440: beq         $a1, $at, L_400194A4
    if (ctx->r5 == ctx->r1) {
        // 0x40019444: nop
    
            goto L_400194A4;
    }
    // 0x40019444: nop

    // 0x40019448: b           L_400194B0
    // 0x4001944C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_400194B0;
    // 0x4001944C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_40019450:
    // 0x40019450: addiu       $a1, $zero, 0x6C4
    ctx->r5 = ADD32(0, 0X6C4);
    // 0x40019454: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40019458: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x4001945C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x40019460: jal         0x40008D64
    // 0x40019464: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x40019464: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x40019468: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x4001946C: jal         0x40008EF8
    // 0x40019470: addiu       $a1, $zero, 0x6CA
    ctx->r5 = ADD32(0, 0X6CA);
    ovl_actor_main_8EF8(rdram, ctx);
        goto after_1;
    // 0x40019470: addiu       $a1, $zero, 0x6CA
    ctx->r5 = ADD32(0, 0X6CA);
    after_1:
    // 0x40019474: b           L_400194B0
    // 0x40019478: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_400194B0;
    // 0x40019478: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4001947C:
    // 0x4001947C: lui         $a1, 0xBF80
    ctx->r5 = S32(0XBF80 << 16);
    // 0x40019480: jal         0x400018BC
    // 0x40019484: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_actor_main_18BC(rdram, ctx);
        goto after_2;
    // 0x40019484: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x40019488: b           L_400194B0
    // 0x4001948C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_400194B0;
    // 0x4001948C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_40019490:
    // 0x40019490: lui         $a1, 0xBF80
    ctx->r5 = S32(0XBF80 << 16);
    // 0x40019494: jal         0x400018BC
    // 0x40019498: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_actor_main_18BC(rdram, ctx);
        goto after_3;
    // 0x40019498: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x4001949C: b           L_400194B0
    // 0x400194A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_400194B0;
    // 0x400194A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_400194A4:
    // 0x400194A4: jal         0x4000CB84
    // 0x400194A8: nop

    ovl_actor_main_CB84(rdram, ctx);
        goto after_4;
    // 0x400194A8: nop

    after_4:
    // 0x400194AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_400194B0:
    // 0x400194B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x400194B4: jr          $ra
    // 0x400194B8: nop

    return;
    // 0x400194B8: nop

;}
RECOMP_FUNC void ovl_actor_main_194BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400194BC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x400194C0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x400194C4: beq         $a1, $at, L_400194E0
    if (ctx->r5 == ctx->r1) {
        // 0x400194C8: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_400194E0;
    }
    // 0x400194C8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x400194CC: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x400194D0: beq         $a1, $at, L_4001950C
    if (ctx->r5 == ctx->r1) {
        // 0x400194D4: addiu       $a2, $zero, 0x0
        ctx->r6 = ADD32(0, 0X0);
            goto L_4001950C;
    }
    // 0x400194D4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x400194D8: b           L_4001951C
    // 0x400194DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_4001951C;
    // 0x400194DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_400194E0:
    // 0x400194E0: addiu       $a1, $zero, 0x6C5
    ctx->r5 = ADD32(0, 0X6C5);
    // 0x400194E4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x400194E8: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x400194EC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x400194F0: jal         0x40008D64
    // 0x400194F4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x400194F4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x400194F8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x400194FC: jal         0x40008EF8
    // 0x40019500: addiu       $a1, $zero, 0x6CB
    ctx->r5 = ADD32(0, 0X6CB);
    ovl_actor_main_8EF8(rdram, ctx);
        goto after_1;
    // 0x40019500: addiu       $a1, $zero, 0x6CB
    ctx->r5 = ADD32(0, 0X6CB);
    after_1:
    // 0x40019504: b           L_4001951C
    // 0x40019508: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_4001951C;
    // 0x40019508: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4001950C:
    // 0x4001950C: lui         $a1, 0xBF80
    ctx->r5 = S32(0XBF80 << 16);
    // 0x40019510: jal         0x400018BC
    // 0x40019514: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_actor_main_18BC(rdram, ctx);
        goto after_2;
    // 0x40019514: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x40019518: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4001951C:
    // 0x4001951C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x40019520: jr          $ra
    // 0x40019524: nop

    return;
    // 0x40019524: nop

;}
RECOMP_FUNC void ovl_actor_main_19528(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40019528: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x4001952C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40019530: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x40019534: jal         0x4000A1B8
    // 0x40019538: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    ovl_actor_main_A1B8(rdram, ctx);
        goto after_0;
    // 0x40019538: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x4001953C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x40019540: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40019544: bne         $t6, $at, L_40019574
    if (ctx->r14 != ctx->r1) {
        // 0x40019548: swc1        $f0, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
            goto L_40019574;
    }
    // 0x40019548: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x4001954C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x40019550: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x40019554: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x40019558: addiu       $a1, $zero, 0x6C6
    ctx->r5 = ADD32(0, 0X6C6);
    // 0x4001955C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40019560: jal         0x40008D64
    // 0x40019564: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    ovl_actor_main_8D64(rdram, ctx);
        goto after_1;
    // 0x40019564: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_1:
    // 0x40019568: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x4001956C: jal         0x40008EF8
    // 0x40019570: addiu       $a1, $zero, 0x6CC
    ctx->r5 = ADD32(0, 0X6CC);
    ovl_actor_main_8EF8(rdram, ctx);
        goto after_2;
    // 0x40019570: addiu       $a1, $zero, 0x6CC
    ctx->r5 = ADD32(0, 0X6CC);
    after_2:
L_40019574:
    // 0x40019574: lui         $at, 0x4020
    ctx->r1 = S32(0X4020 << 16);
    // 0x40019578: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x4001957C: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x40019580: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x40019584: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x40019588: lui         $a1, 0xBF80
    ctx->r5 = S32(0XBF80 << 16);
    // 0x4001958C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x40019590: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x40019594: jal         0x400018BC
    // 0x40019598: nop

    ovl_actor_main_18BC(rdram, ctx);
        goto after_3;
    // 0x40019598: nop

    after_3:
    // 0x4001959C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x400195A0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x400195A4: jr          $ra
    // 0x400195A8: nop

    return;
    // 0x400195A8: nop

;}
RECOMP_FUNC void ovl_actor_main_195AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400195AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x400195B0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x400195B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x400195B8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x400195BC: bne         $a1, $at, L_400195D0
    if (ctx->r5 != ctx->r1) {
        // 0x400195C0: or          $a3, $a1, $zero
        ctx->r7 = ctx->r5 | 0;
            goto L_400195D0;
    }
    // 0x400195C0: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x400195C4: jal         0x4000034C
    // 0x400195C8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    ovl_actor_main_34C(rdram, ctx);
        goto after_0;
    // 0x400195C8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_0:
    // 0x400195CC: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
L_400195D0:
    // 0x400195D0: sll         $t6, $a3, 2
    ctx->r14 = S32(ctx->r7 << 2);
    // 0x400195D4: lui         $a1, 0x4002
    ctx->r5 = S32(0X4002 << 16);
    // 0x400195D8: addu        $a1, $a1, $t6
    ctx->r5 = ADD32(ctx->r5, ctx->r14);
    // 0x400195DC: lw          $a1, -0x1C70($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1C70);
    // 0x400195E0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x400195E4: jal         0x4000115C
    // 0x400195E8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_1;
    // 0x400195E8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x400195EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x400195F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x400195F4: jr          $ra
    // 0x400195F8: nop

    return;
    // 0x400195F8: nop

;}
RECOMP_FUNC void ovl_actor_main_195FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400195FC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x40019600: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x40019604: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x40019608: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4001960C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x40019610: beq         $a1, $at, L_40019638
    if (ctx->r5 == ctx->r1) {
        // 0x40019614: sw          $a1, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r5;
            goto L_40019638;
    }
    // 0x40019614: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x40019618: addiu       $at, $zero, 0x1D
    ctx->r1 = ADD32(0, 0X1D);
    // 0x4001961C: beq         $a1, $at, L_4001966C
    if (ctx->r5 == ctx->r1) {
        // 0x40019620: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4001966C;
    }
    // 0x40019620: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40019624: addiu       $at, $zero, 0x46
    ctx->r1 = ADD32(0, 0X46);
    // 0x40019628: beq         $a1, $at, L_400196AC
    if (ctx->r5 == ctx->r1) {
        // 0x4001962C: nop
    
            goto L_400196AC;
    }
    // 0x4001962C: nop

    // 0x40019630: b           L_400196B8
    // 0x40019634: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
        goto L_400196B8;
    // 0x40019634: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
L_40019638:
    // 0x40019638: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001963C: addiu       $a1, $zero, 0x6BF
    ctx->r5 = ADD32(0, 0X6BF);
    // 0x40019640: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40019644: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40019648: jal         0x40008D64
    // 0x4001964C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x4001964C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x40019650: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x40019654: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40019658: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x4001965C: jal         0x400195AC
    // 0x40019660: swc1        $f4, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f4.u32l;
    ovl_actor_main_195AC(rdram, ctx);
        goto after_1;
    // 0x40019660: swc1        $f4, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f4.u32l;
    after_1:
    // 0x40019664: b           L_400196B8
    // 0x40019668: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
        goto L_400196B8;
    // 0x40019668: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
L_4001966C:
    // 0x4001966C: lwc1        $f6, 0x328($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X328);
    // 0x40019670: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x40019674: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    // 0x40019678: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    // 0x4001967C: jal         0x4001A534
    // 0x40019680: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    ovl_actor_main_1A534(rdram, ctx);
        goto after_2;
    // 0x40019680: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x40019684: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40019688: addiu       $a1, $zero, 0x2B8
    ctx->r5 = ADD32(0, 0X2B8);
    // 0x4001968C: jal         0x4000115C
    // 0x40019690: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_3;
    // 0x40019690: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x40019694: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40019698: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x4001969C: jal         0x40009000
    // 0x400196A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_9000(rdram, ctx);
        goto after_4;
    // 0x400196A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x400196A4: b           L_400196B8
    // 0x400196A8: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
        goto L_400196B8;
    // 0x400196A8: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
L_400196AC:
    // 0x400196AC: jal         0x4000CB84
    // 0x400196B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_CB84(rdram, ctx);
        goto after_5;
    // 0x400196B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x400196B4: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
L_400196B8:
    // 0x400196B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400196BC: slti        $at, $t7, 0x1D
    ctx->r1 = SIGNED(ctx->r15) < 0X1D ? 1 : 0;
    // 0x400196C0: beq         $at, $zero, L_400196D0
    if (ctx->r1 == 0) {
        // 0x400196C4: addiu       $a1, $s0, 0x324
        ctx->r5 = ADD32(ctx->r16, 0X324);
            goto L_400196D0;
    }
    // 0x400196C4: addiu       $a1, $s0, 0x324
    ctx->r5 = ADD32(ctx->r16, 0X324);
    // 0x400196C8: jal         0x40011D40
    // 0x400196CC: addiu       $a2, $a1, 0x4
    ctx->r6 = ADD32(ctx->r5, 0X4);
    ovl_actor_main_11D40(rdram, ctx);
        goto after_6;
    // 0x400196CC: addiu       $a2, $a1, 0x4
    ctx->r6 = ADD32(ctx->r5, 0X4);
    after_6:
L_400196D0:
    // 0x400196D0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x400196D4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x400196D8: jr          $ra
    // 0x400196DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x400196DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_actor_main_196E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400196E0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x400196E4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x400196E8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x400196EC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x400196F0: beq         $a1, $at, L_40019730
    if (ctx->r5 == ctx->r1) {
        // 0x400196F4: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_40019730;
    }
    // 0x400196F4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x400196F8: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x400196FC: beq         $a1, $at, L_40019774
    if (ctx->r5 == ctx->r1) {
        // 0x40019700: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_40019774;
    }
    // 0x40019700: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40019704: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x40019708: beq         $a1, $at, L_400197C0
    if (ctx->r5 == ctx->r1) {
        // 0x4001970C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_400197C0;
    }
    // 0x4001970C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40019710: addiu       $at, $zero, 0x22
    ctx->r1 = ADD32(0, 0X22);
    // 0x40019714: beq         $a1, $at, L_400197E0
    if (ctx->r5 == ctx->r1) {
        // 0x40019718: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_400197E0;
    }
    // 0x40019718: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001971C: addiu       $at, $zero, 0x5F
    ctx->r1 = ADD32(0, 0X5F);
    // 0x40019720: beq         $a1, $at, L_4001980C
    if (ctx->r5 == ctx->r1) {
        // 0x40019724: nop
    
            goto L_4001980C;
    }
    // 0x40019724: nop

    // 0x40019728: b           L_40019818
    // 0x4001972C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_40019818;
    // 0x4001972C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_40019730:
    // 0x40019730: addiu       $a1, $s0, 0x324
    ctx->r5 = ADD32(ctx->r16, 0X324);
    // 0x40019734: addiu       $a2, $a1, 0x4
    ctx->r6 = ADD32(ctx->r5, 0X4);
    // 0x40019738: jal         0x40011D40
    // 0x4001973C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_11D40(rdram, ctx);
        goto after_0;
    // 0x4001973C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x40019740: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40019744: addiu       $a1, $zero, 0x6C0
    ctx->r5 = ADD32(0, 0X6C0);
    // 0x40019748: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4001974C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40019750: jal         0x40008D64
    // 0x40019754: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_1;
    // 0x40019754: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x40019758: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x4001975C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x40019760: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x40019764: jal         0x400195AC
    // 0x40019768: swc1        $f4, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f4.u32l;
    ovl_actor_main_195AC(rdram, ctx);
        goto after_2;
    // 0x40019768: swc1        $f4, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f4.u32l;
    after_2:
    // 0x4001976C: b           L_40019818
    // 0x40019770: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_40019818;
    // 0x40019770: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_40019774:
    // 0x40019774: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x40019778: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x4001977C: lwc1        $f6, 0x328($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X328);
    // 0x40019780: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x40019784: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x40019788: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    // 0x4001978C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x40019790: jal         0x4001A534
    // 0x40019794: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    ovl_actor_main_1A534(rdram, ctx);
        goto after_3;
    // 0x40019794: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    after_3:
    // 0x40019798: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001979C: addiu       $a1, $zero, 0x2B8
    ctx->r5 = ADD32(0, 0X2B8);
    // 0x400197A0: jal         0x4000115C
    // 0x400197A4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_4;
    // 0x400197A4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x400197A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x400197AC: addiu       $a1, $zero, 0x41
    ctx->r5 = ADD32(0, 0X41);
    // 0x400197B0: jal         0x40009000
    // 0x400197B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_9000(rdram, ctx);
        goto after_5;
    // 0x400197B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x400197B8: b           L_40019818
    // 0x400197BC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_40019818;
    // 0x400197BC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_400197C0:
    // 0x400197C0: lwc1        $f16, 0x328($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X328);
    // 0x400197C4: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x400197C8: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    // 0x400197CC: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    // 0x400197D0: jal         0x4001A534
    // 0x400197D4: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    ovl_actor_main_1A534(rdram, ctx);
        goto after_6;
    // 0x400197D4: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_6:
    // 0x400197D8: b           L_40019818
    // 0x400197DC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_40019818;
    // 0x400197DC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_400197E0:
    // 0x400197E0: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x400197E4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x400197E8: lwc1        $f18, 0x328($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X328);
    // 0x400197EC: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x400197F0: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x400197F4: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    // 0x400197F8: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x400197FC: jal         0x4001A534
    // 0x40019800: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    ovl_actor_main_1A534(rdram, ctx);
        goto after_7;
    // 0x40019800: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    after_7:
    // 0x40019804: b           L_40019818
    // 0x40019808: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_40019818;
    // 0x40019808: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4001980C:
    // 0x4001980C: jal         0x4000CB84
    // 0x40019810: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_CB84(rdram, ctx);
        goto after_8;
    // 0x40019810: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x40019814: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_40019818:
    // 0x40019818: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x4001981C: jr          $ra
    // 0x40019820: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x40019820: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_actor_main_19824(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40019824: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x40019828: addiu       $t7, $a1, -0x1
    ctx->r15 = ADD32(ctx->r5, -0X1);
    // 0x4001982C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x40019830: sltiu       $at, $t7, 0x28
    ctx->r1 = ctx->r15 < 0X28 ? 1 : 0;
    // 0x40019834: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x40019838: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x4001983C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x40019840: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x40019844: beq         $at, $zero, L_40019988
    if (ctx->r1 == 0) {
        // 0x40019848: sw          $a1, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r5;
            goto L_40019988;
    }
    // 0x40019848: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x4001984C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x40019850: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x40019854: addu        $at, $at, $t7
    gpr jr_addend_40019860 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x40019858: lw          $t7, -0xAD4($at)
    ctx->r15 = ADD32(ctx->r1, -0XAD4);
    // 0x4001985C: nop

    // 0x40019860: jr          $t7
    // 0x40019864: nop

    switch (jr_addend_40019860 >> 2) {
        case 0: goto L_40019868; break;
        case 1: goto L_40019988; break;
        case 2: goto L_40019988; break;
        case 3: goto L_40019988; break;
        case 4: goto L_40019988; break;
        case 5: goto L_40019988; break;
        case 6: goto L_40019988; break;
        case 7: goto L_40019988; break;
        case 8: goto L_40019988; break;
        case 9: goto L_400198F4; break;
        case 10: goto L_40019910; break;
        case 11: goto L_40019988; break;
        case 12: goto L_40019988; break;
        case 13: goto L_40019988; break;
        case 14: goto L_40019988; break;
        case 15: goto L_40019968; break;
        case 16: goto L_40019988; break;
        case 17: goto L_40019988; break;
        case 18: goto L_40019988; break;
        case 19: goto L_40019988; break;
        case 20: goto L_40019988; break;
        case 21: goto L_40019988; break;
        case 22: goto L_40019988; break;
        case 23: goto L_40019988; break;
        case 24: goto L_40019988; break;
        case 25: goto L_40019988; break;
        case 26: goto L_40019988; break;
        case 27: goto L_40019988; break;
        case 28: goto L_40019988; break;
        case 29: goto L_40019988; break;
        case 30: goto L_40019988; break;
        case 31: goto L_40019988; break;
        case 32: goto L_40019988; break;
        case 33: goto L_40019988; break;
        case 34: goto L_40019988; break;
        case 35: goto L_40019988; break;
        case 36: goto L_40019988; break;
        case 37: goto L_40019988; break;
        case 38: goto L_40019988; break;
        case 39: goto L_40019980; break;
        default: switch_error(__func__, 0x40019860, 0x4001F52C);
    }
    // 0x40019864: nop

L_40019868:
    // 0x40019868: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x4001986C: addiu       $a1, $zero, 0x6C1
    ctx->r5 = ADD32(0, 0X6C1);
    // 0x40019870: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40019874: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40019878: jal         0x40008D64
    // 0x4001987C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x4001987C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x40019880: addiu       $s0, $s1, 0x324
    ctx->r16 = ADD32(ctx->r17, 0X324);
    // 0x40019884: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x40019888: addiu       $a2, $s0, 0x4
    ctx->r6 = ADD32(ctx->r16, 0X4);
    // 0x4001988C: jal         0x40011D40
    // 0x40019890: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_actor_main_11D40(rdram, ctx);
        goto after_1;
    // 0x40019890: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x40019894: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x40019898: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x4001989C: lui         $at, 0x41FA
    ctx->r1 = S32(0X41FA << 16);
    // 0x400198A0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x400198A4: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x400198A8: swc1        $f4, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->f4.u32l;
    // 0x400198AC: lwc1        $f6, 0x0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X0);
    // 0x400198B0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x400198B4: sub.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x400198B8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x400198BC: swc1        $f8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f8.u32l;
    // 0x400198C0: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    // 0x400198C4: jal         0x40006EEC
    // 0x400198C8: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    ovl_actor_main_6EEC(rdram, ctx);
        goto after_2;
    // 0x400198C8: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x400198CC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x400198D0: addiu       $a1, $zero, 0x233
    ctx->r5 = ADD32(0, 0X233);
    // 0x400198D4: jal         0x4000115C
    // 0x400198D8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_3;
    // 0x400198D8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x400198DC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x400198E0: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    // 0x400198E4: jal         0x40009000
    // 0x400198E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_9000(rdram, ctx);
        goto after_4;
    // 0x400198E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x400198EC: b           L_4001998C
    // 0x400198F0: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
        goto L_4001998C;
    // 0x400198F0: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
L_400198F4:
    // 0x400198F4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x400198F8: lui         $a1, 0xBF80
    ctx->r5 = S32(0XBF80 << 16);
    // 0x400198FC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40019900: jal         0x400018BC
    // 0x40019904: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_actor_main_18BC(rdram, ctx);
        goto after_5;
    // 0x40019904: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_5:
    // 0x40019908: b           L_4001998C
    // 0x4001990C: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
        goto L_4001998C;
    // 0x4001990C: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
L_40019910:
    // 0x40019910: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x40019914: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x40019918: jal         0x40008F98
    // 0x4001991C: swc1        $f10, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->f10.u32l;
    ovl_actor_main_8F98(rdram, ctx);
        goto after_6;
    // 0x4001991C: swc1        $f10, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->f10.u32l;
    after_6:
    // 0x40019920: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x40019924: lui         $a1, 0xBF80
    ctx->r5 = S32(0XBF80 << 16);
    // 0x40019928: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x4001992C: jal         0x400018BC
    // 0x40019930: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_actor_main_18BC(rdram, ctx);
        goto after_7;
    // 0x40019930: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_7:
    // 0x40019934: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x40019938: jal         0x400195AC
    // 0x4001993C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_actor_main_195AC(rdram, ctx);
        goto after_8;
    // 0x4001993C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
    // 0x40019940: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x40019944: lwc1        $f16, -0xA34($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0XA34);
    // 0x40019948: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x4001994C: addiu       $a1, $zero, 0xAB
    ctx->r5 = ADD32(0, 0XAB);
    // 0x40019950: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x40019954: lui         $a3, 0x41F0
    ctx->r7 = S32(0X41F0 << 16);
    // 0x40019958: jal         0x4000120C
    // 0x4001995C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    ovl_actor_main_120C(rdram, ctx);
        goto after_9;
    // 0x4001995C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_9:
    // 0x40019960: b           L_4001998C
    // 0x40019964: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
        goto L_4001998C;
    // 0x40019964: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
L_40019968:
    // 0x40019968: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x4001996C: addiu       $a1, $zero, 0x2B9
    ctx->r5 = ADD32(0, 0X2B9);
    // 0x40019970: jal         0x4000115C
    // 0x40019974: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_10;
    // 0x40019974: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_10:
    // 0x40019978: b           L_4001998C
    // 0x4001997C: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
        goto L_4001998C;
    // 0x4001997C: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
L_40019980:
    // 0x40019980: jal         0x4000CB84
    // 0x40019984: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_actor_main_CB84(rdram, ctx);
        goto after_11;
    // 0x40019984: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_11:
L_40019988:
    // 0x40019988: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
L_4001998C:
    // 0x4001998C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x40019990: slti        $at, $t8, 0xB
    ctx->r1 = SIGNED(ctx->r24) < 0XB ? 1 : 0;
    // 0x40019994: beq         $at, $zero, L_400199C0
    if (ctx->r1 == 0) {
        // 0x40019998: lw          $t9, 0x2C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X2C);
            goto L_400199C0;
    }
    // 0x40019998: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x4001999C: jal         0x40011E8C
    // 0x400199A0: addiu       $s0, $s1, 0x324
    ctx->r16 = ADD32(ctx->r17, 0X324);
    ovl_actor_main_11E8C(rdram, ctx);
        goto after_12;
    // 0x400199A0: addiu       $s0, $s1, 0x324
    ctx->r16 = ADD32(ctx->r17, 0X324);
    after_12:
    // 0x400199A4: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x400199A8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x400199AC: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x400199B0: lui         $a3, 0x41FA
    ctx->r7 = S32(0X41FA << 16);
    // 0x400199B4: jal         0x40011BE4
    // 0x400199B8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    ovl_actor_main_11BE4(rdram, ctx);
        goto after_13;
    // 0x400199B8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_13:
    // 0x400199BC: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
L_400199C0:
    // 0x400199C0: nop

    // 0x400199C4: slti        $at, $t9, 0x10
    ctx->r1 = SIGNED(ctx->r25) < 0X10 ? 1 : 0;
    // 0x400199C8: bne         $at, $zero, L_400199E0
    if (ctx->r1 != 0) {
        // 0x400199CC: slti        $at, $t9, 0x1B
        ctx->r1 = SIGNED(ctx->r25) < 0X1B ? 1 : 0;
            goto L_400199E0;
    }
    // 0x400199CC: slti        $at, $t9, 0x1B
    ctx->r1 = SIGNED(ctx->r25) < 0X1B ? 1 : 0;
    // 0x400199D0: beq         $at, $zero, L_400199E0
    if (ctx->r1 == 0) {
        // 0x400199D4: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_400199E0;
    }
    // 0x400199D4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x400199D8: jal         0x40011F94
    // 0x400199DC: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    ovl_actor_main_11F94(rdram, ctx);
        goto after_14;
    // 0x400199DC: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    after_14:
L_400199E0:
    // 0x400199E0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x400199E4: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x400199E8: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x400199EC: jr          $ra
    // 0x400199F0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x400199F0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_actor_main_199F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x400199F4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x400199F8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x400199FC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x40019A00: bne         $a1, $at, L_40019A28
    if (ctx->r5 != ctx->r1) {
        // 0x40019A04: sw          $a0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r4;
            goto L_40019A28;
    }
    // 0x40019A04: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x40019A08: addiu       $a1, $zero, 0x6C5
    ctx->r5 = ADD32(0, 0X6C5);
    // 0x40019A0C: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x40019A10: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x40019A14: jal         0x40008D64
    // 0x40019A18: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x40019A18: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x40019A1C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x40019A20: jal         0x40008EF8
    // 0x40019A24: addiu       $a1, $zero, 0x6CB
    ctx->r5 = ADD32(0, 0X6CB);
    ovl_actor_main_8EF8(rdram, ctx);
        goto after_1;
    // 0x40019A24: addiu       $a1, $zero, 0x6CB
    ctx->r5 = ADD32(0, 0X6CB);
    after_1:
L_40019A28:
    // 0x40019A28: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x40019A2C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x40019A30: jr          $ra
    // 0x40019A34: nop

    return;
    // 0x40019A34: nop

;}
RECOMP_FUNC void ovl_actor_main_19A38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40019A38: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40019A3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40019A40: lw          $t6, 0x14($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X14);
    // 0x40019A44: nop

    // 0x40019A48: addiu       $t7, $t6, -0xA
    ctx->r15 = ADD32(ctx->r14, -0XA);
    // 0x40019A4C: sltiu       $at, $t7, 0x26
    ctx->r1 = ctx->r15 < 0X26 ? 1 : 0;
    // 0x40019A50: beq         $at, $zero, L_40019AC8
    if (ctx->r1 == 0) {
        // 0x40019A54: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_40019AC8;
    }
    // 0x40019A54: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x40019A58: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x40019A5C: addu        $at, $at, $t7
    gpr jr_addend_40019A68 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x40019A60: lw          $t7, -0xA30($at)
    ctx->r15 = ADD32(ctx->r1, -0XA30);
    // 0x40019A64: nop

    // 0x40019A68: jr          $t7
    // 0x40019A6C: nop

    switch (jr_addend_40019A68 >> 2) {
        case 0: goto L_40019A80; break;
        case 1: goto L_40019AC8; break;
        case 2: goto L_40019AC8; break;
        case 3: goto L_40019AC8; break;
        case 4: goto L_40019AC8; break;
        case 5: goto L_40019AC8; break;
        case 6: goto L_40019AC8; break;
        case 7: goto L_40019A70; break;
        case 8: goto L_40019AC8; break;
        case 9: goto L_40019A90; break;
        case 10: goto L_40019AC8; break;
        case 11: goto L_40019AC8; break;
        case 12: goto L_40019AC8; break;
        case 13: goto L_40019AC8; break;
        case 14: goto L_40019AC8; break;
        case 15: goto L_40019AC8; break;
        case 16: goto L_40019AC8; break;
        case 17: goto L_40019AC8; break;
        case 18: goto L_40019AC8; break;
        case 19: goto L_40019AC8; break;
        case 20: goto L_40019AC8; break;
        case 21: goto L_40019AC8; break;
        case 22: goto L_40019AC8; break;
        case 23: goto L_40019AA0; break;
        case 24: goto L_40019AC8; break;
        case 25: goto L_40019AC8; break;
        case 26: goto L_40019AC8; break;
        case 27: goto L_40019AC8; break;
        case 28: goto L_40019AC8; break;
        case 29: goto L_40019AC8; break;
        case 30: goto L_40019AC8; break;
        case 31: goto L_40019AC8; break;
        case 32: goto L_40019AB0; break;
        case 33: goto L_40019AC8; break;
        case 34: goto L_40019AC8; break;
        case 35: goto L_40019AC8; break;
        case 36: goto L_40019AC8; break;
        case 37: goto L_40019AC0; break;
        default: switch_error(__func__, 0x40019A68, 0x4001F5D0);
    }
    // 0x40019A6C: nop

L_40019A70:
    // 0x40019A70: jal         0x40015F70
    // 0x40019A74: nop

    ovl_actor_main_15F70(rdram, ctx);
        goto after_0;
    // 0x40019A74: nop

    after_0:
    // 0x40019A78: b           L_40019ACC
    // 0x40019A7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40019ACC;
    // 0x40019A7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40019A80:
    // 0x40019A80: jal         0x40016558
    // 0x40019A84: nop

    ovl_actor_main_16558(rdram, ctx);
        goto after_1;
    // 0x40019A84: nop

    after_1:
    // 0x40019A88: b           L_40019ACC
    // 0x40019A8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40019ACC;
    // 0x40019A8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40019A90:
    // 0x40019A90: jal         0x400170F4
    // 0x40019A94: nop

    ovl_actor_main_170F4(rdram, ctx);
        goto after_2;
    // 0x40019A94: nop

    after_2:
    // 0x40019A98: b           L_40019ACC
    // 0x40019A9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40019ACC;
    // 0x40019A9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40019AA0:
    // 0x40019AA0: jal         0x400177E4
    // 0x40019AA4: nop

    ovl_actor_main_177E4(rdram, ctx);
        goto after_3;
    // 0x40019AA4: nop

    after_3:
    // 0x40019AA8: b           L_40019ACC
    // 0x40019AAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40019ACC;
    // 0x40019AAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40019AB0:
    // 0x40019AB0: jal         0x400182C4
    // 0x40019AB4: nop

    ovl_actor_main_182C4(rdram, ctx);
        goto after_4;
    // 0x40019AB4: nop

    after_4:
    // 0x40019AB8: b           L_40019ACC
    // 0x40019ABC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40019ACC;
    // 0x40019ABC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40019AC0:
    // 0x40019AC0: jal         0x40018DE8
    // 0x40019AC4: nop

    ovl_actor_main_18DE8(rdram, ctx);
        goto after_5;
    // 0x40019AC4: nop

    after_5:
L_40019AC8:
    // 0x40019AC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40019ACC:
    // 0x40019ACC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40019AD0: jr          $ra
    // 0x40019AD4: nop

    return;
    // 0x40019AD4: nop

;}
RECOMP_FUNC void ovl_actor_main_19AD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40019AD8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40019ADC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40019AE0: lw          $t6, 0x14($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X14);
    // 0x40019AE4: nop

    // 0x40019AE8: addiu       $t7, $t6, -0xA
    ctx->r15 = ADD32(ctx->r14, -0XA);
    // 0x40019AEC: sltiu       $at, $t7, 0x26
    ctx->r1 = ctx->r15 < 0X26 ? 1 : 0;
    // 0x40019AF0: beq         $at, $zero, L_40019B68
    if (ctx->r1 == 0) {
        // 0x40019AF4: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_40019B68;
    }
    // 0x40019AF4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x40019AF8: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x40019AFC: addu        $at, $at, $t7
    gpr jr_addend_40019B08 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x40019B00: lw          $t7, -0x998($at)
    ctx->r15 = ADD32(ctx->r1, -0X998);
    // 0x40019B04: nop

    // 0x40019B08: jr          $t7
    // 0x40019B0C: nop

    switch (jr_addend_40019B08 >> 2) {
        case 0: goto L_40019B20; break;
        case 1: goto L_40019B68; break;
        case 2: goto L_40019B68; break;
        case 3: goto L_40019B68; break;
        case 4: goto L_40019B68; break;
        case 5: goto L_40019B68; break;
        case 6: goto L_40019B68; break;
        case 7: goto L_40019B10; break;
        case 8: goto L_40019B68; break;
        case 9: goto L_40019B30; break;
        case 10: goto L_40019B68; break;
        case 11: goto L_40019B68; break;
        case 12: goto L_40019B68; break;
        case 13: goto L_40019B68; break;
        case 14: goto L_40019B68; break;
        case 15: goto L_40019B68; break;
        case 16: goto L_40019B68; break;
        case 17: goto L_40019B68; break;
        case 18: goto L_40019B68; break;
        case 19: goto L_40019B68; break;
        case 20: goto L_40019B68; break;
        case 21: goto L_40019B68; break;
        case 22: goto L_40019B68; break;
        case 23: goto L_40019B40; break;
        case 24: goto L_40019B68; break;
        case 25: goto L_40019B68; break;
        case 26: goto L_40019B68; break;
        case 27: goto L_40019B68; break;
        case 28: goto L_40019B68; break;
        case 29: goto L_40019B68; break;
        case 30: goto L_40019B68; break;
        case 31: goto L_40019B68; break;
        case 32: goto L_40019B50; break;
        case 33: goto L_40019B68; break;
        case 34: goto L_40019B68; break;
        case 35: goto L_40019B68; break;
        case 36: goto L_40019B68; break;
        case 37: goto L_40019B60; break;
        default: switch_error(__func__, 0x40019B08, 0x4001F668);
    }
    // 0x40019B0C: nop

L_40019B10:
    // 0x40019B10: jal         0x4001609C
    // 0x40019B14: nop

    ovl_actor_main_1609C(rdram, ctx);
        goto after_0;
    // 0x40019B14: nop

    after_0:
    // 0x40019B18: b           L_40019B6C
    // 0x40019B1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40019B6C;
    // 0x40019B1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40019B20:
    // 0x40019B20: jal         0x40016694
    // 0x40019B24: nop

    ovl_actor_main_16694(rdram, ctx);
        goto after_1;
    // 0x40019B24: nop

    after_1:
    // 0x40019B28: b           L_40019B6C
    // 0x40019B2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40019B6C;
    // 0x40019B2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40019B30:
    // 0x40019B30: jal         0x40017144
    // 0x40019B34: nop

    ovl_actor_main_17144(rdram, ctx);
        goto after_2;
    // 0x40019B34: nop

    after_2:
    // 0x40019B38: b           L_40019B6C
    // 0x40019B3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40019B6C;
    // 0x40019B3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40019B40:
    // 0x40019B40: jal         0x40017934
    // 0x40019B44: nop

    ovl_actor_main_17934(rdram, ctx);
        goto after_3;
    // 0x40019B44: nop

    after_3:
    // 0x40019B48: b           L_40019B6C
    // 0x40019B4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40019B6C;
    // 0x40019B4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40019B50:
    // 0x40019B50: jal         0x40018314
    // 0x40019B54: nop

    ovl_actor_main_18314(rdram, ctx);
        goto after_4;
    // 0x40019B54: nop

    after_4:
    // 0x40019B58: b           L_40019B6C
    // 0x40019B5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40019B6C;
    // 0x40019B5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40019B60:
    // 0x40019B60: jal         0x40018E2C
    // 0x40019B64: nop

    ovl_actor_main_18E2C(rdram, ctx);
        goto after_5;
    // 0x40019B64: nop

    after_5:
L_40019B68:
    // 0x40019B68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40019B6C:
    // 0x40019B6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40019B70: jr          $ra
    // 0x40019B74: nop

    return;
    // 0x40019B74: nop

;}
RECOMP_FUNC void ovl_actor_main_19B78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40019B78: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40019B7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40019B80: lw          $t6, 0x14($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X14);
    // 0x40019B84: nop

    // 0x40019B88: addiu       $t7, $t6, -0xA
    ctx->r15 = ADD32(ctx->r14, -0XA);
    // 0x40019B8C: sltiu       $at, $t7, 0x26
    ctx->r1 = ctx->r15 < 0X26 ? 1 : 0;
    // 0x40019B90: beq         $at, $zero, L_40019C08
    if (ctx->r1 == 0) {
        // 0x40019B94: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_40019C08;
    }
    // 0x40019B94: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x40019B98: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x40019B9C: addu        $at, $at, $t7
    gpr jr_addend_40019BA8 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x40019BA0: lw          $t7, -0x900($at)
    ctx->r15 = ADD32(ctx->r1, -0X900);
    // 0x40019BA4: nop

    // 0x40019BA8: jr          $t7
    // 0x40019BAC: nop

    switch (jr_addend_40019BA8 >> 2) {
        case 0: goto L_40019BC0; break;
        case 1: goto L_40019C08; break;
        case 2: goto L_40019C08; break;
        case 3: goto L_40019C08; break;
        case 4: goto L_40019C08; break;
        case 5: goto L_40019C08; break;
        case 6: goto L_40019C08; break;
        case 7: goto L_40019BB0; break;
        case 8: goto L_40019C08; break;
        case 9: goto L_40019BD0; break;
        case 10: goto L_40019C08; break;
        case 11: goto L_40019C08; break;
        case 12: goto L_40019C08; break;
        case 13: goto L_40019C08; break;
        case 14: goto L_40019C08; break;
        case 15: goto L_40019C08; break;
        case 16: goto L_40019C08; break;
        case 17: goto L_40019C08; break;
        case 18: goto L_40019C08; break;
        case 19: goto L_40019C08; break;
        case 20: goto L_40019C08; break;
        case 21: goto L_40019C08; break;
        case 22: goto L_40019C08; break;
        case 23: goto L_40019BE0; break;
        case 24: goto L_40019C08; break;
        case 25: goto L_40019C08; break;
        case 26: goto L_40019C08; break;
        case 27: goto L_40019C08; break;
        case 28: goto L_40019C08; break;
        case 29: goto L_40019C08; break;
        case 30: goto L_40019C08; break;
        case 31: goto L_40019C08; break;
        case 32: goto L_40019BF0; break;
        case 33: goto L_40019C08; break;
        case 34: goto L_40019C08; break;
        case 35: goto L_40019C08; break;
        case 36: goto L_40019C08; break;
        case 37: goto L_40019C00; break;
        default: switch_error(__func__, 0x40019BA8, 0x4001F700);
    }
    // 0x40019BAC: nop

L_40019BB0:
    // 0x40019BB0: jal         0x4001615C
    // 0x40019BB4: nop

    ovl_actor_main_1615C(rdram, ctx);
        goto after_0;
    // 0x40019BB4: nop

    after_0:
    // 0x40019BB8: b           L_40019C0C
    // 0x40019BBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40019C0C;
    // 0x40019BBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40019BC0:
    // 0x40019BC0: jal         0x400166B8
    // 0x40019BC4: nop

    ovl_actor_main_166B8(rdram, ctx);
        goto after_1;
    // 0x40019BC4: nop

    after_1:
    // 0x40019BC8: b           L_40019C0C
    // 0x40019BCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40019C0C;
    // 0x40019BCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40019BD0:
    // 0x40019BD0: jal         0x40017194
    // 0x40019BD4: nop

    ovl_actor_main_17194(rdram, ctx);
        goto after_2;
    // 0x40019BD4: nop

    after_2:
    // 0x40019BD8: b           L_40019C0C
    // 0x40019BDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40019C0C;
    // 0x40019BDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40019BE0:
    // 0x40019BE0: jal         0x40017C00
    // 0x40019BE4: nop

    ovl_actor_main_17C00(rdram, ctx);
        goto after_3;
    // 0x40019BE4: nop

    after_3:
    // 0x40019BE8: b           L_40019C0C
    // 0x40019BEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40019C0C;
    // 0x40019BEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40019BF0:
    // 0x40019BF0: jal         0x40018348
    // 0x40019BF4: nop

    ovl_actor_main_18348(rdram, ctx);
        goto after_4;
    // 0x40019BF4: nop

    after_4:
    // 0x40019BF8: b           L_40019C0C
    // 0x40019BFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40019C0C;
    // 0x40019BFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40019C00:
    // 0x40019C00: jal         0x40018E60
    // 0x40019C04: nop

    ovl_actor_main_18E60(rdram, ctx);
        goto after_5;
    // 0x40019C04: nop

    after_5:
L_40019C08:
    // 0x40019C08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40019C0C:
    // 0x40019C0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40019C10: jr          $ra
    // 0x40019C14: nop

    return;
    // 0x40019C14: nop

;}
RECOMP_FUNC void ovl_actor_main_19C18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40019C18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40019C1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40019C20: lw          $t6, 0x14($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X14);
    // 0x40019C24: nop

    // 0x40019C28: addiu       $t7, $t6, -0xA
    ctx->r15 = ADD32(ctx->r14, -0XA);
    // 0x40019C2C: sltiu       $at, $t7, 0x26
    ctx->r1 = ctx->r15 < 0X26 ? 1 : 0;
    // 0x40019C30: beq         $at, $zero, L_40019CA8
    if (ctx->r1 == 0) {
        // 0x40019C34: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_40019CA8;
    }
    // 0x40019C34: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x40019C38: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x40019C3C: addu        $at, $at, $t7
    gpr jr_addend_40019C48 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x40019C40: lw          $t7, -0x868($at)
    ctx->r15 = ADD32(ctx->r1, -0X868);
    // 0x40019C44: nop

    // 0x40019C48: jr          $t7
    // 0x40019C4C: nop

    switch (jr_addend_40019C48 >> 2) {
        case 0: goto L_40019C60; break;
        case 1: goto L_40019CA8; break;
        case 2: goto L_40019CA8; break;
        case 3: goto L_40019CA8; break;
        case 4: goto L_40019CA8; break;
        case 5: goto L_40019CA8; break;
        case 6: goto L_40019CA8; break;
        case 7: goto L_40019C50; break;
        case 8: goto L_40019CA8; break;
        case 9: goto L_40019C70; break;
        case 10: goto L_40019CA8; break;
        case 11: goto L_40019CA8; break;
        case 12: goto L_40019CA8; break;
        case 13: goto L_40019CA8; break;
        case 14: goto L_40019CA8; break;
        case 15: goto L_40019CA8; break;
        case 16: goto L_40019CA8; break;
        case 17: goto L_40019CA8; break;
        case 18: goto L_40019CA8; break;
        case 19: goto L_40019CA8; break;
        case 20: goto L_40019CA8; break;
        case 21: goto L_40019CA8; break;
        case 22: goto L_40019CA8; break;
        case 23: goto L_40019C80; break;
        case 24: goto L_40019CA8; break;
        case 25: goto L_40019CA8; break;
        case 26: goto L_40019CA8; break;
        case 27: goto L_40019CA8; break;
        case 28: goto L_40019CA8; break;
        case 29: goto L_40019CA8; break;
        case 30: goto L_40019CA8; break;
        case 31: goto L_40019CA8; break;
        case 32: goto L_40019C90; break;
        case 33: goto L_40019CA8; break;
        case 34: goto L_40019CA8; break;
        case 35: goto L_40019CA8; break;
        case 36: goto L_40019CA8; break;
        case 37: goto L_40019CA0; break;
        default: switch_error(__func__, 0x40019C48, 0x4001F798);
    }
    // 0x40019C4C: nop

L_40019C50:
    // 0x40019C50: jal         0x40016254
    // 0x40019C54: nop

    ovl_actor_main_16254(rdram, ctx);
        goto after_0;
    // 0x40019C54: nop

    after_0:
    // 0x40019C58: b           L_40019CAC
    // 0x40019C5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40019CAC;
    // 0x40019C5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40019C60:
    // 0x40019C60: jal         0x400166EC
    // 0x40019C64: nop

    ovl_actor_main_166EC(rdram, ctx);
        goto after_1;
    // 0x40019C64: nop

    after_1:
    // 0x40019C68: b           L_40019CAC
    // 0x40019C6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40019CAC;
    // 0x40019C6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40019C70:
    // 0x40019C70: jal         0x400171E4
    // 0x40019C74: nop

    ovl_actor_main_171E4(rdram, ctx);
        goto after_2;
    // 0x40019C74: nop

    after_2:
    // 0x40019C78: b           L_40019CAC
    // 0x40019C7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40019CAC;
    // 0x40019C7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40019C80:
    // 0x40019C80: jal         0x40017C50
    // 0x40019C84: nop

    ovl_actor_main_17C50(rdram, ctx);
        goto after_3;
    // 0x40019C84: nop

    after_3:
    // 0x40019C88: b           L_40019CAC
    // 0x40019C8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40019CAC;
    // 0x40019C8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40019C90:
    // 0x40019C90: jal         0x4001837C
    // 0x40019C94: nop

    ovl_actor_main_1837C(rdram, ctx);
        goto after_4;
    // 0x40019C94: nop

    after_4:
    // 0x40019C98: b           L_40019CAC
    // 0x40019C9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40019CAC;
    // 0x40019C9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40019CA0:
    // 0x40019CA0: jal         0x40018EC0
    // 0x40019CA4: nop

    ovl_actor_main_18EC0(rdram, ctx);
        goto after_5;
    // 0x40019CA4: nop

    after_5:
L_40019CA8:
    // 0x40019CA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40019CAC:
    // 0x40019CAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40019CB0: jr          $ra
    // 0x40019CB4: nop

    return;
    // 0x40019CB4: nop

;}
RECOMP_FUNC void ovl_actor_main_19CB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40019CB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40019CBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40019CC0: lw          $t6, 0x14($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X14);
    // 0x40019CC4: nop

    // 0x40019CC8: addiu       $t7, $t6, -0xA
    ctx->r15 = ADD32(ctx->r14, -0XA);
    // 0x40019CCC: sltiu       $at, $t7, 0x26
    ctx->r1 = ctx->r15 < 0X26 ? 1 : 0;
    // 0x40019CD0: beq         $at, $zero, L_40019D48
    if (ctx->r1 == 0) {
        // 0x40019CD4: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_40019D48;
    }
    // 0x40019CD4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x40019CD8: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x40019CDC: addu        $at, $at, $t7
    gpr jr_addend_40019CE8 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x40019CE0: lw          $t7, -0x7D0($at)
    ctx->r15 = ADD32(ctx->r1, -0X7D0);
    // 0x40019CE4: nop

    // 0x40019CE8: jr          $t7
    // 0x40019CEC: nop

    switch (jr_addend_40019CE8 >> 2) {
        case 0: goto L_40019D00; break;
        case 1: goto L_40019D48; break;
        case 2: goto L_40019D48; break;
        case 3: goto L_40019D48; break;
        case 4: goto L_40019D48; break;
        case 5: goto L_40019D48; break;
        case 6: goto L_40019D48; break;
        case 7: goto L_40019CF0; break;
        case 8: goto L_40019D48; break;
        case 9: goto L_40019D10; break;
        case 10: goto L_40019D48; break;
        case 11: goto L_40019D48; break;
        case 12: goto L_40019D48; break;
        case 13: goto L_40019D48; break;
        case 14: goto L_40019D48; break;
        case 15: goto L_40019D48; break;
        case 16: goto L_40019D48; break;
        case 17: goto L_40019D48; break;
        case 18: goto L_40019D48; break;
        case 19: goto L_40019D48; break;
        case 20: goto L_40019D48; break;
        case 21: goto L_40019D48; break;
        case 22: goto L_40019D48; break;
        case 23: goto L_40019D20; break;
        case 24: goto L_40019D48; break;
        case 25: goto L_40019D48; break;
        case 26: goto L_40019D48; break;
        case 27: goto L_40019D48; break;
        case 28: goto L_40019D48; break;
        case 29: goto L_40019D48; break;
        case 30: goto L_40019D48; break;
        case 31: goto L_40019D48; break;
        case 32: goto L_40019D30; break;
        case 33: goto L_40019D48; break;
        case 34: goto L_40019D48; break;
        case 35: goto L_40019D48; break;
        case 36: goto L_40019D48; break;
        case 37: goto L_40019D40; break;
        default: switch_error(__func__, 0x40019CE8, 0x4001F830);
    }
    // 0x40019CEC: nop

L_40019CF0:
    // 0x40019CF0: jal         0x40016460
    // 0x40019CF4: nop

    ovl_actor_main_16460(rdram, ctx);
        goto after_0;
    // 0x40019CF4: nop

    after_0:
    // 0x40019CF8: b           L_40019D4C
    // 0x40019CFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40019D4C;
    // 0x40019CFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40019D00:
    // 0x40019D00: jal         0x40016968
    // 0x40019D04: nop

    ovl_actor_main_16968(rdram, ctx);
        goto after_1;
    // 0x40019D04: nop

    after_1:
    // 0x40019D08: b           L_40019D4C
    // 0x40019D0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40019D4C;
    // 0x40019D0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40019D10:
    // 0x40019D10: jal         0x40017218
    // 0x40019D14: nop

    ovl_actor_main_17218(rdram, ctx);
        goto after_2;
    // 0x40019D14: nop

    after_2:
    // 0x40019D18: b           L_40019D4C
    // 0x40019D1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40019D4C;
    // 0x40019D1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40019D20:
    // 0x40019D20: jal         0x40017C84
    // 0x40019D24: nop

    ovl_actor_main_17C84(rdram, ctx);
        goto after_3;
    // 0x40019D24: nop

    after_3:
    // 0x40019D28: b           L_40019D4C
    // 0x40019D2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40019D4C;
    // 0x40019D2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40019D30:
    // 0x40019D30: jal         0x400183FC
    // 0x40019D34: nop

    ovl_actor_main_183FC(rdram, ctx);
        goto after_4;
    // 0x40019D34: nop

    after_4:
    // 0x40019D38: b           L_40019D4C
    // 0x40019D3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40019D4C;
    // 0x40019D3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40019D40:
    // 0x40019D40: jal         0x40018F10
    // 0x40019D44: nop

    ovl_actor_main_18F10(rdram, ctx);
        goto after_5;
    // 0x40019D44: nop

    after_5:
L_40019D48:
    // 0x40019D48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40019D4C:
    // 0x40019D4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40019D50: jr          $ra
    // 0x40019D54: nop

    return;
    // 0x40019D54: nop

;}
RECOMP_FUNC void ovl_actor_main_19D58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40019D58: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40019D5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40019D60: lw          $t6, 0x14($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X14);
    // 0x40019D64: nop

    // 0x40019D68: addiu       $t7, $t6, -0xA
    ctx->r15 = ADD32(ctx->r14, -0XA);
    // 0x40019D6C: sltiu       $at, $t7, 0x26
    ctx->r1 = ctx->r15 < 0X26 ? 1 : 0;
    // 0x40019D70: beq         $at, $zero, L_40019DE8
    if (ctx->r1 == 0) {
        // 0x40019D74: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_40019DE8;
    }
    // 0x40019D74: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x40019D78: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x40019D7C: addu        $at, $at, $t7
    gpr jr_addend_40019D88 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x40019D80: lw          $t7, -0x738($at)
    ctx->r15 = ADD32(ctx->r1, -0X738);
    // 0x40019D84: nop

    // 0x40019D88: jr          $t7
    // 0x40019D8C: nop

    switch (jr_addend_40019D88 >> 2) {
        case 0: goto L_40019DA0; break;
        case 1: goto L_40019DE8; break;
        case 2: goto L_40019DE8; break;
        case 3: goto L_40019DE8; break;
        case 4: goto L_40019DE8; break;
        case 5: goto L_40019DE8; break;
        case 6: goto L_40019DE8; break;
        case 7: goto L_40019D90; break;
        case 8: goto L_40019DE8; break;
        case 9: goto L_40019DB0; break;
        case 10: goto L_40019DE8; break;
        case 11: goto L_40019DE8; break;
        case 12: goto L_40019DE8; break;
        case 13: goto L_40019DE8; break;
        case 14: goto L_40019DE8; break;
        case 15: goto L_40019DE8; break;
        case 16: goto L_40019DE8; break;
        case 17: goto L_40019DE8; break;
        case 18: goto L_40019DE8; break;
        case 19: goto L_40019DE8; break;
        case 20: goto L_40019DE8; break;
        case 21: goto L_40019DE8; break;
        case 22: goto L_40019DE8; break;
        case 23: goto L_40019DC0; break;
        case 24: goto L_40019DE8; break;
        case 25: goto L_40019DE8; break;
        case 26: goto L_40019DE8; break;
        case 27: goto L_40019DE8; break;
        case 28: goto L_40019DE8; break;
        case 29: goto L_40019DE8; break;
        case 30: goto L_40019DE8; break;
        case 31: goto L_40019DE8; break;
        case 32: goto L_40019DD0; break;
        case 33: goto L_40019DE8; break;
        case 34: goto L_40019DE8; break;
        case 35: goto L_40019DE8; break;
        case 36: goto L_40019DE8; break;
        case 37: goto L_40019DE0; break;
        default: switch_error(__func__, 0x40019D88, 0x4001F8C8);
    }
    // 0x40019D8C: nop

L_40019D90:
    // 0x40019D90: jal         0x400164F0
    // 0x40019D94: nop

    ovl_actor_main_164F0(rdram, ctx);
        goto after_0;
    // 0x40019D94: nop

    after_0:
    // 0x40019D98: b           L_40019DEC
    // 0x40019D9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40019DEC;
    // 0x40019D9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40019DA0:
    // 0x40019DA0: jal         0x400169F8
    // 0x40019DA4: nop

    ovl_actor_main_169F8(rdram, ctx);
        goto after_1;
    // 0x40019DA4: nop

    after_1:
    // 0x40019DA8: b           L_40019DEC
    // 0x40019DAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40019DEC;
    // 0x40019DAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40019DB0:
    // 0x40019DB0: jal         0x400173F0
    // 0x40019DB4: nop

    ovl_actor_main_173F0(rdram, ctx);
        goto after_2;
    // 0x40019DB4: nop

    after_2:
    // 0x40019DB8: b           L_40019DEC
    // 0x40019DBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40019DEC;
    // 0x40019DBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40019DC0:
    // 0x40019DC0: jal         0x40017F14
    // 0x40019DC4: nop

    ovl_actor_main_17F14(rdram, ctx);
        goto after_3;
    // 0x40019DC4: nop

    after_3:
    // 0x40019DC8: b           L_40019DEC
    // 0x40019DCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40019DEC;
    // 0x40019DCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40019DD0:
    // 0x40019DD0: jal         0x40018778
    // 0x40019DD4: nop

    ovl_actor_main_18778(rdram, ctx);
        goto after_4;
    // 0x40019DD4: nop

    after_4:
    // 0x40019DD8: b           L_40019DEC
    // 0x40019DDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40019DEC;
    // 0x40019DDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40019DE0:
    // 0x40019DE0: jal         0x40018F60
    // 0x40019DE4: nop

    ovl_actor_main_18F60(rdram, ctx);
        goto after_5;
    // 0x40019DE4: nop

    after_5:
L_40019DE8:
    // 0x40019DE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40019DEC:
    // 0x40019DEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40019DF0: jr          $ra
    // 0x40019DF4: nop

    return;
    // 0x40019DF4: nop

;}
RECOMP_FUNC void ovl_actor_main_19DF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40019DF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40019DFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40019E00: lw          $t6, 0x14($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X14);
    // 0x40019E04: nop

    // 0x40019E08: addiu       $t7, $t6, -0xA
    ctx->r15 = ADD32(ctx->r14, -0XA);
    // 0x40019E0C: sltiu       $at, $t7, 0x26
    ctx->r1 = ctx->r15 < 0X26 ? 1 : 0;
    // 0x40019E10: beq         $at, $zero, L_40019E88
    if (ctx->r1 == 0) {
        // 0x40019E14: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_40019E88;
    }
    // 0x40019E14: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x40019E18: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x40019E1C: addu        $at, $at, $t7
    gpr jr_addend_40019E28 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x40019E20: lw          $t7, -0x6A0($at)
    ctx->r15 = ADD32(ctx->r1, -0X6A0);
    // 0x40019E24: nop

    // 0x40019E28: jr          $t7
    // 0x40019E2C: nop

    switch (jr_addend_40019E28 >> 2) {
        case 0: goto L_40019E40; break;
        case 1: goto L_40019E88; break;
        case 2: goto L_40019E88; break;
        case 3: goto L_40019E88; break;
        case 4: goto L_40019E88; break;
        case 5: goto L_40019E88; break;
        case 6: goto L_40019E88; break;
        case 7: goto L_40019E30; break;
        case 8: goto L_40019E88; break;
        case 9: goto L_40019E50; break;
        case 10: goto L_40019E88; break;
        case 11: goto L_40019E88; break;
        case 12: goto L_40019E88; break;
        case 13: goto L_40019E88; break;
        case 14: goto L_40019E88; break;
        case 15: goto L_40019E88; break;
        case 16: goto L_40019E88; break;
        case 17: goto L_40019E88; break;
        case 18: goto L_40019E88; break;
        case 19: goto L_40019E88; break;
        case 20: goto L_40019E88; break;
        case 21: goto L_40019E88; break;
        case 22: goto L_40019E88; break;
        case 23: goto L_40019E60; break;
        case 24: goto L_40019E88; break;
        case 25: goto L_40019E88; break;
        case 26: goto L_40019E88; break;
        case 27: goto L_40019E88; break;
        case 28: goto L_40019E88; break;
        case 29: goto L_40019E88; break;
        case 30: goto L_40019E88; break;
        case 31: goto L_40019E88; break;
        case 32: goto L_40019E70; break;
        case 33: goto L_40019E88; break;
        case 34: goto L_40019E88; break;
        case 35: goto L_40019E88; break;
        case 36: goto L_40019E88; break;
        case 37: goto L_40019E80; break;
        default: switch_error(__func__, 0x40019E28, 0x4001F960);
    }
    // 0x40019E2C: nop

L_40019E30:
    // 0x40019E30: jal         0x40016524
    // 0x40019E34: nop

    ovl_actor_main_16524(rdram, ctx);
        goto after_0;
    // 0x40019E34: nop

    after_0:
    // 0x40019E38: b           L_40019E8C
    // 0x40019E3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40019E8C;
    // 0x40019E3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40019E40:
    // 0x40019E40: jal         0x40016A2C
    // 0x40019E44: nop

    ovl_actor_main_16A2C(rdram, ctx);
        goto after_1;
    // 0x40019E44: nop

    after_1:
    // 0x40019E48: b           L_40019E8C
    // 0x40019E4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40019E8C;
    // 0x40019E4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40019E50:
    // 0x40019E50: jal         0x40017480
    // 0x40019E54: nop

    ovl_actor_main_17480(rdram, ctx);
        goto after_2;
    // 0x40019E54: nop

    after_2:
    // 0x40019E58: b           L_40019E8C
    // 0x40019E5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40019E8C;
    // 0x40019E5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40019E60:
    // 0x40019E60: jal         0x40017FAC
    // 0x40019E64: nop

    ovl_actor_main_17FAC(rdram, ctx);
        goto after_3;
    // 0x40019E64: nop

    after_3:
    // 0x40019E68: b           L_40019E8C
    // 0x40019E6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40019E8C;
    // 0x40019E6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40019E70:
    // 0x40019E70: jal         0x400187FC
    // 0x40019E74: nop

    ovl_actor_main_187FC(rdram, ctx);
        goto after_4;
    // 0x40019E74: nop

    after_4:
    // 0x40019E78: b           L_40019E8C
    // 0x40019E7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40019E8C;
    // 0x40019E7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40019E80:
    // 0x40019E80: jal         0x40018FB0
    // 0x40019E84: nop

    ovl_actor_main_18FB0(rdram, ctx);
        goto after_5;
    // 0x40019E84: nop

    after_5:
L_40019E88:
    // 0x40019E88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40019E8C:
    // 0x40019E8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40019E90: jr          $ra
    // 0x40019E94: nop

    return;
    // 0x40019E94: nop

;}
RECOMP_FUNC void ovl_actor_main_19E98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40019E98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40019E9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40019EA0: lw          $t6, 0x14($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X14);
    // 0x40019EA4: nop

    // 0x40019EA8: addiu       $t7, $t6, -0xA
    ctx->r15 = ADD32(ctx->r14, -0XA);
    // 0x40019EAC: sltiu       $at, $t7, 0x26
    ctx->r1 = ctx->r15 < 0X26 ? 1 : 0;
    // 0x40019EB0: beq         $at, $zero, L_40019F18
    if (ctx->r1 == 0) {
        // 0x40019EB4: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_40019F18;
    }
    // 0x40019EB4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x40019EB8: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x40019EBC: addu        $at, $at, $t7
    gpr jr_addend_40019EC8 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x40019EC0: lw          $t7, -0x608($at)
    ctx->r15 = ADD32(ctx->r1, -0X608);
    // 0x40019EC4: nop

    // 0x40019EC8: jr          $t7
    // 0x40019ECC: nop

    switch (jr_addend_40019EC8 >> 2) {
        case 0: goto L_40019ED0; break;
        case 1: goto L_40019F18; break;
        case 2: goto L_40019F18; break;
        case 3: goto L_40019F18; break;
        case 4: goto L_40019F18; break;
        case 5: goto L_40019F18; break;
        case 6: goto L_40019F18; break;
        case 7: goto L_40019F18; break;
        case 8: goto L_40019F18; break;
        case 9: goto L_40019EE0; break;
        case 10: goto L_40019F18; break;
        case 11: goto L_40019F18; break;
        case 12: goto L_40019F18; break;
        case 13: goto L_40019F18; break;
        case 14: goto L_40019F18; break;
        case 15: goto L_40019F18; break;
        case 16: goto L_40019F18; break;
        case 17: goto L_40019F18; break;
        case 18: goto L_40019F18; break;
        case 19: goto L_40019F18; break;
        case 20: goto L_40019F18; break;
        case 21: goto L_40019F18; break;
        case 22: goto L_40019F18; break;
        case 23: goto L_40019EF0; break;
        case 24: goto L_40019F18; break;
        case 25: goto L_40019F18; break;
        case 26: goto L_40019F18; break;
        case 27: goto L_40019F18; break;
        case 28: goto L_40019F18; break;
        case 29: goto L_40019F18; break;
        case 30: goto L_40019F18; break;
        case 31: goto L_40019F18; break;
        case 32: goto L_40019F00; break;
        case 33: goto L_40019F18; break;
        case 34: goto L_40019F18; break;
        case 35: goto L_40019F18; break;
        case 36: goto L_40019F18; break;
        case 37: goto L_40019F10; break;
        default: switch_error(__func__, 0x40019EC8, 0x4001F9F8);
    }
    // 0x40019ECC: nop

L_40019ED0:
    // 0x40019ED0: jal         0x40016A60
    // 0x40019ED4: nop

    ovl_actor_main_16A60(rdram, ctx);
        goto after_0;
    // 0x40019ED4: nop

    after_0:
    // 0x40019ED8: b           L_40019F1C
    // 0x40019EDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40019F1C;
    // 0x40019EDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40019EE0:
    // 0x40019EE0: jal         0x400174B4
    // 0x40019EE4: nop

    ovl_actor_main_174B4(rdram, ctx);
        goto after_1;
    // 0x40019EE4: nop

    after_1:
    // 0x40019EE8: b           L_40019F1C
    // 0x40019EEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40019F1C;
    // 0x40019EEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40019EF0:
    // 0x40019EF0: jal         0x40017FE0
    // 0x40019EF4: nop

    ovl_actor_main_17FE0(rdram, ctx);
        goto after_2;
    // 0x40019EF4: nop

    after_2:
    // 0x40019EF8: b           L_40019F1C
    // 0x40019EFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40019F1C;
    // 0x40019EFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40019F00:
    // 0x40019F00: jal         0x4001884C
    // 0x40019F04: nop

    ovl_actor_main_1884C(rdram, ctx);
        goto after_3;
    // 0x40019F04: nop

    after_3:
    // 0x40019F08: b           L_40019F1C
    // 0x40019F0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40019F1C;
    // 0x40019F0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40019F10:
    // 0x40019F10: jal         0x40019080
    // 0x40019F14: nop

    ovl_actor_main_19080(rdram, ctx);
        goto after_4;
    // 0x40019F14: nop

    after_4:
L_40019F18:
    // 0x40019F18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40019F1C:
    // 0x40019F1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40019F20: jr          $ra
    // 0x40019F24: nop

    return;
    // 0x40019F24: nop

;}
RECOMP_FUNC void ovl_actor_main_19F28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40019F28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40019F2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40019F30: lw          $t6, 0x14($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X14);
    // 0x40019F34: nop

    // 0x40019F38: addiu       $t7, $t6, -0xA
    ctx->r15 = ADD32(ctx->r14, -0XA);
    // 0x40019F3C: sltiu       $at, $t7, 0x26
    ctx->r1 = ctx->r15 < 0X26 ? 1 : 0;
    // 0x40019F40: beq         $at, $zero, L_40019FA8
    if (ctx->r1 == 0) {
        // 0x40019F44: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_40019FA8;
    }
    // 0x40019F44: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x40019F48: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x40019F4C: addu        $at, $at, $t7
    gpr jr_addend_40019F58 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x40019F50: lw          $t7, -0x570($at)
    ctx->r15 = ADD32(ctx->r1, -0X570);
    // 0x40019F54: nop

    // 0x40019F58: jr          $t7
    // 0x40019F5C: nop

    switch (jr_addend_40019F58 >> 2) {
        case 0: goto L_40019F60; break;
        case 1: goto L_40019FA8; break;
        case 2: goto L_40019FA8; break;
        case 3: goto L_40019FA8; break;
        case 4: goto L_40019FA8; break;
        case 5: goto L_40019FA8; break;
        case 6: goto L_40019FA8; break;
        case 7: goto L_40019FA8; break;
        case 8: goto L_40019FA8; break;
        case 9: goto L_40019F70; break;
        case 10: goto L_40019FA8; break;
        case 11: goto L_40019FA8; break;
        case 12: goto L_40019FA8; break;
        case 13: goto L_40019FA8; break;
        case 14: goto L_40019FA8; break;
        case 15: goto L_40019FA8; break;
        case 16: goto L_40019FA8; break;
        case 17: goto L_40019FA8; break;
        case 18: goto L_40019FA8; break;
        case 19: goto L_40019FA8; break;
        case 20: goto L_40019FA8; break;
        case 21: goto L_40019FA8; break;
        case 22: goto L_40019FA8; break;
        case 23: goto L_40019F80; break;
        case 24: goto L_40019FA8; break;
        case 25: goto L_40019FA8; break;
        case 26: goto L_40019FA8; break;
        case 27: goto L_40019FA8; break;
        case 28: goto L_40019FA8; break;
        case 29: goto L_40019FA8; break;
        case 30: goto L_40019FA8; break;
        case 31: goto L_40019FA8; break;
        case 32: goto L_40019F90; break;
        case 33: goto L_40019FA8; break;
        case 34: goto L_40019FA8; break;
        case 35: goto L_40019FA8; break;
        case 36: goto L_40019FA8; break;
        case 37: goto L_40019FA0; break;
        default: switch_error(__func__, 0x40019F58, 0x4001FA90);
    }
    // 0x40019F5C: nop

L_40019F60:
    // 0x40019F60: jal         0x40016BE0
    // 0x40019F64: nop

    ovl_actor_main_16BE0(rdram, ctx);
        goto after_0;
    // 0x40019F64: nop

    after_0:
    // 0x40019F68: b           L_40019FAC
    // 0x40019F6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40019FAC;
    // 0x40019F6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40019F70:
    // 0x40019F70: jal         0x40017598
    // 0x40019F74: nop

    ovl_actor_main_17598(rdram, ctx);
        goto after_1;
    // 0x40019F74: nop

    after_1:
    // 0x40019F78: b           L_40019FAC
    // 0x40019F7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40019FAC;
    // 0x40019F7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40019F80:
    // 0x40019F80: jal         0x400180C0
    // 0x40019F84: nop

    ovl_actor_main_180C0(rdram, ctx);
        goto after_2;
    // 0x40019F84: nop

    after_2:
    // 0x40019F88: b           L_40019FAC
    // 0x40019F8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40019FAC;
    // 0x40019F8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40019F90:
    // 0x40019F90: jal         0x4001899C
    // 0x40019F94: nop

    ovl_actor_main_1899C(rdram, ctx);
        goto after_3;
    // 0x40019F94: nop

    after_3:
    // 0x40019F98: b           L_40019FAC
    // 0x40019F9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_40019FAC;
    // 0x40019F9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40019FA0:
    // 0x40019FA0: jal         0x40019414
    // 0x40019FA4: nop

    ovl_actor_main_19414(rdram, ctx);
        goto after_4;
    // 0x40019FA4: nop

    after_4:
L_40019FA8:
    // 0x40019FA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_40019FAC:
    // 0x40019FAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x40019FB0: jr          $ra
    // 0x40019FB4: nop

    return;
    // 0x40019FB4: nop

;}
RECOMP_FUNC void ovl_actor_main_19FB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x40019FB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x40019FBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x40019FC0: lw          $t6, 0x14($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X14);
    // 0x40019FC4: nop

    // 0x40019FC8: addiu       $t7, $t6, -0xA
    ctx->r15 = ADD32(ctx->r14, -0XA);
    // 0x40019FCC: sltiu       $at, $t7, 0x26
    ctx->r1 = ctx->r15 < 0X26 ? 1 : 0;
    // 0x40019FD0: beq         $at, $zero, L_4001A038
    if (ctx->r1 == 0) {
        // 0x40019FD4: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_4001A038;
    }
    // 0x40019FD4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x40019FD8: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x40019FDC: addu        $at, $at, $t7
    gpr jr_addend_40019FE8 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x40019FE0: lw          $t7, -0x4D8($at)
    ctx->r15 = ADD32(ctx->r1, -0X4D8);
    // 0x40019FE4: nop

    // 0x40019FE8: jr          $t7
    // 0x40019FEC: nop

    switch (jr_addend_40019FE8 >> 2) {
        case 0: goto L_40019FF0; break;
        case 1: goto L_4001A038; break;
        case 2: goto L_4001A038; break;
        case 3: goto L_4001A038; break;
        case 4: goto L_4001A038; break;
        case 5: goto L_4001A038; break;
        case 6: goto L_4001A038; break;
        case 7: goto L_4001A038; break;
        case 8: goto L_4001A038; break;
        case 9: goto L_4001A000; break;
        case 10: goto L_4001A038; break;
        case 11: goto L_4001A038; break;
        case 12: goto L_4001A038; break;
        case 13: goto L_4001A038; break;
        case 14: goto L_4001A038; break;
        case 15: goto L_4001A038; break;
        case 16: goto L_4001A038; break;
        case 17: goto L_4001A038; break;
        case 18: goto L_4001A038; break;
        case 19: goto L_4001A038; break;
        case 20: goto L_4001A038; break;
        case 21: goto L_4001A038; break;
        case 22: goto L_4001A038; break;
        case 23: goto L_4001A010; break;
        case 24: goto L_4001A038; break;
        case 25: goto L_4001A038; break;
        case 26: goto L_4001A038; break;
        case 27: goto L_4001A038; break;
        case 28: goto L_4001A038; break;
        case 29: goto L_4001A038; break;
        case 30: goto L_4001A038; break;
        case 31: goto L_4001A038; break;
        case 32: goto L_4001A020; break;
        case 33: goto L_4001A038; break;
        case 34: goto L_4001A038; break;
        case 35: goto L_4001A038; break;
        case 36: goto L_4001A038; break;
        case 37: goto L_4001A030; break;
        default: switch_error(__func__, 0x40019FE8, 0x4001FB28);
    }
    // 0x40019FEC: nop

L_40019FF0:
    // 0x40019FF0: jal         0x40017060
    // 0x40019FF4: nop

    ovl_actor_main_17060(rdram, ctx);
        goto after_0;
    // 0x40019FF4: nop

    after_0:
    // 0x40019FF8: b           L_4001A03C
    // 0x40019FFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4001A03C;
    // 0x40019FFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4001A000:
    // 0x4001A000: jal         0x40017678
    // 0x4001A004: nop

    ovl_actor_main_17678(rdram, ctx);
        goto after_1;
    // 0x4001A004: nop

    after_1:
    // 0x4001A008: b           L_4001A03C
    // 0x4001A00C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4001A03C;
    // 0x4001A00C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4001A010:
    // 0x4001A010: jal         0x40018290
    // 0x4001A014: nop

    ovl_actor_main_18290(rdram, ctx);
        goto after_2;
    // 0x4001A014: nop

    after_2:
    // 0x4001A018: b           L_4001A03C
    // 0x4001A01C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4001A03C;
    // 0x4001A01C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4001A020:
    // 0x4001A020: jal         0x40018C14
    // 0x4001A024: nop

    ovl_actor_main_18C14(rdram, ctx);
        goto after_3;
    // 0x4001A024: nop

    after_3:
    // 0x4001A028: b           L_4001A03C
    // 0x4001A02C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_4001A03C;
    // 0x4001A02C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4001A030:
    // 0x4001A030: jal         0x400194BC
    // 0x4001A034: nop

    ovl_actor_main_194BC(rdram, ctx);
        goto after_4;
    // 0x4001A034: nop

    after_4:
L_4001A038:
    // 0x4001A038: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4001A03C:
    // 0x4001A03C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4001A040: jr          $ra
    // 0x4001A044: nop

    return;
    // 0x4001A044: nop

;}
RECOMP_FUNC void ovl_actor_main_1A048(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001A048: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4001A04C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4001A050: jal         0x40019528
    // 0x4001A054: nop

    ovl_actor_main_19528(rdram, ctx);
        goto after_0;
    // 0x4001A054: nop

    after_0:
    // 0x4001A058: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4001A05C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4001A060: jr          $ra
    // 0x4001A064: nop

    return;
    // 0x4001A064: nop

;}
RECOMP_FUNC void ovl_actor_main_1A068(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001A068: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4001A06C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4001A070: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4001A074: bne         $a1, $at, L_4001A0A0
    if (ctx->r5 != ctx->r1) {
        // 0x4001A078: sw          $a0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r4;
            goto L_4001A0A0;
    }
    // 0x4001A078: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x4001A07C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x4001A080: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x4001A084: addiu       $a1, $zero, 0x1AD
    ctx->r5 = ADD32(0, 0X1AD);
    // 0x4001A088: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4001A08C: jal         0x40008D64
    // 0x4001A090: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x4001A090: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_0:
    // 0x4001A094: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x4001A098: jal         0x40008EF8
    // 0x4001A09C: addiu       $a1, $zero, 0x5E0
    ctx->r5 = ADD32(0, 0X5E0);
    ovl_actor_main_8EF8(rdram, ctx);
        goto after_1;
    // 0x4001A09C: addiu       $a1, $zero, 0x5E0
    ctx->r5 = ADD32(0, 0X5E0);
    after_1:
L_4001A0A0:
    // 0x4001A0A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4001A0A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4001A0A8: jr          $ra
    // 0x4001A0AC: nop

    return;
    // 0x4001A0AC: nop

;}
RECOMP_FUNC void ovl_actor_main_1A0B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001A0B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4001A0B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4001A0B8: jal         0x4000CBBC
    // 0x4001A0BC: nop

    ovl_actor_main_CBBC(rdram, ctx);
        goto after_0;
    // 0x4001A0BC: nop

    after_0:
    // 0x4001A0C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4001A0C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4001A0C8: jr          $ra
    // 0x4001A0CC: nop

    return;
    // 0x4001A0CC: nop

;}
RECOMP_FUNC void ovl_actor_main_1A0D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001A0D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4001A0D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4001A0D8: jal         0x4000CC0C
    // 0x4001A0DC: nop

    ovl_actor_main_CC0C(rdram, ctx);
        goto after_0;
    // 0x4001A0DC: nop

    after_0:
    // 0x4001A0E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4001A0E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4001A0E8: jr          $ra
    // 0x4001A0EC: nop

    return;
    // 0x4001A0EC: nop

;}
RECOMP_FUNC void ovl_actor_main_1A0F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001A0F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4001A0F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4001A0F8: jal         0x400195FC
    // 0x4001A0FC: nop

    ovl_actor_main_195FC(rdram, ctx);
        goto after_0;
    // 0x4001A0FC: nop

    after_0:
    // 0x4001A100: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4001A104: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4001A108: jr          $ra
    // 0x4001A10C: nop

    return;
    // 0x4001A10C: nop

;}
RECOMP_FUNC void ovl_actor_main_1A110(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001A110: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4001A114: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4001A118: jal         0x400196E0
    // 0x4001A11C: nop

    ovl_actor_main_196E0(rdram, ctx);
        goto after_0;
    // 0x4001A11C: nop

    after_0:
    // 0x4001A120: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4001A124: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4001A128: jr          $ra
    // 0x4001A12C: nop

    return;
    // 0x4001A12C: nop

;}
RECOMP_FUNC void ovl_actor_main_1A130(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001A130: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4001A134: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4001A138: jal         0x40019824
    // 0x4001A13C: nop

    ovl_actor_main_19824(rdram, ctx);
        goto after_0;
    // 0x4001A13C: nop

    after_0:
    // 0x4001A140: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4001A144: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4001A148: jr          $ra
    // 0x4001A14C: nop

    return;
    // 0x4001A14C: nop

;}
RECOMP_FUNC void ovl_actor_main_1A150(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001A150: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4001A154: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4001A158: jal         0x400199F4
    // 0x4001A15C: nop

    ovl_actor_main_199F4(rdram, ctx);
        goto after_0;
    // 0x4001A15C: nop

    after_0:
    // 0x4001A160: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4001A164: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4001A168: jr          $ra
    // 0x4001A16C: nop

    return;
    // 0x4001A16C: nop

;}
RECOMP_FUNC void ovl_actor_main_1A170(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001A170: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4001A174: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4001A178: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4001A17C: bne         $a1, $at, L_4001A1A4
    if (ctx->r5 != ctx->r1) {
        // 0x4001A180: sw          $a1, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r5;
            goto L_4001A1A4;
    }
    // 0x4001A180: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x4001A184: addiu       $a1, $zero, 0x557
    ctx->r5 = ADD32(0, 0X557);
    // 0x4001A188: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4001A18C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x4001A190: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x4001A194: jal         0x40008D64
    // 0x4001A198: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_0;
    // 0x4001A198: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x4001A19C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x4001A1A0: nop

L_4001A1A4:
    // 0x4001A1A4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x4001A1A8: nop

    // 0x4001A1AC: slti        $at, $t7, 0x3C
    ctx->r1 = SIGNED(ctx->r15) < 0X3C ? 1 : 0;
    // 0x4001A1B0: bne         $at, $zero, L_4001A1D8
    if (ctx->r1 != 0) {
        // 0x4001A1B4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_4001A1D8;
    }
    // 0x4001A1B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4001A1B8: lhu         $t8, 0x20($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X20);
    // 0x4001A1BC: nop

    // 0x4001A1C0: andi        $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 & 0X8000;
    // 0x4001A1C4: beq         $t9, $zero, L_4001A1D8
    if (ctx->r25 == 0) {
        // 0x4001A1C8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_4001A1D8;
    }
    // 0x4001A1C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4001A1CC: jal         0x4000CB84
    // 0x4001A1D0: nop

    ovl_actor_main_CB84(rdram, ctx);
        goto after_1;
    // 0x4001A1D0: nop

    after_1:
    // 0x4001A1D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4001A1D8:
    // 0x4001A1D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4001A1DC: jr          $ra
    // 0x4001A1E0: nop

    return;
    // 0x4001A1E0: nop

;}
RECOMP_FUNC void ovl_actor_main_1A1E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001A1E4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x4001A1E8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x4001A1EC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4001A1F0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4001A1F4: bne         $a1, $at, L_4001A20C
    if (ctx->r5 != ctx->r1) {
        // 0x4001A1F8: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_4001A20C;
    }
    // 0x4001A1F8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x4001A1FC: jal         0x400093E4
    // 0x4001A200: nop

    ovl_actor_main_93E4(rdram, ctx);
        goto after_0;
    // 0x4001A200: nop

    after_0:
    // 0x4001A204: b           L_4001A230
    // 0x4001A208: nop

        goto L_4001A230;
    // 0x4001A208: nop

L_4001A20C:
    // 0x4001A20C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x4001A210: bne         $a1, $at, L_4001A230
    if (ctx->r5 != ctx->r1) {
        // 0x4001A214: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_4001A230;
    }
    // 0x4001A214: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001A218: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x4001A21C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x4001A220: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x4001A224: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4001A228: jal         0x40008D20
    // 0x4001A22C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    ovl_actor_main_8D20(rdram, ctx);
        goto after_1;
    // 0x4001A22C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_1:
L_4001A230:
    // 0x4001A230: jal         0x40009B00
    // 0x4001A234: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_9B00(rdram, ctx);
        goto after_2;
    // 0x4001A234: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x4001A238: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x4001A23C: bne         $v0, $at, L_4001A264
    if (ctx->r2 != ctx->r1) {
        // 0x4001A240: nop
    
            goto L_4001A264;
    }
    // 0x4001A240: nop

    // 0x4001A244: lw          $t7, 0xC8($s0)
    ctx->r15 = MEM_W(ctx->r16, 0XC8);
    // 0x4001A248: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x4001A24C: bne         $t7, $at, L_4001A26C
    if (ctx->r15 != ctx->r1) {
        // 0x4001A250: sw          $zero, 0xC4($s0)
        MEM_W(0XC4, ctx->r16) = 0;
            goto L_4001A26C;
    }
    // 0x4001A250: sw          $zero, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = 0;
    // 0x4001A254: jal         0x40009BB0
    // 0x4001A258: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_9BB0(rdram, ctx);
        goto after_3;
    // 0x4001A258: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x4001A25C: b           L_4001A270
    // 0x4001A260: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_4001A270;
    // 0x4001A260: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4001A264:
    // 0x4001A264: jal         0x40009BB0
    // 0x4001A268: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_9BB0(rdram, ctx);
        goto after_4;
    // 0x4001A268: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
L_4001A26C:
    // 0x4001A26C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4001A270:
    // 0x4001A270: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x4001A274: jr          $ra
    // 0x4001A278: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x4001A278: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_actor_main_1A27C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001A27C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x4001A280: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4001A284: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x4001A288: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x4001A28C: jal         0x4000A1B8
    // 0x4001A290: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    ovl_actor_main_A1B8(rdram, ctx);
        goto after_0;
    // 0x4001A290: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x4001A294: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x4001A298: jal         0x40009E78
    // 0x4001A29C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_actor_main_9E78(rdram, ctx);
        goto after_1;
    // 0x4001A29C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x4001A2A0: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x4001A2A4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x4001A2A8: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x4001A2AC: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    // 0x4001A2B0: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x4001A2B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001A2B8: bc1f        L_4001A2D4
    if (!c1cs) {
        // 0x4001A2BC: addiu       $a1, $zero, 0x8
        ctx->r5 = ADD32(0, 0X8);
            goto L_4001A2D4;
    }
    // 0x4001A2BC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x4001A2C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001A2C4: jal         0x4000A1F8
    // 0x4001A2C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_actor_main_A1F8(rdram, ctx);
        goto after_2;
    // 0x4001A2C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x4001A2CC: b           L_4001A2E0
    // 0x4001A2D0: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
        goto L_4001A2E0;
    // 0x4001A2D0: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
L_4001A2D4:
    // 0x4001A2D4: jal         0x4000A1F8
    // 0x4001A2D8: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    ovl_actor_main_A1F8(rdram, ctx);
        goto after_3;
    // 0x4001A2D8: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    after_3:
    // 0x4001A2DC: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
L_4001A2E0:
    // 0x4001A2E0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x4001A2E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4001A2E8: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x4001A2EC: nop

    // 0x4001A2F0: bc1f        L_4001A304
    if (!c1cs) {
        // 0x4001A2F4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_4001A304;
    }
    // 0x4001A2F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4001A2F8: jal         0x40001A8C
    // 0x4001A2FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_actor_main_1A8C(rdram, ctx);
        goto after_4;
    // 0x4001A2FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x4001A300: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4001A304:
    // 0x4001A304: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x4001A308: jr          $ra
    // 0x4001A30C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x4001A30C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_actor_main_1A310(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001A310: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4001A314: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x4001A318: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4001A31C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x4001A320: bne         $a1, $v1, L_4001A360
    if (ctx->r5 != ctx->r3) {
        // 0x4001A324: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_4001A360;
    }
    // 0x4001A324: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x4001A328: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x4001A32C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4001A330: beq         $v1, $v0, L_4001A340
    if (ctx->r3 == ctx->r2) {
        // 0x4001A334: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_4001A340;
    }
    // 0x4001A334: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x4001A338: bne         $v0, $at, L_4001A354
    if (ctx->r2 != ctx->r1) {
        // 0x4001A33C: addiu       $a1, $zero, 0x67
        ctx->r5 = ADD32(0, 0X67);
            goto L_4001A354;
    }
    // 0x4001A33C: addiu       $a1, $zero, 0x67
    ctx->r5 = ADD32(0, 0X67);
L_4001A340:
    // 0x4001A340: addiu       $a1, $zero, 0x36B
    ctx->r5 = ADD32(0, 0X36B);
    // 0x4001A344: jal         0x4000115C
    // 0x4001A348: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    ovl_actor_main_115C(rdram, ctx);
        goto after_0;
    // 0x4001A348: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x4001A34C: b           L_4001A364
    // 0x4001A350: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
        goto L_4001A364;
    // 0x4001A350: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_4001A354:
    // 0x4001A354: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4001A358: jal         0x4000115C
    // 0x4001A35C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_115C(rdram, ctx);
        goto after_1;
    // 0x4001A35C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_4001A360:
    // 0x4001A360: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_4001A364:
    // 0x4001A364: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x4001A368: jal         0x4000E730
    // 0x4001A36C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_actor_main_E730(rdram, ctx);
        goto after_2;
    // 0x4001A36C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x4001A370: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4001A374: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4001A378: jr          $ra
    // 0x4001A37C: nop

    return;
    // 0x4001A37C: nop

;}
RECOMP_FUNC void ovl_actor_main_1A380(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001A380: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x4001A384: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4001A388: jal         0x4000E3C4
    // 0x4001A38C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    ovl_actor_main_E3C4(rdram, ctx);
        goto after_0;
    // 0x4001A38C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_0:
    // 0x4001A390: beq         $v0, $zero, L_4001A3EC
    if (ctx->r2 == 0) {
        // 0x4001A394: lui         $t8, 0x4002
        ctx->r24 = S32(0X4002 << 16);
            goto L_4001A3EC;
    }
    // 0x4001A394: lui         $t8, 0x4002
    ctx->r24 = S32(0X4002 << 16);
    // 0x4001A398: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x4001A39C: addiu       $a1, $zero, 0x6DF
    ctx->r5 = ADD32(0, 0X6DF);
    // 0x4001A3A0: lw          $t6, 0x14($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X14);
    // 0x4001A3A4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x4001A3A8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x4001A3AC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x4001A3B0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x4001A3B4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x4001A3B8: lw          $t8, -0x20C4($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X20C4);
    // 0x4001A3BC: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x4001A3C0: lhu         $t9, 0x2($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X2);
    // 0x4001A3C4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x4001A3C8: jal         0x40008D64
    // 0x4001A3CC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    ovl_actor_main_8D64(rdram, ctx);
        goto after_1;
    // 0x4001A3CC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    after_1:
    // 0x4001A3D0: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x4001A3D4: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x4001A3D8: beq         $a1, $at, L_4001A3F0
    if (ctx->r5 == ctx->r1) {
        // 0x4001A3DC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_4001A3F0;
    }
    // 0x4001A3DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4001A3E0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x4001A3E4: jal         0x40008EF8
    // 0x4001A3E8: nop

    ovl_actor_main_8EF8(rdram, ctx);
        goto after_2;
    // 0x4001A3E8: nop

    after_2:
L_4001A3EC:
    // 0x4001A3EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_4001A3F0:
    // 0x4001A3F0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x4001A3F4: jr          $ra
    // 0x4001A3F8: nop

    return;
    // 0x4001A3F8: nop

;}
RECOMP_FUNC void ovl_actor_main_1A3FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001A3FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4001A400: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4001A404: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x4001A408: jal         0x4001077C
    // 0x4001A40C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    ovl_actor_main_1077C(rdram, ctx);
        goto after_0;
    // 0x4001A40C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x4001A410: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x4001A414: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4001A418: slti        $at, $v0, 0x12
    ctx->r1 = SIGNED(ctx->r2) < 0X12 ? 1 : 0;
    // 0x4001A41C: beq         $at, $zero, L_4001A43C
    if (ctx->r1 == 0) {
        // 0x4001A420: slti        $at, $v0, 0x26
        ctx->r1 = SIGNED(ctx->r2) < 0X26 ? 1 : 0;
            goto L_4001A43C;
    }
    // 0x4001A420: slti        $at, $v0, 0x26
    ctx->r1 = SIGNED(ctx->r2) < 0X26 ? 1 : 0;
    // 0x4001A424: jal         0x40008E60
    // 0x4001A428: lui         $a1, 0xC120
    ctx->r5 = S32(0XC120 << 16);
    ovl_actor_main_8E60(rdram, ctx);
        goto after_1;
    // 0x4001A428: lui         $a1, 0xC120
    ctx->r5 = S32(0XC120 << 16);
    after_1:
    // 0x4001A42C: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x4001A430: b           L_4001A45C
    // 0x4001A434: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
        goto L_4001A45C;
    // 0x4001A434: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x4001A438: slti        $at, $v0, 0x26
    ctx->r1 = SIGNED(ctx->r2) < 0X26 ? 1 : 0;
L_4001A43C:
    // 0x4001A43C: beq         $at, $zero, L_4001A45C
    if (ctx->r1 == 0) {
        // 0x4001A440: addiu       $at, $zero, 0x14
        ctx->r1 = ADD32(0, 0X14);
            goto L_4001A45C;
    }
    // 0x4001A440: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x4001A444: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x4001A448: jal         0x40008E60
    // 0x4001A44C: lui         $a1, 0xC090
    ctx->r5 = S32(0XC090 << 16);
    ovl_actor_main_8E60(rdram, ctx);
        goto after_2;
    // 0x4001A44C: lui         $a1, 0xC090
    ctx->r5 = S32(0XC090 << 16);
    after_2:
    // 0x4001A450: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x4001A454: nop

    // 0x4001A458: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
L_4001A45C:
    // 0x4001A45C: bne         $v0, $at, L_4001A48C
    if (ctx->r2 != ctx->r1) {
        // 0x4001A460: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4001A48C;
    }
    // 0x4001A460: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4001A464: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x4001A468: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x4001A46C: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    // 0x4001A470: jal         0x400014F0
    // 0x4001A474: nop

    ovl_actor_main_14F0(rdram, ctx);
        goto after_3;
    // 0x4001A474: nop

    after_3:
    // 0x4001A478: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x4001A47C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x4001A480: nop

    // 0x4001A484: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
    // 0x4001A488: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4001A48C:
    // 0x4001A48C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4001A490: jr          $ra
    // 0x4001A494: nop

    return;
    // 0x4001A494: nop

    // 0x4001A498: nop

    // 0x4001A49C: nop

;}
RECOMP_FUNC void ovl_actor_main_1A4A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001A4A0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x4001A4A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4001A4A8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x4001A4AC: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x4001A4B0: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x4001A4B4: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x4001A4B8: lw          $a0, 0x10($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X10);
    // 0x4001A4BC: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x4001A4C0: jal         0x400006C4
    // 0x4001A4C4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_actor_main_6C4(rdram, ctx);
        goto after_0;
    // 0x4001A4C4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x4001A4C8: lwc1        $f12, 0x40($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X40);
    // 0x4001A4CC: jal         0x40000310
    // 0x4001A4D0: nop

    ovl_actor_main_310(rdram, ctx);
        goto after_1;
    // 0x4001A4D0: nop

    after_1:
    // 0x4001A4D4: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x4001A4D8: lwc1        $f8, 0x18($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X18);
    // 0x4001A4DC: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x4001A4E0: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x4001A4E4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x4001A4E8: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
    // 0x4001A4EC: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x4001A4F0: lwc1        $f16, 0x1C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x4001A4F4: nop

    // 0x4001A4F8: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x4001A4FC: swc1        $f4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f4.u32l;
    // 0x4001A500: lwc1        $f12, 0x40($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X40);
    // 0x4001A504: jal         0x4000031C
    // 0x4001A508: nop

    ovl_actor_main_31C(rdram, ctx);
        goto after_2;
    // 0x4001A508: nop

    after_2:
    // 0x4001A50C: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x4001A510: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x4001A514: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x4001A518: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x4001A51C: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x4001A520: swc1        $f16, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->f16.u32l;
    // 0x4001A524: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4001A528: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x4001A52C: jr          $ra
    // 0x4001A530: nop

    return;
    // 0x4001A530: nop

;}
RECOMP_FUNC void ovl_actor_main_1A534(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001A534: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x4001A538: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x4001A53C: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x4001A540: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x4001A544: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4001A548: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x4001A54C: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x4001A550: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x4001A554: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x4001A558: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x4001A55C: jal         0x4001A4A0
    // 0x4001A560: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_actor_main_1A4A0(rdram, ctx);
        goto after_0;
    // 0x4001A560: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x4001A564: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x4001A568: lwc1        $f6, 0x50($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X50);
    // 0x4001A56C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x4001A570: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x4001A574: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    // 0x4001A578: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x4001A57C: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x4001A580: jal         0x40001258
    // 0x4001A584: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
    ovl_actor_main_1258(rdram, ctx);
        goto after_1;
    // 0x4001A584: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x4001A588: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4001A58C: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x4001A590: jr          $ra
    // 0x4001A594: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x4001A594: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_actor_main_1A598(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001A598: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4001A59C: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x4001A5A0: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x4001A5A4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4001A5A8: lwc1        $f4, 0x44($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X44);
    // 0x4001A5AC: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x4001A5B0: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x4001A5B4: jal         0x4001A534
    // 0x4001A5B8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_actor_main_1A534(rdram, ctx);
        goto after_0;
    // 0x4001A5B8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x4001A5BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4001A5C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4001A5C4: jr          $ra
    // 0x4001A5C8: nop

    return;
    // 0x4001A5C8: nop

;}
RECOMP_FUNC void ovl_actor_main_1A5CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4001A5CC: lw          $t6, 0x14($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X14);
    // 0x4001A5D0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x4001A5D4: addiu       $t7, $t6, -0x23
    ctx->r15 = ADD32(ctx->r14, -0X23);
    // 0x4001A5D8: sltiu       $at, $t7, 0xB
    ctx->r1 = ctx->r15 < 0XB ? 1 : 0;
    // 0x4001A5DC: beq         $at, $zero, L_4001A628
    if (ctx->r1 == 0) {
        // 0x4001A5E0: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_4001A628;
    }
    // 0x4001A5E0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x4001A5E4: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x4001A5E8: addu        $at, $at, $t7
    gpr jr_addend_4001A5F4 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x4001A5EC: lw          $t7, -0x440($at)
    ctx->r15 = ADD32(ctx->r1, -0X440);
    // 0x4001A5F0: nop

    // 0x4001A5F4: jr          $t7
    // 0x4001A5F8: nop

    switch (jr_addend_4001A5F4 >> 2) {
        case 0: goto L_4001A5FC; break;
        case 1: goto L_4001A61C; break;
        case 2: goto L_4001A628; break;
        case 3: goto L_4001A628; break;
        case 4: goto L_4001A604; break;
        case 5: goto L_4001A628; break;
        case 6: goto L_4001A60C; break;
        case 7: goto L_4001A628; break;
        case 8: goto L_4001A628; break;
        case 9: goto L_4001A624; break;
        case 10: goto L_4001A614; break;
        default: switch_error(__func__, 0x4001A5F4, 0x4001FBC0);
    }
    // 0x4001A5F8: nop

L_4001A5FC:
    // 0x4001A5FC: b           L_4001A628
    // 0x4001A600: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_4001A628;
    // 0x4001A600: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_4001A604:
    // 0x4001A604: b           L_4001A628
    // 0x4001A608: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_4001A628;
    // 0x4001A608: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_4001A60C:
    // 0x4001A60C: b           L_4001A628
    // 0x4001A610: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_4001A628;
    // 0x4001A610: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_4001A614:
    // 0x4001A614: b           L_4001A628
    // 0x4001A618: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_4001A628;
    // 0x4001A618: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_4001A61C:
    // 0x4001A61C: b           L_4001A628
    // 0x4001A620: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_4001A628;
    // 0x4001A620: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_4001A624:
    // 0x4001A624: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_4001A628:
    // 0x4001A628: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x4001A62C: beq         $v0, $at, L_4001A658
    if (ctx->r2 == ctx->r1) {
        // 0x4001A630: sll         $t8, $v0, 2
        ctx->r24 = S32(ctx->r2 << 2);
            goto L_4001A658;
    }
    // 0x4001A630: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x4001A634: addu        $t8, $t8, $v0
    ctx->r24 = ADD32(ctx->r24, ctx->r2);
    // 0x4001A638: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x4001A63C: sll         $t9, $a1, 2
    ctx->r25 = S32(ctx->r5 << 2);
    // 0x4001A640: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x4001A644: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x4001A648: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x4001A64C: lwc1        $f0, -0x1C60($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X1C60);
    // 0x4001A650: jr          $ra
    // 0x4001A654: nop

    return;
    // 0x4001A654: nop

L_4001A658:
    // 0x4001A658: lui         $at, 0x4002
    ctx->r1 = S32(0X4002 << 16);
    // 0x4001A65C: lwc1        $f0, -0x414($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X414);
    // 0x4001A660: nop

    // 0x4001A664: jr          $ra
    // 0x4001A668: nop

    return;
    // 0x4001A668: nop

;}
