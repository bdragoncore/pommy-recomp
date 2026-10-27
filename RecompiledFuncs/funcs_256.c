#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_coll_main_E08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000E08: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x44000E0C: jr          $t1
    // 0x44000E10: addiu       $t0, $zero, 0x1C04
    ctx->r8 = ADD32(0, 0X1C04);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x44000E10: addiu       $t0, $zero, 0x1C04
    ctx->r8 = ADD32(0, 0X1C04);
;}
RECOMP_FUNC void ovl_coll_main_E14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000E14: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x44000E18: jr          $t1
    // 0x44000E1C: addiu       $t0, $zero, 0x1C05
    ctx->r8 = ADD32(0, 0X1C05);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x44000E1C: addiu       $t0, $zero, 0x1C05
    ctx->r8 = ADD32(0, 0X1C05);
;}
RECOMP_FUNC void ovl_coll_main_E20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000E20: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x44000E24: jr          $t1
    // 0x44000E28: addiu       $t0, $zero, 0x1C06
    ctx->r8 = ADD32(0, 0X1C06);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x44000E28: addiu       $t0, $zero, 0x1C06
    ctx->r8 = ADD32(0, 0X1C06);
;}
RECOMP_FUNC void ovl_coll_main_E2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000E2C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x44000E30: jr          $t1
    // 0x44000E34: addiu       $t0, $zero, 0x1C07
    ctx->r8 = ADD32(0, 0X1C07);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x44000E34: addiu       $t0, $zero, 0x1C07
    ctx->r8 = ADD32(0, 0X1C07);
;}
RECOMP_FUNC void ovl_coll_main_E38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000E38: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x44000E3C: jr          $t1
    // 0x44000E40: addiu       $t0, $zero, 0x1C08
    ctx->r8 = ADD32(0, 0X1C08);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x44000E40: addiu       $t0, $zero, 0x1C08
    ctx->r8 = ADD32(0, 0X1C08);
;}
RECOMP_FUNC void ovl_coll_main_E44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000E44: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x44000E48: jr          $t1
    // 0x44000E4C: addiu       $t0, $zero, 0x1C09
    ctx->r8 = ADD32(0, 0X1C09);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x44000E4C: addiu       $t0, $zero, 0x1C09
    ctx->r8 = ADD32(0, 0X1C09);
;}
RECOMP_FUNC void ovl_coll_main_E50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000E50: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x44000E54: jr          $t1
    // 0x44000E58: addiu       $t0, $zero, 0x1C0A
    ctx->r8 = ADD32(0, 0X1C0A);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x44000E58: addiu       $t0, $zero, 0x1C0A
    ctx->r8 = ADD32(0, 0X1C0A);
;}
RECOMP_FUNC void ovl_coll_main_E5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000E5C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x44000E60: jr          $t1
    // 0x44000E64: addiu       $t0, $zero, 0x1C0B
    ctx->r8 = ADD32(0, 0X1C0B);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x44000E64: addiu       $t0, $zero, 0x1C0B
    ctx->r8 = ADD32(0, 0X1C0B);
;}
RECOMP_FUNC void ovl_coll_main_E68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000E68: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x44000E6C: jr          $t1
    // 0x44000E70: addiu       $t0, $zero, 0x1C0C
    ctx->r8 = ADD32(0, 0X1C0C);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x44000E70: addiu       $t0, $zero, 0x1C0C
    ctx->r8 = ADD32(0, 0X1C0C);
;}
RECOMP_FUNC void ovl_coll_main_E74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000E74: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x44000E78: jr          $t1
    // 0x44000E7C: addiu       $t0, $zero, 0x1C0D
    ctx->r8 = ADD32(0, 0X1C0D);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x44000E7C: addiu       $t0, $zero, 0x1C0D
    ctx->r8 = ADD32(0, 0X1C0D);
;}
RECOMP_FUNC void ovl_coll_main_E80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000E80: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x44000E84: jr          $t1
    // 0x44000E88: addiu       $t0, $zero, 0x1C0E
    ctx->r8 = ADD32(0, 0X1C0E);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x44000E88: addiu       $t0, $zero, 0x1C0E
    ctx->r8 = ADD32(0, 0X1C0E);
;}
RECOMP_FUNC void ovl_coll_main_E8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000E8C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x44000E90: jr          $t1
    // 0x44000E94: addiu       $t0, $zero, 0x1C0F
    ctx->r8 = ADD32(0, 0X1C0F);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x44000E94: addiu       $t0, $zero, 0x1C0F
    ctx->r8 = ADD32(0, 0X1C0F);
;}
RECOMP_FUNC void ovl_coll_main_E98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000E98: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x44000E9C: jr          $t1
    // 0x44000EA0: addiu       $t0, $zero, 0x1C10
    ctx->r8 = ADD32(0, 0X1C10);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x44000EA0: addiu       $t0, $zero, 0x1C10
    ctx->r8 = ADD32(0, 0X1C10);
;}
RECOMP_FUNC void ovl_coll_main_EA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000EA4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x44000EA8: jr          $t1
    // 0x44000EAC: addiu       $t0, $zero, 0x1C11
    ctx->r8 = ADD32(0, 0X1C11);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x44000EAC: addiu       $t0, $zero, 0x1C11
    ctx->r8 = ADD32(0, 0X1C11);
;}
RECOMP_FUNC void ovl_coll_main_EB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000EB0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x44000EB4: jr          $t1
    // 0x44000EB8: addiu       $t0, $zero, 0x1C12
    ctx->r8 = ADD32(0, 0X1C12);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x44000EB8: addiu       $t0, $zero, 0x1C12
    ctx->r8 = ADD32(0, 0X1C12);
;}
RECOMP_FUNC void ovl_coll_main_EBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000EBC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x44000EC0: jr          $t1
    // 0x44000EC4: addiu       $t0, $zero, 0x1C13
    ctx->r8 = ADD32(0, 0X1C13);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x44000EC4: addiu       $t0, $zero, 0x1C13
    ctx->r8 = ADD32(0, 0X1C13);
;}
RECOMP_FUNC void ovl_coll_main_EC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000EC8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x44000ECC: jr          $t1
    // 0x44000ED0: addiu       $t0, $zero, 0x1C14
    ctx->r8 = ADD32(0, 0X1C14);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x44000ED0: addiu       $t0, $zero, 0x1C14
    ctx->r8 = ADD32(0, 0X1C14);
;}
RECOMP_FUNC void ovl_coll_main_ED4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000ED4: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x44000ED8: jr          $t1
    // 0x44000EDC: addiu       $t0, $zero, 0x1C15
    ctx->r8 = ADD32(0, 0X1C15);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x44000EDC: addiu       $t0, $zero, 0x1C15
    ctx->r8 = ADD32(0, 0X1C15);
;}
RECOMP_FUNC void ovl_coll_main_EE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000EE0: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x44000EE4: jr          $t1
    // 0x44000EE8: addiu       $t0, $zero, 0x1C16
    ctx->r8 = ADD32(0, 0X1C16);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x44000EE8: addiu       $t0, $zero, 0x1C16
    ctx->r8 = ADD32(0, 0X1C16);
;}
RECOMP_FUNC void ovl_coll_main_EEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000EEC: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x44000EF0: jr          $t1
    // 0x44000EF4: addiu       $t0, $zero, 0x1C17
    ctx->r8 = ADD32(0, 0X1C17);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x44000EF4: addiu       $t0, $zero, 0x1C17
    ctx->r8 = ADD32(0, 0X1C17);
;}
RECOMP_FUNC void ovl_coll_main_EF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000EF8: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x44000EFC: jr          $t1
    // 0x44000F00: addiu       $t0, $zero, 0x1C18
    ctx->r8 = ADD32(0, 0X1C18);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x44000F00: addiu       $t0, $zero, 0x1C18
    ctx->r8 = ADD32(0, 0X1C18);
;}
RECOMP_FUNC void ovl_coll_main_F04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000F04: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x44000F08: jr          $t1
    // 0x44000F0C: addiu       $t0, $zero, 0x1C19
    ctx->r8 = ADD32(0, 0X1C19);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x44000F0C: addiu       $t0, $zero, 0x1C19
    ctx->r8 = ADD32(0, 0X1C19);
