#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_boss_devil_7A70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007A70: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x43007A74: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x43007A78: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x43007A7C: lw          $v1, 0x1F8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1F8);
    // 0x43007A80: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43007A84: slti        $at, $v1, 0x18
    ctx->r1 = SIGNED(ctx->r3) < 0X18 ? 1 : 0;
    // 0x43007A88: bne         $at, $zero, L_43007A98
    if (ctx->r1 != 0) {
        // 0x43007A8C: sll         $t6, $v1, 2
        ctx->r14 = S32(ctx->r3 << 2);
            goto L_43007A98;
    }
    // 0x43007A8C: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x43007A90: b           L_43007B90
    // 0x43007A94: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_43007B90;
    // 0x43007A94: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_43007A98:
    // 0x43007A98: addu        $t7, $s0, $t6
    ctx->r15 = ADD32(ctx->r16, ctx->r14);
    // 0x43007A9C: lw          $t8, 0x198($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X198);
    // 0x43007AA0: addiu       $t9, $v1, 0x1
    ctx->r25 = ADD32(ctx->r3, 0X1);
    // 0x43007AA4: sw          $t8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r24;
    // 0x43007AA8: sw          $t9, 0x1F8($s0)
    MEM_W(0X1F8, ctx->r16) = ctx->r25;
    // 0x43007AAC: lw          $t0, 0x64($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X64);
    // 0x43007AB0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x43007AB4: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x43007AB8: addu        $v0, $s0, $t1
    ctx->r2 = ADD32(ctx->r16, ctx->r9);
    // 0x43007ABC: lw          $a1, 0x18($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X18);
    // 0x43007AC0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x43007AC4: beq         $a1, $zero, L_43007B38
    if (ctx->r5 == 0) {
        // 0x43007AC8: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_43007B38;
    }
    // 0x43007AC8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x43007ACC: sw          $a1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r5;
    // 0x43007AD0: lw          $v1, 0x78($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X78);
    // 0x43007AD4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x43007AD8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x43007ADC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x43007AE0: addiu       $t2, $zero, 0x1B
    ctx->r10 = ADD32(0, 0X1B);
    // 0x43007AE4: addiu       $t3, $zero, 0x28
    ctx->r11 = ADD32(0, 0X28);
    // 0x43007AE8: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x43007AEC: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x43007AF0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x43007AF4: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x43007AF8: swc1        $f7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(7 - 1) * 2];
    // 0x43007AFC: swc1        $f10, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f10.u32l;
    // 0x43007B00: swc1        $f11, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(11 - 1) * 2];
    // 0x43007B04: sw          $t4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r12;
    // 0x43007B08: sw          $t3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r11;
    // 0x43007B0C: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x43007B10: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x43007B14: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x43007B18: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x43007B1C: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x43007B20: addiu       $a3, $zero, 0x1A
    ctx->r7 = ADD32(0, 0X1A);
    // 0x43007B24: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    // 0x43007B28: jal         0x43000DC0
    // 0x43007B2C: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    ovl_boss_devil_DC0(rdram, ctx);
        goto after_0;
    // 0x43007B2C: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    after_0:
    // 0x43007B30: b           L_43007B8C
    // 0x43007B34: lw          $v0, 0x64($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X64);
        goto L_43007B8C;
    // 0x43007B34: lw          $v0, 0x64($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X64);
L_43007B38:
    // 0x43007B38: lw          $a2, 0x10($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X10);
    // 0x43007B3C: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    // 0x43007B40: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x43007B44: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x43007B48: jal         0x43000DC0
    // 0x43007B4C: addiu       $a1, $v0, 0x18
    ctx->r5 = ADD32(ctx->r2, 0X18);
    ovl_boss_devil_DC0(rdram, ctx);
        goto after_1;
    // 0x43007B4C: addiu       $a1, $v0, 0x18
    ctx->r5 = ADD32(ctx->r2, 0X18);
    after_1:
    // 0x43007B50: lw          $v0, 0x5C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X5C);
    // 0x43007B54: lw          $a3, 0x10($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X10);
    // 0x43007B58: lw          $a2, 0x18($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X18);
    // 0x43007B5C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x43007B60: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x43007B64: jal         0x43000DC0
    // 0x43007B68: addiu       $a1, $v0, 0x78
    ctx->r5 = ADD32(ctx->r2, 0X78);
    ovl_boss_devil_DC0(rdram, ctx);
        goto after_2;
    // 0x43007B68: addiu       $a1, $v0, 0x78
    ctx->r5 = ADD32(ctx->r2, 0X78);
    after_2:
    // 0x43007B6C: lw          $v0, 0x5C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X5C);
    // 0x43007B70: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    // 0x43007B74: lw          $a1, 0x18($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X18);
    // 0x43007B78: lw          $a2, 0x78($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X78);
    // 0x43007B7C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x43007B80: jal         0x43000DC0
    // 0x43007B84: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_boss_devil_DC0(rdram, ctx);
        goto after_3;
    // 0x43007B84: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x43007B88: lw          $v0, 0x64($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X64);
L_43007B8C:
    // 0x43007B8C: nop

L_43007B90:
    // 0x43007B90: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x43007B94: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x43007B98: jr          $ra
    // 0x43007B9C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x43007B9C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void ovl_boss_devil_7BA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007BA0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x43007BA4: sll         $t0, $a2, 2
    ctx->r8 = S32(ctx->r6 << 2);
    // 0x43007BA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43007BAC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x43007BB0: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x43007BB4: addu        $t1, $a0, $t0
    ctx->r9 = ADD32(ctx->r4, ctx->r8);
    // 0x43007BB8: lw          $v1, 0x18($t1)
    ctx->r3 = MEM_W(ctx->r9, 0X18);
    // 0x43007BBC: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x43007BC0: addu        $t8, $a0, $t7
    ctx->r24 = ADD32(ctx->r4, ctx->r15);
    // 0x43007BC4: lw          $v0, 0x18($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X18);
    // 0x43007BC8: lwc1        $f12, 0x18($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0X18);
    // 0x43007BCC: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x43007BD0: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x43007BD4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x43007BD8: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x43007BDC: jal         0x4300ADE0
    // 0x43007BE0: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    ovl_boss_devil_ADE0(rdram, ctx);
        goto after_0;
    // 0x43007BE0: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x43007BE4: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x43007BE8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x43007BEC: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x43007BF0: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x43007BF4: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x43007BF8: lwc1        $f8, 0x0($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X0);
    // 0x43007BFC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x43007C00: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    // 0x43007C04: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x43007C08: swc1        $f16, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f16.u32l;
    // 0x43007C0C: jal         0x4300AFA0
    // 0x43007C10: swc1        $f10, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f10.u32l;
    ovl_boss_devil_AFA0(rdram, ctx);
        goto after_1;
    // 0x43007C10: swc1        $f10, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f10.u32l;
    after_1:
    // 0x43007C14: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x43007C18: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x43007C1C: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x43007C20: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x43007C24: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x43007C28: lwc1        $f6, 0x8($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X8);
    // 0x43007C2C: lhu         $t4, 0x38($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X38);
    // 0x43007C30: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x43007C34: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x43007C38: ori         $t5, $t4, 0x80
    ctx->r13 = ctx->r12 | 0X80;
    // 0x43007C3C: swc1        $f8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f8.u32l;
    // 0x43007C40: sh          $t5, 0x38($v0)
    MEM_H(0X38, ctx->r2) = ctx->r13;
    // 0x43007C44: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x43007C48: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x43007C4C: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x43007C50: addu        $v1, $a0, $t7
    ctx->r3 = ADD32(ctx->r4, ctx->r15);
    // 0x43007C54: sh          $t8, 0x138($v1)
    MEM_H(0X138, ctx->r3) = ctx->r24;
    // 0x43007C58: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x43007C5C: nop

    // 0x43007C60: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x43007C64: addu        $t1, $a0, $t0
    ctx->r9 = ADD32(ctx->r4, ctx->r8);
    // 0x43007C68: lh          $t2, 0x168($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X168);
    // 0x43007C6C: nop

    // 0x43007C70: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x43007C74: sh          $t3, 0x168($v1)
    MEM_H(0X168, ctx->r3) = ctx->r11;
    // 0x43007C78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43007C7C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x43007C80: jr          $ra
    // 0x43007C84: nop

    return;
    // 0x43007C84: nop

;}
RECOMP_FUNC void ovl_boss_devil_7C88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007C88: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43007C8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43007C90: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x43007C94: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x43007C98: jal         0x43007A70
    // 0x43007C9C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    ovl_boss_devil_7A70(rdram, ctx);
        goto after_0;
    // 0x43007C9C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    after_0:
    // 0x43007CA0: bgez        $v0, L_43007CB0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x43007CA4: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_43007CB0;
    }
    // 0x43007CA4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x43007CA8: b           L_43007CEC
    // 0x43007CAC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_43007CEC;
    // 0x43007CAC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_43007CB0:
    // 0x43007CB0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x43007CB4: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x43007CB8: jal         0x43007BA0
    // 0x43007CBC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    ovl_boss_devil_7BA0(rdram, ctx);
        goto after_1;
    // 0x43007CBC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_1:
    // 0x43007CC0: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    // 0x43007CC4: jal         0x4300A1E4
    // 0x43007CC8: nop

    ovl_boss_devil_A1E4(rdram, ctx);
        goto after_2;
    // 0x43007CC8: nop

    after_2:
    // 0x43007CCC: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x43007CD0: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x43007CD4: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x43007CD8: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x43007CDC: lw          $t8, 0x18($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X18);
    // 0x43007CE0: nop

    // 0x43007CE4: swc1        $f0, 0x18($t8)
    MEM_W(0X18, ctx->r24) = ctx->f0.u32l;
    // 0x43007CE8: swc1        $f0, 0xD8($v1)
    MEM_W(0XD8, ctx->r3) = ctx->f0.u32l;
L_43007CEC:
    // 0x43007CEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43007CF0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x43007CF4: jr          $ra
    // 0x43007CF8: nop

    return;
    // 0x43007CF8: nop

;}
RECOMP_FUNC void ovl_boss_devil_7CFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007CFC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x43007D00: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x43007D04: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x43007D08: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x43007D0C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43007D10: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x43007D14: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x43007D18: bc1f        L_43007D88
    if (!c1cs) {
        // 0x43007D1C: sw          $a1, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r5;
            goto L_43007D88;
    }
    // 0x43007D1C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x43007D20: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x43007D24: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x43007D28: addu        $v1, $t6, $t8
    ctx->r3 = ADD32(ctx->r14, ctx->r24);
    // 0x43007D2C: lw          $v0, 0x18($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X18);
    // 0x43007D30: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x43007D34: addiu       $a0, $a0, -0x4858
    ctx->r4 = ADD32(ctx->r4, -0X4858);
    // 0x43007D38: lwc1        $f8, 0x0($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X0);
    // 0x43007D3C: lwc1        $f16, 0x8($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X8);
    // 0x43007D40: lwc1        $f18, 0x10($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X10);
    // 0x43007D44: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x43007D48: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x43007D4C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x43007D50: sub.s       $f14, $f16, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x43007D54: jal         0x43009E34
    // 0x43007D58: sub.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f10.fl;
    ovl_boss_devil_9E34(rdram, ctx);
        goto after_0;
    // 0x43007D58: sub.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f10.fl;
    after_0:
    // 0x43007D5C: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x43007D60: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43007D64: lwc1        $f4, -0x49B0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X49B0);
    // 0x43007D68: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x43007D6C: lwc1        $f12, 0xD8($v1)
    ctx->f12.u32l = MEM_W(ctx->r3, 0XD8);
    // 0x43007D70: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    // 0x43007D74: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x43007D78: jal         0x4300A238
    // 0x43007D7C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_boss_devil_A238(rdram, ctx);
        goto after_1;
    // 0x43007D7C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x43007D80: b           L_43007DA0
    // 0x43007D84: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
        goto L_43007DA0;
    // 0x43007D84: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_43007D88:
    // 0x43007D88: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x43007D8C: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x43007D90: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x43007D94: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x43007D98: lwc1        $f2, 0xD8($t2)
    ctx->f2.u32l = MEM_W(ctx->r10, 0XD8);
    // 0x43007D9C: nop

L_43007DA0:
    // 0x43007DA0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x43007DA4: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x43007DA8: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x43007DAC: jal         0x43007C88
    // 0x43007DB0: nop

    ovl_boss_devil_7C88(rdram, ctx);
        goto after_2;
    // 0x43007DB0: nop

    after_2:
    // 0x43007DB4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43007DB8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x43007DBC: jr          $ra
    // 0x43007DC0: nop

    return;
    // 0x43007DC0: nop

;}
RECOMP_FUNC void ovl_boss_devil_7DC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007DC4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43007DC8: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x43007DCC: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x43007DD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43007DD4: addu        $t7, $a0, $t6
    ctx->r15 = ADD32(ctx->r4, ctx->r14);
    // 0x43007DD8: lwc1        $f0, 0xD8($t7)
    ctx->f0.u32l = MEM_W(ctx->r15, 0XD8);
    // 0x43007DDC: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x43007DE0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x43007DE4: add.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x43007DE8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x43007DEC: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x43007DF0: jal         0x43007C88
    // 0x43007DF4: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    ovl_boss_devil_7C88(rdram, ctx);
        goto after_0;
    // 0x43007DF4: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x43007DF8: lwc1        $f0, 0x1C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x43007DFC: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x43007E00: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x43007E04: sub.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f8.fl;
    // 0x43007E08: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x43007E0C: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x43007E10: jal         0x43007C88
    // 0x43007E14: nop

    ovl_boss_devil_7C88(rdram, ctx);
        goto after_1;
    // 0x43007E14: nop

    after_1:
    // 0x43007E18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43007E1C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x43007E20: jr          $ra
    // 0x43007E24: nop

    return;
    // 0x43007E24: nop

;}
RECOMP_FUNC void ovl_boss_devil_7E28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007E28: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43007E2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43007E30: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x43007E34: jal         0x43007A70
    // 0x43007E38: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    ovl_boss_devil_7A70(rdram, ctx);
        goto after_0;
    // 0x43007E38: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x43007E3C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x43007E40: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x43007E44: addu        $t7, $a0, $t6
    ctx->r15 = ADD32(ctx->r4, ctx->r14);
    // 0x43007E48: lw          $v1, 0x18($t7)
    ctx->r3 = MEM_W(ctx->r15, 0X18);
    // 0x43007E4C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x43007E50: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x43007E54: swc1        $f6, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f6.u32l;
    // 0x43007E58: swc1        $f4, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f4.u32l;
    // 0x43007E5C: lwc1        $f8, 0x8($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X8);
    // 0x43007E60: nop

    // 0x43007E64: swc1        $f8, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f8.u32l;
    // 0x43007E68: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x43007E6C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x43007E70: jal         0x4300A1E4
    // 0x43007E74: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    ovl_boss_devil_A1E4(rdram, ctx);
        goto after_1;
    // 0x43007E74: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_1:
    // 0x43007E78: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x43007E7C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x43007E80: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x43007E84: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x43007E88: addu        $t9, $a0, $t8
    ctx->r25 = ADD32(ctx->r4, ctx->r24);
    // 0x43007E8C: swc1        $f0, 0xD8($t9)
    MEM_W(0XD8, ctx->r25) = ctx->f0.u32l;
    // 0x43007E90: lhu         $t0, 0x38($v1)
    ctx->r8 = MEM_HU(ctx->r3, 0X38);
    // 0x43007E94: sll         $t2, $a1, 1
    ctx->r10 = S32(ctx->r5 << 1);
    // 0x43007E98: ori         $t1, $t0, 0x80
    ctx->r9 = ctx->r8 | 0X80;
    // 0x43007E9C: addu        $v0, $a0, $t2
    ctx->r2 = ADD32(ctx->r4, ctx->r10);
    // 0x43007EA0: swc1        $f0, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->f0.u32l;
    // 0x43007EA4: sh          $t1, 0x38($v1)
    MEM_H(0X38, ctx->r3) = ctx->r9;
    // 0x43007EA8: addiu       $t3, $zero, 0xA
    ctx->r11 = ADD32(0, 0XA);
    // 0x43007EAC: sh          $t3, 0x138($v0)
    MEM_H(0X138, ctx->r2) = ctx->r11;
    // 0x43007EB0: sh          $zero, 0x168($v0)
    MEM_H(0X168, ctx->r2) = 0;
    // 0x43007EB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43007EB8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x43007EBC: jr          $ra
    // 0x43007EC0: nop

    return;
    // 0x43007EC0: nop

;}
RECOMP_FUNC void ovl_boss_devil_7EC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007EC4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x43007EC8: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x43007ECC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43007ED0: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x43007ED4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x43007ED8: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x43007EDC: addu        $v0, $s0, $t7
    ctx->r2 = ADD32(ctx->r16, ctx->r15);
    // 0x43007EE0: lw          $a1, 0x18($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X18);
    // 0x43007EE4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x43007EE8: sw          $a1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r5;
    // 0x43007EEC: lw          $t8, 0x78($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X78);
    // 0x43007EF0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x43007EF4: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x43007EF8: swc1        $f7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(7 - 1) * 2];
    // 0x43007EFC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x43007F00: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x43007F04: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x43007F08: addiu       $a3, $zero, 0x1B
    ctx->r7 = ADD32(0, 0X1B);
    // 0x43007F0C: jal         0x43000DC0
    // 0x43007F10: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    ovl_boss_devil_DC0(rdram, ctx);
        goto after_0;
    // 0x43007F10: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    after_0:
    // 0x43007F14: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x43007F18: nop

    // 0x43007F1C: sll         $t9, $v1, 1
    ctx->r25 = S32(ctx->r3 << 1);
    // 0x43007F20: addu        $t0, $s0, $t9
    ctx->r8 = ADD32(ctx->r16, ctx->r25);
    // 0x43007F24: sh          $zero, 0x138($t0)
    MEM_H(0X138, ctx->r8) = 0;
    // 0x43007F28: lw          $v0, 0x1F8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1F8);
    // 0x43007F2C: nop

    // 0x43007F30: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x43007F34: sll         $t1, $v0, 2
    ctx->r9 = S32(ctx->r2 << 2);
    // 0x43007F38: addu        $t2, $s0, $t1
    ctx->r10 = ADD32(ctx->r16, ctx->r9);
    // 0x43007F3C: sw          $v0, 0x1F8($s0)
    MEM_W(0X1F8, ctx->r16) = ctx->r2;
    // 0x43007F40: sw          $v1, 0x198($t2)
    MEM_W(0X198, ctx->r10) = ctx->r3;
    // 0x43007F44: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x43007F48: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x43007F4C: jr          $ra
    // 0x43007F50: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x43007F50: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_boss_devil_7F54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007F54: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x43007F58: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x43007F5C: blez        $v0, L_43007F94
    if (SIGNED(ctx->r2) <= 0) {
        // 0x43007F60: nop
    
            goto L_43007F94;
    }
    // 0x43007F60: nop

    // 0x43007F64: lw          $a2, 0x8($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X8);
    // 0x43007F68: nop

