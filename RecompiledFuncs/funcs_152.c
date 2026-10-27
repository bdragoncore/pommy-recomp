#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_boss_angel_DFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000DFC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000E00: jr          $t1
    // 0x43000E04: addiu       $t0, $zero, 0x1C03
    ctx->r8 = ADD32(0, 0X1C03);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000E04: addiu       $t0, $zero, 0x1C03
    ctx->r8 = ADD32(0, 0X1C03);
;}
RECOMP_FUNC void ovl_boss_angel_E08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000E08: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000E0C: jr          $t1
    // 0x43000E10: addiu       $t0, $zero, 0x1C04
    ctx->r8 = ADD32(0, 0X1C04);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000E10: addiu       $t0, $zero, 0x1C04
    ctx->r8 = ADD32(0, 0X1C04);
;}
RECOMP_FUNC void ovl_boss_angel_E14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000E14: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000E18: jr          $t1
    // 0x43000E1C: addiu       $t0, $zero, 0x1C05
    ctx->r8 = ADD32(0, 0X1C05);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000E1C: addiu       $t0, $zero, 0x1C05
    ctx->r8 = ADD32(0, 0X1C05);
;}
RECOMP_FUNC void ovl_boss_angel_E20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000E20: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000E24: jr          $t1
    // 0x43000E28: addiu       $t0, $zero, 0x1C06
    ctx->r8 = ADD32(0, 0X1C06);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000E28: addiu       $t0, $zero, 0x1C06
    ctx->r8 = ADD32(0, 0X1C06);
;}
RECOMP_FUNC void ovl_boss_angel_E2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000E2C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000E30: jr          $t1
    // 0x43000E34: addiu       $t0, $zero, 0x1C07
    ctx->r8 = ADD32(0, 0X1C07);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000E34: addiu       $t0, $zero, 0x1C07
    ctx->r8 = ADD32(0, 0X1C07);
;}
RECOMP_FUNC void ovl_boss_angel_E38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000E38: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000E3C: jr          $t1
    // 0x43000E40: addiu       $t0, $zero, 0x1C08
    ctx->r8 = ADD32(0, 0X1C08);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000E40: addiu       $t0, $zero, 0x1C08
    ctx->r8 = ADD32(0, 0X1C08);
;}
RECOMP_FUNC void ovl_boss_angel_E44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000E44: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000E48: jr          $t1
    // 0x43000E4C: addiu       $t0, $zero, 0x1C09
    ctx->r8 = ADD32(0, 0X1C09);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000E4C: addiu       $t0, $zero, 0x1C09
    ctx->r8 = ADD32(0, 0X1C09);
;}
RECOMP_FUNC void ovl_boss_angel_E50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000E50: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000E54: jr          $t1
    // 0x43000E58: addiu       $t0, $zero, 0x1C0A
    ctx->r8 = ADD32(0, 0X1C0A);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000E58: addiu       $t0, $zero, 0x1C0A
    ctx->r8 = ADD32(0, 0X1C0A);
;}
RECOMP_FUNC void ovl_boss_angel_E5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000E5C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000E60: jr          $t1
    // 0x43000E64: addiu       $t0, $zero, 0x1C0B
    ctx->r8 = ADD32(0, 0X1C0B);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000E64: addiu       $t0, $zero, 0x1C0B
    ctx->r8 = ADD32(0, 0X1C0B);
;}
RECOMP_FUNC void ovl_boss_angel_E68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000E68: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000E6C: jr          $t1
    // 0x43000E70: addiu       $t0, $zero, 0x1C0C
    ctx->r8 = ADD32(0, 0X1C0C);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000E70: addiu       $t0, $zero, 0x1C0C
    ctx->r8 = ADD32(0, 0X1C0C);
;}
RECOMP_FUNC void ovl_boss_angel_E74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000E74: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000E78: jr          $t1
    // 0x43000E7C: addiu       $t0, $zero, 0x1C0D
    ctx->r8 = ADD32(0, 0X1C0D);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000E7C: addiu       $t0, $zero, 0x1C0D
    ctx->r8 = ADD32(0, 0X1C0D);
;}
RECOMP_FUNC void ovl_boss_angel_E80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000E80: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000E84: jr          $t1
    // 0x43000E88: addiu       $t0, $zero, 0x1C0E
    ctx->r8 = ADD32(0, 0X1C0E);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000E88: addiu       $t0, $zero, 0x1C0E
    ctx->r8 = ADD32(0, 0X1C0E);
;}
RECOMP_FUNC void ovl_boss_angel_E8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000E8C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000E90: jr          $t1
    // 0x43000E94: addiu       $t0, $zero, 0x1C0F
    ctx->r8 = ADD32(0, 0X1C0F);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000E94: addiu       $t0, $zero, 0x1C0F
    ctx->r8 = ADD32(0, 0X1C0F);
;}
RECOMP_FUNC void ovl_boss_angel_E98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000E98: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000E9C: jr          $t1
    // 0x43000EA0: addiu       $t0, $zero, 0x1C10
    ctx->r8 = ADD32(0, 0X1C10);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000EA0: addiu       $t0, $zero, 0x1C10
    ctx->r8 = ADD32(0, 0X1C10);
;}
RECOMP_FUNC void ovl_boss_angel_EA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000EA4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000EA8: jr          $t1
    // 0x43000EAC: addiu       $t0, $zero, 0x1C11
    ctx->r8 = ADD32(0, 0X1C11);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000EAC: addiu       $t0, $zero, 0x1C11
    ctx->r8 = ADD32(0, 0X1C11);
;}
RECOMP_FUNC void ovl_boss_angel_EB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000EB0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000EB4: jr          $t1
    // 0x43000EB8: addiu       $t0, $zero, 0x1C12
    ctx->r8 = ADD32(0, 0X1C12);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000EB8: addiu       $t0, $zero, 0x1C12
    ctx->r8 = ADD32(0, 0X1C12);
;}
RECOMP_FUNC void ovl_boss_angel_EBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000EBC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000EC0: jr          $t1
    // 0x43000EC4: addiu       $t0, $zero, 0x1C13
    ctx->r8 = ADD32(0, 0X1C13);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000EC4: addiu       $t0, $zero, 0x1C13
    ctx->r8 = ADD32(0, 0X1C13);
;}
RECOMP_FUNC void ovl_boss_angel_EC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000EC8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000ECC: jr          $t1
    // 0x43000ED0: addiu       $t0, $zero, 0x1C14
    ctx->r8 = ADD32(0, 0X1C14);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000ED0: addiu       $t0, $zero, 0x1C14
    ctx->r8 = ADD32(0, 0X1C14);
;}
RECOMP_FUNC void ovl_boss_angel_ED4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000ED4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000ED8: jr          $t1
    // 0x43000EDC: addiu       $t0, $zero, 0x1C15
    ctx->r8 = ADD32(0, 0X1C15);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000EDC: addiu       $t0, $zero, 0x1C15
    ctx->r8 = ADD32(0, 0X1C15);
;}
RECOMP_FUNC void ovl_boss_angel_EE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000EE0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000EE4: jr          $t1
    // 0x43000EE8: addiu       $t0, $zero, 0x1C16
    ctx->r8 = ADD32(0, 0X1C16);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000EE8: addiu       $t0, $zero, 0x1C16
    ctx->r8 = ADD32(0, 0X1C16);
;}
RECOMP_FUNC void ovl_boss_angel_EEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000EEC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000EF0: jr          $t1
    // 0x43000EF4: addiu       $t0, $zero, 0x1C17
    ctx->r8 = ADD32(0, 0X1C17);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000EF4: addiu       $t0, $zero, 0x1C17
    ctx->r8 = ADD32(0, 0X1C17);
;}
RECOMP_FUNC void ovl_boss_angel_EF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000EF8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000EFC: jr          $t1
    // 0x43000F00: addiu       $t0, $zero, 0x1C18
    ctx->r8 = ADD32(0, 0X1C18);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000F00: addiu       $t0, $zero, 0x1C18
    ctx->r8 = ADD32(0, 0X1C18);
;}
RECOMP_FUNC void ovl_boss_angel_F04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000F04: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000F08: jr          $t1
    // 0x43000F0C: addiu       $t0, $zero, 0x1C19
    ctx->r8 = ADD32(0, 0X1C19);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000F0C: addiu       $t0, $zero, 0x1C19
    ctx->r8 = ADD32(0, 0X1C19);
;}
RECOMP_FUNC void ovl_boss_angel_F10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000F10: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000F14: jr          $t1
    // 0x43000F18: addiu       $t0, $zero, 0x1C1A
    ctx->r8 = ADD32(0, 0X1C1A);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000F18: addiu       $t0, $zero, 0x1C1A
    ctx->r8 = ADD32(0, 0X1C1A);
;}
RECOMP_FUNC void ovl_boss_angel_F1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000F1C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000F20: jr          $t1
    // 0x43000F24: addiu       $t0, $zero, 0x1C1B
    ctx->r8 = ADD32(0, 0X1C1B);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000F24: addiu       $t0, $zero, 0x1C1B
    ctx->r8 = ADD32(0, 0X1C1B);
