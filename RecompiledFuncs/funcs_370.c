#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_stage_world3_E08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000E08: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000E0C: jr          $t1
    // 0x60000E10: addiu       $t0, $zero, 0x1C04
    ctx->r8 = ADD32(0, 0X1C04);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000E10: addiu       $t0, $zero, 0x1C04
    ctx->r8 = ADD32(0, 0X1C04);
;}
RECOMP_FUNC void ovl_stage_world3_E14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000E14: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000E18: jr          $t1
    // 0x60000E1C: addiu       $t0, $zero, 0x1C05
    ctx->r8 = ADD32(0, 0X1C05);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000E1C: addiu       $t0, $zero, 0x1C05
    ctx->r8 = ADD32(0, 0X1C05);
;}
RECOMP_FUNC void ovl_stage_world3_E20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000E20: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000E24: jr          $t1
    // 0x60000E28: addiu       $t0, $zero, 0x1C06
    ctx->r8 = ADD32(0, 0X1C06);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000E28: addiu       $t0, $zero, 0x1C06
    ctx->r8 = ADD32(0, 0X1C06);
;}
RECOMP_FUNC void ovl_stage_world3_E2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000E2C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000E30: jr          $t1
    // 0x60000E34: addiu       $t0, $zero, 0x1C07
    ctx->r8 = ADD32(0, 0X1C07);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000E34: addiu       $t0, $zero, 0x1C07
    ctx->r8 = ADD32(0, 0X1C07);
;}
RECOMP_FUNC void ovl_stage_world3_E38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000E38: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000E3C: jr          $t1
    // 0x60000E40: addiu       $t0, $zero, 0x1C08
    ctx->r8 = ADD32(0, 0X1C08);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000E40: addiu       $t0, $zero, 0x1C08
    ctx->r8 = ADD32(0, 0X1C08);
;}
RECOMP_FUNC void ovl_stage_world3_E44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000E44: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000E48: jr          $t1
    // 0x60000E4C: addiu       $t0, $zero, 0x1C09
    ctx->r8 = ADD32(0, 0X1C09);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000E4C: addiu       $t0, $zero, 0x1C09
    ctx->r8 = ADD32(0, 0X1C09);
;}
RECOMP_FUNC void ovl_stage_world3_E50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000E50: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000E54: jr          $t1
    // 0x60000E58: addiu       $t0, $zero, 0x1C0A
    ctx->r8 = ADD32(0, 0X1C0A);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000E58: addiu       $t0, $zero, 0x1C0A
    ctx->r8 = ADD32(0, 0X1C0A);
;}
RECOMP_FUNC void ovl_stage_world3_E5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000E5C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000E60: jr          $t1
    // 0x60000E64: addiu       $t0, $zero, 0x1C0B
    ctx->r8 = ADD32(0, 0X1C0B);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000E64: addiu       $t0, $zero, 0x1C0B
    ctx->r8 = ADD32(0, 0X1C0B);
;}
RECOMP_FUNC void ovl_stage_world3_E68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000E68: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000E6C: jr          $t1
    // 0x60000E70: addiu       $t0, $zero, 0x1C0C
    ctx->r8 = ADD32(0, 0X1C0C);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000E70: addiu       $t0, $zero, 0x1C0C
    ctx->r8 = ADD32(0, 0X1C0C);
;}
RECOMP_FUNC void ovl_stage_world3_E74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000E74: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000E78: jr          $t1
    // 0x60000E7C: addiu       $t0, $zero, 0x1C0D
    ctx->r8 = ADD32(0, 0X1C0D);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000E7C: addiu       $t0, $zero, 0x1C0D
    ctx->r8 = ADD32(0, 0X1C0D);
;}
RECOMP_FUNC void ovl_stage_world3_E80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000E80: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000E84: jr          $t1
    // 0x60000E88: addiu       $t0, $zero, 0x1C0E
    ctx->r8 = ADD32(0, 0X1C0E);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000E88: addiu       $t0, $zero, 0x1C0E
    ctx->r8 = ADD32(0, 0X1C0E);
;}
RECOMP_FUNC void ovl_stage_world3_E8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000E8C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000E90: jr          $t1
    // 0x60000E94: addiu       $t0, $zero, 0x1C0F
    ctx->r8 = ADD32(0, 0X1C0F);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000E94: addiu       $t0, $zero, 0x1C0F
    ctx->r8 = ADD32(0, 0X1C0F);
;}
RECOMP_FUNC void ovl_stage_world3_E98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000E98: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000E9C: jr          $t1
    // 0x60000EA0: addiu       $t0, $zero, 0x1C10
    ctx->r8 = ADD32(0, 0X1C10);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000EA0: addiu       $t0, $zero, 0x1C10
    ctx->r8 = ADD32(0, 0X1C10);
;}
RECOMP_FUNC void ovl_stage_world3_EA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000EA4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000EA8: jr          $t1
    // 0x60000EAC: addiu       $t0, $zero, 0x1C11
    ctx->r8 = ADD32(0, 0X1C11);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000EAC: addiu       $t0, $zero, 0x1C11
    ctx->r8 = ADD32(0, 0X1C11);
;}
RECOMP_FUNC void ovl_stage_world3_EB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000EB0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000EB4: jr          $t1
    // 0x60000EB8: addiu       $t0, $zero, 0x1C12
    ctx->r8 = ADD32(0, 0X1C12);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000EB8: addiu       $t0, $zero, 0x1C12
    ctx->r8 = ADD32(0, 0X1C12);
;}
RECOMP_FUNC void ovl_stage_world3_EBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000EBC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000EC0: jr          $t1
    // 0x60000EC4: addiu       $t0, $zero, 0x1C13
    ctx->r8 = ADD32(0, 0X1C13);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000EC4: addiu       $t0, $zero, 0x1C13
    ctx->r8 = ADD32(0, 0X1C13);
;}
RECOMP_FUNC void ovl_stage_world3_EC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000EC8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000ECC: jr          $t1
    // 0x60000ED0: addiu       $t0, $zero, 0x1C14
    ctx->r8 = ADD32(0, 0X1C14);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000ED0: addiu       $t0, $zero, 0x1C14
    ctx->r8 = ADD32(0, 0X1C14);