L_43007F6C:
    // 0x43007F6C: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x43007F70: nop

    // 0x43007F74: bne         $a0, $t6, L_43007F84
    if (ctx->r4 != ctx->r14) {
        // 0x43007F78: nop
    
            goto L_43007F84;
    }
    // 0x43007F78: nop

    // 0x43007F7C: jr          $ra
    // 0x43007F80: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x43007F80: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_43007F84:
    // 0x43007F84: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x43007F88: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x43007F8C: bne         $at, $zero, L_43007F6C
    if (ctx->r1 != 0) {
        // 0x43007F90: addiu       $a2, $a2, 0x4
        ctx->r6 = ADD32(ctx->r6, 0X4);
            goto L_43007F6C;
    }
    // 0x43007F90: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
L_43007F94:
    // 0x43007F94: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x43007F98: jr          $ra
    // 0x43007F9C: nop

    return;
    // 0x43007F9C: nop

;}
RECOMP_FUNC void ovl_boss_devil_7FA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43007FA0: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x43007FA4: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x43007FA8: sw          $fp, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r30;
    // 0x43007FAC: sw          $s7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r23;
    // 0x43007FB0: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x43007FB4: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x43007FB8: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x43007FBC: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x43007FC0: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x43007FC4: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x43007FC8: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x43007FCC: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x43007FD0: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x43007FD4: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x43007FD8: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x43007FDC: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x43007FE0: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x43007FE4: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x43007FE8: jal         0x43000868
    // 0x43007FEC: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    ovl_boss_devil_868(rdram, ctx);
        goto after_0;
    // 0x43007FEC: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x43007FF0: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x43007FF4: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x43007FF8: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43007FFC: lui         $fp, 0x4301
    ctx->r30 = S32(0X4301 << 16);
    // 0x43008000: lw          $s5, 0x1C($v0)
    ctx->r21 = MEM_W(ctx->r2, 0X1C);
    // 0x43008004: lwc1        $f21, -0x49A8($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, -0X49A8);
    // 0x43008008: lwc1        $f20, -0x49A4($at)
    ctx->f20.u32l = MEM_W(ctx->r1, -0X49A4);
    // 0x4300800C: mtc1        $zero, $f26
    ctx->f26.u32l = 0;
    // 0x43008010: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x43008014: addiu       $fp, $fp, -0x4BF8
    ctx->r30 = ADD32(ctx->r30, -0X4BF8);
    // 0x43008018: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x4300801C: addiu       $s7, $zero, 0x6
    ctx->r23 = ADD32(0, 0X6);
    // 0x43008020: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_43008024:
    // 0x43008024: or          $s4, $s5, $zero
    ctx->r20 = ctx->r21 | 0;
L_43008028:
    // 0x43008028: lh          $v1, 0x138($s4)
    ctx->r3 = MEM_H(ctx->r20, 0X138);
    // 0x4300802C: sll         $t7, $s3, 2
    ctx->r15 = S32(ctx->r19 << 2);
    // 0x43008030: beq         $v1, $zero, L_430080AC
    if (ctx->r3 == 0) {
        // 0x43008034: addiu       $t6, $v1, -0x1
        ctx->r14 = ADD32(ctx->r3, -0X1);
            goto L_430080AC;
    }
    // 0x43008034: addiu       $t6, $v1, -0x1
    ctx->r14 = ADD32(ctx->r3, -0X1);
    // 0x43008038: sh          $t6, 0x138($s4)
    MEM_H(0X138, ctx->r20) = ctx->r14;
    // 0x4300803C: addu        $s2, $s5, $t7
    ctx->r18 = ADD32(ctx->r21, ctx->r15);
    // 0x43008040: lw          $v0, 0x18($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X18);
    // 0x43008044: lh          $s0, 0x138($s4)
    ctx->r16 = MEM_H(ctx->r20, 0X138);
    // 0x43008048: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x4300804C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x43008050: mul.s       $f4, $f0, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x43008054: lwc1        $f2, 0x8($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X8);
    // 0x43008058: nop

    // 0x4300805C: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x43008060: jal         0x4300B110
    // 0x43008064: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    ovl_boss_devil_B110(rdram, ctx);
        goto after_1;
    // 0x43008064: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_1:
    // 0x43008068: blez        $s0, L_43008080
    if (SIGNED(ctx->r16) <= 0) {
        // 0x4300806C: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_43008080;
    }
    // 0x4300806C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x43008070: c.lt.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl < ctx->f0.fl;
    // 0x43008074: sll         $t8, $s0, 2
    ctx->r24 = S32(ctx->r16 << 2);
    // 0x43008078: bc1f        L_43008090
    if (!c1cs) {
        // 0x4300807C: lui         $a2, 0x4301
        ctx->r6 = S32(0X4301 << 16);
            goto L_43008090;
    }
    // 0x4300807C: lui         $a2, 0x4301
    ctx->r6 = S32(0X4301 << 16);
L_43008080:
    // 0x43008080: jal         0x43007EC4
    // 0x43008084: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    ovl_boss_devil_7EC4(rdram, ctx);
        goto after_2;
    // 0x43008084: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_2:
    // 0x43008088: b           L_430080B0
    // 0x4300808C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
        goto L_430080B0;
    // 0x4300808C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_43008090:
    // 0x43008090: addu        $a2, $a2, $t8
    ctx->r6 = ADD32(ctx->r6, ctx->r24);
    // 0x43008094: lw          $a2, -0x4BF4($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X4BF4);
    // 0x43008098: lw          $a1, 0x18($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X18);
    // 0x4300809C: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x430080A0: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    // 0x430080A4: jal         0x43000DC0
    // 0x430080A8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_boss_devil_DC0(rdram, ctx);
        goto after_3;
    // 0x430080A8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
L_430080AC:
    // 0x430080AC: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_430080B0:
    // 0x430080B0: slti        $at, $s3, 0x18
    ctx->r1 = SIGNED(ctx->r19) < 0X18 ? 1 : 0;
    // 0x430080B4: bne         $at, $zero, L_43008028
    if (ctx->r1 != 0) {
        // 0x430080B8: addiu       $s4, $s4, 0x2
        ctx->r20 = ADD32(ctx->r20, 0X2);
            goto L_43008028;
    }
    // 0x430080B8: addiu       $s4, $s4, 0x2
    ctx->r20 = ADD32(ctx->r20, 0X2);
    // 0x430080BC: beq         $s6, $zero, L_43008244
    if (ctx->r22 == 0) {
        // 0x430080C0: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_43008244;
    }
    // 0x430080C0: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x430080C4: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x430080C8: or          $s4, $s5, $zero
    ctx->r20 = ctx->r21 | 0;
L_430080CC:
    // 0x430080CC: lh          $t9, 0x138($s4)
    ctx->r25 = MEM_H(ctx->r20, 0X138);
    // 0x430080D0: nop

    // 0x430080D4: bne         $s7, $t9, L_4300816C
    if (ctx->r23 != ctx->r25) {
        // 0x430080D8: nop
    
            goto L_4300816C;
    }
    // 0x430080D8: nop

    // 0x430080DC: lh          $s1, 0x168($s4)
    ctx->r17 = MEM_H(ctx->r20, 0X168);
    // 0x430080E0: lw          $s0, 0x204($s5)
    ctx->r16 = MEM_W(ctx->r21, 0X204);
    // 0x430080E4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x430080E8: jal         0x43007F54
    // 0x430080EC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_boss_devil_7F54(rdram, ctx);
        goto after_4;
    // 0x430080EC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_4:
    // 0x430080F0: bltz        $v0, L_43008130
    if (SIGNED(ctx->r2) < 0) {
        // 0x430080F4: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_43008130;
    }
    // 0x430080F4: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x430080F8: lw          $t0, 0xC($s0)
    ctx->r8 = MEM_W(ctx->r16, 0XC);
    // 0x430080FC: sll         $t1, $v0, 2
    ctx->r9 = S32(ctx->r2 << 2);
    // 0x43008100: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x43008104: lwc1        $f8, 0x0($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X0);
    // 0x43008108: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x4300810C: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x43008110: mul.d       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f20.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f20.d);
    // 0x43008114: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x43008118: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x4300811C: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x43008120: jal         0x43007DC4
    // 0x43008124: nop

    ovl_boss_devil_7DC4(rdram, ctx);
        goto after_5;
    // 0x43008124: nop

    after_5:
    // 0x43008128: b           L_43008170
    // 0x4300812C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
        goto L_43008170;
    // 0x4300812C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_43008130:
    // 0x43008130: lw          $t3, 0x10($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X10);
    // 0x43008134: nop

    // 0x43008138: slt         $at, $s1, $t3
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x4300813C: beq         $at, $zero, L_4300815C
    if (ctx->r1 == 0) {
        // 0x43008140: nop
    
            goto L_4300815C;
    }
    // 0x43008140: nop

    // 0x43008144: lw          $t4, 0x14($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X14);
    // 0x43008148: sll         $t5, $s1, 2
    ctx->r13 = S32(ctx->r17 << 2);
    // 0x4300814C: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x43008150: lwc1        $f0, 0x0($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X0);
    // 0x43008154: b           L_43008164
    // 0x43008158: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
        goto L_43008164;
    // 0x43008158: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
L_4300815C:
    // 0x4300815C: mov.s       $f0, $f26
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    ctx->f0.fl = ctx->f26.fl;
    // 0x43008160: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
L_43008164:
    // 0x43008164: jal         0x43007CFC
    // 0x43008168: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    ovl_boss_devil_7CFC(rdram, ctx);
        goto after_6;
    // 0x43008168: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_6:
L_4300816C:
    // 0x4300816C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_43008170:
    // 0x43008170: slti        $at, $s3, 0x18
    ctx->r1 = SIGNED(ctx->r19) < 0X18 ? 1 : 0;
    // 0x43008174: bne         $at, $zero, L_430080CC
    if (ctx->r1 != 0) {
        // 0x43008178: addiu       $s4, $s4, 0x2
        ctx->r20 = ADD32(ctx->r20, 0X2);
            goto L_430080CC;
    }
    // 0x43008178: addiu       $s4, $s4, 0x2
    ctx->r20 = ADD32(ctx->r20, 0X2);
    // 0x4300817C: lui         $s4, 0x4301
    ctx->r20 = S32(0X4301 << 16);
    // 0x43008180: addiu       $s4, $s4, -0x4C00
    ctx->r20 = ADD32(ctx->r20, -0X4C00);
    // 0x43008184: or          $s2, $s5, $zero
    ctx->r18 = ctx->r21 | 0;
L_43008188:
    // 0x43008188: lw          $s1, 0x20C($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X20C);
    // 0x4300818C: lw          $s0, 0x214($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X214);
    // 0x43008190: lw          $t9, 0x4C($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X4C);
    // 0x43008194: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x43008198: jalr        $t9
    // 0x4300819C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x4300819C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_7:
    // 0x430081A0: lw          $v1, 0x4($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X4);
    // 0x430081A4: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    // 0x430081A8: nop

    // 0x430081AC: slt         $at, $a0, $v1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x430081B0: beq         $at, $zero, L_43008224
    if (ctx->r1 == 0) {
        // 0x430081B4: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_43008224;
    }
    // 0x430081B4: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_430081B8:
    // 0x430081B8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x430081BC: slt         $at, $s0, $v1
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x430081C0: bne         $at, $zero, L_430081CC
    if (ctx->r1 != 0) {
        // 0x430081C4: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_430081CC;
    }
    // 0x430081C4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x430081C8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
L_430081CC:
    // 0x430081CC: sll         $t7, $s0, 1
    ctx->r15 = S32(ctx->r16 << 1);
    // 0x430081D0: addu        $t8, $s5, $t7
    ctx->r24 = ADD32(ctx->r21, ctx->r15);
    // 0x430081D4: lh          $t0, 0x138($t8)
    ctx->r8 = MEM_H(ctx->r24, 0X138);
    // 0x430081D8: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x430081DC: beq         $t0, $zero, L_4300821C
    if (ctx->r8 == 0) {
        // 0x430081E0: sll         $t1, $s0, 2
        ctx->r9 = S32(ctx->r16 << 2);
            goto L_4300821C;
    }
    // 0x430081E0: sll         $t1, $s0, 2
    ctx->r9 = S32(ctx->r16 << 2);
    // 0x430081E4: addu        $t2, $s5, $t1
    ctx->r10 = ADD32(ctx->r21, ctx->r9);
    // 0x430081E8: lw          $a1, 0x18($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X18);
    // 0x430081EC: lw          $t9, 0x40($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X40);
    // 0x430081F0: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x430081F4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x430081F8: jalr        $t9
    // 0x430081FC: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x430081FC: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    after_8:
    // 0x43008200: lw          $t9, 0x4C($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X4C);
    // 0x43008204: sw          $s0, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->r16;
    // 0x43008208: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x4300820C: jalr        $t9
    // 0x43008210: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x43008210: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_9:
    // 0x43008214: b           L_43008228
    // 0x43008218: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
        goto L_43008228;
    // 0x43008218: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
L_4300821C:
    // 0x4300821C: bne         $at, $zero, L_430081B8
    if (ctx->r1 != 0) {
        // 0x43008220: nop
    
            goto L_430081B8;
    }
    // 0x43008220: nop

L_43008224:
    // 0x43008224: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
L_43008228:
    // 0x43008228: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x4300822C: bne         $s4, $fp, L_43008188
    if (ctx->r20 != ctx->r30) {
        // 0x43008230: sw          $s0, 0x210($s2)
        MEM_W(0X210, ctx->r18) = ctx->r16;
            goto L_43008188;
    }
    // 0x43008230: sw          $s0, 0x210($s2)
    MEM_W(0X210, ctx->r18) = ctx->r16;
    // 0x43008234: jal         0x43009B08
    // 0x43008238: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_boss_devil_9B08(rdram, ctx);
        goto after_10;
    // 0x43008238: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_10:
    // 0x4300823C: b           L_43008024
    // 0x43008240: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
        goto L_43008024;
    // 0x43008240: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_43008244:
    // 0x43008244: lw          $a0, 0x208($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X208);
    // 0x43008248: jal         0x4300AC88
    // 0x4300824C: nop

    ovl_boss_devil_AC88(rdram, ctx);
        goto after_11;
    // 0x4300824C: nop

    after_11:
    // 0x43008250: lw          $t9, 0x21C($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X21C);
    // 0x43008254: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x43008258: jalr        $t9
    // 0x4300825C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_12;
    // 0x4300825C: nop

    after_12:
    // 0x43008260: jal         0x43000838
    // 0x43008264: nop

    ovl_boss_devil_838(rdram, ctx);
        goto after_13;
    // 0x43008264: nop

    after_13:
    // 0x43008268: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x4300826C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x43008270: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x43008274: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x43008278: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x4300827C: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x43008280: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x43008284: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x43008288: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x4300828C: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x43008290: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x43008294: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x43008298: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x4300829C: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x430082A0: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x430082A4: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x430082A8: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x430082AC: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x430082B0: jr          $ra
    // 0x430082B4: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x430082B4: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void ovl_boss_devil_82B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430082B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x430082BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430082C0: lw          $t9, 0x21C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X21C);
    // 0x430082C4: nop

    // 0x430082C8: jalr        $t9
    // 0x430082CC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x430082CC: nop

    after_0:
    // 0x430082D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430082D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x430082D8: jr          $ra
    // 0x430082DC: nop

    return;
    // 0x430082DC: nop

;}
RECOMP_FUNC void ovl_boss_devil_82E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430082E0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x430082E4: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x430082E8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x430082EC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x430082F0: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x430082F4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x430082F8: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x430082FC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x43008300: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
L_43008304:
    // 0x43008304: lw          $a1, 0x18($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X18);
    // 0x43008308: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x4300830C: beq         $a1, $zero, L_4300831C
    if (ctx->r5 == 0) {
        // 0x43008310: nop
    
            goto L_4300831C;
    }
    // 0x43008310: nop

    // 0x43008314: jal         0x43000DC0
    // 0x43008318: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_boss_devil_DC0(rdram, ctx);
        goto after_0;
    // 0x43008318: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
L_4300831C:
    // 0x4300831C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x43008320: slti        $at, $s0, 0x60
    ctx->r1 = SIGNED(ctx->r16) < 0X60 ? 1 : 0;
    // 0x43008324: bne         $at, $zero, L_43008304
    if (ctx->r1 != 0) {
        // 0x43008328: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_43008304;
    }
    // 0x43008328: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x4300832C: lw          $a0, 0x10($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X10);
    // 0x43008330: jal         0x4300ABEC
    // 0x43008334: nop

    ovl_boss_devil_ABEC(rdram, ctx);
        goto after_1;
    // 0x43008334: nop

    after_1:
    // 0x43008338: lw          $a0, 0x14($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X14);
    // 0x4300833C: jal         0x4300ABEC
    // 0x43008340: nop

    ovl_boss_devil_ABEC(rdram, ctx);
        goto after_2;
    // 0x43008340: nop

    after_2:
    // 0x43008344: jal         0x43000868
    // 0x43008348: nop

    ovl_boss_devil_868(rdram, ctx);
        goto after_3;
    // 0x43008348: nop

    after_3:
    // 0x4300834C: lw          $a0, 0xC($s3)
    ctx->r4 = MEM_W(ctx->r19, 0XC);
    // 0x43008350: nop

    // 0x43008354: beq         $v0, $a0, L_43008374
    if (ctx->r2 == ctx->r4) {
        // 0x43008358: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_43008374;
    }
    // 0x43008358: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x4300835C: jal         0x4300082C
    // 0x43008360: nop

    ovl_boss_devil_82C(rdram, ctx);
        goto after_4;
    // 0x43008360: nop

    after_4:
    // 0x43008364: lw          $a0, 0x208($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X208);
    // 0x43008368: jal         0x4300AC88
    // 0x4300836C: nop

    ovl_boss_devil_AC88(rdram, ctx);
        goto after_5;
    // 0x4300836C: nop

    after_5:
    // 0x43008370: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_43008374:
    // 0x43008374: or          $s1, $s3, $zero
    ctx->r17 = ctx->r19 | 0;
    // 0x43008378: addiu       $s2, $zero, 0x8
    ctx->r18 = ADD32(0, 0X8);