;}
RECOMP_FUNC void ovl_boss_angel_F28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000F28: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000F2C: jr          $t1
    // 0x43000F30: addiu       $t0, $zero, 0x1C1C
    ctx->r8 = ADD32(0, 0X1C1C);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000F30: addiu       $t0, $zero, 0x1C1C
    ctx->r8 = ADD32(0, 0X1C1C);
;}
RECOMP_FUNC void ovl_boss_angel_F34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000F34: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000F38: jr          $t1
    // 0x43000F3C: addiu       $t0, $zero, 0x1D00
    ctx->r8 = ADD32(0, 0X1D00);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000F3C: addiu       $t0, $zero, 0x1D00
    ctx->r8 = ADD32(0, 0X1D00);
;}
RECOMP_FUNC void ovl_boss_angel_F40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000F40: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x43000F44: jr          $t1
    // 0x43000F48: addiu       $t0, $zero, 0x1D01
    ctx->r8 = ADD32(0, 0X1D01);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x43000F48: addiu       $t0, $zero, 0x1D01
    ctx->r8 = ADD32(0, 0X1D01);
    // 0x43000F4C: nop

;}
RECOMP_FUNC void ovl_boss_angel_F50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000F50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43000F54: sltiu       $at, $a0, 0x5
    ctx->r1 = ctx->r4 < 0X5 ? 1 : 0;
    // 0x43000F58: beq         $at, $zero, L_43000F94
    if (ctx->r1 == 0) {
        // 0x43000F5C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_43000F94;
    }
    // 0x43000F5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43000F60: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x43000F64: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43000F68: addu        $at, $at, $t6
    gpr jr_addend_43000F74 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x43000F6C: lw          $t6, -0x4320($at)
    ctx->r14 = ADD32(ctx->r1, -0X4320);
    // 0x43000F70: nop

    // 0x43000F74: jr          $t6
    // 0x43000F78: nop

    switch (jr_addend_43000F74 >> 2) {
        case 0: goto L_43000F7C; break;
        case 1: goto L_43000F8C; break;
        case 2: goto L_43000F94; break;
        case 3: goto L_43000F94; break;
        case 4: goto L_43000F94; break;
        default: switch_error(__func__, 0x43000F74, 0x4300BCE0);
    }
    // 0x43000F78: nop

L_43000F7C:
    // 0x43000F7C: jal         0x43000FB0
    // 0x43000F80: nop

    ovl_boss_angel_FB0(rdram, ctx);
        goto after_0;
    // 0x43000F80: nop

    after_0:
    // 0x43000F84: b           L_43000F98
    // 0x43000F88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_43000F98;
    // 0x43000F88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43000F8C:
    // 0x43000F8C: jal         0x43001034
    // 0x43000F90: nop

    ovl_boss_angel_1034(rdram, ctx);
        goto after_1;
    // 0x43000F90: nop

    after_1:
L_43000F94:
    // 0x43000F94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_43000F98:
    // 0x43000F98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43000F9C: jr          $ra
    // 0x43000FA0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x43000FA0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x43000FA4: nop

    // 0x43000FA8: nop

    // 0x43000FAC: nop

;}
RECOMP_FUNC void ovl_boss_angel_FB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43000FB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43000FB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43000FB8: jal         0x4300A5E4
    // 0x43000FBC: nop

    ovl_boss_angel_A5E4(rdram, ctx);
        goto after_0;
    // 0x43000FBC: nop

    after_0:
    // 0x43000FC0: jal         0x4300B268
    // 0x43000FC4: nop

    ovl_boss_angel_B268(rdram, ctx);
        goto after_1;
    // 0x43000FC4: nop

    after_1:
    // 0x43000FC8: jal         0x430013F0
    // 0x43000FCC: nop

    ovl_boss_angel_13F0(rdram, ctx);
        goto after_2;
    // 0x43000FCC: nop

    after_2:
    // 0x43000FD0: jal         0x4300B2E4
    // 0x43000FD4: nop

    ovl_boss_angel_B2E4(rdram, ctx);
        goto after_3;
    // 0x43000FD4: nop

    after_3:
    // 0x43000FD8: jal         0x4300A01C
    // 0x43000FDC: nop

    ovl_boss_angel_A01C(rdram, ctx);
        goto after_4;
    // 0x43000FDC: nop

    after_4:
    // 0x43000FE0: jal         0x43004B88
    // 0x43000FE4: nop

    ovl_boss_angel_4B88(rdram, ctx);
        goto after_5;
    // 0x43000FE4: nop

    after_5:
    // 0x43000FE8: jal         0x43001940
    // 0x43000FEC: nop

    ovl_boss_angel_1940(rdram, ctx);
        goto after_6;
    // 0x43000FEC: nop

    after_6:
    // 0x43000FF0: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43000FF4: jal         0x43001170
    // 0x43000FF8: sw          $v0, -0x3FE8($at)
    MEM_W(-0X3FE8, ctx->r1) = ctx->r2;
    ovl_boss_angel_1170(rdram, ctx);
        goto after_7;
    // 0x43000FF8: sw          $v0, -0x3FE8($at)
    MEM_W(-0X3FE8, ctx->r1) = ctx->r2;
    after_7:
    // 0x43000FFC: lui         $t7, 0x4301
    ctx->r15 = S32(0X4301 << 16);
    // 0x43001000: addiu       $t7, $t7, -0x4810
    ctx->r15 = ADD32(ctx->r15, -0X4810);
    // 0x43001004: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x43001008: lui         $t6, 0x4301
    ctx->r14 = S32(0X4301 << 16);
    // 0x4300100C: addiu       $t6, $t6, -0x4008
    ctx->r14 = ADD32(ctx->r14, -0X4008);
    // 0x43001010: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x43001014: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x43001018: lw          $t0, 0x4($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X4);
    // 0x4300101C: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x43001020: sw          $t0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r8;
    // 0x43001024: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43001028: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x4300102C: jr          $ra
    // 0x43001030: nop

    return;
    // 0x43001030: nop

