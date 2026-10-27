#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8004687C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004687C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80046880: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80046884: lw          $t6, 0x0($s5)
    ctx->r14 = MEM_W(ctx->r21, 0X0);
    // 0x80046888: lui         $s4, 0x8004
    ctx->r20 = S32(0X8004 << 16);
    // 0x8004688C: addiu       $s4, $s4, 0x3E40
    ctx->r20 = ADD32(ctx->r20, 0X3E40);
    // 0x80046890: bne         $s4, $t6, L_800468A0
    if (ctx->r20 != ctx->r14) {
        // 0x80046894: nop
    
            goto L_800468A0;
    }
    // 0x80046894: nop

    // 0x80046898: b           L_800468C8
    // 0x8004689C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800468C8;
    // 0x8004689C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800468A0:
    // 0x800468A0: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x800468A4: or          $s0, $s5, $zero
    ctx->r16 = ctx->r21 | 0;
    // 0x800468A8: jal         0x80046518
    // 0x800468AC: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    func_80046518(rdram, ctx);
        goto after_0;
    // 0x800468AC: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    after_0:
    // 0x800468B0: beq         $v0, $zero, L_800468C8
    if (ctx->r2 == 0) {
        // 0x800468B4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_800468C8;
    }
    // 0x800468B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800468B8: sw          $s4, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r20;
    // 0x800468BC: b           L_800468C8
    // 0x800468C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800468C8;
    // 0x800468C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800468C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800468C8:
    // 0x800468C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800468CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800468D0: jr          $ra
    // 0x800468D4: nop

    return;
    // 0x800468D4: nop

;}
RECOMP_FUNC void func_800468D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800468D8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800468DC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x800468E0: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x800468E4: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x800468E8: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x800468EC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x800468F0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800468F4: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800468F8: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800468FC: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x80046900: jal         0x800466B0
    // 0x80046904: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    func_800466B0(rdram, ctx);
        goto after_0;
    // 0x80046904: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    after_0:
    // 0x80046908: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8004690C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80046910: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80046914: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80046918: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8004691C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80046920: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80046924: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80046928: jr          $ra
    // 0x8004692C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8004692C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80046930(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80046930: jr          $ra
    // 0x80046934: nop

    return;
    // 0x80046934: nop

;}
RECOMP_FUNC void func_80046938(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80046938: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8004693C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80046940: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x80046944: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x80046948: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x8004694C: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x80046950: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80046954: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x80046958: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8004695C: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80046960: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x80046964: jal         0x8004687C
    // 0x80046968: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    func_8004687C(rdram, ctx);
        goto after_0;
    // 0x80046968: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    after_0:
    // 0x8004696C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80046970: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x80046974: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80046978: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x8004697C: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80046980: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x80046984: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x80046988: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x8004698C: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x80046990: jr          $ra
    // 0x80046994: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80046994: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80046998(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80046998: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8004699C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x800469A0: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x800469A4: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x800469A8: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x800469AC: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x800469B0: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x800469B4: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x800469B8: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800469BC: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x800469C0: addiu       $s2, $zero, 0x3
    ctx->r18 = ADD32(0, 0X3);
    // 0x800469C4: jal         0x8004687C
    // 0x800469C8: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    func_8004687C(rdram, ctx);
        goto after_0;
    // 0x800469C8: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    after_0:
    // 0x800469CC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x800469D0: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x800469D4: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x800469D8: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x800469DC: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x800469E0: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x800469E4: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x800469E8: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x800469EC: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x800469F0: jr          $ra
    // 0x800469F4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800469F4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800469F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800469F8: jr          $ra
    // 0x800469FC: nop

    return;
    // 0x800469FC: nop

;}
RECOMP_FUNC void func_80046A00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80046A00: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80046A04: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80046A08: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80046A0C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80046A10: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80046A14: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80046A18: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80046A1C: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80046A20: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80046A24: addiu       $s2, $zero, 0x3
    ctx->r18 = ADD32(0, 0X3);
    // 0x80046A28: jal         0x800466B0
    // 0x80046A2C: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    func_800466B0(rdram, ctx);
        goto after_0;
    // 0x80046A2C: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    after_0:
    // 0x80046A30: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80046A34: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80046A38: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80046A3C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80046A40: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80046A44: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80046A48: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80046A4C: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80046A50: jr          $ra
    // 0x80046A54: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80046A54: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80046A58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80046A58: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80046A5C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80046A60: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80046A64: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80046A68: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80046A6C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80046A70: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80046A74: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80046A78: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80046A7C: addiu       $s2, $zero, 0x3
    ctx->r18 = ADD32(0, 0X3);
    // 0x80046A80: jal         0x80046740
    // 0x80046A84: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    func_80046740(rdram, ctx);
        goto after_0;
    // 0x80046A84: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    after_0:
    // 0x80046A88: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80046A8C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80046A90: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80046A94: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80046A98: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80046A9C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80046AA0: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80046AA4: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80046AA8: jr          $ra
    // 0x80046AAC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80046AAC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80046AB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80046AB0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80046AB4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80046AB8: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x80046ABC: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x80046AC0: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x80046AC4: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x80046AC8: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80046ACC: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x80046AD0: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80046AD4: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80046AD8: addiu       $s2, $zero, 0x4
    ctx->r18 = ADD32(0, 0X4);
    // 0x80046ADC: jal         0x8004687C
    // 0x80046AE0: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    func_8004687C(rdram, ctx);
        goto after_0;
    // 0x80046AE0: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    after_0:
    // 0x80046AE4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80046AE8: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x80046AEC: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80046AF0: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80046AF4: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80046AF8: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x80046AFC: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x80046B00: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x80046B04: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x80046B08: jr          $ra
    // 0x80046B0C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80046B0C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80046B10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80046B10: jr          $ra
    // 0x80046B14: nop

    return;
    // 0x80046B14: nop

;}
RECOMP_FUNC void func_80046B18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80046B18: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80046B1C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80046B20: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80046B24: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80046B28: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80046B2C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80046B30: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80046B34: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80046B38: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80046B3C: addiu       $s2, $zero, 0x4
    ctx->r18 = ADD32(0, 0X4);
    // 0x80046B40: jal         0x800466B0
    // 0x80046B44: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    func_800466B0(rdram, ctx);
        goto after_0;
    // 0x80046B44: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    after_0:
    // 0x80046B48: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80046B4C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80046B50: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80046B54: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80046B58: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80046B5C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80046B60: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80046B64: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80046B68: jr          $ra
    // 0x80046B6C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80046B6C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80046B70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80046B70: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80046B74: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80046B78: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80046B7C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80046B80: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80046B84: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80046B88: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80046B8C: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80046B90: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80046B94: addiu       $s2, $zero, 0x4
    ctx->r18 = ADD32(0, 0X4);
    // 0x80046B98: jal         0x80046740
    // 0x80046B9C: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    func_80046740(rdram, ctx);
        goto after_0;
    // 0x80046B9C: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    after_0:
    // 0x80046BA0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80046BA4: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80046BA8: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80046BAC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80046BB0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80046BB4: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80046BB8: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80046BBC: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80046BC0: jr          $ra
    // 0x80046BC4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80046BC4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80046BC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80046BC8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80046BCC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80046BD0: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x80046BD4: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x80046BD8: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x80046BDC: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x80046BE0: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80046BE4: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x80046BE8: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80046BEC: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80046BF0: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80046BF4: jal         0x8004687C
    // 0x80046BF8: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    func_8004687C(rdram, ctx);
        goto after_0;
    // 0x80046BF8: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    after_0:
    // 0x80046BFC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80046C00: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x80046C04: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80046C08: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80046C0C: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80046C10: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x80046C14: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x80046C18: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x80046C1C: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x80046C20: jr          $ra
    // 0x80046C24: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80046C24: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80046C28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80046C28: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80046C2C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80046C30: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x80046C34: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x80046C38: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80046C3C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x80046C40: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80046C44: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80046C48: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x80046C4C: lui         $v1, 0x8004
    ctx->r3 = S32(0X8004 << 16);
    // 0x80046C50: addiu       $v1, $v1, 0x3E40
    ctx->r3 = ADD32(ctx->r3, 0X3E40);
    // 0x80046C54: bne         $v1, $t6, L_80046C64
    if (ctx->r3 != ctx->r14) {
        // 0x80046C58: or          $s0, $a0, $zero
        ctx->r16 = ctx->r4 | 0;
            goto L_80046C64;
    }
    // 0x80046C58: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80046C5C: b           L_80046CA0
    // 0x80046C60: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80046CA0;
    // 0x80046C60: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80046C64:
    // 0x80046C64: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x80046C68: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80046C6C: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x80046C70: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80046C74: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    // 0x80046C78: jal         0x80046518
    // 0x80046C7C: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    func_80046518(rdram, ctx);
        goto after_0;
    // 0x80046C7C: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    after_0:
    // 0x80046C80: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x80046C84: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x80046C88: beq         $v0, $zero, L_80046CA0
    if (ctx->r2 == 0) {
        // 0x80046C8C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80046CA0;
    }
    // 0x80046C8C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80046C90: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x80046C94: b           L_80046CA0
    // 0x80046C98: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80046CA0;
    // 0x80046C98: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80046C9C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80046CA0:
    // 0x80046CA0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80046CA4: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x80046CA8: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80046CAC: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80046CB0: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80046CB4: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x80046CB8: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x80046CBC: jr          $ra
    // 0x80046CC0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80046CC0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80046CC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80046CC4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80046CC8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80046CCC: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x80046CD0: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x80046CD4: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80046CD8: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x80046CDC: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80046CE0: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80046CE4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80046CE8: lui         $t6, 0x8004
    ctx->r14 = S32(0X8004 << 16);
    // 0x80046CEC: addiu       $t6, $t6, 0x3E40
    ctx->r14 = ADD32(ctx->r14, 0X3E40);
    // 0x80046CF0: beq         $t6, $v0, L_80046D04
    if (ctx->r14 == ctx->r2) {
        // 0x80046CF4: lui         $v1, 0x8004
        ctx->r3 = S32(0X8004 << 16);
            goto L_80046D04;
    }
    // 0x80046CF4: lui         $v1, 0x8004
    ctx->r3 = S32(0X8004 << 16);
    // 0x80046CF8: addiu       $v1, $v1, 0x3BB8
    ctx->r3 = ADD32(ctx->r3, 0X3BB8);
    // 0x80046CFC: bne         $v1, $v0, L_80046D0C
    if (ctx->r3 != ctx->r2) {
        // 0x80046D00: or          $s0, $a0, $zero
        ctx->r16 = ctx->r4 | 0;
            goto L_80046D0C;
    }
    // 0x80046D00: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
L_80046D04:
    // 0x80046D04: b           L_80046D44
    // 0x80046D08: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80046D44;
    // 0x80046D08: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80046D0C:
    // 0x80046D0C: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x80046D10: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80046D14: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80046D18: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    // 0x80046D1C: jal         0x80046518
    // 0x80046D20: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    func_80046518(rdram, ctx);
        goto after_0;
    // 0x80046D20: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    after_0:
    // 0x80046D24: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x80046D28: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80046D2C: beq         $v0, $zero, L_80046D44
    if (ctx->r2 == 0) {
        // 0x80046D30: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80046D44;
    }
    // 0x80046D30: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80046D34: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x80046D38: b           L_80046D44
    // 0x80046D3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80046D44;
    // 0x80046D3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80046D40: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80046D44:
    // 0x80046D44: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80046D48: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x80046D4C: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80046D50: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80046D54: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80046D58: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x80046D5C: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x80046D60: jr          $ra
    // 0x80046D64: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80046D64: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80046D68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80046D68: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80046D6C: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80046D70: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80046D74: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x80046D78: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x80046D7C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x80046D80: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x80046D84: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80046D88: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80046D8C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80046D90: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80046D94: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80046D98: jal         0x80046518
    // 0x80046D9C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    func_80046518(rdram, ctx);
        goto after_0;
    // 0x80046D9C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    after_0:
    // 0x80046DA0: beq         $v0, $zero, L_80046DC0
    if (ctx->r2 == 0) {
        // 0x80046DA4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80046DC0;
    }
    // 0x80046DA4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80046DA8: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80046DAC: jal         0x800418F4
    // 0x80046DB0: nop

    func_800418F4(rdram, ctx);
        goto after_1;
    // 0x80046DB0: nop

    after_1:
    // 0x80046DB4: b           L_80046DC4
    // 0x80046DB8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_80046DC4;
    // 0x80046DB8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80046DBC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80046DC0:
    // 0x80046DC0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80046DC4:
    // 0x80046DC4: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x80046DC8: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80046DCC: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80046DD0: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80046DD4: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x80046DD8: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x80046DDC: jr          $ra
    // 0x80046DE0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80046DE0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80046DE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80046DE4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80046DE8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80046DEC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80046DF0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80046DF4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80046DF8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80046DFC: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80046E00: jal         0x80041AEC
    // 0x80046E04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80041AEC(rdram, ctx);
        goto after_0;
    // 0x80046E04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80046E08: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80046E0C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80046E10: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80046E14: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80046E18: jr          $ra
    // 0x80046E1C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80046E1C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80046E20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80046E20: jr          $ra
    // 0x80046E24: nop

    return;
    // 0x80046E24: nop

;}
RECOMP_FUNC void func_80046E28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80046E28: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80046E2C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80046E30: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80046E34: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80046E38: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80046E3C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80046E40: addiu       $s2, $zero, 0x6
    ctx->r18 = ADD32(0, 0X6);
    // 0x80046E44: jal         0x80041AEC
    // 0x80046E48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80041AEC(rdram, ctx);
        goto after_0;
    // 0x80046E48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80046E4C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80046E50: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80046E54: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80046E58: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80046E5C: jr          $ra
    // 0x80046E60: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80046E60: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80046E64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80046E64: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80046E68: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80046E6C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80046E70: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80046E74: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80046E78: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80046E7C: addiu       $s2, $zero, 0x2
    ctx->r18 = ADD32(0, 0X2);
    // 0x80046E80: jal         0x80041AEC
    // 0x80046E84: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80041AEC(rdram, ctx);
        goto after_0;
    // 0x80046E84: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x80046E88: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80046E8C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80046E90: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80046E94: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80046E98: jr          $ra
    // 0x80046E9C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80046E9C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80046EA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80046EA0: jr          $ra
    // 0x80046EA4: nop

    return;
    // 0x80046EA4: nop