L_4300837C:
    // 0x4300837C: lw          $a0, 0x20C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20C);
    // 0x43008380: nop

    // 0x43008384: lw          $t9, 0x54($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X54);
    // 0x43008388: nop

    // 0x4300838C: jalr        $t9
    // 0x43008390: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_6;
    // 0x43008390: nop

    after_6:
    // 0x43008394: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x43008398: bne         $s0, $s2, L_4300837C
    if (ctx->r16 != ctx->r18) {
        // 0x4300839C: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_4300837C;
    }
    // 0x4300839C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x430083A0: jal         0x430000F4
    // 0x430083A4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    ovl_boss_devil_F4(rdram, ctx);
        goto after_7;
    // 0x430083A4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_7:
    // 0x430083A8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x430083AC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x430083B0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x430083B4: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x430083B8: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x430083BC: jr          $ra
    // 0x430083C0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x430083C0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_boss_devil_83C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430083C4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x430083C8: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x430083CC: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x430083D0: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x430083D4: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x430083D8: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x430083DC: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x430083E0: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x430083E4: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x430083E8: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x430083EC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x430083F0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x430083F4: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x430083F8: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x430083FC: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x43008400: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x43008404: jal         0x430000E8
    // 0x43008408: addiu       $a0, $zero, 0x220
    ctx->r4 = ADD32(0, 0X220);
    ovl_boss_devil_E8(rdram, ctx);
        goto after_0;
    // 0x43008408: addiu       $a0, $zero, 0x220
    ctx->r4 = ADD32(0, 0X220);
    after_0:
    // 0x4300840C: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x43008410: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x43008414: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x43008418: jal         0x43009A30
    // 0x4300841C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    ovl_boss_devil_9A30(rdram, ctx);
        goto after_1;
    // 0x4300841C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_1:
    // 0x43008420: jal         0x4300ABC0
    // 0x43008424: addiu       $a0, $zero, 0xA34
    ctx->r4 = ADD32(0, 0XA34);
    ovl_boss_devil_ABC0(rdram, ctx);
        goto after_2;
    // 0x43008424: addiu       $a0, $zero, 0xA34
    ctx->r4 = ADD32(0, 0XA34);
    after_2:
    // 0x43008428: sw          $v0, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r2;
    // 0x4300842C: jal         0x4300ABC0
    // 0x43008430: addiu       $a0, $zero, 0xA35
    ctx->r4 = ADD32(0, 0XA35);
    ovl_boss_devil_ABC0(rdram, ctx);
        goto after_3;
    // 0x43008430: addiu       $a0, $zero, 0xA35
    ctx->r4 = ADD32(0, 0XA35);
    after_3:
    // 0x43008434: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
    // 0x43008438: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x4300843C: addiu       $a1, $s2, 0x198
    ctx->r5 = ADD32(ctx->r18, 0X198);
    // 0x43008440: addiu       $a0, $s2, 0x168
    ctx->r4 = ADD32(ctx->r18, 0X168);
    // 0x43008444: addiu       $a2, $s2, 0x138
    ctx->r6 = ADD32(ctx->r18, 0X138);
    // 0x43008448: addiu       $a3, $s2, 0x18
    ctx->r7 = ADD32(ctx->r18, 0X18);
L_4300844C:
    // 0x4300844C: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x43008450: sh          $zero, 0x0($a0)
    MEM_H(0X0, ctx->r4) = 0;
    // 0x43008454: lh          $t6, 0x0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X0);
    // 0x43008458: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x4300845C: slti        $at, $v1, 0x18
    ctx->r1 = SIGNED(ctx->r3) < 0X18 ? 1 : 0;
    // 0x43008460: sh          $t6, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r14;
    // 0x43008464: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x43008468: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x4300846C: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
    // 0x43008470: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x43008474: bne         $at, $zero, L_4300844C
    if (ctx->r1 != 0) {
        // 0x43008478: sw          $zero, -0x4($a3)
        MEM_W(-0X4, ctx->r7) = 0;
            goto L_4300844C;
    }
    // 0x43008478: sw          $zero, -0x4($a3)
    MEM_W(-0X4, ctx->r7) = 0;
    // 0x4300847C: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x43008480: sw          $zero, 0x1F8($s2)
    MEM_W(0X1F8, ctx->r18) = 0;
    // 0x43008484: sw          $zero, 0x1FC($s2)
    MEM_W(0X1FC, ctx->r18) = 0;
    // 0x43008488: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x4300848C: addiu       $v0, $v0, -0x4858
    ctx->r2 = ADD32(ctx->r2, -0X4858);
    // 0x43008490: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x43008494: lwc1        $f8, 0x8($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X8);
    // 0x43008498: lwc1        $f10, 0x8($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X8);
    // 0x4300849C: lwc1        $f6, 0x0($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X0);
    // 0x430084A0: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x430084A4: jal         0x43009E34
    // 0x430084A8: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    ovl_boss_devil_9E34(rdram, ctx);
        goto after_4;
    // 0x430084A8: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    after_4:
    // 0x430084AC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x430084B0: jal         0x43007E28
    // 0x430084B4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    ovl_boss_devil_7E28(rdram, ctx);
        goto after_5;
    // 0x430084B4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_5:
    // 0x430084B8: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x430084BC: lui         $s3, 0x4300
    ctx->r19 = S32(0X4300 << 16);
    // 0x430084C0: lui         $s4, 0x4300
    ctx->r20 = S32(0X4300 << 16);
    // 0x430084C4: lui         $s5, 0x4300
    ctx->r21 = S32(0X4300 << 16);
    // 0x430084C8: lui         $s6, 0x4300
    ctx->r22 = S32(0X4300 << 16);
    // 0x430084CC: lui         $s1, 0x4301
    ctx->r17 = S32(0X4301 << 16);
    // 0x430084D0: lui         $s7, 0x4301
    ctx->r23 = S32(0X4301 << 16);
    // 0x430084D4: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x430084D8: addiu       $s7, $s7, -0x4980
    ctx->r23 = ADD32(ctx->r23, -0X4980);
    // 0x430084DC: addiu       $s1, $s1, -0x4C00
    ctx->r17 = ADD32(ctx->r17, -0X4C00);
    // 0x430084E0: addiu       $s6, $s6, 0x7998
    ctx->r22 = ADD32(ctx->r22, 0X7998);
    // 0x430084E4: addiu       $s5, $s5, 0x7A1C
    ctx->r21 = ADD32(ctx->r21, 0X7A1C);
    // 0x430084E8: addiu       $s4, $s4, 0x79F4
    ctx->r20 = ADD32(ctx->r20, 0X79F4);
    // 0x430084EC: addiu       $s3, $s3, 0x7960
    ctx->r19 = ADD32(ctx->r19, 0X7960);
    // 0x430084F0: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
    // 0x430084F4: addiu       $fp, $zero, 0x1
    ctx->r30 = ADD32(0, 0X1);
L_430084F8:
    // 0x430084F8: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x430084FC: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x43008500: jal         0x430053AC
    // 0x43008504: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    ovl_boss_devil_53AC(rdram, ctx);
        goto after_6;
    // 0x43008504: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    after_6:
    // 0x43008508: sw          $v0, 0x20C($s0)
    MEM_W(0X20C, ctx->r16) = ctx->r2;
    // 0x4300850C: sw          $s2, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r18;
    // 0x43008510: sw          $s3, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r19;
    // 0x43008514: sw          $s4, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->r20;
    // 0x43008518: sw          $s5, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->r21;
    // 0x4300851C: sw          $s6, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->r22;
    // 0x43008520: sw          $fp, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r30;
    // 0x43008524: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x43008528: lui         $t8, 0x4301
    ctx->r24 = S32(0X4301 << 16);
    // 0x4300852C: addiu       $t8, $t8, -0x4BF8
    ctx->r24 = ADD32(ctx->r24, -0X4BF8);
    // 0x43008530: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x43008534: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x43008538: bne         $s1, $t8, L_430084F8
    if (ctx->r17 != ctx->r24) {
        // 0x4300853C: sw          $t7, 0x210($s0)
        MEM_W(0X210, ctx->r16) = ctx->r15;
            goto L_430084F8;
    }
    // 0x4300853C: sw          $t7, 0x210($s0)
    MEM_W(0X210, ctx->r16) = ctx->r15;
    // 0x43008540: sw          $zero, 0x200($s2)
    MEM_W(0X200, ctx->r18) = 0;
    // 0x43008544: lw          $t9, 0x50($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X50);
    // 0x43008548: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x4300854C: addiu       $a0, $a0, -0x7D48
    ctx->r4 = ADD32(ctx->r4, -0X7D48);
    // 0x43008550: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x43008554: jal         0x4300AC30
    // 0x43008558: sw          $t9, 0x204($s2)
    MEM_W(0X204, ctx->r18) = ctx->r25;
    ovl_boss_devil_AC30(rdram, ctx);
        goto after_7;
    // 0x43008558: sw          $t9, 0x204($s2)
    MEM_W(0X204, ctx->r18) = ctx->r25;
    after_7:
    // 0x4300855C: lui         $t0, 0x4301
    ctx->r8 = S32(0X4301 << 16);
    // 0x43008560: addiu       $t0, $t0, -0x7D20
    ctx->r8 = ADD32(ctx->r8, -0X7D20);
    // 0x43008564: lui         $a0, 0x4300
    ctx->r4 = S32(0X4300 << 16);
    // 0x43008568: sw          $v0, 0x208($s2)
    MEM_W(0X208, ctx->r18) = ctx->r2;
    // 0x4300856C: sw          $t0, 0x21C($s2)
    MEM_W(0X21C, ctx->r18) = ctx->r8;
    // 0x43008570: addiu       $a0, $a0, 0x7FA0
    ctx->r4 = ADD32(ctx->r4, 0X7FA0);
    // 0x43008574: ori         $a1, $zero, 0xFECF
    ctx->r5 = 0 | 0XFECF;
    // 0x43008578: addiu       $a2, $zero, 0x2000
    ctx->r6 = ADD32(0, 0X2000);
    // 0x4300857C: jal         0x43000820
    // 0x43008580: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_boss_devil_820(rdram, ctx);
        goto after_8;
    // 0x43008580: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_8:
    // 0x43008584: sw          $v0, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r2;
    // 0x43008588: sw          $s2, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r18;
    // 0x4300858C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x43008590: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x43008594: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x43008598: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x4300859C: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x430085A0: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x430085A4: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x430085A8: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x430085AC: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x430085B0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x430085B4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x430085B8: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x430085BC: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x430085C0: jr          $ra
    // 0x430085C4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x430085C4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x430085C8: nop

    // 0x430085CC: nop

;}
RECOMP_FUNC void ovl_boss_devil_85D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430085D0: jr          $ra
    // 0x430085D4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x430085D4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void ovl_boss_devil_85D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430085D8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x430085DC: jr          $ra
    // 0x430085E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x430085E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void ovl_boss_devil_85E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430085E4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x430085E8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x430085EC: jal         0x43000868
    // 0x430085F0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    ovl_boss_devil_868(rdram, ctx);
        goto after_0;
    // 0x430085F0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x430085F4: lw          $s0, 0x1C($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X1C);
    // 0x430085F8: nop

    // 0x430085FC: lw          $t9, 0x30($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X30);
L_43008600:
    // 0x43008600: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008604: jalr        $t9
    // 0x43008608: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x43008608: nop

    after_1:
    // 0x4300860C: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x43008610: nop

    // 0x43008614: blez        $v0, L_43008624
    if (SIGNED(ctx->r2) <= 0) {
        // 0x43008618: addiu       $t6, $v0, -0x1
        ctx->r14 = ADD32(ctx->r2, -0X1);
            goto L_43008624;
    }
    // 0x43008618: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x4300861C: sw          $t6, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r14;
    // 0x43008620: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
L_43008624:
    // 0x43008624: bne         $v0, $zero, L_43008644
    if (ctx->r2 != 0) {
        // 0x43008628: nop
    
            goto L_43008644;
    }
    // 0x43008628: nop

    // 0x4300862C: lw          $t9, 0x34($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X34);
    // 0x43008630: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008634: jalr        $t9
    // 0x43008638: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x43008638: nop

    after_2:
    // 0x4300863C: bne         $v0, $zero, L_43008654
    if (ctx->r2 != 0) {
        // 0x43008640: nop
    
            goto L_43008654;
    }
    // 0x43008640: nop

L_43008644:
    // 0x43008644: jal         0x43009B08
    // 0x43008648: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_boss_devil_9B08(rdram, ctx);
        goto after_3;
    // 0x43008648: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x4300864C: b           L_43008600
    // 0x43008650: lw          $t9, 0x30($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X30);
        goto L_43008600;
    // 0x43008650: lw          $t9, 0x30($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X30);
L_43008654:
    // 0x43008654: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    // 0x43008658: jal         0x4300AC88
    // 0x4300865C: nop

    ovl_boss_devil_AC88(rdram, ctx);
        goto after_4;
    // 0x4300865C: nop

    after_4:
    // 0x43008660: lw          $t9, 0x54($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X54);
    // 0x43008664: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008668: jalr        $t9
    // 0x4300866C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x4300866C: nop

    after_5:
    // 0x43008670: jal         0x43000838
    // 0x43008674: nop

    ovl_boss_devil_838(rdram, ctx);
        goto after_6;
    // 0x43008674: nop

    after_6:
    // 0x43008678: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4300867C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43008680: jr          $ra
    // 0x43008684: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x43008684: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_boss_devil_8688(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008688: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4300868C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43008690: lw          $t9, 0x54($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X54);
    // 0x43008694: nop

    // 0x43008698: jalr        $t9
    // 0x4300869C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x4300869C: nop

    after_0:
    // 0x430086A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430086A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x430086A8: jr          $ra
    // 0x430086AC: nop

    return;
    // 0x430086AC: nop

;}
RECOMP_FUNC void ovl_boss_devil_86B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430086B0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x430086B4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x430086B8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x430086BC: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x430086C0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x430086C4: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x430086C8: sw          $t6, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r14;
    // 0x430086CC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x430086D0: jal         0x4300ABC0
    // 0x430086D4: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    ovl_boss_devil_ABC0(rdram, ctx);
        goto after_0;
    // 0x430086D4: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_0:
    // 0x430086D8: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x430086DC: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x430086E0: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
    // 0x430086E4: addu        $t8, $s0, $t7
    ctx->r24 = ADD32(ctx->r16, ctx->r15);
    // 0x430086E8: bne         $v1, $zero, L_4300870C
    if (ctx->r3 != 0) {
        // 0x430086EC: sw          $v0, 0x4($t8)
        MEM_W(0X4, ctx->r24) = ctx->r2;
            goto L_4300870C;
    }
    // 0x430086EC: sw          $v0, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r2;
    // 0x430086F0: lw          $a2, 0x18($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X18);
    // 0x430086F4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x430086F8: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x430086FC: jal         0x43000DC0
    // 0x43008700: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    ovl_boss_devil_DC0(rdram, ctx);
        goto after_1;
    // 0x43008700: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    after_1:
    // 0x43008704: b           L_43008724
    // 0x43008708: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_43008724;
    // 0x43008708: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_4300870C:
    // 0x4300870C: lw          $a1, 0x18($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X18);
    // 0x43008710: lw          $a2, 0x1C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1C);
    // 0x43008714: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x43008718: jal         0x43000DC0
    // 0x4300871C: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    ovl_boss_devil_DC0(rdram, ctx);
        goto after_2;
    // 0x4300871C: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    after_2:
    // 0x43008720: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43008724:
    // 0x43008724: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x43008728: jr          $ra
    // 0x4300872C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x4300872C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_boss_devil_8730(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008730: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x43008734: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x43008738: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x4300873C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x43008740: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43008744: lw          $t6, 0x14($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X14);
    // 0x43008748: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x4300874C: blez        $t6, L_43008778
    if (SIGNED(ctx->r14) <= 0) {
        // 0x43008750: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_43008778;
    }
    // 0x43008750: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x43008754: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
L_43008758:
    // 0x43008758: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x4300875C: jal         0x4300ABEC
    // 0x43008760: nop

    ovl_boss_devil_ABEC(rdram, ctx);
        goto after_0;
    // 0x43008760: nop

    after_0:
    // 0x43008764: lw          $t7, 0x14($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X14);
    // 0x43008768: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x4300876C: slt         $at, $s0, $t7
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x43008770: bne         $at, $zero, L_43008758
    if (ctx->r1 != 0) {
        // 0x43008774: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_43008758;
    }
    // 0x43008774: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_43008778:
    // 0x43008778: sw          $zero, 0x14($s2)
    MEM_W(0X14, ctx->r18) = 0;
    // 0x4300877C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43008780: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x43008784: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x43008788: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x4300878C: jr          $ra
    // 0x43008790: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x43008790: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_boss_devil_8794(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008794: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43008798: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x4300879C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x430087A0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x430087A4: lw          $t6, 0x14($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X14);
    // 0x430087A8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x430087AC: beq         $t6, $zero, L_430087CC
    if (ctx->r14 == 0) {
        // 0x430087B0: addiu       $a0, $zero, 0x7
        ctx->r4 = ADD32(0, 0X7);
            goto L_430087CC;
    }
    // 0x430087B0: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x430087B4: lw          $a1, 0x18($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X18);
    // 0x430087B8: lw          $a2, 0x1C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1C);
    // 0x430087BC: jal         0x43000DC0
    // 0x430087C0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_boss_devil_DC0(rdram, ctx);
        goto after_0;
    // 0x430087C0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x430087C4: jal         0x43008730
    // 0x430087C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_boss_devil_8730(rdram, ctx);
        goto after_1;
    // 0x430087C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