;}
RECOMP_FUNC void ovl_coll_main_F10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000F10: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x44000F14: jr          $t1
    // 0x44000F18: addiu       $t0, $zero, 0x1C1A
    ctx->r8 = ADD32(0, 0X1C1A);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x44000F18: addiu       $t0, $zero, 0x1C1A
    ctx->r8 = ADD32(0, 0X1C1A);
;}
RECOMP_FUNC void ovl_coll_main_F1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000F1C: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x44000F20: jr          $t1
    // 0x44000F24: addiu       $t0, $zero, 0x1C1B
    ctx->r8 = ADD32(0, 0X1C1B);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x44000F24: addiu       $t0, $zero, 0x1C1B
    ctx->r8 = ADD32(0, 0X1C1B);
;}
RECOMP_FUNC void ovl_coll_main_F28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000F28: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x44000F2C: jr          $t1
    // 0x44000F30: addiu       $t0, $zero, 0x1C1C
    ctx->r8 = ADD32(0, 0X1C1C);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x44000F30: addiu       $t0, $zero, 0x1C1C
    ctx->r8 = ADD32(0, 0X1C1C);
;}
RECOMP_FUNC void ovl_coll_main_F34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000F34: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x44000F38: jr          $t1
    // 0x44000F3C: addiu       $t0, $zero, 0x1D00
    ctx->r8 = ADD32(0, 0X1D00);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x44000F3C: addiu       $t0, $zero, 0x1D00
    ctx->r8 = ADD32(0, 0X1D00);
;}
RECOMP_FUNC void ovl_coll_main_F40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000F40: lui         $t1, 0x1000
    ctx->r9 = S32(0X1000 << 16);
    // 0x44000F44: jr          $t1
    // 0x44000F48: addiu       $t0, $zero, 0x1D01
    ctx->r8 = ADD32(0, 0X1D01);
    LOOKUP_FUNC(ctx->r9)(rdram, ctx);
    return;
    // 0x44000F48: addiu       $t0, $zero, 0x1D01
    ctx->r8 = ADD32(0, 0X1D01);
    // 0x44000F4C: nop

;}
RECOMP_FUNC void ovl_coll_main_F50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000F50: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x44000F54: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x44000F58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x44000F5C: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    // 0x44000F60: bne         $a2, $at, L_44000F8C
    if (ctx->r6 != ctx->r1) {
        // 0x44000F64: sw          $a2, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r6;
            goto L_44000F8C;
    }
    // 0x44000F64: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    // 0x44000F68: lwc1        $f4, 0x0($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X0);
    // 0x44000F6C: nop

    // 0x44000F70: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    // 0x44000F74: lwc1        $f6, 0x4($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X4);
    // 0x44000F78: nop

    // 0x44000F7C: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x44000F80: lwc1        $f8, 0x8($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X8);
    // 0x44000F84: nop

    // 0x44000F88: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
L_44000F8C:
    // 0x44000F8C: addiu       $a1, $zero, 0x21
    ctx->r5 = ADD32(0, 0X21);
    // 0x44000F90: jal         0x440013E8
    // 0x44000F94: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    ovl_coll_main_13E8(rdram, ctx);
        goto after_0;
    // 0x44000F94: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x44000F98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x44000F9C: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x44000FA0: jr          $ra
    // 0x44000FA4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x44000FA4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_coll_main_FA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44000FA8: slti        $at, $a0, 0x10
    ctx->r1 = SIGNED(ctx->r4) < 0X10 ? 1 : 0;
    // 0x44000FAC: beq         $at, $zero, L_44000FDC
    if (ctx->r1 == 0) {
        // 0x44000FB0: addiu       $v1, $zero, -0x1
        ctx->r3 = ADD32(0, -0X1);
            goto L_44000FDC;
    }
    // 0x44000FB0: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x44000FB4: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x44000FB8: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x44000FBC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x44000FC0: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x44000FC4: lui         $t7, 0x4400
    ctx->r15 = S32(0X4400 << 16);
    // 0x44000FC8: addiu       $t7, $t7, 0x6D30
    ctx->r15 = ADD32(ctx->r15, 0X6D30);
    // 0x44000FCC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x44000FD0: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x44000FD4: jr          $ra
    // 0x44000FD8: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    return;
    // 0x44000FD8: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
L_44000FDC:
    // 0x44000FDC: lui         $a0, 0x4400
    ctx->r4 = S32(0X4400 << 16);
    // 0x44000FE0: addiu       $a0, $a0, 0x7BF0
    ctx->r4 = ADD32(ctx->r4, 0X7BF0);
    // 0x44000FE4: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x44000FE8: addiu       $a2, $zero, 0x2E
    ctx->r6 = ADD32(0, 0X2E);
    // 0x44000FEC: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
L_44000FF0:
    // 0x44000FF0: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x44000FF4: nop

    // 0x44000FF8: bne         $a1, $t8, L_4400100C
    if (ctx->r5 != ctx->r24) {
        // 0x44000FFC: nop
    
            goto L_4400100C;
    }
    // 0x44000FFC: nop

    // 0x44001000: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x44001004: jr          $ra
    // 0x44001008: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    return;
    // 0x44001008: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_4400100C:
    // 0x4400100C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x44001010: bne         $v0, $a2, L_44000FF0
    if (ctx->r2 != ctx->r6) {
        // 0x44001014: addiu       $a0, $a0, 0xEC
        ctx->r4 = ADD32(ctx->r4, 0XEC);
            goto L_44000FF0;
    }
    // 0x44001014: addiu       $a0, $a0, 0xEC
    ctx->r4 = ADD32(ctx->r4, 0XEC);
    // 0x44001018: jr          $ra
    // 0x4400101C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x4400101C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void ovl_coll_main_1020(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44001020: lui         $v1, 0x4401
    ctx->r3 = S32(0X4401 << 16);
    // 0x44001024: addiu       $v1, $v1, -0x6868
    ctx->r3 = ADD32(ctx->r3, -0X6868);
    // 0x44001028: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x4400102C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
L_44001030:
    // 0x44001030: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x44001034: nop

    // 0x44001038: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x4400103C: beq         $t7, $zero, L_4400105C
    if (ctx->r15 == 0) {
        // 0x44001040: nop
    
            goto L_4400105C;
    }
    // 0x44001040: nop

    // 0x44001044: lw          $t8, 0x4($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X4);
    // 0x44001048: nop

    // 0x4400104C: bne         $a0, $t8, L_4400105C
    if (ctx->r4 != ctx->r24) {
        // 0x44001050: nop
    
            goto L_4400105C;
    }
    // 0x44001050: nop

    // 0x44001054: jr          $ra
    // 0x44001058: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x44001058: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_4400105C:
    // 0x4400105C: lw          $t9, 0x6C($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X6C);
    // 0x44001060: addiu       $v1, $v1, 0x6C
    ctx->r3 = ADD32(ctx->r3, 0X6C);
    // 0x44001064: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x44001068: beq         $t0, $zero, L_44001088
    if (ctx->r8 == 0) {
        // 0x4400106C: nop
    
            goto L_44001088;
    }
    // 0x4400106C: nop

    // 0x44001070: lw          $t1, 0x4($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X4);
    // 0x44001074: nop

    // 0x44001078: bne         $a0, $t1, L_44001088
    if (ctx->r4 != ctx->r9) {
        // 0x4400107C: nop
    
            goto L_44001088;
    }
    // 0x4400107C: nop

    // 0x44001080: jr          $ra
    // 0x44001084: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x44001084: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_44001088:
    // 0x44001088: lw          $t2, 0x6C($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X6C);
    // 0x4400108C: addiu       $v1, $v1, 0x6C
    ctx->r3 = ADD32(ctx->r3, 0X6C);
    // 0x44001090: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x44001094: beq         $t3, $zero, L_440010B4
    if (ctx->r11 == 0) {
        // 0x44001098: nop
    
            goto L_440010B4;
    }
    // 0x44001098: nop

    // 0x4400109C: lw          $t4, 0x4($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X4);
    // 0x440010A0: nop

    // 0x440010A4: bne         $a0, $t4, L_440010B4
    if (ctx->r4 != ctx->r12) {
        // 0x440010A8: nop
    
            goto L_440010B4;
    }
    // 0x440010A8: nop

    // 0x440010AC: jr          $ra
    // 0x440010B0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x440010B0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_440010B4:
    // 0x440010B4: lw          $t5, 0x6C($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X6C);
    // 0x440010B8: addiu       $v1, $v1, 0x6C
    ctx->r3 = ADD32(ctx->r3, 0X6C);
    // 0x440010BC: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x440010C0: beq         $t6, $zero, L_440010E0
    if (ctx->r14 == 0) {
        // 0x440010C4: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_440010E0;
    }
    // 0x440010C4: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x440010C8: lw          $t7, 0x4($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X4);
    // 0x440010CC: nop

    // 0x440010D0: bne         $a0, $t7, L_440010E0
    if (ctx->r4 != ctx->r15) {
        // 0x440010D4: nop
    
            goto L_440010E0;
    }
    // 0x440010D4: nop

    // 0x440010D8: jr          $ra
    // 0x440010DC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x440010DC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_440010E0:
    // 0x440010E0: bne         $v0, $a1, L_44001030
    if (ctx->r2 != ctx->r5) {
        // 0x440010E4: addiu       $v1, $v1, 0x6C
        ctx->r3 = ADD32(ctx->r3, 0X6C);
            goto L_44001030;
    }
    // 0x440010E4: addiu       $v1, $v1, 0x6C
    ctx->r3 = ADD32(ctx->r3, 0X6C);
    // 0x440010E8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x440010EC: jr          $ra
    // 0x440010F0: nop

    return;
    // 0x440010F0: nop

