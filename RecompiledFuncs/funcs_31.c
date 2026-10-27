#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8006B9C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006B9C4: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8006B9C8: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x8006B9CC: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x8006B9D0: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x8006B9D4: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x8006B9D8: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x8006B9DC: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x8006B9E0: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x8006B9E4: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x8006B9E8: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x8006B9EC: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x8006B9F0: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8006B9F4: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x8006B9F8: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8006B9FC: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8006BA00: jal         0x8006B624
    // 0x8006BA04: addiu       $s1, $zero, 0x7DC
    ctx->r17 = ADD32(0, 0X7DC);
    func_8006B624(rdram, ctx);
        goto after_0;
    // 0x8006BA04: addiu       $s1, $zero, 0x7DC
    ctx->r17 = ADD32(0, 0X7DC);
    after_0:
    // 0x8006BA08: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x8006BA0C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8006BA10: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8006BA14: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8006BA18: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8006BA1C: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x8006BA20: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8006BA24: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x8006BA28: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8006BA2C: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x8006BA30: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x8006BA34: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x8006BA38: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x8006BA3C: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x8006BA40: jr          $ra
    // 0x8006BA44: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x8006BA44: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_8006BA48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006BA48: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8006BA4C: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x8006BA50: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x8006BA54: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x8006BA58: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x8006BA5C: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x8006BA60: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x8006BA64: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x8006BA68: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x8006BA6C: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x8006BA70: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x8006BA74: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8006BA78: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x8006BA7C: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8006BA80: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8006BA84: jal         0x8006B624
    // 0x8006BA88: addiu       $s1, $zero, 0x7DD
    ctx->r17 = ADD32(0, 0X7DD);
    func_8006B624(rdram, ctx);
        goto after_0;
    // 0x8006BA88: addiu       $s1, $zero, 0x7DD
    ctx->r17 = ADD32(0, 0X7DD);
    after_0:
    // 0x8006BA8C: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x8006BA90: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8006BA94: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8006BA98: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8006BA9C: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8006BAA0: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x8006BAA4: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8006BAA8: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x8006BAAC: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8006BAB0: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x8006BAB4: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x8006BAB8: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x8006BABC: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x8006BAC0: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x8006BAC4: jr          $ra
    // 0x8006BAC8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x8006BAC8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_8006BACC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006BACC: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x8006BAD0: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8006BAD4: sw          $s5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r21;
    // 0x8006BAD8: sw          $s4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r20;
    // 0x8006BADC: sw          $s3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r19;
    // 0x8006BAE0: sw          $s2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r18;
    // 0x8006BAE4: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x8006BAE8: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x8006BAEC: swc1        $f25, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x8006BAF0: swc1        $f24, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f24.u32l;
    // 0x8006BAF4: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8006BAF8: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x8006BAFC: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8006BB00: jal         0x80007774
    // 0x8006BB04: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x8006BB04: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x8006BB08: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8006BB0C: addiu       $t6, $t6, 0x25F0
    ctx->r14 = ADD32(ctx->r14, 0X25F0);
    // 0x8006BB10: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x8006BB14: addiu       $s5, $sp, 0x7C
    ctx->r21 = ADD32(ctx->r29, 0X7C);
    // 0x8006BB18: lw          $s3, 0x1C($v0)
    ctx->r19 = MEM_W(ctx->r2, 0X1C);
    // 0x8006BB1C: sw          $at, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r1;
    // 0x8006BB20: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x8006BB24: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x8006BB28: sw          $t9, 0x4($s5)
    MEM_W(0X4, ctx->r21) = ctx->r25;
    // 0x8006BB2C: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x8006BB30: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8006BB34: sw          $at, 0x8($s5)
    MEM_W(0X8, ctx->r21) = ctx->r1;
    // 0x8006BB38: sw          $t8, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r24;
    // 0x8006BB3C: addiu       $a0, $zero, 0x7A1
    ctx->r4 = ADD32(0, 0X7A1);
    // 0x8006BB40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8006BB44: jal         0x8001D138
    // 0x8006BB48: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x8006BB48: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8006BB4C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x8006BB50: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8006BB54: jal         0x80019164
    // 0x8006BB58: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x8006BB58: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_2:
    // 0x8006BB5C: sw          $s1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r17;
    // 0x8006BB60: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8006BB64: jal         0x8001C468
    // 0x8006BB68: addiu       $a1, $zero, 0x7DE
    ctx->r5 = ADD32(0, 0X7DE);
    func_8001C468(rdram, ctx);
        goto after_3;
    // 0x8006BB68: addiu       $a1, $zero, 0x7DE
    ctx->r5 = ADD32(0, 0X7DE);
    after_3:
    // 0x8006BB6C: lw          $a0, 0x94($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X94);
    // 0x8006BB70: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8006BB74: jal         0x800192E8
    // 0x8006BB78: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800192E8(rdram, ctx);
        goto after_4;
    // 0x8006BB78: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x8006BB7C: lw          $a0, 0x94($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X94);
    // 0x8006BB80: jal         0x80019114
    // 0x8006BB84: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    func_80019114(rdram, ctx);
        goto after_5;
    // 0x8006BB84: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_5:
    // 0x8006BB88: lwc1        $f4, 0x0($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X0);
    // 0x8006BB8C: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x8006BB90: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8006BB94: swc1        $f4, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f4.u32l;
    // 0x8006BB98: lwc1        $f6, 0x4($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0X4);
    // 0x8006BB9C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8006BBA0: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8006BBA4: lwc1        $f24, 0x64E8($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X64E8);
    // 0x8006BBA8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8006BBAC: swc1        $f10, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f10.u32l;
    // 0x8006BBB0: lwc1        $f22, 0x64EC($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X64EC);
    // 0x8006BBB4: lwc1        $f4, 0x8($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X8);
    // 0x8006BBB8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8006BBBC: lwc1        $f20, 0x64F0($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X64F0);
    // 0x8006BBC0: addiu       $s4, $sp, 0x88
    ctx->r20 = ADD32(ctx->r29, 0X88);
    // 0x8006BBC4: addiu       $s2, $zero, 0x1E
    ctx->r18 = ADD32(0, 0X1E);
    // 0x8006BBC8: addiu       $s1, $zero, 0x3C
    ctx->r17 = ADD32(0, 0X3C);
    // 0x8006BBCC: swc1        $f4, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f4.u32l;
L_8006BBD0:
    // 0x8006BBD0: lw          $t7, 0x24($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X24);
    // 0x8006BBD4: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x8006BBD8: andi        $t6, $t7, 0x4000
    ctx->r14 = ctx->r15 & 0X4000;
    // 0x8006BBDC: bne         $t6, $zero, L_8006BC88
    if (ctx->r14 != 0) {
        // 0x8006BBE0: nop
    
            goto L_8006BC88;
    }
    // 0x8006BBE0: nop

    // 0x8006BBE4: bne         $s0, $s1, L_8006BBF0
    if (ctx->r16 != ctx->r17) {
        // 0x8006BBE8: nop
    
            goto L_8006BBF0;
    }
    // 0x8006BBE8: nop

    // 0x8006BBEC: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
L_8006BBF0:
    // 0x8006BBF0: bne         $s0, $s2, L_8006BC08
    if (ctx->r16 != ctx->r18) {
        // 0x8006BBF4: slti        $at, $s0, 0x1E
        ctx->r1 = SIGNED(ctx->r16) < 0X1E ? 1 : 0;
            goto L_8006BC08;
    }
    // 0x8006BBF4: slti        $at, $s0, 0x1E
    ctx->r1 = SIGNED(ctx->r16) < 0X1E ? 1 : 0;
    // 0x8006BBF8: jal         0x8005D1B4
    // 0x8006BBFC: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    func_8005D1B4(rdram, ctx);
        goto after_6;
    // 0x8006BBFC: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_6:
    // 0x8006BC00: sw          $v0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r2;
    // 0x8006BC04: slti        $at, $s0, 0x1E
    ctx->r1 = SIGNED(ctx->r16) < 0X1E ? 1 : 0;
L_8006BC08:
    // 0x8006BC08: beq         $at, $zero, L_8006BC34
    if (ctx->r1 == 0) {
        // 0x8006BC0C: slti        $at, $s0, 0x2D
        ctx->r1 = SIGNED(ctx->r16) < 0X2D ? 1 : 0;
            goto L_8006BC34;
    }
    // 0x8006BC0C: slti        $at, $s0, 0x2D
    ctx->r1 = SIGNED(ctx->r16) < 0X2D ? 1 : 0;
    // 0x8006BC10: lwc1        $f0, 0x84($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X84);
    // 0x8006BC14: lwc1        $f6, 0x80($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X80);
    // 0x8006BC18: add.s       $f0, $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f22.fl;
    // 0x8006BC1C: sub.s       $f8, $f6, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f24.fl;
    // 0x8006BC20: swc1        $f0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f0.u32l;
    // 0x8006BC24: swc1        $f8, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f8.u32l;
    // 0x8006BC28: b           L_8006BC6C
    // 0x8006BC2C: swc1        $f0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f0.u32l;
        goto L_8006BC6C;
    // 0x8006BC2C: swc1        $f0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f0.u32l;
    // 0x8006BC30: slti        $at, $s0, 0x2D
    ctx->r1 = SIGNED(ctx->r16) < 0X2D ? 1 : 0;
L_8006BC34:
    // 0x8006BC34: beq         $at, $zero, L_8006BC54
    if (ctx->r1 == 0) {
        // 0x8006BC38: slti        $at, $s0, 0x3C
        ctx->r1 = SIGNED(ctx->r16) < 0X3C ? 1 : 0;
            goto L_8006BC54;
    }
    // 0x8006BC38: slti        $at, $s0, 0x3C
    ctx->r1 = SIGNED(ctx->r16) < 0X3C ? 1 : 0;
    // 0x8006BC3C: lwc1        $f10, 0x80($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X80);
    // 0x8006BC40: nop

    // 0x8006BC44: add.s       $f4, $f10, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f20.fl;
    // 0x8006BC48: b           L_8006BC6C
    // 0x8006BC4C: swc1        $f4, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f4.u32l;
        goto L_8006BC6C;
    // 0x8006BC4C: swc1        $f4, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f4.u32l;
    // 0x8006BC50: slti        $at, $s0, 0x3C
    ctx->r1 = SIGNED(ctx->r16) < 0X3C ? 1 : 0;
L_8006BC54:
    // 0x8006BC54: beq         $at, $zero, L_8006BC70
    if (ctx->r1 == 0) {
        // 0x8006BC58: lw          $a0, 0x94($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X94);
            goto L_8006BC70;
    }
    // 0x8006BC58: lw          $a0, 0x94($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X94);
    // 0x8006BC5C: lwc1        $f6, 0x80($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X80);
    // 0x8006BC60: nop

    // 0x8006BC64: sub.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f20.fl;
    // 0x8006BC68: swc1        $f8, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f8.u32l;
L_8006BC6C:
    // 0x8006BC6C: lw          $a0, 0x94($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X94);
L_8006BC70:
    // 0x8006BC70: jal         0x80019114
    // 0x8006BC74: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    func_80019114(rdram, ctx);
        goto after_7;
    // 0x8006BC74: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_7:
    // 0x8006BC78: jal         0x80007AB0
    // 0x8006BC7C: nop

    func_80007AB0(rdram, ctx);
        goto after_8;
    // 0x8006BC7C: nop

    after_8:
    // 0x8006BC80: b           L_8006BBD0
    // 0x8006BC84: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
        goto L_8006BBD0;
    // 0x8006BC84: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8006BC88:
    // 0x8006BC88: jal         0x8005D128
    // 0x8006BC8C: addiu       $a0, $sp, 0x74
    ctx->r4 = ADD32(ctx->r29, 0X74);
    func_8005D128(rdram, ctx);
        goto after_9;
    // 0x8006BC8C: addiu       $a0, $sp, 0x74
    ctx->r4 = ADD32(ctx->r29, 0X74);
    after_9:
    // 0x8006BC90: addiu       $s0, $sp, 0x94
    ctx->r16 = ADD32(ctx->r29, 0X94);
    // 0x8006BC94: addiu       $s2, $s0, 0x4
    ctx->r18 = ADD32(ctx->r16, 0X4);
L_8006BC98:
    // 0x8006BC98: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8006BC9C: jal         0x8001C568
    // 0x8006BCA0: nop

    func_8001C568(rdram, ctx);
        goto after_10;
    // 0x8006BCA0: nop

    after_10:
    // 0x8006BCA4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8006BCA8: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x8006BCAC: bne         $at, $zero, L_8006BC98
    if (ctx->r1 != 0) {
        // 0x8006BCB0: nop
    
            goto L_8006BC98;
    }
    // 0x8006BCB0: nop

    // 0x8006BCB4: jal         0x8005CD50
    // 0x8006BCB8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_8005CD50(rdram, ctx);
        goto after_11;
    // 0x8006BCB8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_11:
    // 0x8006BCBC: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8006BCC0: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x8006BCC4: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x8006BCC8: nop

    // 0x8006BCCC: addiu       $t7, $t8, -0x1
    ctx->r15 = ADD32(ctx->r24, -0X1);
    // 0x8006BCD0: jal         0x80007AE0
    // 0x8006BCD4: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    func_80007AE0(rdram, ctx);
        goto after_12;
    // 0x8006BCD4: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    after_12:
    // 0x8006BCD8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8006BCDC: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x8006BCE0: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8006BCE4: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8006BCE8: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8006BCEC: lwc1        $f25, 0x20($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8006BCF0: lwc1        $f24, 0x24($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8006BCF4: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x8006BCF8: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x8006BCFC: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x8006BD00: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x8006BD04: lw          $s4, 0x3C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X3C);
    // 0x8006BD08: lw          $s5, 0x40($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X40);
    // 0x8006BD0C: jr          $ra
    // 0x8006BD10: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    // 0x8006BD10: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void func_8006BD14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006BD14: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x8006BD18: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8006BD1C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8006BD20: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8006BD24: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8006BD28: jal         0x80007774
    // 0x8006BD2C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x8006BD2C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x8006BD30: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8006BD34: addiu       $t6, $t6, 0x25FC
    ctx->r14 = ADD32(ctx->r14, 0X25FC);
    // 0x8006BD38: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x8006BD3C: addiu       $s1, $sp, 0x58
    ctx->r17 = ADD32(ctx->r29, 0X58);
    // 0x8006BD40: lw          $s3, 0x1C($v0)
    ctx->r19 = MEM_W(ctx->r2, 0X1C);
    // 0x8006BD44: sw          $at, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r1;
    // 0x8006BD48: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x8006BD4C: addiu       $a0, $zero, 0x1F9
    ctx->r4 = ADD32(0, 0X1F9);
    // 0x8006BD50: sw          $t9, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r25;
    // 0x8006BD54: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x8006BD58: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8006BD5C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8006BD60: jal         0x8001D138
    // 0x8006BD64: sw          $at, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r1;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x8006BD64: sw          $at, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r1;
    after_1:
    // 0x8006BD68: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8006BD6C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8006BD70: jal         0x80019164
    // 0x8006BD74: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x8006BD74: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_2:
    // 0x8006BD78: sw          $s0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r16;
    // 0x8006BD7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006BD80: jal         0x8001C468
    // 0x8006BD84: addiu       $a1, $zero, 0x1F9
    ctx->r5 = ADD32(0, 0X1F9);
    func_8001C468(rdram, ctx);
        goto after_3;
    // 0x8006BD84: addiu       $a1, $zero, 0x1F9
    ctx->r5 = ADD32(0, 0X1F9);
    after_3:
    // 0x8006BD88: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x8006BD8C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8006BD90: jal         0x800192E8
    // 0x8006BD94: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800192E8(rdram, ctx);
        goto after_4;
    // 0x8006BD94: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x8006BD98: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x8006BD9C: jal         0x80019114
    // 0x8006BDA0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80019114(rdram, ctx);
        goto after_5;
    // 0x8006BDA0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_5:
    // 0x8006BDA4: lw          $t8, 0x24($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X24);
L_8006BDA8:
    // 0x8006BDA8: nop

    // 0x8006BDAC: andi        $t7, $t8, 0x4000
    ctx->r15 = ctx->r24 & 0X4000;
    // 0x8006BDB0: bne         $t7, $zero, L_8006BDCC
    if (ctx->r15 != 0) {
        // 0x8006BDB4: addiu       $s0, $sp, 0x64
        ctx->r16 = ADD32(ctx->r29, 0X64);
            goto L_8006BDCC;
    }
    // 0x8006BDB4: addiu       $s0, $sp, 0x64
    ctx->r16 = ADD32(ctx->r29, 0X64);
    // 0x8006BDB8: jal         0x80007AB0
    // 0x8006BDBC: nop

    func_80007AB0(rdram, ctx);
        goto after_6;
    // 0x8006BDBC: nop

    after_6:
    // 0x8006BDC0: b           L_8006BDA8
    // 0x8006BDC4: lw          $t8, 0x24($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X24);
        goto L_8006BDA8;
    // 0x8006BDC4: lw          $t8, 0x24($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X24);
    // 0x8006BDC8: addiu       $s0, $sp, 0x64
    ctx->r16 = ADD32(ctx->r29, 0X64);
L_8006BDCC:
    // 0x8006BDCC: addiu       $s2, $s0, 0x4
    ctx->r18 = ADD32(ctx->r16, 0X4);
L_8006BDD0:
    // 0x8006BDD0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8006BDD4: jal         0x8001C568
    // 0x8006BDD8: nop

    func_8001C568(rdram, ctx);
        goto after_7;
    // 0x8006BDD8: nop

    after_7:
    // 0x8006BDDC: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8006BDE0: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x8006BDE4: bne         $at, $zero, L_8006BDD0
    if (ctx->r1 != 0) {
        // 0x8006BDE8: nop
    
            goto L_8006BDD0;
    }
    // 0x8006BDE8: nop

    // 0x8006BDEC: jal         0x8005CD50
    // 0x8006BDF0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_8005CD50(rdram, ctx);
        goto after_8;
    // 0x8006BDF0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_8:
    // 0x8006BDF4: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8006BDF8: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x8006BDFC: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x8006BE00: nop

    // 0x8006BE04: addiu       $t8, $t9, -0x1
    ctx->r24 = ADD32(ctx->r25, -0X1);
    // 0x8006BE08: jal         0x80007AE0
    // 0x8006BE0C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    func_80007AE0(rdram, ctx);
        goto after_9;
    // 0x8006BE0C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    after_9:
    // 0x8006BE10: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8006BE14: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8006BE18: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8006BE1C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8006BE20: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8006BE24: jr          $ra
    // 0x8006BE28: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x8006BE28: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_8006BE2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006BE2C: addiu       $sp, $sp, -0x138
    ctx->r29 = ADD32(ctx->r29, -0X138);
    // 0x8006BE30: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x8006BE34: sw          $s7, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r23;
    // 0x8006BE38: sw          $s6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r22;
    // 0x8006BE3C: sw          $s5, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r21;
    // 0x8006BE40: sw          $s4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r20;
    // 0x8006BE44: sw          $s3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r19;
    // 0x8006BE48: sw          $s2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r18;
    // 0x8006BE4C: sw          $s1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r17;
    // 0x8006BE50: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x8006BE54: swc1        $f27, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x8006BE58: swc1        $f26, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f26.u32l;
    // 0x8006BE5C: swc1        $f25, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x8006BE60: swc1        $f24, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f24.u32l;
    // 0x8006BE64: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8006BE68: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x8006BE6C: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8006BE70: jal         0x80007774
    // 0x8006BE74: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x8006BE74: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x8006BE78: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8006BE7C: lw          $s7, 0x1C($v0)
    ctx->r23 = MEM_W(ctx->r2, 0X1C);
    // 0x8006BE80: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x8006BE84: addiu       $a0, $zero, 0x798
    ctx->r4 = ADD32(0, 0X798);
    // 0x8006BE88: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8006BE8C: jal         0x8001D138
    // 0x8006BE90: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x8006BE90: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8006BE94: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8006BE98: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8006BE9C: jal         0x80019164
    // 0x8006BEA0: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x8006BEA0: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    after_2:
    // 0x8006BEA4: sw          $s0, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->r16;
    // 0x8006BEA8: addiu       $a0, $zero, 0x799
    ctx->r4 = ADD32(0, 0X799);
    // 0x8006BEAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8006BEB0: jal         0x8001D138
    // 0x8006BEB4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_3;
    // 0x8006BEB4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x8006BEB8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8006BEBC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8006BEC0: jal         0x80019164
    // 0x8006BEC4: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    func_80019164(rdram, ctx);
        goto after_4;
    // 0x8006BEC4: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    after_4:
    // 0x8006BEC8: lw          $s1, 0x128($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X128);
    // 0x8006BECC: sw          $s0, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->r16;
    // 0x8006BED0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8006BED4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8006BED8: jal         0x80018658
    // 0x8006BEDC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80018658(rdram, ctx);
        goto after_5;
    // 0x8006BEDC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_5:
    // 0x8006BEE0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8006BEE4: jal         0x80018604
    // 0x8006BEE8: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_80018604(rdram, ctx);
        goto after_6;
    // 0x8006BEE8: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_6:
    // 0x8006BEEC: lw          $s0, 0x12C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X12C);
    // 0x8006BEF0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8006BEF4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8006BEF8: jal         0x80018658
    // 0x8006BEFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80018658(rdram, ctx);
        goto after_7;
    // 0x8006BEFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x8006BF00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006BF04: jal         0x80018604
    // 0x8006BF08: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    func_80018604(rdram, ctx);
        goto after_8;
    // 0x8006BF08: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    after_8:
    // 0x8006BF0C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8006BF10: lwc1        $f25, 0x64F8($at)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r1, 0X64F8);
    // 0x8006BF14: lwc1        $f24, 0x64FC($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X64FC);
    // 0x8006BF18: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8006BF1C: addiu       $s6, $zero, 0x2D
    ctx->r22 = ADD32(0, 0X2D);
    // 0x8006BF20: addiu       $s5, $sp, 0x11C
    ctx->r21 = ADD32(ctx->r29, 0X11C);
    // 0x8006BF24: addiu       $s4, $zero, 0xF
    ctx->r20 = ADD32(0, 0XF);
L_8006BF28:
    // 0x8006BF28: lw          $v0, 0x24($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X24);
    // 0x8006BF2C: addiu       $at, $zero, -0x101
    ctx->r1 = ADD32(0, -0X101);
    // 0x8006BF30: andi        $t6, $v0, 0x4000
    ctx->r14 = ctx->r2 & 0X4000;
    // 0x8006BF34: bne         $t6, $zero, L_8006C0E4
    if (ctx->r14 != 0) {
        // 0x8006BF38: andi        $t7, $v0, 0x100
        ctx->r15 = ctx->r2 & 0X100;
            goto L_8006C0E4;
    }
    // 0x8006BF38: andi        $t7, $v0, 0x100
    ctx->r15 = ctx->r2 & 0X100;
    // 0x8006BF3C: beq         $t7, $zero, L_8006BF4C
    if (ctx->r15 == 0) {
        // 0x8006BF40: and         $t8, $v0, $at
        ctx->r24 = ctx->r2 & ctx->r1;
            goto L_8006BF4C;
    }
    // 0x8006BF40: and         $t8, $v0, $at
    ctx->r24 = ctx->r2 & ctx->r1;
    // 0x8006BF44: lwc1        $f26, 0x18($s7)
    ctx->f26.u32l = MEM_W(ctx->r23, 0X18);
    // 0x8006BF48: sw          $t8, 0x24($s7)
    MEM_W(0X24, ctx->r23) = ctx->r24;
L_8006BF4C:
    // 0x8006BF4C: slti        $at, $s2, 0x1E
    ctx->r1 = SIGNED(ctx->r18) < 0X1E ? 1 : 0;
    // 0x8006BF50: beq         $at, $zero, L_8006BFC0
    if (ctx->r1 == 0) {
        // 0x8006BF54: lw          $a0, 0x128($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X128);
            goto L_8006BFC0;
    }
    // 0x8006BF54: lw          $a0, 0x128($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X128);
    // 0x8006BF58: mtc1        $s2, $f4
    ctx->f4.u32l = ctx->r18;
    // 0x8006BF5C: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x8006BF60: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8006BF64: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8006BF68: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8006BF6C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8006BF70: mul.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8006BF74: jal         0x80028C2C
    // 0x8006BF78: sub.s       $f22, $f26, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f22.fl = ctx->f26.fl - ctx->f10.fl;
    func_80028C2C(rdram, ctx);
        goto after_9;
    // 0x8006BF78: sub.s       $f22, $f26, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f22.fl = ctx->f26.fl - ctx->f10.fl;
    after_9:
    // 0x8006BF7C: mul.s       $f4, $f0, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x8006BF80: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8006BF84: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8006BF88: lw          $a0, 0x128($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X128);
    // 0x8006BF8C: add.s       $f20, $f4, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f20.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8006BF90: addiu       $a1, $sp, 0xBC
    ctx->r5 = ADD32(ctx->r29, 0XBC);
    // 0x8006BF94: swc1        $f20, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f20.u32l;
    // 0x8006BF98: swc1        $f20, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f20.u32l;
    // 0x8006BF9C: jal         0x80019114
    // 0x8006BFA0: swc1        $f20, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f20.u32l;
    func_80019114(rdram, ctx);
        goto after_10;
    // 0x8006BFA0: swc1        $f20, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f20.u32l;
    after_10:
    // 0x8006BFA4: lw          $a0, 0x12C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X12C);
    // 0x8006BFA8: swc1        $f20, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f20.u32l;
    // 0x8006BFAC: swc1        $f20, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f20.u32l;
    // 0x8006BFB0: swc1        $f20, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f20.u32l;
    // 0x8006BFB4: jal         0x80019114
    // 0x8006BFB8: addiu       $a1, $sp, 0xA4
    ctx->r5 = ADD32(ctx->r29, 0XA4);
    func_80019114(rdram, ctx);
        goto after_11;
    // 0x8006BFB8: addiu       $a1, $sp, 0xA4
    ctx->r5 = ADD32(ctx->r29, 0XA4);
    after_11:
    // 0x8006BFBC: lw          $a0, 0x128($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X128);
L_8006BFC0:
    // 0x8006BFC0: jal         0x800190CC
    // 0x8006BFC4: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    func_800190CC(rdram, ctx);
        goto after_12;
    // 0x8006BFC4: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_12:
    // 0x8006BFC8: lwc1        $f8, 0x120($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X120);
    // 0x8006BFCC: lw          $a0, 0x128($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X128);
    // 0x8006BFD0: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x8006BFD4: add.d       $f4, $f10, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f24.d); 
    ctx->f4.d = ctx->f10.d + ctx->f24.d;
    // 0x8006BFD8: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x8006BFDC: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x8006BFE0: jal         0x8001913C
    // 0x8006BFE4: swc1        $f6, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->f6.u32l;
    func_8001913C(rdram, ctx);
        goto after_13;
    // 0x8006BFE4: swc1        $f6, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->f6.u32l;
    after_13:
    // 0x8006BFE8: lw          $a0, 0x12C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X12C);
    // 0x8006BFEC: jal         0x8001913C
    // 0x8006BFF0: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    func_8001913C(rdram, ctx);
        goto after_14;
    // 0x8006BFF0: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_14:
    // 0x8006BFF4: slti        $at, $s2, 0x1E
    ctx->r1 = SIGNED(ctx->r18) < 0X1E ? 1 : 0;
    // 0x8006BFF8: bne         $at, $zero, L_8006C0D0
    if (ctx->r1 != 0) {
        // 0x8006BFFC: subu        $s0, $s6, $s2
        ctx->r16 = SUB32(ctx->r22, ctx->r18);
            goto L_8006C0D0;
    }
    // 0x8006BFFC: subu        $s0, $s6, $s2
    ctx->r16 = SUB32(ctx->r22, ctx->r18);
    // 0x8006C000: sll         $s3, $s0, 2
    ctx->r19 = S32(ctx->r16 << 2);
    // 0x8006C004: subu        $s3, $s3, $s0
    ctx->r19 = SUB32(ctx->r19, ctx->r16);
    // 0x8006C008: sll         $s3, $s3, 2
    ctx->r19 = S32(ctx->r19 << 2);
    // 0x8006C00C: addu        $s3, $s3, $s0
    ctx->r19 = ADD32(ctx->r19, ctx->r16);
    // 0x8006C010: sll         $s3, $s3, 2
    ctx->r19 = S32(ctx->r19 << 2);
    // 0x8006C014: lw          $s1, 0x128($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X128);
    // 0x8006C018: subu        $s3, $s3, $s0
    ctx->r19 = SUB32(ctx->r19, ctx->r16);
    // 0x8006C01C: bne         $s4, $s0, L_8006C040
    if (ctx->r20 != ctx->r16) {
        // 0x8006C020: sll         $v0, $s0, 7
        ctx->r2 = S32(ctx->r16 << 7);
            goto L_8006C040;
    }
    // 0x8006C020: sll         $v0, $s0, 7
    ctx->r2 = S32(ctx->r16 << 7);
    // 0x8006C024: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8006C028: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8006C02C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8006C030: jal         0x80018658
    // 0x8006C034: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    func_80018658(rdram, ctx);
        goto after_15;
    // 0x8006C034: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    after_15:
    // 0x8006C038: lw          $v0, 0x5C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X5C);
    // 0x8006C03C: nop

L_8006C040:
    // 0x8006C040: div         $zero, $v0, $s4
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r20))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r20)));
    // 0x8006C044: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8006C048: bne         $s4, $zero, L_8006C054
    if (ctx->r20 != 0) {
        // 0x8006C04C: nop
    
            goto L_8006C054;
    }
    // 0x8006C04C: nop

    // 0x8006C050: break       7
    do_break(2147926096);
L_8006C054:
    // 0x8006C054: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8006C058: bne         $s4, $at, L_8006C06C
    if (ctx->r20 != ctx->r1) {
        // 0x8006C05C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8006C06C;
    }
    // 0x8006C05C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8006C060: bne         $v0, $at, L_8006C06C
    if (ctx->r2 != ctx->r1) {
        // 0x8006C064: nop
    
            goto L_8006C06C;
    }
    // 0x8006C064: nop

    // 0x8006C068: break       6
    do_break(2147926120);
L_8006C06C:
    // 0x8006C06C: mflo        $a1
    ctx->r5 = lo;
    // 0x8006C070: andi        $t9, $a1, 0xFF
    ctx->r25 = ctx->r5 & 0XFF;
    // 0x8006C074: jal         0x80018604
    // 0x8006C078: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    func_80018604(rdram, ctx);
        goto after_16;
    // 0x8006C078: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    after_16:
    // 0x8006C07C: lw          $s1, 0x12C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X12C);
    // 0x8006C080: bne         $s4, $s0, L_8006C094
    if (ctx->r20 != ctx->r16) {
        // 0x8006C084: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_8006C094;
    }
    // 0x8006C084: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8006C088: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8006C08C: jal         0x80018658
    // 0x8006C090: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80018658(rdram, ctx);
        goto after_17;
    // 0x8006C090: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_17:
L_8006C094:
    // 0x8006C094: div         $zero, $s3, $s4
    lo = S32(S64(S32(ctx->r19)) / S64(S32(ctx->r20))); hi = S32(S64(S32(ctx->r19)) % S64(S32(ctx->r20)));
    // 0x8006C098: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8006C09C: bne         $s4, $zero, L_8006C0A8
    if (ctx->r20 != 0) {
        // 0x8006C0A0: nop
    
            goto L_8006C0A8;
    }
    // 0x8006C0A0: nop

    // 0x8006C0A4: break       7
    do_break(2147926180);
L_8006C0A8:
    // 0x8006C0A8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8006C0AC: bne         $s4, $at, L_8006C0C0
    if (ctx->r20 != ctx->r1) {
        // 0x8006C0B0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8006C0C0;
    }
    // 0x8006C0B0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8006C0B4: bne         $s3, $at, L_8006C0C0
    if (ctx->r19 != ctx->r1) {
        // 0x8006C0B8: nop
    
            goto L_8006C0C0;
    }
    // 0x8006C0B8: nop

    // 0x8006C0BC: break       6
    do_break(2147926204);
L_8006C0C0:
    // 0x8006C0C0: mflo        $a1
    ctx->r5 = lo;
    // 0x8006C0C4: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x8006C0C8: jal         0x80018604
    // 0x8006C0CC: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    func_80018604(rdram, ctx);
        goto after_18;
    // 0x8006C0CC: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    after_18:
L_8006C0D0:
    // 0x8006C0D0: jal         0x80007AB0
    // 0x8006C0D4: nop

    func_80007AB0(rdram, ctx);
        goto after_19;
    // 0x8006C0D4: nop

    after_19:
    // 0x8006C0D8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8006C0DC: bne         $s2, $s6, L_8006BF28
    if (ctx->r18 != ctx->r22) {
        // 0x8006C0E0: nop
    
            goto L_8006BF28;
    }
    // 0x8006C0E0: nop

L_8006C0E4:
    // 0x8006C0E4: addiu       $s0, $sp, 0x128
    ctx->r16 = ADD32(ctx->r29, 0X128);
    // 0x8006C0E8: addiu       $s2, $s0, 0x8
    ctx->r18 = ADD32(ctx->r16, 0X8);
L_8006C0EC:
    // 0x8006C0EC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8006C0F0: jal         0x8001C568
    // 0x8006C0F4: nop

    func_8001C568(rdram, ctx);
        goto after_20;
    // 0x8006C0F4: nop

    after_20:
    // 0x8006C0F8: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8006C0FC: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x8006C100: bne         $at, $zero, L_8006C0EC
    if (ctx->r1 != 0) {
        // 0x8006C104: nop
    
            goto L_8006C0EC;
    }
    // 0x8006C104: nop

    // 0x8006C108: jal         0x8005CD50
    // 0x8006C10C: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    func_8005CD50(rdram, ctx);
        goto after_21;
    // 0x8006C10C: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    after_21:
    // 0x8006C110: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8006C114: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x8006C118: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x8006C11C: nop

    // 0x8006C120: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x8006C124: jal         0x80007AE0
    // 0x8006C128: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    func_80007AE0(rdram, ctx);
        goto after_22;
    // 0x8006C128: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    after_22:
    // 0x8006C12C: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x8006C130: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x8006C134: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8006C138: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8006C13C: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8006C140: lwc1        $f25, 0x20($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8006C144: lwc1        $f24, 0x24($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8006C148: lwc1        $f27, 0x28($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x8006C14C: lwc1        $f26, 0x2C($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8006C150: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x8006C154: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x8006C158: lw          $s2, 0x3C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X3C);
    // 0x8006C15C: lw          $s3, 0x40($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X40);
    // 0x8006C160: lw          $s4, 0x44($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X44);
    // 0x8006C164: lw          $s5, 0x48($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X48);
    // 0x8006C168: lw          $s6, 0x4C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X4C);
    // 0x8006C16C: lw          $s7, 0x50($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X50);
    // 0x8006C170: jr          $ra
    // 0x8006C174: addiu       $sp, $sp, 0x138
    ctx->r29 = ADD32(ctx->r29, 0X138);
    return;
    // 0x8006C174: addiu       $sp, $sp, 0x138
    ctx->r29 = ADD32(ctx->r29, 0X138);
;}
RECOMP_FUNC void func_8006C178(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006C178: addiu       $sp, $sp, -0x138
    ctx->r29 = ADD32(ctx->r29, -0X138);
    // 0x8006C17C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8006C180: sw          $s5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r21;
    // 0x8006C184: sw          $s4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r20;
    // 0x8006C188: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x8006C18C: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x8006C190: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x8006C194: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x8006C198: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8006C19C: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x8006C1A0: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8006C1A4: jal         0x80007774
    // 0x8006C1A8: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x8006C1A8: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x8006C1AC: lw          $s5, 0x1C($v0)
    ctx->r21 = MEM_W(ctx->r2, 0X1C);
    // 0x8006C1B0: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x8006C1B4: sw          $t6, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->r14;
    // 0x8006C1B8: addiu       $a0, $zero, 0x7A4
    ctx->r4 = ADD32(0, 0X7A4);
    // 0x8006C1BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8006C1C0: jal         0x8001D138
    // 0x8006C1C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x8006C1C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8006C1C8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8006C1CC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8006C1D0: jal         0x80019164
    // 0x8006C1D4: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x8006C1D4: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_2:
    // 0x8006C1D8: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x8006C1DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006C1E0: addiu       $a1, $sp, 0xEC
    ctx->r5 = ADD32(ctx->r29, 0XEC);
    // 0x8006C1E4: sw          $s0, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->r16;
    // 0x8006C1E8: swc1        $f20, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f20.u32l;
    // 0x8006C1EC: swc1        $f20, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f20.u32l;
    // 0x8006C1F0: jal         0x80019114
    // 0x8006C1F4: swc1        $f20, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f20.u32l;
    func_80019114(rdram, ctx);
        goto after_3;
    // 0x8006C1F4: swc1        $f20, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f20.u32l;
    after_3:
    // 0x8006C1F8: addiu       $a0, $zero, 0x779
    ctx->r4 = ADD32(0, 0X779);
    // 0x8006C1FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8006C200: jal         0x8001D138
    // 0x8006C204: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_4;
    // 0x8006C204: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x8006C208: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8006C20C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8006C210: jal         0x80019164
    // 0x8006C214: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    func_80019164(rdram, ctx);
        goto after_5;
    // 0x8006C214: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_5:
    // 0x8006C218: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006C21C: addiu       $a1, $zero, 0x7CA
    ctx->r5 = ADD32(0, 0X7CA);
    // 0x8006C220: jal         0x8001C468
    // 0x8006C224: sw          $s0, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->r16;
    func_8001C468(rdram, ctx);
        goto after_6;
    // 0x8006C224: sw          $s0, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->r16;
    after_6:
    // 0x8006C228: lw          $a0, 0x12C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X12C);
    // 0x8006C22C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8006C230: jal         0x800192E8
    // 0x8006C234: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800192E8(rdram, ctx);
        goto after_7;
    // 0x8006C234: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_7:
    // 0x8006C238: lw          $a0, 0x12C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X12C);
    // 0x8006C23C: swc1        $f20, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f20.u32l;
    // 0x8006C240: swc1        $f20, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f20.u32l;
    // 0x8006C244: swc1        $f20, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f20.u32l;
    // 0x8006C248: jal         0x80019114
    // 0x8006C24C: addiu       $a1, $sp, 0xC4
    ctx->r5 = ADD32(ctx->r29, 0XC4);
    func_80019114(rdram, ctx);
        goto after_8;
    // 0x8006C24C: addiu       $a1, $sp, 0xC4
    ctx->r5 = ADD32(ctx->r29, 0XC4);
    after_8:
    // 0x8006C250: addiu       $a0, $zero, 0x5A
    ctx->r4 = ADD32(0, 0X5A);
    // 0x8006C254: jal         0x8005D1B4
    // 0x8006C258: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    func_8005D1B4(rdram, ctx);
        goto after_9;
    // 0x8006C258: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_9:
    // 0x8006C25C: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x8006C260: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x8006C264: sw          $v0, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->r2;
    // 0x8006C268: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8006C26C: addiu       $s4, $zero, 0x5
    ctx->r20 = ADD32(0, 0X5);
L_8006C270:
    // 0x8006C270: lw          $t7, 0x24($s5)
    ctx->r15 = MEM_W(ctx->r21, 0X24);
    // 0x8006C274: slti        $at, $s0, 0xC
    ctx->r1 = SIGNED(ctx->r16) < 0XC ? 1 : 0;
    // 0x8006C278: andi        $t8, $t7, 0x4000
    ctx->r24 = ctx->r15 & 0X4000;
    // 0x8006C27C: bne         $t8, $zero, L_8006C3BC
    if (ctx->r24 != 0) {
        // 0x8006C280: addiu       $t9, $s0, 0x1
        ctx->r25 = ADD32(ctx->r16, 0X1);
            goto L_8006C3BC;
    }
    // 0x8006C280: addiu       $t9, $s0, 0x1
    ctx->r25 = ADD32(ctx->r16, 0X1);
    // 0x8006C284: beq         $at, $zero, L_8006C2E4
    if (ctx->r1 == 0) {
        // 0x8006C288: addiu       $at, $zero, 0x8
        ctx->r1 = ADD32(0, 0X8);
            goto L_8006C2E4;
    }
    // 0x8006C288: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x8006C28C: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8006C290: lui         $at, 0x40F0
    ctx->r1 = S32(0X40F0 << 16);
    // 0x8006C294: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8006C298: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8006C29C: nop

    // 0x8006C2A0: mul.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8006C2A4: jal         0x80028C2C
    // 0x8006C2A8: nop

    func_80028C2C(rdram, ctx);
        goto after_10;
    // 0x8006C2A8: nop

    after_10:
    // 0x8006C2AC: mul.s       $f20, $f0, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x8006C2B0: lw          $a0, 0x128($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X128);
    // 0x8006C2B4: addiu       $a1, $sp, 0xAC
    ctx->r5 = ADD32(ctx->r29, 0XAC);
    // 0x8006C2B8: swc1        $f20, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f20.u32l;
    // 0x8006C2BC: swc1        $f20, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f20.u32l;
    // 0x8006C2C0: jal         0x80019114
    // 0x8006C2C4: swc1        $f20, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f20.u32l;
    func_80019114(rdram, ctx);
        goto after_11;
    // 0x8006C2C4: swc1        $f20, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f20.u32l;
    after_11:
    // 0x8006C2C8: lw          $a0, 0x12C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X12C);
    // 0x8006C2CC: swc1        $f20, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f20.u32l;
    // 0x8006C2D0: swc1        $f20, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f20.u32l;
    // 0x8006C2D4: swc1        $f20, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f20.u32l;
    // 0x8006C2D8: jal         0x80019114
    // 0x8006C2DC: addiu       $a1, $sp, 0x94
    ctx->r5 = ADD32(ctx->r29, 0X94);
    func_80019114(rdram, ctx);
        goto after_12;
    // 0x8006C2DC: addiu       $a1, $sp, 0x94
    ctx->r5 = ADD32(ctx->r29, 0X94);
    after_12:
    // 0x8006C2E0: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
L_8006C2E4:
    // 0x8006C2E4: bne         $s0, $at, L_8006C2F4
    if (ctx->r16 != ctx->r1) {
        // 0x8006C2E8: addiu       $s3, $s0, 0x1
        ctx->r19 = ADD32(ctx->r16, 0X1);
            goto L_8006C2F4;
    }
    // 0x8006C2E8: addiu       $s3, $s0, 0x1
    ctx->r19 = ADD32(ctx->r16, 0X1);
    // 0x8006C2EC: jal         0x8005D128
    // 0x8006C2F0: addiu       $a0, $sp, 0x120
    ctx->r4 = ADD32(ctx->r29, 0X120);
    func_8005D128(rdram, ctx);
        goto after_13;
    // 0x8006C2F0: addiu       $a0, $sp, 0x120
    ctx->r4 = ADD32(ctx->r29, 0X120);
    after_13:
L_8006C2F4:
    // 0x8006C2F4: slti        $at, $s0, 0x16
    ctx->r1 = SIGNED(ctx->r16) < 0X16 ? 1 : 0;
    // 0x8006C2F8: bne         $at, $zero, L_8006C3A8
    if (ctx->r1 != 0) {
        // 0x8006C2FC: addiu       $t6, $s0, -0x15
        ctx->r14 = ADD32(ctx->r16, -0X15);
            goto L_8006C3A8;
    }
    // 0x8006C2FC: addiu       $t6, $s0, -0x15
    ctx->r14 = ADD32(ctx->r16, -0X15);
    // 0x8006C300: addiu       $t7, $zero, 0x1B
    ctx->r15 = ADD32(0, 0X1B);
    // 0x8006C304: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x8006C308: subu        $s1, $t7, $s0
    ctx->r17 = SUB32(ctx->r15, ctx->r16);
    // 0x8006C30C: sll         $s2, $s1, 2
    ctx->r18 = S32(ctx->r17 << 2);
    // 0x8006C310: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8006C314: subu        $s2, $s2, $s1
    ctx->r18 = SUB32(ctx->r18, ctx->r17);
    // 0x8006C318: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x8006C31C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8006C320: sll         $s2, $s2, 2
    ctx->r18 = S32(ctx->r18 << 2);
    // 0x8006C324: addu        $s2, $s2, $s1
    ctx->r18 = ADD32(ctx->r18, ctx->r17);
    // 0x8006C328: sll         $s2, $s2, 2
    ctx->r18 = S32(ctx->r18 << 2);
    // 0x8006C32C: mul.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8006C330: jal         0x80028C00
    // 0x8006C334: subu        $s2, $s2, $s1
    ctx->r18 = SUB32(ctx->r18, ctx->r17);
    func_80028C00(rdram, ctx);
        goto after_14;
    // 0x8006C334: subu        $s2, $s2, $s1
    ctx->r18 = SUB32(ctx->r18, ctx->r17);
    after_14:
    // 0x8006C338: mul.s       $f2, $f0, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x8006C33C: lw          $a0, 0x128($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X128);
    // 0x8006C340: addiu       $a1, $sp, 0x7C
    ctx->r5 = ADD32(ctx->r29, 0X7C);
    // 0x8006C344: swc1        $f2, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f2.u32l;
    // 0x8006C348: swc1        $f2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f2.u32l;
    // 0x8006C34C: jal         0x80019114
    // 0x8006C350: swc1        $f2, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f2.u32l;
    func_80019114(rdram, ctx);
        goto after_15;
    // 0x8006C350: swc1        $f2, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f2.u32l;
    after_15:
    // 0x8006C354: lw          $s0, 0x12C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X12C);
    // 0x8006C358: bne         $s4, $s1, L_8006C36C
    if (ctx->r20 != ctx->r17) {
        // 0x8006C35C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8006C36C;
    }
    // 0x8006C35C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006C360: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8006C364: jal         0x80018658
    // 0x8006C368: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80018658(rdram, ctx);
        goto after_16;
    // 0x8006C368: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_16:
L_8006C36C:
    // 0x8006C36C: div         $zero, $s2, $s4
    lo = S32(S64(S32(ctx->r18)) / S64(S32(ctx->r20))); hi = S32(S64(S32(ctx->r18)) % S64(S32(ctx->r20)));
    // 0x8006C370: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006C374: bne         $s4, $zero, L_8006C380
    if (ctx->r20 != 0) {
        // 0x8006C378: nop
    
            goto L_8006C380;
    }
    // 0x8006C378: nop

    // 0x8006C37C: break       7
    do_break(2147926908);
L_8006C380:
    // 0x8006C380: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8006C384: bne         $s4, $at, L_8006C398
    if (ctx->r20 != ctx->r1) {
        // 0x8006C388: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8006C398;
    }
    // 0x8006C388: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8006C38C: bne         $s2, $at, L_8006C398
    if (ctx->r18 != ctx->r1) {
        // 0x8006C390: nop
    
            goto L_8006C398;
    }
    // 0x8006C390: nop

    // 0x8006C394: break       6
    do_break(2147926932);
L_8006C398:
    // 0x8006C398: mflo        $a1
    ctx->r5 = lo;
    // 0x8006C39C: andi        $t8, $a1, 0xFF
    ctx->r24 = ctx->r5 & 0XFF;
    // 0x8006C3A0: jal         0x80018604
    // 0x8006C3A4: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    func_80018604(rdram, ctx);
        goto after_17;
    // 0x8006C3A4: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    after_17:
L_8006C3A8:
    // 0x8006C3A8: jal         0x80007AB0
    // 0x8006C3AC: nop

    func_80007AB0(rdram, ctx);
        goto after_18;
    // 0x8006C3AC: nop

    after_18:
    // 0x8006C3B0: addiu       $at, $zero, 0x1B
    ctx->r1 = ADD32(0, 0X1B);
    // 0x8006C3B4: bne         $s3, $at, L_8006C270
    if (ctx->r19 != ctx->r1) {
        // 0x8006C3B8: or          $s0, $s3, $zero
        ctx->r16 = ctx->r19 | 0;
            goto L_8006C270;
    }
    // 0x8006C3B8: or          $s0, $s3, $zero
    ctx->r16 = ctx->r19 | 0;
L_8006C3BC:
    // 0x8006C3BC: jal         0x8005D128
    // 0x8006C3C0: addiu       $a0, $sp, 0x120
    ctx->r4 = ADD32(ctx->r29, 0X120);
    func_8005D128(rdram, ctx);
        goto after_19;
    // 0x8006C3C0: addiu       $a0, $sp, 0x120
    ctx->r4 = ADD32(ctx->r29, 0X120);
    after_19:
    // 0x8006C3C4: addiu       $s0, $sp, 0x128
    ctx->r16 = ADD32(ctx->r29, 0X128);
    // 0x8006C3C8: addiu       $s2, $s0, 0x8
    ctx->r18 = ADD32(ctx->r16, 0X8);
L_8006C3CC:
    // 0x8006C3CC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8006C3D0: jal         0x8001C568
    // 0x8006C3D4: nop

    func_8001C568(rdram, ctx);
        goto after_20;
    // 0x8006C3D4: nop

    after_20:
    // 0x8006C3D8: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8006C3DC: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x8006C3E0: bne         $at, $zero, L_8006C3CC
    if (ctx->r1 != 0) {
        // 0x8006C3E4: nop
    
            goto L_8006C3CC;
    }
    // 0x8006C3E4: nop

    // 0x8006C3E8: jal         0x8005CD50
    // 0x8006C3EC: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_8005CD50(rdram, ctx);
        goto after_21;
    // 0x8006C3EC: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_21:
    // 0x8006C3F0: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8006C3F4: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x8006C3F8: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8006C3FC: nop

    // 0x8006C400: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8006C404: jal         0x80007AE0
    // 0x8006C408: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    func_80007AE0(rdram, ctx);
        goto after_22;
    // 0x8006C408: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    after_22:
    // 0x8006C40C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8006C410: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x8006C414: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8006C418: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8006C41C: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8006C420: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x8006C424: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x8006C428: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x8006C42C: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x8006C430: lw          $s4, 0x34($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X34);
    // 0x8006C434: lw          $s5, 0x38($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X38);
    // 0x8006C438: jr          $ra
    // 0x8006C43C: addiu       $sp, $sp, 0x138
    ctx->r29 = ADD32(ctx->r29, 0X138);
    return;
    // 0x8006C43C: addiu       $sp, $sp, 0x138
    ctx->r29 = ADD32(ctx->r29, 0X138);
;}
RECOMP_FUNC void func_8006C440(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006C440: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x8006C444: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8006C448: sw          $s5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r21;
    // 0x8006C44C: sw          $s4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r20;
    // 0x8006C450: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x8006C454: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x8006C458: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x8006C45C: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x8006C460: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8006C464: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x8006C468: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8006C46C: jal         0x80007774
    // 0x8006C470: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x8006C470: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x8006C474: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8006C478: addiu       $t6, $t6, 0x2608
    ctx->r14 = ADD32(ctx->r14, 0X2608);
    // 0x8006C47C: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x8006C480: addiu       $s5, $sp, 0x70
    ctx->r21 = ADD32(ctx->r29, 0X70);
    // 0x8006C484: lw          $s1, 0x1C($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X1C);
    // 0x8006C488: sw          $at, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r1;
    // 0x8006C48C: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x8006C490: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8006C494: sw          $t9, 0x4($s5)
    MEM_W(0X4, ctx->r21) = ctx->r25;
    // 0x8006C498: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x8006C49C: addiu       $a0, $zero, 0x7A3
    ctx->r4 = ADD32(0, 0X7A3);
    // 0x8006C4A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8006C4A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8006C4A8: jal         0x8001D138
    // 0x8006C4AC: sw          $at, 0x8($s5)
    MEM_W(0X8, ctx->r21) = ctx->r1;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x8006C4AC: sw          $at, 0x8($s5)
    MEM_W(0X8, ctx->r21) = ctx->r1;
    after_1:
    // 0x8006C4B0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8006C4B4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8006C4B8: jal         0x80019164
    // 0x8006C4BC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x8006C4BC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_2:
    // 0x8006C4C0: sw          $s0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r16;
    // 0x8006C4C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006C4C8: jal         0x8001C468
    // 0x8006C4CC: addiu       $a1, $zero, 0x7E0
    ctx->r5 = ADD32(0, 0X7E0);
    func_8001C468(rdram, ctx);
        goto after_3;
    // 0x8006C4CC: addiu       $a1, $zero, 0x7E0
    ctx->r5 = ADD32(0, 0X7E0);
    after_3:
    // 0x8006C4D0: lw          $a0, 0x7C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X7C);
    // 0x8006C4D4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8006C4D8: jal         0x800192E8
    // 0x8006C4DC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800192E8(rdram, ctx);
        goto after_4;
    // 0x8006C4DC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x8006C4E0: lw          $a0, 0x7C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X7C);
    // 0x8006C4E4: jal         0x80019114
    // 0x8006C4E8: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    func_80019114(rdram, ctx);
        goto after_5;
    // 0x8006C4E8: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_5:
    // 0x8006C4EC: lui         $at, 0x4110
    ctx->r1 = S32(0X4110 << 16);
    // 0x8006C4F0: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x8006C4F4: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x8006C4F8: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x8006C4FC: addiu       $s4, $zero, -0x401
    ctx->r20 = ADD32(0, -0X401);
    // 0x8006C500: addiu       $s3, $zero, -0x801
    ctx->r19 = ADD32(0, -0X801);
L_8006C504:
    // 0x8006C504: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x8006C508: lw          $a0, 0x7C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X7C);
    // 0x8006C50C: andi        $t8, $v0, 0x200
    ctx->r24 = ctx->r2 & 0X200;
    // 0x8006C510: bne         $t8, $zero, L_8006C520
    if (ctx->r24 != 0) {
        // 0x8006C514: andi        $t7, $v0, 0x4000
        ctx->r15 = ctx->r2 & 0X4000;
            goto L_8006C520;
    }
    // 0x8006C514: andi        $t7, $v0, 0x4000
    ctx->r15 = ctx->r2 & 0X4000;
    // 0x8006C518: beq         $t7, $zero, L_8006C528
    if (ctx->r15 == 0) {
        // 0x8006C51C: andi        $t6, $v0, 0x400
        ctx->r14 = ctx->r2 & 0X400;
            goto L_8006C528;
    }
    // 0x8006C51C: andi        $t6, $v0, 0x400
    ctx->r14 = ctx->r2 & 0X400;
L_8006C520:
    // 0x8006C520: b           L_8006C5E0
    // 0x8006C524: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
        goto L_8006C5E0;
    // 0x8006C524: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_8006C528:
    // 0x8006C528: beq         $t6, $zero, L_8006C54C
    if (ctx->r14 == 0) {
        // 0x8006C52C: andi        $t7, $v0, 0x800
        ctx->r15 = ctx->r2 & 0X800;
            goto L_8006C54C;
    }
    // 0x8006C52C: andi        $t7, $v0, 0x800
    ctx->r15 = ctx->r2 & 0X800;
    // 0x8006C530: jal         0x8001913C
    // 0x8006C534: addiu       $a1, $s1, 0xC
    ctx->r5 = ADD32(ctx->r17, 0XC);
    func_8001913C(rdram, ctx);
        goto after_6;
    // 0x8006C534: addiu       $a1, $s1, 0xC
    ctx->r5 = ADD32(ctx->r17, 0XC);
    after_6:
    // 0x8006C538: lw          $t9, 0x24($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X24);
    // 0x8006C53C: nop

    // 0x8006C540: and         $v0, $t9, $s4
    ctx->r2 = ctx->r25 & ctx->r20;
    // 0x8006C544: sw          $v0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r2;
    // 0x8006C548: andi        $t7, $v0, 0x800
    ctx->r15 = ctx->r2 & 0X800;
L_8006C54C:
    // 0x8006C54C: beq         $t7, $zero, L_8006C574
    if (ctx->r15 == 0) {
        // 0x8006C550: slti        $at, $s2, 0x5
        ctx->r1 = SIGNED(ctx->r18) < 0X5 ? 1 : 0;
            goto L_8006C574;
    }
    // 0x8006C550: slti        $at, $s2, 0x5
    ctx->r1 = SIGNED(ctx->r18) < 0X5 ? 1 : 0;
    // 0x8006C554: lw          $a0, 0x7C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X7C);
    // 0x8006C558: jal         0x80019164
    // 0x8006C55C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80019164(rdram, ctx);
        goto after_7;
    // 0x8006C55C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_7:
    // 0x8006C560: lw          $t6, 0x24($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X24);
    // 0x8006C564: nop

    // 0x8006C568: and         $t9, $t6, $s3
    ctx->r25 = ctx->r14 & ctx->r19;
    // 0x8006C56C: sw          $t9, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r25;
    // 0x8006C570: slti        $at, $s2, 0x5
    ctx->r1 = SIGNED(ctx->r18) < 0X5 ? 1 : 0;
L_8006C574:
    // 0x8006C574: beq         $at, $zero, L_8006C59C
    if (ctx->r1 == 0) {
        // 0x8006C578: addiu       $t8, $s2, 0x1
        ctx->r24 = ADD32(ctx->r18, 0X1);
            goto L_8006C59C;
    }
    // 0x8006C578: addiu       $t8, $s2, 0x1
    ctx->r24 = ADD32(ctx->r18, 0X1);
    // 0x8006C57C: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x8006C580: nop

    // 0x8006C584: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8006C588: mul.s       $f12, $f6, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x8006C58C: jal         0x80028C2C
    // 0x8006C590: nop

    func_80028C2C(rdram, ctx);
        goto after_8;
    // 0x8006C590: nop

    after_8:
    // 0x8006C594: swc1        $f0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f0.u32l;
    // 0x8006C598: swc1        $f0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f0.u32l;
L_8006C59C:
    // 0x8006C59C: slti        $at, $s2, 0xA
    ctx->r1 = SIGNED(ctx->r18) < 0XA ? 1 : 0;
    // 0x8006C5A0: beq         $at, $zero, L_8006C5C4
    if (ctx->r1 == 0) {
        // 0x8006C5A4: addiu       $s0, $s2, 0x1
        ctx->r16 = ADD32(ctx->r18, 0X1);
            goto L_8006C5C4;
    }
    // 0x8006C5A4: addiu       $s0, $s2, 0x1
    ctx->r16 = ADD32(ctx->r18, 0X1);
    // 0x8006C5A8: mtc1        $s0, $f8
    ctx->f8.u32l = ctx->r16;
    // 0x8006C5AC: nop

    // 0x8006C5B0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8006C5B4: mul.s       $f12, $f10, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f12.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x8006C5B8: jal         0x80028C2C
    // 0x8006C5BC: nop

    func_80028C2C(rdram, ctx);
        goto after_9;
    // 0x8006C5BC: nop

    after_9:
    // 0x8006C5C0: swc1        $f0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f0.u32l;
L_8006C5C4:
    // 0x8006C5C4: lw          $a0, 0x7C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X7C);
    // 0x8006C5C8: jal         0x80019114
    // 0x8006C5CC: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    func_80019114(rdram, ctx);
        goto after_10;
    // 0x8006C5CC: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_10:
    // 0x8006C5D0: jal         0x80007AB0
    // 0x8006C5D4: nop

    func_80007AB0(rdram, ctx);
        goto after_11;
    // 0x8006C5D4: nop

    after_11:
    // 0x8006C5D8: b           L_8006C504
    // 0x8006C5DC: or          $s2, $s0, $zero
    ctx->r18 = ctx->r16 | 0;
        goto L_8006C504;
    // 0x8006C5DC: or          $s2, $s0, $zero
    ctx->r18 = ctx->r16 | 0;
L_8006C5E0:
    // 0x8006C5E0: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x8006C5E4: lw          $a0, 0x7C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X7C);
    // 0x8006C5E8: andi        $t7, $v0, 0x4000
    ctx->r15 = ctx->r2 & 0X4000;
    // 0x8006C5EC: bne         $t7, $zero, L_8006C6A8
    if (ctx->r15 != 0) {
        // 0x8006C5F0: andi        $t6, $v0, 0x800
        ctx->r14 = ctx->r2 & 0X800;
            goto L_8006C6A8;
    }
    // 0x8006C5F0: andi        $t6, $v0, 0x800
    ctx->r14 = ctx->r2 & 0X800;
    // 0x8006C5F4: beq         $t6, $zero, L_8006C618
    if (ctx->r14 == 0) {
        // 0x8006C5F8: andi        $t7, $v0, 0x400
        ctx->r15 = ctx->r2 & 0X400;
            goto L_8006C618;
    }
    // 0x8006C5F8: andi        $t7, $v0, 0x400
    ctx->r15 = ctx->r2 & 0X400;
    // 0x8006C5FC: jal         0x80019164
    // 0x8006C600: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80019164(rdram, ctx);
        goto after_12;
    // 0x8006C600: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_12:
    // 0x8006C604: lw          $t9, 0x24($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X24);
    // 0x8006C608: nop

    // 0x8006C60C: and         $v0, $t9, $s3
    ctx->r2 = ctx->r25 & ctx->r19;
    // 0x8006C610: sw          $v0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r2;
    // 0x8006C614: andi        $t7, $v0, 0x400
    ctx->r15 = ctx->r2 & 0X400;
L_8006C618:
    // 0x8006C618: beq         $t7, $zero, L_8006C640
    if (ctx->r15 == 0) {
        // 0x8006C61C: slti        $at, $s2, 0x5
        ctx->r1 = SIGNED(ctx->r18) < 0X5 ? 1 : 0;
            goto L_8006C640;
    }
    // 0x8006C61C: slti        $at, $s2, 0x5
    ctx->r1 = SIGNED(ctx->r18) < 0X5 ? 1 : 0;
    // 0x8006C620: lw          $a0, 0x7C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X7C);
    // 0x8006C624: jal         0x8001913C
    // 0x8006C628: addiu       $a1, $s1, 0xC
    ctx->r5 = ADD32(ctx->r17, 0XC);
    func_8001913C(rdram, ctx);
        goto after_13;
    // 0x8006C628: addiu       $a1, $s1, 0xC
    ctx->r5 = ADD32(ctx->r17, 0XC);
    after_13:
    // 0x8006C62C: lw          $t6, 0x24($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X24);
    // 0x8006C630: nop

    // 0x8006C634: and         $t9, $t6, $s4
    ctx->r25 = ctx->r14 & ctx->r20;
    // 0x8006C638: sw          $t9, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r25;
    // 0x8006C63C: slti        $at, $s2, 0x5
    ctx->r1 = SIGNED(ctx->r18) < 0X5 ? 1 : 0;
L_8006C640:
    // 0x8006C640: bne         $at, $zero, L_8006C668
    if (ctx->r1 != 0) {
        // 0x8006C644: addiu       $t8, $s2, -0x4
        ctx->r24 = ADD32(ctx->r18, -0X4);
            goto L_8006C668;
    }
    // 0x8006C644: addiu       $t8, $s2, -0x4
    ctx->r24 = ADD32(ctx->r18, -0X4);
    // 0x8006C648: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x8006C64C: nop

    // 0x8006C650: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8006C654: mul.s       $f12, $f6, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x8006C658: jal         0x80028C00
    // 0x8006C65C: nop

    func_80028C00(rdram, ctx);
        goto after_14;
    // 0x8006C65C: nop

    after_14:
    // 0x8006C660: swc1        $f0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f0.u32l;
    // 0x8006C664: swc1        $f0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f0.u32l;
L_8006C668:
    // 0x8006C668: addiu       $s0, $s2, 0x1
    ctx->r16 = ADD32(ctx->r18, 0X1);
    // 0x8006C66C: mtc1        $s0, $f8
    ctx->f8.u32l = ctx->r16;
    // 0x8006C670: nop

    // 0x8006C674: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8006C678: mul.s       $f12, $f10, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f12.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x8006C67C: jal         0x80028C00
    // 0x8006C680: nop

    func_80028C00(rdram, ctx);
        goto after_15;
    // 0x8006C680: nop

    after_15:
    // 0x8006C684: lw          $a0, 0x7C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X7C);
    // 0x8006C688: swc1        $f0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f0.u32l;
    // 0x8006C68C: jal         0x80019114
    // 0x8006C690: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    func_80019114(rdram, ctx);
        goto after_16;
    // 0x8006C690: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_16:
    // 0x8006C694: jal         0x80007AB0
    // 0x8006C698: nop

    func_80007AB0(rdram, ctx);
        goto after_17;
    // 0x8006C698: nop

    after_17:
    // 0x8006C69C: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x8006C6A0: bne         $s0, $at, L_8006C5E0
    if (ctx->r16 != ctx->r1) {
        // 0x8006C6A4: or          $s2, $s0, $zero
        ctx->r18 = ctx->r16 | 0;
            goto L_8006C5E0;
    }
    // 0x8006C6A4: or          $s2, $s0, $zero
    ctx->r18 = ctx->r16 | 0;
L_8006C6A8:
    // 0x8006C6A8: addiu       $s0, $sp, 0x7C
    ctx->r16 = ADD32(ctx->r29, 0X7C);
    // 0x8006C6AC: addiu       $v0, $s0, 0x4
    ctx->r2 = ADD32(ctx->r16, 0X4);
L_8006C6B0:
    // 0x8006C6B0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8006C6B4: jal         0x8001C568
    // 0x8006C6B8: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    func_8001C568(rdram, ctx);
        goto after_18;
    // 0x8006C6B8: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    after_18:
    // 0x8006C6BC: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
    // 0x8006C6C0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8006C6C4: sltu        $at, $s0, $v0
    ctx->r1 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x8006C6C8: bne         $at, $zero, L_8006C6B0
    if (ctx->r1 != 0) {
        // 0x8006C6CC: nop
    
            goto L_8006C6B0;
    }
    // 0x8006C6CC: nop

    // 0x8006C6D0: jal         0x8005CD50
    // 0x8006C6D4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8005CD50(rdram, ctx);
        goto after_19;
    // 0x8006C6D4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_19:
    // 0x8006C6D8: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8006C6DC: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x8006C6E0: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8006C6E4: nop

    // 0x8006C6E8: addiu       $t9, $t6, -0x1
    ctx->r25 = ADD32(ctx->r14, -0X1);
    // 0x8006C6EC: jal         0x80007AE0
    // 0x8006C6F0: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    func_80007AE0(rdram, ctx);
        goto after_20;
    // 0x8006C6F0: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    after_20:
    // 0x8006C6F4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8006C6F8: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x8006C6FC: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8006C700: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8006C704: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8006C708: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x8006C70C: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x8006C710: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x8006C714: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x8006C718: lw          $s4, 0x34($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X34);
    // 0x8006C71C: lw          $s5, 0x38($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X38);
    // 0x8006C720: jr          $ra
    // 0x8006C724: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    return;
    // 0x8006C724: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void func_8006C728(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006C728: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x8006C72C: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x8006C730: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x8006C734: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x8006C738: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x8006C73C: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x8006C740: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x8006C744: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x8006C748: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x8006C74C: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x8006C750: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x8006C754: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x8006C758: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x8006C75C: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8006C760: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x8006C764: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8006C768: jal         0x80007774
    // 0x8006C76C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x8006C76C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x8006C770: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8006C774: addiu       $t6, $t6, 0x2614
    ctx->r14 = ADD32(ctx->r14, 0X2614);
    // 0x8006C778: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x8006C77C: addiu       $s6, $sp, 0x88
    ctx->r22 = ADD32(ctx->r29, 0X88);
    // 0x8006C780: lw          $s2, 0x1C($v0)
    ctx->r18 = MEM_W(ctx->r2, 0X1C);
    // 0x8006C784: sw          $at, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r1;
    // 0x8006C788: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x8006C78C: addiu       $a0, $zero, 0x796
    ctx->r4 = ADD32(0, 0X796);
    // 0x8006C790: sw          $t9, 0x4($s6)
    MEM_W(0X4, ctx->r22) = ctx->r25;
    // 0x8006C794: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x8006C798: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8006C79C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8006C7A0: jal         0x8001D138
    // 0x8006C7A4: sw          $at, 0x8($s6)
    MEM_W(0X8, ctx->r22) = ctx->r1;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x8006C7A4: sw          $at, 0x8($s6)
    MEM_W(0X8, ctx->r22) = ctx->r1;
    after_1:
    // 0x8006C7A8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8006C7AC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8006C7B0: jal         0x80019164
    // 0x8006C7B4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x8006C7B4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_2:
    // 0x8006C7B8: sw          $s0, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r16;
    // 0x8006C7BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006C7C0: jal         0x8001C468
    // 0x8006C7C4: addiu       $a1, $zero, 0x7DF
    ctx->r5 = ADD32(0, 0X7DF);
    func_8001C468(rdram, ctx);
        goto after_3;
    // 0x8006C7C4: addiu       $a1, $zero, 0x7DF
    ctx->r5 = ADD32(0, 0X7DF);
    after_3:
    // 0x8006C7C8: lw          $a0, 0x94($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X94);
    // 0x8006C7CC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8006C7D0: jal         0x800192E8
    // 0x8006C7D4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800192E8(rdram, ctx);
        goto after_4;
    // 0x8006C7D4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x8006C7D8: lw          $a0, 0x94($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X94);
    // 0x8006C7DC: jal         0x80019114
    // 0x8006C7E0: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    func_80019114(rdram, ctx);
        goto after_5;
    // 0x8006C7E0: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    after_5:
    // 0x8006C7E4: lui         $at, 0x41B4
    ctx->r1 = S32(0X41B4 << 16);
    // 0x8006C7E8: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x8006C7EC: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x8006C7F0: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x8006C7F4: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x8006C7F8: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x8006C7FC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8006C800: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x8006C804: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8006C808: addiu       $s5, $zero, 0x7
    ctx->r21 = ADD32(0, 0X7);
    // 0x8006C80C: addiu       $s4, $zero, -0x801
    ctx->r20 = ADD32(0, -0X801);
    // 0x8006C810: addiu       $s3, $zero, -0x401
    ctx->r19 = ADD32(0, -0X401);
L_8006C814:
    // 0x8006C814: lw          $v0, 0x24($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X24);
    // 0x8006C818: lw          $a0, 0x94($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X94);
    // 0x8006C81C: andi        $t8, $v0, 0x4000
    ctx->r24 = ctx->r2 & 0X4000;
    // 0x8006C820: bne         $t8, $zero, L_8006C92C
    if (ctx->r24 != 0) {
        // 0x8006C824: andi        $t7, $v0, 0x400
        ctx->r15 = ctx->r2 & 0X400;
            goto L_8006C92C;
    }
    // 0x8006C824: andi        $t7, $v0, 0x400
    ctx->r15 = ctx->r2 & 0X400;
    // 0x8006C828: beq         $t7, $zero, L_8006C84C
    if (ctx->r15 == 0) {
        // 0x8006C82C: andi        $t8, $v0, 0x800
        ctx->r24 = ctx->r2 & 0X800;
            goto L_8006C84C;
    }
    // 0x8006C82C: andi        $t8, $v0, 0x800
    ctx->r24 = ctx->r2 & 0X800;
    // 0x8006C830: jal         0x8001913C
    // 0x8006C834: addiu       $a1, $s2, 0xC
    ctx->r5 = ADD32(ctx->r18, 0XC);
    func_8001913C(rdram, ctx);
        goto after_6;
    // 0x8006C834: addiu       $a1, $s2, 0xC
    ctx->r5 = ADD32(ctx->r18, 0XC);
    after_6:
    // 0x8006C838: lw          $t6, 0x24($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X24);
    // 0x8006C83C: nop

    // 0x8006C840: and         $v0, $t6, $s3
    ctx->r2 = ctx->r14 & ctx->r19;
    // 0x8006C844: sw          $v0, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r2;
    // 0x8006C848: andi        $t8, $v0, 0x800
    ctx->r24 = ctx->r2 & 0X800;
L_8006C84C:
    // 0x8006C84C: beq         $t8, $zero, L_8006C874
    if (ctx->r24 == 0) {
        // 0x8006C850: slti        $at, $s0, 0x3
        ctx->r1 = SIGNED(ctx->r16) < 0X3 ? 1 : 0;
            goto L_8006C874;
    }
    // 0x8006C850: slti        $at, $s0, 0x3
    ctx->r1 = SIGNED(ctx->r16) < 0X3 ? 1 : 0;
    // 0x8006C854: lw          $a0, 0x94($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X94);
    // 0x8006C858: jal         0x80019164
    // 0x8006C85C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_80019164(rdram, ctx);
        goto after_7;
    // 0x8006C85C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_7:
    // 0x8006C860: lw          $t7, 0x24($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X24);
    // 0x8006C864: nop

    // 0x8006C868: and         $t6, $t7, $s4
    ctx->r14 = ctx->r15 & ctx->r20;
    // 0x8006C86C: sw          $t6, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r14;
    // 0x8006C870: slti        $at, $s0, 0x3
    ctx->r1 = SIGNED(ctx->r16) < 0X3 ? 1 : 0;
L_8006C874:
    // 0x8006C874: beq         $at, $zero, L_8006C8A4
    if (ctx->r1 == 0) {
        // 0x8006C878: addiu       $t9, $s0, -0x2
        ctx->r25 = ADD32(ctx->r16, -0X2);
            goto L_8006C8A4;
    }
    // 0x8006C878: addiu       $t9, $s0, -0x2
    ctx->r25 = ADD32(ctx->r16, -0X2);
    // 0x8006C87C: addiu       $s1, $s0, 0x1
    ctx->r17 = ADD32(ctx->r16, 0X1);
    // 0x8006C880: mtc1        $s1, $f4
    ctx->f4.u32l = ctx->r17;
    // 0x8006C884: nop

    // 0x8006C888: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8006C88C: mul.s       $f12, $f6, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x8006C890: jal         0x80028C2C
    // 0x8006C894: nop

    func_80028C2C(rdram, ctx);
        goto after_8;
    // 0x8006C894: nop

    after_8:
    // 0x8006C898: swc1        $f0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f0.u32l;
    // 0x8006C89C: b           L_8006C8C8
    // 0x8006C8A0: swc1        $f0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f0.u32l;
        goto L_8006C8C8;
    // 0x8006C8A0: swc1        $f0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f0.u32l;
L_8006C8A4:
    // 0x8006C8A4: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x8006C8A8: nop

    // 0x8006C8AC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8006C8B0: mul.s       $f12, $f10, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f12.fl = MUL_S(ctx->f10.fl, ctx->f26.fl);
    // 0x8006C8B4: jal         0x80028C00
    // 0x8006C8B8: nop

    func_80028C00(rdram, ctx);
        goto after_9;
    // 0x8006C8B8: nop

    after_9:
    // 0x8006C8BC: swc1        $f0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f0.u32l;
    // 0x8006C8C0: swc1        $f0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f0.u32l;
    // 0x8006C8C4: addiu       $s1, $s0, 0x1
    ctx->r17 = ADD32(ctx->r16, 0X1);
L_8006C8C8:
    // 0x8006C8C8: slti        $at, $s0, 0x5
    ctx->r1 = SIGNED(ctx->r16) < 0X5 ? 1 : 0;
    // 0x8006C8CC: beq         $at, $zero, L_8006C8F4
    if (ctx->r1 == 0) {
        // 0x8006C8D0: addiu       $t8, $s0, -0x4
        ctx->r24 = ADD32(ctx->r16, -0X4);
            goto L_8006C8F4;
    }
    // 0x8006C8D0: addiu       $t8, $s0, -0x4
    ctx->r24 = ADD32(ctx->r16, -0X4);
    // 0x8006C8D4: mtc1        $s1, $f4
    ctx->f4.u32l = ctx->r17;
    // 0x8006C8D8: nop

    // 0x8006C8DC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8006C8E0: mul.s       $f12, $f6, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f12.fl = MUL_S(ctx->f6.fl, ctx->f22.fl);
    // 0x8006C8E4: jal         0x80028C2C
    // 0x8006C8E8: nop

    func_80028C2C(rdram, ctx);
        goto after_10;
    // 0x8006C8E8: nop

    after_10:
    // 0x8006C8EC: b           L_8006C910
    // 0x8006C8F0: swc1        $f0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f0.u32l;
        goto L_8006C910;
    // 0x8006C8F0: swc1        $f0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f0.u32l;
L_8006C8F4:
    // 0x8006C8F4: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x8006C8F8: nop

    // 0x8006C8FC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8006C900: mul.s       $f12, $f10, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f12.fl = MUL_S(ctx->f10.fl, ctx->f24.fl);
    // 0x8006C904: jal         0x80028C00
    // 0x8006C908: nop

    func_80028C00(rdram, ctx);
        goto after_11;
    // 0x8006C908: nop

    after_11:
    // 0x8006C90C: swc1        $f0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f0.u32l;
L_8006C910:
    // 0x8006C910: lw          $a0, 0x94($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X94);
    // 0x8006C914: jal         0x80019114
    // 0x8006C918: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    func_80019114(rdram, ctx);
        goto after_12;
    // 0x8006C918: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    after_12:
    // 0x8006C91C: jal         0x80007AB0
    // 0x8006C920: nop

    func_80007AB0(rdram, ctx);
        goto after_13;
    // 0x8006C920: nop

    after_13:
    // 0x8006C924: bne         $s1, $s5, L_8006C814
    if (ctx->r17 != ctx->r21) {
        // 0x8006C928: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_8006C814;
    }
    // 0x8006C928: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
L_8006C92C:
    // 0x8006C92C: addiu       $s0, $sp, 0x94
    ctx->r16 = ADD32(ctx->r29, 0X94);
    // 0x8006C930: addiu       $s3, $s0, 0x4
    ctx->r19 = ADD32(ctx->r16, 0X4);
L_8006C934:
    // 0x8006C934: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8006C938: jal         0x8001C568
    // 0x8006C93C: nop

    func_8001C568(rdram, ctx);
        goto after_14;
    // 0x8006C93C: nop

    after_14:
    // 0x8006C940: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8006C944: sltu        $at, $s0, $s3
    ctx->r1 = ctx->r16 < ctx->r19 ? 1 : 0;
    // 0x8006C948: bne         $at, $zero, L_8006C934
    if (ctx->r1 != 0) {
        // 0x8006C94C: nop
    
            goto L_8006C934;
    }
    // 0x8006C94C: nop

    // 0x8006C950: jal         0x8005CD50
    // 0x8006C954: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_8005CD50(rdram, ctx);
        goto after_15;
    // 0x8006C954: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_15:
    // 0x8006C958: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8006C95C: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x8006C960: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8006C964: nop

    // 0x8006C968: addiu       $t9, $t6, -0x1
    ctx->r25 = ADD32(ctx->r14, -0X1);
    // 0x8006C96C: jal         0x80007AE0
    // 0x8006C970: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    func_80007AE0(rdram, ctx);
        goto after_16;
    // 0x8006C970: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    after_16:
    // 0x8006C974: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x8006C978: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8006C97C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8006C980: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8006C984: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8006C988: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x8006C98C: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8006C990: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x8006C994: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8006C998: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x8006C99C: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x8006C9A0: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x8006C9A4: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x8006C9A8: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x8006C9AC: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x8006C9B0: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x8006C9B4: jr          $ra
    // 0x8006C9B8: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    // 0x8006C9B8: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void func_8006C9BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006C9BC: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x8006C9C0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8006C9C4: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8006C9C8: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8006C9CC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8006C9D0: jal         0x80007774
    // 0x8006C9D4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x8006C9D4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x8006C9D8: lw          $s1, 0x1C($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X1C);
    // 0x8006C9DC: addiu       $a0, $zero, 0x79C
    ctx->r4 = ADD32(0, 0X79C);
    // 0x8006C9E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8006C9E4: jal         0x8001D138
    // 0x8006C9E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x8006C9E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8006C9EC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8006C9F0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8006C9F4: jal         0x80019164
    // 0x8006C9F8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x8006C9F8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_2:
    // 0x8006C9FC: sw          $s0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r16;
    // 0x8006CA00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006CA04: jal         0x8001C468
    // 0x8006CA08: addiu       $a1, $zero, 0x7DA
    ctx->r5 = ADD32(0, 0X7DA);
    func_8001C468(rdram, ctx);
        goto after_3;
    // 0x8006CA08: addiu       $a1, $zero, 0x7DA
    ctx->r5 = ADD32(0, 0X7DA);
    after_3:
    // 0x8006CA0C: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x8006CA10: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8006CA14: lw          $a0, 0x6C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X6C);
    // 0x8006CA18: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x8006CA1C: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
    // 0x8006CA20: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    // 0x8006CA24: jal         0x80019114
    // 0x8006CA28: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    func_80019114(rdram, ctx);
        goto after_4;
    // 0x8006CA28: swc1        $f0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f0.u32l;
    after_4:
    // 0x8006CA2C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8006CA30: addiu       $s3, $zero, 0xA
    ctx->r19 = ADD32(0, 0XA);
    // 0x8006CA34: addiu       $s2, $zero, -0x801
    ctx->r18 = ADD32(0, -0X801);
L_8006CA38:
    // 0x8006CA38: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x8006CA3C: lw          $a0, 0x6C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X6C);
    // 0x8006CA40: andi        $t6, $v0, 0x4000
    ctx->r14 = ctx->r2 & 0X4000;
    // 0x8006CA44: bne         $t6, $zero, L_8006CA80
    if (ctx->r14 != 0) {
        // 0x8006CA48: andi        $t7, $v0, 0x800
        ctx->r15 = ctx->r2 & 0X800;
            goto L_8006CA80;
    }
    // 0x8006CA48: andi        $t7, $v0, 0x800
    ctx->r15 = ctx->r2 & 0X800;
    // 0x8006CA4C: beq         $t7, $zero, L_8006CA6C
    if (ctx->r15 == 0) {
        // 0x8006CA50: nop
    
            goto L_8006CA6C;
    }
    // 0x8006CA50: nop

    // 0x8006CA54: jal         0x80019164
    // 0x8006CA58: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80019164(rdram, ctx);
        goto after_5;
    // 0x8006CA58: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_5:
    // 0x8006CA5C: lw          $t8, 0x24($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X24);
    // 0x8006CA60: nop

    // 0x8006CA64: and         $t9, $t8, $s2
    ctx->r25 = ctx->r24 & ctx->r18;
    // 0x8006CA68: sw          $t9, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r25;
L_8006CA6C:
    // 0x8006CA6C: jal         0x80007AB0
    // 0x8006CA70: nop

    func_80007AB0(rdram, ctx);
        goto after_6;
    // 0x8006CA70: nop

    after_6:
    // 0x8006CA74: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8006CA78: bne         $s0, $s3, L_8006CA38
    if (ctx->r16 != ctx->r19) {
        // 0x8006CA7C: nop
    
            goto L_8006CA38;
    }
    // 0x8006CA7C: nop

L_8006CA80:
    // 0x8006CA80: addiu       $s0, $sp, 0x6C
    ctx->r16 = ADD32(ctx->r29, 0X6C);
    // 0x8006CA84: addiu       $s3, $s0, 0x4
    ctx->r19 = ADD32(ctx->r16, 0X4);
L_8006CA88:
    // 0x8006CA88: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8006CA8C: jal         0x8001C568
    // 0x8006CA90: nop

    func_8001C568(rdram, ctx);
        goto after_7;
    // 0x8006CA90: nop

    after_7:
    // 0x8006CA94: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8006CA98: sltu        $at, $s0, $s3
    ctx->r1 = ctx->r16 < ctx->r19 ? 1 : 0;
    // 0x8006CA9C: bne         $at, $zero, L_8006CA88
    if (ctx->r1 != 0) {
        // 0x8006CAA0: nop
    
            goto L_8006CA88;
    }
    // 0x8006CAA0: nop

    // 0x8006CAA4: jal         0x8005CD50
    // 0x8006CAA8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8005CD50(rdram, ctx);
        goto after_8;
    // 0x8006CAA8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_8:
    // 0x8006CAAC: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8006CAB0: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x8006CAB4: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x8006CAB8: nop

    // 0x8006CABC: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x8006CAC0: jal         0x80007AE0
    // 0x8006CAC4: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    func_80007AE0(rdram, ctx);
        goto after_9;
    // 0x8006CAC4: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    after_9:
    // 0x8006CAC8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8006CACC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8006CAD0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8006CAD4: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8006CAD8: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8006CADC: jr          $ra
    // 0x8006CAE0: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x8006CAE0: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_8006CAE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006CAE4: addiu       $sp, $sp, -0xC0
    ctx->r29 = ADD32(ctx->r29, -0XC0);
    // 0x8006CAE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006CAEC: jal         0x80007774
    // 0x8006CAF0: nop

    func_80007774(rdram, ctx);
        goto after_0;
    // 0x8006CAF0: nop

    after_0:
    // 0x8006CAF4: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x8006CAF8: addiu       $t7, $t7, 0x2620
    ctx->r15 = ADD32(ctx->r15, 0X2620);
    // 0x8006CAFC: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x8006CB00: lw          $s1, 0x1C($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X1C);
    // 0x8006CB04: addiu       $t6, $sp, 0x94
    ctx->r14 = ADD32(ctx->r29, 0X94);
    // 0x8006CB08: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x8006CB0C: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x8006CB10: addiu       $t8, $s7, 0x1
    ctx->r24 = ADD32(ctx->r23, 0X1);
    // 0x8006CB14: lw          $t9, 0x4($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X4);
    // 0x8006CB18: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x8006CB1C: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x8006CB20: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8006CB24: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8006CB28: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    // 0x8006CB2C: lw          $t9, 0xC($t7)
    ctx->r25 = MEM_W(ctx->r15, 0XC);
    // 0x8006CB30: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8006CB34: sw          $t9, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->r25;
    // 0x8006CB38: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x8006CB3C: mul.s       $f24, $f6, $f8
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f24.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8006CB40: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x8006CB44: addiu       $s3, $sp, 0xA8
    ctx->r19 = ADD32(ctx->r29, 0XA8);
    // 0x8006CB48: addiu       $s5, $sp, 0xB8
    ctx->r21 = ADD32(ctx->r29, 0XB8);
    // 0x8006CB4C: addiu       $s4, $sp, 0x54
    ctx->r20 = ADD32(ctx->r29, 0X54);
    // 0x8006CB50: addiu       $s2, $sp, 0x88
    ctx->r18 = ADD32(ctx->r29, 0X88);
    // 0x8006CB54: sw          $s1, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r17;
    // 0x8006CB58: lw          $s1, 0xB8($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XB8);
L_8006CB5C:
    // 0x8006CB5C: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
    // 0x8006CB60: jal         0x8005D378
    // 0x8006CB64: mov.s       $f20, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    ctx->f20.fl = ctx->f24.fl;
    func_8005D378(rdram, ctx);
        goto after_1;
    // 0x8006CB64: mov.s       $f20, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    ctx->f20.fl = ctx->f24.fl;
    after_1:
    // 0x8006CB68: addiu       $a0, $zero, 0x79B
    ctx->r4 = ADD32(0, 0X79B);
    // 0x8006CB6C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8006CB70: jal         0x8001D138
    // 0x8006CB74: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_2;
    // 0x8006CB74: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x8006CB78: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8006CB7C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8006CB80: jal         0x80019164
    // 0x8006CB84: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_80019164(rdram, ctx);
        goto after_3;
    // 0x8006CB84: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_3:
    // 0x8006CB88: sw          $s0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r16;
    // 0x8006CB8C: swc1        $f22, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f22.u32l;
    // 0x8006CB90: swc1        $f22, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f22.u32l;
    // 0x8006CB94: swc1        $f22, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f22.u32l;
    // 0x8006CB98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006CB9C: jal         0x80019114
    // 0x8006CBA0: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    func_80019114(rdram, ctx);
        goto after_4;
    // 0x8006CBA0: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_4:
    // 0x8006CBA4: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x8006CBA8: jal         0x800191C0
    // 0x8006CBAC: nop

    func_800191C0(rdram, ctx);
        goto after_5;
    // 0x8006CBAC: nop

    after_5:
    // 0x8006CBB0: lw          $s0, 0x0($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X0);
    // 0x8006CBB4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8006CBB8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8006CBBC: jal         0x80018658
    // 0x8006CBC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80018658(rdram, ctx);
        goto after_6;
    // 0x8006CBC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x8006CBC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006CBC8: jal         0x80018604
    // 0x8006CBCC: addiu       $a1, $zero, 0xCC
    ctx->r5 = ADD32(0, 0XCC);
    func_80018604(rdram, ctx);
        goto after_7;
    // 0x8006CBCC: addiu       $a1, $zero, 0xCC
    ctx->r5 = ADD32(0, 0XCC);
    after_7:
    // 0x8006CBD0: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x8006CBD4: bne         $s3, $s5, L_8006CB5C
    if (ctx->r19 != ctx->r21) {
        // 0x8006CBD8: lw          $s1, 0xB8($sp)
        ctx->r17 = MEM_W(ctx->r29, 0XB8);
            goto L_8006CB5C;
    }
    // 0x8006CBD8: lw          $s1, 0xB8($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XB8);
    // 0x8006CBDC: addiu       $fp, $sp, 0xA4
    ctx->r30 = ADD32(ctx->r29, 0XA4);
    // 0x8006CBE0: lw          $t6, 0xB8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB8);
L_8006CBE4:
    // 0x8006CBE4: nop

    // 0x8006CBE8: lw          $t7, 0x24($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X24);
    // 0x8006CBEC: nop

    // 0x8006CBF0: andi        $t9, $t7, 0x4000
    ctx->r25 = ctx->r15 & 0X4000;
    // 0x8006CBF4: bne         $t9, $zero, L_8006CCB8
    if (ctx->r25 != 0) {
        // 0x8006CBF8: addiu       $s0, $sp, 0xA8
        ctx->r16 = ADD32(ctx->r29, 0XA8);
            goto L_8006CCB8;
    }
    // 0x8006CBF8: addiu       $s0, $sp, 0xA8
    ctx->r16 = ADD32(ctx->r29, 0XA8);
    // 0x8006CBFC: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x8006CC00: addiu       $s4, $sp, 0x94
    ctx->r20 = ADD32(ctx->r29, 0X94);
L_8006CC04:
    // 0x8006CC04: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x8006CC08: addiu       $t8, $sp, 0xA8
    ctx->r24 = ADD32(ctx->r29, 0XA8);
    // 0x8006CC0C: slt         $at, $s6, $v0
    ctx->r1 = SIGNED(ctx->r22) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8006CC10: bne         $at, $zero, L_8006CC80
    if (ctx->r1 != 0) {
        // 0x8006CC14: nop
    
            goto L_8006CC80;
    }
    // 0x8006CC14: nop

    // 0x8006CC18: bne         $s6, $v0, L_8006CC54
    if (ctx->r22 != ctx->r2) {
        // 0x8006CC1C: addu        $s3, $s5, $t8
        ctx->r19 = ADD32(ctx->r21, ctx->r24);
            goto L_8006CC54;
    }
    // 0x8006CC1C: addu        $s3, $s5, $t8
    ctx->r19 = ADD32(ctx->r21, ctx->r24);
    // 0x8006CC20: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x8006CC24: jal         0x800191D4
    // 0x8006CC28: nop

    func_800191D4(rdram, ctx);
        goto after_8;
    // 0x8006CC28: nop

    after_8:
    // 0x8006CC2C: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x8006CC30: jal         0x8001C468
    // 0x8006CC34: addiu       $a1, $zero, 0x7D9
    ctx->r5 = ADD32(0, 0X7D9);
    func_8001C468(rdram, ctx);
        goto after_9;
    // 0x8006CC34: addiu       $a1, $zero, 0x7D9
    ctx->r5 = ADD32(0, 0X7D9);
    after_9:
    // 0x8006CC38: lw          $t6, 0x0($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X0);
    // 0x8006CC3C: lw          $s0, 0x0($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X0);
    // 0x8006CC40: or          $s1, $s7, $zero
    ctx->r17 = ctx->r23 | 0;
    // 0x8006CC44: jal         0x8005D528
    // 0x8006CC48: subu        $s2, $s6, $t6
    ctx->r18 = SUB32(ctx->r22, ctx->r14);
    func_8005D528(rdram, ctx);
        goto after_10;
    // 0x8006CC48: subu        $s2, $s6, $t6
    ctx->r18 = SUB32(ctx->r22, ctx->r14);
    after_10:
    // 0x8006CC4C: b           L_8006CC84
    // 0x8006CC50: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
        goto L_8006CC84;
    // 0x8006CC50: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
L_8006CC54:
    // 0x8006CC54: addiu       $t7, $v0, 0xF
    ctx->r15 = ADD32(ctx->r2, 0XF);
    // 0x8006CC58: bne         $s6, $t7, L_8006CC74
    if (ctx->r22 != ctx->r15) {
        // 0x8006CC5C: subu        $s2, $s6, $v0
        ctx->r18 = SUB32(ctx->r22, ctx->r2);
            goto L_8006CC74;
    }
    // 0x8006CC5C: subu        $s2, $s6, $v0
    ctx->r18 = SUB32(ctx->r22, ctx->r2);
    // 0x8006CC60: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x8006CC64: jal         0x800191C0
    // 0x8006CC68: nop

    func_800191C0(rdram, ctx);
        goto after_11;
    // 0x8006CC68: nop

    after_11:
    // 0x8006CC6C: b           L_8006CC84
    // 0x8006CC70: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
        goto L_8006CC84;
    // 0x8006CC70: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
L_8006CC74:
    // 0x8006CC74: lw          $s0, 0x0($s3)
    ctx->r16 = MEM_W(ctx->r19, 0X0);
    // 0x8006CC78: jal         0x8005D528
    // 0x8006CC7C: or          $s1, $s7, $zero
    ctx->r17 = ctx->r23 | 0;
    func_8005D528(rdram, ctx);
        goto after_12;
    // 0x8006CC7C: or          $s1, $s7, $zero
    ctx->r17 = ctx->r23 | 0;
    after_12:
L_8006CC80:
    // 0x8006CC80: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
L_8006CC84:
    // 0x8006CC84: bne         $s4, $fp, L_8006CC04
    if (ctx->r20 != ctx->r30) {
        // 0x8006CC88: addiu       $s5, $s5, 0x4
        ctx->r21 = ADD32(ctx->r21, 0X4);
            goto L_8006CC04;
    }
    // 0x8006CC88: addiu       $s5, $s5, 0x4
    ctx->r21 = ADD32(ctx->r21, 0X4);
    // 0x8006CC8C: lw          $t9, 0xA0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XA0);
    // 0x8006CC90: nop

    // 0x8006CC94: addiu       $t8, $t9, 0xF
    ctx->r24 = ADD32(ctx->r25, 0XF);
    // 0x8006CC98: slt         $v0, $t8, $s6
    ctx->r2 = SIGNED(ctx->r24) < SIGNED(ctx->r22) ? 1 : 0;
    // 0x8006CC9C: bne         $v0, $zero, L_8006CCB4
    if (ctx->r2 != 0) {
        // 0x8006CCA0: addiu       $s6, $s6, 0x1
        ctx->r22 = ADD32(ctx->r22, 0X1);
            goto L_8006CCB4;
    }
    // 0x8006CCA0: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x8006CCA4: jal         0x80007AB0
    // 0x8006CCA8: nop

    func_80007AB0(rdram, ctx);
        goto after_13;
    // 0x8006CCA8: nop

    after_13:
    // 0x8006CCAC: b           L_8006CBE4
    // 0x8006CCB0: lw          $t6, 0xB8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB8);
        goto L_8006CBE4;
    // 0x8006CCB0: lw          $t6, 0xB8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB8);
L_8006CCB4:
    // 0x8006CCB4: addiu       $s0, $sp, 0xA8
    ctx->r16 = ADD32(ctx->r29, 0XA8);
L_8006CCB8:
    // 0x8006CCB8: addiu       $s2, $s0, 0x10
    ctx->r18 = ADD32(ctx->r16, 0X10);
    // 0x8006CCBC: addiu       $s1, $zero, 0x4
    ctx->r17 = ADD32(0, 0X4);
L_8006CCC0:
    // 0x8006CCC0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8006CCC4: jal         0x8001C568
    // 0x8006CCC8: nop

    func_8001C568(rdram, ctx);
        goto after_14;
    // 0x8006CCC8: nop

    after_14:
    // 0x8006CCCC: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8006CCD0: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x8006CCD4: bne         $at, $zero, L_8006CCC0
    if (ctx->r1 != 0) {
        // 0x8006CCD8: nop
    
            goto L_8006CCC0;
    }
    // 0x8006CCD8: nop

    // 0x8006CCDC: lw          $a0, 0xB8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XB8);
    // 0x8006CCE0: jal         0x8005CD50
    // 0x8006CCE4: nop

    func_8005CD50(rdram, ctx);
        goto after_15;
    // 0x8006CCE4: nop

    after_15:
    // 0x8006CCE8: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8006CCEC: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x8006CCF0: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x8006CCF4: nop

    // 0x8006CCF8: addiu       $t9, $t7, -0x1
    ctx->r25 = ADD32(ctx->r15, -0X1);
    // 0x8006CCFC: jal         0x80007AE0
    // 0x8006CD00: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    func_80007AE0(rdram, ctx);
        goto after_16;
    // 0x8006CD00: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    after_16:
    // 0x8006CD04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006CD08: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
    // 0x8006CD0C: jr          $ra
    // 0x8006CD10: nop

    return;
    // 0x8006CD10: nop

;}
RECOMP_FUNC void func_8006CD14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006CD14: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8006CD18: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x8006CD1C: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x8006CD20: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x8006CD24: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x8006CD28: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x8006CD2C: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x8006CD30: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x8006CD34: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x8006CD38: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8006CD3C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8006CD40: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x8006CD44: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x8006CD48: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8006CD4C: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x8006CD50: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8006CD54: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8006CD58: jal         0x8006CAE4
    // 0x8006CD5C: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    func_8006CAE4(rdram, ctx);
        goto after_0;
    // 0x8006CD5C: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    after_0:
    // 0x8006CD60: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x8006CD64: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8006CD68: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8006CD6C: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8006CD70: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8006CD74: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x8006CD78: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8006CD7C: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8006CD80: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8006CD84: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x8006CD88: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x8006CD8C: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x8006CD90: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x8006CD94: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x8006CD98: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x8006CD9C: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x8006CDA0: jr          $ra
    // 0x8006CDA4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x8006CDA4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_8006CDA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006CDA8: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8006CDAC: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x8006CDB0: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x8006CDB4: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x8006CDB8: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x8006CDBC: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x8006CDC0: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x8006CDC4: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x8006CDC8: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x8006CDCC: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8006CDD0: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8006CDD4: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x8006CDD8: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x8006CDDC: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8006CDE0: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x8006CDE4: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8006CDE8: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8006CDEC: jal         0x8006CAE4
    // 0x8006CDF0: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
    func_8006CAE4(rdram, ctx);
        goto after_0;
    // 0x8006CDF0: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
    after_0:
    // 0x8006CDF4: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x8006CDF8: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8006CDFC: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8006CE00: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8006CE04: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8006CE08: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x8006CE0C: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8006CE10: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8006CE14: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8006CE18: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x8006CE1C: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x8006CE20: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x8006CE24: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x8006CE28: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x8006CE2C: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x8006CE30: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x8006CE34: jr          $ra
    // 0x8006CE38: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x8006CE38: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_8006CE3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006CE3C: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8006CE40: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x8006CE44: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x8006CE48: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x8006CE4C: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x8006CE50: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x8006CE54: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x8006CE58: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x8006CE5C: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x8006CE60: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8006CE64: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8006CE68: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x8006CE6C: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x8006CE70: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8006CE74: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x8006CE78: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8006CE7C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8006CE80: jal         0x8006CAE4
    // 0x8006CE84: addiu       $s7, $zero, 0x2
    ctx->r23 = ADD32(0, 0X2);
    func_8006CAE4(rdram, ctx);
        goto after_0;
    // 0x8006CE84: addiu       $s7, $zero, 0x2
    ctx->r23 = ADD32(0, 0X2);
    after_0:
    // 0x8006CE88: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x8006CE8C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8006CE90: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8006CE94: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8006CE98: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8006CE9C: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x8006CEA0: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8006CEA4: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8006CEA8: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8006CEAC: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x8006CEB0: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x8006CEB4: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x8006CEB8: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x8006CEBC: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x8006CEC0: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x8006CEC4: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x8006CEC8: jr          $ra
    // 0x8006CECC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x8006CECC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_8006CED0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006CED0: addiu       $sp, $sp, -0x168
    ctx->r29 = ADD32(ctx->r29, -0X168);
    // 0x8006CED4: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x8006CED8: sw          $s7, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r23;
    // 0x8006CEDC: sw          $s6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r22;
    // 0x8006CEE0: sw          $s5, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r21;
    // 0x8006CEE4: sw          $s4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r20;
    // 0x8006CEE8: sw          $s3, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r19;
    // 0x8006CEEC: sw          $s2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r18;
    // 0x8006CEF0: sw          $s1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r17;
    // 0x8006CEF4: sw          $s0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r16;
    // 0x8006CEF8: swc1        $f29, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x8006CEFC: swc1        $f28, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f28.u32l;
    // 0x8006CF00: swc1        $f27, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x8006CF04: swc1        $f26, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f26.u32l;
    // 0x8006CF08: swc1        $f25, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x8006CF0C: swc1        $f24, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f24.u32l;
    // 0x8006CF10: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8006CF14: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x8006CF18: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8006CF1C: jal         0x80007774
    // 0x8006CF20: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x8006CF20: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x8006CF24: lw          $s2, 0x1C($v0)
    ctx->r18 = MEM_W(ctx->r2, 0X1C);
    // 0x8006CF28: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x8006CF2C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x8006CF30: addiu       $s1, $sp, 0x154
    ctx->r17 = ADD32(ctx->r29, 0X154);
    // 0x8006CF34: addiu       $s5, $sp, 0x15C
    ctx->r21 = ADD32(ctx->r29, 0X15C);
    // 0x8006CF38: addiu       $s4, $sp, 0xEC
    ctx->r20 = ADD32(ctx->r29, 0XEC);
    // 0x8006CF3C: addiu       $a0, $zero, 0x7A5
    ctx->r4 = ADD32(0, 0X7A5);
L_8006CF40:
    // 0x8006CF40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8006CF44: jal         0x8001D138
    // 0x8006CF48: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x8006CF48: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8006CF4C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8006CF50: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8006CF54: jal         0x80019164
    // 0x8006CF58: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x8006CF58: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_2:
    // 0x8006CF5C: sw          $s0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r16;
    // 0x8006CF60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006CF64: jal         0x8001C468
    // 0x8006CF68: addiu       $a1, $zero, 0x7A5
    ctx->r5 = ADD32(0, 0X7A5);
    func_8001C468(rdram, ctx);
        goto after_3;
    // 0x8006CF68: addiu       $a1, $zero, 0x7A5
    ctx->r5 = ADD32(0, 0X7A5);
    after_3:
    // 0x8006CF6C: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8006CF70: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8006CF74: jal         0x800192E8
    // 0x8006CF78: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800192E8(rdram, ctx);
        goto after_4;
    // 0x8006CF78: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x8006CF7C: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8006CF80: swc1        $f22, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f22.u32l;
    // 0x8006CF84: swc1        $f22, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f22.u32l;
    // 0x8006CF88: swc1        $f22, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f22.u32l;
    // 0x8006CF8C: jal         0x80019114
    // 0x8006CF90: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    func_80019114(rdram, ctx);
        goto after_5;
    // 0x8006CF90: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_5:
    // 0x8006CF94: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8006CF98: bne         $s1, $s5, L_8006CF40
    if (ctx->r17 != ctx->r21) {
        // 0x8006CF9C: addiu       $a0, $zero, 0x7A5
        ctx->r4 = ADD32(0, 0X7A5);
            goto L_8006CF40;
    }
    // 0x8006CF9C: addiu       $a0, $zero, 0x7A5
    ctx->r4 = ADD32(0, 0X7A5);
    // 0x8006CFA0: addiu       $a0, $zero, 0x1F9
    ctx->r4 = ADD32(0, 0X1F9);
    // 0x8006CFA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8006CFA8: jal         0x8001D138
    // 0x8006CFAC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_6;
    // 0x8006CFAC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x8006CFB0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8006CFB4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8006CFB8: jal         0x80019164
    // 0x8006CFBC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_80019164(rdram, ctx);
        goto after_7;
    // 0x8006CFBC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_7:
    // 0x8006CFC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006CFC4: swc1        $f22, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->f22.u32l;
    // 0x8006CFC8: swc1        $f22, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->f22.u32l;
    // 0x8006CFCC: swc1        $f22, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f22.u32l;
    // 0x8006CFD0: addiu       $a1, $sp, 0xC4
    ctx->r5 = ADD32(ctx->r29, 0XC4);
    // 0x8006CFD4: jal         0x80019114
    // 0x8006CFD8: sw          $s0, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->r16;
    func_80019114(rdram, ctx);
        goto after_8;
    // 0x8006CFD8: sw          $s0, 0x15C($sp)
    MEM_W(0X15C, ctx->r29) = ctx->r16;
    after_8:
    // 0x8006CFDC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8006CFE0: lwc1        $f28, 0x6500($at)
    ctx->f28.u32l = MEM_W(ctx->r1, 0X6500);
    // 0x8006CFE4: addiu       $s6, $sp, 0x124
    ctx->r22 = ADD32(ctx->r29, 0X124);
    // 0x8006CFE8: addiu       $s0, $zero, -0x801
    ctx->r16 = ADD32(0, -0X801);
L_8006CFEC:
    // 0x8006CFEC: lw          $v0, 0x24($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X24);
    // 0x8006CFF0: lw          $a0, 0x154($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X154);
    // 0x8006CFF4: andi        $t6, $v0, 0x200
    ctx->r14 = ctx->r2 & 0X200;
    // 0x8006CFF8: bne         $t6, $zero, L_8006D008
    if (ctx->r14 != 0) {
        // 0x8006CFFC: andi        $t7, $v0, 0x4000
        ctx->r15 = ctx->r2 & 0X4000;
            goto L_8006D008;
    }
    // 0x8006CFFC: andi        $t7, $v0, 0x4000
    ctx->r15 = ctx->r2 & 0X4000;
    // 0x8006D000: beq         $t7, $zero, L_8006D010
    if (ctx->r15 == 0) {
        // 0x8006D004: andi        $t8, $v0, 0x800
        ctx->r24 = ctx->r2 & 0X800;
            goto L_8006D010;
    }
    // 0x8006D004: andi        $t8, $v0, 0x800
    ctx->r24 = ctx->r2 & 0X800;
L_8006D008:
    // 0x8006D008: b           L_8006D09C
    // 0x8006D00C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
        goto L_8006D09C;
    // 0x8006D00C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_8006D010:
    // 0x8006D010: beq         $t8, $zero, L_8006D034
    if (ctx->r24 == 0) {
        // 0x8006D014: slti        $at, $s3, 0x5
        ctx->r1 = SIGNED(ctx->r19) < 0X5 ? 1 : 0;
            goto L_8006D034;
    }
    // 0x8006D014: slti        $at, $s3, 0x5
    ctx->r1 = SIGNED(ctx->r19) < 0X5 ? 1 : 0;
    // 0x8006D018: jal         0x80019164
    // 0x8006D01C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_80019164(rdram, ctx);
        goto after_9;
    // 0x8006D01C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_9:
    // 0x8006D020: lw          $t9, 0x24($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X24);
    // 0x8006D024: nop

    // 0x8006D028: and         $t6, $t9, $s0
    ctx->r14 = ctx->r25 & ctx->r16;
    // 0x8006D02C: sw          $t6, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r14;
    // 0x8006D030: slti        $at, $s3, 0x5
    ctx->r1 = SIGNED(ctx->r19) < 0X5 ? 1 : 0;
L_8006D034:
    // 0x8006D034: beq         $at, $zero, L_8006D08C
    if (ctx->r1 == 0) {
        // 0x8006D038: addiu       $t7, $s3, 0x1
        ctx->r15 = ADD32(ctx->r19, 0X1);
            goto L_8006D08C;
    }
    // 0x8006D038: addiu       $t7, $s3, 0x1
    ctx->r15 = ADD32(ctx->r19, 0X1);
    // 0x8006D03C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8006D040: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x8006D044: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8006D048: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8006D04C: nop

    // 0x8006D050: mul.s       $f20, $f6, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f20.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8006D054: jal         0x80028C2C
    // 0x8006D058: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_80028C2C(rdram, ctx);
        goto after_10;
    // 0x8006D058: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_10:
    // 0x8006D05C: swc1        $f0, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f0.u32l;
    // 0x8006D060: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x8006D064: jal         0x80028C2C
    // 0x8006D068: swc1        $f0, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->f0.u32l;
    func_80028C2C(rdram, ctx);
        goto after_11;
    // 0x8006D068: swc1        $f0, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->f0.u32l;
    after_11:
    // 0x8006D06C: mul.s       $f10, $f0, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f28.fl);
    // 0x8006D070: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8006D074: lwc1        $f4, 0x6504($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6504);
    // 0x8006D078: lw          $a0, 0x154($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X154);
    // 0x8006D07C: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x8006D080: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x8006D084: jal         0x80019114
    // 0x8006D088: swc1        $f6, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->f6.u32l;
    func_80019114(rdram, ctx);
        goto after_12;
    // 0x8006D088: swc1        $f6, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->f6.u32l;
    after_12:
L_8006D08C:
    // 0x8006D08C: jal         0x80007AB0
    // 0x8006D090: addiu       $s7, $s3, 0x1
    ctx->r23 = ADD32(ctx->r19, 0X1);
    func_80007AB0(rdram, ctx);
        goto after_13;
    // 0x8006D090: addiu       $s7, $s3, 0x1
    ctx->r23 = ADD32(ctx->r19, 0X1);
    after_13:
    // 0x8006D094: b           L_8006CFEC
    // 0x8006D098: or          $s3, $s7, $zero
    ctx->r19 = ctx->r23 | 0;
        goto L_8006CFEC;
    // 0x8006D098: or          $s3, $s7, $zero
    ctx->r19 = ctx->r23 | 0;
L_8006D09C:
    // 0x8006D09C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8006D0A0: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x8006D0A4: addiu       $s1, $sp, 0x154
    ctx->r17 = ADD32(ctx->r29, 0X154);
    // 0x8006D0A8: addiu       $s4, $sp, 0x160
    ctx->r20 = ADD32(ctx->r29, 0X160);
    // 0x8006D0AC: addiu       $s0, $sp, 0xAC
    ctx->r16 = ADD32(ctx->r29, 0XAC);
L_8006D0B0:
    // 0x8006D0B0: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8006D0B4: swc1        $f24, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f24.u32l;
    // 0x8006D0B8: swc1        $f24, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f24.u32l;
    // 0x8006D0BC: swc1        $f24, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f24.u32l;
    // 0x8006D0C0: jal         0x80019114
    // 0x8006D0C4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80019114(rdram, ctx);
        goto after_14;
    // 0x8006D0C4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_14:
    // 0x8006D0C8: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8006D0CC: jal         0x80019164
    // 0x8006D0D0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_80019164(rdram, ctx);
        goto after_15;
    // 0x8006D0D0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_15:
    // 0x8006D0D4: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8006D0D8: bne         $s1, $s4, L_8006D0B0
    if (ctx->r17 != ctx->r20) {
        // 0x8006D0DC: nop
    
            goto L_8006D0B0;
    }
    // 0x8006D0DC: nop

    // 0x8006D0E0: lw          $a0, 0x15C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X15C);
    // 0x8006D0E4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8006D0E8: jal         0x80018658
    // 0x8006D0EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80018658(rdram, ctx);
        goto after_16;
    // 0x8006D0EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_16:
    // 0x8006D0F0: lw          $a0, 0x15C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X15C);
    // 0x8006D0F4: jal         0x80018604
    // 0x8006D0F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80018604(rdram, ctx);
        goto after_17;
    // 0x8006D0F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_17:
    // 0x8006D0FC: lui         $at, 0x4110
    ctx->r1 = S32(0X4110 << 16);
    // 0x8006D100: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x8006D104: swc1        $f22, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->f22.u32l;
    // 0x8006D108: swc1        $f22, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->f22.u32l;
    // 0x8006D10C: swc1        $f22, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->f22.u32l;
    // 0x8006D110: addiu       $s5, $sp, 0x15C
    ctx->r21 = ADD32(ctx->r29, 0X15C);
    // 0x8006D114: addiu       $s4, $sp, 0x154
    ctx->r20 = ADD32(ctx->r29, 0X154);
L_8006D118:
    // 0x8006D118: lw          $t8, 0x24($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X24);
    // 0x8006D11C: addiu       $s7, $s3, 0x1
    ctx->r23 = ADD32(ctx->r19, 0X1);
    // 0x8006D120: andi        $t9, $t8, 0x4000
    ctx->r25 = ctx->r24 & 0X4000;
    // 0x8006D124: bne         $t9, $zero, L_8006D424
    if (ctx->r25 != 0) {
        // 0x8006D128: addiu       $s0, $sp, 0x154
        ctx->r16 = ADD32(ctx->r29, 0X154);
            goto L_8006D424;
    }
    // 0x8006D128: addiu       $s0, $sp, 0x154
    ctx->r16 = ADD32(ctx->r29, 0X154);
    // 0x8006D12C: mtc1        $s7, $f8
    ctx->f8.u32l = ctx->r23;
    // 0x8006D130: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8006D134: cvt.s.w     $f22, $f8
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    ctx->f22.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8006D138: lwc1        $f5, 0x6508($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X6508);
    // 0x8006D13C: lwc1        $f4, 0x650C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X650C);
    // 0x8006D140: mul.s       $f20, $f22, $f26
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f20.fl = MUL_S(ctx->f22.fl, ctx->f26.fl);
    // 0x8006D144: slti        $at, $s3, 0x14
    ctx->r1 = SIGNED(ctx->r19) < 0X14 ? 1 : 0;
    // 0x8006D148: cvt.d.s     $f10, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f10.d = CVT_D_S(ctx->f20.fl);
    // 0x8006D14C: mul.d       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f10.d, ctx->f4.d);
    // 0x8006D150: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x8006D154: bne         $at, $zero, L_8006D1B0
    if (ctx->r1 != 0) {
        // 0x8006D158: swc1        $f8, 0x134($sp)
        MEM_W(0X134, ctx->r29) = ctx->f8.u32l;
            goto L_8006D1B0;
    }
    // 0x8006D158: swc1        $f8, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->f8.u32l;
    // 0x8006D15C: slti        $at, $s3, 0x17
    ctx->r1 = SIGNED(ctx->r19) < 0X17 ? 1 : 0;
    // 0x8006D160: beq         $at, $zero, L_8006D1B0
    if (ctx->r1 == 0) {
        // 0x8006D164: sll         $s1, $s3, 8
        ctx->r17 = S32(ctx->r19 << 8);
            goto L_8006D1B0;
    }
    // 0x8006D164: sll         $s1, $s3, 8
    ctx->r17 = S32(ctx->r19 << 8);
    // 0x8006D168: lw          $s0, 0x15C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X15C);
    // 0x8006D16C: subu        $s1, $s1, $s3
    ctx->r17 = SUB32(ctx->r17, ctx->r19);
    // 0x8006D170: addiu       $at, $zero, 0x16
    ctx->r1 = ADD32(0, 0X16);
    // 0x8006D174: bne         $s3, $at, L_8006D18C
    if (ctx->r19 != ctx->r1) {
        // 0x8006D178: addiu       $s1, $s1, -0x12ED
        ctx->r17 = ADD32(ctx->r17, -0X12ED);
            goto L_8006D18C;
    }
    // 0x8006D178: addiu       $s1, $s1, -0x12ED
    ctx->r17 = ADD32(ctx->r17, -0X12ED);
    // 0x8006D17C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006D180: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8006D184: jal         0x80018658
    // 0x8006D188: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80018658(rdram, ctx);
        goto after_18;
    // 0x8006D188: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_18:
L_8006D18C:
    // 0x8006D18C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8006D190: div         $zero, $s1, $at
    lo = S32(S64(S32(ctx->r17)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r17)) % S64(S32(ctx->r1)));
    // 0x8006D194: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006D198: mflo        $a1
    ctx->r5 = lo;
    // 0x8006D19C: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x8006D1A0: jal         0x80018604
    // 0x8006D1A4: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    func_80018604(rdram, ctx);
        goto after_19;
    // 0x8006D1A4: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    after_19:
    // 0x8006D1A8: b           L_8006D204
    // 0x8006D1AC: lw          $a0, 0x15C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X15C);
        goto L_8006D204;
    // 0x8006D1AC: lw          $a0, 0x15C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X15C);
L_8006D1B0:
    // 0x8006D1B0: slti        $at, $s3, 0x28
    ctx->r1 = SIGNED(ctx->r19) < 0X28 ? 1 : 0;
    // 0x8006D1B4: bne         $at, $zero, L_8006D200
    if (ctx->r1 != 0) {
        // 0x8006D1B8: addiu       $t7, $zero, 0x2D
        ctx->r15 = ADD32(0, 0X2D);
            goto L_8006D200;
    }
    // 0x8006D1B8: addiu       $t7, $zero, 0x2D
    ctx->r15 = ADD32(0, 0X2D);
    // 0x8006D1BC: subu        $v0, $t7, $s3
    ctx->r2 = SUB32(ctx->r15, ctx->r19);
    // 0x8006D1C0: sll         $s1, $v0, 8
    ctx->r17 = S32(ctx->r2 << 8);
    // 0x8006D1C4: lw          $s0, 0x15C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X15C);
    // 0x8006D1C8: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8006D1CC: bne         $v0, $at, L_8006D1E4
    if (ctx->r2 != ctx->r1) {
        // 0x8006D1D0: subu        $s1, $s1, $v0
        ctx->r17 = SUB32(ctx->r17, ctx->r2);
            goto L_8006D1E4;
    }
    // 0x8006D1D0: subu        $s1, $s1, $v0
    ctx->r17 = SUB32(ctx->r17, ctx->r2);
    // 0x8006D1D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006D1D8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8006D1DC: jal         0x80018658
    // 0x8006D1E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80018658(rdram, ctx);
        goto after_20;
    // 0x8006D1E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_20:
L_8006D1E4:
    // 0x8006D1E4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8006D1E8: div         $zero, $s1, $at
    lo = S32(S64(S32(ctx->r17)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r17)) % S64(S32(ctx->r1)));
    // 0x8006D1EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006D1F0: mflo        $a1
    ctx->r5 = lo;
    // 0x8006D1F4: andi        $t8, $a1, 0xFF
    ctx->r24 = ctx->r5 & 0XFF;
    // 0x8006D1F8: jal         0x80018604
    // 0x8006D1FC: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    func_80018604(rdram, ctx);
        goto after_21;
    // 0x8006D1FC: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    after_21:
L_8006D200:
    // 0x8006D200: lw          $a0, 0x15C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X15C);
L_8006D204:
    // 0x8006D204: jal         0x8001913C
    // 0x8006D208: addiu       $a1, $sp, 0x130
    ctx->r5 = ADD32(ctx->r29, 0X130);
    func_8001913C(rdram, ctx);
        goto after_22;
    // 0x8006D208: addiu       $a1, $sp, 0x130
    ctx->r5 = ADD32(ctx->r29, 0X130);
    after_22:
    // 0x8006D20C: slti        $at, $s3, 0xA
    ctx->r1 = SIGNED(ctx->r19) < 0XA ? 1 : 0;
    // 0x8006D210: beq         $at, $zero, L_8006D23C
    if (ctx->r1 == 0) {
        // 0x8006D214: lui         $at, 0x4248
        ctx->r1 = S32(0X4248 << 16);
            goto L_8006D23C;
    }
    // 0x8006D214: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x8006D218: jal         0x80028C2C
    // 0x8006D21C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_80028C2C(rdram, ctx);
        goto after_23;
    // 0x8006D21C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_23:
    // 0x8006D220: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x8006D224: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8006D228: nop

    // 0x8006D22C: mul.s       $f20, $f0, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x8006D230: b           L_8006D248
    // 0x8006D234: mtc1        $s3, $f4
    ctx->f4.u32l = ctx->r19;
        goto L_8006D248;
    // 0x8006D234: mtc1        $s3, $f4
    ctx->f4.u32l = ctx->r19;
    // 0x8006D238: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
L_8006D23C:
    // 0x8006D23C: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x8006D240: nop

    // 0x8006D244: mtc1        $s3, $f4
    ctx->f4.u32l = ctx->r19;
L_8006D248:
    // 0x8006D248: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x8006D24C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8006D250: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8006D254: nop

    // 0x8006D258: mul.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8006D25C: jal         0x80028C2C
    // 0x8006D260: swc1        $f12, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f12.u32l;
    func_80028C2C(rdram, ctx);
        goto after_24;
    // 0x8006D260: swc1        $f12, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f12.u32l;
    after_24:
    // 0x8006D264: mul.s       $f10, $f0, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x8006D268: lwc1        $f12, 0x74($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X74);
    // 0x8006D26C: jal         0x80028C00
    // 0x8006D270: swc1        $f10, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->f10.u32l;
    func_80028C00(rdram, ctx);
        goto after_25;
    // 0x8006D270: swc1        $f10, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->f10.u32l;
    after_25:
    // 0x8006D274: mul.s       $f2, $f0, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x8006D278: lwc1        $f4, 0x13C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X13C);
    // 0x8006D27C: addiu       $s1, $sp, 0x154
    ctx->r17 = ADD32(ctx->r29, 0X154);
    // 0x8006D280: addiu       $s0, $sp, 0x13C
    ctx->r16 = ADD32(ctx->r29, 0X13C);
    // 0x8006D284: neg.s       $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = -ctx->f2.fl;
    // 0x8006D288: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x8006D28C: swc1        $f6, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->f6.u32l;
    // 0x8006D290: swc1        $f8, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->f8.u32l;
    // 0x8006D294: swc1        $f2, 0x144($sp)
    MEM_W(0X144, ctx->r29) = ctx->f2.u32l;
L_8006D298:
    // 0x8006D298: lwc1        $f10, 0x0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X0);
    // 0x8006D29C: lwc1        $f4, 0x0($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X0);
    // 0x8006D2A0: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8006D2A4: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x8006D2A8: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x8006D2AC: swc1        $f6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f6.u32l;
    // 0x8006D2B0: lwc1        $f8, 0x4($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X4);
    // 0x8006D2B4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8006D2B8: swc1        $f8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f8.u32l;
    // 0x8006D2BC: lwc1        $f4, 0x8($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X8);
    // 0x8006D2C0: nop

    // 0x8006D2C4: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x8006D2C8: jal         0x80019164
    // 0x8006D2CC: swc1        $f6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f6.u32l;
    func_80019164(rdram, ctx);
        goto after_26;
    // 0x8006D2CC: swc1        $f6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f6.u32l;
    after_26:
    // 0x8006D2D0: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x8006D2D4: sltu        $at, $s0, $s4
    ctx->r1 = ctx->r16 < ctx->r20 ? 1 : 0;
    // 0x8006D2D8: bne         $at, $zero, L_8006D298
    if (ctx->r1 != 0) {
        // 0x8006D2DC: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_8006D298;
    }
    // 0x8006D2DC: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8006D2E0: slti        $at, $s3, 0x5
    ctx->r1 = SIGNED(ctx->r19) < 0X5 ? 1 : 0;
    // 0x8006D2E4: beq         $at, $zero, L_8006D33C
    if (ctx->r1 == 0) {
        // 0x8006D2E8: lui         $at, 0x4190
        ctx->r1 = S32(0X4190 << 16);
            goto L_8006D33C;
    }
    // 0x8006D2E8: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x8006D2EC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8006D2F0: nop

    // 0x8006D2F4: mul.s       $f20, $f22, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f20.fl = MUL_S(ctx->f22.fl, ctx->f8.fl);
    // 0x8006D2F8: jal         0x80028C2C
    // 0x8006D2FC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_80028C2C(rdram, ctx);
        goto after_27;
    // 0x8006D2FC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_27:
    // 0x8006D300: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8006D304: lwc1        $f10, 0x6510($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X6510);
    // 0x8006D308: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x8006D30C: mul.s       $f4, $f0, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x8006D310: add.s       $f2, $f4, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f2.fl = ctx->f4.fl + ctx->f24.fl;
    // 0x8006D314: swc1        $f2, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f2.u32l;
    // 0x8006D318: jal         0x80028C00
    // 0x8006D31C: swc1        $f2, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->f2.u32l;
    func_80028C00(rdram, ctx);
        goto after_28;
    // 0x8006D31C: swc1        $f2, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->f2.u32l;
    after_28:
    // 0x8006D320: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8006D324: lwc1        $f6, 0x6514($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6514);
    // 0x8006D328: nop

    // 0x8006D32C: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x8006D330: add.s       $f10, $f8, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f28.fl;
    // 0x8006D334: b           L_8006D3F0
    // 0x8006D338: swc1        $f10, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->f10.u32l;
        goto L_8006D3F0;
    // 0x8006D338: swc1        $f10, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->f10.u32l;
L_8006D33C:
    // 0x8006D33C: slti        $at, $s3, 0xA
    ctx->r1 = SIGNED(ctx->r19) < 0XA ? 1 : 0;
    // 0x8006D340: bne         $at, $zero, L_8006D384
    if (ctx->r1 != 0) {
        // 0x8006D344: slti        $at, $s3, 0x14
        ctx->r1 = SIGNED(ctx->r19) < 0X14 ? 1 : 0;
            goto L_8006D384;
    }
    // 0x8006D344: slti        $at, $s3, 0x14
    ctx->r1 = SIGNED(ctx->r19) < 0X14 ? 1 : 0;
    // 0x8006D348: beq         $at, $zero, L_8006D384
    if (ctx->r1 == 0) {
        // 0x8006D34C: addiu       $t9, $s3, -0x9
        ctx->r25 = ADD32(ctx->r19, -0X9);
            goto L_8006D384;
    }
    // 0x8006D34C: addiu       $t9, $s3, -0x9
    ctx->r25 = ADD32(ctx->r19, -0X9);
    // 0x8006D350: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8006D354: nop

    // 0x8006D358: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8006D35C: mul.s       $f12, $f6, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f12.fl = MUL_S(ctx->f6.fl, ctx->f26.fl);
    // 0x8006D360: jal         0x80028C2C
    // 0x8006D364: nop

    func_80028C2C(rdram, ctx);
        goto after_29;
    // 0x8006D364: nop

    after_29:
    // 0x8006D368: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8006D36C: lwc1        $f8, 0x6518($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X6518);
    // 0x8006D370: nop

    // 0x8006D374: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x8006D378: add.s       $f4, $f10, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f28.fl;
    // 0x8006D37C: b           L_8006D3F0
    // 0x8006D380: swc1        $f4, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->f4.u32l;
        goto L_8006D3F0;
    // 0x8006D380: swc1        $f4, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->f4.u32l;
L_8006D384:
    // 0x8006D384: slti        $at, $s3, 0x1E
    ctx->r1 = SIGNED(ctx->r19) < 0X1E ? 1 : 0;
    // 0x8006D388: bne         $at, $zero, L_8006D3CC
    if (ctx->r1 != 0) {
        // 0x8006D38C: slti        $at, $s3, 0x28
        ctx->r1 = SIGNED(ctx->r19) < 0X28 ? 1 : 0;
            goto L_8006D3CC;
    }
    // 0x8006D38C: slti        $at, $s3, 0x28
    ctx->r1 = SIGNED(ctx->r19) < 0X28 ? 1 : 0;
    // 0x8006D390: beq         $at, $zero, L_8006D3CC
    if (ctx->r1 == 0) {
        // 0x8006D394: addiu       $t6, $s3, -0x9
        ctx->r14 = ADD32(ctx->r19, -0X9);
            goto L_8006D3CC;
    }
    // 0x8006D394: addiu       $t6, $s3, -0x9
    ctx->r14 = ADD32(ctx->r19, -0X9);
    // 0x8006D398: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x8006D39C: nop

    // 0x8006D3A0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8006D3A4: mul.s       $f12, $f8, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f26.fl);
    // 0x8006D3A8: jal         0x80028C00
    // 0x8006D3AC: nop

    func_80028C00(rdram, ctx);
        goto after_30;
    // 0x8006D3AC: nop

    after_30:
    // 0x8006D3B0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8006D3B4: lwc1        $f10, 0x651C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X651C);
    // 0x8006D3B8: nop

    // 0x8006D3BC: mul.s       $f2, $f0, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x8006D3C0: swc1        $f2, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f2.u32l;
    // 0x8006D3C4: b           L_8006D3F0
    // 0x8006D3C8: swc1        $f2, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->f2.u32l;
        goto L_8006D3F0;
    // 0x8006D3C8: swc1        $f2, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->f2.u32l;
L_8006D3CC:
    // 0x8006D3CC: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x8006D3D0: bne         $s3, $at, L_8006D3F4
    if (ctx->r19 != ctx->r1) {
        // 0x8006D3D4: addiu       $s1, $sp, 0x154
        ctx->r17 = ADD32(ctx->r29, 0X154);
            goto L_8006D3F4;
    }
    // 0x8006D3D4: addiu       $s1, $sp, 0x154
    ctx->r17 = ADD32(ctx->r29, 0X154);
    // 0x8006D3D8: lw          $a0, 0x154($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X154);
    // 0x8006D3DC: jal         0x800191C0
    // 0x8006D3E0: nop

    func_800191C0(rdram, ctx);
        goto after_31;
    // 0x8006D3E0: nop

    after_31:
    // 0x8006D3E4: lw          $a0, 0x158($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X158);
    // 0x8006D3E8: jal         0x800191C0
    // 0x8006D3EC: nop

    func_800191C0(rdram, ctx);
        goto after_32;
    // 0x8006D3EC: nop

    after_32:
L_8006D3F0:
    // 0x8006D3F0: addiu       $s1, $sp, 0x154
    ctx->r17 = ADD32(ctx->r29, 0X154);
L_8006D3F4:
    // 0x8006D3F4: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8006D3F8: jal         0x80019114
    // 0x8006D3FC: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    func_80019114(rdram, ctx);
        goto after_33;
    // 0x8006D3FC: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    after_33:
    // 0x8006D400: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8006D404: bne         $s1, $s5, L_8006D3F4
    if (ctx->r17 != ctx->r21) {
        // 0x8006D408: nop
    
            goto L_8006D3F4;
    }
    // 0x8006D408: nop

    // 0x8006D40C: jal         0x80007AB0
    // 0x8006D410: nop

    func_80007AB0(rdram, ctx);
        goto after_34;
    // 0x8006D410: nop

    after_34:
    // 0x8006D414: slti        $at, $s7, 0x2D
    ctx->r1 = SIGNED(ctx->r23) < 0X2D ? 1 : 0;
    // 0x8006D418: bne         $at, $zero, L_8006D118
    if (ctx->r1 != 0) {
        // 0x8006D41C: or          $s3, $s7, $zero
        ctx->r19 = ctx->r23 | 0;
            goto L_8006D118;
    }
    // 0x8006D41C: or          $s3, $s7, $zero
    ctx->r19 = ctx->r23 | 0;
    // 0x8006D420: addiu       $s0, $sp, 0x154
    ctx->r16 = ADD32(ctx->r29, 0X154);
L_8006D424:
    // 0x8006D424: addiu       $s3, $s0, 0xC
    ctx->r19 = ADD32(ctx->r16, 0XC);
L_8006D428:
    // 0x8006D428: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8006D42C: jal         0x8001C568
    // 0x8006D430: nop

    func_8001C568(rdram, ctx);
        goto after_35;
    // 0x8006D430: nop

    after_35:
    // 0x8006D434: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8006D438: sltu        $at, $s0, $s3
    ctx->r1 = ctx->r16 < ctx->r19 ? 1 : 0;
    // 0x8006D43C: bne         $at, $zero, L_8006D428
    if (ctx->r1 != 0) {
        // 0x8006D440: nop
    
            goto L_8006D428;
    }
    // 0x8006D440: nop

    // 0x8006D444: jal         0x8005CD50
    // 0x8006D448: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_8005CD50(rdram, ctx);
        goto after_36;
    // 0x8006D448: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_36:
    // 0x8006D44C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8006D450: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x8006D454: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x8006D458: nop

    // 0x8006D45C: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x8006D460: jal         0x80007AE0
    // 0x8006D464: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    func_80007AE0(rdram, ctx);
        goto after_37;
    // 0x8006D464: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    after_37:
    // 0x8006D468: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x8006D46C: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x8006D470: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8006D474: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8006D478: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8006D47C: lwc1        $f25, 0x20($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8006D480: lwc1        $f24, 0x24($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8006D484: lwc1        $f27, 0x28($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x8006D488: lwc1        $f26, 0x2C($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8006D48C: lwc1        $f29, 0x30($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x8006D490: lwc1        $f28, 0x34($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8006D494: lw          $s0, 0x3C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X3C);
    // 0x8006D498: lw          $s1, 0x40($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X40);
    // 0x8006D49C: lw          $s2, 0x44($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X44);
    // 0x8006D4A0: lw          $s3, 0x48($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X48);
    // 0x8006D4A4: lw          $s4, 0x4C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X4C);
    // 0x8006D4A8: lw          $s5, 0x50($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X50);
    // 0x8006D4AC: lw          $s6, 0x54($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X54);
    // 0x8006D4B0: lw          $s7, 0x58($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X58);
    // 0x8006D4B4: jr          $ra
    // 0x8006D4B8: addiu       $sp, $sp, 0x168
    ctx->r29 = ADD32(ctx->r29, 0X168);
    return;
    // 0x8006D4B8: addiu       $sp, $sp, 0x168
    ctx->r29 = ADD32(ctx->r29, 0X168);
;}
RECOMP_FUNC void func_8006D4BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006D4BC: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8006D4C0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8006D4C4: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8006D4C8: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8006D4CC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8006D4D0: jal         0x80007774
    // 0x8006D4D4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x8006D4D4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x8006D4D8: lw          $s1, 0x1C($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X1C);
    // 0x8006D4DC: addiu       $a0, $zero, 0x7A6
    ctx->r4 = ADD32(0, 0X7A6);
    // 0x8006D4E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8006D4E4: jal         0x8001D138
    // 0x8006D4E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x8006D4E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8006D4EC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8006D4F0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8006D4F4: jal         0x80019164
    // 0x8006D4F8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x8006D4F8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_2:
    // 0x8006D4FC: sw          $s0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r16;
    // 0x8006D500: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006D504: jal         0x8001C468
    // 0x8006D508: addiu       $a1, $zero, 0x7E1
    ctx->r5 = ADD32(0, 0X7E1);
    func_8001C468(rdram, ctx);
        goto after_3;
    // 0x8006D508: addiu       $a1, $zero, 0x7E1
    ctx->r5 = ADD32(0, 0X7E1);
    after_3:
    // 0x8006D50C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8006D510: addiu       $s3, $zero, 0x14
    ctx->r19 = ADD32(0, 0X14);
    // 0x8006D514: addiu       $s2, $zero, -0x801
    ctx->r18 = ADD32(0, -0X801);
L_8006D518:
    // 0x8006D518: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x8006D51C: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x8006D520: andi        $t6, $v0, 0x4000
    ctx->r14 = ctx->r2 & 0X4000;
    // 0x8006D524: bne         $t6, $zero, L_8006D560
    if (ctx->r14 != 0) {
        // 0x8006D528: andi        $t7, $v0, 0x800
        ctx->r15 = ctx->r2 & 0X800;
            goto L_8006D560;
    }
    // 0x8006D528: andi        $t7, $v0, 0x800
    ctx->r15 = ctx->r2 & 0X800;
    // 0x8006D52C: beq         $t7, $zero, L_8006D54C
    if (ctx->r15 == 0) {
        // 0x8006D530: nop
    
            goto L_8006D54C;
    }
    // 0x8006D530: nop

    // 0x8006D534: jal         0x80019164
    // 0x8006D538: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80019164(rdram, ctx);
        goto after_4;
    // 0x8006D538: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_4:
    // 0x8006D53C: lw          $t8, 0x24($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X24);
    // 0x8006D540: nop

    // 0x8006D544: and         $t9, $t8, $s2
    ctx->r25 = ctx->r24 & ctx->r18;
    // 0x8006D548: sw          $t9, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r25;
L_8006D54C:
    // 0x8006D54C: jal         0x80007AB0
    // 0x8006D550: nop

    func_80007AB0(rdram, ctx);
        goto after_5;
    // 0x8006D550: nop

    after_5:
    // 0x8006D554: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8006D558: bne         $s0, $s3, L_8006D518
    if (ctx->r16 != ctx->r19) {
        // 0x8006D55C: nop
    
            goto L_8006D518;
    }
    // 0x8006D55C: nop

L_8006D560:
    // 0x8006D560: addiu       $s0, $sp, 0x54
    ctx->r16 = ADD32(ctx->r29, 0X54);
    // 0x8006D564: addiu       $s3, $s0, 0x4
    ctx->r19 = ADD32(ctx->r16, 0X4);
L_8006D568:
    // 0x8006D568: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8006D56C: jal         0x8001C568
    // 0x8006D570: nop

    func_8001C568(rdram, ctx);
        goto after_6;
    // 0x8006D570: nop

    after_6:
    // 0x8006D574: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8006D578: sltu        $at, $s0, $s3
    ctx->r1 = ctx->r16 < ctx->r19 ? 1 : 0;
    // 0x8006D57C: bne         $at, $zero, L_8006D568
    if (ctx->r1 != 0) {
        // 0x8006D580: nop
    
            goto L_8006D568;
    }
    // 0x8006D580: nop

    // 0x8006D584: jal         0x8005CD50
    // 0x8006D588: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8005CD50(rdram, ctx);
        goto after_7;
    // 0x8006D588: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_7:
    // 0x8006D58C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8006D590: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x8006D594: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x8006D598: nop

    // 0x8006D59C: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x8006D5A0: jal         0x80007AE0
    // 0x8006D5A4: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    func_80007AE0(rdram, ctx);
        goto after_8;
    // 0x8006D5A4: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    after_8:
    // 0x8006D5A8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8006D5AC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8006D5B0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8006D5B4: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8006D5B8: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8006D5BC: jr          $ra
    // 0x8006D5C0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x8006D5C0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_8006D5C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006D5C4: addiu       $sp, $sp, -0xE8
    ctx->r29 = ADD32(ctx->r29, -0XE8);
    // 0x8006D5C8: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8006D5CC: sw          $s7, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r23;
    // 0x8006D5D0: sw          $s6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r22;
    // 0x8006D5D4: sw          $s5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r21;
    // 0x8006D5D8: sw          $s4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r20;
    // 0x8006D5DC: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x8006D5E0: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x8006D5E4: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x8006D5E8: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x8006D5EC: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8006D5F0: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x8006D5F4: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8006D5F8: jal         0x80007774
    // 0x8006D5FC: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x8006D5FC: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x8006D600: lw          $s7, 0x1C($v0)
    ctx->r23 = MEM_W(ctx->r2, 0X1C);
    // 0x8006D604: addiu       $a0, $zero, 0x7C2
    ctx->r4 = ADD32(0, 0X7C2);
    // 0x8006D608: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8006D60C: jal         0x8001D138
    // 0x8006D610: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x8006D610: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8006D614: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8006D618: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8006D61C: jal         0x80019164
    // 0x8006D620: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x8006D620: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    after_2:
    // 0x8006D624: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8006D628: sw          $s0, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r16;
    // 0x8006D62C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006D630: addiu       $a1, $sp, 0xAC
    ctx->r5 = ADD32(ctx->r29, 0XAC);
    // 0x8006D634: swc1        $f0, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f0.u32l;
    // 0x8006D638: swc1        $f0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f0.u32l;
    // 0x8006D63C: jal         0x80019114
    // 0x8006D640: swc1        $f0, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f0.u32l;
    func_80019114(rdram, ctx);
        goto after_3;
    // 0x8006D640: swc1        $f0, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f0.u32l;
    after_3:
    // 0x8006D644: lw          $s0, 0xDC($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XDC);
    // 0x8006D648: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8006D64C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8006D650: jal         0x80018658
    // 0x8006D654: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80018658(rdram, ctx);
        goto after_4;
    // 0x8006D654: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8006D658: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006D65C: jal         0x80018604
    // 0x8006D660: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_80018604(rdram, ctx);
        goto after_5;
    // 0x8006D660: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_5:
    // 0x8006D664: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x8006D668: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x8006D66C: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x8006D670: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x8006D674: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8006D678: addiu       $s6, $sp, 0x84
    ctx->r22 = ADD32(ctx->r29, 0X84);
    // 0x8006D67C: addiu       $s5, $zero, 0xF
    ctx->r21 = ADD32(0, 0XF);
    // 0x8006D680: addiu       $s4, $zero, 0xA
    ctx->r20 = ADD32(0, 0XA);
L_8006D684:
    // 0x8006D684: lw          $t6, 0x24($s7)
    ctx->r14 = MEM_W(ctx->r23, 0X24);
    // 0x8006D688: addiu       $s3, $s0, 0x1
    ctx->r19 = ADD32(ctx->r16, 0X1);
    // 0x8006D68C: andi        $t7, $t6, 0x4000
    ctx->r15 = ctx->r14 & 0X4000;
    // 0x8006D690: bne         $t7, $zero, L_8006D740
    if (ctx->r15 != 0) {
        // 0x8006D694: nop
    
            goto L_8006D740;
    }
    // 0x8006D694: nop

    // 0x8006D698: mtc1        $s3, $f4
    ctx->f4.u32l = ctx->r19;
    // 0x8006D69C: nop

    // 0x8006D6A0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8006D6A4: mul.s       $f12, $f6, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x8006D6A8: jal         0x80028C2C
    // 0x8006D6AC: nop

    func_80028C2C(rdram, ctx);
        goto after_6;
    // 0x8006D6AC: nop

    after_6:
    // 0x8006D6B0: mul.s       $f2, $f0, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x8006D6B4: lw          $a0, 0xDC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XDC);
    // 0x8006D6B8: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x8006D6BC: swc1        $f2, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f2.u32l;
    // 0x8006D6C0: swc1        $f2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f2.u32l;
    // 0x8006D6C4: jal         0x80019114
    // 0x8006D6C8: swc1        $f2, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f2.u32l;
    func_80019114(rdram, ctx);
        goto after_7;
    // 0x8006D6C8: swc1        $f2, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f2.u32l;
    after_7:
    // 0x8006D6CC: slti        $at, $s0, 0x5
    ctx->r1 = SIGNED(ctx->r16) < 0X5 ? 1 : 0;
    // 0x8006D6D0: bne         $at, $zero, L_8006D730
    if (ctx->r1 != 0) {
        // 0x8006D6D4: subu        $v0, $s5, $s0
        ctx->r2 = SUB32(ctx->r21, ctx->r16);
            goto L_8006D730;
    }
    // 0x8006D6D4: subu        $v0, $s5, $s0
    ctx->r2 = SUB32(ctx->r21, ctx->r16);
    // 0x8006D6D8: lw          $s1, 0xDC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XDC);
    // 0x8006D6DC: bne         $s4, $v0, L_8006D6F4
    if (ctx->r20 != ctx->r2) {
        // 0x8006D6E0: sll         $s2, $v0, 7
        ctx->r18 = S32(ctx->r2 << 7);
            goto L_8006D6F4;
    }
    // 0x8006D6E0: sll         $s2, $v0, 7
    ctx->r18 = S32(ctx->r2 << 7);
    // 0x8006D6E4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8006D6E8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8006D6EC: jal         0x80018658
    // 0x8006D6F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80018658(rdram, ctx);
        goto after_8;
    // 0x8006D6F0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_8:
L_8006D6F4:
    // 0x8006D6F4: div         $zero, $s2, $s4
    lo = S32(S64(S32(ctx->r18)) / S64(S32(ctx->r20))); hi = S32(S64(S32(ctx->r18)) % S64(S32(ctx->r20)));
    // 0x8006D6F8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8006D6FC: bne         $s4, $zero, L_8006D708
    if (ctx->r20 != 0) {
        // 0x8006D700: nop
    
            goto L_8006D708;
    }
    // 0x8006D700: nop

    // 0x8006D704: break       7
    do_break(2147931908);
L_8006D708:
    // 0x8006D708: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8006D70C: bne         $s4, $at, L_8006D720
    if (ctx->r20 != ctx->r1) {
        // 0x8006D710: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8006D720;
    }
    // 0x8006D710: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8006D714: bne         $s2, $at, L_8006D720
    if (ctx->r18 != ctx->r1) {
        // 0x8006D718: nop
    
            goto L_8006D720;
    }
    // 0x8006D718: nop

    // 0x8006D71C: break       6
    do_break(2147931932);
L_8006D720:
    // 0x8006D720: mflo        $a1
    ctx->r5 = lo;
    // 0x8006D724: andi        $t8, $a1, 0xFF
    ctx->r24 = ctx->r5 & 0XFF;
    // 0x8006D728: jal         0x80018604
    // 0x8006D72C: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    func_80018604(rdram, ctx);
        goto after_9;
    // 0x8006D72C: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    after_9:
L_8006D730:
    // 0x8006D730: jal         0x80007AB0
    // 0x8006D734: nop

    func_80007AB0(rdram, ctx);
        goto after_10;
    // 0x8006D734: nop

    after_10:
    // 0x8006D738: bne         $s3, $s5, L_8006D684
    if (ctx->r19 != ctx->r21) {
        // 0x8006D73C: or          $s0, $s3, $zero
        ctx->r16 = ctx->r19 | 0;
            goto L_8006D684;
    }
    // 0x8006D73C: or          $s0, $s3, $zero
    ctx->r16 = ctx->r19 | 0;
L_8006D740:
    // 0x8006D740: addiu       $s0, $sp, 0xDC
    ctx->r16 = ADD32(ctx->r29, 0XDC);
    // 0x8006D744: addiu       $s2, $s0, 0x4
    ctx->r18 = ADD32(ctx->r16, 0X4);
L_8006D748:
    // 0x8006D748: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8006D74C: jal         0x8001C568
    // 0x8006D750: nop

    func_8001C568(rdram, ctx);
        goto after_11;
    // 0x8006D750: nop

    after_11:
    // 0x8006D754: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8006D758: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x8006D75C: bne         $at, $zero, L_8006D748
    if (ctx->r1 != 0) {
        // 0x8006D760: nop
    
            goto L_8006D748;
    }
    // 0x8006D760: nop

    // 0x8006D764: jal         0x8005CD50
    // 0x8006D768: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    func_8005CD50(rdram, ctx);
        goto after_12;
    // 0x8006D768: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    after_12:
    // 0x8006D76C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8006D770: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x8006D774: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8006D778: nop

    // 0x8006D77C: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8006D780: jal         0x80007AE0
    // 0x8006D784: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    func_80007AE0(rdram, ctx);
        goto after_13;
    // 0x8006D784: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    after_13:
    // 0x8006D788: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8006D78C: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x8006D790: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8006D794: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8006D798: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8006D79C: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x8006D7A0: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x8006D7A4: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x8006D7A8: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x8006D7AC: lw          $s4, 0x34($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X34);
    // 0x8006D7B0: lw          $s5, 0x38($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X38);
    // 0x8006D7B4: lw          $s6, 0x3C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X3C);
    // 0x8006D7B8: lw          $s7, 0x40($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X40);
    // 0x8006D7BC: jr          $ra
    // 0x8006D7C0: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
    return;
    // 0x8006D7C0: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
;}
RECOMP_FUNC void func_8006D7C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006D7C4: addiu       $sp, $sp, -0x110
    ctx->r29 = ADD32(ctx->r29, -0X110);
    // 0x8006D7C8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8006D7CC: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x8006D7D0: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x8006D7D4: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x8006D7D8: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x8006D7DC: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8006D7E0: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8006D7E4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8006D7E8: jal         0x80007774
    // 0x8006D7EC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x8006D7EC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x8006D7F0: lw          $s7, 0x1C($v0)
    ctx->r23 = MEM_W(ctx->r2, 0X1C);
    // 0x8006D7F4: addiu       $a0, $zero, 0x785
    ctx->r4 = ADD32(0, 0X785);
    // 0x8006D7F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8006D7FC: jal         0x8001D138
    // 0x8006D800: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x8006D800: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8006D804: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8006D808: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8006D80C: jal         0x80019164
    // 0x8006D810: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x8006D810: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    after_2:
    // 0x8006D814: sw          $s0, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->r16;
    // 0x8006D818: addiu       $a0, $zero, 0x7A9
    ctx->r4 = ADD32(0, 0X7A9);
    // 0x8006D81C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8006D820: jal         0x8001D138
    // 0x8006D824: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_3;
    // 0x8006D824: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x8006D828: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8006D82C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8006D830: jal         0x80019164
    // 0x8006D834: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    func_80019164(rdram, ctx);
        goto after_4;
    // 0x8006D834: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    after_4:
    // 0x8006D838: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006D83C: addiu       $a1, $zero, 0x7A9
    ctx->r5 = ADD32(0, 0X7A9);
    // 0x8006D840: jal         0x8001C468
    // 0x8006D844: sw          $s0, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->r16;
    func_8001C468(rdram, ctx);
        goto after_5;
    // 0x8006D844: sw          $s0, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->r16;
    after_5:
    // 0x8006D848: lw          $a0, 0x104($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X104);
    // 0x8006D84C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8006D850: jal         0x800192E8
    // 0x8006D854: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800192E8(rdram, ctx);
        goto after_6;
    // 0x8006D854: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
    // 0x8006D858: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8006D85C: lw          $a0, 0x100($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X100);
    // 0x8006D860: addiu       $a1, $sp, 0xBC
    ctx->r5 = ADD32(ctx->r29, 0XBC);
    // 0x8006D864: swc1        $f0, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f0.u32l;
    // 0x8006D868: swc1        $f0, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f0.u32l;
    // 0x8006D86C: jal         0x80019114
    // 0x8006D870: swc1        $f0, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f0.u32l;
    func_80019114(rdram, ctx);
        goto after_7;
    // 0x8006D870: swc1        $f0, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f0.u32l;
    after_7:
    // 0x8006D874: lw          $s0, 0x100($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X100);
    // 0x8006D878: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8006D87C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8006D880: jal         0x80018658
    // 0x8006D884: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80018658(rdram, ctx);
        goto after_8;
    // 0x8006D884: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x8006D888: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006D88C: jal         0x80018604
    // 0x8006D890: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    func_80018604(rdram, ctx);
        goto after_9;
    // 0x8006D890: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_9:
    // 0x8006D894: lw          $a0, 0x104($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X104);
    // 0x8006D898: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8006D89C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8006D8A0: jal         0x80018658
    // 0x8006D8A4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_80018658(rdram, ctx);
        goto after_10;
    // 0x8006D8A4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_10:
    // 0x8006D8A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006D8AC: jal         0x80018604
    // 0x8006D8B0: addiu       $a1, $zero, 0xCC
    ctx->r5 = ADD32(0, 0XCC);
    func_80018604(rdram, ctx);
        goto after_11;
    // 0x8006D8B0: addiu       $a1, $zero, 0xCC
    ctx->r5 = ADD32(0, 0XCC);
    after_11:
    // 0x8006D8B4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8006D8B8: addiu       $s6, $zero, 0xF
    ctx->r22 = ADD32(0, 0XF);
    // 0x8006D8BC: addiu       $s3, $zero, 0x5
    ctx->r19 = ADD32(0, 0X5);
L_8006D8C0:
    // 0x8006D8C0: lw          $t6, 0x24($s7)
    ctx->r14 = MEM_W(ctx->r23, 0X24);
    // 0x8006D8C4: addiu       $s5, $s1, 0x1
    ctx->r21 = ADD32(ctx->r17, 0X1);
    // 0x8006D8C8: andi        $t7, $t6, 0x4000
    ctx->r15 = ctx->r14 & 0X4000;
    // 0x8006D8CC: bne         $t7, $zero, L_8006DA04
    if (ctx->r15 != 0) {
        // 0x8006D8D0: addiu       $s0, $sp, 0x100
        ctx->r16 = ADD32(ctx->r29, 0X100);
            goto L_8006DA04;
    }
    // 0x8006D8D0: addiu       $s0, $sp, 0x100
    ctx->r16 = ADD32(ctx->r29, 0X100);
    // 0x8006D8D4: mtc1        $s5, $f4
    ctx->f4.u32l = ctx->r21;
    // 0x8006D8D8: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x8006D8DC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8006D8E0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8006D8E4: nop

    // 0x8006D8E8: mul.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8006D8EC: jal         0x80028C2C
    // 0x8006D8F0: nop

    func_80028C2C(rdram, ctx);
        goto after_12;
    // 0x8006D8F0: nop

    after_12:
    // 0x8006D8F4: add.s       $f2, $f0, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x8006D8F8: lw          $a0, 0x100($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X100);
    // 0x8006D8FC: swc1        $f2, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f2.u32l;
    // 0x8006D900: swc1        $f2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f2.u32l;
    // 0x8006D904: swc1        $f2, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f2.u32l;
    // 0x8006D908: jal         0x80019114
    // 0x8006D90C: addiu       $a1, $sp, 0x84
    ctx->r5 = ADD32(ctx->r29, 0X84);
    func_80019114(rdram, ctx);
        goto after_13;
    // 0x8006D90C: addiu       $a1, $sp, 0x84
    ctx->r5 = ADD32(ctx->r29, 0X84);
    after_13:
    // 0x8006D910: slti        $at, $s1, 0xA
    ctx->r1 = SIGNED(ctx->r17) < 0XA ? 1 : 0;
    // 0x8006D914: bne         $at, $zero, L_8006D9F0
    if (ctx->r1 != 0) {
        // 0x8006D918: subu        $s0, $s6, $s1
        ctx->r16 = SUB32(ctx->r22, ctx->r17);
            goto L_8006D9F0;
    }
    // 0x8006D918: subu        $s0, $s6, $s1
    ctx->r16 = SUB32(ctx->r22, ctx->r17);
    // 0x8006D91C: sll         $s4, $s0, 2
    ctx->r20 = S32(ctx->r16 << 2);
    // 0x8006D920: subu        $s4, $s4, $s0
    ctx->r20 = SUB32(ctx->r20, ctx->r16);
    // 0x8006D924: sll         $s4, $s4, 2
    ctx->r20 = S32(ctx->r20 << 2);
    // 0x8006D928: addu        $s4, $s4, $s0
    ctx->r20 = ADD32(ctx->r20, ctx->r16);
    // 0x8006D92C: sll         $s4, $s4, 2
    ctx->r20 = S32(ctx->r20 << 2);
    // 0x8006D930: subu        $s4, $s4, $s0
    ctx->r20 = SUB32(ctx->r20, ctx->r16);
    // 0x8006D934: lw          $s2, 0x100($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X100);
    // 0x8006D938: sll         $s4, $s4, 2
    ctx->r20 = S32(ctx->r20 << 2);
    // 0x8006D93C: bne         $s3, $s0, L_8006D960
    if (ctx->r19 != ctx->r16) {
        // 0x8006D940: sll         $v0, $s0, 6
        ctx->r2 = S32(ctx->r16 << 6);
            goto L_8006D960;
    }
    // 0x8006D940: sll         $v0, $s0, 6
    ctx->r2 = S32(ctx->r16 << 6);
    // 0x8006D944: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8006D948: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8006D94C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8006D950: jal         0x80018658
    // 0x8006D954: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    func_80018658(rdram, ctx);
        goto after_14;
    // 0x8006D954: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    after_14:
    // 0x8006D958: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x8006D95C: nop

L_8006D960:
    // 0x8006D960: div         $zero, $v0, $s3
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r19))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r19)));
    // 0x8006D964: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8006D968: bne         $s3, $zero, L_8006D974
    if (ctx->r19 != 0) {
        // 0x8006D96C: nop
    
            goto L_8006D974;
    }
    // 0x8006D96C: nop

    // 0x8006D970: break       7
    do_break(2147932528);
L_8006D974:
    // 0x8006D974: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8006D978: bne         $s3, $at, L_8006D98C
    if (ctx->r19 != ctx->r1) {
        // 0x8006D97C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8006D98C;
    }
    // 0x8006D97C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8006D980: bne         $v0, $at, L_8006D98C
    if (ctx->r2 != ctx->r1) {
        // 0x8006D984: nop
    
            goto L_8006D98C;
    }
    // 0x8006D984: nop

    // 0x8006D988: break       6
    do_break(2147932552);
L_8006D98C:
    // 0x8006D98C: mflo        $a1
    ctx->r5 = lo;
    // 0x8006D990: andi        $t8, $a1, 0xFF
    ctx->r24 = ctx->r5 & 0XFF;
    // 0x8006D994: jal         0x80018604
    // 0x8006D998: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    func_80018604(rdram, ctx);
        goto after_15;
    // 0x8006D998: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    after_15:
    // 0x8006D99C: lw          $a0, 0x104($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X104);
    // 0x8006D9A0: bne         $s3, $s0, L_8006D9B4
    if (ctx->r19 != ctx->r16) {
        // 0x8006D9A4: or          $s1, $a0, $zero
        ctx->r17 = ctx->r4 | 0;
            goto L_8006D9B4;
    }
    // 0x8006D9A4: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8006D9A8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8006D9AC: jal         0x80018658
    // 0x8006D9B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80018658(rdram, ctx);
        goto after_16;
    // 0x8006D9B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_16:
L_8006D9B4:
    // 0x8006D9B4: div         $zero, $s4, $s3
    lo = S32(S64(S32(ctx->r20)) / S64(S32(ctx->r19))); hi = S32(S64(S32(ctx->r20)) % S64(S32(ctx->r19)));
    // 0x8006D9B8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8006D9BC: bne         $s3, $zero, L_8006D9C8
    if (ctx->r19 != 0) {
        // 0x8006D9C0: nop
    
            goto L_8006D9C8;
    }
    // 0x8006D9C0: nop

    // 0x8006D9C4: break       7
    do_break(2147932612);
L_8006D9C8:
    // 0x8006D9C8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8006D9CC: bne         $s3, $at, L_8006D9E0
    if (ctx->r19 != ctx->r1) {
        // 0x8006D9D0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8006D9E0;
    }
    // 0x8006D9D0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8006D9D4: bne         $s4, $at, L_8006D9E0
    if (ctx->r20 != ctx->r1) {
        // 0x8006D9D8: nop
    
            goto L_8006D9E0;
    }
    // 0x8006D9D8: nop

    // 0x8006D9DC: break       6
    do_break(2147932636);
L_8006D9E0:
    // 0x8006D9E0: mflo        $a1
    ctx->r5 = lo;
    // 0x8006D9E4: andi        $t9, $a1, 0xFF
    ctx->r25 = ctx->r5 & 0XFF;
    // 0x8006D9E8: jal         0x80018604
    // 0x8006D9EC: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    func_80018604(rdram, ctx);
        goto after_17;
    // 0x8006D9EC: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    after_17:
L_8006D9F0:
    // 0x8006D9F0: jal         0x80007AB0
    // 0x8006D9F4: nop

    func_80007AB0(rdram, ctx);
        goto after_18;
    // 0x8006D9F4: nop

    after_18:
    // 0x8006D9F8: bne         $s5, $s6, L_8006D8C0
    if (ctx->r21 != ctx->r22) {
        // 0x8006D9FC: or          $s1, $s5, $zero
        ctx->r17 = ctx->r21 | 0;
            goto L_8006D8C0;
    }
    // 0x8006D9FC: or          $s1, $s5, $zero
    ctx->r17 = ctx->r21 | 0;
    // 0x8006DA00: addiu       $s0, $sp, 0x100
    ctx->r16 = ADD32(ctx->r29, 0X100);
L_8006DA04:
    // 0x8006DA04: addiu       $s2, $s0, 0x8
    ctx->r18 = ADD32(ctx->r16, 0X8);
L_8006DA08:
    // 0x8006DA08: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8006DA0C: jal         0x8001C568
    // 0x8006DA10: nop

    func_8001C568(rdram, ctx);
        goto after_19;
    // 0x8006DA10: nop

    after_19:
    // 0x8006DA14: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8006DA18: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x8006DA1C: bne         $at, $zero, L_8006DA08
    if (ctx->r1 != 0) {
        // 0x8006DA20: nop
    
            goto L_8006DA08;
    }
    // 0x8006DA20: nop

    // 0x8006DA24: jal         0x8005CD50
    // 0x8006DA28: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    func_8005CD50(rdram, ctx);
        goto after_20;
    // 0x8006DA28: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    after_20:
    // 0x8006DA2C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8006DA30: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x8006DA34: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x8006DA38: nop

    // 0x8006DA3C: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x8006DA40: jal         0x80007AE0
    // 0x8006DA44: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    func_80007AE0(rdram, ctx);
        goto after_21;
    // 0x8006DA44: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    after_21:
    // 0x8006DA48: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8006DA4C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8006DA50: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8006DA54: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8006DA58: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8006DA5C: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x8006DA60: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x8006DA64: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x8006DA68: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x8006DA6C: jr          $ra
    // 0x8006DA70: addiu       $sp, $sp, 0x110
    ctx->r29 = ADD32(ctx->r29, 0X110);
    return;
    // 0x8006DA70: addiu       $sp, $sp, 0x110
    ctx->r29 = ADD32(ctx->r29, 0X110);
;}
RECOMP_FUNC void func_8006DA74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006DA74: addiu       $sp, $sp, -0xD8
    ctx->r29 = ADD32(ctx->r29, -0XD8);
    // 0x8006DA78: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8006DA7C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8006DA80: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8006DA84: jal         0x80007774
    // 0x8006DA88: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x8006DA88: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x8006DA8C: lw          $s2, 0x1C($v0)
    ctx->r18 = MEM_W(ctx->r2, 0X1C);
    // 0x8006DA90: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x8006DA94: sw          $t6, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r14;
    // 0x8006DA98: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    // 0x8006DA9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8006DAA0: jal         0x8001D138
    // 0x8006DAA4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x8006DAA4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8006DAA8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8006DAAC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8006DAB0: jal         0x80019164
    // 0x8006DAB4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x8006DAB4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_2:
    // 0x8006DAB8: sw          $s0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r16;
    // 0x8006DABC: addiu       $a0, $zero, 0x785
    ctx->r4 = ADD32(0, 0X785);
    // 0x8006DAC0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8006DAC4: jal         0x8001D138
    // 0x8006DAC8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_3;
    // 0x8006DAC8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x8006DACC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8006DAD0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8006DAD4: jal         0x80019164
    // 0x8006DAD8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_80019164(rdram, ctx);
        goto after_4;
    // 0x8006DAD8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_4:
    // 0x8006DADC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8006DAE0: lwc1        $f0, 0x6520($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6520);
    // 0x8006DAE4: lw          $a0, 0xC8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC8);
    // 0x8006DAE8: sw          $s0, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r16;
    // 0x8006DAEC: addiu       $a1, $sp, 0x84
    ctx->r5 = ADD32(ctx->r29, 0X84);
    // 0x8006DAF0: swc1        $f0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f0.u32l;
    // 0x8006DAF4: swc1        $f0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f0.u32l;
    // 0x8006DAF8: jal         0x80019114
    // 0x8006DAFC: swc1        $f0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f0.u32l;
    func_80019114(rdram, ctx);
        goto after_5;
    // 0x8006DAFC: swc1        $f0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f0.u32l;
    after_5:
    // 0x8006DB00: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8006DB04: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8006DB08: lw          $a0, 0xCC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XCC);
    // 0x8006DB0C: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    // 0x8006DB10: swc1        $f0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f0.u32l;
    // 0x8006DB14: swc1        $f0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f0.u32l;
    // 0x8006DB18: jal         0x80019114
    // 0x8006DB1C: swc1        $f0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f0.u32l;
    func_80019114(rdram, ctx);
        goto after_6;
    // 0x8006DB1C: swc1        $f0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f0.u32l;
    after_6:
    // 0x8006DB20: lw          $a0, 0xCC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XCC);
    // 0x8006DB24: jal         0x8001C468
    // 0x8006DB28: addiu       $a1, $zero, 0x7D1
    ctx->r5 = ADD32(0, 0X7D1);
    func_8001C468(rdram, ctx);
        goto after_7;
    // 0x8006DB28: addiu       $a1, $zero, 0x7D1
    ctx->r5 = ADD32(0, 0X7D1);
    after_7:
    // 0x8006DB2C: lw          $a0, 0xCC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XCC);
    // 0x8006DB30: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8006DB34: jal         0x800192E8
    // 0x8006DB38: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800192E8(rdram, ctx);
        goto after_8;
    // 0x8006DB38: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_8:
    // 0x8006DB3C: addiu       $a0, $zero, 0x5A
    ctx->r4 = ADD32(0, 0X5A);
    // 0x8006DB40: jal         0x8005D1B4
    // 0x8006DB44: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_8005D1B4(rdram, ctx);
        goto after_9;
    // 0x8006DB44: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_9:
    // 0x8006DB48: lw          $a0, 0xC8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC8);
    // 0x8006DB4C: jal         0x800191C0
    // 0x8006DB50: sw          $v0, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r2;
    func_800191C0(rdram, ctx);
        goto after_10;
    // 0x8006DB50: sw          $v0, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r2;
    after_10:
    // 0x8006DB54: lw          $a0, 0xCC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XCC);
    // 0x8006DB58: jal         0x800191C0
    // 0x8006DB5C: nop

    func_800191C0(rdram, ctx);
        goto after_11;
    // 0x8006DB5C: nop

    after_11:
    // 0x8006DB60: lw          $s0, 0xCC($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XCC);
    // 0x8006DB64: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8006DB68: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8006DB6C: jal         0x80018658
    // 0x8006DB70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80018658(rdram, ctx);
        goto after_12;
    // 0x8006DB70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x8006DB74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006DB78: jal         0x80018604
    // 0x8006DB7C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_80018604(rdram, ctx);
        goto after_13;
    // 0x8006DB7C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_13:
    // 0x8006DB80: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8006DB84: addiu       $s0, $zero, 0xF
    ctx->r16 = ADD32(0, 0XF);
L_8006DB88:
    // 0x8006DB88: lw          $t7, 0x24($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X24);
    // 0x8006DB8C: nop

    // 0x8006DB90: andi        $t8, $t7, 0x4000
    ctx->r24 = ctx->r15 & 0X4000;
    // 0x8006DB94: bne         $t8, $zero, L_8006DBB0
    if (ctx->r24 != 0) {
        // 0x8006DB98: nop
    
            goto L_8006DBB0;
    }
    // 0x8006DB98: nop

    // 0x8006DB9C: jal         0x80007AB0
    // 0x8006DBA0: nop

    func_80007AB0(rdram, ctx);
        goto after_14;
    // 0x8006DBA0: nop

    after_14:
    // 0x8006DBA4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8006DBA8: bne         $s1, $s0, L_8006DB88
    if (ctx->r17 != ctx->r16) {
        // 0x8006DBAC: nop
    
            goto L_8006DB88;
    }
    // 0x8006DBAC: nop

L_8006DBB0:
    // 0x8006DBB0: jal         0x8005D128
    // 0x8006DBB4: addiu       $a0, $sp, 0xC0
    ctx->r4 = ADD32(ctx->r29, 0XC0);
    func_8005D128(rdram, ctx);
        goto after_15;
    // 0x8006DBB4: addiu       $a0, $sp, 0xC0
    ctx->r4 = ADD32(ctx->r29, 0XC0);
    after_15:
    // 0x8006DBB8: lw          $a0, 0xC8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC8);
    // 0x8006DBBC: jal         0x800191D4
    // 0x8006DBC0: nop

    func_800191D4(rdram, ctx);
        goto after_16;
    // 0x8006DBC0: nop

    after_16:
    // 0x8006DBC4: lw          $a0, 0xCC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XCC);
    // 0x8006DBC8: jal         0x800191D4
    // 0x8006DBCC: nop

    func_800191D4(rdram, ctx);
        goto after_17;
    // 0x8006DBCC: nop

    after_17:
L_8006DBD0:
    // 0x8006DBD0: lw          $v0, 0x24($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X24);
    // 0x8006DBD4: lw          $a0, 0xC8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC8);
    // 0x8006DBD8: andi        $t9, $v0, 0x800
    ctx->r25 = ctx->r2 & 0X800;
    // 0x8006DBDC: beq         $t9, $zero, L_8006DC0C
    if (ctx->r25 == 0) {
        // 0x8006DBE0: andi        $t8, $v0, 0x4000
        ctx->r24 = ctx->r2 & 0X4000;
            goto L_8006DC0C;
    }
    // 0x8006DBE0: andi        $t8, $v0, 0x4000
    ctx->r24 = ctx->r2 & 0X4000;
    // 0x8006DBE4: jal         0x80019164
    // 0x8006DBE8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_80019164(rdram, ctx);
        goto after_18;
    // 0x8006DBE8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_18:
    // 0x8006DBEC: lw          $a0, 0xCC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XCC);
    // 0x8006DBF0: jal         0x80019164
    // 0x8006DBF4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_80019164(rdram, ctx);
        goto after_19;
    // 0x8006DBF4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_19:
    // 0x8006DBF8: lw          $t6, 0x24($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X24);
    // 0x8006DBFC: addiu       $at, $zero, -0x801
    ctx->r1 = ADD32(0, -0X801);
    // 0x8006DC00: and         $v0, $t6, $at
    ctx->r2 = ctx->r14 & ctx->r1;
    // 0x8006DC04: sw          $v0, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r2;
    // 0x8006DC08: andi        $t8, $v0, 0x4000
    ctx->r24 = ctx->r2 & 0X4000;
L_8006DC0C:
    // 0x8006DC0C: bne         $t8, $zero, L_8006DC74
    if (ctx->r24 != 0) {
        // 0x8006DC10: addiu       $s0, $s1, 0x1
        ctx->r16 = ADD32(ctx->r17, 0X1);
            goto L_8006DC74;
    }
    // 0x8006DC10: addiu       $s0, $s1, 0x1
    ctx->r16 = ADD32(ctx->r17, 0X1);
    // 0x8006DC14: mtc1        $s0, $f4
    ctx->f4.u32l = ctx->r16;
    // 0x8006DC18: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x8006DC1C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8006DC20: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8006DC24: nop

    // 0x8006DC28: mul.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8006DC2C: jal         0x80028C2C
    // 0x8006DC30: nop

    func_80028C2C(rdram, ctx);
        goto after_20;
    // 0x8006DC30: nop

    after_20:
    // 0x8006DC34: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8006DC38: lwc1        $f10, 0x6524($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X6524);
    // 0x8006DC3C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8006DC40: mul.s       $f4, $f0, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x8006DC44: lwc1        $f6, 0x6528($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6528);
    // 0x8006DC48: lw          $a0, 0xC8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC8);
    // 0x8006DC4C: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x8006DC50: add.s       $f2, $f4, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8006DC54: swc1        $f2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f2.u32l;
    // 0x8006DC58: swc1        $f2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f2.u32l;
    // 0x8006DC5C: jal         0x80019114
    // 0x8006DC60: swc1        $f2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f2.u32l;
    func_80019114(rdram, ctx);
        goto after_21;
    // 0x8006DC60: swc1        $f2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f2.u32l;
    after_21:
    // 0x8006DC64: jal         0x80007AB0
    // 0x8006DC68: nop

    func_80007AB0(rdram, ctx);
        goto after_22;
    // 0x8006DC68: nop

    after_22:
    // 0x8006DC6C: b           L_8006DBD0
    // 0x8006DC70: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
        goto L_8006DBD0;
    // 0x8006DC70: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
L_8006DC74:
    // 0x8006DC74: jal         0x8005D128
    // 0x8006DC78: addiu       $a0, $sp, 0xC0
    ctx->r4 = ADD32(ctx->r29, 0XC0);
    func_8005D128(rdram, ctx);
        goto after_23;
    // 0x8006DC78: addiu       $a0, $sp, 0xC0
    ctx->r4 = ADD32(ctx->r29, 0XC0);
    after_23:
    // 0x8006DC7C: addiu       $s0, $sp, 0xC8
    ctx->r16 = ADD32(ctx->r29, 0XC8);
    // 0x8006DC80: addiu       $v0, $s0, 0x8
    ctx->r2 = ADD32(ctx->r16, 0X8);
L_8006DC84:
    // 0x8006DC84: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8006DC88: jal         0x8001C568
    // 0x8006DC8C: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    func_8001C568(rdram, ctx);
        goto after_24;
    // 0x8006DC8C: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_24:
    // 0x8006DC90: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x8006DC94: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8006DC98: sltu        $at, $s0, $v0
    ctx->r1 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x8006DC9C: bne         $at, $zero, L_8006DC84
    if (ctx->r1 != 0) {
        // 0x8006DCA0: nop
    
            goto L_8006DC84;
    }
    // 0x8006DCA0: nop

    // 0x8006DCA4: jal         0x8005CD50
    // 0x8006DCA8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_8005CD50(rdram, ctx);
        goto after_25;
    // 0x8006DCA8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_25:
    // 0x8006DCAC: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8006DCB0: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x8006DCB4: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8006DCB8: nop

    // 0x8006DCBC: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8006DCC0: jal         0x80007AE0
    // 0x8006DCC4: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    func_80007AE0(rdram, ctx);
        goto after_26;
    // 0x8006DCC4: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    after_26:
    // 0x8006DCC8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8006DCCC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8006DCD0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8006DCD4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8006DCD8: jr          $ra
    // 0x8006DCDC: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
    return;
    // 0x8006DCDC: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
;}
RECOMP_FUNC void func_8006DCE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006DCE0: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x8006DCE4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8006DCE8: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x8006DCEC: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8006DCF0: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8006DCF4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8006DCF8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8006DCFC: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8006DD00: jal         0x80007774
    // 0x8006DD04: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x8006DD04: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x8006DD08: lw          $s2, 0x1C($v0)
    ctx->r18 = MEM_W(ctx->r2, 0X1C);
    // 0x8006DD0C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8006DD10: addiu       $a0, $zero, 0x77D
    ctx->r4 = ADD32(0, 0X77D);
    // 0x8006DD14: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8006DD18: jal         0x8001D138
    // 0x8006DD1C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x8006DD1C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8006DD20: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8006DD24: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8006DD28: jal         0x80019164
    // 0x8006DD2C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x8006DD2C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_2:
    // 0x8006DD30: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8006DD34: sw          $s0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r16;
    // 0x8006DD38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006DD3C: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    // 0x8006DD40: swc1        $f0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f0.u32l;
    // 0x8006DD44: swc1        $f0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f0.u32l;
    // 0x8006DD48: jal         0x80019114
    // 0x8006DD4C: swc1        $f0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f0.u32l;
    func_80019114(rdram, ctx);
        goto after_3;
    // 0x8006DD4C: swc1        $f0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f0.u32l;
    after_3:
    // 0x8006DD50: lw          $a0, 0x9C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X9C);
    // 0x8006DD54: jal         0x8001C468
    // 0x8006DD58: addiu       $a1, $zero, 0x7CD
    ctx->r5 = ADD32(0, 0X7CD);
    func_8001C468(rdram, ctx);
        goto after_4;
    // 0x8006DD58: addiu       $a1, $zero, 0x7CD
    ctx->r5 = ADD32(0, 0X7CD);
    after_4:
    // 0x8006DD5C: lw          $a0, 0x9C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X9C);
    // 0x8006DD60: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8006DD64: jal         0x800192E8
    // 0x8006DD68: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800192E8(rdram, ctx);
        goto after_5;
    // 0x8006DD68: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x8006DD6C: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x8006DD70: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x8006DD74: addiu       $s4, $zero, -0x801
    ctx->r20 = ADD32(0, -0X801);
    // 0x8006DD78: addiu       $s3, $sp, 0x54
    ctx->r19 = ADD32(ctx->r29, 0X54);
L_8006DD7C:
    // 0x8006DD7C: lw          $v0, 0x24($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X24);
    // 0x8006DD80: slti        $at, $s1, 0x12
    ctx->r1 = SIGNED(ctx->r17) < 0X12 ? 1 : 0;
    // 0x8006DD84: andi        $t6, $v0, 0x4000
    ctx->r14 = ctx->r2 & 0X4000;
    // 0x8006DD88: bne         $t6, $zero, L_8006DE08
    if (ctx->r14 != 0) {
        // 0x8006DD8C: addiu       $t7, $s1, 0x1
        ctx->r15 = ADD32(ctx->r17, 0X1);
            goto L_8006DE08;
    }
    // 0x8006DD8C: addiu       $t7, $s1, 0x1
    ctx->r15 = ADD32(ctx->r17, 0X1);
    // 0x8006DD90: beq         $at, $zero, L_8006DDD4
    if (ctx->r1 == 0) {
        // 0x8006DD94: andi        $t8, $v0, 0x800
        ctx->r24 = ctx->r2 & 0X800;
            goto L_8006DDD4;
    }
    // 0x8006DD94: andi        $t8, $v0, 0x800
    ctx->r24 = ctx->r2 & 0X800;
    // 0x8006DD98: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8006DD9C: nop

    // 0x8006DDA0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8006DDA4: mul.s       $f12, $f6, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x8006DDA8: jal         0x80028C2C
    // 0x8006DDAC: nop

    func_80028C2C(rdram, ctx);
        goto after_6;
    // 0x8006DDAC: nop

    after_6:
    // 0x8006DDB0: lw          $a0, 0x9C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X9C);
    // 0x8006DDB4: swc1        $f0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f0.u32l;
    // 0x8006DDB8: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
    // 0x8006DDBC: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    // 0x8006DDC0: jal         0x80019114
    // 0x8006DDC4: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_80019114(rdram, ctx);
        goto after_7;
    // 0x8006DDC4: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_7:
    // 0x8006DDC8: lw          $v0, 0x24($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X24);
    // 0x8006DDCC: nop

    // 0x8006DDD0: andi        $t8, $v0, 0x800
    ctx->r24 = ctx->r2 & 0X800;
L_8006DDD4:
    // 0x8006DDD4: beq         $t8, $zero, L_8006DDF8
    if (ctx->r24 == 0) {
        // 0x8006DDD8: addiu       $s0, $s1, 0x1
        ctx->r16 = ADD32(ctx->r17, 0X1);
            goto L_8006DDF8;
    }
    // 0x8006DDD8: addiu       $s0, $s1, 0x1
    ctx->r16 = ADD32(ctx->r17, 0X1);
    // 0x8006DDDC: lw          $a0, 0x9C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X9C);
    // 0x8006DDE0: jal         0x80019164
    // 0x8006DDE4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_80019164(rdram, ctx);
        goto after_8;
    // 0x8006DDE4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_8:
    // 0x8006DDE8: lw          $t9, 0x24($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X24);
    // 0x8006DDEC: nop

    // 0x8006DDF0: and         $t6, $t9, $s4
    ctx->r14 = ctx->r25 & ctx->r20;
    // 0x8006DDF4: sw          $t6, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r14;
L_8006DDF8:
    // 0x8006DDF8: jal         0x80007AB0
    // 0x8006DDFC: nop

    func_80007AB0(rdram, ctx);
        goto after_9;
    // 0x8006DDFC: nop

    after_9:
    // 0x8006DE00: b           L_8006DD7C
    // 0x8006DE04: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
        goto L_8006DD7C;
    // 0x8006DE04: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
L_8006DE08:
    // 0x8006DE08: addiu       $s0, $sp, 0x9C
    ctx->r16 = ADD32(ctx->r29, 0X9C);
    // 0x8006DE0C: addiu       $s3, $s0, 0x4
    ctx->r19 = ADD32(ctx->r16, 0X4);
L_8006DE10:
    // 0x8006DE10: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8006DE14: jal         0x8001C568
    // 0x8006DE18: nop

    func_8001C568(rdram, ctx);
        goto after_10;
    // 0x8006DE18: nop

    after_10:
    // 0x8006DE1C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8006DE20: sltu        $at, $s0, $s3
    ctx->r1 = ctx->r16 < ctx->r19 ? 1 : 0;
    // 0x8006DE24: bne         $at, $zero, L_8006DE10
    if (ctx->r1 != 0) {
        // 0x8006DE28: nop
    
            goto L_8006DE10;
    }
    // 0x8006DE28: nop

    // 0x8006DE2C: jal         0x8005CD50
    // 0x8006DE30: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_8005CD50(rdram, ctx);
        goto after_11;
    // 0x8006DE30: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_11:
    // 0x8006DE34: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8006DE38: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x8006DE3C: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x8006DE40: nop

    // 0x8006DE44: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x8006DE48: jal         0x80007AE0
    // 0x8006DE4C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    func_80007AE0(rdram, ctx);
        goto after_12;
    // 0x8006DE4C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    after_12:
    // 0x8006DE50: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8006DE54: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8006DE58: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8006DE5C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8006DE60: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8006DE64: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8006DE68: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8006DE6C: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x8006DE70: jr          $ra
    // 0x8006DE74: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    return;
    // 0x8006DE74: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
;}
RECOMP_FUNC void func_8006DE78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006DE78: addiu       $sp, $sp, -0x148
    ctx->r29 = ADD32(ctx->r29, -0X148);
    // 0x8006DE7C: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x8006DE80: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x8006DE84: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x8006DE88: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x8006DE8C: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x8006DE90: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x8006DE94: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x8006DE98: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x8006DE9C: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8006DEA0: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8006DEA4: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x8006DEA8: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x8006DEAC: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8006DEB0: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x8006DEB4: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8006DEB8: jal         0x80007774
    // 0x8006DEBC: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x8006DEBC: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x8006DEC0: lw          $fp, 0x1C($v0)
    ctx->r30 = MEM_W(ctx->r2, 0X1C);
    // 0x8006DEC4: addiu       $a0, $zero, 0x798
    ctx->r4 = ADD32(0, 0X798);
    // 0x8006DEC8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8006DECC: jal         0x8001D138
    // 0x8006DED0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x8006DED0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8006DED4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8006DED8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8006DEDC: jal         0x80019164
    // 0x8006DEE0: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x8006DEE0: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    after_2:
    // 0x8006DEE4: sw          $s0, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->r16;
    // 0x8006DEE8: addiu       $a0, $zero, 0x799
    ctx->r4 = ADD32(0, 0X799);
    // 0x8006DEEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8006DEF0: jal         0x8001D138
    // 0x8006DEF4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_3;
    // 0x8006DEF4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x8006DEF8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8006DEFC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8006DF00: jal         0x80019164
    // 0x8006DF04: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    func_80019164(rdram, ctx);
        goto after_4;
    // 0x8006DF04: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    after_4:
    // 0x8006DF08: lw          $s1, 0x138($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X138);
    // 0x8006DF0C: sw          $s0, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->r16;
    // 0x8006DF10: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8006DF14: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8006DF18: jal         0x80018658
    // 0x8006DF1C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80018658(rdram, ctx);
        goto after_5;
    // 0x8006DF1C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_5:
    // 0x8006DF20: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8006DF24: jal         0x80018604
    // 0x8006DF28: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_80018604(rdram, ctx);
        goto after_6;
    // 0x8006DF28: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_6:
    // 0x8006DF2C: lw          $s0, 0x13C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X13C);
    // 0x8006DF30: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8006DF34: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8006DF38: jal         0x80018658
    // 0x8006DF3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80018658(rdram, ctx);
        goto after_7;
    // 0x8006DF3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x8006DF40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006DF44: jal         0x80018604
    // 0x8006DF48: addiu       $a1, $zero, 0x4B
    ctx->r5 = ADD32(0, 0X4B);
    func_80018604(rdram, ctx);
        goto after_8;
    // 0x8006DF48: addiu       $a1, $zero, 0x4B
    ctx->r5 = ADD32(0, 0X4B);
    after_8:
    // 0x8006DF4C: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x8006DF50: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x8006DF54: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x8006DF58: jal         0x80009A84
    // 0x8006DF5C: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    func_80009A84(rdram, ctx);
        goto after_9;
    // 0x8006DF5C: lui         $a3, 0x4248
    ctx->r7 = S32(0X4248 << 16);
    after_9:
    // 0x8006DF60: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8006DF64: lwc1        $f25, 0x6530($at)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r1, 0X6530);
    // 0x8006DF68: lwc1        $f24, 0x6534($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X6534);
    // 0x8006DF6C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8006DF70: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x8006DF74: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8006DF78: addiu       $s7, $zero, 0x3C
    ctx->r23 = ADD32(0, 0X3C);
    // 0x8006DF7C: addiu       $s6, $sp, 0x12C
    ctx->r22 = ADD32(ctx->r29, 0X12C);
    // 0x8006DF80: addiu       $s5, $zero, 0x14
    ctx->r21 = ADD32(0, 0X14);
L_8006DF84:
    // 0x8006DF84: lw          $v0, 0x24($fp)
    ctx->r2 = MEM_W(ctx->r30, 0X24);
    // 0x8006DF88: addiu       $at, $zero, -0x101
    ctx->r1 = ADD32(0, -0X101);
    // 0x8006DF8C: andi        $t6, $v0, 0x4000
    ctx->r14 = ctx->r2 & 0X4000;
    // 0x8006DF90: bne         $t6, $zero, L_8006E224
    if (ctx->r14 != 0) {
        // 0x8006DF94: andi        $t7, $v0, 0x100
        ctx->r15 = ctx->r2 & 0X100;
            goto L_8006E224;
    }
    // 0x8006DF94: andi        $t7, $v0, 0x100
    ctx->r15 = ctx->r2 & 0X100;
    // 0x8006DF98: beq         $t7, $zero, L_8006DFA4
    if (ctx->r15 == 0) {
        // 0x8006DF9C: and         $t8, $v0, $at
        ctx->r24 = ctx->r2 & ctx->r1;
            goto L_8006DFA4;
    }
    // 0x8006DF9C: and         $t8, $v0, $at
    ctx->r24 = ctx->r2 & ctx->r1;
    // 0x8006DFA0: sw          $t8, 0x24($fp)
    MEM_W(0X24, ctx->r30) = ctx->r24;
L_8006DFA4:
    // 0x8006DFA4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8006DFA8: bne         $s2, $at, L_8006DFC0
    if (ctx->r18 != ctx->r1) {
        // 0x8006DFAC: addiu       $a0, $zero, 0xFF
        ctx->r4 = ADD32(0, 0XFF);
            goto L_8006DFC0;
    }
    // 0x8006DFAC: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x8006DFB0: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x8006DFB4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x8006DFB8: jal         0x80009A84
    // 0x8006DFBC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_80009A84(rdram, ctx);
        goto after_10;
    // 0x8006DFBC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_10:
L_8006DFC0:
    // 0x8006DFC0: slti        $at, $s2, 0xA
    ctx->r1 = SIGNED(ctx->r18) < 0XA ? 1 : 0;
    // 0x8006DFC4: beq         $at, $zero, L_8006E018
    if (ctx->r1 == 0) {
        // 0x8006DFC8: addiu       $t9, $s2, -0x9
        ctx->r25 = ADD32(ctx->r18, -0X9);
            goto L_8006E018;
    }
    // 0x8006DFC8: addiu       $t9, $s2, -0x9
    ctx->r25 = ADD32(ctx->r18, -0X9);
    // 0x8006DFCC: addiu       $s3, $s2, 0x1
    ctx->r19 = ADD32(ctx->r18, 0X1);
    // 0x8006DFD0: mtc1        $s3, $f4
    ctx->f4.u32l = ctx->r19;
    // 0x8006DFD4: lui         $at, 0x4110
    ctx->r1 = S32(0X4110 << 16);
    // 0x8006DFD8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8006DFDC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8006DFE0: nop

    // 0x8006DFE4: mul.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8006DFE8: jal         0x80028C2C
    // 0x8006DFEC: nop

    func_80028C2C(rdram, ctx);
        goto after_11;
    // 0x8006DFEC: nop

    after_11:
    // 0x8006DFF0: add.s       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x8006DFF4: lw          $a0, 0x138($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X138);
    // 0x8006DFF8: add.s       $f20, $f10, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = ctx->f10.fl + ctx->f22.fl;
    // 0x8006DFFC: addiu       $a1, $sp, 0xBC
    ctx->r5 = ADD32(ctx->r29, 0XBC);
    // 0x8006E000: swc1        $f20, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f20.u32l;
    // 0x8006E004: swc1        $f20, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f20.u32l;
    // 0x8006E008: jal         0x80019114
    // 0x8006E00C: swc1        $f20, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f20.u32l;
    func_80019114(rdram, ctx);
        goto after_12;
    // 0x8006E00C: swc1        $f20, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f20.u32l;
    after_12:
    // 0x8006E010: b           L_8006E068
    // 0x8006E014: slti        $at, $s2, 0x5
    ctx->r1 = SIGNED(ctx->r18) < 0X5 ? 1 : 0;
        goto L_8006E068;
    // 0x8006E014: slti        $at, $s2, 0x5
    ctx->r1 = SIGNED(ctx->r18) < 0X5 ? 1 : 0;
L_8006E018:
    // 0x8006E018: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8006E01C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8006E020: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8006E024: lwc1        $f8, 0x6538($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X6538);
    // 0x8006E028: nop

    // 0x8006E02C: mul.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8006E030: jal         0x80028C2C
    // 0x8006E034: nop

    func_80028C2C(rdram, ctx);
        goto after_13;
    // 0x8006E034: nop

    after_13:
    // 0x8006E038: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x8006E03C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8006E040: add.s       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x8006E044: lw          $a0, 0x138($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X138);
    // 0x8006E048: add.s       $f20, $f10, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x8006E04C: addiu       $a1, $sp, 0xA4
    ctx->r5 = ADD32(ctx->r29, 0XA4);
    // 0x8006E050: swc1        $f20, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f20.u32l;
    // 0x8006E054: swc1        $f20, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f20.u32l;
    // 0x8006E058: jal         0x80019114
    // 0x8006E05C: swc1        $f20, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f20.u32l;
    func_80019114(rdram, ctx);
        goto after_14;
    // 0x8006E05C: swc1        $f20, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f20.u32l;
    after_14:
    // 0x8006E060: addiu       $s3, $s2, 0x1
    ctx->r19 = ADD32(ctx->r18, 0X1);
    // 0x8006E064: slti        $at, $s2, 0x5
    ctx->r1 = SIGNED(ctx->r18) < 0X5 ? 1 : 0;
L_8006E068:
    // 0x8006E068: swc1        $f20, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->f20.u32l;
    // 0x8006E06C: beq         $at, $zero, L_8006E0B0
    if (ctx->r1 == 0) {
        // 0x8006E070: swc1        $f20, 0x114($sp)
        MEM_W(0X114, ctx->r29) = ctx->f20.u32l;
            goto L_8006E0B0;
    }
    // 0x8006E070: swc1        $f20, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f20.u32l;
    // 0x8006E074: mtc1        $s3, $f6
    ctx->f6.u32l = ctx->r19;
    // 0x8006E078: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x8006E07C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8006E080: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8006E084: nop

    // 0x8006E088: mul.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8006E08C: jal         0x80028C2C
    // 0x8006E090: nop

    func_80028C2C(rdram, ctx);
        goto after_15;
    // 0x8006E090: nop

    after_15:
    // 0x8006E094: lui         $at, 0x4160
    ctx->r1 = S32(0X4160 << 16);
    // 0x8006E098: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8006E09C: nop

    // 0x8006E0A0: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8006E0A4: add.s       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f22.fl;
    // 0x8006E0A8: b           L_8006E0F4
    // 0x8006E0AC: swc1        $f8, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f8.u32l;
        goto L_8006E0F4;
    // 0x8006E0AC: swc1        $f8, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f8.u32l;
L_8006E0B0:
    // 0x8006E0B0: addiu       $t6, $s2, -0x9
    ctx->r14 = ADD32(ctx->r18, -0X9);
    // 0x8006E0B4: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x8006E0B8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8006E0BC: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8006E0C0: lwc1        $f6, 0x653C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X653C);
    // 0x8006E0C4: nop

    // 0x8006E0C8: mul.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8006E0CC: jal         0x80028C00
    // 0x8006E0D0: nop

    func_80028C00(rdram, ctx);
        goto after_16;
    // 0x8006E0D0: nop

    after_16:
    // 0x8006E0D4: lui         $at, 0x4158
    ctx->r1 = S32(0X4158 << 16);
    // 0x8006E0D8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8006E0DC: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x8006E0E0: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x8006E0E4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8006E0E8: nop

    // 0x8006E0EC: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x8006E0F0: swc1        $f6, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->f6.u32l;
L_8006E0F4:
    // 0x8006E0F4: lw          $a0, 0x13C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X13C);
    // 0x8006E0F8: jal         0x80019114
    // 0x8006E0FC: addiu       $a1, $sp, 0x114
    ctx->r5 = ADD32(ctx->r29, 0X114);
    func_80019114(rdram, ctx);
        goto after_17;
    // 0x8006E0FC: addiu       $a1, $sp, 0x114
    ctx->r5 = ADD32(ctx->r29, 0X114);
    after_17:
    // 0x8006E100: lw          $a0, 0x138($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X138);
    // 0x8006E104: jal         0x800190CC
    // 0x8006E108: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    func_800190CC(rdram, ctx);
        goto after_18;
    // 0x8006E108: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    after_18:
    // 0x8006E10C: lwc1        $f8, 0x130($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X130);
    // 0x8006E110: lw          $a0, 0x138($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X138);
    // 0x8006E114: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x8006E118: add.d       $f4, $f10, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f24.d); 
    ctx->f4.d = ctx->f10.d + ctx->f24.d;
    // 0x8006E11C: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x8006E120: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x8006E124: jal         0x8001913C
    // 0x8006E128: swc1        $f6, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->f6.u32l;
    func_8001913C(rdram, ctx);
        goto after_19;
    // 0x8006E128: swc1        $f6, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->f6.u32l;
    after_19:
    // 0x8006E12C: lw          $a0, 0x13C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X13C);
    // 0x8006E130: jal         0x8001913C
    // 0x8006E134: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    func_8001913C(rdram, ctx);
        goto after_20;
    // 0x8006E134: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    after_20:
    // 0x8006E138: slti        $at, $s2, 0x28
    ctx->r1 = SIGNED(ctx->r18) < 0X28 ? 1 : 0;
    // 0x8006E13C: bne         $at, $zero, L_8006E214
    if (ctx->r1 != 0) {
        // 0x8006E140: subu        $s0, $s7, $s2
        ctx->r16 = SUB32(ctx->r23, ctx->r18);
            goto L_8006E214;
    }
    // 0x8006E140: subu        $s0, $s7, $s2
    ctx->r16 = SUB32(ctx->r23, ctx->r18);
    // 0x8006E144: sll         $s4, $s0, 2
    ctx->r20 = S32(ctx->r16 << 2);
    // 0x8006E148: addu        $s4, $s4, $s0
    ctx->r20 = ADD32(ctx->r20, ctx->r16);
    // 0x8006E14C: sll         $s4, $s4, 2
    ctx->r20 = S32(ctx->r20 << 2);
    // 0x8006E150: subu        $s4, $s4, $s0
    ctx->r20 = SUB32(ctx->r20, ctx->r16);
    // 0x8006E154: sll         $s4, $s4, 2
    ctx->r20 = S32(ctx->r20 << 2);
    // 0x8006E158: lw          $s1, 0x138($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X138);
    // 0x8006E15C: subu        $s4, $s4, $s0
    ctx->r20 = SUB32(ctx->r20, ctx->r16);
    // 0x8006E160: bne         $s5, $s0, L_8006E184
    if (ctx->r21 != ctx->r16) {
        // 0x8006E164: sll         $v0, $s0, 7
        ctx->r2 = S32(ctx->r16 << 7);
            goto L_8006E184;
    }
    // 0x8006E164: sll         $v0, $s0, 7
    ctx->r2 = S32(ctx->r16 << 7);
    // 0x8006E168: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8006E16C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8006E170: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8006E174: jal         0x80018658
    // 0x8006E178: sw          $v0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r2;
    func_80018658(rdram, ctx);
        goto after_21;
    // 0x8006E178: sw          $v0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r2;
    after_21:
    // 0x8006E17C: lw          $v0, 0x58($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X58);
    // 0x8006E180: nop

L_8006E184:
    // 0x8006E184: div         $zero, $v0, $s5
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r21))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r21)));
    // 0x8006E188: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8006E18C: bne         $s5, $zero, L_8006E198
    if (ctx->r21 != 0) {
        // 0x8006E190: nop
    
            goto L_8006E198;
    }
    // 0x8006E190: nop

    // 0x8006E194: break       7
    do_break(2147934612);
L_8006E198:
    // 0x8006E198: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8006E19C: bne         $s5, $at, L_8006E1B0
    if (ctx->r21 != ctx->r1) {
        // 0x8006E1A0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8006E1B0;
    }
    // 0x8006E1A0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8006E1A4: bne         $v0, $at, L_8006E1B0
    if (ctx->r2 != ctx->r1) {
        // 0x8006E1A8: nop
    
            goto L_8006E1B0;
    }
    // 0x8006E1A8: nop

    // 0x8006E1AC: break       6
    do_break(2147934636);
L_8006E1B0:
    // 0x8006E1B0: mflo        $a1
    ctx->r5 = lo;
    // 0x8006E1B4: andi        $t7, $a1, 0xFF
    ctx->r15 = ctx->r5 & 0XFF;
    // 0x8006E1B8: jal         0x80018604
    // 0x8006E1BC: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    func_80018604(rdram, ctx);
        goto after_22;
    // 0x8006E1BC: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    after_22:
    // 0x8006E1C0: lw          $s1, 0x13C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X13C);
    // 0x8006E1C4: bne         $s5, $s0, L_8006E1D8
    if (ctx->r21 != ctx->r16) {
        // 0x8006E1C8: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_8006E1D8;
    }
    // 0x8006E1C8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8006E1CC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8006E1D0: jal         0x80018658
    // 0x8006E1D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80018658(rdram, ctx);
        goto after_23;
    // 0x8006E1D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_23:
L_8006E1D8:
    // 0x8006E1D8: div         $zero, $s4, $s5
    lo = S32(S64(S32(ctx->r20)) / S64(S32(ctx->r21))); hi = S32(S64(S32(ctx->r20)) % S64(S32(ctx->r21)));
    // 0x8006E1DC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8006E1E0: bne         $s5, $zero, L_8006E1EC
    if (ctx->r21 != 0) {
        // 0x8006E1E4: nop
    
            goto L_8006E1EC;
    }
    // 0x8006E1E4: nop

    // 0x8006E1E8: break       7
    do_break(2147934696);
L_8006E1EC:
    // 0x8006E1EC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8006E1F0: bne         $s5, $at, L_8006E204
    if (ctx->r21 != ctx->r1) {
        // 0x8006E1F4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8006E204;
    }
    // 0x8006E1F4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8006E1F8: bne         $s4, $at, L_8006E204
    if (ctx->r20 != ctx->r1) {
        // 0x8006E1FC: nop
    
            goto L_8006E204;
    }
    // 0x8006E1FC: nop

    // 0x8006E200: break       6
    do_break(2147934720);
L_8006E204:
    // 0x8006E204: mflo        $a1
    ctx->r5 = lo;
    // 0x8006E208: andi        $t8, $a1, 0xFF
    ctx->r24 = ctx->r5 & 0XFF;
    // 0x8006E20C: jal         0x80018604
    // 0x8006E210: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    func_80018604(rdram, ctx);
        goto after_24;
    // 0x8006E210: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    after_24:
L_8006E214:
    // 0x8006E214: jal         0x80007AB0
    // 0x8006E218: nop

    func_80007AB0(rdram, ctx);
        goto after_25;
    // 0x8006E218: nop

    after_25:
    // 0x8006E21C: bne         $s3, $s7, L_8006DF84
    if (ctx->r19 != ctx->r23) {
        // 0x8006E220: or          $s2, $s3, $zero
        ctx->r18 = ctx->r19 | 0;
            goto L_8006DF84;
    }
    // 0x8006E220: or          $s2, $s3, $zero
    ctx->r18 = ctx->r19 | 0;
L_8006E224:
    // 0x8006E224: addiu       $s0, $sp, 0x138
    ctx->r16 = ADD32(ctx->r29, 0X138);
    // 0x8006E228: addiu       $s2, $s0, 0x8
    ctx->r18 = ADD32(ctx->r16, 0X8);
L_8006E22C:
    // 0x8006E22C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8006E230: jal         0x8001C568
    // 0x8006E234: nop

    func_8001C568(rdram, ctx);
        goto after_26;
    // 0x8006E234: nop

    after_26:
    // 0x8006E238: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8006E23C: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x8006E240: bne         $at, $zero, L_8006E22C
    if (ctx->r1 != 0) {
        // 0x8006E244: nop
    
            goto L_8006E22C;
    }
    // 0x8006E244: nop

    // 0x8006E248: jal         0x8005CD50
    // 0x8006E24C: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    func_8005CD50(rdram, ctx);
        goto after_27;
    // 0x8006E24C: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    after_27:
    // 0x8006E250: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8006E254: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x8006E258: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8006E25C: nop

    // 0x8006E260: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8006E264: jal         0x80007AE0
    // 0x8006E268: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    func_80007AE0(rdram, ctx);
        goto after_28;
    // 0x8006E268: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    after_28:
    // 0x8006E26C: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x8006E270: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8006E274: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8006E278: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8006E27C: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8006E280: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x8006E284: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8006E288: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8006E28C: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8006E290: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x8006E294: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x8006E298: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x8006E29C: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x8006E2A0: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x8006E2A4: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x8006E2A8: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x8006E2AC: jr          $ra
    // 0x8006E2B0: addiu       $sp, $sp, 0x148
    ctx->r29 = ADD32(ctx->r29, 0X148);
    return;
    // 0x8006E2B0: addiu       $sp, $sp, 0x148
    ctx->r29 = ADD32(ctx->r29, 0X148);
;}
RECOMP_FUNC void func_8006E2B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006E2B4: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8006E2B8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8006E2BC: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8006E2C0: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8006E2C4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8006E2C8: jal         0x80007774
    // 0x8006E2CC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x8006E2CC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x8006E2D0: lw          $s1, 0x1C($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X1C);
    // 0x8006E2D4: addiu       $a0, $zero, 0x7AE
    ctx->r4 = ADD32(0, 0X7AE);
    // 0x8006E2D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8006E2DC: jal         0x8001D138
    // 0x8006E2E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x8006E2E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8006E2E4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8006E2E8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8006E2EC: jal         0x80019164
    // 0x8006E2F0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x8006E2F0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_2:
    // 0x8006E2F4: sw          $s0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r16;
    // 0x8006E2F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006E2FC: jal         0x8001C468
    // 0x8006E300: addiu       $a1, $zero, 0x7AE
    ctx->r5 = ADD32(0, 0X7AE);
    func_8001C468(rdram, ctx);
        goto after_3;
    // 0x8006E300: addiu       $a1, $zero, 0x7AE
    ctx->r5 = ADD32(0, 0X7AE);
    after_3:
    // 0x8006E304: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8006E308: addiu       $s3, $zero, 0x3
    ctx->r19 = ADD32(0, 0X3);
    // 0x8006E30C: addiu       $s2, $zero, -0x401
    ctx->r18 = ADD32(0, -0X401);
L_8006E310:
    // 0x8006E310: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x8006E314: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x8006E318: andi        $t6, $v0, 0x4000
    ctx->r14 = ctx->r2 & 0X4000;
    // 0x8006E31C: bne         $t6, $zero, L_8006E358
    if (ctx->r14 != 0) {
        // 0x8006E320: andi        $t7, $v0, 0x400
        ctx->r15 = ctx->r2 & 0X400;
            goto L_8006E358;
    }
    // 0x8006E320: andi        $t7, $v0, 0x400
    ctx->r15 = ctx->r2 & 0X400;
    // 0x8006E324: beq         $t7, $zero, L_8006E344
    if (ctx->r15 == 0) {
        // 0x8006E328: nop
    
            goto L_8006E344;
    }
    // 0x8006E328: nop

    // 0x8006E32C: jal         0x8001913C
    // 0x8006E330: addiu       $a1, $s1, 0xC
    ctx->r5 = ADD32(ctx->r17, 0XC);
    func_8001913C(rdram, ctx);
        goto after_4;
    // 0x8006E330: addiu       $a1, $s1, 0xC
    ctx->r5 = ADD32(ctx->r17, 0XC);
    after_4:
    // 0x8006E334: lw          $t8, 0x24($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X24);
    // 0x8006E338: nop

    // 0x8006E33C: and         $t9, $t8, $s2
    ctx->r25 = ctx->r24 & ctx->r18;
    // 0x8006E340: sw          $t9, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r25;
L_8006E344:
    // 0x8006E344: jal         0x80007AB0
    // 0x8006E348: nop

    func_80007AB0(rdram, ctx);
        goto after_5;
    // 0x8006E348: nop

    after_5:
    // 0x8006E34C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8006E350: bne         $s0, $s3, L_8006E310
    if (ctx->r16 != ctx->r19) {
        // 0x8006E354: nop
    
            goto L_8006E310;
    }
    // 0x8006E354: nop

L_8006E358:
    // 0x8006E358: addiu       $s0, $sp, 0x54
    ctx->r16 = ADD32(ctx->r29, 0X54);
    // 0x8006E35C: addiu       $s3, $s0, 0x4
    ctx->r19 = ADD32(ctx->r16, 0X4);
L_8006E360:
    // 0x8006E360: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8006E364: jal         0x8001C568
    // 0x8006E368: nop

    func_8001C568(rdram, ctx);
        goto after_6;
    // 0x8006E368: nop

    after_6:
    // 0x8006E36C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8006E370: sltu        $at, $s0, $s3
    ctx->r1 = ctx->r16 < ctx->r19 ? 1 : 0;
    // 0x8006E374: bne         $at, $zero, L_8006E360
    if (ctx->r1 != 0) {
        // 0x8006E378: nop
    
            goto L_8006E360;
    }
    // 0x8006E378: nop

    // 0x8006E37C: jal         0x8005CD50
    // 0x8006E380: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8005CD50(rdram, ctx);
        goto after_7;
    // 0x8006E380: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_7:
    // 0x8006E384: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8006E388: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x8006E38C: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x8006E390: nop

    // 0x8006E394: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x8006E398: jal         0x80007AE0
    // 0x8006E39C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    func_80007AE0(rdram, ctx);
        goto after_8;
    // 0x8006E39C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    after_8:
    // 0x8006E3A0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8006E3A4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8006E3A8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8006E3AC: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8006E3B0: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8006E3B4: jr          $ra
    // 0x8006E3B8: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x8006E3B8: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_8006E3BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006E3BC: addiu       $sp, $sp, -0x118
    ctx->r29 = ADD32(ctx->r29, -0X118);
    // 0x8006E3C0: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8006E3C4: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8006E3C8: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8006E3CC: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8006E3D0: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8006E3D4: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x8006E3D8: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8006E3DC: jal         0x80007774
    // 0x8006E3E0: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x8006E3E0: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x8006E3E4: lw          $s1, 0x1C($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X1C);
    // 0x8006E3E8: addiu       $a0, $zero, 0x777
    ctx->r4 = ADD32(0, 0X777);
    // 0x8006E3EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8006E3F0: jal         0x8001D138
    // 0x8006E3F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x8006E3F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8006E3F8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8006E3FC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8006E400: jal         0x80019164
    // 0x8006E404: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x8006E404: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_2:
    // 0x8006E408: sw          $s0, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r16;
    // 0x8006E40C: addiu       $a0, $zero, 0x7A4
    ctx->r4 = ADD32(0, 0X7A4);
    // 0x8006E410: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8006E414: jal         0x8001D138
    // 0x8006E418: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_3;
    // 0x8006E418: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x8006E41C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8006E420: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8006E424: jal         0x80019164
    // 0x8006E428: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80019164(rdram, ctx);
        goto after_4;
    // 0x8006E428: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_4:
    // 0x8006E42C: lw          $a0, 0x108($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X108);
    // 0x8006E430: sw          $s0, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->r16;
    // 0x8006E434: jal         0x8001C468
    // 0x8006E438: addiu       $a1, $zero, 0x777
    ctx->r5 = ADD32(0, 0X777);
    func_8001C468(rdram, ctx);
        goto after_5;
    // 0x8006E438: addiu       $a1, $zero, 0x777
    ctx->r5 = ADD32(0, 0X777);
    after_5:
    // 0x8006E43C: lw          $a0, 0x108($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X108);
    // 0x8006E440: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8006E444: jal         0x800192E8
    // 0x8006E448: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800192E8(rdram, ctx);
        goto after_6;
    // 0x8006E448: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
    // 0x8006E44C: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x8006E450: lw          $a0, 0x108($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X108);
    // 0x8006E454: addiu       $a1, $sp, 0xB4
    ctx->r5 = ADD32(ctx->r29, 0XB4);
    // 0x8006E458: swc1        $f20, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f20.u32l;
    // 0x8006E45C: swc1        $f20, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f20.u32l;
    // 0x8006E460: jal         0x80019114
    // 0x8006E464: swc1        $f20, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f20.u32l;
    func_80019114(rdram, ctx);
        goto after_7;
    // 0x8006E464: swc1        $f20, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f20.u32l;
    after_7:
    // 0x8006E468: lw          $a0, 0x10C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X10C);
    // 0x8006E46C: swc1        $f20, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f20.u32l;
    // 0x8006E470: swc1        $f20, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f20.u32l;
    // 0x8006E474: swc1        $f20, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f20.u32l;
    // 0x8006E478: jal         0x80019114
    // 0x8006E47C: addiu       $a1, $sp, 0x9C
    ctx->r5 = ADD32(ctx->r29, 0X9C);
    func_80019114(rdram, ctx);
        goto after_8;
    // 0x8006E47C: addiu       $a1, $sp, 0x9C
    ctx->r5 = ADD32(ctx->r29, 0X9C);
    after_8:
    // 0x8006E480: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x8006E484: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x8006E488: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8006E48C:
    // 0x8006E48C: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x8006E490: lw          $a0, 0x108($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X108);
    // 0x8006E494: andi        $t6, $v0, 0x4000
    ctx->r14 = ctx->r2 & 0X4000;
    // 0x8006E498: bne         $t6, $zero, L_8006E658
    if (ctx->r14 != 0) {
        // 0x8006E49C: andi        $t7, $v0, 0x800
        ctx->r15 = ctx->r2 & 0X800;
            goto L_8006E658;
    }
    // 0x8006E49C: andi        $t7, $v0, 0x800
    ctx->r15 = ctx->r2 & 0X800;
    // 0x8006E4A0: beq         $t7, $zero, L_8006E4C4
    if (ctx->r15 == 0) {
        // 0x8006E4A4: andi        $t6, $v0, 0x400
        ctx->r14 = ctx->r2 & 0X400;
            goto L_8006E4C4;
    }
    // 0x8006E4A4: andi        $t6, $v0, 0x400
    ctx->r14 = ctx->r2 & 0X400;
    // 0x8006E4A8: jal         0x80019164
    // 0x8006E4AC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80019164(rdram, ctx);
        goto after_9;
    // 0x8006E4AC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_9:
    // 0x8006E4B0: lw          $t8, 0x24($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X24);
    // 0x8006E4B4: addiu       $at, $zero, -0x801
    ctx->r1 = ADD32(0, -0X801);
    // 0x8006E4B8: and         $v0, $t8, $at
    ctx->r2 = ctx->r24 & ctx->r1;
    // 0x8006E4BC: sw          $v0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r2;
    // 0x8006E4C0: andi        $t6, $v0, 0x400
    ctx->r14 = ctx->r2 & 0X400;
L_8006E4C4:
    // 0x8006E4C4: beq         $t6, $zero, L_8006E4EC
    if (ctx->r14 == 0) {
        // 0x8006E4C8: slti        $at, $s0, 0x6
        ctx->r1 = SIGNED(ctx->r16) < 0X6 ? 1 : 0;
            goto L_8006E4EC;
    }
    // 0x8006E4C8: slti        $at, $s0, 0x6
    ctx->r1 = SIGNED(ctx->r16) < 0X6 ? 1 : 0;
    // 0x8006E4CC: lw          $a0, 0x108($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X108);
    // 0x8006E4D0: jal         0x8001913C
    // 0x8006E4D4: addiu       $a1, $s1, 0xC
    ctx->r5 = ADD32(ctx->r17, 0XC);
    func_8001913C(rdram, ctx);
        goto after_10;
    // 0x8006E4D4: addiu       $a1, $s1, 0xC
    ctx->r5 = ADD32(ctx->r17, 0XC);
    after_10:
    // 0x8006E4D8: lw          $t7, 0x24($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X24);
    // 0x8006E4DC: addiu       $at, $zero, -0x401
    ctx->r1 = ADD32(0, -0X401);
    // 0x8006E4E0: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x8006E4E4: sw          $t8, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r24;
    // 0x8006E4E8: slti        $at, $s0, 0x6
    ctx->r1 = SIGNED(ctx->r16) < 0X6 ? 1 : 0;
L_8006E4EC:
    // 0x8006E4EC: beq         $at, $zero, L_8006E52C
    if (ctx->r1 == 0) {
        // 0x8006E4F0: addiu       $t9, $s0, 0x1
        ctx->r25 = ADD32(ctx->r16, 0X1);
            goto L_8006E52C;
    }
    // 0x8006E4F0: addiu       $t9, $s0, 0x1
    ctx->r25 = ADD32(ctx->r16, 0X1);
    // 0x8006E4F4: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8006E4F8: nop

    // 0x8006E4FC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8006E500: mul.s       $f12, $f6, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f12.fl = MUL_S(ctx->f6.fl, ctx->f22.fl);
    // 0x8006E504: jal         0x80028C2C
    // 0x8006E508: nop

    func_80028C2C(rdram, ctx);
        goto after_11;
    // 0x8006E508: nop

    after_11:
    // 0x8006E50C: lw          $a0, 0x10C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X10C);
    // 0x8006E510: swc1        $f0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f0.u32l;
    // 0x8006E514: swc1        $f0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f0.u32l;
    // 0x8006E518: swc1        $f0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f0.u32l;
    // 0x8006E51C: jal         0x80019114
    // 0x8006E520: addiu       $a1, $sp, 0x84
    ctx->r5 = ADD32(ctx->r29, 0X84);
    func_80019114(rdram, ctx);
        goto after_12;
    // 0x8006E520: addiu       $a1, $sp, 0x84
    ctx->r5 = ADD32(ctx->r29, 0X84);
    after_12:
    // 0x8006E524: b           L_8006E57C
    // 0x8006E528: slti        $at, $s0, 0x6
    ctx->r1 = SIGNED(ctx->r16) < 0X6 ? 1 : 0;
        goto L_8006E57C;
    // 0x8006E528: slti        $at, $s0, 0x6
    ctx->r1 = SIGNED(ctx->r16) < 0X6 ? 1 : 0;
L_8006E52C:
    // 0x8006E52C: slti        $at, $s0, 0x9
    ctx->r1 = SIGNED(ctx->r16) < 0X9 ? 1 : 0;
    // 0x8006E530: bne         $at, $zero, L_8006E578
    if (ctx->r1 != 0) {
        // 0x8006E534: slti        $at, $s0, 0xE
        ctx->r1 = SIGNED(ctx->r16) < 0XE ? 1 : 0;
            goto L_8006E578;
    }
    // 0x8006E534: slti        $at, $s0, 0xE
    ctx->r1 = SIGNED(ctx->r16) < 0XE ? 1 : 0;
    // 0x8006E538: beq         $at, $zero, L_8006E578
    if (ctx->r1 == 0) {
        // 0x8006E53C: addiu       $t6, $s0, -0x8
        ctx->r14 = ADD32(ctx->r16, -0X8);
            goto L_8006E578;
    }
    // 0x8006E53C: addiu       $t6, $s0, -0x8
    ctx->r14 = ADD32(ctx->r16, -0X8);
    // 0x8006E540: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x8006E544: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x8006E548: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8006E54C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8006E550: nop

    // 0x8006E554: mul.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x8006E558: jal         0x80028C00
    // 0x8006E55C: nop

    func_80028C00(rdram, ctx);
        goto after_13;
    // 0x8006E55C: nop

    after_13:
    // 0x8006E560: lw          $a0, 0x10C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X10C);
    // 0x8006E564: swc1        $f0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f0.u32l;
    // 0x8006E568: swc1        $f0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f0.u32l;
    // 0x8006E56C: swc1        $f0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f0.u32l;
    // 0x8006E570: jal         0x80019114
    // 0x8006E574: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    func_80019114(rdram, ctx);
        goto after_14;
    // 0x8006E574: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    after_14:
L_8006E578:
    // 0x8006E578: slti        $at, $s0, 0x6
    ctx->r1 = SIGNED(ctx->r16) < 0X6 ? 1 : 0;
L_8006E57C:
    // 0x8006E57C: beq         $at, $zero, L_8006E5BC
    if (ctx->r1 == 0) {
        // 0x8006E580: addiu       $s2, $s0, 0x1
        ctx->r18 = ADD32(ctx->r16, 0X1);
            goto L_8006E5BC;
    }
    // 0x8006E580: addiu       $s2, $s0, 0x1
    ctx->r18 = ADD32(ctx->r16, 0X1);
    // 0x8006E584: mtc1        $s2, $f6
    ctx->f6.u32l = ctx->r18;
    // 0x8006E588: nop

    // 0x8006E58C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8006E590: mul.s       $f12, $f8, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f22.fl);
    // 0x8006E594: jal         0x80028C2C
    // 0x8006E598: nop

    func_80028C2C(rdram, ctx);
        goto after_15;
    // 0x8006E598: nop

    after_15:
    // 0x8006E59C: lw          $a0, 0x108($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X108);
    // 0x8006E5A0: swc1        $f0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f0.u32l;
    // 0x8006E5A4: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
    // 0x8006E5A8: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    // 0x8006E5AC: jal         0x80019114
    // 0x8006E5B0: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    func_80019114(rdram, ctx);
        goto after_16;
    // 0x8006E5B0: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    after_16:
    // 0x8006E5B4: b           L_8006E648
    // 0x8006E5B8: nop

        goto L_8006E648;
    // 0x8006E5B8: nop

L_8006E5BC:
    // 0x8006E5BC: slti        $at, $s0, 0xB
    ctx->r1 = SIGNED(ctx->r16) < 0XB ? 1 : 0;
    // 0x8006E5C0: beq         $at, $zero, L_8006E648
    if (ctx->r1 == 0) {
        // 0x8006E5C4: addiu       $t7, $s0, -0xA
        ctx->r15 = ADD32(ctx->r16, -0XA);
            goto L_8006E648;
    }
    // 0x8006E5C4: addiu       $t7, $s0, -0xA
    ctx->r15 = ADD32(ctx->r16, -0XA);
    // 0x8006E5C8: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x8006E5CC: lui         $at, 0x4210
    ctx->r1 = S32(0X4210 << 16);
    // 0x8006E5D0: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8006E5D4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8006E5D8: nop

    // 0x8006E5DC: mul.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8006E5E0: jal         0x80028C2C
    // 0x8006E5E4: nop

    func_80028C2C(rdram, ctx);
        goto after_17;
    // 0x8006E5E4: nop

    after_17:
    // 0x8006E5E8: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x8006E5EC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8006E5F0: lwc1        $f12, 0x10($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X10);
    // 0x8006E5F4: mul.s       $f20, $f0, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f20.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x8006E5F8: jal         0x8007A640
    // 0x8006E5FC: nop

    __sinf_recomp(rdram, ctx);
        goto after_18;
    // 0x8006E5FC: nop

    after_18:
    // 0x8006E600: mul.s       $f10, $f0, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x8006E604: lwc1        $f4, 0x0($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X0);
    // 0x8006E608: nop

    // 0x8006E60C: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x8006E610: swc1        $f6, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f6.u32l;
    // 0x8006E614: lwc1        $f8, 0x4($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X4);
    // 0x8006E618: nop

    // 0x8006E61C: swc1        $f8, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f8.u32l;
    // 0x8006E620: lwc1        $f12, 0x10($s1)
    ctx->f12.u32l = MEM_W(ctx->r17, 0X10);
    // 0x8006E624: jal         0x8007A800
    // 0x8006E628: nop

    __cosf_recomp(rdram, ctx);
        goto after_19;
    // 0x8006E628: nop

    after_19:
    // 0x8006E62C: mul.s       $f10, $f0, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x8006E630: lwc1        $f4, 0x8($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X8);
    // 0x8006E634: lw          $a0, 0x108($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X108);
    // 0x8006E638: addiu       $a1, $sp, 0xF4
    ctx->r5 = ADD32(ctx->r29, 0XF4);
    // 0x8006E63C: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x8006E640: jal         0x80019164
    // 0x8006E644: swc1        $f6, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f6.u32l;
    func_80019164(rdram, ctx);
        goto after_20;
    // 0x8006E644: swc1        $f6, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f6.u32l;
    after_20:
L_8006E648:
    // 0x8006E648: jal         0x80007AB0
    // 0x8006E64C: nop

    func_80007AB0(rdram, ctx);
        goto after_21;
    // 0x8006E64C: nop

    after_21:
    // 0x8006E650: b           L_8006E48C
    // 0x8006E654: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
        goto L_8006E48C;
    // 0x8006E654: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
L_8006E658:
    // 0x8006E658: addiu       $s0, $sp, 0x108
    ctx->r16 = ADD32(ctx->r29, 0X108);
    // 0x8006E65C: addiu       $v0, $s0, 0x8
    ctx->r2 = ADD32(ctx->r16, 0X8);
L_8006E660:
    // 0x8006E660: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8006E664: jal         0x8001C568
    // 0x8006E668: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    func_8001C568(rdram, ctx);
        goto after_22;
    // 0x8006E668: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    after_22:
    // 0x8006E66C: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x8006E670: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8006E674: sltu        $at, $s0, $v0
    ctx->r1 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x8006E678: bne         $at, $zero, L_8006E660
    if (ctx->r1 != 0) {
        // 0x8006E67C: nop
    
            goto L_8006E660;
    }
    // 0x8006E67C: nop

    // 0x8006E680: jal         0x8005CD50
    // 0x8006E684: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8005CD50(rdram, ctx);
        goto after_23;
    // 0x8006E684: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_23:
    // 0x8006E688: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8006E68C: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x8006E690: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x8006E694: nop

    // 0x8006E698: addiu       $t6, $t9, -0x1
    ctx->r14 = ADD32(ctx->r25, -0X1);
    // 0x8006E69C: jal         0x80007AE0
    // 0x8006E6A0: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    func_80007AE0(rdram, ctx);
        goto after_24;
    // 0x8006E6A0: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    after_24:
    // 0x8006E6A4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8006E6A8: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8006E6AC: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8006E6B0: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8006E6B4: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8006E6B8: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8006E6BC: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8006E6C0: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8006E6C4: jr          $ra
    // 0x8006E6C8: addiu       $sp, $sp, 0x118
    ctx->r29 = ADD32(ctx->r29, 0X118);
    return;
    // 0x8006E6C8: addiu       $sp, $sp, 0x118
    ctx->r29 = ADD32(ctx->r29, 0X118);
;}
RECOMP_FUNC void func_8006E6CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006E6CC: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8006E6D0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8006E6D4: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8006E6D8: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8006E6DC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8006E6E0: jal         0x80007774
    // 0x8006E6E4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x8006E6E4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x8006E6E8: lw          $s1, 0x1C($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X1C);
    // 0x8006E6EC: addiu       $a0, $zero, 0x7AD
    ctx->r4 = ADD32(0, 0X7AD);
    // 0x8006E6F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8006E6F4: jal         0x8001D138
    // 0x8006E6F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x8006E6F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8006E6FC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8006E700: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8006E704: jal         0x80019164
    // 0x8006E708: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x8006E708: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_2:
    // 0x8006E70C: sw          $s0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r16;
    // 0x8006E710: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006E714: jal         0x8001C468
    // 0x8006E718: addiu       $a1, $zero, 0x7AD
    ctx->r5 = ADD32(0, 0X7AD);
    func_8001C468(rdram, ctx);
        goto after_3;
    // 0x8006E718: addiu       $a1, $zero, 0x7AD
    ctx->r5 = ADD32(0, 0X7AD);
    after_3:
    // 0x8006E71C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8006E720: addiu       $s3, $zero, 0x5
    ctx->r19 = ADD32(0, 0X5);
    // 0x8006E724: addiu       $s2, $zero, -0x401
    ctx->r18 = ADD32(0, -0X401);
L_8006E728:
    // 0x8006E728: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x8006E72C: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x8006E730: andi        $t6, $v0, 0x4000
    ctx->r14 = ctx->r2 & 0X4000;
    // 0x8006E734: bne         $t6, $zero, L_8006E770
    if (ctx->r14 != 0) {
        // 0x8006E738: andi        $t7, $v0, 0x400
        ctx->r15 = ctx->r2 & 0X400;
            goto L_8006E770;
    }
    // 0x8006E738: andi        $t7, $v0, 0x400
    ctx->r15 = ctx->r2 & 0X400;
    // 0x8006E73C: beq         $t7, $zero, L_8006E75C
    if (ctx->r15 == 0) {
        // 0x8006E740: nop
    
            goto L_8006E75C;
    }
    // 0x8006E740: nop

    // 0x8006E744: jal         0x8001913C
    // 0x8006E748: addiu       $a1, $s1, 0xC
    ctx->r5 = ADD32(ctx->r17, 0XC);
    func_8001913C(rdram, ctx);
        goto after_4;
    // 0x8006E748: addiu       $a1, $s1, 0xC
    ctx->r5 = ADD32(ctx->r17, 0XC);
    after_4:
    // 0x8006E74C: lw          $t8, 0x24($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X24);
    // 0x8006E750: nop

    // 0x8006E754: and         $t9, $t8, $s2
    ctx->r25 = ctx->r24 & ctx->r18;
    // 0x8006E758: sw          $t9, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r25;
L_8006E75C:
    // 0x8006E75C: jal         0x80007AB0
    // 0x8006E760: nop

    func_80007AB0(rdram, ctx);
        goto after_5;
    // 0x8006E760: nop

    after_5:
    // 0x8006E764: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8006E768: bne         $s0, $s3, L_8006E728
    if (ctx->r16 != ctx->r19) {
        // 0x8006E76C: nop
    
            goto L_8006E728;
    }
    // 0x8006E76C: nop

L_8006E770:
    // 0x8006E770: addiu       $s0, $sp, 0x54
    ctx->r16 = ADD32(ctx->r29, 0X54);
    // 0x8006E774: addiu       $s3, $s0, 0x4
    ctx->r19 = ADD32(ctx->r16, 0X4);
L_8006E778:
    // 0x8006E778: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8006E77C: jal         0x8001C568
    // 0x8006E780: nop

    func_8001C568(rdram, ctx);
        goto after_6;
    // 0x8006E780: nop

    after_6:
    // 0x8006E784: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8006E788: sltu        $at, $s0, $s3
    ctx->r1 = ctx->r16 < ctx->r19 ? 1 : 0;
    // 0x8006E78C: bne         $at, $zero, L_8006E778
    if (ctx->r1 != 0) {
        // 0x8006E790: nop
    
            goto L_8006E778;
    }
    // 0x8006E790: nop

    // 0x8006E794: jal         0x8005CD50
    // 0x8006E798: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8005CD50(rdram, ctx);
        goto after_7;
    // 0x8006E798: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_7:
    // 0x8006E79C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8006E7A0: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x8006E7A4: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x8006E7A8: nop

    // 0x8006E7AC: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x8006E7B0: jal         0x80007AE0
    // 0x8006E7B4: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    func_80007AE0(rdram, ctx);
        goto after_8;
    // 0x8006E7B4: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    after_8:
    // 0x8006E7B8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8006E7BC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8006E7C0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8006E7C4: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8006E7C8: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8006E7CC: jr          $ra
    // 0x8006E7D0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x8006E7D0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_8006E7D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006E7D4: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x8006E7D8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8006E7DC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8006E7E0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8006E7E4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8006E7E8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8006E7EC: jal         0x80007774
    // 0x8006E7F0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x8006E7F0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x8006E7F4: lw          $s1, 0x1C($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X1C);
    // 0x8006E7F8: addiu       $a0, $zero, 0x7AD
    ctx->r4 = ADD32(0, 0X7AD);
    // 0x8006E7FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8006E800: jal         0x8001D138
    // 0x8006E804: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x8006E804: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8006E808: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8006E80C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8006E810: jal         0x80019164
    // 0x8006E814: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x8006E814: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_2:
    // 0x8006E818: sw          $s0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r16;
    // 0x8006E81C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006E820: jal         0x8001C468
    // 0x8006E824: addiu       $a1, $zero, 0x7A2
    ctx->r5 = ADD32(0, 0X7A2);
    func_8001C468(rdram, ctx);
        goto after_3;
    // 0x8006E824: addiu       $a1, $zero, 0x7A2
    ctx->r5 = ADD32(0, 0X7A2);
    after_3:
    // 0x8006E828: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8006E82C: addiu       $s4, $zero, 0x55
    ctx->r20 = ADD32(0, 0X55);
    // 0x8006E830: addiu       $s3, $zero, -0x401
    ctx->r19 = ADD32(0, -0X401);
    // 0x8006E834: addiu       $s2, $zero, -0x801
    ctx->r18 = ADD32(0, -0X801);
L_8006E838:
    // 0x8006E838: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x8006E83C: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x8006E840: andi        $t6, $v0, 0x4000
    ctx->r14 = ctx->r2 & 0X4000;
    // 0x8006E844: bne         $t6, $zero, L_8006E8A8
    if (ctx->r14 != 0) {
        // 0x8006E848: andi        $t7, $v0, 0x800
        ctx->r15 = ctx->r2 & 0X800;
            goto L_8006E8A8;
    }
    // 0x8006E848: andi        $t7, $v0, 0x800
    ctx->r15 = ctx->r2 & 0X800;
    // 0x8006E84C: beq         $t7, $zero, L_8006E870
    if (ctx->r15 == 0) {
        // 0x8006E850: andi        $t6, $v0, 0x400
        ctx->r14 = ctx->r2 & 0X400;
            goto L_8006E870;
    }
    // 0x8006E850: andi        $t6, $v0, 0x400
    ctx->r14 = ctx->r2 & 0X400;
    // 0x8006E854: jal         0x80019164
    // 0x8006E858: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80019164(rdram, ctx);
        goto after_4;
    // 0x8006E858: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_4:
    // 0x8006E85C: lw          $t8, 0x24($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X24);
    // 0x8006E860: nop

    // 0x8006E864: and         $v0, $t8, $s2
    ctx->r2 = ctx->r24 & ctx->r18;
    // 0x8006E868: sw          $v0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r2;
    // 0x8006E86C: andi        $t6, $v0, 0x400
    ctx->r14 = ctx->r2 & 0X400;
L_8006E870:
    // 0x8006E870: beq         $t6, $zero, L_8006E894
    if (ctx->r14 == 0) {
        // 0x8006E874: nop
    
            goto L_8006E894;
    }
    // 0x8006E874: nop

    // 0x8006E878: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x8006E87C: jal         0x8001913C
    // 0x8006E880: addiu       $a1, $s1, 0xC
    ctx->r5 = ADD32(ctx->r17, 0XC);
    func_8001913C(rdram, ctx);
        goto after_5;
    // 0x8006E880: addiu       $a1, $s1, 0xC
    ctx->r5 = ADD32(ctx->r17, 0XC);
    after_5:
    // 0x8006E884: lw          $t7, 0x24($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X24);
    // 0x8006E888: nop

    // 0x8006E88C: and         $t8, $t7, $s3
    ctx->r24 = ctx->r15 & ctx->r19;
    // 0x8006E890: sw          $t8, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r24;
L_8006E894:
    // 0x8006E894: jal         0x80007AB0
    // 0x8006E898: nop

    func_80007AB0(rdram, ctx);
        goto after_6;
    // 0x8006E898: nop

    after_6:
    // 0x8006E89C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8006E8A0: bne         $s0, $s4, L_8006E838
    if (ctx->r16 != ctx->r20) {
        // 0x8006E8A4: nop
    
            goto L_8006E838;
    }
    // 0x8006E8A4: nop

L_8006E8A8:
    // 0x8006E8A8: addiu       $s0, $sp, 0x5C
    ctx->r16 = ADD32(ctx->r29, 0X5C);
    // 0x8006E8AC: addiu       $s3, $s0, 0x4
    ctx->r19 = ADD32(ctx->r16, 0X4);
L_8006E8B0:
    // 0x8006E8B0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8006E8B4: jal         0x8001C568
    // 0x8006E8B8: nop

    func_8001C568(rdram, ctx);
        goto after_7;
    // 0x8006E8B8: nop

    after_7:
    // 0x8006E8BC: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8006E8C0: sltu        $at, $s0, $s3
    ctx->r1 = ctx->r16 < ctx->r19 ? 1 : 0;
    // 0x8006E8C4: bne         $at, $zero, L_8006E8B0
    if (ctx->r1 != 0) {
        // 0x8006E8C8: nop
    
            goto L_8006E8B0;
    }
    // 0x8006E8C8: nop

    // 0x8006E8CC: jal         0x8005CD50
    // 0x8006E8D0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8005CD50(rdram, ctx);
        goto after_8;
    // 0x8006E8D0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_8:
    // 0x8006E8D4: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8006E8D8: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x8006E8DC: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8006E8E0: nop

    // 0x8006E8E4: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8006E8E8: jal         0x80007AE0
    // 0x8006E8EC: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    func_80007AE0(rdram, ctx);
        goto after_9;
    // 0x8006E8EC: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    after_9:
    // 0x8006E8F0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8006E8F4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8006E8F8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8006E8FC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8006E900: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8006E904: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8006E908: jr          $ra
    // 0x8006E90C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x8006E90C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_8006E910(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006E910: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x8006E914: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8006E918: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x8006E91C: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x8006E920: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x8006E924: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x8006E928: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8006E92C: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x8006E930: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8006E934: jal         0x80007774
    // 0x8006E938: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x8006E938: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x8006E93C: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8006E940: addiu       $t6, $t6, 0x2630
    ctx->r14 = ADD32(ctx->r14, 0X2630);
    // 0x8006E944: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x8006E948: addiu       $s0, $sp, 0x7C
    ctx->r16 = ADD32(ctx->r29, 0X7C);
    // 0x8006E94C: lw          $s1, 0x1C($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X1C);
    // 0x8006E950: sw          $at, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r1;
    // 0x8006E954: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x8006E958: addiu       $a0, $zero, 0x7AB
    ctx->r4 = ADD32(0, 0X7AB);
    // 0x8006E95C: sw          $t9, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r25;
    // 0x8006E960: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x8006E964: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8006E968: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8006E96C: jal         0x8001D138
    // 0x8006E970: sw          $at, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r1;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x8006E970: sw          $at, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r1;
    after_1:
    // 0x8006E974: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8006E978: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8006E97C: jal         0x80019164
    // 0x8006E980: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x8006E980: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_2:
    // 0x8006E984: sw          $s2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r18;
    // 0x8006E988: addiu       $a0, $zero, 0x7AC
    ctx->r4 = ADD32(0, 0X7AC);
    // 0x8006E98C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8006E990: jal         0x8001D138
    // 0x8006E994: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_3;
    // 0x8006E994: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x8006E998: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8006E99C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8006E9A0: jal         0x80019164
    // 0x8006E9A4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80019164(rdram, ctx);
        goto after_4;
    // 0x8006E9A4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_4:
    // 0x8006E9A8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8006E9AC: addiu       $a1, $zero, 0x7E2
    ctx->r5 = ADD32(0, 0X7E2);
    // 0x8006E9B0: jal         0x8001C468
    // 0x8006E9B4: sw          $s2, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r18;
    func_8001C468(rdram, ctx);
        goto after_5;
    // 0x8006E9B4: sw          $s2, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r18;
    after_5:
    // 0x8006E9B8: lw          $a0, 0x8C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X8C);
    // 0x8006E9BC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8006E9C0: jal         0x800192E8
    // 0x8006E9C4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800192E8(rdram, ctx);
        goto after_6;
    // 0x8006E9C4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
    // 0x8006E9C8: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x8006E9CC: jal         0x8001913C
    // 0x8006E9D0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001913C(rdram, ctx);
        goto after_7;
    // 0x8006E9D0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_7:
    // 0x8006E9D4: lw          $a0, 0x8C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X8C);
    // 0x8006E9D8: jal         0x8001913C
    // 0x8006E9DC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001913C(rdram, ctx);
        goto after_8;
    // 0x8006E9DC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_8:
    // 0x8006E9E0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8006E9E4: lwc1        $f23, 0x6540($at)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r1, 0X6540);
    // 0x8006E9E8: lwc1        $f22, 0x6544($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X6544);
    // 0x8006E9EC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8006E9F0: lwc1        $f20, 0x6548($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X6548);
    // 0x8006E9F4: addiu       $s3, $zero, -0x401
    ctx->r19 = ADD32(0, -0X401);
    // 0x8006E9F8: addiu       $s2, $zero, -0x801
    ctx->r18 = ADD32(0, -0X801);
    // 0x8006E9FC: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
L_8006EA00:
    // 0x8006EA00: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x8006EA04: andi        $t8, $v0, 0x4000
    ctx->r24 = ctx->r2 & 0X4000;
    // 0x8006EA08: bne         $t8, $zero, L_8006EAA4
    if (ctx->r24 != 0) {
        // 0x8006EA0C: andi        $t7, $v0, 0x800
        ctx->r15 = ctx->r2 & 0X800;
            goto L_8006EAA4;
    }
    // 0x8006EA0C: andi        $t7, $v0, 0x800
    ctx->r15 = ctx->r2 & 0X800;
    // 0x8006EA10: beq         $t7, $zero, L_8006EA40
    if (ctx->r15 == 0) {
        // 0x8006EA14: andi        $t8, $v0, 0x400
        ctx->r24 = ctx->r2 & 0X400;
            goto L_8006EA40;
    }
    // 0x8006EA14: andi        $t8, $v0, 0x400
    ctx->r24 = ctx->r2 & 0X400;
    // 0x8006EA18: jal         0x80019164
    // 0x8006EA1C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80019164(rdram, ctx);
        goto after_9;
    // 0x8006EA1C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_9:
    // 0x8006EA20: lw          $a0, 0x8C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X8C);
    // 0x8006EA24: jal         0x80019164
    // 0x8006EA28: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80019164(rdram, ctx);
        goto after_10;
    // 0x8006EA28: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_10:
    // 0x8006EA2C: lw          $t6, 0x24($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X24);
    // 0x8006EA30: nop

    // 0x8006EA34: and         $v0, $t6, $s2
    ctx->r2 = ctx->r14 & ctx->r18;
    // 0x8006EA38: sw          $v0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r2;
    // 0x8006EA3C: andi        $t8, $v0, 0x400
    ctx->r24 = ctx->r2 & 0X400;
L_8006EA40:
    // 0x8006EA40: beq         $t8, $zero, L_8006EA94
    if (ctx->r24 == 0) {
        // 0x8006EA44: nop
    
            goto L_8006EA94;
    }
    // 0x8006EA44: nop

    // 0x8006EA48: cvt.d.s     $f4, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f4.d = CVT_D_S(ctx->f20.fl);
    // 0x8006EA4C: add.d       $f6, $f4, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f22.d); 
    ctx->f6.d = ctx->f4.d + ctx->f22.d;
    // 0x8006EA50: swc1        $f20, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f20.u32l;
    // 0x8006EA54: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x8006EA58: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x8006EA5C: swc1        $f8, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f8.u32l;
    // 0x8006EA60: lwc1        $f10, 0x10($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X10);
    // 0x8006EA64: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8006EA68: swc1        $f10, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f10.u32l;
    // 0x8006EA6C: lwc1        $f4, 0x14($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X14);
    // 0x8006EA70: jal         0x8001913C
    // 0x8006EA74: swc1        $f4, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f4.u32l;
    func_8001913C(rdram, ctx);
        goto after_11;
    // 0x8006EA74: swc1        $f4, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f4.u32l;
    after_11:
    // 0x8006EA78: lw          $a0, 0x8C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X8C);
    // 0x8006EA7C: jal         0x8001913C
    // 0x8006EA80: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001913C(rdram, ctx);
        goto after_12;
    // 0x8006EA80: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_12:
    // 0x8006EA84: lw          $t7, 0x24($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X24);
    // 0x8006EA88: nop

    // 0x8006EA8C: and         $t6, $t7, $s3
    ctx->r14 = ctx->r15 & ctx->r19;
    // 0x8006EA90: sw          $t6, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r14;
L_8006EA94:
    // 0x8006EA94: jal         0x80007AB0
    // 0x8006EA98: nop

    func_80007AB0(rdram, ctx);
        goto after_13;
    // 0x8006EA98: nop

    after_13:
    // 0x8006EA9C: b           L_8006EA00
    // 0x8006EAA0: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
        goto L_8006EA00;
    // 0x8006EAA0: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
L_8006EAA4:
    // 0x8006EAA4: addiu       $s0, $sp, 0x88
    ctx->r16 = ADD32(ctx->r29, 0X88);
    // 0x8006EAA8: addiu       $s3, $s0, 0x8
    ctx->r19 = ADD32(ctx->r16, 0X8);
L_8006EAAC:
    // 0x8006EAAC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8006EAB0: jal         0x8001C568
    // 0x8006EAB4: nop

    func_8001C568(rdram, ctx);
        goto after_14;
    // 0x8006EAB4: nop

    after_14:
    // 0x8006EAB8: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8006EABC: sltu        $at, $s0, $s3
    ctx->r1 = ctx->r16 < ctx->r19 ? 1 : 0;
    // 0x8006EAC0: bne         $at, $zero, L_8006EAAC
    if (ctx->r1 != 0) {
        // 0x8006EAC4: nop
    
            goto L_8006EAAC;
    }
    // 0x8006EAC4: nop

    // 0x8006EAC8: jal         0x8005CD50
    // 0x8006EACC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8005CD50(rdram, ctx);
        goto after_15;
    // 0x8006EACC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_15:
    // 0x8006EAD0: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8006EAD4: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x8006EAD8: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x8006EADC: nop

    // 0x8006EAE0: addiu       $t7, $t8, -0x1
    ctx->r15 = ADD32(ctx->r24, -0X1);
    // 0x8006EAE4: jal         0x80007AE0
    // 0x8006EAE8: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    func_80007AE0(rdram, ctx);
        goto after_16;
    // 0x8006EAE8: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    after_16:
    // 0x8006EAEC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8006EAF0: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x8006EAF4: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8006EAF8: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8006EAFC: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8006EB00: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x8006EB04: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x8006EB08: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x8006EB0C: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x8006EB10: jr          $ra
    // 0x8006EB14: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    // 0x8006EB14: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void func_8006EB18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006EB18: addiu       $sp, $sp, -0x148
    ctx->r29 = ADD32(ctx->r29, -0X148);
    // 0x8006EB1C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8006EB20: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8006EB24: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8006EB28: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8006EB2C: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8006EB30: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x8006EB34: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8006EB38: jal         0x80007774
    // 0x8006EB3C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x8006EB3C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x8006EB40: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x8006EB44: addiu       $t7, $t7, 0x263C
    ctx->r15 = ADD32(ctx->r15, 0X263C);
    // 0x8006EB48: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x8006EB4C: lw          $t9, 0x4($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X4);
    // 0x8006EB50: lw          $s1, 0x1C($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X1C);
    // 0x8006EB54: addiu       $t6, $sp, 0x108
    ctx->r14 = ADD32(ctx->r29, 0X108);
    // 0x8006EB58: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x8006EB5C: sw          $t9, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r25;
    // 0x8006EB60: lw          $t9, 0xC($t7)
    ctx->r25 = MEM_W(ctx->r15, 0XC);
    // 0x8006EB64: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x8006EB68: sw          $t9, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->r25;
    // 0x8006EB6C: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x8006EB70: lw          $at, 0x10($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X10);
    // 0x8006EB74: lw          $t9, 0x14($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X14);
    // 0x8006EB78: addiu       $a0, $zero, 0x779
    ctx->r4 = ADD32(0, 0X779);
    // 0x8006EB7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8006EB80: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8006EB84: sw          $at, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->r1;
    // 0x8006EB88: jal         0x8001D138
    // 0x8006EB8C: sw          $t9, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->r25;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x8006EB8C: sw          $t9, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->r25;
    after_1:
    // 0x8006EB90: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8006EB94: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8006EB98: jal         0x80019164
    // 0x8006EB9C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x8006EB9C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_2:
    // 0x8006EBA0: sw          $s0, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->r16;
    // 0x8006EBA4: addiu       $a0, $zero, 0x781
    ctx->r4 = ADD32(0, 0X781);
    // 0x8006EBA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8006EBAC: jal         0x8001D138
    // 0x8006EBB0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_3;
    // 0x8006EBB0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x8006EBB4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8006EBB8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8006EBBC: jal         0x80019164
    // 0x8006EBC0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80019164(rdram, ctx);
        goto after_4;
    // 0x8006EBC0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_4:
    // 0x8006EBC4: sw          $s0, 0x138($sp)
    MEM_W(0X138, ctx->r29) = ctx->r16;
    // 0x8006EBC8: addiu       $a0, $zero, 0x7AB
    ctx->r4 = ADD32(0, 0X7AB);
    // 0x8006EBCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8006EBD0: jal         0x8001D138
    // 0x8006EBD4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_5;
    // 0x8006EBD4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x8006EBD8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8006EBDC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8006EBE0: jal         0x80019164
    // 0x8006EBE4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80019164(rdram, ctx);
        goto after_6;
    // 0x8006EBE4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_6:
    // 0x8006EBE8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8006EBEC: lw          $a0, 0x134($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X134);
    // 0x8006EBF0: sw          $s0, 0x13C($sp)
    MEM_W(0X13C, ctx->r29) = ctx->r16;
    // 0x8006EBF4: addiu       $a1, $sp, 0xAC
    ctx->r5 = ADD32(ctx->r29, 0XAC);
    // 0x8006EBF8: swc1        $f0, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f0.u32l;
    // 0x8006EBFC: swc1        $f0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f0.u32l;
    // 0x8006EC00: jal         0x80019114
    // 0x8006EC04: swc1        $f0, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f0.u32l;
    func_80019114(rdram, ctx);
        goto after_7;
    // 0x8006EC04: swc1        $f0, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f0.u32l;
    after_7:
    // 0x8006EC08: lw          $a0, 0x138($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X138);
    // 0x8006EC0C: jal         0x800191C0
    // 0x8006EC10: nop

    func_800191C0(rdram, ctx);
        goto after_8;
    // 0x8006EC10: nop

    after_8:
    // 0x8006EC14: lw          $a0, 0x13C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X13C);
    // 0x8006EC18: jal         0x800191C0
    // 0x8006EC1C: nop

    func_800191C0(rdram, ctx);
        goto after_9;
    // 0x8006EC1C: nop

    after_9:
    // 0x8006EC20: lw          $s0, 0x134($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X134);
    // 0x8006EC24: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8006EC28: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8006EC2C: jal         0x80018658
    // 0x8006EC30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80018658(rdram, ctx);
        goto after_10;
    // 0x8006EC30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x8006EC34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006EC38: jal         0x80018604
    // 0x8006EC3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80018604(rdram, ctx);
        goto after_11;
    // 0x8006EC3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_11:
    // 0x8006EC40: lw          $a0, 0x134($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X134);
    // 0x8006EC44: jal         0x8001C468
    // 0x8006EC48: addiu       $a1, $zero, 0x7CA
    ctx->r5 = ADD32(0, 0X7CA);
    func_8001C468(rdram, ctx);
        goto after_12;
    // 0x8006EC48: addiu       $a1, $zero, 0x7CA
    ctx->r5 = ADD32(0, 0X7CA);
    after_12:
    // 0x8006EC4C: lw          $a0, 0x134($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X134);
    // 0x8006EC50: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8006EC54: jal         0x800192E8
    // 0x8006EC58: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800192E8(rdram, ctx);
        goto after_13;
    // 0x8006EC58: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_13:
    // 0x8006EC5C: lwc1        $f4, 0xC($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0XC);
    // 0x8006EC60: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x8006EC64: swc1        $f4, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->f4.u32l;
    // 0x8006EC68: lwc1        $f6, 0x10($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X10);
    // 0x8006EC6C: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x8006EC70: swc1        $f6, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f6.u32l;
    // 0x8006EC74: lwc1        $f8, 0x14($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X14);
    // 0x8006EC78: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8006EC7C: addiu       $s2, $zero, 0x5
    ctx->r18 = ADD32(0, 0X5);
    // 0x8006EC80: swc1        $f8, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->f8.u32l;
L_8006EC84:
    // 0x8006EC84: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x8006EC88: lw          $a0, 0x13C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X13C);
    // 0x8006EC8C: andi        $t8, $v0, 0x4000
    ctx->r24 = ctx->r2 & 0X4000;
    // 0x8006EC90: bne         $t8, $zero, L_8006F058
    if (ctx->r24 != 0) {
        // 0x8006EC94: andi        $t6, $v0, 0x400
        ctx->r14 = ctx->r2 & 0X400;
            goto L_8006F058;
    }
    // 0x8006EC94: andi        $t6, $v0, 0x400
    ctx->r14 = ctx->r2 & 0X400;
    // 0x8006EC98: beq         $t6, $zero, L_8006ECBC
    if (ctx->r14 == 0) {
        // 0x8006EC9C: slti        $at, $s0, 0x5
        ctx->r1 = SIGNED(ctx->r16) < 0X5 ? 1 : 0;
            goto L_8006ECBC;
    }
    // 0x8006EC9C: slti        $at, $s0, 0x5
    ctx->r1 = SIGNED(ctx->r16) < 0X5 ? 1 : 0;
    // 0x8006ECA0: jal         0x8001913C
    // 0x8006ECA4: addiu       $a1, $s1, 0xC
    ctx->r5 = ADD32(ctx->r17, 0XC);
    func_8001913C(rdram, ctx);
        goto after_14;
    // 0x8006ECA4: addiu       $a1, $s1, 0xC
    ctx->r5 = ADD32(ctx->r17, 0XC);
    after_14:
    // 0x8006ECA8: lw          $t7, 0x24($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X24);
    // 0x8006ECAC: addiu       $at, $zero, -0x401
    ctx->r1 = ADD32(0, -0X401);
    // 0x8006ECB0: and         $t9, $t7, $at
    ctx->r25 = ctx->r15 & ctx->r1;
    // 0x8006ECB4: sw          $t9, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r25;
    // 0x8006ECB8: slti        $at, $s0, 0x5
    ctx->r1 = SIGNED(ctx->r16) < 0X5 ? 1 : 0;
L_8006ECBC:
    // 0x8006ECBC: beq         $at, $zero, L_8006ED4C
    if (ctx->r1 == 0) {
        // 0x8006ECC0: addiu       $t8, $s0, 0x1
        ctx->r24 = ADD32(ctx->r16, 0X1);
            goto L_8006ED4C;
    }
    // 0x8006ECC0: addiu       $t8, $s0, 0x1
    ctx->r24 = ADD32(ctx->r16, 0X1);
    // 0x8006ECC4: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x8006ECC8: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x8006ECCC: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8006ECD0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8006ECD4: sll         $t6, $s0, 8
    ctx->r14 = S32(ctx->r16 << 8);
    // 0x8006ECD8: subu        $t6, $t6, $s0
    ctx->r14 = SUB32(ctx->r14, ctx->r16);
    // 0x8006ECDC: mul.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8006ECE0: jal         0x80028C2C
    // 0x8006ECE4: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
    func_80028C2C(rdram, ctx);
        goto after_15;
    // 0x8006ECE4: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
    after_15:
    // 0x8006ECE8: lw          $a0, 0x134($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X134);
    // 0x8006ECEC: swc1        $f0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f0.u32l;
    // 0x8006ECF0: swc1        $f0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f0.u32l;
    // 0x8006ECF4: swc1        $f0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f0.u32l;
    // 0x8006ECF8: jal         0x80019114
    // 0x8006ECFC: addiu       $a1, $sp, 0x84
    ctx->r5 = ADD32(ctx->r29, 0X84);
    func_80019114(rdram, ctx);
        goto after_16;
    // 0x8006ECFC: addiu       $a1, $sp, 0x84
    ctx->r5 = ADD32(ctx->r29, 0X84);
    after_16:
    // 0x8006ED00: lw          $a0, 0x134($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X134);
    // 0x8006ED04: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8006ED08: bne         $s0, $at, L_8006ED24
    if (ctx->r16 != ctx->r1) {
        // 0x8006ED0C: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_8006ED24;
    }
    // 0x8006ED0C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8006ED10: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8006ED14: jal         0x80018658
    // 0x8006ED18: sw          $a0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r4;
    func_80018658(rdram, ctx);
        goto after_17;
    // 0x8006ED18: sw          $a0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r4;
    after_17:
    // 0x8006ED1C: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    // 0x8006ED20: nop

L_8006ED24:
    // 0x8006ED24: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x8006ED28: nop

    // 0x8006ED2C: bgez        $a1, L_8006ED3C
    if (SIGNED(ctx->r5) >= 0) {
        // 0x8006ED30: sra         $t7, $a1, 2
        ctx->r15 = S32(SIGNED(ctx->r5) >> 2);
            goto L_8006ED3C;
    }
    // 0x8006ED30: sra         $t7, $a1, 2
    ctx->r15 = S32(SIGNED(ctx->r5) >> 2);
    // 0x8006ED34: addiu       $at, $a1, 0x3
    ctx->r1 = ADD32(ctx->r5, 0X3);
    // 0x8006ED38: sra         $t7, $at, 2
    ctx->r15 = S32(SIGNED(ctx->r1) >> 2);
L_8006ED3C:
    // 0x8006ED3C: jal         0x80018604
    // 0x8006ED40: andi        $a1, $t7, 0xFF
    ctx->r5 = ctx->r15 & 0XFF;
    func_80018604(rdram, ctx);
        goto after_18;
    // 0x8006ED40: andi        $a1, $t7, 0xFF
    ctx->r5 = ctx->r15 & 0XFF;
    after_18:
    // 0x8006ED44: b           L_8006EDF0
    // 0x8006ED48: addiu       $t7, $s0, 0x1
    ctx->r15 = ADD32(ctx->r16, 0X1);
        goto L_8006EDF0;
    // 0x8006ED48: addiu       $t7, $s0, 0x1
    ctx->r15 = ADD32(ctx->r16, 0X1);
L_8006ED4C:
    // 0x8006ED4C: slti        $at, $s0, 0x23
    ctx->r1 = SIGNED(ctx->r16) < 0X23 ? 1 : 0;
    // 0x8006ED50: bne         $at, $zero, L_8006EDEC
    if (ctx->r1 != 0) {
        // 0x8006ED54: slti        $at, $s0, 0x28
        ctx->r1 = SIGNED(ctx->r16) < 0X28 ? 1 : 0;
            goto L_8006EDEC;
    }
    // 0x8006ED54: slti        $at, $s0, 0x28
    ctx->r1 = SIGNED(ctx->r16) < 0X28 ? 1 : 0;
    // 0x8006ED58: beq         $at, $zero, L_8006EDD4
    if (ctx->r1 == 0) {
        // 0x8006ED5C: addiu       $t8, $zero, 0x27
        ctx->r24 = ADD32(0, 0X27);
            goto L_8006EDD4;
    }
    // 0x8006ED5C: addiu       $t8, $zero, 0x27
    ctx->r24 = ADD32(0, 0X27);
    // 0x8006ED60: subu        $v0, $t8, $s0
    ctx->r2 = SUB32(ctx->r24, ctx->r16);
    // 0x8006ED64: sll         $v1, $v0, 8
    ctx->r3 = S32(ctx->r2 << 8);
    // 0x8006ED68: lw          $a0, 0x134($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X134);
    // 0x8006ED6C: bne         $s2, $v0, L_8006ED94
    if (ctx->r18 != ctx->r2) {
        // 0x8006ED70: subu        $v1, $v1, $v0
        ctx->r3 = SUB32(ctx->r3, ctx->r2);
            goto L_8006ED94;
    }
    // 0x8006ED70: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8006ED74: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8006ED78: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8006ED7C: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    // 0x8006ED80: jal         0x80018658
    // 0x8006ED84: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    func_80018658(rdram, ctx);
        goto after_19;
    // 0x8006ED84: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    after_19:
    // 0x8006ED88: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x8006ED8C: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x8006ED90: nop

L_8006ED94:
    // 0x8006ED94: div         $zero, $v1, $s2
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r18))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r18)));
    // 0x8006ED98: bne         $s2, $zero, L_8006EDA4
    if (ctx->r18 != 0) {
        // 0x8006ED9C: nop
    
            goto L_8006EDA4;
    }
    // 0x8006ED9C: nop

    // 0x8006EDA0: break       7
    do_break(2147937696);
L_8006EDA4:
    // 0x8006EDA4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8006EDA8: bne         $s2, $at, L_8006EDBC
    if (ctx->r18 != ctx->r1) {
        // 0x8006EDAC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8006EDBC;
    }
    // 0x8006EDAC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8006EDB0: bne         $v1, $at, L_8006EDBC
    if (ctx->r3 != ctx->r1) {
        // 0x8006EDB4: nop
    
            goto L_8006EDBC;
    }
    // 0x8006EDB4: nop

    // 0x8006EDB8: break       6
    do_break(2147937720);
L_8006EDBC:
    // 0x8006EDBC: mflo        $a1
    ctx->r5 = lo;
    // 0x8006EDC0: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x8006EDC4: jal         0x80018604
    // 0x8006EDC8: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    func_80018604(rdram, ctx);
        goto after_20;
    // 0x8006EDC8: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    after_20:
    // 0x8006EDCC: b           L_8006EDF0
    // 0x8006EDD0: addiu       $t7, $s0, 0x1
    ctx->r15 = ADD32(ctx->r16, 0X1);
        goto L_8006EDF0;
    // 0x8006EDD0: addiu       $t7, $s0, 0x1
    ctx->r15 = ADD32(ctx->r16, 0X1);
L_8006EDD4:
    // 0x8006EDD4: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x8006EDD8: bne         $s0, $at, L_8006EDF0
    if (ctx->r16 != ctx->r1) {
        // 0x8006EDDC: addiu       $t7, $s0, 0x1
        ctx->r15 = ADD32(ctx->r16, 0X1);
            goto L_8006EDF0;
    }
    // 0x8006EDDC: addiu       $t7, $s0, 0x1
    ctx->r15 = ADD32(ctx->r16, 0X1);
    // 0x8006EDE0: lw          $a0, 0x134($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X134);
    // 0x8006EDE4: jal         0x800191C0
    // 0x8006EDE8: nop

    func_800191C0(rdram, ctx);
        goto after_21;
    // 0x8006EDE8: nop

    after_21:
L_8006EDEC:
    // 0x8006EDEC: addiu       $t7, $s0, 0x1
    ctx->r15 = ADD32(ctx->r16, 0X1);
L_8006EDF0:
    // 0x8006EDF0: slti        $at, $s0, 0x5
    ctx->r1 = SIGNED(ctx->r16) < 0X5 ? 1 : 0;
    // 0x8006EDF4: bne         $at, $zero, L_8006EEF8
    if (ctx->r1 != 0) {
        // 0x8006EDF8: sw          $t7, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r15;
            goto L_8006EEF8;
    }
    // 0x8006EDF8: sw          $t7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r15;
    // 0x8006EDFC: bne         $s0, $s2, L_8006EE38
    if (ctx->r16 != ctx->r18) {
        // 0x8006EE00: slti        $at, $s0, 0x10
        ctx->r1 = SIGNED(ctx->r16) < 0X10 ? 1 : 0;
            goto L_8006EE38;
    }
    // 0x8006EE00: slti        $at, $s0, 0x10
    ctx->r1 = SIGNED(ctx->r16) < 0X10 ? 1 : 0;
    // 0x8006EE04: lw          $a0, 0x138($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X138);
    // 0x8006EE08: jal         0x800191D4
    // 0x8006EE0C: nop

    func_800191D4(rdram, ctx);
        goto after_22;
    // 0x8006EE0C: nop

    after_22:
    // 0x8006EE10: lw          $a0, 0x138($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X138);
    // 0x8006EE14: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8006EE18: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8006EE1C: jal         0x80018658
    // 0x8006EE20: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    func_80018658(rdram, ctx);
        goto after_23;
    // 0x8006EE20: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    after_23:
    // 0x8006EE24: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x8006EE28: jal         0x80018604
    // 0x8006EE2C: addiu       $a1, $zero, 0x70
    ctx->r5 = ADD32(0, 0X70);
    func_80018604(rdram, ctx);
        goto after_24;
    // 0x8006EE2C: addiu       $a1, $zero, 0x70
    ctx->r5 = ADD32(0, 0X70);
    after_24:
    // 0x8006EE30: b           L_8006EEFC
    // 0x8006EE34: slti        $at, $s0, 0x5
    ctx->r1 = SIGNED(ctx->r16) < 0X5 ? 1 : 0;
        goto L_8006EEFC;
    // 0x8006EE34: slti        $at, $s0, 0x5
    ctx->r1 = SIGNED(ctx->r16) < 0X5 ? 1 : 0;
L_8006EE38:
    // 0x8006EE38: beq         $at, $zero, L_8006EE90
    if (ctx->r1 == 0) {
        // 0x8006EE3C: addiu       $t9, $s0, -0x5
        ctx->r25 = ADD32(ctx->r16, -0X5);
            goto L_8006EE90;
    }
    // 0x8006EE3C: addiu       $t9, $s0, -0x5
    ctx->r25 = ADD32(ctx->r16, -0X5);
    // 0x8006EE40: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x8006EE44: lui         $at, 0x4110
    ctx->r1 = S32(0X4110 << 16);
    // 0x8006EE48: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8006EE4C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8006EE50: nop

    // 0x8006EE54: mul.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x8006EE58: jal         0x80028C2C
    // 0x8006EE5C: nop

    func_80028C2C(rdram, ctx);
        goto after_25;
    // 0x8006EE5C: nop

    after_25:
    // 0x8006EE60: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x8006EE64: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8006EE68: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8006EE6C: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x8006EE70: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8006EE74: lw          $a0, 0x138($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X138);
    // 0x8006EE78: addiu       $a1, $sp, 0x108
    ctx->r5 = ADD32(ctx->r29, 0X108);
    // 0x8006EE7C: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8006EE80: jal         0x80019114
    // 0x8006EE84: swc1        $f4, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f4.u32l;
    func_80019114(rdram, ctx);
        goto after_26;
    // 0x8006EE84: swc1        $f4, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f4.u32l;
    after_26:
    // 0x8006EE88: b           L_8006EEFC
    // 0x8006EE8C: slti        $at, $s0, 0x5
    ctx->r1 = SIGNED(ctx->r16) < 0X5 ? 1 : 0;
        goto L_8006EEFC;
    // 0x8006EE8C: slti        $at, $s0, 0x5
    ctx->r1 = SIGNED(ctx->r16) < 0X5 ? 1 : 0;
L_8006EE90:
    // 0x8006EE90: slti        $at, $s0, 0x24
    ctx->r1 = SIGNED(ctx->r16) < 0X24 ? 1 : 0;
    // 0x8006EE94: beq         $at, $zero, L_8006EEE0
    if (ctx->r1 == 0) {
        // 0x8006EE98: addiu       $t8, $s0, -0xF
        ctx->r24 = ADD32(ctx->r16, -0XF);
            goto L_8006EEE0;
    }
    // 0x8006EE98: addiu       $t8, $s0, -0xF
    ctx->r24 = ADD32(ctx->r16, -0XF);
    // 0x8006EE9C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8006EEA0: lui         $at, 0x4090
    ctx->r1 = S32(0X4090 << 16);
    // 0x8006EEA4: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8006EEA8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8006EEAC: nop

    // 0x8006EEB0: mul.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8006EEB4: jal         0x80028C00
    // 0x8006EEB8: nop

    func_80028C00(rdram, ctx);
        goto after_27;
    // 0x8006EEB8: nop

    after_27:
    // 0x8006EEBC: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8006EEC0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8006EEC4: lw          $a0, 0x138($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X138);
    // 0x8006EEC8: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8006EECC: addiu       $a1, $sp, 0x108
    ctx->r5 = ADD32(ctx->r29, 0X108);
    // 0x8006EED0: jal         0x80019114
    // 0x8006EED4: swc1        $f6, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f6.u32l;
    func_80019114(rdram, ctx);
        goto after_28;
    // 0x8006EED4: swc1        $f6, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->f6.u32l;
    after_28:
    // 0x8006EED8: b           L_8006EEFC
    // 0x8006EEDC: slti        $at, $s0, 0x5
    ctx->r1 = SIGNED(ctx->r16) < 0X5 ? 1 : 0;
        goto L_8006EEFC;
    // 0x8006EEDC: slti        $at, $s0, 0x5
    ctx->r1 = SIGNED(ctx->r16) < 0X5 ? 1 : 0;
L_8006EEE0:
    // 0x8006EEE0: addiu       $at, $zero, 0x24
    ctx->r1 = ADD32(0, 0X24);
    // 0x8006EEE4: bne         $s0, $at, L_8006EEFC
    if (ctx->r16 != ctx->r1) {
        // 0x8006EEE8: slti        $at, $s0, 0x5
        ctx->r1 = SIGNED(ctx->r16) < 0X5 ? 1 : 0;
            goto L_8006EEFC;
    }
    // 0x8006EEE8: slti        $at, $s0, 0x5
    ctx->r1 = SIGNED(ctx->r16) < 0X5 ? 1 : 0;
    // 0x8006EEEC: lw          $a0, 0x138($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X138);
    // 0x8006EEF0: jal         0x800191C0
    // 0x8006EEF4: nop

    func_800191C0(rdram, ctx);
        goto after_29;
    // 0x8006EEF4: nop

    after_29:
L_8006EEF8:
    // 0x8006EEF8: slti        $at, $s0, 0x5
    ctx->r1 = SIGNED(ctx->r16) < 0X5 ? 1 : 0;
L_8006EEFC:
    // 0x8006EEFC: bne         $at, $zero, L_8006F040
    if (ctx->r1 != 0) {
        // 0x8006EF00: slti        $at, $s0, 0x11
        ctx->r1 = SIGNED(ctx->r16) < 0X11 ? 1 : 0;
            goto L_8006F040;
    }
    // 0x8006EF00: slti        $at, $s0, 0x11
    ctx->r1 = SIGNED(ctx->r16) < 0X11 ? 1 : 0;
    // 0x8006EF04: beq         $at, $zero, L_8006EFC8
    if (ctx->r1 == 0) {
        // 0x8006EF08: slti        $at, $s0, 0x1B
        ctx->r1 = SIGNED(ctx->r16) < 0X1B ? 1 : 0;
            goto L_8006EFC8;
    }
    // 0x8006EF08: slti        $at, $s0, 0x1B
    ctx->r1 = SIGNED(ctx->r16) < 0X1B ? 1 : 0;
    // 0x8006EF0C: bne         $s0, $s2, L_8006EF24
    if (ctx->r16 != ctx->r18) {
        // 0x8006EF10: lui         $at, 0x4000
        ctx->r1 = S32(0X4000 << 16);
            goto L_8006EF24;
    }
    // 0x8006EF10: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8006EF14: lw          $a0, 0x13C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X13C);
    // 0x8006EF18: jal         0x800191D4
    // 0x8006EF1C: nop

    func_800191D4(rdram, ctx);
        goto after_30;
    // 0x8006EF1C: nop

    after_30:
    // 0x8006EF20: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
L_8006EF24:
    // 0x8006EF24: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8006EF28: lw          $a0, 0x13C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X13C);
    // 0x8006EF2C: addiu       $a1, $sp, 0x114
    ctx->r5 = ADD32(ctx->r29, 0X114);
    // 0x8006EF30: jal         0x80019114
    // 0x8006EF34: swc1        $f8, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f8.u32l;
    func_80019114(rdram, ctx);
        goto after_31;
    // 0x8006EF34: swc1        $f8, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->f8.u32l;
    after_31:
    // 0x8006EF38: addiu       $t6, $s0, -0x4
    ctx->r14 = ADD32(ctx->r16, -0X4);
    // 0x8006EF3C: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8006EF40: lui         $at, 0x40F0
    ctx->r1 = S32(0X40F0 << 16);
    // 0x8006EF44: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8006EF48: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8006EF4C: lwc1        $f10, 0x0($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X0);
    // 0x8006EF50: mul.s       $f20, $f6, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f20.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8006EF54: swc1        $f10, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->f10.u32l;
    // 0x8006EF58: jal         0x80028C2C
    // 0x8006EF5C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_80028C2C(rdram, ctx);
        goto after_32;
    // 0x8006EF5C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_32:
    // 0x8006EF60: mul.s       $f10, $f0, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x8006EF64: lwc1        $f4, 0x4($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X4);
    // 0x8006EF68: lw          $a0, 0x13C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X13C);
    // 0x8006EF6C: addiu       $a1, $sp, 0x120
    ctx->r5 = ADD32(ctx->r29, 0X120);
    // 0x8006EF70: sub.s       $f6, $f4, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f22.fl;
    // 0x8006EF74: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x8006EF78: swc1        $f8, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f8.u32l;
    // 0x8006EF7C: lwc1        $f4, 0x8($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X8);
    // 0x8006EF80: jal         0x80019164
    // 0x8006EF84: swc1        $f4, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->f4.u32l;
    func_80019164(rdram, ctx);
        goto after_33;
    // 0x8006EF84: swc1        $f4, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->f4.u32l;
    after_33:
    // 0x8006EF88: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8006EF8C: lwc1        $f11, 0x6550($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X6550);
    // 0x8006EF90: lwc1        $f10, 0x6554($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X6554);
    // 0x8006EF94: cvt.d.s     $f6, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f6.d = CVT_D_S(ctx->f20.fl);
    // 0x8006EF98: mul.d       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f10.d, ctx->f6.d);
    // 0x8006EF9C: lwc1        $f4, 0x10($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X10);
    // 0x8006EFA0: lw          $a0, 0x13C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X13C);
    // 0x8006EFA4: cvt.d.s     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f10.d = CVT_D_S(ctx->f4.fl);
    // 0x8006EFA8: addiu       $a1, $sp, 0xFC
    ctx->r5 = ADD32(ctx->r29, 0XFC);
    // 0x8006EFAC: add.d       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f8.d); 
    ctx->f6.d = ctx->f10.d + ctx->f8.d;
    // 0x8006EFB0: cvt.s.d     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f4.fl = CVT_S_D(ctx->f6.d);
    // 0x8006EFB4: jal         0x8001913C
    // 0x8006EFB8: swc1        $f4, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f4.u32l;
    func_8001913C(rdram, ctx);
        goto after_34;
    // 0x8006EFB8: swc1        $f4, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->f4.u32l;
    after_34:
    // 0x8006EFBC: b           L_8006F040
    // 0x8006EFC0: nop

        goto L_8006F040;
    // 0x8006EFC0: nop

    // 0x8006EFC4: slti        $at, $s0, 0x1B
    ctx->r1 = SIGNED(ctx->r16) < 0X1B ? 1 : 0;
L_8006EFC8:
    // 0x8006EFC8: bne         $at, $zero, L_8006F040
    if (ctx->r1 != 0) {
        // 0x8006EFCC: slti        $at, $s0, 0x20
        ctx->r1 = SIGNED(ctx->r16) < 0X20 ? 1 : 0;
            goto L_8006F040;
    }
    // 0x8006EFCC: slti        $at, $s0, 0x20
    ctx->r1 = SIGNED(ctx->r16) < 0X20 ? 1 : 0;
    // 0x8006EFD0: beq         $at, $zero, L_8006F028
    if (ctx->r1 == 0) {
        // 0x8006EFD4: addiu       $t7, $s0, -0x1A
        ctx->r15 = ADD32(ctx->r16, -0X1A);
            goto L_8006F028;
    }
    // 0x8006EFD4: addiu       $t7, $s0, -0x1A
    ctx->r15 = ADD32(ctx->r16, -0X1A);
    // 0x8006EFD8: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x8006EFDC: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x8006EFE0: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8006EFE4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8006EFE8: lwc1        $f10, 0x0($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X0);
    // 0x8006EFEC: mul.s       $f12, $f6, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x8006EFF0: jal         0x80028C00
    // 0x8006EFF4: swc1        $f10, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->f10.u32l;
    func_80028C00(rdram, ctx);
        goto after_35;
    // 0x8006EFF4: swc1        $f10, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->f10.u32l;
    after_35:
    // 0x8006EFF8: mul.s       $f10, $f0, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x8006EFFC: lwc1        $f8, 0x4($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X4);
    // 0x8006F000: lw          $a0, 0x13C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X13C);
    // 0x8006F004: addiu       $a1, $sp, 0x120
    ctx->r5 = ADD32(ctx->r29, 0X120);
    // 0x8006F008: sub.s       $f6, $f8, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f22.fl;
    // 0x8006F00C: add.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x8006F010: swc1        $f4, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->f4.u32l;
    // 0x8006F014: lwc1        $f8, 0x8($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X8);
    // 0x8006F018: jal         0x80019164
    // 0x8006F01C: swc1        $f8, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->f8.u32l;
    func_80019164(rdram, ctx);
        goto after_36;
    // 0x8006F01C: swc1        $f8, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->f8.u32l;
    after_36:
    // 0x8006F020: b           L_8006F040
    // 0x8006F024: nop

        goto L_8006F040;
    // 0x8006F024: nop

L_8006F028:
    // 0x8006F028: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x8006F02C: bne         $s0, $at, L_8006F040
    if (ctx->r16 != ctx->r1) {
        // 0x8006F030: nop
    
            goto L_8006F040;
    }
    // 0x8006F030: nop

    // 0x8006F034: lw          $a0, 0x13C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X13C);
    // 0x8006F038: jal         0x800191C0
    // 0x8006F03C: nop

    func_800191C0(rdram, ctx);
        goto after_37;
    // 0x8006F03C: nop

    after_37:
L_8006F040:
    // 0x8006F040: jal         0x80007AB0
    // 0x8006F044: nop

    func_80007AB0(rdram, ctx);
        goto after_38;
    // 0x8006F044: nop

    after_38:
    // 0x8006F048: lw          $s0, 0x3C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X3C);
    // 0x8006F04C: addiu       $at, $zero, 0x29
    ctx->r1 = ADD32(0, 0X29);
    // 0x8006F050: bne         $s0, $at, L_8006EC84
    if (ctx->r16 != ctx->r1) {
        // 0x8006F054: nop
    
            goto L_8006EC84;
    }
    // 0x8006F054: nop

L_8006F058:
    // 0x8006F058: addiu       $v0, $sp, 0x134
    ctx->r2 = ADD32(ctx->r29, 0X134);
    // 0x8006F05C: addiu       $v1, $v0, 0xC
    ctx->r3 = ADD32(ctx->r2, 0XC);
L_8006F060:
    // 0x8006F060: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x8006F064: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    // 0x8006F068: jal         0x8001C568
    // 0x8006F06C: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    func_8001C568(rdram, ctx);
        goto after_39;
    // 0x8006F06C: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    after_39:
    // 0x8006F070: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x8006F074: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x8006F078: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8006F07C: sltu        $at, $v0, $v1
    ctx->r1 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8006F080: bne         $at, $zero, L_8006F060
    if (ctx->r1 != 0) {
        // 0x8006F084: nop
    
            goto L_8006F060;
    }
    // 0x8006F084: nop

    // 0x8006F088: jal         0x8005CD50
    // 0x8006F08C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8005CD50(rdram, ctx);
        goto after_40;
    // 0x8006F08C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_40:
    // 0x8006F090: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8006F094: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x8006F098: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x8006F09C: nop

    // 0x8006F0A0: addiu       $t6, $t8, -0x1
    ctx->r14 = ADD32(ctx->r24, -0X1);
    // 0x8006F0A4: jal         0x80007AE0
    // 0x8006F0A8: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    func_80007AE0(rdram, ctx);
        goto after_41;
    // 0x8006F0A8: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    after_41:
    // 0x8006F0AC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8006F0B0: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8006F0B4: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8006F0B8: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8006F0BC: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8006F0C0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8006F0C4: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8006F0C8: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8006F0CC: jr          $ra
    // 0x8006F0D0: addiu       $sp, $sp, 0x148
    ctx->r29 = ADD32(ctx->r29, 0X148);
    return;
    // 0x8006F0D0: addiu       $sp, $sp, 0x148
    ctx->r29 = ADD32(ctx->r29, 0X148);
;}
RECOMP_FUNC void func_8006F0D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006F0D4: addiu       $sp, $sp, -0xD0
    ctx->r29 = ADD32(ctx->r29, -0XD0);
    // 0x8006F0D8: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8006F0DC: sw          $s7, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r23;
    // 0x8006F0E0: sw          $s6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r22;
    // 0x8006F0E4: sw          $s5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r21;
    // 0x8006F0E8: sw          $s4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r20;
    // 0x8006F0EC: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x8006F0F0: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x8006F0F4: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x8006F0F8: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x8006F0FC: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8006F100: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x8006F104: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8006F108: jal         0x80007774
    // 0x8006F10C: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x8006F10C: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x8006F110: lw          $s6, 0x1C($v0)
    ctx->r22 = MEM_W(ctx->r2, 0X1C);
    // 0x8006F114: nop

    // 0x8006F118: lwc1        $f12, 0x10($s6)
    ctx->f12.u32l = MEM_W(ctx->r22, 0X10);
    // 0x8006F11C: jal         0x8007A800
    // 0x8006F120: nop

    __cosf_recomp(rdram, ctx);
        goto after_1;
    // 0x8006F120: nop

    after_1:
    // 0x8006F124: lwc1        $f12, 0x10($s6)
    ctx->f12.u32l = MEM_W(ctx->r22, 0X10);
    // 0x8006F128: jal         0x8007A640
    // 0x8006F12C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    __sinf_recomp(rdram, ctx);
        goto after_2;
    // 0x8006F12C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_2:
    // 0x8006F130: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8006F134: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8006F138: lwc1        $f4, 0x0($s6)
    ctx->f4.u32l = MEM_W(ctx->r22, 0X0);
    // 0x8006F13C: mul.s       $f8, $f20, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f6.fl);
    // 0x8006F140: lui         $at, 0x425C
    ctx->r1 = S32(0X425C << 16);
    // 0x8006F144: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8006F148: sub.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x8006F14C: mul.s       $f4, $f0, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x8006F150: add.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x8006F154: swc1        $f8, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->f8.u32l;
    // 0x8006F158: lwc1        $f6, 0x4($s6)
    ctx->f6.u32l = MEM_W(ctx->r22, 0X4);
    // 0x8006F15C: nop

    // 0x8006F160: swc1        $f6, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->f6.u32l;
    // 0x8006F164: lwc1        $f12, 0x10($s6)
    ctx->f12.u32l = MEM_W(ctx->r22, 0X10);
    // 0x8006F168: jal         0x8007A800
    // 0x8006F16C: nop

    __cosf_recomp(rdram, ctx);
        goto after_3;
    // 0x8006F16C: nop

    after_3:
    // 0x8006F170: lwc1        $f12, 0x10($s6)
    ctx->f12.u32l = MEM_W(ctx->r22, 0X10);
    // 0x8006F174: jal         0x8007A640
    // 0x8006F178: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    __sinf_recomp(rdram, ctx);
        goto after_4;
    // 0x8006F178: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_4:
    // 0x8006F17C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x8006F180: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8006F184: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8006F188: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x8006F18C: lui         $at, 0x425C
    ctx->r1 = S32(0X425C << 16);
    // 0x8006F190: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8006F194: lwc1        $f4, 0x8($s6)
    ctx->f4.u32l = MEM_W(ctx->r22, 0X8);
    // 0x8006F198: mul.s       $f8, $f20, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f10.fl);
    // 0x8006F19C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8006F1A0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8006F1A4: addiu       $a0, $zero, 0x781
    ctx->r4 = ADD32(0, 0X781);
    // 0x8006F1A8: add.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x8006F1AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8006F1B0: mul.s       $f4, $f0, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x8006F1B4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8006F1B8: swc1        $f2, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f2.u32l;
    // 0x8006F1BC: swc1        $f2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f2.u32l;
    // 0x8006F1C0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8006F1C4: swc1        $f22, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f22.u32l;
    // 0x8006F1C8: jal         0x8001D138
    // 0x8006F1CC: swc1        $f8, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f8.u32l;
    func_8001D138(rdram, ctx);
        goto after_5;
    // 0x8006F1CC: swc1        $f8, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f8.u32l;
    after_5:
    // 0x8006F1D0: addiu       $s7, $sp, 0xB4
    ctx->r23 = ADD32(ctx->r29, 0XB4);
    // 0x8006F1D4: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x8006F1D8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8006F1DC: jal         0x80019164
    // 0x8006F1E0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80019164(rdram, ctx);
        goto after_6;
    // 0x8006F1E0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_6:
    // 0x8006F1E4: sw          $s0, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r16;
    // 0x8006F1E8: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
    // 0x8006F1EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006F1F0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8006F1F4: jal         0x80018658
    // 0x8006F1F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80018658(rdram, ctx);
        goto after_7;
    // 0x8006F1F8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x8006F1FC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8006F200: jal         0x80018604
    // 0x8006F204: addiu       $a1, $zero, 0xC0
    ctx->r5 = ADD32(0, 0XC0);
    func_80018604(rdram, ctx);
        goto after_8;
    // 0x8006F204: addiu       $a1, $zero, 0xC0
    ctx->r5 = ADD32(0, 0XC0);
    after_8:
    // 0x8006F208: lw          $a0, 0xC4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC4);
    // 0x8006F20C: jal         0x80019164
    // 0x8006F210: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    func_80019164(rdram, ctx);
        goto after_9;
    // 0x8006F210: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    after_9:
    // 0x8006F214: addiu       $s5, $sp, 0xA8
    ctx->r21 = ADD32(ctx->r29, 0XA8);
    // 0x8006F218: lw          $a0, 0xC4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC4);
    // 0x8006F21C: jal         0x80019114
    // 0x8006F220: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    func_80019114(rdram, ctx);
        goto after_10;
    // 0x8006F220: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_10:
    // 0x8006F224: lui         $at, 0x4110
    ctx->r1 = S32(0X4110 << 16);
    // 0x8006F228: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x8006F22C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8006F230: addiu       $s3, $zero, 0xA
    ctx->r19 = ADD32(0, 0XA);
L_8006F234:
    // 0x8006F234: lw          $t6, 0x24($s6)
    ctx->r14 = MEM_W(ctx->r22, 0X24);
    // 0x8006F238: addiu       $s2, $v0, 0x1
    ctx->r18 = ADD32(ctx->r2, 0X1);
    // 0x8006F23C: andi        $t7, $t6, 0x4000
    ctx->r15 = ctx->r14 & 0X4000;
    // 0x8006F240: bne         $t7, $zero, L_8006F2F0
    if (ctx->r15 != 0) {
        // 0x8006F244: addiu       $t8, $zero, 0x9
        ctx->r24 = ADD32(0, 0X9);
            goto L_8006F2F0;
    }
    // 0x8006F244: addiu       $t8, $zero, 0x9
    ctx->r24 = ADD32(0, 0X9);
    // 0x8006F248: mtc1        $s2, $f10
    ctx->f10.u32l = ctx->r18;
    // 0x8006F24C: subu        $s1, $t8, $v0
    ctx->r17 = SUB32(ctx->r24, ctx->r2);
    // 0x8006F250: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8006F254: sll         $s4, $s1, 2
    ctx->r20 = S32(ctx->r17 << 2);
    // 0x8006F258: subu        $s4, $s4, $s1
    ctx->r20 = SUB32(ctx->r20, ctx->r17);
    // 0x8006F25C: mul.s       $f12, $f4, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x8006F260: jal         0x80028C2C
    // 0x8006F264: sll         $s4, $s4, 6
    ctx->r20 = S32(ctx->r20 << 6);
    func_80028C2C(rdram, ctx);
        goto after_11;
    // 0x8006F264: sll         $s4, $s4, 6
    ctx->r20 = S32(ctx->r20 << 6);
    after_11:
    // 0x8006F268: add.s       $f6, $f0, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x8006F26C: lw          $a0, 0xC4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC4);
    // 0x8006F270: add.s       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f22.fl;
    // 0x8006F274: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x8006F278: jal         0x80019114
    // 0x8006F27C: swc1        $f8, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f8.u32l;
    func_80019114(rdram, ctx);
        goto after_12;
    // 0x8006F27C: swc1        $f8, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f8.u32l;
    after_12:
    // 0x8006F280: lw          $s0, 0xC4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XC4);
    // 0x8006F284: bne         $s3, $s1, L_8006F298
    if (ctx->r19 != ctx->r17) {
        // 0x8006F288: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8006F298;
    }
    // 0x8006F288: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006F28C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8006F290: jal         0x80018658
    // 0x8006F294: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80018658(rdram, ctx);
        goto after_13;
    // 0x8006F294: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_13:
L_8006F298:
    // 0x8006F298: div         $zero, $s4, $s3
    lo = S32(S64(S32(ctx->r20)) / S64(S32(ctx->r19))); hi = S32(S64(S32(ctx->r20)) % S64(S32(ctx->r19)));
    // 0x8006F29C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006F2A0: bne         $s3, $zero, L_8006F2AC
    if (ctx->r19 != 0) {
        // 0x8006F2A4: nop
    
            goto L_8006F2AC;
    }
    // 0x8006F2A4: nop

    // 0x8006F2A8: break       7
    do_break(2147938984);
L_8006F2AC:
    // 0x8006F2AC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8006F2B0: bne         $s3, $at, L_8006F2C4
    if (ctx->r19 != ctx->r1) {
        // 0x8006F2B4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8006F2C4;
    }
    // 0x8006F2B4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8006F2B8: bne         $s4, $at, L_8006F2C4
    if (ctx->r20 != ctx->r1) {
        // 0x8006F2BC: nop
    
            goto L_8006F2C4;
    }
    // 0x8006F2BC: nop

    // 0x8006F2C0: break       6
    do_break(2147939008);
L_8006F2C4:
    // 0x8006F2C4: mflo        $a1
    ctx->r5 = lo;
    // 0x8006F2C8: andi        $t9, $a1, 0xFF
    ctx->r25 = ctx->r5 & 0XFF;
    // 0x8006F2CC: jal         0x80018604
    // 0x8006F2D0: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    func_80018604(rdram, ctx);
        goto after_14;
    // 0x8006F2D0: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    after_14:
    // 0x8006F2D4: lw          $a0, 0xC4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC4);
    // 0x8006F2D8: jal         0x80019164
    // 0x8006F2DC: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    func_80019164(rdram, ctx);
        goto after_15;
    // 0x8006F2DC: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    after_15:
    // 0x8006F2E0: jal         0x80007AB0
    // 0x8006F2E4: nop

    func_80007AB0(rdram, ctx);
        goto after_16;
    // 0x8006F2E4: nop

    after_16:
    // 0x8006F2E8: bne         $s2, $s3, L_8006F234
    if (ctx->r18 != ctx->r19) {
        // 0x8006F2EC: or          $v0, $s2, $zero
        ctx->r2 = ctx->r18 | 0;
            goto L_8006F234;
    }
    // 0x8006F2EC: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
L_8006F2F0:
    // 0x8006F2F0: addiu       $s0, $sp, 0xC4
    ctx->r16 = ADD32(ctx->r29, 0XC4);
    // 0x8006F2F4: addiu       $s2, $s0, 0x4
    ctx->r18 = ADD32(ctx->r16, 0X4);
L_8006F2F8:
    // 0x8006F2F8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8006F2FC: jal         0x8001C568
    // 0x8006F300: nop

    func_8001C568(rdram, ctx);
        goto after_17;
    // 0x8006F300: nop

    after_17:
    // 0x8006F304: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8006F308: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x8006F30C: bne         $at, $zero, L_8006F2F8
    if (ctx->r1 != 0) {
        // 0x8006F310: nop
    
            goto L_8006F2F8;
    }
    // 0x8006F310: nop

    // 0x8006F314: jal         0x8005CD50
    // 0x8006F318: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    func_8005CD50(rdram, ctx);
        goto after_18;
    // 0x8006F318: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_18:
    // 0x8006F31C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8006F320: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x8006F324: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x8006F328: nop

    // 0x8006F32C: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x8006F330: jal         0x80007AE0
    // 0x8006F334: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    func_80007AE0(rdram, ctx);
        goto after_19;
    // 0x8006F334: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    after_19:
    // 0x8006F338: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8006F33C: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x8006F340: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8006F344: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8006F348: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8006F34C: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x8006F350: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x8006F354: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x8006F358: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x8006F35C: lw          $s4, 0x34($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X34);
    // 0x8006F360: lw          $s5, 0x38($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X38);
    // 0x8006F364: lw          $s6, 0x3C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X3C);
    // 0x8006F368: lw          $s7, 0x40($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X40);
    // 0x8006F36C: jr          $ra
    // 0x8006F370: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    return;
    // 0x8006F370: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
RECOMP_FUNC void func_8006F374(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006F374: addiu       $sp, $sp, -0x110
    ctx->r29 = ADD32(ctx->r29, -0X110);
    // 0x8006F378: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x8006F37C: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x8006F380: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x8006F384: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x8006F388: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x8006F38C: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x8006F390: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x8006F394: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x8006F398: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x8006F39C: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x8006F3A0: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x8006F3A4: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x8006F3A8: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8006F3AC: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x8006F3B0: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8006F3B4: jal         0x80007774
    // 0x8006F3B8: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x8006F3B8: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x8006F3BC: lw          $s6, 0x1C($v0)
    ctx->r22 = MEM_W(ctx->r2, 0X1C);
    // 0x8006F3C0: addiu       $a0, $zero, 0x7A4
    ctx->r4 = ADD32(0, 0X7A4);
    // 0x8006F3C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8006F3C8: jal         0x8001D138
    // 0x8006F3CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x8006F3CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8006F3D0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8006F3D4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8006F3D8: jal         0x80019164
    // 0x8006F3DC: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x8006F3DC: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    after_2:
    // 0x8006F3E0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x8006F3E4: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x8006F3E8: sw          $s0, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->r16;
    // 0x8006F3EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006F3F0: addiu       $a1, $sp, 0xD4
    ctx->r5 = ADD32(ctx->r29, 0XD4);
    // 0x8006F3F4: swc1        $f20, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->f20.u32l;
    // 0x8006F3F8: swc1        $f20, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->f20.u32l;
    // 0x8006F3FC: jal         0x80019114
    // 0x8006F400: swc1        $f20, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f20.u32l;
    func_80019114(rdram, ctx);
        goto after_3;
    // 0x8006F400: swc1        $f20, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->f20.u32l;
    after_3:
    // 0x8006F404: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x8006F408: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x8006F40C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8006F410: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x8006F414: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8006F418: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x8006F41C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8006F420: addiu       $s5, $sp, 0x74
    ctx->r21 = ADD32(ctx->r29, 0X74);
    // 0x8006F424: addiu       $s4, $sp, 0x8C
    ctx->r20 = ADD32(ctx->r29, 0X8C);
    // 0x8006F428: addiu       $s3, $sp, 0xA4
    ctx->r19 = ADD32(ctx->r29, 0XA4);
    // 0x8006F42C: addiu       $s2, $sp, 0xBC
    ctx->r18 = ADD32(ctx->r29, 0XBC);
    // 0x8006F430: addiu       $s1, $zero, 0xA
    ctx->r17 = ADD32(0, 0XA);
L_8006F434:
    // 0x8006F434: lw          $t6, 0x24($s6)
    ctx->r14 = MEM_W(ctx->r22, 0X24);
    // 0x8006F438: slti        $at, $s0, 0x2
    ctx->r1 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
    // 0x8006F43C: andi        $t7, $t6, 0x4000
    ctx->r15 = ctx->r14 & 0X4000;
    // 0x8006F440: bne         $t7, $zero, L_8006F518
    if (ctx->r15 != 0) {
        // 0x8006F444: nop
    
            goto L_8006F518;
    }
    // 0x8006F444: nop

    // 0x8006F448: bne         $at, $zero, L_8006F504
    if (ctx->r1 != 0) {
        // 0x8006F44C: slti        $at, $s0, 0x3
        ctx->r1 = SIGNED(ctx->r16) < 0X3 ? 1 : 0;
            goto L_8006F504;
    }
    // 0x8006F44C: slti        $at, $s0, 0x3
    ctx->r1 = SIGNED(ctx->r16) < 0X3 ? 1 : 0;
    // 0x8006F450: beq         $at, $zero, L_8006F474
    if (ctx->r1 == 0) {
        // 0x8006F454: or          $a1, $s2, $zero
        ctx->r5 = ctx->r18 | 0;
            goto L_8006F474;
    }
    // 0x8006F454: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x8006F458: lw          $a0, 0x104($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X104);
    // 0x8006F45C: swc1        $f22, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->f22.u32l;
    // 0x8006F460: swc1        $f22, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->f22.u32l;
    // 0x8006F464: jal         0x80019114
    // 0x8006F468: swc1        $f22, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f22.u32l;
    func_80019114(rdram, ctx);
        goto after_4;
    // 0x8006F468: swc1        $f22, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->f22.u32l;
    after_4:
    // 0x8006F46C: b           L_8006F504
    // 0x8006F470: nop

        goto L_8006F504;
    // 0x8006F470: nop

L_8006F474:
    // 0x8006F474: slti        $at, $s0, 0x4
    ctx->r1 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x8006F478: beq         $at, $zero, L_8006F49C
    if (ctx->r1 == 0) {
        // 0x8006F47C: or          $a1, $s3, $zero
        ctx->r5 = ctx->r19 | 0;
            goto L_8006F49C;
    }
    // 0x8006F47C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x8006F480: lw          $a0, 0x104($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X104);
    // 0x8006F484: swc1        $f24, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f24.u32l;
    // 0x8006F488: swc1        $f24, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f24.u32l;
    // 0x8006F48C: jal         0x80019114
    // 0x8006F490: swc1        $f24, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f24.u32l;
    func_80019114(rdram, ctx);
        goto after_5;
    // 0x8006F490: swc1        $f24, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f24.u32l;
    after_5:
    // 0x8006F494: b           L_8006F504
    // 0x8006F498: nop

        goto L_8006F504;
    // 0x8006F498: nop

L_8006F49C:
    // 0x8006F49C: slti        $at, $s0, 0x5
    ctx->r1 = SIGNED(ctx->r16) < 0X5 ? 1 : 0;
    // 0x8006F4A0: beq         $at, $zero, L_8006F4C4
    if (ctx->r1 == 0) {
        // 0x8006F4A4: or          $a1, $s4, $zero
        ctx->r5 = ctx->r20 | 0;
            goto L_8006F4C4;
    }
    // 0x8006F4A4: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x8006F4A8: lw          $a0, 0x104($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X104);
    // 0x8006F4AC: swc1        $f20, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f20.u32l;
    // 0x8006F4B0: swc1        $f20, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f20.u32l;
    // 0x8006F4B4: jal         0x80019114
    // 0x8006F4B8: swc1        $f20, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f20.u32l;
    func_80019114(rdram, ctx);
        goto after_6;
    // 0x8006F4B8: swc1        $f20, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f20.u32l;
    after_6:
    // 0x8006F4BC: b           L_8006F504
    // 0x8006F4C0: nop

        goto L_8006F504;
    // 0x8006F4C0: nop

L_8006F4C4:
    // 0x8006F4C4: slti        $at, $s0, 0xA
    ctx->r1 = SIGNED(ctx->r16) < 0XA ? 1 : 0;
    // 0x8006F4C8: beq         $at, $zero, L_8006F504
    if (ctx->r1 == 0) {
        // 0x8006F4CC: addiu       $t8, $s0, -0x5
        ctx->r24 = ADD32(ctx->r16, -0X5);
            goto L_8006F504;
    }
    // 0x8006F4CC: addiu       $t8, $s0, -0x5
    ctx->r24 = ADD32(ctx->r16, -0X5);
    // 0x8006F4D0: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x8006F4D4: nop

    // 0x8006F4D8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8006F4DC: mul.s       $f12, $f6, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f12.fl = MUL_S(ctx->f6.fl, ctx->f26.fl);
    // 0x8006F4E0: jal         0x80028C00
    // 0x8006F4E4: nop

    func_80028C00(rdram, ctx);
        goto after_7;
    // 0x8006F4E4: nop

    after_7:
    // 0x8006F4E8: mul.s       $f2, $f0, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x8006F4EC: lw          $a0, 0x104($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X104);
    // 0x8006F4F0: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x8006F4F4: swc1        $f2, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f2.u32l;
    // 0x8006F4F8: swc1        $f2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f2.u32l;
    // 0x8006F4FC: jal         0x80019114
    // 0x8006F500: swc1        $f2, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f2.u32l;
    func_80019114(rdram, ctx);
        goto after_8;
    // 0x8006F500: swc1        $f2, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f2.u32l;
    after_8:
L_8006F504:
    // 0x8006F504: jal         0x80007AB0
    // 0x8006F508: nop

    func_80007AB0(rdram, ctx);
        goto after_9;
    // 0x8006F508: nop

    after_9:
    // 0x8006F50C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8006F510: bne         $s0, $s1, L_8006F434
    if (ctx->r16 != ctx->r17) {
        // 0x8006F514: nop
    
            goto L_8006F434;
    }
    // 0x8006F514: nop

L_8006F518:
    // 0x8006F518: addiu       $s0, $sp, 0x104
    ctx->r16 = ADD32(ctx->r29, 0X104);
    // 0x8006F51C: addiu       $s2, $s0, 0x4
    ctx->r18 = ADD32(ctx->r16, 0X4);
L_8006F520:
    // 0x8006F520: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8006F524: jal         0x8001C568
    // 0x8006F528: nop

    func_8001C568(rdram, ctx);
        goto after_10;
    // 0x8006F528: nop

    after_10:
    // 0x8006F52C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8006F530: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x8006F534: bne         $at, $zero, L_8006F520
    if (ctx->r1 != 0) {
        // 0x8006F538: nop
    
            goto L_8006F520;
    }
    // 0x8006F538: nop

    // 0x8006F53C: jal         0x8005CD50
    // 0x8006F540: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    func_8005CD50(rdram, ctx);
        goto after_11;
    // 0x8006F540: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_11:
    // 0x8006F544: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8006F548: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x8006F54C: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8006F550: nop

    // 0x8006F554: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8006F558: jal         0x80007AE0
    // 0x8006F55C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    func_80007AE0(rdram, ctx);
        goto after_12;
    // 0x8006F55C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    after_12:
    // 0x8006F560: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x8006F564: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8006F568: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8006F56C: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8006F570: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8006F574: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x8006F578: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8006F57C: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x8006F580: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8006F584: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x8006F588: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x8006F58C: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x8006F590: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x8006F594: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x8006F598: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x8006F59C: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x8006F5A0: jr          $ra
    // 0x8006F5A4: addiu       $sp, $sp, 0x110
    ctx->r29 = ADD32(ctx->r29, 0X110);
    return;
    // 0x8006F5A4: addiu       $sp, $sp, 0x110
    ctx->r29 = ADD32(ctx->r29, 0X110);
;}
RECOMP_FUNC void func_8006F5A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006F5A8: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x8006F5AC: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8006F5B0: sw          $s5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r21;
    // 0x8006F5B4: sw          $s4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r20;
    // 0x8006F5B8: sw          $s3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r19;
    // 0x8006F5BC: sw          $s2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r18;
    // 0x8006F5C0: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x8006F5C4: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x8006F5C8: swc1        $f25, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x8006F5CC: swc1        $f24, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f24.u32l;
    // 0x8006F5D0: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8006F5D4: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x8006F5D8: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8006F5DC: jal         0x80007774
    // 0x8006F5E0: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x8006F5E0: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x8006F5E4: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8006F5E8: addiu       $t6, $t6, 0x2654
    ctx->r14 = ADD32(ctx->r14, 0X2654);
    // 0x8006F5EC: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x8006F5F0: addiu       $s5, $sp, 0x74
    ctx->r21 = ADD32(ctx->r29, 0X74);
    // 0x8006F5F4: lw          $s2, 0x1C($v0)
    ctx->r18 = MEM_W(ctx->r2, 0X1C);
    // 0x8006F5F8: sw          $at, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r1;
    // 0x8006F5FC: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x8006F600: addiu       $a0, $zero, 0x7B5
    ctx->r4 = ADD32(0, 0X7B5);
    // 0x8006F604: sw          $t9, 0x4($s5)
    MEM_W(0X4, ctx->r21) = ctx->r25;
    // 0x8006F608: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x8006F60C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8006F610: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8006F614: jal         0x8001D138
    // 0x8006F618: sw          $at, 0x8($s5)
    MEM_W(0X8, ctx->r21) = ctx->r1;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x8006F618: sw          $at, 0x8($s5)
    MEM_W(0X8, ctx->r21) = ctx->r1;
    after_1:
    // 0x8006F61C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8006F620: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8006F624: jal         0x80019164
    // 0x8006F628: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x8006F628: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_2:
    // 0x8006F62C: sw          $s0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r16;
    // 0x8006F630: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006F634: jal         0x8001C468
    // 0x8006F638: addiu       $a1, $zero, 0x7B5
    ctx->r5 = ADD32(0, 0X7B5);
    func_8001C468(rdram, ctx);
        goto after_3;
    // 0x8006F638: addiu       $a1, $zero, 0x7B5
    ctx->r5 = ADD32(0, 0X7B5);
    after_3:
    // 0x8006F63C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8006F640: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x8006F644: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x8006F648: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x8006F64C: lui         $at, 0x4034
    ctx->r1 = S32(0X4034 << 16);
    // 0x8006F650: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x8006F654: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8006F658: addiu       $s4, $zero, 0x20
    ctx->r20 = ADD32(0, 0X20);
    // 0x8006F65C: addiu       $s3, $zero, -0x801
    ctx->r19 = ADD32(0, -0X801);
L_8006F660:
    // 0x8006F660: lw          $v0, 0x24($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X24);
    // 0x8006F664: lw          $a0, 0x84($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X84);
    // 0x8006F668: andi        $t8, $v0, 0x4000
    ctx->r24 = ctx->r2 & 0X4000;
    // 0x8006F66C: bne         $t8, $zero, L_8006F6DC
    if (ctx->r24 != 0) {
        // 0x8006F670: andi        $t7, $v0, 0x800
        ctx->r15 = ctx->r2 & 0X800;
            goto L_8006F6DC;
    }
    // 0x8006F670: andi        $t7, $v0, 0x800
    ctx->r15 = ctx->r2 & 0X800;
    // 0x8006F674: beq         $t7, $zero, L_8006F698
    if (ctx->r15 == 0) {
        // 0x8006F678: addiu       $s0, $s1, 0x1
        ctx->r16 = ADD32(ctx->r17, 0X1);
            goto L_8006F698;
    }
    // 0x8006F678: addiu       $s0, $s1, 0x1
    ctx->r16 = ADD32(ctx->r17, 0X1);
    // 0x8006F67C: jal         0x80019164
    // 0x8006F680: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_80019164(rdram, ctx);
        goto after_4;
    // 0x8006F680: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_4:
    // 0x8006F684: lw          $t6, 0x24($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X24);
    // 0x8006F688: nop

    // 0x8006F68C: and         $t9, $t6, $s3
    ctx->r25 = ctx->r14 & ctx->r19;
    // 0x8006F690: sw          $t9, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r25;
    // 0x8006F694: addiu       $s0, $s1, 0x1
    ctx->r16 = ADD32(ctx->r17, 0X1);
L_8006F698:
    // 0x8006F698: mtc1        $s0, $f4
    ctx->f4.u32l = ctx->r16;
    // 0x8006F69C: nop

    // 0x8006F6A0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8006F6A4: mul.s       $f12, $f6, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x8006F6A8: jal         0x80028C2C
    // 0x8006F6AC: nop

    func_80028C2C(rdram, ctx);
        goto after_5;
    // 0x8006F6AC: nop

    after_5:
    // 0x8006F6B0: mul.s       $f8, $f0, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x8006F6B4: lw          $a0, 0x84($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X84);
    // 0x8006F6B8: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x8006F6BC: add.s       $f2, $f8, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f2.fl = ctx->f8.fl + ctx->f24.fl;
    // 0x8006F6C0: swc1        $f2, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f2.u32l;
    // 0x8006F6C4: jal         0x80019114
    // 0x8006F6C8: swc1        $f2, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f2.u32l;
    func_80019114(rdram, ctx);
        goto after_6;
    // 0x8006F6C8: swc1        $f2, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f2.u32l;
    after_6:
    // 0x8006F6CC: jal         0x80007AB0
    // 0x8006F6D0: nop

    func_80007AB0(rdram, ctx);
        goto after_7;
    // 0x8006F6D0: nop

    after_7:
    // 0x8006F6D4: bne         $s0, $s4, L_8006F660
    if (ctx->r16 != ctx->r20) {
        // 0x8006F6D8: or          $s1, $s0, $zero
        ctx->r17 = ctx->r16 | 0;
            goto L_8006F660;
    }
    // 0x8006F6D8: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
L_8006F6DC:
    // 0x8006F6DC: addiu       $s0, $sp, 0x84
    ctx->r16 = ADD32(ctx->r29, 0X84);
    // 0x8006F6E0: addiu       $s3, $s0, 0x4
    ctx->r19 = ADD32(ctx->r16, 0X4);
L_8006F6E4:
    // 0x8006F6E4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8006F6E8: jal         0x8001C568
    // 0x8006F6EC: nop

    func_8001C568(rdram, ctx);
        goto after_8;
    // 0x8006F6EC: nop

    after_8:
    // 0x8006F6F0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8006F6F4: sltu        $at, $s0, $s3
    ctx->r1 = ctx->r16 < ctx->r19 ? 1 : 0;
    // 0x8006F6F8: bne         $at, $zero, L_8006F6E4
    if (ctx->r1 != 0) {
        // 0x8006F6FC: nop
    
            goto L_8006F6E4;
    }
    // 0x8006F6FC: nop

    // 0x8006F700: jal         0x8005CD50
    // 0x8006F704: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_8005CD50(rdram, ctx);
        goto after_9;
    // 0x8006F704: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_9:
    // 0x8006F708: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8006F70C: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x8006F710: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x8006F714: nop

    // 0x8006F718: addiu       $t6, $t7, -0x1
    ctx->r14 = ADD32(ctx->r15, -0X1);
    // 0x8006F71C: jal         0x80007AE0
    // 0x8006F720: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    func_80007AE0(rdram, ctx);
        goto after_10;
    // 0x8006F720: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    after_10:
    // 0x8006F724: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8006F728: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x8006F72C: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8006F730: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8006F734: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8006F738: lwc1        $f25, 0x20($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8006F73C: lwc1        $f24, 0x24($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8006F740: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x8006F744: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x8006F748: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x8006F74C: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x8006F750: lw          $s4, 0x3C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X3C);
    // 0x8006F754: lw          $s5, 0x40($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X40);
    // 0x8006F758: jr          $ra
    // 0x8006F75C: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    return;
    // 0x8006F75C: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void func_8006F760(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006F760: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x8006F764: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8006F768: sw          $s5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r21;
    // 0x8006F76C: sw          $s4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r20;
    // 0x8006F770: sw          $s3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r19;
    // 0x8006F774: sw          $s2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r18;
    // 0x8006F778: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x8006F77C: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x8006F780: swc1        $f25, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x8006F784: swc1        $f24, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f24.u32l;
    // 0x8006F788: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8006F78C: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x8006F790: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8006F794: jal         0x80007774
    // 0x8006F798: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x8006F798: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x8006F79C: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8006F7A0: addiu       $t6, $t6, 0x2660
    ctx->r14 = ADD32(ctx->r14, 0X2660);
    // 0x8006F7A4: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x8006F7A8: addiu       $s5, $sp, 0x7C
    ctx->r21 = ADD32(ctx->r29, 0X7C);
    // 0x8006F7AC: lw          $s3, 0x1C($v0)
    ctx->r19 = MEM_W(ctx->r2, 0X1C);
    // 0x8006F7B0: sw          $at, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r1;
    // 0x8006F7B4: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x8006F7B8: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x8006F7BC: sw          $t9, 0x4($s5)
    MEM_W(0X4, ctx->r21) = ctx->r25;
    // 0x8006F7C0: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x8006F7C4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8006F7C8: sw          $at, 0x8($s5)
    MEM_W(0X8, ctx->r21) = ctx->r1;
    // 0x8006F7CC: sw          $t8, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r24;
    // 0x8006F7D0: addiu       $a0, $zero, 0x7A1
    ctx->r4 = ADD32(0, 0X7A1);
    // 0x8006F7D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8006F7D8: jal         0x8001D138
    // 0x8006F7DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x8006F7DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8006F7E0: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x8006F7E4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8006F7E8: jal         0x80019164
    // 0x8006F7EC: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x8006F7EC: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_2:
    // 0x8006F7F0: sw          $s1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r17;
    // 0x8006F7F4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8006F7F8: jal         0x8001C468
    // 0x8006F7FC: addiu       $a1, $zero, 0x7E3
    ctx->r5 = ADD32(0, 0X7E3);
    func_8001C468(rdram, ctx);
        goto after_3;
    // 0x8006F7FC: addiu       $a1, $zero, 0x7E3
    ctx->r5 = ADD32(0, 0X7E3);
    after_3:
    // 0x8006F800: lw          $a0, 0x94($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X94);
    // 0x8006F804: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8006F808: jal         0x800192E8
    // 0x8006F80C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800192E8(rdram, ctx);
        goto after_4;
    // 0x8006F80C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x8006F810: lw          $a0, 0x94($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X94);
    // 0x8006F814: jal         0x80019114
    // 0x8006F818: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    func_80019114(rdram, ctx);
        goto after_5;
    // 0x8006F818: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_5:
    // 0x8006F81C: lwc1        $f4, 0x0($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X0);
    // 0x8006F820: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x8006F824: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8006F828: swc1        $f4, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f4.u32l;
    // 0x8006F82C: lwc1        $f6, 0x4($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0X4);
    // 0x8006F830: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8006F834: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8006F838: lwc1        $f24, 0x6558($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X6558);
    // 0x8006F83C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8006F840: swc1        $f10, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f10.u32l;
    // 0x8006F844: lwc1        $f22, 0x655C($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X655C);
    // 0x8006F848: lwc1        $f4, 0x8($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X8);
    // 0x8006F84C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8006F850: lwc1        $f20, 0x6560($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X6560);
    // 0x8006F854: addiu       $s4, $sp, 0x88
    ctx->r20 = ADD32(ctx->r29, 0X88);
    // 0x8006F858: addiu       $s2, $zero, 0x1E
    ctx->r18 = ADD32(0, 0X1E);
    // 0x8006F85C: addiu       $s1, $zero, 0x3C
    ctx->r17 = ADD32(0, 0X3C);
    // 0x8006F860: swc1        $f4, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f4.u32l;
L_8006F864:
    // 0x8006F864: lw          $t7, 0x24($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X24);
    // 0x8006F868: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x8006F86C: andi        $t6, $t7, 0x4000
    ctx->r14 = ctx->r15 & 0X4000;
    // 0x8006F870: bne         $t6, $zero, L_8006F91C
    if (ctx->r14 != 0) {
        // 0x8006F874: nop
    
            goto L_8006F91C;
    }
    // 0x8006F874: nop

    // 0x8006F878: bne         $s0, $s1, L_8006F884
    if (ctx->r16 != ctx->r17) {
        // 0x8006F87C: nop
    
            goto L_8006F884;
    }
    // 0x8006F87C: nop

    // 0x8006F880: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
L_8006F884:
    // 0x8006F884: bne         $s0, $s2, L_8006F89C
    if (ctx->r16 != ctx->r18) {
        // 0x8006F888: slti        $at, $s0, 0x1E
        ctx->r1 = SIGNED(ctx->r16) < 0X1E ? 1 : 0;
            goto L_8006F89C;
    }
    // 0x8006F888: slti        $at, $s0, 0x1E
    ctx->r1 = SIGNED(ctx->r16) < 0X1E ? 1 : 0;
    // 0x8006F88C: jal         0x8005D1B4
    // 0x8006F890: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    func_8005D1B4(rdram, ctx);
        goto after_6;
    // 0x8006F890: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_6:
    // 0x8006F894: sw          $v0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r2;
    // 0x8006F898: slti        $at, $s0, 0x1E
    ctx->r1 = SIGNED(ctx->r16) < 0X1E ? 1 : 0;
L_8006F89C:
    // 0x8006F89C: beq         $at, $zero, L_8006F8C8
    if (ctx->r1 == 0) {
        // 0x8006F8A0: slti        $at, $s0, 0x2D
        ctx->r1 = SIGNED(ctx->r16) < 0X2D ? 1 : 0;
            goto L_8006F8C8;
    }
    // 0x8006F8A0: slti        $at, $s0, 0x2D
    ctx->r1 = SIGNED(ctx->r16) < 0X2D ? 1 : 0;
    // 0x8006F8A4: lwc1        $f0, 0x84($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X84);
    // 0x8006F8A8: lwc1        $f6, 0x80($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X80);
    // 0x8006F8AC: add.s       $f0, $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f22.fl;
    // 0x8006F8B0: sub.s       $f8, $f6, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f24.fl;
    // 0x8006F8B4: swc1        $f0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f0.u32l;
    // 0x8006F8B8: swc1        $f8, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f8.u32l;
    // 0x8006F8BC: b           L_8006F900
    // 0x8006F8C0: swc1        $f0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f0.u32l;
        goto L_8006F900;
    // 0x8006F8C0: swc1        $f0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f0.u32l;
    // 0x8006F8C4: slti        $at, $s0, 0x2D
    ctx->r1 = SIGNED(ctx->r16) < 0X2D ? 1 : 0;
L_8006F8C8:
    // 0x8006F8C8: beq         $at, $zero, L_8006F8E8
    if (ctx->r1 == 0) {
        // 0x8006F8CC: slti        $at, $s0, 0x3C
        ctx->r1 = SIGNED(ctx->r16) < 0X3C ? 1 : 0;
            goto L_8006F8E8;
    }
    // 0x8006F8CC: slti        $at, $s0, 0x3C
    ctx->r1 = SIGNED(ctx->r16) < 0X3C ? 1 : 0;
    // 0x8006F8D0: lwc1        $f10, 0x80($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X80);
    // 0x8006F8D4: nop

    // 0x8006F8D8: add.s       $f4, $f10, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f20.fl;
    // 0x8006F8DC: b           L_8006F900
    // 0x8006F8E0: swc1        $f4, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f4.u32l;
        goto L_8006F900;
    // 0x8006F8E0: swc1        $f4, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f4.u32l;
    // 0x8006F8E4: slti        $at, $s0, 0x3C
    ctx->r1 = SIGNED(ctx->r16) < 0X3C ? 1 : 0;
L_8006F8E8:
    // 0x8006F8E8: beq         $at, $zero, L_8006F904
    if (ctx->r1 == 0) {
        // 0x8006F8EC: lw          $a0, 0x94($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X94);
            goto L_8006F904;
    }
    // 0x8006F8EC: lw          $a0, 0x94($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X94);
    // 0x8006F8F0: lwc1        $f6, 0x80($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X80);
    // 0x8006F8F4: nop

    // 0x8006F8F8: sub.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f20.fl;
    // 0x8006F8FC: swc1        $f8, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f8.u32l;
L_8006F900:
    // 0x8006F900: lw          $a0, 0x94($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X94);
L_8006F904:
    // 0x8006F904: jal         0x80019114
    // 0x8006F908: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    func_80019114(rdram, ctx);
        goto after_7;
    // 0x8006F908: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_7:
    // 0x8006F90C: jal         0x80007AB0
    // 0x8006F910: nop

    func_80007AB0(rdram, ctx);
        goto after_8;
    // 0x8006F910: nop

    after_8:
    // 0x8006F914: b           L_8006F864
    // 0x8006F918: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
        goto L_8006F864;
    // 0x8006F918: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8006F91C:
    // 0x8006F91C: jal         0x8005D128
    // 0x8006F920: addiu       $a0, $sp, 0x74
    ctx->r4 = ADD32(ctx->r29, 0X74);
    func_8005D128(rdram, ctx);
        goto after_9;
    // 0x8006F920: addiu       $a0, $sp, 0x74
    ctx->r4 = ADD32(ctx->r29, 0X74);
    after_9:
    // 0x8006F924: addiu       $s0, $sp, 0x94
    ctx->r16 = ADD32(ctx->r29, 0X94);
    // 0x8006F928: addiu       $s2, $s0, 0x4
    ctx->r18 = ADD32(ctx->r16, 0X4);
L_8006F92C:
    // 0x8006F92C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8006F930: jal         0x8001C568
    // 0x8006F934: nop

    func_8001C568(rdram, ctx);
        goto after_10;
    // 0x8006F934: nop

    after_10:
    // 0x8006F938: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8006F93C: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x8006F940: bne         $at, $zero, L_8006F92C
    if (ctx->r1 != 0) {
        // 0x8006F944: nop
    
            goto L_8006F92C;
    }
    // 0x8006F944: nop

    // 0x8006F948: jal         0x8005CD50
    // 0x8006F94C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_8005CD50(rdram, ctx);
        goto after_11;
    // 0x8006F94C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_11:
    // 0x8006F950: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8006F954: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x8006F958: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x8006F95C: nop

    // 0x8006F960: addiu       $t7, $t8, -0x1
    ctx->r15 = ADD32(ctx->r24, -0X1);
    // 0x8006F964: jal         0x80007AE0
    // 0x8006F968: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    func_80007AE0(rdram, ctx);
        goto after_12;
    // 0x8006F968: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    after_12:
    // 0x8006F96C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8006F970: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x8006F974: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8006F978: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8006F97C: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8006F980: lwc1        $f25, 0x20($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8006F984: lwc1        $f24, 0x24($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8006F988: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x8006F98C: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x8006F990: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x8006F994: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x8006F998: lw          $s4, 0x3C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X3C);
    // 0x8006F99C: lw          $s5, 0x40($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X40);
    // 0x8006F9A0: jr          $ra
    // 0x8006F9A4: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    // 0x8006F9A4: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void func_8006F9A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006F9A8: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x8006F9AC: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8006F9B0: sw          $s3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r19;
    // 0x8006F9B4: sw          $s2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r18;
    // 0x8006F9B8: sw          $s1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r17;
    // 0x8006F9BC: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x8006F9C0: swc1        $f27, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x8006F9C4: swc1        $f26, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f26.u32l;
    // 0x8006F9C8: swc1        $f25, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x8006F9CC: swc1        $f24, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f24.u32l;
    // 0x8006F9D0: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8006F9D4: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x8006F9D8: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8006F9DC: jal         0x80007774
    // 0x8006F9E0: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x8006F9E0: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x8006F9E4: lw          $s3, 0x1C($v0)
    ctx->r19 = MEM_W(ctx->r2, 0X1C);
    // 0x8006F9E8: jal         0x80027F1C
    // 0x8006F9EC: nop

    func_80027F1C(rdram, ctx);
        goto after_1;
    // 0x8006F9EC: nop

    after_1:
    // 0x8006F9F0: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8006F9F4: mtc1        $at, $f21
    ctx->f_odd[(21 - 1) * 2] = ctx->r1;
    // 0x8006F9F8: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x8006F9FC: lui         $at, 0x403E
    ctx->r1 = S32(0X403E << 16);
    // 0x8006FA00: mtc1        $at, $f23
    ctx->f_odd[(23 - 1) * 2] = ctx->r1;
    // 0x8006FA04: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x8006FA08: sub.d       $f4, $f0, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f20.d); 
    ctx->f4.d = ctx->f0.d - ctx->f20.d;
    // 0x8006FA0C: mul.d       $f6, $f4, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f22.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f22.d);
    // 0x8006FA10: jal         0x80027F1C
    // 0x8006FA14: cvt.s.d     $f26, $f6
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f26.fl = CVT_S_D(ctx->f6.d);
    func_80027F1C(rdram, ctx);
        goto after_2;
    // 0x8006FA14: cvt.s.d     $f26, $f6
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f26.fl = CVT_S_D(ctx->f6.d);
    after_2:
    // 0x8006FA18: sub.d       $f8, $f0, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f20.d); 
    ctx->f8.d = ctx->f0.d - ctx->f20.d;
    // 0x8006FA1C: addiu       $a0, $zero, 0x7BA
    ctx->r4 = ADD32(0, 0X7BA);
    // 0x8006FA20: mul.d       $f10, $f8, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f22.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f22.d);
    // 0x8006FA24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8006FA28: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8006FA2C: jal         0x8001D138
    // 0x8006FA30: cvt.s.d     $f24, $f10
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f24.fl = CVT_S_D(ctx->f10.d);
    func_8001D138(rdram, ctx);
        goto after_3;
    // 0x8006FA30: cvt.s.d     $f24, $f10
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f24.fl = CVT_S_D(ctx->f10.d);
    after_3:
    // 0x8006FA34: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x8006FA38: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8006FA3C: jal         0x80019164
    // 0x8006FA40: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_80019164(rdram, ctx);
        goto after_4;
    // 0x8006FA40: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_4:
    // 0x8006FA44: sw          $s1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r17;
    // 0x8006FA48: lwc1        $f4, 0x0($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X0);
    // 0x8006FA4C: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x8006FA50: swc1        $f4, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f4.u32l;
    // 0x8006FA54: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x8006FA58: lwc1        $f6, 0x4($s3)
    ctx->f6.u32l = MEM_W(ctx->r19, 0X4);
    // 0x8006FA5C: lui         $at, 0x4110
    ctx->r1 = S32(0X4110 << 16);
    // 0x8006FA60: add.s       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f22.fl;
    // 0x8006FA64: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x8006FA68: swc1        $f8, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f8.u32l;
    // 0x8006FA6C: lwc1        $f10, 0x8($s3)
    ctx->f10.u32l = MEM_W(ctx->r19, 0X8);
    // 0x8006FA70: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8006FA74: addiu       $s2, $sp, 0x80
    ctx->r18 = ADD32(ctx->r29, 0X80);
    // 0x8006FA78: swc1        $f10, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f10.u32l;
L_8006FA7C:
    // 0x8006FA7C: lw          $t6, 0x24($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X24);
    // 0x8006FA80: addiu       $s1, $s0, 0x1
    ctx->r17 = ADD32(ctx->r16, 0X1);
    // 0x8006FA84: andi        $t7, $t6, 0x4000
    ctx->r15 = ctx->r14 & 0X4000;
    // 0x8006FA88: beq         $t7, $zero, L_8006FA98
    if (ctx->r15 == 0) {
        // 0x8006FA8C: nop
    
            goto L_8006FA98;
    }
    // 0x8006FA8C: nop

    // 0x8006FA90: b           L_8006FAE4
    // 0x8006FA94: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
        goto L_8006FAE4;
    // 0x8006FA94: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8006FA98:
    // 0x8006FA98: mtc1        $s1, $f4
    ctx->f4.u32l = ctx->r17;
    // 0x8006FA9C: nop

    // 0x8006FAA0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8006FAA4: mul.s       $f12, $f6, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x8006FAA8: jal         0x80028C00
    // 0x8006FAAC: nop

    func_80028C00(rdram, ctx);
        goto after_5;
    // 0x8006FAAC: nop

    after_5:
    // 0x8006FAB0: mul.s       $f8, $f0, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x8006FAB4: lwc1        $f10, 0x4($s3)
    ctx->f10.u32l = MEM_W(ctx->r19, 0X4);
    // 0x8006FAB8: lw          $a0, 0x8C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X8C);
    // 0x8006FABC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x8006FAC0: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8006FAC4: jal         0x80019164
    // 0x8006FAC8: swc1        $f4, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f4.u32l;
    func_80019164(rdram, ctx);
        goto after_6;
    // 0x8006FAC8: swc1        $f4, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f4.u32l;
    after_6:
    // 0x8006FACC: jal         0x80007AB0
    // 0x8006FAD0: nop

    func_80007AB0(rdram, ctx);
        goto after_7;
    // 0x8006FAD0: nop

    after_7:
    // 0x8006FAD4: slti        $at, $s1, 0xA
    ctx->r1 = SIGNED(ctx->r17) < 0XA ? 1 : 0;
    // 0x8006FAD8: bne         $at, $zero, L_8006FA7C
    if (ctx->r1 != 0) {
        // 0x8006FADC: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_8006FA7C;
    }
    // 0x8006FADC: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x8006FAE0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8006FAE4:
    // 0x8006FAE4: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x8006FAE8: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x8006FAEC: addiu       $s1, $zero, 0xA
    ctx->r17 = ADD32(0, 0XA);
L_8006FAF0:
    // 0x8006FAF0: lw          $t8, 0x24($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X24);
    // 0x8006FAF4: lw          $a0, 0x8C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X8C);
    // 0x8006FAF8: andi        $t9, $t8, 0x4000
    ctx->r25 = ctx->r24 & 0X4000;
    // 0x8006FAFC: bne         $t9, $zero, L_8006FB60
    if (ctx->r25 != 0) {
        // 0x8006FB00: nop
    
            goto L_8006FB60;
    }
    // 0x8006FB00: nop

    // 0x8006FB04: jal         0x800191E8
    // 0x8006FB08: andi        $a1, $s0, 0x1
    ctx->r5 = ctx->r16 & 0X1;
    func_800191E8(rdram, ctx);
        goto after_8;
    // 0x8006FB08: andi        $a1, $s0, 0x1
    ctx->r5 = ctx->r16 & 0X1;
    after_8:
    // 0x8006FB0C: lwc1        $f6, 0x80($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X80);
    // 0x8006FB10: sll         $t6, $s0, 2
    ctx->r14 = S32(ctx->r16 << 2);
    // 0x8006FB14: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8006FB18: add.s       $f8, $f6, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f26.fl;
    // 0x8006FB1C: lwc1        $f10, 0x84($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X84);
    // 0x8006FB20: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8006FB24: swc1        $f8, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f8.u32l;
    // 0x8006FB28: lw          $a0, 0x8C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X8C);
    // 0x8006FB2C: sub.s       $f8, $f20, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f20.fl - ctx->f6.fl;
    // 0x8006FB30: lwc1        $f6, 0x88($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X88);
    // 0x8006FB34: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x8006FB38: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x8006FB3C: add.s       $f10, $f6, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f24.fl;
    // 0x8006FB40: swc1        $f4, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f4.u32l;
    // 0x8006FB44: jal         0x80019164
    // 0x8006FB48: swc1        $f10, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f10.u32l;
    func_80019164(rdram, ctx);
        goto after_9;
    // 0x8006FB48: swc1        $f10, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f10.u32l;
    after_9:
    // 0x8006FB4C: jal         0x80007AB0
    // 0x8006FB50: nop

    func_80007AB0(rdram, ctx);
        goto after_10;
    // 0x8006FB50: nop

    after_10:
    // 0x8006FB54: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8006FB58: bne         $s0, $s1, L_8006FAF0
    if (ctx->r16 != ctx->r17) {
        // 0x8006FB5C: nop
    
            goto L_8006FAF0;
    }
    // 0x8006FB5C: nop

L_8006FB60:
    // 0x8006FB60: addiu       $s0, $sp, 0x8C
    ctx->r16 = ADD32(ctx->r29, 0X8C);
    // 0x8006FB64: addiu       $s2, $s0, 0x4
    ctx->r18 = ADD32(ctx->r16, 0X4);
L_8006FB68:
    // 0x8006FB68: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8006FB6C: jal         0x8001C568
    // 0x8006FB70: nop

    func_8001C568(rdram, ctx);
        goto after_11;
    // 0x8006FB70: nop

    after_11:
    // 0x8006FB74: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8006FB78: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x8006FB7C: bne         $at, $zero, L_8006FB68
    if (ctx->r1 != 0) {
        // 0x8006FB80: nop
    
            goto L_8006FB68;
    }
    // 0x8006FB80: nop

    // 0x8006FB84: jal         0x8005CD50
    // 0x8006FB88: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_8005CD50(rdram, ctx);
        goto after_12;
    // 0x8006FB88: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_12:
    // 0x8006FB8C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8006FB90: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x8006FB94: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x8006FB98: nop

    // 0x8006FB9C: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x8006FBA0: jal         0x80007AE0
    // 0x8006FBA4: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    func_80007AE0(rdram, ctx);
        goto after_13;
    // 0x8006FBA4: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    after_13:
    // 0x8006FBA8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8006FBAC: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x8006FBB0: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8006FBB4: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8006FBB8: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8006FBBC: lwc1        $f25, 0x20($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8006FBC0: lwc1        $f24, 0x24($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8006FBC4: lwc1        $f27, 0x28($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x8006FBC8: lwc1        $f26, 0x2C($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8006FBCC: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x8006FBD0: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x8006FBD4: lw          $s2, 0x3C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X3C);
    // 0x8006FBD8: lw          $s3, 0x40($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X40);
    // 0x8006FBDC: jr          $ra
    // 0x8006FBE0: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    // 0x8006FBE0: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void func_8006FBE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006FBE4: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x8006FBE8: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x8006FBEC: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x8006FBF0: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x8006FBF4: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x8006FBF8: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x8006FBFC: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x8006FC00: swc1        $f31, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x8006FC04: swc1        $f30, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f30.u32l;
    // 0x8006FC08: swc1        $f29, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x8006FC0C: swc1        $f28, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f28.u32l;
    // 0x8006FC10: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x8006FC14: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x8006FC18: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x8006FC1C: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x8006FC20: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8006FC24: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x8006FC28: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8006FC2C: jal         0x80007774
    // 0x8006FC30: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x8006FC30: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x8006FC34: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8006FC38: addiu       $t6, $t6, 0x266C
    ctx->r14 = ADD32(ctx->r14, 0X266C);
    // 0x8006FC3C: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x8006FC40: addiu       $s3, $sp, 0x90
    ctx->r19 = ADD32(ctx->r29, 0X90);
    // 0x8006FC44: lw          $s4, 0x1C($v0)
    ctx->r20 = MEM_W(ctx->r2, 0X1C);
    // 0x8006FC48: sw          $at, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r1;
    // 0x8006FC4C: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x8006FC50: addiu       $a0, $zero, 0x7BB
    ctx->r4 = ADD32(0, 0X7BB);
    // 0x8006FC54: sw          $t9, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r25;
    // 0x8006FC58: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x8006FC5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8006FC60: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8006FC64: jal         0x8001D138
    // 0x8006FC68: sw          $at, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r1;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x8006FC68: sw          $at, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r1;
    after_1:
    // 0x8006FC6C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8006FC70: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8006FC74: jal         0x80019164
    // 0x8006FC78: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x8006FC78: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_2:
    // 0x8006FC7C: sw          $s0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r16;
    // 0x8006FC80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8006FC84: jal         0x80019114
    // 0x8006FC88: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_80019114(rdram, ctx);
        goto after_3;
    // 0x8006FC88: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_3:
    // 0x8006FC8C: lui         $at, 0x41B4
    ctx->r1 = S32(0X41B4 << 16);
    // 0x8006FC90: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x8006FC94: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x8006FC98: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x8006FC9C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8006FCA0: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x8006FCA4: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x8006FCA8: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x8006FCAC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8006FCB0: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x8006FCB4: lui         $at, 0x4134
    ctx->r1 = S32(0X4134 << 16);
    // 0x8006FCB8: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x8006FCBC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8006FCC0: addiu       $s2, $zero, 0x14
    ctx->r18 = ADD32(0, 0X14);
L_8006FCC4:
    // 0x8006FCC4: lw          $t8, 0x24($s4)
    ctx->r24 = MEM_W(ctx->r20, 0X24);
    // 0x8006FCC8: slti        $at, $s0, 0x8
    ctx->r1 = SIGNED(ctx->r16) < 0X8 ? 1 : 0;
    // 0x8006FCCC: andi        $t7, $t8, 0x4000
    ctx->r15 = ctx->r24 & 0X4000;
    // 0x8006FCD0: bne         $t7, $zero, L_8006FE18
    if (ctx->r15 != 0) {
        // 0x8006FCD4: addiu       $t6, $s0, 0x1
        ctx->r14 = ADD32(ctx->r16, 0X1);
            goto L_8006FE18;
    }
    // 0x8006FCD4: addiu       $t6, $s0, 0x1
    ctx->r14 = ADD32(ctx->r16, 0X1);
    // 0x8006FCD8: beq         $at, $zero, L_8006FD10
    if (ctx->r1 == 0) {
        // 0x8006FCDC: slti        $at, $s0, 0x14
        ctx->r1 = SIGNED(ctx->r16) < 0X14 ? 1 : 0;
            goto L_8006FD10;
    }
    // 0x8006FCDC: slti        $at, $s0, 0x14
    ctx->r1 = SIGNED(ctx->r16) < 0X14 ? 1 : 0;
    // 0x8006FCE0: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8006FCE4: nop

    // 0x8006FCE8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8006FCEC: mul.s       $f12, $f6, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x8006FCF0: jal         0x80028C00
    // 0x8006FCF4: nop

    func_80028C00(rdram, ctx);
        goto after_4;
    // 0x8006FCF4: nop

    after_4:
    // 0x8006FCF8: mul.s       $f8, $f0, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f24.fl);
    // 0x8006FCFC: add.s       $f2, $f8, $f26
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f2.fl = ctx->f8.fl + ctx->f26.fl;
    // 0x8006FD00: swc1        $f2, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f2.u32l;
    // 0x8006FD04: b           L_8006FD44
    // 0x8006FD08: swc1        $f2, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f2.u32l;
        goto L_8006FD44;
    // 0x8006FD08: swc1        $f2, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f2.u32l;
    // 0x8006FD0C: slti        $at, $s0, 0x14
    ctx->r1 = SIGNED(ctx->r16) < 0X14 ? 1 : 0;
L_8006FD10:
    // 0x8006FD10: beq         $at, $zero, L_8006FD44
    if (ctx->r1 == 0) {
        // 0x8006FD14: addiu       $t9, $s0, -0x7
        ctx->r25 = ADD32(ctx->r16, -0X7);
            goto L_8006FD44;
    }
    // 0x8006FD14: addiu       $t9, $s0, -0x7
    ctx->r25 = ADD32(ctx->r16, -0X7);
    // 0x8006FD18: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x8006FD1C: lui         $at, 0x40F0
    ctx->r1 = S32(0X40F0 << 16);
    // 0x8006FD20: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8006FD24: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8006FD28: nop

    // 0x8006FD2C: mul.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8006FD30: jal         0x80028C00
    // 0x8006FD34: nop

    func_80028C00(rdram, ctx);
        goto after_5;
    // 0x8006FD34: nop

    after_5:
    // 0x8006FD38: add.s       $f2, $f0, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x8006FD3C: swc1        $f2, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f2.u32l;
    // 0x8006FD40: swc1        $f2, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f2.u32l;
L_8006FD44:
    // 0x8006FD44: slti        $at, $s0, 0x8
    ctx->r1 = SIGNED(ctx->r16) < 0X8 ? 1 : 0;
    // 0x8006FD48: beq         $at, $zero, L_8006FD78
    if (ctx->r1 == 0) {
        // 0x8006FD4C: addiu       $s1, $s0, 0x1
        ctx->r17 = ADD32(ctx->r16, 0X1);
            goto L_8006FD78;
    }
    // 0x8006FD4C: addiu       $s1, $s0, 0x1
    ctx->r17 = ADD32(ctx->r16, 0X1);
    // 0x8006FD50: mtc1        $s1, $f8
    ctx->f8.u32l = ctx->r17;
    // 0x8006FD54: nop

    // 0x8006FD58: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8006FD5C: mul.s       $f12, $f10, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x8006FD60: jal         0x80028C00
    // 0x8006FD64: nop

    func_80028C00(rdram, ctx);
        goto after_6;
    // 0x8006FD64: nop

    after_6:
    // 0x8006FD68: mul.s       $f4, $f0, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f28.fl);
    // 0x8006FD6C: add.s       $f6, $f4, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f22.fl;
    // 0x8006FD70: b           L_8006FDFC
    // 0x8006FD74: swc1        $f6, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f6.u32l;
        goto L_8006FDFC;
    // 0x8006FD74: swc1        $f6, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f6.u32l;
L_8006FD78:
    // 0x8006FD78: slti        $at, $s0, 0xC
    ctx->r1 = SIGNED(ctx->r16) < 0XC ? 1 : 0;
    // 0x8006FD7C: beq         $at, $zero, L_8006FDB8
    if (ctx->r1 == 0) {
        // 0x8006FD80: addiu       $t8, $s0, -0x7
        ctx->r24 = ADD32(ctx->r16, -0X7);
            goto L_8006FDB8;
    }
    // 0x8006FD80: addiu       $t8, $s0, -0x7
    ctx->r24 = ADD32(ctx->r16, -0X7);
    // 0x8006FD84: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x8006FD88: nop

    // 0x8006FD8C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8006FD90: mul.s       $f12, $f10, $f30
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f12.fl = MUL_S(ctx->f10.fl, ctx->f30.fl);
    // 0x8006FD94: jal         0x80028C2C
    // 0x8006FD98: nop

    func_80028C2C(rdram, ctx);
        goto after_7;
    // 0x8006FD98: nop

    after_7:
    // 0x8006FD9C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x8006FDA0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8006FDA4: nop

    // 0x8006FDA8: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8006FDAC: add.s       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f22.fl;
    // 0x8006FDB0: b           L_8006FDFC
    // 0x8006FDB4: swc1        $f8, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f8.u32l;
        goto L_8006FDFC;
    // 0x8006FDB4: swc1        $f8, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f8.u32l;
L_8006FDB8:
    // 0x8006FDB8: slti        $at, $s0, 0x14
    ctx->r1 = SIGNED(ctx->r16) < 0X14 ? 1 : 0;
    // 0x8006FDBC: beq         $at, $zero, L_8006FDFC
    if (ctx->r1 == 0) {
        // 0x8006FDC0: addiu       $t7, $s0, -0xB
        ctx->r15 = ADD32(ctx->r16, -0XB);
            goto L_8006FDFC;
    }
    // 0x8006FDC0: addiu       $t7, $s0, -0xB
    ctx->r15 = ADD32(ctx->r16, -0XB);
    // 0x8006FDC4: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x8006FDC8: nop

    // 0x8006FDCC: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8006FDD0: mul.s       $f12, $f4, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f12.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x8006FDD4: jal         0x80028C2C
    // 0x8006FDD8: nop

    func_80028C2C(rdram, ctx);
        goto after_8;
    // 0x8006FDD8: nop

    after_8:
    // 0x8006FDDC: lui         $at, 0x4108
    ctx->r1 = S32(0X4108 << 16);
    // 0x8006FDE0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8006FDE4: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x8006FDE8: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x8006FDEC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8006FDF0: nop

    // 0x8006FDF4: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8006FDF8: swc1        $f4, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f4.u32l;
L_8006FDFC:
    // 0x8006FDFC: lw          $a0, 0x9C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X9C);
    // 0x8006FE00: jal         0x80019114
    // 0x8006FE04: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_80019114(rdram, ctx);
        goto after_9;
    // 0x8006FE04: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_9:
    // 0x8006FE08: jal         0x80007AB0
    // 0x8006FE0C: nop

    func_80007AB0(rdram, ctx);
        goto after_10;
    // 0x8006FE0C: nop

    after_10:
    // 0x8006FE10: bne         $s1, $s2, L_8006FCC4
    if (ctx->r17 != ctx->r18) {
        // 0x8006FE14: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_8006FCC4;
    }
    // 0x8006FE14: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
L_8006FE18:
    // 0x8006FE18: addiu       $s0, $sp, 0x9C
    ctx->r16 = ADD32(ctx->r29, 0X9C);
    // 0x8006FE1C: addiu       $s2, $s0, 0x4
    ctx->r18 = ADD32(ctx->r16, 0X4);
L_8006FE20:
    // 0x8006FE20: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8006FE24: jal         0x8001C568
    // 0x8006FE28: nop

    func_8001C568(rdram, ctx);
        goto after_11;
    // 0x8006FE28: nop

    after_11:
    // 0x8006FE2C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8006FE30: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x8006FE34: bne         $at, $zero, L_8006FE20
    if (ctx->r1 != 0) {
        // 0x8006FE38: nop
    
            goto L_8006FE20;
    }
    // 0x8006FE38: nop

    // 0x8006FE3C: jal         0x8005CD50
    // 0x8006FE40: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    func_8005CD50(rdram, ctx);
        goto after_12;
    // 0x8006FE40: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_12:
    // 0x8006FE44: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8006FE48: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x8006FE4C: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x8006FE50: nop

    // 0x8006FE54: addiu       $t8, $t9, -0x1
    ctx->r24 = ADD32(ctx->r25, -0X1);
    // 0x8006FE58: jal         0x80007AE0
    // 0x8006FE5C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    func_80007AE0(rdram, ctx);
        goto after_13;
    // 0x8006FE5C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    after_13:
    // 0x8006FE60: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x8006FE64: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8006FE68: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8006FE6C: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8006FE70: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8006FE74: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x8006FE78: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8006FE7C: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x8006FE80: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8006FE84: lwc1        $f29, 0x38($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x8006FE88: lwc1        $f28, 0x3C($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8006FE8C: lwc1        $f31, 0x40($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x8006FE90: lwc1        $f30, 0x44($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8006FE94: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x8006FE98: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x8006FE9C: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x8006FEA0: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x8006FEA4: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x8006FEA8: jr          $ra
    // 0x8006FEAC: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    return;
    // 0x8006FEAC: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
;}
RECOMP_FUNC void func_8006FEB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006FEB0: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x8006FEB4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8006FEB8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8006FEBC: jal         0x80007774
    // 0x8006FEC0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x8006FEC0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x8006FEC4: lw          $s1, 0x1C($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X1C);
    // 0x8006FEC8: addiu       $a0, $zero, 0x760
    ctx->r4 = ADD32(0, 0X760);
    // 0x8006FECC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8006FED0: jal         0x8001D138
    // 0x8006FED4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x8006FED4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8006FED8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8006FEDC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8006FEE0: jal         0x80019164
    // 0x8006FEE4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x8006FEE4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_2:
    // 0x8006FEE8: sw          $s0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r16;
    // 0x8006FEEC: addiu       $a0, $zero, 0x7B7
    ctx->r4 = ADD32(0, 0X7B7);
    // 0x8006FEF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8006FEF4: jal         0x8001D138
    // 0x8006FEF8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_3;
    // 0x8006FEF8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x8006FEFC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8006FF00: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8006FF04: jal         0x80019164
    // 0x8006FF08: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80019164(rdram, ctx);
        goto after_4;
    // 0x8006FF08: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_4:
    // 0x8006FF0C: sw          $s0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r16;
    // 0x8006FF10: addiu       $a0, $zero, 0x7B8
    ctx->r4 = ADD32(0, 0X7B8);
    // 0x8006FF14: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8006FF18: jal         0x8001D138
    // 0x8006FF1C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_5;
    // 0x8006FF1C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x8006FF20: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8006FF24: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8006FF28: jal         0x80019164
    // 0x8006FF2C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80019164(rdram, ctx);
        goto after_6;
    // 0x8006FF2C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_6:
    // 0x8006FF30: sw          $s0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r16;
    // 0x8006FF34: addiu       $a0, $zero, 0x7B9
    ctx->r4 = ADD32(0, 0X7B9);
    // 0x8006FF38: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8006FF3C: jal         0x8001D138
    // 0x8006FF40: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_7;
    // 0x8006FF40: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x8006FF44: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8006FF48: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8006FF4C: jal         0x80019164
    // 0x8006FF50: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80019164(rdram, ctx);
        goto after_8;
    // 0x8006FF50: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_8:
    // 0x8006FF54: lw          $a0, 0x84($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X84);
    // 0x8006FF58: jal         0x800191C0
    // 0x8006FF5C: sw          $s0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r16;
    func_800191C0(rdram, ctx);
        goto after_9;
    // 0x8006FF5C: sw          $s0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r16;
    after_9:
    // 0x8006FF60: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x8006FF64: jal         0x800191C0
    // 0x8006FF68: nop

    func_800191C0(rdram, ctx);
        goto after_10;
    // 0x8006FF68: nop

    after_10:
    // 0x8006FF6C: lw          $a0, 0x8C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X8C);
    // 0x8006FF70: jal         0x800191C0
    // 0x8006FF74: nop

    func_800191C0(rdram, ctx);
        goto after_11;
    // 0x8006FF74: nop

    after_11:
    // 0x8006FF78: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x8006FF7C: jal         0x8001C468
    // 0x8006FF80: addiu       $a1, $zero, 0x7DB
    ctx->r5 = ADD32(0, 0X7DB);
    func_8001C468(rdram, ctx);
        goto after_12;
    // 0x8006FF80: addiu       $a1, $zero, 0x7DB
    ctx->r5 = ADD32(0, 0X7DB);
    after_12:
    // 0x8006FF84: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x8006FF88: jal         0x8001C468
    // 0x8006FF8C: addiu       $a1, $zero, 0x7EC
    ctx->r5 = ADD32(0, 0X7EC);
    func_8001C468(rdram, ctx);
        goto after_13;
    // 0x8006FF8C: addiu       $a1, $zero, 0x7EC
    ctx->r5 = ADD32(0, 0X7EC);
    after_13:
    // 0x8006FF90: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x8006FF94: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8006FF98: jal         0x800192E8
    // 0x8006FF9C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800192E8(rdram, ctx);
        goto after_14;
    // 0x8006FF9C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_14:
    // 0x8006FFA0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8006FFA4:
    // 0x8006FFA4: lw          $t6, 0x24($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X24);
    // 0x8006FFA8: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x8006FFAC: andi        $t7, $t6, 0x4000
    ctx->r15 = ctx->r14 & 0X4000;
    // 0x8006FFB0: bne         $t7, $zero, L_8007005C
    if (ctx->r15 != 0) {
        // 0x8006FFB4: addiu       $at, $zero, 0xF
        ctx->r1 = ADD32(0, 0XF);
            goto L_8007005C;
    }
    // 0x8006FFB4: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x8006FFB8: bne         $s0, $at, L_8006FFEC
    if (ctx->r16 != ctx->r1) {
        // 0x8006FFBC: addiu       $at, $zero, 0x1E
        ctx->r1 = ADD32(0, 0X1E);
            goto L_8006FFEC;
    }
    // 0x8006FFBC: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x8006FFC0: jal         0x800191C0
    // 0x8006FFC4: nop

    func_800191C0(rdram, ctx);
        goto after_15;
    // 0x8006FFC4: nop

    after_15:
    // 0x8006FFC8: lw          $a0, 0x84($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X84);
    // 0x8006FFCC: jal         0x800191D4
    // 0x8006FFD0: nop

    func_800191D4(rdram, ctx);
        goto after_16;
    // 0x8006FFD0: nop

    after_16:
    // 0x8006FFD4: lw          $a0, 0x84($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X84);
    // 0x8006FFD8: jal         0x8001C468
    // 0x8006FFDC: addiu       $a1, $zero, 0x7B7
    ctx->r5 = ADD32(0, 0X7B7);
    func_8001C468(rdram, ctx);
        goto after_17;
    // 0x8006FFDC: addiu       $a1, $zero, 0x7B7
    ctx->r5 = ADD32(0, 0X7B7);
    after_17:
    // 0x8006FFE0: b           L_80070044
    // 0x8006FFE4: nop

        goto L_80070044;
    // 0x8006FFE4: nop

    // 0x8006FFE8: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
L_8006FFEC:
    // 0x8006FFEC: bne         $s0, $at, L_80070018
    if (ctx->r16 != ctx->r1) {
        // 0x8006FFF0: addiu       $at, $zero, 0x5A
        ctx->r1 = ADD32(0, 0X5A);
            goto L_80070018;
    }
    // 0x8006FFF0: addiu       $at, $zero, 0x5A
    ctx->r1 = ADD32(0, 0X5A);
    // 0x8006FFF4: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x8006FFF8: jal         0x800191D4
    // 0x8006FFFC: nop

    func_800191D4(rdram, ctx);
        goto after_18;
    // 0x8006FFFC: nop

    after_18:
    // 0x80070000: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x80070004: jal         0x8001C468
    // 0x80070008: addiu       $a1, $zero, 0x7B8
    ctx->r5 = ADD32(0, 0X7B8);
    func_8001C468(rdram, ctx);
        goto after_19;
    // 0x80070008: addiu       $a1, $zero, 0x7B8
    ctx->r5 = ADD32(0, 0X7B8);
    after_19:
    // 0x8007000C: b           L_80070044
    // 0x80070010: nop

        goto L_80070044;
    // 0x80070010: nop

    // 0x80070014: addiu       $at, $zero, 0x5A
    ctx->r1 = ADD32(0, 0X5A);
L_80070018:
    // 0x80070018: bne         $s0, $at, L_80070044
    if (ctx->r16 != ctx->r1) {
        // 0x8007001C: nop
    
            goto L_80070044;
    }
    // 0x8007001C: nop

    // 0x80070020: lw          $a0, 0x84($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X84);
    // 0x80070024: jal         0x800191C0
    // 0x80070028: nop

    func_800191C0(rdram, ctx);
        goto after_20;
    // 0x80070028: nop

    after_20:
    // 0x8007002C: lw          $a0, 0x8C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X8C);
    // 0x80070030: jal         0x800191D4
    // 0x80070034: nop

    func_800191D4(rdram, ctx);
        goto after_21;
    // 0x80070034: nop

    after_21:
    // 0x80070038: lw          $a0, 0x8C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X8C);
    // 0x8007003C: jal         0x8001C468
    // 0x80070040: addiu       $a1, $zero, 0x7B9
    ctx->r5 = ADD32(0, 0X7B9);
    func_8001C468(rdram, ctx);
        goto after_22;
    // 0x80070040: addiu       $a1, $zero, 0x7B9
    ctx->r5 = ADD32(0, 0X7B9);
    after_22:
L_80070044:
    // 0x80070044: jal         0x80007AB0
    // 0x80070048: nop

    func_80007AB0(rdram, ctx);
        goto after_23;
    // 0x80070048: nop

    after_23:
    // 0x8007004C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80070050: addiu       $at, $zero, 0x87
    ctx->r1 = ADD32(0, 0X87);
    // 0x80070054: bne         $s0, $at, L_8006FFA4
    if (ctx->r16 != ctx->r1) {
        // 0x80070058: nop
    
            goto L_8006FFA4;
    }
    // 0x80070058: nop

L_8007005C:
    // 0x8007005C: addiu       $s0, $sp, 0x80
    ctx->r16 = ADD32(ctx->r29, 0X80);
    // 0x80070060: addiu       $v1, $s0, 0x10
    ctx->r3 = ADD32(ctx->r16, 0X10);
    // 0x80070064: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_80070068:
    // 0x80070068: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8007006C: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x80070070: jal         0x8001C568
    // 0x80070074: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    func_8001C568(rdram, ctx);
        goto after_24;
    // 0x80070074: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    after_24:
    // 0x80070078: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x8007007C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80070080: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x80070084: sltu        $at, $s0, $v1
    ctx->r1 = ctx->r16 < ctx->r3 ? 1 : 0;
    // 0x80070088: bne         $at, $zero, L_80070068
    if (ctx->r1 != 0) {
        // 0x8007008C: nop
    
            goto L_80070068;
    }
    // 0x8007008C: nop

    // 0x80070090: jal         0x8005CD50
    // 0x80070094: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8005CD50(rdram, ctx);
        goto after_25;
    // 0x80070094: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_25:
    // 0x80070098: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8007009C: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x800700A0: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x800700A4: nop

    // 0x800700A8: addiu       $t6, $t9, -0x1
    ctx->r14 = ADD32(ctx->r25, -0X1);
    // 0x800700AC: jal         0x80007AE0
    // 0x800700B0: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    func_80007AE0(rdram, ctx);
        goto after_26;
    // 0x800700B0: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    after_26:
    // 0x800700B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800700B8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800700BC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800700C0: jr          $ra
    // 0x800700C4: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    // 0x800700C4: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void func_800700C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800700C8: addiu       $sp, $sp, -0x128
    ctx->r29 = ADD32(ctx->r29, -0X128);
    // 0x800700CC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x800700D0: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x800700D4: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x800700D8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x800700DC: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x800700E0: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x800700E4: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800700E8: jal         0x80007774
    // 0x800700EC: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x800700EC: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x800700F0: lw          $s2, 0x1C($v0)
    ctx->r18 = MEM_W(ctx->r2, 0X1C);
    // 0x800700F4: addiu       $a0, $zero, 0x7BD
    ctx->r4 = ADD32(0, 0X7BD);
    // 0x800700F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800700FC: jal         0x8001D138
    // 0x80070100: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x80070100: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80070104: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80070108: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8007010C: jal         0x80019164
    // 0x80070110: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x80070110: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_2:
    // 0x80070114: sw          $s0, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->r16;
    // 0x80070118: addiu       $a0, $zero, 0x7BC
    ctx->r4 = ADD32(0, 0X7BC);
    // 0x8007011C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80070120: jal         0x8001D138
    // 0x80070124: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_3;
    // 0x80070124: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x80070128: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8007012C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80070130: jal         0x80019164
    // 0x80070134: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_80019164(rdram, ctx);
        goto after_4;
    // 0x80070134: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_4:
    // 0x80070138: sw          $s0, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->r16;
    // 0x8007013C: addiu       $a0, $zero, 0x7BE
    ctx->r4 = ADD32(0, 0X7BE);
    // 0x80070140: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80070144: jal         0x8001D138
    // 0x80070148: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_5;
    // 0x80070148: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x8007014C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80070150: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80070154: jal         0x80019164
    // 0x80070158: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_80019164(rdram, ctx);
        goto after_6;
    // 0x80070158: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_6:
    // 0x8007015C: sw          $s0, 0x118($sp)
    MEM_W(0X118, ctx->r29) = ctx->r16;
    // 0x80070160: addiu       $a0, $zero, 0x7BF
    ctx->r4 = ADD32(0, 0X7BF);
    // 0x80070164: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80070168: jal         0x8001D138
    // 0x8007016C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_7;
    // 0x8007016C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x80070170: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80070174: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80070178: jal         0x80019164
    // 0x8007017C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_80019164(rdram, ctx);
        goto after_8;
    // 0x8007017C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_8:
    // 0x80070180: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80070184: jal         0x800191C0
    // 0x80070188: sw          $s0, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r16;
    func_800191C0(rdram, ctx);
        goto after_9;
    // 0x80070188: sw          $s0, 0x11C($sp)
    MEM_W(0X11C, ctx->r29) = ctx->r16;
    after_9:
    // 0x8007018C: lw          $a0, 0x110($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X110);
    // 0x80070190: jal         0x8001C468
    // 0x80070194: addiu       $a1, $zero, 0x7E5
    ctx->r5 = ADD32(0, 0X7E5);
    func_8001C468(rdram, ctx);
        goto after_10;
    // 0x80070194: addiu       $a1, $zero, 0x7E5
    ctx->r5 = ADD32(0, 0X7E5);
    after_10:
    // 0x80070198: lw          $a0, 0x110($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X110);
    // 0x8007019C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800701A0: jal         0x800192E8
    // 0x800701A4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800192E8(rdram, ctx);
        goto after_11;
    // 0x800701A4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_11:
    // 0x800701A8: lw          $a0, 0x114($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X114);
    // 0x800701AC: jal         0x8001C468
    // 0x800701B0: addiu       $a1, $zero, 0x7BC
    ctx->r5 = ADD32(0, 0X7BC);
    func_8001C468(rdram, ctx);
        goto after_12;
    // 0x800701B0: addiu       $a1, $zero, 0x7BC
    ctx->r5 = ADD32(0, 0X7BC);
    after_12:
    // 0x800701B4: lw          $a0, 0x118($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X118);
    // 0x800701B8: jal         0x8001C468
    // 0x800701BC: addiu       $a1, $zero, 0x7BE
    ctx->r5 = ADD32(0, 0X7BE);
    func_8001C468(rdram, ctx);
        goto after_13;
    // 0x800701BC: addiu       $a1, $zero, 0x7BE
    ctx->r5 = ADD32(0, 0X7BE);
    after_13:
    // 0x800701C0: lw          $s0, 0x110($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X110);
    // 0x800701C4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800701C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800701CC: jal         0x80018658
    // 0x800701D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80018658(rdram, ctx);
        goto after_14;
    // 0x800701D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x800701D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800701D8: jal         0x80018604
    // 0x800701DC: addiu       $a1, $zero, 0xB2
    ctx->r5 = ADD32(0, 0XB2);
    func_80018604(rdram, ctx);
        goto after_15;
    // 0x800701DC: addiu       $a1, $zero, 0xB2
    ctx->r5 = ADD32(0, 0XB2);
    after_15:
    // 0x800701E0: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x800701E4: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x800701E8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x800701EC: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x800701F0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_800701F4:
    // 0x800701F4: lw          $t6, 0x24($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X24);
    // 0x800701F8: lw          $a0, 0x11C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X11C);
    // 0x800701FC: andi        $t7, $t6, 0x4000
    ctx->r15 = ctx->r14 & 0X4000;
    // 0x80070200: bne         $t7, $zero, L_8007039C
    if (ctx->r15 != 0) {
        // 0x80070204: addiu       $at, $zero, 0xF
        ctx->r1 = ADD32(0, 0XF);
            goto L_8007039C;
    }
    // 0x80070204: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x80070208: bne         $s0, $at, L_80070230
    if (ctx->r16 != ctx->r1) {
        // 0x8007020C: addiu       $at, $zero, 0x69
        ctx->r1 = ADD32(0, 0X69);
            goto L_80070230;
    }
    // 0x8007020C: addiu       $at, $zero, 0x69
    ctx->r1 = ADD32(0, 0X69);
    // 0x80070210: jal         0x800191D4
    // 0x80070214: nop

    func_800191D4(rdram, ctx);
        goto after_16;
    // 0x80070214: nop

    after_16:
    // 0x80070218: lw          $a0, 0x11C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X11C);
    // 0x8007021C: jal         0x8001C468
    // 0x80070220: addiu       $a1, $zero, 0x7BF
    ctx->r5 = ADD32(0, 0X7BF);
    func_8001C468(rdram, ctx);
        goto after_17;
    // 0x80070220: addiu       $a1, $zero, 0x7BF
    ctx->r5 = ADD32(0, 0X7BF);
    after_17:
    // 0x80070224: b           L_80070248
    // 0x80070228: slti        $at, $s0, 0x1E
    ctx->r1 = SIGNED(ctx->r16) < 0X1E ? 1 : 0;
        goto L_80070248;
    // 0x80070228: slti        $at, $s0, 0x1E
    ctx->r1 = SIGNED(ctx->r16) < 0X1E ? 1 : 0;
    // 0x8007022C: addiu       $at, $zero, 0x69
    ctx->r1 = ADD32(0, 0X69);
L_80070230:
    // 0x80070230: bne         $s0, $at, L_80070248
    if (ctx->r16 != ctx->r1) {
        // 0x80070234: slti        $at, $s0, 0x1E
        ctx->r1 = SIGNED(ctx->r16) < 0X1E ? 1 : 0;
            goto L_80070248;
    }
    // 0x80070234: slti        $at, $s0, 0x1E
    ctx->r1 = SIGNED(ctx->r16) < 0X1E ? 1 : 0;
    // 0x80070238: lw          $a0, 0x114($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X114);
    // 0x8007023C: jal         0x800191C0
    // 0x80070240: nop

    func_800191C0(rdram, ctx);
        goto after_18;
    // 0x80070240: nop

    after_18:
    // 0x80070244: slti        $at, $s0, 0x1E
    ctx->r1 = SIGNED(ctx->r16) < 0X1E ? 1 : 0;
L_80070248:
    // 0x80070248: beq         $at, $zero, L_8007028C
    if (ctx->r1 == 0) {
        // 0x8007024C: addiu       $t8, $s0, 0x1
        ctx->r24 = ADD32(ctx->r16, 0X1);
            goto L_8007028C;
    }
    // 0x8007024C: addiu       $t8, $s0, 0x1
    ctx->r24 = ADD32(ctx->r16, 0X1);
    // 0x80070250: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x80070254: nop

    // 0x80070258: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8007025C: mul.s       $f12, $f6, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f12.fl = MUL_S(ctx->f6.fl, ctx->f22.fl);
    // 0x80070260: jal         0x80028C2C
    // 0x80070264: nop

    func_80028C2C(rdram, ctx);
        goto after_19;
    // 0x80070264: nop

    after_19:
    // 0x80070268: mul.s       $f2, $f0, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x8007026C: lw          $a0, 0x110($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X110);
    // 0x80070270: addiu       $a1, $sp, 0x9C
    ctx->r5 = ADD32(ctx->r29, 0X9C);
    // 0x80070274: swc1        $f2, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f2.u32l;
    // 0x80070278: swc1        $f2, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f2.u32l;
    // 0x8007027C: jal         0x80019114
    // 0x80070280: swc1        $f2, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f2.u32l;
    func_80019114(rdram, ctx);
        goto after_20;
    // 0x80070280: swc1        $f2, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f2.u32l;
    after_20:
    // 0x80070284: b           L_80070388
    // 0x80070288: nop

        goto L_80070388;
    // 0x80070288: nop

L_8007028C:
    // 0x8007028C: slti        $at, $s0, 0x3C
    ctx->r1 = SIGNED(ctx->r16) < 0X3C ? 1 : 0;
    // 0x80070290: beq         $at, $zero, L_800702D8
    if (ctx->r1 == 0) {
        // 0x80070294: addiu       $t9, $s0, -0x1D
        ctx->r25 = ADD32(ctx->r16, -0X1D);
            goto L_800702D8;
    }
    // 0x80070294: addiu       $t9, $s0, -0x1D
    ctx->r25 = ADD32(ctx->r16, -0X1D);
    // 0x80070298: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x8007029C: nop

    // 0x800702A0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800702A4: mul.s       $f12, $f10, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f12.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x800702A8: jal         0x80028C2C
    // 0x800702AC: nop

    func_80028C2C(rdram, ctx);
        goto after_21;
    // 0x800702AC: nop

    after_21:
    // 0x800702B0: mul.s       $f4, $f0, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x800702B4: lw          $a0, 0x110($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X110);
    // 0x800702B8: addiu       $a1, $sp, 0x84
    ctx->r5 = ADD32(ctx->r29, 0X84);
    // 0x800702BC: add.s       $f2, $f4, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = ctx->f4.fl + ctx->f20.fl;
    // 0x800702C0: swc1        $f2, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f2.u32l;
    // 0x800702C4: swc1        $f2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f2.u32l;
    // 0x800702C8: jal         0x80019114
    // 0x800702CC: swc1        $f2, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f2.u32l;
    func_80019114(rdram, ctx);
        goto after_22;
    // 0x800702CC: swc1        $f2, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f2.u32l;
    after_22:
    // 0x800702D0: b           L_80070388
    // 0x800702D4: nop

        goto L_80070388;
    // 0x800702D4: nop

L_800702D8:
    // 0x800702D8: slti        $at, $s0, 0x50
    ctx->r1 = SIGNED(ctx->r16) < 0X50 ? 1 : 0;
    // 0x800702DC: bne         $at, $zero, L_80070388
    if (ctx->r1 != 0) {
        // 0x800702E0: slti        $at, $s0, 0x5C
        ctx->r1 = SIGNED(ctx->r16) < 0X5C ? 1 : 0;
            goto L_80070388;
    }
    // 0x800702E0: slti        $at, $s0, 0x5C
    ctx->r1 = SIGNED(ctx->r16) < 0X5C ? 1 : 0;
    // 0x800702E4: beq         $at, $zero, L_80070338
    if (ctx->r1 == 0) {
        // 0x800702E8: addiu       $t6, $s0, -0x4F
        ctx->r14 = ADD32(ctx->r16, -0X4F);
            goto L_80070338;
    }
    // 0x800702E8: addiu       $t6, $s0, -0x4F
    ctx->r14 = ADD32(ctx->r16, -0X4F);
    // 0x800702EC: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x800702F0: lui         $at, 0x40F0
    ctx->r1 = S32(0X40F0 << 16);
    // 0x800702F4: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800702F8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800702FC: nop

    // 0x80070300: mul.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80070304: jal         0x80028C2C
    // 0x80070308: nop

    func_80028C2C(rdram, ctx);
        goto after_23;
    // 0x80070308: nop

    after_23:
    // 0x8007030C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80070310: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80070314: lw          $a0, 0x110($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X110);
    // 0x80070318: add.s       $f2, $f0, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x8007031C: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    // 0x80070320: swc1        $f2, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f2.u32l;
    // 0x80070324: swc1        $f2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f2.u32l;
    // 0x80070328: jal         0x80019114
    // 0x8007032C: swc1        $f2, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f2.u32l;
    func_80019114(rdram, ctx);
        goto after_24;
    // 0x8007032C: swc1        $f2, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f2.u32l;
    after_24:
    // 0x80070330: b           L_80070388
    // 0x80070334: nop

        goto L_80070388;
    // 0x80070334: nop

L_80070338:
    // 0x80070338: slti        $at, $s0, 0x6A
    ctx->r1 = SIGNED(ctx->r16) < 0X6A ? 1 : 0;
    // 0x8007033C: bne         $at, $zero, L_80070388
    if (ctx->r1 != 0) {
        // 0x80070340: slti        $at, $s0, 0x78
        ctx->r1 = SIGNED(ctx->r16) < 0X78 ? 1 : 0;
            goto L_80070388;
    }
    // 0x80070340: slti        $at, $s0, 0x78
    ctx->r1 = SIGNED(ctx->r16) < 0X78 ? 1 : 0;
    // 0x80070344: beq         $at, $zero, L_80070388
    if (ctx->r1 == 0) {
        // 0x80070348: addiu       $t7, $s0, -0x69
        ctx->r15 = ADD32(ctx->r16, -0X69);
            goto L_80070388;
    }
    // 0x80070348: addiu       $t7, $s0, -0x69
    ctx->r15 = ADD32(ctx->r16, -0X69);
    // 0x8007034C: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x80070350: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80070354: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80070358: lwc1        $f10, 0x6564($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X6564);
    // 0x8007035C: nop

    // 0x80070360: mul.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80070364: jal         0x80028C00
    // 0x80070368: nop

    func_80028C00(rdram, ctx);
        goto after_25;
    // 0x80070368: nop

    after_25:
    // 0x8007036C: add.s       $f2, $f0, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x80070370: lw          $a0, 0x110($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X110);
    // 0x80070374: swc1        $f2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f2.u32l;
    // 0x80070378: swc1        $f2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f2.u32l;
    // 0x8007037C: swc1        $f2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f2.u32l;
    // 0x80070380: jal         0x80019114
    // 0x80070384: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    func_80019114(rdram, ctx);
        goto after_26;
    // 0x80070384: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    after_26:
L_80070388:
    // 0x80070388: jal         0x80007AB0
    // 0x8007038C: addiu       $s1, $s0, 0x1
    ctx->r17 = ADD32(ctx->r16, 0X1);
    func_80007AB0(rdram, ctx);
        goto after_27;
    // 0x8007038C: addiu       $s1, $s0, 0x1
    ctx->r17 = ADD32(ctx->r16, 0X1);
    after_27:
    // 0x80070390: addiu       $at, $zero, 0x78
    ctx->r1 = ADD32(0, 0X78);
    // 0x80070394: bne         $s1, $at, L_800701F4
    if (ctx->r17 != ctx->r1) {
        // 0x80070398: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_800701F4;
    }
    // 0x80070398: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
L_8007039C:
    // 0x8007039C: addiu       $s0, $sp, 0x110
    ctx->r16 = ADD32(ctx->r29, 0X110);
    // 0x800703A0: addiu       $v0, $s0, 0x10
    ctx->r2 = ADD32(ctx->r16, 0X10);
L_800703A4:
    // 0x800703A4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x800703A8: jal         0x8001C568
    // 0x800703AC: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    func_8001C568(rdram, ctx);
        goto after_28;
    // 0x800703AC: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    after_28:
    // 0x800703B0: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x800703B4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x800703B8: sltu        $at, $s0, $v0
    ctx->r1 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x800703BC: bne         $at, $zero, L_800703A4
    if (ctx->r1 != 0) {
        // 0x800703C0: nop
    
            goto L_800703A4;
    }
    // 0x800703C0: nop

    // 0x800703C4: jal         0x8005CD50
    // 0x800703C8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_8005CD50(rdram, ctx);
        goto after_29;
    // 0x800703C8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_29:
    // 0x800703CC: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x800703D0: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x800703D4: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x800703D8: nop

    // 0x800703DC: addiu       $t6, $t9, -0x1
    ctx->r14 = ADD32(ctx->r25, -0X1);
    // 0x800703E0: jal         0x80007AE0
    // 0x800703E4: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    func_80007AE0(rdram, ctx);
        goto after_30;
    // 0x800703E4: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    after_30:
    // 0x800703E8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x800703EC: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800703F0: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800703F4: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x800703F8: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800703FC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80070400: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80070404: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80070408: jr          $ra
    // 0x8007040C: addiu       $sp, $sp, 0x128
    ctx->r29 = ADD32(ctx->r29, 0X128);
    return;
    // 0x8007040C: addiu       $sp, $sp, 0x128
    ctx->r29 = ADD32(ctx->r29, 0X128);
;}
RECOMP_FUNC void func_80070410(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80070410: addiu       $sp, $sp, -0xE0
    ctx->r29 = ADD32(ctx->r29, -0XE0);
    // 0x80070414: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80070418: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8007041C: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80070420: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80070424: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80070428: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8007042C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80070430: jal         0x80007774
    // 0x80070434: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x80070434: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x80070438: lw          $s6, 0x1C($v0)
    ctx->r22 = MEM_W(ctx->r2, 0X1C);
    // 0x8007043C: addiu       $a0, $zero, 0x7C0
    ctx->r4 = ADD32(0, 0X7C0);
    // 0x80070440: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80070444: jal         0x8001D138
    // 0x80070448: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x80070448: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8007044C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80070450: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80070454: jal         0x80019164
    // 0x80070458: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x80070458: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    after_2:
    // 0x8007045C: sw          $s0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r16;
    // 0x80070460: addiu       $a0, $zero, 0x7C1
    ctx->r4 = ADD32(0, 0X7C1);
    // 0x80070464: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80070468: jal         0x8001D138
    // 0x8007046C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_3;
    // 0x8007046C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x80070470: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80070474: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80070478: jal         0x80019164
    // 0x8007047C: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    func_80019164(rdram, ctx);
        goto after_4;
    // 0x8007047C: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    after_4:
    // 0x80070480: sw          $s0, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r16;
    // 0x80070484: addiu       $a0, $zero, 0x7C1
    ctx->r4 = ADD32(0, 0X7C1);
    // 0x80070488: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8007048C: jal         0x8001D138
    // 0x80070490: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_5;
    // 0x80070490: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x80070494: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80070498: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8007049C: jal         0x80019164
    // 0x800704A0: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    func_80019164(rdram, ctx);
        goto after_6;
    // 0x800704A0: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    after_6:
    // 0x800704A4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800704A8: lwc1        $f0, 0x6568($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6568);
    // 0x800704AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800704B0: addiu       $a1, $sp, 0x7C
    ctx->r5 = ADD32(ctx->r29, 0X7C);
    // 0x800704B4: sw          $s0, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r16;
    // 0x800704B8: swc1        $f0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f0.u32l;
    // 0x800704BC: swc1        $f0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f0.u32l;
    // 0x800704C0: jal         0x80019114
    // 0x800704C4: swc1        $f0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f0.u32l;
    func_80019114(rdram, ctx);
        goto after_7;
    // 0x800704C4: swc1        $f0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f0.u32l;
    after_7:
    // 0x800704C8: addiu       $a0, $zero, 0x7C1
    ctx->r4 = ADD32(0, 0X7C1);
    // 0x800704CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800704D0: jal         0x8001D138
    // 0x800704D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_8;
    // 0x800704D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_8:
    // 0x800704D8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800704DC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800704E0: jal         0x80019164
    // 0x800704E4: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    func_80019164(rdram, ctx);
        goto after_9;
    // 0x800704E4: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    after_9:
    // 0x800704E8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800704EC: lwc1        $f0, 0x656C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X656C);
    // 0x800704F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800704F4: addiu       $a1, $sp, 0x54
    ctx->r5 = ADD32(ctx->r29, 0X54);
    // 0x800704F8: sw          $s0, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r16;
    // 0x800704FC: swc1        $f0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f0.u32l;
    // 0x80070500: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
    // 0x80070504: jal         0x80019114
    // 0x80070508: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    func_80019114(rdram, ctx);
        goto after_10;
    // 0x80070508: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    after_10:
    // 0x8007050C: lw          $a0, 0xCC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XCC);
    // 0x80070510: jal         0x800191C0
    // 0x80070514: nop

    func_800191C0(rdram, ctx);
        goto after_11;
    // 0x80070514: nop

    after_11:
    // 0x80070518: lw          $a0, 0xD0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XD0);
    // 0x8007051C: jal         0x800191C0
    // 0x80070520: nop

    func_800191C0(rdram, ctx);
        goto after_12;
    // 0x80070520: nop

    after_12:
    // 0x80070524: lw          $a0, 0xD4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XD4);
    // 0x80070528: jal         0x800191C0
    // 0x8007052C: nop

    func_800191C0(rdram, ctx);
        goto after_13;
    // 0x8007052C: nop

    after_13:
    // 0x80070530: lw          $a0, 0xC8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC8);
    // 0x80070534: jal         0x8001C468
    // 0x80070538: addiu       $a1, $zero, 0x7C0
    ctx->r5 = ADD32(0, 0X7C0);
    func_8001C468(rdram, ctx);
        goto after_14;
    // 0x80070538: addiu       $a1, $zero, 0x7C0
    ctx->r5 = ADD32(0, 0X7C0);
    after_14:
    // 0x8007053C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80070540: addiu       $s5, $zero, 0x4
    ctx->r21 = ADD32(0, 0X4);
    // 0x80070544: addiu       $s4, $sp, 0xC8
    ctx->r20 = ADD32(ctx->r29, 0XC8);
L_80070548:
    // 0x80070548: lw          $t6, 0x24($s6)
    ctx->r14 = MEM_W(ctx->r22, 0X24);
    // 0x8007054C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x80070550: andi        $t7, $t6, 0x4000
    ctx->r15 = ctx->r14 & 0X4000;
    // 0x80070554: bne         $t7, $zero, L_800705E0
    if (ctx->r15 != 0) {
        // 0x80070558: addiu       $s2, $zero, 0x5
        ctx->r18 = ADD32(0, 0X5);
            goto L_800705E0;
    }
    // 0x80070558: addiu       $s2, $zero, 0x5
    ctx->r18 = ADD32(0, 0X5);
L_8007055C:
    // 0x8007055C: bne         $s3, $s2, L_8007058C
    if (ctx->r19 != ctx->r18) {
        // 0x80070560: addiu       $t9, $s2, 0x5A
        ctx->r25 = ADD32(ctx->r18, 0X5A);
            goto L_8007058C;
    }
    // 0x80070560: addiu       $t9, $s2, 0x5A
    ctx->r25 = ADD32(ctx->r18, 0X5A);
    // 0x80070564: sll         $t8, $s0, 2
    ctx->r24 = S32(ctx->r16 << 2);
    // 0x80070568: addu        $s1, $s4, $t8
    ctx->r17 = ADD32(ctx->r20, ctx->r24);
    // 0x8007056C: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80070570: jal         0x800191D4
    // 0x80070574: nop

    func_800191D4(rdram, ctx);
        goto after_15;
    // 0x80070574: nop

    after_15:
    // 0x80070578: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8007057C: jal         0x8001C468
    // 0x80070580: addiu       $a1, $zero, 0x7C1
    ctx->r5 = ADD32(0, 0X7C1);
    func_8001C468(rdram, ctx);
        goto after_16;
    // 0x80070580: addiu       $a1, $zero, 0x7C1
    ctx->r5 = ADD32(0, 0X7C1);
    after_16:
    // 0x80070584: b           L_800705A8
    // 0x80070588: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
        goto L_800705A8;
    // 0x80070588: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8007058C:
    // 0x8007058C: bne         $s3, $t9, L_800705A4
    if (ctx->r19 != ctx->r25) {
        // 0x80070590: sll         $t6, $s0, 2
        ctx->r14 = S32(ctx->r16 << 2);
            goto L_800705A4;
    }
    // 0x80070590: sll         $t6, $s0, 2
    ctx->r14 = S32(ctx->r16 << 2);
    // 0x80070594: addu        $t7, $s4, $t6
    ctx->r15 = ADD32(ctx->r20, ctx->r14);
    // 0x80070598: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    // 0x8007059C: jal         0x800191C0
    // 0x800705A0: nop

    func_800191C0(rdram, ctx);
        goto after_17;
    // 0x800705A0: nop

    after_17:
L_800705A4:
    // 0x800705A4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_800705A8:
    // 0x800705A8: bne         $s0, $s5, L_8007055C
    if (ctx->r16 != ctx->r21) {
        // 0x800705AC: addiu       $s2, $s2, 0x5
        ctx->r18 = ADD32(ctx->r18, 0X5);
            goto L_8007055C;
    }
    // 0x800705AC: addiu       $s2, $s2, 0x5
    ctx->r18 = ADD32(ctx->r18, 0X5);
    // 0x800705B0: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x800705B4: bne         $s3, $at, L_800705C8
    if (ctx->r19 != ctx->r1) {
        // 0x800705B8: nop
    
            goto L_800705C8;
    }
    // 0x800705B8: nop

    // 0x800705BC: lw          $a0, 0xC8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC8);
    // 0x800705C0: jal         0x800191C0
    // 0x800705C4: nop

    func_800191C0(rdram, ctx);
        goto after_18;
    // 0x800705C4: nop

    after_18:
L_800705C8:
    // 0x800705C8: jal         0x80007AB0
    // 0x800705CC: nop

    func_80007AB0(rdram, ctx);
        goto after_19;
    // 0x800705CC: nop

    after_19:
    // 0x800705D0: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x800705D4: slti        $at, $s3, 0x87
    ctx->r1 = SIGNED(ctx->r19) < 0X87 ? 1 : 0;
    // 0x800705D8: bne         $at, $zero, L_80070548
    if (ctx->r1 != 0) {
        // 0x800705DC: nop
    
            goto L_80070548;
    }
    // 0x800705DC: nop

L_800705E0:
    // 0x800705E0: addiu       $s0, $sp, 0xC8
    ctx->r16 = ADD32(ctx->r29, 0XC8);
    // 0x800705E4: addiu       $s2, $s0, 0x10
    ctx->r18 = ADD32(ctx->r16, 0X10);
L_800705E8:
    // 0x800705E8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x800705EC: jal         0x8001C568
    // 0x800705F0: nop

    func_8001C568(rdram, ctx);
        goto after_20;
    // 0x800705F0: nop

    after_20:
    // 0x800705F4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x800705F8: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x800705FC: bne         $at, $zero, L_800705E8
    if (ctx->r1 != 0) {
        // 0x80070600: nop
    
            goto L_800705E8;
    }
    // 0x80070600: nop

    // 0x80070604: jal         0x8005CD50
    // 0x80070608: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    func_8005CD50(rdram, ctx);
        goto after_21;
    // 0x80070608: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_21:
    // 0x8007060C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80070610: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x80070614: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x80070618: nop

    // 0x8007061C: addiu       $t6, $t9, -0x1
    ctx->r14 = ADD32(ctx->r25, -0X1);
    // 0x80070620: jal         0x80007AE0
    // 0x80070624: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    func_80007AE0(rdram, ctx);
        goto after_22;
    // 0x80070624: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    after_22:
    // 0x80070628: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8007062C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80070630: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80070634: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80070638: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8007063C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80070640: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80070644: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80070648: jr          $ra
    // 0x8007064C: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
    return;
    // 0x8007064C: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
;}
RECOMP_FUNC void func_80070650(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80070650: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80070654: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80070658: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8007065C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80070660: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80070664: jal         0x80007774
    // 0x80070668: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x80070668: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x8007066C: lw          $s3, 0x1C($v0)
    ctx->r19 = MEM_W(ctx->r2, 0X1C);
    // 0x80070670: addiu       $a0, $zero, 0x7B0
    ctx->r4 = ADD32(0, 0X7B0);
    // 0x80070674: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80070678: jal         0x8001D138
    // 0x8007067C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x8007067C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80070680: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80070684: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80070688: jal         0x80019164
    // 0x8007068C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x8007068C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_2:
    // 0x80070690: sw          $s0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r16;
    // 0x80070694: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80070698: jal         0x8001C468
    // 0x8007069C: addiu       $a1, $zero, 0x7B0
    ctx->r5 = ADD32(0, 0X7B0);
    func_8001C468(rdram, ctx);
        goto after_3;
    // 0x8007069C: addiu       $a1, $zero, 0x7B0
    ctx->r5 = ADD32(0, 0X7B0);
    after_3:
    // 0x800706A0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800706A4: addiu       $s1, $zero, 0x19
    ctx->r17 = ADD32(0, 0X19);
L_800706A8:
    // 0x800706A8: lw          $t6, 0x24($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X24);
    // 0x800706AC: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x800706B0: andi        $t7, $t6, 0x4000
    ctx->r15 = ctx->r14 & 0X4000;
    // 0x800706B4: bne         $t7, $zero, L_800706E0
    if (ctx->r15 != 0) {
        // 0x800706B8: slti        $at, $s0, 0x11
        ctx->r1 = SIGNED(ctx->r16) < 0X11 ? 1 : 0;
            goto L_800706E0;
    }
    // 0x800706B8: slti        $at, $s0, 0x11
    ctx->r1 = SIGNED(ctx->r16) < 0X11 ? 1 : 0;
    // 0x800706BC: bne         $at, $zero, L_800706CC
    if (ctx->r1 != 0) {
        // 0x800706C0: nop
    
            goto L_800706CC;
    }
    // 0x800706C0: nop

    // 0x800706C4: jal         0x800191E8
    // 0x800706C8: andi        $a1, $s0, 0x1
    ctx->r5 = ctx->r16 & 0X1;
    func_800191E8(rdram, ctx);
        goto after_4;
    // 0x800706C8: andi        $a1, $s0, 0x1
    ctx->r5 = ctx->r16 & 0X1;
    after_4:
L_800706CC:
    // 0x800706CC: jal         0x80007AB0
    // 0x800706D0: nop

    func_80007AB0(rdram, ctx);
        goto after_5;
    // 0x800706D0: nop

    after_5:
    // 0x800706D4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800706D8: bne         $s0, $s1, L_800706A8
    if (ctx->r16 != ctx->r17) {
        // 0x800706DC: nop
    
            goto L_800706A8;
    }
    // 0x800706DC: nop

L_800706E0:
    // 0x800706E0: addiu       $s0, $sp, 0x54
    ctx->r16 = ADD32(ctx->r29, 0X54);
    // 0x800706E4: addiu       $s2, $s0, 0x4
    ctx->r18 = ADD32(ctx->r16, 0X4);
L_800706E8:
    // 0x800706E8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x800706EC: jal         0x8001C568
    // 0x800706F0: nop

    func_8001C568(rdram, ctx);
        goto after_6;
    // 0x800706F0: nop

    after_6:
    // 0x800706F4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x800706F8: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x800706FC: bne         $at, $zero, L_800706E8
    if (ctx->r1 != 0) {
        // 0x80070700: nop
    
            goto L_800706E8;
    }
    // 0x80070700: nop

    // 0x80070704: jal         0x8005CD50
    // 0x80070708: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_8005CD50(rdram, ctx);
        goto after_7;
    // 0x80070708: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_7:
    // 0x8007070C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80070710: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x80070714: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x80070718: nop

    // 0x8007071C: addiu       $t6, $t9, -0x1
    ctx->r14 = ADD32(ctx->r25, -0X1);
    // 0x80070720: jal         0x80007AE0
    // 0x80070724: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    func_80007AE0(rdram, ctx);
        goto after_8;
    // 0x80070724: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    after_8:
    // 0x80070728: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8007072C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80070730: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80070734: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80070738: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8007073C: jr          $ra
    // 0x80070740: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x80070740: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_80070744(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80070744: addiu       $sp, $sp, -0x570
    ctx->r29 = ADD32(ctx->r29, -0X570);
    // 0x80070748: sw          $ra, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r31;
    // 0x8007074C: sw          $fp, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r30;
    // 0x80070750: sw          $s7, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r23;
    // 0x80070754: sw          $s6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r22;
    // 0x80070758: sw          $s5, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r21;
    // 0x8007075C: sw          $s4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r20;
    // 0x80070760: sw          $s3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r19;
    // 0x80070764: sw          $s2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r18;
    // 0x80070768: sw          $s1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r17;
    // 0x8007076C: sw          $s0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r16;
    // 0x80070770: swc1        $f31, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x80070774: swc1        $f30, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f30.u32l;
    // 0x80070778: swc1        $f29, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x8007077C: swc1        $f28, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f28.u32l;
    // 0x80070780: swc1        $f27, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x80070784: swc1        $f26, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f26.u32l;
    // 0x80070788: swc1        $f25, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x8007078C: swc1        $f24, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f24.u32l;
    // 0x80070790: swc1        $f23, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80070794: swc1        $f22, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f22.u32l;
    // 0x80070798: swc1        $f21, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8007079C: jal         0x80007774
    // 0x800707A0: swc1        $f20, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x800707A0: swc1        $f20, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x800707A4: lw          $t6, 0x1C($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X1C);
    // 0x800707A8: addiu       $a0, $zero, 0x785
    ctx->r4 = ADD32(0, 0X785);
    // 0x800707AC: jal         0x8001BD98
    // 0x800707B0: sw          $t6, 0x568($sp)
    MEM_W(0X568, ctx->r29) = ctx->r14;
    func_8001BD98(rdram, ctx);
        goto after_1;
    // 0x800707B0: sw          $t6, 0x568($sp)
    MEM_W(0X568, ctx->r29) = ctx->r14;
    after_1:
    // 0x800707B4: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800707B8: lwc1        $f0, 0x6570($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6570);
    // 0x800707BC: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
    // 0x800707C0: addiu       $v0, $sp, 0x150
    ctx->r2 = ADD32(ctx->r29, 0X150);
    // 0x800707C4: addiu       $v1, $sp, 0x15C
    ctx->r3 = ADD32(ctx->r29, 0X15C);
    // 0x800707C8: addiu       $a0, $sp, 0x1DC
    ctx->r4 = ADD32(ctx->r29, 0X1DC);
    // 0x800707CC: swc1        $f0, 0x158($sp)
    MEM_W(0X158, ctx->r29) = ctx->f0.u32l;
    // 0x800707D0: swc1        $f0, 0x154($sp)
    MEM_W(0X154, ctx->r29) = ctx->f0.u32l;
    // 0x800707D4: swc1        $f0, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->f0.u32l;
L_800707D8:
    // 0x800707D8: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800707DC: sltu        $at, $v1, $a0
    ctx->r1 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x800707E0: bne         $at, $zero, L_800707D8
    if (ctx->r1 != 0) {
        // 0x800707E4: sw          $v0, -0x4($v1)
        MEM_W(-0X4, ctx->r3) = ctx->r2;
            goto L_800707D8;
    }
    // 0x800707E4: sw          $v0, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r2;
    // 0x800707E8: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x800707EC: addiu       $t7, $t7, 0x2678
    ctx->r15 = ADD32(ctx->r15, 0X2678);
    // 0x800707F0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800707F4: addiu       $t7, $zero, 0x20
    ctx->r15 = ADD32(0, 0X20);
    // 0x800707F8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800707FC: addiu       $t9, $sp, 0x1DC
    ctx->r25 = ADD32(ctx->r29, 0X1DC);
    // 0x80070800: addiu       $t6, $sp, 0x15C
    ctx->r14 = ADD32(ctx->r29, 0X15C);
    // 0x80070804: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x80070808: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x8007080C: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x80070810: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x80070814: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x80070818: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x8007081C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x80070820: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80070824: jal         0x80019F10
    // 0x80070828: sw          $t0, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r8;
    func_80019F10(rdram, ctx);
        goto after_2;
    // 0x80070828: sw          $t0, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r8;
    after_2:
    // 0x8007082C: lw          $v1, 0x568($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X568);
    // 0x80070830: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80070834: addiu       $fp, $sp, 0xC4
    ctx->r30 = ADD32(ctx->r29, 0XC4);
    // 0x80070838: sw          $v0, 0x564($sp)
    MEM_W(0X564, ctx->r29) = ctx->r2;
    // 0x8007083C: sw          $fp, 0xB0($v0)
    MEM_W(0XB0, ctx->r2) = ctx->r30;
    // 0x80070840: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80070844: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80070848: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8007084C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80070850: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80070854: addiu       $s0, $sp, 0x3DC
    ctx->r16 = ADD32(ctx->r29, 0X3DC);
    // 0x80070858: lwc1        $f28, 0x4($v1)
    ctx->f28.u32l = MEM_W(ctx->r3, 0X4);
    // 0x8007085C: lwc1        $f26, 0x0($v1)
    ctx->f26.u32l = MEM_W(ctx->r3, 0X0);
    // 0x80070860: lwc1        $f30, 0x8($v1)
    ctx->f30.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80070864: lwc1        $f25, 0x6578($at)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r1, 0X6578);
    // 0x80070868: lwc1        $f24, 0x657C($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X657C);
    // 0x8007086C: swc1        $f10, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f10.u32l;
    // 0x80070870: or          $s5, $s0, $zero
    ctx->r21 = ctx->r16 | 0;
    // 0x80070874: addiu       $s2, $sp, 0xC4
    ctx->r18 = ADD32(ctx->r29, 0XC4);
    // 0x80070878: addiu       $s4, $sp, 0x1DC
    ctx->r20 = ADD32(ctx->r29, 0X1DC);
    // 0x8007087C: addiu       $s1, $sp, 0x25C
    ctx->r17 = ADD32(ctx->r29, 0X25C);
    // 0x80070880: addiu       $s6, $sp, 0x55C
    ctx->r22 = ADD32(ctx->r29, 0X55C);
    // 0x80070884: addiu       $s3, $zero, 0xFF
    ctx->r19 = ADD32(0, 0XFF);
L_80070888:
    // 0x80070888: sw          $s3, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r19;
    // 0x8007088C: jal         0x80028AB8
    // 0x80070890: addiu       $a0, $zero, 0x167
    ctx->r4 = ADD32(0, 0X167);
    func_80028AB8(rdram, ctx);
        goto after_3;
    // 0x80070890: addiu       $a0, $zero, 0x167
    ctx->r4 = ADD32(0, 0X167);
    after_3:
    // 0x80070894: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80070898: jal         0x80027F1C
    // 0x8007089C: cvt.s.w     $f22, $f4
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    ctx->f22.fl = CVT_S_W(ctx->f4.u32l);
    func_80027F1C(rdram, ctx);
        goto after_4;
    // 0x8007089C: cvt.s.w     $f22, $f4
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    ctx->f22.fl = CVT_S_W(ctx->f4.u32l);
    after_4:
    // 0x800708A0: lui         $at, 0x4030
    ctx->r1 = S32(0X4030 << 16);
    // 0x800708A4: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x800708A8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800708AC: lui         $at, 0x4010
    ctx->r1 = S32(0X4010 << 16);
    // 0x800708B0: mul.d       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f0.d, ctx->f6.d);
    // 0x800708B4: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x800708B8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800708BC: sw          $s5, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r21;
    // 0x800708C0: add.d       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = ctx->f8.d + ctx->f10.d;
    // 0x800708C4: cvt.s.d     $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f20.fl = CVT_S_D(ctx->f4.d);
    // 0x800708C8: jal         0x80028C2C
    // 0x800708CC: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    func_80028C2C(rdram, ctx);
        goto after_5;
    // 0x800708CC: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    after_5:
    // 0x800708D0: mul.s       $f6, $f0, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x800708D4: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    // 0x800708D8: swc1        $f6, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f6.u32l;
    // 0x800708DC: lwc1        $f8, 0x88($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X88);
    // 0x800708E0: jal         0x80028C00
    // 0x800708E4: swc1        $f8, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f8.u32l;
    func_80028C00(rdram, ctx);
        goto after_6;
    // 0x800708E4: swc1        $f8, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f8.u32l;
    after_6:
    // 0x800708E8: mul.s       $f10, $f0, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x800708EC: jal         0x80027F1C
    // 0x800708F0: swc1        $f10, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f10.u32l;
    func_80027F1C(rdram, ctx);
        goto after_7;
    // 0x800708F0: swc1        $f10, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f10.u32l;
    after_7:
    // 0x800708F4: mul.d       $f4, $f0, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f24.d); 
    ctx->f4.d = MUL_D(ctx->f0.d, ctx->f24.d);
    // 0x800708F8: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    // 0x800708FC: jal         0x80028C2C
    // 0x80070900: cvt.s.d     $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f20.fl = CVT_S_D(ctx->f4.d);
    func_80028C2C(rdram, ctx);
        goto after_8;
    // 0x80070900: cvt.s.d     $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f20.fl = CVT_S_D(ctx->f4.d);
    after_8:
    // 0x80070904: mul.s       $f6, $f0, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x80070908: swc1        $f28, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f28.u32l;
    // 0x8007090C: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    // 0x80070910: add.s       $f8, $f6, $f26
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f26.fl;
    // 0x80070914: jal         0x80028C00
    // 0x80070918: swc1        $f8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f8.u32l;
    func_80028C00(rdram, ctx);
        goto after_9;
    // 0x80070918: swc1        $f8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f8.u32l;
    after_9:
    // 0x8007091C: mul.s       $f10, $f0, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x80070920: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x80070924: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x80070928: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
    // 0x8007092C: add.s       $f4, $f10, $f30
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f30.fl;
    // 0x80070930: addiu       $s5, $s5, 0xC
    ctx->r21 = ADD32(ctx->r21, 0XC);
    // 0x80070934: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x80070938: bne         $s0, $s6, L_80070888
    if (ctx->r16 != ctx->r22) {
        // 0x8007093C: swc1        $f4, -0x4($s0)
        MEM_W(-0X4, ctx->r16) = ctx->f4.u32l;
            goto L_80070888;
    }
    // 0x8007093C: swc1        $f4, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = ctx->f4.u32l;
    // 0x80070940: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x80070944: addiu       $s7, $zero, 0x20
    ctx->r23 = ADD32(0, 0X20);
    // 0x80070948: lw          $t9, 0x568($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X568);
L_8007094C:
    // 0x8007094C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80070950: lw          $v0, 0x24($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X24);
    // 0x80070954: addiu       $s1, $sp, 0x25C
    ctx->r17 = ADD32(ctx->r29, 0X25C);
    // 0x80070958: andi        $t6, $v0, 0x4000
    ctx->r14 = ctx->r2 & 0X4000;
    // 0x8007095C: bne         $t6, $zero, L_80070B60
    if (ctx->r14 != 0) {
        // 0x80070960: andi        $t7, $v0, 0x800
        ctx->r15 = ctx->r2 & 0X800;
            goto L_80070B60;
    }
    // 0x80070960: andi        $t7, $v0, 0x800
    ctx->r15 = ctx->r2 & 0X800;
    // 0x80070964: beq         $t7, $zero, L_80070988
    if (ctx->r15 == 0) {
        // 0x80070968: addiu       $s0, $sp, 0x3DC
        ctx->r16 = ADD32(ctx->r29, 0X3DC);
            goto L_80070988;
    }
    // 0x80070968: addiu       $s0, $sp, 0x3DC
    ctx->r16 = ADD32(ctx->r29, 0X3DC);
    // 0x8007096C: or          $t8, $t9, $zero
    ctx->r24 = ctx->r25 | 0;
    // 0x80070970: lwc1        $f26, 0x0($t9)
    ctx->f26.u32l = MEM_W(ctx->r25, 0X0);
    // 0x80070974: lwc1        $f28, 0x4($t9)
    ctx->f28.u32l = MEM_W(ctx->r25, 0X4);
    // 0x80070978: lwc1        $f30, 0x8($t9)
    ctx->f30.u32l = MEM_W(ctx->r25, 0X8);
    // 0x8007097C: addiu       $at, $zero, -0x801
    ctx->r1 = ADD32(0, -0X801);
    // 0x80070980: and         $t9, $v0, $at
    ctx->r25 = ctx->r2 & ctx->r1;
    // 0x80070984: sw          $t9, 0x24($t8)
    MEM_W(0X24, ctx->r24) = ctx->r25;
L_80070988:
    // 0x80070988: lwc1        $f6, 0x0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X0);
    // 0x8007098C: lwc1        $f8, 0x0($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X0);
    // 0x80070990: lwc1        $f4, 0x4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4);
    // 0x80070994: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80070998: lwc1        $f6, 0x4($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X4);
    // 0x8007099C: swc1        $f10, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f10.u32l;
    // 0x800709A0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800709A4: lwc1        $f4, 0x8($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X8);
    // 0x800709A8: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x800709AC: slti        $at, $s6, 0x37
    ctx->r1 = SIGNED(ctx->r22) < 0X37 ? 1 : 0;
    // 0x800709B0: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x800709B4: swc1        $f8, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f8.u32l;
    // 0x800709B8: bne         $at, $zero, L_800709D8
    if (ctx->r1 != 0) {
        // 0x800709BC: swc1        $f6, 0x8($s0)
        MEM_W(0X8, ctx->r16) = ctx->f6.u32l;
            goto L_800709D8;
    }
    // 0x800709BC: swc1        $f6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f6.u32l;
    // 0x800709C0: sll         $t6, $s3, 2
    ctx->r14 = S32(ctx->r19 << 2);
    // 0x800709C4: addu        $s2, $fp, $t6
    ctx->r18 = ADD32(ctx->r30, ctx->r14);
    // 0x800709C8: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
    // 0x800709CC: nop

    // 0x800709D0: addiu       $t9, $t7, -0x5
    ctx->r25 = ADD32(ctx->r15, -0X5);
    // 0x800709D4: sw          $t9, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r25;
L_800709D8:
    // 0x800709D8: lwc1        $f0, 0x0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X0);
    // 0x800709DC: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x800709E0: c.lt.s      $f0, $f26
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f0.fl < ctx->f26.fl;
    // 0x800709E4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800709E8: bc1f        L_800709FC
    if (!c1cs) {
        // 0x800709EC: lui         $at, 0x4396
        ctx->r1 = S32(0X4396 << 16);
            goto L_800709FC;
    }
    // 0x800709EC: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x800709F0: sub.s       $f2, $f0, $f26
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f26.fl;
    // 0x800709F4: b           L_80070A00
    // 0x800709F8: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
        goto L_80070A00;
    // 0x800709F8: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
L_800709FC:
    // 0x800709FC: sub.s       $f2, $f0, $f26
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f26.fl;
L_80070A00:
    // 0x80070A00: c.lt.s      $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f8.fl < ctx->f2.fl;
    // 0x80070A04: addiu       $a0, $zero, 0x167
    ctx->r4 = ADD32(0, 0X167);
    // 0x80070A08: bc1t        L_80070A80
    if (c1cs) {
        // 0x80070A0C: sll         $t8, $s3, 2
        ctx->r24 = S32(ctx->r19 << 2);
            goto L_80070A80;
    }
    // 0x80070A0C: sll         $t8, $s3, 2
    ctx->r24 = S32(ctx->r19 << 2);
    // 0x80070A10: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x80070A14: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80070A18: c.lt.s      $f0, $f30
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    c1cs = ctx->f0.fl < ctx->f30.fl;
    // 0x80070A1C: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x80070A20: bc1f        L_80070A34
    if (!c1cs) {
        // 0x80070A24: nop
    
            goto L_80070A34;
    }
    // 0x80070A24: nop

    // 0x80070A28: sub.s       $f2, $f0, $f30
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f30.fl;
    // 0x80070A2C: b           L_80070A38
    // 0x80070A30: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
        goto L_80070A38;
    // 0x80070A30: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
L_80070A34:
    // 0x80070A34: sub.s       $f2, $f0, $f30
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f30.fl;
L_80070A38:
    // 0x80070A38: c.lt.s      $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f10.fl < ctx->f2.fl;
    // 0x80070A3C: nop

    // 0x80070A40: bc1t        L_80070A80
    if (c1cs) {
        // 0x80070A44: nop
    
            goto L_80070A80;
    }
    // 0x80070A44: nop

    // 0x80070A48: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    // 0x80070A4C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80070A50: c.lt.s      $f0, $f28
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f0.fl < ctx->f28.fl;
    // 0x80070A54: nop

    // 0x80070A58: bc1f        L_80070A6C
    if (!c1cs) {
        // 0x80070A5C: nop
    
            goto L_80070A6C;
    }
    // 0x80070A5C: nop

    // 0x80070A60: sub.s       $f2, $f0, $f28
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f28.fl;
    // 0x80070A64: b           L_80070A70
    // 0x80070A68: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
        goto L_80070A70;
    // 0x80070A68: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
L_80070A6C:
    // 0x80070A6C: sub.s       $f2, $f0, $f28
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f28.fl;
L_80070A70:
    // 0x80070A70: c.lt.s      $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f4.fl < ctx->f2.fl;
    // 0x80070A74: nop

    // 0x80070A78: bc1f        L_80070B38
    if (!c1cs) {
        // 0x80070A7C: nop
    
            goto L_80070B38;
    }
    // 0x80070A7C: nop

L_80070A80:
    // 0x80070A80: mtc1        $s6, $f6
    ctx->f6.u32l = ctx->r22;
    // 0x80070A84: sll         $t7, $s3, 2
    ctx->r15 = S32(ctx->r19 << 2);
    // 0x80070A88: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80070A8C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80070A90: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80070A94: subu        $t7, $t7, $s3
    ctx->r15 = SUB32(ctx->r15, ctx->r19);
    // 0x80070A98: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80070A9C: addiu       $t6, $sp, 0x1DC
    ctx->r14 = ADD32(ctx->r29, 0X1DC);
    // 0x80070AA0: addiu       $t9, $sp, 0x3DC
    ctx->r25 = ADD32(ctx->r29, 0X3DC);
    // 0x80070AA4: addu        $s5, $t7, $t9
    ctx->r21 = ADD32(ctx->r15, ctx->r25);
    // 0x80070AA8: addu        $s4, $t8, $t6
    ctx->r20 = ADD32(ctx->r24, ctx->r14);
    // 0x80070AAC: jal         0x80028AB8
    // 0x80070AB0: add.s       $f24, $f8, $f10
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f24.fl = ctx->f8.fl + ctx->f10.fl;
    func_80028AB8(rdram, ctx);
        goto after_10;
    // 0x80070AB0: add.s       $f24, $f8, $f10
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f24.fl = ctx->f8.fl + ctx->f10.fl;
    after_10:
    // 0x80070AB4: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80070AB8: jal         0x80027F1C
    // 0x80070ABC: cvt.s.w     $f22, $f4
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    ctx->f22.fl = CVT_S_W(ctx->f4.u32l);
    func_80027F1C(rdram, ctx);
        goto after_11;
    // 0x80070ABC: cvt.s.w     $f22, $f4
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    ctx->f22.fl = CVT_S_W(ctx->f4.u32l);
    after_11:
    // 0x80070AC0: lui         $at, 0x4030
    ctx->r1 = S32(0X4030 << 16);
    // 0x80070AC4: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80070AC8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80070ACC: lui         $at, 0x4010
    ctx->r1 = S32(0X4010 << 16);
    // 0x80070AD0: mul.d       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f0.d, ctx->f6.d);
    // 0x80070AD4: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x80070AD8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80070ADC: sw          $s5, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r21;
    // 0x80070AE0: add.d       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = ctx->f8.d + ctx->f10.d;
    // 0x80070AE4: cvt.s.d     $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f20.fl = CVT_S_D(ctx->f4.d);
    // 0x80070AE8: jal         0x80028C2C
    // 0x80070AEC: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    func_80028C2C(rdram, ctx);
        goto after_12;
    // 0x80070AEC: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    after_12:
    // 0x80070AF0: mul.s       $f6, $f0, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x80070AF4: swc1        $f24, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f24.u32l;
    // 0x80070AF8: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    // 0x80070AFC: jal         0x80028C00
    // 0x80070B00: swc1        $f6, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f6.u32l;
    func_80028C00(rdram, ctx);
        goto after_13;
    // 0x80070B00: swc1        $f6, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f6.u32l;
    after_13:
    // 0x80070B04: mul.s       $f8, $f0, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x80070B08: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    // 0x80070B0C: jal         0x80028C2C
    // 0x80070B10: swc1        $f8, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f8.u32l;
    func_80028C2C(rdram, ctx);
        goto after_14;
    // 0x80070B10: swc1        $f8, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f8.u32l;
    after_14:
    // 0x80070B14: mul.s       $f10, $f0, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x80070B18: swc1        $f28, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f28.u32l;
    // 0x80070B1C: mov.s       $f12, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    ctx->f12.fl = ctx->f22.fl;
    // 0x80070B20: add.s       $f4, $f10, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f26.fl;
    // 0x80070B24: jal         0x80028C00
    // 0x80070B28: swc1        $f4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f4.u32l;
    func_80028C00(rdram, ctx);
        goto after_15;
    // 0x80070B28: swc1        $f4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f4.u32l;
    after_15:
    // 0x80070B2C: mul.s       $f6, $f0, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x80070B30: add.s       $f8, $f6, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f30.fl;
    // 0x80070B34: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
L_80070B38:
    // 0x80070B38: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80070B3C: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x80070B40: bne         $s3, $s7, L_80070988
    if (ctx->r19 != ctx->r23) {
        // 0x80070B44: addiu       $s0, $s0, 0xC
        ctx->r16 = ADD32(ctx->r16, 0XC);
            goto L_80070988;
    }
    // 0x80070B44: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x80070B48: jal         0x80007AB0
    // 0x80070B4C: nop

    func_80007AB0(rdram, ctx);
        goto after_16;
    // 0x80070B4C: nop

    after_16:
    // 0x80070B50: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x80070B54: slti        $at, $s6, 0x69
    ctx->r1 = SIGNED(ctx->r22) < 0X69 ? 1 : 0;
    // 0x80070B58: bne         $at, $zero, L_8007094C
    if (ctx->r1 != 0) {
        // 0x80070B5C: lw          $t9, 0x568($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X568);
            goto L_8007094C;
    }
    // 0x80070B5C: lw          $t9, 0x568($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X568);
L_80070B60:
    // 0x80070B60: addiu       $s4, $sp, 0x1DC
    ctx->r20 = ADD32(ctx->r29, 0X1DC);
    // 0x80070B64: addiu       $v0, $sp, 0x25C
    ctx->r2 = ADD32(ctx->r29, 0X25C);
L_80070B68:
    // 0x80070B68: addiu       $s4, $s4, 0x10
    ctx->r20 = ADD32(ctx->r20, 0X10);
    // 0x80070B6C: sw          $zero, -0x10($s4)
    MEM_W(-0X10, ctx->r20) = 0;
    // 0x80070B70: sw          $zero, -0xC($s4)
    MEM_W(-0XC, ctx->r20) = 0;
    // 0x80070B74: sw          $zero, -0x8($s4)
    MEM_W(-0X8, ctx->r20) = 0;
    // 0x80070B78: bne         $s4, $v0, L_80070B68
    if (ctx->r20 != ctx->r2) {
        // 0x80070B7C: sw          $zero, -0x4($s4)
        MEM_W(-0X4, ctx->r20) = 0;
            goto L_80070B68;
    }
    // 0x80070B7C: sw          $zero, -0x4($s4)
    MEM_W(-0X4, ctx->r20) = 0;
    // 0x80070B80: lw          $a0, 0x564($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X564);
    // 0x80070B84: jal         0x800195C4
    // 0x80070B88: nop

    func_800195C4(rdram, ctx);
        goto after_17;
    // 0x80070B88: nop

    after_17:
    // 0x80070B8C: lw          $a0, 0xC0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC0);
    // 0x80070B90: jal         0x8001B7B8
    // 0x80070B94: nop

    func_8001B7B8(rdram, ctx);
        goto after_18;
    // 0x80070B94: nop

    after_18:
    // 0x80070B98: lw          $a0, 0x568($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X568);
    // 0x80070B9C: jal         0x8005CD50
    // 0x80070BA0: nop

    func_8005CD50(rdram, ctx);
        goto after_19;
    // 0x80070BA0: nop

    after_19:
    // 0x80070BA4: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80070BA8: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x80070BAC: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x80070BB0: nop

    // 0x80070BB4: addiu       $t6, $t8, -0x1
    ctx->r14 = ADD32(ctx->r24, -0X1);
    // 0x80070BB8: jal         0x80007AE0
    // 0x80070BBC: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    func_80007AE0(rdram, ctx);
        goto after_20;
    // 0x80070BBC: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    after_20:
    // 0x80070BC0: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
    // 0x80070BC4: lwc1        $f21, 0x30($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x80070BC8: lwc1        $f20, 0x34($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80070BCC: lwc1        $f23, 0x38($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x80070BD0: lwc1        $f22, 0x3C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80070BD4: lwc1        $f25, 0x40($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x80070BD8: lwc1        $f24, 0x44($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80070BDC: lwc1        $f27, 0x48($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X48);
    // 0x80070BE0: lwc1        $f26, 0x4C($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80070BE4: lwc1        $f29, 0x50($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X50);
    // 0x80070BE8: lwc1        $f28, 0x54($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80070BEC: lwc1        $f31, 0x58($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X58);
    // 0x80070BF0: lwc1        $f30, 0x5C($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80070BF4: lw          $s0, 0x60($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X60);
    // 0x80070BF8: lw          $s1, 0x64($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X64);
    // 0x80070BFC: lw          $s2, 0x68($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X68);
    // 0x80070C00: lw          $s3, 0x6C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X6C);
    // 0x80070C04: lw          $s4, 0x70($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X70);
    // 0x80070C08: lw          $s5, 0x74($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X74);
    // 0x80070C0C: lw          $s6, 0x78($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X78);
    // 0x80070C10: lw          $s7, 0x7C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X7C);
    // 0x80070C14: lw          $fp, 0x80($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X80);
    // 0x80070C18: jr          $ra
    // 0x80070C1C: addiu       $sp, $sp, 0x570
    ctx->r29 = ADD32(ctx->r29, 0X570);
    return;
    // 0x80070C1C: addiu       $sp, $sp, 0x570
    ctx->r29 = ADD32(ctx->r29, 0X570);
;}
RECOMP_FUNC void func_80070C20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80070C20: addiu       $sp, $sp, -0x568
    ctx->r29 = ADD32(ctx->r29, -0X568);
    // 0x80070C24: sw          $ra, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r31;
    // 0x80070C28: sw          $s7, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r23;
    // 0x80070C2C: sw          $s6, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r22;
    // 0x80070C30: sw          $s5, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r21;
    // 0x80070C34: sw          $s4, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r20;
    // 0x80070C38: sw          $s3, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r19;
    // 0x80070C3C: sw          $s2, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r18;
    // 0x80070C40: sw          $s1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r17;
    // 0x80070C44: sw          $s0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r16;
    // 0x80070C48: swc1        $f31, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x80070C4C: swc1        $f30, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f30.u32l;
    // 0x80070C50: swc1        $f29, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x80070C54: swc1        $f28, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f28.u32l;
    // 0x80070C58: swc1        $f27, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x80070C5C: swc1        $f26, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f26.u32l;
    // 0x80070C60: swc1        $f25, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x80070C64: swc1        $f24, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f24.u32l;
    // 0x80070C68: swc1        $f23, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80070C6C: swc1        $f22, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f22.u32l;
    // 0x80070C70: swc1        $f21, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80070C74: jal         0x80007774
    // 0x80070C78: swc1        $f20, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x80070C78: swc1        $f20, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x80070C7C: lw          $s7, 0x1C($v0)
    ctx->r23 = MEM_W(ctx->r2, 0X1C);
    // 0x80070C80: jal         0x8001BD98
    // 0x80070C84: addiu       $a0, $zero, 0x785
    ctx->r4 = ADD32(0, 0X785);
    func_8001BD98(rdram, ctx);
        goto after_1;
    // 0x80070C84: addiu       $a0, $zero, 0x785
    ctx->r4 = ADD32(0, 0X785);
    after_1:
    // 0x80070C88: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80070C8C: lwc1        $f0, 0x6580($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6580);
    // 0x80070C90: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
    // 0x80070C94: addiu       $v0, $sp, 0x148
    ctx->r2 = ADD32(ctx->r29, 0X148);
    // 0x80070C98: addiu       $v1, $sp, 0x154
    ctx->r3 = ADD32(ctx->r29, 0X154);
    // 0x80070C9C: addiu       $a0, $sp, 0x1D4
    ctx->r4 = ADD32(ctx->r29, 0X1D4);
    // 0x80070CA0: swc1        $f0, 0x150($sp)
    MEM_W(0X150, ctx->r29) = ctx->f0.u32l;
    // 0x80070CA4: swc1        $f0, 0x14C($sp)
    MEM_W(0X14C, ctx->r29) = ctx->f0.u32l;
    // 0x80070CA8: swc1        $f0, 0x148($sp)
    MEM_W(0X148, ctx->r29) = ctx->f0.u32l;
L_80070CAC:
    // 0x80070CAC: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80070CB0: sltu        $at, $v1, $a0
    ctx->r1 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x80070CB4: bne         $at, $zero, L_80070CAC
    if (ctx->r1 != 0) {
        // 0x80070CB8: sw          $v0, -0x4($v1)
        MEM_W(-0X4, ctx->r3) = ctx->r2;
            goto L_80070CAC;
    }
    // 0x80070CB8: sw          $v0, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r2;
    // 0x80070CBC: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80070CC0: addiu       $t6, $t6, 0x2678
    ctx->r14 = ADD32(ctx->r14, 0X2678);
    // 0x80070CC4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80070CC8: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x80070CCC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80070CD0: addiu       $t8, $sp, 0x1D4
    ctx->r24 = ADD32(ctx->r29, 0X1D4);
    // 0x80070CD4: addiu       $t9, $sp, 0x154
    ctx->r25 = ADD32(ctx->r29, 0X154);
    // 0x80070CD8: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80070CDC: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x80070CE0: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80070CE4: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x80070CE8: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x80070CEC: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x80070CF0: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x80070CF4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80070CF8: jal         0x80019F10
    // 0x80070CFC: sw          $t0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r8;
    func_80019F10(rdram, ctx);
        goto after_2;
    // 0x80070CFC: sw          $t0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r8;
    after_2:
    // 0x80070D00: sw          $v0, 0x55C($sp)
    MEM_W(0X55C, ctx->r29) = ctx->r2;
    // 0x80070D04: addiu       $t7, $sp, 0xBC
    ctx->r15 = ADD32(ctx->r29, 0XBC);
    // 0x80070D08: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x80070D0C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80070D10: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80070D14: sw          $t7, 0xB0($v0)
    MEM_W(0XB0, ctx->r2) = ctx->r15;
    // 0x80070D18: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80070D1C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80070D20: lwc1        $f0, 0x4($s7)
    ctx->f0.u32l = MEM_W(ctx->r23, 0X4);
    // 0x80070D24: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80070D28: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80070D2C: add.s       $f26, $f0, $f4
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f26.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x80070D30: lwc1        $f28, 0x0($s7)
    ctx->f28.u32l = MEM_W(ctx->r23, 0X0);
    // 0x80070D34: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80070D38: lwc1        $f30, 0x8($s7)
    ctx->f30.u32l = MEM_W(ctx->r23, 0X8);
    // 0x80070D3C: addiu       $s0, $sp, 0x3D4
    ctx->r16 = ADD32(ctx->r29, 0X3D4);
    // 0x80070D40: lwc1        $f25, 0x6588($at)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r1, 0X6588);
    // 0x80070D44: lwc1        $f24, 0x658C($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X658C);
    // 0x80070D48: or          $s4, $s0, $zero
    ctx->r20 = ctx->r16 | 0;
    // 0x80070D4C: swc1        $f4, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f4.u32l;
    // 0x80070D50: addiu       $s5, $sp, 0xBC
    ctx->r21 = ADD32(ctx->r29, 0XBC);
    // 0x80070D54: addiu       $s3, $sp, 0x1D4
    ctx->r19 = ADD32(ctx->r29, 0X1D4);
    // 0x80070D58: addiu       $s1, $sp, 0x254
    ctx->r17 = ADD32(ctx->r29, 0X254);
    // 0x80070D5C: addiu       $s6, $sp, 0x554
    ctx->r22 = ADD32(ctx->r29, 0X554);
    // 0x80070D60: addiu       $s2, $zero, 0xFF
    ctx->r18 = ADD32(0, 0XFF);
    // 0x80070D64: swc1        $f0, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->f0.u32l;
L_80070D68:
    // 0x80070D68: sw          $s2, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r18;
    // 0x80070D6C: jal         0x80028AB8
    // 0x80070D70: addiu       $a0, $zero, 0x167
    ctx->r4 = ADD32(0, 0X167);
    func_80028AB8(rdram, ctx);
        goto after_3;
    // 0x80070D70: addiu       $a0, $zero, 0x167
    ctx->r4 = ADD32(0, 0X167);
    after_3:
    // 0x80070D74: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x80070D78: jal         0x80027F1C
    // 0x80070D7C: cvt.s.w     $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    ctx->f20.fl = CVT_S_W(ctx->f6.u32l);
    func_80027F1C(rdram, ctx);
        goto after_4;
    // 0x80070D7C: cvt.s.w     $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    ctx->f20.fl = CVT_S_W(ctx->f6.u32l);
    after_4:
    // 0x80070D80: lui         $at, 0x4034
    ctx->r1 = S32(0X4034 << 16);
    // 0x80070D84: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80070D88: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80070D8C: lui         $at, 0x4010
    ctx->r1 = S32(0X4010 << 16);
    // 0x80070D90: mul.d       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f0.d, ctx->f8.d);
    // 0x80070D94: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80070D98: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80070D9C: sw          $s4, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r20;
    // 0x80070DA0: add.d       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f10.d + ctx->f4.d;
    // 0x80070DA4: cvt.s.d     $f22, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f22.fl = CVT_S_D(ctx->f6.d);
    // 0x80070DA8: jal         0x80028C2C
    // 0x80070DAC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_80028C2C(rdram, ctx);
        goto after_5;
    // 0x80070DAC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_5:
    // 0x80070DB0: mul.s       $f8, $f0, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x80070DB4: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x80070DB8: swc1        $f8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f8.u32l;
    // 0x80070DBC: lwc1        $f10, 0x84($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X84);
    // 0x80070DC0: jal         0x80028C00
    // 0x80070DC4: swc1        $f10, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f10.u32l;
    func_80028C00(rdram, ctx);
        goto after_6;
    // 0x80070DC4: swc1        $f10, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f10.u32l;
    after_6:
    // 0x80070DC8: mul.s       $f4, $f0, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x80070DCC: jal         0x80027F1C
    // 0x80070DD0: swc1        $f4, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f4.u32l;
    func_80027F1C(rdram, ctx);
        goto after_7;
    // 0x80070DD0: swc1        $f4, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f4.u32l;
    after_7:
    // 0x80070DD4: mul.d       $f6, $f0, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f24.d); 
    ctx->f6.d = MUL_D(ctx->f0.d, ctx->f24.d);
    // 0x80070DD8: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x80070DDC: jal         0x80028C2C
    // 0x80070DE0: cvt.s.d     $f22, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f22.fl = CVT_S_D(ctx->f6.d);
    func_80028C2C(rdram, ctx);
        goto after_8;
    // 0x80070DE0: cvt.s.d     $f22, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f22.fl = CVT_S_D(ctx->f6.d);
    after_8:
    // 0x80070DE4: mul.s       $f8, $f0, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x80070DE8: swc1        $f26, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f26.u32l;
    // 0x80070DEC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x80070DF0: add.s       $f10, $f8, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f28.fl;
    // 0x80070DF4: jal         0x80028C00
    // 0x80070DF8: swc1        $f10, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f10.u32l;
    func_80028C00(rdram, ctx);
        goto after_9;
    // 0x80070DF8: swc1        $f10, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f10.u32l;
    after_9:
    // 0x80070DFC: mul.s       $f4, $f0, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x80070E00: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x80070E04: addiu       $s5, $s5, 0x4
    ctx->r21 = ADD32(ctx->r21, 0X4);
    // 0x80070E08: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x80070E0C: add.s       $f6, $f4, $f30
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f30.fl;
    // 0x80070E10: addiu       $s4, $s4, 0xC
    ctx->r20 = ADD32(ctx->r20, 0XC);
    // 0x80070E14: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x80070E18: bne         $s0, $s6, L_80070D68
    if (ctx->r16 != ctx->r22) {
        // 0x80070E1C: swc1        $f6, -0x4($s0)
        MEM_W(-0X4, ctx->r16) = ctx->f6.u32l;
            goto L_80070D68;
    }
    // 0x80070E1C: swc1        $f6, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = ctx->f6.u32l;
    // 0x80070E20: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x80070E24: addiu       $s6, $zero, 0x20
    ctx->r22 = ADD32(0, 0X20);
L_80070E28:
    // 0x80070E28: lw          $v0, 0x24($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X24);
    // 0x80070E2C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80070E30: andi        $t9, $v0, 0x4000
    ctx->r25 = ctx->r2 & 0X4000;
    // 0x80070E34: bne         $t9, $zero, L_80071028
    if (ctx->r25 != 0) {
        // 0x80070E38: andi        $t6, $v0, 0x800
        ctx->r14 = ctx->r2 & 0X800;
            goto L_80071028;
    }
    // 0x80070E38: andi        $t6, $v0, 0x800
    ctx->r14 = ctx->r2 & 0X800;
    // 0x80070E3C: beq         $t6, $zero, L_80070E60
    if (ctx->r14 == 0) {
        // 0x80070E40: addiu       $s1, $sp, 0x254
        ctx->r17 = ADD32(ctx->r29, 0X254);
            goto L_80070E60;
    }
    // 0x80070E40: addiu       $s1, $sp, 0x254
    ctx->r17 = ADD32(ctx->r29, 0X254);
    // 0x80070E44: lwc1        $f8, 0x4($s7)
    ctx->f8.u32l = MEM_W(ctx->r23, 0X4);
    // 0x80070E48: lwc1        $f28, 0x0($s7)
    ctx->f28.u32l = MEM_W(ctx->r23, 0X0);
    // 0x80070E4C: addiu       $at, $zero, -0x801
    ctx->r1 = ADD32(0, -0X801);
    // 0x80070E50: swc1        $f8, 0x140($sp)
    MEM_W(0X140, ctx->r29) = ctx->f8.u32l;
    // 0x80070E54: and         $t7, $v0, $at
    ctx->r15 = ctx->r2 & ctx->r1;
    // 0x80070E58: lwc1        $f30, 0x8($s7)
    ctx->f30.u32l = MEM_W(ctx->r23, 0X8);
    // 0x80070E5C: sw          $t7, 0x24($s7)
    MEM_W(0X24, ctx->r23) = ctx->r15;
L_80070E60:
    // 0x80070E60: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80070E64: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80070E68: addiu       $s0, $sp, 0x3D4
    ctx->r16 = ADD32(ctx->r29, 0X3D4);
L_80070E6C:
    // 0x80070E6C: lwc1        $f10, 0x0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X0);
    // 0x80070E70: lwc1        $f4, 0x0($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X0);
    // 0x80070E74: lwc1        $f8, 0x4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X4);
    // 0x80070E78: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x80070E7C: lwc1        $f10, 0x4($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X4);
    // 0x80070E80: swc1        $f6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f6.u32l;
    // 0x80070E84: lwc1        $f0, 0x0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X0);
    // 0x80070E88: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80070E8C: lwc1        $f8, 0x8($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X8);
    // 0x80070E90: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    // 0x80070E94: c.lt.s      $f0, $f28
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f0.fl < ctx->f28.fl;
    // 0x80070E98: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80070E9C: swc1        $f4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f4.u32l;
    // 0x80070EA0: bc1f        L_80070EB4
    if (!c1cs) {
        // 0x80070EA4: swc1        $f10, 0x8($s0)
        MEM_W(0X8, ctx->r16) = ctx->f10.u32l;
            goto L_80070EB4;
    }
    // 0x80070EA4: swc1        $f10, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f10.u32l;
    // 0x80070EA8: sub.s       $f2, $f0, $f28
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f28.fl;
    // 0x80070EAC: b           L_80070EB8
    // 0x80070EB0: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
        goto L_80070EB8;
    // 0x80070EB0: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
L_80070EB4:
    // 0x80070EB4: sub.s       $f2, $f0, $f28
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f28.fl;
L_80070EB8:
    // 0x80070EB8: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x80070EBC: addiu       $a0, $zero, 0x167
    ctx->r4 = ADD32(0, 0X167);
    // 0x80070EC0: bc1t        L_80070F14
    if (c1cs) {
        // 0x80070EC4: sll         $t8, $s2, 2
        ctx->r24 = S32(ctx->r18 << 2);
            goto L_80070F14;
    }
    // 0x80070EC4: sll         $t8, $s2, 2
    ctx->r24 = S32(ctx->r18 << 2);
    // 0x80070EC8: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x80070ECC: lwc1        $f6, 0x140($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X140);
    // 0x80070ED0: c.lt.s      $f0, $f30
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    c1cs = ctx->f0.fl < ctx->f30.fl;
    // 0x80070ED4: nop

    // 0x80070ED8: bc1f        L_80070EEC
    if (!c1cs) {
        // 0x80070EDC: nop
    
            goto L_80070EEC;
    }
    // 0x80070EDC: nop

    // 0x80070EE0: sub.s       $f2, $f0, $f30
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f30.fl;
    // 0x80070EE4: b           L_80070EF0
    // 0x80070EE8: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
        goto L_80070EF0;
    // 0x80070EE8: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
L_80070EEC:
    // 0x80070EEC: sub.s       $f2, $f0, $f30
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f2.fl = ctx->f0.fl - ctx->f30.fl;
L_80070EF0:
    // 0x80070EF0: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x80070EF4: nop

    // 0x80070EF8: bc1t        L_80070F18
    if (c1cs) {
        // 0x80070EFC: addiu       $t9, $sp, 0x1D4
        ctx->r25 = ADD32(ctx->r29, 0X1D4);
            goto L_80070F18;
    }
    // 0x80070EFC: addiu       $t9, $sp, 0x1D4
    ctx->r25 = ADD32(ctx->r29, 0X1D4);
    // 0x80070F00: lwc1        $f4, 0x4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4);
    // 0x80070F04: nop

    // 0x80070F08: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80070F0C: nop

    // 0x80070F10: bc1f        L_80071000
    if (!c1cs) {
        // 0x80070F14: addiu       $t9, $sp, 0x1D4
        ctx->r25 = ADD32(ctx->r29, 0X1D4);
            goto L_80071000;
    }
L_80070F14:
    // 0x80070F14: addiu       $t9, $sp, 0x1D4
    ctx->r25 = ADD32(ctx->r29, 0X1D4);
L_80070F18:
    // 0x80070F18: addu        $s3, $t8, $t9
    ctx->r19 = ADD32(ctx->r24, ctx->r25);
    // 0x80070F1C: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x80070F20: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80070F24: lwc1        $f8, 0x140($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X140);
    // 0x80070F28: sra         $t8, $s5, 1
    ctx->r24 = S32(SIGNED(ctx->r21) >> 1);
    // 0x80070F2C: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x80070F30: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80070F34: sll         $t6, $s2, 2
    ctx->r14 = S32(ctx->r18 << 2);
    // 0x80070F38: add.s       $f26, $f8, $f10
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f26.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80070F3C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80070F40: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80070F44: subu        $t6, $t6, $s2
    ctx->r14 = SUB32(ctx->r14, ctx->r18);
    // 0x80070F48: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80070F4C: addiu       $t7, $sp, 0x3D4
    ctx->r15 = ADD32(ctx->r29, 0X3D4);
    // 0x80070F50: addu        $s4, $t6, $t7
    ctx->r20 = ADD32(ctx->r14, ctx->r15);
    // 0x80070F54: jal         0x80028AB8
    // 0x80070F58: add.s       $f24, $f6, $f8
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f24.fl = ctx->f6.fl + ctx->f8.fl;
    func_80028AB8(rdram, ctx);
        goto after_10;
    // 0x80070F58: add.s       $f24, $f6, $f8
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f24.fl = ctx->f6.fl + ctx->f8.fl;
    after_10:
    // 0x80070F5C: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x80070F60: jal         0x80027F1C
    // 0x80070F64: cvt.s.w     $f20, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    ctx->f20.fl = CVT_S_W(ctx->f10.u32l);
    func_80027F1C(rdram, ctx);
        goto after_11;
    // 0x80070F64: cvt.s.w     $f20, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    ctx->f20.fl = CVT_S_W(ctx->f10.u32l);
    after_11:
    // 0x80070F68: lui         $at, 0x4034
    ctx->r1 = S32(0X4034 << 16);
    // 0x80070F6C: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80070F70: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80070F74: lui         $at, 0x4010
    ctx->r1 = S32(0X4010 << 16);
    // 0x80070F78: mul.d       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f0.d, ctx->f4.d);
    // 0x80070F7C: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80070F80: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80070F84: sw          $s4, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r20;
    // 0x80070F88: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x80070F8C: cvt.s.d     $f22, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f22.fl = CVT_S_D(ctx->f10.d);
    // 0x80070F90: jal         0x80028C2C
    // 0x80070F94: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_80028C2C(rdram, ctx);
        goto after_12;
    // 0x80070F94: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_12:
    // 0x80070F98: mul.s       $f4, $f0, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x80070F9C: swc1        $f24, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f24.u32l;
    // 0x80070FA0: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x80070FA4: jal         0x80028C00
    // 0x80070FA8: swc1        $f4, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f4.u32l;
    func_80028C00(rdram, ctx);
        goto after_13;
    // 0x80070FA8: swc1        $f4, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f4.u32l;
    after_13:
    // 0x80070FAC: mul.s       $f6, $f0, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x80070FB0: jal         0x80027F1C
    // 0x80070FB4: swc1        $f6, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f6.u32l;
    func_80027F1C(rdram, ctx);
        goto after_14;
    // 0x80070FB4: swc1        $f6, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f6.u32l;
    after_14:
    // 0x80070FB8: lui         $at, 0x4059
    ctx->r1 = S32(0X4059 << 16);
    // 0x80070FBC: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80070FC0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80070FC4: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x80070FC8: mul.d       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f0.d, ctx->f8.d);
    // 0x80070FCC: jal         0x80028C2C
    // 0x80070FD0: cvt.s.d     $f22, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f22.fl = CVT_S_D(ctx->f10.d);
    func_80028C2C(rdram, ctx);
        goto after_15;
    // 0x80070FD0: cvt.s.d     $f22, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f22.fl = CVT_S_D(ctx->f10.d);
    after_15:
    // 0x80070FD4: mul.s       $f4, $f0, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x80070FD8: swc1        $f26, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f26.u32l;
    // 0x80070FDC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x80070FE0: add.s       $f6, $f4, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f28.fl;
    // 0x80070FE4: jal         0x80028C00
    // 0x80070FE8: swc1        $f6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f6.u32l;
    func_80028C00(rdram, ctx);
        goto after_16;
    // 0x80070FE8: swc1        $f6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f6.u32l;
    after_16:
    // 0x80070FEC: mul.s       $f8, $f0, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x80070FF0: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80070FF4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80070FF8: add.s       $f10, $f8, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f30.fl;
    // 0x80070FFC: swc1        $f10, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f10.u32l;
L_80071000:
    // 0x80071000: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80071004: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x80071008: bne         $s2, $s6, L_80070E6C
    if (ctx->r18 != ctx->r22) {
        // 0x8007100C: addiu       $s0, $s0, 0xC
        ctx->r16 = ADD32(ctx->r16, 0XC);
            goto L_80070E6C;
    }
    // 0x8007100C: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x80071010: jal         0x80007AB0
    // 0x80071014: nop

    func_80007AB0(rdram, ctx);
        goto after_17;
    // 0x80071014: nop

    after_17:
    // 0x80071018: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x8007101C: slti        $at, $s5, 0x3C
    ctx->r1 = SIGNED(ctx->r21) < 0X3C ? 1 : 0;
    // 0x80071020: bne         $at, $zero, L_80070E28
    if (ctx->r1 != 0) {
        // 0x80071024: nop
    
            goto L_80070E28;
    }
    // 0x80071024: nop

L_80071028:
    // 0x80071028: addiu       $s3, $sp, 0x1D4
    ctx->r19 = ADD32(ctx->r29, 0X1D4);
    // 0x8007102C: addiu       $v0, $sp, 0x254
    ctx->r2 = ADD32(ctx->r29, 0X254);
L_80071030:
    // 0x80071030: addiu       $s3, $s3, 0x10
    ctx->r19 = ADD32(ctx->r19, 0X10);
    // 0x80071034: sw          $zero, -0x10($s3)
    MEM_W(-0X10, ctx->r19) = 0;
    // 0x80071038: sw          $zero, -0xC($s3)
    MEM_W(-0XC, ctx->r19) = 0;
    // 0x8007103C: sw          $zero, -0x8($s3)
    MEM_W(-0X8, ctx->r19) = 0;
    // 0x80071040: bne         $s3, $v0, L_80071030
    if (ctx->r19 != ctx->r2) {
        // 0x80071044: sw          $zero, -0x4($s3)
        MEM_W(-0X4, ctx->r19) = 0;
            goto L_80071030;
    }
    // 0x80071044: sw          $zero, -0x4($s3)
    MEM_W(-0X4, ctx->r19) = 0;
    // 0x80071048: lw          $a0, 0x55C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X55C);
    // 0x8007104C: jal         0x800195C4
    // 0x80071050: nop

    func_800195C4(rdram, ctx);
        goto after_18;
    // 0x80071050: nop

    after_18:
    // 0x80071054: lw          $a0, 0xB8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XB8);
    // 0x80071058: jal         0x8001B7B8
    // 0x8007105C: nop

    func_8001B7B8(rdram, ctx);
        goto after_19;
    // 0x8007105C: nop

    after_19:
    // 0x80071060: jal         0x8005CD50
    // 0x80071064: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    func_8005CD50(rdram, ctx);
        goto after_20;
    // 0x80071064: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    after_20:
    // 0x80071068: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8007106C: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x80071070: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x80071074: nop

    // 0x80071078: addiu       $t6, $t9, -0x1
    ctx->r14 = ADD32(ctx->r25, -0X1);
    // 0x8007107C: jal         0x80007AE0
    // 0x80071080: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    func_80007AE0(rdram, ctx);
        goto after_21;
    // 0x80071080: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    after_21:
    // 0x80071084: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
    // 0x80071088: lwc1        $f21, 0x28($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x8007108C: lwc1        $f20, 0x2C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80071090: lwc1        $f23, 0x30($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x80071094: lwc1        $f22, 0x34($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80071098: lwc1        $f25, 0x38($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x8007109C: lwc1        $f24, 0x3C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x800710A0: lwc1        $f27, 0x40($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x800710A4: lwc1        $f26, 0x44($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X44);
    // 0x800710A8: lwc1        $f29, 0x48($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X48);
    // 0x800710AC: lwc1        $f28, 0x4C($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x800710B0: lwc1        $f31, 0x50($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X50);
    // 0x800710B4: lwc1        $f30, 0x54($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X54);
    // 0x800710B8: lw          $s0, 0x5C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X5C);
    // 0x800710BC: lw          $s1, 0x60($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X60);
    // 0x800710C0: lw          $s2, 0x64($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X64);
    // 0x800710C4: lw          $s3, 0x68($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X68);
    // 0x800710C8: lw          $s4, 0x6C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X6C);
    // 0x800710CC: lw          $s5, 0x70($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X70);
    // 0x800710D0: lw          $s6, 0x74($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X74);
    // 0x800710D4: lw          $s7, 0x78($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X78);
    // 0x800710D8: jr          $ra
    // 0x800710DC: addiu       $sp, $sp, 0x568
    ctx->r29 = ADD32(ctx->r29, 0X568);
    return;
    // 0x800710DC: addiu       $sp, $sp, 0x568
    ctx->r29 = ADD32(ctx->r29, 0X568);
;}
RECOMP_FUNC void func_800710E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800710E0: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x800710E4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800710E8: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x800710EC: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x800710F0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800710F4: jal         0x80007774
    // 0x800710F8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x800710F8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x800710FC: lw          $s1, 0x1C($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X1C);
    // 0x80071100: addiu       $a0, $zero, 0x78B
    ctx->r4 = ADD32(0, 0X78B);
    // 0x80071104: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80071108: jal         0x8001D138
    // 0x8007110C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x8007110C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80071110: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80071114: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80071118: jal         0x80019164
    // 0x8007111C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x8007111C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_2:
    // 0x80071120: sw          $s0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r16;
    // 0x80071124: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80071128: jal         0x8001C468
    // 0x8007112C: addiu       $a1, $zero, 0x7E6
    ctx->r5 = ADD32(0, 0X7E6);
    func_8001C468(rdram, ctx);
        goto after_3;
    // 0x8007112C: addiu       $a1, $zero, 0x7E6
    ctx->r5 = ADD32(0, 0X7E6);
    after_3:
    // 0x80071130: lw          $a0, 0x74($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X74);
    // 0x80071134: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80071138: jal         0x800192E8
    // 0x8007113C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800192E8(rdram, ctx);
        goto after_4;
    // 0x8007113C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x80071140: lw          $s0, 0x74($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X74);
    // 0x80071144: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80071148: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8007114C: jal         0x80018658
    // 0x80071150: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80018658(rdram, ctx);
        goto after_5;
    // 0x80071150: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80071154: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80071158: jal         0x80018604
    // 0x8007115C: addiu       $a1, $zero, 0xC0
    ctx->r5 = ADD32(0, 0XC0);
    func_80018604(rdram, ctx);
        goto after_6;
    // 0x8007115C: addiu       $a1, $zero, 0xC0
    ctx->r5 = ADD32(0, 0XC0);
    after_6:
    // 0x80071160: addiu       $s2, $zero, -0x401
    ctx->r18 = ADD32(0, -0X401);
    // 0x80071164: addiu       $s0, $zero, -0x801
    ctx->r16 = ADD32(0, -0X801);
    // 0x80071168: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
L_8007116C:
    // 0x8007116C: lw          $a0, 0x74($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X74);
    // 0x80071170: andi        $t6, $v0, 0x4000
    ctx->r14 = ctx->r2 & 0X4000;
    // 0x80071174: bne         $t6, $zero, L_800711D4
    if (ctx->r14 != 0) {
        // 0x80071178: andi        $t7, $v0, 0x800
        ctx->r15 = ctx->r2 & 0X800;
            goto L_800711D4;
    }
    // 0x80071178: andi        $t7, $v0, 0x800
    ctx->r15 = ctx->r2 & 0X800;
    // 0x8007117C: beq         $t7, $zero, L_800711A0
    if (ctx->r15 == 0) {
        // 0x80071180: andi        $t6, $v0, 0x400
        ctx->r14 = ctx->r2 & 0X400;
            goto L_800711A0;
    }
    // 0x80071180: andi        $t6, $v0, 0x400
    ctx->r14 = ctx->r2 & 0X400;
    // 0x80071184: jal         0x80019164
    // 0x80071188: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80019164(rdram, ctx);
        goto after_7;
    // 0x80071188: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_7:
    // 0x8007118C: lw          $t8, 0x24($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X24);
    // 0x80071190: nop

    // 0x80071194: and         $v0, $t8, $s0
    ctx->r2 = ctx->r24 & ctx->r16;
    // 0x80071198: sw          $v0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r2;
    // 0x8007119C: andi        $t6, $v0, 0x400
    ctx->r14 = ctx->r2 & 0X400;
L_800711A0:
    // 0x800711A0: beq         $t6, $zero, L_800711C4
    if (ctx->r14 == 0) {
        // 0x800711A4: nop
    
            goto L_800711C4;
    }
    // 0x800711A4: nop

    // 0x800711A8: lw          $a0, 0x74($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X74);
    // 0x800711AC: jal         0x8001913C
    // 0x800711B0: addiu       $a1, $s1, 0xC
    ctx->r5 = ADD32(ctx->r17, 0XC);
    func_8001913C(rdram, ctx);
        goto after_8;
    // 0x800711B0: addiu       $a1, $s1, 0xC
    ctx->r5 = ADD32(ctx->r17, 0XC);
    after_8:
    // 0x800711B4: lw          $t7, 0x24($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X24);
    // 0x800711B8: nop

    // 0x800711BC: and         $t8, $t7, $s2
    ctx->r24 = ctx->r15 & ctx->r18;
    // 0x800711C0: sw          $t8, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r24;
L_800711C4:
    // 0x800711C4: jal         0x80007AB0
    // 0x800711C8: nop

    func_80007AB0(rdram, ctx);
        goto after_9;
    // 0x800711C8: nop

    after_9:
    // 0x800711CC: b           L_8007116C
    // 0x800711D0: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
        goto L_8007116C;
    // 0x800711D0: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
L_800711D4:
    // 0x800711D4: addiu       $s0, $sp, 0x74
    ctx->r16 = ADD32(ctx->r29, 0X74);
    // 0x800711D8: addiu       $s3, $s0, 0x4
    ctx->r19 = ADD32(ctx->r16, 0X4);
L_800711DC:
    // 0x800711DC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x800711E0: jal         0x8001C568
    // 0x800711E4: nop

    func_8001C568(rdram, ctx);
        goto after_10;
    // 0x800711E4: nop

    after_10:
    // 0x800711E8: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x800711EC: sltu        $at, $s0, $s3
    ctx->r1 = ctx->r16 < ctx->r19 ? 1 : 0;
    // 0x800711F0: bne         $at, $zero, L_800711DC
    if (ctx->r1 != 0) {
        // 0x800711F4: nop
    
            goto L_800711DC;
    }
    // 0x800711F4: nop

    // 0x800711F8: jal         0x8005CD50
    // 0x800711FC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8005CD50(rdram, ctx);
        goto after_11;
    // 0x800711FC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_11:
    // 0x80071200: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80071204: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x80071208: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8007120C: nop

    // 0x80071210: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80071214: jal         0x80007AE0
    // 0x80071218: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    func_80007AE0(rdram, ctx);
        goto after_12;
    // 0x80071218: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    after_12:
    // 0x8007121C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80071220: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80071224: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80071228: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8007122C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80071230: jr          $ra
    // 0x80071234: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x80071234: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_80071238(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80071238: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x8007123C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80071240: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80071244: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80071248: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8007124C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80071250: jal         0x80007774
    // 0x80071254: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x80071254: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x80071258: lw          $s1, 0x1C($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X1C);
    // 0x8007125C: addiu       $a0, $zero, 0x78C
    ctx->r4 = ADD32(0, 0X78C);
    // 0x80071260: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80071264: jal         0x8001D138
    // 0x80071268: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x80071268: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8007126C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80071270: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80071274: jal         0x80019164
    // 0x80071278: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x80071278: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_2:
    // 0x8007127C: sw          $s0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r16;
    // 0x80071280: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80071284: jal         0x8001C468
    // 0x80071288: addiu       $a1, $zero, 0x78C
    ctx->r5 = ADD32(0, 0X78C);
    func_8001C468(rdram, ctx);
        goto after_3;
    // 0x80071288: addiu       $a1, $zero, 0x78C
    ctx->r5 = ADD32(0, 0X78C);
    after_3:
    // 0x8007128C: lw          $s0, 0x74($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X74);
    // 0x80071290: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80071294: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80071298: jal         0x80018658
    // 0x8007129C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80018658(rdram, ctx);
        goto after_4;
    // 0x8007129C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x800712A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800712A4: jal         0x80018604
    // 0x800712A8: addiu       $a1, $zero, 0xC0
    ctx->r5 = ADD32(0, 0XC0);
    func_80018604(rdram, ctx);
        goto after_5;
    // 0x800712A8: addiu       $a1, $zero, 0xC0
    ctx->r5 = ADD32(0, 0XC0);
    after_5:
    // 0x800712AC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800712B0: addiu       $s4, $zero, 0xB
    ctx->r20 = ADD32(0, 0XB);
    // 0x800712B4: addiu       $s3, $zero, -0x401
    ctx->r19 = ADD32(0, -0X401);
    // 0x800712B8: addiu       $s2, $zero, -0x801
    ctx->r18 = ADD32(0, -0X801);
L_800712BC:
    // 0x800712BC: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x800712C0: lw          $a0, 0x74($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X74);
    // 0x800712C4: andi        $t6, $v0, 0x4000
    ctx->r14 = ctx->r2 & 0X4000;
    // 0x800712C8: bne         $t6, $zero, L_8007132C
    if (ctx->r14 != 0) {
        // 0x800712CC: andi        $t7, $v0, 0x800
        ctx->r15 = ctx->r2 & 0X800;
            goto L_8007132C;
    }
    // 0x800712CC: andi        $t7, $v0, 0x800
    ctx->r15 = ctx->r2 & 0X800;
    // 0x800712D0: beq         $t7, $zero, L_800712F4
    if (ctx->r15 == 0) {
        // 0x800712D4: andi        $t6, $v0, 0x400
        ctx->r14 = ctx->r2 & 0X400;
            goto L_800712F4;
    }
    // 0x800712D4: andi        $t6, $v0, 0x400
    ctx->r14 = ctx->r2 & 0X400;
    // 0x800712D8: jal         0x80019164
    // 0x800712DC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80019164(rdram, ctx);
        goto after_6;
    // 0x800712DC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_6:
    // 0x800712E0: lw          $t8, 0x24($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X24);
    // 0x800712E4: nop

    // 0x800712E8: and         $v0, $t8, $s2
    ctx->r2 = ctx->r24 & ctx->r18;
    // 0x800712EC: sw          $v0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r2;
    // 0x800712F0: andi        $t6, $v0, 0x400
    ctx->r14 = ctx->r2 & 0X400;
L_800712F4:
    // 0x800712F4: beq         $t6, $zero, L_80071318
    if (ctx->r14 == 0) {
        // 0x800712F8: nop
    
            goto L_80071318;
    }
    // 0x800712F8: nop

    // 0x800712FC: lw          $a0, 0x74($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X74);
    // 0x80071300: jal         0x8001913C
    // 0x80071304: addiu       $a1, $s1, 0xC
    ctx->r5 = ADD32(ctx->r17, 0XC);
    func_8001913C(rdram, ctx);
        goto after_7;
    // 0x80071304: addiu       $a1, $s1, 0xC
    ctx->r5 = ADD32(ctx->r17, 0XC);
    after_7:
    // 0x80071308: lw          $t7, 0x24($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X24);
    // 0x8007130C: nop

    // 0x80071310: and         $t8, $t7, $s3
    ctx->r24 = ctx->r15 & ctx->r19;
    // 0x80071314: sw          $t8, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r24;
L_80071318:
    // 0x80071318: jal         0x80007AB0
    // 0x8007131C: nop

    func_80007AB0(rdram, ctx);
        goto after_8;
    // 0x8007131C: nop

    after_8:
    // 0x80071320: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80071324: bne         $s0, $s4, L_800712BC
    if (ctx->r16 != ctx->r20) {
        // 0x80071328: nop
    
            goto L_800712BC;
    }
    // 0x80071328: nop

L_8007132C:
    // 0x8007132C: addiu       $s0, $sp, 0x74
    ctx->r16 = ADD32(ctx->r29, 0X74);
    // 0x80071330: addiu       $s3, $s0, 0x4
    ctx->r19 = ADD32(ctx->r16, 0X4);
L_80071334:
    // 0x80071334: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80071338: jal         0x8001C568
    // 0x8007133C: nop

    func_8001C568(rdram, ctx);
        goto after_9;
    // 0x8007133C: nop

    after_9:
    // 0x80071340: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80071344: sltu        $at, $s0, $s3
    ctx->r1 = ctx->r16 < ctx->r19 ? 1 : 0;
    // 0x80071348: bne         $at, $zero, L_80071334
    if (ctx->r1 != 0) {
        // 0x8007134C: nop
    
            goto L_80071334;
    }
    // 0x8007134C: nop

    // 0x80071350: jal         0x8005CD50
    // 0x80071354: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8005CD50(rdram, ctx);
        goto after_10;
    // 0x80071354: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_10:
    // 0x80071358: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8007135C: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x80071360: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80071364: nop

    // 0x80071368: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8007136C: jal         0x80007AE0
    // 0x80071370: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    func_80007AE0(rdram, ctx);
        goto after_11;
    // 0x80071370: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    after_11:
    // 0x80071374: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80071378: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8007137C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80071380: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80071384: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80071388: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8007138C: jr          $ra
    // 0x80071390: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x80071390: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_80071394(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80071394: addiu       $sp, $sp, -0x118
    ctx->r29 = ADD32(ctx->r29, -0X118);
    // 0x80071398: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x8007139C: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x800713A0: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x800713A4: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x800713A8: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x800713AC: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x800713B0: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x800713B4: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x800713B8: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x800713BC: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x800713C0: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x800713C4: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x800713C8: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800713CC: jal         0x80007774
    // 0x800713D0: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x800713D0: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x800713D4: lw          $fp, 0x1C($v0)
    ctx->r30 = MEM_W(ctx->r2, 0X1C);
    // 0x800713D8: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x800713DC: sw          $zero, 0x100($sp)
    MEM_W(0X100, ctx->r29) = 0;
    // 0x800713E0: addiu       $t6, $t6, 0x2680
    ctx->r14 = ADD32(ctx->r14, 0X2680);
    // 0x800713E4: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x800713E8: addiu       $s6, $sp, 0xE0
    ctx->r22 = ADD32(ctx->r29, 0XE0);
    // 0x800713EC: sw          $at, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r1;
    // 0x800713F0: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x800713F4: addiu       $a0, $zero, 0x1ED
    ctx->r4 = ADD32(0, 0X1ED);
    // 0x800713F8: sw          $t9, 0x4($s6)
    MEM_W(0X4, ctx->r22) = ctx->r25;
    // 0x800713FC: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x80071400: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80071404: sw          $at, 0x8($s6)
    MEM_W(0X8, ctx->r22) = ctx->r1;
    // 0x80071408: lwc1        $f4, 0x0($fp)
    ctx->f4.u32l = MEM_W(ctx->r30, 0X0);
    // 0x8007140C: lui         $at, 0x4361
    ctx->r1 = S32(0X4361 << 16);
    // 0x80071410: swc1        $f4, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f4.u32l;
    // 0x80071414: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80071418: lwc1        $f6, 0x4($fp)
    ctx->f6.u32l = MEM_W(ctx->r30, 0X4);
    // 0x8007141C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80071420: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80071424: swc1        $f10, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f10.u32l;
    // 0x80071428: lwc1        $f4, 0x8($fp)
    ctx->f4.u32l = MEM_W(ctx->r30, 0X8);
    // 0x8007142C: jal         0x8001D138
    // 0x80071430: swc1        $f4, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f4.u32l;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x80071430: swc1        $f4, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x80071434: addiu       $s5, $sp, 0xEC
    ctx->r21 = ADD32(ctx->r29, 0XEC);
    // 0x80071438: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x8007143C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80071440: jal         0x80019164
    // 0x80071444: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x80071444: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x80071448: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8007144C: addiu       $a1, $zero, 0x78E
    ctx->r5 = ADD32(0, 0X78E);
    // 0x80071450: jal         0x8001C468
    // 0x80071454: sw          $s0, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->r16;
    func_8001C468(rdram, ctx);
        goto after_3;
    // 0x80071454: sw          $s0, 0x104($sp)
    MEM_W(0X104, ctx->r29) = ctx->r16;
    after_3:
    // 0x80071458: lw          $a0, 0x104($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X104);
    // 0x8007145C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80071460: jal         0x800192E8
    // 0x80071464: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800192E8(rdram, ctx);
        goto after_4;
    // 0x80071464: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x80071468: addiu       $a0, $zero, 0x78D
    ctx->r4 = ADD32(0, 0X78D);
    // 0x8007146C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80071470: jal         0x8001D138
    // 0x80071474: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_5;
    // 0x80071474: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x80071478: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8007147C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80071480: jal         0x80019164
    // 0x80071484: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    func_80019164(rdram, ctx);
        goto after_6;
    // 0x80071484: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_6:
    // 0x80071488: sw          $s0, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r16;
    // 0x8007148C: addiu       $a0, $zero, 0x78D
    ctx->r4 = ADD32(0, 0X78D);
    // 0x80071490: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80071494: jal         0x8001D138
    // 0x80071498: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_7;
    // 0x80071498: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x8007149C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800714A0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800714A4: jal         0x80019164
    // 0x800714A8: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    func_80019164(rdram, ctx);
        goto after_8;
    // 0x800714A8: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_8:
    // 0x800714AC: lw          $a0, 0x108($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X108);
    // 0x800714B0: sw          $s0, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->r16;
    // 0x800714B4: jal         0x8001C468
    // 0x800714B8: addiu       $a1, $zero, 0x78D
    ctx->r5 = ADD32(0, 0X78D);
    func_8001C468(rdram, ctx);
        goto after_9;
    // 0x800714B8: addiu       $a1, $zero, 0x78D
    ctx->r5 = ADD32(0, 0X78D);
    after_9:
    // 0x800714BC: lw          $a0, 0x108($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X108);
    // 0x800714C0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800714C4: jal         0x800192E8
    // 0x800714C8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800192E8(rdram, ctx);
        goto after_10;
    // 0x800714C8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_10:
    // 0x800714CC: lw          $a0, 0x104($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X104);
    // 0x800714D0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800714D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800714D8: jal         0x80018658
    // 0x800714DC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_80018658(rdram, ctx);
        goto after_11;
    // 0x800714DC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_11:
    // 0x800714E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800714E4: jal         0x80018604
    // 0x800714E8: addiu       $a1, $zero, 0xCC
    ctx->r5 = ADD32(0, 0XCC);
    func_80018604(rdram, ctx);
        goto after_12;
    // 0x800714E8: addiu       $a1, $zero, 0xCC
    ctx->r5 = ADD32(0, 0XCC);
    after_12:
    // 0x800714EC: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x800714F0: addiu       $s0, $sp, 0x104
    ctx->r16 = ADD32(ctx->r29, 0X104);
    // 0x800714F4: addiu       $s2, $sp, 0x110
    ctx->r18 = ADD32(ctx->r29, 0X110);
    // 0x800714F8: addiu       $s1, $sp, 0x84
    ctx->r17 = ADD32(ctx->r29, 0X84);
L_800714FC:
    // 0x800714FC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80071500: swc1        $f20, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f20.u32l;
    // 0x80071504: swc1        $f20, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f20.u32l;
    // 0x80071508: swc1        $f20, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f20.u32l;
    // 0x8007150C: jal         0x80019114
    // 0x80071510: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80019114(rdram, ctx);
        goto after_13;
    // 0x80071510: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_13:
    // 0x80071514: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80071518: bne         $s0, $s2, L_800714FC
    if (ctx->r16 != ctx->r18) {
        // 0x8007151C: nop
    
            goto L_800714FC;
    }
    // 0x8007151C: nop

    // 0x80071520: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80071524: addiu       $s1, $sp, 0x110
    ctx->r17 = ADD32(ctx->r29, 0X110);
    // 0x80071528: lwc1        $f23, 0x6590($at)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r1, 0X6590);
    // 0x8007152C: lwc1        $f22, 0x6594($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X6594);
    // 0x80071530: or          $s4, $s1, $zero
    ctx->r20 = ctx->r17 | 0;
    // 0x80071534: or          $s3, $s1, $zero
    ctx->r19 = ctx->r17 | 0;
    // 0x80071538: addiu       $s2, $sp, 0x6C
    ctx->r18 = ADD32(ctx->r29, 0X6C);
L_8007153C:
    // 0x8007153C: lw          $v0, 0x24($fp)
    ctx->r2 = MEM_W(ctx->r30, 0X24);
    // 0x80071540: lui         $at, 0x4361
    ctx->r1 = S32(0X4361 << 16);
    // 0x80071544: andi        $t7, $v0, 0x4000
    ctx->r15 = ctx->r2 & 0X4000;
    // 0x80071548: bne         $t7, $zero, L_80071674
    if (ctx->r15 != 0) {
        // 0x8007154C: andi        $t6, $v0, 0x800
        ctx->r14 = ctx->r2 & 0X800;
            goto L_80071674;
    }
    // 0x8007154C: andi        $t6, $v0, 0x800
    ctx->r14 = ctx->r2 & 0X800;
    // 0x80071550: beq         $t6, $zero, L_800715AC
    if (ctx->r14 == 0) {
        // 0x80071554: lw          $t7, 0x100($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X100);
            goto L_800715AC;
    }
    // 0x80071554: lw          $t7, 0x100($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X100);
    // 0x80071558: lwc1        $f6, 0x0($fp)
    ctx->f6.u32l = MEM_W(ctx->r30, 0X0);
    // 0x8007155C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80071560: swc1        $f6, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->f6.u32l;
    // 0x80071564: lwc1        $f8, 0x4($fp)
    ctx->f8.u32l = MEM_W(ctx->r30, 0X4);
    // 0x80071568: addiu       $s0, $sp, 0x104
    ctx->r16 = ADD32(ctx->r29, 0X104);
    // 0x8007156C: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80071570: swc1        $f4, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->f4.u32l;
    // 0x80071574: lwc1        $f6, 0x8($fp)
    ctx->f6.u32l = MEM_W(ctx->r30, 0X8);
    // 0x80071578: nop

    // 0x8007157C: swc1        $f6, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->f6.u32l;
L_80071580:
    // 0x80071580: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80071584: jal         0x80019164
    // 0x80071588: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    func_80019164(rdram, ctx);
        goto after_14;
    // 0x80071588: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_14:
    // 0x8007158C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80071590: bne         $s0, $s1, L_80071580
    if (ctx->r16 != ctx->r17) {
        // 0x80071594: nop
    
            goto L_80071580;
    }
    // 0x80071594: nop

    // 0x80071598: lw          $t9, 0x24($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X24);
    // 0x8007159C: addiu       $at, $zero, -0x801
    ctx->r1 = ADD32(0, -0X801);
    // 0x800715A0: and         $t8, $t9, $at
    ctx->r24 = ctx->r25 & ctx->r1;
    // 0x800715A4: sw          $t8, 0x24($fp)
    MEM_W(0X24, ctx->r30) = ctx->r24;
    // 0x800715A8: lw          $t7, 0x100($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X100);
L_800715AC:
    // 0x800715AC: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x800715B0: bne         $t7, $at, L_800715D8
    if (ctx->r15 != ctx->r1) {
        // 0x800715B4: lw          $t6, 0x100($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X100);
            goto L_800715D8;
    }
    // 0x800715B4: lw          $t6, 0x100($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X100);
    // 0x800715B8: lw          $a0, 0x10C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X10C);
    // 0x800715BC: jal         0x8001C468
    // 0x800715C0: addiu       $a1, $zero, 0x78D
    ctx->r5 = ADD32(0, 0X78D);
    func_8001C468(rdram, ctx);
        goto after_15;
    // 0x800715C0: addiu       $a1, $zero, 0x78D
    ctx->r5 = ADD32(0, 0X78D);
    after_15:
    // 0x800715C4: lw          $a0, 0x10C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X10C);
    // 0x800715C8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800715CC: jal         0x800192E8
    // 0x800715D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800192E8(rdram, ctx);
        goto after_16;
    // 0x800715D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_16:
    // 0x800715D4: lw          $t6, 0x100($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X100);
L_800715D8:
    // 0x800715D8: nop

    // 0x800715DC: slti        $at, $t6, 0x5A
    ctx->r1 = SIGNED(ctx->r14) < 0X5A ? 1 : 0;
    // 0x800715E0: beq         $at, $zero, L_8007162C
    if (ctx->r1 == 0) {
        // 0x800715E4: addiu       $t9, $t6, 0x1
        ctx->r25 = ADD32(ctx->r14, 0X1);
            goto L_8007162C;
    }
    // 0x800715E4: addiu       $t9, $t6, 0x1
    ctx->r25 = ADD32(ctx->r14, 0X1);
    // 0x800715E8: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800715EC: jal         0x80028C2C
    // 0x800715F0: cvt.s.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
    func_80028C2C(rdram, ctx);
        goto after_17;
    // 0x800715F0: cvt.s.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
    after_17:
    // 0x800715F4: lui         $at, 0x4090
    ctx->r1 = S32(0X4090 << 16);
    // 0x800715F8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800715FC: addiu       $s0, $sp, 0x104
    ctx->r16 = ADD32(ctx->r29, 0X104);
    // 0x80071600: mul.s       $f20, $f0, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f20.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x80071604: nop

L_80071608:
    // 0x80071608: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8007160C: swc1        $f20, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f20.u32l;
    // 0x80071610: swc1        $f20, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f20.u32l;
    // 0x80071614: swc1        $f20, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f20.u32l;
    // 0x80071618: jal         0x80019114
    // 0x8007161C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_80019114(rdram, ctx);
        goto after_18;
    // 0x8007161C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_18:
    // 0x80071620: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80071624: bne         $s0, $s3, L_80071608
    if (ctx->r16 != ctx->r19) {
        // 0x80071628: nop
    
            goto L_80071608;
    }
    // 0x80071628: nop

L_8007162C:
    // 0x8007162C: lwc1        $f4, 0xE4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XE4);
    // 0x80071630: lw          $s7, 0x100($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X100);
    // 0x80071634: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80071638: add.d       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f22.d); 
    ctx->f8.d = ctx->f6.d + ctx->f22.d;
    // 0x8007163C: addiu       $s0, $sp, 0x104
    ctx->r16 = ADD32(ctx->r29, 0X104);
    // 0x80071640: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x80071644: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x80071648: swc1        $f10, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->f10.u32l;
L_8007164C:
    // 0x8007164C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80071650: jal         0x8001913C
    // 0x80071654: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    func_8001913C(rdram, ctx);
        goto after_19;
    // 0x80071654: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    after_19:
    // 0x80071658: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8007165C: bne         $s0, $s4, L_8007164C
    if (ctx->r16 != ctx->r20) {
        // 0x80071660: nop
    
            goto L_8007164C;
    }
    // 0x80071660: nop

    // 0x80071664: jal         0x80007AB0
    // 0x80071668: nop

    func_80007AB0(rdram, ctx);
        goto after_20;
    // 0x80071668: nop

    after_20:
    // 0x8007166C: b           L_8007153C
    // 0x80071670: sw          $s7, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->r23;
        goto L_8007153C;
    // 0x80071670: sw          $s7, 0x100($sp)
    MEM_W(0X100, ctx->r29) = ctx->r23;
L_80071674:
    // 0x80071674: addiu       $s0, $sp, 0x104
    ctx->r16 = ADD32(ctx->r29, 0X104);
    // 0x80071678: addiu       $s2, $s0, 0xC
    ctx->r18 = ADD32(ctx->r16, 0XC);
L_8007167C:
    // 0x8007167C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80071680: jal         0x8001C568
    // 0x80071684: nop

    func_8001C568(rdram, ctx);
        goto after_21;
    // 0x80071684: nop

    after_21:
    // 0x80071688: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8007168C: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x80071690: bne         $at, $zero, L_8007167C
    if (ctx->r1 != 0) {
        // 0x80071694: nop
    
            goto L_8007167C;
    }
    // 0x80071694: nop

    // 0x80071698: jal         0x8005CD50
    // 0x8007169C: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    func_8005CD50(rdram, ctx);
        goto after_22;
    // 0x8007169C: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    after_22:
    // 0x800716A0: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x800716A4: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x800716A8: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x800716AC: nop

    // 0x800716B0: addiu       $t6, $t7, -0x1
    ctx->r14 = ADD32(ctx->r15, -0X1);
    // 0x800716B4: jal         0x80007AE0
    // 0x800716B8: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    func_80007AE0(rdram, ctx);
        goto after_23;
    // 0x800716B8: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    after_23:
    // 0x800716BC: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x800716C0: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800716C4: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800716C8: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x800716CC: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800716D0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x800716D4: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x800716D8: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x800716DC: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x800716E0: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x800716E4: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x800716E8: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x800716EC: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x800716F0: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x800716F4: jr          $ra
    // 0x800716F8: addiu       $sp, $sp, 0x118
    ctx->r29 = ADD32(ctx->r29, 0X118);
    return;
    // 0x800716F8: addiu       $sp, $sp, 0x118
    ctx->r29 = ADD32(ctx->r29, 0X118);
;}
RECOMP_FUNC void func_800716FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800716FC: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x80071700: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80071704: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x80071708: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x8007170C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80071710: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x80071714: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80071718: jal         0x80007774
    // 0x8007171C: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x8007171C: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x80071720: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80071724: addiu       $t6, $t6, 0x268C
    ctx->r14 = ADD32(ctx->r14, 0X268C);
    // 0x80071728: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x8007172C: addiu       $s3, $sp, 0x78
    ctx->r19 = ADD32(ctx->r29, 0X78);
    // 0x80071730: lw          $s1, 0x1C($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X1C);
    // 0x80071734: sw          $at, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r1;
    // 0x80071738: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x8007173C: addiu       $a0, $zero, 0x1D6
    ctx->r4 = ADD32(0, 0X1D6);
    // 0x80071740: sw          $t9, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r25;
    // 0x80071744: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x80071748: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8007174C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80071750: jal         0x8001D138
    // 0x80071754: sw          $at, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r1;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x80071754: sw          $at, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r1;
    after_1:
    // 0x80071758: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8007175C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80071760: jal         0x80019164
    // 0x80071764: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x80071764: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_2:
    // 0x80071768: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x8007176C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80071770: sw          $s0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r16;
    // 0x80071774: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80071778: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    // 0x8007177C: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    // 0x80071780: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
    // 0x80071784: jal         0x80019114
    // 0x80071788: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
    func_80019114(rdram, ctx);
        goto after_3;
    // 0x80071788: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
    after_3:
    // 0x8007178C: lw          $a0, 0x84($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X84);
    // 0x80071790: jal         0x8001913C
    // 0x80071794: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_8001913C(rdram, ctx);
        goto after_4;
    // 0x80071794: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_4:
    // 0x80071798: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8007179C: lwc1        $f21, 0x6598($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X6598);
    // 0x800717A0: lwc1        $f20, 0x659C($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X659C);
    // 0x800717A4: addiu       $s2, $zero, -0x401
    ctx->r18 = ADD32(0, -0X401);
    // 0x800717A8: addiu       $s0, $zero, -0x801
    ctx->r16 = ADD32(0, -0X801);
    // 0x800717AC: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
L_800717B0:
    // 0x800717B0: lw          $a0, 0x84($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X84);
    // 0x800717B4: andi        $t8, $v0, 0x4000
    ctx->r24 = ctx->r2 & 0X4000;
    // 0x800717B8: bne         $t8, $zero, L_80071848
    if (ctx->r24 != 0) {
        // 0x800717BC: andi        $t7, $v0, 0x800
        ctx->r15 = ctx->r2 & 0X800;
            goto L_80071848;
    }
    // 0x800717BC: andi        $t7, $v0, 0x800
    ctx->r15 = ctx->r2 & 0X800;
    // 0x800717C0: beq         $t7, $zero, L_800717E4
    if (ctx->r15 == 0) {
        // 0x800717C4: andi        $t8, $v0, 0x400
        ctx->r24 = ctx->r2 & 0X400;
            goto L_800717E4;
    }
    // 0x800717C4: andi        $t8, $v0, 0x400
    ctx->r24 = ctx->r2 & 0X400;
    // 0x800717C8: jal         0x80019164
    // 0x800717CC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80019164(rdram, ctx);
        goto after_5;
    // 0x800717CC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_5:
    // 0x800717D0: lw          $t6, 0x24($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X24);
    // 0x800717D4: nop

    // 0x800717D8: and         $v0, $t6, $s0
    ctx->r2 = ctx->r14 & ctx->r16;
    // 0x800717DC: sw          $v0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r2;
    // 0x800717E0: andi        $t8, $v0, 0x400
    ctx->r24 = ctx->r2 & 0X400;
L_800717E4:
    // 0x800717E4: beq         $t8, $zero, L_80071830
    if (ctx->r24 == 0) {
        // 0x800717E8: lw          $a0, 0x84($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X84);
            goto L_80071830;
    }
    // 0x800717E8: lw          $a0, 0x84($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X84);
    // 0x800717EC: lwc1        $f4, 0xC($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0XC);
    // 0x800717F0: nop

    // 0x800717F4: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x800717F8: add.d       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f20.d); 
    ctx->f8.d = ctx->f6.d + ctx->f20.d;
    // 0x800717FC: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x80071800: swc1        $f10, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f10.u32l;
    // 0x80071804: lwc1        $f4, 0x10($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X10);
    // 0x80071808: nop

    // 0x8007180C: swc1        $f4, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f4.u32l;
    // 0x80071810: lwc1        $f6, 0x14($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X14);
    // 0x80071814: nop

    // 0x80071818: swc1        $f6, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f6.u32l;
    // 0x8007181C: lw          $t7, 0x24($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X24);
    // 0x80071820: nop

    // 0x80071824: and         $t6, $t7, $s2
    ctx->r14 = ctx->r15 & ctx->r18;
    // 0x80071828: sw          $t6, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r14;
    // 0x8007182C: lw          $a0, 0x84($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X84);
L_80071830:
    // 0x80071830: jal         0x8001913C
    // 0x80071834: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_8001913C(rdram, ctx);
        goto after_6;
    // 0x80071834: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_6:
    // 0x80071838: jal         0x80007AB0
    // 0x8007183C: nop

    func_80007AB0(rdram, ctx);
        goto after_7;
    // 0x8007183C: nop

    after_7:
    // 0x80071840: b           L_800717B0
    // 0x80071844: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
        goto L_800717B0;
    // 0x80071844: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
L_80071848:
    // 0x80071848: addiu       $s0, $sp, 0x84
    ctx->r16 = ADD32(ctx->r29, 0X84);
    // 0x8007184C: addiu       $s3, $s0, 0x4
    ctx->r19 = ADD32(ctx->r16, 0X4);
L_80071850:
    // 0x80071850: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80071854: jal         0x8001C568
    // 0x80071858: nop

    func_8001C568(rdram, ctx);
        goto after_8;
    // 0x80071858: nop

    after_8:
    // 0x8007185C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80071860: sltu        $at, $s0, $s3
    ctx->r1 = ctx->r16 < ctx->r19 ? 1 : 0;
    // 0x80071864: bne         $at, $zero, L_80071850
    if (ctx->r1 != 0) {
        // 0x80071868: nop
    
            goto L_80071850;
    }
    // 0x80071868: nop

    // 0x8007186C: jal         0x8005CD50
    // 0x80071870: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8005CD50(rdram, ctx);
        goto after_9;
    // 0x80071870: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_9:
    // 0x80071874: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80071878: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x8007187C: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x80071880: nop

    // 0x80071884: addiu       $t7, $t8, -0x1
    ctx->r15 = ADD32(ctx->r24, -0X1);
    // 0x80071888: jal         0x80007AE0
    // 0x8007188C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    func_80007AE0(rdram, ctx);
        goto after_10;
    // 0x8007188C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    after_10:
    // 0x80071890: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80071894: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x80071898: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8007189C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x800718A0: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x800718A4: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x800718A8: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x800718AC: jr          $ra
    // 0x800718B0: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    return;
    // 0x800718B0: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void func_800718B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800718B4: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x800718B8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800718BC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x800718C0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x800718C4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800718C8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800718CC: jal         0x80007774
    // 0x800718D0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_80007774(rdram, ctx);
        goto after_0;
    // 0x800718D0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x800718D4: lw          $s1, 0x1C($v0)
    ctx->r17 = MEM_W(ctx->r2, 0X1C);
    // 0x800718D8: addiu       $a0, $zero, 0xA38
    ctx->r4 = ADD32(0, 0XA38);
    // 0x800718DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800718E0: jal         0x8001D138
    // 0x800718E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x800718E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800718E8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800718EC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800718F0: jal         0x80019164
    // 0x800718F4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x800718F4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_2:
    // 0x800718F8: sw          $s0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r16;
    // 0x800718FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80071900: jal         0x8001C468
    // 0x80071904: addiu       $a1, $zero, 0xA38
    ctx->r5 = ADD32(0, 0XA38);
    func_8001C468(rdram, ctx);
        goto after_3;
    // 0x80071904: addiu       $a1, $zero, 0xA38
    ctx->r5 = ADD32(0, 0XA38);
    after_3:
    // 0x80071908: lw          $a0, 0x74($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X74);
    // 0x8007190C: jal         0x8001C468
    // 0x80071910: addiu       $a1, $zero, 0xA39
    ctx->r5 = ADD32(0, 0XA39);
    func_8001C468(rdram, ctx);
        goto after_4;
    // 0x80071910: addiu       $a1, $zero, 0xA39
    ctx->r5 = ADD32(0, 0XA39);
    after_4:
    // 0x80071914: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80071918: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8007191C: lw          $a0, 0x74($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X74);
    // 0x80071920: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    // 0x80071924: swc1        $f0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f0.u32l;
    // 0x80071928: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
    // 0x8007192C: jal         0x80019114
    // 0x80071930: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
    func_80019114(rdram, ctx);
        goto after_5;
    // 0x80071930: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
    after_5:
    // 0x80071934: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80071938: addiu       $s4, $zero, 0x10
    ctx->r20 = ADD32(0, 0X10);
    // 0x8007193C: addiu       $s3, $zero, -0x401
    ctx->r19 = ADD32(0, -0X401);
    // 0x80071940: addiu       $s2, $zero, -0x801
    ctx->r18 = ADD32(0, -0X801);
L_80071944:
    // 0x80071944: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x80071948: lw          $a0, 0x74($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X74);
    // 0x8007194C: andi        $t6, $v0, 0x4000
    ctx->r14 = ctx->r2 & 0X4000;
    // 0x80071950: bne         $t6, $zero, L_800719B4
    if (ctx->r14 != 0) {
        // 0x80071954: andi        $t7, $v0, 0x800
        ctx->r15 = ctx->r2 & 0X800;
            goto L_800719B4;
    }
    // 0x80071954: andi        $t7, $v0, 0x800
    ctx->r15 = ctx->r2 & 0X800;
    // 0x80071958: beq         $t7, $zero, L_8007197C
    if (ctx->r15 == 0) {
        // 0x8007195C: andi        $t6, $v0, 0x400
        ctx->r14 = ctx->r2 & 0X400;
            goto L_8007197C;
    }
    // 0x8007195C: andi        $t6, $v0, 0x400
    ctx->r14 = ctx->r2 & 0X400;
    // 0x80071960: jal         0x80019164
    // 0x80071964: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80019164(rdram, ctx);
        goto after_6;
    // 0x80071964: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_6:
    // 0x80071968: lw          $t8, 0x24($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X24);
    // 0x8007196C: nop

    // 0x80071970: and         $v0, $t8, $s2
    ctx->r2 = ctx->r24 & ctx->r18;
    // 0x80071974: sw          $v0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r2;
    // 0x80071978: andi        $t6, $v0, 0x400
    ctx->r14 = ctx->r2 & 0X400;
L_8007197C:
    // 0x8007197C: beq         $t6, $zero, L_800719A0
    if (ctx->r14 == 0) {
        // 0x80071980: nop
    
            goto L_800719A0;
    }
    // 0x80071980: nop

    // 0x80071984: lw          $a0, 0x74($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X74);
    // 0x80071988: jal         0x8001913C
    // 0x8007198C: addiu       $a1, $s1, 0xC
    ctx->r5 = ADD32(ctx->r17, 0XC);
    func_8001913C(rdram, ctx);
        goto after_7;
    // 0x8007198C: addiu       $a1, $s1, 0xC
    ctx->r5 = ADD32(ctx->r17, 0XC);
    after_7:
    // 0x80071990: lw          $t7, 0x24($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X24);
    // 0x80071994: nop

    // 0x80071998: and         $t8, $t7, $s3
    ctx->r24 = ctx->r15 & ctx->r19;
    // 0x8007199C: sw          $t8, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r24;
L_800719A0:
    // 0x800719A0: jal         0x80007AB0
    // 0x800719A4: nop

    func_80007AB0(rdram, ctx);
        goto after_8;
    // 0x800719A4: nop

    after_8:
    // 0x800719A8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800719AC: bne         $s0, $s4, L_80071944
    if (ctx->r16 != ctx->r20) {
        // 0x800719B0: nop
    
            goto L_80071944;
    }
    // 0x800719B0: nop

L_800719B4:
    // 0x800719B4: addiu       $s0, $sp, 0x74
    ctx->r16 = ADD32(ctx->r29, 0X74);
    // 0x800719B8: addiu       $s3, $s0, 0x4
    ctx->r19 = ADD32(ctx->r16, 0X4);
L_800719BC:
    // 0x800719BC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x800719C0: jal         0x8001C568
    // 0x800719C4: nop

    func_8001C568(rdram, ctx);
        goto after_9;
    // 0x800719C4: nop

    after_9:
    // 0x800719C8: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x800719CC: sltu        $at, $s0, $s3
    ctx->r1 = ctx->r16 < ctx->r19 ? 1 : 0;
    // 0x800719D0: bne         $at, $zero, L_800719BC
    if (ctx->r1 != 0) {
        // 0x800719D4: nop
    
            goto L_800719BC;
    }
    // 0x800719D4: nop

    // 0x800719D8: jal         0x8005CD50
    // 0x800719DC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8005CD50(rdram, ctx);
        goto after_10;
    // 0x800719DC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_10:
    // 0x800719E0: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x800719E4: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x800719E8: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x800719EC: nop

    // 0x800719F0: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x800719F4: jal         0x80007AE0
    // 0x800719F8: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    func_80007AE0(rdram, ctx);
        goto after_11;
    // 0x800719F8: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    after_11:
    // 0x800719FC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80071A00: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80071A04: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80071A08: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80071A0C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80071A10: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80071A14: jr          $ra
    // 0x80071A18: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x80071A18: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_80071A1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80071A1C: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x80071A20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80071A24: jal         0x80007774
    // 0x80071A28: nop

    func_80007774(rdram, ctx);
        goto after_0;
    // 0x80071A28: nop

    after_0:
    // 0x80071A2C: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80071A30: addiu       $t6, $t6, 0x2698
    ctx->r14 = ADD32(ctx->r14, 0X2698);
    // 0x80071A34: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x80071A38: addiu       $s7, $sp, 0x74
    ctx->r23 = ADD32(ctx->r29, 0X74);
    // 0x80071A3C: lw          $fp, 0x1C($v0)
    ctx->r30 = MEM_W(ctx->r2, 0X1C);
    // 0x80071A40: sw          $at, 0x0($s7)
    MEM_W(0X0, ctx->r23) = ctx->r1;
    // 0x80071A44: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x80071A48: addiu       $a0, $zero, 0x7B6
    ctx->r4 = ADD32(0, 0X7B6);
    // 0x80071A4C: sw          $t9, 0x4($s7)
    MEM_W(0X4, ctx->r23) = ctx->r25;
    // 0x80071A50: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x80071A54: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80071A58: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80071A5C: jal         0x8001D138
    // 0x80071A60: sw          $at, 0x8($s7)
    MEM_W(0X8, ctx->r23) = ctx->r1;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x80071A60: sw          $at, 0x8($s7)
    MEM_W(0X8, ctx->r23) = ctx->r1;
    after_1:
    // 0x80071A64: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80071A68: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80071A6C: jal         0x80019164
    // 0x80071A70: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x80071A70: or          $a1, $fp, $zero
    ctx->r5 = ctx->r30 | 0;
    after_2:
    // 0x80071A74: sw          $s0, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r16;
    // 0x80071A78: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
    // 0x80071A7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80071A80: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80071A84: jal         0x80018658
    // 0x80071A88: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80018658(rdram, ctx);
        goto after_3;
    // 0x80071A88: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x80071A8C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80071A90: jal         0x80018604
    // 0x80071A94: addiu       $a1, $zero, 0xC0
    ctx->r5 = ADD32(0, 0XC0);
    func_80018604(rdram, ctx);
        goto after_4;
    // 0x80071A94: addiu       $a1, $zero, 0xC0
    ctx->r5 = ADD32(0, 0XC0);
    after_4:
    // 0x80071A98: lw          $a0, 0x84($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X84);
    // 0x80071A9C: jal         0x80019114
    // 0x80071AA0: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    func_80019114(rdram, ctx);
        goto after_5;
    // 0x80071AA0: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    after_5:
    // 0x80071AA4: lw          $a0, 0x84($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X84);
    // 0x80071AA8: jal         0x8001C468
    // 0x80071AAC: addiu       $a1, $zero, 0x7EA
    ctx->r5 = ADD32(0, 0X7EA);
    func_8001C468(rdram, ctx);
        goto after_6;
    // 0x80071AAC: addiu       $a1, $zero, 0x7EA
    ctx->r5 = ADD32(0, 0X7EA);
    after_6:
    // 0x80071AB0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80071AB4: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x80071AB8: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80071ABC: lwc1        $f28, 0x65A0($at)
    ctx->f28.u32l = MEM_W(ctx->r1, 0X65A0);
    // 0x80071AC0: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80071AC4: lwc1        $f26, 0x65A4($at)
    ctx->f26.u32l = MEM_W(ctx->r1, 0X65A4);
    // 0x80071AC8: lui         $at, 0x40F0
    ctx->r1 = S32(0X40F0 << 16);
    // 0x80071ACC: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x80071AD0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80071AD4: addiu       $s6, $zero, 0xC
    ctx->r22 = ADD32(0, 0XC);
    // 0x80071AD8: addiu       $s5, $zero, 0xB
    ctx->r21 = ADD32(0, 0XB);
    // 0x80071ADC: addiu       $s4, $zero, 0x6
    ctx->r20 = ADD32(0, 0X6);
L_80071AE0:
    // 0x80071AE0: lw          $t8, 0x24($fp)
    ctx->r24 = MEM_W(ctx->r30, 0X24);
    // 0x80071AE4: nop

    // 0x80071AE8: andi        $t7, $t8, 0x4000
    ctx->r15 = ctx->r24 & 0X4000;
    // 0x80071AEC: bne         $t7, $zero, L_80071BD0
    if (ctx->r15 != 0) {
        // 0x80071AF0: nop
    
            goto L_80071BD0;
    }
    // 0x80071AF0: nop

    // 0x80071AF4: addiu       $s3, $s0, 0x1
    ctx->r19 = ADD32(ctx->r16, 0X1);
    // 0x80071AF8: mtc1        $s3, $f4
    ctx->f4.u32l = ctx->r19;
    // 0x80071AFC: lw          $t6, 0x90($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X90);
    // 0x80071B00: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80071B04: addiu       $t9, $t6, 0x1
    ctx->r25 = ADD32(ctx->r14, 0X1);
    // 0x80071B08: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80071B0C: mul.s       $f20, $f6, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f20.fl = MUL_S(ctx->f6.fl, ctx->f24.fl);
    // 0x80071B10: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x80071B14: jal         0x80028C00
    // 0x80071B18: cvt.s.w     $f22, $f8
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    ctx->f22.fl = CVT_S_W(ctx->f8.u32l);
    func_80028C00(rdram, ctx);
        goto after_7;
    // 0x80071B18: cvt.s.w     $f22, $f8
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    ctx->f22.fl = CVT_S_W(ctx->f8.u32l);
    after_7:
    // 0x80071B1C: mul.s       $f10, $f0, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f26.fl);
    // 0x80071B20: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x80071B24: add.s       $f4, $f10, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f28.fl;
    // 0x80071B28: mul.s       $f2, $f4, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f2.fl = MUL_S(ctx->f4.fl, ctx->f22.fl);
    // 0x80071B2C: swc1        $f2, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f2.u32l;
    // 0x80071B30: jal         0x80028C2C
    // 0x80071B34: swc1        $f2, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f2.u32l;
    func_80028C2C(rdram, ctx);
        goto after_8;
    // 0x80071B34: swc1        $f2, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f2.u32l;
    after_8:
    // 0x80071B38: add.s       $f6, $f0, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x80071B3C: lw          $a0, 0x84($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X84);
    // 0x80071B40: add.s       $f8, $f6, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f30.fl;
    // 0x80071B44: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x80071B48: mul.s       $f10, $f8, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f22.fl);
    // 0x80071B4C: jal         0x80019114
    // 0x80071B50: swc1        $f10, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f10.u32l;
    func_80019114(rdram, ctx);
        goto after_9;
    // 0x80071B50: swc1        $f10, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f10.u32l;
    after_9:
    // 0x80071B54: slti        $at, $s0, 0x7
    ctx->r1 = SIGNED(ctx->r16) < 0X7 ? 1 : 0;
    // 0x80071B58: bne         $at, $zero, L_80071BC0
    if (ctx->r1 != 0) {
        // 0x80071B5C: subu        $v0, $s5, $s0
        ctx->r2 = SUB32(ctx->r21, ctx->r16);
            goto L_80071BC0;
    }
    // 0x80071B5C: subu        $v0, $s5, $s0
    ctx->r2 = SUB32(ctx->r21, ctx->r16);
    // 0x80071B60: sll         $s2, $v0, 2
    ctx->r18 = S32(ctx->r2 << 2);
    // 0x80071B64: subu        $s2, $s2, $v0
    ctx->r18 = SUB32(ctx->r18, ctx->r2);
    // 0x80071B68: lw          $s1, 0x84($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X84);
    // 0x80071B6C: bne         $s4, $v0, L_80071B84
    if (ctx->r20 != ctx->r2) {
        // 0x80071B70: sll         $s2, $s2, 6
        ctx->r18 = S32(ctx->r18 << 6);
            goto L_80071B84;
    }
    // 0x80071B70: sll         $s2, $s2, 6
    ctx->r18 = S32(ctx->r18 << 6);
    // 0x80071B74: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80071B78: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80071B7C: jal         0x80018658
    // 0x80071B80: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80018658(rdram, ctx);
        goto after_10;
    // 0x80071B80: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_10:
L_80071B84:
    // 0x80071B84: div         $zero, $s2, $s4
    lo = S32(S64(S32(ctx->r18)) / S64(S32(ctx->r20))); hi = S32(S64(S32(ctx->r18)) % S64(S32(ctx->r20)));
    // 0x80071B88: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80071B8C: bne         $s4, $zero, L_80071B98
    if (ctx->r20 != 0) {
        // 0x80071B90: nop
    
            goto L_80071B98;
    }
    // 0x80071B90: nop

    // 0x80071B94: break       7
    do_break(2147949460);
L_80071B98:
    // 0x80071B98: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80071B9C: bne         $s4, $at, L_80071BB0
    if (ctx->r20 != ctx->r1) {
        // 0x80071BA0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80071BB0;
    }
    // 0x80071BA0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80071BA4: bne         $s2, $at, L_80071BB0
    if (ctx->r18 != ctx->r1) {
        // 0x80071BA8: nop
    
            goto L_80071BB0;
    }
    // 0x80071BA8: nop

    // 0x80071BAC: break       6
    do_break(2147949484);
L_80071BB0:
    // 0x80071BB0: mflo        $a1
    ctx->r5 = lo;
    // 0x80071BB4: andi        $t8, $a1, 0xFF
    ctx->r24 = ctx->r5 & 0XFF;
    // 0x80071BB8: jal         0x80018604
    // 0x80071BBC: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    func_80018604(rdram, ctx);
        goto after_11;
    // 0x80071BBC: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    after_11:
L_80071BC0:
    // 0x80071BC0: jal         0x80007AB0
    // 0x80071BC4: nop

    func_80007AB0(rdram, ctx);
        goto after_12;
    // 0x80071BC4: nop

    after_12:
    // 0x80071BC8: bne         $s3, $s6, L_80071AE0
    if (ctx->r19 != ctx->r22) {
        // 0x80071BCC: or          $s0, $s3, $zero
        ctx->r16 = ctx->r19 | 0;
            goto L_80071AE0;
    }
    // 0x80071BCC: or          $s0, $s3, $zero
    ctx->r16 = ctx->r19 | 0;
L_80071BD0:
    // 0x80071BD0: addiu       $s0, $sp, 0x84
    ctx->r16 = ADD32(ctx->r29, 0X84);
    // 0x80071BD4: addiu       $s2, $s0, 0x4
    ctx->r18 = ADD32(ctx->r16, 0X4);
    // 0x80071BD8: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_80071BDC:
    // 0x80071BDC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80071BE0: jal         0x8001C568
    // 0x80071BE4: nop

    func_8001C568(rdram, ctx);
        goto after_13;
    // 0x80071BE4: nop

    after_13:
    // 0x80071BE8: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80071BEC: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x80071BF0: bne         $at, $zero, L_80071BDC
    if (ctx->r1 != 0) {
        // 0x80071BF4: nop
    
            goto L_80071BDC;
    }
    // 0x80071BF4: nop

    // 0x80071BF8: jal         0x8005CD50
    // 0x80071BFC: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    func_8005CD50(rdram, ctx);
        goto after_14;
    // 0x80071BFC: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    after_14:
    // 0x80071C00: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80071C04: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x80071C08: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80071C0C: nop

    // 0x80071C10: addiu       $t9, $t6, -0x1
    ctx->r25 = ADD32(ctx->r14, -0X1);
    // 0x80071C14: jal         0x80007AE0
    // 0x80071C18: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    func_80007AE0(rdram, ctx);
        goto after_15;
    // 0x80071C18: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    after_15:
    // 0x80071C1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80071C20: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    // 0x80071C24: jr          $ra
    // 0x80071C28: nop

    return;
    // 0x80071C28: nop

;}
RECOMP_FUNC void func_80071C2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80071C2C: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x80071C30: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x80071C34: sw          $fp, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r30;
    // 0x80071C38: sw          $s7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r23;
    // 0x80071C3C: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x80071C40: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x80071C44: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x80071C48: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x80071C4C: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x80071C50: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x80071C54: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x80071C58: swc1        $f31, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x80071C5C: swc1        $f30, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f30.u32l;
    // 0x80071C60: swc1        $f29, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x80071C64: swc1        $f28, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f28.u32l;
    // 0x80071C68: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x80071C6C: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x80071C70: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x80071C74: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x80071C78: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80071C7C: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x80071C80: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80071C84: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80071C88: jal         0x80071A1C
    // 0x80071C8C: sw          $zero, 0x0($sp)
    MEM_W(0X0, ctx->r29) = 0;
    func_80071A1C(rdram, ctx);
        goto after_0;
    // 0x80071C8C: sw          $zero, 0x0($sp)
    MEM_W(0X0, ctx->r29) = 0;
    after_0:
    // 0x80071C90: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x80071C94: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80071C98: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80071C9C: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80071CA0: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80071CA4: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x80071CA8: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80071CAC: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x80071CB0: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80071CB4: lwc1        $f29, 0x38($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x80071CB8: lwc1        $f28, 0x3C($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80071CBC: lwc1        $f31, 0x40($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x80071CC0: lwc1        $f30, 0x44($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80071CC4: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x80071CC8: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x80071CCC: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x80071CD0: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x80071CD4: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x80071CD8: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x80071CDC: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x80071CE0: lw          $s7, 0x64($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X64);
    // 0x80071CE4: lw          $fp, 0x68($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X68);
    // 0x80071CE8: jr          $ra
    // 0x80071CEC: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x80071CEC: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_80071CF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80071CF0: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x80071CF4: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x80071CF8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80071CFC: sw          $fp, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r30;
    // 0x80071D00: sw          $s7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r23;
    // 0x80071D04: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x80071D08: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x80071D0C: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x80071D10: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x80071D14: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x80071D18: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x80071D1C: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x80071D20: swc1        $f31, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x80071D24: swc1        $f30, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f30.u32l;
    // 0x80071D28: swc1        $f29, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x80071D2C: swc1        $f28, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f28.u32l;
    // 0x80071D30: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x80071D34: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x80071D38: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x80071D3C: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x80071D40: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80071D44: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x80071D48: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80071D4C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80071D50: jal         0x80071A1C
    // 0x80071D54: sw          $t6, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r14;
    func_80071A1C(rdram, ctx);
        goto after_0;
    // 0x80071D54: sw          $t6, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r14;
    after_0:
    // 0x80071D58: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x80071D5C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80071D60: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80071D64: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80071D68: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80071D6C: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x80071D70: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80071D74: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x80071D78: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80071D7C: lwc1        $f29, 0x38($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x80071D80: lwc1        $f28, 0x3C($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80071D84: lwc1        $f31, 0x40($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x80071D88: lwc1        $f30, 0x44($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80071D8C: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x80071D90: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x80071D94: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x80071D98: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x80071D9C: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x80071DA0: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x80071DA4: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x80071DA8: lw          $s7, 0x64($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X64);
    // 0x80071DAC: lw          $fp, 0x68($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X68);
    // 0x80071DB0: jr          $ra
    // 0x80071DB4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x80071DB4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_80071DB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80071DB8: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x80071DBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80071DC0: jal         0x80007774
    // 0x80071DC4: nop

    func_80007774(rdram, ctx);
        goto after_0;
    // 0x80071DC4: nop

    after_0:
    // 0x80071DC8: lw          $t6, 0x1C($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X1C);
    // 0x80071DCC: addiu       $a0, $zero, 0x79B
    ctx->r4 = ADD32(0, 0X79B);
    // 0x80071DD0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80071DD4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80071DD8: jal         0x8001D138
    // 0x80071DDC: sw          $t6, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r14;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x80071DDC: sw          $t6, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r14;
    after_1:
    // 0x80071DE0: lw          $a1, 0xB0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XB0);
    // 0x80071DE4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80071DE8: jal         0x80019164
    // 0x80071DEC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x80071DEC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x80071DF0: sw          $s0, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r16;
    // 0x80071DF4: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
    // 0x80071DF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80071DFC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80071E00: jal         0x80018658
    // 0x80071E04: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80018658(rdram, ctx);
        goto after_3;
    // 0x80071E04: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x80071E08: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80071E0C: jal         0x80018604
    // 0x80071E10: addiu       $a1, $zero, 0xC0
    ctx->r5 = ADD32(0, 0XC0);
    func_80018604(rdram, ctx);
        goto after_4;
    // 0x80071E10: addiu       $a1, $zero, 0xC0
    ctx->r5 = ADD32(0, 0XC0);
    after_4:
    // 0x80071E14: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80071E18: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x80071E1C: lw          $a0, 0xAC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XAC);
    // 0x80071E20: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    // 0x80071E24: swc1        $f24, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f24.u32l;
    // 0x80071E28: swc1        $f24, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f24.u32l;
    // 0x80071E2C: jal         0x80019114
    // 0x80071E30: swc1        $f24, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f24.u32l;
    func_80019114(rdram, ctx);
        goto after_5;
    // 0x80071E30: swc1        $f24, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f24.u32l;
    after_5:
    // 0x80071E34: lw          $a0, 0xAC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XAC);
    // 0x80071E38: jal         0x8001C468
    // 0x80071E3C: addiu       $a1, $zero, 0x7EA
    ctx->r5 = ADD32(0, 0X7EA);
    func_8001C468(rdram, ctx);
        goto after_6;
    // 0x80071E3C: addiu       $a1, $zero, 0x7EA
    ctx->r5 = ADD32(0, 0X7EA);
    after_6:
    // 0x80071E40: lui         $at, 0x40F0
    ctx->r1 = S32(0X40F0 << 16);
    // 0x80071E44: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x80071E48: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80071E4C: addiu       $s7, $zero, 0xC
    ctx->r23 = ADD32(0, 0XC);
    // 0x80071E50: addiu       $s6, $zero, 0xB
    ctx->r22 = ADD32(0, 0XB);
    // 0x80071E54: addiu       $s5, $sp, 0x54
    ctx->r21 = ADD32(ctx->r29, 0X54);
    // 0x80071E58: addiu       $s4, $zero, 0x6
    ctx->r20 = ADD32(0, 0X6);
L_80071E5C:
    // 0x80071E5C: lw          $t7, 0xB0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XB0);
    // 0x80071E60: nop

    // 0x80071E64: lw          $t8, 0x24($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X24);
    // 0x80071E68: nop

    // 0x80071E6C: andi        $t9, $t8, 0x4000
    ctx->r25 = ctx->r24 & 0X4000;
    // 0x80071E70: bne         $t9, $zero, L_80071F34
    if (ctx->r25 != 0) {
        // 0x80071E74: nop
    
            goto L_80071F34;
    }
    // 0x80071E74: nop

    // 0x80071E78: addiu       $s3, $s0, 0x1
    ctx->r19 = ADD32(ctx->r16, 0X1);
    // 0x80071E7C: mtc1        $s3, $f4
    ctx->f4.u32l = ctx->r19;
    // 0x80071E80: addiu       $t6, $fp, 0x1
    ctx->r14 = ADD32(ctx->r30, 0X1);
    // 0x80071E84: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80071E88: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x80071E8C: mul.s       $f12, $f6, $f22
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f12.fl = MUL_S(ctx->f6.fl, ctx->f22.fl);
    // 0x80071E90: jal         0x80028C2C
    // 0x80071E94: cvt.s.w     $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    ctx->f20.fl = CVT_S_W(ctx->f8.u32l);
    func_80028C2C(rdram, ctx);
        goto after_7;
    // 0x80071E94: cvt.s.w     $f20, $f8
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    ctx->f20.fl = CVT_S_W(ctx->f8.u32l);
    after_7:
    // 0x80071E98: add.s       $f10, $f0, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f24.fl;
    // 0x80071E9C: lw          $a0, 0xAC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XAC);
    // 0x80071EA0: mul.s       $f2, $f10, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x80071EA4: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80071EA8: swc1        $f2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f2.u32l;
    // 0x80071EAC: swc1        $f2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f2.u32l;
    // 0x80071EB0: jal         0x80019114
    // 0x80071EB4: swc1        $f2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f2.u32l;
    func_80019114(rdram, ctx);
        goto after_8;
    // 0x80071EB4: swc1        $f2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f2.u32l;
    after_8:
    // 0x80071EB8: slti        $at, $s0, 0x7
    ctx->r1 = SIGNED(ctx->r16) < 0X7 ? 1 : 0;
    // 0x80071EBC: bne         $at, $zero, L_80071F24
    if (ctx->r1 != 0) {
        // 0x80071EC0: subu        $v0, $s6, $s0
        ctx->r2 = SUB32(ctx->r22, ctx->r16);
            goto L_80071F24;
    }
    // 0x80071EC0: subu        $v0, $s6, $s0
    ctx->r2 = SUB32(ctx->r22, ctx->r16);
    // 0x80071EC4: sll         $s2, $v0, 2
    ctx->r18 = S32(ctx->r2 << 2);
    // 0x80071EC8: subu        $s2, $s2, $v0
    ctx->r18 = SUB32(ctx->r18, ctx->r2);
    // 0x80071ECC: lw          $s1, 0xAC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XAC);
    // 0x80071ED0: bne         $s4, $v0, L_80071EE8
    if (ctx->r20 != ctx->r2) {
        // 0x80071ED4: sll         $s2, $s2, 6
        ctx->r18 = S32(ctx->r18 << 6);
            goto L_80071EE8;
    }
    // 0x80071ED4: sll         $s2, $s2, 6
    ctx->r18 = S32(ctx->r18 << 6);
    // 0x80071ED8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80071EDC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80071EE0: jal         0x80018658
    // 0x80071EE4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80018658(rdram, ctx);
        goto after_9;
    // 0x80071EE4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_9:
L_80071EE8:
    // 0x80071EE8: div         $zero, $s2, $s4
    lo = S32(S64(S32(ctx->r18)) / S64(S32(ctx->r20))); hi = S32(S64(S32(ctx->r18)) % S64(S32(ctx->r20)));
    // 0x80071EEC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80071EF0: bne         $s4, $zero, L_80071EFC
    if (ctx->r20 != 0) {
        // 0x80071EF4: nop
    
            goto L_80071EFC;
    }
    // 0x80071EF4: nop

    // 0x80071EF8: break       7
    do_break(2147950328);
L_80071EFC:
    // 0x80071EFC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80071F00: bne         $s4, $at, L_80071F14
    if (ctx->r20 != ctx->r1) {
        // 0x80071F04: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80071F14;
    }
    // 0x80071F04: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80071F08: bne         $s2, $at, L_80071F14
    if (ctx->r18 != ctx->r1) {
        // 0x80071F0C: nop
    
            goto L_80071F14;
    }
    // 0x80071F0C: nop

    // 0x80071F10: break       6
    do_break(2147950352);
L_80071F14:
    // 0x80071F14: mflo        $a1
    ctx->r5 = lo;
    // 0x80071F18: andi        $t7, $a1, 0xFF
    ctx->r15 = ctx->r5 & 0XFF;
    // 0x80071F1C: jal         0x80018604
    // 0x80071F20: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    func_80018604(rdram, ctx);
        goto after_10;
    // 0x80071F20: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    after_10:
L_80071F24:
    // 0x80071F24: jal         0x80007AB0
    // 0x80071F28: nop

    func_80007AB0(rdram, ctx);
        goto after_11;
    // 0x80071F28: nop

    after_11:
    // 0x80071F2C: bne         $s3, $s7, L_80071E5C
    if (ctx->r19 != ctx->r23) {
        // 0x80071F30: or          $s0, $s3, $zero
        ctx->r16 = ctx->r19 | 0;
            goto L_80071E5C;
    }
    // 0x80071F30: or          $s0, $s3, $zero
    ctx->r16 = ctx->r19 | 0;
L_80071F34:
    // 0x80071F34: addiu       $s0, $sp, 0xAC
    ctx->r16 = ADD32(ctx->r29, 0XAC);
    // 0x80071F38: addiu       $s2, $s0, 0x4
    ctx->r18 = ADD32(ctx->r16, 0X4);
    // 0x80071F3C: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_80071F40:
    // 0x80071F40: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80071F44: jal         0x8001C568
    // 0x80071F48: nop

    func_8001C568(rdram, ctx);
        goto after_12;
    // 0x80071F48: nop

    after_12:
    // 0x80071F4C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80071F50: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x80071F54: bne         $at, $zero, L_80071F40
    if (ctx->r1 != 0) {
        // 0x80071F58: nop
    
            goto L_80071F40;
    }
    // 0x80071F58: nop

    // 0x80071F5C: lw          $a0, 0xB0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XB0);
    // 0x80071F60: jal         0x8005CD50
    // 0x80071F64: nop

    func_8005CD50(rdram, ctx);
        goto after_13;
    // 0x80071F64: nop

    after_13:
    // 0x80071F68: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80071F6C: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x80071F70: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x80071F74: nop

    // 0x80071F78: addiu       $t6, $t9, -0x1
    ctx->r14 = ADD32(ctx->r25, -0X1);
    // 0x80071F7C: jal         0x80007AE0
    // 0x80071F80: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    func_80007AE0(rdram, ctx);
        goto after_14;
    // 0x80071F80: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    after_14:
    // 0x80071F84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80071F88: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    // 0x80071F8C: jr          $ra
    // 0x80071F90: nop

    return;
    // 0x80071F90: nop

;}
RECOMP_FUNC void func_80071F94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80071F94: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80071F98: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x80071F9C: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x80071FA0: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x80071FA4: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x80071FA8: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x80071FAC: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x80071FB0: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x80071FB4: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x80071FB8: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80071FBC: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80071FC0: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x80071FC4: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x80071FC8: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80071FCC: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x80071FD0: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80071FD4: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80071FD8: jal         0x80071DB8
    // 0x80071FDC: or          $fp, $zero, $zero
    ctx->r30 = 0 | 0;
    func_80071DB8(rdram, ctx);
        goto after_0;
    // 0x80071FDC: or          $fp, $zero, $zero
    ctx->r30 = 0 | 0;
    after_0:
    // 0x80071FE0: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x80071FE4: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80071FE8: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80071FEC: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80071FF0: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80071FF4: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x80071FF8: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80071FFC: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80072000: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80072004: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x80072008: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x8007200C: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x80072010: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x80072014: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x80072018: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x8007201C: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x80072020: jr          $ra
    // 0x80072024: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x80072024: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_80072028(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80072028: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8007202C: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x80072030: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x80072034: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x80072038: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x8007203C: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x80072040: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x80072044: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x80072048: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x8007204C: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80072050: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80072054: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x80072058: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x8007205C: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80072060: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x80072064: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80072068: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8007206C: jal         0x80071DB8
    // 0x80072070: addiu       $fp, $zero, 0x1
    ctx->r30 = ADD32(0, 0X1);
    func_80071DB8(rdram, ctx);
        goto after_0;
    // 0x80072070: addiu       $fp, $zero, 0x1
    ctx->r30 = ADD32(0, 0X1);
    after_0:
    // 0x80072074: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x80072078: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8007207C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80072080: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80072084: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80072088: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x8007208C: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80072090: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80072094: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80072098: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x8007209C: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x800720A0: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x800720A4: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x800720A8: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x800720AC: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x800720B0: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x800720B4: jr          $ra
    // 0x800720B8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x800720B8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_800720BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800720BC: addiu       $sp, $sp, -0xE0
    ctx->r29 = ADD32(ctx->r29, -0XE0);
    // 0x800720C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800720C4: jal         0x80007774
    // 0x800720C8: nop

    func_80007774(rdram, ctx);
        goto after_0;
    // 0x800720C8: nop

    after_0:
    // 0x800720CC: lw          $s7, 0x1C($v0)
    ctx->r23 = MEM_W(ctx->r2, 0X1C);
    // 0x800720D0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x800720D4: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    // 0x800720D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800720DC: jal         0x8001D138
    // 0x800720E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_1;
    // 0x800720E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800720E4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800720E8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800720EC: jal         0x80019164
    // 0x800720F0: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    func_80019164(rdram, ctx);
        goto after_2;
    // 0x800720F0: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    after_2:
    // 0x800720F4: sw          $s0, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r16;
    // 0x800720F8: addiu       $a0, $zero, 0x785
    ctx->r4 = ADD32(0, 0X785);
    // 0x800720FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80072100: jal         0x8001D138
    // 0x80072104: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001D138(rdram, ctx);
        goto after_3;
    // 0x80072104: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x80072108: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8007210C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80072110: jal         0x80019164
    // 0x80072114: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    func_80019164(rdram, ctx);
        goto after_4;
    // 0x80072114: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    after_4:
    // 0x80072118: or          $fp, $s0, $zero
    ctx->r30 = ctx->r16 | 0;
    // 0x8007211C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80072120: addiu       $a1, $zero, 0x7D1
    ctx->r5 = ADD32(0, 0X7D1);
    // 0x80072124: jal         0x8001C468
    // 0x80072128: sw          $s0, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r16;
    func_8001C468(rdram, ctx);
        goto after_5;
    // 0x80072128: sw          $s0, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r16;
    after_5:
    // 0x8007212C: lw          $fp, 0xD4($sp)
    ctx->r30 = MEM_W(ctx->r29, 0XD4);
    // 0x80072130: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80072134: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80072138: jal         0x800192E8
    // 0x8007213C: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    func_800192E8(rdram, ctx);
        goto after_6;
    // 0x8007213C: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    after_6:
    // 0x80072140: lw          $fp, 0xD4($sp)
    ctx->r30 = MEM_W(ctx->r29, 0XD4);
    // 0x80072144: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80072148: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8007214C: or          $s0, $fp, $zero
    ctx->r16 = ctx->r30 | 0;
    // 0x80072150: jal         0x80018658
    // 0x80072154: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    func_80018658(rdram, ctx);
        goto after_7;
    // 0x80072154: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    after_7:
    // 0x80072158: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8007215C: jal         0x80018604
    // 0x80072160: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_80018604(rdram, ctx);
        goto after_8;
    // 0x80072160: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_8:
    // 0x80072164: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x80072168: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x8007216C: lui         $at, 0x4110
    ctx->r1 = S32(0X4110 << 16);
    // 0x80072170: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x80072174: addiu       $s6, $sp, 0x34
    ctx->r22 = ADD32(ctx->r29, 0X34);
    // 0x80072178: addiu       $s5, $sp, 0x4C
    ctx->r21 = ADD32(ctx->r29, 0X4C);
    // 0x8007217C: addiu       $s4, $zero, 0xF
    ctx->r20 = ADD32(0, 0XF);
    // 0x80072180: addiu       $s3, $sp, 0x64
    ctx->r19 = ADD32(ctx->r29, 0X64);
    // 0x80072184: addiu       $s2, $sp, 0x7C
    ctx->r18 = ADD32(ctx->r29, 0X7C);
L_80072188:
    // 0x80072188: lw          $t6, 0x24($s7)
    ctx->r14 = MEM_W(ctx->r23, 0X24);
    // 0x8007218C: slti        $at, $s1, 0xA
    ctx->r1 = SIGNED(ctx->r17) < 0XA ? 1 : 0;
    // 0x80072190: andi        $t7, $t6, 0x4000
    ctx->r15 = ctx->r14 & 0X4000;
    // 0x80072194: bne         $t7, $zero, L_80072260
    if (ctx->r15 != 0) {
        // 0x80072198: addiu       $t8, $s1, -0x9
        ctx->r24 = ADD32(ctx->r17, -0X9);
            goto L_80072260;
    }
    // 0x80072198: addiu       $t8, $s1, -0x9
    ctx->r24 = ADD32(ctx->r17, -0X9);
    // 0x8007219C: beq         $at, $zero, L_800721FC
    if (ctx->r1 == 0) {
        // 0x800721A0: addiu       $s0, $s1, 0x1
        ctx->r16 = ADD32(ctx->r17, 0X1);
            goto L_800721FC;
    }
    // 0x800721A0: addiu       $s0, $s1, 0x1
    ctx->r16 = ADD32(ctx->r17, 0X1);
    // 0x800721A4: mtc1        $s0, $f4
    ctx->f4.u32l = ctx->r16;
    // 0x800721A8: nop

    // 0x800721AC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800721B0: mul.s       $f12, $f6, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f12.fl = MUL_S(ctx->f6.fl, ctx->f24.fl);
    // 0x800721B4: jal         0x80028C2C
    // 0x800721B8: nop

    func_80028C2C(rdram, ctx);
        goto after_9;
    // 0x800721B8: nop

    after_9:
    // 0x800721BC: mul.s       $f20, $f0, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x800721C0: lw          $a0, 0xD0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XD0);
    // 0x800721C4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x800721C8: swc1        $f20, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f20.u32l;
    // 0x800721CC: swc1        $f20, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f20.u32l;
    // 0x800721D0: jal         0x80019114
    // 0x800721D4: swc1        $f20, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f20.u32l;
    func_80019114(rdram, ctx);
        goto after_10;
    // 0x800721D4: swc1        $f20, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->f20.u32l;
    after_10:
    // 0x800721D8: lw          $fp, 0xD4($sp)
    ctx->r30 = MEM_W(ctx->r29, 0XD4);
    // 0x800721DC: swc1        $f20, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f20.u32l;
    // 0x800721E0: swc1        $f20, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->f20.u32l;
    // 0x800721E4: swc1        $f20, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f20.u32l;
    // 0x800721E8: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x800721EC: jal         0x80019114
    // 0x800721F0: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    func_80019114(rdram, ctx);
        goto after_11;
    // 0x800721F0: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    after_11:
    // 0x800721F4: b           L_80072250
    // 0x800721F8: nop

        goto L_80072250;
    // 0x800721F8: nop

L_800721FC:
    // 0x800721FC: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x80072200: nop

    // 0x80072204: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80072208: mul.s       $f12, $f10, $f26
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f12.fl = MUL_S(ctx->f10.fl, ctx->f26.fl);
    // 0x8007220C: jal         0x80028C00
    // 0x80072210: nop

    func_80028C00(rdram, ctx);
        goto after_12;
    // 0x80072210: nop

    after_12:
    // 0x80072214: mul.s       $f20, $f0, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x80072218: lw          $a0, 0xD0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XD0);
    // 0x8007221C: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80072220: swc1        $f20, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f20.u32l;
    // 0x80072224: swc1        $f20, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f20.u32l;
    // 0x80072228: jal         0x80019114
    // 0x8007222C: swc1        $f20, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f20.u32l;
    func_80019114(rdram, ctx);
        goto after_13;
    // 0x8007222C: swc1        $f20, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f20.u32l;
    after_13:
    // 0x80072230: lw          $fp, 0xD4($sp)
    ctx->r30 = MEM_W(ctx->r29, 0XD4);
    // 0x80072234: swc1        $f20, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f20.u32l;
    // 0x80072238: swc1        $f20, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f20.u32l;
    // 0x8007223C: swc1        $f20, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f20.u32l;
    // 0x80072240: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x80072244: jal         0x80019114
    // 0x80072248: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    func_80019114(rdram, ctx);
        goto after_14;
    // 0x80072248: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    after_14:
    // 0x8007224C: addiu       $s0, $s1, 0x1
    ctx->r16 = ADD32(ctx->r17, 0X1);
L_80072250:
    // 0x80072250: jal         0x80007AB0
    // 0x80072254: nop

    func_80007AB0(rdram, ctx);
        goto after_15;
    // 0x80072254: nop

    after_15:
    // 0x80072258: bne         $s0, $s4, L_80072188
    if (ctx->r16 != ctx->r20) {
        // 0x8007225C: or          $s1, $s0, $zero
        ctx->r17 = ctx->r16 | 0;
            goto L_80072188;
    }
    // 0x8007225C: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
L_80072260:
    // 0x80072260: addiu       $s0, $sp, 0xD0
    ctx->r16 = ADD32(ctx->r29, 0XD0);
    // 0x80072264: addiu       $s2, $s0, 0x8
    ctx->r18 = ADD32(ctx->r16, 0X8);
    // 0x80072268: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_8007226C:
    // 0x8007226C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80072270: jal         0x8001C568
    // 0x80072274: nop

    func_8001C568(rdram, ctx);
        goto after_16;
    // 0x80072274: nop

    after_16:
    // 0x80072278: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8007227C: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x80072280: bne         $at, $zero, L_8007226C
    if (ctx->r1 != 0) {
        // 0x80072284: nop
    
            goto L_8007226C;
    }
    // 0x80072284: nop

    // 0x80072288: jal         0x8005CD50
    // 0x8007228C: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    func_8005CD50(rdram, ctx);
        goto after_17;
    // 0x8007228C: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    after_17:
    // 0x80072290: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80072294: addiu       $v0, $v0, 0x1DAC
    ctx->r2 = ADD32(ctx->r2, 0X1DAC);
    // 0x80072298: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8007229C: nop

    // 0x800722A0: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x800722A4: jal         0x80007AE0
    // 0x800722A8: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    func_80007AE0(rdram, ctx);
        goto after_18;
    // 0x800722A8: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    after_18:
    // 0x800722AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800722B0: addiu       $sp, $sp, 0xE0
    ctx->r29 = ADD32(ctx->r29, 0XE0);
    // 0x800722B4: jr          $ra
    // 0x800722B8: nop

    return;
    // 0x800722B8: nop

;}