;}
RECOMP_FUNC void ovl_boss_angel_1034(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001034: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43001038: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4300103C: jal         0x4300B2EC
    // 0x43001040: nop

    ovl_boss_angel_B2EC(rdram, ctx);
        goto after_0;
    // 0x43001040: nop

    after_0:
    // 0x43001044: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x43001048: lw          $a0, -0x3FE8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3FE8);
    // 0x4300104C: nop

    // 0x43001050: lw          $t9, 0x60($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X60);
    // 0x43001054: nop

    // 0x43001058: jalr        $t9
    // 0x4300105C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x4300105C: nop

    after_1:
    // 0x43001060: jal         0x43009FCC
    // 0x43001064: nop

    ovl_boss_angel_9FCC(rdram, ctx);
        goto after_2;
    // 0x43001064: nop

    after_2:
    // 0x43001068: jal         0x43001238
    // 0x4300106C: nop

    ovl_boss_angel_1238(rdram, ctx);
        goto after_3;
    // 0x4300106C: nop

    after_3:
    // 0x43001070: jal         0x43004E58
    // 0x43001074: nop

    ovl_boss_angel_4E58(rdram, ctx);
        goto after_4;
    // 0x43001074: nop

    after_4:
    // 0x43001078: jal         0x4300B3F8
    // 0x4300107C: nop

    ovl_boss_angel_B3F8(rdram, ctx);
        goto after_5;
    // 0x4300107C: nop

    after_5:
    // 0x43001080: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43001084: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43001088: jr          $ra
    // 0x4300108C: nop

    return;
    // 0x4300108C: nop

;}
RECOMP_FUNC void ovl_boss_angel_1090(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001090: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x43001094: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x43001098: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x4300109C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x430010A0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x430010A4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x430010A8: lui         $s0, 0x4301
    ctx->r16 = S32(0X4301 << 16);
    // 0x430010AC: lui         $s2, 0x4301
    ctx->r18 = S32(0X4301 << 16);
    // 0x430010B0: lui         $s3, 0x4301
    ctx->r19 = S32(0X4301 << 16);
    // 0x430010B4: lui         $s4, 0x4301
    ctx->r20 = S32(0X4301 << 16);
    // 0x430010B8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x430010BC: addiu       $s4, $s4, -0x3FF8
    ctx->r20 = ADD32(ctx->r20, -0X3FF8);
    // 0x430010C0: addiu       $s3, $s3, -0x4008
    ctx->r19 = ADD32(ctx->r19, -0X4008);
    // 0x430010C4: addiu       $s2, $s2, -0x3FEC
    ctx->r18 = ADD32(ctx->r18, -0X3FEC);
    // 0x430010C8: addiu       $s0, $s0, -0x4010
    ctx->r16 = ADD32(ctx->r16, -0X4010);
    // 0x430010CC: addiu       $s1, $sp, 0x34
    ctx->r17 = ADD32(ctx->r29, 0X34);
L_430010D0:
    // 0x430010D0: jal         0x43000DE4
    // 0x430010D4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_boss_angel_DE4(rdram, ctx);
        goto after_0;
    // 0x430010D4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x430010D8: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x430010DC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x430010E0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x430010E4: jal         0x430006C4
    // 0x430010E8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_boss_angel_6C4(rdram, ctx);
        goto after_1;
    // 0x430010E8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_1:
    // 0x430010EC: bne         $v0, $zero, L_4300110C
    if (ctx->r2 != 0) {
        // 0x430010F0: nop
    
            goto L_4300110C;
    }
    // 0x430010F0: nop

    // 0x430010F4: lw          $at, 0x0($s1)
    ctx->r1 = MEM_W(ctx->r17, 0X0);
    // 0x430010F8: lw          $t7, 0x4($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X4);
    // 0x430010FC: sw          $at, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r1;
    // 0x43001100: lw          $at, 0x8($s1)
    ctx->r1 = MEM_W(ctx->r17, 0X8);
    // 0x43001104: sw          $t7, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r15;
    // 0x43001108: sw          $at, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r1;
L_4300110C:
    // 0x4300110C: jal         0x43004B58
    // 0x43001110: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    ovl_boss_angel_4B58(rdram, ctx);
        goto after_2;
    // 0x43001110: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_2:
    // 0x43001114: jal         0x43001480
    // 0x43001118: nop

    ovl_boss_angel_1480(rdram, ctx);
        goto after_3;
    // 0x43001118: nop

    after_3:
    // 0x4300111C: lw          $t8, 0x0($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X0);
    // 0x43001120: nop

    // 0x43001124: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x43001128: jal         0x4300085C
    // 0x4300112C: sw          $t9, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r25;
    ovl_boss_angel_85C(rdram, ctx);
        goto after_4;
    // 0x4300112C: sw          $t9, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r25;
    after_4:
    // 0x43001130: b           L_430010D0
    // 0x43001134: nop

        goto L_430010D0;
    // 0x43001134: nop

    // 0x43001138: nop

    // 0x4300113C: nop

    // 0x43001140: nop

    // 0x43001144: nop

    // 0x43001148: nop

    // 0x4300114C: nop

    // 0x43001150: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x43001154: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43001158: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x4300115C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x43001160: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x43001164: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x43001168: jr          $ra
    // 0x4300116C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x4300116C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_boss_angel_1170(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001170: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x43001174: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43001178: jal         0x43000DE4
    // 0x4300117C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_boss_angel_DE4(rdram, ctx);
        goto after_0;
    // 0x4300117C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x43001180: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x43001184: addiu       $v1, $v1, -0x4010
    ctx->r3 = ADD32(ctx->r3, -0X4010);
    // 0x43001188: lui         $t6, 0x4301
    ctx->r14 = S32(0X4301 << 16);
    // 0x4300118C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x43001190: addiu       $t6, $t6, -0x4804
    ctx->r14 = ADD32(ctx->r14, -0X4804);
    // 0x43001194: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x43001198: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x4300119C: sw          $at, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r1;
    // 0x430011A0: lw          $t8, 0x4($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X4);
    // 0x430011A4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x430011A8: sw          $t8, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r24;
    // 0x430011AC: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x430011B0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x430011B4: jal         0x430006C4
    // 0x430011B8: sw          $at, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r1;
    ovl_boss_angel_6C4(rdram, ctx);
        goto after_1;
    // 0x430011B8: sw          $at, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r1;
    after_1:
    // 0x430011BC: lui         $a0, 0x4300
    ctx->r4 = S32(0X4300 << 16);
    // 0x430011C0: addiu       $a0, $a0, 0x1090
    ctx->r4 = ADD32(ctx->r4, 0X1090);
    // 0x430011C4: ori         $a1, $zero, 0xFED1
    ctx->r5 = 0 | 0XFED1;
    // 0x430011C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x430011CC: jal         0x43000820
    // 0x430011D0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_boss_angel_820(rdram, ctx);
        goto after_2;
    // 0x430011D0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x430011D4: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430011D8: lui         $t0, 0x4301
    ctx->r8 = S32(0X4301 << 16);
    // 0x430011DC: sw          $v0, -0x3D20($at)
    MEM_W(-0X3D20, ctx->r1) = ctx->r2;
    // 0x430011E0: addiu       $t0, $t0, -0x4804
    ctx->r8 = ADD32(ctx->r8, -0X4804);
    // 0x430011E4: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x430011E8: lui         $t9, 0x4301
    ctx->r25 = S32(0X4301 << 16);
    // 0x430011EC: addiu       $t9, $t9, -0x4008
    ctx->r25 = ADD32(ctx->r25, -0X4008);
    // 0x430011F0: sw          $at, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r1;
    // 0x430011F4: lw          $at, 0x8($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X8);
    // 0x430011F8: lw          $t3, 0x4($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X4);
    // 0x430011FC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x43001200: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x43001204: addiu       $v1, $v1, -0x3FF8
    ctx->r3 = ADD32(ctx->r3, -0X3FF8);
    // 0x43001208: sw          $at, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->r1;
    // 0x4300120C: sw          $t3, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r11;
    // 0x43001210: swc1        $f4, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f4.u32l;
    // 0x43001214: lwc1        $f6, 0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8);
    // 0x43001218: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4300121C: swc1        $f6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f6.u32l;
    // 0x43001220: lwc1        $f8, 0x4($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X4);
    // 0x43001224: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43001228: swc1        $f8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f8.u32l;
    // 0x4300122C: sw          $zero, -0x3FEC($at)
    MEM_W(-0X3FEC, ctx->r1) = 0;
    // 0x43001230: jr          $ra
    // 0x43001234: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x43001234: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_boss_angel_1238(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001238: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4300123C: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x43001240: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43001244: lw          $a0, -0x3D20($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3D20);
    // 0x43001248: jal         0x4300082C
    // 0x4300124C: nop

    ovl_boss_angel_82C(rdram, ctx);
        goto after_0;
    // 0x4300124C: nop

    after_0:
    // 0x43001250: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43001254: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43001258: jr          $ra
    // 0x4300125C: nop

    return;
    // 0x4300125C: nop

;}
RECOMP_FUNC void ovl_boss_angel_1260(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001260: lui         $t0, 0x4301
    ctx->r8 = S32(0X4301 << 16);
    // 0x43001264: addiu       $t0, $t0, -0x3D24
    ctx->r8 = ADD32(ctx->r8, -0X3D24);
    // 0x43001268: lh          $v0, 0x0($t0)
    ctx->r2 = MEM_H(ctx->r8, 0X0);
    // 0x4300126C: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x43001270: sll         $t6, $v0, 1
    ctx->r14 = S32(ctx->r2 << 1);
    // 0x43001274: addu        $v1, $v1, $t6
    ctx->r3 = ADD32(ctx->r3, ctx->r14);
    // 0x43001278: lh          $v1, -0x3D88($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X3D88);
    // 0x4300127C: lui         $t9, 0x4301
    ctx->r25 = S32(0X4301 << 16);
    // 0x43001280: sll         $t8, $v1, 2
    ctx->r24 = S32(ctx->r3 << 2);
    // 0x43001284: subu        $t8, $t8, $v1
    ctx->r24 = SUB32(ctx->r24, ctx->r3);
    // 0x43001288: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x4300128C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x43001290: addiu       $t9, $t9, -0x3FE0
    ctx->r25 = ADD32(ctx->r25, -0X3FE0);
    // 0x43001294: addu        $a0, $t8, $t9
    ctx->r4 = ADD32(ctx->r24, ctx->r25);
    // 0x43001298: addiu       $t7, $v0, 0x1
    ctx->r15 = ADD32(ctx->r2, 0X1);
    // 0x4300129C: sh          $t7, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r15;
    // 0x430012A0: sw          $a3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r7;
    // 0x430012A4: sw          $a1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r5;
    // 0x430012A8: jr          $ra
    // 0x430012AC: sw          $a2, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r6;
    return;
    // 0x430012AC: sw          $a2, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r6;
;}
RECOMP_FUNC void ovl_boss_angel_12B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430012B0: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x430012B4: addiu       $v1, $v1, -0x3FE0
    ctx->r3 = ADD32(ctx->r3, -0X3FE0);
    // 0x430012B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x430012BC: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
L_430012C0:
    // 0x430012C0: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x430012C4: nop

    // 0x430012C8: beq         $a0, $t6, L_430012E0
    if (ctx->r4 == ctx->r14) {
        // 0x430012CC: slti        $at, $v0, 0x32
        ctx->r1 = SIGNED(ctx->r2) < 0X32 ? 1 : 0;
            goto L_430012E0;
    }
    // 0x430012CC: slti        $at, $v0, 0x32
    ctx->r1 = SIGNED(ctx->r2) < 0X32 ? 1 : 0;
    // 0x430012D0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x430012D4: bne         $v0, $a1, L_430012C0
    if (ctx->r2 != ctx->r5) {
        // 0x430012D8: addiu       $v1, $v1, 0xC
        ctx->r3 = ADD32(ctx->r3, 0XC);
            goto L_430012C0;
    }
    // 0x430012D8: addiu       $v1, $v1, 0xC
    ctx->r3 = ADD32(ctx->r3, 0XC);
    // 0x430012DC: slti        $at, $v0, 0x32
    ctx->r1 = SIGNED(ctx->r2) < 0X32 ? 1 : 0;