;}
RECOMP_FUNC void func_80046EB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80046EB0: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x80046EB4: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x80046EB8: sw          $fp, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r30;
    // 0x80046EBC: sw          $s7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r23;
    // 0x80046EC0: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x80046EC4: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x80046EC8: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x80046ECC: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x80046ED0: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x80046ED4: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x80046ED8: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x80046EDC: swc1        $f31, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x80046EE0: swc1        $f30, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f30.u32l;
    // 0x80046EE4: swc1        $f29, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x80046EE8: swc1        $f28, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f28.u32l;
    // 0x80046EEC: swc1        $f27, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x80046EF0: swc1        $f26, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f26.u32l;
    // 0x80046EF4: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x80046EF8: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x80046EFC: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80046F00: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x80046F04: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80046F08: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80046F0C: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x80046F10: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x80046F14: addiu       $v0, $v0, 0x181C
    ctx->r2 = ADD32(ctx->r2, 0X181C);
    // 0x80046F18: bne         $v0, $t6, L_80046F34
    if (ctx->r2 != ctx->r14) {
        // 0x80046F1C: or          $a1, $a0, $zero
        ctx->r5 = ctx->r4 | 0;
            goto L_80046F34;
    }
    // 0x80046F1C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80046F20: lui         $t7, 0x8004
    ctx->r15 = S32(0X8004 << 16);
    // 0x80046F24: addiu       $t7, $t7, 0x3F44
    ctx->r15 = ADD32(ctx->r15, 0X3F44);
    // 0x80046F28: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x80046F2C: b           L_80046FB0
    // 0x80046F30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80046FB0;
    // 0x80046F30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80046F34:
    // 0x80046F34: lw          $a0, 0xC($a1)
    ctx->r4 = MEM_W(ctx->r5, 0XC);
    // 0x80046F38: sw          $a1, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r5;
    // 0x80046F3C: jal         0x8002D000
    // 0x80046F40: sw          $v0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r2;
    func_8002D000(rdram, ctx);
        goto after_0;
    // 0x80046F40: sw          $v0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r2;
    after_0:
    // 0x80046F44: addiu       $t8, $sp, 0x90
    ctx->r24 = ADD32(ctx->r29, 0X90);
    // 0x80046F48: addiu       $t9, $sp, 0x94
    ctx->r25 = ADD32(ctx->r29, 0X94);
    // 0x80046F4C: sw          $t9, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r25;
    // 0x80046F50: sw          $t8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r24;
    // 0x80046F54: sw          $v0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r2;
    // 0x80046F58: jal         0x800454B0
    // 0x80046F5C: addiu       $s0, $zero, 0x2
    ctx->r16 = ADD32(0, 0X2);
    func_800454B0(rdram, ctx);
        goto after_1;
    // 0x80046F5C: addiu       $s0, $zero, 0x2
    ctx->r16 = ADD32(0, 0X2);
    after_1:
    // 0x80046F60: lw          $a1, 0x98($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X98);
    // 0x80046F64: beq         $v0, $zero, L_80046FA4
    if (ctx->r2 == 0) {
        // 0x80046F68: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80046FA4;
    }
    // 0x80046F68: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80046F6C: jal         0x8005AE1C
    // 0x80046F70: sw          $a1, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r5;
    func_8005AE1C(rdram, ctx);
        goto after_2;
    // 0x80046F70: sw          $a1, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r5;
    after_2:
    // 0x80046F74: lw          $a1, 0x98($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X98);
    // 0x80046F78: bne         $v0, $zero, L_80046FA4
    if (ctx->r2 != 0) {
        // 0x80046F7C: lui         $at, 0x8009
        ctx->r1 = S32(0X8009 << 16);
            goto L_80046FA4;
    }
    // 0x80046F7C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80046F80: lwc1        $f4, 0x94($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X94);
    // 0x80046F84: lwc1        $f6, 0x5C98($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X5C98);
    // 0x80046F88: lui         $t6, 0x8004
    ctx->r14 = S32(0X8004 << 16);
    // 0x80046F8C: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80046F90: addiu       $t6, $t6, 0x3F44
    ctx->r14 = ADD32(ctx->r14, 0X3F44);
    // 0x80046F94: bc1f        L_80046FA4
    if (!c1cs) {
        // 0x80046F98: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80046FA4;
    }
    // 0x80046F98: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80046F9C: b           L_80046FB0
    // 0x80046FA0: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
        goto L_80046FB0;
    // 0x80046FA0: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
L_80046FA4:
    // 0x80046FA4: lw          $t7, 0x74($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X74);
    // 0x80046FA8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80046FAC: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
L_80046FB0:
    // 0x80046FB0: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x80046FB4: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80046FB8: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80046FBC: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80046FC0: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80046FC4: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x80046FC8: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80046FCC: lwc1        $f27, 0x30($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x80046FD0: lwc1        $f26, 0x34($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80046FD4: lwc1        $f29, 0x38($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x80046FD8: lwc1        $f28, 0x3C($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80046FDC: lwc1        $f31, 0x40($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x80046FE0: lwc1        $f30, 0x44($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80046FE4: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x80046FE8: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x80046FEC: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x80046FF0: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x80046FF4: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x80046FF8: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x80046FFC: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x80047000: lw          $s7, 0x64($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X64);
    // 0x80047004: lw          $fp, 0x68($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X68);
    // 0x80047008: jr          $ra
    // 0x8004700C: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    // 0x8004700C: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void func_80047010(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80047010: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80047014: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80047018: jal         0x80027F1C
    // 0x8004701C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_80027F1C(rdram, ctx);
        goto after_0;
    // 0x8004701C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x80047020: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80047024: lwc1        $f5, 0x5CA0($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X5CA0);
    // 0x80047028: lwc1        $f4, 0x5CA4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X5CA4);
    // 0x8004702C: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x80047030: c.lt.d      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.d < ctx->f4.d;
    // 0x80047034: nop

    // 0x80047038: bc1f        L_80047048
    if (!c1cs) {
        // 0x8004703C: nop
    
            goto L_80047048;
    }
    // 0x8004703C: nop

    // 0x80047040: b           L_80047150
    // 0x80047044: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80047150;
    // 0x80047044: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80047048:
    // 0x80047048: lw          $t6, -0x42C0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X42C0);
    // 0x8004704C: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x80047050: sll         $t7, $t6, 11
    ctx->r15 = S32(ctx->r14 << 11);
    // 0x80047054: bgez        $t7, L_80047064
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80047058: lui         $v1, 0x8004
        ctx->r3 = S32(0X8004 << 16);
            goto L_80047064;
    }
    // 0x80047058: lui         $v1, 0x8004
    ctx->r3 = S32(0X8004 << 16);
    // 0x8004705C: b           L_80047150
    // 0x80047060: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80047150;
    // 0x80047060: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80047064:
    // 0x80047064: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x80047068: addiu       $v1, $v1, 0x3A30
    ctx->r3 = ADD32(ctx->r3, 0X3A30);
    // 0x8004706C: bne         $v1, $v0, L_8004707C
    if (ctx->r3 != ctx->r2) {
        // 0x80047070: lui         $t8, 0x8004
        ctx->r24 = S32(0X8004 << 16);
            goto L_8004707C;
    }
    // 0x80047070: lui         $t8, 0x8004
    ctx->r24 = S32(0X8004 << 16);
    // 0x80047074: b           L_80047150
    // 0x80047078: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80047150;
    // 0x80047078: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8004707C:
    // 0x8004707C: addiu       $t8, $t8, 0x181C
    ctx->r24 = ADD32(ctx->r24, 0X181C);
    // 0x80047080: bne         $t8, $v0, L_80047090
    if (ctx->r24 != ctx->r2) {
        // 0x80047084: lui         $a1, 0x800B
        ctx->r5 = S32(0X800B << 16);
            goto L_80047090;
    }
    // 0x80047084: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80047088: b           L_80047150
    // 0x8004708C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80047150;
    // 0x8004708C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80047090:
    // 0x80047090: lw          $a0, 0xC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XC);
    // 0x80047094: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x80047098: jal         0x8005BCB4
    // 0x8004709C: addiu       $a1, $a1, -0x3C8C
    ctx->r5 = ADD32(ctx->r5, -0X3C8C);
    func_8005BCB4(rdram, ctx);
        goto after_1;
    // 0x8004709C: addiu       $a1, $a1, -0x3C8C
    ctx->r5 = ADD32(ctx->r5, -0X3C8C);
    after_1:
    // 0x800470A0: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x800470A4: lw          $t9, -0x3C8C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3C8C);
    // 0x800470A8: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x800470AC: andi        $t0, $t9, 0x400
    ctx->r8 = ctx->r25 & 0X400;
    // 0x800470B0: beq         $t0, $zero, L_800470C0
    if (ctx->r8 == 0) {
        // 0x800470B4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_800470C0;
    }
    // 0x800470B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800470B8: b           L_800470C0
    // 0x800470BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800470C0;
    // 0x800470BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800470C0:
    // 0x800470C0: beq         $v0, $zero, L_800470F0
    if (ctx->r2 == 0) {
        // 0x800470C4: lui         $a1, 0x800B
        ctx->r5 = S32(0X800B << 16);
            goto L_800470F0;
    }
    // 0x800470C4: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x800470C8: lw          $a0, 0xC($t1)
    ctx->r4 = MEM_W(ctx->r9, 0XC);
    // 0x800470CC: jal         0x8005BB84
    // 0x800470D0: addiu       $a1, $a1, -0x3C90
    ctx->r5 = ADD32(ctx->r5, -0X3C90);
    func_8005BB84(rdram, ctx);
        goto after_2;
    // 0x800470D0: addiu       $a1, $a1, -0x3C90
    ctx->r5 = ADD32(ctx->r5, -0X3C90);
    after_2:
    // 0x800470D4: lui         $t2, 0x800B
    ctx->r10 = S32(0X800B << 16);
    // 0x800470D8: lw          $t2, -0x3C90($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X3C90);
    // 0x800470DC: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x800470E0: bne         $t2, $at, L_800470F0
    if (ctx->r10 != ctx->r1) {
        // 0x800470E4: nop
    
            goto L_800470F0;
    }
    // 0x800470E4: nop

    // 0x800470E8: b           L_80047150
    // 0x800470EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80047150;
    // 0x800470EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800470F0:
    // 0x800470F0: lui         $t3, 0x800B
    ctx->r11 = S32(0X800B << 16);
    // 0x800470F4: lw          $t3, -0x3CA0($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X3CA0);
    // 0x800470F8: nop

    // 0x800470FC: slti        $at, $t3, 0x4B0
    ctx->r1 = SIGNED(ctx->r11) < 0X4B0 ? 1 : 0;
    // 0x80047100: beq         $at, $zero, L_80047110
    if (ctx->r1 == 0) {
        // 0x80047104: nop
    
            goto L_80047110;
    }
    // 0x80047104: nop

    // 0x80047108: b           L_80047150
    // 0x8004710C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80047150;
    // 0x8004710C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80047110:
    // 0x80047110: jal         0x80028AB8
    // 0x80047114: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    func_80028AB8(rdram, ctx);
        goto after_3;
    // 0x80047114: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    after_3:
    // 0x80047118: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x8004711C: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x80047120: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80047124: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80047128: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8004712C: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80047130: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80047134: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x80047138: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8004713C: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80047140: swc1        $f4, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->f4.u32l;
    // 0x80047144: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x80047148: nop

    // 0x8004714C: sw          $t5, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r13;
L_80047150:
    // 0x80047150: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80047154: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80047158: jr          $ra
    // 0x8004715C: nop

    return;
    // 0x8004715C: nop