;}
RECOMP_FUNC void ovl_coll_main_10F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x440010F4: lui         $a2, 0x4401
    ctx->r6 = S32(0X4401 << 16);
    // 0x440010F8: addiu       $a2, $a2, -0x6868
    ctx->r6 = ADD32(ctx->r6, -0X6868);
    // 0x440010FC: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x44001100: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x44001104: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x44001108: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    // 0x4400110C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
L_44001110:
    // 0x44001110: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x44001114: nop

    // 0x44001118: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x4400111C: bne         $t7, $zero, L_44001134
    if (ctx->r15 != 0) {
        // 0x44001120: nop
    
            goto L_44001134;
    }
    // 0x44001120: nop

    // 0x44001124: bne         $v1, $a3, L_4400114C
    if (ctx->r3 != ctx->r7) {
        // 0x44001128: nop
    
            goto L_4400114C;
    }
    // 0x44001128: nop

    // 0x4400112C: b           L_4400114C
    // 0x44001130: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
        goto L_4400114C;
    // 0x44001130: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
L_44001134:
    // 0x44001134: lw          $t8, 0x4($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X4);
    // 0x44001138: nop

    // 0x4400113C: bne         $a0, $t8, L_4400114C
    if (ctx->r4 != ctx->r24) {
        // 0x44001140: nop
    
            goto L_4400114C;
    }
    // 0x44001140: nop

    // 0x44001144: jr          $ra
    // 0x44001148: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    return;
    // 0x44001148: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_4400114C:
    // 0x4400114C: lw          $t9, 0x6C($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X6C);
    // 0x44001150: addiu       $v0, $v0, 0x6C
    ctx->r2 = ADD32(ctx->r2, 0X6C);
    // 0x44001154: andi        $t1, $t9, 0x1
    ctx->r9 = ctx->r25 & 0X1;
    // 0x44001158: bne         $t1, $zero, L_44001170
    if (ctx->r9 != 0) {
        // 0x4400115C: nop
    
            goto L_44001170;
    }
    // 0x4400115C: nop

    // 0x44001160: bne         $v1, $a3, L_44001188
    if (ctx->r3 != ctx->r7) {
        // 0x44001164: nop
    
            goto L_44001188;
    }
    // 0x44001164: nop

    // 0x44001168: b           L_44001188
    // 0x4400116C: addiu       $v1, $a1, 0x1
    ctx->r3 = ADD32(ctx->r5, 0X1);
        goto L_44001188;
    // 0x4400116C: addiu       $v1, $a1, 0x1
    ctx->r3 = ADD32(ctx->r5, 0X1);
L_44001170:
    // 0x44001170: lw          $t2, 0x4($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X4);
    // 0x44001174: nop

    // 0x44001178: bne         $a0, $t2, L_44001188
    if (ctx->r4 != ctx->r10) {
        // 0x4400117C: nop
    
            goto L_44001188;
    }
    // 0x4400117C: nop

    // 0x44001180: jr          $ra
    // 0x44001184: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    return;
    // 0x44001184: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_44001188:
    // 0x44001188: lw          $t3, 0x6C($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X6C);
    // 0x4400118C: addiu       $v0, $v0, 0x6C
    ctx->r2 = ADD32(ctx->r2, 0X6C);
    // 0x44001190: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x44001194: bne         $t4, $zero, L_440011AC
    if (ctx->r12 != 0) {
        // 0x44001198: nop
    
            goto L_440011AC;
    }
    // 0x44001198: nop

    // 0x4400119C: bne         $v1, $a3, L_440011C4
    if (ctx->r3 != ctx->r7) {
        // 0x440011A0: nop
    
            goto L_440011C4;
    }
    // 0x440011A0: nop

    // 0x440011A4: b           L_440011C4
    // 0x440011A8: addiu       $v1, $a1, 0x2
    ctx->r3 = ADD32(ctx->r5, 0X2);
        goto L_440011C4;
    // 0x440011A8: addiu       $v1, $a1, 0x2
    ctx->r3 = ADD32(ctx->r5, 0X2);
L_440011AC:
    // 0x440011AC: lw          $t5, 0x4($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X4);
    // 0x440011B0: nop

    // 0x440011B4: bne         $a0, $t5, L_440011C4
    if (ctx->r4 != ctx->r13) {
        // 0x440011B8: nop
    
            goto L_440011C4;
    }
    // 0x440011B8: nop

    // 0x440011BC: jr          $ra
    // 0x440011C0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    return;
    // 0x440011C0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_440011C4:
    // 0x440011C4: lw          $t6, 0x6C($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X6C);
    // 0x440011C8: addiu       $v0, $v0, 0x6C
    ctx->r2 = ADD32(ctx->r2, 0X6C);
    // 0x440011CC: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x440011D0: bne         $t7, $zero, L_440011E8
    if (ctx->r15 != 0) {
        // 0x440011D4: nop
    
            goto L_440011E8;
    }
    // 0x440011D4: nop

    // 0x440011D8: bne         $v1, $a3, L_44001200
    if (ctx->r3 != ctx->r7) {
        // 0x440011DC: nop
    
            goto L_44001200;
    }
    // 0x440011DC: nop

    // 0x440011E0: b           L_44001200
    // 0x440011E4: addiu       $v1, $a1, 0x3
    ctx->r3 = ADD32(ctx->r5, 0X3);
        goto L_44001200;
    // 0x440011E4: addiu       $v1, $a1, 0x3
    ctx->r3 = ADD32(ctx->r5, 0X3);
L_440011E8:
    // 0x440011E8: lw          $t8, 0x4($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X4);
    // 0x440011EC: nop

    // 0x440011F0: bne         $a0, $t8, L_44001204
    if (ctx->r4 != ctx->r24) {
        // 0x440011F4: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_44001204;
    }
    // 0x440011F4: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x440011F8: jr          $ra
    // 0x440011FC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    return;
    // 0x440011FC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_44001200:
    // 0x44001200: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
L_44001204:
    // 0x44001204: bne         $a1, $t0, L_44001110
    if (ctx->r5 != ctx->r8) {
        // 0x44001208: addiu       $v0, $v0, 0x6C
        ctx->r2 = ADD32(ctx->r2, 0X6C);
            goto L_44001110;
    }
    // 0x44001208: addiu       $v0, $v0, 0x6C
    ctx->r2 = ADD32(ctx->r2, 0X6C);
    // 0x4400120C: bne         $v1, $a3, L_4400121C
    if (ctx->r3 != ctx->r7) {
        // 0x44001210: sll         $t9, $v1, 3
        ctx->r25 = S32(ctx->r3 << 3);
            goto L_4400121C;
    }
    // 0x44001210: sll         $t9, $v1, 3
    ctx->r25 = S32(ctx->r3 << 3);
    // 0x44001214: jr          $ra
    // 0x44001218: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    return;
    // 0x44001218: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_4400121C:
    // 0x4400121C: subu        $t9, $t9, $v1
    ctx->r25 = SUB32(ctx->r25, ctx->r3);
    // 0x44001220: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x44001224: subu        $t9, $t9, $v1
    ctx->r25 = SUB32(ctx->r25, ctx->r3);
    // 0x44001228: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x4400122C: addu        $v0, $a2, $t9
    ctx->r2 = ADD32(ctx->r6, ctx->r25);
    // 0x44001230: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x44001234: sw          $a0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r4;
    // 0x44001238: ori         $t2, $t1, 0x1
    ctx->r10 = ctx->r9 | 0X1;
    // 0x4400123C: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
    // 0x44001240: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x44001244: jr          $ra
    // 0x44001248: nop

    return;
    // 0x44001248: nop