L_430012E0:
    // 0x430012E0: beq         $at, $zero, L_43001318
    if (ctx->r1 == 0) {
        // 0x430012E4: lui         $a1, 0x4301
        ctx->r5 = S32(0X4301 << 16);
            goto L_43001318;
    }
    // 0x430012E4: lui         $a1, 0x4301
    ctx->r5 = S32(0X4301 << 16);
    // 0x430012E8: addiu       $a1, $a1, -0x3D24
    ctx->r5 = ADD32(ctx->r5, -0X3D24);
    // 0x430012EC: lh          $a0, 0x0($a1)
    ctx->r4 = MEM_H(ctx->r5, 0X0);
    // 0x430012F0: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x430012F4: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x430012F8: sll         $t8, $a0, 16
    ctx->r24 = S32(ctx->r4 << 16);
    // 0x430012FC: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x43001300: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x43001304: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43001308: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x4300130C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x43001310: sh          $t9, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r25;
    // 0x43001314: sh          $v0, -0x3D88($at)
    MEM_H(-0X3D88, ctx->r1) = ctx->r2;
L_43001318:
    // 0x43001318: jr          $ra
    // 0x4300131C: nop

    return;
    // 0x4300131C: nop

;}
RECOMP_FUNC void ovl_boss_angel_1320(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001320: lui         $t6, 0x4301
    ctx->r14 = S32(0X4301 << 16);
    // 0x43001324: lw          $t6, -0x3FE0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3FE0);
    // 0x43001328: lui         $t7, 0x4301
    ctx->r15 = S32(0X4301 << 16);
    // 0x4300132C: bne         $a0, $t6, L_43001340
    if (ctx->r4 != ctx->r14) {
        // 0x43001330: lui         $v0, 0x4301
        ctx->r2 = S32(0X4301 << 16);
            goto L_43001340;
    }
    // 0x43001330: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x43001334: lw          $v0, -0x3FDC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3FDC);
    // 0x43001338: jr          $ra
    // 0x4300133C: nop

    return;
    // 0x4300133C: nop

L_43001340:
    // 0x43001340: lw          $t7, -0x3FD4($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3FD4);
    // 0x43001344: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x43001348: bne         $a0, $t7, L_43001360
    if (ctx->r4 != ctx->r15) {
        // 0x4300134C: addiu       $v1, $v1, -0x3FC8
        ctx->r3 = ADD32(ctx->r3, -0X3FC8);
            goto L_43001360;
    }
    // 0x4300134C: addiu       $v1, $v1, -0x3FC8
    ctx->r3 = ADD32(ctx->r3, -0X3FC8);
    // 0x43001350: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x43001354: lw          $v0, -0x3FD0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3FD0);
    // 0x43001358: jr          $ra
    // 0x4300135C: nop

    return;
    // 0x4300135C: nop

L_43001360:
    // 0x43001360: lui         $v0, 0x4301
    ctx->r2 = S32(0X4301 << 16);
    // 0x43001364: addiu       $v0, $v0, -0x3D88
    ctx->r2 = ADD32(ctx->r2, -0X3D88);
L_43001368:
    // 0x43001368: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x4300136C: nop

    // 0x43001370: bne         $a0, $t8, L_43001384
    if (ctx->r4 != ctx->r24) {
        // 0x43001374: nop
    
            goto L_43001384;
    }
    // 0x43001374: nop

    // 0x43001378: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x4300137C: jr          $ra
    // 0x43001380: nop

    return;
    // 0x43001380: nop

L_43001384:
    // 0x43001384: lw          $t9, 0xC($v1)
    ctx->r25 = MEM_W(ctx->r3, 0XC);
    // 0x43001388: nop

    // 0x4300138C: bne         $a0, $t9, L_430013A0
    if (ctx->r4 != ctx->r25) {
        // 0x43001390: nop
    
            goto L_430013A0;
    }
    // 0x43001390: nop

    // 0x43001394: lw          $v0, 0x10($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X10);
    // 0x43001398: jr          $ra
    // 0x4300139C: nop

    return;
    // 0x4300139C: nop

L_430013A0:
    // 0x430013A0: lw          $t0, 0x18($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X18);
    // 0x430013A4: nop

    // 0x430013A8: bne         $a0, $t0, L_430013BC
    if (ctx->r4 != ctx->r8) {
        // 0x430013AC: nop
    
            goto L_430013BC;
    }
    // 0x430013AC: nop

    // 0x430013B0: lw          $v0, 0x1C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X1C);
    // 0x430013B4: jr          $ra
    // 0x430013B8: nop

    return;
    // 0x430013B8: nop

L_430013BC:
    // 0x430013BC: lw          $t1, 0x24($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X24);
    // 0x430013C0: nop

    // 0x430013C4: bne         $a0, $t1, L_430013D8
    if (ctx->r4 != ctx->r9) {
        // 0x430013C8: nop
    
            goto L_430013D8;
    }
    // 0x430013C8: nop

    // 0x430013CC: lw          $v0, 0x28($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X28);
    // 0x430013D0: jr          $ra
    // 0x430013D4: nop

    return;
    // 0x430013D4: nop

L_430013D8:
    // 0x430013D8: addiu       $v1, $v1, 0x30
    ctx->r3 = ADD32(ctx->r3, 0X30);
    // 0x430013DC: bne         $v1, $v0, L_43001368
    if (ctx->r3 != ctx->r2) {
        // 0x430013E0: nop
    
            goto L_43001368;
    }
    // 0x430013E0: nop

    // 0x430013E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x430013E8: jr          $ra
    // 0x430013EC: nop

    return;
    // 0x430013EC: nop

;}
RECOMP_FUNC void ovl_boss_angel_13F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430013F0: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x430013F4: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430013F8: sw          $t6, -0x3FE0($at)
    MEM_W(-0X3FE0, ctx->r1) = ctx->r14;
    // 0x430013FC: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43001400: sh          $zero, -0x3D88($at)
    MEM_H(-0X3D88, ctx->r1) = 0;
    // 0x43001404: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43001408: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x4300140C: sw          $t7, -0x3FD4($at)
    MEM_W(-0X3FD4, ctx->r1) = ctx->r15;
    // 0x43001410: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43001414: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x43001418: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x4300141C: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x43001420: addiu       $a0, $a0, -0x3D84
    ctx->r4 = ADD32(ctx->r4, -0X3D84);
    // 0x43001424: addiu       $v1, $v1, -0x3FC8
    ctx->r3 = ADD32(ctx->r3, -0X3FC8);
    // 0x43001428: sh          $t8, -0x3D86($at)
    MEM_H(-0X3D86, ctx->r1) = ctx->r24;
    // 0x4300142C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x43001430: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    // 0x43001434: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
L_43001438:
    // 0x43001438: addiu       $t9, $v0, 0x1
    ctx->r25 = ADD32(ctx->r2, 0X1);
    // 0x4300143C: addiu       $t0, $v0, 0x2
    ctx->r8 = ADD32(ctx->r2, 0X2);
    // 0x43001440: addiu       $t1, $v0, 0x3
    ctx->r9 = ADD32(ctx->r2, 0X3);
    // 0x43001444: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x43001448: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x4300144C: sh          $t1, 0x6($a0)
    MEM_H(0X6, ctx->r4) = ctx->r9;
    // 0x43001450: sh          $t0, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r8;
    // 0x43001454: sh          $t9, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r25;
    // 0x43001458: sw          $a1, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r5;
    // 0x4300145C: sw          $a1, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r5;
    // 0x43001460: sw          $a1, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r5;
    // 0x43001464: addiu       $v1, $v1, 0x30
    ctx->r3 = ADD32(ctx->r3, 0X30);
    // 0x43001468: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x4300146C: bne         $v0, $a2, L_43001438
    if (ctx->r2 != ctx->r6) {
        // 0x43001470: sw          $a1, -0x30($v1)
        MEM_W(-0X30, ctx->r3) = ctx->r5;
            goto L_43001438;
    }
    // 0x43001470: sw          $a1, -0x30($v1)
    MEM_W(-0X30, ctx->r3) = ctx->r5;
    // 0x43001474: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43001478: jr          $ra
    // 0x4300147C: sh          $zero, -0x3D24($at)
    MEM_H(-0X3D24, ctx->r1) = 0;
    return;
    // 0x4300147C: sh          $zero, -0x3D24($at)
    MEM_H(-0X3D24, ctx->r1) = 0;