L_430087CC:
    // 0x430087CC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x430087D0: jal         0x430086B0
    // 0x430087D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_boss_devil_86B0(rdram, ctx);
        goto after_2;
    // 0x430087D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x430087D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x430087DC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x430087E0: jr          $ra
    // 0x430087E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x430087E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_boss_devil_87E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430087E8: bne         $a1, $zero, L_430087F8
    if (ctx->r5 != 0) {
        // 0x430087EC: nop
    
            goto L_430087F8;
    }
    // 0x430087EC: nop

    // 0x430087F0: lui         $a1, 0x4301
    ctx->r5 = S32(0X4301 << 16);
    // 0x430087F4: addiu       $a1, $a1, -0x7A28
    ctx->r5 = ADD32(ctx->r5, -0X7A28);
L_430087F8:
    // 0x430087F8: jr          $ra
    // 0x430087FC: sw          $a1, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->r5;
    return;
    // 0x430087FC: sw          $a1, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void ovl_boss_devil_8800(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008800: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43008804: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43008808: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x4300880C: lw          $t7, 0x14($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X14);
    // 0x43008810: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x43008814: beq         $t7, $zero, L_43008830
    if (ctx->r15 == 0) {
        // 0x43008818: or          $t6, $a0, $zero
        ctx->r14 = ctx->r4 | 0;
            goto L_43008830;
    }
    // 0x43008818: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x4300881C: lw          $a1, 0x18($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X18);
    // 0x43008820: lw          $a2, 0x1C($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X1C);
    // 0x43008824: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x43008828: jal         0x43000DC0
    // 0x4300882C: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    ovl_boss_devil_DC0(rdram, ctx);
        goto after_0;
    // 0x4300882C: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_0:
L_43008830:
    // 0x43008830: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43008834: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x43008838: jr          $ra
    // 0x4300883C: nop

    return;
    // 0x4300883C: nop

;}
RECOMP_FUNC void ovl_boss_devil_8840(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008840: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43008844: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x43008848: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x4300884C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43008850: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x43008854: lw          $a1, 0x18($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X18);
    // 0x43008858: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x4300885C: jal         0x43000DC0
    // 0x43008860: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_boss_devil_DC0(rdram, ctx);
        goto after_0;
    // 0x43008860: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x43008864: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43008868: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4300886C: jr          $ra
    // 0x43008870: nop

    return;
    // 0x43008870: nop

;}
RECOMP_FUNC void ovl_boss_devil_8874(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008874: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x43008878: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x4300887C: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x43008880: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x43008884: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x43008888: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x4300888C: lw          $a1, 0x18($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X18);
    // 0x43008890: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x43008894: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x43008898: cvt.d.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.d = CVT_D_S(ctx->f12.fl);
    // 0x4300889C: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x430088A0: mfc1        $a2, $f5
    ctx->r6 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x430088A4: cvt.d.s     $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f6.d = CVT_D_S(ctx->f14.fl);
    // 0x430088A8: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x430088AC: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x430088B0: swc1        $f11, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(11 - 1) * 2];
    // 0x430088B4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x430088B8: swc1        $f7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(7 - 1) * 2];
    // 0x430088BC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x430088C0: jal         0x43000DC0
    // 0x430088C4: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    ovl_boss_devil_DC0(rdram, ctx);
        goto after_0;
    // 0x430088C4: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_0:
    // 0x430088C8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x430088CC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x430088D0: jr          $ra
    // 0x430088D4: nop

    return;
    // 0x430088D4: nop

;}
RECOMP_FUNC void ovl_boss_devil_88D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430088D8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x430088DC: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x430088E0: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x430088E4: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x430088E8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x430088EC: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x430088F0: lw          $a1, 0x18($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X18);
    // 0x430088F4: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x430088F8: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x430088FC: cvt.d.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.d = CVT_D_S(ctx->f12.fl);
    // 0x43008900: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x43008904: mfc1        $a2, $f5
    ctx->r6 = (int32_t)ctx->f_odd[(5 - 1) * 2];
    // 0x43008908: cvt.d.s     $f6, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f6.d = CVT_D_S(ctx->f14.fl);
    // 0x4300890C: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x43008910: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x43008914: swc1        $f11, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(11 - 1) * 2];
    // 0x43008918: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x4300891C: swc1        $f7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(7 - 1) * 2];
    // 0x43008920: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x43008924: jal         0x43000DC0
    // 0x43008928: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    ovl_boss_devil_DC0(rdram, ctx);
        goto after_0;
    // 0x43008928: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_0:
    // 0x4300892C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x43008930: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x43008934: jr          $ra
    // 0x43008938: nop

    return;
    // 0x43008938: nop

;}
RECOMP_FUNC void ovl_boss_devil_893C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300893C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43008940: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43008944: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43008948: jal         0x43008730
    // 0x4300894C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    ovl_boss_devil_8730(rdram, ctx);
        goto after_0;
    // 0x4300894C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x43008950: lw          $a1, 0x18($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X18);
    // 0x43008954: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x43008958: jal         0x43000DC0
    // 0x4300895C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_boss_devil_DC0(rdram, ctx);
        goto after_1;
    // 0x4300895C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x43008960: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x43008964: jal         0x4300ABEC
    // 0x43008968: nop

    ovl_boss_devil_ABEC(rdram, ctx);
        goto after_2;
    // 0x43008968: nop

    after_2:
    // 0x4300896C: jal         0x43000868
    // 0x43008970: nop

    ovl_boss_devil_868(rdram, ctx);
        goto after_3;
    // 0x43008970: nop

    after_3:
    // 0x43008974: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    // 0x43008978: nop

    // 0x4300897C: beq         $v0, $a0, L_43008998
    if (ctx->r2 == ctx->r4) {
        // 0x43008980: nop
    
            goto L_43008998;
    }
    // 0x43008980: nop

    // 0x43008984: jal         0x4300082C
    // 0x43008988: nop

    ovl_boss_devil_82C(rdram, ctx);
        goto after_4;
    // 0x43008988: nop

    after_4:
    // 0x4300898C: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    // 0x43008990: jal         0x4300AC88
    // 0x43008994: nop

    ovl_boss_devil_AC88(rdram, ctx);
        goto after_5;
    // 0x43008994: nop

    after_5:
L_43008998:
    // 0x43008998: jal         0x430000F4
    // 0x4300899C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_boss_devil_F4(rdram, ctx);
        goto after_6;
    // 0x4300899C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x430089A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x430089A4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x430089A8: jr          $ra
    // 0x430089AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x430089AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_boss_devil_89B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430089B0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x430089B4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x430089B8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x430089BC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x430089C0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x430089C4: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x430089C8: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x430089CC: jal         0x430000E8
    // 0x430089D0: addiu       $a0, $zero, 0x58
    ctx->r4 = ADD32(0, 0X58);
    ovl_boss_devil_E8(rdram, ctx);
        goto after_0;
    // 0x430089D0: addiu       $a0, $zero, 0x58
    ctx->r4 = ADD32(0, 0X58);
    after_0:
    // 0x430089D4: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x430089D8: jal         0x4300ABC0
    // 0x430089DC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    ovl_boss_devil_ABC0(rdram, ctx);
        goto after_1;
    // 0x430089DC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    after_1:
    // 0x430089E0: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x430089E4: sw          $zero, 0x14($s0)
    MEM_W(0X14, ctx->r16) = 0;
    // 0x430089E8: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x430089EC: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x430089F0: sw          $t6, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r14;
    // 0x430089F4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x430089F8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x430089FC: addiu       $a1, $s0, 0x18
    ctx->r5 = ADD32(ctx->r16, 0X18);
    // 0x43008A00: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x43008A04: jal         0x43000DC0
    // 0x43008A08: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_boss_devil_DC0(rdram, ctx);
        goto after_2;
    // 0x43008A08: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x43008A0C: lui         $t7, 0x4301
    ctx->r15 = S32(0X4301 << 16);
    // 0x43008A10: lui         $t8, 0x4301
    ctx->r24 = S32(0X4301 << 16);
    // 0x43008A14: lui         $t9, 0x4301
    ctx->r25 = S32(0X4301 << 16);
    // 0x43008A18: lui         $t0, 0x4301
    ctx->r8 = S32(0X4301 << 16);
    // 0x43008A1C: lui         $t1, 0x4301
    ctx->r9 = S32(0X4301 << 16);
    // 0x43008A20: lui         $t2, 0x4301
    ctx->r10 = S32(0X4301 << 16);
    // 0x43008A24: lui         $t3, 0x4301
    ctx->r11 = S32(0X4301 << 16);
    // 0x43008A28: lui         $t4, 0x4301
    ctx->r12 = S32(0X4301 << 16);
    // 0x43008A2C: lui         $t5, 0x4301
    ctx->r13 = S32(0X4301 << 16);
    // 0x43008A30: addiu       $t7, $t7, -0x7A30
    ctx->r15 = ADD32(ctx->r15, -0X7A30);
    // 0x43008A34: addiu       $t8, $t8, -0x7950
    ctx->r24 = ADD32(ctx->r24, -0X7950);
    // 0x43008A38: addiu       $t9, $t9, -0x786C
    ctx->r25 = ADD32(ctx->r25, -0X786C);
    // 0x43008A3C: addiu       $t0, $t0, -0x7818
    ctx->r8 = ADD32(ctx->r8, -0X7818);
    // 0x43008A40: addiu       $t1, $t1, -0x7800
    ctx->r9 = ADD32(ctx->r9, -0X7800);
    // 0x43008A44: addiu       $t2, $t2, -0x77C0
    ctx->r10 = ADD32(ctx->r10, -0X77C0);
    // 0x43008A48: addiu       $t3, $t3, -0x778C
    ctx->r11 = ADD32(ctx->r11, -0X778C);
    // 0x43008A4C: addiu       $t4, $t4, -0x7728
    ctx->r12 = ADD32(ctx->r12, -0X7728);
    // 0x43008A50: addiu       $t5, $t5, -0x76C4
    ctx->r13 = ADD32(ctx->r13, -0X76C4);
    // 0x43008A54: sw          $t7, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r15;
    // 0x43008A58: sw          $t8, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r24;
    // 0x43008A5C: sw          $t9, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r25;
    // 0x43008A60: sw          $t0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r8;
    // 0x43008A64: sw          $t1, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r9;
    // 0x43008A68: sw          $t2, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r10;
    // 0x43008A6C: sw          $t3, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->r11;
    // 0x43008A70: sw          $t4, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->r12;
    // 0x43008A74: sw          $t5, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->r13;
    // 0x43008A78: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x43008A7C: jal         0x43008840
    // 0x43008A80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_boss_devil_8840(rdram, ctx);
        goto after_3;
    // 0x43008A80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x43008A84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008A88: jal         0x430087E8
    // 0x43008A8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_boss_devil_87E8(rdram, ctx);
        goto after_4;
    // 0x43008A8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x43008A90: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x43008A94: nop

    // 0x43008A98: beq         $v0, $zero, L_43008AC0
    if (ctx->r2 == 0) {
        // 0x43008A9C: nop
    
            goto L_43008AC0;
    }
    // 0x43008A9C: nop

    // 0x43008AA0: bgez        $v0, L_43008AB8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x43008AA4: lw          $a1, 0x30($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X30);
            goto L_43008AB8;
    }
    // 0x43008AA4: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x43008AA8: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x43008AAC: nop

    // 0x43008AB0: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x43008AB4: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
L_43008AB8:
    // 0x43008AB8: jal         0x430086B0
    // 0x43008ABC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_boss_devil_86B0(rdram, ctx);
        goto after_5;
    // 0x43008ABC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
L_43008AC0:
    // 0x43008AC0: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x43008AC4: addiu       $a0, $a0, -0x7978
    ctx->r4 = ADD32(ctx->r4, -0X7978);
    // 0x43008AC8: jal         0x4300AC30
    // 0x43008ACC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_boss_devil_AC30(rdram, ctx);
        goto after_6;
    // 0x43008ACC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_6:
    // 0x43008AD0: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x43008AD4: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x43008AD8: addiu       $a0, $a0, -0x7A1C
    ctx->r4 = ADD32(ctx->r4, -0X7A1C);
    // 0x43008ADC: ori         $a1, $zero, 0xFECF
    ctx->r5 = 0 | 0XFECF;
    // 0x43008AE0: addiu       $a2, $zero, 0x2000
    ctx->r6 = ADD32(0, 0X2000);
    // 0x43008AE4: jal         0x43000820
    // 0x43008AE8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_boss_devil_820(rdram, ctx);
        goto after_7;
    // 0x43008AE8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_7:
    // 0x43008AEC: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    // 0x43008AF0: sw          $s0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r16;
    // 0x43008AF4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43008AF8: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x43008AFC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x43008B00: jr          $ra
    // 0x43008B04: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x43008B04: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x43008B08: nop

    // 0x43008B0C: nop

;}
RECOMP_FUNC void ovl_boss_devil_8B10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008B10: jr          $ra
    // 0x43008B14: nop

    return;
    // 0x43008B14: nop

    // 0x43008B18: jr          $ra
    // 0x43008B1C: nop

    return;
    // 0x43008B1C: nop

;}
RECOMP_FUNC void ovl_boss_devil_8B20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008B20: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x43008B24: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x43008B28: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x43008B2C: lwc1        $f10, 0x4($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X4);
    // 0x43008B30: lwc1        $f8, 0x4($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X4);
    // 0x43008B34: lwc1        $f6, 0x0($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X0);
    // 0x43008B38: lwc1        $f4, 0x0($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X0);
    // 0x43008B3C: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x43008B40: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43008B44: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x43008B48: swc1        $f16, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f16.u32l;
    // 0x43008B4C: lwc1        $f4, 0x8($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X8);
    // 0x43008B50: lwc1        $f18, 0x8($a2)
    ctx->f18.u32l = MEM_W(ctx->r6, 0X8);
    // 0x43008B54: mul.s       $f6, $f0, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x43008B58: sub.s       $f2, $f18, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x43008B5C: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x43008B60: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x43008B64: mul.s       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x43008B68: jal         0x4300B110
    // 0x43008B6C: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    ovl_boss_devil_B110(rdram, ctx);
        goto after_0;
    // 0x43008B6C: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    after_0:
    // 0x43008B70: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    // 0x43008B74: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x43008B78: lw          $a2, 0x60($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X60);
    // 0x43008B7C: lwc1        $f10, 0x0($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X0);
    // 0x43008B80: lwc1        $f18, 0x8($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X8);
    // 0x43008B84: lwc1        $f16, 0x0($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X0);
    // 0x43008B88: lwc1        $f4, 0x8($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X8);
    // 0x43008B8C: sub.s       $f12, $f10, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x43008B90: jal         0x43009E34
    // 0x43008B94: sub.s       $f14, $f18, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f18.fl - ctx->f4.fl;
    ovl_boss_devil_9E34(rdram, ctx);
        goto after_1;
    // 0x43008B94: sub.s       $f14, $f18, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f18.fl - ctx->f4.fl;
    after_1:
    // 0x43008B98: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    // 0x43008B9C: swc1        $f0, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->f0.u32l;
    // 0x43008BA0: lwc1        $f14, 0x48($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X48);
    // 0x43008BA4: lwc1        $f12, 0x50($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X50);
    // 0x43008BA8: jal         0x43009E34
    // 0x43008BAC: nop

    ovl_boss_devil_9E34(rdram, ctx);
        goto after_2;
    // 0x43008BAC: nop

    after_2:
    // 0x43008BB0: swc1        $f0, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->f0.u32l;
    // 0x43008BB4: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x43008BB8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x43008BBC: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x43008BC0: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
    // 0x43008BC4: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    // 0x43008BC8: lw          $t6, 0x34($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X34);
    // 0x43008BCC: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    // 0x43008BD0: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x43008BD4: sw          $a2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r6;
    // 0x43008BD8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x43008BDC: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    // 0x43008BE0: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    // 0x43008BE4: jal         0x43000DC0
    // 0x43008BE8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    ovl_boss_devil_DC0(rdram, ctx);
        goto after_3;
    // 0x43008BE8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_3:
    // 0x43008BEC: lw          $t7, 0x34($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X34);
    // 0x43008BF0: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    // 0x43008BF4: addiu       $a2, $s0, 0x4C
    ctx->r6 = ADD32(ctx->r16, 0X4C);
    // 0x43008BF8: sw          $a2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r6;
    // 0x43008BFC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x43008C00: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    // 0x43008C04: addiu       $a3, $zero, 0x13
    ctx->r7 = ADD32(0, 0X13);
    // 0x43008C08: jal         0x43000DC0
    // 0x43008C0C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    ovl_boss_devil_DC0(rdram, ctx);
        goto after_4;
    // 0x43008C0C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_4:
    // 0x43008C10: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x43008C14: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x43008C18: jr          $ra
    // 0x43008C1C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x43008C1C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void ovl_boss_devil_8C20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008C20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43008C24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43008C28: lw          $at, 0x0($a1)
    ctx->r1 = MEM_W(ctx->r5, 0X0);
    // 0x43008C2C: addiu       $a2, $a0, 0xC
    ctx->r6 = ADD32(ctx->r4, 0XC);
    // 0x43008C30: sw          $at, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r1;
    // 0x43008C34: lw          $t8, 0x4($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X4);
    // 0x43008C38: nop

    // 0x43008C3C: sw          $t8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r24;
    // 0x43008C40: lw          $at, 0x8($a1)
    ctx->r1 = MEM_W(ctx->r5, 0X8);
    // 0x43008C44: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x43008C48: jal         0x43008B20
    // 0x43008C4C: sw          $at, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r1;
    ovl_boss_devil_8B20(rdram, ctx);
        goto after_0;
    // 0x43008C4C: sw          $at, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r1;
    after_0:
    // 0x43008C50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43008C54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43008C58: jr          $ra
    // 0x43008C5C: nop

    return;
    // 0x43008C5C: nop