;}
RECOMP_FUNC void ovl_coll_main_124C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4400124C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x44001250: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x44001254: jal         0x44001468
    // 0x44001258: nop

    ovl_coll_main_1468(rdram, ctx);
        goto after_0;
    // 0x44001258: nop

    after_0:
    // 0x4400125C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x44001260: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x44001264: jr          $ra
    // 0x44001268: nop

    return;
    // 0x44001268: nop

;}
RECOMP_FUNC void ovl_coll_main_126C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4400126C: lui         $t6, 0x4400
    ctx->r14 = S32(0X4400 << 16);
    // 0x44001270: lw          $t6, 0x6D30($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X6D30);
    // 0x44001274: lui         $a1, 0x4400
    ctx->r5 = S32(0X4400 << 16);
    // 0x44001278: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x4400127C: beq         $a2, $t6, L_440012B0
    if (ctx->r6 == ctx->r14) {
        // 0x44001280: addiu       $a1, $a1, 0x6D30
        ctx->r5 = ADD32(ctx->r5, 0X6D30);
            goto L_440012B0;
    }
    // 0x44001280: addiu       $a1, $a1, 0x6D30
    ctx->r5 = ADD32(ctx->r5, 0X6D30);
    // 0x44001284: lui         $t7, 0x4400
    ctx->r15 = S32(0X4400 << 16);
    // 0x44001288: lw          $t7, 0x6D38($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X6D38);
    // 0x4400128C: lui         $t8, 0x4400
    ctx->r24 = S32(0X4400 << 16);
    // 0x44001290: beq         $a2, $t7, L_440012B0
    if (ctx->r6 == ctx->r15) {
        // 0x44001294: nop
    
            goto L_440012B0;
    }
    // 0x44001294: nop

    // 0x44001298: lw          $t8, 0x6D3C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X6D3C);
    // 0x4400129C: nop

    // 0x440012A0: bne         $a0, $t8, L_440012B0
    if (ctx->r4 != ctx->r24) {
        // 0x440012A4: nop
    
            goto L_440012B0;
    }
    // 0x440012A4: nop

    // 0x440012A8: jr          $ra
    // 0x440012AC: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    return;
    // 0x440012AC: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
L_440012B0:
    // 0x440012B0: lui         $v1, 0x4400
    ctx->r3 = S32(0X4400 << 16);
    // 0x440012B4: addiu       $v1, $v1, 0x6E1C
    ctx->r3 = ADD32(ctx->r3, 0X6E1C);
    // 0x440012B8: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x440012BC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x440012C0: beq         $a2, $t9, L_440012F0
    if (ctx->r6 == ctx->r25) {
        // 0x440012C4: addiu       $a1, $zero, 0x2E
        ctx->r5 = ADD32(0, 0X2E);
            goto L_440012F0;
    }
    // 0x440012C4: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x440012C8: lw          $t0, 0x8($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X8);
    // 0x440012CC: nop

    // 0x440012D0: beq         $a2, $t0, L_440012F0
    if (ctx->r6 == ctx->r8) {
        // 0x440012D4: nop
    
            goto L_440012F0;
    }
    // 0x440012D4: nop

    // 0x440012D8: lw          $t1, 0xC($v1)
    ctx->r9 = MEM_W(ctx->r3, 0XC);
    // 0x440012DC: nop

    // 0x440012E0: bne         $a0, $t1, L_440012F0
    if (ctx->r4 != ctx->r9) {
        // 0x440012E4: nop
    
            goto L_440012F0;
    }
    // 0x440012E4: nop

    // 0x440012E8: jr          $ra
    // 0x440012EC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x440012EC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_440012F0:
    // 0x440012F0: addiu       $v1, $v1, 0xEC
    ctx->r3 = ADD32(ctx->r3, 0XEC);
L_440012F4:
    // 0x440012F4: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x440012F8: nop

    // 0x440012FC: beq         $a2, $t2, L_4400132C
    if (ctx->r6 == ctx->r10) {
        // 0x44001300: nop
    
            goto L_4400132C;
    }
    // 0x44001300: nop

    // 0x44001304: lw          $t3, 0x8($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X8);
    // 0x44001308: nop

    // 0x4400130C: beq         $a2, $t3, L_4400132C
    if (ctx->r6 == ctx->r11) {
        // 0x44001310: nop
    
            goto L_4400132C;
    }
    // 0x44001310: nop

    // 0x44001314: lw          $t4, 0xC($v1)
    ctx->r12 = MEM_W(ctx->r3, 0XC);
    // 0x44001318: nop

    // 0x4400131C: bne         $a0, $t4, L_4400132C
    if (ctx->r4 != ctx->r12) {
        // 0x44001320: nop
    
            goto L_4400132C;
    }
    // 0x44001320: nop

    // 0x44001324: jr          $ra
    // 0x44001328: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x44001328: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_4400132C:
    // 0x4400132C: lw          $t5, 0xEC($v1)
    ctx->r13 = MEM_W(ctx->r3, 0XEC);
    // 0x44001330: addiu       $v1, $v1, 0xEC
    ctx->r3 = ADD32(ctx->r3, 0XEC);
    // 0x44001334: beq         $a2, $t5, L_44001364
    if (ctx->r6 == ctx->r13) {
        // 0x44001338: nop
    
            goto L_44001364;
    }
    // 0x44001338: nop

    // 0x4400133C: lw          $t6, 0x8($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X8);
    // 0x44001340: nop

    // 0x44001344: beq         $a2, $t6, L_44001364
    if (ctx->r6 == ctx->r14) {
        // 0x44001348: nop
    
            goto L_44001364;
    }
    // 0x44001348: nop

    // 0x4400134C: lw          $t7, 0xC($v1)
    ctx->r15 = MEM_W(ctx->r3, 0XC);
    // 0x44001350: nop

    // 0x44001354: bne         $a0, $t7, L_44001364
    if (ctx->r4 != ctx->r15) {
        // 0x44001358: nop
    
            goto L_44001364;
    }
    // 0x44001358: nop

    // 0x4400135C: jr          $ra
    // 0x44001360: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x44001360: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_44001364:
    // 0x44001364: lw          $t8, 0xEC($v1)
    ctx->r24 = MEM_W(ctx->r3, 0XEC);
    // 0x44001368: addiu       $v1, $v1, 0xEC
    ctx->r3 = ADD32(ctx->r3, 0XEC);
    // 0x4400136C: beq         $a2, $t8, L_4400139C
    if (ctx->r6 == ctx->r24) {
        // 0x44001370: nop
    
            goto L_4400139C;
    }
    // 0x44001370: nop

    // 0x44001374: lw          $t9, 0x8($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X8);
    // 0x44001378: nop

    // 0x4400137C: beq         $a2, $t9, L_4400139C
    if (ctx->r6 == ctx->r25) {
        // 0x44001380: nop
    
            goto L_4400139C;
    }
    // 0x44001380: nop

    // 0x44001384: lw          $t0, 0xC($v1)
    ctx->r8 = MEM_W(ctx->r3, 0XC);
    // 0x44001388: nop

    // 0x4400138C: bne         $a0, $t0, L_4400139C
    if (ctx->r4 != ctx->r8) {
        // 0x44001390: nop
    
            goto L_4400139C;
    }
    // 0x44001390: nop

    // 0x44001394: jr          $ra
    // 0x44001398: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x44001398: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_4400139C:
    // 0x4400139C: lw          $t1, 0xEC($v1)
    ctx->r9 = MEM_W(ctx->r3, 0XEC);
    // 0x440013A0: addiu       $v1, $v1, 0xEC
    ctx->r3 = ADD32(ctx->r3, 0XEC);
    // 0x440013A4: beq         $a2, $t1, L_440013D4
    if (ctx->r6 == ctx->r9) {
        // 0x440013A8: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_440013D4;
    }
    // 0x440013A8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x440013AC: lw          $t2, 0x8($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X8);
    // 0x440013B0: nop

    // 0x440013B4: beq         $a2, $t2, L_440013D4
    if (ctx->r6 == ctx->r10) {
        // 0x440013B8: nop
    
            goto L_440013D4;
    }
    // 0x440013B8: nop

    // 0x440013BC: lw          $t3, 0xC($v1)
    ctx->r11 = MEM_W(ctx->r3, 0XC);
    // 0x440013C0: nop

    // 0x440013C4: bne         $a0, $t3, L_440013D4
    if (ctx->r4 != ctx->r11) {
        // 0x440013C8: nop
    
            goto L_440013D4;
    }
    // 0x440013C8: nop

    // 0x440013CC: jr          $ra
    // 0x440013D0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x440013D0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_440013D4:
    // 0x440013D4: bne         $v0, $a1, L_440012F4
    if (ctx->r2 != ctx->r5) {
        // 0x440013D8: addiu       $v1, $v1, 0xEC
        ctx->r3 = ADD32(ctx->r3, 0XEC);
            goto L_440012F4;
    }
    // 0x440013D8: addiu       $v1, $v1, 0xEC
    ctx->r3 = ADD32(ctx->r3, 0XEC);
    // 0x440013DC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x440013E0: jr          $ra
    // 0x440013E4: nop

    return;
    // 0x440013E4: nop