;}
RECOMP_FUNC void ovl_boss_angel_1480(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001480: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x43001484: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x43001488: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x4300148C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x43001490: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x43001494: lui         $s0, 0x4301
    ctx->r16 = S32(0X4301 << 16);
    // 0x43001498: lui         $s3, 0x4301
    ctx->r19 = S32(0X4301 << 16);
    // 0x4300149C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x430014A0: addiu       $s3, $s3, -0x3D88
    ctx->r19 = ADD32(ctx->r19, -0X3D88);
    // 0x430014A4: addiu       $s0, $s0, -0x3FE0
    ctx->r16 = ADD32(ctx->r16, -0X3FE0);
    // 0x430014A8: addiu       $s1, $sp, 0x34
    ctx->r17 = ADD32(ctx->r29, 0X34);
    // 0x430014AC: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
L_430014B0:
    // 0x430014B0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x430014B4: nop

    // 0x430014B8: beq         $s2, $a0, L_430014F0
    if (ctx->r18 == ctx->r4) {
        // 0x430014BC: nop
    
            goto L_430014F0;
    }
    // 0x430014BC: nop

    // 0x430014C0: lw          $t6, 0x8($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X8);
    // 0x430014C4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x430014C8: beq         $t6, $zero, L_430014F0
    if (ctx->r14 == 0) {
        // 0x430014CC: nop
    
            goto L_430014F0;
    }
    // 0x430014CC: nop

    // 0x430014D0: jal         0x430006C4
    // 0x430014D4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    ovl_boss_angel_6C4(rdram, ctx);
        goto after_0;
    // 0x430014D4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_0:
    // 0x430014D8: bne         $v0, $zero, L_430014F0
    if (ctx->r2 != 0) {
        // 0x430014DC: nop
    
            goto L_430014F0;
    }
    // 0x430014DC: nop

    // 0x430014E0: lw          $t9, 0x8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X8);
    // 0x430014E4: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x430014E8: jalr        $t9
    // 0x430014EC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x430014EC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_1:
L_430014F0:
    // 0x430014F0: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x430014F4: bne         $s0, $s3, L_430014B0
    if (ctx->r16 != ctx->r19) {
        // 0x430014F8: nop
    
            goto L_430014B0;
    }
    // 0x430014F8: nop

    // 0x430014FC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43001500: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x43001504: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x43001508: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x4300150C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x43001510: jr          $ra
    // 0x43001514: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x43001514: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x43001518: nop

    // 0x4300151C: nop

;}
RECOMP_FUNC void ovl_boss_angel_1520(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001520: jr          $ra
    // 0x43001524: nop

    return;
    // 0x43001524: nop

;}
RECOMP_FUNC void ovl_boss_angel_1528(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001528: lw          $t6, 0x30($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X30);
    // 0x4300152C: nop

    // 0x43001530: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x43001534: nop

    // 0x43001538: sw          $at, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r1;
    // 0x4300153C: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x43001540: lwc1        $f8, 0x0($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X0);
    // 0x43001544: sw          $t9, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r25;
    // 0x43001548: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x4300154C: nop

    // 0x43001550: sw          $at, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r1;
    // 0x43001554: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43001558: lwc1        $f6, -0x42D0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X42D0);
    // 0x4300155C: lwc1        $f4, 0x28($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X28);
    // 0x43001560: lwc1        $f10, 0x20($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X20);
    // 0x43001564: mul.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x43001568: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x4300156C: lwc1        $f6, 0x8($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X8);
    // 0x43001570: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x43001574: sub.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x43001578: swc1        $f18, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f18.u32l;
    // 0x4300157C: lwc1        $f4, -0x42CC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X42CC);
    // 0x43001580: nop

    // 0x43001584: swc1        $f4, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f4.u32l;
    // 0x43001588: lwc1        $f10, 0x24($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X24);
    // 0x4300158C: nop

    // 0x43001590: mul.s       $f8, $f10, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x43001594: sub.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x43001598: jr          $ra
    // 0x4300159C: swc1        $f16, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f16.u32l;
    return;
    // 0x4300159C: swc1        $f16, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f16.u32l;
;}
RECOMP_FUNC void ovl_boss_angel_15A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x430015A0: lui         $t6, 0x4301
    ctx->r14 = S32(0X4301 << 16);
    // 0x430015A4: addiu       $t6, $t6, -0x4008
    ctx->r14 = ADD32(ctx->r14, -0X4008);
    // 0x430015A8: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x430015AC: nop

    // 0x430015B0: sw          $at, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r1;
    // 0x430015B4: lw          $t9, 0x4($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X4);
    // 0x430015B8: nop

    // 0x430015BC: sw          $t9, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r25;
    // 0x430015C0: lw          $at, 0x8($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X8);
    // 0x430015C4: nop

    // 0x430015C8: sw          $at, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r1;
    // 0x430015CC: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430015D0: lwc1        $f4, -0x42C8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X42C8);
    // 0x430015D4: lwc1        $f2, 0x28($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X28);
    // 0x430015D8: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430015DC: mul.s       $f0, $f2, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = MUL_S(ctx->f2.fl, ctx->f4.fl);
    // 0x430015E0: lwc1        $f6, -0x42C4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X42C4);
    // 0x430015E4: lw          $t0, 0x30($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X30);
    // 0x430015E8: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x430015EC: mul.s       $f12, $f2, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x430015F0: lwc1        $f10, -0x42C0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X42C0);
    // 0x430015F4: lwc1        $f8, 0x4($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X4);
    // 0x430015F8: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x430015FC: mul.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x43001600: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x43001604: lwc1        $f8, 0x20($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X20);
    // 0x43001608: lwc1        $f6, 0x0($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X0);
    // 0x4300160C: add.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f0.fl;
    // 0x43001610: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43001614: add.s       $f16, $f4, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f14.fl;
    // 0x43001618: mul.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x4300161C: sub.s       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x43001620: swc1        $f18, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f18.u32l;
    // 0x43001624: lw          $t1, 0x30($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X30);
    // 0x43001628: lwc1        $f8, -0x42BC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X42BC);
    // 0x4300162C: lwc1        $f4, 0x4($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X4);
    // 0x43001630: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x43001634: mul.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x43001638: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x4300163C: lwc1        $f8, 0x8($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X8);
    // 0x43001640: add.s       $f18, $f10, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f12.fl;
    // 0x43001644: add.s       $f4, $f18, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x43001648: swc1        $f4, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f4.u32l;
    // 0x4300164C: lwc1        $f10, 0x24($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X24);
    // 0x43001650: nop

    // 0x43001654: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x43001658: sub.s       $f6, $f8, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f18.fl;
    // 0x4300165C: jr          $ra
    // 0x43001660: swc1        $f6, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f6.u32l;
    return;
    // 0x43001660: swc1        $f6, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f6.u32l;