;}
RECOMP_FUNC void ovl_stage_world3_ED4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000ED4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000ED8: jr          $t1
    // 0x60000EDC: addiu       $t0, $zero, 0x1C15
    ctx->r8 = ADD32(0, 0X1C15);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000EDC: addiu       $t0, $zero, 0x1C15
    ctx->r8 = ADD32(0, 0X1C15);
;}
RECOMP_FUNC void ovl_stage_world3_EE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000EE0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000EE4: jr          $t1
    // 0x60000EE8: addiu       $t0, $zero, 0x1C16
    ctx->r8 = ADD32(0, 0X1C16);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000EE8: addiu       $t0, $zero, 0x1C16
    ctx->r8 = ADD32(0, 0X1C16);
;}
RECOMP_FUNC void ovl_stage_world3_EEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000EEC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000EF0: jr          $t1
    // 0x60000EF4: addiu       $t0, $zero, 0x1C17
    ctx->r8 = ADD32(0, 0X1C17);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000EF4: addiu       $t0, $zero, 0x1C17
    ctx->r8 = ADD32(0, 0X1C17);
;}
RECOMP_FUNC void ovl_stage_world3_EF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000EF8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000EFC: jr          $t1
    // 0x60000F00: addiu       $t0, $zero, 0x1C18
    ctx->r8 = ADD32(0, 0X1C18);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000F00: addiu       $t0, $zero, 0x1C18
    ctx->r8 = ADD32(0, 0X1C18);
;}
RECOMP_FUNC void ovl_stage_world3_F04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000F04: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000F08: jr          $t1
    // 0x60000F0C: addiu       $t0, $zero, 0x1C19
    ctx->r8 = ADD32(0, 0X1C19);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000F0C: addiu       $t0, $zero, 0x1C19
    ctx->r8 = ADD32(0, 0X1C19);
;}
RECOMP_FUNC void ovl_stage_world3_F10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000F10: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000F14: jr          $t1
    // 0x60000F18: addiu       $t0, $zero, 0x1C1A
    ctx->r8 = ADD32(0, 0X1C1A);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000F18: addiu       $t0, $zero, 0x1C1A
    ctx->r8 = ADD32(0, 0X1C1A);
;}
RECOMP_FUNC void ovl_stage_world3_F1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000F1C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000F20: jr          $t1
    // 0x60000F24: addiu       $t0, $zero, 0x1C1B
    ctx->r8 = ADD32(0, 0X1C1B);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000F24: addiu       $t0, $zero, 0x1C1B
    ctx->r8 = ADD32(0, 0X1C1B);
;}
RECOMP_FUNC void ovl_stage_world3_F28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000F28: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000F2C: jr          $t1
    // 0x60000F30: addiu       $t0, $zero, 0x1C1C
    ctx->r8 = ADD32(0, 0X1C1C);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000F30: addiu       $t0, $zero, 0x1C1C
    ctx->r8 = ADD32(0, 0X1C1C);
;}
RECOMP_FUNC void ovl_stage_world3_F34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000F34: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000F38: jr          $t1
    // 0x60000F3C: addiu       $t0, $zero, 0x1D00
    ctx->r8 = ADD32(0, 0X1D00);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000F3C: addiu       $t0, $zero, 0x1D00
    ctx->r8 = ADD32(0, 0X1D00);
;}
RECOMP_FUNC void ovl_stage_world3_F40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000F40: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x60000F44: jr          $t1
    // 0x60000F48: addiu       $t0, $zero, 0x1D01
    ctx->r8 = ADD32(0, 0X1D01);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x60000F48: addiu       $t0, $zero, 0x1D01
    ctx->r8 = ADD32(0, 0X1D01);
    // 0x60000F4C: nop

;}
RECOMP_FUNC void ovl_stage_world3_F50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000F50: lui         $t6, 0x6000
    ctx->r14 = S32(0X6000 << 16);
    // 0x60000F54: lw          $t6, 0x6820($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X6820);
    // 0x60000F58: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x60000F5C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x60000F60: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x60000F64: beq         $t6, $zero, L_60000F94
    if (ctx->r14 == 0) {
        // 0x60000F68: sw          $s0, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r16;
            goto L_60000F94;
    }
    // 0x60000F68: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x60000F6C: lui         $t7, 0x6000
    ctx->r15 = S32(0X6000 << 16);
    // 0x60000F70: addiu       $s0, $t7, 0x6820
    ctx->r16 = ADD32(ctx->r15, 0X6820);
    // 0x60000F74: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x60000F78: nop

L_60000F7C:
    // 0x60000F7C: jal         0x60000B98
    // 0x60000F80: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_stage_world3_B98(rdram, ctx);
        goto after_0;
    // 0x60000F80: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x60000F84: lw          $s1, 0x4($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X4);
    // 0x60000F88: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x60000F8C: bne         $s1, $zero, L_60000F7C
    if (ctx->r17 != 0) {
        // 0x60000F90: nop
    
            goto L_60000F7C;
    }
    // 0x60000F90: nop

L_60000F94:
    // 0x60000F94: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x60000F98: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x60000F9C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x60000FA0: jr          $ra
    // 0x60000FA4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x60000FA4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_stage_world3_FA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60000FA8: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x60000FAC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x60000FB0: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x60000FB4: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x60000FB8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x60000FBC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x60000FC0: jal         0x600006E8
    // 0x60000FC4: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    ovl_stage_world3_6E8(rdram, ctx);
        goto after_0;
    // 0x60000FC4: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    after_0:
    // 0x60000FC8: beq         $v0, $zero, L_6000100C
    if (ctx->r2 == 0) {
        // 0x60000FCC: or          $s2, $v0, $zero
        ctx->r18 = ctx->r2 | 0;
            goto L_6000100C;
    }
    // 0x60000FCC: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x60000FD0: blez        $v0, L_6000100C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x60000FD4: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_6000100C;
    }
    // 0x60000FD4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x60000FD8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x60000FDC: addiu       $s3, $sp, 0x2C
    ctx->r19 = ADD32(ctx->r29, 0X2C);