;}
RECOMP_FUNC void ovl_boss_devil_8C60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008C60: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x43008C64: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43008C68: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43008C6C: lw          $t7, 0x44($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X44);
    // 0x43008C70: lw          $t6, 0x40($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X40);
    // 0x43008C74: lwc1        $f4, 0x18($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X18);
    // 0x43008C78: subu        $v0, $t6, $t7
    ctx->r2 = SUB32(ctx->r14, ctx->r15);
    // 0x43008C7C: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x43008C80: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x43008C84: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x43008C88: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x43008C8C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x43008C90: mul.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x43008C94: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43008C98: addiu       $a1, $zero, 0x785
    ctx->r5 = ADD32(0, 0X785);
    // 0x43008C9C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x43008CA0: div.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x43008CA4: bne         $v0, $at, L_43008D3C
    if (ctx->r2 != ctx->r1) {
        // 0x43008CA8: swc1        $f18, 0x54($a0)
        MEM_W(0X54, ctx->r4) = ctx->f18.u32l;
            goto L_43008D3C;
    }
    // 0x43008CA8: swc1        $f18, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->f18.u32l;
    // 0x43008CAC: lw          $t8, 0x48($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X48);
    // 0x43008CB0: addiu       $a3, $zero, 0xD
    ctx->r7 = ADD32(0, 0XD);
    // 0x43008CB4: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x43008CB8: jal         0x430089B0
    // 0x43008CBC: sw          $t9, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->r25;
    ovl_boss_devil_89B0(rdram, ctx);
        goto after_0;
    // 0x43008CBC: sw          $t9, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->r25;
    after_0:
    // 0x43008CC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008CC4: addiu       $a1, $zero, 0xA38
    ctx->r5 = ADD32(0, 0XA38);
    // 0x43008CC8: addiu       $a2, $zero, 0xA38
    ctx->r6 = ADD32(0, 0XA38);
    // 0x43008CCC: jal         0x430089B0
    // 0x43008CD0: addiu       $a3, $zero, 0xF
    ctx->r7 = ADD32(0, 0XF);
    ovl_boss_devil_89B0(rdram, ctx);
        goto after_1;
    // 0x43008CD0: addiu       $a3, $zero, 0xF
    ctx->r7 = ADD32(0, 0XF);
    after_1:
    // 0x43008CD4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x43008CD8: lw          $t9, 0x38($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X38);
    // 0x43008CDC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x43008CE0: jalr        $t9
    // 0x43008CE4: addiu       $a1, $zero, 0xA39
    ctx->r5 = ADD32(0, 0XA39);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x43008CE4: addiu       $a1, $zero, 0xA39
    ctx->r5 = ADD32(0, 0XA39);
    after_2:
    // 0x43008CE8: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43008CEC: lwc1        $f6, 0x5C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X5C);
    // 0x43008CF0: lwc1        $f9, -0x49A0($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X49A0);
    // 0x43008CF4: lwc1        $f8, -0x499C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X499C);
    // 0x43008CF8: cvt.d.s     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f4.d = CVT_D_S(ctx->f6.fl);
    // 0x43008CFC: add.d       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f4.d + ctx->f8.d;
    // 0x43008D00: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x43008D04: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43008D08: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x43008D0C: lw          $t9, 0x4C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X4C);
    // 0x43008D10: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x43008D14: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x43008D18: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x43008D1C: jalr        $t9
    // 0x43008D20: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x43008D20: nop

    after_3:
    // 0x43008D24: lui         $a1, 0x4301
    ctx->r5 = S32(0X4301 << 16);
    // 0x43008D28: addiu       $a1, $a1, -0x4980
    ctx->r5 = ADD32(ctx->r5, -0X4980);
    // 0x43008D2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008D30: jal         0x430053AC
    // 0x43008D34: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    ovl_boss_devil_53AC(rdram, ctx);
        goto after_4;
    // 0x43008D34: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    after_4:
    // 0x43008D38: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
L_43008D3C:
    // 0x43008D3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43008D40: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43008D44: jr          $ra
    // 0x43008D48: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x43008D48: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_boss_devil_8D4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008D4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43008D50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43008D54: lw          $v1, 0x44($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X44);
    // 0x43008D58: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x43008D5C: slti        $at, $v1, 0xE
    ctx->r1 = SIGNED(ctx->r3) < 0XE ? 1 : 0;
    // 0x43008D60: beq         $at, $zero, L_43008DC8
    if (ctx->r1 == 0) {
        // 0x43008D64: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43008DC8;
    }
    // 0x43008D64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43008D68: lw          $t6, 0x40($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X40);
    // 0x43008D6C: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x43008D70: subu        $v0, $t6, $v1
    ctx->r2 = SUB32(ctx->r14, ctx->r3);
    // 0x43008D74: bne         $v0, $at, L_43008DA0
    if (ctx->r2 != ctx->r1) {
        // 0x43008D78: nop
    
            goto L_43008DA0;
    }
    // 0x43008D78: nop

    // 0x43008D7C: lw          $a0, 0x1C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1C);
    // 0x43008D80: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x43008D84: lw          $t9, 0x54($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X54);
    // 0x43008D88: nop

    // 0x43008D8C: jalr        $t9
    // 0x43008D90: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43008D90: nop

    after_0:
    // 0x43008D94: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x43008D98: nop

    // 0x43008D9C: sw          $zero, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = 0;
L_43008DA0:
    // 0x43008DA0: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43008DA4: lwc1        $f0, -0x4998($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X4998);
    // 0x43008DA8: lwc1        $f4, 0x4C($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X4C);
    // 0x43008DAC: lwc1        $f8, 0x50($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X50);
    // 0x43008DB0: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x43008DB4: nop

    // 0x43008DB8: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x43008DBC: swc1        $f6, 0x4C($a1)
    MEM_W(0X4C, ctx->r5) = ctx->f6.u32l;
    // 0x43008DC0: swc1        $f10, 0x50($a1)
    MEM_W(0X50, ctx->r5) = ctx->f10.u32l;
    // 0x43008DC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43008DC8:
    // 0x43008DC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43008DCC: jr          $ra
    // 0x43008DD0: nop

    return;
    // 0x43008DD0: nop

;}
RECOMP_FUNC void ovl_boss_devil_8DD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008DD4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x43008DD8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x43008DDC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x43008DE0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x43008DE4: jal         0x43000868
    // 0x43008DE8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    ovl_boss_devil_868(rdram, ctx);
        goto after_0;
    // 0x43008DE8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x43008DEC: lui         $s2, 0x4301
    ctx->r18 = S32(0X4301 << 16);
    // 0x43008DF0: lw          $s0, 0x1C($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X1C);
    // 0x43008DF4: addiu       $s2, $s2, -0x4BC0
    ctx->r18 = ADD32(ctx->r18, -0X4BC0);
    // 0x43008DF8: lw          $t6, 0x44($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X44);
L_43008DFC:
    // 0x43008DFC: nop

    // 0x43008E00: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x43008E04: blez        $t7, L_43008E4C
    if (SIGNED(ctx->r15) <= 0) {
        // 0x43008E08: sw          $t7, 0x44($s0)
        MEM_W(0X44, ctx->r16) = ctx->r15;
            goto L_43008E4C;
    }
    // 0x43008E08: sw          $t7, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r15;
    // 0x43008E0C: lw          $t9, 0x48($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X48);
    // 0x43008E10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008E14: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x43008E18: addu        $t1, $s2, $t0
    ctx->r9 = ADD32(ctx->r18, ctx->r8);
    // 0x43008E1C: lw          $t9, 0x0($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X0);
    // 0x43008E20: addiu       $s1, $s0, 0xC
    ctx->r17 = ADD32(ctx->r16, 0XC);
    // 0x43008E24: jalr        $t9
    // 0x43008E28: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x43008E28: nop

    after_1:
    // 0x43008E2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008E30: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x43008E34: jal         0x43008B20
    // 0x43008E38: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_boss_devil_8B20(rdram, ctx);
        goto after_2;
    // 0x43008E38: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_2:
    // 0x43008E3C: jal         0x43009B08
    // 0x43008E40: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_boss_devil_9B08(rdram, ctx);
        goto after_3;
    // 0x43008E40: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x43008E44: b           L_43008DFC
    // 0x43008E48: lw          $t6, 0x44($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X44);
        goto L_43008DFC;
    // 0x43008E48: lw          $t6, 0x44($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X44);
L_43008E4C:
    // 0x43008E4C: lw          $a0, 0x68($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X68);
    // 0x43008E50: jal         0x4300AC88
    // 0x43008E54: nop

    ovl_boss_devil_AC88(rdram, ctx);
        goto after_4;
    // 0x43008E54: nop

    after_4:
    // 0x43008E58: lw          $t9, 0x64($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X64);
    // 0x43008E5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43008E60: jalr        $t9
    // 0x43008E64: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x43008E64: nop

    after_5:
    // 0x43008E68: jal         0x43000838
    // 0x43008E6C: nop

    ovl_boss_devil_838(rdram, ctx);
        goto after_6;
    // 0x43008E6C: nop

    after_6:
    // 0x43008E70: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43008E74: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43008E78: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x43008E7C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x43008E80: jr          $ra
    // 0x43008E84: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x43008E84: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_boss_devil_8E88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008E88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43008E8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43008E90: jal         0x43000868
    // 0x43008E94: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    ovl_boss_devil_868(rdram, ctx);
        goto after_0;
    // 0x43008E94: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x43008E98: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x43008E9C: nop

    // 0x43008EA0: lw          $a0, 0x20($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X20);
    // 0x43008EA4: nop

    // 0x43008EA8: beq         $v0, $a0, L_43008EC0
    if (ctx->r2 == ctx->r4) {
        // 0x43008EAC: nop
    
            goto L_43008EC0;
    }
    // 0x43008EAC: nop

    // 0x43008EB0: jal         0x4300082C
    // 0x43008EB4: nop

    ovl_boss_devil_82C(rdram, ctx);
        goto after_1;
    // 0x43008EB4: nop

    after_1:
    // 0x43008EB8: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x43008EBC: nop

L_43008EC0:
    // 0x43008EC0: lw          $t9, 0x64($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X64);
    // 0x43008EC4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x43008EC8: jalr        $t9
    // 0x43008ECC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x43008ECC: nop

    after_2:
    // 0x43008ED0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43008ED4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43008ED8: jr          $ra
    // 0x43008EDC: nop

    return;
    // 0x43008EDC: nop

;}
RECOMP_FUNC void ovl_boss_devil_8EE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008EE0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x43008EE4: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x43008EE8: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x43008EEC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x43008EF0: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x43008EF4: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x43008EF8: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x43008EFC: lw          $a3, 0x34($s3)
    ctx->r7 = MEM_W(ctx->r19, 0X34);
    // 0x43008F00: lw          $a1, 0x30($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X30);
    // 0x43008F04: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x43008F08: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x43008F0C: jal         0x43000DC0
    // 0x43008F10: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    ovl_boss_devil_DC0(rdram, ctx);
        goto after_0;
    // 0x43008F10: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_0:
    // 0x43008F14: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x43008F18: or          $s1, $s3, $zero
    ctx->r17 = ctx->r19 | 0;
    // 0x43008F1C: addiu       $s2, $zero, 0xC
    ctx->r18 = ADD32(0, 0XC);
L_43008F20:
    // 0x43008F20: lw          $a0, 0x24($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X24);
    // 0x43008F24: jal         0x4300ABEC
    // 0x43008F28: nop

    ovl_boss_devil_ABEC(rdram, ctx);
        goto after_1;
    // 0x43008F28: nop

    after_1:
    // 0x43008F2C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x43008F30: bne         $s0, $s2, L_43008F20
    if (ctx->r16 != ctx->r18) {
        // 0x43008F34: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_43008F20;
    }
    // 0x43008F34: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x43008F38: lw          $a0, 0x1C($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X1C);
    // 0x43008F3C: nop

    // 0x43008F40: beq         $a0, $zero, L_43008F5C
    if (ctx->r4 == 0) {
        // 0x43008F44: nop
    
            goto L_43008F5C;
    }
    // 0x43008F44: nop

    // 0x43008F48: lw          $t9, 0x54($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X54);
    // 0x43008F4C: nop

    // 0x43008F50: jalr        $t9
    // 0x43008F54: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x43008F54: nop

    after_2:
    // 0x43008F58: sw          $zero, 0x1C($s3)
    MEM_W(0X1C, ctx->r19) = 0;
L_43008F5C:
    // 0x43008F5C: jal         0x430000F4
    // 0x43008F60: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    ovl_boss_devil_F4(rdram, ctx);
        goto after_3;
    // 0x43008F60: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_3:
    // 0x43008F64: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x43008F68: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x43008F6C: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x43008F70: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x43008F74: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x43008F78: jr          $ra
    // 0x43008F7C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x43008F7C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_boss_devil_8F80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008F80: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x43008F84: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x43008F88: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x43008F8C: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x43008F90: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x43008F94: subu        $t8, $t7, $v0
    ctx->r24 = SUB32(ctx->r15, ctx->r2);
    // 0x43008F98: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x43008F9C: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x43008FA0: cvt.s.w     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = CVT_S_W(ctx->f4.u32l);
    // 0x43008FA4: lw          $a1, 0x18($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X18);
    // 0x43008FA8: sll         $a2, $v0, 5
    ctx->r6 = S32(ctx->r2 << 5);
    // 0x43008FAC: cvt.d.s     $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.d = CVT_D_S(ctx->f2.fl);
    // 0x43008FB0: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x43008FB4: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x43008FB8: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x43008FBC: swc1        $f1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x43008FC0: swc1        $f1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x43008FC4: swc1        $f1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(1 - 1) * 2];
    // 0x43008FC8: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x43008FCC: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    // 0x43008FD0: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    // 0x43008FD4: subu        $a2, $a2, $v0
    ctx->r6 = SUB32(ctx->r6, ctx->r2);
    // 0x43008FD8: jal         0x43000DC0
    // 0x43008FDC: sw          $a1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r5;
    ovl_boss_devil_DC0(rdram, ctx);
        goto after_0;
    // 0x43008FDC: sw          $a1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r5;
    after_0:
    // 0x43008FE0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x43008FE4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x43008FE8: jr          $ra
    // 0x43008FEC: nop

    return;
    // 0x43008FEC: nop

;}
RECOMP_FUNC void ovl_boss_devil_8FF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43008FF0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x43008FF4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43008FF8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x43008FFC: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x43009000: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x43009004: addiu       $a1, $zero, 0x9FB
    ctx->r5 = ADD32(0, 0X9FB);
    // 0x43009008: jal         0x430089B0
    // 0x4300900C: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    ovl_boss_devil_89B0(rdram, ctx);
        goto after_0;
    // 0x4300900C: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    after_0:
    // 0x43009010: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x43009014: lw          $t9, 0x4C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X4C);
    // 0x43009018: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x4300901C: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x43009020: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x43009024: jalr        $t9
    // 0x43009028: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x43009028: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_1:
    // 0x4300902C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x43009030: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    // 0x43009034: lw          $a1, 0x18($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X18);
    // 0x43009038: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x4300903C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x43009040: jal         0x43000DC0
    // 0x43009044: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    ovl_boss_devil_DC0(rdram, ctx);
        goto after_2;
    // 0x43009044: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_2:
    // 0x43009048: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x4300904C: lui         $t7, 0x4301
    ctx->r15 = S32(0X4301 << 16);
    // 0x43009050: addiu       $t7, $t7, -0x7080
    ctx->r15 = ADD32(ctx->r15, -0X7080);
    // 0x43009054: sw          $t7, 0x30($t8)
    MEM_W(0X30, ctx->r24) = ctx->r15;
    // 0x43009058: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x4300905C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x43009060: jr          $ra
    // 0x43009064: nop

    return;
    // 0x43009064: nop