;}
RECOMP_FUNC void ovl_boss_angel_1664(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001664: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x43001668: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x4300166C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x43001670: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x43001674: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x43001678: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x4300167C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x43001680: lwc1        $f20, 0x10($a0)
    ctx->f20.u32l = MEM_W(ctx->r4, 0X10);
    // 0x43001684: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x43001688: or          $s1, $a2, $zero
    ctx->r17 = ctx->r6 | 0;
    // 0x4300168C: jal         0x4300A670
    // 0x43001690: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    ovl_boss_angel_A670(rdram, ctx);
        goto after_0;
    // 0x43001690: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_0:
    // 0x43001694: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x43001698: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x4300169C: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x430016A0: jal         0x4300A670
    // 0x430016A4: swc1        $f6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f6.u32l;
    ovl_boss_angel_A670(rdram, ctx);
        goto after_1;
    // 0x430016A4: swc1        $f6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f6.u32l;
    after_1:
    // 0x430016A8: lwc1        $f8, 0x4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X4);
    // 0x430016AC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x430016B0: add.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x430016B4: jal         0x4300A670
    // 0x430016B8: swc1        $f10, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f10.u32l;
    ovl_boss_angel_A670(rdram, ctx);
        goto after_2;
    // 0x430016B8: swc1        $f10, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f10.u32l;
    after_2:
    // 0x430016BC: lwc1        $f16, 0x8($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X8);
    // 0x430016C0: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x430016C4: add.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x430016C8: jal         0x4300A670
    // 0x430016CC: swc1        $f18, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f18.u32l;
    ovl_boss_angel_A670(rdram, ctx);
        goto after_3;
    // 0x430016CC: swc1        $f18, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f18.u32l;
    after_3:
    // 0x430016D0: lwc1        $f4, 0x0($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X0);
    // 0x430016D4: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x430016D8: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x430016DC: jal         0x4300A670
    // 0x430016E0: swc1        $f6, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f6.u32l;
    ovl_boss_angel_A670(rdram, ctx);
        goto after_4;
    // 0x430016E0: swc1        $f6, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f6.u32l;
    after_4:
    // 0x430016E4: lwc1        $f8, 0x4($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X4);
    // 0x430016E8: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x430016EC: add.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x430016F0: jal         0x4300A670
    // 0x430016F4: swc1        $f10, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f10.u32l;
    ovl_boss_angel_A670(rdram, ctx);
        goto after_5;
    // 0x430016F4: swc1        $f10, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f10.u32l;
    after_5:
    // 0x430016F8: lwc1        $f16, 0x8($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X8);
    // 0x430016FC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x43001700: add.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x43001704: swc1        $f18, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f18.u32l;
    // 0x43001708: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x4300170C: nop

    // 0x43001710: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x43001714: addiu       $t7, $v0, -0x1
    ctx->r15 = ADD32(ctx->r2, -0X1);
    // 0x43001718: beq         $v1, $zero, L_43001724
    if (ctx->r3 == 0) {
        // 0x4300171C: sw          $t7, 0xC($a0)
        MEM_W(0XC, ctx->r4) = ctx->r15;
            goto L_43001724;
    }
    // 0x4300171C: sw          $t7, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r15;
    // 0x43001720: sw          $zero, 0x54($a0)
    MEM_W(0X54, ctx->r4) = 0;
L_43001724:
    // 0x43001724: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x43001728: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x4300172C: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x43001730: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x43001734: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x43001738: jr          $ra
    // 0x4300173C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x4300173C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_boss_angel_1740(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001740: jr          $ra
    // 0x43001744: sw          $zero, 0x54($a0)
    MEM_W(0X54, ctx->r4) = 0;
    return;
    // 0x43001744: sw          $zero, 0x54($a0)
    MEM_W(0X54, ctx->r4) = 0;
;}
RECOMP_FUNC void ovl_boss_angel_1748(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001748: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x4300174C: lui         $t6, 0x4300
    ctx->r14 = S32(0X4300 << 16);
    // 0x43001750: addiu       $t6, $t6, 0x1664
    ctx->r14 = ADD32(ctx->r14, 0X1664);
    // 0x43001754: sw          $t6, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->r14;
    // 0x43001758: sw          $a2, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r6;
    // 0x4300175C: jr          $ra
    // 0x43001760: swc1        $f12, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f12.u32l;
    return;
    // 0x43001760: swc1        $f12, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void ovl_boss_angel_1764(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001764: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x43001768: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x4300176C: sw          $s5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r21;
    // 0x43001770: sw          $s4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r20;
    // 0x43001774: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x43001778: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x4300177C: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x43001780: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x43001784: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x43001788: jal         0x43000868
    // 0x4300178C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    ovl_boss_angel_868(rdram, ctx);
        goto after_0;
    // 0x4300178C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x43001790: lw          $s0, 0x1C($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X1C);
    // 0x43001794: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x43001798: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x4300179C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x430017A0: lui         $s5, 0x4301
    ctx->r21 = S32(0X4301 << 16);
    // 0x430017A4: addiu       $s5, $s5, -0x4008
    ctx->r21 = ADD32(ctx->r21, -0X4008);
    // 0x430017A8: addiu       $s4, $sp, 0x4C
    ctx->r20 = ADD32(ctx->r29, 0X4C);
    // 0x430017AC: addiu       $s3, $sp, 0x64
    ctx->r19 = ADD32(ctx->r29, 0X64);
    // 0x430017B0: addiu       $s2, $sp, 0x70
    ctx->r18 = ADD32(ctx->r29, 0X70);
    // 0x430017B4: swc1        $f4, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f4.u32l;
    // 0x430017B8: swc1        $f6, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f6.u32l;
    // 0x430017BC: lw          $a2, 0x30($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X30);
L_430017C0:
    // 0x430017C0: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x430017C4: jal         0x4300A438
    // 0x430017C8: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    ovl_boss_angel_A438(rdram, ctx);
        goto after_1;
    // 0x430017C8: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_1:
    // 0x430017CC: lwc1        $f12, 0x20($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X20);
    // 0x430017D0: lwc1        $f14, 0x24($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X24);
    // 0x430017D4: jal         0x4300A504
    // 0x430017D8: nop

    ovl_boss_angel_A504(rdram, ctx);
        goto after_2;
    // 0x430017D8: nop

    after_2:
    // 0x430017DC: lwc1        $f12, 0x4C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x430017E0: lwc1        $f14, 0x50($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X50);
    // 0x430017E4: jal         0x4300A504
    // 0x430017E8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    ovl_boss_angel_A504(rdram, ctx);
        goto after_3;
    // 0x430017E8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_3:
    // 0x430017EC: lwc1        $f8, 0x1C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x430017F0: lw          $a2, 0x14($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X14);
    // 0x430017F4: lw          $a3, 0x18($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X18);
    // 0x430017F8: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x430017FC: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    // 0x43001800: jal         0x4300A908
    // 0x43001804: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    ovl_boss_angel_A908(rdram, ctx);
        goto after_4;
    // 0x43001804: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_4:
    // 0x43001808: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x4300180C: jal         0x4300B4B0
    // 0x43001810: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    ovl_boss_angel_B4B0(rdram, ctx);
        goto after_5;
    // 0x43001810: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_5:
    // 0x43001814: swc1        $f0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f0.u32l;
    // 0x43001818: jal         0x4300B670
    // 0x4300181C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    ovl_boss_angel_B670(rdram, ctx);
        goto after_6;
    // 0x4300181C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_6:
    // 0x43001820: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    // 0x43001824: lwc1        $f10, 0x54($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X54);
    // 0x43001828: lw          $t9, 0x4C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X4C);
    // 0x4300182C: swc1        $f10, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f10.u32l;
    // 0x43001830: lwc1        $f16, 0x58($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X58);
    // 0x43001834: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43001838: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x4300183C: jalr        $t9
    // 0x43001840: swc1        $f16, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f16.u32l;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x43001840: swc1        $f16, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f16.u32l;
    after_7:
    // 0x43001844: lw          $t9, 0x50($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X50);
    // 0x43001848: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4300184C: jalr        $t9
    // 0x43001850: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x43001850: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_8:
    // 0x43001854: lw          $v0, 0x54($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X54);
    // 0x43001858: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4300185C: beq         $v0, $zero, L_4300186C
    if (ctx->r2 == 0) {
        // 0x43001860: or          $a1, $s2, $zero
        ctx->r5 = ctx->r18 | 0;
            goto L_4300186C;
    }
    // 0x43001860: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x43001864: jalr        $v0
    // 0x43001868: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_9;
    // 0x43001868: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_9:
L_4300186C:
    // 0x4300186C: lw          $at, 0x0($s2)
    ctx->r1 = MEM_W(ctx->r18, 0X0);
    // 0x43001870: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x43001874: sw          $at, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r1;
    // 0x43001878: lw          $t7, 0x4($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X4);
    // 0x4300187C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x43001880: sw          $t7, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r15;
    // 0x43001884: lw          $at, 0x8($s2)
    ctx->r1 = MEM_W(ctx->r18, 0X8);
    // 0x43001888: addiu       $s1, $s0, 0x40
    ctx->r17 = ADD32(ctx->r16, 0X40);
    // 0x4300188C: jal         0x43000D60
    // 0x43001890: sw          $at, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r1;
    ovl_boss_angel_D60(rdram, ctx);
        goto after_10;
    // 0x43001890: sw          $at, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r1;
    after_10:
    // 0x43001894: lw          $at, 0x0($s3)
    ctx->r1 = MEM_W(ctx->r19, 0X0);
    // 0x43001898: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x4300189C: sw          $at, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r1;
    // 0x430018A0: lw          $t0, 0x4($s3)
    ctx->r8 = MEM_W(ctx->r19, 0X4);
    // 0x430018A4: nop

    // 0x430018A8: sw          $t0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r8;
    // 0x430018AC: lw          $at, 0x8($s3)
    ctx->r1 = MEM_W(ctx->r19, 0X8);
    // 0x430018B0: nop

    // 0x430018B4: sw          $at, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r1;
    // 0x430018B8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x430018BC: jal         0x43000D54
    // 0x430018C0: nop

    ovl_boss_angel_D54(rdram, ctx);
        goto after_11;
    // 0x430018C0: nop

    after_11:
    // 0x430018C4: jal         0x4300085C
    // 0x430018C8: nop

    ovl_boss_angel_85C(rdram, ctx);
        goto after_12;
    // 0x430018C8: nop

    after_12:
    // 0x430018CC: b           L_430017C0
    // 0x430018D0: lw          $a2, 0x30($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X30);
        goto L_430017C0;
    // 0x430018D0: lw          $a2, 0x30($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X30);
    // 0x430018D4: nop

    // 0x430018D8: nop

    // 0x430018DC: nop

    // 0x430018E0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x430018E4: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x430018E8: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x430018EC: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x430018F0: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x430018F4: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x430018F8: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x430018FC: lw          $s4, 0x34($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X34);
    // 0x43001900: lw          $s5, 0x38($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X38);
    // 0x43001904: jr          $ra
    // 0x43001908: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x43001908: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void ovl_boss_angel_190C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4300190C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x43001910: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x43001914: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x43001918: lw          $a0, 0x4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4);
    // 0x4300191C: jal         0x4300082C
    // 0x43001920: nop

    ovl_boss_angel_82C(rdram, ctx);
        goto after_0;
    // 0x43001920: nop

    after_0:
    // 0x43001924: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x43001928: jal         0x430000F4
    // 0x4300192C: nop

    ovl_boss_angel_F4(rdram, ctx);
        goto after_1;
    // 0x4300192C: nop

    after_1:
    // 0x43001930: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x43001934: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x43001938: jr          $ra
    // 0x4300193C: nop

    return;
    // 0x4300193C: nop

;}
RECOMP_FUNC void ovl_boss_angel_1940(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001940: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x43001944: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x43001948: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x4300194C: jal         0x430000E8
    // 0x43001950: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    ovl_boss_angel_E8(rdram, ctx);
        goto after_0;
    // 0x43001950: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_0:
    // 0x43001954: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x43001958: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x4300195C: jal         0x43000DF0
    // 0x43001960: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    ovl_boss_angel_DF0(rdram, ctx);
        goto after_1;
    // 0x43001960: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_1:
    // 0x43001964: jal         0x43000DD8
    // 0x43001968: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_boss_angel_DD8(rdram, ctx);
        goto after_2;
    // 0x43001968: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x4300196C: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x43001970: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x43001974: sw          $t6, 0x44($v0)
    MEM_W(0X44, ctx->r2) = ctx->r14;
    // 0x43001978: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x4300197C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x43001980: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x43001984: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x43001988: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x4300198C: swc1        $f4, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f4.u32l;
    // 0x43001990: swc1        $f6, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f6.u32l;
    // 0x43001994: lwc1        $f8, -0x42B8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X42B8);
    // 0x43001998: lui         $t7, 0x4301
    ctx->r15 = S32(0X4301 << 16);
    // 0x4300199C: lui         $v1, 0x4301
    ctx->r3 = S32(0X4301 << 16);
    // 0x430019A0: addiu       $t7, $t7, -0x3FF8
    ctx->r15 = ADD32(ctx->r15, -0X3FF8);
    // 0x430019A4: addiu       $v1, $v1, -0x4130
    ctx->r3 = ADD32(ctx->r3, -0X4130);
    // 0x430019A8: sw          $t7, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r15;
    // 0x430019AC: swc1        $f8, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f8.u32l;
    // 0x430019B0: lw          $at, 0x0($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X0);
    // 0x430019B4: lui         $t2, 0x4300
    ctx->r10 = S32(0X4300 << 16);
    // 0x430019B8: sw          $at, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r1;
    // 0x430019BC: lw          $t9, 0x4($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X4);
    // 0x430019C0: lui         $t3, 0x4300
    ctx->r11 = S32(0X4300 << 16);
    // 0x430019C4: sw          $t9, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r25;
    // 0x430019C8: lw          $at, 0x8($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X8);
    // 0x430019CC: lui         $t4, 0x4300
    ctx->r12 = S32(0X4300 << 16);
    // 0x430019D0: sw          $at, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r1;
    // 0x430019D4: lw          $at, 0x0($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X0);
    // 0x430019D8: lui         $t5, 0x4300
    ctx->r13 = S32(0X4300 << 16);
    // 0x430019DC: sw          $at, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r1;
    // 0x430019E0: lw          $t1, 0x4($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X4);
    // 0x430019E4: lui         $t6, 0x4300
    ctx->r14 = S32(0X4300 << 16);
    // 0x430019E8: sw          $t1, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r9;
    // 0x430019EC: lw          $at, 0x8($v1)
    ctx->r1 = MEM_W(ctx->r3, 0X8);
    // 0x430019F0: addiu       $t2, $t2, 0x1528
    ctx->r10 = ADD32(ctx->r10, 0X1528);
    // 0x430019F4: addiu       $t3, $t3, 0x15A0
    ctx->r11 = ADD32(ctx->r11, 0X15A0);
    // 0x430019F8: addiu       $t4, $t4, 0x1740
    ctx->r12 = ADD32(ctx->r12, 0X1740);
    // 0x430019FC: addiu       $t5, $t5, 0x1748
    ctx->r13 = ADD32(ctx->r13, 0X1748);
    // 0x43001A00: addiu       $t6, $t6, 0x190C
    ctx->r14 = ADD32(ctx->r14, 0X190C);
    // 0x43001A04: lui         $a0, 0x4300
    ctx->r4 = S32(0X4300 << 16);
    // 0x43001A08: sw          $t2, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->r10;
    // 0x43001A0C: sw          $t3, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->r11;
    // 0x43001A10: sw          $zero, 0x54($s0)
    MEM_W(0X54, ctx->r16) = 0;
    // 0x43001A14: sw          $t4, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->r12;
    // 0x43001A18: sw          $t5, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->r13;
    // 0x43001A1C: sw          $t6, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r14;
    // 0x43001A20: addiu       $a0, $a0, 0x1764
    ctx->r4 = ADD32(ctx->r4, 0X1764);
    // 0x43001A24: ori         $a1, $zero, 0xFECF
    ctx->r5 = 0 | 0XFECF;
    // 0x43001A28: addiu       $a2, $zero, 0x2000
    ctx->r6 = ADD32(0, 0X2000);
    // 0x43001A2C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x43001A30: jal         0x43000820
    // 0x43001A34: sw          $at, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r1;
    ovl_boss_angel_820(rdram, ctx);
        goto after_3;
    // 0x43001A34: sw          $at, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r1;
    after_3:
    // 0x43001A38: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x43001A3C: sw          $s0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r16;
    // 0x43001A40: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x43001A44: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x43001A48: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x43001A4C: jr          $ra
    // 0x43001A50: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x43001A50: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x43001A54: nop

    // 0x43001A58: nop

    // 0x43001A5C: nop

;}
RECOMP_FUNC void ovl_boss_angel_1A60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001A60: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x43001A64: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x43001A68: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x43001A6C: lui         $t8, 0x4301
    ctx->r24 = S32(0X4301 << 16);
    // 0x43001A70: addiu       $t8, $t8, -0x47B4
    ctx->r24 = ADD32(ctx->r24, -0X47B4);
    // 0x43001A74: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x43001A78: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x43001A7C: addu        $v1, $t6, $t8
    ctx->r3 = ADD32(ctx->r14, ctx->r24);
    // 0x43001A80: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x43001A84: lw          $a2, 0x8($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X8);
    // 0x43001A88: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x43001A8C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x43001A90: bne         $v0, $a2, L_43001AB8
    if (ctx->r2 != ctx->r6) {
        // 0x43001A94: nop
    
            goto L_43001AB8;
    }
    // 0x43001A94: nop

    // 0x43001A98: bltz        $a2, L_43001AB8
    if (SIGNED(ctx->r6) < 0) {
        // 0x43001A9C: nop
    
            goto L_43001AB8;
    }
    // 0x43001A9C: nop

    // 0x43001AA0: lw          $t9, 0xB4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0XB4);
    // 0x43001AA4: nop

    // 0x43001AA8: jalr        $t9
    // 0x43001AAC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x43001AAC: nop

    after_0:
    // 0x43001AB0: b           L_43001B34
    // 0x43001AB4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
        goto L_43001B34;
    // 0x43001AB4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