;}
RECOMP_FUNC void func_80047160(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80047160: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80047164: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80047168: jal         0x80028AB8
    // 0x8004716C: addiu       $a0, $zero, 0x63
    ctx->r4 = ADD32(0, 0X63);
    func_80028AB8(rdram, ctx);
        goto after_0;
    // 0x8004716C: addiu       $a0, $zero, 0x63
    ctx->r4 = ADD32(0, 0X63);
    after_0:
    // 0x80047170: slti        $at, $v0, 0x14
    ctx->r1 = SIGNED(ctx->r2) < 0X14 ? 1 : 0;
    // 0x80047174: beq         $at, $zero, L_80047184
    if (ctx->r1 == 0) {
        // 0x80047178: nop
    
            goto L_80047184;
    }
    // 0x80047178: nop

    // 0x8004717C: b           L_800472B4
    // 0x80047180: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800472B4;
    // 0x80047180: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80047184:
    // 0x80047184: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x80047188: jal         0x8005C3A8
    // 0x8004718C: nop

    func_8005C3A8(rdram, ctx);
        goto after_1;
    // 0x8004718C: nop

    after_1:
    // 0x80047190: lw          $v0, 0x10($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X10);
    // 0x80047194: nop

    // 0x80047198: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x8004719C: bne         $t6, $zero, L_800471AC
    if (ctx->r14 != 0) {
        // 0x800471A0: nop
    
            goto L_800471AC;
    }
    // 0x800471A0: nop

    // 0x800471A4: b           L_800472B4
    // 0x800471A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800472B4;
    // 0x800471A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800471AC:
    // 0x800471AC: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x800471B0: addiu       $s1, $s1, -0x3C8C
    ctx->r17 = ADD32(ctx->r17, -0X3C8C);
    // 0x800471B4: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x800471B8: jal         0x8005BCB4
    // 0x800471BC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_8005BCB4(rdram, ctx);
        goto after_2;
    // 0x800471BC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_2:
    // 0x800471C0: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x800471C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800471C8: andi        $t8, $t7, 0x400
    ctx->r24 = ctx->r15 & 0X400;
    // 0x800471CC: beq         $t8, $zero, L_800471DC
    if (ctx->r24 == 0) {
        // 0x800471D0: nop
    
            goto L_800471DC;
    }
    // 0x800471D0: nop

    // 0x800471D4: b           L_800471DC
    // 0x800471D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800471DC;
    // 0x800471D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800471DC:
    // 0x800471DC: beq         $v0, $zero, L_80047214
    if (ctx->r2 == 0) {
        // 0x800471E0: sll         $t6, $s2, 2
        ctx->r14 = S32(ctx->r18 << 2);
            goto L_80047214;
    }
    // 0x800471E0: sll         $t6, $s2, 2
    ctx->r14 = S32(ctx->r18 << 2);
    // 0x800471E4: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x800471E8: addiu       $s1, $s1, -0x3C90
    ctx->r17 = ADD32(ctx->r17, -0X3C90);
    // 0x800471EC: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x800471F0: jal         0x8005BB84
    // 0x800471F4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_8005BB84(rdram, ctx);
        goto after_3;
    // 0x800471F4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_3:
    // 0x800471F8: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x800471FC: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80047200: bne         $t9, $at, L_80047214
    if (ctx->r25 != ctx->r1) {
        // 0x80047204: sll         $t6, $s2, 2
        ctx->r14 = S32(ctx->r18 << 2);
            goto L_80047214;
    }
    // 0x80047204: sll         $t6, $s2, 2
    ctx->r14 = S32(ctx->r18 << 2);
    // 0x80047208: b           L_800472B4
    // 0x8004720C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800472B4;
    // 0x8004720C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80047210: sll         $t6, $s2, 2
    ctx->r14 = S32(ctx->r18 << 2);
L_80047214:
    // 0x80047214: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x80047218: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x8004721C: lw          $t9, 0x1870($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X1870);
    // 0x80047220: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80047224: jalr        $t9
    // 0x80047228: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x80047228: nop

    after_4:
    // 0x8004722C: beq         $v0, $zero, L_800472B4
    if (ctx->r2 == 0) {
        // 0x80047230: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_800472B4;
    }
    // 0x80047230: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80047234: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x80047238: jal         0x8002D000
    // 0x8004723C: nop

    func_8002D000(rdram, ctx);
        goto after_5;
    // 0x8004723C: nop

    after_5:
    // 0x80047240: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80047244: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80047248: jal         0x8004A0A0
    // 0x8004724C: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    func_8004A0A0(rdram, ctx);
        goto after_6;
    // 0x8004724C: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    after_6:
    // 0x80047250: beq         $v0, $zero, L_80047260
    if (ctx->r2 == 0) {
        // 0x80047254: addiu       $a1, $zero, 0x4
        ctx->r5 = ADD32(0, 0X4);
            goto L_80047260;
    }
    // 0x80047254: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80047258: b           L_800472B4
    // 0x8004725C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800472B4;
    // 0x8004725C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80047260:
    // 0x80047260: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x80047264: jal         0x8004A0A0
    // 0x80047268: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    func_8004A0A0(rdram, ctx);
        goto after_7;
    // 0x80047268: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_7:
    // 0x8004726C: beq         $v0, $zero, L_8004727C
    if (ctx->r2 == 0) {
        // 0x80047270: lui         $at, 0x4316
        ctx->r1 = S32(0X4316 << 16);
            goto L_8004727C;
    }
    // 0x80047270: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x80047274: b           L_800472B4
    // 0x80047278: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800472B4;
    // 0x80047278: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8004727C:
    // 0x8004727C: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80047280: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80047284: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80047288: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8004728C: lui         $t7, 0x8004
    ctx->r15 = S32(0X8004 << 16);
    // 0x80047290: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x80047294: addiu       $t7, $t7, 0x3958
    ctx->r15 = ADD32(ctx->r15, 0X3958);
    // 0x80047298: bc1f        L_800472A8
    if (!c1cs) {
        // 0x8004729C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_800472A8;
    }
    // 0x8004729C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800472A0: b           L_800472B4
    // 0x800472A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800472B4;
    // 0x800472A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800472A8:
    // 0x800472A8: b           L_800472B4
    // 0x800472AC: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
        goto L_800472B4;
    // 0x800472AC: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x800472B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800472B4:
    // 0x800472B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800472B8: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x800472BC: jr          $ra
    // 0x800472C0: nop

    return;
    // 0x800472C0: nop

;}
RECOMP_FUNC void func_800472C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800472C4: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x800472C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800472CC: jal         0x80028AB8
    // 0x800472D0: addiu       $a0, $zero, 0x63
    ctx->r4 = ADD32(0, 0X63);
    func_80028AB8(rdram, ctx);
        goto after_0;
    // 0x800472D0: addiu       $a0, $zero, 0x63
    ctx->r4 = ADD32(0, 0X63);
    after_0:
    // 0x800472D4: slti        $at, $v0, 0x14
    ctx->r1 = SIGNED(ctx->r2) < 0X14 ? 1 : 0;
    // 0x800472D8: beq         $at, $zero, L_800472E8
    if (ctx->r1 == 0) {
        // 0x800472DC: nop
    
            goto L_800472E8;
    }
    // 0x800472DC: nop

    // 0x800472E0: b           L_80047404
    // 0x800472E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80047404;
    // 0x800472E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800472E8:
    // 0x800472E8: lw          $a0, 0xC($s4)
    ctx->r4 = MEM_W(ctx->r20, 0XC);
    // 0x800472EC: jal         0x8005C3A8
    // 0x800472F0: nop

    func_8005C3A8(rdram, ctx);
        goto after_1;
    // 0x800472F0: nop

    after_1:
    // 0x800472F4: lw          $v0, 0x10($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X10);
    // 0x800472F8: nop

    // 0x800472FC: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x80047300: bne         $t6, $zero, L_80047310
    if (ctx->r14 != 0) {
        // 0x80047304: nop
    
            goto L_80047310;
    }
    // 0x80047304: nop

    // 0x80047308: b           L_80047404
    // 0x8004730C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80047404;
    // 0x8004730C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80047310:
    // 0x80047310: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x80047314: addiu       $s0, $s0, -0x3C8C
    ctx->r16 = ADD32(ctx->r16, -0X3C8C);
    // 0x80047318: lw          $a0, 0xC($s4)
    ctx->r4 = MEM_W(ctx->r20, 0XC);
    // 0x8004731C: jal         0x8005BCB4
    // 0x80047320: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8005BCB4(rdram, ctx);
        goto after_2;
    // 0x80047320: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
    // 0x80047324: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x80047328: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x8004732C: andi        $t8, $t7, 0x400
    ctx->r24 = ctx->r15 & 0X400;
    // 0x80047330: beq         $t8, $zero, L_80047340
    if (ctx->r24 == 0) {
        // 0x80047334: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80047340;
    }
    // 0x80047334: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80047338: b           L_80047340
    // 0x8004733C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80047340;
    // 0x8004733C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80047340:
    // 0x80047340: beq         $v0, $zero, L_8004736C
    if (ctx->r2 == 0) {
        // 0x80047344: addiu       $s0, $s0, -0x3C90
        ctx->r16 = ADD32(ctx->r16, -0X3C90);
            goto L_8004736C;
    }
    // 0x80047344: addiu       $s0, $s0, -0x3C90
    ctx->r16 = ADD32(ctx->r16, -0X3C90);
    // 0x80047348: lw          $a0, 0xC($s4)
    ctx->r4 = MEM_W(ctx->r20, 0XC);
    // 0x8004734C: jal         0x8005BB84
    // 0x80047350: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8005BB84(rdram, ctx);
        goto after_3;
    // 0x80047350: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_3:
    // 0x80047354: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x80047358: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x8004735C: bne         $t9, $at, L_8004736C
    if (ctx->r25 != ctx->r1) {
        // 0x80047360: nop
    
            goto L_8004736C;
    }
    // 0x80047360: nop

    // 0x80047364: b           L_80047404
    // 0x80047368: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80047404;
    // 0x80047368: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8004736C:
    // 0x8004736C: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x80047370: or          $s0, $s4, $zero
    ctx->r16 = ctx->r20 | 0;
    // 0x80047374: jal         0x80046518
    // 0x80047378: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    func_80046518(rdram, ctx);
        goto after_4;
    // 0x80047378: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    after_4:
    // 0x8004737C: beq         $v0, $zero, L_80047404
    if (ctx->r2 == 0) {
        // 0x80047380: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80047404;
    }
    // 0x80047380: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80047384: lw          $a0, 0xC($s4)
    ctx->r4 = MEM_W(ctx->r20, 0XC);
    // 0x80047388: jal         0x8002D000
    // 0x8004738C: nop

    func_8002D000(rdram, ctx);
        goto after_5;
    // 0x8004738C: nop

    after_5:
    // 0x80047390: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80047394: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80047398: jal         0x8004A0A0
    // 0x8004739C: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    func_8004A0A0(rdram, ctx);
        goto after_6;
    // 0x8004739C: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    after_6:
    // 0x800473A0: beq         $v0, $zero, L_800473B0
    if (ctx->r2 == 0) {
        // 0x800473A4: addiu       $a1, $zero, 0x4
        ctx->r5 = ADD32(0, 0X4);
            goto L_800473B0;
    }
    // 0x800473A4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x800473A8: b           L_80047404
    // 0x800473AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80047404;
    // 0x800473AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800473B0:
    // 0x800473B0: lw          $a0, 0x10($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X10);
    // 0x800473B4: jal         0x8004A0A0
    // 0x800473B8: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    func_8004A0A0(rdram, ctx);
        goto after_7;
    // 0x800473B8: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_7:
    // 0x800473BC: beq         $v0, $zero, L_800473CC
    if (ctx->r2 == 0) {
        // 0x800473C0: lui         $at, 0x4316
        ctx->r1 = S32(0X4316 << 16);
            goto L_800473CC;
    }
    // 0x800473C0: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x800473C4: b           L_80047404
    // 0x800473C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80047404;
    // 0x800473C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800473CC:
    // 0x800473CC: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x800473D0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800473D4: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800473D8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800473DC: lui         $t6, 0x8004
    ctx->r14 = S32(0X8004 << 16);
    // 0x800473E0: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x800473E4: addiu       $t6, $t6, 0x3958
    ctx->r14 = ADD32(ctx->r14, 0X3958);
    // 0x800473E8: bc1f        L_800473F8
    if (!c1cs) {
        // 0x800473EC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_800473F8;
    }
    // 0x800473EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800473F0: b           L_80047404
    // 0x800473F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80047404;
    // 0x800473F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800473F8:
    // 0x800473F8: b           L_80047404
    // 0x800473FC: sw          $t6, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r14;
        goto L_80047404;
    // 0x800473FC: sw          $t6, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r14;
    // 0x80047400: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80047404:
    // 0x80047404: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80047408: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x8004740C: jr          $ra
    // 0x80047410: nop

    return;
    // 0x80047410: nop

;}
RECOMP_FUNC void func_80047414(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80047414: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80047418: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004741C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80047420: jal         0x80028AB8
    // 0x80047424: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    func_80028AB8(rdram, ctx);
        goto after_0;
    // 0x80047424: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_0:
    // 0x80047428: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8004742C: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80047430: lw          $a0, 0xC($t6)
    ctx->r4 = MEM_W(ctx->r14, 0XC);
    // 0x80047434: nop

    // 0x80047438: slti        $at, $a0, 0x4
    ctx->r1 = SIGNED(ctx->r4) < 0X4 ? 1 : 0;
    // 0x8004743C: beq         $at, $zero, L_80047468
    if (ctx->r1 == 0) {
        // 0x80047440: sll         $t7, $a0, 2
        ctx->r15 = S32(ctx->r4 << 2);
            goto L_80047468;
    }
    // 0x80047440: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x80047444: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80047448: addu        $v1, $v1, $t7
    ctx->r3 = ADD32(ctx->r3, ctx->r15);
    // 0x8004744C: lw          $v1, -0x4284($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X4284);
    // 0x80047450: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80047454: div         $zero, $v1, $at
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r1)));
    // 0x80047458: mflo        $t8
    ctx->r24 = lo;
    // 0x8004745C: addiu       $v1, $t8, 0x1
    ctx->r3 = ADD32(ctx->r24, 0X1);
    // 0x80047460: b           L_80047468
    // 0x80047464: nop

        goto L_80047468;
    // 0x80047464: nop

L_80047468:
    // 0x80047468: multu       $v1, $v0
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004746C: mflo        $t9
    ctx->r25 = lo;
    // 0x80047470: slti        $at, $t9, 0x14
    ctx->r1 = SIGNED(ctx->r25) < 0X14 ? 1 : 0;
    // 0x80047474: beq         $at, $zero, L_80047484
    if (ctx->r1 == 0) {
        // 0x80047478: nop
    
            goto L_80047484;
    }
    // 0x80047478: nop

    // 0x8004747C: b           L_800474E8
    // 0x80047480: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800474E8;
    // 0x80047480: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80047484:
    // 0x80047484: jal         0x8005C3A8
    // 0x80047488: nop

    func_8005C3A8(rdram, ctx);
        goto after_1;
    // 0x80047488: nop

    after_1:
    // 0x8004748C: lw          $v0, 0x10($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X10);
    // 0x80047490: nop

    // 0x80047494: andi        $t0, $v0, 0x1
    ctx->r8 = ctx->r2 & 0X1;
    // 0x80047498: bne         $t0, $zero, L_800474A8
    if (ctx->r8 != 0) {
        // 0x8004749C: nop
    
            goto L_800474A8;
    }
    // 0x8004749C: nop

    // 0x800474A0: b           L_800474E8
    // 0x800474A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800474E8;
    // 0x800474A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800474A8:
    // 0x800474A8: jal         0x80028AB8
    // 0x800474AC: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    func_80028AB8(rdram, ctx);
        goto after_2;
    // 0x800474AC: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    after_2:
    // 0x800474B0: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x800474B4: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x800474B8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800474BC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800474C0: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800474C4: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x800474C8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800474CC: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x800474D0: lui         $t1, 0x8004
    ctx->r9 = S32(0X8004 << 16);
    // 0x800474D4: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x800474D8: addiu       $t1, $t1, 0x3958
    ctx->r9 = ADD32(ctx->r9, 0X3958);
    // 0x800474DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800474E0: swc1        $f18, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f18.u32l;
    // 0x800474E4: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
L_800474E8:
    // 0x800474E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800474EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800474F0: jr          $ra
    // 0x800474F4: nop

    return;
    // 0x800474F4: nop

;}
RECOMP_FUNC void func_800474F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800474F8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800474FC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80047500: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80047504: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80047508: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8004750C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80047510: jal         0x80047160
    // 0x80047514: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    func_80047160(rdram, ctx);
        goto after_0;
    // 0x80047514: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    after_0:
    // 0x80047518: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8004751C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80047520: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80047524: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80047528: jr          $ra
    // 0x8004752C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8004752C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80047530(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80047530: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80047534: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80047538: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8004753C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80047540: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80047544: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80047548: jal         0x80047160
    // 0x8004754C: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    func_80047160(rdram, ctx);
        goto after_0;
    // 0x8004754C: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    after_0:
    // 0x80047550: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80047554: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80047558: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8004755C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80047560: jr          $ra
    // 0x80047564: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80047564: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80047568(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80047568: jr          $ra
    // 0x8004756C: nop

    return;
    // 0x8004756C: nop

;}
RECOMP_FUNC void func_80047570(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80047570: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80047574: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80047578: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x8004757C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80047580: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80047584: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80047588: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8004758C: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80047590: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80047594: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x80047598: jal         0x800472C4
    // 0x8004759C: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    func_800472C4(rdram, ctx);
        goto after_0;
    // 0x8004759C: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    after_0:
    // 0x800475A0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x800475A4: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800475A8: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800475AC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800475B0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x800475B4: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x800475B8: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x800475BC: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x800475C0: jr          $ra
    // 0x800475C4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800475C4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800475C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800475C8: jr          $ra
    // 0x800475CC: nop

    return;
    // 0x800475CC: nop

;}
RECOMP_FUNC void func_800475D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800475D0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800475D4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x800475D8: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x800475DC: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x800475E0: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x800475E4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x800475E8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800475EC: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800475F0: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800475F4: addiu       $s2, $zero, 0x4
    ctx->r18 = ADD32(0, 0X4);
    // 0x800475F8: jal         0x800472C4
    // 0x800475FC: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    func_800472C4(rdram, ctx);
        goto after_0;
    // 0x800475FC: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    after_0:
    // 0x80047600: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80047604: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80047608: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8004760C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80047610: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80047614: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80047618: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8004761C: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80047620: jr          $ra
    // 0x80047624: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80047624: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80047628(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80047628: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004762C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80047630: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x80047634: jal         0x8005C3A8
    // 0x80047638: nop

    func_8005C3A8(rdram, ctx);
        goto after_0;
    // 0x80047638: nop

    after_0:
    // 0x8004763C: lw          $v0, 0x10($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X10);
    // 0x80047640: nop

    // 0x80047644: andi        $t6, $v0, 0x2
    ctx->r14 = ctx->r2 & 0X2;
    // 0x80047648: bne         $t6, $zero, L_80047658
    if (ctx->r14 != 0) {
        // 0x8004764C: nop
    
            goto L_80047658;
    }
    // 0x8004764C: nop

    // 0x80047650: b           L_800476C8
    // 0x80047654: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800476C8;
    // 0x80047654: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80047658:
    // 0x80047658: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x8004765C: addiu       $s1, $s1, -0x3C8C
    ctx->r17 = ADD32(ctx->r17, -0X3C8C);
    // 0x80047660: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x80047664: jal         0x8005BCB4
    // 0x80047668: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_8005BCB4(rdram, ctx);
        goto after_1;
    // 0x80047668: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_1:
    // 0x8004766C: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x80047670: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80047674: andi        $t8, $t7, 0x2
    ctx->r24 = ctx->r15 & 0X2;
    // 0x80047678: beq         $t8, $zero, L_80047688
    if (ctx->r24 == 0) {
        // 0x8004767C: sll         $t9, $s2, 2
        ctx->r25 = S32(ctx->r18 << 2);
            goto L_80047688;
    }
    // 0x8004767C: sll         $t9, $s2, 2
    ctx->r25 = S32(ctx->r18 << 2);
    // 0x80047680: b           L_80047688
    // 0x80047684: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80047688;
    // 0x80047684: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80047688:
    // 0x80047688: bne         $v0, $zero, L_80047698
    if (ctx->r2 != 0) {
        // 0x8004768C: lui         $at, 0x8009
        ctx->r1 = S32(0X8009 << 16);
            goto L_80047698;
    }
    // 0x8004768C: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80047690: b           L_800476C8
    // 0x80047694: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800476C8;
    // 0x80047694: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80047698:
    // 0x80047698: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8004769C: lw          $t9, 0x1870($at)
    ctx->r25 = MEM_W(ctx->r1, 0X1870);
    // 0x800476A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800476A4: jalr        $t9
    // 0x800476A8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x800476A8: nop

    after_2:
    // 0x800476AC: beq         $v0, $zero, L_800476C4
    if (ctx->r2 == 0) {
        // 0x800476B0: lui         $t6, 0x8004
        ctx->r14 = S32(0X8004 << 16);
            goto L_800476C4;
    }
    // 0x800476B0: lui         $t6, 0x8004
    ctx->r14 = S32(0X8004 << 16);
    // 0x800476B4: addiu       $t6, $t6, 0x38AC
    ctx->r14 = ADD32(ctx->r14, 0X38AC);
    // 0x800476B8: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x800476BC: b           L_800476C8
    // 0x800476C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800476C8;
    // 0x800476C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800476C4:
    // 0x800476C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800476C8:
    // 0x800476C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800476CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800476D0: jr          $ra
    // 0x800476D4: nop

    return;
    // 0x800476D4: nop

    // 0x800476D8: jr          $ra
    // 0x800476DC: nop

    return;
    // 0x800476DC: nop

    // 0x800476E0: jr          $ra
    // 0x800476E4: nop

    return;
    // 0x800476E4: nop