;}
RECOMP_FUNC void ovl_boss_devil_9068(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43009068: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x4300906C: lui         $t7, 0x4301
    ctx->r15 = S32(0X4301 << 16);
    // 0x43009070: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x43009074: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x43009078: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x4300907C: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x43009080: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x43009084: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x43009088: sw          $a1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r5;
    // 0x4300908C: sw          $a2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r6;
    // 0x43009090: addiu       $t7, $t7, -0x4BB8
    ctx->r15 = ADD32(ctx->r15, -0X4BB8);
    // 0x43009094: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x43009098: addiu       $t6, $sp, 0x70
    ctx->r14 = ADD32(ctx->r29, 0X70);
    // 0x4300909C: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x430090A0: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x430090A4: lw          $t0, 0x4($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X4);
    // 0x430090A8: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x430090AC: addiu       $a0, $zero, 0x6C
    ctx->r4 = ADD32(0, 0X6C);
    // 0x430090B0: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x430090B4: jal         0x430000E8
    // 0x430090B8: sw          $t0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r8;
    ovl_boss_devil_E8(rdram, ctx);
        goto after_0;
    // 0x430090B8: sw          $t0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r8;
    after_0:
    // 0x430090BC: lui         $s0, 0x4301
    ctx->r16 = S32(0X4301 << 16);
    // 0x430090C0: lui         $s3, 0x4301
    ctx->r19 = S32(0X4301 << 16);
    // 0x430090C4: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x430090C8: addiu       $s3, $s3, -0x4BA0
    ctx->r19 = ADD32(ctx->r19, -0X4BA0);
    // 0x430090CC: addiu       $s0, $s0, -0x4BAC
    ctx->r16 = ADD32(ctx->r16, -0X4BAC);
    // 0x430090D0: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
L_430090D4:
    // 0x430090D4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x430090D8: jal         0x4300ABC0
    // 0x430090DC: nop

    ovl_boss_devil_ABC0(rdram, ctx);
        goto after_1;
    // 0x430090DC: nop

    after_1:
    // 0x430090E0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x430090E4: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x430090E8: bne         $s0, $s3, L_430090D4
    if (ctx->r16 != ctx->r19) {
        // 0x430090EC: sw          $v0, 0x20($s1)
        MEM_W(0X20, ctx->r17) = ctx->r2;
            goto L_430090D4;
    }
    // 0x430090EC: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x430090F0: lw          $a2, 0x24($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X24);
    // 0x430090F4: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x430090F8: addiu       $t2, $s2, 0x34
    ctx->r10 = ADD32(ctx->r18, 0X34);
    // 0x430090FC: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x43009100: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x43009104: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x43009108: lw          $t3, 0x28($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X28);
    // 0x4300910C: addiu       $t4, $zero, 0x1D
    ctx->r12 = ADD32(0, 0X1D);
    // 0x43009110: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x43009114: addiu       $t9, $zero, 0x7F
    ctx->r25 = ADD32(0, 0X7F);
    // 0x43009118: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x4300911C: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x43009120: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x43009124: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x43009128: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x4300912C: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x43009130: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x43009134: addiu       $a1, $s2, 0x30
    ctx->r5 = ADD32(ctx->r18, 0X30);
    // 0x43009138: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x4300913C: jal         0x43000DC0
    // 0x43009140: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    ovl_boss_devil_DC0(rdram, ctx);
        goto after_2;
    // 0x43009140: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    after_2:
    // 0x43009144: lw          $a2, 0x30($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X30);
    // 0x43009148: addiu       $a1, $s2, 0x38
    ctx->r5 = ADD32(ctx->r18, 0X38);
    // 0x4300914C: addiu       $t8, $zero, 0x2B
    ctx->r24 = ADD32(0, 0X2B);
    // 0x43009150: addiu       $t6, $s2, 0x24
    ctx->r14 = ADD32(ctx->r18, 0X24);
    // 0x43009154: addiu       $t7, $zero, 0x11
    ctx->r15 = ADD32(0, 0X11);
    // 0x43009158: addiu       $t0, $zero, 0x11
    ctx->r8 = ADD32(0, 0X11);
    // 0x4300915C: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x43009160: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x43009164: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x43009168: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x4300916C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x43009170: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x43009174: sw          $a2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r6;
    // 0x43009178: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    // 0x4300917C: lw          $t1, 0x34($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X34);
    // 0x43009180: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x43009184: sw          $s4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r20;
    // 0x43009188: addiu       $a0, $zero, 0x2A
    ctx->r4 = ADD32(0, 0X2A);
    // 0x4300918C: addiu       $a3, $s2, 0x2C
    ctx->r7 = ADD32(ctx->r18, 0X2C);
    // 0x43009190: jal         0x43000DC0
    // 0x43009194: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    ovl_boss_devil_DC0(rdram, ctx);
        goto after_3;
    // 0x43009194: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    after_3:
    // 0x43009198: lw          $t2, 0x84($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X84);
    // 0x4300919C: lw          $v0, 0x88($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X88);
    // 0x430091A0: lw          $at, 0x0($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X0);
    // 0x430091A4: addiu       $a0, $s2, 0xC
    ctx->r4 = ADD32(ctx->r18, 0XC);
    // 0x430091A8: sw          $at, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r1;
    // 0x430091AC: lw          $t4, 0x4($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X4);
    // 0x430091B0: addiu       $t8, $sp, 0x70
    ctx->r24 = ADD32(ctx->r29, 0X70);
    // 0x430091B4: sw          $t4, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r12;
    // 0x430091B8: lw          $at, 0x8($t2)
    ctx->r1 = MEM_W(ctx->r10, 0X8);
    // 0x430091BC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x430091C0: sw          $at, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r1;
    // 0x430091C4: lw          $at, 0x0($s4)
    ctx->r1 = MEM_W(ctx->r20, 0X0);
    // 0x430091C8: nop

    // 0x430091CC: sw          $at, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r1;
    // 0x430091D0: lw          $t9, 0x4($s4)
    ctx->r25 = MEM_W(ctx->r20, 0X4);
    // 0x430091D4: nop

    // 0x430091D8: sw          $t9, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r25;
    // 0x430091DC: lw          $at, 0x8($s4)
    ctx->r1 = MEM_W(ctx->r20, 0X8);
    // 0x430091E0: nop

    // 0x430091E4: sw          $at, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r1;
    // 0x430091E8: sw          $v0, 0x40($s2)
    MEM_W(0X40, ctx->r18) = ctx->r2;
    // 0x430091EC: sw          $v0, 0x44($s2)
    MEM_W(0X44, ctx->r18) = ctx->r2;
    // 0x430091F0: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x430091F4: nop

    // 0x430091F8: sw          $at, 0x4C($s2)
    MEM_W(0X4C, ctx->r18) = ctx->r1;
    // 0x430091FC: lw          $t7, 0x4($t8)
    ctx->r15 = MEM_W(ctx->r24, 0X4);
    // 0x43009200: nop

    // 0x43009204: sw          $t7, 0x50($s2)
    MEM_W(0X50, ctx->r18) = ctx->r15;
    // 0x43009208: lw          $at, 0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X8);
    // 0x4300920C: jal         0x43009D28
    // 0x43009210: sw          $at, 0x54($s2)
    MEM_W(0X54, ctx->r18) = ctx->r1;
    ovl_boss_devil_9D28(rdram, ctx);
        goto after_4;
    // 0x43009210: sw          $at, 0x54($s2)
    MEM_W(0X54, ctx->r18) = ctx->r1;
    after_4:
    // 0x43009214: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43009218: lwc1        $f4, -0x4994($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X4994);
    // 0x4300921C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x43009220: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x43009224: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x43009228: swc1        $f6, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->f6.u32l;
    // 0x4300922C: lw          $a1, 0x84($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X84);
    // 0x43009230: jal         0x43008B20
    // 0x43009234: nop

    ovl_boss_devil_8B20(rdram, ctx);
        goto after_5;
    // 0x43009234: nop

    after_5:
    // 0x43009238: lw          $a1, 0x58($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X58);
    // 0x4300923C: lw          $a2, 0x5C($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X5C);
    // 0x43009240: jal         0x43008FF0
    // 0x43009244: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    ovl_boss_devil_8FF0(rdram, ctx);
        goto after_6;
    // 0x43009244: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_6:
    // 0x43009248: lui         $t0, 0x4301
    ctx->r8 = S32(0X4301 << 16);
    // 0x4300924C: lui         $t1, 0x4301
    ctx->r9 = S32(0X4301 << 16);
    // 0x43009250: addiu       $t0, $t0, -0x73E0
    ctx->r8 = ADD32(ctx->r8, -0X73E0);
    // 0x43009254: addiu       $t1, $t1, -0x7120
    ctx->r9 = ADD32(ctx->r9, -0X7120);
    // 0x43009258: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x4300925C: sw          $zero, 0x48($s2)
    MEM_W(0X48, ctx->r18) = 0;
    // 0x43009260: sw          $t0, 0x60($s2)
    MEM_W(0X60, ctx->r18) = ctx->r8;
    // 0x43009264: sw          $t1, 0x64($s2)
    MEM_W(0X64, ctx->r18) = ctx->r9;
    // 0x43009268: sw          $zero, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = 0;
    // 0x4300926C: addiu       $a0, $a0, -0x7178
    ctx->r4 = ADD32(ctx->r4, -0X7178);
    // 0x43009270: jal         0x4300AC30
    // 0x43009274: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    ovl_boss_devil_AC30(rdram, ctx);
        goto after_7;
    // 0x43009274: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_7:
    // 0x43009278: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x4300927C: sw          $v0, 0x68($s2)
    MEM_W(0X68, ctx->r18) = ctx->r2;
    // 0x43009280: addiu       $a0, $a0, -0x722C
    ctx->r4 = ADD32(ctx->r4, -0X722C);
    // 0x43009284: ori         $a1, $zero, 0xFECF
    ctx->r5 = 0 | 0XFECF;
    // 0x43009288: addiu       $a2, $zero, 0x2000
    ctx->r6 = ADD32(0, 0X2000);
    // 0x4300928C: jal         0x43000820
    // 0x43009290: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_boss_devil_820(rdram, ctx);
        goto after_8;
    // 0x43009290: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_8:
    // 0x43009294: sw          $v0, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->r2;
    // 0x43009298: sw          $s2, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r18;
    // 0x4300929C: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x430092A0: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x430092A4: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x430092A8: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x430092AC: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x430092B0: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x430092B4: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x430092B8: jr          $ra
    // 0x430092BC: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x430092BC: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void ovl_boss_devil_92C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430092C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x430092C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430092C8: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x430092CC: lw          $a2, 0x24($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X24);
    // 0x430092D0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x430092D4: bne         $a1, $at, L_43009308
    if (ctx->r5 != ctx->r1) {
        // 0x430092D8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43009308;
    }
    // 0x430092D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430092DC: lw          $a1, 0x28($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X28);
    // 0x430092E0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x430092E4: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x430092E8: addu        $t7, $a2, $t6
    ctx->r15 = ADD32(ctx->r6, ctx->r14);
    // 0x430092EC: lw          $t8, 0x7C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X7C);
    // 0x430092F0: nop

    // 0x430092F4: beq         $t8, $at, L_43009308
    if (ctx->r24 == ctx->r1) {
        // 0x430092F8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_43009308;
    }
    // 0x430092F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430092FC: jal         0x430093C8
    // 0x43009300: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    ovl_boss_devil_93C8(rdram, ctx);
        goto after_0;
    // 0x43009300: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
    // 0x43009304: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43009308:
    // 0x43009308: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4300930C: jr          $ra
    // 0x43009310: nop

    return;
    // 0x43009310: nop

;}
RECOMP_FUNC void ovl_boss_devil_9314(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43009314: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x43009318: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x4300931C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x43009320: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x43009324: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x43009328: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x4300932C: lw          $t6, 0xB0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XB0);
    // 0x43009330: lw          $v0, 0xAC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XAC);
    // 0x43009334: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43009338: slt         $at, $v0, $t6
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x4300933C: bne         $at, $zero, L_4300934C
    if (ctx->r1 != 0) {
        // 0x43009340: sll         $t7, $v0, 2
        ctx->r15 = S32(ctx->r2 << 2);
            goto L_4300934C;
    }
    // 0x43009340: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x43009344: b           L_430093B8
    // 0x43009348: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_430093B8;
    // 0x43009348: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_4300934C:
    // 0x4300934C: addu        $t8, $s0, $t7
    ctx->r24 = ADD32(ctx->r16, ctx->r15);
    // 0x43009350: lw          $v1, 0x94($t8)
    ctx->r3 = MEM_W(ctx->r24, 0X94);
    // 0x43009354: addiu       $t9, $v0, 0x1
    ctx->r25 = ADD32(ctx->r2, 0X1);
    // 0x43009358: sll         $t0, $v1, 2
    ctx->r8 = S32(ctx->r3 << 2);
    // 0x4300935C: subu        $t0, $t0, $v1
    ctx->r8 = SUB32(ctx->r8, ctx->r3);
    // 0x43009360: sw          $t9, 0xAC($s0)
    MEM_W(0XAC, ctx->r16) = ctx->r25;
    // 0x43009364: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x43009368: addu        $a0, $s0, $t0
    ctx->r4 = ADD32(ctx->r16, ctx->r8);
    // 0x4300936C: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x43009370: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x43009374: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x43009378: jal         0x43009A30
    // 0x4300937C: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    ovl_boss_devil_9A30(rdram, ctx);
        goto after_0;
    // 0x4300937C: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    after_0:
    // 0x43009380: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x43009384: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x43009388: sll         $t1, $v1, 2
    ctx->r9 = S32(ctx->r3 << 2);
    // 0x4300938C: addu        $v0, $s0, $t1
    ctx->r2 = ADD32(ctx->r16, ctx->r9);
    // 0x43009390: swc1        $f4, 0x4C($v0)
    MEM_W(0X4C, ctx->r2) = ctx->f4.u32l;
    // 0x43009394: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x43009398: addiu       $a1, $v0, 0x7C
    ctx->r5 = ADD32(ctx->r2, 0X7C);
    // 0x4300939C: swc1        $f6, 0x64($v0)
    MEM_W(0X64, ctx->r2) = ctx->f6.u32l;
    // 0x430093A0: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x430093A4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x430093A8: addiu       $a0, $zero, 0x36
    ctx->r4 = ADD32(0, 0X36);
    // 0x430093AC: jal         0x43000DC0
    // 0x430093B0: addiu       $a2, $zero, 0x76
    ctx->r6 = ADD32(0, 0X76);
    ovl_boss_devil_DC0(rdram, ctx);
        goto after_1;
    // 0x430093B0: addiu       $a2, $zero, 0x76
    ctx->r6 = ADD32(0, 0X76);
    after_1:
    // 0x430093B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_430093B8:
    // 0x430093B8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x430093BC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x430093C0: jr          $ra
    // 0x430093C4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x430093C4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_boss_devil_93C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430093C8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x430093CC: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x430093D0: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x430093D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430093D8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x430093DC: addu        $v1, $a3, $t7
    ctx->r3 = ADD32(ctx->r7, ctx->r15);
    // 0x430093E0: addiu       $a1, $v1, 0x7C
    ctx->r5 = ADD32(ctx->r3, 0X7C);
    // 0x430093E4: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x430093E8: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    // 0x430093EC: addiu       $a0, $zero, 0x39
    ctx->r4 = ADD32(0, 0X39);
    // 0x430093F0: jal         0x43000DC0
    // 0x430093F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_boss_devil_DC0(rdram, ctx);
        goto after_0;
    // 0x430093F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x430093F8: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x430093FC: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x43009400: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x43009404: sw          $t8, 0x7C($v1)
    MEM_W(0X7C, ctx->r3) = ctx->r24;
    // 0x43009408: lw          $v0, 0xAC($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XAC);
    // 0x4300940C: nop

    // 0x43009410: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x43009414: sw          $v0, 0xAC($a3)
    MEM_W(0XAC, ctx->r7) = ctx->r2;
    // 0x43009418: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x4300941C: sll         $t0, $v0, 2
    ctx->r8 = S32(ctx->r2 << 2);
    // 0x43009420: addu        $t1, $a3, $t0
    ctx->r9 = ADD32(ctx->r7, ctx->r8);
    // 0x43009424: sw          $t9, 0x94($t1)
    MEM_W(0X94, ctx->r9) = ctx->r25;
    // 0x43009428: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4300942C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x43009430: jr          $ra
    // 0x43009434: nop

    return;
    // 0x43009434: nop