;}
RECOMP_FUNC void ovl_coll_main_13E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x440013E8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x440013EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x440013F0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x440013F4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x440013F8: addiu       $t7, $a0, 0x4
    ctx->r15 = ADD32(ctx->r4, 0X4);
    // 0x440013FC: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x44001400: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x44001404: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    // 0x44001408: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x4400140C: jal         0x440007FC
    // 0x44001410: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    ovl_coll_main_7FC(rdram, ctx);
        goto after_0;
    // 0x44001410: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x44001414: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x44001418: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x4400141C: jr          $ra
    // 0x44001420: nop

    return;
    // 0x44001420: nop

;}
RECOMP_FUNC void ovl_coll_main_1424(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44001424: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x44001428: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x4400142C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x44001430: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x44001434: jal         0x440013E8
    // 0x44001438: ori         $a2, $zero, 0xFFFF
    ctx->r6 = 0 | 0XFFFF;
    ovl_coll_main_13E8(rdram, ctx);
        goto after_0;
    // 0x44001438: ori         $a2, $zero, 0xFFFF
    ctx->r6 = 0 | 0XFFFF;
    after_0:
    // 0x4400143C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x44001440: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x44001444: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x44001448: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x4400144C: sw          $t6, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r14;
    // 0x44001450: sw          $zero, 0x18($a0)
    MEM_W(0X18, ctx->r4) = 0;
    // 0x44001454: sw          $v0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r2;
    // 0x44001458: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x4400145C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x44001460: jr          $ra
    // 0x44001464: nop

    return;
    // 0x44001464: nop

;}
RECOMP_FUNC void ovl_coll_main_1468(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44001468: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x4400146C: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x44001470: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x44001474: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x44001478: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
    // 0x4400147C: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x44001480: sw          $v1, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r3;
    // 0x44001484: sw          $v1, 0x68($a0)
    MEM_W(0X68, ctx->r4) = ctx->r3;
    // 0x44001488: jr          $ra
    // 0x4400148C: sw          $v0, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r2;
    return;
    // 0x4400148C: sw          $v0, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void ovl_coll_main_1490(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44001490: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x44001494: nop

    // 0x44001498: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x4400149C: lwc1        $f6, 0x4($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X4);
    // 0x440014A0: nop

    // 0x440014A4: swc1        $f6, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f6.u32l;
    // 0x440014A8: lwc1        $f8, 0x8($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X8);
    // 0x440014AC: nop

    // 0x440014B0: swc1        $f8, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f8.u32l;
    // 0x440014B4: lwc1        $f10, 0xC($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0XC);
    // 0x440014B8: nop

    // 0x440014BC: swc1        $f10, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f10.u32l;
    // 0x440014C0: lwc1        $f16, 0x10($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X10);
    // 0x440014C4: nop

    // 0x440014C8: swc1        $f16, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f16.u32l;
    // 0x440014CC: lwc1        $f18, 0x14($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X14);
    // 0x440014D0: jr          $ra
    // 0x440014D4: swc1        $f18, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->f18.u32l;
    return;
    // 0x440014D4: swc1        $f18, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->f18.u32l;
;}
RECOMP_FUNC void ovl_coll_main_14D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x440014D8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x440014DC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x440014E0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x440014E4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x440014E8: lui         $s1, 0x4400
    ctx->r17 = S32(0X4400 << 16);
    // 0x440014EC: lui         $s2, 0x4401
    ctx->r18 = S32(0X4401 << 16);
    // 0x440014F0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x440014F4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x440014F8: addiu       $s1, $s1, 0x6D30
    ctx->r17 = ADD32(ctx->r17, 0X6D30);
    // 0x440014FC: addiu       $s2, $s2, -0x6868
    ctx->r18 = ADD32(ctx->r18, -0X6868);
    // 0x44001500: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_44001504:
    // 0x44001504: jal         0x44001424
    // 0x44001508: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    ovl_coll_main_1424(rdram, ctx);
        goto after_0;
    // 0x44001508: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x4400150C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x44001510: slti        $at, $s0, 0x2E
    ctx->r1 = SIGNED(ctx->r16) < 0X2E ? 1 : 0;
    // 0x44001514: bne         $at, $zero, L_44001504
    if (ctx->r1 != 0) {
        // 0x44001518: addiu       $s1, $s1, 0xEC
        ctx->r17 = ADD32(ctx->r17, 0XEC);
            goto L_44001504;
    }
    // 0x44001518: addiu       $s1, $s1, 0xEC
    ctx->r17 = ADD32(ctx->r17, 0XEC);
    // 0x4400151C: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x44001520: lui         $at, 0x4400
    ctx->r1 = S32(0X4400 << 16);
    // 0x44001524: lui         $a0, 0x4400
    ctx->r4 = S32(0X4400 << 16);
    // 0x44001528: sw          $t6, 0x6D24($at)
    MEM_W(0X6D24, ctx->r1) = ctx->r14;
    // 0x4400152C: addiu       $a0, $a0, 0x1CDC
    ctx->r4 = ADD32(ctx->r4, 0X1CDC);
    // 0x44001530: ori         $a1, $zero, 0xFFEF
    ctx->r5 = 0 | 0XFFEF;
    // 0x44001534: addiu       $a2, $zero, 0x1000
    ctx->r6 = ADD32(0, 0X1000);
    // 0x44001538: jal         0x44000820
    // 0x4400153C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_coll_main_820(rdram, ctx);
        goto after_1;
    // 0x4400153C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x44001540: lui         $at, 0x4400
    ctx->r1 = S32(0X4400 << 16);
    // 0x44001544: sw          $v0, 0x6D20($at)
    MEM_W(0X6D20, ctx->r1) = ctx->r2;
    // 0x44001548: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x4400154C: addiu       $s1, $zero, 0x8
    ctx->r17 = ADD32(0, 0X8);
L_44001550:
    // 0x44001550: jal         0x44001468
    // 0x44001554: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    ovl_coll_main_1468(rdram, ctx);
        goto after_2;
    // 0x44001554: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_2:
    // 0x44001558: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x4400155C: bne         $s0, $s1, L_44001550
    if (ctx->r16 != ctx->r17) {
        // 0x44001560: addiu       $s2, $s2, 0x6C
        ctx->r18 = ADD32(ctx->r18, 0X6C);
            goto L_44001550;
    }
    // 0x44001560: addiu       $s2, $s2, 0x6C
    ctx->r18 = ADD32(ctx->r18, 0X6C);
    // 0x44001564: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x44001568: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x4400156C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x44001570: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x44001574: jr          $ra
    // 0x44001578: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x44001578: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_coll_main_157C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4400157C: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x44001580: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x44001584: addiu       $v0, $v0, -0x11
    ctx->r2 = ADD32(ctx->r2, -0X11);
    // 0x44001588: bne         $v0, $at, L_440015B4
    if (ctx->r2 != ctx->r1) {
        // 0x4400158C: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_440015B4;
    }
    // 0x4400158C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x44001590: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x44001594: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x44001598: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x4400159C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x440015A0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x440015A4: swc1        $f4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f4.u32l;
    // 0x440015A8: swc1        $f6, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f6.u32l;
    // 0x440015AC: jr          $ra
    // 0x440015B0: swc1        $f8, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f8.u32l;
    return;
    // 0x440015B0: swc1        $f8, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f8.u32l;