;}
RECOMP_FUNC void func_800476E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800476E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800476EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800476F0: lw          $a0, 0xC($s4)
    ctx->r4 = MEM_W(ctx->r20, 0XC);
    // 0x800476F4: jal         0x8005C3A8
    // 0x800476F8: nop

    func_8005C3A8(rdram, ctx);
        goto after_0;
    // 0x800476F8: nop

    after_0:
    // 0x800476FC: lw          $v0, 0x10($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X10);
    // 0x80047700: nop

    // 0x80047704: andi        $t6, $v0, 0x2
    ctx->r14 = ctx->r2 & 0X2;
    // 0x80047708: bne         $t6, $zero, L_80047718
    if (ctx->r14 != 0) {
        // 0x8004770C: nop
    
            goto L_80047718;
    }
    // 0x8004770C: nop

    // 0x80047710: b           L_800477B0
    // 0x80047714: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800477B0;
    // 0x80047714: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80047718:
    // 0x80047718: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x8004771C: addiu       $s0, $s0, -0x3C8C
    ctx->r16 = ADD32(ctx->r16, -0X3C8C);
    // 0x80047720: lw          $a0, 0xC($s4)
    ctx->r4 = MEM_W(ctx->r20, 0XC);
    // 0x80047724: jal         0x8005BCB4
    // 0x80047728: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8005BCB4(rdram, ctx);
        goto after_1;
    // 0x80047728: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x8004772C: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x80047730: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80047734: andi        $t8, $t7, 0x2
    ctx->r24 = ctx->r15 & 0X2;
    // 0x80047738: beq         $t8, $zero, L_80047748
    if (ctx->r24 == 0) {
        // 0x8004773C: nop
    
            goto L_80047748;
    }
    // 0x8004773C: nop

    // 0x80047740: b           L_80047748
    // 0x80047744: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80047748;
    // 0x80047744: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80047748:
    // 0x80047748: bne         $v0, $zero, L_80047758
    if (ctx->r2 != 0) {
        // 0x8004774C: nop
    
            goto L_80047758;
    }
    // 0x8004774C: nop

    // 0x80047750: b           L_800477B0
    // 0x80047754: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800477B0;
    // 0x80047754: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80047758:
    // 0x80047758: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x8004775C: addiu       $s0, $s0, -0x3C88
    ctx->r16 = ADD32(ctx->r16, -0X3C88);
    // 0x80047760: lw          $a0, 0xC($s4)
    ctx->r4 = MEM_W(ctx->r20, 0XC);
    // 0x80047764: jal         0x8005BBF0
    // 0x80047768: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8005BBF0(rdram, ctx);
        goto after_2;
    // 0x80047768: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
    // 0x8004776C: lw          $t9, 0x4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X4);
    // 0x80047770: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80047774: beq         $t9, $at, L_80047784
    if (ctx->r25 == ctx->r1) {
        // 0x80047778: nop
    
            goto L_80047784;
    }
    // 0x80047778: nop

    // 0x8004777C: b           L_800477B0
    // 0x80047780: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800477B0;
    // 0x80047780: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80047784:
    // 0x80047784: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x80047788: or          $s0, $s4, $zero
    ctx->r16 = ctx->r20 | 0;
    // 0x8004778C: jal         0x80046518
    // 0x80047790: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    func_80046518(rdram, ctx);
        goto after_3;
    // 0x80047790: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    after_3:
    // 0x80047794: beq         $v0, $zero, L_800477AC
    if (ctx->r2 == 0) {
        // 0x80047798: lui         $t6, 0x8004
        ctx->r14 = S32(0X8004 << 16);
            goto L_800477AC;
    }
    // 0x80047798: lui         $t6, 0x8004
    ctx->r14 = S32(0X8004 << 16);
    // 0x8004779C: addiu       $t6, $t6, 0x38AC
    ctx->r14 = ADD32(ctx->r14, 0X38AC);
    // 0x800477A0: sw          $t6, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r14;
    // 0x800477A4: b           L_800477B0
    // 0x800477A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800477B0;
    // 0x800477A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800477AC:
    // 0x800477AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800477B0:
    // 0x800477B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800477B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800477B8: jr          $ra
    // 0x800477BC: nop

    return;
    // 0x800477BC: nop

;}
RECOMP_FUNC void func_800477C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800477C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800477C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800477C8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800477CC: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x800477D0: jal         0x8005C3A8
    // 0x800477D4: nop

    func_8005C3A8(rdram, ctx);
        goto after_0;
    // 0x800477D4: nop

    after_0:
    // 0x800477D8: lw          $v0, 0x10($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X10);
    // 0x800477DC: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x800477E0: andi        $t7, $v0, 0x2
    ctx->r15 = ctx->r2 & 0X2;
    // 0x800477E4: bne         $t7, $zero, L_800477F4
    if (ctx->r15 != 0) {
        // 0x800477E8: lui         $a1, 0x800B
        ctx->r5 = S32(0X800B << 16);
            goto L_800477F4;
    }
    // 0x800477E8: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x800477EC: b           L_80047854
    // 0x800477F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80047854;
    // 0x800477F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800477F4:
    // 0x800477F4: lw          $a0, 0xC($t8)
    ctx->r4 = MEM_W(ctx->r24, 0XC);
    // 0x800477F8: jal         0x8005BCB4
    // 0x800477FC: addiu       $a1, $a1, -0x3C8C
    ctx->r5 = ADD32(ctx->r5, -0X3C8C);
    func_8005BCB4(rdram, ctx);
        goto after_1;
    // 0x800477FC: addiu       $a1, $a1, -0x3C8C
    ctx->r5 = ADD32(ctx->r5, -0X3C8C);
    after_1:
    // 0x80047800: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x80047804: lw          $t9, -0x3C8C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3C8C);
    // 0x80047808: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x8004780C: andi        $t0, $t9, 0x2
    ctx->r8 = ctx->r25 & 0X2;
    // 0x80047810: beq         $t0, $zero, L_80047820
    if (ctx->r8 == 0) {
        // 0x80047814: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80047820;
    }
    // 0x80047814: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80047818: b           L_80047820
    // 0x8004781C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80047820;
    // 0x8004781C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80047820:
    // 0x80047820: beq         $v0, $zero, L_80047830
    if (ctx->r2 == 0) {
        // 0x80047824: lui         $v1, 0x8004
        ctx->r3 = S32(0X8004 << 16);
            goto L_80047830;
    }
    // 0x80047824: lui         $v1, 0x8004
    ctx->r3 = S32(0X8004 << 16);
    // 0x80047828: b           L_80047854
    // 0x8004782C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80047854;
    // 0x8004782C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80047830:
    // 0x80047830: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x80047834: addiu       $v1, $v1, 0x388C
    ctx->r3 = ADD32(ctx->r3, 0X388C);
    // 0x80047838: bne         $v1, $t2, L_8004784C
    if (ctx->r3 != ctx->r10) {
        // 0x8004783C: lw          $t3, 0x18($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X18);
            goto L_8004784C;
    }
    // 0x8004783C: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x80047840: b           L_80047854
    // 0x80047844: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80047854;
    // 0x80047844: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80047848: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
L_8004784C:
    // 0x8004784C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80047850: sw          $v1, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r3;
L_80047854:
    // 0x80047854: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80047858: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8004785C: jr          $ra
    // 0x80047860: nop

    return;
    // 0x80047860: nop

    // 0x80047864: jr          $ra
    // 0x80047868: nop

    return;
    // 0x80047868: nop

    // 0x8004786C: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x80047870: lw          $t6, -0x42C0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X42C0);
    // 0x80047874: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x80047878: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8004787C: sll         $t7, $t6, 11
    ctx->r15 = S32(ctx->r14 << 11);
    // 0x80047880: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80047884: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80047888: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8004788C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80047890: bgez        $t7, L_800478A0
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80047894: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_800478A0;
    }
    // 0x80047894: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80047898: b           L_80047A60
    // 0x8004789C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80047A60;
    // 0x8004789C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800478A0:
    // 0x800478A0: lw          $t8, 0x0($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X0);
    // 0x800478A4: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x800478A8: addiu       $v0, $v0, 0x373C
    ctx->r2 = ADD32(ctx->r2, 0X373C);
    // 0x800478AC: bne         $v0, $t8, L_800478BC
    if (ctx->r2 != ctx->r24) {
        // 0x800478B0: nop
    
            goto L_800478BC;
    }
    // 0x800478B0: nop

    // 0x800478B4: b           L_80047A60
    // 0x800478B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80047A60;
    // 0x800478B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800478BC:
    // 0x800478BC: lw          $a0, 0xC($a1)
    ctx->r4 = MEM_W(ctx->r5, 0XC);
    // 0x800478C0: sw          $a1, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r5;
    // 0x800478C4: jal         0x8005C3A8
    // 0x800478C8: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    func_8005C3A8(rdram, ctx);
        goto after_2;
    // 0x800478C8: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    after_2:
    // 0x800478CC: lw          $v0, 0x10($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X10);
    // 0x800478D0: lui         $t0, 0x800B
    ctx->r8 = S32(0X800B << 16);
    // 0x800478D4: andi        $t9, $v0, 0x2
    ctx->r25 = ctx->r2 & 0X2;
    // 0x800478D8: bne         $t9, $zero, L_800478E8
    if (ctx->r25 != 0) {
        // 0x800478DC: nop
    
            goto L_800478E8;
    }
    // 0x800478DC: nop

    // 0x800478E0: b           L_80047A60
    // 0x800478E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80047A60;
    // 0x800478E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800478E8:
    // 0x800478E8: lw          $t0, -0x3CA0($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X3CA0);
    // 0x800478EC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800478F0: slti        $at, $t0, 0x258
    ctx->r1 = SIGNED(ctx->r8) < 0X258 ? 1 : 0;
    // 0x800478F4: beq         $at, $zero, L_80047904
    if (ctx->r1 == 0) {
        // 0x800478F8: lui         $v1, 0x800B
        ctx->r3 = S32(0X800B << 16);
            goto L_80047904;
    }
    // 0x800478F8: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x800478FC: b           L_80047A60
    // 0x80047900: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80047A60;
    // 0x80047900: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80047904:
    // 0x80047904: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x80047908: addiu       $s1, $s1, -0x3C8C
    ctx->r17 = ADD32(ctx->r17, -0X3C8C);
    // 0x8004790C: addiu       $v1, $v1, -0x4298
    ctx->r3 = ADD32(ctx->r3, -0X4298);
L_80047910:
    // 0x80047910: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80047914: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80047918: jal         0x8005BCB4
    // 0x8004791C: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    func_8005BCB4(rdram, ctx);
        goto after_3;
    // 0x8004791C: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    after_3:
    // 0x80047920: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x80047924: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80047928: lw          $t1, 0xC8($v1)
    ctx->r9 = MEM_W(ctx->r3, 0XC8);
    // 0x8004792C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80047930: bne         $t1, $zero, L_80047960
    if (ctx->r9 != 0) {
        // 0x80047934: nop
    
            goto L_80047960;
    }
    // 0x80047934: nop

    // 0x80047938: lw          $t2, 0x0($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X0);
    // 0x8004793C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80047940: andi        $t3, $t2, 0x1000
    ctx->r11 = ctx->r10 & 0X1000;
    // 0x80047944: beq         $t3, $zero, L_80047954
    if (ctx->r11 == 0) {
        // 0x80047948: nop
    
            goto L_80047954;
    }
    // 0x80047948: nop

    // 0x8004794C: b           L_80047954
    // 0x80047950: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80047954;
    // 0x80047950: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80047954:
    // 0x80047954: bne         $v0, $zero, L_80047960
    if (ctx->r2 != 0) {
        // 0x80047958: nop
    
            goto L_80047960;
    }
    // 0x80047958: nop

    // 0x8004795C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_80047960:
    // 0x80047960: bne         $s0, $at, L_80047910
    if (ctx->r16 != ctx->r1) {
        // 0x80047964: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_80047910;
    }
    // 0x80047964: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80047968: slti        $at, $s2, 0x3
    ctx->r1 = SIGNED(ctx->r18) < 0X3 ? 1 : 0;
    // 0x8004796C: beq         $at, $zero, L_80047980
    if (ctx->r1 == 0) {
        // 0x80047970: lw          $t4, 0x68($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X68);
            goto L_80047980;
    }
    // 0x80047970: lw          $t4, 0x68($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X68);
    // 0x80047974: b           L_80047A60
    // 0x80047978: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80047A60;
    // 0x80047978: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8004797C: lw          $t4, 0x68($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X68);