L_60000FE0:
    // 0x60000FE0: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x60000FE4: addiu       $a1, $zero, 0x31
    ctx->r5 = ADD32(0, 0X31);
    // 0x60000FE8: addu        $t7, $t6, $s1
    ctx->r15 = ADD32(ctx->r14, ctx->r17);
    // 0x60000FEC: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x60000FF0: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x60000FF4: lw          $a0, 0x4($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X4);
    // 0x60000FF8: jal         0x600006C4
    // 0x60000FFC: nop

    ovl_stage_world3_6C4(rdram, ctx);
        goto after_1;
    // 0x60000FFC: nop

    after_1:
    // 0x60001000: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x60001004: bne         $s0, $s2, L_60000FE0
    if (ctx->r16 != ctx->r18) {
        // 0x60001008: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_60000FE0;
    }
    // 0x60001008: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_6000100C:
    // 0x6000100C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x60001010: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x60001014: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x60001018: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x6000101C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x60001020: jr          $ra
    // 0x60001024: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x60001024: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_stage_world3_1028(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001028: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x6000102C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60001030: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x60001034: jal         0x60000DE4
    // 0x60001038: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    ovl_stage_world3_DE4(rdram, ctx);
        goto after_0;
    // 0x60001038: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    after_0:
    // 0x6000103C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60001040: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x60001044: jal         0x600006C4
    // 0x60001048: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_1;
    // 0x60001048: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x6000104C: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x60001050: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x60001054: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x60001058: swc1        $f4, 0x18($t6)
    MEM_W(0X18, ctx->r14) = ctx->f4.u32l;
    // 0x6000105C: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x60001060: nop

    // 0x60001064: swc1        $f6, 0x14($t7)
    MEM_W(0X14, ctx->r15) = ctx->f6.u32l;
    // 0x60001068: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x6000106C: jal         0x60000DE4
    // 0x60001070: nop

    ovl_stage_world3_DE4(rdram, ctx);
        goto after_2;
    // 0x60001070: nop

    after_2:
    // 0x60001074: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60001078: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x6000107C: jal         0x600006C4
    // 0x60001080: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_3;
    // 0x60001080: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_3:
    // 0x60001084: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60001088: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x6000108C: jr          $ra
    // 0x60001090: nop

    return;
    // 0x60001090: nop

    // 0x60001094: jr          $ra
    // 0x60001098: nop

    return;
    // 0x60001098: nop

;}
RECOMP_FUNC void ovl_stage_world3_109C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000109C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x600010A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x600010A4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x600010A8: jal         0x60000C1C
    // 0x600010AC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    ovl_stage_world3_C1C(rdram, ctx);
        goto after_0;
    // 0x600010AC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x600010B0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x600010B4: jal         0x600009C4
    // 0x600010B8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    ovl_stage_world3_9C4(rdram, ctx);
        goto after_1;
    // 0x600010B8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_1:
    // 0x600010BC: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x600010C0: lui         $s1, 0x40
    ctx->r17 = S32(0X40 << 16);
    // 0x600010C4: ori         $s1, $s1, 0x800
    ctx->r17 = ctx->r17 | 0X800;
    // 0x600010C8: and         $t7, $t6, $s1
    ctx->r15 = ctx->r14 & ctx->r17;
    // 0x600010CC: beq         $t7, $zero, L_600010F4
    if (ctx->r15 == 0) {
        // 0x600010D0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_600010F4;
    }
    // 0x600010D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_600010D4:
    // 0x600010D4: jal         0x600009D0
    // 0x600010D8: nop

    ovl_stage_world3_9D0(rdram, ctx);
        goto after_2;
    // 0x600010D8: nop

    after_2:
    // 0x600010DC: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x600010E0: nop

    // 0x600010E4: and         $t9, $t8, $s1
    ctx->r25 = ctx->r24 & ctx->r17;
    // 0x600010E8: bne         $t9, $zero, L_600010D4
    if (ctx->r25 != 0) {
        // 0x600010EC: nop
    
            goto L_600010D4;
    }
    // 0x600010EC: nop

    // 0x600010F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_600010F4:
    // 0x600010F4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x600010F8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x600010FC: jr          $ra
    // 0x60001100: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x60001100: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_stage_world3_1104(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001104: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x60001108: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x6000110C: jal         0x60000C1C
    // 0x60001110: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    ovl_stage_world3_C1C(rdram, ctx);
        goto after_0;
    // 0x60001110: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x60001114: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x60001118: jal         0x600007E4
    // 0x6000111C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    ovl_stage_world3_7E4(rdram, ctx);
        goto after_1;
    // 0x6000111C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x60001120: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x60001124: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x60001128: beq         $t6, $zero, L_60001188
    if (ctx->r14 == 0) {
        // 0x6000112C: lui         $at, 0x6000
        ctx->r1 = S32(0X6000 << 16);
            goto L_60001188;
    }
    // 0x6000112C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001130: lw          $t7, 0x10($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X10);
    // 0x60001134: lui         $t1, 0x6000
    ctx->r9 = S32(0X6000 << 16);
    // 0x60001138: andi        $t8, $t7, 0x4
    ctx->r24 = ctx->r15 & 0X4;
    // 0x6000113C: sw          $t8, 0x6AA0($at)
    MEM_W(0X6AA0, ctx->r1) = ctx->r24;
    // 0x60001140: lw          $t9, 0x10($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X10);
    // 0x60001144: addiu       $at, $zero, -0x5
    ctx->r1 = ADD32(0, -0X5);
    // 0x60001148: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x6000114C: sw          $t0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r8;
    // 0x60001150: lw          $t1, 0x6AA0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X6AA0);
    // 0x60001154: lui         $at, 0xFF7F
    ctx->r1 = S32(0XFF7F << 16);
    // 0x60001158: beq         $t1, $zero, L_60001174
    if (ctx->r9 == 0) {
        // 0x6000115C: nop
    
            goto L_60001174;
    }
    // 0x6000115C: nop

    // 0x60001160: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x60001164: lui         $at, 0x80
    ctx->r1 = S32(0X80 << 16);
    // 0x60001168: or          $t3, $t2, $at
    ctx->r11 = ctx->r10 | ctx->r1;
    // 0x6000116C: b           L_600011AC
    // 0x60001170: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
        goto L_600011AC;
    // 0x60001170: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