L_440015B4:
    // 0x440015B4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x440015B8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x440015BC: nop

    // 0x440015C0: swc1        $f0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->f0.u32l;
    // 0x440015C4: swc1        $f0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->f0.u32l;
    // 0x440015C8: swc1        $f0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->f0.u32l;
    // 0x440015CC: jr          $ra
    // 0x440015D0: nop

    return;
    // 0x440015D0: nop

;}
RECOMP_FUNC void ovl_coll_main_15D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x440015D4: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x440015D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x440015DC: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x440015E0: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x440015E4: addiu       $t6, $zero, 0x81
    ctx->r14 = ADD32(0, 0X81);
    // 0x440015E8: sw          $t6, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r14;
    // 0x440015EC: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x440015F0: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x440015F4: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x440015F8: addiu       $t8, $zero, 0x44
    ctx->r24 = ADD32(0, 0X44);
    // 0x440015FC: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x44001600: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x44001604: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    // 0x44001608: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x4400160C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x44001610: swc1        $f12, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f12.u32l;
    // 0x44001614: swc1        $f14, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f14.u32l;
    // 0x44001618: jal         0x440013E8
    // 0x4400161C: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    ovl_coll_main_13E8(rdram, ctx);
        goto after_0;
    // 0x4400161C: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x44001620: lw          $a3, 0x58($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X58);
    // 0x44001624: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x44001628: lw          $v0, 0x5C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X5C);
    // 0x4400162C: sw          $t9, 0xA4($a3)
    MEM_W(0XA4, ctx->r7) = ctx->r25;
    // 0x44001630: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x44001634: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x44001638: sw          $t0, 0xA8($a3)
    MEM_W(0XA8, ctx->r7) = ctx->r8;
    // 0x4400163C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x44001640: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x44001644: sw          $t1, 0xAC($a3)
    MEM_W(0XAC, ctx->r7) = ctx->r9;
    // 0x44001648: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x4400164C: addiu       $a1, $a3, 0xB0
    ctx->r5 = ADD32(ctx->r7, 0XB0);
    // 0x44001650: sw          $t3, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r11;
    // 0x44001654: jal         0x44001490
    // 0x44001658: sw          $t2, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r10;
    ovl_coll_main_1490(rdram, ctx);
        goto after_1;
    // 0x44001658: sw          $t2, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r10;
    after_1:
    // 0x4400165C: lw          $a3, 0x58($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X58);
    // 0x44001660: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x44001664: jal         0x44001490
    // 0x44001668: addiu       $a1, $a3, 0xC8
    ctx->r5 = ADD32(ctx->r7, 0XC8);
    ovl_coll_main_1490(rdram, ctx);
        goto after_2;
    // 0x44001668: addiu       $a1, $a3, 0xC8
    ctx->r5 = ADD32(ctx->r7, 0XC8);
    after_2:
    // 0x4400166C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x44001670: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x44001674: jr          $ra
    // 0x44001678: nop

    return;
    // 0x44001678: nop

;}
RECOMP_FUNC void ovl_coll_main_167C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x4400167C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x44001680: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x44001684: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x44001688: sll         $v1, $a2, 2
    ctx->r3 = S32(ctx->r6 << 2);
    // 0x4400168C: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x44001690: lui         $t7, 0x4401
    ctx->r15 = S32(0X4401 << 16);
    // 0x44001694: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x44001698: addiu       $t7, $t7, -0x6508
    ctx->r15 = ADD32(ctx->r15, -0X6508);
    // 0x4400169C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x440016A0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x440016A4: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x440016A8: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x440016AC: addu        $v0, $v1, $t7
    ctx->r2 = ADD32(ctx->r3, ctx->r15);
    // 0x440016B0: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x440016B4: sw          $t6, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r14;
    // 0x440016B8: sw          $t1, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r9;
    // 0x440016BC: sw          $v0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r2;
    // 0x440016C0: swc1        $f2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f2.u32l;
    // 0x440016C4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x440016C8: lw          $t8, 0x10($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X10);
    // 0x440016CC: andi        $t0, $a3, 0xFF
    ctx->r8 = ctx->r7 & 0XFF;
    // 0x440016D0: swc1        $f0, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f0.u32l;
    // 0x440016D4: lw          $t9, 0x10($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X10);
    // 0x440016D8: ori         $t3, $t0, 0x8A00
    ctx->r11 = ctx->r8 | 0X8A00;
    // 0x440016DC: swc1        $f0, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->f0.u32l;
    // 0x440016E0: lw          $t2, 0x10($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X10);
    // 0x440016E4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x440016E8: swc1        $f0, 0xC($t2)
    MEM_W(0XC, ctx->r10) = ctx->f0.u32l;
    // 0x440016EC: lw          $t4, 0x10($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X10);
    // 0x440016F0: or          $t0, $t3, $zero
    ctx->r8 = ctx->r11 | 0;
    // 0x440016F4: sw          $t3, 0x10($t4)
    MEM_W(0X10, ctx->r12) = ctx->r11;
    // 0x440016F8: lw          $t5, 0x60($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X60);
    // 0x440016FC: sll         $t6, $a2, 3
    ctx->r14 = S32(ctx->r6 << 3);
    // 0x44001700: bne         $t5, $zero, L_44001798
    if (ctx->r13 != 0) {
        // 0x44001704: lui         $t7, 0x4401
        ctx->r15 = S32(0X4401 << 16);
            goto L_44001798;
    }
    // 0x44001704: lui         $t7, 0x4401
    ctx->r15 = S32(0X4401 << 16);
    // 0x44001708: addiu       $t7, $t7, -0x6058
    ctx->r15 = ADD32(ctx->r15, -0X6058);
    // 0x4400170C: lui         $t8, 0x4401
    ctx->r24 = S32(0X4401 << 16);
    // 0x44001710: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x44001714: addiu       $t8, $t8, -0x62B0
    ctx->r24 = ADD32(ctx->r24, -0X62B0);
    // 0x44001718: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
    // 0x4400171C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x44001720: addu        $t9, $v1, $t8
    ctx->r25 = ADD32(ctx->r3, ctx->r24);
    // 0x44001724: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x44001728: lw          $t2, 0x14($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X14);
    // 0x4400172C: nop

    // 0x44001730: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
    // 0x44001734: lw          $t3, 0x14($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X14);
    // 0x44001738: nop

    // 0x4400173C: lw          $t4, 0x4($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X4);
    // 0x44001740: nop

    // 0x44001744: swc1        $f2, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f2.u32l;
    // 0x44001748: lw          $t5, 0x14($a0)
    ctx->r13 = MEM_W(ctx->r4, 0X14);
    // 0x4400174C: nop

    // 0x44001750: lw          $t6, 0x4($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X4);
    // 0x44001754: nop

    // 0x44001758: swc1        $f0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f0.u32l;
    // 0x4400175C: lw          $t7, 0x14($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X14);
    // 0x44001760: nop

    // 0x44001764: lw          $t8, 0x4($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X4);
    // 0x44001768: nop

    // 0x4400176C: swc1        $f0, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f0.u32l;
    // 0x44001770: lw          $t9, 0x14($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X14);
    // 0x44001774: nop

    // 0x44001778: lw          $t2, 0x4($t9)
    ctx->r10 = MEM_W(ctx->r25, 0X4);
    // 0x4400177C: nop

    // 0x44001780: swc1        $f0, 0xC($t2)
    MEM_W(0XC, ctx->r10) = ctx->f0.u32l;
    // 0x44001784: lw          $t3, 0x14($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X14);
    // 0x44001788: nop

    // 0x4400178C: lw          $t4, 0x4($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X4);
    // 0x44001790: b           L_440017C8
    // 0x44001794: sw          $t0, 0x10($t4)
    MEM_W(0X10, ctx->r12) = ctx->r8;
        goto L_440017C8;
    // 0x44001794: sw          $t0, 0x10($t4)
    MEM_W(0X10, ctx->r12) = ctx->r8;