L_80047980:
    // 0x80047980: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80047984: lw          $a0, 0xC($t4)
    ctx->r4 = MEM_W(ctx->r12, 0XC);
    // 0x80047988: jal         0x8005BCB4
    // 0x8004798C: nop

    func_8005BCB4(rdram, ctx);
        goto after_4;
    // 0x8004798C: nop

    after_4:
    // 0x80047990: lw          $t5, 0x0($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X0);
    // 0x80047994: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80047998: andi        $t6, $t5, 0x400
    ctx->r14 = ctx->r13 & 0X400;
    // 0x8004799C: beq         $t6, $zero, L_800479AC
    if (ctx->r14 == 0) {
        // 0x800479A0: lui         $s0, 0x800B
        ctx->r16 = S32(0X800B << 16);
            goto L_800479AC;
    }
    // 0x800479A0: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x800479A4: b           L_800479AC
    // 0x800479A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800479AC;
    // 0x800479A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800479AC:
    // 0x800479AC: beq         $v0, $zero, L_800479E4
    if (ctx->r2 == 0) {
        // 0x800479B0: lw          $t9, 0x68($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X68);
            goto L_800479E4;
    }
    // 0x800479B0: lw          $t9, 0x68($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X68);
    // 0x800479B4: lw          $t7, 0x68($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X68);
    // 0x800479B8: addiu       $s0, $s0, -0x3C90
    ctx->r16 = ADD32(ctx->r16, -0X3C90);
    // 0x800479BC: lw          $a0, 0xC($t7)
    ctx->r4 = MEM_W(ctx->r15, 0XC);
    // 0x800479C0: jal         0x8005BB84
    // 0x800479C4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8005BB84(rdram, ctx);
        goto after_5;
    // 0x800479C4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_5:
    // 0x800479C8: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x800479CC: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x800479D0: bne         $t8, $at, L_800479E4
    if (ctx->r24 != ctx->r1) {
        // 0x800479D4: lw          $t9, 0x68($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X68);
            goto L_800479E4;
    }
    // 0x800479D4: lw          $t9, 0x68($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X68);
    // 0x800479D8: b           L_80047A60
    // 0x800479DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80047A60;
    // 0x800479DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800479E0: lw          $t9, 0x68($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X68);
L_800479E4:
    // 0x800479E4: nop

    // 0x800479E8: lw          $a0, 0xC($t9)
    ctx->r4 = MEM_W(ctx->r25, 0XC);
    // 0x800479EC: jal         0x8005C3A8
    // 0x800479F0: nop

    func_8005C3A8(rdram, ctx);
        goto after_6;
    // 0x800479F0: nop

    after_6:
    // 0x800479F4: lw          $v0, 0x10($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X10);
    // 0x800479F8: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x800479FC: andi        $t0, $v0, 0x2
    ctx->r8 = ctx->r2 & 0X2;
    // 0x80047A00: bne         $t0, $zero, L_80047A10
    if (ctx->r8 != 0) {
        // 0x80047A04: nop
    
            goto L_80047A10;
    }
    // 0x80047A04: nop

    // 0x80047A08: b           L_80047A40
    // 0x80047A0C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80047A40;
    // 0x80047A0C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80047A10:
    // 0x80047A10: lw          $t9, 0x1870($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X1870);
    // 0x80047A14: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x80047A18: jalr        $t9
    // 0x80047A1C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x80047A1C: nop

    after_7:
    // 0x80047A20: beq         $v0, $zero, L_80047A3C
    if (ctx->r2 == 0) {
        // 0x80047A24: lui         $t1, 0x8004
        ctx->r9 = S32(0X8004 << 16);
            goto L_80047A3C;
    }
    // 0x80047A24: lui         $t1, 0x8004
    ctx->r9 = S32(0X8004 << 16);
    // 0x80047A28: lw          $t2, 0x68($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X68);
    // 0x80047A2C: addiu       $t1, $t1, 0x38AC
    ctx->r9 = ADD32(ctx->r9, 0X38AC);
    // 0x80047A30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80047A34: b           L_80047A40
    // 0x80047A38: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
        goto L_80047A40;
    // 0x80047A38: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
L_80047A3C:
    // 0x80047A3C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80047A40:
    // 0x80047A40: beq         $v0, $zero, L_80047A60
    if (ctx->r2 == 0) {
        // 0x80047A44: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80047A60;
    }
    // 0x80047A44: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80047A48: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x80047A4C: lw          $t4, 0x68($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X68);
    // 0x80047A50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80047A54: b           L_80047A60
    // 0x80047A58: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
        goto L_80047A60;
    // 0x80047A58: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x80047A5C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80047A60:
    // 0x80047A60: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80047A64: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80047A68: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80047A6C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80047A70: jr          $ra
    // 0x80047A74: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x80047A74: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_80047A78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80047A78: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80047A7C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80047A80: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80047A84: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80047A88: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80047A8C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80047A90: jal         0x80047628
    // 0x80047A94: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    func_80047628(rdram, ctx);
        goto after_0;
    // 0x80047A94: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    after_0:
    // 0x80047A98: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80047A9C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80047AA0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80047AA4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80047AA8: jr          $ra
    // 0x80047AAC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80047AAC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80047AB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80047AB0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80047AB4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80047AB8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80047ABC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80047AC0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80047AC4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80047AC8: jal         0x80047628
    // 0x80047ACC: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    func_80047628(rdram, ctx);
        goto after_0;
    // 0x80047ACC: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    after_0:
    // 0x80047AD0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80047AD4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80047AD8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80047ADC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80047AE0: jr          $ra
    // 0x80047AE4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80047AE4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80047AE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80047AE8: jr          $ra
    // 0x80047AEC: nop

    return;
    // 0x80047AEC: nop

;}
RECOMP_FUNC void func_80047AF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80047AF0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80047AF4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80047AF8: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80047AFC: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80047B00: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80047B04: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80047B08: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80047B0C: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80047B10: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80047B14: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x80047B18: jal         0x800476E8
    // 0x80047B1C: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    func_800476E8(rdram, ctx);
        goto after_0;
    // 0x80047B1C: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    after_0:
    // 0x80047B20: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80047B24: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80047B28: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80047B2C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80047B30: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80047B34: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80047B38: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80047B3C: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80047B40: jr          $ra
    // 0x80047B44: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80047B44: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80047B48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80047B48: jr          $ra
    // 0x80047B4C: nop

    return;
    // 0x80047B4C: nop

;}
RECOMP_FUNC void func_80047B50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80047B50: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80047B54: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80047B58: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80047B5C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80047B60: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80047B64: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80047B68: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80047B6C: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80047B70: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80047B74: addiu       $s2, $zero, 0x4
    ctx->r18 = ADD32(0, 0X4);
    // 0x80047B78: jal         0x800476E8
    // 0x80047B7C: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    func_800476E8(rdram, ctx);
        goto after_0;
    // 0x80047B7C: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    after_0:
    // 0x80047B80: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80047B84: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80047B88: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80047B8C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80047B90: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80047B94: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80047B98: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80047B9C: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80047BA0: jr          $ra
    // 0x80047BA4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80047BA4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80047BA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80047BA8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80047BAC: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80047BB0: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x80047BB4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80047BB8: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80047BBC: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80047BC0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80047BC4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80047BC8: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80047BCC: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80047BD0: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x80047BD4: jal         0x8005C3A8
    // 0x80047BD8: nop

    func_8005C3A8(rdram, ctx);
        goto after_0;
    // 0x80047BD8: nop

    after_0:
    // 0x80047BDC: lw          $v0, 0x10($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X10);
    // 0x80047BE0: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80047BE4: andi        $t6, $v0, 0x2
    ctx->r14 = ctx->r2 & 0X2;
    // 0x80047BE8: bne         $t6, $zero, L_80047BF8
    if (ctx->r14 != 0) {
        // 0x80047BEC: nop
    
            goto L_80047BF8;
    }
    // 0x80047BEC: nop

    // 0x80047BF0: b           L_80047C88
    // 0x80047BF4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80047C88;
    // 0x80047BF4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80047BF8:
    // 0x80047BF8: lw          $a0, 0xC($s4)
    ctx->r4 = MEM_W(ctx->r20, 0XC);
    // 0x80047BFC: jal         0x8005BCB4
    // 0x80047C00: addiu       $a1, $a1, -0x3C8C
    ctx->r5 = ADD32(ctx->r5, -0X3C8C);
    func_8005BCB4(rdram, ctx);
        goto after_1;
    // 0x80047C00: addiu       $a1, $a1, -0x3C8C
    ctx->r5 = ADD32(ctx->r5, -0X3C8C);
    after_1:
    // 0x80047C04: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x80047C08: lw          $t7, -0x3C8C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3C8C);
    // 0x80047C0C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80047C10: andi        $t8, $t7, 0x2
    ctx->r24 = ctx->r15 & 0X2;
    // 0x80047C14: beq         $t8, $zero, L_80047C24
    if (ctx->r24 == 0) {
        // 0x80047C18: lui         $a1, 0x800B
        ctx->r5 = S32(0X800B << 16);
            goto L_80047C24;
    }
    // 0x80047C18: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80047C1C: b           L_80047C24
    // 0x80047C20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80047C24;
    // 0x80047C20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80047C24:
    // 0x80047C24: bne         $v0, $zero, L_80047C34
    if (ctx->r2 != 0) {
        // 0x80047C28: nop
    
            goto L_80047C34;
    }
    // 0x80047C28: nop

    // 0x80047C2C: b           L_80047C88
    // 0x80047C30: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80047C88;
    // 0x80047C30: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80047C34:
    // 0x80047C34: lw          $a0, 0xC($s4)
    ctx->r4 = MEM_W(ctx->r20, 0XC);
    // 0x80047C38: jal         0x8005BBF0
    // 0x80047C3C: addiu       $a1, $a1, -0x3C88
    ctx->r5 = ADD32(ctx->r5, -0X3C88);
    func_8005BBF0(rdram, ctx);
        goto after_2;
    // 0x80047C3C: addiu       $a1, $a1, -0x3C88
    ctx->r5 = ADD32(ctx->r5, -0X3C88);
    after_2:
    // 0x80047C40: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x80047C44: lw          $t9, -0x3C84($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3C84);
    // 0x80047C48: or          $s0, $s4, $zero
    ctx->r16 = ctx->r20 | 0;
    // 0x80047C4C: bne         $t9, $zero, L_80047C5C
    if (ctx->r25 != 0) {
        // 0x80047C50: addiu       $s3, $zero, 0x1
        ctx->r19 = ADD32(0, 0X1);
            goto L_80047C5C;
    }
    // 0x80047C50: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x80047C54: b           L_80047C88
    // 0x80047C58: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80047C88;
    // 0x80047C58: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80047C5C:
    // 0x80047C5C: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x80047C60: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80047C64: jal         0x80046518
    // 0x80047C68: addiu       $s2, $zero, 0x4
    ctx->r18 = ADD32(0, 0X4);
    func_80046518(rdram, ctx);
        goto after_3;
    // 0x80047C68: addiu       $s2, $zero, 0x4
    ctx->r18 = ADD32(0, 0X4);
    after_3:
    // 0x80047C6C: blez        $v0, L_80047C84
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80047C70: lui         $t6, 0x8004
        ctx->r14 = S32(0X8004 << 16);
            goto L_80047C84;
    }
    // 0x80047C70: lui         $t6, 0x8004
    ctx->r14 = S32(0X8004 << 16);
    // 0x80047C74: addiu       $t6, $t6, 0x38AC
    ctx->r14 = ADD32(ctx->r14, 0X38AC);
    // 0x80047C78: sw          $t6, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r14;
    // 0x80047C7C: b           L_80047C88
    // 0x80047C80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80047C88;
    // 0x80047C80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80047C84:
    // 0x80047C84: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80047C88:
    // 0x80047C88: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80047C8C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80047C90: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80047C94: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80047C98: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80047C9C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80047CA0: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80047CA4: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80047CA8: jr          $ra
    // 0x80047CAC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80047CAC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80047CB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80047CB0: jr          $ra
    // 0x80047CB4: nop

    return;
    // 0x80047CB4: nop

;}
RECOMP_FUNC void func_80047CB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80047CB8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80047CBC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80047CC0: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80047CC4: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80047CC8: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80047CCC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80047CD0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80047CD4: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80047CD8: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80047CDC: lw          $t6, 0x2C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X2C);
    // 0x80047CE0: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x80047CE4: slti        $at, $t6, 0xD
    ctx->r1 = SIGNED(ctx->r14) < 0XD ? 1 : 0;
    // 0x80047CE8: bne         $at, $zero, L_80047D0C
    if (ctx->r1 != 0) {
        // 0x80047CEC: nop
    
            goto L_80047D0C;
    }
    // 0x80047CEC: nop

    // 0x80047CF0: lw          $t7, 0x10($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X10);
    // 0x80047CF4: lw          $t8, 0x14($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X14);
    // 0x80047CF8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80047CFC: bne         $t7, $t8, L_80047D0C
    if (ctx->r15 != ctx->r24) {
        // 0x80047D00: nop
    
            goto L_80047D0C;
    }
    // 0x80047D00: nop

    // 0x80047D04: b           L_80047ED0
    // 0x80047D08: sw          $zero, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = 0;
        goto L_80047ED0;
    // 0x80047D08: sw          $zero, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = 0;
L_80047D0C:
    // 0x80047D0C: lw          $a0, 0xC($s4)
    ctx->r4 = MEM_W(ctx->r20, 0XC);
    // 0x80047D10: jal         0x8005C3A8
    // 0x80047D14: nop

    func_8005C3A8(rdram, ctx);
        goto after_0;
    // 0x80047D14: nop

    after_0:
    // 0x80047D18: lw          $v0, 0x10($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X10);
    // 0x80047D1C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80047D20: andi        $t9, $v0, 0x2
    ctx->r25 = ctx->r2 & 0X2;
    // 0x80047D24: bne         $t9, $zero, L_80047D34
    if (ctx->r25 != 0) {
        // 0x80047D28: nop
    
            goto L_80047D34;
    }
    // 0x80047D28: nop

    // 0x80047D2C: b           L_80047ED0
    // 0x80047D30: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80047ED0;
    // 0x80047D30: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80047D34:
    // 0x80047D34: lw          $a0, 0xC($s4)
    ctx->r4 = MEM_W(ctx->r20, 0XC);
    // 0x80047D38: jal         0x8005BCB4
    // 0x80047D3C: addiu       $a1, $a1, -0x3C8C
    ctx->r5 = ADD32(ctx->r5, -0X3C8C);
    func_8005BCB4(rdram, ctx);
        goto after_1;
    // 0x80047D3C: addiu       $a1, $a1, -0x3C8C
    ctx->r5 = ADD32(ctx->r5, -0X3C8C);
    after_1:
    // 0x80047D40: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80047D44: lw          $v1, -0x3C8C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3C8C);
    // 0x80047D48: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80047D4C: andi        $t6, $v1, 0x2
    ctx->r14 = ctx->r3 & 0X2;
    // 0x80047D50: beq         $t6, $zero, L_80047D60
    if (ctx->r14 == 0) {
        // 0x80047D54: andi        $t7, $v1, 0x400
        ctx->r15 = ctx->r3 & 0X400;
            goto L_80047D60;
    }
    // 0x80047D54: andi        $t7, $v1, 0x400
    ctx->r15 = ctx->r3 & 0X400;
    // 0x80047D58: b           L_80047D60
    // 0x80047D5C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80047D60;
    // 0x80047D5C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80047D60:
    // 0x80047D60: beq         $v0, $zero, L_80047D70
    if (ctx->r2 == 0) {
        // 0x80047D64: nop
    
            goto L_80047D70;
    }
    // 0x80047D64: nop

    // 0x80047D68: b           L_80047ED0
    // 0x80047D6C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80047ED0;
    // 0x80047D6C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80047D70:
    // 0x80047D70: beq         $t7, $zero, L_80047D80
    if (ctx->r15 == 0) {
        // 0x80047D74: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80047D80;
    }
    // 0x80047D74: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80047D78: b           L_80047D80
    // 0x80047D7C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80047D80;
    // 0x80047D7C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80047D80:
    // 0x80047D80: beq         $v0, $zero, L_80047DB0
    if (ctx->r2 == 0) {
        // 0x80047D84: lui         $a1, 0x800B
        ctx->r5 = S32(0X800B << 16);
            goto L_80047DB0;
    }
    // 0x80047D84: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80047D88: lw          $a0, 0xC($s4)
    ctx->r4 = MEM_W(ctx->r20, 0XC);
    // 0x80047D8C: jal         0x8005BB84
    // 0x80047D90: addiu       $a1, $a1, -0x3C90
    ctx->r5 = ADD32(ctx->r5, -0X3C90);
    func_8005BB84(rdram, ctx);
        goto after_2;
    // 0x80047D90: addiu       $a1, $a1, -0x3C90
    ctx->r5 = ADD32(ctx->r5, -0X3C90);
    after_2:
    // 0x80047D94: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x80047D98: lw          $t8, -0x3C90($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3C90);
    // 0x80047D9C: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80047DA0: bne         $t8, $at, L_80047DB4
    if (ctx->r24 != ctx->r1) {
        // 0x80047DA4: lui         $at, 0x4316
        ctx->r1 = S32(0X4316 << 16);
            goto L_80047DB4;
    }
    // 0x80047DA4: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x80047DA8: b           L_80047ED0
    // 0x80047DAC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80047ED0;
    // 0x80047DAC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80047DB0:
    // 0x80047DB0: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