L_43001AB8:
    // 0x43001AB8: bltz        $a2, L_43001AF0
    if (SIGNED(ctx->r6) < 0) {
        // 0x43001ABC: addiu       $a0, $zero, 0x7
        ctx->r4 = ADD32(0, 0X7);
            goto L_43001AF0;
    }
    // 0x43001ABC: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x43001AC0: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x43001AC4: lw          $a2, 0x18($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X18);
    // 0x43001AC8: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    // 0x43001ACC: jal         0x43000DC0
    // 0x43001AD0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_boss_angel_DC0(rdram, ctx);
        goto after_1;
    // 0x43001AD0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x43001AD4: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x43001AD8: jal         0x4300B2BC
    // 0x43001ADC: nop

    ovl_boss_angel_B2BC(rdram, ctx);
        goto after_2;
    // 0x43001ADC: nop

    after_2:
    // 0x43001AE0: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x43001AE4: nop

    // 0x43001AE8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x43001AEC: nop

L_43001AF0:
    // 0x43001AF0: bltz        $v0, L_43001B30
    if (SIGNED(ctx->r2) < 0) {
        // 0x43001AF4: sw          $v0, 0x8($s0)
        MEM_W(0X8, ctx->r16) = ctx->r2;
            goto L_43001B30;
    }
    // 0x43001AF4: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x43001AF8: jal         0x4300B290
    // 0x43001AFC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_boss_angel_B290(rdram, ctx);
        goto after_3;
    // 0x43001AFC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_3:
    // 0x43001B00: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x43001B04: lw          $a2, 0x4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4);
    // 0x43001B08: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x43001B0C: addiu       $a0, $zero, 0x2A
    ctx->r4 = ADD32(0, 0X2A);
    // 0x43001B10: addiu       $a1, $s0, 0x18
    ctx->r5 = ADD32(ctx->r16, 0X18);
    // 0x43001B14: jal         0x43000DC0
    // 0x43001B18: addiu       $a3, $s0, 0x10
    ctx->r7 = ADD32(ctx->r16, 0X10);
    ovl_boss_angel_DC0(rdram, ctx);
        goto after_4;
    // 0x43001B18: addiu       $a3, $s0, 0x10
    ctx->r7 = ADD32(ctx->r16, 0X10);
    after_4:
    // 0x43001B1C: lw          $t9, 0x90($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X90);
    // 0x43001B20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x43001B24: ori         $a1, $zero, 0xFFFF
    ctx->r5 = 0 | 0XFFFF;
    // 0x43001B28: jalr        $t9
    // 0x43001B2C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x43001B2C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
L_43001B30:
    // 0x43001B30: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