L_60001174:
    // 0x60001174: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x60001178: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x6000117C: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x60001180: b           L_600011AC
    // 0x60001184: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
        goto L_600011AC;
    // 0x60001184: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
L_60001188:
    // 0x60001188: lui         $t6, 0x6000
    ctx->r14 = S32(0X6000 << 16);
    // 0x6000118C: lw          $t6, 0x6AA0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X6AA0);
    // 0x60001190: nop

    // 0x60001194: beq         $t6, $zero, L_600011B0
    if (ctx->r14 == 0) {
        // 0x60001198: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_600011B0;
    }
    // 0x60001198: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000119C: lw          $t7, 0x10($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X10);
    // 0x600011A0: nop

    // 0x600011A4: ori         $t8, $t7, 0x4
    ctx->r24 = ctx->r15 | 0X4;
    // 0x600011A8: sw          $t8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r24;
L_600011AC:
    // 0x600011AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600011B0:
    // 0x600011B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x600011B4: jr          $ra
    // 0x600011B8: nop

    return;
    // 0x600011B8: nop

;}
RECOMP_FUNC void ovl_stage_world3_11BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600011BC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x600011C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600011C4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x600011C8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x600011CC: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x600011D0: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x600011D4: jal         0x60000E74
    // 0x600011D8: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    ovl_stage_world3_E74(rdram, ctx);
        goto after_0;
    // 0x600011D8: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    after_0:
    // 0x600011DC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x600011E0: addiu       $a1, $zero, 0x23
    ctx->r5 = ADD32(0, 0X23);
    // 0x600011E4: jal         0x600006C4
    // 0x600011E8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_1;
    // 0x600011E8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x600011EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600011F0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x600011F4: jr          $ra
    // 0x600011F8: nop

    return;
    // 0x600011F8: nop

;}
RECOMP_FUNC void ovl_stage_world3_11FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600011FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60001200: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60001204: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60001208: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x6000120C: addiu       $a2, $a2, 0x6AA8
    ctx->r6 = ADD32(ctx->r6, 0X6AA8);
    // 0x60001210: jal         0x60000808
    // 0x60001214: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_stage_world3_808(rdram, ctx);
        goto after_0;
    // 0x60001214: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x60001218: lui         $t6, 0x6000
    ctx->r14 = S32(0X6000 << 16);
    // 0x6000121C: lw          $t6, 0x6AA8($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X6AA8);
    // 0x60001220: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001224: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x60001228: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x6000122C: ori         $t7, $t6, 0x100
    ctx->r15 = ctx->r14 | 0X100;
    // 0x60001230: sw          $t7, 0x6AA8($at)
    MEM_W(0X6AA8, ctx->r1) = ctx->r15;
    // 0x60001234: addiu       $a2, $a2, 0x6AA8
    ctx->r6 = ADD32(ctx->r6, 0X6AA8);
    // 0x60001238: jal         0x60000808
    // 0x6000123C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_stage_world3_808(rdram, ctx);
        goto after_1;
    // 0x6000123C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x60001240: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60001244: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60001248: jr          $ra
    // 0x6000124C: nop

    return;
    // 0x6000124C: nop

;}
RECOMP_FUNC void ovl_stage_world3_1250(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001250: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60001254: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60001258: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x6000125C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x60001260: addiu       $a2, $a2, 0x6AB0
    ctx->r6 = ADD32(ctx->r6, 0X6AB0);
    // 0x60001264: jal         0x60000808
    // 0x60001268: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    ovl_stage_world3_808(rdram, ctx);
        goto after_0;
    // 0x60001268: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x6000126C: lui         $t6, 0x6000
    ctx->r14 = S32(0X6000 << 16);
    // 0x60001270: lw          $t6, 0x6AB0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X6AB0);
    // 0x60001274: addiu       $at, $zero, -0x101
    ctx->r1 = ADD32(0, -0X101);
    // 0x60001278: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x6000127C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001280: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x60001284: lui         $a2, 0x6000
    ctx->r6 = S32(0X6000 << 16);
    // 0x60001288: sw          $t7, 0x6AB0($at)
    MEM_W(0X6AB0, ctx->r1) = ctx->r15;
    // 0x6000128C: addiu       $a2, $a2, 0x6AB0
    ctx->r6 = ADD32(ctx->r6, 0X6AB0);
    // 0x60001290: jal         0x60000808
    // 0x60001294: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    ovl_stage_world3_808(rdram, ctx);
        goto after_1;
    // 0x60001294: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x60001298: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x6000129C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x600012A0: jr          $ra
    // 0x600012A4: nop

    return;
    // 0x600012A4: nop

;}
RECOMP_FUNC void ovl_stage_world3_12A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600012A8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x600012AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600012B0: beq         $a1, $zero, L_600012E4
    if (ctx->r5 == 0) {
        // 0x600012B4: sw          $a0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r4;
            goto L_600012E4;
    }
    // 0x600012B4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x600012B8: jal         0x600011FC
    // 0x600012BC: nop

    ovl_stage_world3_11FC(rdram, ctx);
        goto after_0;
    // 0x600012BC: nop

    after_0:
    // 0x600012C0: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x600012C4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x600012C8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x600012CC: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x600012D0: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x600012D4: jal         0x600007F0
    // 0x600012D8: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    ovl_stage_world3_7F0(rdram, ctx);
        goto after_1;
    // 0x600012D8: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x600012DC: b           L_6000130C
    // 0x600012E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_6000130C;
    // 0x600012E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_600012E4:
    // 0x600012E4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x600012E8: jal         0x60001250
    // 0x600012EC: nop

    ovl_stage_world3_1250(rdram, ctx);
        goto after_2;
    // 0x600012EC: nop

    after_2:
    // 0x600012F0: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x600012F4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x600012F8: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x600012FC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x60001300: jal         0x600007F0
    // 0x60001304: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    ovl_stage_world3_7F0(rdram, ctx);
        goto after_3;
    // 0x60001304: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_3:
    // 0x60001308: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_6000130C:
    // 0x6000130C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x60001310: jr          $ra
    // 0x60001314: nop

    return;
    // 0x60001314: nop