;}
RECOMP_FUNC void ovl_boss_devil_9438(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43009438: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x4300943C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x43009440: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x43009444: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x43009448: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x4300944C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x43009450: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x43009454: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x43009458: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x4300945C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x43009460: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
    // 0x43009464: addiu       $s4, $zero, 0x6
    ctx->r20 = ADD32(0, 0X6);
L_43009468:
    // 0x43009468: lw          $t6, 0x7C($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X7C);
    // 0x4300946C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x43009470: beq         $s3, $t6, L_43009480
    if (ctx->r19 == ctx->r14) {
        // 0x43009474: nop
    
            goto L_43009480;
    }
    // 0x43009474: nop

    // 0x43009478: jal         0x430093C8
    // 0x4300947C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    ovl_boss_devil_93C8(rdram, ctx);
        goto after_0;
    // 0x4300947C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
L_43009480:
    // 0x43009480: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x43009484: bne         $s0, $s4, L_43009468
    if (ctx->r16 != ctx->r20) {
        // 0x43009488: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_43009468;
    }
    // 0x43009488: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x4300948C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x43009490: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43009494: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x43009498: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x4300949C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x430094A0: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x430094A4: jr          $ra
    // 0x430094A8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x430094A8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_boss_devil_94AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430094AC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x430094B0: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x430094B4: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x430094B8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x430094BC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x430094C0: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x430094C4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x430094C8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x430094CC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x430094D0: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
L_430094D4:
    // 0x430094D4: lw          $t6, 0x7C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X7C);
    // 0x430094D8: addiu       $a0, $zero, 0x39
    ctx->r4 = ADD32(0, 0X39);
    // 0x430094DC: beq         $s2, $t6, L_430094EC
    if (ctx->r18 == ctx->r14) {
        // 0x430094E0: addiu       $a1, $s0, 0x7C
        ctx->r5 = ADD32(ctx->r16, 0X7C);
            goto L_430094EC;
    }
    // 0x430094E0: addiu       $a1, $s0, 0x7C
    ctx->r5 = ADD32(ctx->r16, 0X7C);
    // 0x430094E4: jal         0x43000DC0
    // 0x430094E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    ovl_boss_devil_DC0(rdram, ctx);
        goto after_0;
    // 0x430094E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
L_430094EC:
    // 0x430094EC: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x430094F0: slti        $at, $s1, 0x18
    ctx->r1 = SIGNED(ctx->r17) < 0X18 ? 1 : 0;
    // 0x430094F4: bne         $at, $zero, L_430094D4
    if (ctx->r1 != 0) {
        // 0x430094F8: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_430094D4;
    }
    // 0x430094F8: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x430094FC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x43009500: or          $s0, $s3, $zero
    ctx->r16 = ctx->r19 | 0;
    // 0x43009504: addiu       $s2, $zero, 0x8
    ctx->r18 = ADD32(0, 0X8);
L_43009508:
    // 0x43009508: lw          $a0, 0xB4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XB4);
    // 0x4300950C: nop

    // 0x43009510: lw          $t9, 0x54($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X54);
    // 0x43009514: nop

    // 0x43009518: jalr        $t9
    // 0x4300951C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x4300951C: nop

    after_1:
    // 0x43009520: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x43009524: bne         $s1, $s2, L_43009508
    if (ctx->r17 != ctx->r18) {
        // 0x43009528: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_43009508;
    }
    // 0x43009528: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x4300952C: jal         0x43000868
    // 0x43009530: nop

    ovl_boss_devil_868(rdram, ctx);
        goto after_2;
    // 0x43009530: nop

    after_2:
    // 0x43009534: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x43009538: nop

    // 0x4300953C: beq         $v0, $a0, L_43009558
    if (ctx->r2 == ctx->r4) {
        // 0x43009540: nop
    
            goto L_43009558;
    }
    // 0x43009540: nop

    // 0x43009544: jal         0x4300082C
    // 0x43009548: nop

    ovl_boss_devil_82C(rdram, ctx);
        goto after_3;
    // 0x43009548: nop

    after_3:
    // 0x4300954C: lw          $a0, 0xC4($s3)
    ctx->r4 = MEM_W(ctx->r19, 0XC4);
    // 0x43009550: jal         0x4300AC88
    // 0x43009554: nop

    ovl_boss_devil_AC88(rdram, ctx);
        goto after_4;
    // 0x43009554: nop

    after_4:
L_43009558:
    // 0x43009558: jal         0x430000F4
    // 0x4300955C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    ovl_boss_devil_F4(rdram, ctx);
        goto after_5;
    // 0x4300955C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_5:
    // 0x43009560: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43009564: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x43009568: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x4300956C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x43009570: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x43009574: jr          $ra
    // 0x43009578: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x43009578: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_boss_devil_957C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300957C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x43009580: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x43009584: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x43009588: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4300958C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x43009590: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x43009594: jal         0x43009D68
    // 0x43009598: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    ovl_boss_devil_9D68(rdram, ctx);
        goto after_0;
    // 0x43009598: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    after_0:
    // 0x4300959C: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x430095A0: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x430095A4: beq         $a3, $zero, L_430095DC
    if (ctx->r7 == 0) {
        // 0x430095A8: nop
    
            goto L_430095DC;
    }
    // 0x430095A8: nop

    // 0x430095AC: swc1        $f4, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f4.u32l;
    // 0x430095B0: lwc1        $f8, 0x0($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X0);
    // 0x430095B4: mtc1        $zero, $f7
    ctx->f_odd[(7 - 1) * 2] = 0;
    // 0x430095B8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x430095BC: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x430095C0: c.eq.d      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.d == ctx->f10.d;
    // 0x430095C4: nop

    // 0x430095C8: bc1f        L_430095DC
    if (!c1cs) {
        // 0x430095CC: nop
    
            goto L_430095DC;
    }
    // 0x430095CC: nop

    // 0x430095D0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x430095D4: b           L_430095F8
    // 0x430095D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_430095F8;
    // 0x430095D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_430095DC:
    // 0x430095DC: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    // 0x430095E0: lwc1        $f14, 0x24($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
    // 0x430095E4: jal         0x43009E34
    // 0x430095E8: nop

    ovl_boss_devil_9E34(rdram, ctx);
        goto after_1;
    // 0x430095E8: nop

    after_1:
    // 0x430095EC: jal         0x4300A1E4
    // 0x430095F0: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    ovl_boss_devil_A1E4(rdram, ctx);
        goto after_2;
    // 0x430095F0: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_2:
    // 0x430095F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_430095F8:
    // 0x430095F8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x430095FC: jr          $ra
    // 0x43009600: nop

    return;
    // 0x43009600: nop

;}
RECOMP_FUNC void ovl_boss_devil_9604(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43009604: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x43009608: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x4300960C: sw          $fp, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r30;
    // 0x43009610: sw          $s7, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r23;
    // 0x43009614: sw          $s6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r22;
    // 0x43009618: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x4300961C: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x43009620: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x43009624: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x43009628: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x4300962C: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x43009630: swc1        $f29, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x43009634: swc1        $f28, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f28.u32l;
    // 0x43009638: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x4300963C: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x43009640: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x43009644: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x43009648: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x4300964C: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x43009650: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x43009654: jal         0x43000868
    // 0x43009658: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    ovl_boss_devil_868(rdram, ctx);
        goto after_0;
    // 0x43009658: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x4300965C: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43009660: lwc1        $f26, -0x4990($at)
    ctx->f26.u32l = MEM_W(ctx->r1, -0X4990);
    // 0x43009664: lui         $at, 0x447F
    ctx->r1 = S32(0X447F << 16);
    // 0x43009668: lui         $fp, 0x4301
    ctx->r30 = S32(0X4301 << 16);
    // 0x4300966C: lui         $s7, 0x4301
    ctx->r23 = S32(0X4301 << 16);
    // 0x43009670: lw          $s3, 0x1C($v0)
    ctx->r19 = MEM_W(ctx->r2, 0X1C);
    // 0x43009674: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x43009678: mtc1        $zero, $f28
    ctx->f28.u32l = 0;
    // 0x4300967C: addiu       $s7, $s7, -0x4980
    ctx->r23 = ADD32(ctx->r23, -0X4980);
    // 0x43009680: addiu       $fp, $fp, -0x4858
    ctx->r30 = ADD32(ctx->r30, -0X4858);
    // 0x43009684: addiu       $s6, $sp, 0x90
    ctx->r22 = ADD32(ctx->r29, 0X90);
    // 0x43009688: addiu       $s5, $zero, -0x1
    ctx->r21 = ADD32(0, -0X1);
    // 0x4300968C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_43009690:
    // 0x43009690: or          $s2, $s3, $zero
    ctx->r18 = ctx->r19 | 0;
L_43009694:
    // 0x43009694: lw          $t6, 0x7C($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X7C);
    // 0x43009698: sll         $t7, $s1, 2
    ctx->r15 = S32(ctx->r17 << 2);
    // 0x4300969C: beq         $s5, $t6, L_43009744
    if (ctx->r21 == ctx->r14) {
        // 0x430096A0: subu        $t7, $t7, $s1
        ctx->r15 = SUB32(ctx->r15, ctx->r17);
            goto L_43009744;
    }
    // 0x430096A0: subu        $t7, $t7, $s1
    ctx->r15 = SUB32(ctx->r15, ctx->r17);
    // 0x430096A4: lwc1        $f20, 0x4C($s2)
    ctx->f20.u32l = MEM_W(ctx->r18, 0X4C);
    // 0x430096A8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x430096AC: lwc1        $f22, 0x64($s2)
    ctx->f22.u32l = MEM_W(ctx->r18, 0X64);
    // 0x430096B0: addu        $s0, $s3, $t7
    ctx->r16 = ADD32(ctx->r19, ctx->r15);
    // 0x430096B4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x430096B8: jal         0x4300ADE0
    // 0x430096BC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    ovl_boss_devil_ADE0(rdram, ctx);
        goto after_1;
    // 0x430096BC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_1:
    // 0x430096C0: mul.s       $f6, $f0, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x430096C4: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x430096C8: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x430096CC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x430096D0: jal         0x4300AFA0
    // 0x430096D4: swc1        $f8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f8.u32l;
    ovl_boss_devil_AFA0(rdram, ctx);
        goto after_2;
    // 0x430096D4: swc1        $f8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f8.u32l;
    after_2:
    // 0x430096D8: mul.s       $f16, $f0, $f22
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x430096DC: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x430096E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x430096E4: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x430096E8: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x430096EC: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    // 0x430096F0: jal         0x4300957C
    // 0x430096F4: swc1        $f18, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f18.u32l;
    ovl_boss_devil_957C(rdram, ctx);
        goto after_3;
    // 0x430096F4: swc1        $f18, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f18.u32l;
    after_3:
    // 0x430096F8: lwc1        $f4, 0x90($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X90);
    // 0x430096FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43009700: c.lt.s      $f24, $f4
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f24.fl < ctx->f4.fl;
    // 0x43009704: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x43009708: bc1f        L_43009730
    if (!c1cs) {
        // 0x4300970C: nop
    
            goto L_43009730;
    }
    // 0x4300970C: nop

    // 0x43009710: jal         0x4300957C
    // 0x43009714: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    ovl_boss_devil_957C(rdram, ctx);
        goto after_4;
    // 0x43009714: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    after_4:
    // 0x43009718: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x4300971C: jal         0x43009FF8
    // 0x43009720: mov.s       $f12, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 26);
    ctx->f12.fl = ctx->f26.fl;
    ovl_boss_devil_9FF8(rdram, ctx);
        goto after_5;
    // 0x43009720: mov.s       $f12, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 26);
    ctx->f12.fl = ctx->f26.fl;
    after_5:
    // 0x43009724: jal         0x4300A1E4
    // 0x43009728: add.s       $f12, $f0, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f20.fl;
    ovl_boss_devil_A1E4(rdram, ctx);
        goto after_6;
    // 0x43009728: add.s       $f12, $f0, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f20.fl;
    after_6:
    // 0x4300972C: swc1        $f0, 0x4C($s2)
    MEM_W(0X4C, ctx->r18) = ctx->f0.u32l;
L_43009730:
    // 0x43009730: addiu       $a0, $zero, 0x37
    ctx->r4 = ADD32(0, 0X37);
    // 0x43009734: addiu       $a1, $s2, 0x7C
    ctx->r5 = ADD32(ctx->r18, 0X7C);
    // 0x43009738: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x4300973C: jal         0x43000DC0
    // 0x43009740: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_boss_devil_DC0(rdram, ctx);
        goto after_7;
    // 0x43009740: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_7:
L_43009744:
    // 0x43009744: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x43009748: slti        $at, $s1, 0x6
    ctx->r1 = SIGNED(ctx->r17) < 0X6 ? 1 : 0;
    // 0x4300974C: bne         $at, $zero, L_43009694
    if (ctx->r1 != 0) {
        // 0x43009750: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_43009694;
    }
    // 0x43009750: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x43009754: lui         $s4, 0x4301
    ctx->r20 = S32(0X4301 << 16);
    // 0x43009758: addiu       $s4, $s4, -0x4BA0
    ctx->r20 = ADD32(ctx->r20, -0X4BA0);
    // 0x4300975C: or          $s2, $s3, $zero
    ctx->r18 = ctx->r19 | 0;
L_43009760:
    // 0x43009760: lw          $s1, 0xB4($s2)
    ctx->r17 = MEM_W(ctx->r18, 0XB4);
    // 0x43009764: lw          $s0, 0xBC($s2)
    ctx->r16 = MEM_W(ctx->r18, 0XBC);
    // 0x43009768: lw          $t9, 0x4C($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X4C);
    // 0x4300976C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x43009770: jalr        $t9
    // 0x43009774: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x43009774: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_8:
    // 0x43009778: lw          $v1, 0x4($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X4);
    // 0x4300977C: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    // 0x43009780: nop

    // 0x43009784: slt         $at, $a0, $v1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x43009788: beq         $at, $zero, L_43009800
    if (ctx->r1 == 0) {
        // 0x4300978C: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_43009800;
    }
    // 0x4300978C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_43009790:
    // 0x43009790: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x43009794: slt         $at, $s0, $v1
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x43009798: bne         $at, $zero, L_430097A4
    if (ctx->r1 != 0) {
        // 0x4300979C: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_430097A4;
    }
    // 0x4300979C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x430097A0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
L_430097A4:
    // 0x430097A4: sll         $t8, $s0, 2
    ctx->r24 = S32(ctx->r16 << 2);
    // 0x430097A8: addu        $t0, $s3, $t8
    ctx->r8 = ADD32(ctx->r19, ctx->r24);
    // 0x430097AC: lw          $t1, 0x7C($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X7C);
    // 0x430097B0: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x430097B4: beq         $s5, $t1, L_430097F8
    if (ctx->r21 == ctx->r9) {
        // 0x430097B8: sll         $t2, $s0, 2
        ctx->r10 = S32(ctx->r16 << 2);
            goto L_430097F8;
    }
    // 0x430097B8: sll         $t2, $s0, 2
    ctx->r10 = S32(ctx->r16 << 2);
    // 0x430097BC: subu        $t2, $t2, $s0
    ctx->r10 = SUB32(ctx->r10, ctx->r16);
    // 0x430097C0: lw          $t9, 0x40($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X40);
    // 0x430097C4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x430097C8: addu        $a1, $s3, $t2
    ctx->r5 = ADD32(ctx->r19, ctx->r10);
    // 0x430097CC: mfc1        $a2, $f28
    ctx->r6 = (int32_t)ctx->f28.u32l;
    // 0x430097D0: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x430097D4: jalr        $t9
    // 0x430097D8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x430097D8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_9:
    // 0x430097DC: lw          $t9, 0x4C($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X4C);
    // 0x430097E0: sw          $s0, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->r16;
    // 0x430097E4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x430097E8: jalr        $t9
    // 0x430097EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_10;
    // 0x430097EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_10:
    // 0x430097F0: b           L_43009800
    // 0x430097F4: nop

        goto L_43009800;
    // 0x430097F4: nop

L_430097F8:
    // 0x430097F8: bne         $at, $zero, L_43009790
    if (ctx->r1 != 0) {
        // 0x430097FC: nop
    
            goto L_43009790;
    }
    // 0x430097FC: nop

L_43009800:
    // 0x43009800: lui         $t3, 0x4301
    ctx->r11 = S32(0X4301 << 16);
    // 0x43009804: addiu       $t3, $t3, -0x4B98
    ctx->r11 = ADD32(ctx->r11, -0X4B98);
    // 0x43009808: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
    // 0x4300980C: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x43009810: bne         $s4, $t3, L_43009760
    if (ctx->r20 != ctx->r11) {
        // 0x43009814: sw          $s0, 0xB8($s2)
        MEM_W(0XB8, ctx->r18) = ctx->r16;
            goto L_43009760;
    }
    // 0x43009814: sw          $s0, 0xB8($s2)
    MEM_W(0XB8, ctx->r18) = ctx->r16;
    // 0x43009818: jal         0x43009B08
    // 0x4300981C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_boss_devil_9B08(rdram, ctx);
        goto after_11;
    // 0x4300981C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_11:
    // 0x43009820: b           L_43009690
    // 0x43009824: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
        goto L_43009690;
    // 0x43009824: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x43009828: nop

    // 0x4300982C: nop

    // 0x43009830: nop

    // 0x43009834: nop

    // 0x43009838: nop

    // 0x4300983C: nop

    // 0x43009840: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x43009844: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x43009848: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x4300984C: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x43009850: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x43009854: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x43009858: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x4300985C: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x43009860: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x43009864: lwc1        $f29, 0x38($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x43009868: lwc1        $f28, 0x3C($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x4300986C: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x43009870: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x43009874: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x43009878: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x4300987C: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x43009880: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x43009884: lw          $s6, 0x58($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X58);
    // 0x43009888: lw          $s7, 0x5C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X5C);
    // 0x4300988C: lw          $fp, 0x60($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X60);
    // 0x43009890: jr          $ra
    // 0x43009894: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    return;
    // 0x43009894: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
;}
RECOMP_FUNC void ovl_boss_devil_9898(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43009898: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4300989C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x430098A0: lw          $t9, 0xD0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0XD0);
    // 0x430098A4: nop

    // 0x430098A8: jalr        $t9
    // 0x430098AC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x430098AC: nop

    after_0:
    // 0x430098B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x430098B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x430098B8: jr          $ra
    // 0x430098BC: nop

    return;
    // 0x430098BC: nop

;}
RECOMP_FUNC void ovl_boss_devil_98C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430098C0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x430098C4: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x430098C8: sw          $s7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r23;
    // 0x430098CC: sw          $s6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r22;
    // 0x430098D0: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x430098D4: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x430098D8: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x430098DC: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x430098E0: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x430098E4: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x430098E8: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x430098EC: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x430098F0: jal         0x430000E8
    // 0x430098F4: addiu       $a0, $zero, 0xD4
    ctx->r4 = ADD32(0, 0XD4);
    ovl_boss_devil_E8(rdram, ctx);
        goto after_0;
    // 0x430098F4: addiu       $a0, $zero, 0xD4
    ctx->r4 = ADD32(0, 0XD4);
    after_0:
    // 0x430098F8: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x430098FC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x43009900: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x43009904: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
L_43009908:
    // 0x43009908: sw          $v1, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->r3;
    // 0x4300990C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x43009910: slti        $at, $v1, 0x6
    ctx->r1 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x43009914: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x43009918: bne         $at, $zero, L_43009908
    if (ctx->r1 != 0) {
        // 0x4300991C: sw          $a1, 0x78($a0)
        MEM_W(0X78, ctx->r4) = ctx->r5;
            goto L_43009908;
    }
    // 0x4300991C: sw          $a1, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->r5;
    // 0x43009920: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x43009924: lui         $s2, 0x4301
    ctx->r18 = S32(0X4301 << 16);
    // 0x43009928: lui         $s1, 0x4301
    ctx->r17 = S32(0X4301 << 16);
    // 0x4300992C: lui         $s7, 0x4301
    ctx->r23 = S32(0X4301 << 16);
    // 0x43009930: lui         $s5, 0x4301
    ctx->r21 = S32(0X4301 << 16);
    // 0x43009934: lui         $s4, 0x4301
    ctx->r20 = S32(0X4301 << 16);
    // 0x43009938: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x4300993C: sw          $zero, 0xAC($v0)
    MEM_W(0XAC, ctx->r2) = 0;
    // 0x43009940: addiu       $s4, $s4, -0x4B94
    ctx->r20 = ADD32(ctx->r20, -0X4B94);
    // 0x43009944: addiu       $s5, $s5, -0x4980
    ctx->r21 = ADD32(ctx->r21, -0X4980);
    // 0x43009948: addiu       $s7, $s7, -0x4B98
    ctx->r23 = ADD32(ctx->r23, -0X4B98);
    // 0x4300994C: addiu       $s1, $s1, -0x4BA0
    ctx->r17 = ADD32(ctx->r17, -0X4BA0);
    // 0x43009950: addiu       $s2, $s2, -0x6D40
    ctx->r18 = ADD32(ctx->r18, -0X6D40);
    // 0x43009954: or          $s0, $s3, $zero
    ctx->r16 = ctx->r19 | 0;
    // 0x43009958: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