L_44001798:
    // 0x44001798: lui         $a0, 0x4400
    ctx->r4 = S32(0X4400 << 16);
    // 0x4400179C: lw          $a0, 0x6D24($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6D24);
    // 0x440017A0: jal         0x4400157C
    // 0x440017A4: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    ovl_coll_main_157C(rdram, ctx);
        goto after_0;
    // 0x440017A4: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_0:
    // 0x440017A8: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x440017AC: lui         $a0, 0x4400
    ctx->r4 = S32(0X4400 << 16);
    // 0x440017B0: lw          $a0, 0x6D24($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6D24);
    // 0x440017B4: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x440017B8: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    // 0x440017BC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x440017C0: jal         0x440015D4
    // 0x440017C4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    ovl_coll_main_15D4(rdram, ctx);
        goto after_1;
    // 0x440017C4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
L_440017C8:
    // 0x440017C8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x440017CC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x440017D0: jr          $ra
    // 0x440017D4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x440017D4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void ovl_coll_main_17D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x440017D8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x440017DC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x440017E0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x440017E4: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x440017E8: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x440017EC: lw          $s0, 0xC($a1)
    ctx->r16 = MEM_W(ctx->r5, 0XC);
    // 0x440017F0: jal         0x44000FA8
    // 0x440017F4: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    ovl_coll_main_FA8(rdram, ctx);
        goto after_0;
    // 0x440017F4: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    after_0:
    // 0x440017F8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x440017FC: lui         $v1, 0x4400
    ctx->r3 = S32(0X4400 << 16);
    // 0x44001800: addiu       $v1, $v1, 0x6D24
    ctx->r3 = ADD32(ctx->r3, 0X6D24);
    // 0x44001804: slti        $at, $a0, 0x10
    ctx->r1 = SIGNED(ctx->r4) < 0X10 ? 1 : 0;
    // 0x44001808: beq         $at, $zero, L_44001838
    if (ctx->r1 == 0) {
        // 0x4400180C: sw          $v0, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r2;
            goto L_44001838;
    }
    // 0x4400180C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x44001810: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x44001814: lui         $t7, 0x1
    ctx->r15 = S32(0X1 << 16);
    // 0x44001818: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x4400181C: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x44001820: sw          $t7, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r15;
    // 0x44001824: sw          $t8, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r24;
    // 0x44001828: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    // 0x4400182C: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x44001830: b           L_440018D0
    // 0x44001834: sw          $zero, 0x14($s0)
    MEM_W(0X14, ctx->r16) = 0;
        goto L_440018D0;
    // 0x44001834: sw          $zero, 0x14($s0)
    MEM_W(0X14, ctx->r16) = 0;
L_44001838:
    // 0x44001838: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x4400183C: bne         $a0, $at, L_44001868
    if (ctx->r4 != ctx->r1) {
        // 0x44001840: sll         $t1, $a0, 2
        ctx->r9 = S32(ctx->r4 << 2);
            goto L_44001868;
    }
    // 0x44001840: sll         $t1, $a0, 2
    ctx->r9 = S32(ctx->r4 << 2);
    // 0x44001844: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x44001848: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x4400184C: lw          $a3, 0x0($t9)
    ctx->r7 = MEM_W(ctx->r25, 0X0);
    // 0x44001850: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x44001854: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x44001858: jal         0x4400167C
    // 0x4400185C: addiu       $a2, $a3, -0x10
    ctx->r6 = ADD32(ctx->r7, -0X10);
    ovl_coll_main_167C(rdram, ctx);
        goto after_1;
    // 0x4400185C: addiu       $a2, $a3, -0x10
    ctx->r6 = ADD32(ctx->r7, -0X10);
    after_1:
    // 0x44001860: b           L_440018D4
    // 0x44001864: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_440018D4;
    // 0x44001864: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_44001868:
    // 0x44001868: addu        $t1, $t1, $a0
    ctx->r9 = ADD32(ctx->r9, ctx->r4);
    // 0x4400186C: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x44001870: lui         $t3, 0x4400
    ctx->r11 = S32(0X4400 << 16);
    // 0x44001874: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x44001878: addiu       $t3, $t3, 0x64C0
    ctx->r11 = ADD32(ctx->r11, 0X64C0);
    // 0x4400187C: addiu       $t2, $t1, -0x2A8
    ctx->r10 = ADD32(ctx->r9, -0X2A8);
    // 0x44001880: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x44001884: sw          $t4, 0x70($t5)
    MEM_W(0X70, ctx->r13) = ctx->r12;
    // 0x44001888: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x4400188C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x44001890: sw          $a0, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->r4;
    // 0x44001894: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x44001898: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x4400189C: lw          $a2, 0x70($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X70);
    // 0x440018A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x440018A4: lw          $t0, 0x0($a2)
    ctx->r8 = MEM_W(ctx->r6, 0X0);
    // 0x440018A8: nop

    // 0x440018AC: andi        $t7, $t0, 0xFF
    ctx->r15 = ctx->r8 & 0XFF;
    // 0x440018B0: bne         $t7, $at, L_440018C0
    if (ctx->r15 != ctx->r1) {
        // 0x440018B4: andi        $t8, $t0, 0x100
        ctx->r24 = ctx->r8 & 0X100;
            goto L_440018C0;
    }
    // 0x440018B4: andi        $t8, $t0, 0x100
    ctx->r24 = ctx->r8 & 0X100;
    // 0x440018B8: lw          $a1, 0x4($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X4);
    // 0x440018BC: nop

L_440018C0:
    // 0x440018C0: lw          $a3, 0x0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X0);
    // 0x440018C4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x440018C8: jal         0x4400167C
    // 0x440018CC: addiu       $a2, $a3, -0x10
    ctx->r6 = ADD32(ctx->r7, -0X10);
    ovl_coll_main_167C(rdram, ctx);
        goto after_2;
    // 0x440018CC: addiu       $a2, $a3, -0x10
    ctx->r6 = ADD32(ctx->r7, -0X10);
    after_2:
L_440018D0:
    // 0x440018D0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_440018D4:
    // 0x440018D4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x440018D8: jr          $ra
    // 0x440018DC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x440018DC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_coll_main_18E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x440018E0: lui         $v1, 0x4400
    ctx->r3 = S32(0X4400 << 16);
    // 0x440018E4: addiu       $v1, $v1, 0x6D24
    ctx->r3 = ADD32(ctx->r3, 0X6D24);
    // 0x440018E8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x440018EC: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x440018F0: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
    // 0x440018F4: lw          $t6, 0xC($a0)
    ctx->r14 = MEM_W(ctx->r4, 0XC);
    // 0x440018F8: sw          $a1, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r5;
    // 0x440018FC: addiu       $t7, $v0, 0x4
    ctx->r15 = ADD32(ctx->r2, 0X4);
    // 0x44001900: sw          $t6, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r14;
    // 0x44001904: sw          $t7, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r15;
    // 0x44001908: jr          $ra
    // 0x4400190C: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    return;
    // 0x4400190C: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
;}
RECOMP_FUNC void ovl_coll_main_1910(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44001910: jr          $ra
    // 0x44001914: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x44001914: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void ovl_coll_main_1918(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44001918: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x4400191C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x44001920: lw          $t6, 0x10($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X10);
    // 0x44001924: nop

    // 0x44001928: slti        $at, $t6, 0x11
    ctx->r1 = SIGNED(ctx->r14) < 0X11 ? 1 : 0;
    // 0x4400192C: bne         $at, $zero, L_4400195C
    if (ctx->r1 != 0) {
        // 0x44001930: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4400195C;
    }
    // 0x44001930: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x44001934: lw          $t7, 0x70($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X70);
    // 0x44001938: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x4400193C: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x44001940: nop

    // 0x44001944: andi        $t9, $t8, 0x100
    ctx->r25 = ctx->r24 & 0X100;
    // 0x44001948: beq         $t9, $zero, L_4400195C
    if (ctx->r25 == 0) {
        // 0x4400194C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_4400195C;
    }
    // 0x4400194C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x44001950: jal         0x440013E8
    // 0x44001954: addiu       $a2, $a0, 0xA4
    ctx->r6 = ADD32(ctx->r4, 0XA4);
    ovl_coll_main_13E8(rdram, ctx);
        goto after_0;
    // 0x44001954: addiu       $a2, $a0, 0xA4
    ctx->r6 = ADD32(ctx->r4, 0XA4);
    after_0:
    // 0x44001958: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_4400195C:
    // 0x4400195C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x44001960: jr          $ra
    // 0x44001964: nop

    return;
    // 0x44001964: nop

;}
RECOMP_FUNC void ovl_coll_main_1968(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44001968: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x4400196C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x44001970: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x44001974: jal         0x4400126C
    // 0x44001978: nop

    ovl_coll_main_126C(rdram, ctx);
        goto after_0;
    // 0x44001978: nop

    after_0:
    // 0x4400197C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x44001980: jal         0x44001918
    // 0x44001984: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_coll_main_1918(rdram, ctx);
        goto after_1;
    // 0x44001984: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x44001988: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x4400198C: jal         0x44001424
    // 0x44001990: nop

    ovl_coll_main_1424(rdram, ctx);
        goto after_2;
    // 0x44001990: nop

    after_2:
    // 0x44001994: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x44001998: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x4400199C: jr          $ra
    // 0x440019A0: nop

    return;
    // 0x440019A0: nop

;}
RECOMP_FUNC void ovl_coll_main_19A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x440019A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x440019A8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x440019AC: lui         $a0, 0x4400
    ctx->r4 = S32(0X4400 << 16);
    // 0x440019B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x440019B4: lw          $a0, 0x6D20($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6D20);
    // 0x440019B8: jal         0x4400082C
    // 0x440019BC: nop

    ovl_coll_main_82C(rdram, ctx);
        goto after_0;
    // 0x440019BC: nop

    after_0:
    // 0x440019C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x440019C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x440019C8: jr          $ra
    // 0x440019CC: nop

    return;
    // 0x440019CC: nop