;}
RECOMP_FUNC void ovl_stage_world3_1318(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001318: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x6000131C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60001320: addiu       $a0, $zero, 0xD4
    ctx->r4 = ADD32(0, 0XD4);
    // 0x60001324: jal         0x60000E38
    // 0x60001328: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    ovl_stage_world3_E38(rdram, ctx);
        goto after_0;
    // 0x60001328: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x6000132C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60001330: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60001334: jr          $ra
    // 0x60001338: nop

    return;
    // 0x60001338: nop

;}
RECOMP_FUNC void ovl_stage_world3_133C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000133C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x60001340: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x60001344: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x60001348: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x6000134C: lui         $s1, 0x6000
    ctx->r17 = S32(0X6000 << 16);
    // 0x60001350: lui         $s2, 0x6000
    ctx->r18 = S32(0X6000 << 16);
    // 0x60001354: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x60001358: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x6000135C: addiu       $s2, $s2, 0x6AB8
    ctx->r18 = ADD32(ctx->r18, 0X6AB8);
    // 0x60001360: addiu       $s1, $s1, 0x6870
    ctx->r17 = ADD32(ctx->r17, 0X6870);
    // 0x60001364: addiu       $s3, $zero, 0x4
    ctx->r19 = ADD32(0, 0X4);
    // 0x60001368: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_6000136C:
    // 0x6000136C: lbu         $t6, 0x0($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X0);
    // 0x60001370: lw          $t8, 0x0($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X0);
    // 0x60001374: addiu       $t7, $t6, -0x14
    ctx->r15 = ADD32(ctx->r14, -0X14);
    // 0x60001378: sb          $t7, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r15;
    // 0x6000137C: lw          $a2, 0x0($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X0);
    // 0x60001380: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    // 0x60001384: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x60001388: jal         0x60000DC0
    // 0x6000138C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world3_DC0(rdram, ctx);
        goto after_0;
    // 0x6000138C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x60001390: lw          $t9, 0x0($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X0);
    // 0x60001394: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    // 0x60001398: lw          $a2, 0x0($t9)
    ctx->r6 = MEM_W(ctx->r25, 0X0);
    // 0x6000139C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x600013A0: jal         0x60000DC0
    // 0x600013A4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world3_DC0(rdram, ctx);
        goto after_1;
    // 0x600013A4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x600013A8: jal         0x600009D0
    // 0x600013AC: nop

    ovl_stage_world3_9D0(rdram, ctx);
        goto after_2;
    // 0x600013AC: nop

    after_2:
    // 0x600013B0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x600013B4: slti        $at, $s0, 0x4
    ctx->r1 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x600013B8: bne         $at, $zero, L_6000136C
    if (ctx->r1 != 0) {
        // 0x600013BC: nop
    
            goto L_6000136C;
    }
    // 0x600013BC: nop

    // 0x600013C0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_600013C4:
    // 0x600013C4: lbu         $t0, 0x0($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0X0);
    // 0x600013C8: lw          $t2, 0x0($s2)
    ctx->r10 = MEM_W(ctx->r18, 0X0);
    // 0x600013CC: addiu       $t1, $t0, 0x14
    ctx->r9 = ADD32(ctx->r8, 0X14);
    // 0x600013D0: sb          $t1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r9;
    // 0x600013D4: lw          $a2, 0x0($t2)
    ctx->r6 = MEM_W(ctx->r10, 0X0);
    // 0x600013D8: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    // 0x600013DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x600013E0: jal         0x60000DC0
    // 0x600013E4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world3_DC0(rdram, ctx);
        goto after_3;
    // 0x600013E4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x600013E8: lw          $t3, 0x0($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X0);
    // 0x600013EC: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    // 0x600013F0: lw          $a2, 0x0($t3)
    ctx->r6 = MEM_W(ctx->r11, 0X0);
    // 0x600013F4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x600013F8: jal         0x60000DC0
    // 0x600013FC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world3_DC0(rdram, ctx);
        goto after_4;
    // 0x600013FC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x60001400: jal         0x600009D0
    // 0x60001404: nop

    ovl_stage_world3_9D0(rdram, ctx);
        goto after_5;
    // 0x60001404: nop

    after_5:
    // 0x60001408: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x6000140C: bne         $s0, $s3, L_600013C4
    if (ctx->r16 != ctx->r19) {
        // 0x60001410: nop
    
            goto L_600013C4;
    }
    // 0x60001410: nop

    // 0x60001414: b           L_6000136C
    // 0x60001418: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
        goto L_6000136C;
    // 0x60001418: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x6000141C: nop

    // 0x60001420: nop

    // 0x60001424: nop

    // 0x60001428: nop

    // 0x6000142C: nop

    // 0x60001430: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x60001434: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x60001438: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x6000143C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x60001440: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x60001444: jr          $ra
    // 0x60001448: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x60001448: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_stage_world3_144C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000144C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x60001450: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x60001454: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x60001458: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x6000145C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x60001460: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x60001464: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x60001468: lui         $s1, 0x6000
    ctx->r17 = S32(0X6000 << 16);
    // 0x6000146C: lui         $s2, 0x6000
    ctx->r18 = S32(0X6000 << 16);
    // 0x60001470: lui         $s3, 0x6000
    ctx->r19 = S32(0X6000 << 16);
    // 0x60001474: lui         $s4, 0x6000
    ctx->r20 = S32(0X6000 << 16);
    // 0x60001478: lui         $s5, 0x6000
    ctx->r21 = S32(0X6000 << 16);
    // 0x6000147C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x60001480: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x60001484: addiu       $s5, $s5, 0x6874
    ctx->r21 = ADD32(ctx->r21, 0X6874);
    // 0x60001488: addiu       $s4, $s4, 0x6870
    ctx->r20 = ADD32(ctx->r20, 0X6870);
    // 0x6000148C: addiu       $s3, $s3, 0x6ABC
    ctx->r19 = ADD32(ctx->r19, 0X6ABC);
    // 0x60001490: addiu       $s2, $s2, 0x6AB8
    ctx->r18 = ADD32(ctx->r18, 0X6AB8);
    // 0x60001494: addiu       $s1, $s1, 0x6858
    ctx->r17 = ADD32(ctx->r17, 0X6858);
    // 0x60001498: addiu       $s6, $zero, 0x2
    ctx->r22 = ADD32(0, 0X2);
    // 0x6000149C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_600014A0:
    // 0x600014A0: addiu       $s0, $v0, 0x1
    ctx->r16 = ADD32(ctx->r2, 0X1);
    // 0x600014A4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x600014A8: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x600014AC: ori         $a2, $zero, 0x8003
    ctx->r6 = 0 | 0X8003;
    // 0x600014B0: jal         0x60000DC0
    // 0x600014B4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world3_DC0(rdram, ctx);
        goto after_0;
    // 0x600014B4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x600014B8: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    // 0x600014BC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x600014C0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x600014C4: jal         0x60000DC0
    // 0x600014C8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world3_DC0(rdram, ctx);
        goto after_1;
    // 0x600014C8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x600014CC: sw          $s4, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r20;
    // 0x600014D0: lw          $a2, 0x0($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X0);
    // 0x600014D4: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    // 0x600014D8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x600014DC: jal         0x60000DC0
    // 0x600014E0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world3_DC0(rdram, ctx);
        goto after_2;
    // 0x600014E0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x600014E4: sw          $s5, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r21;
    // 0x600014E8: lw          $t7, 0x8($s5)
    ctx->r15 = MEM_W(ctx->r21, 0X8);
    // 0x600014EC: lw          $a3, 0x4($s5)
    ctx->r7 = MEM_W(ctx->r21, 0X4);
    // 0x600014F0: lw          $a2, 0x0($s5)
    ctx->r6 = MEM_W(ctx->r21, 0X0);
    // 0x600014F4: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x600014F8: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    // 0x600014FC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x60001500: or          $v0, $s5, $zero
    ctx->r2 = ctx->r21 | 0;
    // 0x60001504: jal         0x60000DC0
    // 0x60001508: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    ovl_stage_world3_DC0(rdram, ctx);
        goto after_3;
    // 0x60001508: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_3:
    // 0x6000150C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x60001510: bne         $s0, $s6, L_600014A0
    if (ctx->r16 != ctx->r22) {
        // 0x60001514: addiu       $s1, $s1, 0xC
        ctx->r17 = ADD32(ctx->r17, 0XC);
            goto L_600014A0;
    }
    // 0x60001514: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x60001518: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x6000151C: addiu       $a0, $a0, 0x133C
    ctx->r4 = ADD32(ctx->r4, 0X133C);
    // 0x60001520: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x60001524: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60001528: jal         0x60000994
    // 0x6000152C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_stage_world3_994(rdram, ctx);
        goto after_4;
    // 0x6000152C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x60001530: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x60001534: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001538: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x6000153C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x60001540: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x60001544: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x60001548: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x6000154C: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x60001550: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x60001554: sw          $v0, 0x6AC0($at)
    MEM_W(0X6AC0, ctx->r1) = ctx->r2;
    // 0x60001558: jr          $ra
    // 0x6000155C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x6000155C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_stage_world3_1560(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001560: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60001564: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x60001568: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x6000156C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60001570: addiu       $a0, $zero, 0x21
    ctx->r4 = ADD32(0, 0X21);
    // 0x60001574: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x60001578: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x6000157C: jal         0x60000DC0
    // 0x60001580: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    ovl_stage_world3_DC0(rdram, ctx);
        goto after_0;
    // 0x60001580: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    after_0:
    // 0x60001584: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60001588: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x6000158C: jr          $ra
    // 0x60001590: nop

    return;
    // 0x60001590: nop