L_80047DB4:
    // 0x80047DB4: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80047DB8: or          $s0, $s4, $zero
    ctx->r16 = ctx->r20 | 0;
    // 0x80047DBC: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x80047DC0: jal         0x80046518
    // 0x80047DC4: addiu       $s2, $zero, 0x5
    ctx->r18 = ADD32(0, 0X5);
    func_80046518(rdram, ctx);
        goto after_3;
    // 0x80047DC4: addiu       $s2, $zero, 0x5
    ctx->r18 = ADD32(0, 0X5);
    after_3:
    // 0x80047DC8: bgez        $v0, L_80047E98
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80047DCC: nop
    
            goto L_80047E98;
    }
    // 0x80047DCC: nop

    // 0x80047DD0: lw          $a0, 0x10($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X10);
    // 0x80047DD4: jal         0x8005B858
    // 0x80047DD8: nop

    func_8005B858(rdram, ctx);
        goto after_4;
    // 0x80047DD8: nop

    after_4:
    // 0x80047DDC: bltz        $v0, L_80047DEC
    if (SIGNED(ctx->r2) < 0) {
        // 0x80047DE0: addiu       $t1, $zero, 0x4
        ctx->r9 = ADD32(0, 0X4);
            goto L_80047DEC;
    }
    // 0x80047DE0: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x80047DE4: b           L_80047ED0
    // 0x80047DE8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80047ED0;
    // 0x80047DE8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80047DEC:
    // 0x80047DEC: lui         $a3, 0x800D
    ctx->r7 = S32(0X800D << 16);
    // 0x80047DF0: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80047DF4: lw          $a1, 0xC($s4)
    ctx->r5 = MEM_W(ctx->r20, 0XC);
    // 0x80047DF8: addiu       $a0, $a0, -0x4298
    ctx->r4 = ADD32(ctx->r4, -0X4298);
    // 0x80047DFC: addiu       $a3, $a3, -0x7688
    ctx->r7 = ADD32(ctx->r7, -0X7688);
    // 0x80047E00: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80047E04: addiu       $t0, $zero, 0x38
    ctx->r8 = ADD32(0, 0X38);
    // 0x80047E08: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
L_80047E0C:
    // 0x80047E0C: beq         $v0, $a1, L_80047E7C
    if (ctx->r2 == ctx->r5) {
        // 0x80047E10: sll         $t9, $v0, 2
        ctx->r25 = S32(ctx->r2 << 2);
            goto L_80047E7C;
    }
    // 0x80047E10: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x80047E14: addu        $v1, $a0, $t9
    ctx->r3 = ADD32(ctx->r4, ctx->r25);
    // 0x80047E18: lw          $t6, 0x4($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X4);
    // 0x80047E1C: nop

    // 0x80047E20: bne         $a2, $t6, L_80047E7C
    if (ctx->r6 != ctx->r14) {
        // 0x80047E24: nop
    
            goto L_80047E7C;
    }
    // 0x80047E24: nop

    // 0x80047E28: multu       $v0, $t0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80047E2C: lw          $t7, 0x10($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X10);
    // 0x80047E30: mflo        $t8
    ctx->r24 = lo;
    // 0x80047E34: addu        $t9, $a3, $t8
    ctx->r25 = ADD32(ctx->r7, ctx->r24);
    // 0x80047E38: lw          $t6, 0x10($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X10);
    // 0x80047E3C: sll         $t9, $a1, 2
    ctx->r25 = S32(ctx->r5 << 2);
    // 0x80047E40: bne         $t7, $t6, L_80047E7C
    if (ctx->r15 != ctx->r14) {
        // 0x80047E44: nop
    
            goto L_80047E7C;
    }
    // 0x80047E44: nop

    // 0x80047E48: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x80047E4C: addu        $t7, $a0, $t9
    ctx->r15 = ADD32(ctx->r4, ctx->r25);
    // 0x80047E50: bne         $a2, $t8, L_80047E74
    if (ctx->r6 != ctx->r24) {
        // 0x80047E54: nop
    
            goto L_80047E74;
    }
    // 0x80047E54: nop

    // 0x80047E58: lw          $t6, 0x94($t7)
    ctx->r14 = MEM_W(ctx->r15, 0X94);
    // 0x80047E5C: lw          $t8, 0x94($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X94);
    // 0x80047E60: nop

    // 0x80047E64: bne         $t6, $t8, L_80047E80
    if (ctx->r14 != ctx->r24) {
        // 0x80047E68: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_80047E80;
    }
    // 0x80047E68: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80047E6C: b           L_80047ED0
    // 0x80047E70: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80047ED0;
    // 0x80047E70: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80047E74:
    // 0x80047E74: b           L_80047ED0
    // 0x80047E78: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80047ED0;
    // 0x80047E78: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80047E7C:
    // 0x80047E7C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80047E80:
    // 0x80047E80: bne         $v0, $t1, L_80047E0C
    if (ctx->r2 != ctx->r9) {
        // 0x80047E84: nop
    
            goto L_80047E0C;
    }
    // 0x80047E84: nop

    // 0x80047E88: jal         0x800418F4
    // 0x80047E8C: or          $s0, $s4, $zero
    ctx->r16 = ctx->r20 | 0;
    func_800418F4(rdram, ctx);
        goto after_5;
    // 0x80047E8C: or          $s0, $s4, $zero
    ctx->r16 = ctx->r20 | 0;
    after_5:
    // 0x80047E90: b           L_80047ED4
    // 0x80047E94: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_80047ED4;
    // 0x80047E94: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_80047E98:
    // 0x80047E98: blez        $v0, L_80047ED0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80047E9C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80047ED0;
    }
    // 0x80047E9C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80047EA0: lw          $a0, 0x10($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X10);
    // 0x80047EA4: jal         0x8005B858
    // 0x80047EA8: nop

    func_8005B858(rdram, ctx);
        goto after_6;
    // 0x80047EA8: nop

    after_6:
    // 0x80047EAC: bltz        $v0, L_80047EBC
    if (SIGNED(ctx->r2) < 0) {
        // 0x80047EB0: lui         $t9, 0x8004
        ctx->r25 = S32(0X8004 << 16);
            goto L_80047EBC;
    }
    // 0x80047EB0: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x80047EB4: b           L_80047ED0
    // 0x80047EB8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80047ED0;
    // 0x80047EB8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80047EBC:
    // 0x80047EBC: addiu       $t9, $t9, 0x3614
    ctx->r25 = ADD32(ctx->r25, 0X3614);
    // 0x80047EC0: sw          $t9, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r25;
    // 0x80047EC4: b           L_80047ED0
    // 0x80047EC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80047ED0;
    // 0x80047EC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80047ECC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80047ED0:
    // 0x80047ED0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_80047ED4:
    // 0x80047ED4: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80047ED8: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80047EDC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80047EE0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80047EE4: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80047EE8: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80047EEC: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80047EF0: jr          $ra
    // 0x80047EF4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80047EF4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80047EF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80047EF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80047EFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80047F00: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80047F04: lw          $a0, 0xC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XC);
    // 0x80047F08: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80047F0C: addiu       $a1, $a1, -0x3C8C
    ctx->r5 = ADD32(ctx->r5, -0X3C8C);
    // 0x80047F10: jal         0x8005BCB4
    // 0x80047F14: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_8005BCB4(rdram, ctx);
        goto after_0;
    // 0x80047F14: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x80047F18: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x80047F1C: lw          $t6, -0x3C8C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3C8C);
    // 0x80047F20: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x80047F24: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x80047F28: beq         $t7, $zero, L_80047F38
    if (ctx->r15 == 0) {
        // 0x80047F2C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80047F38;
    }
    // 0x80047F2C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80047F30: b           L_80047F38
    // 0x80047F34: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80047F38;
    // 0x80047F34: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80047F38:
    // 0x80047F38: bne         $v0, $zero, L_80047F48
    if (ctx->r2 != 0) {
        // 0x80047F3C: lui         $a1, 0x800B
        ctx->r5 = S32(0X800B << 16);
            goto L_80047F48;
    }
    // 0x80047F3C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80047F40: b           L_80047FAC
    // 0x80047F44: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80047FAC;
    // 0x80047F44: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80047F48:
    // 0x80047F48: lw          $a0, 0xC($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XC);
    // 0x80047F4C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x80047F50: jal         0x8005BBF0
    // 0x80047F54: addiu       $a1, $a1, -0x3C88
    ctx->r5 = ADD32(ctx->r5, -0X3C88);
    func_8005BBF0(rdram, ctx);
        goto after_1;
    // 0x80047F54: addiu       $a1, $a1, -0x3C88
    ctx->r5 = ADD32(ctx->r5, -0X3C88);
    after_1:
    // 0x80047F58: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80047F5C: addiu       $v0, $v0, -0x3C88
    ctx->r2 = ADD32(ctx->r2, -0X3C88);
    // 0x80047F60: lw          $t8, 0x4($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X4);
    // 0x80047F64: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x80047F68: bne         $t8, $zero, L_80047F9C
    if (ctx->r24 != 0) {
        // 0x80047F6C: lui         $t4, 0x8004
        ctx->r12 = S32(0X8004 << 16);
            goto L_80047F9C;
    }
    // 0x80047F6C: lui         $t4, 0x8004
    ctx->r12 = S32(0X8004 << 16);
    // 0x80047F70: lw          $t0, 0xC($a2)
    ctx->r8 = MEM_W(ctx->r6, 0XC);
    // 0x80047F74: lui         $t2, 0x800B
    ctx->r10 = S32(0X800B << 16);
    // 0x80047F78: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80047F7C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80047F80: lw          $t2, -0x4204($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X4204);
    // 0x80047F84: lw          $t9, 0x8($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X8);
    // 0x80047F88: addiu       $t3, $t2, 0x4
    ctx->r11 = ADD32(ctx->r10, 0X4);
    // 0x80047F8C: bne         $t9, $t3, L_80047F9C
    if (ctx->r25 != ctx->r11) {
        // 0x80047F90: nop
    
            goto L_80047F9C;
    }
    // 0x80047F90: nop

    // 0x80047F94: b           L_80047FAC
    // 0x80047F98: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80047FAC;
    // 0x80047F98: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80047F9C:
    // 0x80047F9C: addiu       $t4, $t4, 0x3614
    ctx->r12 = ADD32(ctx->r12, 0X3614);
    // 0x80047FA0: sw          $t4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r12;
    // 0x80047FA4: sw          $zero, 0x2C($a2)
    MEM_W(0X2C, ctx->r6) = 0;
    // 0x80047FA8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80047FAC:
    // 0x80047FAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80047FB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80047FB4: jr          $ra
    // 0x80047FB8: nop

    return;
    // 0x80047FB8: nop

    // 0x80047FBC: jr          $ra
    // 0x80047FC0: nop

    return;
    // 0x80047FC0: nop

    // 0x80047FC4: jr          $ra
    // 0x80047FC8: nop

    return;
    // 0x80047FC8: nop

    // 0x80047FCC: jr          $ra
    // 0x80047FD0: nop

    return;
    // 0x80047FD0: nop

    // 0x80047FD4: jr          $ra
    // 0x80047FD8: nop

    return;
    // 0x80047FD8: nop

    // 0x80047FDC: nop

;}
RECOMP_FUNC void func_80047FE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80047FE0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80047FE4: jr          $ra
    // 0x80047FE8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x80047FE8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_80047FEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80047FEC: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80047FF0: sw          $a0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r4;
    // 0x80047FF4: sw          $a1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r5;
    // 0x80047FF8: sw          $a2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r6;
    // 0x80047FFC: sw          $a3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r7;
    // 0x80048000: jr          $ra
    // 0x80048004: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80048004: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80048010(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80048010: jr          $ra
    // 0x80048014: nop

    return;
    // 0x80048014: nop