L_4300995C:
    // 0x4300995C: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x43009960: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x43009964: jal         0x430053AC
    // 0x43009968: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    ovl_boss_devil_53AC(rdram, ctx);
        goto after_1;
    // 0x43009968: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_1:
    // 0x4300996C: sw          $v0, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r2;
    // 0x43009970: sw          $s3, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r19;
    // 0x43009974: sw          $s2, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->r18;
    // 0x43009978: sw          $s6, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r22;
    // 0x4300997C: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x43009980: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x43009984: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x43009988: bne         $s1, $s7, L_4300995C
    if (ctx->r17 != ctx->r23) {
        // 0x4300998C: sw          $t6, 0xB8($s0)
        MEM_W(0XB8, ctx->r16) = ctx->r14;
            goto L_4300995C;
    }
    // 0x4300998C: sw          $t6, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->r14;
    // 0x43009990: lui         $t8, 0x4301
    ctx->r24 = S32(0X4301 << 16);
    // 0x43009994: lui         $t9, 0x4301
    ctx->r25 = S32(0X4301 << 16);
    // 0x43009998: lui         $t0, 0x4301
    ctx->r8 = S32(0X4301 << 16);
    // 0x4300999C: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x430099A0: addiu       $t8, $t8, -0x6CEC
    ctx->r24 = ADD32(ctx->r24, -0X6CEC);
    // 0x430099A4: addiu       $t9, $t9, -0x6BC8
    ctx->r25 = ADD32(ctx->r25, -0X6BC8);
    // 0x430099A8: addiu       $t0, $t0, -0x6B54
    ctx->r8 = ADD32(ctx->r8, -0X6B54);
    // 0x430099AC: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x430099B0: sw          $t7, 0xB0($s3)
    MEM_W(0XB0, ctx->r19) = ctx->r15;
    // 0x430099B4: sw          $t8, 0xC8($s3)
    MEM_W(0XC8, ctx->r19) = ctx->r24;
    // 0x430099B8: sw          $t9, 0xCC($s3)
    MEM_W(0XCC, ctx->r19) = ctx->r25;
    // 0x430099BC: sw          $t0, 0xD0($s3)
    MEM_W(0XD0, ctx->r19) = ctx->r8;
    // 0x430099C0: addiu       $a0, $a0, -0x6768
    ctx->r4 = ADD32(ctx->r4, -0X6768);
    // 0x430099C4: jal         0x4300AC30
    // 0x430099C8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    ovl_boss_devil_AC30(rdram, ctx);
        goto after_2;
    // 0x430099C8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_2:
    // 0x430099CC: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x430099D0: sw          $v0, 0xC4($s3)
    MEM_W(0XC4, ctx->r19) = ctx->r2;
    // 0x430099D4: addiu       $a0, $a0, -0x69FC
    ctx->r4 = ADD32(ctx->r4, -0X69FC);
    // 0x430099D8: ori         $a1, $zero, 0xFECF
    ctx->r5 = 0 | 0XFECF;
    // 0x430099DC: addiu       $a2, $zero, 0x2000
    ctx->r6 = ADD32(0, 0X2000);
    // 0x430099E0: jal         0x43000820
    // 0x430099E4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_boss_devil_820(rdram, ctx);
        goto after_3;
    // 0x430099E4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x430099E8: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    // 0x430099EC: sw          $s3, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r19;
    // 0x430099F0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x430099F4: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
    // 0x430099F8: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x430099FC: lw          $s7, 0x38($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X38);
    // 0x43009A00: lw          $s6, 0x34($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X34);
    // 0x43009A04: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x43009A08: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x43009A0C: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x43009A10: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x43009A14: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x43009A18: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x43009A1C: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x43009A20: jr          $ra
    // 0x43009A24: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x43009A24: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x43009A28: nop

    // 0x43009A2C: nop

;}
RECOMP_FUNC void ovl_boss_devil_9A30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43009A30: blez        $a2, L_43009A94
    if (SIGNED(ctx->r6) <= 0) {
        // 0x43009A34: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_43009A94;
    }
    // 0x43009A34: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x43009A38: andi        $a3, $a2, 0x3
    ctx->r7 = ctx->r6 & 0X3;
    // 0x43009A3C: beq         $a3, $zero, L_43009A64
    if (ctx->r7 == 0) {
        // 0x43009A40: or          $v1, $a3, $zero
        ctx->r3 = ctx->r7 | 0;
            goto L_43009A64;
    }
    // 0x43009A40: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
L_43009A44:
    // 0x43009A44: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x43009A48: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x43009A4C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x43009A50: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x43009A54: bne         $v1, $v0, L_43009A44
    if (ctx->r3 != ctx->r2) {
        // 0x43009A58: sw          $t6, -0x4($a0)
        MEM_W(-0X4, ctx->r4) = ctx->r14;
            goto L_43009A44;
    }
    // 0x43009A58: sw          $t6, -0x4($a0)
    MEM_W(-0X4, ctx->r4) = ctx->r14;
    // 0x43009A5C: beq         $v0, $a2, L_43009A94
    if (ctx->r2 == ctx->r6) {
        // 0x43009A60: nop
    
            goto L_43009A94;
    }
    // 0x43009A60: nop

L_43009A64:
    // 0x43009A64: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x43009A68: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x43009A6C: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x43009A70: lw          $t8, 0x4($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X4);
    // 0x43009A74: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x43009A78: sw          $t8, -0xC($a0)
    MEM_W(-0XC, ctx->r4) = ctx->r24;
    // 0x43009A7C: lw          $t9, 0x8($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X8);
    // 0x43009A80: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x43009A84: sw          $t9, -0x8($a0)
    MEM_W(-0X8, ctx->r4) = ctx->r25;
    // 0x43009A88: lw          $t0, -0x4($a1)
    ctx->r8 = MEM_W(ctx->r5, -0X4);
    // 0x43009A8C: bne         $v0, $a2, L_43009A64
    if (ctx->r2 != ctx->r6) {
        // 0x43009A90: sw          $t0, -0x4($a0)
        MEM_W(-0X4, ctx->r4) = ctx->r8;
            goto L_43009A64;
    }
    // 0x43009A90: sw          $t0, -0x4($a0)
    MEM_W(-0X4, ctx->r4) = ctx->r8;
L_43009A94:
    // 0x43009A94: jr          $ra
    // 0x43009A98: nop

    return;
    // 0x43009A98: nop

;}
RECOMP_FUNC void ovl_boss_devil_9A9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43009A9C: blez        $a2, L_43009B00
    if (SIGNED(ctx->r6) <= 0) {
        // 0x43009AA0: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_43009B00;
    }
    // 0x43009AA0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x43009AA4: andi        $a3, $a2, 0x3
    ctx->r7 = ctx->r6 & 0X3;
    // 0x43009AA8: beq         $a3, $zero, L_43009AD0
    if (ctx->r7 == 0) {
        // 0x43009AAC: or          $v1, $a3, $zero
        ctx->r3 = ctx->r7 | 0;
            goto L_43009AD0;
    }
    // 0x43009AAC: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
L_43009AB0:
    // 0x43009AB0: lhu         $t6, 0x0($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X0);
    // 0x43009AB4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x43009AB8: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x43009ABC: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x43009AC0: bne         $v1, $v0, L_43009AB0
    if (ctx->r3 != ctx->r2) {
        // 0x43009AC4: sh          $t6, -0x2($a0)
        MEM_H(-0X2, ctx->r4) = ctx->r14;
            goto L_43009AB0;
    }
    // 0x43009AC4: sh          $t6, -0x2($a0)
    MEM_H(-0X2, ctx->r4) = ctx->r14;
    // 0x43009AC8: beq         $v0, $a2, L_43009B00
    if (ctx->r2 == ctx->r6) {
        // 0x43009ACC: nop
    
            goto L_43009B00;
    }
    // 0x43009ACC: nop

L_43009AD0:
    // 0x43009AD0: lhu         $t7, 0x0($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X0);
    // 0x43009AD4: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x43009AD8: sh          $t7, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r15;
    // 0x43009ADC: lhu         $t8, 0x2($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X2);
    // 0x43009AE0: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x43009AE4: sh          $t8, -0x6($a0)
    MEM_H(-0X6, ctx->r4) = ctx->r24;
    // 0x43009AE8: lhu         $t9, 0x4($a1)
    ctx->r25 = MEM_HU(ctx->r5, 0X4);
    // 0x43009AEC: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x43009AF0: sh          $t9, -0x4($a0)
    MEM_H(-0X4, ctx->r4) = ctx->r25;
    // 0x43009AF4: lhu         $t0, -0x2($a1)
    ctx->r8 = MEM_HU(ctx->r5, -0X2);
    // 0x43009AF8: bne         $v0, $a2, L_43009AD0
    if (ctx->r2 != ctx->r6) {
        // 0x43009AFC: sh          $t0, -0x2($a0)
        MEM_H(-0X2, ctx->r4) = ctx->r8;
            goto L_43009AD0;
    }
    // 0x43009AFC: sh          $t0, -0x2($a0)
    MEM_H(-0X2, ctx->r4) = ctx->r8;
L_43009B00:
    // 0x43009B00: jr          $ra
    // 0x43009B04: nop

    return;
    // 0x43009B04: nop

;}
RECOMP_FUNC void ovl_boss_devil_9B08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43009B08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43009B0C: beq         $a0, $zero, L_43009B24
    if (ctx->r4 == 0) {
        // 0x43009B10: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_43009B24;
    }
    // 0x43009B10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43009B14: jal         0x43000850
    // 0x43009B18: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    ovl_boss_devil_850(rdram, ctx);
        goto after_0;
    // 0x43009B18: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    after_0:
    // 0x43009B1C: b           L_43009B30
    // 0x43009B20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43009B30;
    // 0x43009B20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43009B24:
    // 0x43009B24: jal         0x4300085C
    // 0x43009B28: nop

    ovl_boss_devil_85C(rdram, ctx);
        goto after_1;
    // 0x43009B28: nop

    after_1:
    // 0x43009B2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43009B30:
    // 0x43009B30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43009B34: jr          $ra
    // 0x43009B38: nop

    return;
    // 0x43009B38: nop

;}
RECOMP_FUNC void ovl_boss_devil_9B3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43009B3C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x43009B40: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x43009B44: addiu       $t6, $zero, 0x64
    ctx->r14 = ADD32(0, 0X64);
    // 0x43009B48: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x43009B4C: c.lt.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl < ctx->f12.fl;
    // 0x43009B50: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x43009B54: bc1f        L_43009B68
    if (!c1cs) {
        // 0x43009B58: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_43009B68;
    }
    // 0x43009B58: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x43009B5C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x43009B60: b           L_43009B8C
    // 0x43009B64: div.s       $f12, $f14, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = DIV_S(ctx->f14.fl, ctx->f12.fl);
        goto L_43009B8C;
    // 0x43009B64: div.s       $f12, $f14, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = DIV_S(ctx->f14.fl, ctx->f12.fl);
L_43009B68:
    // 0x43009B68: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x43009B6C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x43009B70: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x43009B74: nop

    // 0x43009B78: bc1f        L_43009B8C
    if (!c1cs) {
        // 0x43009B7C: nop
    
            goto L_43009B8C;
    }
    // 0x43009B7C: nop

    // 0x43009B80: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x43009B84: b           L_43009B8C
    // 0x43009B88: div.s       $f12, $f14, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = DIV_S(ctx->f14.fl, ctx->f12.fl);
        goto L_43009B8C;
    // 0x43009B88: div.s       $f12, $f14, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = DIV_S(ctx->f14.fl, ctx->f12.fl);
L_43009B8C:
    // 0x43009B8C: mul.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x43009B90: addiu       $t7, $zero, 0x15
    ctx->r15 = ADD32(0, 0X15);
    // 0x43009B94: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x43009B98: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x43009B9C: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x43009BA0: addiu       $t8, $zero, 0x51
    ctx->r24 = ADD32(0, 0X51);
    // 0x43009BA4: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x43009BA8: mul.s       $f16, $f10, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x43009BAC: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x43009BB0: addiu       $t9, $zero, 0x13
    ctx->r25 = ADD32(0, 0X13);
    // 0x43009BB4: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x43009BB8: div.s       $f2, $f16, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = DIV_S(ctx->f16.fl, ctx->f6.fl);
    // 0x43009BBC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x43009BC0: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x43009BC4: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x43009BC8: mul.s       $f18, $f10, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x43009BCC: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    // 0x43009BD0: addiu       $t0, $zero, 0xD
    ctx->r8 = ADD32(0, 0XD);
    // 0x43009BD4: addiu       $t2, $zero, 0xB
    ctx->r10 = ADD32(0, 0XB);
    // 0x43009BD8: cvt.s.w     $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    ctx->f6.fl = CVT_S_W(ctx->f16.u32l);
    // 0x43009BDC: mul.s       $f4, $f18, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f12.fl);
    // 0x43009BE0: add.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f2.fl;
    // 0x43009BE4: nop

    // 0x43009BE8: div.s       $f2, $f4, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
L_43009BEC:
    // 0x43009BEC: multu       $v1, $v1
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x43009BF0: addiu       $a1, $v1, -0x1
    ctx->r5 = ADD32(ctx->r3, -0X1);
    // 0x43009BF4: mtc1        $a0, $f4
    ctx->f4.u32l = ctx->r4;
    // 0x43009BF8: addiu       $a3, $v1, -0x2
    ctx->r7 = ADD32(ctx->r3, -0X2);
    // 0x43009BFC: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x43009C00: addiu       $t1, $v1, -0x3
    ctx->r9 = ADD32(ctx->r3, -0X3);
    // 0x43009C04: addiu       $v1, $v1, -0x4
    ctx->r3 = ADD32(ctx->r3, -0X4);
    // 0x43009C08: addiu       $a0, $a0, -0x8
    ctx->r4 = ADD32(ctx->r4, -0X8);
    // 0x43009C0C: mflo        $t3
    ctx->r11 = lo;
    // 0x43009C10: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x43009C14: nop

    // 0x43009C18: multu       $a1, $a1
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x43009C1C: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x43009C20: mul.s       $f16, $f18, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f18.fl, ctx->f12.fl);
    // 0x43009C24: add.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f2.fl;
    // 0x43009C28: mul.s       $f6, $f16, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x43009C2C: mflo        $t4
    ctx->r12 = lo;
    // 0x43009C30: div.s       $f2, $f6, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x43009C34: mtc1        $t4, $f18
    ctx->f18.u32l = ctx->r12;
    // 0x43009C38: multu       $a3, $a3
    result = U64(U32(ctx->r7)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x43009C3C: cvt.s.w     $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.fl = CVT_S_W(ctx->f18.u32l);
    // 0x43009C40: mtc1        $a2, $f6
    ctx->f6.u32l = ctx->r6;
    // 0x43009C44: addiu       $a2, $a2, -0x8
    ctx->r6 = ADD32(ctx->r6, -0X8);
    // 0x43009C48: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x43009C4C: mul.s       $f4, $f16, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x43009C50: add.s       $f18, $f10, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x43009C54: mflo        $t5
    ctx->r13 = lo;
    // 0x43009C58: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x43009C5C: mul.s       $f8, $f4, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x43009C60: nop

    // 0x43009C64: div.s       $f2, $f8, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = DIV_S(ctx->f8.fl, ctx->f18.fl);
    // 0x43009C68: multu       $t1, $t1
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x43009C6C: cvt.s.w     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
    // 0x43009C70: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x43009C74: addiu       $t0, $t0, -0x8
    ctx->r8 = ADD32(ctx->r8, -0X8);
    // 0x43009C78: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x43009C7C: cvt.s.w     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.fl = CVT_S_W(ctx->f8.u32l);
    // 0x43009C80: mflo        $t6
    ctx->r14 = lo;
    // 0x43009C84: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x43009C88: mul.s       $f10, $f6, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x43009C8C: add.s       $f16, $f18, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x43009C90: nop

    // 0x43009C94: div.s       $f2, $f10, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x43009C98: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x43009C9C: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x43009CA0: addiu       $t2, $t2, -0x8
    ctx->r10 = ADD32(ctx->r10, -0X8);
    // 0x43009CA4: mul.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f12.fl);
    // 0x43009CA8: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x43009CAC: mul.s       $f18, $f8, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x43009CB0: add.s       $f4, $f16, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f2.fl;
    // 0x43009CB4: bne         $v1, $zero, L_43009BEC
    if (ctx->r3 != 0) {
        // 0x43009CB8: div.s       $f2, $f18, $f4
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
            goto L_43009BEC;
    }
    // 0x43009CB8: div.s       $f2, $f18, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
    // 0x43009CBC: blez        $v0, L_43009CE8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x43009CC0: nop
    
            goto L_43009CE8;
    }
    // 0x43009CC0: nop

    // 0x43009CC4: add.s       $f8, $f14, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f14.fl + ctx->f2.fl;
    // 0x43009CC8: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43009CCC: div.s       $f10, $f12, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f12.fl, ctx->f8.fl);
    // 0x43009CD0: lwc1        $f7, -0x4970($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X4970);
    // 0x43009CD4: lwc1        $f6, -0x496C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X496C);
    // 0x43009CD8: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x43009CDC: sub.d       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f6.d - ctx->f16.d;
    // 0x43009CE0: jr          $ra
    // 0x43009CE4: cvt.s.d     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f0.fl = CVT_S_D(ctx->f18.d);
    return;
    // 0x43009CE4: cvt.s.d     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f0.fl = CVT_S_D(ctx->f18.d);
L_43009CE8:
    // 0x43009CE8: bgez        $v0, L_43009D14
    if (SIGNED(ctx->r2) >= 0) {
        // 0x43009CEC: nop
    
            goto L_43009D14;
    }
    // 0x43009CEC: nop

    // 0x43009CF0: add.s       $f8, $f14, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f14.fl + ctx->f2.fl;
    // 0x43009CF4: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43009CF8: div.s       $f10, $f12, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f12.fl, ctx->f8.fl);
    // 0x43009CFC: lwc1        $f5, -0x4968($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X4968);
    // 0x43009D00: lwc1        $f4, -0x4964($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X4964);
    // 0x43009D04: cvt.d.s     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f6.d = CVT_D_S(ctx->f10.fl);
    // 0x43009D08: sub.d       $f16, $f4, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f16.d = ctx->f4.d - ctx->f6.d;
    // 0x43009D0C: jr          $ra
    // 0x43009D10: cvt.s.d     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f0.fl = CVT_S_D(ctx->f16.d);
    return;
    // 0x43009D10: cvt.s.d     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f0.fl = CVT_S_D(ctx->f16.d);
L_43009D14:
    // 0x43009D14: add.s       $f18, $f14, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f14.fl + ctx->f2.fl;
    // 0x43009D18: nop

    // 0x43009D1C: div.s       $f0, $f12, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = DIV_S(ctx->f12.fl, ctx->f18.fl);
    // 0x43009D20: jr          $ra
    // 0x43009D24: nop

    return;
    // 0x43009D24: nop

;}