;}
RECOMP_FUNC void ovl_stage_world3_1594(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001594: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001598: lwc1        $f7, 0x6910($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X6910);
    // 0x6000159C: lwc1        $f6, 0x6914($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6914);
    // 0x600015A0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x600015A4: cvt.d.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.d = CVT_D_S(ctx->f12.fl);
    // 0x600015A8: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x600015AC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x600015B0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x600015B4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x600015B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600015BC: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x600015C0: swc1        $f14, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f14.u32l;
    // 0x600015C4: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x600015C8: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x600015CC: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    // 0x600015D0: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x600015D4: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x600015D8: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
    // 0x600015DC: jal         0x600003D0
    // 0x600015E0: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    ovl_stage_world3_3D0(rdram, ctx);
        goto after_0;
    // 0x600015E0: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x600015E4: lwc1        $f12, 0x3C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x600015E8: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x600015EC: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x600015F0: mul.s       $f0, $f4, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x600015F4: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
    // 0x600015F8: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
    // 0x600015FC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x60001600: c.le.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl <= ctx->f0.fl;
    // 0x60001604: nop

    // 0x60001608: bc1f        L_6000164C
    if (!c1cs) {
        // 0x6000160C: nop
    
            goto L_6000164C;
    }
    // 0x6000160C: nop

    // 0x60001610: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x60001614: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x60001618: nop

    // 0x6000161C: add.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x60001620: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x60001624: nop

    // 0x60001628: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x6000162C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x60001630: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x60001634: nop

    // 0x60001638: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x6000163C: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x60001640: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x60001644: b           L_60001684
    // 0x60001648: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
        goto L_60001684;
    // 0x60001648: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
L_6000164C:
    // 0x6000164C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x60001650: nop

    // 0x60001654: sub.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x60001658: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x6000165C: nop

    // 0x60001660: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x60001664: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x60001668: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x6000166C: nop

    // 0x60001670: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x60001674: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
    // 0x60001678: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x6000167C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x60001680: nop

L_60001684:
    // 0x60001684: lwc1        $f18, 0x34($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X34);
    // 0x60001688: nop

    // 0x6000168C: mul.s       $f0, $f18, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = MUL_S(ctx->f18.fl, ctx->f12.fl);
    // 0x60001690: c.le.s      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.fl <= ctx->f0.fl;
    // 0x60001694: nop

    // 0x60001698: bc1f        L_600016D0
    if (!c1cs) {
        // 0x6000169C: nop
    
            goto L_600016D0;
    }
    // 0x6000169C: nop

    // 0x600016A0: add.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x600016A4: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x600016A8: nop

    // 0x600016AC: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x600016B0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x600016B4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x600016B8: nop

    // 0x600016BC: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x600016C0: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x600016C4: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x600016C8: b           L_60001700
    // 0x600016CC: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
        goto L_60001700;
    // 0x600016CC: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
L_600016D0:
    // 0x600016D0: sub.s       $f8, $f0, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x600016D4: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x600016D8: nop

    // 0x600016DC: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x600016E0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x600016E4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x600016E8: nop

    // 0x600016EC: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x600016F0: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x600016F4: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x600016F8: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
    // 0x600016FC: nop

L_60001700:
    // 0x60001700: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60001704: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x60001708: jr          $ra
    // 0x6000170C: nop

    return;
    // 0x6000170C: nop

;}
RECOMP_FUNC void ovl_stage_world3_1710(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001710: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x60001714: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x60001718: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x6000171C: lui         $s0, 0x6000
    ctx->r16 = S32(0X6000 << 16);
    // 0x60001720: lui         $s1, 0x6000
    ctx->r17 = S32(0X6000 << 16);
    // 0x60001724: addiu       $s1, $s1, 0x6B08
    ctx->r17 = ADD32(ctx->r17, 0X6B08);
    // 0x60001728: addiu       $s0, $s0, 0x6AF0
    ctx->r16 = ADD32(ctx->r16, 0X6AF0);
    // 0x6000172C: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x60001730: lui         $v1, 0x6000
    ctx->r3 = S32(0X6000 << 16);
    // 0x60001734: addiu       $v1, $v1, 0x6B30
    ctx->r3 = ADD32(ctx->r3, 0X6B30);
    // 0x60001738: addiu       $v0, $v0, 0x6B20
    ctx->r2 = ADD32(ctx->r2, 0X6B20);
    // 0x6000173C: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x60001740: lwc1        $f6, 0x4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X4);
    // 0x60001744: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x60001748: lwc1        $f10, 0x0($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X0);
    // 0x6000174C: lwc1        $f16, 0x4($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X4);
    // 0x60001750: lwc1        $f18, 0x8($s1)
    ctx->f18.u32l = MEM_W(ctx->r17, 0X8);
    // 0x60001754: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60001758: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    // 0x6000175C: swc1        $f6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f6.u32l;
    // 0x60001760: swc1        $f8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f8.u32l;
    // 0x60001764: swc1        $f10, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f10.u32l;
    // 0x60001768: swc1        $f16, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f16.u32l;
    // 0x6000176C: swc1        $f18, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f18.u32l;
    // 0x60001770: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x60001774: lw          $a0, 0x6880($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6880);
    // 0x60001778: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x6000177C: jal         0x600006C4
    // 0x60001780: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_0;
    // 0x60001780: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x60001784: jal         0x60000DE4
    // 0x60001788: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_stage_world3_DE4(rdram, ctx);
        goto after_1;
    // 0x60001788: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x6000178C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x60001790: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x60001794: jal         0x600006C4
    // 0x60001798: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_2;
    // 0x60001798: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_2:
    // 0x6000179C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x600017A0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x600017A4: jal         0x600003DC
    // 0x600017A8: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    ovl_stage_world3_3DC(rdram, ctx);
        goto after_3;
    // 0x600017A8: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    after_3:
    // 0x600017AC: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600017B0: lwc1        $f13, 0x6918($at)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r1, 0X6918);
    // 0x600017B4: lwc1        $f12, 0x691C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X691C);
    // 0x600017B8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600017BC: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x600017C0: lwc1        $f9, 0x6920($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X6920);
    // 0x600017C4: lwc1        $f8, 0x6924($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X6924);
    // 0x600017C8: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x600017CC: mul.d       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f0.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x600017D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x600017D4: c.le.d      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.d <= ctx->f0.d;
    // 0x600017D8: nop

    // 0x600017DC: bc1f        L_600017F8
    if (!c1cs) {
        // 0x600017E0: nop
    
            goto L_600017F8;
    }
    // 0x600017E0: nop

    // 0x600017E4: sub.d       $f10, $f0, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f10.d = ctx->f0.d - ctx->f12.d;
    // 0x600017E8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600017EC: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x600017F0: b           L_6000182C
    // 0x600017F4: swc1        $f16, 0x6AD4($at)
    MEM_W(0X6AD4, ctx->r1) = ctx->f16.u32l;
        goto L_6000182C;
    // 0x600017F4: swc1        $f16, 0x6AD4($at)
    MEM_W(0X6AD4, ctx->r1) = ctx->f16.u32l;
L_600017F8:
    // 0x600017F8: mtc1        $zero, $f19
    ctx->f_odd[(19 - 1) * 2] = 0;
    // 0x600017FC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x60001800: nop

    // 0x60001804: c.lt.d      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.d < ctx->f18.d;
    // 0x60001808: nop

    // 0x6000180C: bc1f        L_6000181C
    if (!c1cs) {
        // 0x60001810: nop
    
            goto L_6000181C;
    }
    // 0x60001810: nop

    // 0x60001814: b           L_60001820
    // 0x60001818: add.d       $f2, $f0, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f2.d = ctx->f0.d + ctx->f12.d;
        goto L_60001820;
    // 0x60001818: add.d       $f2, $f0, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f2.d = ctx->f0.d + ctx->f12.d;
L_6000181C:
    // 0x6000181C: mov.d       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.d = ctx->f0.d;
L_60001820:
    // 0x60001820: cvt.s.d     $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f4.fl = CVT_S_D(ctx->f2.d);
    // 0x60001824: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001828: swc1        $f4, 0x6AD4($at)
    MEM_W(0X6AD4, ctx->r1) = ctx->f4.u32l;
L_6000182C:
    // 0x6000182C: lwc1        $f0, 0x0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X0);
    // 0x60001830: lwc1        $f2, 0x0($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X0);
    // 0x60001834: nop

    // 0x60001838: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x6000183C: nop

    // 0x60001840: bc1f        L_6000185C
    if (!c1cs) {
        // 0x60001844: nop
    
            goto L_6000185C;
    }
    // 0x60001844: nop

    // 0x60001848: sub.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x6000184C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001850: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x60001854: b           L_60001868
    // 0x60001858: swc1        $f8, 0x6AD8($at)
    MEM_W(0X6AD8, ctx->r1) = ctx->f8.u32l;
        goto L_60001868;
    // 0x60001858: swc1        $f8, 0x6AD8($at)
    MEM_W(0X6AD8, ctx->r1) = ctx->f8.u32l;
L_6000185C:
    // 0x6000185C: sub.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x60001860: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001864: swc1        $f10, 0x6AD8($at)
    MEM_W(0X6AD8, ctx->r1) = ctx->f10.u32l;
L_60001868:
    // 0x60001868: lwc1        $f0, 0x8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X8);
    // 0x6000186C: lwc1        $f2, 0x8($s1)
    ctx->f2.u32l = MEM_W(ctx->r17, 0X8);
    // 0x60001870: nop

    // 0x60001874: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x60001878: nop

    // 0x6000187C: bc1f        L_60001898
    if (!c1cs) {
        // 0x60001880: nop
    
            goto L_60001898;
    }
    // 0x60001880: nop

    // 0x60001884: sub.s       $f16, $f0, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x60001888: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x6000188C: neg.s       $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = -ctx->f16.fl;
    // 0x60001890: b           L_600018A4
    // 0x60001894: swc1        $f18, 0x6ADC($at)
    MEM_W(0X6ADC, ctx->r1) = ctx->f18.u32l;
        goto L_600018A4;
    // 0x60001894: swc1        $f18, 0x6ADC($at)
    MEM_W(0X6ADC, ctx->r1) = ctx->f18.u32l;
L_60001898:
    // 0x60001898: sub.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x6000189C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600018A0: swc1        $f4, 0x6ADC($at)
    MEM_W(0X6ADC, ctx->r1) = ctx->f4.u32l;
L_600018A4:
    // 0x600018A4: jal         0x60000418
    // 0x600018A8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    ovl_stage_world3_418(rdram, ctx);
        goto after_4;
    // 0x600018A8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_4:
    // 0x600018AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x600018B0: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600018B4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x600018B8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x600018BC: swc1        $f0, 0x6AD0($at)
    MEM_W(0X6AD0, ctx->r1) = ctx->f0.u32l;
    // 0x600018C0: jr          $ra
    // 0x600018C4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x600018C4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_stage_world3_18C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600018C8: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x600018CC: jr          $ra
    // 0x600018D0: sh          $a0, 0x6B52($at)
    MEM_H(0X6B52, ctx->r1) = ctx->r4;
    return;
    // 0x600018D0: sh          $a0, 0x6B52($at)
    MEM_H(0X6B52, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void ovl_stage_world3_18D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600018D4: jr          $ra
    // 0x600018D8: nop

    return;
    // 0x600018D8: nop

;}
RECOMP_FUNC void ovl_stage_world3_18DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600018DC: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x600018E0: addiu       $v0, $v0, 0x6B50
    ctx->r2 = ADD32(ctx->r2, 0X6B50);
    // 0x600018E4: sb          $a0, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r4;
    // 0x600018E8: jr          $ra
    // 0x600018EC: sb          $a1, 0x7($v0)
    MEM_B(0X7, ctx->r2) = ctx->r5;
    return;
    // 0x600018EC: sb          $a1, 0x7($v0)
    MEM_B(0X7, ctx->r2) = ctx->r5;
;}
RECOMP_FUNC void ovl_stage_world3_18F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x600018F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x600018F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600018F8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x600018FC: jal         0x600018DC
    // 0x60001900: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    ovl_stage_world3_18DC(rdram, ctx);
        goto after_0;
    // 0x60001900: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x60001904: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60001908: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x6000190C: jr          $ra
    // 0x60001910: nop

    return;
    // 0x60001910: nop