;}
RECOMP_FUNC void func_80048020(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80048020: addiu       $sp, $sp, -0x2A0
    ctx->r29 = ADD32(ctx->r29, -0X2A0);
    // 0x80048024: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80048028: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8004802C: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80048030: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80048034: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80048038: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8004803C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80048040: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80048044: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80048048: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8004804C: sw          $a0, 0x2A0($sp)
    MEM_W(0X2A0, ctx->r29) = ctx->r4;
    // 0x80048050: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    // 0x80048054: sb          $zero, 0x19C($sp)
    MEM_B(0X19C, ctx->r29) = 0;
    // 0x80048058: lbu         $t7, 0x0($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X0);
    // 0x8004805C: or          $s3, $a2, $zero
    ctx->r19 = ctx->r6 | 0;
    // 0x80048060: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x80048064: beq         $t7, $zero, L_80048434
    if (ctx->r15 == 0) {
        // 0x80048068: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_80048434;
    }
    // 0x80048068: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8004806C: lbu         $a1, 0x0($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X0);
    // 0x80048070: addiu       $fp, $zero, 0x78
    ctx->r30 = ADD32(0, 0X78);
    // 0x80048074: addiu       $s7, $zero, 0x63
    ctx->r23 = ADD32(0, 0X63);
    // 0x80048078: addiu       $s6, $zero, 0x73
    ctx->r22 = ADD32(0, 0X73);
    // 0x8004807C: addiu       $s5, $zero, 0x64
    ctx->r21 = ADD32(0, 0X64);
    // 0x80048080: addiu       $s4, $zero, 0x66
    ctx->r20 = ADD32(0, 0X66);
    // 0x80048084: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
L_80048088:
    // 0x80048088: addiu       $t8, $sp, 0x19C
    ctx->r24 = ADD32(ctx->r29, 0X19C);
    // 0x8004808C: addiu       $at, $zero, 0x25
    ctx->r1 = ADD32(0, 0X25);
    // 0x80048090: bne         $a0, $at, L_80048418
    if (ctx->r4 != ctx->r1) {
        // 0x80048094: addu        $v0, $s0, $t8
        ctx->r2 = ADD32(ctx->r16, ctx->r24);
            goto L_80048418;
    }
    // 0x80048094: addu        $v0, $s0, $t8
    ctx->r2 = ADD32(ctx->r16, ctx->r24);
    // 0x80048098: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x8004809C: lw          $a0, 0x2A0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2A0);
    // 0x800480A0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800480A4: addiu       $a1, $sp, 0x19C
    ctx->r5 = ADD32(ctx->r29, 0X19C);
    // 0x800480A8: jal         0x800015A0
    // 0x800480AC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    func_800015A0(rdram, ctx);
        goto after_0;
    // 0x800480AC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    after_0:
    // 0x800480B0: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
    // 0x800480B4: addiu       $t0, $zero, 0x58
    ctx->r8 = ADD32(0, 0X58);
    // 0x800480B8: addiu       $t1, $zero, 0x65
    ctx->r9 = ADD32(0, 0X65);
    // 0x800480BC: beq         $s4, $a1, L_80048150
    if (ctx->r20 == ctx->r5) {
        // 0x800480C0: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_80048150;
    }
    // 0x800480C0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x800480C4: beq         $s5, $a0, L_80048150
    if (ctx->r21 == ctx->r4) {
        // 0x800480C8: nop
    
            goto L_80048150;
    }
    // 0x800480C8: nop

    // 0x800480CC: beq         $s6, $a0, L_80048150
    if (ctx->r22 == ctx->r4) {
        // 0x800480D0: nop
    
            goto L_80048150;
    }
    // 0x800480D0: nop

    // 0x800480D4: beq         $s7, $a0, L_80048150
    if (ctx->r23 == ctx->r4) {
        // 0x800480D8: nop
    
            goto L_80048150;
    }
    // 0x800480D8: nop

    // 0x800480DC: beq         $fp, $a0, L_80048150
    if (ctx->r30 == ctx->r4) {
        // 0x800480E0: nop
    
            goto L_80048150;
    }
    // 0x800480E0: nop

    // 0x800480E4: beq         $t0, $a0, L_80048150
    if (ctx->r8 == ctx->r4) {
        // 0x800480E8: nop
    
            goto L_80048150;
    }
    // 0x800480E8: nop

    // 0x800480EC: beq         $t1, $a0, L_80048150
    if (ctx->r9 == ctx->r4) {
        // 0x800480F0: addiu       $t9, $sp, 0x19C
        ctx->r25 = ADD32(ctx->r29, 0X19C);
            goto L_80048150;
    }
    // 0x800480F0: addiu       $t9, $sp, 0x19C
    ctx->r25 = ADD32(ctx->r29, 0X19C);
    // 0x800480F4: addu        $v0, $s0, $t9
    ctx->r2 = ADD32(ctx->r16, ctx->r25);
    // 0x800480F8: addiu       $at, $zero, 0x6C
    ctx->r1 = ADD32(0, 0X6C);
L_800480FC:
    // 0x800480FC: bne         $a0, $at, L_80048108
    if (ctx->r4 != ctx->r1) {
        // 0x80048100: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_80048108;
    }
    // 0x80048100: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80048104: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_80048108:
    // 0x80048108: sb          $a1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r5;
    // 0x8004810C: lbu         $a1, 0x1($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X1);
    // 0x80048110: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80048114: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80048118: beq         $s4, $a1, L_80048150
    if (ctx->r20 == ctx->r5) {
        // 0x8004811C: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_80048150;
    }
    // 0x8004811C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80048120: beq         $s5, $a0, L_80048150
    if (ctx->r21 == ctx->r4) {
        // 0x80048124: nop
    
            goto L_80048150;
    }
    // 0x80048124: nop

    // 0x80048128: beq         $s6, $a0, L_80048150
    if (ctx->r22 == ctx->r4) {
        // 0x8004812C: nop
    
            goto L_80048150;
    }
    // 0x8004812C: nop

    // 0x80048130: beq         $s7, $a0, L_80048150
    if (ctx->r23 == ctx->r4) {
        // 0x80048134: nop
    
            goto L_80048150;
    }
    // 0x80048134: nop

    // 0x80048138: beq         $fp, $a0, L_80048150
    if (ctx->r30 == ctx->r4) {
        // 0x8004813C: nop
    
            goto L_80048150;
    }
    // 0x8004813C: nop

    // 0x80048140: beq         $t0, $a0, L_80048150
    if (ctx->r8 == ctx->r4) {
        // 0x80048144: nop
    
            goto L_80048150;
    }
    // 0x80048144: nop

    // 0x80048148: bne         $t1, $a0, L_800480FC
    if (ctx->r9 != ctx->r4) {
        // 0x8004814C: addiu       $at, $zero, 0x6C
        ctx->r1 = ADD32(0, 0X6C);
            goto L_800480FC;
    }
    // 0x8004814C: addiu       $at, $zero, 0x6C
    ctx->r1 = ADD32(0, 0X6C);
L_80048150:
    // 0x80048150: addiu       $a0, $sp, 0x19C
    ctx->r4 = ADD32(ctx->r29, 0X19C);
    // 0x80048154: addu        $t2, $a0, $s0
    ctx->r10 = ADD32(ctx->r4, ctx->r16);
    // 0x80048158: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8004815C: sb          $a1, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r5;
    // 0x80048160: addu        $v0, $a0, $s0
    ctx->r2 = ADD32(ctx->r4, ctx->r16);
    // 0x80048164: lbu         $v1, -0x1($v0)
    ctx->r3 = MEM_BU(ctx->r2, -0X1);
    // 0x80048168: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8004816C: beq         $s4, $v1, L_80048178
    if (ctx->r20 == ctx->r3) {
        // 0x80048170: sb          $zero, 0x0($v0)
        MEM_B(0X0, ctx->r2) = 0;
            goto L_80048178;
    }
    // 0x80048170: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x80048174: bne         $t1, $v1, L_8004833C
    if (ctx->r9 != ctx->r3) {
        // 0x80048178: andi        $t3, $s3, 0x1
        ctx->r11 = ctx->r19 & 0X1;
            goto L_8004833C;
    }
L_80048178:
    // 0x80048178: andi        $t3, $s3, 0x1
    ctx->r11 = ctx->r19 & 0X1;
    // 0x8004817C: beq         $t3, $zero, L_80048190
    if (ctx->r11 == 0) {
        // 0x80048180: addiu       $t2, $zero, 0x0
        ctx->r10 = ADD32(0, 0X0);
            goto L_80048190;
    }
    // 0x80048180: addiu       $t2, $zero, 0x0
    ctx->r10 = ADD32(0, 0X0);
    // 0x80048184: addiu       $s3, $s3, 0x7
    ctx->r19 = ADD32(ctx->r19, 0X7);
    // 0x80048188: b           L_800481BC
    // 0x8004818C: addiu       $a2, $s3, -0x16
    ctx->r6 = ADD32(ctx->r19, -0X16);
        goto L_800481BC;
    // 0x8004818C: addiu       $a2, $s3, -0x16
    ctx->r6 = ADD32(ctx->r19, -0X16);
L_80048190:
    // 0x80048190: andi        $t4, $s3, 0x2
    ctx->r12 = ctx->r19 & 0X2;
    // 0x80048194: beq         $t4, $zero, L_800481A8
    if (ctx->r12 == 0) {
        // 0x80048198: addiu       $at, $zero, -0x8
        ctx->r1 = ADD32(0, -0X8);
            goto L_800481A8;
    }
    // 0x80048198: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x8004819C: addiu       $s3, $s3, 0xA
    ctx->r19 = ADD32(ctx->r19, 0XA);
    // 0x800481A0: b           L_800481B8
    // 0x800481A4: addiu       $v0, $s3, -0x28
    ctx->r2 = ADD32(ctx->r19, -0X28);
        goto L_800481B8;
    // 0x800481A4: addiu       $v0, $s3, -0x28
    ctx->r2 = ADD32(ctx->r19, -0X28);
L_800481A8:
    // 0x800481A8: addiu       $s3, $s3, 0x7
    ctx->r19 = ADD32(ctx->r19, 0X7);
    // 0x800481AC: and         $t5, $s3, $at
    ctx->r13 = ctx->r19 & ctx->r1;
    // 0x800481B0: addiu       $s3, $t5, 0x8
    ctx->r19 = ADD32(ctx->r13, 0X8);
    // 0x800481B4: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
L_800481B8:
    // 0x800481B8: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
L_800481BC:
    // 0x800481BC: lwc1        $f5, -0x8($a2)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r6, -0X8);
    // 0x800481C0: lwc1        $f4, -0x4($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, -0X4);
    // 0x800481C4: swc1        $f5, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f_odd[(5 - 1) * 2];
    // 0x800481C8: lwc1        $f7, 0x88($sp)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r29, 0X88);
    // 0x800481CC: addiu       $v0, $zero, 0x7FF
    ctx->r2 = ADD32(0, 0X7FF);
    // 0x800481D0: swc1        $f7, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f_odd[(7 - 1) * 2];
    // 0x800481D4: lw          $t6, 0x60($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X60);
    // 0x800481D8: addiu       $at, $zero, 0x0
    ctx->r1 = ADD32(0, 0X0);
    // 0x800481DC: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x800481E0: srl         $t8, $t7, 21
    ctx->r24 = S32(U32(ctx->r15) >> 21);
    // 0x800481E4: xor         $v0, $v0, $t8
    ctx->r2 = ctx->r2 ^ ctx->r24;
    // 0x800481E8: xor         $at, $at, $t2
    ctx->r1 = ctx->r1 ^ ctx->r10;
    // 0x800481EC: swc1        $f4, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f4.u32l;
    // 0x800481F0: lwc1        $f6, 0x8C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x800481F4: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
    // 0x800481F8: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x800481FC: beq         $v0, $zero, L_80048230
    if (ctx->r2 == 0) {
        // 0x80048200: swc1        $f6, 0x64($sp)
        MEM_W(0X64, ctx->r29) = ctx->f6.u32l;
            goto L_80048230;
    }
    // 0x80048200: swc1        $f6, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f6.u32l;
    // 0x80048204: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x80048208: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x8004820C: jal         0x8007E804
    // 0x80048210: addiu       $a2, $zero, 0x34
    ctx->r6 = ADD32(0, 0X34);
    __ull_bit_extract(rdram, ctx);
        goto after_1;
    // 0x80048210: addiu       $a2, $zero, 0x34
    ctx->r6 = ADD32(0, 0X34);
    after_1:
    // 0x80048214: addiu       $t4, $zero, 0x0
    ctx->r12 = ADD32(0, 0X0);
    // 0x80048218: addiu       $at, $zero, 0x0
    ctx->r1 = ADD32(0, 0X0);
    // 0x8004821C: xor         $at, $at, $v0
    ctx->r1 = ctx->r1 ^ ctx->r2;
    // 0x80048220: xor         $t4, $t4, $v1
    ctx->r12 = ctx->r12 ^ ctx->r3;
    // 0x80048224: or          $t4, $t4, $at
    ctx->r12 = ctx->r12 | ctx->r1;
    // 0x80048228: sltiu       $v0, $t4, 0x1
    ctx->r2 = ctx->r12 < 0X1 ? 1 : 0;
    // 0x8004822C: or          $v1, $t5, $zero
    ctx->r3 = ctx->r13 | 0;
L_80048230:
    // 0x80048230: beq         $v0, $zero, L_80048270
    if (ctx->r2 == 0) {
        // 0x80048234: addiu       $t4, $zero, 0x0
        ctx->r12 = ADD32(0, 0X0);
            goto L_80048270;
    }
    // 0x80048234: addiu       $t4, $zero, 0x0
    ctx->r12 = ADD32(0, 0X0);
    // 0x80048238: lw          $t9, 0x88($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X88);
    // 0x8004823C: addiu       $a0, $sp, 0x9C
    ctx->r4 = ADD32(ctx->r29, 0X9C);
    // 0x80048240: sll         $t6, $t9, 0
    ctx->r14 = S32(ctx->r25 << 0);
    // 0x80048244: bgez        $t6, L_80048258
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80048248: lui         $a1, 0x8009
        ctx->r5 = S32(0X8009 << 16);
            goto L_80048258;
    }
    // 0x80048248: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x8004824C: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x80048250: b           L_80048260
    // 0x80048254: addiu       $a2, $a2, 0x5CB8
    ctx->r6 = ADD32(ctx->r6, 0X5CB8);
        goto L_80048260;
    // 0x80048254: addiu       $a2, $a2, 0x5CB8
    ctx->r6 = ADD32(ctx->r6, 0X5CB8);
L_80048258:
    // 0x80048258: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x8004825C: addiu       $a2, $a2, 0x5CBC
    ctx->r6 = ADD32(ctx->r6, 0X5CBC);
L_80048260:
    // 0x80048260: jal         0x800768B0
    // 0x80048264: addiu       $a1, $a1, 0x5CB0
    ctx->r5 = ADD32(ctx->r5, 0X5CB0);
    sprintf_recomp(rdram, ctx);
        goto after_2;
    // 0x80048264: addiu       $a1, $a1, 0x5CB0
    ctx->r5 = ADD32(ctx->r5, 0X5CB0);
    after_2:
    // 0x80048268: b           L_80048408
    // 0x8004826C: lw          $a0, 0x2A0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2A0);
        goto L_80048408;
    // 0x8004826C: lw          $a0, 0x2A0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2A0);
L_80048270:
    // 0x80048270: lwc1        $f9, 0x88($sp)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r29, 0X88);
    // 0x80048274: addiu       $v0, $zero, 0x7FF
    ctx->r2 = ADD32(0, 0X7FF);
    // 0x80048278: swc1        $f9, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f_odd[(9 - 1) * 2];
    // 0x8004827C: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x80048280: addiu       $at, $zero, 0x0
    ctx->r1 = ADD32(0, 0X0);
    // 0x80048284: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x80048288: srl         $t5, $t8, 21
    ctx->r13 = S32(U32(ctx->r24) >> 21);
    // 0x8004828C: xor         $v0, $v0, $t5
    ctx->r2 = ctx->r2 ^ ctx->r13;
    // 0x80048290: xor         $at, $at, $t4
    ctx->r1 = ctx->r1 ^ ctx->r12;
    // 0x80048294: lwc1        $f8, 0x8C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x80048298: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
    // 0x8004829C: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x800482A0: beq         $v0, $zero, L_800482D0
    if (ctx->r2 == 0) {
        // 0x800482A4: swc1        $f8, 0x54($sp)
        MEM_W(0X54, ctx->r29) = ctx->f8.u32l;
            goto L_800482D0;
    }
    // 0x800482A4: swc1        $f8, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f8.u32l;
    // 0x800482A8: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x800482AC: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x800482B0: jal         0x8007E804
    // 0x800482B4: addiu       $a2, $zero, 0x34
    ctx->r6 = ADD32(0, 0X34);
    __ull_bit_extract(rdram, ctx);
        goto after_3;
    // 0x800482B4: addiu       $a2, $zero, 0x34
    ctx->r6 = ADD32(0, 0X34);
    after_3:
    // 0x800482B8: addiu       $t6, $zero, 0x0
    ctx->r14 = ADD32(0, 0X0);
    // 0x800482BC: addiu       $at, $zero, 0x0
    ctx->r1 = ADD32(0, 0X0);
    // 0x800482C0: xor         $at, $at, $v0
    ctx->r1 = ctx->r1 ^ ctx->r2;
    // 0x800482C4: xor         $t6, $t6, $v1
    ctx->r14 = ctx->r14 ^ ctx->r3;
    // 0x800482C8: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
    // 0x800482CC: sltu        $v0, $zero, $t6
    ctx->r2 = 0 < ctx->r14 ? 1 : 0;