L_43001B34:
    // 0x43001B34: lui         $t1, 0x4301
    ctx->r9 = S32(0X4301 << 16);
    // 0x43001B38: addiu       $t1, $t1, -0x477C
    ctx->r9 = ADD32(ctx->r9, -0X477C);
    // 0x43001B3C: addu        $v0, $t0, $t1
    ctx->r2 = ADD32(ctx->r8, ctx->r9);
    // 0x43001B40: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x43001B44: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x43001B48: nop

    // 0x43001B4C: bne         $t2, $a0, L_43001B5C
    if (ctx->r10 != ctx->r4) {
        // 0x43001B50: nop
    
            goto L_43001B5C;
    }
    // 0x43001B50: nop

    // 0x43001B54: bgez        $a0, L_43001BD0
    if (SIGNED(ctx->r4) >= 0) {
        // 0x43001B58: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_43001BD0;
    }
    // 0x43001B58: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43001B5C:
    // 0x43001B5C: bltz        $a0, L_43001B8C
    if (SIGNED(ctx->r4) < 0) {
        // 0x43001B60: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_43001B8C;
    }
    // 0x43001B60: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x43001B64: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x43001B68: lw          $a2, 0x1C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1C);
    // 0x43001B6C: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x43001B70: jal         0x43000DC0
    // 0x43001B74: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    ovl_boss_angel_DC0(rdram, ctx);
        goto after_6;
    // 0x43001B74: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_6:
    // 0x43001B78: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x43001B7C: jal         0x4300B2BC
    // 0x43001B80: nop

    ovl_boss_angel_B2BC(rdram, ctx);
        goto after_7;
    // 0x43001B80: nop

    after_7:
    // 0x43001B84: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x43001B88: nop

L_43001B8C:
    // 0x43001B8C: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x43001B90: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
    // 0x43001B94: sw          $v1, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r3;
    // 0x43001B98: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x43001B9C: nop

    // 0x43001BA0: bltz        $a0, L_43001BCC
    if (SIGNED(ctx->r4) < 0) {
        // 0x43001BA4: sw          $a0, 0xC($s0)
        MEM_W(0XC, ctx->r16) = ctx->r4;
            goto L_43001BCC;
    }
    // 0x43001BA4: sw          $a0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r4;
    // 0x43001BA8: jal         0x4300B290
    // 0x43001BAC: nop

    ovl_boss_angel_B290(rdram, ctx);
        goto after_8;
    // 0x43001BAC: nop

    after_8:
    // 0x43001BB0: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x43001BB4: lw          $a2, 0x4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4);
    // 0x43001BB8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x43001BBC: addiu       $a0, $zero, 0x2A
    ctx->r4 = ADD32(0, 0X2A);
    // 0x43001BC0: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x43001BC4: jal         0x43000DC0
    // 0x43001BC8: addiu       $a3, $s0, 0x14
    ctx->r7 = ADD32(ctx->r16, 0X14);
    ovl_boss_angel_DC0(rdram, ctx);
        goto after_9;
    // 0x43001BC8: addiu       $a3, $s0, 0x14
    ctx->r7 = ADD32(ctx->r16, 0X14);
    after_9:
L_43001BCC:
    // 0x43001BCC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_43001BD0:
    // 0x43001BD0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x43001BD4: jr          $ra
    // 0x43001BD8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x43001BD8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_boss_angel_1BDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x43001BDC: lui         $t6, 0x4301
    ctx->r14 = S32(0X4301 << 16);
    // 0x43001BE0: lw          $t6, -0x3CA8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3CA8);
    // 0x43001BE4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x43001BE8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x43001BEC: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x43001BF0: bltz        $t6, L_43001C34
    if (SIGNED(ctx->r14) < 0) {
        // 0x43001BF4: sw          $a1, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->r5;
            goto L_43001C34;
    }
    // 0x43001BF4: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x43001BF8: lui         $t7, 0x4301
    ctx->r15 = S32(0X4301 << 16);
    // 0x43001BFC: lw          $t7, -0x3CDC($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3CDC);
    // 0x43001C00: lui         $a2, 0x4301
    ctx->r6 = S32(0X4301 << 16);
    // 0x43001C04: lw          $a2, -0x3CA4($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3CA4);
    // 0x43001C08: lw          $a1, 0x4($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X4);
    // 0x43001C0C: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x43001C10: jal         0x43000DC0
    // 0x43001C14: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_boss_angel_DC0(rdram, ctx);
        goto after_0;
    // 0x43001C14: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x43001C18: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x43001C1C: lw          $a0, -0x3CA0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3CA0);
    // 0x43001C20: jal         0x4300B2BC
    // 0x43001C24: nop

    ovl_boss_angel_B2BC(rdram, ctx);
        goto after_1;
    // 0x43001C24: nop

    after_1:
    // 0x43001C28: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x43001C2C: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43001C30: sw          $t8, -0x3CA8($at)
    MEM_W(-0X3CA8, ctx->r1) = ctx->r24;
L_43001C34:
    // 0x43001C34: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x43001C38: lui         $a0, 0x4301
    ctx->r4 = S32(0X4301 << 16);
    // 0x43001C3C: bltz        $t9, L_43001C90
    if (SIGNED(ctx->r25) < 0) {
        // 0x43001C40: sll         $t0, $t9, 2
        ctx->r8 = S32(ctx->r25 << 2);
            goto L_43001C90;
    }
    // 0x43001C40: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x43001C44: addu        $a0, $a0, $t0
    ctx->r4 = ADD32(ctx->r4, ctx->r8);
    // 0x43001C48: lw          $a0, -0x4744($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4744);
    // 0x43001C4C: jal         0x4300B290
    // 0x43001C50: nop

    ovl_boss_angel_B290(rdram, ctx);
        goto after_2;
    // 0x43001C50: nop

    after_2:
    // 0x43001C54: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43001C58: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x43001C5C: sw          $v0, -0x3CA0($at)
    MEM_W(-0X3CA0, ctx->r1) = ctx->r2;
    // 0x43001C60: lui         $t2, 0x4301
    ctx->r10 = S32(0X4301 << 16);
    // 0x43001C64: lw          $t2, -0x3CDC($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X3CDC);
    // 0x43001C68: lui         $at, 0x4301
    ctx->r1 = S32(0X4301 << 16);
    // 0x43001C6C: sw          $t1, -0x3CA8($at)
    MEM_W(-0X3CA8, ctx->r1) = ctx->r9;
    // 0x43001C70: lui         $a1, 0x4301
    ctx->r5 = S32(0X4301 << 16);
    // 0x43001C74: lui         $a3, 0x4301
    ctx->r7 = S32(0X4301 << 16);
    // 0x43001C78: lw          $a2, 0x4($t2)
    ctx->r6 = MEM_W(ctx->r10, 0X4);
    // 0x43001C7C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x43001C80: addiu       $a3, $a3, -0x3CA0
    ctx->r7 = ADD32(ctx->r7, -0X3CA0);
    // 0x43001C84: addiu       $a1, $a1, -0x3CA4
    ctx->r5 = ADD32(ctx->r5, -0X3CA4);
    // 0x43001C88: jal         0x43000DC0
    // 0x43001C8C: addiu       $a0, $zero, 0x2A
    ctx->r4 = ADD32(0, 0X2A);
    ovl_boss_angel_DC0(rdram, ctx);
        goto after_3;
    // 0x43001C8C: addiu       $a0, $zero, 0x2A
    ctx->r4 = ADD32(0, 0X2A);
    after_3:
L_43001C90:
    // 0x43001C90: lui         $t3, 0x4301
    ctx->r11 = S32(0X4301 << 16);
    // 0x43001C94: lw          $t3, -0x3CA8($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X3CA8);
    // 0x43001C98: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    // 0x43001C9C: bltz        $t3, L_43001CF0
    if (SIGNED(ctx->r11) < 0) {
        // 0x43001CA0: lui         $t4, 0x4301
        ctx->r12 = S32(0X4301 << 16);
            goto L_43001CF0;
    }
    // 0x43001CA0: lui         $t4, 0x4301
    ctx->r12 = S32(0X4301 << 16);
    // 0x43001CA4: lw          $t4, -0x3CDC($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X3CDC);
    // 0x43001CA8: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
    // 0x43001CAC: lw          $a1, 0x4($t4)
    ctx->r5 = MEM_W(ctx->r12, 0X4);
    // 0x43001CB0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x43001CB4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x43001CB8: lui         $a2, 0x4301
    ctx->r6 = S32(0X4301 << 16);
    // 0x43001CBC: lw          $a2, -0x3CA4($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3CA4);
    // 0x43001CC0: addiu       $t5, $zero, 0x1B
    ctx->r13 = ADD32(0, 0X1B);
    // 0x43001CC4: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x43001CC8: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x43001CCC: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x43001CD0: swc1        $f11, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(11 - 1) * 2];
    // 0x43001CD4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x43001CD8: swc1        $f7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(7 - 1) * 2];
    // 0x43001CDC: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x43001CE0: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x43001CE4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x43001CE8: jal         0x43000DC0
    // 0x43001CEC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    ovl_boss_angel_DC0(rdram, ctx);
        goto after_4;
    // 0x43001CEC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_4:
L_43001CF0:
    // 0x43001CF0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x43001CF4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x43001CF8: jr          $ra
    // 0x43001CFC: nop

    return;
    // 0x43001CFC: nop

;}