;}
RECOMP_FUNC void ovl_stage_world3_1914(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001914: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x60001918: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x6000191C: lui         $a0, 0x6000
    ctx->r4 = S32(0X6000 << 16);
    // 0x60001920: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60001924: lw          $a0, 0x6880($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6880);
    // 0x60001928: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x6000192C: jal         0x600006C4
    // 0x60001930: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    ovl_stage_world3_6C4(rdram, ctx);
        goto after_0;
    // 0x60001930: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    after_0:
    // 0x60001934: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60001938: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x6000193C: jr          $ra
    // 0x60001940: nop

    return;
    // 0x60001940: nop

;}
RECOMP_FUNC void ovl_stage_world3_1944(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x60001944: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60001948: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x6000194C: jal         0x60001914
    // 0x60001950: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    ovl_stage_world3_1914(rdram, ctx);
        goto after_0;
    // 0x60001950: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    after_0:
    // 0x60001954: jal         0x600018F0
    // 0x60001958: nop

    ovl_stage_world3_18F0(rdram, ctx);
        goto after_1;
    // 0x60001958: nop

    after_1:
    // 0x6000195C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60001960: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60001964: jr          $ra
    // 0x60001968: nop

    return;
    // 0x60001968: nop

;}
RECOMP_FUNC void ovl_stage_world3_196C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000196C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x60001970: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x60001974: jal         0x600018F0
    // 0x60001978: nop

    ovl_stage_world3_18F0(rdram, ctx);
        goto after_0;
    // 0x60001978: nop

    after_0:
    // 0x6000197C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x60001980: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x60001984: jr          $ra
    // 0x60001988: nop

    return;
    // 0x60001988: nop

;}
RECOMP_FUNC void ovl_stage_world3_198C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x6000198C: lui         $at, 0x6000
    ctx->r1 = S32(0X6000 << 16);
    // 0x60001990: lwc1        $f12, 0x6AE0($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X6AE0);
    // 0x60001994: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x60001998: lui         $at, 0x428C
    ctx->r1 = S32(0X428C << 16);
    // 0x6000199C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x600019A0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x600019A4: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    // 0x600019A8: jal         0x60001594
    // 0x600019AC: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    ovl_stage_world3_1594(rdram, ctx);
        goto after_0;
    // 0x600019AC: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x600019B0: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x600019B4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x600019B8: jal         0x600018DC
    // 0x600019BC: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    ovl_stage_world3_18DC(rdram, ctx);
        goto after_1;
    // 0x600019BC: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    after_1:
    // 0x600019C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x600019C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x600019C8: jr          $ra
    // 0x600019CC: nop

    return;
    // 0x600019CC: nop

;}