;}
RECOMP_FUNC void ovl_coll_main_19D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x440019D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x440019D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x440019D8: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x440019DC: lw          $a0, 0x8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X8);
    // 0x440019E0: jal         0x4400126C
    // 0x440019E4: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    ovl_coll_main_126C(rdram, ctx);
        goto after_0;
    // 0x440019E4: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x440019E8: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x440019EC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x440019F0: lw          $a0, 0xC($a1)
    ctx->r4 = MEM_W(ctx->r5, 0XC);
    // 0x440019F4: beq         $v0, $at, L_44001A3C
    if (ctx->r2 == ctx->r1) {
        // 0x440019F8: addiu       $t2, $zero, -0x1
        ctx->r10 = ADD32(0, -0X1);
            goto L_44001A3C;
    }
    // 0x440019F8: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x440019FC: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x44001A00: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x44001A04: bne         $t6, $at, L_44001A34
    if (ctx->r14 != ctx->r1) {
        // 0x44001A08: addiu       $t1, $zero, -0x1
        ctx->r9 = ADD32(0, -0X1);
            goto L_44001A34;
    }
    // 0x44001A08: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x44001A0C: lw          $v1, 0x4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4);
    // 0x44001A10: lui         $t0, 0x4400
    ctx->r8 = S32(0X4400 << 16);
    // 0x44001A14: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x44001A18: nop

    // 0x44001A1C: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x44001A20: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x44001A24: sw          $t7, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r15;
    // 0x44001A28: lw          $t0, 0x6460($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X6460);
    // 0x44001A2C: b           L_44001A40
    // 0x44001A30: sw          $t0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r8;
        goto L_44001A40;
    // 0x44001A30: sw          $t0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r8;
L_44001A34:
    // 0x44001A34: b           L_44001A40
    // 0x44001A38: sw          $t1, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r9;
        goto L_44001A40;
    // 0x44001A38: sw          $t1, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r9;
L_44001A3C:
    // 0x44001A3C: sw          $t2, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r10;
L_44001A40:
    // 0x44001A40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x44001A44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x44001A48: jr          $ra
    // 0x44001A4C: nop

    return;
    // 0x44001A4C: nop

;}
RECOMP_FUNC void ovl_coll_main_1A50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44001A50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x44001A54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x44001A58: addiu       $t6, $zero, 0x10
    ctx->r14 = ADD32(0, 0X10);
    // 0x44001A5C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x44001A60: sw          $t6, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r14;
    // 0x44001A64: lui         $a0, 0x4400
    ctx->r4 = S32(0X4400 << 16);
    // 0x44001A68: lui         $a2, 0x4400
    ctx->r6 = S32(0X4400 << 16);
    // 0x44001A6C: addiu       $a2, $a2, 0x6D30
    ctx->r6 = ADD32(ctx->r6, 0X6D30);
    // 0x44001A70: addiu       $a0, $a0, 0x7BF0
    ctx->r4 = ADD32(ctx->r4, 0X7BF0);
    // 0x44001A74: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
L_44001A78:
    // 0x44001A78: lw          $v0, 0x1C($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X1C);
    // 0x44001A7C: nop

    // 0x44001A80: beq         $v1, $v0, L_44001AAC
    if (ctx->r3 == ctx->r2) {
        // 0x44001A84: nop
    
            goto L_44001AAC;
    }
    // 0x44001A84: nop

    // 0x44001A88: lw          $t7, 0x4($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X4);
    // 0x44001A8C: lw          $t8, 0x20($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X20);
    // 0x44001A90: nop

    // 0x44001A94: bne         $t7, $t8, L_44001AAC
    if (ctx->r15 != ctx->r24) {
        // 0x44001A98: nop
    
            goto L_44001AAC;
    }
    // 0x44001A98: nop

    // 0x44001A9C: jalr        $v0
    // 0x44001AA0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x44001AA0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
    // 0x44001AA4: b           L_44001ABC
    // 0x44001AA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_44001ABC;
    // 0x44001AA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_44001AAC:
    // 0x44001AAC: addiu       $a2, $a2, 0xEC
    ctx->r6 = ADD32(ctx->r6, 0XEC);
    // 0x44001AB0: bne         $a2, $a0, L_44001A78
    if (ctx->r6 != ctx->r4) {
        // 0x44001AB4: nop
    
            goto L_44001A78;
    }
    // 0x44001AB4: nop

    // 0x44001AB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_44001ABC:
    // 0x44001ABC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x44001AC0: jr          $ra
    // 0x44001AC4: nop

    return;
    // 0x44001AC4: nop

;}
RECOMP_FUNC void ovl_coll_main_1AC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x44001AC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x44001ACC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x44001AD0: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x44001AD4: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x44001AD8: lw          $v0, 0x10($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X10);
    // 0x44001ADC: nop

    // 0x44001AE0: beq         $v0, $at, L_44001B10
    if (ctx->r2 == ctx->r1) {
        // 0x44001AE4: addiu       $at, $zero, 0xF
        ctx->r1 = ADD32(0, 0XF);
            goto L_44001B10;
    }
    // 0x44001AE4: addiu       $at, $zero, 0xF
    ctx->r1 = ADD32(0, 0XF);
    // 0x44001AE8: beq         $v0, $at, L_44001B10
    if (ctx->r2 == ctx->r1) {
        // 0x44001AEC: addiu       $at, $zero, 0x10
        ctx->r1 = ADD32(0, 0X10);
            goto L_44001B10;
    }
    // 0x44001AEC: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x44001AF0: beq         $v0, $at, L_44001B10
    if (ctx->r2 == ctx->r1) {
        // 0x44001AF4: addiu       $at, $zero, 0x13
        ctx->r1 = ADD32(0, 0X13);
            goto L_44001B10;
    }
    // 0x44001AF4: addiu       $at, $zero, 0x13
    ctx->r1 = ADD32(0, 0X13);
    // 0x44001AF8: beq         $v0, $at, L_44001B10
    if (ctx->r2 == ctx->r1) {
        // 0x44001AFC: addiu       $at, $zero, 0x11
        ctx->r1 = ADD32(0, 0X11);
            goto L_44001B10;
    }
    // 0x44001AFC: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x44001B00: beq         $v0, $at, L_44001B10
    if (ctx->r2 == ctx->r1) {
        // 0x44001B04: addiu       $at, $zero, 0x12
        ctx->r1 = ADD32(0, 0X12);
            goto L_44001B10;
    }
    // 0x44001B04: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x44001B08: bne         $v0, $at, L_44001B20
    if (ctx->r2 != ctx->r1) {
        // 0x44001B0C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_44001B20;
    }
    // 0x44001B0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_44001B10:
    // 0x44001B10: lw          $a0, 0x14($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X14);
    // 0x44001B14: jal         0x44001A50
    // 0x44001B18: nop

    ovl_coll_main_1A50(rdram, ctx);
        goto after_0;
    // 0x44001B18: nop

    after_0:
    // 0x44001B1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_44001B20:
    // 0x44001B20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x44001B24: jr          $ra
    // 0x44001B28: nop

    return;
    // 0x44001B28: nop

;}