L_800482D0:
    // 0x800482D0: beq         $v0, $zero, L_8004830C
    if (ctx->r2 == 0) {
        // 0x800482D4: addiu       $a0, $sp, 0x9C
        ctx->r4 = ADD32(ctx->r29, 0X9C);
            goto L_8004830C;
    }
    // 0x800482D4: addiu       $a0, $sp, 0x9C
    ctx->r4 = ADD32(ctx->r29, 0X9C);
    // 0x800482D8: lw          $t3, 0x88($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X88);
    // 0x800482DC: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x800482E0: sll         $t9, $t3, 0
    ctx->r25 = S32(ctx->r11 << 0);
    // 0x800482E4: bgez        $t9, L_800482F8
    if (SIGNED(ctx->r25) >= 0) {
        // 0x800482E8: lui         $a2, 0x8009
        ctx->r6 = S32(0X8009 << 16);
            goto L_800482F8;
    }
    // 0x800482E8: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x800482EC: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x800482F0: b           L_800482FC
    // 0x800482F4: addiu       $a2, $a2, 0x5CC8
    ctx->r6 = ADD32(ctx->r6, 0X5CC8);
        goto L_800482FC;
    // 0x800482F4: addiu       $a2, $a2, 0x5CC8
    ctx->r6 = ADD32(ctx->r6, 0X5CC8);
L_800482F8:
    // 0x800482F8: addiu       $a2, $a2, 0x5CCC
    ctx->r6 = ADD32(ctx->r6, 0X5CCC);
L_800482FC:
    // 0x800482FC: jal         0x800768B0
    // 0x80048300: addiu       $a1, $a1, 0x5CC0
    ctx->r5 = ADD32(ctx->r5, 0X5CC0);
    sprintf_recomp(rdram, ctx);
        goto after_4;
    // 0x80048300: addiu       $a1, $a1, 0x5CC0
    ctx->r5 = ADD32(ctx->r5, 0X5CC0);
    after_4:
    // 0x80048304: b           L_80048408
    // 0x80048308: lw          $a0, 0x2A0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2A0);
        goto L_80048408;
    // 0x80048308: lw          $a0, 0x2A0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2A0);
L_8004830C:
    // 0x8004830C: lwc1        $f11, 0x88($sp)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r29, 0X88);
    // 0x80048310: lwc1        $f10, 0x8C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x80048314: addiu       $a0, $sp, 0x9C
    ctx->r4 = ADD32(ctx->r29, 0X9C);
    // 0x80048318: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x8004831C: addiu       $a1, $sp, 0x19C
    ctx->r5 = ADD32(ctx->r29, 0X19C);
    // 0x80048320: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80048324: mfc1        $a3, $f18
    ctx->r7 = (int32_t)ctx->f18.u32l;
    // 0x80048328: mfc1        $a2, $f19
    ctx->r6 = (int32_t)ctx->f_odd[(19 - 1) * 2];
    // 0x8004832C: jal         0x800768B0
    // 0x80048330: nop

    sprintf_recomp(rdram, ctx);
        goto after_5;
    // 0x80048330: nop

    after_5:
    // 0x80048334: b           L_80048408
    // 0x80048338: lw          $a0, 0x2A0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2A0);
        goto L_80048408;
    // 0x80048338: lw          $a0, 0x2A0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2A0);
L_8004833C:
    // 0x8004833C: beq         $s5, $v1, L_80048354
    if (ctx->r21 == ctx->r3) {
        // 0x80048340: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80048354;
    }
    // 0x80048340: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80048344: beq         $fp, $v1, L_80048354
    if (ctx->r30 == ctx->r3) {
        // 0x80048348: nop
    
            goto L_80048354;
    }
    // 0x80048348: nop

    // 0x8004834C: bne         $t0, $v1, L_800483B4
    if (ctx->r8 != ctx->r3) {
        // 0x80048350: nop
    
            goto L_800483B4;
    }
    // 0x80048350: nop

L_80048354:
    // 0x80048354: bne         $s1, $at, L_80048390
    if (ctx->r17 != ctx->r1) {
        // 0x80048358: addiu       $a0, $sp, 0x9C
        ctx->r4 = ADD32(ctx->r29, 0X9C);
            goto L_80048390;
    }
    // 0x80048358: addiu       $a0, $sp, 0x9C
    ctx->r4 = ADD32(ctx->r29, 0X9C);
    // 0x8004835C: addiu       $s3, $s3, 0x7
    ctx->r19 = ADD32(ctx->r19, 0X7);
    // 0x80048360: addiu       $at, $zero, -0x8
    ctx->r1 = ADD32(0, -0X8);
    // 0x80048364: and         $t8, $s3, $at
    ctx->r24 = ctx->r19 & ctx->r1;
    // 0x80048368: addiu       $s3, $t8, 0x8
    ctx->r19 = ADD32(ctx->r24, 0X8);
    // 0x8004836C: lw          $a2, -0x8($s3)
    ctx->r6 = MEM_W(ctx->r19, -0X8);
    // 0x80048370: lw          $a3, -0x4($s3)
    ctx->r7 = MEM_W(ctx->r19, -0X4);
    // 0x80048374: addiu       $a0, $sp, 0x9C
    ctx->r4 = ADD32(ctx->r29, 0X9C);
    // 0x80048378: addiu       $a1, $sp, 0x19C
    ctx->r5 = ADD32(ctx->r29, 0X19C);
    // 0x8004837C: sw          $a2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r6;
    // 0x80048380: jal         0x800768B0
    // 0x80048384: sw          $a3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r7;
    sprintf_recomp(rdram, ctx);
        goto after_6;
    // 0x80048384: sw          $a3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r7;
    after_6:
    // 0x80048388: b           L_80048408
    // 0x8004838C: lw          $a0, 0x2A0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2A0);
        goto L_80048408;
    // 0x8004838C: lw          $a0, 0x2A0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2A0);
L_80048390:
    // 0x80048390: addiu       $s3, $s3, 0x3
    ctx->r19 = ADD32(ctx->r19, 0X3);
    // 0x80048394: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x80048398: and         $t4, $s3, $at
    ctx->r12 = ctx->r19 & ctx->r1;
    // 0x8004839C: addiu       $s3, $t4, 0x4
    ctx->r19 = ADD32(ctx->r12, 0X4);
    // 0x800483A0: lw          $a2, -0x4($s3)
    ctx->r6 = MEM_W(ctx->r19, -0X4);
    // 0x800483A4: jal         0x800768B0
    // 0x800483A8: addiu       $a1, $sp, 0x19C
    ctx->r5 = ADD32(ctx->r29, 0X19C);
    sprintf_recomp(rdram, ctx);
        goto after_7;
    // 0x800483A8: addiu       $a1, $sp, 0x19C
    ctx->r5 = ADD32(ctx->r29, 0X19C);
    after_7:
    // 0x800483AC: b           L_80048408
    // 0x800483B0: lw          $a0, 0x2A0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2A0);
        goto L_80048408;
    // 0x800483B0: lw          $a0, 0x2A0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2A0);
L_800483B4:
    // 0x800483B4: bne         $s6, $v1, L_800483E0
    if (ctx->r22 != ctx->r3) {
        // 0x800483B8: addiu       $at, $zero, -0x4
        ctx->r1 = ADD32(0, -0X4);
            goto L_800483E0;
    }
    // 0x800483B8: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x800483BC: addiu       $s3, $s3, 0x3
    ctx->r19 = ADD32(ctx->r19, 0X3);
    // 0x800483C0: and         $t5, $s3, $at
    ctx->r13 = ctx->r19 & ctx->r1;
    // 0x800483C4: addiu       $s3, $t5, 0x4
    ctx->r19 = ADD32(ctx->r13, 0X4);
    // 0x800483C8: lw          $a2, -0x4($s3)
    ctx->r6 = MEM_W(ctx->r19, -0X4);
    // 0x800483CC: addiu       $a0, $sp, 0x9C
    ctx->r4 = ADD32(ctx->r29, 0X9C);
    // 0x800483D0: jal         0x800768B0
    // 0x800483D4: addiu       $a1, $sp, 0x19C
    ctx->r5 = ADD32(ctx->r29, 0X19C);
    sprintf_recomp(rdram, ctx);
        goto after_8;
    // 0x800483D4: addiu       $a1, $sp, 0x19C
    ctx->r5 = ADD32(ctx->r29, 0X19C);
    after_8:
    // 0x800483D8: b           L_80048408
    // 0x800483DC: lw          $a0, 0x2A0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2A0);
        goto L_80048408;
    // 0x800483DC: lw          $a0, 0x2A0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2A0);
L_800483E0:
    // 0x800483E0: bne         $s7, $v1, L_80048404
    if (ctx->r23 != ctx->r3) {
        // 0x800483E4: addiu       $at, $zero, -0x4
        ctx->r1 = ADD32(0, -0X4);
            goto L_80048404;
    }
    // 0x800483E4: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x800483E8: addiu       $s3, $s3, 0x3
    ctx->r19 = ADD32(ctx->r19, 0X3);
    // 0x800483EC: and         $t6, $s3, $at
    ctx->r14 = ctx->r19 & ctx->r1;
    // 0x800483F0: addiu       $s3, $t6, 0x4
    ctx->r19 = ADD32(ctx->r14, 0X4);
    // 0x800483F4: lbu         $a2, -0x1($s3)
    ctx->r6 = MEM_BU(ctx->r19, -0X1);
    // 0x800483F8: addiu       $a0, $sp, 0x9C
    ctx->r4 = ADD32(ctx->r29, 0X9C);
    // 0x800483FC: jal         0x800768B0
    // 0x80048400: addiu       $a1, $sp, 0x19C
    ctx->r5 = ADD32(ctx->r29, 0X19C);
    sprintf_recomp(rdram, ctx);
        goto after_9;
    // 0x80048400: addiu       $a1, $sp, 0x19C
    ctx->r5 = ADD32(ctx->r29, 0X19C);
    after_9:
L_80048404:
    // 0x80048404: lw          $a0, 0x2A0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2A0);
L_80048408:
    // 0x80048408: jal         0x800015A0
    // 0x8004840C: addiu       $a1, $sp, 0x9C
    ctx->r5 = ADD32(ctx->r29, 0X9C);
    func_800015A0(rdram, ctx);
        goto after_10;
    // 0x8004840C: addiu       $a1, $sp, 0x9C
    ctx->r5 = ADD32(ctx->r29, 0X9C);
    after_10:
    // 0x80048410: b           L_80048424
    // 0x80048414: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
        goto L_80048424;
    // 0x80048414: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80048418:
    // 0x80048418: sb          $a1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r5;
    // 0x8004841C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80048420: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_80048424:
    // 0x80048424: lbu         $a1, 0x0($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X0);
    // 0x80048428: nop

    // 0x8004842C: bne         $a1, $zero, L_80048088
    if (ctx->r5 != 0) {
        // 0x80048430: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_80048088;
    }
    // 0x80048430: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
L_80048434:
    // 0x80048434: addiu       $a1, $sp, 0x19C
    ctx->r5 = ADD32(ctx->r29, 0X19C);
    // 0x80048438: addu        $t7, $a1, $s0
    ctx->r15 = ADD32(ctx->r5, ctx->r16);
    // 0x8004843C: sb          $zero, 0x0($t7)
    MEM_B(0X0, ctx->r15) = 0;
    // 0x80048440: lw          $a0, 0x2A0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2A0);
    // 0x80048444: jal         0x800015A0
    // 0x80048448: nop

    func_800015A0(rdram, ctx);
        goto after_11;
    // 0x80048448: nop

    after_11:
    // 0x8004844C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80048450: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80048454: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80048458: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8004845C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80048460: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80048464: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80048468: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8004846C: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80048470: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80048474: jr          $ra
    // 0x80048478: addiu       $sp, $sp, 0x2A0
    ctx->r29 = ADD32(ctx->r29, 0X2A0);
    return;
    // 0x80048478: addiu       $sp, $sp, 0x2A0
    ctx->r29 = ADD32(ctx->r29, 0X2A0);
    // 0x8004847C: nop

;}
RECOMP_FUNC void func_80048480(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80048480: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x80048484: addiu       $v0, $v0, 0x2310
    ctx->r2 = ADD32(ctx->r2, 0X2310);
    // 0x80048488: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8004848C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
L_80048490:
    // 0x80048490: lw          $t6, 0x1C($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X1C);
    // 0x80048494: nop

    // 0x80048498: bne         $a0, $t6, L_800484A8
    if (ctx->r4 != ctx->r14) {
        // 0x8004849C: nop
    
            goto L_800484A8;
    }
    // 0x8004849C: nop

    // 0x800484A0: jr          $ra
    // 0x800484A4: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    return;
    // 0x800484A4: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
L_800484A8:
    // 0x800484A8: lw          $t7, 0xF8($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XF8);
    // 0x800484AC: addiu       $v0, $v0, 0xDC
    ctx->r2 = ADD32(ctx->r2, 0XDC);
    // 0x800484B0: bne         $a0, $t7, L_800484C8
    if (ctx->r4 != ctx->r15) {
        // 0x800484B4: nop
    
            goto L_800484C8;
    }
    // 0x800484B4: nop

    // 0x800484B8: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x800484BC: andi        $t8, $v0, 0xFF
    ctx->r24 = ctx->r2 & 0XFF;
    // 0x800484C0: jr          $ra
    // 0x800484C4: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    return;
    // 0x800484C4: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
L_800484C8:
    // 0x800484C8: lw          $t9, 0xF8($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XF8);
    // 0x800484CC: addiu       $v0, $v0, 0xDC
    ctx->r2 = ADD32(ctx->r2, 0XDC);
    // 0x800484D0: bne         $a0, $t9, L_800484E8
    if (ctx->r4 != ctx->r25) {
        // 0x800484D4: nop
    
            goto L_800484E8;
    }
    // 0x800484D4: nop

    // 0x800484D8: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
    // 0x800484DC: andi        $t6, $v0, 0xFF
    ctx->r14 = ctx->r2 & 0XFF;
    // 0x800484E0: jr          $ra
    // 0x800484E4: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    return;
    // 0x800484E4: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
L_800484E8:
    // 0x800484E8: lw          $t7, 0xF8($v0)
    ctx->r15 = MEM_W(ctx->r2, 0XF8);
    // 0x800484EC: addiu       $v0, $v0, 0xDC
    ctx->r2 = ADD32(ctx->r2, 0XDC);
    // 0x800484F0: bne         $a0, $t7, L_80048508
    if (ctx->r4 != ctx->r15) {
        // 0x800484F4: nop
    
            goto L_80048508;
    }
    // 0x800484F4: nop

    // 0x800484F8: addiu       $v0, $v1, 0x3
    ctx->r2 = ADD32(ctx->r3, 0X3);
    // 0x800484FC: andi        $t8, $v0, 0xFF
    ctx->r24 = ctx->r2 & 0XFF;
    // 0x80048500: jr          $ra
    // 0x80048504: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    return;
    // 0x80048504: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
L_80048508:
    // 0x80048508: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8004850C: bne         $v1, $a1, L_80048490
    if (ctx->r3 != ctx->r5) {
        // 0x80048510: addiu       $v0, $v0, 0xDC
        ctx->r2 = ADD32(ctx->r2, 0XDC);
            goto L_80048490;
    }
    // 0x80048510: addiu       $v0, $v0, 0xDC
    ctx->r2 = ADD32(ctx->r2, 0XDC);
    // 0x80048514: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80048518: jr          $ra
    // 0x8004851C: nop

    return;
    // 0x8004851C: nop

    // 0x80048520: jr          $ra
    // 0x80048524: nop

    return;
    // 0x80048524: nop

;}
